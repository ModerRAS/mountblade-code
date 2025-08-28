#include "TaleWorlds.Native.Split.h"

// 99_part_01_part047.c - 4 个函数

// 函数: void FUN_1800d36c0(uint64_t param_1,uint64_t param_2)
void FUN_1800d36c0(uint64_t param_1,uint64_t param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  int8_t *puVar4;
  void *puVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int32_t uVar10;
  int32_t uVar11;
  char *pcVar12;
  int iVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  char cVar23;
  int32_t uVar24;
  int8_t auStack_248 [32];
  longlong *plStack_228;
  longlong **pplStack_220;
  longlong *plStack_218;
  uint64_t uStack_210;
  char cStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  uint64_t uStack_1f0;
  int32_t uStack_1e8;
  uint64_t uStack_1d8;
  longlong *plStack_1d0;
  uint64_t uStack_1c8;
  longlong *plStack_1c0;
  longlong **pplStack_1b8;
  void **ppuStack_1b0;
  uint64_t uStack_1a8;
  void *puStack_198;
  int8_t *puStack_190;
  int32_t uStack_188;
  int8_t auStack_180 [128];
  int32_t uStack_100;
  uint64_t uStack_f8;
  uint64_t *puStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  void *puStack_b8;
  int8_t *puStack_b0;
  int32_t uStack_a8;
  int8_t auStack_a0 [72];
  ulonglong uStack_58;
  
  lVar16 = _DAT_180c86890;
  uStack_1a8 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_248;
  uVar20 = 0;
  uStack_1c8 = param_2;
  while( true ) {
    uStack_210 = 0x180c91148;
    cStack_208 = 0;
    iVar13 = _Mtx_lock(0x180c91148);
    if (iVar13 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar13);
    }
    cStack_208 = '\x01';
    if (DAT_180c91198 == '\x01') break;
    uStack_1d8 = 1;
    FUN_1800495d0(0x180c91100,&uStack_210,&uStack_1d8);
    cVar23 = DAT_180c91198;



// 函数: void FUN_1800d40d0(int *param_1,ulonglong *param_2)
void FUN_1800d40d0(int *param_1,ulonglong *param_2)

{
  int iVar1;
  uint64_t uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint64_t *puVar5;
  ulonglong uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  ulonglong uVar9;
  uint uVar10;
  
  iVar1 = *param_1;
  uVar9 = (ulonglong)iVar1;
  uVar6 = *param_2;
  if ((ulonglong)((longlong)(param_2[2] - uVar6) >> 3) < uVar9) {
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_18062b420(_DAT_180c8ed18,uVar9 * 8,(char)param_2[3]);
      uVar6 = *param_2;
    }
    if (uVar6 != param_2[1]) {
                    // WARNING: Subroutine does not return
      memmove(uVar3,uVar6,param_2[1] - uVar6);
    }
    if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_2 = uVar3;
    param_2[2] = uVar3 + uVar9 * 8;
    param_2[1] = uVar3;
  }
  uVar10 = 0;
  if (0 < iVar1) {
    do {
      puVar8 = (uint64_t *)param_2[1];
      uVar2 = *(uint64_t *)
               (*(longlong *)(param_1 + (ulonglong)(uVar10 >> 0xb) * 2 + 2) + 0x10 +
               (ulonglong)(uVar10 + (uVar10 >> 0xb) * -0x800) * 0x18);
      if (puVar8 < (uint64_t *)param_2[2]) {
        param_2[1] = (ulonglong)(puVar8 + 1);
        *puVar8 = uVar2;
      }
      else {
        puVar7 = (uint64_t *)*param_2;
        lVar4 = (longlong)puVar8 - (longlong)puVar7 >> 3;
        if (lVar4 == 0) {
          lVar4 = 1;
LAB_1800d41dc:
          puVar5 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar4 * 8,(char)param_2[3]);
          puVar7 = (uint64_t *)*param_2;
          puVar8 = (uint64_t *)param_2[1];
        }
        else {
          lVar4 = lVar4 * 2;
          if (lVar4 != 0) goto LAB_1800d41dc;
          puVar5 = (uint64_t *)0x0;
        }
        if (puVar7 != puVar8) {
                    // WARNING: Subroutine does not return
          memmove(puVar5,puVar7,(longlong)puVar8 - (longlong)puVar7);
        }
        *puVar5 = uVar2;
        if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *param_2 = (ulonglong)puVar5;
        param_2[2] = (ulonglong)(puVar5 + lVar4);
        param_2[1] = (ulonglong)(puVar5 + 1);
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800d4179(void)
void FUN_1800d4179(void)

{
  uint64_t uVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  ulonglong *unaff_RBX;
  uint64_t *puVar5;
  int unaff_R12D;
  longlong unaff_R13;
  uint unaff_R14D;
  
  do {
    puVar5 = (uint64_t *)unaff_RBX[1];
    uVar1 = *(uint64_t *)
             (*(longlong *)(unaff_R13 + 8 + (ulonglong)(unaff_R14D >> 0xb) * 8) + 0x10 +
             (ulonglong)(unaff_R14D + (unaff_R14D >> 0xb) * -0x800) * 0x18);
    if (puVar5 < (uint64_t *)unaff_RBX[2]) {
      unaff_RBX[1] = (ulonglong)(puVar5 + 1);
      *puVar5 = uVar1;
    }
    else {
      puVar4 = (uint64_t *)*unaff_RBX;
      lVar2 = (longlong)puVar5 - (longlong)puVar4 >> 3;
      if (lVar2 == 0) {
        lVar2 = 1;
LAB_1800d41dc:
        puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,(char)unaff_RBX[3]);
        puVar4 = (uint64_t *)*unaff_RBX;
        puVar5 = (uint64_t *)unaff_RBX[1];
      }
      else {
        lVar2 = lVar2 * 2;
        if (lVar2 != 0) goto LAB_1800d41dc;
        puVar3 = (uint64_t *)0x0;
      }
      if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
        memmove(puVar3,puVar4,(longlong)puVar5 - (longlong)puVar4);
      }
      *puVar3 = uVar1;
      if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *unaff_RBX = (ulonglong)puVar3;
      unaff_RBX[2] = (ulonglong)(puVar3 + lVar2);
      unaff_RBX[1] = (ulonglong)(puVar3 + 1);
    }
    unaff_R14D = unaff_R14D + 1;
    if (unaff_R12D <= (int)unaff_R14D) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1800d4253(void)
void FUN_1800d4253(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




