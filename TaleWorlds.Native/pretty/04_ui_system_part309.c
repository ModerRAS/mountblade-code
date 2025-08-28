#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part309.c - 6 个函数

// 函数: void FUN_180838af4(void)
void FUN_180838af4(void)

{
  float fVar1;
  longlong lVar2;
  longlong *unaff_R14;
  int8_t auVar3 [16];
  int8_t auVar4 [32];
  int8_t auVar5 [64];
  int8_t auVar6 [64];
  int8_t auVar7 [64];
  int8_t auVar8 [64];
  int8_t auVar9 [64];
  int8_t auVar10 [64];
  int8_t auVar11 [64];
  int8_t auVar12 [64];
  int8_t auVar13 [16];
  int8_t auVar14 [32];
  int8_t in_ZMM0 [64];
  int8_t auVar15 [16];
  int8_t auVar16 [16];
  int8_t in_ZMM1 [64];
  int8_t auVar17 [16];
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  int8_t in_ZMM3 [64];
  int8_t in_ZMM4 [64];
  int8_t in_ZMM6 [64];
  int8_t in_ZMM9 [64];
  int8_t in_ZMM10 [64];
  int32_t unaff_retaddr;
  int32_t unaff_retaddr_00;
  int iStackX_8;
  longlong in_stack_00000098;
  int8_t (*in_stack_000000b0) [64];
  uint in_stack_000000b8;
  longlong in_stack_000000c0;
  uint *in_stack_000000c8;
  
  lVar2 = *unaff_R14;
  auVar3 = vpinsrd_avx(in_ZMM3._0_16_,(int)*unaff_R14,1);
  auVar3 = vpinsrd_avx(auVar3,unaff_retaddr,2);
  auVar3 = vpinsrd_avx(auVar3,unaff_retaddr_00,3);
  auVar5._0_16_ = ZEXT116(0) * in_ZMM1._0_16_ + ZEXT116(1) * auVar3;
  auVar5._32_32_ = in_ZMM1._32_32_;
  auVar5._16_16_ = ZEXT116(1) * in_ZMM1._0_16_;
  auVar5 = vinserti64x4_avx512f(auVar5,in_ZMM0._0_32_,1);
  auVar6 = vpbroadcastd_avx512f();
  auVar5 = vpaddd_avx512f(auVar6,auVar5);
  auVar3 = vpinsrq_avx((int8_t  [16])0x0,lVar2,1);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = lVar2 * 2;
  auVar15 = vpinsrq_avx(auVar15,lVar2 * 3,1);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = lVar2 * 6;
  auVar13 = vpinsrq_avx(auVar13,lVar2 * 7,1);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = lVar2 * 4;
  auVar16 = vpinsrq_avx(auVar17,lVar2 * 5,1);
  auVar6 = vbroadcastss_avx512f(ZEXT416(0x30000000));
  auVar4._0_16_ = ZEXT116(0) * auVar13 + ZEXT116(1) * auVar16;
  auVar4._16_16_ = ZEXT116(1) * auVar13;
  auVar7 = vinserti64x4_avx512f
                     (ZEXT3264(CONCAT1616(ZEXT116(1) * auVar15,
                                          ZEXT116(0) * auVar15 + ZEXT116(1) * auVar3)),auVar4,1);
  auVar7 = vpaddq_avx512f(in_ZMM4,auVar7);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = lVar2 * 0xe;
  auVar3 = vpinsrq_avx(auVar3,lVar2 * 0xf,1);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = lVar2 * 10;
  auVar15 = vpinsrq_avx(auVar16,lVar2 * 0xb,1);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = lVar2 * 0xc;
  auVar13 = vpinsrq_avx(auVar18,lVar2 * 0xd,1);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = lVar2 * 8;
  auVar16 = vpinsrq_avx(auVar19,lVar2 * 9,1);
  auVar14._0_16_ = ZEXT116(0) * auVar3 + ZEXT116(1) * auVar13;
  auVar14._16_16_ = ZEXT116(1) * auVar3;
  auVar8 = vinserti64x4_avx512f
                     (ZEXT3264(CONCAT1616(ZEXT116(1) * auVar15,
                                          ZEXT116(0) * auVar15 + ZEXT116(1) * auVar16)),auVar14,1);
  auVar8 = vpaddq_avx512f(in_ZMM4,auVar8);
  auVar9 = vmovdqu32_avx512f(_DAT_180980d80);
  do {
    auVar10 = vpermd_avx512f(auVar9,auVar8);
    auVar4 = vextracti64x4_avx512f(auVar10,0);
    auVar10 = vpermd_avx512f(auVar9,auVar7);
    vinserti64x4_avx512f(auVar10,auVar4,1);
    auVar10 = vpsrld_avx512f(auVar5,1);
    auVar10 = vcvtdq2ps_avx512f(auVar10);
    auVar11 = vgatherdps_avx512f(*(int32_t *)(in_stack_000000c0 + in_stack_00000098 * 4));
    auVar10 = vmulps_avx512f(auVar10,auVar6);
    auVar12 = vgatherdps_avx512f(*(int32_t *)(in_stack_000000c0 + 4 + in_stack_00000098 * 4));
    auVar12 = vsubps_avx512f(auVar12,auVar11);
    auVar10 = vmulps_avx512f(auVar12,auVar10);
    auVar10 = vaddps_avx512f(auVar10,auVar11);
    *in_stack_000000b0 = auVar10;
    in_stack_000000b0 = in_stack_000000b0 + 1;
    auVar5 = vpaddd_avx512f(auVar5,in_ZMM10);
    auVar7 = vpaddq_avx512f(auVar7,in_ZMM9);
    auVar8 = vpaddq_avx512f(auVar8,in_ZMM9);
    iStackX_8 = iStackX_8 + -1;
  } while (iStackX_8 != 0);
  auVar3 = vextracti32x4_avx512f(auVar7,0);
  *(longlong *)in_stack_000000c8 = auVar3._0_8_;
  for (in_stack_000000b8 = in_stack_000000b8 & 0xf; in_stack_000000b8 != 0;
      in_stack_000000b8 = in_stack_000000b8 - 1) {
    fVar1 = *(float *)(in_stack_000000c0 + (ulonglong)in_stack_000000c8[1] * 4);
    auVar3 = vfmadd213ss_fma(in_ZMM6._0_16_,
                             ZEXT416((uint)((*(float *)(in_stack_000000c0 +
                                                       (ulonglong)(in_stack_000000c8[1] + 1) * 4) -
                                            fVar1) * (float)(*in_stack_000000c8 >> 1))),
                             ZEXT416((uint)fVar1));
    *(int *)*in_stack_000000b0 = auVar3._0_4_;
    *(longlong *)in_stack_000000c8 = *(longlong *)in_stack_000000c8 + *unaff_R14;
    in_stack_000000b0 = (int8_t (*) [64])(*in_stack_000000b0 + 4);
  }
  return;
}





