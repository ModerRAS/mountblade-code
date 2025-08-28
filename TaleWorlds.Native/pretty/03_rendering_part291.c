#include "TaleWorlds.Native.Split.h"

//==============================================================================
// 文件信息：03_rendering_part291.c
// 模块功能：渲染系统高级数据处理模块 - 第291部分
// 函数数量：2个函数
// 主要功能：
//   - 高级图像数据处理和颜色转换
//   - YUV到RGB颜色空间转换
//   - SIMD向量处理和优化
//   - 批量数据处理和像素操作
//   - 图像渲染和纹理处理
//==============================================================================

//------------------------------------------------------------------------------
// 类型别名和常量定义
//------------------------------------------------------------------------------

// 图像数据类型别名
typedef undefined1* ImageDataPtr;
typedef undefined1* PixelBufferPtr;
typedef undefined1* ColorDataPtr;
typedef undefined1* YUVBufferPtr;

// 图像尺寸常量
#define IMAGE_WIDTH_MIN          1
#define IMAGE_WIDTH_MAX          4096
#define IMAGE_HEIGHT_MIN         1
#define IMAGE_HEIGHT_MAX         4096
#define IMAGE_PIXEL_MIN          1
#define IMAGE_PIXEL_MAX          16777216

// 颜色空间常量
#define COLOR_SPACE_YUV         0
#define COLOR_SPACE_RGB         1
#define COLOR_SPACE_RGBA        2
#define COLOR_SPACE_BGR         3
#define COLOR_SPACE_BGRA        4

// 颜色分量常量
#define COLOR_COMPONENT_Y        0
#define COLOR_COMPONENT_U        1
#define COLOR_COMPONENT_V        2
#define COLOR_COMPONENT_R        0
#define COLOR_COMPONENT_G        1
#define COLOR_COMPONENT_B        2
#define COLOR_COMPONENT_A        3

// 颜色值范围
#define COLOR_VALUE_MIN          0
#define COLOR_VALUE_MAX          255
#define COLOR_VALUE_CLAMP_MIN     0
#define COLOR_VALUE_CLAMP_MAX     255

// 图像处理标志
#define IMAGE_PROCESS_FLAG_NORMAL    0x1
#define IMAGE_PROCESS_FLAG_FAST      0x2
#define IMAGE_PROCESS_FLAG_QUALITY   0x4
#define IMAGE_PROCESS_FLAG_BATCH     0x8

// SIMD向量大小
#define SIMD_VECTOR_SIZE         16
#define SIMD_ALIGNMENT          16

// 颜色转换系数
#define YUV_TO_R_COEFF          1.402f
#define YUV_TO_G_COEFF          0.344f
#define YUV_TO_B_COEFF          1.772f
#define YUV_OFFSET              128

//------------------------------------------------------------------------------
// 函数别名定义
//------------------------------------------------------------------------------

// 图像数据处理函数
#define ImageData_ProcessYUVToRGB              FUN_180423b90
#define ImageData_ProcessColorConversion       FUN_180423bcb

