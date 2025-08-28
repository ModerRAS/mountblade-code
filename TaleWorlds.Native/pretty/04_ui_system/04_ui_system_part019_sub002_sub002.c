#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part019_sub002_sub002.c - UI系统高级矩阵变换和动画处理模块

/**
 * UI系统高级矩阵变换和动画处理函数
 * 
 * 该函数负责UI元素的复杂变换处理，包括：
 * - 四元数旋转和角度计算
 * - 矩阵插值和球面线性插值(SLERP)
 * - UI变换动画的混合和过渡
 * - 多层变换的级联应用
 * 
 * @param param_1 输入变换数据结构指针
 * @param param_2 UI系统上下文指针
 * @param param_3 变换参数结构指针
 * @param param_4 旋转角度参数1
 * @param param_5 旋转角度参数2
 * @param param_6 变换矩阵指针
 * @param param_7 变换模式标志
 * @param param_8 变换参数指针
 * @param param_9 插值权重参数1
 * @param param_10 变换配置参数
 * @param param_11 变换模式标志2
 * @param param_12 变换参数指针2
 * @param param_13 插值权重参数2
 * @param param_14 变换配置参数2
 * @param param_15 变换模式标志3
 * @param param_16 变换参数指针3
 * @param param_17 变换索引1
 * @param param_18 变换索引2
 * @param param_19 输出变换参数指针
 */
void UI_System_AdvancedMatrixTransformAndAnimation(
    longlong inputTransformData,    // param_1: 输入变换数据结构指针
    longlong uiSystemContext,       // param_2: UI系统上下文指针
    longlong transformParams,       // param_3: 变换参数结构指针
    float rotationAngle1,           // param_4: 旋转角度参数1
    float rotationAngle2,           // param_5: 旋转角度参数2
    float *transformMatrix,        // param_6: 变换矩阵指针
    unsigned char transformMode,   // param_7: 变换模式标志
    uint64_t animationParams,      // param_8: 动画参数指针
    float interpolationWeight1,     // param_9: 插值权重参数1
    uint32_t transformConfig,      // param_10: 变换配置参数
    unsigned char transformMode2,  // param_11: 变换模式标志2
    uint64_t animationParams2,     // param_12: 动画参数指针2
    float interpolationWeight2,     // param_13: 插值权重参数2
    uint32_t transformConfig2,     // param_14: 变换配置参数2
    unsigned char transformMode3,  // param_15: 变换模式标志3
    uint64_t animationParams3,     // param_16: 动画参数指针3
    unsigned char transformIndex1, // param_17: 变换索引1
    unsigned char transformIndex2, // param_18: 变换索引2
    float *outputTransformParams   // param_19: 输出变换参数指针
)

