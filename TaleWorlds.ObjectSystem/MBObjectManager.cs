// Decompiled with JetBrains decompiler
// Type: TaleWorlds.ObjectSystem.MBObjectManager
// Assembly: TaleWorlds.ObjectSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D3D76BD5-77F6-4035-88A2-4AF31F9352F6
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.ObjectSystem.dll

using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Xml;
using System.Xml.Linq;
using System.Xml.Schema;
using System.Xml.Xsl;
using TaleWorlds.Library;
using TaleWorlds.ModuleManager;

#nullable disable
namespace TaleWorlds.ObjectSystem
{
  public sealed class MBObjectManager
  {
    internal List<MBObjectManager.IObjectTypeRecord> ObjectTypeRecords = new List<MBObjectManager.IObjectTypeRecord>();
    private List<IObjectManagerHandler> _handlers;

    public static MBObjectManager Instance { get; private set; }

    private MBObjectManager()
    {
    }

    public static MBObjectManager Init()
    {
      MBObjectManager instance = MBObjectManager.Instance;
      MBObjectManager.Instance = new MBObjectManager();
      return MBObjectManager.Instance;
    }

    public void Destroy()
    {
      this.ClearAllObjects();
      MBObjectManager.Instance = (MBObjectManager) null;
    }

    public int NumRegisteredTypes
    {
      get => this.ObjectTypeRecords == null ? 0 : this.ObjectTypeRecords.Count;
    }

    public int MaxRegisteredTypes => 256;

    public void RegisterType<T>(
      string classPrefix,
      string classListPrefix,
      uint typeId,
      bool autoCreateInstance = true,
      bool isTemporary = false)
      where T : MBObjectBase
    {
      if (this.NumRegisteredTypes > this.MaxRegisteredTypes)
        Debug.FailedAssert(new MBTooManyRegisteredTypesException().ToString(), "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.ObjectSystem\\MBObjectManager.cs", nameof (RegisterType), 66);
      this.ObjectTypeRecords.Add((MBObjectManager.IObjectTypeRecord) new MBObjectManager.ObjectTypeRecord<T>(typeId, classPrefix, classListPrefix, autoCreateInstance, isTemporary));
    }

    public bool HasType(Type type)
    {
      if (type.IsSealed)
      {
        foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
        {
          if (objectTypeRecord.ObjectClass == type)
            return true;
        }
      }
      else
      {
        foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
        {
          if (type.IsAssignableFrom(objectTypeRecord.ObjectClass))
            return true;
        }
      }
      return false;
    }

    public string FindRegisteredClassPrefix(Type type)
    {
      foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
      {
        if (objectTypeRecord.ObjectClass == type)
          return objectTypeRecord.ElementName;
      }
      Debug.FailedAssert(type.Name + " could not be found in MBObjectManager objectTypeRecords!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.ObjectSystem\\MBObjectManager.cs", nameof (FindRegisteredClassPrefix), 108);
      return (string) null;
    }

    public Type FindRegisteredType(string classPrefix)
    {
      foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
      {
        if (objectTypeRecord.ElementName == classPrefix)
          return objectTypeRecord.ObjectClass;
      }
      Debug.FailedAssert(classPrefix + " could not be found in MBObjectManager objectTypeRecords!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.ObjectSystem\\MBObjectManager.cs", nameof (FindRegisteredType), 122);
      return (Type) null;
    }

    public T RegisterObject<T>(T obj) where T : MBObjectBase
    {
      MBObjectBase registeredObject;
      this.RegisterObjectInternalWithoutTypeId<T>(obj, false, out registeredObject);
      return registeredObject as T;
    }

    public T RegisterPresumedObject<T>(T obj) where T : MBObjectBase
    {
      MBObjectBase registeredObject;
      this.RegisterObjectInternalWithoutTypeId<T>(obj, true, out registeredObject);
      return registeredObject as T;
    }

    internal void TryRegisterObjectWithoutInitialization(MBObjectBase obj)
    {
      Type type = obj.GetType();
      foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
      {
        if (objectTypeRecord.ObjectClass == type)
        {
          objectTypeRecord.RegisterMBObjectWithoutInitialization(obj);
          return;
        }
      }
      Debug.FailedAssert(obj.GetType().Name + " could not be found in MBObjectManager objectTypeRecords!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.ObjectSystem\\MBObjectManager.cs", nameof (TryRegisterObjectWithoutInitialization), 153);
    }

    private void RegisterObjectInternalWithoutTypeId<T>(
      T obj,
      bool presumed,
      out MBObjectBase registeredObject)
      where T : MBObjectBase
    {
      obj.GetType();
      Type type = typeof (T);
      foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
      {
        if (objectTypeRecord.ObjectClass == type)
        {
          objectTypeRecord.RegisterMBObject((MBObjectBase) obj, presumed, out registeredObject);
          return;
        }
      }
      registeredObject = (MBObjectBase) null;
      Debug.FailedAssert(typeof (T).Name + " could not be found in MBObjectManager objectTypeRecords!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.ObjectSystem\\MBObjectManager.cs", nameof (RegisterObjectInternalWithoutTypeId), 170);
    }

