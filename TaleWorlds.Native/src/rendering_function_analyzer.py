#!/usr/bin/env python3
"""
渲染文件函数美化分析脚本
用于分析03_rendering.c文件中所有需要美化的FUN_函数
"""

import re
import os

def analyze_rendering_functions():
    """分析渲染文件中的FUN_函数"""
    
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    
    # 查找所有FUN_函数定义
    function_pattern = r'^(void|undefined4|undefined8|longlong|char|bool|int|float|double)\s+(FUN_[a-f0-9]+)\s*\([^)]*\)'
    
    functions = []
    for match in re.finditer(function_pattern, content, re.MULTILINE):
        func_type = match.group(1)
        func_name = match.group(2)
        line_num = content[:match.start()].count('\n') + 1
        
        # 获取函数签名
        signature = match.group(0)
        
        # 检查是否已经被美化（有中文注释）
        start_pos = match.start()
        # 向前查找最近的注释
        prev_content = content[:start_pos]
        last_comment_pos = prev_content.rfind('// 函数:')
        
        is_beautified = False
        if last_comment_pos != -1:
            # 检查是否有中文注释
            comment_section = content[last_comment_pos:start_pos]
            if '渲染' in comment_section or '@brief' in comment_section:
                is_beautified = True
        
        functions.append({
            'name': func_name,
            'type': func_type,
            'signature': signature,
            'line': line_num,
            'is_beautified': is_beautified
        })
    
    # 分析结果
    total_functions = len(functions)
    beautified_functions = sum(1 for f in functions if f['is_beautified'])
    need_beautify = total_functions - beautified_functions
    
    print(f"=== 渲染文件函数分析结果 ===")
    print(f"总函数数量: {total_functions}")
    print(f"已美化函数: {beautified_functions}")
    print(f"需要美化函数: {need_beautify}")
    print()
    
    # 输出需要美化的函数
    print("=== 需要美化的函数列表 ===")
    for func in functions:
        if not func['is_beautified']:
            print(f"行 {func['line']:5d}: {func['signature']}")
    
    # 输出已美化的函数
    print("\n=== 已美化的函数列表 ===")
    for func in functions:
        if func['is_beautified']:
            print(f"行 {func['line']:5d}: {func['signature']}")
    
    return functions