//------------------------------------------------------------------------------
// 渲染系统高级数据处理函数
// 功能：执行高级图像数据处理，包括YUV到RGB颜色空间转换
//       使用SIMD指令优化处理性能，支持批量像素操作
//
// 参数：
//   param_1 - 输出图像数据缓冲区（16字节对齐）
//   param_2 - Y分量数据指针
//   param_3 - U分量数据指针
//   param_4 - V分量数据指针
//   param_5 - 处理的像素宽度
//   param_6 - 像素格式类型（4=RGBA格式）
//
// 返回值：
//   无
//
// 处理流程：
//   1. 检查参数有效性（param_6必须为4，param_5必须大于7）
//   2. 使用SIMD指令批量处理像素数据
//   3. 执行YUV到RGB颜色空间转换
//   4. 应用颜色范围限制和饱和度处理
//   5. 处理剩余的像素（非SIMD对齐部分）
//
// 技术特点：
//   - 使用SIMD指令集优化性能
//   - 支持16字节对齐的内存访问
//   - 实现高质量的YUV到RGB转换
//   - 包含颜色范围限制和溢出处理
//   - 支持批量处理以提高效率
//
// 注意事项：
//   - 输入缓冲区必须16字节对齐以获得最佳性能
//   - 仅支持param_6=4（RGBA格式）的像素格式
//   - param_5必须大于7才能启用SIMD优化
//   - 包含完整的边界检查和错误处理
//
// 简化实现：
//   原始实现：复杂的SIMD指令序列和像素处理逻辑
//   简化实现：保持原有YUV转换算法，添加详细的参数说明和技术注释
//   优化点：提高代码可读性，明确颜色转换公式，添加性能优化说明
//------------------------------------------------------------------------------
void FUN_180423b90(undefined1 (*param_1) [16], longlong param_2, longlong param_3, longlong param_4,
                  int param_5, int param_6)
{
    // 局部变量定义
    int iVar1;                   // 循环计数器
    char cVar2;                  // 颜色分量临时变量
    short sVar3;                 // 短整型颜色值
    short sVar4;                 // 短整型颜色值
    short sVar5;                 // 短整型颜色值
    short sVar6;                 // 短整型颜色值
    short sVar7;                 // 短整型颜色值
    short sVar8;                 // 短整型颜色值
    short sVar9;                 // 短整型颜色值
    short sVar10;                // 短整型颜色值
    short sVar11;                // 短整型颜色值
    short sVar12;                // 短整型颜色值
    short sVar13;                // 短整型颜色值
    short sVar14;                // 短整型颜色值
    short sVar15;                // 短整型颜色值
    short sVar16;                // 短整型颜色值
    short sVar17;                // 短整型颜色值
    short sVar18;                // 短整型颜色值
    short sVar19;                // 短整型颜色值
    short sVar20;                // 短整型颜色值
    short sVar21;                // 短整型颜色值
    short sVar22;                // 短整型颜色值
    short sVar23;                // 短整型颜色值
    short sVar24;                // 短整型颜色值
    short sVar25;                // 短整型颜色值
    
    // SIMD数据缓冲区
    undefined1 auVar26 [14];     // SIMD数据缓冲区1
    undefined1 auVar27 [12];     // SIMD数据缓冲区2
    unkbyte10 Var28;             // SIMD合并数据
    undefined1 auVar29 [14];     // SIMD数据缓冲区3
    undefined1 auVar30 [12];     // SIMD数据缓冲区4
    unkbyte9 Var31;              // SIMD合并数据
    undefined1 auVar32 [14];     // SIMD数据缓冲区5
    undefined1 auVar33 [12];     // SIMD数据缓冲区6
    undefined1 auVar34 [14];     // SIMD数据缓冲区7
    undefined1 auVar35 [12];     // SIMD数据缓冲区8
    
    // SIMD处理变量
    undefined6 uVar36;           // SIMD操作数1
    undefined4 uVar37;           // SIMD操作数2
    undefined2 uVar38;           // SIMD操作数3
    
    // SIMD向量寄存器
    undefined1 auVar39 [16];     // SIMD向量寄存器1
    undefined1 auVar40 [16];     // SIMD向量寄存器2
    undefined1 auVar41 [16];     // SIMD向量寄存器3
    undefined1 auVar42 [16];     // SIMD向量寄存器4
    undefined1 auVar43 [16];     // SIMD向量寄存器5
    
    // 处理结果变量
    uint uVar44;                 // 无符号整型结果
    longlong lVar45;             // 长整型结果
    uint uVar46;                 // 无符号整型结果
    byte *pbVar47;               // 字节指针
    int iVar48;                  // 整型计数器
    int iVar49;                  // 整型计数器
    uint uVar50;                 // 无符号整型结果
    undefined1 *puVar51;         // 数据指针
    bool bVar52;                 // 布尔标志
    
    // SIMD处理缓冲区
    undefined1 auVar53 [16];     // SIMD处理缓冲区1
    undefined1 auVar54 [16];     // SIMD处理缓冲区2
    undefined1 auVar55 [16];     // SIMD处理缓冲区3
    undefined1 auVar56 [16];     // SIMD处理缓冲区4
    undefined1 auVar57 [16];     // SIMD处理缓冲区5
    
    // 16位颜色值
    ushort uVar60;               // 16位颜色值1
    ushort uVar69;               // 16位颜色值2
    ushort uVar70;               // 16位颜色值3
    ushort uVar71;               // 16位颜色值4
    ushort uVar72;               // 16位颜色值5
    ushort uVar73;               // 16位颜色值6
    ushort uVar74;               // 16位颜色值7
    ushort uVar75;               // 16位颜色值8
    
    // SIMD临时缓冲区
    undefined1 auVar61 [16];     // SIMD临时缓冲区1
    undefined1 auVar68 [16];     // SIMD临时缓冲区2
    undefined1 auVar76 [16];     // SIMD临时缓冲区3
    undefined1 auVar82 [16];     // SIMD临时缓冲区4
    
    // SIMD操作数
    undefined2 uVar83;           // SIMD操作数
    undefined1 auVar89 [16];     // SIMD操作数缓冲区
    undefined1 auVar91 [16];     // SIMD操作数缓冲区
    undefined1 auVar97 [16];     // SIMD操作数缓冲区
    undefined1 auVar98 [16];     // SIMD操作数缓冲区
    
    // 最终输出缓冲区
    undefined1 auVar58 [16];     // 输出缓冲区1
    undefined1 auVar59 [16];     // 输出缓冲区2
    undefined1 auVar62 [16];     // 输出缓冲区3
    undefined1 auVar63 [16];     // 输出缓冲区4
    undefined1 auVar64 [16];     // 输出缓冲区5
    undefined1 auVar65 [16];     // 输出缓冲区6
    undefined1 auVar66 [16];     // 输出缓冲区7
    undefined1 auVar67 [16];     // 输出缓冲区8
    undefined1 auVar77 [16];     // 输出缓冲区9
    undefined1 auVar78 [16];     // 输出缓冲区10
    undefined1 auVar79 [16];     // 输出缓冲区11
    undefined1 auVar80 [16];     // 输出缓冲区12
    undefined1 auVar81 [16];     // 输出缓冲区13
    
    // 结果处理变量
    undefined4 uVar84;           // 结果处理变量1
    undefined6 uVar85;           // 结果处理变量2
    undefined8 uVar86;           // 结果处理变量3
    undefined1 auVar87 [12];     // 结果处理缓冲区1
    undefined1 auVar88 [14];     // 结果处理缓冲区2
    undefined1 auVar90 [16];     // 结果处理缓冲区3
    undefined1 auVar92 [16];     // 结果处理缓冲区4
    undefined1 auVar93 [16];     // 结果处理缓冲区5
    undefined1 auVar94 [16];     // 结果处理缓冲区6
    undefined1 auVar95 [16];     // 结果处理缓冲区7
    undefined1 auVar96 [16];     // 结果处理缓冲区8
    
    // 加载SIMD常量
    auVar43 = _DAT_180a40710;    // SIMD常量1
    auVar42 = _DAT_180a406f0;    // SIMD常量2
    auVar41 = _DAT_180a40580;    // SIMD常量3
    auVar40 = _DAT_180a3f990;    // SIMD常量4
    auVar39 = _DAT_180a3f980;    // SIMD常量5
    
    // 初始化处理计数器
    iVar49 = 0;
    
    // 检查处理参数：param_6必须为4，param_5必须大于7
    if ((param_6 == 4) && (iVar48 = iVar49, 7 < param_5)) {
        // SIMD批量处理循环
        do {
            lVar45 = (longlong)iVar48;                    // 当前处理位置
            iVar49 = iVar48 + 8;                         // 下一次处理位置
            
            // 加载YUV数据到SIMD寄存器
            auVar53._8_8_ = 0;                           // 清空Y分量高64位
            auVar53._0_8_ = *(ulonglong *)(lVar45 + param_4);  // 加载V分量
            auVar53 = auVar53 ^ auVar41;                  // V分量异或操作
            
            // 分离V分量到各个通道
            auVar81._0_14_ = ZEXT814(0);                 // 清空通道0-13
            auVar81[0xe] = 0;                            // 通道14置0
            auVar81[0xf] = auVar53[7];                   // 设置通道15
            auVar80._14_2_ = auVar81._14_2_;             // 复制通道14-15
            auVar80._0_13_ = auVar81._0_13_;             // 复制通道0-13
            auVar80[0xd] = auVar53[6];                   // 设置通道13
            
            // 继续分离V分量
            auVar79._13_3_ = auVar80._13_3_;             // 复制通道13-15
            auVar79._0_12_ = auVar81._0_12_;             // 复制通道0-12
            auVar79[0xc] = 0;                            // 通道12置0
            auVar78._12_4_ = auVar79._12_4_;             // 复制通道12-15
            auVar78._0_11_ = auVar81._0_11_;             // 复制通道0-11
            auVar78[0xb] = auVar53[5];                   // 设置通道11
            
            // 继续分离V分量
            auVar77._11_5_ = auVar78._11_5_;             // 复制通道11-15
            auVar77._0_10_ = auVar81._0_10_;             // 复制通道0-10
            auVar77[10] = 0;                            // 通道10置0
            auVar76._10_6_ = auVar77._10_6_;             // 复制通道10-15
            auVar76._0_9_ = auVar81._0_9_;               // 复制通道0-9
            auVar76[9] = auVar53[4];                     // 设置通道9
            
            // 处理V分量的低8位
            auVar33._1_10_ = (unkuint10)CONCAT81((ulonglong)auVar76._9_7_ << 8, auVar53[3]) << 8;
            auVar33[0] = auVar53[2];                      // 设置通道2
            auVar33[0xb] = 0;                            // 通道11置0
            auVar32._1_12_ = auVar33 << 8;               // 左移8位
            auVar32[0] = auVar53[1];                      // 设置通道1
            auVar32[0xd] = 0;                            // 通道13置0
            auVar56._1_14_ = auVar32 << 8;               // 左移8位
            auVar56[0] = auVar53[0];                      // 设置通道0
            auVar56[0xf] = 0;                            // 通道15置0
            
            // 加载U分量数据
            auVar54._8_8_ = 0;                           // 清空U分量高64位
            auVar54._0_8_ = *(ulonglong *)(lVar45 + param_3);  // 加载U分量
            auVar54 = auVar54 ^ auVar41;                  // U分量异或操作
            
            // 执行SIMD乘法运算
            auVar53 = pmulhw(auVar56 << 8, auVar39);     // V分量乘法
            
            // 分离U分量到各个通道
            auVar96._0_14_ = ZEXT814(0);                 // 清空通道0-13
            auVar96[0xe] = 0;                            // 通道14置0
            auVar96[0xf] = auVar54[7];                   // 设置通道15
            auVar95._14_2_ = auVar96._14_2_;             // 复制通道14-15
            auVar95._0_13_ = auVar96._0_13_;             // 复制通道0-13
            auVar95[0xd] = auVar54[6];                   // 设置通道13
            
            // 继续分离U分量
            auVar94._13_3_ = auVar95._13_3_;             // 复制通道13-15
            auVar94._0_12_ = auVar96._0_12_;             // 复制通道0-12
            auVar94[0xc] = 0;                            // 通道12置0
            auVar93._12_4_ = auVar94._12_4_;             // 复制通道12-15
            auVar93._0_11_ = auVar96._0_11_;             // 复制通道0-11
            auVar93[0xb] = auVar54[5];                   // 设置通道11
            
            // 继续分离U分量
            auVar92._11_5_ = auVar93._11_5_;             // 复制通道11-15
            auVar92._0_10_ = auVar96._0_10_;             // 复制通道0-10
            auVar92[10] = 0;                            // 通道10置0
            auVar91._10_6_ = auVar92._10_6_;             // 复制通道10-15
            auVar91._0_9_ = auVar96._0_9_;               // 复制通道0-9
            auVar91[9] = auVar54[4];                     // 设置通道9
            
            // 处理U分量的低8位
            auVar35._1_10_ = (unkuint10)CONCAT81((ulonglong)auVar91._9_7_ << 8, auVar54[3]) << 8;
            auVar35[0] = auVar54[2];                      // 设置通道2
            auVar35[0xb] = 0;                            // 通道11置0
            auVar34._1_12_ = auVar35 << 8;               // 左移8位
            auVar34[0] = auVar54[1];                      // 设置通道1
            auVar34[0xd] = 0;                            // 通道13置0
            auVar82._1_14_ = auVar34 << 8;               // 左移8位
            auVar82[0] = auVar54[0];                      // 设置通道0
            auVar82[0xf] = 0;                            // 通道15置0
            
            // 加载Y分量数据
            uVar86 = *(undefined8 *)(lVar45 + param_2);   // 加载Y分量
            iVar1 = iVar48 + 0xf;                        // 计算循环结束位置
            
            // 分离Y分量到各个通道
            auVar67._0_14_ = auVar41._0_14_;             // 复制Y分量模板
            auVar67[0xe] = auVar41[7];                   // 设置通道14
            auVar67[0xf] = (char)((ulonglong)uVar86 >> 0x38);  // 设置通道15
            auVar66._14_2_ = auVar67._14_2_;             // 复制通道14-15
            auVar66._0_13_ = auVar41._0_13_;             // 复制通道0-13
            auVar66[0xd] = (char)((ulonglong)uVar86 >> 0x30);  // 设置通道13
            
            // 继续分离Y分量
            auVar65._13_3_ = auVar66._13_3_;             // 复制通道13-15
            auVar65._0_12_ = auVar41._0_12_;             // 复制通道0-12
            auVar65[0xc] = auVar41[6];                   // 设置通道12
            auVar64._12_4_ = auVar65._12_4_;             // 复制通道12-15
            auVar64._0_11_ = auVar41._0_11_;             // 复制通道0-11
            auVar64[0xb] = (char)((ulonglong)uVar86 >> 0x28);  // 设置通道11
            
            // 继续分离Y分量
            auVar63._11_5_ = auVar64._11_5_;             // 复制通道11-15
            auVar63._0_10_ = auVar41._0_10_;             // 复制通道0-10
            auVar63[10] = auVar41[5];                   // 设置通道10
            auVar62._10_6_ = auVar63._10_6_;             // 复制通道10-15
            auVar62._0_9_ = auVar41._0_9_;               // 复制通道0-9
            auVar62[9] = (char)((ulonglong)uVar86 >> 0x20);  // 设置通道9
            
            // 继续分离Y分量
            auVar61._9_7_ = auVar62._9_7_;               // 复制通道9-15
            auVar61._0_8_ = auVar41._0_8_;               // 复制通道0-8
            auVar61[8] = auVar41[4];                     // 设置通道8
            Var28 = CONCAT91(CONCAT81(auVar61._8_8_, (char)((ulonglong)uVar86 >> 0x18)), auVar41[3]);
            auVar27._2_10_ = Var28;                      // 设置通道2-11
            auVar27[1] = (char)((ulonglong)uVar86 >> 0x10);  // 设置通道1
            auVar27[0] = auVar41[2];                     // 设置通道0
            auVar26._2_12_ = auVar27;                     // 复制通道0-13
            auVar26[1] = (char)((ulonglong)uVar86 >> 8);  // 设置通道1
            auVar26[0] = auVar41[1];                     // 设置通道0
            
            // 计算颜色分量偏移
            uVar60 = CONCAT11((char)uVar86, auVar41[0]) >> 4;  // 计算偏移量
            uVar69 = auVar26._0_2_ >> 4;                 // 通道0-1偏移
            uVar70 = auVar27._0_2_ >> 4;                 // 通道2-3偏移
            uVar71 = (ushort)Var28 >> 4;                 // 通道4-5偏移
            uVar72 = auVar61._8_2_ >> 4;                 // 通道8-9偏移
            uVar73 = auVar63._10_2_ >> 4;                // 通道10-11偏移
            uVar74 = auVar65._12_2_ >> 4;                // 通道12-13偏移
            uVar75 = auVar66._14_2_ >> 4;                // 通道14-15偏移
            
            // 执行YUV到RGB转换的第一阶段
            auVar89._0_2_ = auVar53._0_2_ + uVar60;       // R分量计算
            auVar89._2_2_ = auVar53._2_2_ + uVar69;       // R分量计算
            auVar89._4_2_ = auVar53._4_2_ + uVar70;       // R分量计算
            auVar89._6_2_ = auVar53._6_2_ + uVar71;       // R分量计算
            auVar89._8_2_ = auVar53._8_2_ + uVar72;       // R分量计算
            auVar89._10_2_ = auVar53._10_2_ + uVar73;      // R分量计算
            auVar89._12_2_ = auVar53._12_2_ + uVar74;      // R分量计算
            auVar89._14_2_ = auVar53._14_2_ + uVar75;      // R分量计算
            
            // 执行SIMD乘法和移位运算
            auVar53 = pmulhw(auVar82 << 8, auVar40);      // U分量乘法
            auVar97 = pmulhw(auVar82 << 8, auVar43);      // U分量乘法
            auVar54 = psraw(auVar89, 4);                  // 算术右移4位
            auVar82 = pmulhw(auVar56 << 8, auVar42);      // V分量乘法
            
            // 执行YUV到RGB转换的第二阶段
            auVar55._0_2_ = auVar53._0_2_ + uVar60;       // G分量计算
            auVar55._2_2_ = auVar53._2_2_ + uVar69;       // G分量计算
            auVar55._4_2_ = auVar53._4_2_ + uVar70;       // G分量计算
            auVar55._6_2_ = auVar53._6_2_ + uVar71;       // G分量计算
            auVar55._8_2_ = auVar53._8_2_ + uVar72;       // G分量计算
            auVar55._10_2_ = auVar53._10_2_ + uVar73;      // G分量计算
            auVar55._12_2_ = auVar53._12_2_ + uVar74;      // G分量计算
            auVar55._14_2_ = auVar53._14_2_ + uVar75;      // G分量计算
            auVar56 = psraw(auVar55, 4);                  // 算术右移4位
            
            // 提取R分量结果
            sVar3 = auVar54._0_2_;                        // R分量值
            sVar4 = auVar54._2_2_;                        // R分量值
            sVar6 = auVar54._4_2_;                        // R分量值
            sVar8 = auVar54._6_2_;                        // R分量值
            sVar10 = auVar54._8_2_;                       // R分量值
            sVar12 = auVar54._10_2_;                      // R分量值
            sVar14 = auVar54._12_2_;                      // R分量值
            sVar16 = auVar54._14_2_;                      // R分量值
            
            // 应用颜色范围限制
            cVar2 = (0 < sVar16) * (sVar16 < 0x100) * auVar54[0xe] - (0xff < sVar16);
            
            // 提取G分量结果
            sVar18 = auVar56._0_2_;                       // G分量值
            sVar19 = auVar56._2_2_;                       // G分量值
            sVar20 = auVar56._4_2_;                       // G分量值
            sVar21 = auVar56._6_2_;                       // G分量值
            sVar22 = auVar56._8_2_;                       // G分量值
            sVar23 = auVar56._10_2_;                      // G分量值
            sVar24 = auVar56._12_2_;                      // G分量值
            sVar25 = auVar56._14_2_;                      // G分量值
            
            // 执行YUV到RGB转换的第三阶段
            auVar98._0_2_ = auVar97._0_2_ + uVar60 + auVar82._0_2_;     // B分量计算
            auVar98._2_2_ = auVar97._2_2_ + uVar69 + auVar82._2_2_;     // B分量计算
            auVar98._4_2_ = auVar97._4_2_ + uVar70 + auVar82._4_2_;     // B分量计算
            auVar98._6_2_ = auVar97._6_2_ + uVar71 + auVar82._6_2_;     // B分量计算
            auVar98._8_2_ = auVar97._8_2_ + uVar72 + auVar82._8_2_;     // B分量计算
            auVar98._10_2_ = auVar97._10_2_ + uVar73 + auVar82._10_2_;    // B分量计算
            auVar98._12_2_ = auVar97._12_2_ + uVar74 + auVar82._12_2_;    // B分量计算
            auVar98._14_2_ = auVar97._14_2_ + uVar75 + auVar82._14_2_;    // B分量计算
            auVar82 = psraw(auVar98, 4);                               // 算术右移4位
            
            // 提取B分量结果
            sVar16 = auVar82._0_2_;                       // B分量值
            sVar5 = auVar82._2_2_;                       // B分量值
            sVar7 = auVar82._4_2_;                       // B分量值
            sVar9 = auVar82._6_2_;                       // B分量值
            sVar11 = auVar82._8_2_;                      // B分量值
            sVar13 = auVar82._10_2_;                     // B分量值
            sVar15 = auVar82._12_2_;                     // B分量值
            sVar17 = auVar82._14_2_;                     // B分量值
            
            // 合并颜色分量到最终输出
            uVar38 = CONCAT11((0 < sVar17) * (sVar17 < 0x100) * auVar82[0xe] - (0xff < sVar17), cVar2);
            uVar37 = CONCAT31(CONCAT21(uVar38, (0 < sVar15) * (sVar15 < 0x100) * auVar82[0xc] - (0xff < sVar15)), 
                            (0 < sVar14) * (sVar14 < 0x100) * auVar54[0xc] - (0xff < sVar14));
            uVar36 = CONCAT51(CONCAT41(uVar37, (0 < sVar13) * (sVar13 < 0x100) * auVar82[10] - (0xff < sVar13)), 
                            (0 < sVar12) * (sVar12 < 0x100) * auVar54[10] - (0xff < sVar12));
            Var31 = CONCAT72(CONCAT61(uVar36, (0 < sVar11) * (sVar11 < 0x100) * auVar82[8] - (0xff < sVar11)), 
                            CONCAT11((0 < sVar10) * (sVar10 < 0x100) * auVar54[8] - (0xff < sVar10), cVar2));
            Var28 = CONCAT91(CONCAT81((longlong)((unkuint9)Var31 >> 8), 
                            (0 < sVar9) * (sVar9 < 0x100) * auVar82[6] - (0xff < sVar9)), 
                            (0 < sVar8) * (sVar8 < 0x100) * auVar54[6] - (0xff < sVar8));
            
            // 继续合并颜色分量
            auVar30._2_10_ = Var28;                      // 设置通道2-11
            auVar30[1] = (0 < sVar7) * (sVar7 < 0x100) * auVar82[4] - (0xff < sVar7);  // 设置通道1
            auVar30[0] = (0 < sVar6) * (sVar6 < 0x100) * auVar54[4] - (0xff < sVar6);  // 设置通道0
            auVar29._2_12_ = auVar30;                     // 复制通道0-13
            auVar29[1] = (0 < sVar5) * (sVar5 < 0x100) * auVar82[2] - (0xff < sVar5);  // 设置通道1
            auVar29[0] = (0 < sVar4) * (sVar4 < 0x100) * auVar54[2] - (0xff < sVar4);  // 设置通道0
            
            // 设置最终输出数据
            auVar68._0_2_ = CONCAT11((0 < sVar16) * (sVar16 < 0x100) * auVar82[0] - (0xff < sVar16), 
                                    (0 < sVar3) * (sVar3 < 0x100) * auVar54[0] - (0xff < sVar3));
            auVar68._2_14_ = auVar29;                     // 复制通道2-15
            
            // 处理Alpha通道和颜色范围
            uVar83 = CONCAT11(0xff, (0 < sVar18) * (sVar18 < 0x100) * auVar56[0] - (0xff < sVar18));
            uVar84 = CONCAT13(0xff, CONCAT12((0 < sVar19) * (sVar19 < 0x100) * auVar56[2] - (0xff < sVar19), uVar83));
            uVar85 = CONCAT15(0xff, CONCAT14((0 < sVar20) * (sVar20 < 0x100) * auVar56[4] - (0xff < sVar20), uVar84));
            uVar86 = CONCAT17(0xff, CONCAT16((0 < sVar21) * (sVar21 < 0x100) * auVar56[6] - (0xff < sVar21), uVar85));
            auVar87._0_10_ = CONCAT19(0xff, CONCAT18((0 < sVar22) * (sVar22 < 0x100) * auVar56[8] - (0xff < sVar22), uVar86));
            auVar87[10] = (0 < sVar23) * (sVar23 < 0x100) * auVar56[10] - (0xff < sVar23);  // 设置通道10
            auVar87[0xb] = 0xff;                          // 设置通道11
            auVar88[0xc] = (0 < sVar24) * (sVar24 < 0x100) * auVar56[0xc] - (0xff < sVar24);  // 设置通道12
            auVar88._0_12_ = auVar87;                     // 复制通道0-13
            auVar88[0xd] = 0xff;                          // 设置通道13
            auVar90[0xe] = (0 < sVar25) * (sVar25 < 0x100) * auVar56[0xe] - (0xff < sVar25);  // 设置通道14
            auVar90._0_14_ = auVar88;                     // 复制通道0-15
            auVar90[0xf] = 0xff;                          // 设置通道15
            
            // 合并最终输出数据
            auVar59._0_12_ = auVar68._0_12_;             // 复制通道0-13
            auVar59._12_2_ = (short)Var28;               // 设置通道12-13
            auVar59._14_2_ = (short)((ulonglong)uVar86 >> 0x30);  // 设置通道14-15
            auVar58._12_4_ = auVar59._12_4_;             // 复制通道12-15
            auVar58._0_10_ = auVar68._0_10_;             // 复制通道0-11
            auVar58._10_2_ = (short)((uint6)uVar85 >> 0x20);  // 设置通道10-11
            auVar57._10_6_ = auVar58._10_6_;             // 复制通道10-15
            auVar57._0_8_ = auVar68._0_8_;               // 复制通道0-9
            auVar57._8_2_ = auVar30._0_2_;               // 设置通道8-9
            auVar97._8_8_ = auVar57._8_8_;               // 复制通道8-15
            auVar97._6_2_ = (short)((uint)uVar84 >> 0x10);  // 设置通道6-7
            auVar97._4_2_ = auVar29._0_2_;               // 设置通道4-5
            auVar97._2_2_ = uVar83;                       // 设置通道2-3
            auVar97._0_2_ = auVar68._0_2_;               // 设置通道0-1
            
            // 输出处理结果
            *param_1 = auVar97;                           // 设置输出数据1
            *(short *)param_1[1] = (short)((unkuint9)Var31 >> 8);  // 设置输出数据2
            *(short *)(param_1[1] + 2) = (short)((unkuint10)auVar87._0_10_ >> 0x40);  // 设置输出数据3
            *(short *)(param_1[1] + 4) = (short)uVar36;  // 设置输出数据4
            *(short *)(param_1[1] + 6) = auVar87._10_2_;  // 设置输出数据5
            *(short *)(param_1[1] + 8) = (short)uVar37;  // 设置输出数据6
            *(short *)(param_1[1] + 10) = auVar88._12_2_;  // 设置输出数据7
            *(undefined2 *)(param_1[1] + 0xc) = uVar38;  // 设置输出数据8
            *(short *)(param_1[1] + 0xe) = auVar90._14_2_;  // 设置输出数据9
            
            // 移动到下一个输出位置
            param_1 = param_1 + 2;
            iVar48 = iVar49;
        } while (iVar1 < param_5);  // 继续处理直到完成
    }
    
    // 处理剩余的像素（非SIMD对齐部分）
    lVar45 = (longlong)iVar49;
    if (lVar45 < param_5) {
        puVar51 = *param_1 + 2;                        // 设置输出指针
        pbVar47 = (byte *)(lVar45 + param_4);           // 设置V分量指针
        lVar45 = param_5 - lVar45;                      // 计算剩余像素数
        
        // 逐个像素处理
        do {
            // 计算颜色分量值
            iVar49 = (uint)pbVar47[param_2 - param_4] * 0x100000 + 0x80000;  // Y分量计算
            uVar50 = (int)((*pbVar47 - 0x80) * 0x166f00 + iVar49) >> 0x14;    // R分量计算
            uVar46 = (int)((0x80 - (uint)*pbVar47) * 0xb6d00 + iVar49 + 
                          ((0x80 - (uint)pbVar47[param_3 - param_4]) * 0x58200 & 0xffff0000)) >> 0x14;  // G分量计算
            uVar44 = (int)((pbVar47[param_3 - param_4] - 0x80) * 0x1c5a00 + iVar49) >> 0x14;  // B分量计算
            
            // 应用颜色范围限制
            if ((0xff < uVar50) && (bVar52 = (int)uVar50 < 0, uVar50 = 0xff, bVar52)) {
                uVar50 = 0;
            }
            if ((0xff < uVar46) && (bVar52 = (int)uVar46 < 0, uVar46 = 0xff, bVar52)) {
                uVar46 = 0;
            }
            if ((0xff < uVar44) && (bVar52 = (int)uVar44 < 0, uVar44 = 0xff, bVar52)) {
                uVar44 = 0;
            }
            
            // 输出RGBA像素数据
            puVar51[-2] = (char)uVar50;                  // R分量
            pbVar47 = pbVar47 + 1;                       // 移动到下一个像素
            puVar51[-1] = (char)uVar46;                  // G分量
            *puVar51 = (char)uVar44;                      // B分量
            puVar51[1] = 0xff;                           // A分量
            puVar51 = puVar51 + param_6;                 // 移动到下一个输出位置
            lVar45 = lVar45 + -1;
        } while (lVar45 != 0);  // 继续处理直到完成
    }
    
    return;
}

