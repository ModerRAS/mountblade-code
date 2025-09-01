#!/bin/bash

# 美化99_unmatched_functions.c文件中的变量名和函数名
# 将小写开头的变量名改为PascalCase格式

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 定义替换规则
declare -A replacements=(
    # 资源管理相关
    ["ResourceDatabase"]="ResourceManagementDatabase"
    ["ResourceLoaderState"]="ResourceLoadingState"
    ["ResourceCacheBuffer"]="ResourceCachingBuffer"
    ["ResourceMemoryPool"]="ResourceManagementMemoryPool"
    ["ResourceIndexTable"]="ResourceIndexingTable"
    ["ResourceMetadata"]="ResourceMetadataInformation"
    ["ResourceHandleManager"]="ResourceHandleManagementSystem"
    ["ResourceReferenceCounter"]="ResourceReferenceCountingSystem"
    
    # 事件系统相关
    ["EventSystemInitialize"]="EventSystemInitializationFunction"
    ["EventQueueManager"]="EventQueueManagementSystem"
    ["EventDatabase"]="EventManagementDatabase"
    
    # 任务调度相关
    ["TaskSchedulerInitialize"]="TaskSchedulerInitializationFunction"
    ["TaskQueueManager"]="TaskQueueManagementSystem"
    ["TaskDatabase"]="TaskManagementDatabase"
    ["TaskExecutorState"]="TaskExecutionRuntimeState"
    
    # 日志系统相关
    ["LogSystemInitialize"]="LogSystemInitializationFunction"
    ["LogDatabase"]="LoggingSystemDatabase"
    ["LogManagerState"]="LogManagerRuntimeState"
    
    # 性能监控相关
    ["PerformanceMonitorInitialize"]="PerformanceMonitorInitializationFunction"
    ["PerformanceDataCollector"]="PerformanceDataCollectionSystem"
    ["PerformanceAnalyzer"]="PerformanceAnalysisEngine"
    
    # 场景管理相关
    ["SceneManagerInitialize"]="SceneManagerInitializationFunction"
    ["SceneConfigurationData"]="SceneConfigurationDataStructure"
    ["SceneDatabase"]="SceneManagementDatabase"
    ["SceneObjectPool"]="SceneObjectMemoryPool"
    ["SceneEntityTable"]="SceneEntityDataTable"
    ["SceneComponentManager"]="SceneComponentManagementSystem"
    ["SceneTransformSystem"]="SceneTransformProcessingSystem"
    ["SceneRenderQueue"]="SceneRenderingQueue"
    ["ScenePhysicsWorld"]="ScenePhysicsSimulationWorld"
    ["SceneCollisionSystem"]="SceneCollisionDetectionSystem"
    ["SceneLightingSystem"]="SceneLightingManagementSystem"
    ["SceneCameraManager"]="SceneCameraManagementSystem"
    ["SceneAudioSystem"]="SceneAudioManagementSystem"
    ["SceneNavigationMesh"]="SceneNavigationMeshData"
    ["ScenePathfindingSystem"]="ScenePathfindingSystem"
    ["SceneAnimationSystem"]="SceneAnimationManagementSystem"
    ["SceneParticleEffectManager"]="SceneParticleEffectManagementSystem"
    ["ScenePostProcessingManager"]="ScenePostProcessingManagementSystem"
    ["SceneShadowSystem"]="SceneShadowRenderingSystem"
    ["SceneOcclusionCulling"]="SceneOcclusionCullingSystem"
    ["SceneLodSystem"]="SceneLevelOfDetailSystem"
    ["SceneStreamingManager"]="SceneStreamingManagementSystem"
    ["SceneMemoryAllocator"]="SceneMemoryAllocationSystem"
    ["SceneGarbageCollector"]="SceneGarbageCollectionSystem"
    ["SceneEventDispatcher"]="SceneEventDispatchingSystem"
    ["SceneStateController"]="SceneStateManagementController"
    ["SceneRenderState"]="SceneRenderingState"
    ["SceneUpdateScheduler"]="SceneUpdateSchedulingSystem"
    ["SceneResourceCache"]="SceneResourceCachingSystem"
    ["SceneMemoryPool"]="SceneManagementMemoryPool"
    ["SceneFrameBuffer"]="SceneFrameBufferingSystem"
    ["SceneRenderContext"]="SceneRenderingContext"
    ["SceneThreadPool"]="SceneManagementThreadPool"
    ["SceneResourceManager"]="SceneResourceManagementSystem"
    ["SceneEventQueue"]="SceneEventQueueingSystem"
    ["SceneMessageBus"]="SceneMessageBusSystem"
    ["SceneNetworkManager"]="SceneNetworkManagementSystem"
    ["SceneDebugRenderer"]="SceneDebugRenderingSystem"
    ["SceneProfiler"]="ScenePerformanceProfiler"
    ["SceneStatisticsCollector"]="SceneStatisticsCollectionSystem"
    ["SceneTextureManager"]="SceneTextureManagementSystem"
    ["SceneModelManager"]="SceneModelManagementSystem"
    ["SceneShaderManager"]="SceneShaderManagementSystem"
    ["SceneMaterialDatabase"]="SceneMaterialDatabase"
    ["SceneLightingData"]="SceneLightingDataStructure"
    ["SceneShadowMapping"]="SceneShadowMappingSystem"
    ["ScenePostProcessData"]="ScenePostProcessingData"
    ["SceneVertexBuffer"]="SceneVertexBufferData"
    ["SceneIndexBuffer"]="SceneIndexBufferData"
    ["SceneConstantBuffer"]="SceneConstantBufferData"
)

# 对99_unmatched_functions.c文件进行替换
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    echo "替换: $old_name -> $new_name"
    sed -i "s/void\* $old_name/void\* $new_name/g" 99_unmatched_functions.c
done

echo "变量名美化完成"