    public void UnregisterObject(MBObjectBase obj)
    {
      if (obj == null)
        return;
      Type type = obj.GetType();
      foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
      {
        if (type == objectTypeRecord.ObjectClass)
        {
          objectTypeRecord.UnregisterMBObject(obj);
          this.AfterUnregisterObject(obj);
          return;
        }
      }
      Debug.FailedAssert("UnregisterObject call for an unregistered object! Type: " + (object) obj.GetType(), "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.ObjectSystem\\MBObjectManager.cs", nameof (UnregisterObject), 192);
    }

    private void AfterUnregisterObject(MBObjectBase obj)
    {
      if (this._handlers == null)
        return;
      foreach (IObjectManagerHandler handler in this._handlers)
        handler.AfterUnregisterObject(obj);
    }

    public T GetObject<T>(Func<T, bool> predicate) where T : MBObjectBase
    {
      Type type = typeof (T);
      if (type.IsSealed)
      {
        foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
        {
          if (objectTypeRecord.ObjectClass == type)
            return ((IEnumerable<T>) objectTypeRecord).FirstOrDefault<T>(predicate);
        }
      }
      else
      {
        foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
        {
          if (type.IsAssignableFrom(objectTypeRecord.ObjectClass))
            return objectTypeRecord.OfType<T>().FirstOrDefault<T>(predicate);
        }
      }
      Debug.FailedAssert(typeof (T).Name + " could not be found in MBObjectManager objectTypeRecords!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.ObjectSystem\\MBObjectManager.cs", nameof (GetObject), 232);
      return default (T);
    }

    public T GetObject<T>(string objectName) where T : MBObjectBase
    {
      Type type = typeof (T);
      if (type.IsSealed)
      {
        foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
        {
          if (objectTypeRecord.ObjectClass == type)
            return ((MBObjectManager.ObjectTypeRecord<T>) objectTypeRecord).GetObject(objectName);
        }
      }
      else
      {
        foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
        {
          if (type.IsAssignableFrom(objectTypeRecord.ObjectClass) && objectTypeRecord.GetMBObject(objectName) is T mbObject)
            return mbObject;
        }
      }
      return default (T);
    }

    public T GetFirstObject<T>() where T : MBObjectBase
    {
      Type type = typeof (T);
      if (type.IsSealed)
      {
        foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
        {
          if (objectTypeRecord.ObjectClass == type)
            return ((MBObjectManager.ObjectTypeRecord<T>) objectTypeRecord).GetFirstObject();
        }
      }
      else
      {
        foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
        {
          if (type.IsAssignableFrom(objectTypeRecord.ObjectClass) && objectTypeRecord.GetFirstMBObject() is T firstMbObject)
            return firstMbObject;
        }
      }
      return default (T);
    }

    public bool ContainsObject<T>(string objectName) where T : MBObjectBase
    {
      Type type = typeof (T);
      if (type.IsSealed)
      {
        foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
        {
          if (objectTypeRecord.ObjectClass == type)
            return objectTypeRecord.ContainsObject(objectName);
        }
      }
      else
      {
        foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
        {
          if (type.IsAssignableFrom(objectTypeRecord.ObjectClass))
          {
            bool flag = objectTypeRecord.ContainsObject(objectName);
            if (flag)
              return flag;
          }
        }
      }
      return false;
    }

    public void RemoveTemporaryTypes()
    {
      for (int index = this.ObjectTypeRecords.Count - 1; index >= 0; --index)
      {
        MBObjectManager.IObjectTypeRecord objectTypeRecord = this.ObjectTypeRecords[index];
        if (objectTypeRecord.IsTemporary)
        {
          foreach (MBObjectBase mbObjectBase in (IEnumerable) objectTypeRecord)
            this.UnregisterObject(mbObjectBase);
          this.ObjectTypeRecords.Remove(objectTypeRecord);
        }
      }
    }

    public void PreAfterLoad()
    {
      foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
        objectTypeRecord.PreAfterLoad();
    }

    public void AfterLoad()
    {
      foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
        objectTypeRecord.AfterLoad();
    }

    public MBObjectBase GetObject(MBGUID objectId)
    {
      foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
      {
        if ((int) objectTypeRecord.TypeNo == (int) objectId.GetTypeIndex())
          return objectTypeRecord.GetMBObject(objectId);
      }
      Debug.FailedAssert(objectId.GetTypeIndex().ToString() + " could not be found in MBObjectManager objectTypeRecords!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.ObjectSystem\\MBObjectManager.cs", nameof (GetObject), 391);
      return (MBObjectBase) null;
    }

    public MBObjectBase GetObject(string typeName, string objectName)
    {
      foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
      {
        if (objectTypeRecord.ElementName == typeName)
          return objectTypeRecord.GetMBObject(objectName);
      }
      Debug.FailedAssert(typeName + " could not be found in MBObjectManager objectTypeRecords!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.ObjectSystem\\MBObjectManager.cs", nameof (GetObject), 406);
      return (MBObjectBase) null;
    }

    private MBObjectBase GetPresumedObject(string typeName, string objectName, bool isInitialize = false)
    {
      foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
      {
        if (objectTypeRecord.ElementName == typeName)
        {
          MBObjectBase mbObject = objectTypeRecord.GetMBObject(objectName);
          if (mbObject != null)
            return mbObject;
          MBObjectBase mbObjectBase = objectTypeRecord.AutoCreate ? objectTypeRecord.CreatePresumedMBObject(objectName) : throw new MBCanNotCreatePresumedObjectException();
          MBObjectBase registeredObject;
          objectTypeRecord.RegisterMBObject(mbObjectBase, true, out registeredObject);
          return registeredObject;
        }
      }
      Debug.FailedAssert(typeName + " could not be found in MBObjectManager objectTypeRecords!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.ObjectSystem\\MBObjectManager.cs", nameof (GetPresumedObject), 434);
      return (MBObjectBase) null;
    }