// 函数: void FUN_180838c60(longlong param_1,int8_t (*param_2) [64],uint64_t param_3,longlong param_4)
void FUN_180838c60(longlong param_1,int8_t (*param_2) [64],uint64_t param_3,longlong param_4)

{
  float fVar1;
  int in_EAX;
  longlong unaff_RBX;
  uint *unaff_RSI;
  longlong *unaff_R14;
  int8_t auVar2 [16];
  int8_t auVar3 [32];
  int8_t auVar4 [64];
  int8_t auVar5 [64];
  int8_t auVar6 [64];
  int8_t in_XMM4 [16];
  uint64_t in_YMM4_H;
  uint64_t in_register_00001318;
  uint64_t in_register_00001320;
  uint64_t in_register_00001328;
  uint64_t in_register_00001330;
  uint64_t in_register_00001338;
  int8_t in_ZMM5 [64];
  int8_t in_ZMM6 [64];
  int8_t in_ZMM7 [64];
  int8_t in_ZMM8 [64];
  int8_t in_ZMM9 [64];
  int8_t in_ZMM10 [64];
  int8_t in_ZMM11 [64];
  uint in_stack_000000b8;
  
  do {
    auVar4._16_8_ = in_YMM4_H;
    auVar4._0_16_ = in_XMM4;
    auVar4._24_8_ = in_register_00001318;
    auVar4._32_8_ = in_register_00001320;
    auVar4._40_8_ = in_register_00001328;
    auVar4._48_8_ = in_register_00001330;
    auVar4._56_8_ = in_register_00001338;
    auVar4 = vpermd_avx512f(auVar4,in_ZMM8);
    auVar3 = vextracti64x4_avx512f(auVar4,0);
    auVar5._16_8_ = in_YMM4_H;
    auVar5._0_16_ = in_XMM4;
    auVar5._24_8_ = in_register_00001318;
    auVar5._32_8_ = in_register_00001320;
    auVar5._40_8_ = in_register_00001328;
    auVar5._48_8_ = in_register_00001330;
    auVar5._56_8_ = in_register_00001338;
    auVar4 = vpermd_avx512f(auVar5,in_ZMM5);
    vinserti64x4_avx512f(auVar4,auVar3,1);
    auVar4 = vpsrld_avx512f(in_ZMM7,1);
    auVar4 = vcvtdq2ps_avx512f(auVar4);
    auVar5 = vgatherdps_avx512f(*(int32_t *)(param_4 + unaff_RBX * 4));
    auVar4 = vmulps_avx512f(auVar4,in_ZMM11);
    auVar6 = vgatherdps_avx512f(*(int32_t *)(param_1 + unaff_RBX * 4));
    auVar6 = vsubps_avx512f(auVar6,auVar5);
    auVar4 = vmulps_avx512f(auVar6,auVar4);
    auVar4 = vaddps_avx512f(auVar4,auVar5);
    *param_2 = auVar4;
    param_2 = param_2 + 1;
    in_ZMM7 = vpaddd_avx512f(in_ZMM7,in_ZMM10);
    in_ZMM5 = vpaddq_avx512f(in_ZMM5,in_ZMM9);
    in_ZMM8 = vpaddq_avx512f(in_ZMM8,in_ZMM9);
    in_EAX = in_EAX + -1;
  } while (in_EAX != 0);
  auVar2 = vextracti32x4_avx512f(in_ZMM5,0);
  *(longlong *)unaff_RSI = auVar2._0_8_;
  for (in_stack_000000b8 = in_stack_000000b8 & 0xf; in_stack_000000b8 != 0;
      in_stack_000000b8 = in_stack_000000b8 - 1) {
    fVar1 = *(float *)(param_4 + (ulonglong)unaff_RSI[1] * 4);
    auVar2 = vfmadd213ss_fma(in_ZMM6._0_16_,
                             ZEXT416((uint)((*(float *)(param_4 + (ulonglong)(unaff_RSI[1] + 1) * 4)
                                            - fVar1) * (float)(*unaff_RSI >> 1))),
                             ZEXT416((uint)fVar1));
    *(int *)*param_2 = auVar2._0_4_;
    *(longlong *)unaff_RSI = *(longlong *)unaff_RSI + *unaff_R14;
    param_2 = (int8_t (*) [64])(*param_2 + 4);
  }
  return;
}





