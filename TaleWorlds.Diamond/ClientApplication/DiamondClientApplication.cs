using System;
using System.Collections.Generic;
using System.Net;
using System.Reflection;
using TaleWorlds.Diamond.InnerProcess;
using TaleWorlds.Library;
using TaleWorlds.Library.Http;
using TaleWorlds.ServiceDiscovery.Client;

namespace TaleWorlds.Diamond.ClientApplication
{
	// Token: 0x0200004E RID: 78
	public class DiamondClientApplication
	{
		// Token: 0x17000068 RID: 104
		// (get) Token: 0x060001E5 RID: 485 RVA: 0x00005908 File Offset: 0x00003B08
		// (set) Token: 0x060001E6 RID: 486 RVA: 0x00005910 File Offset: 0x00003B10
		public ApplicationVersion ApplicationVersion { get; private set; }

		// Token: 0x17000069 RID: 105
		// (get) Token: 0x060001E7 RID: 487 RVA: 0x00005919 File Offset: 0x00003B19
		public ParameterContainer Parameters
		{
			get
			{
				return this._parameters;
			}
		}

		// Token: 0x1700006A RID: 106
		// (get) Token: 0x060001E8 RID: 488 RVA: 0x00005921 File Offset: 0x00003B21
		// (set) Token: 0x060001E9 RID: 489 RVA: 0x00005929 File Offset: 0x00003B29
		public IReadOnlyDictionary<string, string> ProxyAddressMap { get; private set; }

		// Token: 0x060001EA RID: 490 RVA: 0x00005934 File Offset: 0x00003B34
		public DiamondClientApplication(ApplicationVersion applicationVersion, ParameterContainer parameters)
		{
			this.ApplicationVersion = applicationVersion;
			this._parameters = parameters;
			this._clientApplicationObjects = new Dictionary<string, DiamondClientApplicationObject>();
			this._clientObjects = new Dictionary<string, IClient>();
			this.ProxyAddressMap = new Dictionary<string, string>();
			ServicePointManager.DefaultConnectionLimit = 1000;
			ServicePointManager.Expect100Continue = false;
		}

		// Token: 0x060001EB RID: 491 RVA: 0x00005986 File Offset: 0x00003B86
		public DiamondClientApplication(ApplicationVersion applicationVersion) : this(applicationVersion, new ParameterContainer())
		{
		}

		// Token: 0x060001EC RID: 492 RVA: 0x00005994 File Offset: 0x00003B94
		public object GetObject(string name)
		{
			DiamondClientApplicationObject result;
			this._clientApplicationObjects.TryGetValue(name, out result);
			return result;
		}

		// Token: 0x060001ED RID: 493 RVA: 0x000059B1 File Offset: 0x00003BB1
		public void AddObject(string name, DiamondClientApplicationObject applicationObject)
		{
			this._clientApplicationObjects.Add(name, applicationObject);
		}

		// Token: 0x060001EE RID: 494 RVA: 0x000059C0 File Offset: 0x00003BC0
		public void Initialize(ClientApplicationConfiguration applicationConfiguration)
		{
			this._parameters = applicationConfiguration.Parameters;
			foreach (string clientConfiguration in applicationConfiguration.Clients)
			{
				this.CreateClient(clientConfiguration, applicationConfiguration.SessionProviderType);
			}
		}

		// Token: 0x060001EF RID: 495 RVA: 0x00005A00 File Offset: 0x00003C00
		private void CreateClient(string clientConfiguration, SessionProviderType sessionProviderType)
		{
			Type type = DiamondClientApplication.FindType(clientConfiguration);
			object obj = this.CreateClientSessionProvider(clientConfiguration, type, sessionProviderType, this._parameters);
			IClient value = (IClient)Activator.CreateInstance(type, new object[]
			{
				this,
				obj
			});
			this._clientObjects.Add(clientConfiguration, value);
		}

