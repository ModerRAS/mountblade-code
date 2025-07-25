using System;
using System.Runtime.Serialization;

namespace TaleWorlds.Diamond
{
	// Token: 0x02000022 RID: 34
	[DataContract]
	[Serializable]
	public struct SessionKey
	{
		// Token: 0x17000028 RID: 40
		// (get) Token: 0x060000AF RID: 175 RVA: 0x000032D6 File Offset: 0x000014D6
		public Guid Guid
		{
			get
			{
				return this._guid;
			}
		}

		// Token: 0x060000B0 RID: 176 RVA: 0x000032DE File Offset: 0x000014DE
		public SessionKey(Guid guid)
		{
			this._guid = guid;
		}

		// Token: 0x060000B1 RID: 177 RVA: 0x000032E7 File Offset: 0x000014E7
		public SessionKey(byte[] b)
		{
			this._guid = new Guid(b);
		}

		// Token: 0x060000B2 RID: 178 RVA: 0x000032F5 File Offset: 0x000014F5
		public static SessionKey NewGuid()
		{
			return new SessionKey(Guid.NewGuid());
		}

		// Token: 0x060000B3 RID: 179 RVA: 0x00003304 File Offset: 0x00001504
		public override string ToString()
		{
			return this._guid.ToString();
		}

		// Token: 0x060000B4 RID: 180 RVA: 0x00003328 File Offset: 0x00001528
		public byte[] ToByteArray()
		{
			return this._guid.ToByteArray();
		}

		// Token: 0x060000B5 RID: 181 RVA: 0x00003343 File Offset: 0x00001543
		public static bool operator ==(SessionKey a, SessionKey b)
		{
			return a._guid == b._guid;
		}

		// Token: 0x060000B6 RID: 182 RVA: 0x00003356 File Offset: 0x00001556
		public static bool operator !=(SessionKey a, SessionKey b)
		{
			return a._guid != b._guid;
		}

		// Token: 0x060000B7 RID: 183 RVA: 0x0000336C File Offset: 0x0000156C
		public override bool Equals(object o)
		{
			if (o != null && o is SessionKey)
			{
				SessionKey sessionKey = (SessionKey)o;
				return this._guid.Equals(sessionKey.Guid);
			}
			return false;
		}

		// Token: 0x060000B8 RID: 184 RVA: 0x000033A4 File Offset: 0x000015A4
		public override int GetHashCode()
		{
			return this._guid.GetHashCode();
		}

		// Token: 0x17000029 RID: 41
		// (get) Token: 0x060000B9 RID: 185 RVA: 0x000033C5 File Offset: 0x000015C5
		public static SessionKey Empty
		{
			get
			{
				return new SessionKey(Guid.Empty);
			}
		}

		// Token: 0x0400003A RID: 58
		[DataMember]
		private readonly Guid _guid;
	}
}
