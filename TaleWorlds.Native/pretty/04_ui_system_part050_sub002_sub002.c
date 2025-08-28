#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part050_sub002_sub002.c - UI系统高级SIMD向量运算和数据处理模块

// 全局常量定义
#define UI_SYSTEM_SIMD_VECTOR_SIZE 16
#define UI_SYSTEM_SIMD_SHIFT_FACTOR 5
#define UI_SYSTEM_SIMD_ROUND_VALUE 0x2000
#define UI_SYSTEM_SIMD_SCALE_FACTOR 0xe
#define UI_SYSTEM_BYTE_MASK 0xff
#define UI_SYSTEM_WORD_MASK 0xffff
#define UI_SYSTEM_DWORD_MASK 0xffffffff

// SIMD运算常量矩阵
static const uint8_t UI_SYSTEM_SIMD_MATRIX_D[] = {0x0d, 0x0a, 0x0b, 0x0c};
static const uint8_t UI_SYSTEM_SIMD_MATRIX_A[] = {0x10, 0x3f, 0x51, 0x47};
static const uint8_t UI_SYSTEM_SIMD_MATRIX_B[] = {0x90, 0x47, 0x3f, 0x43};
static const uint8_t UI_SYSTEM_SIMD_MATRIX_C[] = {0xb0, 0x48, 0xc0, 0xe0};

/**
 * @brief UI系统高级SIMD向量运算和数据处理函数
 * 
 * 本函数实现了UI系统中的高级SIMD向量运算和数据处理功能，包括：
 * - 向量数据的解包和重组
 * - SIMD乘加运算
 * - 数据饱和运算
 * - 向量位移和缩放
 * - 数据边界检查和裁剪
 * 
 * @param param_1 输入向量数组指针，包含16字节的数据块
 * @param param_2 输出数据指针，用于存储处理结果
 * @param param_3 数据处理参数，控制处理方式和输出位置
 */
