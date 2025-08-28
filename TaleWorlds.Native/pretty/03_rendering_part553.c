#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part553.c - 9 个函数

// 函数: void FUN_1805728b0(uint64_t param_1,int param_2,float param_3)
void FUN_1805728b0(uint64_t param_1,int param_2,float param_3)

{
  float fVar1;
  int8_t uVar2;
  int64_t lVar3;
  int8_t uVar4;
  int64_t lVar5;
  float *unaff_RDI;
  int64_t *in_R11;
  float in_XMM1_Da;
  
  lVar5 = (int64_t)param_2;
  lVar3 = *in_R11;
  fVar1 = *(float *)(lVar3 + lVar5 * 8);
  uVar2 = *(int8_t *)(lVar3 + 4 + lVar5 * 8);
  uVar4 = uVar2;
  if (lVar5 != (in_R11[1] - lVar3 >> 3) + -1) {
    param_3 = *(float *)(lVar3 + 8 + lVar5 * 8);
    uVar4 = *(int8_t *)(lVar3 + 0xc + lVar5 * 8);
  }
  *(int8_t *)((int64_t)unaff_RDI + 5) = uVar4;
  *(int8_t *)(unaff_RDI + 1) = uVar2;
  *unaff_RDI = 1.0 - (in_XMM1_Da - fVar1) / (param_3 - fVar1);
  return;
}



uint64_t * FUN_180572910(uint64_t *param_1)

{
  uint64_t *puVar1;
  int64_t lVar2;
  
  FUN_1805887f0();
  *param_1 = &unknown_var_568_ptr;
  param_1[0x4b6] = 0;
  puVar1 = param_1 + 0x4c4;
  lVar2 = 0x40;
  do {
    func_0x0001801be8f0(puVar1);
    puVar1 = puVar1 + 7;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(int32_t *)(param_1 + 0x685) = 0xffffffff;
  param_1[0x686] = 0;
  param_1[0x688] = 0;
  param_1[0x689] = 0;
  param_1[0x68a] = 0;
  param_1[0x68b] = 0;
  FUN_180572bc0(param_1 + 0x68c);
  FUN_180660100(param_1 + 0x12bc);
  param_1[0x1443] = &unknown_var_1864_ptr;
  param_1[0x1443] = &unknown_var_2024_ptr;
  param_1[0x1444] = 0;
  param_1[0x1445] = 0;
  *(int32_t *)(param_1 + 0x1446) = 0;
  param_1[0x1444] = 0;
  param_1[0x1445] = 0;
  DataStructureManager(param_1 + 0x1448,0x1f0,5,FUN_180662260,FUN_180572c30);
  *(int32_t *)(param_1 + 0x687) = 0xbf800000;
  *(int8_t *)((int64_t)param_1 + 0x3425) = 0;
  param_1[0x4a0] = 0;
  param_1[0x4a1] = 0;
  *(uint64_t *)((int64_t)param_1 + 0x25c4) = 0x3f800000;
  param_1[0x4a2] = 0;
  *(int32_t *)((int64_t)param_1 + 0x2564) = 0x3f800000;
  param_1[0x157e] = 0;
  param_1[0x4a3] = 0;
  param_1[0x4ad] = 0x3f80000000000000;
  param_1[0x4ae] = 0x7f7fffff00000000;
  param_1[0x4af] = 0x3f80000000000000;
  param_1[0x4b0] = 0x7f7fffff00000000;
  param_1[0x4b1] = 0x3f80000000000000;
  param_1[0x4b2] = 0x7f7fffff00000000;
  param_1[0x4b3] = 0x3f80000000000000;
  param_1[0x4b4] = 0x7f7fffff00000000;
  param_1[0x4b5] = 0x3f800000;
  *(int8_t *)(param_1 + 0x4b8) = 1;
  param_1[0x4a5] = 0;
  param_1[0x4a6] = 0;
  param_1[0x4a7] = 0x3f8000003f800000;
  param_1[0x4a8] = 0x3f800000;
  param_1[0x4a9] = 0;
  param_1[0x4aa] = 0;
  param_1[0x4ab] = 0;
  *(int32_t *)(param_1 + 0x4ac) = 0;
  *(int32_t *)(param_1 + 0x4c2) = 0;
  param_1[0x4a4] = 0;
  *(int8_t *)((int64_t)param_1 + 0x3424) = 0;
  *(int16_t *)((int64_t)param_1 + 0x261c) = 0xffff;
  return param_1;
}



uint64_t * FUN_180572b00(uint64_t *param_1,uint64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_568_ptr;
  FUN_180573240();
  SystemMemoryManager(param_1 + 0x1448,0x1f0,5,FUN_180572c30,uVar1);
  param_1[0x1443] = &unknown_var_1864_ptr;
  param_1[0x1442] = 0;
  param_1[0x8e4] = 0;
  param_1[0xb4f] = 0;
  param_1[0xdba] = 0;
  param_1[0x1025] = 0;
  param_1[0x12b0] = 0;
  FUN_180588910(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xac00);
  }
  return param_1;
}