    public MBReadOnlyList<T> GetObjectTypeList<T>() where T : MBObjectBase
    {
      Type type = typeof (T);
      if (type.IsSealed)
      {
        foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
        {
          if (objectTypeRecord.ObjectClass == type)
            return ((MBObjectManager.ObjectTypeRecord<T>) objectTypeRecord).GetObjectsList();
        }
        Debug.FailedAssert(typeof (T).Name + " could not be found in MBObjectManager objectTypeRecords!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.ObjectSystem\\MBObjectManager.cs", nameof (GetObjectTypeList), 471);
        return (MBReadOnlyList<T>) null;
      }
      MBList<T> objectTypeList = new MBList<T>();
      foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
      {
        if (type.IsAssignableFrom(objectTypeRecord.ObjectClass))
        {
          foreach (object obj in objectTypeRecord.GetList())
            objectTypeList.Add((T) obj);
        }
      }
      return (MBReadOnlyList<T>) objectTypeList;
    }

    public IList<MBObjectBase> CreateObjectTypeList(Type objectClassType)
    {
      foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
      {
        if (objectTypeRecord.ObjectClass == objectClassType)
        {
          List<MBObjectBase> objectTypeList = new List<MBObjectBase>();
          foreach (object obj in (IEnumerable) objectTypeRecord)
          {
            MBObjectBase mbObjectBase = obj as MBObjectBase;
            objectTypeList.Add(mbObjectBase);
          }
          return (IList<MBObjectBase>) objectTypeList;
        }
      }
      return (IList<MBObjectBase>) null;
    }

 public void LoadXML(
    string id,                           // XML的ID，标识要加载的XML
    bool isDevelopment,                  // 是否处于开发环境
    string gameType,                     // 游戏类型，决定是否加载与该类型相关的XML
    bool skipXmlFilterForEditor = false) // 编辑器中是否跳过XML过滤，默认值为false
{
    // 判断是否跳过游戏类型检查，如果是开发环境或skipXmlFilterForEditor为true，则跳过
    bool ignoreGameTypeInclusionCheck = skipXmlFilterForEditor | isDevelopment;

    // 获取合并后的XML文档，传入ID、是否跳过类型检查和游戏类型
    XmlDocument mergedXmlForManaged = MBObjectManager.GetMergedXmlForManaged(id, false, ignoreGameTypeInclusionCheck, gameType);
    
    try
    {
        // 加载合并后的XML文档
        this.LoadXml(mergedXmlForManaged, isDevelopment);
    }
    catch (Exception ex)
    {
        // 捕获并忽略异常
    }
}

public static XmlDocument GetMergedXmlForManaged(
    string id,                            // XML的ID
    bool skipValidation,                  // 是否跳过XML验证
    bool ignoreGameTypeInclusionCheck = true, // 是否忽略游戏类型包含检查，默认值为true
    string gameType = "")                 // 游戏类型
	{
		// 用于存储待合并的XML文件路径和对应的XSD路径的列表
		List<Tuple<string, string>> toBeMerged = new List<Tuple<string, string>>();
		// 存储XSLT路径的列表
		List<string> xsltList = new List<string>();

		// 遍历XmlResource中的XML信息列表
		foreach (MbObjectXmlInformation xmlInformation in XmlResource.XmlInformationList)
		{
			// 如果XML信息的ID匹配并且满足游戏类型的包含检查条件
			if (xmlInformation.Id == id && (ignoreGameTypeInclusionCheck || xmlInformation.GameTypesIncluded.Count == 0 || xmlInformation.GameTypesIncluded.Contains(gameType)))
			{
				// 获取XSD和XML文件路径
				string xsdPath = ModuleHelper.GetXsdPath(xmlInformation.Id);
				string xmlPath = ModuleHelper.GetXmlPath(xmlInformation.ModuleName, xmlInformation.Name);
				
				// 如果XML文件存在，则将其加入合并列表
				if (File.Exists(xmlPath))
				{
					toBeMerged.Add(Tuple.Create<string, string>(ModuleHelper.GetXmlPath(xmlInformation.ModuleName, xmlInformation.Name), xsdPath));
					// 处理XSLT路径并将其添加到XSLT列表
					MBObjectManager.HandleXsltList(ModuleHelper.GetXsltPath(xmlInformation.ModuleName, xmlInformation.Name), ref xsltList);
				}
				else
				{
					// 如果XML文件路径对应的文件夹存在，查找该文件夹中的所有XML文件
					string path = xmlPath.Replace(".xml", "");
					if (Directory.Exists(path))
					{
						foreach (FileInfo file in new DirectoryInfo(path).GetFiles("*.xml"))
						{
							// 将每个XML文件路径加入待合并列表
							string str = path + "/" + file.Name;
							toBeMerged.Add(Tuple.Create<string, string>(str, xsdPath));
							// 处理XSLT路径并将其添加到XSLT列表
							MBObjectManager.HandleXsltList(str.Replace(".xml", ".xsl"), ref xsltList);
						}
					}
					else
					{
						// 如果路径不存在，则添加空字符串并处理XSLT
						toBeMerged.Add(Tuple.Create<string, string>("", ""));
						MBObjectManager.HandleXsltList(ModuleHelper.GetXsltPath(xmlInformation.ModuleName, xmlInformation.Name), ref xsltList);
					}
				}
			}
		}
		// 创建并返回合并后的XML文件
		return MBObjectManager.CreateMergedXmlFile(toBeMerged, xsltList, skipValidation);
	}


