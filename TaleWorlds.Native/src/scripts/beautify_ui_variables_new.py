#!/usr/bin/env python3
"""
UI系统变量美化脚本
用于批量重命名04_ui_system.c文件中的变量，使其符合PascalCase命名规范
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def rename_undefined_variables(content):
    """重命名undefined类型的变量"""
    # 处理 undefined1 uiStackBuffer228 [32] 类型的变量
    patterns = [
        # undefined类型的数组变量
        (r'undefined1 uiStackBuffer(\w+) \[(\d+)\]', r'undefined1 UiStackBuffer\1 [\2]'),
        (r'undefined1 auStack_(\w+) \[(\d+)\]', r'undefined1 ArrayStack\1 [\2]'),
        (r'undefined2 stackArray(\w+) \[(\d+)\]', r'undefined2 StackArray\1 [\2]'),
        (r'undefined1 stack(\w+)Buffer \[(\d+)\]', r'undefined1 Stack\1Buffer [\2]'),
        (r'undefined1 (\w+)SecurityBuffer \[(\d+)\]', r'undefined1 \1SecurityBuffer [\2]'),
        (r'undefined1 (\w+)ProcessBuffer \[(\d+)\]', r'undefined1 \1ProcessBuffer [\2]'),
        (r'undefined1 (\w+)MemoryBuffer \[(\d+)\]', r'undefined1 \1MemoryBuffer [\2]'),
        (r'undefined1 (\w+)DataBuffer \[(\d+)\]', r'undefined1 \1DataBuffer [\2]'),
        (r'undefined1 (\w+)Buffer(\d+) \[(\d+)\]', r'undefined1 \1Buffer\2 [\3]'),
        (r'undefined1 a(\w+) \[(\d+)\]', r'undefined1 Array\1 [\2]'),
        (r'undefined1 (\w+)Coords \[(\d+)\]', r'undefined1 \1Coords [\2]'),
        (r'undefined1 (\w+)Uniforms \[(\d+)\]', r'undefined1 \1Uniforms [\2]'),
        (r'undefined1 in_(\w+) \[(\d+)\]', r'undefined1 Input\1 [\2]'),
        (r'undefined1 temp(\w+)Buffer \[(\d+)\]', r'undefined1 Temp\1Buffer [\2]'),
        (r'undefined1 (\w+)CalculationBuffer \[(\d+)\]', r'undefined1 \1CalculationBuffer [\2]'),
        (r'undefined1 (\w+)LayoutBuffer \[(\d+)\]', r'undefined1 \1LayoutBuffer [\2]'),
        (r'undefined1 (\w+)TransformBuffer \[(\d+)\]', r'undefined1 \1TransformBuffer [\2]'),
        (r'undefined1 (\w+)TextureBuffer(\d+) \[(\d+)\]', r'undefined1 \1TextureBuffer\2 [\3]'),
        (r'undefined1 (\w+)EventBuffer(\d+) \[(\d+)\]', r'undefined1 \1EventBuffer\2 [\3]'),
        (r'undefined1 (\w+)AnimationBuffer(\d+) \[(\d+)\]', r'undefined1 \1AnimationBuffer\2 [\3]'),
        (r'undefined1 (\w+)PixelData(\d+) \[(\d+)\]', r'undefined1 \1PixelData\2 [\3]'),
        (r'undefined1 (\w+)Data(\d+) \[(\d+)\]', r'undefined1 \1Data\2 [\3]'),
        (r'undefined1 (\w+)Index(\d+) \[(\d+)\]', r'undefined1 \1Index\2 [\3]'),
        (r'undefined1 (\w+)FrameIndex(\d+) \[(\d+)\]', r'undefined1 \1FrameIndex\2 [\3]'),
        (r'undefined1 (\w+)Count(\d+) \[(\d+)\]', r'undefined1 \1Count\2 [\3]'),
        (r'undefined1 (\w+)Size(\d+) \[(\d+)\]', r'undefined1 \1Size\2 [\3]'),
        (r'undefined1 (\w+)ArrayIndex(\d+) \[(\d+)\]', r'undefined1 \1ArrayIndex\2 [\3]'),
        (r'undefined1 (\w+)DataSize(\d+) \[(\d+)\]', r'undefined1 \1DataSize\2 [\3]'),
        (r'undefined1 (\w+)Variable(\d+) \[(\d+)\]', r'undefined1 \1Variable\2 [\3]'),
        (r'undefined1 (\w+)Temp(\d+) \[(\d+)\]', r'undefined1 \1Temp\2 [\3]'),
        (r'undefined1 (\w+)Buffer(\d+) \[(\d+)\]', r'undefined1 \1Buffer\2 [\3]'),
        (r'undefined1 (\w+)Register(\d+) \[(\d+)\]', r'undefined1 \1Register\2 [\3]'),
        (r'undefined1 (\w+)Pointer(\d+) \[(\d+)\]', r'undefined1 \1Pointer\2 [\3]'),
        (r'undefined1 BlendBuffer\[(\d+)\]', r'undefined1 BlendBuffer [\1]'),
        (r'undefined1 textureCoords\[(\d+)\]', r'undefined1 TextureCoords [\1]'),
        (r'undefined1 renderBufferData\[(\d+)\]', r'undefined1 RenderBufferData [\1]'),
        (r'undefined1 shaderUniforms\[(\d+)\]', r'undefined1 ShaderUniforms [\1]'),
        (r'undefined1 SimdRegister\[(\d+)\]', r'undefined1 SimdRegister [\1]'),
        (r'undefined1 TempStackBuffer\[(\d+)\]', r'undefined1 TempStackBuffer [\1]'),
    ]
    
    for pattern, replacement in patterns:
        content = re.sub(pattern, replacement, content)
    
    return content

def rename_stack_variables(content):
    """重命名栈变量"""
    # 处理 uStack_ auStack_ 等栈变量
    patterns = [
        (r'uint64_t uStack_(\w+)', r'uint64_t StackUint\1'),
        (r'ulonglong uStack_(\w+)', r'ulonglong StackUlong\1'),
        (r'uint uStack_(\w+)', r'uint StackUint\1'),
        (r'undefined4 uStack_(\w+)', r'undefined4 StackUint\1'),
        (r'undefined1 uStack_(\w+)', r'undefined1 StackUbyte\1'),
        (r'byte \*pbVar(\d+)', r'byte *PointerByte\1'),
        (r'byte \*pbVar(\w+)', r'byte *PointerByte\1'),
        (r'byte \*pbStack_(\w+)', r'byte *PointerStack\1'),
        (r'byte \*pbStack(\w+)', r'byte *PointerStack\1'),
        (r'byte \*pb(\w+)', r'byte *Pointer\1'),
        (r'uint64_t \*puStack_(\w+)', r'uint64_t *PointerStackUint\1'),
        (r'uint64_t \*puStack(\w+)', r'uint64_t *PointerStackUint\1'),
        (r'undefined4 \*puStack_(\w+)', r'undefined4 *PointerStackUint\1'),
        (r'undefined4 \*puStack(\w+)', r'undefined4 *PointerStackUint\1'),
        (r'undefined1 \*pauStack_(\w+)', r'undefined1 *PointerArrayStack\1'),
        (r'undefined1 \*pauStack(\w+)', r'undefined1 *PointerArrayStack\1'),
        (r'undefined1 \*p(\w+)', r'undefined1 *Pointer\1'),
        (r'uint64_t \*p(\w+)', r'uint64_t *Pointer\1'),
        (r'ulonglong \*p(\w+)', r'ulonglong *Pointer\1'),
        (r'undefined4 \*p(\w+)', r'undefined4 *Pointer\1'),
        (r'undefined1 \*p(\w+)', r'undefined1 *Pointer\1'),
        (r'undefined1 \*p(\w+)', r'undefined1 *Pointer\1'),
        (r'longlong \*plonglong(\w+)', r'longlong *PointerLong\1'),
        (r'longlong \*p(\w+)', r'longlong *Pointer\1'),
        (r'uint64_t \*puiStack_(\w+)', r'uint64_t *PointerUiStack\1'),
        (r'uint64_t \*puiStack(\w+)', r'uint64_t *PointerUiStack\1'),
        (r'float \*pfStack_(\w+)', r'float *PointerFloatStack\1'),
        (r'float \*pfStack(\w+)', r'float *PointerFloatStack\1'),
        (r'float \*pf(\w+)', r'float *PointerFloat\1'),
        (r'float \*fStack_(\w+)', r'float *FloatStack\1'),
        (r'float \*fStack(\w+)', r'float *FloatStack\1'),
        (r'float fStack_(\w+)', r'float FloatStack\1'),
        (r'float fStack(\w+)', r'float FloatStack\1'),
        (r'double dStack_(\w+)', r'double DoubleStack\1'),
        (r'double dStack(\w+)', r'double DoubleStack\1'),
        (r'int iVar(\d+)', r'int Integer\1'),
        (r'int iVar(\w+)', r'int Integer\1'),
        (r'int iStack_(\w+)', r'int IntegerStack\1'),
        (r'int iStack(\w+)', r'int IntegerStack\1'),
        (r'int local_(\w+)', r'int Local\1'),
        (r'uint uStack_(\w+)', r'uint UnsignedStack\1'),
        (r'uint uStack(\w+)', r'uint UnsignedStack\1'),
        (r'uint local_(\w+)', r'uint Local\1'),
        (r'ulonglong local_(\w+)', r'ulonglong Local\1'),
        (r'undefined4 local_(\w+)', r'undefined4 Local\1'),
        (r'undefined1 local_(\w+)', r'undefined1 Local\1'),
        (r'byte bVar(\d+)', r'byte Byte\1'),
        (r'byte bVar(\w+)', r'byte Byte\1'),
        (r'byte bStack_(\w+)', r'byte ByteStack\1'),
        (r'byte bStack(\w+)', r'byte ByteStack\1'),
        (r'byte local_(\w+)', r'byte Local\1'),
        (r'undefined \*undefined(\w+)', r'undefined *UndefinedPointer\1'),
        (r'undefined \*(\w+)', r'undefined *Pointer\1'),
        (r'undefined (\w+)', r'undefined Undefined\1'),
        (r'undefined4 (\w+)', r'undefined4 Uint\1'),
        (r'undefined2 (\w+)', r'undefined2 Ushort\1'),
        (r'undefined1 (\w+)', r'undefined1 Ubyte\1'),
        (r'undefined8 (\w+)', r'undefined8 Ulong\1'),
        (r'longlong (\w+)', r'longlong Long\1'),
        (r'ulonglong (\w+)', r'ulonglong Ulong\1'),
        (r'uint (\w+)', r'uint Uint\1'),
        (r'int (\w+)', r'int Integer\1'),
        (r'float (\w+)', r'float Float\1'),
        (r'double (\w+)', r'double Double\1'),
        (r'byte (\w+)', r'byte Byte\1'),
        (r'char (\w+)', r'char Char\1'),
        (r'short (\w+)', r'short Short\1'),
        (r'ushort (\w+)', r'ushort Ushort\1'),
        (r'void \*(\w+)', r'void *Pointer\1'),
    ]
    
    for pattern, replacement in patterns:
        content = re.sub(pattern, replacement, content)
    
    return content

def rename_function_variables(content):
    """重命名函数中的变量引用"""
    # 处理函数内部的变量引用
    patterns = [
        (r'uStack_(\w+)', r'StackUint\1'),
        (r'auStack_(\w+)', r'ArrayStack\1'),
        (r'pbVar(\d+)', r'PointerByte\1'),
        (r'pbVar(\w+)', r'PointerByte\1'),
        (r'pbStack_(\w+)', r'PointerStack\1'),
        (r'pbStack(\w+)', r'PointerStack\1'),
        (r'pb(\w+)', r'Pointer\1'),
        (r'puStack_(\w+)', r'PointerStackUint\1'),
        (r'puStack(\w+)', r'PointerStackUint\1'),
        (r'pauStack_(\w+)', r'PointerArrayStack\1'),
        (r'pauStack(\w+)', r'PointerArrayStack\1'),
        (r'p(\w+)', r'Pointer\1'),
        (r'plonglong(\w+)', r'PointerLong\1'),
        (r'puiStack_(\w+)', r'PointerUiStack\1'),
        (r'puiStack(\w+)', r'PointerUiStack\1'),
        (r'pfStack_(\w+)', r'PointerFloatStack\1'),
        (r'pfStack(\w+)', r'PointerFloatStack\1'),
        (r'pf(\w+)', r'PointerFloat\1'),
        (r'fStack_(\w+)', r'FloatStack\1'),
        (r'fStack(\w+)', r'FloatStack\1'),
        (r'dStack_(\w+)', r'DoubleStack\1'),
        (r'dStack(\w+)', r'DoubleStack\1'),
        (r'iVar(\d+)', r'Integer\1'),
        (r'iVar(\w+)', r'Integer\1'),
        (r'iStack_(\w+)', r'IntegerStack\1'),
        (r'iStack(\w+)', r'IntegerStack\1'),
        (r'local_(\w+)', r'Local\1'),
        (r'bVar(\d+)', r'Byte\1'),
        (r'bVar(\w+)', r'Byte\1'),
        (r'bStack_(\w+)', r'ByteStack\1'),
        (r'bStack(\w+)', r'ByteStack\1'),
        (r'undefined(\w+)', r'Undefined\1'),
        (r'in_(\w+)', r'Input\1'),
        (r'out_(\w+)', r'Output\1'),
        (r'temp(\w+)', r'Temp\1'),
        (r'cnt(\w+)', r'Count\1'),
        (r'idx(\w+)', r'Index\1'),
        (r'len(\w+)', r'Length\1'),
        (r'siz(\w+)', r'Size\1'),
        (r'off(\w+)', r'Offset\1'),
        (r'flg(\w+)', r'Flag\1'),
        (r'stat(\w+)', r'Status\1'),
        (r'err(\w+)', r'Error\1'),
        (r'res(\w+)', r'Result\1'),
        (r'val(\w+)', r'Value\1'),
        (r'dat(\w+)', r'Data\1'),
        (r'buf(\w+)', r'Buffer\1'),
        (r'ptr(\w+)', r'Pointer\1'),
        (r'hdl(\w+)', r'Handle\1'),
        (r'ctx(\w+)', r'Context\1'),
        (r'cfg(\w+)', r'Config\1'),
        (r'param(\w+)', r'Parameter\1'),
        (r'arg(\w+)', r'Argument\1'),
        (r'ret(\w+)', r'Return\1'),
        (r'cur(\w+)', r'Current\1'),
        (r'prev(\w+)', r'Previous\1'),
        (r'next(\w+)', r'Next\1'),
        (r'first(\w+)', r'First\1'),
        (r'last(\w+)', r'Last\1'),
        (r'min(\w+)', r'Minimum\1'),
        (r'max(\w+)', r'Maximum\1'),
        (r'sum(\w+)', r'Sum\1'),
        (r'avg(\w+)', r'Average\1'),
        (r'tot(\w+)', r'Total\1'),
        (r'num(\w+)', r'Number\1'),
        (r'str(\w+)', r'String\1'),
        (r'chr(\w+)', r'Character\1'),
        (r'arr(\w+)', r'Array\1'),
        (r'lst(\w+)', r'List\1'),
        (r'vec(\w+)', r'Vector\1'),
        (r'mtx(\w+)', r'Matrix\1'),
        (r'quat(\w+)', r'Quaternion\1'),
        (r'col(\w+)', r'Color\1'),
        (r'pos(\w+)', r'Position\1'),
        (r'rot(\w+)', r'Rotation\1'),
        (r'scl(\w+)', r'Scale\1'),
        (r'trans(\w+)', r'Transform\1'),
        (r'anim(\w+)', r'Animation\1'),
        (r'tex(\w+)', r'Texture\1'),
        (r'mat(\w+)', r'Material\1'),
        (r'mesh(\w+)', r'Mesh\1'),
        (r'cam(\w+)', r'Camera\1'),
        (r'light(\w+)', r'Light\1'),
        (r'shadow(\w+)', r'Shadow\1'),
        (r'fog(\w+)', r'Fog\1'),
        (r'sky(\w+)', r'Sky\1'),
        (r'water(\w+)', r'Water\1'),
        (r'terrain(\w+)', r'Terrain\1'),
        (r'vegetation(\w+)', r'Vegetation\1'),
        (r'particle(\w+)', r'Particle\1'),
        (r'effect(\w+)', r'Effect\1'),
        (r'sound(\w+)', r'Sound\1'),
        (r'music(\w+)', r'Music\1'),
        (r'ui(\w+)', r'Ui\1'),
        (r'gui(\w+)', r'Gui\1'),
        (r'hud(\w+)', r'Hud\1'),
        (r'widget(\w+)', r'Widget\1'),
        (r'control(\w+)', r'Control\1'),
        (r'button(\w+)', r'Button\1'),
        (r'textbox(\w+)', r'Textbox\1'),
        (r'label(\w+)', r'Label\1'),
        (r'image(\w+)', r'Image\1'),
        (r'panel(\w+)', r'Panel\1'),
        (r'window(\w+)', r'Window\1'),
        (r'dialog(\w+)', r'Dialog\1'),
        (r'menu(\w+)', r'Menu\1'),
        (r'toolbar(\w+)', r'Toolbar\1'),
        (r'statusbar(\w+)', r'Statusbar\1'),
        (r'scrollbar(\w+)', r'Scrollbar\1'),
        (r'progress(\w+)', r'Progress\1'),
        (r'slider(\w+)', r'Slider\1'),
        (r'checkbox(\w+)', r'Checkbox\1'),
        (r'radiobutton(\w+)', r'Radiobutton\1'),
        (r'combobox(\w+)', r'Combobox\1'),
        (r'listbox(\w+)', r'Listbox\1'),
        (r'treeview(\w+)', r'Treeview\1'),
        (r'tabcontrol(\w+)', r'Tabcontrol\1'),
        (r'grid(\w+)', r'Grid\1'),
        (r'table(\w+)', r'Table\1'),
        (r'chart(\w+)', r'Chart\1'),
        (r'graph(\w+)', r'Graph\1'),
        (r'plot(\w+)', r'Plot\1'),
        (r'map(\w+)', r'Map\1'),
        (r'radar(\w+)', r'Radar\1'),
        (r'compass(\w+)', r'Compass\1'),
        (r'clock(\w+)', r'Clock\1'),
        (r'timer(\w+)', r'Timer\1'),
        (r'counter(\w+)', r'Counter\1'),
        (r'meter(\w+)', r'Meter\1'),
        (r'gauge(\w+)', r'Gauge\1'),
        (r'thermometer(\w+)', r'Thermometer\1'),
        (r'barometer(\w+)', r'Barometer\1'),
        (r'hygrometer(\w+)', r'Hygrometer\1'),
        (r'anemometer(\w+)', r'Anemometer\1'),
        (r'seismometer(\w+)', r'Seismometer\1'),
        (r'gravimeter(\w+)', r'Gravimeter\1'),
        (r'magnetometer(\w+)', r'Magnetometer\1'),
        (r'gyroscope(\w+)', r'Gyroscope\1'),
        (r'accelerometer(\w+)', r'Accelerometer\1'),
        (r'altimeter(\w+)', r'Altimeter\1'),
        (r'speedometer(\w+)', r'Speedometer\1'),
        (r'tachometer(\w+)', r'Tachometer\1'),
        (r'odometer(\w+)', r'Odometer\1'),
        (r'tripmeter(\w+)', r'Tripmeter\1'),
        (r'fuelgauge(\w+)', r'Fuelgauge\1'),
        (r'temperaturegauge(\w+)', r'Temperaturegauge\1'),
        (r'pressuregauge(\w+)', r'Pressuregauge\1'),
        (r'voltagegauge(\w+)', r'Voltagegauge\1'),
        (r'currentgauge(\w+)', r'Currentgauge\1'),
        (r'powergauge(\w+)', r'Powergauge\1'),
        (r'energymeter(\w+)', r'Energymeter\1'),
        (r'frequencymeter(\w+)', r'Frequencymeter\1'),
        (r'wavelengthmeter(\w+)', r'Wavelengthmeter\1'),
        (r'amplitudemeter(\w+)', r'Amplitudemeter\1'),
        (r'phasemeter(\w+)', r'Phasemeter\1'),
        (r'impedancemeter(\w+)', r'Impedancemeter\1'),
        (r'admittancemeter(\w+)', r'Admittancemeter\1'),
        (r'reactancemeter(\w+)', r'Reactancemeter\1'),
        (r'susceptancemeter(\w+)', r'Susceptancemeter\1'),
        (r'conductancemeter(\w+)', r'Conductancemeter\1'),
        (r'resistancemeter(\w+)', r'Resistancemeter\1'),
        (r'conductivitymeter(\w+)', r'Conductivitymeter\1'),
        (r'resistivitymeter(\w+)', r'Resistivitymeter\1'),
        (r'permeabilitymeter(\w+)', r'Permeabilitymeter\1'),
        (r'permittivitymeter(\w+)', r'Permittivitymeter\1'),
        (r'dielectricmeter(\w+)', r'Dielectricmeter\1'),
        (r'magneticmeter(\w+)', r'Magneticmeter\1'),
        (r'electricmeter(\w+)', r'Electricmeter\1'),
        (r'electromagneticmeter(\w+)', r'Electromagneticmeter\1'),
        (r'opticalmeter(\w+)', r'Opticalmeter\1'),
        (r'luminositymeter(\w+)', r'Luminositymeter\1'),
        (r'intensitymeter(\w+)', r'Intensitymeter\1'),
        (r'brightnessmeter(\w+)', r'Brightnessmeter\1'),
        (r'colormeter(\w+)', r'Colormeter\1'),
        (r'huegauge(\w+)', r'Huegauge\1'),
        (r'saturationgauge(\w+)', r'Saturationgauge\1'),
        (r'lightnessgauge(\w+)', r'Lightnessgauge\1'),
        (r'chromagauge(\w+)', r'Chromagauge\1'),
        (r'contrastgauge(\w+)', r'Contrastgauge\1'),
        (r'gamma(\w+)', r'Gamma\1'),
        (r'alpha(\w+)', r'Alpha\1'),
        (r'beta(\w+)', r'Beta\1'),
        (r'delta(\w+)', r'Delta\1'),
        (r'epsilon(\w+)', r'Epsilon\1'),
        (r'zeta(\w+)', r'Zeta\1'),
        (r'eta(\w+)', r'Eta\1'),
        (r'theta(\w+)', r'Theta\1'),
        (r'iota(\w+)', r'Iota\1'),
        (r'kappa(\w+)', r'Kappa\1'),
        (r'lambda(\w+)', r'Lambda\1'),
        (r'mu(\w+)', r'Mu\1'),
        (r'nu(\w+)', r'Nu\1'),
        (r'xi(\w+)', r'Xi\1'),
        (r'omicron(\w+)', r'Omicron\1'),
        (r'pi(\w+)', r'Pi\1'),
        (r'rho(\w+)', r'Rho\1'),
        (r'sigma(\w+)', r'Sigma\1'),
        (r'tau(\w+)', r'Tau\1'),
        (r'upsilon(\w+)', r'Upsilon\1'),
        (r'phi(\w+)', r'Phi\1'),
        (r'chi(\w+)', r'Chi\1'),
        (r'psi(\w+)', r'Psi\1'),
        (r'omega(\w+)', r'Omega\1'),
    ]
    
    for pattern, replacement in patterns:
        content = re.sub(pattern, replacement, content)
    
    return content

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("Usage: python beautify_ui_variables.py <file_path>")
        return
    
    file_path = sys.argv[1]
    
    print(f"Reading file: {file_path}")
    content = read_file(file_path)
    
    print("Renaming undefined variables...")
    content = rename_undefined_variables(content)
    
    print("Renaming stack variables...")
    content = rename_stack_variables(content)
    
    print("Renaming function variables...")
    content = rename_function_variables(content)
    
    print("Writing file...")
    write_file(file_path, content)
    
    print("Variable beautification completed!")

if __name__ == "__main__":
    main()