int64_t FUN_180572bc0(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1 + 0x68;
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  lVar2 = 4;
  do {
    FUN_18057c690(lVar1);
    lVar1 = lVar1 + 0x1358;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_18057c690(param_1 + 0x4dc8);
  *(uint64_t *)(param_1 + 0x6178) = 0;
  return param_1;
}





// 函数: void FUN_180572c30(uint64_t *param_1)
void FUN_180572c30(uint64_t *param_1)

{
  *param_1 = &unknown_var_1864_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180572c50(int64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180572c50(int64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  int8_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  uint uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  char cVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t unaff_RDI;
  char cVar14;
  int64_t lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  *(int32_t *)(param_1 + 0x3438) = 0xbf800000;
  *(int8_t *)(param_1 + 0x3425) = 0;
  FUN_180588970();
  *(uint64_t *)(param_1 + 0x2520) = param_4;
  uVar10 = 0;
  uVar2 = *(int8_t *)(param_2 + 6);
  *(byte *)(param_1 + 0x3424) = *(byte *)(param_1 + 0x3424) & 0xfb;
  *(int8_t *)(param_1 + 0xcc) = uVar2;
  *(uint64_t *)(param_1 + 0x25b0) = 0;
  *(int32_t *)(param_1 + 0x25b8) = 0;
  *(int32_t *)(param_1 + 0x25bc) = 0x3f800000;
  *(int32_t *)(param_1 + 0x25d0) = param_2[3];
  *(int32_t *)(param_1 + 0x25d4) = param_2[4];
  *(int32_t *)(param_1 + 0x25cc) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x2528) = 0;
  *(uint64_t *)(param_1 + 0x2530) = 0;
  *(int32_t *)(param_1 + 0x2548) = 0;
  *(uint64_t *)(param_1 + 0x2538) = 0x3f8000003f800000;
  *(uint64_t *)(param_1 + 0x2540) = 0x3f800000;
  *(int32_t *)(param_1 + 0xac) = *param_2;
  *(uint64_t *)(param_1 + 0xb0) = param_3;
  *(uint64_t *)(param_1 + 0x2614) = 0;
  uVar4 = *(uint64_t *)((int64_t)param_2 + 0x21);
  *(uint64_t *)(param_1 + 0xcd) = *(uint64_t *)((int64_t)param_2 + 0x19);
  *(uint64_t *)(param_1 + 0xd5) = uVar4;
  *(uint64_t *)(param_1 + 0xdd) = *(uint64_t *)((int64_t)param_2 + 0x29);
  *(int32_t *)(param_1 + 0xe5) = *(int32_t *)((int64_t)param_2 + 0x31);
  uVar4 = *(uint64_t *)((int64_t)param_2 + 0x3d);
  *(uint64_t *)(param_1 + 0x25d8) = *(uint64_t *)((int64_t)param_2 + 0x35);
  *(uint64_t *)(param_1 + 0x25e0) = uVar4;
  uVar1 = *(int32_t *)((int64_t)param_2 + 0x49);
  uVar5 = *(int32_t *)((int64_t)param_2 + 0x4d);
  uVar6 = *(int32_t *)((int64_t)param_2 + 0x51);
  *(int32_t *)(param_1 + 0x25e8) = *(int32_t *)((int64_t)param_2 + 0x45);
  *(int32_t *)(param_1 + 0x25ec) = uVar1;
  *(int32_t *)(param_1 + 0x25f0) = uVar5;
  *(int32_t *)(param_1 + 0x25f4) = uVar6;
  uVar4 = *(uint64_t *)((int64_t)param_2 + 0x55);
  uVar7 = *(uint64_t *)((int64_t)param_2 + 0x5d);
  *(uint64_t *)(param_1 + 0x2608) = 0;
  *(uint64_t *)(param_1 + 0x25f8) = uVar4;
  *(uint64_t *)(param_1 + 0x2600) = uVar7;
  uVar12 = uVar10;
  if (0 < (int64_t)*(char *)(param_1 + 0x25e8)) {
    do {
      uVar13 = uVar12 + 1;
      uVar10 = uVar10 | 1L << ((int64_t)*(char *)(uVar12 + 0x25e1 + param_1) & 0x3fU);
      *(uint64_t *)(param_1 + 0x2608) = uVar10;
      uVar12 = uVar13;
    } while ((int64_t)uVar13 < (int64_t)*(char *)(param_1 + 0x25e8));
  }
  uVar1 = param_2[5];
  lVar15 = (int64_t)*(int *)(param_1 + 0xac) * 0xe0 + render_system_config;
  *(int32_t *)(param_1 + 0x3460) = uVar1;
  *(int32_t *)(param_1 + 0x3464) = uVar1;
  *(int32_t *)(param_1 + 0x3498) = 0;
  system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
  system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
  uVar8 = system_memory_flags << 5 ^ system_memory_flags;
  system_memory_flags = uVar8;
  *(uint64_t *)(param_1 + 0x34a0) = 0;
  *(int32_t *)(param_1 + 0x34a8) = 0xbf800000;
  *(float *)(param_1 + 0x349c) = (float)(uVar8 - 1) * 2.3283064e-10;
  *(uint64_t *)(param_1 + 0x3468) = 0;
  *(uint64_t *)(param_1 + 0x3470) = 0;
  *(int32_t *)(param_1 + 0x3478) = 0;
  *(uint64_t *)(param_1 + 0x347c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x3484) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x3488) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x34ac) = 0x3f800000;
  *(int32_t *)(param_1 + 0x34b4) = 0;
  *(int32_t *)(param_1 + 0x34b8) = 0x3f800000;
  *(int16_t *)(param_1 + 0x34bc) = 0;
  *(int32_t *)(param_1 + 0x34c0) = 0;
  func_0x000180668820(param_1 + 0x8228);
  cVar14 = '\0';
  *(uint64_t *)(param_1 + 0x9580) = 0;
  fVar18 = 0.0;
  *(uint64_t *)(param_1 + 0x958c) = 0;
  fVar19 = 0.0;
  *(uint64_t *)(param_1 + 0x95b4) = 0;
  *(uint64_t *)(param_1 + 0x9594) = 0;
  *(uint64_t *)(param_1 + 0x95bc) = 0;
  *(uint64_t *)(param_1 + 0x959c) = 0;
  *(uint64_t *)(param_1 + 0x95c4) = 0;
  *(uint64_t *)(param_1 + 0x95a4) = 0;
  *(uint64_t *)(param_1 + 0x95cc) = 0;
  *(int32_t *)(param_1 + 0x95ac) = 0;
  *(int32_t *)(param_1 + 0x95d4) = 0;
  *(int32_t *)(param_1 + 0x9588) = 0x3f800000;
  *(int32_t *)(param_1 + 0x95b0) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x95d8) = 0x3f80000000000000;
  *(uint64_t *)(param_1 + 0x3490) = 0;
  cVar11 = *(char *)(param_1 + 0xde);
  lVar3 = *(int64_t *)(lVar15 + 0x58);
  if (cVar11 != -1) {
    do {
      lVar9 = (int64_t)*(int *)((int64_t)cVar11 * 0x1b0 + 0x110 + *(int64_t *)(lVar3 + 0x140)) *
              0x60;
      fVar17 = ABS(*(float *)(lVar9 + 0x38 + *(int64_t *)(lVar3 + 0x158)));
      fVar16 = ABS(*(float *)(lVar9 + 0x34 + *(int64_t *)(lVar3 + 0x158)));
      if (fVar16 <= fVar17) {
        fVar17 = fVar16;
      }
      fVar19 = fVar19 + fVar17;
      if (cVar11 == *(char *)(param_1 + 0xe1)) {
        cVar14 = '\x01';
LAB_180572fb3:
        fVar18 = fVar18 + fVar17;
        if (cVar11 == *(char *)(param_1 + 0xdf)) break;
      }
      else if (cVar14 != '\0') goto LAB_180572fb3;
      cVar11 = *(char *)((int64_t)cVar11 + 0x100 + lVar3);
    } while (cVar11 != -1);
  }
  if (fVar19 <= 0.0) {
    fVar18 = 0.0;
  }
  else {
    fVar18 = fVar18 / fVar19;
  }
  *(float *)(param_1 + 0x3420) = fVar18;
  *(char *)(param_1 + 0x58) = *(char *)(param_1 + 0xe1);
  *(uint64_t *)(param_1 + 0x2500) = 0;
  *(uint64_t *)(param_1 + 0x2510) = 0;
  *(int32_t *)(param_1 + 0x2564) = 0x3f800000;
  uVar4 = *(uint64_t *)(lVar15 + 0x58);
  FUN_180431730(param_1 + 0xf0,uVar4,fVar18,cVar14,unaff_RDI);
  FUN_180431680(param_1 + 0xf0,uVar4,0);
  FUN_180431730(param_1 + 0x12a0);
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x13e0,0,0x1050);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180572c5b(int64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180572c5b(int64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  int8_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  bool bVar8;
  uint uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  char cVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int64_t lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  *(int32_t *)(param_1 + 0x3438) = 0xbf800000;
  *(int8_t *)(param_1 + 0x3425) = 0;
  FUN_180588970();
  *(uint64_t *)(param_1 + 0x2520) = param_4;
  uVar11 = 0;
  uVar2 = *(int8_t *)(param_2 + 6);
  *(byte *)(param_1 + 0x3424) = *(byte *)(param_1 + 0x3424) & 0xfb;
  *(int8_t *)(param_1 + 0xcc) = uVar2;
  *(uint64_t *)(param_1 + 0x25b0) = 0;
  *(int32_t *)(param_1 + 0x25b8) = 0;
  *(int32_t *)(param_1 + 0x25bc) = 0x3f800000;
  *(int32_t *)(param_1 + 0x25d0) = param_2[3];
  *(int32_t *)(param_1 + 0x25d4) = param_2[4];
  *(int32_t *)(param_1 + 0x25cc) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x2528) = 0;
  *(uint64_t *)(param_1 + 0x2530) = 0;
  *(int32_t *)(param_1 + 0x2548) = 0;
  *(uint64_t *)(param_1 + 0x2538) = 0x3f8000003f800000;
  *(uint64_t *)(param_1 + 0x2540) = 0x3f800000;
  *(int32_t *)(param_1 + 0xac) = *param_2;
  *(uint64_t *)(param_1 + 0xb0) = param_3;
  *(uint64_t *)(param_1 + 0x2614) = 0;
  uVar4 = *(uint64_t *)((int64_t)param_2 + 0x21);
  *(uint64_t *)(param_1 + 0xcd) = *(uint64_t *)((int64_t)param_2 + 0x19);
  *(uint64_t *)(param_1 + 0xd5) = uVar4;
  *(uint64_t *)(param_1 + 0xdd) = *(uint64_t *)((int64_t)param_2 + 0x29);
  *(int32_t *)(param_1 + 0xe5) = *(int32_t *)((int64_t)param_2 + 0x31);
  uVar4 = *(uint64_t *)((int64_t)param_2 + 0x3d);
  *(uint64_t *)(param_1 + 0x25d8) = *(uint64_t *)((int64_t)param_2 + 0x35);
  *(uint64_t *)(param_1 + 0x25e0) = uVar4;
  uVar1 = *(int32_t *)((int64_t)param_2 + 0x49);
  uVar5 = *(int32_t *)((int64_t)param_2 + 0x4d);
  uVar6 = *(int32_t *)((int64_t)param_2 + 0x51);
  *(int32_t *)(param_1 + 0x25e8) = *(int32_t *)((int64_t)param_2 + 0x45);
  *(int32_t *)(param_1 + 0x25ec) = uVar1;
  *(int32_t *)(param_1 + 0x25f0) = uVar5;
  *(int32_t *)(param_1 + 0x25f4) = uVar6;
  uVar4 = *(uint64_t *)((int64_t)param_2 + 0x55);
  uVar7 = *(uint64_t *)((int64_t)param_2 + 0x5d);
  *(uint64_t *)(param_1 + 0x2608) = 0;
  *(uint64_t *)(param_1 + 0x25f8) = uVar4;
  *(uint64_t *)(param_1 + 0x2600) = uVar7;
  uVar13 = uVar11;
  if (0 < (int64_t)*(char *)(param_1 + 0x25e8)) {
    do {
      uVar14 = uVar13 + 1;
      uVar11 = uVar11 | 1L << ((int64_t)*(char *)(uVar13 + 0x25e1 + param_1) & 0x3fU);
      *(uint64_t *)(param_1 + 0x2608) = uVar11;
      uVar13 = uVar14;
    } while ((int64_t)uVar14 < (int64_t)*(char *)(param_1 + 0x25e8));
  }
  uVar1 = param_2[5];
  lVar15 = (int64_t)*(int *)(param_1 + 0xac) * 0xe0 + render_system_config;
  *(int32_t *)(param_1 + 0x3460) = uVar1;
  *(int32_t *)(param_1 + 0x3464) = uVar1;
  *(int32_t *)(param_1 + 0x3498) = 0;
  system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
  system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
  uVar9 = system_memory_flags << 5 ^ system_memory_flags;
  system_memory_flags = uVar9;
  *(uint64_t *)(param_1 + 0x34a0) = 0;
  *(int32_t *)(param_1 + 0x34a8) = 0xbf800000;
  *(float *)(param_1 + 0x349c) = (float)(uVar9 - 1) * 2.3283064e-10;
  *(uint64_t *)(param_1 + 0x3468) = 0;
  *(uint64_t *)(param_1 + 0x3470) = 0;
  *(int32_t *)(param_1 + 0x3478) = 0;
  *(uint64_t *)(param_1 + 0x347c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x3484) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x3488) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x34ac) = 0x3f800000;
  *(int32_t *)(param_1 + 0x34b4) = 0;
  *(int32_t *)(param_1 + 0x34b8) = 0x3f800000;
  *(int16_t *)(param_1 + 0x34bc) = 0;
  *(int32_t *)(param_1 + 0x34c0) = 0;
  func_0x000180668820(param_1 + 0x8228);
  bVar8 = false;
  *(uint64_t *)(param_1 + 0x9580) = 0;
  fVar18 = 0.0;
  *(uint64_t *)(param_1 + 0x958c) = 0;
  fVar19 = 0.0;
  *(uint64_t *)(param_1 + 0x95b4) = 0;
  *(uint64_t *)(param_1 + 0x9594) = 0;
  *(uint64_t *)(param_1 + 0x95bc) = 0;
  *(uint64_t *)(param_1 + 0x959c) = 0;
  *(uint64_t *)(param_1 + 0x95c4) = 0;
  *(uint64_t *)(param_1 + 0x95a4) = 0;
  *(uint64_t *)(param_1 + 0x95cc) = 0;
  *(int32_t *)(param_1 + 0x95ac) = 0;
  *(int32_t *)(param_1 + 0x95d4) = 0;
  *(int32_t *)(param_1 + 0x9588) = 0x3f800000;
  *(int32_t *)(param_1 + 0x95b0) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x95d8) = 0x3f80000000000000;
  *(uint64_t *)(param_1 + 0x3490) = 0;
  cVar12 = *(char *)(param_1 + 0xde);
  lVar3 = *(int64_t *)(lVar15 + 0x58);
  if (cVar12 != -1) {
    do {
      lVar10 = (int64_t)*(int *)((int64_t)cVar12 * 0x1b0 + 0x110 + *(int64_t *)(lVar3 + 0x140)) *
               0x60;
      fVar17 = ABS(*(float *)(lVar10 + 0x38 + *(int64_t *)(lVar3 + 0x158)));
      fVar16 = ABS(*(float *)(lVar10 + 0x34 + *(int64_t *)(lVar3 + 0x158)));
      if (fVar16 <= fVar17) {
        fVar17 = fVar16;
      }
      fVar19 = fVar19 + fVar17;
      if (cVar12 == *(char *)(param_1 + 0xe1)) {
        bVar8 = true;
LAB_180572fb3:
        fVar18 = fVar18 + fVar17;
        if (cVar12 == *(char *)(param_1 + 0xdf)) break;
      }
      else if (bVar8) goto LAB_180572fb3;
      cVar12 = *(char *)((int64_t)cVar12 + 0x100 + lVar3);
    } while (cVar12 != -1);
  }
  if (fVar19 <= 0.0) {
    fVar18 = 0.0;
  }
  else {
    fVar18 = fVar18 / fVar19;
  }
  *(float *)(param_1 + 0x3420) = fVar18;
  *(char *)(param_1 + 0x58) = *(char *)(param_1 + 0xe1);
  *(uint64_t *)(param_1 + 0x2500) = 0;
  *(uint64_t *)(param_1 + 0x2510) = 0;
  *(int32_t *)(param_1 + 0x2564) = 0x3f800000;
  uVar4 = *(uint64_t *)(lVar15 + 0x58);
  FUN_180431730(param_1 + 0xf0);
  FUN_180431680(param_1 + 0xf0,uVar4,0);
  FUN_180431730(param_1 + 0x12a0);
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x13e0,0,0x1050);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180572c63(int64_t param_1,int32_t *param_2,uint64_t param_3)
void FUN_180572c63(int64_t param_1,int32_t *param_2,uint64_t param_3)