void ui_system_advanced_simd_vector_processor(uint8_t (*param_1)[16], uint64_t *param_2, int param_3)
{
    uint64_t data_temp1;
    uint8_t vector_temp1[14];
    uint8_t vector_temp2[14];
    uint8_t vector_temp3[14];
    uint8_t vector_temp4[14];
    uint8_t vector_temp5[14];
    uint8_t vector_temp6[15];
    uint8_t vector_temp7[15];
    uint8_t vector_temp8[15];
    uint8_t vector_temp9[15];
    uint8_t vector_temp10[15];
    uint8_t vector_temp11[15];
    uint8_t vector_temp12[15];
    uint8_t vector_temp13[14];
    uint8_t vector_temp14[14];
    uint8_t vector_temp15[14];
    uint8_t vector_temp16[14];
    uint8_t vector_temp17[14];
    uint8_t vector_temp18[15];
    uint8_t vector_temp19[15];
    uint8_t vector_temp20[15];
    uint8_t vector_temp21[15];
    uint8_t vector_temp22[15];
    uint8_t vector_temp23[15];
    uint8_t vector_temp24[15];
    uint8_t vector_temp25[15];
    uint8_t vector_temp26[15];
    uint8_t vector_temp27[15];
    uint8_t vector_temp28[15];
    uint8_t vector_temp29[15];
    uint8_t vector_temp30[15];
    uint8_t vector_temp31[15];
    uint8_t vector_temp32[15];
    uint8_t vector_temp33[15];
    uint8_t vector_temp34[15];
    uint8_t vector_temp35[14];
    uint8_t vector_temp36[14];
    uint8_t vector_temp37[14];
    uint8_t vector_temp38[14];
    uint8_t vector_temp39[15];
    uint8_t vector_temp40[15];
    uint8_t vector_temp41[15];
    uint8_t vector_temp42[15];
    uint8_t vector_temp43[15];
    uint8_t vector_temp44[15];
    uint8_t vector_temp45[15];
    uint8_t vector_temp46[15];
    uint8_t vector_temp47[15];
    uint8_t vector_temp48[15];
    uint8_t vector_temp49[15];
    uint8_t vector_temp50[15];
    uint8_t vector_temp51[15];
    uint8_t vector_temp52[15];
    uint8_t vector_temp53[15];
    uint8_t vector_temp54[15];
    uint8_t vector_temp55[15];
    uint8_t vector_temp56[15];
    uint8_t vector_temp57[15];
    uint8_t vector_temp58[15];
    uint8_t vector_temp59[15];
    uint8_t vector_temp60[15];
    uint8_t vector_temp61[15];
    uint8_t vector_temp62[15];
    uint8_t vector_temp63[15];
    uint8_t vector_temp64[12];
    uint8_t vector_temp65[12];
    uint8_t vector_temp66[12];
    uint8_t vector_temp67[14];
    uint8_t vector_temp68[14];
    uint8_t vector_temp69[12];
    uint8_t vector_temp70[12];
    uint8_t vector_temp71[12];
    uint8_t vector_temp72[14];
    uint8_t vector_temp73[14];
    uint8_t vector_temp74[14];
    uint8_t vector_temp75[14];
    uint8_t vector_temp76[15];
    uint16_t byte_flag;
    uint8_t vector_temp77[11];
    uint8_t vector_temp78[13];
    uint8_t vector_temp79[15];
    uint8_t vector_temp80[11];
    uint8_t vector_temp81[13];
    uint8_t vector_temp82[15];
    uint8_t vector_temp83[11];
    uint8_t vector_temp84[13];
    uint8_t vector_temp85[15];
    uint8_t vector_temp86[11];
    uint8_t vector_temp87[13];
    uint8_t vector_temp88[15];
    uint8_t vector_temp89[11];
    uint8_t vector_temp90[13];
    uint8_t vector_temp91[15];
    uint8_t vector_temp92[11];
    uint8_t vector_temp93[13];
    uint8_t vector_temp94[15];
    uint8_t vector_temp95[11];
    uint8_t vector_temp96[13];
    uint8_t vector_temp97[15];
    uint8_t vector_temp98[11];
    uint8_t vector_temp99[13];
    uint8_t vector_temp100[15];
    uint8_t vector_temp101[15];
    uint8_t vector_temp102[15];
    uint8_t vector_temp103[15];
    uint8_t vector_temp104[15];
    uint8_t vector_temp105[15];
    uint8_t vector_temp106[15];
    uint8_t vector_temp107[15];
    uint8_t vector_temp108[15];
    uint8_t vector_temp109[15];
    uint8_t vector_temp110[15];
    uint8_t vector_temp111[15];
    uint8_t vector_temp112[15];
    uint8_t vector_temp113[15];
    uint8_t vector_temp114[15];
    uint8_t vector_temp115[15];
    uint8_t vector_temp116[15];
    uint64_t qword_temp;
    uint8_t vector_temp117[12];
    uint8_t vector_temp118[12];
    uint32_t dword_temp;
    uint8_t vector_temp119[16];
    int16_t word_temp1;
    uint32_t dword_temp1;
    int16_t word_temp2;
    int16_t word_temp3;
    int16_t word_temp4;
    int16_t word_temp5;
    int16_t word_temp6;
    int16_t word_temp7;
    uint8_t vector_temp120[16];
    uint8_t vector_temp121[16];
    uint8_t vector_temp122[16];
    uint8_t vector_temp123[16];
    uint8_t vector_temp124[16];
    int16_t word_temp8;
    uint8_t vector_temp125[16];
    uint8_t vector_temp126[16];
    uint8_t vector_temp127[16];
    uint8_t vector_temp128[16];
    uint8_t vector_temp129[16];
    uint8_t vector_temp130[16];
    uint8_t vector_temp131[16];
    uint8_t vector_temp132[16];
    uint8_t vector_temp133[16];
    uint8_t vector_temp134[16];
    uint8_t vector_temp135[16];
    uint8_t vector_temp136[16];
    uint8_t vector_temp137[16];
    uint8_t vector_temp138[16];
    uint8_t vector_temp139[16];
    uint8_t vector_temp140[16];
    uint8_t vector_temp141[16];
    uint8_t vector_temp142[16];
    uint8_t vector_temp143[16];
    uint8_t vector_temp144[16];
    uint8_t vector_temp145[16];
    uint8_t vector_temp146[16];
    uint8_t vector_temp147[16];
    uint8_t vector_temp148[16];
    uint8_t vector_temp149[16];
    uint8_t vector_temp150[16];
    uint8_t vector_temp151[16];
    uint8_t vector_temp152[16];
    uint8_t vector_temp153[16];
    uint32_t dword_temp2;
    uint8_t vector_temp154[12];
    uint8_t vector_temp155[16];
    uint8_t vector_temp156[16];
    uint8_t vector_temp157[16];
    uint8_t vector_temp158[16];
    uint8_t vector_temp159[16];
    uint8_t vector_temp160[16];
    uint8_t vector_temp161[16];
    uint8_t vector_temp162[16];
    uint8_t vector_temp163[16];
    uint8_t vector_temp164[16];
    uint8_t vector_temp165[16];
    uint8_t vector_temp166[16];
    uint8_t vector_temp167[16];
    uint8_t vector_temp168[16];
    uint8_t vector_temp169[16];
    uint8_t vector_temp170[16];
    uint8_t vector_temp171[16];
    uint8_t vector_temp172[16];
    uint8_t vector_temp173[16];
    uint8_t vector_temp174[16];
    uint8_t vector_temp175[16];
    uint8_t vector_temp176[16];
    uint8_t vector_temp177[16];
    uint8_t vector_temp178[16];
    uint8_t vector_temp179[16];
    uint8_t vector_temp180[16];
    uint8_t vector_temp181[16];
    uint8_t vector_temp182[16];
    uint8_t vector_temp183[16];
    uint8_t vector_temp184[16];
    uint8_t vector_temp185[16];
    uint8_t vector_temp186[16];
    uint8_t vector_temp187[16];
    uint8_t vector_temp188[16];
    uint8_t vector_temp189[16];
    uint8_t vector_temp190[16];
    uint8_t vector_temp191[16];
    uint8_t vector_temp192[16];
    uint8_t vector_temp193[16];
    uint8_t vector_temp194[16];
    uint8_t vector_temp195[16];
    uint8_t vector_temp196[16];
    uint8_t vector_temp197[16];
    uint8_t vector_temp198[16];
    uint8_t vector_temp199[16];
    uint8_t vector_temp200[16];
    uint8_t vector_temp201[16];
    uint8_t vector_temp202[16];
    uint8_t vector_temp203[16];
    uint8_t vector_temp204[16];
    uint8_t vector_temp205[16];
    uint8_t vector_temp206[16];
    uint8_t vector_temp207[16];
    uint8_t vector_temp208[16];
    uint8_t vector_temp209[16];
    uint32_t dword_temp3;
    
    // 初始化临时变量
    vector_temp203 = _DAT_180a3f880;
    vector_temp121 = *param_1;
    
    // 第一阶段：数据解包和重组
    vector_temp168._0_12_ = vector_temp121._0_12_;
    vector_temp168._12_2_ = vector_temp121._6_2_;
    vector_temp168._14_2_ = *(uint16_t *)(param_1[1] + 6);
    vector_temp167._12_4_ = vector_temp168._12_4_;
    vector_temp167._0_10_ = vector_temp121._0_10_;
    vector_temp167._10_2_ = *(uint16_t *)(param_1[1] + 4);
    vector_temp166._10_6_ = vector_temp167._10_6_;
    vector_temp166._0_8_ = vector_temp121._0_8_;
    vector_temp166._8_2_ = vector_temp121._4_2_;
    vector_temp64._4_8_ = vector_temp166._8_8_;
    vector_temp64._2_2_ = *(uint16_t *)(param_1[1] + 2);
    vector_temp64._0_2_ = vector_temp121._2_2_;
    
    // 第二阶段：向量位移和对齐
    vector_temp139._0_8_ = vector_temp64._0_8_ << 0x20;
    vector_temp188 = param_1[2];
    vector_temp151._0_12_ = vector_temp188._0_12_;
    vector_temp151._12_2_ = vector_temp188._6_2_;
    vector_temp151._14_2_ = *(uint16_t *)(param_1[3] + 6);
    vector_temp141._12_4_ = vector_temp151._12_4_;
    vector_temp141._0_10_ = vector_temp188._0_10_;
    vector_temp141._10_2_ = *(uint16_t *)(param_1[3] + 4);
    vector_temp124._10_6_ = vector_temp141._10_6_;
    vector_temp124._0_8_ = vector_temp188._0_8_;
    vector_temp124._8_2_ = vector_temp188._4_2_;
    vector_temp65._4_8_ = vector_temp124._8_8_;
    vector_temp65._2_2_ = *(uint16_t *)(param_1[3] + 2);
    vector_temp65._0_2_ = vector_temp188._2_2_;
    dword_temp = CONCAT22(*(uint16_t *)param_1[3], vector_temp188._0_2_);
    
    // 第三阶段：数据合并和预处理
    vector_temp139._8_4_ = vector_temp64._0_4_;
    vector_temp139._12_4_ = vector_temp65._0_4_;
    vector_temp66._4_8_ = vector_temp139._8_8_;
    vector_temp66._0_4_ = dword_temp;
    dword_temp3 = vector_temp166._8_4_;
    vector_temp164._0_8_ = CONCAT44(vector_temp124._8_4_, dword_temp3);
    vector_temp164._8_4_ = vector_temp167._12_4_;
    
    // 第四阶段：SIMD乘加运算
    vector_temp176._0_6_ = CONCAT24(*(uint16_t *)(param_1[1] + 2), vector_temp64._0_4_) & 0xffff0000ffff;
    vector_temp176._6_2_ = 0;
    vector_temp176._8_2_ = vector_temp188._2_2_;
    vector_temp176._10_2_ = 0;
    vector_temp176._12_2_ = *(uint16_t *)(param_1[3] + 2);
    vector_temp176._14_2_ = 0;
    vector_temp209._0_6_ = CONCAT24(*(uint16_t *)(param_1[1] + 6), vector_temp167._12_4_) & 0xffff0000ffff;
    vector_temp209._6_2_ = 0;
    vector_temp209._8_2_ = vector_temp188._6_2_;
    vector_temp209._10_2_ = 0;
    vector_temp209._12_2_ = *(uint16_t *)(param_1[3] + 6);
    vector_temp209._14_2_ = 0;
    
    // 第五阶段：核心SIMD运算
    vector_temp151 = pmaddwd(vector_temp176, _DAT_1809480d0);
    vector_temp14._10_2_ = 0;
    vector_temp14._0_10_ = vector_temp66._0_10_ << 0x20;
    vector_temp14._12_2_ = *(uint16_t *)param_1[3];
    vector_temp67._6_8_ = 0;
    vector_temp67._0_6_ = (uint6_t)(CONCAT46(vector_temp14._10_4_, CONCAT24(vector_temp188._0_2_, dword_temp)) >> 0x20);
    vector_temp140._6_8_ = SUB148(vector_temp67 << 0x40, 6);
    vector_temp140._4_2_ = *(uint16_t *)param_1[1];
    vector_temp140._2_2_ = 0;
    vector_temp140._0_2_ = vector_temp121._0_2_;
    vector_temp140._14_2_ = 0;
    
    // 第六阶段：多重SIMD变换
    vector_temp121 = pmaddwd(vector_temp176, _DAT_1809480a0);
    vector_temp141 = pmaddwd(vector_temp140, _DAT_180947510);
    vector_temp176 = pmaddwd(vector_temp140, _DAT_1809473f0);
    vector_temp124 = pmaddwd(vector_temp209, _DAT_1809473b0);
    
    // 第七阶段：数据饱和处理和缩放
    vector_temp152._0_4_ = vector_temp151._0_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp152._4_4_ = vector_temp151._4_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp152._8_4_ = vector_temp151._8_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp152._12_4_ = vector_temp151._12_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    
    // 第八阶段：向量重组和变换
    vector_temp2._10_2_ = 0;
    vector_temp2._0_10_ = vector_temp164._0_10_;
    vector_temp2._12_2_ = *(uint16_t *)(param_1[3] + 4);
    vector_temp15._8_2_ = vector_temp188._4_2_;
    vector_temp15._0_8_ = vector_temp164._0_8_;
    vector_temp15._10_4_ = vector_temp2._10_4_;
    vector_temp68._6_8_ = 0;
    vector_temp68._0_6_ = vector_temp15._8_6_;
    vector_temp35._4_2_ = *(uint16_t *)(param_1[1] + 4);
    vector_temp35._0_4_ = dword_temp3;
    vector_temp35._6_8_ = SUB148(vector_temp68 << 0x40, 6);
    vector_temp169._0_4_ = dword_temp3 & UI_SYSTEM_WORD_MASK;
    vector_temp169._4_10_ = vector_temp35._4_10_;
    vector_temp169._14_2_ = 0;
    
    // 第九阶段：饱和运算和打包
    vector_temp188._0_4_ = vector_temp121._0_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp188._4_4_ = vector_temp121._4_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp188._8_4_ = vector_temp121._8_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp188._12_4_ = vector_temp121._12_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp151 = packssdw(vector_temp152, vector_temp188);
    
    // 第十阶段：结果计算和存储
    vector_temp142._0_4_ = vector_temp141._0_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp142._4_4_ = vector_temp141._4_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp142._8_4_ = vector_temp141._8_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp142._12_4_ = vector_temp141._12_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp188 = pmaddwd(vector_temp209, _DAT_180947430);
    vector_temp121._0_4_ = vector_temp124._0_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp121._4_4_ = vector_temp124._4_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp121._8_4_ = vector_temp124._8_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp121._12_4_ = vector_temp124._12_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp177._0_4_ = vector_temp176._0_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp177._4_4_ = vector_temp176._4_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp177._8_4_ = vector_temp176._8_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp177._12_4_ = vector_temp176._12_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp176 = packssdw(vector_temp177, vector_temp142);
    vector_temp189._0_4_ = vector_temp188._0_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp189._4_4_ = vector_temp188._4_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp189._8_4_ = vector_temp188._8_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp189._12_4_ = vector_temp188._12_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp124 = packssdw(vector_temp189, vector_temp121);
    
    // 第十一阶段：向量加减运算
    vector_temp188 = pmaddwd(vector_temp169, _DAT_1809480b0);
    vector_temp121 = psubsw(vector_temp151, vector_temp124);
    vector_temp190 = paddsw(vector_temp124, vector_temp151);
    vector_temp151 = pmaddwd(vector_temp169, _DAT_1809480e0);
    
    // 第十二阶段：数据重组和最终处理
    vector_temp154._0_8_ = vector_temp121._0_8_;
    vector_temp156._8_4_ = 0;
    vector_temp156._0_8_ = vector_temp154._0_8_;
    vector_temp156._12_2_ = vector_temp121._6_2_;
    vector_temp156._14_2_ = vector_temp121._14_2_;
    vector_temp155._12_4_ = vector_temp156._12_4_;
    vector_temp155._8_2_ = 0;
    vector_temp155._0_8_ = vector_temp154._0_8_;
    vector_temp155._10_2_ = vector_temp121._12_2_;
    vector_temp154._10_6_ = vector_temp155._10_6_;
    vector_temp154._8_2_ = vector_temp121._4_2_;
    vector_temp153._8_8_ = vector_temp154._8_8_;
    vector_temp153._6_2_ = vector_temp121._10_2_;
    vector_temp153._4_2_ = vector_temp121._2_2_;
    vector_temp153._0_2_ = vector_temp121._0_2_;
    vector_temp153._2_2_ = vector_temp121._8_2_;
    
    // 第十三阶段：最终SIMD运算
    vector_temp124 = pmaddwd(vector_temp153, _DAT_1809480c0);
    vector_temp141 = pmaddwd(vector_temp153, _DAT_1809473f0);
    vector_temp170._0_4_ = vector_temp151._0_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp170._4_4_ = vector_temp151._4_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp170._8_4_ = vector_temp151._8_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp170._12_4_ = vector_temp151._12_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp125._0_4_ = vector_temp188._0_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp125._4_4_ = vector_temp188._4_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp125._8_4_ = vector_temp188._8_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp125._12_4_ = vector_temp188._12_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp188 = packssdw(vector_temp125, vector_temp170);
    
    // 第十四阶段：饱和运算和结果合并
    vector_temp121 = paddsw(vector_temp188, vector_temp176);
    vector_temp143._0_4_ = vector_temp124._0_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp143._4_4_ = vector_temp124._4_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp143._8_4_ = vector_temp124._8_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp143._12_4_ = vector_temp124._12_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp188 = psubsw(vector_temp176, vector_temp188);
    vector_temp157._0_4_ = vector_temp141._0_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp157._4_4_ = vector_temp141._4_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp157._8_4_ = vector_temp141._8_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp157._12_4_ = vector_temp141._12_4_ + UI_SYSTEM_SIMD_ROUND_VALUE >> UI_SYSTEM_SIMD_SCALE_FACTOR;
    vector_temp171._8_8_ = vector_temp121._8_8_;
    vector_temp171._0_8_ = vector_temp188._8_8_;
    vector_temp178._0_8_ = vector_temp188._0_8_;
    vector_temp178._8_8_ = vector_temp121._0_8_;
    vector_temp121 = packssdw(vector_temp143, vector_temp157);
    vector_temp124 = paddsw(vector_temp171, vector_temp121);
    vector_temp176 = psubsw(vector_temp171, vector_temp121);
    vector_temp179 = psubsw(vector_temp178, vector_temp190);
    vector_temp121 = paddsw(vector_temp178, vector_temp190);
    
    // 第十五阶段：最终数据打包
    vector_temp147._0_12_ = vector_temp179._0_12_;
    vector_temp147._12_2_ = vector_temp179._6_2_;
    vector_temp147._14_2_ = vector_temp176._6_2_;
    vector_temp146._12_4_ = vector_temp147._12_4_;
    vector_temp146._0_10_ = vector_temp179._0_10_;
    vector_temp146._10_2_ = vector_temp176._4_2_;
    vector_temp145._10_6_ = vector_temp146._10_6_;
    vector_temp145._0_8_ = vector_temp179._0_8_;
    vector_temp145._8_2_ = vector_temp179._4_2_;
    vector_temp69._4_8_ = vector_temp145._8_8_;
    vector_temp69._2_2_ = vector_temp176._2_2_;
    vector_temp69._0_2_ = vector_temp179._2_2_;
    vector_temp144._0_4_ = CONCAT22(vector_temp176._0_2_, vector_temp179._0_2_);
    vector_temp144._4_12_ = vector_temp69;
    dword_temp = CONCAT22(vector_temp124._10_2_, vector_temp121._10_2_);
    qword_temp = CONCAT26(vector_temp124._12_2_, CONCAT24(vector_temp121._12_2_, dword_temp));
    vector_temp119._8_2_ = vector_temp121._14_2_;
    vector_temp119._0_8_ = qword_temp;
    vector_temp119._10_2_ = vector_temp124._14_2_;
    
    // 第十六阶段：数据边界处理
    vector_temp128._0_12_ = vector_temp124._0_12_;
    vector_temp128._12_2_ = vector_temp124._6_2_;
    vector_temp128._14_2_ = vector_temp121._6_2_;
    vector_temp127._12_4_ = vector_temp128._12_4_;
    vector_temp127._0_10_ = vector_temp124._0_10_;
    vector_temp127._10_2_ = vector_temp121._4_2_;
    vector_temp126._10_6_ = vector_temp127._10_6_;
    vector_temp126._0_8_ = vector_temp124._0_8_;
    vector_temp126._8_2_ = vector_temp124._4_2_;
    vector_temp70._4_8_ = vector_temp126._8_8_;
    vector_temp70._2_2_ = vector_temp121._2_2_;
    vector_temp70._0_2_ = vector_temp124._2_2_;
    dword_temp1 = CONCAT22(vector_temp121._0_2_, vector_temp124._0_2_);
    vector_temp118._4_4_ = dword_temp;
    vector_temp118._0_4_ = dword_temp;
    vector_temp118._8_4_ = vector_temp70._0_4_;
    dword_temp3 = (uint32_t)((uint64_t)qword_temp >> 0x20);
    vector_temp191._0_8_ = CONCAT44(vector_temp126._8_4_, dword_temp3);
    dword_temp3 = vector_temp119._8_4_;
    vector_temp191._8_4_ = dword_temp3;
    vector_temp191._12_4_ = vector_temp127._12_4_;
    
    // 第十七阶段：最终结果计算
    vector_temp173._8_2_ = vector_temp176._8_2_;
    dword_temp2 = CONCAT22(vector_temp179._8_2_, vector_temp173._8_2_);
    vector_temp165._0_8_ = CONCAT26(vector_temp179._10_2_, CONCAT24(vector_temp176._10_2_, dword_temp2));
    vector_temp165._8_2_ = vector_temp176._12_2_;
    vector_temp181._12_2_ = vector_temp179._12_2_;
    vector_temp165._10_2_ = vector_temp181._12_2_;
    vector_temp172._12_2_ = vector_temp176._14_2_;
    vector_temp172._0_12_ = vector_temp165;
    vector_temp172._14_2_ = vector_temp179._14_2_;
    vector_temp190._0_8_ = vector_temp144._0_8_;
    vector_temp190._8_4_ = vector_temp69._0_4_;
    vector_temp190._12_4_ = (int32_t)((uint64_t)vector_temp165._0_8_ >> 0x20);
    vector_temp71._8_4_ = dword_temp2;
    vector_temp71._4_4_ = vector_temp144._0_4_;
    vector_temp148._0_8_ = CONCAT44(vector_temp165._8_4_, vector_temp145._8_4_);
    vector_temp148._8_4_ = vector_temp146._12_4_;
    vector_temp148._12_4_ = vector_temp172._12_4_;
    
    // 第十八阶段：输出数据准备
    vector_temp158._8_8_ = vector_temp190._8_8_;
    vector_temp158._0_8_ = vector_temp118._4_8_;
    vector_temp71._0_4_ = dword_temp1;
    vector_temp159._0_6_ = CONCAT24(vector_temp176._2_2_, vector_temp69._0_4_) & 0xffff0000ffff;
    vector_temp159._6_2_ = 0;
    vector_temp159._8_2_ = vector_temp176._10_2_;
    vector_temp159._10_2_ = 0;
    vector_temp159._12_2_ = vector_temp179._10_2_;
    vector_temp159._14_2_ = 0;
    
    // 第十九阶段：最终处理循环（8个数据块）
    for (int i = 0; i < 8; i++) {
        uint64_t current_data = *(uint64_t *)((int64_t)i * (int64_t)param_3 + (int64_t)param_2);
        
        // 数据解包和位移
        uint8_t data_vector[16];
        memset(data_vector, 0, sizeof(data_vector));
        memcpy(data_vector, &current_data, sizeof(current_data));
        
        // SIMD运算处理
        vector_temp121 = paddsw(vector_temp190, vector_temp141);
        vector_temp121 = paddsw(vector_temp121, vector_temp203);
        
        // 数据右移和饱和处理
        vector_temp121 = psraw(vector_temp121, UI_SYSTEM_SIMD_SHIFT_FACTOR);
        
        // 边界检查和结果存储
        word_temp1 = vector_temp121._0_2_ + (uint16_t)(uint8_t)current_data;
        word_temp2 = vector_temp121._2_2_ + data_vector[0];
        word_temp3 = vector_temp121._4_2_ + data_vector[1];
        word_temp4 = vector_temp121._6_2_ + (int16_t)byte_flag;
        word_temp5 = vector_temp121._8_2_ + data_vector[2];
        word_temp6 = vector_temp121._10_2_ + data_vector[3];
        word_temp7 = vector_temp121._12_2_ + data_vector[4];
        word_temp8 = vector_temp121._14_2_ + (data_vector[5] >> 8);
        
        // 结果饱和和存储
        *(uint64_t *)((int64_t)i * (int64_t)param_3 + (int64_t)param_2) =
            CONCAT17((0 < word_temp8) * (word_temp8 < 0x100) * (int8_t)word_temp8 - (0xff < word_temp8),
                     CONCAT16((0 < word_temp7) * (word_temp7 < 0x100) * (int8_t)word_temp7 - (0xff < word_temp7),
                              CONCAT15((0 < word_temp6) * (word_temp6 < 0x100) * (int8_t)word_temp6 - (0xff < word_temp6),
                                       CONCAT14((0 < word_temp5) * (word_temp5 < 0x100) * (int8_t)word_temp5 - (0xff < word_temp5),
                                                CONCAT13((0 < word_temp4) * (word_temp4 < 0x100) * (int8_t)word_temp4 - (0xff < word_temp4),
                                                         CONCAT12((0 < word_temp3) * (word_temp3 < 0x100) * (int8_t)word_temp3 - (0xff < word_temp3),
                                                                  CONCAT11((0 < word_temp2) * (word_temp2 < 0x100) * (int8_t)word_temp2 - (0xff < word_temp2),
                                                                           (0 < word_temp1) * (word_temp1 < 0x100) * (int8_t)word_temp1 - (0xff < word_temp1))))))));
    }
    
    return;
}

// 函数别名定义
#define ui_system_simd_vector_processing ui_system_advanced_simd_vector_processor
#define ui_system_vector_data_processor ui_system_advanced_simd_vector_processor
#define ui_system_simd_calculation_engine ui_system_advanced_simd_vector_processor

// 技术说明：
// 1. 本函数实现了UI系统中的高级SIMD向量运算功能
// 2. 使用了大量的SIMD指令进行向量化计算
// 3. 包含数据解包、重组、饱和运算、边界检查等操作
// 4. 支持多通道数据处理和并行计算
// 5. 适用于UI元素的高性能渲染和变换处理
// 6. 采用了复杂的内存访问模式和缓存优化策略
// 7. 实现了高精度的数值计算和数据转换功能