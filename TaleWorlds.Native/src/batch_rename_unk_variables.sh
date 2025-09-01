#!/bin/bash

# 批量重命名02_core_engine.c文件中的UNK_变量
# 根据上下文分析，为变量赋予语义化名称

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 创建备份
cp "$FILE" "$FILE.backup"

# 第一批：EventDispatcher相关变量 (1672-1720行附近)
sed -i 's/undefined UNK_180a258f8;/undefined EventDispatcherData19;/g' "$FILE"
sed -i 's/undefined UNK_180a259c0;/undefined EventDispatcherData20;/g' "$FILE"
sed -i 's/undefined UNK_180a259c8;/undefined EventDispatcherData21;/g' "$FILE"
sed -i 's/undefined UNK_180a259e0;/undefined EventDispatcherData22;/g' "$FILE"
sed -i 's/undefined UNK_180a25a10;/undefined EventDispatcherData23;/g' "$FILE"
sed -i 's/undefined UNK_180a25998;/undefined EventDispatcherData24;/g' "$FILE"
sed -i 's/undefined UNK_180a259a8;/undefined EventDispatcherData25;/g' "$FILE"
sed -i 's/undefined UNK_180a25a74;/undefined EventDispatcherData26;/g' "$FILE"
sed -i 's/undefined UNK_180a25a28;/undefined EventDispatcherData27;/g' "$FILE"
sed -i 's/undefined UNK_180a25a80;/undefined EventDispatcherData28;/g' "$FILE"

echo "第一批EventDispatcher变量重命名完成"

# 第二批：SystemMemory相关变量
sed -i 's/undefined UNK_180a25a98;/undefined SystemMemoryDataTemplateA;/g' "$FILE"
sed -i 's/undefined UNK_180a25a50;/undefined SystemMemoryDataTemplateB;/g' "$FILE"
sed -i 's/undefined UNK_180a25a60;/undefined SystemMemoryDataTemplateC;/g' "$FILE"
sed -i 's/undefined UNK_180a25aa0;/undefined SystemMemoryDataTemplateD;/g' "$FILE"
sed -i 's/undefined UNK_180a25ab0;/undefined SystemMemoryDataTemplateE;/g' "$FILE"
sed -i 's/undefined UNK_180a25ae8;/undefined SystemMemoryDataTemplateF;/g' "$FILE"
sed -i 's/undefined UNK_180a25af0;/undefined SystemMemoryDataTemplateG;/g' "$FILE"
sed -i 's/undefined UNK_180a25b00;/undefined SystemMemoryDataTemplateH;/g' "$FILE"
sed -i 's/undefined UNK_180a25ab8;/undefined SystemMemoryDataTemplateI;/g' "$FILE"
sed -i 's/undefined UNK_180a25ac8;/undefined SystemMemoryDataTemplateJ;/g' "$FILE"

echo "第二批SystemMemory变量重命名完成"

# 第三批：CoreEngine相关变量
sed -i 's/undefined UNK_180a25b10;/undefined CoreEngineDataTemplateA;/g' "$FILE"
sed -i 's/undefined UNK_180a25b20;/undefined CoreEngineDataTemplateB;/g' "$FILE"
sed -i 's/undefined UNK_180a25b30;/undefined CoreEngineDataTemplateC;/g' "$FILE"
sed -i 's/undefined UNK_180a25b40;/undefined CoreEngineDataTemplateD;/g' "$FILE"
sed -i 's/undefined UNK_180a25b48;/undefined CoreEngineDataTemplateE;/g' "$FILE"
sed -i 's/undefined UNK_180a25b60;/undefined CoreEngineDataTemplateF;/g' "$FILE"
sed -i 's/undefined UNK_180a25b6c;/undefined CoreEngineDataTemplateG;/g' "$FILE"
sed -i 's/undefined UNK_180a25b80;/undefined CoreEngineDataTemplateH;/g' "$FILE"
sed -i 's/undefined UNK_180a25b88;/undefined CoreEngineDataTemplateI;/g' "$FILE"
sed -i 's/undefined UNK_180a25bc8;/undefined CoreEngineDataTemplateJ;/g' "$FILE"

echo "第三批CoreEngine变量重命名完成"