{
  int32_t uVar1;
  int8_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  bool bVar8;
  uint uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  char cVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t unaff_RBX;
  int64_t lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  *(int32_t *)(param_1 + 0x3438) = 0xbf800000;
  *(int8_t *)(param_1 + 0x3425) = 0;
  FUN_180588970();
  *(uint64_t *)(param_1 + 0x2520) = unaff_RBX;
  uVar11 = 0;
  uVar2 = *(int8_t *)(param_2 + 6);
  *(byte *)(param_1 + 0x3424) = *(byte *)(param_1 + 0x3424) & 0xfb;
  *(int8_t *)(param_1 + 0xcc) = uVar2;
  *(uint64_t *)(param_1 + 0x25b0) = 0;
  *(int32_t *)(param_1 + 0x25b8) = 0;
  *(int32_t *)(param_1 + 0x25bc) = 0x3f800000;
  *(int32_t *)(param_1 + 0x25d0) = param_2[3];
  *(int32_t *)(param_1 + 0x25d4) = param_2[4];
  *(int32_t *)(param_1 + 0x25cc) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x2528) = 0;
  *(uint64_t *)(param_1 + 0x2530) = 0;
  *(int32_t *)(param_1 + 0x2548) = 0;
  *(uint64_t *)(param_1 + 0x2538) = 0x3f8000003f800000;
  *(uint64_t *)(param_1 + 0x2540) = 0x3f800000;
  *(int32_t *)(param_1 + 0xac) = *param_2;
  *(uint64_t *)(param_1 + 0xb0) = param_3;
  *(uint64_t *)(param_1 + 0x2614) = 0;
  uVar4 = *(uint64_t *)((int64_t)param_2 + 0x21);
  *(uint64_t *)(param_1 + 0xcd) = *(uint64_t *)((int64_t)param_2 + 0x19);
  *(uint64_t *)(param_1 + 0xd5) = uVar4;
  *(uint64_t *)(param_1 + 0xdd) = *(uint64_t *)((int64_t)param_2 + 0x29);
  *(int32_t *)(param_1 + 0xe5) = *(int32_t *)((int64_t)param_2 + 0x31);
  uVar4 = *(uint64_t *)((int64_t)param_2 + 0x3d);
  *(uint64_t *)(param_1 + 0x25d8) = *(uint64_t *)((int64_t)param_2 + 0x35);
  *(uint64_t *)(param_1 + 0x25e0) = uVar4;
  uVar1 = *(int32_t *)((int64_t)param_2 + 0x49);
  uVar5 = *(int32_t *)((int64_t)param_2 + 0x4d);
  uVar6 = *(int32_t *)((int64_t)param_2 + 0x51);
  *(int32_t *)(param_1 + 0x25e8) = *(int32_t *)((int64_t)param_2 + 0x45);
  *(int32_t *)(param_1 + 0x25ec) = uVar1;
  *(int32_t *)(param_1 + 0x25f0) = uVar5;
  *(int32_t *)(param_1 + 0x25f4) = uVar6;
  uVar4 = *(uint64_t *)((int64_t)param_2 + 0x55);
  uVar7 = *(uint64_t *)((int64_t)param_2 + 0x5d);
  *(uint64_t *)(param_1 + 0x2608) = 0;
  *(uint64_t *)(param_1 + 0x25f8) = uVar4;
  *(uint64_t *)(param_1 + 0x2600) = uVar7;
  uVar13 = uVar11;
  if (0 < (int64_t)*(char *)(param_1 + 0x25e8)) {
    do {
      uVar14 = uVar13 + 1;
      uVar11 = uVar11 | 1L << ((int64_t)*(char *)(uVar13 + 0x25e1 + param_1) & 0x3fU);
      *(uint64_t *)(param_1 + 0x2608) = uVar11;
      uVar13 = uVar14;
    } while ((int64_t)uVar14 < (int64_t)*(char *)(param_1 + 0x25e8));
  }
  uVar1 = param_2[5];
  lVar15 = (int64_t)*(int *)(param_1 + 0xac) * 0xe0 + render_system_config;
  *(int32_t *)(param_1 + 0x3460) = uVar1;
  *(int32_t *)(param_1 + 0x3464) = uVar1;
  *(int32_t *)(param_1 + 0x3498) = 0;
  system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
  system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
  uVar9 = system_memory_flags << 5 ^ system_memory_flags;
  system_memory_flags = uVar9;
  *(uint64_t *)(param_1 + 0x34a0) = 0;
  *(int32_t *)(param_1 + 0x34a8) = 0xbf800000;
  *(float *)(param_1 + 0x349c) = (float)(uVar9 - 1) * 2.3283064e-10;
  *(uint64_t *)(param_1 + 0x3468) = 0;
  *(uint64_t *)(param_1 + 0x3470) = 0;
  *(int32_t *)(param_1 + 0x3478) = 0;
  *(uint64_t *)(param_1 + 0x347c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x3484) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x3488) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x34ac) = 0x3f800000;
  *(int32_t *)(param_1 + 0x34b4) = 0;
  *(int32_t *)(param_1 + 0x34b8) = 0x3f800000;
  *(int16_t *)(param_1 + 0x34bc) = 0;
  *(int32_t *)(param_1 + 0x34c0) = 0;
  func_0x000180668820(param_1 + 0x8228);
  bVar8 = false;
  *(uint64_t *)(param_1 + 0x9580) = 0;
  fVar18 = 0.0;
  *(uint64_t *)(param_1 + 0x958c) = 0;
  fVar19 = 0.0;
  *(uint64_t *)(param_1 + 0x95b4) = 0;
  *(uint64_t *)(param_1 + 0x9594) = 0;
  *(uint64_t *)(param_1 + 0x95bc) = 0;
  *(uint64_t *)(param_1 + 0x959c) = 0;
  *(uint64_t *)(param_1 + 0x95c4) = 0;
  *(uint64_t *)(param_1 + 0x95a4) = 0;
  *(uint64_t *)(param_1 + 0x95cc) = 0;
  *(int32_t *)(param_1 + 0x95ac) = 0;
  *(int32_t *)(param_1 + 0x95d4) = 0;
  *(int32_t *)(param_1 + 0x9588) = 0x3f800000;
  *(int32_t *)(param_1 + 0x95b0) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x95d8) = 0x3f80000000000000;
  *(uint64_t *)(param_1 + 0x3490) = 0;
  cVar12 = *(char *)(param_1 + 0xde);
  lVar3 = *(int64_t *)(lVar15 + 0x58);
  if (cVar12 != -1) {
    do {
      lVar10 = (int64_t)*(int *)((int64_t)cVar12 * 0x1b0 + 0x110 + *(int64_t *)(lVar3 + 0x140)) *
               0x60;
      fVar17 = ABS(*(float *)(lVar10 + 0x38 + *(int64_t *)(lVar3 + 0x158)));
      fVar16 = ABS(*(float *)(lVar10 + 0x34 + *(int64_t *)(lVar3 + 0x158)));
      if (fVar16 <= fVar17) {
        fVar17 = fVar16;
      }
      fVar19 = fVar19 + fVar17;
      if (cVar12 == *(char *)(param_1 + 0xe1)) {
        bVar8 = true;
LAB_180572fb3:
        fVar18 = fVar18 + fVar17;
        if (cVar12 == *(char *)(param_1 + 0xdf)) break;
      }
      else if (bVar8) goto LAB_180572fb3;
      cVar12 = *(char *)((int64_t)cVar12 + 0x100 + lVar3);
    } while (cVar12 != -1);
  }
  if (fVar19 <= 0.0) {
    fVar18 = 0.0;
  }
  else {
    fVar18 = fVar18 / fVar19;
  }
  *(float *)(param_1 + 0x3420) = fVar18;
  *(char *)(param_1 + 0x58) = *(char *)(param_1 + 0xe1);
  *(uint64_t *)(param_1 + 0x2500) = 0;
  *(uint64_t *)(param_1 + 0x2510) = 0;
  *(int32_t *)(param_1 + 0x2564) = 0x3f800000;
  uVar4 = *(uint64_t *)(lVar15 + 0x58);
  FUN_180431730(param_1 + 0xf0);
  FUN_180431680(param_1 + 0xf0,uVar4,0);
  FUN_180431730(param_1 + 0x12a0);
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x13e0,0,0x1050);
}