 public static XmlDocument GetMergedXmlForNative(string id, out List<string> usedPaths)
{
    // 初始化返回的已使用路径列表
    usedPaths = new List<string>();

    // 用于存储待合并的XML文件路径和对应的XSD路径的列表
    List<Tuple<string, string>> toBeMerged = new List<Tuple<string, string>>();

    // 存储XSLT文件路径的列表
    List<string> xsltList = new List<string>();

    // 遍历XmlResource中的MbprojXmls列表
    foreach (MbObjectXmlInformation mbprojXml in XmlResource.MbprojXmls)
    {
        // 如果该MbprojXml的ID匹配
        if (mbprojXml.Id == id)
        {
            // 获取该XML文件的路径
            string xmlPathForNative = ModuleHelper.GetXmlPathForNative(mbprojXml.ModuleName, mbprojXml.Name);
            
            // 如果该路径下的XML文件存在
            if (File.Exists(xmlPathForNative))
            {
                // 将该路径添加到已使用路径列表
                usedPaths.Add(ModuleHelper.GetXmlPathForNativeWBase(mbprojXml.ModuleName, mbprojXml.Name));

                // 将该XML文件路径和空字符串（XSD路径为空）加入待合并列表
                toBeMerged.Add(Tuple.Create<string, string>(xmlPathForNative, string.Empty));
            }
            else
            {
                // 如果该路径下的XML文件不存在，则添加空的路径项
                toBeMerged.Add(Tuple.Create<string, string>("", ""));
            }

            // 处理与XML文件相关的XSLT文件，并将XSLT文件路径添加到xsltList中
            MBObjectManager.HandleXsltList(ModuleHelper.GetXsltPathForNative(mbprojXml.ModuleName, mbprojXml.Name), ref xsltList);
        }
    }

    // 调用CreateMergedXmlFile方法将待合并的XML文件合并并返回最终的XML文档
    return MBObjectManager.CreateMergedXmlFile(toBeMerged, xsltList, true);
}

private static bool HandleXsltList(string xslPath, ref List<string> xsltList)
{
    // 为了避免路径错误，尝试路径后缀加上“t”后缀的文件
    string path = xslPath + "t";

    // 如果XSLT路径对应的文件存在，则将其路径添加到XSLT列表
    if (File.Exists(xslPath))
    {
        xsltList.Add(xslPath);
        return true;
    }

    // 如果带“t”后缀的XSLT文件存在，则将其路径添加到XSLT列表
    if (File.Exists(path))
    {
        xsltList.Add(path);
        return true;
    }

    // 如果都不存在，添加空字符串并返回false
    xsltList.Add("");
    return false;
}


    public static XmlDocument CreateMergedXmlFile(
      List<Tuple<string, string>> toBeMerged,
      List<string> xsltList,
      bool skipValidation)
    {
      XmlDocument mergedXmlFile = MBObjectManager.CreateDocumentFromXmlFile(toBeMerged[0].Item1, toBeMerged[0].Item2, skipValidation);
      for (int index = 1; index < toBeMerged.Count; ++index)
      {
        if (xsltList[index] != "")
          mergedXmlFile = MBObjectManager.ApplyXslt(xsltList[index], mergedXmlFile);
        if (toBeMerged[index].Item1 != "")
        {
          XmlDocument documentFromXmlFile = MBObjectManager.CreateDocumentFromXmlFile(toBeMerged[index].Item1, toBeMerged[index].Item2, skipValidation);
          mergedXmlFile = MBObjectManager.MergeTwoXmls(mergedXmlFile, documentFromXmlFile);
        }
      }
      return mergedXmlFile;
    }

    public static XmlDocument ApplyXslt(string xsltPath, XmlDocument baseDocument)
    {
      XmlReader input = (XmlReader) new XmlNodeReader((XmlNode) baseDocument);
      XslCompiledTransform compiledTransform = new XslCompiledTransform();
      compiledTransform.Load(xsltPath);
      XmlDocument xmlDocument = new XmlDocument(baseDocument.CreateNavigator().NameTable);
      using (XmlWriter results = xmlDocument.CreateNavigator().AppendChild())
      {
        compiledTransform.Transform(input, results);
        results.Close();
      }
      return xmlDocument;
    }

    public static XmlDocument MergeTwoXmls(XmlDocument xmlDocument1, XmlDocument xmlDocument2)
    {
      XDocument xdocument = MBObjectManager.ToXDocument(xmlDocument1);
      xdocument.Root.Add((object) MBObjectManager.ToXDocument(xmlDocument2).Root.Elements());
      return MBObjectManager.ToXmlDocument(xdocument);
    }

    public static XDocument ToXDocument(XmlDocument xmlDocument)
    {
      using (XmlNodeReader reader = new XmlNodeReader((XmlNode) xmlDocument))
      {
        try
        {
          int content = (int) reader.MoveToContent();
          return XDocument.Load((XmlReader) reader);
        }
        catch (Exception ex)
        {
          Debug.Print(ex.Message);
          throw;
        }
      }
    }

