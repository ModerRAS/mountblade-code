#!/usr/bin/env python3
"""
生成03_rendering.c文件UNK_变量美化的sed命令
"""

# 定义UNK_变量重命名映射
unk_mappings = {
    'UNK_18044fc00': 'RenderPassEndCallback',
    'UNK_18044fc20': 'RenderPassBindCallback',
    'UNK_18044fc40': 'RenderPassUnbindCallback',
    'UNK_18044fc60': 'RenderTargetSetCallback',
    'UNK_18044fc80': 'RenderTargetClearCallback',
    'UNK_18044fca0': 'RenderTargetBlitCallback',
    'UNK_18044fcc0': 'RenderTargetResolveCallback',
    'UNK_18044fce0': 'DepthStencilSetCallback',
    'UNK_18044fd00': 'DepthStencilClearCallback',
    'UNK_18044fd20': 'DepthStencilBindCallback',
    'UNK_18044fd40': 'StencilTestEnableCallback',
    'UNK_18044fd60': 'StencilFuncSetCallback',
    'UNK_18044fd80': 'StencilOpSetCallback',
    'UNK_18044fda0': 'StencilMaskSetCallback',
    'UNK_18044fdc0': 'DepthTestEnableCallback',
    'UNK_18044fde0': 'DepthFuncSetCallback',
    'UNK_18044fe00': 'DepthMaskSetCallback',
    'UNK_18044fe20': 'DepthRangeSetCallback',
    'UNK_18044fe40': 'BlendStateEnableCallback',
    'UNK_18044fe60': 'BlendFuncSetCallback',
    'UNK_18044fe80': 'BlendEquationSetCallback',
    'UNK_18044fe90': 'BlendColorSetCallback',
    'UNK_18044fea0': 'BlendMaskSetCallback',
    'UNK_18044fee0': 'RasterizerStateSetCallback',
    'UNK_18044ff00': 'CullModeSetCallback',
    'UNK_18044ff20': 'FrontFaceSetCallback',
    'UNK_18044ff40': 'PolygonModeSetCallback',
    'UNK_18044ff60': 'LineWidthSetCallback',
    'UNK_18044ff80': 'PointSizeSetCallback'
}

# 生成sed命令
for old_name, new_name in unk_mappings.items():
    print(f'sed -i "s/{old_name}/{new_name}/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c')