// 函数: void FUN_180572f52(uint64_t param_1,char param_2,float param_3,float param_4)
void FUN_180572f52(uint64_t param_1,char param_2,float param_3,float param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  char unaff_BL;
  int64_t unaff_RSI;
  char in_R9B;
  int64_t in_R10;
  char in_R11B;
  uint64_t unaff_R12;
  int64_t unaff_R15;
  float fVar3;
  float fVar4;
  float in_XMM5_Da;
  uint64_t in_stack_00000040;
  uint64_t uStack0000000000000050;
  
  do {
    lVar2 = (int64_t)*(int *)((int64_t)param_2 * 0x1b0 + 0x110 + *(int64_t *)(in_R10 + 0x140)) *
            0x60;
    fVar4 = ABS(*(float *)(lVar2 + 0x38 + *(int64_t *)(in_R10 + 0x158)));
    fVar3 = ABS(*(float *)(lVar2 + 0x34 + *(int64_t *)(in_R10 + 0x158)));
    if (fVar3 <= fVar4) {
      fVar4 = fVar3;
    }
    param_4 = param_4 + fVar4;
    if (param_2 == unaff_BL) {
      in_R9B = '\x01';
LAB_180572fb3:
      param_3 = param_3 + fVar4;
      if (param_2 == in_R11B) break;
    }
    else if (in_R9B != '\0') goto LAB_180572fb3;
    param_2 = *(char *)((int64_t)param_2 + 0x100 + in_R10);
  } while (param_2 != -1);
  if (in_XMM5_Da < param_4) {
    in_XMM5_Da = param_3 / param_4;
  }
  *(float *)(unaff_RSI + 0x3420) = in_XMM5_Da;
  *(char *)(unaff_RSI + 0x58) = unaff_BL;
  *(uint64_t *)(unaff_RSI + 0x2500) = unaff_R12;
  *(uint64_t *)(unaff_RSI + 0x2510) = unaff_R12;
  *(int32_t *)(unaff_RSI + 0x2564) = 0x3f800000;
  uVar1 = *(uint64_t *)(unaff_R15 + 0x58);
  uStack0000000000000050 = in_stack_00000040;
  FUN_180431730(unaff_RSI + 0xf0);
  FUN_180431680(unaff_RSI + 0xf0,uVar1,0);
  FUN_180431730(unaff_RSI + 0x12a0);
                    // WARNING: Subroutine does not return
  memset(unaff_RSI + 0x13e0,0,0x1050);
}