// 函数: void FUN_180838d09(uint64_t param_1,int32_t *param_2,uint param_3,longlong param_4)
void FUN_180838d09(uint64_t param_1,int32_t *param_2,uint param_3,longlong param_4)

{
  float fVar1;
  int8_t auVar2 [16];
  uint *unaff_RSI;
  int8_t in_ZMM6 [64];
  longlong *in_stack_000000d0;
  
  for (param_3 = param_3 & 0xf; param_3 != 0; param_3 = param_3 - 1) {
    fVar1 = *(float *)(param_4 + (ulonglong)unaff_RSI[1] * 4);
    auVar2 = vfmadd213ss_fma(in_ZMM6._0_16_,
                             ZEXT416((uint)((*(float *)(param_4 + (ulonglong)(unaff_RSI[1] + 1) * 4)
                                            - fVar1) * (float)(*unaff_RSI >> 1))),
                             ZEXT416((uint)fVar1));
    *param_2 = auVar2._0_4_;
    *(longlong *)unaff_RSI = *(longlong *)unaff_RSI + *in_stack_000000d0;
    param_2 = param_2 + 1;
  }
  return;
}





// 函数: void FUN_180838d80(longlong param_1,longlong *param_2)
void FUN_180838d80(longlong param_1,longlong *param_2)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong *puVar6;
  
  puVar6 = (ulonglong *)*param_2;
  lVar3 = *(longlong *)(param_1 + 0x38);
  iVar5 = (int)param_2[2];
  uVar2 = *(ushort *)
           (*(longlong *)(param_1 + 0x30) +
           ((ulonglong)*(uint *)(param_1 + 0x70) & *puVar6 >> ((byte)iVar5 & 0x3f)) * 2);
  cVar1 = *(char *)((ulonglong)(uVar2 & 0x7fff) + lVar3);
  if (0x7fff < uVar2) {
    uVar4 = func_0x000180828590(param_1,param_2,(uint)uVar2);
    iVar5 = (int)param_2[2];
    puVar6 = (ulonglong *)*param_2;
    cVar1 = *(char *)((ulonglong)uVar4 + lVar3);
  }
  *(uint *)(param_2 + 2) = iVar5 + cVar1 & 7;
  *param_2 = ((longlong)(iVar5 + cVar1) >> 3) + (longlong)puVar6;
  return;
}





