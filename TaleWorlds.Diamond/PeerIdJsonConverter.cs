using System;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

namespace TaleWorlds.Diamond
{
	// Token: 0x0200001E RID: 30
	public class PeerIdJsonConverter : JsonConverter
	{
		// Token: 0x0600009D RID: 157 RVA: 0x000031B5 File Offset: 0x000013B5
		public override bool CanConvert(Type objectType)
		{
			return typeof(PeerId).IsAssignableFrom(objectType);
		}

		// Token: 0x0600009E RID: 158 RVA: 0x000031C7 File Offset: 0x000013C7
		public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer)
		{
			return PeerId.FromString((string)JObject.Load(reader)["_peerId"]);
		}

		// Token: 0x17000023 RID: 35
		// (get) Token: 0x0600009F RID: 159 RVA: 0x000031E8 File Offset: 0x000013E8
		public override bool CanWrite
		{
			get
			{
				return true;
			}
		}

		// Token: 0x060000A0 RID: 160 RVA: 0x000031EC File Offset: 0x000013EC
		public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer)
		{
			JProperty content = new JProperty("_peerId", ((PeerId)value).ToString());
			new JObject
			{
				content
			}.WriteTo(writer, Array.Empty<JsonConverter>());
		}
	}
}