// 函数: void FUN_180572f61(uint64_t param_1,char param_2,float param_3,float param_4)
void FUN_180572f61(uint64_t param_1,char param_2,float param_3,float param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  char unaff_BL;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  char in_R9B;
  int64_t in_R10;
  char in_R11B;
  uint64_t unaff_R12;
  int64_t unaff_R15;
  float fVar3;
  float fVar4;
  uint in_XMM4_Da;
  float in_XMM5_Da;
  uint64_t in_stack_00000040;
  uint64_t uStack0000000000000050;
  
  do {
    lVar2 = (int64_t)*(int *)((int64_t)param_2 * 0x1b0 + 0x110 + unaff_RDI) * 0x60;
    fVar4 = (float)(*(uint *)(lVar2 + 0x38 + *(int64_t *)(in_R10 + 0x158)) & in_XMM4_Da);
    fVar3 = (float)(*(uint *)(lVar2 + 0x34 + *(int64_t *)(in_R10 + 0x158)) & in_XMM4_Da);
    if (fVar3 <= fVar4) {
      fVar4 = fVar3;
    }
    param_4 = param_4 + fVar4;
    if (param_2 == unaff_BL) {
      in_R9B = '\x01';
LAB_180572fb3:
      param_3 = param_3 + fVar4;
      if (param_2 == in_R11B) break;
    }
    else if (in_R9B != '\0') goto LAB_180572fb3;
    param_2 = *(char *)((int64_t)param_2 + 0x100 + in_R10);
  } while (param_2 != -1);
  if (in_XMM5_Da < param_4) {
    in_XMM5_Da = param_3 / param_4;
  }
  *(float *)(unaff_RSI + 0x3420) = in_XMM5_Da;
  *(char *)(unaff_RSI + 0x58) = unaff_BL;
  *(uint64_t *)(unaff_RSI + 0x2500) = unaff_R12;
  *(uint64_t *)(unaff_RSI + 0x2510) = unaff_R12;
  *(int32_t *)(unaff_RSI + 0x2564) = 0x3f800000;
  uVar1 = *(uint64_t *)(unaff_R15 + 0x58);
  uStack0000000000000050 = in_stack_00000040;
  FUN_180431730(unaff_RSI + 0xf0);
  FUN_180431680(unaff_RSI + 0xf0,uVar1,0);
  FUN_180431730(unaff_RSI + 0x12a0);
                    // WARNING: Subroutine does not return
  memset(unaff_RSI + 0x13e0,0,0x1050);
}