// 函数: void FUN_180838e50(longlong param_1,longlong *param_2,int8_t (*param_3) [16],
void FUN_180838e50(longlong param_1,longlong *param_2,int8_t (*param_3) [16],
                  int8_t (*param_4) [16])

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int8_t auVar8 [14];
  int8_t auVar9 [14];
  uint uVar10;
  int iVar11;
  ulonglong *puVar12;
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  
  puVar12 = (ulonglong *)*param_2;
  lVar4 = *(longlong *)(param_1 + 0x38);
  iVar11 = (int)param_2[2];
  uVar3 = *(ushort *)
           (*(longlong *)(param_1 + 0x30) +
           ((ulonglong)*(uint *)(param_1 + 0x70) & *puVar12 >> ((byte)iVar11 & 0x3f)) * 2);
  uVar10 = (uint)uVar3;
  cVar1 = *(char *)((ulonglong)(uVar3 & 0x7fff) + lVar4);
  if (0x7fff < uVar3) {
    uVar10 = func_0x000180828590(param_1,param_2,uVar3);
    iVar11 = (int)param_2[2];
    puVar12 = (ulonglong *)*param_2;
    cVar1 = *(char *)((ulonglong)uVar10 + lVar4);
  }
  *(uint *)(param_2 + 2) = iVar11 + cVar1 & 7;
  *param_2 = ((longlong)(iVar11 + cVar1) >> 3) + (longlong)puVar12;
  bVar2 = *(byte *)(param_1 + 0x66);
  uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar10 - 1) * 2);
  auVar13._2_2_ = 0;
  auVar13._0_2_ = uVar3;
  uVar3 = uVar3 >> (bVar2 & 0x1f);
  uVar5 = uVar3 >> (bVar2 & 0x1f);
  uVar6 = uVar5 >> (bVar2 & 0x1f);
  uVar7 = uVar6 >> (bVar2 & 0x1f);
  auVar14._2_2_ = 0;
  auVar14._0_2_ = uVar7;
  auVar8._12_2_ = uVar6;
  auVar8._0_12_ = ZEXT212(uVar5) << 0x40;
  auVar13._4_2_ = uVar3;
  auVar13._6_2_ = 0;
  auVar13._8_6_ = auVar8._8_6_;
  auVar13._14_2_ = 0;
  *param_3 = auVar13;
  uVar7 = uVar7 >> (bVar2 & 0x1f);
  uVar3 = uVar7 >> (bVar2 & 0x1f);
  auVar9._12_2_ = uVar3 >> (bVar2 & 0x1f);
  auVar9._0_12_ = ZEXT212(uVar3) << 0x40;
  auVar14._4_2_ = uVar7;
  auVar14._6_2_ = 0;
  auVar14._8_6_ = auVar9._8_6_;
  auVar14._14_2_ = 0;
  *param_4 = auVar14;
  return;
}





// 函数: void FUN_180838f80(longlong param_1,longlong *param_2)
void FUN_180838f80(longlong param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iStackX_8;
  
  lVar9 = *(longlong *)(param_1 + 0x30);
  lVar10 = *(longlong *)(param_1 + 0x38);
  uVar14 = (ulonglong)*(uint *)(param_1 + 0x70);
  uVar13 = *(ulonglong *)*param_2 >> ((byte)(int)param_2[2] & 0x3f);
  uVar5 = *(ushort *)(lVar9 + (uVar14 & uVar13) * 2);
  uVar11 = (uint)uVar5;
  bVar1 = *(byte *)((ulonglong)(uVar11 & 0x7fff) + lVar10);
  uVar12 = uVar13 >> (bVar1 & 0x3f);
  uVar6 = *(ushort *)(lVar9 + (*(uint *)(param_1 + 0x70) & uVar12) * 2);
  bVar2 = *(byte *)((ulonglong)(uVar6 & 0x7fff) + lVar10);
  uVar12 = uVar12 >> (bVar2 & 0x3f);
  uVar7 = *(ushort *)(lVar9 + (uVar14 & uVar12) * 2);
  bVar3 = *(byte *)((ulonglong)(uVar7 & 0x7fff) + lVar10);
  uVar8 = *(ushort *)(lVar9 + (uVar12 >> (bVar3 & 0x3f) & uVar14) * 2);
  cVar4 = *(char *)((ulonglong)(uVar8 & 0x7fff) + lVar10);
  if (((uVar8 | uVar7 | uVar6 | uVar5) & 0x8000) != 0) {
    if (0x7fff < uVar5) {
      uVar11 = func_0x000180828590(param_1,param_2,uVar11,uVar13 & 0xffffffff);
    }
    bVar1 = *(byte *)((ulonglong)uVar11 + lVar10);
    uVar13 = uVar13 >> (bVar1 & 0x3f);
    uVar5 = *(ushort *)(lVar9 + (uVar14 & uVar13) * 2);
    uVar12 = (ulonglong)uVar5;
    if (0x7fff < uVar5) {
      uVar11 = func_0x000180828590(param_1,param_2,uVar5,uVar13 & 0xffffffff);
      uVar12 = (ulonglong)uVar11;
    }
    bVar2 = *(byte *)(uVar12 + lVar10);
    uVar13 = uVar13 >> (bVar2 & 0x3f);
    uVar5 = *(ushort *)(lVar9 + (uVar14 & uVar13) * 2);
    uVar12 = (ulonglong)uVar5;
    if (0x7fff < uVar5) {
      uVar11 = func_0x000180828590(param_1,param_2,uVar5,uVar13 & 0xffffffff);
      uVar12 = (ulonglong)uVar11;
    }
    bVar3 = *(byte *)(uVar12 + lVar10);
    uVar13 = uVar13 >> (bVar3 & 0x3f);
    uVar5 = *(ushort *)(lVar9 + (uVar14 & uVar13) * 2);
    uVar12 = (ulonglong)uVar5;
    if (0x7fff < uVar5) {
      uVar11 = func_0x000180828590(param_1,param_2,uVar5,uVar13 & 0xffffffff);
      uVar12 = (ulonglong)uVar11;
    }
    cVar4 = *(char *)(uVar12 + lVar10);
  }
  iStackX_8 = (int)(char)bVar1;
  uVar11 = (int)param_2[2] + (int)cVar4 + (int)(char)bVar3 + (int)(char)bVar2 + iStackX_8;
  *(uint *)(param_2 + 2) = uVar11 & 7;
  *param_2 = *param_2 + ((longlong)(int)uVar11 >> 3);
  return;
}



