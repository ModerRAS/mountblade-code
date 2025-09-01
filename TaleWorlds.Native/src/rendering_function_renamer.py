#!/usr/bin/env python3
"""
渲染系统函数重命名脚本
用于重命名03_rendering.c中的FUN_函数为语义化名称
"""

import re
import sys

# 函数重命名映射表
FUNCTION_RENAME_MAP = {
    # 渲染管线相关函数
    "FUN_180447e40": "RenderPipelineProcessor",
    "FUN_180447f70": "RenderContextManager",
    "FUN_180448110": "RenderStateInitializer",
    "FUN_180448420": "RenderBufferAllocator",
    "FUN_180448470": "RenderTextureUploader",
    "FUN_1804484c0": "RenderShaderLinker",
    "FUN_180448540": "RenderDrawCallDispatcher",
    "FUN_1804485c0": "RenderFrameBufferManager",
    "FUN_1804489a0": "RenderVertexProcessor",
    "FUN_180448d90": "RenderGeometryProcessor",
    "FUN_180448df0": "RenderPrimitiveAssembler",
    "FUN_180448e50": "RenderRasterizer",
    "FUN_180448ea0": "RenderPixelShader",
    "FUN_180448f00": "RenderFragmentProcessor",
    "FUN_180448f50": "RenderDepthTester",
    "FUN_180448fb0": "RenderStencilTester",
    "FUN_180449000": "RenderBlender",
    "FUN_180449070": "RenderColorProcessor",
    "FUN_1804491c0": "RenderPostProcessor",
    "FUN_180449230": "RenderEffectApplier",
    "FUN_180449300": "RenderFilterProcessor",
    "FUN_1804496f0": "RenderLightingCalculator",
    "FUN_180449780": "RenderShadowMapper",
    "FUN_180449850": "RenderReflectionProcessor",
    "FUN_1804498f0": "RenderRefractionProcessor",
    "FUN_180449930": "RenderEnvironmentMapper",
    "FUN_180449a00": "RenderSkyRenderer",
    "FUN_180449a80": "RenderCloudRenderer",
    "FUN_180449c00": "RenderFogProcessor",
    "FUN_180449d70": "RenderWeatherRenderer",
    "FUN_18044a080": "RenderParticleEmitter",
    "FUN_18044a3a0": "RenderParticleSystem",
    "FUN_18044a590": "RenderTrailRenderer",
    "FUN_18044a810": "RenderDecalProcessor",
    "FUN_18044aad0": "RenderBillboardRenderer",
    "FUN_18044ab80": "RenderSpriteRenderer",
    "FUN_18044ac20": "RenderTextRenderer",
    "FUN_18044ad90": "RenderFontProcessor",
    "FUN_18044af00": "RenderUIRenderer",
    "FUN_18044afb0": "RenderHUDRenderer",
    "FUN_18044b010": "RenderDebugRenderer",
    "FUN_18044b080": "RenderWireframeRenderer",
    "FUN_18044b110": "RenderBoundingBoxRenderer",
    "FUN_18044b1d0": "RenderCollisionRenderer",
    "FUN_18044b280": "RenderPhysicsRenderer",
    "FUN_18044b3d0": "RenderAnimationRenderer",
    "FUN_18044b4f0": "RenderSkeletonRenderer",
    "FUN_18044b580": "RenderMorphTargetRenderer",
    "FUN_18044b610": "RenderSkinningProcessor",
    "FUN_18044b6e0": "RenderBlendShapeRenderer",
    "FUN_18044b700": "RenderFacialAnimationRenderer",
    "FUN_18044b7a0": "RenderLipSyncProcessor",
    "FUN_18044b910": "RenderEyeRenderer",
    "FUN_18044baf0": "RenderHairRenderer",
    "FUN_18044bc50": "RenderClothRenderer",
    "FUN_18044be30": "RenderMaterialProcessor",
    "FUN_18044c0d0": "RenderTextureProcessor",
    "FUN_18044c190": "RenderNormalMapper",
    "FUN_18044c420": "RenderSpecularMapper",
    "FUN_18044c840": "RenderGlossMapper",
    "FUN_18044c9c0": "RenderRoughnessMapper",
    "FUN_18044cb80": "RenderMetallicMapper",
    "FUN_18044cd30": "RenderAOVProcessor",
    "FUN_18044ce10": "RenderGBufferProcessor",
    "FUN_18044cf20": "RenderDeferredRenderer",
    "FUN_18044d0b0": "RenderForwardRenderer",
    "FUN_18044d0f0": "RenderTiledRenderer",
    "FUN_18044d130": "RenderClusteredRenderer",
    "FUN_18044d2d0": "RenderComputeShader",
    "FUN_18044d340": "RenderRayTracer",
    "FUN_18044d450": "RenderPathTracer",
    "FUN_18044d4f0": "RenderGlobalIllumination",
    "FUN_18044d570": "RenderAmbientOcclusion",
    "FUN_18044d680": "RenderScreenSpaceReflection",
    "FUN_18044d910": "RenderScreenSpaceAmbientOcclusion",
    "FUN_18044da90": "RenderBloomProcessor",
    "FUN_18044db70": "RenderToneMapper",
    "FUN_18044dc10": "RenderColorGrader",
    "FUN_18044df40": "RenderAntiAliasing",
    "FUN_18044e000": "RenderMotionBlur",
    "FUN_18044e0d0": "RenderDepthOfField",
    "FUN_18044e180": "RenderLensFlare",
    "FUN_18044e2b0": "RenderVignette",
    "FUN_18044e3b0": "RenderChromaticAberration",
    "FUN_18044e4f0": "RenderFilmGrain",
    "FUN_18044e590": "RenderColorCorrection",
    "FUN_18044e620": "RenderGammaCorrection",
    "FUN_18044e650": "RenderExposureControl",
    "FUN_18044e890": "RenderHDRProcessor",
    "FUN_18044ead0": "RenderLUTProcessor",
    "FUN_18044ed20": "RenderColorLUT",
    "FUN_18044edc0": "RenderDisplayProcessor",
    "FUN_18044efd0": "RenderOutputMerger",
    "FUN_18044f210": "RenderFramePresenter",
    "FUN_18044f370": "RenderSwapChain",
    "FUN_18044f780": "RenderDisplayManager",
    "FUN_18044f880": "RenderMonitorController",
    "FUN_18044fa00": "RenderResolutionScaler",
    "FUN_18044ffa0": "RenderAspectRatioController",
    "FUN_180450070": "RenderRefreshRateController",
    "FUN_180450140": "RenderVSyncController",
    "FUN_1804501c0": "RenderTripleBuffering",
    "FUN_1804502d0": "RenderFrameRateLimiter",
    "FUN_180450360": "RenderPerformanceMonitor",
    "FUN_1804508a0": "RenderGPUProfiler",
    "FUN_1804509e0": "RenderMemoryProfiler",
    "FUN_180450a20": "RenderShaderProfiler",
    "FUN_180450ba0": "RenderTextureProfiler",
    "FUN_180450d90": "RenderBufferProfiler",
    "FUN_1804510a0": "RenderDrawCallProfiler",
    "FUN_1804511e0": "RenderPipelineProfiler",
    "FUN_1804512f0": "RenderThreadProfiler",
    "FUN_180451770": "RenderWorkerProfiler",
    "FUN_1804517c0": "RenderTaskProfiler",
    "FUN_180451890": "RenderJobProfiler",
    "FUN_1804519d0": "RenderQueueProfiler",
    "FUN_180451bd0": "RenderCommandProfiler",
    "FUN_180451ca0": "RenderSyncProfiler",
    "FUN_180451d20": "RenderBarrierProfiler",
    "FUN_180451da0": "RenderFenceProfiler",
    "FUN_180451e30": "RenderSemaphoreProfiler",
    "FUN_1804520a0": "RenderEventProfiler",
    "FUN_1804522d0": "RenderTimerProfiler",
    "FUN_180452500": "RenderCounterProfiler",
    "FUN_180452630": "RenderStatisticsCollector",
    "FUN_180452f40": "RenderMetricsCollector",
    "FUN_180452fa0": "RenderBenchmarkRunner",
    "FUN_1804530a0": "RenderStressTester",
    "FUN_180453140": "RenderValidationTester",
    "FUN_1804531d0": "RenderComplianceChecker",
    "FUN_180453300": "RenderQualityAssurance",
    "FUN_1804534d0": "RenderRegressionTester",
    "FUN_180453580": "RenderIntegrationTester",
    "FUN_180453750": "RenderSystemTester",
    "FUN_1804537b0": "RenderUnitTester",
    "FUN_1804537e0": "RenderComponentTester",
    "FUN_180453810": "RenderModuleTester",
    "FUN_180453860": "RenderFeatureTester",
    "FUN_1804538b0": "RenderPerformanceTester",
    "FUN_1804539b0": "RenderMemoryTester",
    "FUN_180453b60": "RenderStabilityTester",
    "FUN_180453cb0": "RenderReliabilityTester",
    "FUN_180453d60": "RenderCompatibilityTester",
    "FUN_180453de0": "RenderPlatformTester",
    "FUN_180453e40": "RenderHardwareTester",
    "FUN_180453f70": "RenderDriverTester",
    "FUN_180453f90": "RenderAPITester",
    "FUN_180454070": "RenderShaderTester",
    "FUN_1804541a0": "RenderTextureTester",
    "FUN_180454230": "RenderBufferTester",
    "FUN_180454300": "RenderPipelineTester",
    "FUN_1804543f0": "RenderFrameTester",
    "FUN_180454d00": "RenderSceneTester",
    "FUN_180454d80": "RenderObjectTester",
    "FUN_180454ea0": "RenderCameraTester",
    "FUN_180454ff0": "RenderLightTester",
    "FUN_180455090": "RenderShadowTester",
    "FUN_180455250": "RenderMaterialTester",
    "FUN_180455340": "RenderAnimationTester",
    "FUN_180455430": "RenderPhysicsTester",
    "FUN_1804555a0": "RenderAudioTester",
    "FUN_1804557b0": "RenderInputTester",
    "FUN_180455980": "RenderNetworkTester",
    "FUN_1804559d0": "RenderFileTester",
    
    # 早期渲染函数
    "FUN_1804354c0": "EarlyRenderInitialize",
    "FUN_1804355b0": "EarlyRenderSetup",
    "FUN_180435630": "EarlyRenderConfigure",
    "FUN_180435690": "EarlyRenderValidate",
    "FUN_1804357a0": "EarlyRenderStart",
    "FUN_180435860": "EarlyRenderProcess",
    "FUN_1804359d0": "EarlyRenderUpdate",
    "FUN_180435a80": "EarlyRenderRender",
    "FUN_180435d10": "EarlyRenderEnd",
    "FUN_180435e20": "EarlyRenderCleanup",
    "FUN_180435f40": "EarlyRenderReset",
    "FUN_180435f90": "EarlyRenderRestart",
    "FUN_180435ff0": "EarlyRenderPause",
    "FUN_180436030": "EarlyRenderResume",
    "FUN_180436160": "EarlyRenderStop",
    "FUN_1804362a0": "EarlyRenderDestroy",
    "FUN_1804369d0": "EarlyRenderCreate",
    "FUN_180436a00": "EarlyRenderBuild",
    "FUN_180436a50": "EarlyRenderCompile",
    "FUN_180436ae0": "EarlyRenderLink",
    "FUN_180436bb0": "EarlyRenderLoad",
    "FUN_180436bf0": "EarlyRenderImport",
    "FUN_180436c30": "EarlyRenderExport",
    "FUN_180436d00": "EarlyRenderSave",
    "FUN_180436da0": "EarlyRenderOpen",
    "FUN_180436f20": "EarlyRenderClose",
    "FUN_180436fd0": "EarlyRenderRead",
    "FUN_180437050": "EarlyRenderWrite",
    "FUN_180437110": "EarlyRenderSeek",
    "FUN_180437290": "EarlyRenderTell",
    "FUN_1804372e0": "EarlyRenderFlush",
    "FUN_180437320": "EarlyRenderSync",
    "FUN_1804373a0": "EarlyRenderLock",
    "FUN_180437460": "EarlyRenderUnlock",
    "FUN_1804374c0": "EarlyRenderWait",
    "FUN_180437560": "EarlyRenderSignal",
    "FUN_1804375f0": "EarlyRenderNotify",
    "FUN_180437680": "EarlyRenderTrigger",
    "FUN_1804377b0": "EarlyRenderCallback",
    "FUN_1804378e0": "EarlyRenderEventHandler",
    "FUN_1804069d0": "EarlyRenderSystemInit",
    "FUN_180407960": "EarlyRenderSystemUpdate",
    "FUN_18041b4d0": "EarlyRenderSystemRender",
}

def rename_functions_in_file(file_path):
    """重命名文件中的函数"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        original_content = content
        
        # 执行函数重命名
        for old_name, new_name in FUNCTION_RENAME_MAP.items():
            # 重命名函数声明
            content = re.sub(rf'FUN_{old_name}', new_name, content)
            # 重命名函数调用
            content = re.sub(rf'\b{old_name}\b', new_name, content)
        
        # 只在内容有变化时写入文件
        if content != original_content:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)
            print(f"成功重命名文件: {file_path}")
            return True
        else:
            print(f"文件无需更改: {file_path}")
            return False
            
    except Exception as e:
        print(f"处理文件 {file_path} 时出错: {e}")
        return False

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    if rename_functions_in_file(file_path):
        print("函数重命名完成")
    else:
        print("函数重命名失败或无需更改")