// 函数: void FUN_180572fcf(uint64_t param_1,uint64_t param_2,float param_3,float param_4)
void FUN_180572fcf(uint64_t param_1,uint64_t param_2,float param_3,float param_4)

{
  uint64_t uVar1;
  int8_t unaff_BL;
  int64_t unaff_RSI;
  uint64_t unaff_R12;
  int64_t unaff_R15;
  float in_XMM5_Da;
  uint64_t in_stack_00000040;
  uint64_t uStack0000000000000050;
  
  if (in_XMM5_Da < param_4) {
    in_XMM5_Da = param_3 / param_4;
  }
  *(float *)(unaff_RSI + 0x3420) = in_XMM5_Da;
  *(int8_t *)(unaff_RSI + 0x58) = unaff_BL;
  *(uint64_t *)(unaff_RSI + 0x2500) = unaff_R12;
  *(uint64_t *)(unaff_RSI + 0x2510) = unaff_R12;
  *(int32_t *)(unaff_RSI + 0x2564) = 0x3f800000;
  uVar1 = *(uint64_t *)(unaff_R15 + 0x58);
  uStack0000000000000050 = in_stack_00000040;
  FUN_180431730(unaff_RSI + 0xf0);
  FUN_180431680(unaff_RSI + 0xf0,uVar1,0);
  FUN_180431730(unaff_RSI + 0x12a0);
                    // WARNING: Subroutine does not return
  memset(unaff_RSI + 0x13e0,0,0x1050);
}