uint64_t FUN_1808391a0(int8_t (*param_1) [16],float *param_2,uint64_t param_3,int param_4)

{
  int8_t auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint64_t extraout_XMM0_Qb;
  int8_t auVar29 [16];
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  int8_t auVar34 [16];
  uint64_t extraout_XMM0_Qb_05;
  int8_t auVar35 [16];
  int8_t auVar36 [16];
  int iVar37;
  int iVar40;
  int iVar41;
  int iVar42;
  int8_t auVar38 [16];
  int8_t auVar39 [16];
  int8_t auVar43 [16];
  int8_t auVar44 [16];
  int8_t auVar45 [16];
  int8_t auVar46 [16];
  int8_t auVar47 [16];
  int8_t auVar48 [16];
  int8_t auVar49 [16];
  int8_t auVar50 [16];
  int8_t auStack_d8 [16];
  int8_t aauStack_c8 [9] [16];
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  
  uVar28 = (uint)(char)param_1[6][6];
  auVar1 = *param_1;
  fVar2 = *(float *)param_1[1];
  fVar3 = *(float *)(param_1[1] + 4);
  fVar4 = *(float *)(param_1[1] + 8);
  fVar5 = *(float *)(param_1[1] + 0xc);
  fVar6 = *(float *)param_1[2];
  fVar7 = *(float *)(param_1[2] + 4);
  fVar8 = *(float *)(param_1[2] + 8);
  fVar9 = *(float *)(param_1[2] + 0xc);
  uVar26 = param_4 >> 2;
  if ((byte)param_1[6][4] < 9) {
    uVar27 = param_4 >> 3;
    switch(param_1[6][4]) {
    case 0:
    case 1:
      for (; uVar26 != 0; uVar26 = uVar26 - 1) {
        auVar29._0_8_ = FUN_180838f80(param_1,param_3);
        auVar29._8_8_ = extraout_XMM0_Qb;
        auVar29 = auVar29 & auVar1;
        *param_2 = *param_2 + (float)auVar29._0_4_ * fVar6 + fVar2;
        param_2[1] = param_2[1] + (float)auVar29._4_4_ * fVar7 + fVar3;
        param_2[2] = param_2[2] + (float)auVar29._8_4_ * fVar8 + fVar4;
        param_2[3] = param_2[3] + (float)auVar29._12_4_ * fVar9 + fVar5;
        param_2 = param_2 + 4;
      }
      break;
    case 2:
    case 3:
      for (; uVar27 != 0; uVar27 = uVar27 - 1) {
        auVar30._0_8_ = FUN_180838f80(param_1,param_3);
        auVar30._8_8_ = extraout_XMM0_Qb_00;
        auVar50 = auVar30 & auVar1;
        auVar35 = ZEXT416(uVar28);
        auVar31._0_4_ = (int)auVar30._0_8_ >> auVar35;
        auVar31._4_4_ = (int)((ulonglong)auVar30._0_8_ >> 0x20) >> auVar35;
        auVar31._8_4_ = (int)extraout_XMM0_Qb_00 >> auVar35;
        auVar31._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20) >> auVar35;
        auVar31 = auVar31 & auVar1;
        *param_2 = (float)auVar50._0_4_ * fVar6 + fVar2 + *param_2;
        param_2[1] = (float)auVar31._0_4_ * fVar6 + fVar2 + param_2[1];
        param_2[2] = (float)auVar50._4_4_ * fVar7 + fVar3 + param_2[2];
        param_2[3] = (float)auVar31._4_4_ * fVar7 + fVar3 + param_2[3];
        param_2[4] = (float)auVar50._8_4_ * fVar8 + fVar4 + param_2[4];
        param_2[5] = (float)auVar31._8_4_ * fVar8 + fVar4 + param_2[5];
        param_2[6] = (float)auVar50._12_4_ * fVar9 + fVar5 + param_2[6];
        param_2[7] = (float)auVar31._12_4_ * fVar9 + fVar5 + param_2[7];
        param_2 = param_2 + 8;
      }
      for (uVar26 = uVar26 & 1; uVar26 != 0; uVar26 = uVar26 - 1) {
        auVar32._0_8_ = FUN_180838d80(param_1,param_3);
        auVar32._8_8_ = extraout_XMM0_Qb_01;
        auVar33._0_8_ = FUN_180838d80(param_1,param_3);
        auVar33._8_8_ = extraout_XMM0_Qb_02;
        *param_2 = (float)SUB164(auVar32 & auVar1,0) * fVar6 + fVar2 + *param_2;
        param_2[1] = (float)SUB164(auVar32 & auVar1,4) * fVar7 + fVar3 + param_2[1];
        param_2[2] = (float)SUB164(auVar33 & auVar1,0) * fVar6 + fVar2 + param_2[2];
        param_2[3] = (float)SUB164(auVar33 & auVar1,4) * fVar7 + fVar3 + param_2[3];
        param_2 = param_2 + 4;
      }
      break;
    default:
      param_4 = param_4 >> 4;
      if (param_4 != 0) {
        do {
          fVar10 = *param_2;
          fVar11 = param_2[1];
          fVar12 = param_2[2];
          fVar13 = param_2[3];
          fVar14 = param_2[4];
          fVar15 = param_2[5];
          fVar16 = param_2[6];
          fVar17 = param_2[7];
          fVar18 = param_2[8];
          fVar19 = param_2[9];
          fVar20 = param_2[10];
          fVar21 = param_2[0xb];
          fVar22 = param_2[0xc];
          fVar23 = param_2[0xd];
          fVar24 = param_2[0xe];
          fVar25 = param_2[0xf];
          auVar35._0_8_ = FUN_180838f80(param_1,param_3);
          auVar35._8_8_ = extraout_XMM0_Qb_03;
          auVar50 = ZEXT416(uVar28);
          iVar37 = (int)auVar35._0_8_;
          auVar38._0_4_ = iVar37 >> auVar50;
          iVar40 = (int)((ulonglong)auVar35._0_8_ >> 0x20);
          auVar38._4_4_ = iVar40 >> auVar50;
          iVar41 = (int)extraout_XMM0_Qb_03;
          iVar42 = (int)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
          auVar38._8_4_ = iVar41 >> auVar50;
          auVar38._12_4_ = iVar42 >> auVar50;
          auVar50 = ZEXT416(uVar28 * 2);
          auVar46._0_4_ = iVar37 >> auVar50;
          auVar46._4_4_ = iVar40 >> auVar50;
          auVar46._8_4_ = iVar41 >> auVar50;
          auVar46._12_4_ = iVar42 >> auVar50;
          auVar38 = auVar38 & auVar1;
          auVar50 = ZEXT416(uVar28 * 3);
          auVar43._0_4_ = iVar37 >> auVar50;
          auVar43._4_4_ = iVar40 >> auVar50;
          auVar43._8_4_ = iVar41 >> auVar50;
          auVar43._12_4_ = iVar42 >> auVar50;
          auVar35 = auVar35 & auVar1;
          auVar46 = auVar46 & auVar1;
          auVar43 = auVar43 & auVar1;
          *param_2 = (float)auVar35._0_4_ * fVar6 + fVar2 + fVar10;
          param_2[1] = (float)auVar38._0_4_ * fVar7 + fVar3 + fVar11;
          param_2[2] = (float)auVar46._0_4_ * fVar8 + fVar4 + fVar12;
          param_2[3] = (float)auVar43._0_4_ * fVar9 + fVar5 + fVar13;
          param_2[4] = (float)auVar35._4_4_ * fVar6 + fVar2 + fVar14;
          param_2[5] = (float)auVar38._4_4_ * fVar7 + fVar3 + fVar15;
          param_2[6] = (float)auVar46._4_4_ * fVar8 + fVar4 + fVar16;
          param_2[7] = (float)auVar43._4_4_ * fVar9 + fVar5 + fVar17;
          param_2[8] = (float)auVar35._8_4_ * fVar6 + fVar2 + fVar18;
          param_2[9] = (float)auVar38._8_4_ * fVar7 + fVar3 + fVar19;
          param_2[10] = (float)auVar46._8_4_ * fVar8 + fVar4 + fVar20;
          param_2[0xb] = (float)auVar43._8_4_ * fVar9 + fVar5 + fVar21;
          param_2[0xc] = (float)auVar35._12_4_ * fVar6 + fVar2 + fVar22;
          param_2[0xd] = (float)auVar38._12_4_ * fVar7 + fVar3 + fVar23;
          param_2[0xe] = (float)auVar46._12_4_ * fVar8 + fVar4 + fVar24;
          param_2[0xf] = (float)auVar43._12_4_ * fVar9 + fVar5 + fVar25;
          param_2 = param_2 + 0x10;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
      for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
        auVar34._0_8_ = FUN_180838d80(param_1,param_3);
        auVar34._8_8_ = extraout_XMM0_Qb_04;
        auVar34 = auVar34 & auVar1;
        *param_2 = *param_2 + (float)auVar34._0_4_ * fVar6 + fVar2;
        param_2[1] = param_2[1] + (float)auVar34._4_4_ * fVar7 + fVar3;
        param_2[2] = param_2[2] + (float)auVar34._8_4_ * fVar8 + fVar4;
        param_2[3] = param_2[3] + (float)auVar34._12_4_ * fVar9 + fVar5;
        param_2 = param_2 + 4;
      }
      break;
    case 8:
      param_4 = param_4 >> 5;
      if (param_4 != 0) {
        do {
          auVar50._0_8_ = FUN_180838f80(param_1,param_3);
          auVar50._8_8_ = extraout_XMM0_Qb_05;
          auVar35 = ZEXT416(uVar28);
          iVar37 = (int)auVar50._0_8_;
          auVar44._0_4_ = iVar37 >> auVar35;
          iVar40 = (int)((ulonglong)auVar50._0_8_ >> 0x20);
          auVar44._4_4_ = iVar40 >> auVar35;
          iVar41 = (int)extraout_XMM0_Qb_05;
          iVar42 = (int)((ulonglong)extraout_XMM0_Qb_05 >> 0x20);
          auVar44._8_4_ = iVar41 >> auVar35;
          auVar44._12_4_ = iVar42 >> auVar35;
          auVar35 = ZEXT416(uVar28 * 2);
          auVar44 = auVar44 & auVar1;
          auVar48._0_4_ = iVar37 >> auVar35;
          auVar48._4_4_ = iVar40 >> auVar35;
          auVar48._8_4_ = iVar41 >> auVar35;
          auVar48._12_4_ = iVar42 >> auVar35;
          auVar35 = ZEXT416(uVar28 * 4);
          auVar49._0_4_ = iVar37 >> auVar35;
          auVar49._4_4_ = iVar40 >> auVar35;
          auVar49._8_4_ = iVar41 >> auVar35;
          auVar49._12_4_ = iVar42 >> auVar35;
          auVar35 = ZEXT416(uVar28 * 3);
          auVar45._0_4_ = iVar37 >> auVar35;
          auVar45._4_4_ = iVar40 >> auVar35;
          auVar45._8_4_ = iVar41 >> auVar35;
          auVar45._12_4_ = iVar42 >> auVar35;
          auVar45 = auVar45 & auVar1;
          auVar35 = ZEXT416(uVar28 * 5);
          auVar39._0_4_ = iVar37 >> auVar35;
          auVar39._4_4_ = iVar40 >> auVar35;
          auVar39._8_4_ = iVar41 >> auVar35;
          auVar39._12_4_ = iVar42 >> auVar35;
          auVar35 = ZEXT416(uVar28 * 6);
          auVar47._0_4_ = iVar37 >> auVar35;
          auVar47._4_4_ = iVar40 >> auVar35;
          auVar47._8_4_ = iVar41 >> auVar35;
          auVar47._12_4_ = iVar42 >> auVar35;
          auVar35 = ZEXT416(uVar28 * 7);
          auVar39 = auVar39 & auVar1;
          auVar36._0_4_ = iVar37 >> auVar35;
          auVar36._4_4_ = iVar40 >> auVar35;
          auVar36._8_4_ = iVar41 >> auVar35;
          auVar36._12_4_ = iVar42 >> auVar35;
          auVar50 = auVar50 & auVar1;
          auVar48 = auVar48 & auVar1;
          auVar36 = auVar36 & auVar1;
          auVar49 = auVar49 & auVar1;
          auVar47 = auVar47 & auVar1;
          *param_2 = (float)auVar50._0_4_ * fVar6 + fVar2 + *param_2;
          param_2[1] = (float)auVar44._0_4_ * fVar7 + fVar3 + param_2[1];
          param_2[2] = (float)auVar48._0_4_ * fVar8 + fVar4 + param_2[2];
          param_2[3] = (float)auVar45._0_4_ * fVar9 + fVar5 + param_2[3];
          param_2[4] = (float)auVar49._0_4_ * fVar6 + fVar2 + param_2[4];
          param_2[5] = (float)auVar39._0_4_ * fVar7 + fVar3 + param_2[5];
          param_2[6] = (float)auVar47._0_4_ * fVar8 + fVar4 + param_2[6];
          param_2[7] = (float)auVar36._0_4_ * fVar9 + fVar5 + param_2[7];
          param_2[8] = (float)auVar50._4_4_ * fVar6 + fVar2 + param_2[8];
          param_2[9] = (float)auVar44._4_4_ * fVar7 + fVar3 + param_2[9];
          param_2[10] = (float)auVar48._4_4_ * fVar8 + fVar4 + param_2[10];
          param_2[0xb] = (float)auVar45._4_4_ * fVar9 + fVar5 + param_2[0xb];
          param_2[0xc] = (float)auVar49._4_4_ * fVar6 + fVar2 + param_2[0xc];
          param_2[0xd] = (float)auVar39._4_4_ * fVar7 + fVar3 + param_2[0xd];
          param_2[0xe] = (float)auVar47._4_4_ * fVar8 + fVar4 + param_2[0xe];
          param_2[0xf] = (float)auVar36._4_4_ * fVar9 + fVar5 + param_2[0xf];
          param_2[0x10] = (float)auVar50._8_4_ * fVar6 + fVar2 + param_2[0x10];
          param_2[0x11] = (float)auVar44._8_4_ * fVar7 + fVar3 + param_2[0x11];
          param_2[0x12] = (float)auVar48._8_4_ * fVar8 + fVar4 + param_2[0x12];
          param_2[0x13] = (float)auVar45._8_4_ * fVar9 + fVar5 + param_2[0x13];
          param_2[0x14] = (float)auVar49._8_4_ * fVar6 + fVar2 + param_2[0x14];
          param_2[0x15] = (float)auVar39._8_4_ * fVar7 + fVar3 + param_2[0x15];
          param_2[0x16] = (float)auVar47._8_4_ * fVar8 + fVar4 + param_2[0x16];
          param_2[0x17] = (float)auVar36._8_4_ * fVar9 + fVar5 + param_2[0x17];
          param_2[0x18] = (float)auVar50._12_4_ * fVar6 + fVar2 + param_2[0x18];
          param_2[0x19] = (float)auVar44._12_4_ * fVar7 + fVar3 + param_2[0x19];
          param_2[0x1a] = (float)auVar48._12_4_ * fVar8 + fVar4 + param_2[0x1a];
          param_2[0x1b] = (float)auVar45._12_4_ * fVar9 + fVar5 + param_2[0x1b];
          param_2[0x1c] = (float)auVar49._12_4_ * fVar6 + fVar2 + param_2[0x1c];
          param_2[0x1d] = (float)auVar39._12_4_ * fVar7 + fVar3 + param_2[0x1d];
          param_2[0x1e] = (float)auVar47._12_4_ * fVar8 + fVar4 + param_2[0x1e];
          param_2[0x1f] = (float)auVar36._12_4_ * fVar9 + fVar5 + param_2[0x1f];
          param_2 = param_2 + 0x20;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
      for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
        FUN_180838e50(param_1,param_3,auStack_d8,aauStack_c8);
        auStack_d8 = auStack_d8 & auVar1;
        aauStack_c8[0] = aauStack_c8[0] & auVar1;
        *param_2 = (float)auStack_d8._0_4_ * fVar6 + fVar2 + *param_2;
        param_2[1] = (float)auStack_d8._4_4_ * fVar7 + fVar3 + param_2[1];
        param_2[2] = (float)auStack_d8._8_4_ * fVar8 + fVar4 + param_2[2];
        param_2[3] = (float)auStack_d8._12_4_ * fVar9 + fVar5 + param_2[3];
        param_2[4] = (float)aauStack_c8[0]._0_4_ * fVar6 + fVar2 + param_2[4];
        param_2[5] = (float)aauStack_c8[0]._4_4_ * fVar7 + fVar3 + param_2[5];
        param_2[6] = (float)aauStack_c8[0]._8_4_ * fVar8 + fVar4 + param_2[6];
        param_2[7] = (float)aauStack_c8[0]._12_4_ * fVar9 + fVar5 + param_2[7];
        param_2 = param_2 + 8;
      }
    }
  }
  return 0;
}