# 第四批：SystemConfig相关变量
sed -i 's/undefined UNK_180a25bd4;/undefined SystemConfigDataTemplateA;/g' "$FILE"
sed -i 's/undefined UNK_180a25be0;/undefined SystemConfigDataTemplateB;/g' "$FILE"
sed -i 's/undefined UNK_180a25c58;/undefined SystemConfigDataTemplateC;/g' "$FILE"
sed -i 's/undefined UNK_180a25c84;/undefined SystemConfigDataTemplateD;/g' "$FILE"
sed -i 's/undefined UNK_180a25c90;/undefined SystemConfigDataTemplateE;/g' "$FILE"
sed -i 's/undefined UNK_180a2b468;/undefined SystemConfigDataTemplateF;/g' "$FILE"
sed -i 's/undefined UNK_180a25c04;/undefined SystemConfigDataTemplateG;/g' "$FILE"
sed -i 's/undefined UNK_180a25c10;/undefined SystemConfigDataTemplateH;/g' "$FILE"
sed -i 's/undefined UNK_180a25c20;/undefined SystemConfigDataTemplateI;/g' "$FILE"
sed -i 's/undefined UNK_180a25ca0;/undefined SystemConfigDataTemplateJ;/g' "$FILE"

echo "第四批SystemConfig变量重命名完成"

# 第五批：SystemResource相关变量
sed -i 's/undefined UNK_180a25cdc;/undefined SystemResourceDataTemplateA;/g' "$FILE"
sed -i 's/undefined UNK_180a0dcf8;/undefined SystemResourceDataTemplateB;/g' "$FILE"
sed -i 's/undefined UNK_180a25bfc;/undefined SystemResourceDataTemplateC;/g' "$FILE"
sed -i 's/undefined UNK_180a25ce8;/undefined SystemResourceDataTemplateD;/g' "$FILE"
sed -i 's/undefined UNK_180a25cf8;/undefined SystemResourceDataTemplateE;/g' "$FILE"
sed -i 's/undefined UNK_180a25ca8;/undefined SystemResourceDataTemplateF;/g' "$FILE"
sed -i 's/undefined UNK_180a25cc0;/undefined SystemResourceDataTemplateG;/g' "$FILE"
sed -i 's/undefined UNK_180a25cd0;/undefined SystemResourceDataTemplateH;/g' "$FILE"
sed -i 's/undefined UNK_180a25d78;/undefined SystemResourceDataTemplateI;/g' "$FILE"
sed -i 's/undefined UNK_180a25d90;/undefined SystemResourceDataTemplateJ;/g' "$FILE"

echo "第五批SystemResource变量重命名完成"

# 第六批：SystemData相关变量
sed -i 's/undefined UNK_180a25d98;/undefined SystemDataTemplateA;/g' "$FILE"
sed -i 's/undefined UNK_180a25da8;/undefined SystemDataTemplateB;/g' "$FILE"
sed -i 's/undefined UNK_180a25e58;/undefined SystemDataTemplateC;/g' "$FILE"
sed -i 's/undefined UNK_180a25e70;/undefined SystemDataTemplateD;/g' "$FILE"
sed -i 's/undefined UNK_180a25e80;/undefined SystemDataTemplateE;/g' "$FILE"
sed -i 's/undefined UNK_180a25e90;/undefined SystemDataTemplateF;/g' "$FILE"
sed -i 's/undefined UNK_180a25ebc;/undefined SystemDataTemplateG;/g' "$FILE"
sed -i 's/undefined UNK_180a25ec4;/undefined SystemDataTemplateH;/g' "$FILE"
sed -i 's/undefined UNK_180a25ed0;/undefined SystemDataTemplateI;/g' "$FILE"
sed -i 's/undefined UNK_180a25ee0;/undefined SystemDataTemplateJ;/g' "$FILE"

echo "第六批SystemData变量重命名完成"

# 第七批：SystemBuffer相关变量
sed -i 's/undefined UNK_180a25ef0;/undefined SystemBufferDataTemplateA;/g' "$FILE"
sed -i 's/undefined UNK_180a25ef8;/undefined SystemBufferDataTemplateB;/g' "$FILE"
sed -i 's/undefined UNK_180a25900;/undefined SystemBufferDataTemplateC;/g' "$FILE"
sed -i 's/undefined UNK_180a25ad0;/undefined SystemBufferDataTemplateD;/g' "$FILE"
sed -i 's/undefined UNK_180a25a6c;/undefined SystemBufferDataTemplateE;/g' "$FILE"

echo "第七批SystemBuffer变量重命名完成"

echo "所有变量重命名完成！"
echo "备份文件保存在: $FILE.backup"