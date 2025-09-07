# 简化的函数替换脚本
# 用于替换03_rendering.c中的FUN_函数调用

# 由于文件较大，我们使用Python脚本来处理
import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c', 'r', encoding='utf-8') as f:
    content = f.read()

# 定义函数映射
function_map = {
    'FUN_180290070': 'CalculateRenderMaterialProperty',
    'FUN_180290380': 'CalculateRenderMaterialTransform',
    'FUN_180290630': 'CalculateRenderMaterialMatrix',
    'FUN_18013e760': 'SetRenderMaterialData',
    'FUN_18011dd10': 'SetRenderMaterialAttribute',
    'FUN_18013e800': 'SetRenderMaterialIndex',
    'FUN_18013e620': 'SetRenderMaterialSize',
    'FUN_18011dc70': 'SetRenderMaterialValue',
    'FUN_180291950': 'ProcessRenderMaterialValidation',
    'FUN_1802921e0': 'ProcessRenderMaterialPropertyData',
    'FUN_1808fd200': 'ProcessRenderMaterialCleanup',
    'FUN_18011d9a0': 'UpdateRenderMaterialCurve',
    'FUN_180293730': 'ApplyRenderMaterialTransform',
    'FUN_180293860': 'ProcessRenderMaterialPropertyExtended',
    'FUN_1802923e0': 'ApplyRenderMaterialProperty',
    'FUN_1802943c0': 'ValidateRenderMaterialInstance',
    'FUN_180296ad0': 'ProcessRenderMaterialIndex',
    'FUN_180294f50': 'CheckRenderMaterialState',
    'FUN_180296a70': 'CalculateRenderMaterialOffset',
    'FUN_18013d860': 'SetRenderMaterialPropertyEx',
    'FUN_180294880': 'ProcessRenderMaterialMemory',
    'FUN_180298ee0': 'ProcessRenderMaterialDataEx',
    'FUN_180299330': 'UpdateRenderMaterialObject',
    'FUN_180296b70': 'InitializeRenderMaterialInstance',
    'FUN_180296f10': 'ProcessRenderMaterialAttributes',
    'FUN_180299230': 'SetRenderMaterialAttributes',
    'FUN_18011dbd0': 'GetRenderMaterialProperty',
    'FUN_180121550': 'ProcessRenderMaterialString',
    'FUN_1802971b0': 'ProcessRenderMaterialStream',
    'FUN_1801247c0': 'CreateRenderMaterialNode',
    'FUN_180291c70': 'ProcessRenderMaterialNode',
    'FUN_180292290': 'ProcessRenderMaterialTransformEx',
    'FUN_180291a50': 'CleanupRenderMaterialInstance',
    'FUN_1802940f0': 'ProcessRenderMaterialCurveData',
    'FUN_180293f50': 'ProcessRenderMaterialAttributeData',
    'FUN_180298c20': 'SetRenderMaterialPropertyTerminator',
    'FUN_180298c80': 'FindRenderMaterialPropertyData',
    'FUN_180297340': 'InitializeRenderMaterialObject',
    'FUN_180128040': 'ValidateRenderMaterialProperties',
    'FUN_180122960': 'ProcessRenderMaterialDataStream',
    'FUN_18012e810': 'ProcessRenderSystemMemory',
    'FUN_18010f010': 'RegisterRenderSystemCallback'
}

# 统计替换次数
replaced_count = 0

# 执行替换
for old_name, new_name in function_map.items():
    # 使用正则表达式匹配函数调用
    pattern = r'\b' + re.escape(old_name) + r'\b'
    if re.search(pattern, content):
        count = len(re.findall(pattern, content))
        content = re.sub(pattern, new_name, content)
        replaced_count += count
        print(f"替换 {old_name} -> {new_name}: {count} 次")

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c', 'w', encoding='utf-8') as f:
    f.write(content)

print(f"总共替换了 {replaced_count} 个函数调用")