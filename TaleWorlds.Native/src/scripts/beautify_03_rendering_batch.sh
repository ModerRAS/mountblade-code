#!/bin/bash

# 03_rendering.c 文件函数名美化脚本
# 将高频出现的FUN_函数替换为语义化名称

# 渲染材质属性节点处理函数
sed -i 's/FUN_180240430/ProcessRenderMaterialPropertyNode/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180299eb0/CalculateRenderMaterialPropertyValue/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180299f00/ValidateRenderMaterialPropertyValue/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180299f50/InitializeRenderMaterialPropertyValue/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180299fb0/HandleRenderMaterialPropertyValue/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a010/RetrieveRenderMaterialPropertyValue/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a070/ConfigureRenderMaterialPropertyValue/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a0d0/ModifyRenderMaterialPropertyValue/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a130/SubmitRenderMaterialPropertyValue/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a190/SynchronizeRenderMaterialPropertyValue/g' TaleWorlds.Native/src/03_rendering.c

# 渲染材质属性缓冲区管理函数
sed -i 's/FUN_18029a1f0/ManageRenderMaterialPropertyBuffer/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a250/AllocateRenderMaterialPropertyMemory/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a2b0/FreeRenderMaterialPropertyMemory/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a310/CopyRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a370/MoveRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a3d0/CompareRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a430/ClearRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a490/ResetRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a4f0/VerifyRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c

# 渲染材质属性数据处理函数
sed -i 's/FUN_18029a550/SerializeRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a5b0/DeserializeRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a610/CompressRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a670/DecompressRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a6d0/EncryptRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a730/DecryptRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a790/ChecksumRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a7f0/BackupRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a850/RestoreRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a8b0/MigrateRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c

# 渲染材质属性数据转换函数
sed -i 's/FUN_18029a910/ConvertRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a970/NormalizeRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029a9d0/OptimizeRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029aa30/AnalyzeRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029aa90/ReportRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029aaf0/MonitorRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029ab50/DebugRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029abb0/TestRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029ac10/BenchmarkRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029ac70/ProfileRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c

# 渲染材质属性数据监控函数
sed -i 's/FUN_18029acd0/LogRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029ad30/TraceRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029ad90/MeasureRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029adf0/StatisticsRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029ae50/SummarizeRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029aeb0/VisualizeRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029af10/ExportRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029af70/ImportRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029afd0/SyncRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b030/AsyncProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c

# 渲染材质属性数据批处理函数
sed -i 's/FUN_18029b090/BatchProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b0f0/StreamProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b150/ParallelProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b1b0/DistributedProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b210/CacheProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b270/PrefetchRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b2d0/PrecomputeRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b330/PostprocessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b390/PreprocessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b3f0/RealtimeProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c

# 渲染材质属性数据时序处理函数
sed -i 's/FUN_18029b450/OfflineProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b4b0/InteractiveProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b510/AutoProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b570/ManualProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b5d0/DynamicProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b630/StaticProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b690/RuntimeProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b6f0/CompiletimeProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b750/LinktimeProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b7b0/LoadtimeProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c

# 渲染材质属性数据生命周期处理函数
sed -i 's/FUN_18029b810/UnloadtimeProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b870/InstalltimeProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b8d0/UninstalltimeProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b930/ConfiguretimeProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b990/InitializetimeProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029b9f0/StartuptimeProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029ba50/ShutdowntimeProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029bab0/PausetimeProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029bb10/ResumetimeProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029bb70/CanceltimeProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c

# 渲染材质属性数据异常处理函数
sed -i 's/FUN_18029bbd0/RetrytimeProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029bc30/TimeoutProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029bc90/ErrorProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029bcf0/ExceptionProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029bd50/WarningProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029bdb0/InfoProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029be10/DebugProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029be70/TraceProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029bed0/PerformanceProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029bf30/MemoryProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c

# 渲染材质属性数据硬件处理函数
sed -i 's/FUN_18029bf90/CPUProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18029bff0/GPUProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c

echo "03_rendering.c文件函数名美化完成"