		// Token: 0x060001F0 RID: 496 RVA: 0x00005A4C File Offset: 0x00003C4C
		public object CreateClientSessionProvider(string clientName, Type clientType, SessionProviderType sessionProviderType, ParameterContainer parameters)
		{
			object result;
			if (sessionProviderType == SessionProviderType.Rest || sessionProviderType == SessionProviderType.ThreadedRest)
			{
				Type type = ((sessionProviderType == SessionProviderType.Rest) ? typeof(GenericRestSessionProvider<>) : typeof(GenericThreadedRestSessionProvider<>)).MakeGenericType(new Type[]
				{
					clientType
				});
				string text;
				parameters.TryGetParameter(clientName + ".Address", out text);
				if (ServiceAddress.IsServiceAddress(text))
				{
					string serviceDiscoveryAddress;
					parameters.TryGetParameter(clientName + ".ServiceDiscovery.Address", out serviceDiscoveryAddress);
					ServiceAddressManager.ResolveAddress(serviceDiscoveryAddress, ref text);
				}
				string text2 = clientName + ".Proxy.";
				Dictionary<string, string> dictionary = new Dictionary<string, string>();
				foreach (KeyValuePair<string, string> keyValuePair in parameters.Iterator)
				{
					if (keyValuePair.Key.StartsWith(text2) && keyValuePair.Key.Length > text2.Length)
					{
						dictionary[keyValuePair.Key.Substring(text2.Length)] = keyValuePair.Value;
					}
				}
				this.ProxyAddressMap = dictionary;
				string text3;
				if (dictionary.TryGetValue(text, out text3))
				{
					text = text3;
				}
				string name;
				IHttpDriver httpDriver;
				if (parameters.TryGetParameter(clientName + ".HttpDriver", out name))
				{
					httpDriver = HttpDriverManager.GetHttpDriver(name);
				}
				else
				{
					httpDriver = HttpDriverManager.GetDefaultHttpDriver();
				}
				result = Activator.CreateInstance(type, new object[]
				{
					text,
					httpDriver
				});
			}
			else
			{
				if (sessionProviderType != SessionProviderType.InnerProcess)
				{
					throw new NotImplementedException("Other session provider types are not supported yet.");
				}
				InnerProcessManager innerProcessManager = ((InnerProcessManagerClientObject)this.GetObject("InnerProcessManager")).InnerProcessManager;
				Type type2 = typeof(GenericInnerProcessSessionProvider<>).MakeGenericType(new Type[]
				{
					clientType
				});
				ushort num;
				parameters.TryGetParameterAsUInt16(clientName + ".Port", out num);
				result = Activator.CreateInstance(type2, new object[]
				{
					innerProcessManager,
					num
				});
			}
			return result;
		}

		// Token: 0x060001F1 RID: 497 RVA: 0x00005C3C File Offset: 0x00003E3C
		private static Assembly[] GetDiamondAssemblies()
		{
			List<Assembly> list = new List<Assembly>();
			Assembly assembly = typeof(PeerId).Assembly;
			Assembly[] assemblies = AppDomain.CurrentDomain.GetAssemblies();
			list.Add(assembly);
			foreach (Assembly assembly2 in assemblies)
			{
				AssemblyName[] referencedAssemblies = assembly2.GetReferencedAssemblies();
				for (int j = 0; j < referencedAssemblies.Length; j++)
				{
					if (referencedAssemblies[j].ToString() == assembly.GetName().ToString())
					{
						list.Add(assembly2);
						break;
					}
				}
			}
			return list.ToArray();
		}

		// Token: 0x060001F2 RID: 498 RVA: 0x00005CCC File Offset: 0x00003ECC
		private static Type FindType(string name)
		{
			Assembly[] diamondAssemblies = DiamondClientApplication.GetDiamondAssemblies();
			Type result = null;
			Assembly[] array = diamondAssemblies;
			for (int i = 0; i < array.Length; i++)
			{
				foreach (Type type in array[i].GetTypesSafe(null))
				{
					if (type.Name == name)
					{
						result = type;
					}
				}
			}
			return result;
		}

		// Token: 0x060001F3 RID: 499 RVA: 0x00005D48 File Offset: 0x00003F48
		public T GetClient<T>(string name) where T : class, IClient
		{
			IClient client;
			if (this._clientObjects.TryGetValue(name, out client))
			{
				return client as T;
			}
			return default(T);
		}

		// Token: 0x060001F4 RID: 500 RVA: 0x00005D7C File Offset: 0x00003F7C
		public void Update()
		{
			foreach (IClient client in this._clientObjects.Values)
			{
			}
		}

		// Token: 0x040000B1 RID: 177
		private ParameterContainer _parameters;

		// Token: 0x040000B2 RID: 178
		private Dictionary<string, DiamondClientApplicationObject> _clientApplicationObjects;

		// Token: 0x040000B3 RID: 179
		private Dictionary<string, IClient> _clientObjects;
	}
}