    public static XmlDocument ToXmlDocument(XDocument xDocument)
    {
      XmlDocument xmlDocument = new XmlDocument();
      using (xDocument.CreateReader())
        xmlDocument.Load(xDocument.CreateReader());
      return xmlDocument;
    }

    public void LoadOneXmlFromFile(string xmlPath, string xsdPath, bool skipValidation = false)
    {
      try
      {
        this.LoadXml(MBObjectManager.CreateDocumentFromXmlFile(xmlPath, xsdPath, skipValidation));
      }
      catch (Exception ex)
      {
      }
    }

    public XmlDocument LoadXMLFromFileSkipValidation(string xmlPath, string xsdPath)
    {
      try
      {
        return MBObjectManager.CreateDocumentFromXmlFile(xmlPath, xsdPath, true);
      }
      catch
      {
        return (XmlDocument) null;
      }
    }

    private static void LoadXmlWithValidation(
      string xmlPath,
      string xsdPath,
      XmlDocument xmlDocument)
    {
      Debug.Print("opening " + xsdPath);
      XmlSchemaSet schemas = new XmlSchemaSet();
      XmlTextReader schemaDocument = (XmlTextReader) null;
      try
      {
        schemaDocument = new XmlTextReader(xsdPath);
        schemas.Add((string) null, (XmlReader) schemaDocument);
      }
      catch (FileNotFoundException ex)
      {
        Debug.Print("xsd file of " + xmlPath + " could not be found!", color: Debug.DebugColor.Red);
      }
      catch (XmlSchemaException ex)
      {
        Debug.Print("XmlSchemaException, line number: " + (object) ex.LineNumber + ", line position: " + (object) ex.LinePosition + ", SourceSchemaObject: " + (object) ex.SourceSchemaObject);
        Debug.Print("xsd file of " + xmlPath + " could not be read! " + ex.Message, color: Debug.DebugColor.Red);
      }
      catch (ArgumentNullException ex)
      {
        Debug.Print("ArgumentNullException, ParamName: " + ex.ParamName);
        Debug.Print("xsd file of " + xmlPath + " could not be read! " + ex.Message, color: Debug.DebugColor.Red);
      }
      catch (Exception ex)
      {
        Debug.Print("xsd file of " + xmlPath + " could not be read! " + ex.Message, color: Debug.DebugColor.Red);
      }
      XmlReaderSettings settings1 = new XmlReaderSettings();
      settings1.ValidationType = ValidationType.None;
      settings1.Schemas.Add(schemas);
      settings1.ValidationFlags |= XmlSchemaValidationFlags.ReportValidationWarnings;
      settings1.ValidationEventHandler += new System.Xml.Schema.ValidationEventHandler(MBObjectManager.ValidationEventHandler);
      settings1.CloseInput = true;
      try
      {
        XmlReader reader1 = XmlReader.Create(xmlPath, settings1);
        xmlDocument.Load(reader1);
        reader1.Close();
        XmlReaderSettings settings2 = new XmlReaderSettings();
        settings2.ValidationType = ValidationType.Schema;
        settings2.Schemas.Add(schemas);
        settings2.ValidationFlags |= XmlSchemaValidationFlags.ReportValidationWarnings;
        settings2.ValidationEventHandler += new System.Xml.Schema.ValidationEventHandler(MBObjectManager.ValidationEventHandler);
        settings2.CloseInput = true;
        XmlReader reader2 = XmlReader.Create(xmlPath, settings2);
        xmlDocument.Load(reader2);
        reader2.Close();
      }
      catch (Exception ex)
      {
        string localPath = new Uri(xmlDocument.BaseURI).LocalPath;
      }
      schemaDocument?.Close();
    }

    private static void ValidationEventHandler(object sender, ValidationEventArgs e)
    {
      XmlReader xmlReader = (XmlReader) sender;
      string str = string.Empty;
      switch (e.Severity)
      {
        case XmlSeverityType.Error:
          str = str + "Error: " + e.Message;
          break;
        case XmlSeverityType.Warning:
          str = str + "Warning: " + e.Message;
          break;
      }
      Debug.Print(str + "\nNode: " + xmlReader.Name + "  Value: " + xmlReader.Value + "\nLine: " + (object) e.Exception.LineNumber + "\nXML Path: " + xmlReader.BaseURI, color: Debug.DebugColor.Red);
    }

    private static XmlDocument CreateDocumentFromXmlFile(
      string xmlPath,
      string xsdPath,
      bool forceSkipValidation = false)
    {
      Debug.Print("opening " + xmlPath);
      XmlDocument xmlDocument = new XmlDocument();
      StreamReader streamReader = new StreamReader(xmlPath);
      string end = streamReader.ReadToEnd();
      if (!forceSkipValidation)
        MBObjectManager.LoadXmlWithValidation(xmlPath, xsdPath, xmlDocument);
      else
        xmlDocument.LoadXml(end);
      streamReader.Close();
      return xmlDocument;
    }

    public void LoadXml(XmlDocument doc, bool isDevelopment = false)
    {
      int i1 = 0;
      bool flag = false;
      string typeName = (string) null;
      for (; i1 < doc.ChildNodes.Count; ++i1)
      {
        int i2 = i1;
        foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
        {
          if (objectTypeRecord.ElementListName == doc.ChildNodes[i2].Name)
          {
            typeName = objectTypeRecord.ElementName;
            flag = true;
            break;
          }
        }
        if (flag)
          break;
      }
      if (!flag)
        return;
      for (XmlNode node = doc.ChildNodes[i1].ChildNodes[0]; node != null; node = node.NextSibling)
      {
        if (node.NodeType != XmlNodeType.Comment)
        {
          string objectName = node.Attributes["id"].Value;
          MBObjectBase presumedObject = this.GetPresumedObject(typeName, objectName, true);
          presumedObject.Deserialize(this, node);
          presumedObject.AfterInitialized();
        }
      }
    }

