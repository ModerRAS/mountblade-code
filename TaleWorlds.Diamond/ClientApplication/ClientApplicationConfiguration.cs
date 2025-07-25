using System;
using System.Collections.Generic;
using System.IO;
using System.Xml;
using TaleWorlds.Library;

namespace TaleWorlds.Diamond.ClientApplication
{
	// Token: 0x0200004D RID: 77
	public class ClientApplicationConfiguration
	{
		// Token: 0x17000063 RID: 99
		// (get) Token: 0x060001D4 RID: 468 RVA: 0x00005560 File Offset: 0x00003760
		// (set) Token: 0x060001D5 RID: 469 RVA: 0x00005568 File Offset: 0x00003768
		public string Name { get; set; }

		// Token: 0x17000064 RID: 100
		// (get) Token: 0x060001D6 RID: 470 RVA: 0x00005571 File Offset: 0x00003771
		// (set) Token: 0x060001D7 RID: 471 RVA: 0x00005579 File Offset: 0x00003779
		public string InheritFrom { get; set; }

		// Token: 0x17000065 RID: 101
		// (get) Token: 0x060001D8 RID: 472 RVA: 0x00005582 File Offset: 0x00003782
		// (set) Token: 0x060001D9 RID: 473 RVA: 0x0000558A File Offset: 0x0000378A
		public string[] Clients { get; set; }

		// Token: 0x17000066 RID: 102
		// (get) Token: 0x060001DA RID: 474 RVA: 0x00005593 File Offset: 0x00003793
		// (set) Token: 0x060001DB RID: 475 RVA: 0x0000559B File Offset: 0x0000379B
		public SessionProviderType SessionProviderType { get; set; }

		// Token: 0x17000067 RID: 103
		// (get) Token: 0x060001DC RID: 476 RVA: 0x000055A4 File Offset: 0x000037A4
		// (set) Token: 0x060001DD RID: 477 RVA: 0x000055AC File Offset: 0x000037AC
		public ParameterContainer Parameters { get; set; }

		// Token: 0x060001DE RID: 478 RVA: 0x000055B5 File Offset: 0x000037B5
		public ClientApplicationConfiguration()
		{
			this.Name = "NewlyCreated";
			this.InheritFrom = "";
			this.Clients = new string[0];
			this.Parameters = new ParameterContainer();
		}

		// Token: 0x060001DF RID: 479 RVA: 0x000055EA File Offset: 0x000037EA
		private void FillFromBase(ClientApplicationConfiguration baseConfiguration)
		{
			this.SessionProviderType = baseConfiguration.SessionProviderType;
			this.Parameters = baseConfiguration.Parameters.Clone();
		}

		// Token: 0x060001E0 RID: 480 RVA: 0x0000560C File Offset: 0x0000380C
		public static string GetDefaultConfigurationFromFile()
		{
			XmlDocument xmlDocument = new XmlDocument();
			string fileContent = VirtualFolders.GetFileContent(BasePath.Name + "Parameters/ClientProfile.xml");
			if (fileContent == "")
			{
				return "";
			}
			xmlDocument.LoadXml(fileContent);
			return xmlDocument.ChildNodes[0].Attributes["Value"].InnerText;
		}

		// Token: 0x060001E1 RID: 481 RVA: 0x0000566E File Offset: 0x0000386E
		public static void SetDefaultConfigurationCategory(string category)
		{
			ClientApplicationConfiguration._defaultConfigurationCategory = category;
		}

		// Token: 0x060001E2 RID: 482 RVA: 0x00005676 File Offset: 0x00003876
		public void FillFrom(string configurationName)
		{
			if (string.IsNullOrEmpty(ClientApplicationConfiguration._defaultConfigurationCategory))
			{
				ClientApplicationConfiguration._defaultConfigurationCategory = ClientApplicationConfiguration.GetDefaultConfigurationFromFile();
			}
			this.FillFrom(ClientApplicationConfiguration._defaultConfigurationCategory, configurationName);
		}

		// Token: 0x060001E3 RID: 483 RVA: 0x0000569C File Offset: 0x0000389C
		public void FillFrom(string configurationCategory, string configurationName)
		{
			XmlDocument xmlDocument = new XmlDocument();
			if (configurationCategory == "")
			{
				return;
			}
			string fileContent = VirtualFolders.GetFileContent(string.Concat(new string[]
			{
				BasePath.Name,
				"Parameters/ClientProfiles/",
				configurationCategory,
				"/",
				configurationName,
				".xml"
			}));
			if (fileContent == "")
			{
				return;
			}
			xmlDocument.LoadXml(fileContent);
			this.Name = Path.GetFileNameWithoutExtension(configurationName);
			XmlNode firstChild = xmlDocument.FirstChild;
			if (firstChild.Attributes != null && firstChild.Attributes["InheritFrom"] != null)
			{
				this.InheritFrom = firstChild.Attributes["InheritFrom"].InnerText;
				ClientApplicationConfiguration clientApplicationConfiguration = new ClientApplicationConfiguration();
				clientApplicationConfiguration.FillFrom(configurationCategory, this.InheritFrom);
				this.FillFromBase(clientApplicationConfiguration);
			}
			ParameterLoader.LoadParametersInto(string.Concat(new string[]
			{
				"ClientProfiles/",
				configurationCategory,
				"/",
				configurationName,
				".xml"
			}), this.Parameters);
			foreach (object obj in firstChild.ChildNodes)
			{
				XmlNode xmlNode = (XmlNode)obj;
				if (xmlNode.Name == "SessionProvider")
				{
					string innerText = xmlNode.Attributes["Type"].InnerText;
					this.SessionProviderType = (SessionProviderType)Enum.Parse(typeof(SessionProviderType), innerText);
				}
				else if (xmlNode.Name == "Clients")
				{
					List<string> list = new List<string>();
					foreach (object obj2 in xmlNode.ChildNodes)
					{
						string innerText2 = ((XmlNode)obj2).Attributes["Type"].InnerText;
						list.Add(innerText2);
					}
					this.Clients = list.ToArray();
				}
				else
				{
					xmlNode.Name == "Parameters";
				}
			}
		}

		// Token: 0x040000AF RID: 175
		private static string _defaultConfigurationCategory = "";
	}
}