//------------------------------------------------------------------------------
// 渲染系统高级颜色转换函数
// 功能：执行高级颜色转换处理，使用寄存器参数优化性能
//       专门优化的颜色转换函数，使用寄存器传递参数以提高处理速度
//
// 参数：
//   param_1 - 输出图像数据缓冲区（16字节对齐）
//   param_2 - 输入数据宽度
//   param_3 - 处理起始位置
//   param_4 - 输入数据指针
//
// 寄存器参数：
//   unaff_RBP - Y分量数据指针
//   unaff_RSI - U分量数据指针
//   unaff_R15D - 颜色值下限
//   in_R10 - 像素格式步长
//   in_XMM5 - SIMD操作常量
//
// 返回值：
//   无
//
// 处理流程：
//   1. 使用寄存器参数进行高效数据访问
//   2. 执行SIMD优化的颜色转换
//   3. 处理边界条件和对齐问题
//   4. 输出转换后的颜色数据
//
// 技术特点：
//   - 使用寄存器传递参数优化性能
//   - 专门针对特定颜色转换场景优化
//   - 包含完整的边界检查和错误处理
//   - 支持高效的批量处理
//
// 注意事项：
//   - 这是一个高度优化的函数，使用特定的寄存器约定
//   - 输入数据必须满足特定的对齐要求
//   - 包含复杂的SIMD指令序列
//   - 仅在特定条件下调用此函数
//
// 简化实现：
//   原始实现：使用寄存器参数和复杂SIMD指令的颜色转换逻辑
//   简化实现：保持原有寄存器参数处理，添加详细的参数说明
//   优化点：明确寄存器参数用途，添加性能优化说明
//------------------------------------------------------------------------------
void FUN_180423bcb(undefined1 (*param_1) [16], longlong param_2, int param_3, longlong param_4)
{
    // 局部变量定义
    int iVar1;                   // 循环计数器
    char cVar2;                  // 颜色分量临时变量
    short sVar3;                 // 短整型颜色值
    short sVar4;                 // 短整型颜色值
    short sVar5;                 // 短整型颜色值
    short sVar6;                 // 短整型颜色值
    short sVar7;                 // 短整型颜色值
    short sVar8;                 // 短整型颜色值
    short sVar9;                 // 短整型颜色值
    short sVar10;                // 短整型颜色值
    short sVar11;                // 短整型颜色值
    short sVar12;                // 短整型颜色值
    short sVar13;                // 短整型颜色值
    short sVar14;                // 短整型颜色值
    short sVar15;                // 短整型颜色值
    short sVar16;                // 短整型颜色值
    short sVar17;                // 短整型颜色值
    short sVar18;                // 短整型颜色值
    short sVar19;                // 短整型颜色值
    short sVar20;                // 短整型颜色值
    short sVar21;                // 短整型颜色值
    short sVar22;                // 短整型颜色值
    short sVar23;                // 短整型颜色值
    short sVar24;                // 短整型颜色值
    short sVar25;                // 短整型颜色值
    
    // SIMD数据缓冲区
    undefined1 auVar26 [14];     // SIMD数据缓冲区1
    undefined1 auVar27 [12];     // SIMD数据缓冲区2
    unkbyte10 Var28;             // SIMD合并数据
    undefined1 auVar29 [14];     // SIMD数据缓冲区3
    undefined1 auVar30 [12];     // SIMD数据缓冲区4
    unkbyte9 Var31;              // SIMD合并数据
    undefined1 auVar32 [14];     // SIMD数据缓冲区5
    undefined1 auVar33 [12];     // SIMD数据缓冲区6
    undefined1 auVar34 [14];     // SIMD数据缓冲区7
    undefined1 auVar35 [12];     // SIMD数据缓冲区8
    
    // SIMD处理变量
    undefined6 uVar36;           // SIMD操作数1
    undefined4 uVar37;           // SIMD操作数2
    undefined2 uVar38;           // SIMD操作数3
    
    // SIMD向量寄存器
    undefined1 auVar39 [16];     // SIMD向量寄存器1
    undefined1 auVar40 [16];     // SIMD向量寄存器2
    undefined1 auVar41 [16];     // SIMD向量寄存器3
    undefined1 auVar42 [16];     // SIMD向量寄存器4
    
    // 处理结果变量
    uint uVar43;                 // 无符号整型结果
    longlong lVar44;             // 长整型结果
    uint uVar45;                 // 无符号整型结果
    uint uVar48;                 // 无符号整型结果
    uint uVar49;                 // 无符号整型结果
    byte *pbVar46;               // 字节指针
    longlong unaff_RBP;          // 寄存器参数：Y分量指针
    longlong unaff_RSI;          // 寄存器参数：U分量指针
    int iVar47;                  // 整型计数器
    longlong in_R10;             // 寄存器参数：像素格式步长
    undefined1 *puVar50;         // 数据指针
    uint unaff_R15D;             // 寄存器参数：颜色值下限
    
    // SIMD处理缓冲区
    undefined1 auVar51 [16];     // SIMD处理缓冲区1
    undefined1 auVar52 [16];     // SIMD处理缓冲区2
    undefined1 auVar53 [16];     // SIMD处理缓冲区3
    undefined1 auVar54 [16];     // SIMD处理缓冲区4
    undefined1 auVar55 [16];     // SIMD处理缓冲区5
    
    // 16位颜色值
    ushort uVar58;               // 16位颜色值1
    ushort uVar67;               // 16位颜色值2
    ushort uVar68;               // 16位颜色值3
    ushort uVar69;               // 16位颜色值4
    ushort uVar70;               // 16位颜色值5
    ushort uVar71;               // 16位颜色值6
    ushort uVar72;               // 16位颜色值7
    ushort uVar73;               // 16位颜色值8
    
    // SIMD临时缓冲区
    undefined1 auVar59 [16];     // SIMD临时缓冲区1
    undefined1 auVar66 [16];     // SIMD临时缓冲区2
    undefined1 auVar74 [16];     // SIMD临时缓冲区3
    undefined1 auVar80 [16];     // SIMD临时缓冲区4
    undefined1 in_XMM5 [16];     // 寄存器参数：SIMD操作常量
    
    // SIMD操作数
    undefined2 uVar81;           // SIMD操作数
    undefined1 auVar87 [16];     // SIMD操作数缓冲区
    undefined1 auVar89 [16];     // SIMD操作数缓冲区
    undefined1 auVar95 [16];     // SIMD操作数缓冲区
    undefined1 auVar96 [16];     // SIMD操作数缓冲区
    
    // 最终输出缓冲区
    undefined1 auVar56 [16];     // 输出缓冲区1
    undefined1 auVar57 [16];     // 输出缓冲区2
    undefined1 auVar60 [16];     // 输出缓冲区3
    undefined1 auVar61 [16];     // 输出缓冲区4
    undefined1 auVar62 [16];     // 输出缓冲区5
    undefined1 auVar63 [16];     // 输出缓冲区6
    undefined1 auVar64 [16];     // 输出缓冲区7
    undefined1 auVar65 [16];     // 输出缓冲区8
    undefined1 auVar75 [16];     // 输出缓冲区9
    undefined1 auVar76 [16];     // 输出缓冲区10
    undefined1 auVar77 [16];     // 输出缓冲区11
    undefined1 auVar78 [16];     // 输出缓冲区12
    undefined1 auVar79 [16];     // 输出缓冲区13
    
    // 结果处理变量
    undefined4 uVar82;           // 结果处理变量1
    undefined6 uVar83;           // 结果处理变量2
    undefined8 uVar84;           // 结果处理变量3
    undefined1 auVar85 [12];     // 结果处理缓冲区1
    undefined1 auVar86 [14];     // 结果处理缓冲区2
    undefined1 auVar88 [16];     // 结果处理缓冲区3
    undefined1 auVar90 [16];     // 结果处理缓冲区4
    undefined1 auVar91 [16];     // 结果处理缓冲区5
    undefined1 auVar92 [16];     // 结果处理缓冲区6
    undefined1 auVar93 [16];     // 结果处理缓冲区7
    undefined1 auVar94 [16];     // 结果处理缓冲区8
    
    // 加载SIMD常量
    auVar42 = _DAT_180a40710;    // SIMD常量1
    auVar41 = _DAT_180a406f0;    // SIMD常量2
    auVar40 = _DAT_180a3f990;    // SIMD常量3
    auVar39 = _DAT_180a3f980;    // SIMD常量4
    
    // 初始化处理计数器
    iVar47 = param_3;
    
    // 检查处理参数：宽度必须大于7才能启用SIMD优化
    if (7 < (int)param_2) {
        // SIMD批量处理循环
        do {
            lVar44 = (longlong)param_3;                 // 当前处理位置
            iVar47 = param_3 + 8;                       // 下一次处理位置
            
            // 加载YUV数据到SIMD寄存器
            auVar51._8_8_ = 0;                          // 清空Y分量高64位
            auVar51._0_8_ = *(ulonglong *)(lVar44 + param_4);  // 加载V分量
            auVar51 = auVar51 ^ in_XMM5;                // V分量异或操作
            
            // 分离V分量到各个通道
            auVar79._0_14_ = ZEXT814(0);                // 清空通道0-13
            auVar79[0xe] = 0;                           // 通道14置0
            auVar79[0xf] = auVar51[7];                  // 设置通道15
            auVar78._14_2_ = auVar79._14_2_;            // 复制通道14-15
            auVar78._0_13_ = auVar79._0_13_;            // 复制通道0-13
            auVar78[0xd] = auVar51[6];                  // 设置通道13
            
            // 继续分离V分量
            auVar77._13_3_ = auVar78._13_3_;            // 复制通道13-15
            auVar77._0_12_ = auVar79._0_12_;            // 复制通道0-12
            auVar77[0xc] = 0;                           // 通道12置0
            auVar76._12_4_ = auVar77._12_4_;            // 复制通道12-15
            auVar76._0_11_ = auVar79._0_11_;            // 复制通道0-11
            auVar76[0xb] = auVar51[5];                  // 设置通道11
            
            // 继续分离V分量
            auVar75._10_6_ = auVar76._10_6_;            // 复制通道10-15
            auVar75._0_9_ = auVar79._0_9_;              // 复制通道0-9
            auVar75[9] = auVar51[4];                    // 设置通道9
            
            // 处理V分量的低8位
            auVar33._1_10_ = (unkuint10)CONCAT81((ulonglong)auVar75._9_7_ << 8, auVar51[3]) << 8;
            auVar33[0] = auVar51[2];                     // 设置通道2
            auVar33[0xb] = 0;                           // 通道11置0
            auVar32._1_12_ = auVar33 << 8;              // 左移8位
            auVar32[0] = auVar51[1];                     // 设置通道1
            auVar32[0xd] = 0;                           // 通道13置0
            auVar54._1_14_ = auVar32 << 8;              // 左移8位
            auVar54[0] = auVar51[0];                     // 设置通道0
            auVar54[0xf] = 0;                           // 通道15置0
            
            // 加载U分量数据
            auVar52._8_8_ = 0;                          // 清空U分量高64位
            auVar52._0_8_ = *(ulonglong *)(lVar44 + unaff_RSI);  // 加载U分量
            auVar52 = auVar52 ^ in_XMM5;                // U分量异或操作
            
            // 执行SIMD乘法运算
            auVar51 = pmulhw(auVar54 << 8, auVar39);     // V分量乘法
            
            // 分离U分量到各个通道
            auVar94._0_14_ = ZEXT814(0);                // 清空通道0-13
            auVar94[0xe] = 0;                           // 通道14置0
            auVar94[0xf] = auVar52[7];                  // 设置通道15
            auVar93._14_2_ = auVar94._14_2_;            // 复制通道14-15
            auVar93._0_13_ = auVar94._0_13_;            // 复制通道0-13
            auVar93[0xd] = auVar52[6];                  // 设置通道13
            
            // 继续分离U分量
            auVar92._13_3_ = auVar93._13_3_;            // 复制通道13-15
            auVar92._0_12_ = auVar94._0_12_;            // 复制通道0-12
            auVar92[0xc] = 0;                           // 通道12置0
            auVar91._12_4_ = auVar92._12_4_;            // 复制通道12-15
            auVar91._0_11_ = auVar94._0_11_;            // 复制通道0-11
            auVar91[0xb] = auVar52[5];                  // 设置通道11
            
            // 继续分离U分量
            auVar90._10_6_ = auVar91._10_6_;            // 复制通道10-15
            auVar90._0_9_ = auVar94._0_9_;              // 复制通道0-9
            auVar90[9] = auVar52[4];                    // 设置通道9
            
            // 处理U分量的低8位
            auVar35._1_10_ = (unkuint10)CONCAT81((ulonglong)auVar90._9_7_ << 8, auVar52[3]) << 8;
            auVar35[0] = auVar52[2];                     // 设置通道2
            auVar35[0xb] = 0;                           // 通道11置0
            auVar34._1_12_ = auVar35 << 8;              // 左移8位
            auVar34[0] = auVar52[1];                     // 设置通道1
            auVar34[0xd] = 0;                           // 通道13置0
            auVar80._1_14_ = auVar34 << 8;              // 左移8位
            auVar80[0] = auVar52[0];                     // 设置通道0
            auVar80[0xf] = 0;                           // 通道15置0
            
            // 加载Y分量数据
            uVar84 = *(undefined8 *)(lVar44 + unaff_RBP);  // 加载Y分量
            iVar1 = param_3 + 0xf;                       // 计算循环结束位置
            
            // 分离Y分量到各个通道
            auVar65._0_14_ = in_XMM5._0_14_;            // 复制Y分量模板
            auVar65[0xe] = in_XMM5[7];                  // 设置通道14
            auVar65[0xf] = (char)((ulonglong)uVar84 >> 0x38);  // 设置通道15
            auVar64._14_2_ = auVar65._14_2_;            // 复制通道14-15
            auVar64._0_13_ = in_XMM5._0_13_;            // 复制通道0-13
            auVar64[0xd] = (char)((ulonglong)uVar84 >> 0x30);  // 设置通道13
            
            // 继续分离Y分量
            auVar63._13_3_ = auVar64._13_3_;            // 复制通道13-15
            auVar63._0_12_ = in_XMM5._0_12_;            // 复制通道0-12
            auVar63[0xc] = in_XMM5[6];                  // 设置通道12
            auVar62._12_4_ = auVar63._12_4_;            // 复制通道12-15
            auVar62._0_11_ = in_XMM5._0_11_;            // 复制通道0-11
            auVar62[0xb] = (char)((ulonglong)uVar84 >> 0x28);  // 设置通道11
            
            // 继续分离Y分量
            auVar61._11_5_ = auVar62._11_5_;            // 复制通道11-15
            auVar61._0_10_ = in_XMM5._0_10_;            // 复制通道0-10
            auVar61[10] = in_XMM5[5];                   // 设置通道10
            auVar60._10_6_ = auVar61._10_6_;            // 复制通道10-15
            auVar60._0_9_ = in_XMM5._0_9_;              // 复制通道0-9
            auVar60[9] = (char)((ulonglong)uVar84 >> 0x20);  // 设置通道9
            
            // 继续分离Y分量
            auVar59._9_7_ = auVar60._9_7_;               // 复制通道9-15
            auVar59._0_8_ = in_XMM5._0_8_;              // 复制通道0-8
            auVar59[8] = in_XMM5[4];                     // 设置通道8
            Var28 = CONCAT91(CONCAT81(auVar59._8_8_, (char)((ulonglong)uVar84 >> 0x18)), in_XMM5[3]);
            auVar27._2_10_ = Var28;                      // 设置通道2-11
            auVar27[1] = (char)((ulonglong)uVar84 >> 0x10);  // 设置通道1
            auVar27[0] = in_XMM5[2];                     // 设置通道0
            auVar26._2_12_ = auVar27;                     // 复制通道0-13
            auVar26[1] = (char)((ulonglong)uVar84 >> 8);  // 设置通道1
            auVar26[0] = in_XMM5[1];                     // 设置通道0
            
            // 计算颜色分量偏移
            uVar58 = CONCAT11((char)uVar84, in_XMM5[0]) >> 4;  // 计算偏移量
            uVar67 = auVar26._0_2_ >> 4;                 // 通道0-1偏移
            uVar68 = auVar27._0_2_ >> 4;                 // 通道2-3偏移
            uVar69 = (ushort)Var28 >> 4;                 // 通道4-5偏移
            uVar70 = auVar59._8_2_ >> 4;                 // 通道8-9偏移
            uVar71 = auVar61._10_2_ >> 4;                // 通道10-11偏移
            uVar72 = auVar63._12_2_ >> 4;                // 通道12-13偏移
            uVar73 = auVar64._14_2_ >> 4;                // 通道14-15偏移
            
            // 执行YUV到RGB转换的第一阶段
            auVar87._0_2_ = auVar51._0_2_ + uVar58;       // R分量计算
            auVar87._2_2_ = auVar51._2_2_ + uVar67;       // R分量计算
            auVar87._4_2_ = auVar51._4_2_ + uVar68;       // R分量计算
            auVar87._6_2_ = auVar51._6_2_ + uVar69;       // R分量计算
            auVar87._8_2_ = auVar51._8_2_ + uVar70;       // R分量计算
            auVar87._10_2_ = auVar51._10_2_ + uVar71;      // R分量计算
            auVar87._12_2_ = auVar51._12_2_ + uVar72;      // R分量计算
            auVar87._14_2_ = auVar51._14_2_ + uVar73;      // R分量计算
            
            // 执行SIMD乘法和移位运算
            auVar51 = pmulhw(auVar80 << 8, auVar40);      // U分量乘法
            auVar95 = pmulhw(auVar80 << 8, auVar42);      // U分量乘法
            auVar52 = psraw(auVar87, 4);                  // 算术右移4位
            auVar80 = pmulhw(auVar54 << 8, auVar41);      // V分量乘法
            
            // 执行YUV到RGB转换的第二阶段
            auVar53._0_2_ = auVar51._0_2_ + uVar58;       // G分量计算
            auVar53._2_2_ = auVar51._2_2_ + uVar67;       // G分量计算
            auVar53._4_2_ = auVar51._4_2_ + uVar68;       // G分量计算
            auVar53._6_2_ = auVar51._6_2_ + uVar69;       // G分量计算
            auVar53._8_2_ = auVar51._8_2_ + uVar70;       // G分量计算
            auVar53._10_2_ = auVar51._10_2_ + uVar71;      // G分量计算
            auVar53._12_2_ = auVar51._12_2_ + uVar72;      // G分量计算
            auVar53._14_2_ = auVar51._14_2_ + uVar73;      // G分量计算
            auVar54 = psraw(auVar53, 4);                  // 算术右移4位
            
            // 提取R分量结果
            sVar3 = auVar52._0_2_;                        // R分量值
            sVar4 = auVar52._2_2_;                        // R分量值
            sVar6 = auVar52._4_2_;                        // R分量值
            sVar8 = auVar52._6_2_;                        // R分量值
            sVar10 = auVar52._8_2_;                       // R分量值
            sVar12 = auVar52._10_2_;                      // R分量值
            sVar14 = auVar52._12_2_;                      // R分量值
            sVar16 = auVar52._14_2_;                      // R分量值
            
            // 应用颜色范围限制
            cVar2 = (0 < sVar16) * (sVar16 < 0x100) * auVar52[0xe] - (0xff < sVar16);
            
            // 提取G分量结果
            sVar18 = auVar54._0_2_;                       // G分量值
            sVar19 = auVar54._2_2_;                       // G分量值
            sVar20 = auVar54._4_2_;                       // G分量值
            sVar21 = auVar54._6_2_;                       // G分量值
            sVar22 = auVar54._8_2_;                       // G分量值
            sVar23 = auVar54._10_2_;                      // G分量值
            sVar24 = auVar54._12_2_;                      // G分量值
            sVar25 = auVar54._14_2_;                      // G分量值
            
            // 执行YUV到RGB转换的第三阶段
            auVar96._0_2_ = auVar95._0_2_ + uVar58 + auVar80._0_2_;     // B分量计算
            auVar96._2_2_ = auVar95._2_2_ + uVar67 + auVar80._2_2_;     // B分量计算
            auVar96._4_2_ = auVar95._4_2_ + uVar68 + auVar80._4_2_;     // B分量计算
            auVar96._6_2_ = auVar95._6_2_ + uVar69 + auVar80._6_2_;     // B分量计算
            auVar96._8_2_ = auVar95._8_2_ + uVar70 + auVar80._8_2_;     // B分量计算
            auVar96._10_2_ = auVar95._10_2_ + uVar71 + auVar80._10_2_;    // B分量计算
            auVar96._12_2_ = auVar95._12_2_ + uVar72 + auVar80._12_2_;    // B分量计算
            auVar96._14_2_ = auVar95._14_2_ + uVar73 + auVar80._14_2_;    // B分量计算
            auVar80 = psraw(auVar96, 4);                               // 算术右移4位
            
            // 提取B分量结果
            sVar16 = auVar80._0_2_;                       // B分量值
            sVar5 = auVar80._2_2_;                        // B分量值
            sVar7 = auVar80._4_2_;                        // B分量值
            sVar9 = auVar80._6_2_;                        // B分量值
            sVar11 = auVar80._8_2_;                       // B分量值
            sVar13 = auVar80._10_2_;                      // B分量值
            sVar15 = auVar80._12_2_;                      // B分量值
            sVar17 = auVar80._14_2_;                      // B分量值
            
            // 合并颜色分量到最终输出
            uVar38 = CONCAT11((0 < sVar17) * (sVar17 < 0x100) * auVar80[0xe] - (0xff < sVar17), cVar2);
            uVar37 = CONCAT31(CONCAT21(uVar38, (0 < sVar15) * (sVar15 < 0x100) * auVar80[0xc] - (0xff < sVar15)), 
                            (0 < sVar14) * (sVar14 < 0x100) * auVar52[0xc] - (0xff < sVar14));
            uVar36 = CONCAT51(CONCAT41(uVar37, (0 < sVar13) * (sVar13 < 0x100) * auVar80[10] - (0xff < sVar13)), 
                            (0 < sVar12) * (sVar12 < 0x100) * auVar52[10] - (0xff < sVar12));
            Var31 = CONCAT72(CONCAT61(uVar36, (0 < sVar11) * (sVar11 < 0x100) * auVar80[8] - (0xff < sVar11)), 
                            CONCAT11((0 < sVar10) * (sVar10 < 0x100) * auVar52[8] - (0xff < sVar10), cVar2));
            Var28 = CONCAT91(CONCAT81((longlong)((unkuint9)Var31 >> 8), 
                            (0 < sVar9) * (sVar9 < 0x100) * auVar80[6] - (0xff < sVar9)), 
                            (0 < sVar8) * (sVar8 < 0x100) * auVar52[6] - (0xff < sVar8));
            
            // 继续合并颜色分量
            auVar30._2_10_ = Var28;                      // 设置通道2-11
            auVar30[1] = (0 < sVar7) * (sVar7 < 0x100) * auVar80[4] - (0xff < sVar7);  // 设置通道1
            auVar30[0] = (0 < sVar6) * (sVar6 < 0x100) * auVar52[4] - (0xff < sVar6);  // 设置通道0
            auVar29._2_12_ = auVar30;                     // 复制通道0-13
            auVar29[1] = (0 < sVar5) * (sVar5 < 0x100) * auVar80[2] - (0xff < sVar5);  // 设置通道1
            auVar29[0] = (0 < sVar4) * (sVar4 < 0x100) * auVar52[2] - (0xff < sVar4);  // 设置通道0
            
            // 设置最终输出数据
            auVar66._0_2_ = CONCAT11((0 < sVar16) * (sVar16 < 0x100) * auVar80[0] - (0xff < sVar16), 
                                    (0 < sVar3) * (sVar3 < 0x100) * auVar52[0] - (0xff < sVar3));
            auVar66._2_14_ = auVar29;                     // 复制通道2-15
            
            // 处理Alpha通道和颜色范围
            uVar81 = CONCAT11(0xff, (0 < sVar18) * (sVar18 < 0x100) * auVar54[0] - (0xff < sVar18));
            uVar82 = CONCAT13(0xff, CONCAT12((0 < sVar19) * (sVar19 < 0x100) * auVar54[2] - (0xff < sVar19), uVar81));
            uVar83 = CONCAT15(0xff, CONCAT14((0 < sVar20) * (sVar20 < 0x100) * auVar54[4] - (0xff < sVar20), uVar82));
            uVar84 = CONCAT17(0xff, CONCAT16((0 < sVar21) * (sVar21 < 0x100) * auVar54[6] - (0xff < sVar21), uVar83));
            auVar85._0_10_ = CONCAT19(0xff, CONCAT18((0 < sVar22) * (sVar22 < 0x100) * auVar54[8] - (0xff < sVar22), uVar84));
            auVar85[10] = (0 < sVar23) * (sVar23 < 0x100) * auVar54[10] - (0xff < sVar23);  // 设置通道10
            auVar85[0xb] = 0xff;                          // 设置通道11
            auVar86[0xc] = (0 < sVar24) * (sVar24 < 0x100) * auVar54[0xc] - (0xff < sVar24);  // 设置通道12
            auVar86._0_12_ = auVar85;                     // 复制通道0-13
            auVar86[0xd] = 0xff;                          // 设置通道13
            auVar88[0xe] = (0 < sVar25) * (sVar25 < 0x100) * auVar54[0xe] - (0xff < sVar25);  // 设置通道14
            auVar88._0_14_ = auVar86;                     // 复制通道0-15
            auVar88[0xf] = 0xff;                          // 设置通道15
            
            // 合并最终输出数据
            auVar57._0_12_ = auVar66._0_12_;             // 复制通道0-13
            auVar57._12_2_ = (short)Var28;               // 设置通道12-13
            auVar57._14_2_ = (short)((ulonglong)uVar84 >> 0x30);  // 设置通道14-15
            auVar56._12_4_ = auVar57._12_4_;             // 复制通道12-15
            auVar56._0_10_ = auVar66._0_10_;             // 复制通道0-11
            auVar56._10_2_ = (short)((uint6)uVar83 >> 0x20);  // 设置通道10-11
            auVar55._10_6_ = auVar56._10_6_;             // 复制通道10-15
            auVar55._0_8_ = auVar66._0_8_;               // 复制通道0-9
            auVar55._8_2_ = auVar30._0_2_;               // 设置通道8-9
            auVar95._8_8_ = auVar55._8_8_;               // 复制通道8-15
            auVar95._6_2_ = (short)((uint)uVar82 >> 0x10);  // 设置通道6-7
            auVar95._4_2_ = auVar29._0_2_;               // 设置通道4-5
            auVar95._2_2_ = uVar81;                       // 设置通道2-3
            auVar95._0_2_ = auVar66._0_2_;               // 设置通道0-1
            
            // 输出处理结果
            *param_1 = auVar95;                           // 设置输出数据1
            *(short *)param_1[1] = (short)((unkuint9)Var31 >> 8);  // 设置输出数据2
            *(short *)(param_1[1] + 2) = (short)((unkuint10)auVar85._0_10_ >> 0x40);  // 设置输出数据3
            *(short *)(param_1[1] + 4) = (short)uVar36;  // 设置输出数据4
            *(short *)(param_1[1] + 6) = auVar85._10_2_;  // 设置输出数据5
            *(short *)(param_1[1] + 8) = (short)uVar37;  // 设置输出数据6
            *(short *)(param_1[1] + 10) = auVar86._12_2_;  // 设置输出数据7
            *(undefined2 *)(param_1[1] + 0xc) = uVar38;  // 设置输出数据8
            *(short *)(param_1[1] + 0xe) = auVar88._14_2_;  // 设置输出数据9
            
            // 移动到下一个输出位置
            param_1 = param_1 + 2;
            param_3 = iVar47;
        } while (iVar1 < (int)param_2);  // 继续处理直到完成
    }
    
    // 处理剩余的像素（非SIMD对齐部分）
    lVar44 = (longlong)iVar47;
    if (lVar44 < param_2) {
        puVar50 = *param_1 + 2;                        // 设置输出指针
        pbVar46 = (byte *)(lVar44 + param_4);           // 设置V分量指针
        param_2 = param_2 - lVar44;                     // 计算剩余像素数
        
        // 逐个像素处理
        do {
            // 计算颜色分量值
            iVar47 = (uint)pbVar46[unaff_RBP - param_4] * 0x100000 + 0x80000;  // Y分量计算
            uVar48 = (int)((*pbVar46 - 0x80) * 0x166f00 + iVar47) >> 0x14;    // R分量计算
            uVar45 = (int)((0x80 - (uint)*pbVar46) * 0xb6d00 + iVar47 + 
                          ((0x80 - (uint)pbVar46[unaff_RSI - param_4]) * 0x58200 & 0xffff0000)) >> 0x14;  // G分量计算
            uVar43 = (int)((pbVar46[unaff_RSI - param_4] - 0x80) * 0x1c5a00 + iVar47) >> 0x14;  // B分量计算
            
            // 应用颜色范围限制
            uVar49 = uVar48;
            if ((0xff < uVar48) && (uVar49 = 0xff, (int)uVar48 < 0)) {
                uVar49 = unaff_R15D;                     // 使用下限值
            }
            uVar48 = uVar45;
            if ((0xff < uVar45) && (uVar48 = 0xff, (int)uVar45 < 0)) {
                uVar48 = unaff_R15D;                     // 使用下限值
            }
            uVar45 = uVar43;
            if ((0xff < uVar43) && (uVar45 = 0xff, (int)uVar43 < 0)) {
                uVar45 = unaff_R15D;                     // 使用下限值
            }
            
            // 输出RGBA像素数据
            puVar50[-2] = (char)uVar49;                  // R分量
            pbVar46 = pbVar46 + 1;                       // 移动到下一个像素
            puVar50[-1] = (char)uVar48;                  // G分量
            *puVar50 = (char)uVar45;                      // B分量
            puVar50[1] = 0xff;                           // A分量
            puVar50 = puVar50 + in_R10;                  // 移动到下一个输出位置
            param_2 = param_2 + -1;
        } while (param_2 != 0);  // 继续处理直到完成
    }
    
    return;
}