    public MBObjectBase CreateObjectFromXmlNode(XmlNode node)
    {
      string name = node.Name;
      foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
      {
        if (objectTypeRecord.ElementName == name)
        {
          string objectName = node.Attributes["id"].Value;
          MBObjectBase presumedObject = this.GetPresumedObject(objectTypeRecord.ElementName, objectName);
          presumedObject.Deserialize(this, node);
          presumedObject.AfterInitialized();
          return presumedObject;
        }
      }
      return (MBObjectBase) null;
    }

    public MBObjectBase CreateObjectWithoutDeserialize(XmlNode node)
    {
      string name = node.Name;
      foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
      {
        if (objectTypeRecord.ElementName == name)
        {
          string objectName = node.Attributes["id"].Value;
          MBObjectBase presumedObject = this.GetPresumedObject(objectTypeRecord.ElementName, objectName);
          presumedObject.Initialize();
          presumedObject.AfterInitialized();
          return presumedObject;
        }
      }
      return (MBObjectBase) null;
    }

    public void UnregisterNonReadyObjects()
    {
      foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
      {
        List<MBObjectBase> source = new List<MBObjectBase>();
        foreach (MBObjectBase mbObjectBase in (IEnumerable) objectTypeRecord)
        {
          if (!mbObjectBase.IsReady)
            source.Add(mbObjectBase);
        }
        if (source.Any<MBObjectBase>())
        {
          foreach (MBObjectBase mbObjectBase in source)
          {
            Debug.Print("Null object reference found with ID: " + mbObjectBase.StringId);
            this.UnregisterObject(mbObjectBase);
          }
        }
      }
    }

    public void ClearAllObjects()
    {
      for (int index = this.ObjectTypeRecords.Count - 1; index >= 0; --index)
      {
        List<MBObjectBase> mbObjectBaseList = new List<MBObjectBase>();
        foreach (MBObjectBase mbObjectBase in (IEnumerable) this.ObjectTypeRecords[index])
          mbObjectBaseList.Add(mbObjectBase);
        foreach (MBObjectBase mbObjectBase in mbObjectBaseList)
        {
          this.ObjectTypeRecords[index].UnregisterMBObject(mbObjectBase);
          this.AfterUnregisterObject(mbObjectBase);
        }
      }
    }

    public void ClearAllObjectsWithType(Type type)
    {
      for (int index = this.ObjectTypeRecords.Count - 1; index >= 0; --index)
      {
        if (this.ObjectTypeRecords[index].ObjectClass == type)
        {
          List<MBObjectBase> mbObjectBaseList = new List<MBObjectBase>();
          foreach (MBObjectBase mbObjectBase in (IEnumerable) this.ObjectTypeRecords[index])
            mbObjectBaseList.Add(mbObjectBase);
          foreach (MBObjectBase mbObjectBase in mbObjectBaseList)
            this.UnregisterObject(mbObjectBase);
        }
      }
    }

    public T ReadObjectReferenceFromXml<T>(string attributeName, XmlNode node) where T : MBObjectBase
    {
      if (node.Attributes[attributeName] == null)
        return default (T);
      string exceptionString = node.Attributes[attributeName].Value;
      string typeName = exceptionString.Split(".".ToCharArray())[0];
      string objectName = !(typeName == exceptionString) ? exceptionString.Split(".".ToCharArray())[1] : throw new MBInvalidReferenceException(exceptionString);
      if (typeName == string.Empty || objectName == string.Empty)
        throw new MBInvalidReferenceException(exceptionString);
      return this.GetPresumedObject(typeName, objectName) as T;
    }

    public MBObjectBase ReadObjectReferenceFromXml(
      string attributeName,
      Type objectType,
      XmlNode node)
    {
      if (node.Attributes[attributeName] == null)
        return (MBObjectBase) null;
      string exceptionString = node.Attributes[attributeName].Value;
      string typeName = exceptionString.Split(".".ToCharArray())[0];
      string objectName = !(typeName == exceptionString) ? exceptionString.Split(".".ToCharArray())[1] : throw new MBInvalidReferenceException(exceptionString);
      if (typeName == string.Empty || objectName == string.Empty)
        throw new MBInvalidReferenceException(exceptionString);
      return this.GetPresumedObject(typeName, objectName);
    }

    public T CreateObject<T>(string stringId) where T : MBObjectBase, new()
    {
      T objectBase = new T();
      objectBase.StringId = stringId;
      this.RegisterObject<T>(objectBase);
      if (this._handlers != null)
      {
        foreach (IObjectManagerHandler handler in this._handlers)
          handler.AfterCreateObject((MBObjectBase) objectBase);
      }
      return objectBase;
    }

    public T CreateObject<T>() where T : MBObjectBase, new()
    {
      return this.CreateObject<T>(typeof (T).Name.ToString() + "_1");
    }

    public void DebugPrint(PrintOutputDelegate printOutput)
    {
      printOutput("-Printing MBObjectManager Debug-");
      foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
        printOutput(objectTypeRecord.DebugBasicDump());
    }

