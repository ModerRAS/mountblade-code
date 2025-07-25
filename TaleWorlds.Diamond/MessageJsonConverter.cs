﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json.Serialization;

namespace TaleWorlds.Diamond
{
	// Token: 0x0200001C RID: 28
	public class MessageJsonConverter : JsonConverter
	{
		// Token: 0x0600008A RID: 138 RVA: 0x00002CF4 File Offset: 0x00000EF4
		public override bool CanConvert(Type objectType)
		{
			return typeof(Message).IsAssignableFrom(objectType);
		}

		// Token: 0x0600008B RID: 139 RVA: 0x00002D08 File Offset: 0x00000F08
		public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer)
		{
			serializer.Error += this.OnSerializerError;
			JObject jobject = JObject.Load(reader);
			string text = (string)jobject["_type"];
			Type type;
			if (text.StartsWith("Messages.") && MessageJsonConverter._knownTypes.TryGetValue(text, out type))
			{
				Message message = (Message)Activator.CreateInstance(type);
				serializer.Populate(jobject.CreateReader(), message);
				return message;
			}
			return null;
		}

		// Token: 0x17000020 RID: 32
		// (get) Token: 0x0600008C RID: 140 RVA: 0x00002D79 File Offset: 0x00000F79
		public override bool CanWrite
		{
			get
			{
				return true;
			}
		}

		// Token: 0x0600008D RID: 141 RVA: 0x00002D7C File Offset: 0x00000F7C
		private void OnSerializerError(object sender, ErrorEventArgs e)
		{
			if (e.ErrorContext != null)
			{
				Exception error = e.ErrorContext.Error;
			}
		}

		// Token: 0x0600008E RID: 142 RVA: 0x00002D94 File Offset: 0x00000F94
		public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer)
		{
			JProperty content = new JProperty("_type", value.GetType().FullName);
			JObject jobject = new JObject();
			jobject.Add(content);
			foreach (PropertyInfo propertyInfo in value.GetType().GetProperties())
			{
				if (propertyInfo.CanRead)
				{
					object value2 = propertyInfo.GetValue(value);
					if (value2 != null)
					{
						jobject.Add(propertyInfo.Name, JToken.FromObject(value2, serializer));
					}
				}
			}
			jobject.WriteTo(writer, Array.Empty<JsonConverter>());
		}

		// Token: 0x04000031 RID: 49
		private static readonly Dictionary<string, Type> _knownTypes = (from t in (from a in AppDomain.CurrentDomain.GetAssemblies()
		where !a.GlobalAssemblyCache
		select a).SelectMany((Assembly a) => a.GetTypes())
		where t.IsSubclassOf(typeof(Message))
		select t).ToDictionary((Type item) => item.FullName, (Type item) => item);
	}
}