def generate_function_mappings():
    """生成函数名映射建议"""
    
    # 基于函数地址和上下文的映射建议
    mappings = {
        # 渲染初始化相关
        'FUN_180242610': 'InitializeRenderState',
        'FUN_180271c54': 'SerializeRenderData',
        'FUN_180271ca1': 'SerializeRenderProperties',
        'FUN_180271cc9': 'SerializeRenderAttributes',
        
        # 渲染对象处理
        'FUN_1802722e0': 'ProcessRenderObject',
        'FUN_180272b60': 'SetupRenderObject',
        'FUN_180272bd0': 'ConfigureRenderObject',
        'FUN_180272d60': 'InitializeRenderContext',
        'FUN_180272ef0': 'FinalizeRenderObject',
        
        # 渲染属性管理
        'FUN_180273150': 'ManageRenderProperties',
        'FUN_180273460': 'UpdateRenderState',
        'FUN_1802734d0': 'ApplyRenderSettings',
        'FUN_180273870': 'ProcessRenderAttributes',
        'FUN_180273980': 'ValidateRenderData',
        
        # 渲染缓冲区管理
        'FUN_180274220': 'ManageRenderBuffer',
        'FUN_180274c70': 'ProcessRenderQueue',
        
        # 渲染资源管理
        'FUN_180275730': 'ReleaseRenderResource',
        'FUN_180275820': 'AcquireRenderResource',
        'FUN_180275870': 'AllocateRenderMemory',
        'FUN_1802758c0': 'FreeRenderMemory',
        'FUN_1802758eb': 'InitializeRenderPool',
        
        # 渲染变换处理
        'FUN_180275944': 'ResetRenderTransform',
        'FUN_180275a60': 'ApplyRenderTransform',
        'FUN_180275cf0': 'CalculateRenderMatrix',
        'FUN_180275e10': 'UpdateRenderMatrix',
        
        # 渲染材质处理
        'FUN_18027649f': 'ProcessRenderMaterial',
        'FUN_180276610': 'SetupRenderMaterial',
        'FUN_1802768b0': 'UpdateRenderMaterial',
        'FUN_180276a70': 'ConfigureMaterialShader',
        
        # 渲染几何体处理
        'FUN_180276ad4': 'ProcessRenderGeometry',
        'FUN_180276ade': 'ValidateRenderGeometry',
        'FUN_180276d52': 'SetupRenderGeometry',
        'FUN_180276eef': 'CleanupRenderGeometry',
        'FUN_180276f1a': 'ResetRenderGeometry',
        
        # 渲染纹理处理
        'FUN_180276f30': 'ProcessRenderTexture',
        'FUN_180276f8c': 'SetupRenderTexture',
        'FUN_180276fad': 'ValidateRenderTexture',
        
        # 渲染状态管理
        'FUN_180277019': 'ResetRenderState',
        'FUN_180277036': 'UpdateRenderState',
        'FUN_180277068': 'FlushRenderState',
        'FUN_18027708e': 'PushRenderState',
        'FUN_180277326': 'PopRenderState',
        
        # 渲染批次处理
        'FUN_18027733a': 'BeginRenderBatch',
        'FUN_180277360': 'EndRenderBatch',
        'FUN_180277540': 'GetRenderBatchSize',
        'FUN_180277690': 'SetRenderBatchMode',
        
        # 渲染光照处理
        'FUN_1802776ad': 'SetupRenderLighting',
        'FUN_1802777dd': 'UpdateRenderLighting',
        'FUN_1802777f0': 'ProcessRenderLight',
        'FUN_180277a20': 'ConfigureRenderLight',
        'FUN_180277b50': 'UpdateLightParameters',
        
        # 渲染阴影处理
        'FUN_180277e30': 'ProcessRenderShadow',
        'FUN_180277e52': 'UpdateRenderShadow',
        'FUN_180277f3a': 'SetupRenderShadow',
        'FUN_180277f50': 'ConfigureShadowMapping',
        
        # 渲染后期处理
        'FUN_180277f79': 'ApplyPostProcessing',
        'FUN_180278261': 'ResetPostProcessing',
        'FUN_180278270': 'ProcessPostProcessing',
        'FUN_1802786d0': 'ConfigurePostProcessing',
        'FUN_180278870': 'UpdatePostProcessing',
        
        # 渲染查询处理
        'FUN_180279640': 'ProcessRenderQuery',
        'FUN_18027a810': 'ExecuteRenderQuery',
        
        # 渲染调试功能
        'FUN_18027b5d0': 'ProcessRenderDebug',
        'FUN_18027ba80': 'UpdateRenderDebug',
        
        # 渲染统计信息
        'FUN_18027c650': 'CollectRenderStatistics',
        'FUN_18027d420': 'UpdateRenderStatistics',
        
        # 渲染设备管理
        'FUN_18027d880': 'ManageRenderDevice',
        'FUN_18027da30': 'GetRenderDeviceStatus',
        'FUN_18027daa0': 'ValidateRenderDevice',
        'FUN_18027dc40': 'ConfigureRenderDevice',
        
        # 渲染内存管理
        'FUN_18027dd70': 'ManageRenderMemory',
        'FUN_18027f4d0': 'AllocateRenderMemory',
        'FUN_18027f4f0': 'FreeRenderMemory',
        'FUN_18027f510': 'ReallocateRenderMemory',
        
        # 渲染同步处理
        'FUN_180280600': 'SynchronizeRenderThread',
        'FUN_180280648': 'WaitForRenderSync',
        'FUN_180280ab8': 'SignalRenderSync',
        'FUN_180280ad0': 'ProcessRenderSync',
        
        # 渲染命令处理
        'FUN_180281020': 'ProcessRenderCommand',
        'FUN_180281040': 'FlushRenderCommands',
        'FUN_18028106c': 'ResetRenderCommandBuffer',
        'FUN_180281080': 'SubmitRenderCommand',
        
        # 渲染缓冲区操作
        'FUN_1802814d0': 'ManageRenderBuffer',
        'FUN_180281770': 'UpdateRenderBuffer',
        'FUN_180281e80': 'ValidateRenderBuffer',
        
        # 渲染纹理操作
        'FUN_180281f40': 'ProcessRenderTexture',
        'FUN_1802820ec': 'CleanupRenderTexture',
        'FUN_180282110': 'UpdateRenderTexture',
        
        # 渲染着色器操作
        'FUN_1802828a0': 'ProcessRenderShader',
        'FUN_1802829c0': 'UpdateRenderShader',
        'FUN_180282be0': 'ConfigureRenderShader',
        'FUN_180282e00': 'ValidateRenderShader',
        
        # 渲染顶点处理
        'FUN_180283420': 'ProcessRenderVertex',
        'FUN_180283cb0': 'UpdateVertexData',
        'FUN_180283e70': 'ValidateVertexData',
        'FUN_180283f10': 'CalculateVertexCount',
        'FUN_180283f32': 'GetVertexBufferSize',
        'FUN_18028401a': 'GetVertexDataSize',
        
        # 渲染索引处理
        'FUN_180284030': 'ProcessRenderIndex',
        'FUN_180284120': 'UpdateIndexData',
        'FUN_180284143': 'ValidateIndexData',
        'FUN_1802841c0': 'FlushIndexBuffer',
        'FUN_1802841d0': 'ResetIndexBuffer',
        'FUN_180284240': 'ManageIndexBuffer',
        'FUN_1802842e0': 'ProcessIndexBuffer',
        
        # 渲染绘制调用
        'FUN_180284450': 'ProcessRenderDraw',
        'FUN_180284500': 'ValidateDrawCall',
        'FUN_180284580': 'SubmitDrawCall',
        'FUN_1802845f6': 'FlushDrawCalls',
        'FUN_1802846c0': 'ResetDrawCalls',
        'FUN_180284720': 'ManageDrawCalls',
        'FUN_180284780': 'ExecuteDrawCall',
        
        # 渲染视图管理
        'FUN_180284cf0': 'ManageRenderView',
        'FUN_180284de0': 'UpdateRenderView',
        'FUN_180284f90': 'ProcessRenderView',
        'FUN_180285040': 'SetupRenderView',
        'FUN_180285060': 'ResetRenderView',
        'FUN_180285080': 'ConfigureRenderView',
        'FUN_180285190': 'UpdateViewMatrix',
        'FUN_180285410': 'ProcessViewFrustum',
        'FUN_180285760': 'CalculateViewProjection',
        
        # 渲染投影处理
        'FUN_180285c90': 'SetupRenderProjection',
        'FUN_180285cf0': 'UpdateProjectionMatrix',
        'FUN_180286010': 'ConfigureProjectionParams',
        
        # 渲染视口处理
        'FUN_180286300': 'ProcessRenderViewport',
        'FUN_1802864f0': 'UpdateViewportSize',
        'FUN_180286514': 'ValidateViewport',
        'FUN_180286a98': 'ConfigureViewport',
        'FUN_180286e40': 'SetViewportTransform',
        
        # 渲染裁剪处理
        'FUN_180287020': 'ProcessRenderClipping',
        'FUN_1802874c0': 'UpdateClippingPlanes',
        'FUN_180287610': 'ValidateClipping',
        
        # 渲染颜色处理
        'FUN_180287ed0': 'ProcessRenderColor',
        'FUN_180288040': 'UpdateColorBuffer',
        
        # 渲染深度处理
        'FUN_180288880': 'ProcessRenderDepth',
        'FUN_180288f30': 'UpdateDepthBuffer',
        
        # 渲染模板处理
        'FUN_180289f50': 'ProcessRenderStencil',
        'FUN_18028a2c0': 'UpdateStencilBuffer',
        
        # 渲染混合处理
        'FUN_18028a660': 'ProcessRenderBlending',
        'FUN_18028a686': 'UpdateBlendingState',
        
        # 渲染遮罩处理
        'FUN_18028a841': 'ResetRenderMask',
        'FUN_18028a850': 'ProcessRenderMask',
        'FUN_18028a8b0': 'UpdateRenderMask',
        'FUN_18028a95c': 'ValidateRenderMask',
        
        # 渲染测试处理
        'FUN_18028aacb': 'GetRenderTestResult',
        'FUN_18028aaf0': 'ProcessRenderTest',
        'FUN_18028ad90': 'ValidateRenderTest',
        
        # 渲染性能优化
        'FUN_18028af94': 'GetRenderPerformance',
        'FUN_18028b091': 'OptimizeRenderPerformance',
        'FUN_18028b0d2': 'UpdateRenderPerformance',
        'FUN_18028b630': 'CalculateRenderMetrics',
        'FUN_18028b960': 'AnalyzeRenderPerformance',
        
        # 渲染LOD处理
        'FUN_18028c2f0': 'ProcessRenderLOD',
        'FUN_18028c308': 'UpdateLODLevel',
        'FUN_18028c387': 'CalculateLODDistance',
        
        # 渲染遮挡剔除
        'FUN_18028d0b0': 'ProcessOcclusionCulling',
        'FUN_18028d0c8': 'UpdateOcclusionBuffer',
        'FUN_18028d19a': 'ConfigureOcclusionQuery',
        'FUN_18028d290': 'ValidateOcclusionResult',
        
        # 渲染实例化
        'FUN_18028d400': 'ProcessRenderInstancing',
        'FUN_18028d533': 'UpdateInstanceData',
        'FUN_18028d5a4': 'ValidateInstanceData',
        'FUN_18028d617': 'ResetInstanceData',
        'FUN_18028d61f': 'FlushInstanceData',
        
        # 渲染流输出
        'FUN_18028d680': 'ProcessStreamOutput',
        'FUN_18028e390': 'ValidateStreamOutput',
        'FUN_18028e537': 'ResetStreamOutput',
        
        # 渲染几何着色器
        'FUN_18028e550': 'ProcessGeometryShader',
        'FUN_18028e569': 'UpdateGeometryShader',
        'FUN_18028e62b': 'ValidateGeometryShader',
        'FUN_18028e67f': 'ResetGeometryShader',
        'FUN_18028e684': 'FlushGeometryShader',
        'FUN_18028e689': 'CleanupGeometryShader',
        
        # 渲染曲面细分
        'FUN_18028e690': 'ProcessTessellation',
        'FUN_18028e702': 'UpdateTessellation',
        'FUN_18028ecb8': 'ResetTessellation',
        
        # 渲染计算着色器
        'FUN_18028ecc0': 'ProcessComputeShader',
        'FUN_18028ecde': 'UpdateComputeShader',
        'FUN_18028ece4': 'ValidateComputeShader',
        'FUN_18028eda3': 'ResetComputeShader',
        
        # 渲染射线追踪
        'FUN_18028f0ac': 'ProcessRayTracing',
        'FUN_18028f0f0': 'UpdateRayTracing',
        'FUN_18028f13b': 'ValidateRayTracing',
        'FUN_18028f180': 'ConfigureRayTracing',
        'FUN_18028f18f': 'ExecuteRayTracing',
        
        # 渲染全局光照
        'FUN_18028f34c': 'ProcessGlobalIllumination',
        'FUN_18028f350': 'UpdateGlobalIllumination',
        'FUN_18028f499': 'CalculateGlobalIllumination',
        'FUN_18028f4a1': 'ValidateGlobalIllumination',
        'FUN_18028f4d4': 'ConfigureGlobalIllumination',
        
        # 渲染环境光遮蔽
        'FUN_18028f5d1': 'ProcessAmbientOcclusion',
        'FUN_18028f5ec': 'UpdateAmbientOcclusion',
        'FUN_18028f68e': 'ValidateAmbientOcclusion',
        'FUN_18028f7d7': 'CalculateAmbientOcclusion',
        'FUN_18028f898': 'GetAmbientOcclusionParams',
        'FUN_18028f8f0': 'ConfigureAmbientOcclusion',
        'FUN_18028fa3b': 'ApplyAmbientOcclusion',
        
        # 渲染反射
        'FUN_18028fc51': 'ProcessRenderReflection',
        'FUN_18028fd52': 'CalculateReflection',
        'FUN_18028fffa': 'UpdateReflection',
        'FUN_180290020': 'ValidateReflection',
        'FUN_180290070': 'ConfigureReflection',
        'FUN_18029007b': 'ApplyReflection',
        
        # 渲染折射
        'FUN_180290091': 'ProcessRenderRefraction',
        'FUN_180290247': 'UpdateRefraction',
        'FUN_180290353': 'ValidateRefraction',
        'FUN_180290380': 'ConfigureRefraction',
        'FUN_1802903aa': 'ApplyRefraction',
        
        # 渲染透明度
        'FUN_180290628': 'ProcessRenderTransparency',
        'FUN_180290630': 'UpdateTransparency',
        'FUN_18029065d': 'ValidateTransparency',
        'FUN_1802908c4': 'ConfigureTransparency',
        
        # 渲染雾效
        'FUN_1802909e0': 'ProcessRenderFog',
        'FUN_180290a71': 'UpdateFogParameters',
        'FUN_180290f82': 'ValidateFogEffect',
        'FUN_180290fd0': 'ConfigureFogEffect',
        
        # 渲染粒子系统
        'FUN_180291500': 'ProcessParticleSystem',
        'FUN_180291610': 'UpdateParticleSystem',
        'FUN_18029161b': 'ValidateParticleSystem',
        'FUN_180291772': 'ResetParticleSystem',
        'FUN_180291839': 'FlushParticleSystem',
        'FUN_18029184a': 'CleanupParticleSystem',
        
        # 渲染地形
        'FUN_180291880': 'ProcessRenderTerrain',
        'FUN_180291950': 'UpdateTerrainData',
        'FUN_180291a50': 'ValidateTerrainData',
        'FUN_180291b40': 'ConfigureTerrainRendering',
        'FUN_180291c70': 'ProcessTerrainLOD',
        
        # 渲染天空
        'FUN_180291cf0': 'ProcessRenderSky',
        'FUN_180291f60': 'UpdateSkyData',
        'FUN_180291f76': 'ValidateSkyData',
        'FUN_180291f87': 'ResetSkyRendering',
        
        # 渲染水面
        'FUN_1802920d0': 'ProcessRenderWater',
        'FUN_180292156': 'UpdateWaterData',
        'FUN_1802921e0': 'ValidateWaterData',
        'FUN_180292290': 'ConfigureWaterRendering',
        'FUN_1802923e0': 'ProcessWaterWaves',
        
        # 渲染植被
        'FUN_180293190': 'ProcessRenderVegetation',
        'FUN_180293730': 'UpdateVegetationData',
        'FUN_180293772': 'ValidateVegetationData',
        'FUN_180293836': 'ProcessVegetationLOD',
        'FUN_180293860': 'ConfigureVegetationRendering',
        'FUN_18029389c': 'ResetVegetationRendering',
        'FUN_1802938c7': 'FlushVegetationData',
        'FUN_1802939a8': 'CleanupVegetationRendering',
        'FUN_1802939b8': 'ValidateVegetationBatch',
        'FUN_1802939e0': 'ProcessVegetationBatch',
        
        # 渲染建筑
        'FUN_180293ab9': 'ProcessRenderBuilding',
        'FUN_180293c0e': 'UpdateBuildingData',
        'FUN_180293c12': 'ValidateBuildingData',
        'FUN_180293cfe': 'ResetBuildingRendering',
        'FUN_180293d20': 'ProcessBuildingLOD',
        'FUN_180293d4c': 'ConfigureBuildingRendering',
        'FUN_180293d5d': 'ValidateBuildingBatch',
        'FUN_180293df5': 'ProcessBuildingBatch',
        'FUN_180293e75': 'CleanupBuildingRendering',
        'FUN_180293e80': 'UpdateBuildingBatch',
        'FUN_180293f50': 'ProcessBuildingOcclusion',
        'FUN_180293fc5': 'ValidateBuildingOcclusion',
        'FUN_1802940cd': 'ResetBuildingOcclusion',
        'FUN_1802940f0': 'ConfigureBuildingOcclusion',
        'FUN_180294117': 'FlushBuildingOcclusion',
        'FUN_180294169': 'CleanupBuildingOcclusion',
        'FUN_180294180': 'ProcessBuildingShadow',
        'FUN_180294200': 'ConfigureBuildingShadow',
        'FUN_180294330': 'ValidateBuildingShadow',
        'FUN_1802943c0': 'ProcessBuildingReflection',
        'FUN_180294430': 'UpdateBuildingReflection',
        'FUN_18029443c': 'ValidateBuildingReflection',
        
        # 渲染角色
        'FUN_180294576': 'ProcessRenderCharacter',
        'FUN_1802945c6': 'UpdateCharacterData',
        'FUN_1802945d9': 'ValidateCharacterData',
        'FUN_180294610': 'ConfigureCharacterRendering',
        'FUN_180294638': 'ProcessCharacterAnimation',
        'FUN_18029463f': 'UpdateCharacterAnimation',
        'FUN_180294654': 'ValidateCharacterAnimation',
        'FUN_180294835': 'ProcessCharacterLOD',
        'FUN_180294849': 'FlushCharacterData',
        'FUN_18029485c': 'CleanupCharacterRendering',
        'FUN_180294880': 'ProcessCharacterBatch',
        'FUN_180294a90': 'ConfigureCharacterBatch',
        'FUN_180294c20': 'ValidateCharacterBatch',
        'FUN_180294f50': 'ProcessCharacterShadow',
        'FUN_180296680': 'ProcessCharacterReflection',
        'FUN_1802966a2': 'ResetCharacterRendering',
        
        # 渲染武器
        'FUN_1802969ee': 'ProcessRenderWeapon',
        'FUN_180296a70': 'UpdateWeaponData',
        'FUN_180296ad0': 'ValidateWeaponData',
        'FUN_180296b70': 'ConfigureWeaponRendering',
        'FUN_180296c40': 'ProcessWeaponLOD',
        'FUN_180296f10': 'ProcessWeaponAnimation',
        'FUN_180296f2e': 'ValidateWeaponAnimation',
        'FUN_180296f3d': 'ResetWeaponRendering',
        'FUN_180296fae': 'FlushWeaponData',
        'FUN_180296fd7': 'CleanupWeaponRendering',
        'FUN_180297007': 'ProcessWeaponBatch',
        'FUN_180297308': 'ResetWeaponBatch',
        'FUN_180297321': 'FlushWeaponBatch',
        'FUN_180297337': 'ValidateWeaponBatch',
        
        # 渲染护甲
        'FUN_180297357': 'ProcessRenderArmor',
        'FUN_1802973de': 'UpdateArmorData',
        'FUN_180297510': 'ValidateArmorData',
        'FUN_180297541': 'ResetArmorRendering',
        'FUN_180297550': 'FlushArmorData',
        'FUN_180297579': 'CleanupArmorRendering',
        'FUN_180297590': 'ProcessArmorBatch',
        'FUN_180297648': 'ConfigureArmorBatch',
        
        # 渲染特效
        'FUN_180297a10': 'ProcessRenderEffect',
        'FUN_180297c20': 'UpdateEffectData',
        'FUN_180297e30': 'ValidateEffectData',
        'FUN_180297f50': 'ConfigureEffectRendering',
        'FUN_180298070': 'ProcessEffectAnimation',
        'FUN_180298190': 'ValidateEffectAnimation',
        'FUN_180298270': 'ResetEffectRendering',
        'FUN_180298390': 'FlushEffectData',
        'FUN_1802983c0': 'CleanupEffectRendering',
        'FUN_1802983e0': 'ProcessEffectBatch',
        'FUN_1802984e0': 'ConfigureEffectBatch',
        'FUN_180298610': 'ValidateEffectBatch',
        'FUN_180298740': 'ProcessEffectLOD',
        'FUN_1802987a0': 'UpdateEffectLOD',
        'FUN_180298800': 'ValidateEffectLOD',
        'FUN_180298820': 'ResetEffectLOD',
        'FUN_180298840': 'FlushEffectLOD',
        'FUN_180298860': 'CleanupEffectLOD',
        
        # 渲染UI
        'FUN_180298880': 'ProcessRenderUI',
        'FUN_1802989f0': 'UpdateUIData',
        'FUN_180298b00': 'ValidateUIData',
        'FUN_180298c10': 'ConfigureUIRendering',
        'FUN_180298d20': 'ProcessUIAnimation',
        'FUN_180298e30': 'ValidateUIAnimation',
        'FUN_180298f40': 'ResetUIRendering',
        'FUN_180299050': 'FlushUIData',
        'FUN_180299160': 'CleanupUIRendering',
        'FUN_180299270': 'ProcessUIBatch',
        'FUN_180299380': 'ConfigureUIBatch',
        'FUN_180299490': 'ValidateUIBatch',
        'FUN_1802995a0': 'ProcessUILayout',
        'FUN_1802996b0': 'UpdateUILayout',
        'FUN_1802997c0': 'ValidateUILayout',
        'FUN_1802998d0': 'ResetUILayout',
        'FUN_1802999e0': 'FlushUILayout',
        'FUN_180299af0': 'CleanupUILayout',
        
        # 渲染文本
        'FUN_180299c00': 'ProcessRenderText',
        'FUN_180299d10': 'UpdateTextData',
        'FUN_180299e20': 'ValidateTextData',
        'FUN_180299f30': 'ConfigureTextRendering',
        'FUN_18029a040': 'ProcessTextFont',
        'FUN_18029a150': 'ValidateTextFont',
        'FUN_18029a260': 'ResetTextRendering',
        'FUN_18029a370': 'FlushTextData',
        'FUN_18029a480': 'CleanupTextRendering',
        'FUN_18029a590': 'ProcessTextBatch',
        'FUN_18029a6a0': 'ConfigureTextBatch',
        'FUN_18029a7b0': 'ValidateTextBatch',
        'FUN_18029a8c0': 'ProcessTextLayout',
        'FUN_18029a9d0': 'UpdateTextLayout',
        'FUN_18029aae0': 'ValidateTextLayout',
        'FUN_18029abf0': 'ResetTextLayout',
        'FUN_18029ad00': 'FlushTextLayout',
        'FUN_18029ae10': 'CleanupTextLayout'
    }
    
    return mappings

def generate_documentation_template():
    """生成函数文档模板"""
    
    template = """
/**
 * @brief {function_description}
 * 
 * {detailed_description}
 * 
 * @param {param1_name} {param1_description}
 * @param {param2_name} {param2_description}
 * @param {param3_name} {param3_description}
 * @param {param4_name} {param4_description}
 * @return {return_description}
 * 
 * @note {important_notes}
 * @note {additional_notes}
 * @note {implementation_details}
 */
"""
    
    return template

if __name__ == "__main__":
    # 分析函数
    functions = analyze_rendering_functions()
    
    # 生成映射
    mappings = generate_function_mappings()
    
    # 输出映射建议
    print("\n=== 函数名映射建议 ===")
    for original, suggested in mappings.items():
        print(f"{original} -> {suggested}")
    
    # 生成文档模板
    template = generate_documentation_template()
    print(f"\n=== 文档模板 ===")
    print(template)