    public void AddHandler(IObjectManagerHandler handler)
    {
      if (this._handlers == null)
        this._handlers = new List<IObjectManagerHandler>();
      this._handlers.Add(handler);
    }

    public void RemoveHandler(IObjectManagerHandler handler) => this._handlers.Remove(handler);

    public string DebugDump()
    {
      string contents = "" + "--------------------------------------\r\n" + "----Printing MBObjectManager Debug----\r\n" + "--------------------------------------\r\n" + "\r\n";
      foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
        contents += objectTypeRecord.DebugDump();
      File.WriteAllText("mbobjectmanagerdump.txt", contents);
      return contents;
    }

    public void ReInitialize()
    {
      foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords.ToList<MBObjectManager.IObjectTypeRecord>())
        objectTypeRecord.ReInitialize();
    }

    public string GetObjectTypeIds()
    {
      string objectTypeIds = "";
      foreach (MBObjectManager.IObjectTypeRecord objectTypeRecord in this.ObjectTypeRecords)
        objectTypeIds = objectTypeIds + (object) objectTypeRecord.TypeNo + " - " + objectTypeRecord.GetType().FullName + "\n";
      return objectTypeIds;
    }

    internal interface IObjectTypeRecord : IEnumerable
    {
      bool AutoCreate { get; }

      string ElementName { get; }

      string ElementListName { get; }

      Type ObjectClass { get; }

      uint TypeNo { get; }

      bool IsTemporary { get; }

      void ReInitialize();

      MBObjectBase CreatePresumedMBObject(string objectName);

      void RegisterMBObject(MBObjectBase obj, bool presumed, out MBObjectBase registeredObject);

      void RegisterMBObjectWithoutInitialization(MBObjectBase obj);

      void UnregisterMBObject(MBObjectBase obj);

      MBObjectBase GetFirstMBObject();

      MBObjectBase GetMBObject(string objId);

      MBObjectBase GetMBObject(MBGUID objId);

      bool ContainsObject(string objId);

      string DebugDump();

      string DebugBasicDump();

      IEnumerable GetList();

      void PreAfterLoad();

      void AfterLoad();
    }