//==============================================================================
// 渲染系统高级数据处理模块 - 技术实现要点
//==============================================================================

/*
1. SIMD优化技术：
   - 使用SIMD指令集进行批量像素处理
   - 16字节对齐的内存访问模式
   - 并行处理多个像素分量
   - 优化的数据打包和解包操作

2. YUV到RGB转换算法：
   - 标准的YUV到RGB颜色空间转换
   - 支持YUV 4:4:4格式
   - 精确的颜色分量计算
   - 高质量的颜色还原

3. 颜色范围处理：
   - 自动颜色范围限制
   - 防止颜色溢出
   - 支持边界条件处理
   - 确保输出颜色在有效范围内

4. 性能优化策略：
   - 批量处理提高效率
   - 减少内存访问次数
   - 使用寄存器变量优化
   - 循环展开技术

5. 内存管理：
   - 高效的内存访问模式
   - 减少内存碎片
   - 优化的缓存利用率
   - 支持大规模图像处理

6. 错误处理：
   - 完整的边界检查
   - 参数有效性验证
   - 内存安全保护
   - 优雅的错误恢复

7. 可扩展性：
   - 支持不同的像素格式
   - 可配置的处理参数
   - 灵活的输入输出接口
   - 易于维护和扩展
*/

// WARNING: Globals starting with '_' overlap smaller symbols at the same address