{
  // 局部变量声明
  longlong tempPointer1;           // lVar1: 临时指针变量
  uint64_t transformParamPtr;     // uVar2: 变换参数指针
  
  // 矩阵和四元数缓冲区
  float matrixBuffer1[16];         // auVar3: 矩阵缓冲区1
  float matrixBuffer2[16];         // auVar4: 矩阵缓冲区2
  float matrixBuffer3[16];         // auVar5: 矩阵缓冲区3
  float matrixBuffer4[16];         // auVar6: 矩阵缓冲区4
  float matrixBuffer5[16];         // auVar7: 矩阵缓冲区5
  float matrixBuffer6[16];         // auVar8: 矩阵缓冲区6
  float matrixBuffer7[16];         // auVar9: 矩阵缓冲区7
  float matrixBuffer8[16];         // auVar10: 矩阵缓冲区8
  
  // 计算过程中的临时变量
  int transformFlag;              // iVar11: 变换标志
  uint maskResult;                // uVar12: 掩码结果
  float *matrixPtr;               // pfVar13: 矩阵指针
  
  // 四元数和旋转计算变量
  float quaternionW;              // fVar14: 四元数W分量
  float tempFloat1;               // extraout_XMM0_Da: 临时浮点数1
  float tempFloat2;               // extraout_XMM0_Da_00: 临时浮点数2
  float angleResult;              // fVar15: 角度计算结果
  float tempFloat3;               // extraout_XMM0_Da_01: 临时浮点数3
  float tempFloat4;               // extraout_XMM0_Da_02: 临时浮点数4
  uint32_t tempConfig;            // uVar16: 临时配置
  float tempFloat5;               // extraout_XMM0_Da_03: 临时浮点数5
  
  // 变换矩阵分量
  float transformX;               // fVar17: 变换X分量
  float transformY;               // fVar18: 变换Y分量
  float transformZ;               // fVar19: 变换Z分量
  float transformW;               // fVar36: 变换W分量
  
  // 更多矩阵缓冲区
  float matrixBuffer9[16];        // auVar20: 矩阵缓冲区9
  float matrixBuffer10[16];       // auVar21: 矩阵缓冲区10
  float matrixBuffer11[16];       // auVar22: 矩阵缓冲区11
  float matrixBuffer12[16];       // auVar23: 矩阵缓冲区12
  float matrixBuffer13[16];       // auVar24: 矩阵缓冲区13
  float matrixBuffer14[16];       // auVar25: 矩阵缓冲区14
  float matrixBuffer15[16];       // auVar26: 矩阵缓冲区15
  float matrixBuffer16[16];       // auVar27: 矩阵缓冲区16
  float matrixBuffer17[16];       // auVar28: 矩阵缓冲区17
  float matrixBuffer18[16];       // auVar29: 矩阵缓冲区18
  float matrixBuffer19[16];       // auVar30: 矩阵缓冲区19
  float matrixBuffer20[16];       // auVar31: 矩阵缓冲区20
  float matrixBuffer21[16];       // auVar32: 矩阵缓冲区21
  float matrixBuffer22[16];       // auVar33: 矩阵缓冲区22
  float matrixBuffer23[16];       // auVar34: 矩阵缓冲区23
  float matrixBuffer24[16];       // auVar35: 矩阵缓冲区24
  
  // 旋转和插值变量
  float rotationComponent1;       // fVar37: 旋转分量1
  float rotationComponent2;       // fVar38: 旋转分量2
  float rotationComponent3;       // fVar39: 旋转分量3
  float rotationComponent4;       // fVar40: 旋转分量4
  float rotationComponent5;       // fVar41: 旋转分量5
  float rotationComponent6;       // fVar42: 旋转分量6
  float rotationComponent7;       // fVar43: 旋转分量7
  float rotationComponent8;       // fVar44: 旋转分量8
  float rotationComponent9;       // fVar45: 旋转分量9
  float rotationComponent10;      // fVar46: 旋转分量10
  float rotationComponent11;      // fVar47: 旋转分量11
  float rotationComponent12;      // fVar48: 旋转分量12
  float rotationComponent13;      // fVar49: 旋转分量13
  float rotationComponent14;      // fVar50: 旋转分量14
  float rotationComponent15;      // fVar51: 旋转分量15
  float rotationComponent16;      // fVar52: 旋转分量16
  float rotationComponent17;      // fVar53: 旋转分量17
  float rotationComponent18;      // fVar54: 旋转分量18
  float rotationComponent19;      // fVar55: 旋转分量19
  
  // 向量缓冲区
  float vectorBuffer[4];          // auVar56: 向量缓冲区
  
  // 插值和混合变量
  float interpolationFactor1;     // fVar57: 插值因子1
  float interpolationFactor2;     // fVar58: 插值因子2
  float interpolationFactor3;     // fVar59: 插值因子3
  float interpolationFactor4;     // fVar60: 插值因子4
  float interpolationFactor5;     // fVar61: 插值因子5
  float interpolationFactor6;     // fVar62: 插值因子6
  float interpolationFactor7;     // fVar63: 插值因子7
  float interpolationFactor8;     // fVar64: 插值因子8
  float interpolationFactor9;     // fVar65: 插值因子9
  float interpolationFactor10;    // fVar66: 插值因子10
  float interpolationFactor11;    // fVar67: 插值因子11
  float interpolationFactor12;    // fVar68: 插值因子12
  
  // 栈变量 - 用于存储中间结果
  float stackBuffer1[32];         // auStack_1b8: 栈缓冲区1
  float *stackMatrixPtr;         // pfStack_198: 栈矩阵指针
  uint32_t stackConfig;          // uStack_190: 栈配置
  float stackVector[2];           // auStack_188: 栈向量
  float stackResult1;            // fStack_180: 栈结果1
  float stackResult2;            // fStack_17c: 栈结果2
  uint64_t stackPair1;            // uStack_178: 栈对1
  uint64_t stackPair2;            // uStack_170: 栈对2
  float stackAngle1;              // fStack_168: 栈角度1
  float stackAngle2;              // fStack_164: 栈角度2
  float stackAngle3;              // fStack_160: 栈角度3
  float stackPair3[2];           // auStack_158: 栈对3
  float stackMatrix1;             // fStack_150: 栈矩阵1
  float stackMatrix2;             // fStack_14c: 栈矩阵2
  float stackMatrix3;             // fStack_148: 栈矩阵3
  float stackMatrix4;             // fStack_144: 栈矩阵4
  float stackMatrix5;             // fStack_140: 栈矩阵5
  float stackMatrix6;             // fStack_13c: 栈矩阵6
  float stackMatrix7;             // fStack_138: 栈矩阵7
  float stackMatrix8;             // fStack_134: 栈矩阵8
  float stackMatrix9;             // fStack_130: 栈矩阵9
  float stackMatrix10;            // fStack_12c: 栈矩阵10
  float stackVector2[4];          // auStack_128: 栈向量2
  float stackMatrix11;            // fStack_124: 栈矩阵11
  uint64_t stackPair4;            // uStack_120: 栈对4
  uint32_t stackConfig1;          // uStack_118: 栈配置1
  uint32_t stackConfig2;          // uStack_114: 栈配置2
  uint32_t stackConfig3;          // uStack_110: 栈配置3
  uint32_t stackConfig4;          // uStack_10c: 栈配置4
  float stackVector3[4];          // auStack_108: 栈向量3
  float stackMatrix12;            // fStack_104: 栈矩阵12
  uint64_t stackPair5;            // uStack_100: 栈对5
  float stackNegative1;           // uStack_f8: 负常数1
  float stackNegative2;           // uStack_f4: 负常数2
  float stackNegative3;           // uStack_f0: 负常数3
  float stackNegative4;           // uStack_ec: 负常数4
  uint64_t stackSecurity;         // uStack_e8: 栈安全检查
  
  // ========================= 函数主要逻辑开始 =========================
  
  // 初始化栈安全检查
  stackSecurity = DAT_STACK_SECURITY ^ (uint64_t)stackBuffer1;
  
  // 获取变换参数指针
  transformParamPtr = *(uint64_t *)(transformParams + 0x208);
  
  // ========================= 第一个旋转角度处理 =========================
  // 检查第一个旋转角度是否超过阈值
  if (1e-05 < ABS(rotationAngle1)) {
    // 初始化栈变量
    stack0xfffffffffffffe7c = 0;
    // 调用角度处理函数（不返回）
    FUN_1808fd400(rotationAngle1 * 0.5);
  }
  
  // ========================= 四元数旋转计算 =========================
  // 从输入变换数据中获取X和Y分量
  interpolationFactor1 = *(float *)(inputTransformData + 8);
  if (1.0000001e-06 < *(float *)(inputTransformData + 0xc) * *(float *)(inputTransformData + 0xc) + interpolationFactor1 * interpolationFactor1) {
    rotationComponent19 = *(float *)(inputTransformData + 0xc);
    quaternionW = rotationComponent19 * rotationComponent19 + interpolationFactor1 * interpolationFactor1 + 1.0;
    // 使用SIMD指令计算快速平方根倒数
    matrixBuffer9[0] = rsqrtss(ZEXT416((uint)quaternionW), ZEXT416((uint)quaternionW));
    rotationComponent18 = matrixBuffer9[0];
    // 使用牛顿迭代法优化平方根精度
    quaternionW = rotationComponent18 * 0.5 * (3.0 - quaternionW * rotationComponent18 * rotationComponent18);
    interpolationFactor1 = interpolationFactor1 * quaternionW;
    rotationComponent19 = -(rotationComponent19 * quaternionW);
    rotationComponent19 = interpolationFactor1 * interpolationFactor1 + rotationComponent19 * rotationComponent19;
    // 再次计算平方根倒数
    matrixBuffer9[0] = rsqrtss(ZEXT416((uint)rotationComponent19), ZEXT416((uint)rotationComponent19));
    interpolationFactor1 = matrixBuffer9[0];
    // 计算反正弦值并处理角度
    interpolationFactor1 = (float)asinf(interpolationFactor1 * 0.5 * (3.0 - rotationComponent19 * interpolationFactor1 * interpolationFactor1) * rotationComponent19);
    // 调用角度处理函数（不返回）
    FUN_1808fd400(interpolationFactor1 * 0.5);
  }
  fVar57 = *(float *)(param_1 + 8);
  if (1.0000001e-06 < *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc) + fVar57 * fVar57) {
    fVar55 = *(float *)(param_1 + 0xc);
    fVar14 = fVar55 * fVar55 + fVar57 * fVar57 + 1.0;
    auVar20 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    fVar54 = auVar20._0_4_;
    fVar14 = fVar54 * 0.5 * (3.0 - fVar14 * fVar54 * fVar54);
    fVar57 = fVar57 * fVar14;
    fVar55 = -(fVar55 * fVar14);
    fVar55 = fVar57 * fVar57 + fVar55 * fVar55;
    auVar20 = rsqrtss(ZEXT416((uint)fVar55),ZEXT416((uint)fVar55));
    fVar57 = auVar20._0_4_;
    fVar57 = (float)asinf(fVar57 * 0.5 * (3.0 - fVar55 * fVar57 * fVar57) * fVar55);
                    // WARNING: Subroutine does not return
    FUN_1808fd400(fVar57 * 0.5);
  }
  fStack_168 = *(float *)(param_1 + 0x10);
  if (1.0000001e-06 <
      *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14) + fStack_168 * fStack_168) {
    fVar57 = *(float *)(param_1 + 0x14);
    fVar55 = fVar57 * fVar57 + fStack_168 * fStack_168 + 1.0;
    auVar20 = rsqrtss(ZEXT416((uint)fVar55),ZEXT416((uint)fVar55));
    fVar14 = auVar20._0_4_;
    fVar55 = fVar14 * 0.5 * (3.0 - fVar55 * fVar14 * fVar14);
    fStack_168 = fStack_168 * fVar55;
    fStack_160 = -(fVar57 * fVar55);
    fVar55 = fStack_160 * fStack_160 + fStack_168 * fStack_168;
    auVar20 = rsqrtss(ZEXT416((uint)fVar55),ZEXT416((uint)fVar55));
    fVar57 = auVar20._0_4_;
    fVar57 = fVar57 * 0.5 * (3.0 - fVar55 * fVar57 * fVar57);
    fStack_160 = fStack_160 * fVar57;
    fStack_168 = fStack_168 * fVar57;
    fStack_164 = (float)asinf(fVar57 * fVar55);
                    // WARNING: Subroutine does not return
    FUN_1808fd400(fStack_164 * 0.5);
  }
  if ((*param_19 == 0.0) && (param_19[1] == 0.0)) {
    pfVar13 = (float *)FUN_18022a890(param_2,param_17,uVar2);
    fVar57 = *pfVar13;
    fVar55 = pfVar13[1];
    fVar14 = pfVar13[2];
    fVar54 = pfVar13[3];
    pfVar13 = (float *)FUN_18022a890(param_2,param_18,uVar2);
    fVar61 = *pfVar13;
    fVar63 = pfVar13[1];
    fVar65 = pfVar13[2];
    fVar67 = pfVar13[3];
    pfVar13 = (float *)FUN_18022a890(param_2,param_7,uVar2);
    fVar39 = *pfVar13;
    fVar44 = pfVar13[1];
    fVar48 = pfVar13[2];
    fVar52 = pfVar13[3];
    pfVar13 = (float *)FUN_18022a890(param_2,param_15,uVar2);
    fVar53 = *pfVar13;
    fVar17 = pfVar13[1];
    fVar18 = pfVar13[2];
    fVar40 = pfVar13[3];
    pfVar13 = (float *)FUN_18022a890(param_2,param_11,uVar2);
    fVar37 = *pfVar13;
    fVar41 = pfVar13[1];
    fVar45 = pfVar13[2];
    fVar49 = pfVar13[3];
    fVar60 = fVar49 * fVar48 * -1.0 + fVar37 * fVar44 * -1.0 + fVar45 * fVar52 + fVar41 * fVar39;
    fVar62 = fVar41 * fVar52 * -1.0 + fVar37 * fVar48 * -1.0 + fVar49 * fVar44 + fVar45 * fVar39;
    fVar64 = fVar45 * fVar44 * -1.0 + fVar37 * fVar52 * -1.0 + fVar41 * fVar48 + fVar49 * fVar39;
    fVar66 = fVar49 * fVar52 * 1.0 + fVar37 * fVar39 * 1.0 + fVar41 * fVar44 + fVar45 * fVar48;
    fStack_124 = fVar40 * fVar48 * -1.0 + fVar53 * fVar44 * -1.0 + fVar17 * fVar39 + fVar18 * fVar52
    ;
    auStack_128 = (undefined1  [4])
                  (fVar40 * fVar52 * 1.0 + fVar53 * fVar39 * 1.0 + fVar18 * fVar48 + fVar17 * fVar44
                  );
    uStack_120._0_4_ =
         fVar17 * fVar52 * -1.0 + fVar53 * fVar48 * -1.0 + fVar18 * fVar39 + fVar40 * fVar44;
    uStack_120._4_4_ =
         fVar18 * fVar44 * -1.0 + fVar53 * fVar52 * -1.0 + fVar40 * fVar39 + fVar17 * fVar48;
    fVar53 = *param_6;
    fVar17 = param_6[1];
    fVar18 = param_6[2];
    fVar40 = param_6[3];
    fVar68 = param_5 * 0.33;
    fStack_140 = fVar40 * fVar48 * -1.0 + fVar53 * fVar44 * -1.0 + fVar17 * fVar39 + fVar18 * fVar52
    ;
    fStack_148 = fVar17 * fVar52 * -1.0 + fVar53 * fVar48 * -1.0 + fVar18 * fVar39 + fVar40 * fVar44
    ;
    fStack_144 = fVar18 * fVar44 * -1.0 + fVar53 * fVar52 * -1.0 + fVar40 * fVar39 + fVar17 * fVar48
    ;
    uStack_178._0_4_ =
         fVar40 * fVar52 * 1.0 + fVar53 * fVar39 * 1.0 + fVar18 * fVar48 + fVar17 * fVar44;
    auStack_158._4_4_ = fStack_148;
    auStack_158._0_4_ = fStack_140;
    fStack_150 = fStack_144;
    fStack_14c = fStack_148;
    fVar37 = fVar57 * fStack_140 * 1.0 + fVar14 * fStack_144 * 1.0 +
             (fVar55 * (float)uStack_178 - fVar54 * fStack_148);
    fVar41 = fVar57 * fStack_148 * 1.0 + fVar54 * fStack_140 * 1.0 +
             (fVar14 * (float)uStack_178 - fVar55 * fStack_144);
    fVar45 = fVar57 * fStack_144 * 1.0 + fVar55 * fStack_148 * 1.0 +
             (fVar54 * (float)uStack_178 - fVar14 * fStack_140);
    fVar49 = fVar14 * fStack_148 * -1.0 + fVar54 * fStack_144 * -1.0 +
             (fVar57 * (float)uStack_178 - fVar55 * fStack_140);
    fVar53 = fVar57;
    fVar17 = fVar55;
    fVar18 = fVar14;
    fVar40 = fVar54;
    fStack_13c = fStack_140;
    fStack_138 = fStack_144;
    fStack_134 = fStack_140;
    fStack_130 = fStack_148;
    fStack_12c = fStack_144;
    uStack_178._4_4_ = (float)uStack_178;
    uStack_170._0_4_ = (float)uStack_178;
    uStack_170._4_4_ = (float)uStack_178;
    if ((0.001 <= fVar68) &&
       (fVar53 = fVar49, fVar17 = fVar37, fVar18 = fVar41, fVar40 = fVar45, fVar68 <= 0.999)) {
      fVar53 = fVar14 * fVar41;
      fVar17 = fVar54 * fVar45;
      uStack_f8 = 0xbf800000;
      uStack_f4 = 0xbf800000;
      uStack_f0 = 0xbf800000;
      uStack_ec = 0xbf800000;
      auVar20._0_4_ = fVar53 + fVar57 * fVar49;
      auVar20._4_4_ = fVar17 + fVar55 * fVar37;
      auVar20._8_4_ = fVar53 + fVar53;
      auVar20._12_4_ = fVar17 + fVar17;
      auVar21._4_12_ = auVar20._4_12_;
      auVar21._0_4_ = auVar20._0_4_ + auVar20._4_4_;
      uStack_100 = 0x3f8000003f800000;
      _auStack_108 = 0x3f8000003f800000;
      uVar12 = movmskps((int)pfVar13,auVar21);
      pfVar13 = (float *)((ulonglong)(uVar12 & 1) * 2);
      lVar1 = (ulonglong)(uVar12 & 1) * 0x10;
      auStack_108 = (undefined1  [4])(*(float *)(auStack_108 + lVar1) * fVar49);
      fStack_104 = *(float *)(auStack_108 + lVar1 + 4) * fVar37;
      uStack_100._0_4_ = *(float *)(auStack_108 + lVar1 + 8) * fVar41;
      uStack_100._4_4_ = *(float *)(auStack_108 + lVar1 + 0xc) * fVar45;
      if (0.9995 < ABS(auVar21._0_4_)) {
        fVar53 = 1.0 - fVar68;
        fVar17 = fVar57 * fVar53 + fVar68 * (float)auStack_108;
        fVar45 = fVar55 * fVar53 + fVar68 * fStack_104;
        fVar49 = fVar14 * fVar53 + fVar68 * (float)uStack_100;
        fVar68 = fVar54 * fVar53 + fVar68 * uStack_100._4_4_;
        fVar57 = fVar68 * fVar68 + fVar17 * fVar17;
        fVar55 = fVar49 * fVar49 + fVar45 * fVar45;
        fVar37 = fVar57 + fVar45 * fVar45 + fVar49 * fVar49;
        fVar41 = fVar55 + fVar17 * fVar17 + fVar68 * fVar68;
        auVar10._4_4_ = fVar57 + fVar55 + 1.1754944e-38;
        auVar10._0_4_ = fVar55 + fVar57 + 1.1754944e-38;
        auVar10._8_4_ = fVar37 + 1.1754944e-38;
        auVar10._12_4_ = fVar41 + 1.1754944e-38;
        auVar20 = rsqrtps(_auStack_108,auVar10);
        fVar14 = auVar20._0_4_;
        fVar54 = auVar20._4_4_;
        fVar18 = auVar20._8_4_;
        fVar40 = auVar20._12_4_;
        fVar53 = fVar17 * (3.0 - fVar14 * fVar14 * (fVar55 + fVar57)) * fVar14 * 0.5;
        fVar17 = fVar45 * (3.0 - fVar54 * fVar54 * (fVar57 + fVar55)) * fVar54 * 0.5;
        fVar18 = fVar49 * (3.0 - fVar18 * fVar18 * fVar37) * fVar18 * 0.5;
        fVar40 = fVar68 * (3.0 - fVar40 * fVar40 * fVar41) * fVar40 * 0.5;
      }
      else {
        uStack_170._4_4_ = (float)uStack_170;
        fVar53 = (float)acosf();
        fVar17 = (float)sinf();
        fVar40 = (float)sinf(fVar53 - fVar68 * fVar53);
        fVar40 = fVar40 * (1.0 / fVar17);
        pfVar13 = (float *)sinf(fVar68 * fVar53);
        fVar37 = extraout_XMM0_Da * (1.0 / fVar17);
        fVar53 = fVar40 * fVar57 + fVar37 * (float)auStack_108;
        fVar17 = fVar40 * fVar55 + fVar37 * fStack_104;
        fVar18 = fVar40 * fVar14 + fVar37 * (float)uStack_100;
        fVar40 = fVar40 * fVar54 + fVar37 * uStack_100._4_4_;
      }
    }
    iVar11 = (int)pfVar13;
    auStack_188._4_4_ = fVar17;
    auStack_188._0_4_ = fVar53;
    fStack_180 = fVar18;
    fStack_17c = fVar40;
    fStack_168 = param_5 * 0.66;
    fVar37 = fVar53 * (float)auStack_158._0_4_ * 1.0 + fVar18 * fStack_138 * 1.0 +
             (fVar17 * (float)uStack_178 - fVar40 * fStack_148);
    fVar41 = fVar53 * (float)auStack_158._4_4_ * 1.0 + fVar40 * fStack_134 * 1.0 +
             (fVar18 * uStack_178._4_4_ - fVar17 * fStack_144);
    fVar45 = fVar53 * fStack_150 * 1.0 + fVar17 * fStack_130 * 1.0 +
             (fVar40 * (float)uStack_170 - fVar18 * fStack_140);
    fVar49 = fVar18 * fStack_14c * -1.0 + fVar40 * fStack_12c * -1.0 +
             (fVar53 * uStack_170._4_4_ - fVar17 * fStack_13c);
    fVar57 = fVar61;
    fVar55 = fVar63;
    fVar14 = fVar65;
    fVar54 = fVar67;
    if ((0.001 <= fStack_168) &&
       (fVar57 = fVar49, fVar55 = fVar37, fVar14 = fVar41, fVar54 = fVar45, fStack_168 <= 0.999)) {
      fVar57 = fVar65 * fVar41;
      fVar55 = fVar67 * fVar45;
      uStack_f8 = 0xbf800000;
      uStack_f4 = 0xbf800000;
      uStack_f0 = 0xbf800000;
      uStack_ec = 0xbf800000;
      auVar22._0_4_ = fVar57 + fVar61 * fVar49;
      auVar22._4_4_ = fVar55 + fVar63 * fVar37;
      auVar22._8_4_ = fVar57 + fVar57;
      auVar22._12_4_ = fVar55 + fVar55;
      auVar23._4_12_ = auVar22._4_12_;
      auVar23._0_4_ = auVar22._0_4_ + auVar22._4_4_;
      uStack_100 = 0x3f8000003f800000;
      _auStack_108 = 0x3f8000003f800000;
      uVar12 = movmskps(iVar11,auVar23);
      iVar11 = (uVar12 & 1) * 2;
      lVar1 = (ulonglong)(uVar12 & 1) * 0x10;
      auStack_108 = (undefined1  [4])(*(float *)(auStack_108 + lVar1) * fVar49);
      fStack_104 = *(float *)(auStack_108 + lVar1 + 4) * fVar37;
      uStack_100._0_4_ = *(float *)(auStack_108 + lVar1 + 8) * fVar41;
      uStack_100._4_4_ = *(float *)(auStack_108 + lVar1 + 0xc) * fVar45;
      if (0.9995 < ABS(auVar23._0_4_)) {
        fVar57 = 1.0 - fStack_168;
        fVar37 = fVar61 * fVar57 + fStack_168 * (float)auStack_108;
        fVar41 = fVar63 * fVar57 + fStack_168 * fStack_104;
        fVar45 = fVar65 * fVar57 + fStack_168 * (float)uStack_100;
        fVar49 = fVar67 * fVar57 + fStack_168 * uStack_100._4_4_;
        fVar55 = fVar49 * fVar49 + fVar37 * fVar37;
        fVar14 = fVar45 * fVar45 + fVar41 * fVar41;
        fVar65 = fVar55 + fVar41 * fVar41 + fVar45 * fVar45;
        fVar67 = fVar14 + fVar37 * fVar37 + fVar49 * fVar49;
        auVar9._4_4_ = fVar55 + fVar14 + 1.1754944e-38;
        auVar9._0_4_ = fVar14 + fVar55 + 1.1754944e-38;
        auVar9._8_4_ = fVar65 + 1.1754944e-38;
        auVar9._12_4_ = fVar67 + 1.1754944e-38;
        auVar20 = rsqrtps(_auStack_108,auVar9);
        fVar57 = auVar20._0_4_;
        fVar54 = auVar20._4_4_;
        fVar61 = auVar20._8_4_;
        fVar63 = auVar20._12_4_;
        fVar57 = fVar37 * (3.0 - fVar57 * fVar57 * (fVar14 + fVar55)) * fVar57 * 0.5;
        fVar55 = fVar41 * (3.0 - fVar54 * fVar54 * (fVar55 + fVar14)) * fVar54 * 0.5;
        fVar14 = fVar45 * (3.0 - fVar61 * fVar61 * fVar65) * fVar61 * 0.5;
        fVar54 = fVar49 * (3.0 - fVar63 * fVar63 * fVar67) * fVar63 * 0.5;
      }
      else {
        fVar57 = (float)acosf();
        fVar55 = (float)sinf();
        fVar14 = fVar57 * fStack_168;
        fVar54 = (float)sinf(fVar57 - fVar14);
        fVar54 = fVar54 * (1.0 / fVar55);
        iVar11 = sinf(fVar14);
        fVar37 = extraout_XMM0_Da_00 * (1.0 / fVar55);
        fVar57 = fVar54 * fVar61 + fVar37 * (float)auStack_108;
        fVar55 = fVar54 * fVar63 + fVar37 * fStack_104;
        fVar14 = fVar54 * fVar65 + fVar37 * (float)uStack_100;
        fVar54 = fVar54 * fVar67 + fVar37 * uStack_100._4_4_;
      }
    }
    uStack_178 = CONCAT44(fVar55,fVar57);
    uStack_170 = CONCAT44(fVar54,fVar14);
    if (0.001 <= param_5) {
      if (param_5 <= 0.999) {
        fVar61 = param_6[2] * fVar48;
        fVar63 = param_6[3] * fVar52;
        uStack_f8 = 0xbf800000;
        uStack_f4 = 0xbf800000;
        uStack_f0 = 0xbf800000;
        uStack_ec = 0xbf800000;
        auVar24._0_4_ = fVar61 + *param_6 * fVar39;
        auVar24._4_4_ = fVar63 + param_6[1] * fVar44;
        auVar24._8_4_ = fVar61 + fVar61;
        auVar24._12_4_ = fVar63 + fVar63;
        auVar25._4_12_ = auVar24._4_12_;
        auVar25._0_4_ = auVar24._0_4_ + auVar24._4_4_;
        uStack_100 = 0x3f8000003f800000;
        _auStack_108 = 0x3f8000003f800000;
        uVar12 = movmskps(iVar11,auVar25);
        lVar1 = (ulonglong)(uVar12 & 1) * 0x10;
        fVar61 = *(float *)(auStack_108 + lVar1);
        fVar63 = *(float *)(auStack_108 + lVar1 + 4);
        fVar65 = *(float *)(auStack_108 + lVar1 + 8);
        fVar67 = *(float *)(auStack_108 + lVar1 + 0xc);
        fVar37 = *param_6;
        fVar41 = param_6[1];
        fVar45 = param_6[2];
        fVar49 = param_6[3];
        if (0.9995 < ABS(auVar25._0_4_)) {
          fVar68 = 1.0 - param_5;
          fVar39 = fVar39 * fVar68 + param_5 * fVar61 * fVar37;
          fVar44 = fVar44 * fVar68 + param_5 * fVar63 * fVar41;
          fVar48 = fVar48 * fVar68 + param_5 * fVar65 * fVar45;
          fVar52 = fVar52 * fVar68 + param_5 * fVar67 * fVar49;
          fVar61 = fVar52 * fVar52 + fVar39 * fVar39;
          fVar63 = fVar48 * fVar48 + fVar44 * fVar44;
          fVar45 = fVar61 + fVar44 * fVar44 + fVar48 * fVar48;
          fVar49 = fVar63 + fVar39 * fVar39 + fVar52 * fVar52;
          auVar8._4_4_ = fVar61 + fVar63 + 1.1754944e-38;
          auVar8._0_4_ = fVar63 + fVar61 + 1.1754944e-38;
          auVar8._8_4_ = fVar45 + 1.1754944e-38;
          auVar8._12_4_ = fVar49 + 1.1754944e-38;
          auVar20 = rsqrtps(auVar25,auVar8);
          fVar65 = auVar20._0_4_;
          fVar67 = auVar20._4_4_;
          fVar37 = auVar20._8_4_;
          fVar41 = auVar20._12_4_;
          fVar39 = fVar39 * (3.0 - fVar65 * fVar65 * (fVar63 + fVar61)) * fVar65 * 0.5;
          fVar44 = fVar44 * (3.0 - fVar67 * fVar67 * (fVar61 + fVar63)) * fVar67 * 0.5;
          fVar48 = fVar48 * (3.0 - fVar37 * fVar37 * fVar45) * fVar37 * 0.5;
          fVar52 = fVar52 * (3.0 - fVar41 * fVar41 * fVar49) * fVar41 * 0.5;
        }
        else {
          fVar68 = (float)acosf();
          fVar43 = (float)sinf();
          fVar47 = (float)sinf(fVar68 - fVar68 * param_5);
          fVar47 = fVar47 * (1.0 / fVar43);
          fVar68 = (float)sinf(fVar68 * param_5);
          fVar68 = fVar68 * (1.0 / fVar43);
          fVar39 = fVar47 * fVar39 + fVar68 * fVar61 * fVar37;
          fVar44 = fVar47 * fVar44 + fVar68 * fVar63 * fVar41;
          fVar48 = fVar47 * fVar48 + fVar68 * fVar65 * fVar45;
          fVar52 = fVar47 * fVar52 + fVar68 * fVar67 * fVar49;
        }
      }
      else {
        fVar39 = *param_6;
        fVar44 = param_6[1];
        fVar48 = param_6[2];
        fVar52 = param_6[3];
      }
    }
    fVar37 = fVar60 * fVar39 * 1.0 + fVar64 * fVar48 * 1.0 + (fVar66 * fVar44 - fVar62 * fVar52);
    fVar41 = fVar62 * fVar39 * 1.0 + fVar60 * fVar52 * 1.0 + (fVar66 * fVar48 - fVar64 * fVar44);
    fVar45 = fVar64 * fVar39 * 1.0 + fVar62 * fVar44 * 1.0 + (fVar66 * fVar52 - fVar60 * fVar48);
    fVar49 = fVar62 * fVar48 * -1.0 + fVar64 * fVar52 * -1.0 + (fVar66 * fVar39 - fVar60 * fVar44);
    fVar61 = fStack_124 * fVar39 * 1.0 + uStack_120._4_4_ * fVar48 * 1.0 +
             ((float)auStack_128 * fVar44 - (float)uStack_120 * fVar52);
    fVar63 = (float)uStack_120 * fVar39 * 1.0 + fStack_124 * fVar52 * 1.0 +
             ((float)auStack_128 * fVar48 - uStack_120._4_4_ * fVar44);
    fVar65 = uStack_120._4_4_ * fVar39 * 1.0 + (float)uStack_120 * fVar44 * 1.0 +
             ((float)auStack_128 * fVar52 - fStack_124 * fVar48);
    fVar67 = (float)uStack_120 * fVar48 * -1.0 + uStack_120._4_4_ * fVar52 * -1.0 +
             ((float)auStack_128 * fVar39 - fStack_124 * fVar44);
    fStack_138 = fVar39;
    fStack_134 = fVar44;
    fStack_130 = fVar48;
    fStack_12c = fVar52;
    if (0.0 < param_9) {
      iVar11 = FUN_18063b8c0(auStack_128,param_8);
      fVar66 = auStack_128;
      fVar60 = auStack_128._4_4_;
      fVar62 = auStack_128._8_4_;
      fVar64 = auStack_128._12_4_;
      fStack_17c = fVar66;
      _auStack_188 = auStack_128._4_12_;
      fStack_150 = fVar60;
      auStack_158 = (undefined1  [8])auStack_128._8_8_;
      fStack_14c = fVar64;
      fStack_104 = fVar60;
      auStack_108 = (undefined1  [4])fVar64;
      uStack_100._0_4_ = fVar62;
      uStack_100._4_4_ = fVar60;
      fVar38 = fVar44 * fVar66 * 1.0 + fVar52 * fVar62 * 1.0 + (fVar39 * fVar60 - fVar48 * fVar64);
      fVar42 = fVar48 * fVar66 * 1.0 + fVar44 * fVar64 * 1.0 + (fVar39 * fVar62 - fVar52 * fVar60);
      fVar46 = fVar52 * fVar66 * 1.0 + fVar48 * fVar60 * 1.0 + (fVar39 * fVar64 - fVar44 * fVar62);
      fVar50 = fVar48 * fVar62 * -1.0 + fVar52 * fVar64 * -1.0 + (fVar39 * fVar66 - fVar44 * fVar60)
      ;
      fVar68 = fVar62;
      fVar43 = fVar64;
      fVar47 = fVar60;
      fVar51 = fVar64;
      fVar58 = fVar39;
      fVar19 = fVar44;
      fVar36 = fVar48;
      fVar15 = fVar52;
      fStack_148 = fVar66;
      fStack_144 = fVar66;
      fStack_140 = fVar66;
      fStack_13c = fVar62;
      if ((0.001 <= param_9) &&
         (fVar58 = fVar50, fVar19 = fVar38, fVar36 = fVar42, fVar15 = fVar46, param_9 <= 0.999)) {
        fVar58 = fVar48 * fVar42;
        fVar19 = fVar52 * fVar46;
        uStack_118 = 0xbf800000;
        uStack_114 = 0xbf800000;
        uStack_110 = 0xbf800000;
        uStack_10c = 0xbf800000;
        auVar26._0_4_ = fVar58 + fVar39 * fVar50;
        auVar26._4_4_ = fVar19 + fVar44 * fVar38;
        auVar26._8_4_ = fVar58 + fVar58;
        auVar26._12_4_ = fVar19 + fVar19;
        auVar27._4_12_ = auVar26._4_12_;
        auVar27._0_4_ = auVar26._0_4_ + auVar26._4_4_;
        uStack_120 = 0x3f8000003f800000;
        _auStack_128 = 0x3f8000003f800000;
        uVar12 = movmskps(iVar11,auVar27);
        iVar11 = (uVar12 & 1) * 2;
        lVar1 = (ulonglong)(uVar12 & 1) * 0x10;
        auStack_128 = (undefined1  [4])(*(float *)(auStack_128 + lVar1) * fVar50);
        fStack_124 = *(float *)(auStack_128 + lVar1 + 4) * fVar38;
        uStack_120._0_4_ = *(float *)(auStack_128 + lVar1 + 8) * fVar42;
        uStack_120._4_4_ = *(float *)(auStack_128 + lVar1 + 0xc) * fVar46;
        if (0.9995 < ABS(auVar27._0_4_)) {
          fVar58 = 1.0 - param_9;
          fVar19 = fVar39 * fVar58 + param_9 * (float)auStack_128;
          fVar46 = fVar44 * fVar58 + param_9 * fStack_124;
          fVar50 = fVar48 * fVar58 + param_9 * (float)uStack_120;
          fVar59 = fVar52 * fVar58 + param_9 * uStack_120._4_4_;
          fVar39 = fVar59 * fVar59 + fVar19 * fVar19;
          fVar44 = fVar50 * fVar50 + fVar46 * fVar46;
          fVar38 = fVar39 + fVar46 * fVar46 + fVar50 * fVar50;
          fVar42 = fVar44 + fVar19 * fVar19 + fVar59 * fVar59;
          auVar7._4_4_ = fVar39 + fVar44 + 1.1754944e-38;
          auVar7._0_4_ = fVar44 + fVar39 + 1.1754944e-38;
          auVar7._8_4_ = fVar38 + 1.1754944e-38;
          auVar7._12_4_ = fVar42 + 1.1754944e-38;
          auVar20 = rsqrtps(_auStack_128,auVar7);
          fVar48 = auVar20._0_4_;
          fVar52 = auVar20._4_4_;
          fVar36 = auVar20._8_4_;
          fVar15 = auVar20._12_4_;
          fVar58 = fVar19 * (3.0 - fVar48 * fVar48 * (fVar44 + fVar39)) * fVar48 * 0.5;
          fVar19 = fVar46 * (3.0 - fVar52 * fVar52 * (fVar39 + fVar44)) * fVar52 * 0.5;
          fVar36 = fVar50 * (3.0 - fVar36 * fVar36 * fVar38) * fVar36 * 0.5;
          fVar15 = fVar59 * (3.0 - fVar15 * fVar15 * fVar42) * fVar15 * 0.5;
        }
        else {
          fVar60 = (float)acosf();
          fVar62 = (float)sinf();
          fVar15 = (float)sinf(fVar60 - fVar60 * param_9);
          fVar15 = fVar15 * (1.0 / fVar62);
          iVar11 = sinf(fVar60 * param_9);
          fVar38 = extraout_XMM0_Da_01 * (1.0 / fVar62);
          fVar60 = (float)auStack_188._0_4_;
          fVar62 = (float)auStack_188._4_4_;
          fVar64 = fStack_180;
          fVar66 = fStack_17c;
          fVar68 = (float)auStack_158._0_4_;
          fVar43 = (float)auStack_158._4_4_;
          fVar47 = fStack_150;
          fVar51 = fStack_14c;
          fVar58 = fVar15 * fVar39 + fVar38 * (float)auStack_128;
          fVar19 = fVar15 * fVar44 + fVar38 * fStack_124;
          fVar36 = fVar15 * fVar48 + fVar38 * (float)uStack_120;
          fVar15 = fVar15 * fVar52 + fVar38 * uStack_120._4_4_;
        }
      }
      fVar38 = param_9 * 0.66;
      fVar68 = fVar54 * fVar68 * 1.0 + fVar55 * fStack_148 * 1.0 +
               (fVar57 * fVar60 - fVar14 * (float)auStack_108);
      fVar43 = fVar55 * fVar43 * 1.0 + fVar14 * fStack_144 * 1.0 +
               (fVar57 * fVar62 - fVar54 * fStack_104);
      fVar47 = fVar14 * fVar47 * 1.0 + fVar54 * fStack_140 * 1.0 +
               (fVar57 * fVar64 - fVar55 * (float)uStack_100);
      fVar51 = fVar54 * fVar51 * -1.0 + fVar14 * fStack_13c * -1.0 +
               (fVar57 * fVar66 - fVar55 * uStack_100._4_4_);
      fVar39 = fVar57;
      fVar44 = fVar55;
      fVar48 = fVar14;
      fVar52 = fVar54;
      fStack_138 = fVar58;
      fStack_134 = fVar19;
      fStack_130 = fVar36;
      fStack_12c = fVar15;
      if ((0.001 <= fVar38) &&
         (fVar39 = fVar51, fVar44 = fVar68, fVar48 = fVar43, fVar52 = fVar47, fVar38 <= 0.999)) {
        fVar39 = fVar14 * fVar43;
        fVar44 = fVar54 * fVar47;
        uStack_118 = 0xbf800000;
        uStack_114 = 0xbf800000;
        uStack_110 = 0xbf800000;
        uStack_10c = 0xbf800000;
        auVar28._0_4_ = fVar39 + fVar57 * fVar51;
        auVar28._4_4_ = fVar44 + fVar55 * fVar68;
        auVar28._8_4_ = fVar39 + fVar39;
        auVar28._12_4_ = fVar44 + fVar44;
        auVar29._4_12_ = auVar28._4_12_;
        auVar29._0_4_ = auVar28._0_4_ + auVar28._4_4_;
        uStack_120 = 0x3f8000003f800000;
        _auStack_128 = 0x3f8000003f800000;
        uVar12 = movmskps(iVar11,auVar29);
        iVar11 = (uVar12 & 1) * 2;
        lVar1 = (ulonglong)(uVar12 & 1) * 0x10;
        auStack_128 = (undefined1  [4])(*(float *)(auStack_128 + lVar1) * fVar51);
        fStack_124 = *(float *)(auStack_128 + lVar1 + 4) * fVar68;
        uStack_120._0_4_ = *(float *)(auStack_128 + lVar1 + 8) * fVar43;
        uStack_120._4_4_ = *(float *)(auStack_128 + lVar1 + 0xc) * fVar47;
        if (0.9995 < ABS(auVar29._0_4_)) {
          fVar39 = 1.0 - fVar38;
          fVar44 = fVar57 * fVar39 + fVar38 * (float)auStack_128;
          fVar47 = fVar55 * fVar39 + fVar38 * fStack_124;
          fVar51 = fVar14 * fVar39 + fVar38 * (float)uStack_120;
          fVar58 = fVar54 * fVar39 + fVar38 * uStack_120._4_4_;
          fVar57 = fVar58 * fVar58 + fVar44 * fVar44;
          fVar55 = fVar51 * fVar51 + fVar47 * fVar47;
          fVar68 = fVar57 + fVar47 * fVar47 + fVar51 * fVar51;
          fVar43 = fVar55 + fVar44 * fVar44 + fVar58 * fVar58;
          auVar6._4_4_ = fVar57 + fVar55 + 1.1754944e-38;
          auVar6._0_4_ = fVar55 + fVar57 + 1.1754944e-38;
          auVar6._8_4_ = fVar68 + 1.1754944e-38;
          auVar6._12_4_ = fVar43 + 1.1754944e-38;
          auVar20 = rsqrtps(_auStack_128,auVar6);
          fVar14 = auVar20._0_4_;
          fVar54 = auVar20._4_4_;
          fVar48 = auVar20._8_4_;
          fVar52 = auVar20._12_4_;
          fVar39 = fVar44 * (3.0 - fVar14 * fVar14 * (fVar55 + fVar57)) * fVar14 * 0.5;
          fVar44 = fVar47 * (3.0 - fVar54 * fVar54 * (fVar57 + fVar55)) * fVar54 * 0.5;
          fVar48 = fVar51 * (3.0 - fVar48 * fVar48 * fVar68) * fVar48 * 0.5;
          fVar52 = fVar58 * (3.0 - fVar52 * fVar52 * fVar43) * fVar52 * 0.5;
        }
        else {
          fVar39 = (float)acosf();
          fVar44 = (float)sinf();
          fVar52 = (float)sinf(fVar39 - fVar38 * fVar39);
          fVar52 = fVar52 * (1.0 / fVar44);
          iVar11 = sinf(fVar38 * fVar39);
          fVar68 = extraout_XMM0_Da_02 * (1.0 / fVar44);
          fVar60 = (float)auStack_188._0_4_;
          fVar62 = (float)auStack_188._4_4_;
          fVar64 = fStack_180;
          fVar66 = fStack_17c;
          fVar39 = fVar52 * fVar57 + fVar68 * (float)auStack_128;
          fVar44 = fVar52 * fVar55 + fVar68 * fStack_124;
          fVar48 = fVar52 * fVar14 + fVar68 * (float)uStack_120;
          fVar52 = fVar52 * fVar54 + fVar68 * uStack_120._4_4_;
        }
      }
      uStack_178 = CONCAT44(fVar44,fVar39);
      uStack_170 = CONCAT44(fVar52,fVar48);
      fVar68 = param_9 * 0.33;
      fVar39 = fVar40 * (float)auStack_158._0_4_ * 1.0 + fVar17 * fStack_148 * 1.0 +
               (fVar53 * fVar60 - fVar18 * (float)auStack_108);
      fVar44 = fVar17 * (float)auStack_158._4_4_ * 1.0 + fVar18 * fStack_144 * 1.0 +
               (fVar53 * fVar62 - fVar40 * fStack_104);
      fVar48 = fVar18 * fStack_150 * 1.0 + fVar40 * fStack_140 * 1.0 +
               (fVar53 * fVar64 - fVar17 * (float)uStack_100);
      fVar52 = fVar40 * fStack_14c * -1.0 + fVar18 * fStack_13c * -1.0 +
               (fVar53 * fVar66 - fVar17 * uStack_100._4_4_);
      fVar57 = fVar53;
      fVar55 = fVar17;
      fVar14 = fVar18;
      fVar54 = fVar40;
      if ((0.001 <= fVar68) &&
         (fVar57 = fVar52, fVar55 = fVar39, fVar14 = fVar44, fVar54 = fVar48, fVar68 <= 0.999)) {
        fVar57 = fVar18 * fVar44;
        fVar55 = fVar40 * fVar48;
        uStack_118 = 0xbf800000;
        uStack_114 = 0xbf800000;
        uStack_110 = 0xbf800000;
        uStack_10c = 0xbf800000;
        auVar30._0_4_ = fVar57 + fVar53 * fVar52;
        auVar30._4_4_ = fVar55 + fVar17 * fVar39;
        auVar30._8_4_ = fVar57 + fVar57;
        auVar30._12_4_ = fVar55 + fVar55;
        auVar31._4_12_ = auVar30._4_12_;
        auVar31._0_4_ = auVar30._0_4_ + auVar30._4_4_;
        uStack_120 = 0x3f8000003f800000;
        _auStack_128 = 0x3f8000003f800000;
        uVar12 = movmskps(iVar11,auVar31);
        lVar1 = (ulonglong)(uVar12 & 1) * 0x10;
        fVar57 = *(float *)(auStack_128 + lVar1);
        fVar55 = *(float *)(auStack_128 + lVar1 + 4);
        fVar14 = *(float *)(auStack_128 + lVar1 + 8);
        fVar54 = *(float *)(auStack_128 + lVar1 + 0xc);
        if (0.9995 < ABS(auVar31._0_4_)) {
          fVar60 = 1.0 - fVar68;
          fVar53 = fVar53 * fVar60 + fVar68 * fVar57 * fVar52;
          fVar17 = fVar17 * fVar60 + fVar68 * fVar55 * fVar39;
          fVar18 = fVar18 * fVar60 + fVar68 * fVar14 * fVar44;
          fVar40 = fVar40 * fVar60 + fVar68 * fVar54 * fVar48;
          fVar55 = fVar40 * fVar40 + fVar53 * fVar53;
          fVar14 = fVar18 * fVar18 + fVar17 * fVar17;
          fVar48 = fVar55 + fVar17 * fVar17 + fVar18 * fVar18;
          fVar52 = fVar14 + fVar53 * fVar53 + fVar40 * fVar40;
          auVar5._4_4_ = fVar55 + fVar14 + 1.1754944e-38;
          auVar5._0_4_ = fVar14 + fVar55 + 1.1754944e-38;
          auVar5._8_4_ = fVar48 + 1.1754944e-38;
          auVar5._12_4_ = fVar52 + 1.1754944e-38;
          auVar20 = rsqrtps(auVar31,auVar5);
          fVar57 = auVar20._0_4_;
          fVar54 = auVar20._4_4_;
          fVar39 = auVar20._8_4_;
          fVar44 = auVar20._12_4_;
          fVar57 = fVar53 * (3.0 - fVar57 * fVar57 * (fVar14 + fVar55)) * fVar57 * 0.5;
          fVar55 = fVar17 * (3.0 - fVar54 * fVar54 * (fVar55 + fVar14)) * fVar54 * 0.5;
          fVar14 = fVar18 * (3.0 - fVar39 * fVar39 * fVar48) * fVar39 * 0.5;
          fVar54 = fVar40 * (3.0 - fVar44 * fVar44 * fVar52) * fVar44 * 0.5;
        }
        else {
          fVar60 = (float)acosf();
          fVar62 = (float)sinf();
          fVar64 = (float)sinf(fVar60 - fVar60 * fVar68);
          fVar64 = fVar64 * (1.0 / fVar62);
          fVar60 = (float)sinf(fVar60 * fVar68);
          fVar60 = fVar60 * (1.0 / fVar62);
          fVar57 = fVar64 * fVar53 + fVar60 * fVar57 * fVar52;
          fVar55 = fVar64 * fVar17 + fVar60 * fVar55 * fVar39;
          fVar14 = fVar64 * fVar18 + fVar60 * fVar14 * fVar44;
          fVar54 = fVar64 * fVar40 + fVar60 * fVar54 * fVar48;
        }
      }
      auStack_188._4_4_ = fVar55;
      auStack_188._0_4_ = fVar57;
      fStack_180 = fVar14;
      fStack_17c = fVar54;
    }
    FUN_18022b240(param_2,param_17,auStack_188,uVar2);
    FUN_18022b240(param_2,param_18,&uStack_178,uVar2);
    fVar57 = (float)FUN_18022b240(param_2,param_7,&fStack_138,uVar2);
    if (((0.0 < param_13) || (fVar57 = param_9, 0.0 < param_9)) || (fVar57 = param_5, 0.0 < param_5)
       ) {
      pfStack_198 = (float *)auStack_188;
      uStack_190 = param_10;
      uVar16 = FUN_180662000(fVar57,uVar2,param_2,param_17);
      pfStack_198 = (float *)&uStack_178;
      uStack_190 = param_10;
      uVar16 = FUN_180662000(uVar16,uVar2,param_2,param_18);
      pfStack_198 = &fStack_138;
      uStack_190 = param_10;
      FUN_180662000(uVar16,uVar2,param_2,param_7);
      if (0.0 < param_13) {
        pfVar13 = (float *)FUN_18022a890(param_2,param_11,uVar2);
        fVar57 = *pfVar13;
        fVar55 = pfVar13[1];
        fVar14 = pfVar13[2];
        fVar54 = pfVar13[3];
        pfVar13 = (float *)FUN_18022a890(param_2,param_15,uVar2);
        iVar11 = FUN_18063b8c0(auStack_128,param_12);
        fVar64 = auStack_128;
        fVar66 = auStack_128._4_4_;
        fVar68 = auStack_128._8_4_;
        fVar43 = auStack_128._12_4_;
        auStack_158._4_4_ = fVar66;
        auStack_158._0_4_ = fVar43;
        fStack_150 = fVar68;
        fStack_14c = fVar66;
        uStack_100._0_4_ = fVar66;
        _auStack_108 = auStack_128._8_8_;
        uStack_100._4_4_ = fVar43;
        fVar40 = fVar37 * fVar64 * 1.0 + fVar45 * fVar68 * 1.0 + (fVar49 * fVar66 - fVar41 * fVar43)
        ;
        fVar60 = fVar41 * fVar64 * 1.0 + fVar37 * fVar43 * 1.0 + (fVar49 * fVar68 - fVar45 * fVar66)
        ;
        fVar62 = fVar45 * fVar64 * 1.0 + fVar41 * fVar66 * 1.0 + (fVar49 * fVar43 - fVar37 * fVar68)
        ;
        fVar37 = fVar41 * fVar68 * -1.0 + fVar45 * fVar43 * -1.0 +
                 (fVar49 * fVar64 - fVar37 * fVar66);
        auVar56 = (undefined1  [4])fVar68;
        fVar39 = fVar43;
        fVar44 = fVar66;
        fVar48 = fVar43;
        fVar52 = fVar57;
        fVar53 = fVar55;
        fVar17 = fVar14;
        fVar18 = fVar54;
        fStack_148 = fVar64;
        fStack_144 = fVar64;
        fStack_140 = fVar64;
        fStack_13c = fVar68;
        if ((0.001 <= param_13) &&
           (fVar52 = fVar37, fVar53 = fVar40, fVar17 = fVar60, fVar18 = fVar62, param_13 <= 0.999))
        {
          fVar52 = fVar14 * fVar60;
          fVar53 = fVar54 * fVar62;
          uStack_118 = 0xbf800000;
          uStack_114 = 0xbf800000;
          uStack_110 = 0xbf800000;
          uStack_10c = 0xbf800000;
          auVar32._0_4_ = fVar52 + fVar57 * fVar37;
          auVar32._4_4_ = fVar53 + fVar55 * fVar40;
          auVar32._8_4_ = fVar52 + fVar52;
          auVar32._12_4_ = fVar53 + fVar53;
          auVar33._4_12_ = auVar32._4_12_;
          auVar33._0_4_ = auVar32._0_4_ + auVar32._4_4_;
          uStack_120 = 0x3f8000003f800000;
          _auStack_128 = 0x3f8000003f800000;
          uVar12 = movmskps(iVar11,auVar33);
          iVar11 = (uVar12 & 1) * 2;
          lVar1 = (ulonglong)(uVar12 & 1) * 0x10;
          auStack_128 = (undefined1  [4])(*(float *)(auStack_128 + lVar1) * fVar37);
          fStack_124 = *(float *)(auStack_128 + lVar1 + 4) * fVar40;
          uStack_120._0_4_ = *(float *)(auStack_128 + lVar1 + 8) * fVar60;
          uStack_120._4_4_ = *(float *)(auStack_128 + lVar1 + 0xc) * fVar62;
          if (0.9995 < ABS(auVar33._0_4_)) {
            fVar52 = 1.0 - param_13;
            fVar53 = fVar57 * fVar52 + param_13 * (float)auStack_128;
            fVar41 = fVar55 * fVar52 + param_13 * fStack_124;
            fVar45 = fVar14 * fVar52 + param_13 * (float)uStack_120;
            fVar49 = fVar54 * fVar52 + param_13 * uStack_120._4_4_;
            fVar57 = fVar49 * fVar49 + fVar53 * fVar53;
            fVar55 = fVar45 * fVar45 + fVar41 * fVar41;
            fVar40 = fVar57 + fVar41 * fVar41 + fVar45 * fVar45;
            fVar37 = fVar55 + fVar53 * fVar53 + fVar49 * fVar49;
            auVar4._4_4_ = fVar57 + fVar55 + 1.1754944e-38;
            auVar4._0_4_ = fVar55 + fVar57 + 1.1754944e-38;
            auVar4._8_4_ = fVar40 + 1.1754944e-38;
            auVar4._12_4_ = fVar37 + 1.1754944e-38;
            auVar20 = rsqrtps(_auStack_128,auVar4);
            fVar14 = auVar20._0_4_;
            fVar54 = auVar20._4_4_;
            fVar17 = auVar20._8_4_;
            fVar18 = auVar20._12_4_;
            fVar52 = fVar53 * (3.0 - fVar14 * fVar14 * (fVar55 + fVar57)) * fVar14 * 0.5;
            fVar53 = fVar41 * (3.0 - fVar54 * fVar54 * (fVar57 + fVar55)) * fVar54 * 0.5;
            fVar17 = fVar45 * (3.0 - fVar17 * fVar17 * fVar40) * fVar17 * 0.5;
            fVar18 = fVar49 * (3.0 - fVar18 * fVar18 * fVar37) * fVar18 * 0.5;
          }
          else {
            fVar39 = (float)acosf();
            fVar44 = (float)sinf();
            fVar18 = (float)sinf(fVar39 - fVar39 * param_13);
            fVar18 = fVar18 * (1.0 / fVar44);
            iVar11 = sinf(fVar39 * param_13);
            fVar40 = extraout_XMM0_Da_03 * (1.0 / fVar44);
            auVar56 = auStack_108;
            fVar39 = fStack_104;
            fVar44 = (float)uStack_100;
            fVar48 = uStack_100._4_4_;
            fVar52 = fVar18 * fVar57 + fVar40 * (float)auStack_128;
            fVar53 = fVar18 * fVar55 + fVar40 * fStack_124;
            fVar17 = fVar18 * fVar14 + fVar40 * (float)uStack_120;
            fVar18 = fVar18 * fVar54 + fVar40 * uStack_120._4_4_;
          }
        }
        param_13 = param_13 * 0.5;
        fStack_104 = fVar53;
        auStack_108 = (undefined1  [4])fVar52;
        uStack_100._0_4_ = fVar17;
        uStack_100._4_4_ = fVar18;
        fVar52 = fVar61 * fStack_148 * 1.0;
        fVar55 = fVar65 * (float)auVar56 * 1.0 + fVar52 +
                 (fVar67 * fVar66 - fVar63 * (float)auStack_158._0_4_);
        fVar14 = fVar61 * fVar39 * 1.0 + fVar63 * fStack_144 * 1.0 +
                 (fVar67 * fVar68 - fVar65 * (float)auStack_158._4_4_);
        fVar54 = fVar63 * fVar44 * 1.0 + fVar65 * fStack_140 * 1.0 +
                 (fVar67 * fVar43 - fVar61 * fStack_150);
        fVar57 = fVar65 * fVar48 * -1.0 + fVar63 * fStack_13c * -1.0 +
                 (fVar67 * fVar64 - fVar61 * fStack_14c);
        if (0.001 <= param_13) {
          if (param_13 <= 0.999) {
            fVar61 = *pfVar13;
            fVar63 = pfVar13[1];
            fVar65 = pfVar13[2];
            fVar67 = pfVar13[3];
            fVar39 = fVar65 * fVar14;
            fVar44 = fVar67 * fVar54;
            uStack_118 = 0xbf800000;
            uStack_114 = 0xbf800000;
            uStack_110 = 0xbf800000;
            uStack_10c = 0xbf800000;
            auVar34._0_4_ = fVar39 + fVar61 * fVar57;
            auVar34._4_4_ = fVar44 + fVar63 * fVar55;
            auVar34._8_4_ = fVar39 + fVar39;
            auVar34._12_4_ = fVar44 + fVar44;
            auVar35._4_12_ = auVar34._4_12_;
            auVar35._0_4_ = auVar34._0_4_ + auVar34._4_4_;
            uStack_120 = 0x3f8000003f800000;
            _auStack_128 = 0x3f8000003f800000;
            uVar12 = movmskps(iVar11,auVar35);
            lVar1 = (ulonglong)(uVar12 & 1) * 0x10;
            fVar39 = *(float *)(auStack_128 + lVar1);
            fVar44 = *(float *)(auStack_128 + lVar1 + 4);
            fVar48 = *(float *)(auStack_128 + lVar1 + 8);
            fVar53 = *(float *)(auStack_128 + lVar1 + 0xc);
            if (0.9995 < ABS(auVar35._0_4_)) {
              fVar52 = 1.0 - param_13;
              fVar57 = fVar52 * fVar61 + param_13 * fVar39 * fVar57;
              fVar55 = fVar52 * fVar63 + param_13 * fVar44 * fVar55;
              fVar14 = fVar52 * fVar65 + param_13 * fVar48 * fVar14;
              fVar54 = fVar52 * fVar67 + param_13 * fVar53 * fVar54;
              fVar61 = fVar54 * fVar54 + fVar57 * fVar57;
              fVar63 = fVar14 * fVar14 + fVar55 * fVar55;
              fVar48 = fVar61 + fVar55 * fVar55 + fVar14 * fVar14;
              fVar53 = fVar63 + fVar57 * fVar57 + fVar54 * fVar54;
              auVar3._4_4_ = fVar61 + fVar63 + 1.1754944e-38;
              auVar3._0_4_ = fVar63 + fVar61 + 1.1754944e-38;
              auVar3._8_4_ = fVar48 + 1.1754944e-38;
              auVar3._12_4_ = fVar53 + 1.1754944e-38;
              auVar20 = rsqrtps(auVar35,auVar3);
              fVar65 = auVar20._0_4_;
              fVar67 = auVar20._4_4_;
              fVar39 = auVar20._8_4_;
              fVar44 = auVar20._12_4_;
              fVar52 = fVar65 * fVar65 * (fVar63 + fVar61);
              fVar57 = fVar57 * (3.0 - fVar52) * fVar65 * 0.5;
              fVar55 = fVar55 * (3.0 - fVar67 * fVar67 * (fVar61 + fVar63)) * fVar67 * 0.5;
              fVar14 = fVar14 * (3.0 - fVar39 * fVar39 * fVar48) * fVar39 * 0.5;
              fVar54 = fVar54 * (3.0 - fVar44 * fVar44 * fVar53) * fVar44 * 0.5;
            }
            else {
              fVar52 = (float)acosf();
              fVar17 = (float)sinf();
              fVar18 = (float)sinf(fVar52 - fVar52 * param_13);
              fVar18 = fVar18 * (1.0 / fVar17);
              fVar52 = (float)sinf(fVar52 * param_13);
              fVar52 = fVar52 * (1.0 / fVar17);
              fVar57 = fVar18 * fVar61 + fVar52 * fVar39 * fVar57;
              fVar55 = fVar18 * fVar63 + fVar52 * fVar44 * fVar55;
              fVar14 = fVar18 * fVar65 + fVar52 * fVar48 * fVar14;
              fVar54 = fVar18 * fVar67 + fVar52 * fVar53 * fVar54;
            }
          }
        }
        else {
          fVar57 = *pfVar13;
          fVar55 = pfVar13[1];
          fVar14 = pfVar13[2];
          fVar54 = pfVar13[3];
        }
        fStack_124 = fVar55;
        auStack_128 = (undefined1  [4])fVar57;
        uStack_120._0_4_ = fVar14;
        uStack_120._4_4_ = fVar54;
        pfStack_198 = (float *)auStack_128;
        uStack_190 = param_14;
        uVar16 = FUN_180662000(fVar52,uVar2,param_2,param_15);
        pfStack_198 = (float *)auStack_108;
        uStack_190 = param_14;
        FUN_180662000(uVar16,uVar2,param_2,param_11);
      }
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_1b8);
  }
  FUN_18022a890(param_2,0,uVar2);
  uStack_178 = *(undefined8 *)(param_2 + 0x400);
  uStack_170 = *(undefined8 *)(param_2 + 0x408);
  fVar55 = *param_19 * *param_19 + -param_19[1] * -param_19[1];
  auVar20 = rsqrtss(ZEXT416((uint)fVar55),ZEXT416((uint)fVar55));
  fVar57 = auVar20._0_4_;
  fVar55 = fVar57 * 0.5 * (3.0 - fVar55 * fVar57 * fVar57) * fVar55;
  if (0.0 <= fVar55) {
    if (1.0 <= fVar55) {
      fVar55 = 1.0;
    }
  }
  else {
    fVar55 = 0.0;
  }
  fVar57 = (float)asinf(fVar55);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(fVar57 * 0.5);
}