    internal class ObjectTypeRecord<T> : 
      MBObjectManager.IObjectTypeRecord,
      IEnumerable,
      IEnumerable<T>
      where T : MBObjectBase
    {
      private readonly bool _autoCreate;
      private readonly string _elementName;
      private readonly string _elementListName;
      private uint _objCount;
      private readonly uint _typeNo;
      private readonly bool _isTemporary;
      private readonly Dictionary<string, T> _registeredObjects;
      private readonly Dictionary<MBGUID, T> _registeredObjectsWithGuid;

      bool MBObjectManager.IObjectTypeRecord.AutoCreate => this._autoCreate;

      string MBObjectManager.IObjectTypeRecord.ElementName => this._elementName;

      string MBObjectManager.IObjectTypeRecord.ElementListName => this._elementListName;

      Type MBObjectManager.IObjectTypeRecord.ObjectClass => typeof (T);

      uint MBObjectManager.IObjectTypeRecord.TypeNo => this._typeNo;

      bool MBObjectManager.IObjectTypeRecord.IsTemporary => this._isTemporary;

      internal MBList<T> RegisteredObjectsList { get; }

      internal ObjectTypeRecord(
        uint newTypeNo,
        string classPrefix,
        string classListPrefix,
        bool autoCreate,
        bool isTemporary)
      {
        this._typeNo = newTypeNo;
        this._elementName = classPrefix;
        this._elementListName = classListPrefix;
        this._autoCreate = autoCreate;
        this._isTemporary = isTemporary;
        this._registeredObjects = new Dictionary<string, T>();
        this._registeredObjectsWithGuid = new Dictionary<MBGUID, T>();
        this.RegisteredObjectsList = new MBList<T>();
        this._objCount = 0U;
      }

      void MBObjectManager.IObjectTypeRecord.ReInitialize()
      {
        uint num = 0;
        foreach (T registeredObjects in (List<T>) this.RegisteredObjectsList)
        {
          uint subId = registeredObjects.Id.SubId;
          if (subId > num)
            num = subId;
        }
        this._objCount = num + 1U;
      }

      IEnumerator<T> IEnumerable<T>.GetEnumerator() => this.EnumerateElements();

      IEnumerator IEnumerable.GetEnumerator() => (IEnumerator) this.EnumerateElements();

      internal MBGUID GetNewId() => new MBGUID(this._typeNo, ++this._objCount);

      MBObjectBase MBObjectManager.IObjectTypeRecord.CreatePresumedMBObject(string objectName)
      {
        return (MBObjectBase) this.CreatePresumedObject(objectName);
      }

      private T CreatePresumedObject(string objectName)
      {
        T instance = Activator.CreateInstance<T>();
        instance.StringId = objectName;
        instance.IsReady = false;
        instance.IsInitialized = false;
        return instance;
      }

      MBObjectBase MBObjectManager.IObjectTypeRecord.GetMBObject(string objId)
      {
        return (MBObjectBase) this.GetObject(objId);
      }

      MBObjectBase MBObjectManager.IObjectTypeRecord.GetFirstMBObject()
      {
        return (MBObjectBase) this.GetFirstObject();
      }

      internal T GetFirstObject()
      {
        return this.RegisteredObjectsList.Count <= 0 ? default (T) : this.RegisteredObjectsList[0];
      }

      internal T GetObject(string objId)
      {
        T obj;
        this._registeredObjects.TryGetValue(objId, out obj);
        return obj;
      }

      bool MBObjectManager.IObjectTypeRecord.ContainsObject(string objId)
      {
        return this._registeredObjects.ContainsKey(objId);
      }

      public MBObjectBase GetMBObject(MBGUID objId)
      {
        T mbObject = default (T);
        this._registeredObjectsWithGuid.TryGetValue(objId, out mbObject);
        return (MBObjectBase) mbObject;
      }

      void MBObjectManager.IObjectTypeRecord.RegisterMBObjectWithoutInitialization(
        MBObjectBase mbObject)
      {
        T obj = (T) mbObject;
        if (string.IsNullOrEmpty(obj.StringId) || obj.Id.InternalValue == 0U || this._registeredObjects.ContainsKey(obj.StringId))
          return;
        this._registeredObjects.Add(obj.StringId, obj);
        this._registeredObjectsWithGuid.Add(obj.Id, obj);
        this.RegisteredObjectsList.Add(obj);
      }

      void MBObjectManager.IObjectTypeRecord.RegisterMBObject(
        MBObjectBase obj,
        bool presumed,
        out MBObjectBase registeredObject)
      {
        if (obj is T)
          this.RegisterObject(obj as T, presumed, out registeredObject);
        else
          registeredObject = (MBObjectBase) null;
      }

      internal void RegisterObject(T obj, bool presumed, out MBObjectBase registeredObject)
      {
        T obj1;
        if (this._registeredObjects.TryGetValue(obj.StringId, out obj1))
        {
          if ((object) obj1 == (object) obj | presumed)
          {
            registeredObject = (MBObjectBase) obj1;
            return;
          }
          (string str, long _) = this.GetIdParts(obj.StringId);
          if (this._registeredObjects.ContainsKey(obj.StringId))
          {
            long objCount = (long) this._objCount;
            for (obj.StringId = str + objCount.ToString(); this._registeredObjects.ContainsKey(obj.StringId); obj.StringId = str + objCount.ToString())
              ++objCount;
          }
        }
        this._registeredObjects.Add(obj.StringId, obj);
        obj.Id = this.GetNewId();
        this._registeredObjectsWithGuid.Add(obj.Id, obj);
        this.RegisteredObjectsList.Add(obj);
        obj.IsReady = !presumed;
        obj.OnRegistered();
        registeredObject = (MBObjectBase) obj;
      }

      private (string str, long number) GetIdParts(string stringId)
      {
        int index = stringId.Length - 1;
        while (index > 0 && char.IsDigit(stringId[index]))
          --index;
        string str = stringId.Substring(0, index + 1);
        long result = 0;
        if (index < stringId.Length - 1)
          long.TryParse(stringId.Substring(index + 1, stringId.Length - index - 1), out result);
        long num = result;
        return (str, num);
      }

      void MBObjectManager.IObjectTypeRecord.UnregisterMBObject(MBObjectBase obj)
      {
        if (!(obj is T obj1))
          throw new MBIllegalRegisterException();
        this.UnregisterObject(obj1);
      }

      private void UnregisterObject(T obj)
      {
        obj.OnUnregistered();
        if (this._registeredObjects.ContainsKey(obj.StringId) && (object) this._registeredObjects[obj.StringId] == (object) obj)
          this._registeredObjects.Remove(obj.StringId);
        if (this._registeredObjectsWithGuid.ContainsKey(obj.Id) && (object) this._registeredObjectsWithGuid[obj.Id] == (object) obj)
          this._registeredObjectsWithGuid.Remove(obj.Id);
        this.RegisteredObjectsList.Remove(obj);
      }

      internal MBReadOnlyList<T> GetObjectsList() => (MBReadOnlyList<T>) this.RegisteredObjectsList;

      IEnumerable MBObjectManager.IObjectTypeRecord.GetList()
      {
        return (IEnumerable) this.RegisteredObjectsList;
      }

      string MBObjectManager.IObjectTypeRecord.DebugDump()
      {
        string str = "" + "**************************************\r\n" + this._elementName + " " + (object) this._objCount + "\r\n" + "**************************************\r\n" + "\r\n";
        foreach (KeyValuePair<MBGUID, T> keyValuePair in this._registeredObjectsWithGuid)
          str = str + keyValuePair.Key.ToString() + " " + keyValuePair.Value.ToString() + "\r\n";
        return str;
      }

      string MBObjectManager.IObjectTypeRecord.DebugBasicDump()
      {
        return this._elementName + " " + (object) this._objCount;
      }

      private IEnumerator<T> EnumerateElements()
      {
        for (int i = 0; i < this.RegisteredObjectsList.Count; ++i)
          yield return this.RegisteredObjectsList[i];
      }

      void MBObjectManager.IObjectTypeRecord.PreAfterLoad()
      {
        for (int index = this.RegisteredObjectsList.Count - 1; index >= 0; --index)
          this.RegisteredObjectsList[index].PreAfterLoadInternal();
      }

      void MBObjectManager.IObjectTypeRecord.AfterLoad()
      {
        for (int index = this.RegisteredObjectsList.Count - 1; index >= 0; --index)
          this.RegisteredObjectsList[index].AfterLoadInternal();
      }
    }
  }
}