// 函数: void FUN_180572fd9(uint64_t param_1,uint64_t param_2,float param_3,float param_4)
void FUN_180572fd9(uint64_t param_1,uint64_t param_2,float param_3,float param_4)

{
  uint64_t uVar1;
  int8_t unaff_BL;
  int64_t unaff_RSI;
  uint64_t unaff_R12;
  int64_t unaff_R15;
  uint64_t in_stack_00000040;
  uint64_t uStack0000000000000050;
  
  *(float *)(unaff_RSI + 0x3420) = param_3 / param_4;
  *(int8_t *)(unaff_RSI + 0x58) = unaff_BL;
  *(uint64_t *)(unaff_RSI + 0x2500) = unaff_R12;
  *(uint64_t *)(unaff_RSI + 0x2510) = unaff_R12;
  *(int32_t *)(unaff_RSI + 0x2564) = 0x3f800000;
  uVar1 = *(uint64_t *)(unaff_R15 + 0x58);
  uStack0000000000000050 = in_stack_00000040;
  FUN_180431730(unaff_RSI + 0xf0);
  FUN_180431680(unaff_RSI + 0xf0,uVar1,0);
  FUN_180431730(unaff_RSI + 0x12a0);
                    // WARNING: Subroutine does not return
  memset(unaff_RSI + 0x13e0,0,0x1050);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



