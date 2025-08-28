#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part217.c - 5 个函数

// 函数: void FUN_180791615(uint64_t *param_1,uint64_t param_2,uint64_t param_3,ulonglong param_4)
void FUN_180791615(uint64_t *param_1,uint64_t param_2,uint64_t param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  longlong unaff_RBX;
  int iVar7;
  uint uVar8;
  ulonglong unaff_RSI;
  uint64_t *unaff_RDI;
  uint64_t in_R10;
  code *in_R11;
  ulonglong unaff_R12;
  int unaff_R13D;
  int *unaff_R14;
  int iVar9;
  uint uStack0000000000000060;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  int in_stack_00000070;
  int in_stack_00000078;
  longlong in_stack_00000080;
  ulonglong in_stack_000000b0;
  int in_stack_00000130;
  
  uVar2 = _uStack0000000000000060 >> 0x20;
  while( true ) {
    iVar7 = in_stack_00000130 - (int)unaff_R12;
    iVar9 = *unaff_R14;
    iVar4 = (*in_R11)(param_1,in_R10,iVar9,param_4,(iVar7 + -1) / iVar9 + 1);
    if ((iVar4 != 0) ||
       (plVar1 = *(longlong **)
                  (*(longlong *)(unaff_RBX + 0x38) +
                  (longlong)(*(int *)(unaff_RBX + 0x1c) * unaff_R13D + (int)unaff_RSI) * 8),
       iVar4 = (**(code **)(*plVar1 + 8))
                         (plVar1,(int)((*(int *)(unaff_RBX + 0x18) * uStack0000000000000060 +
                                       unaff_R13D) * in_stack_00000078) + in_stack_00000080,
                          uStack000000000000006c,uStack0000000000000068,iVar7), iVar4 != 0)) break;
    iVar4 = unaff_R14[1];
    while( true ) {
      uVar8 = (int)unaff_RSI + 1;
      unaff_RSI = (ulonglong)uVar8;
      unaff_R14 = unaff_R14 + 3;
      uStack0000000000000060 = uStack0000000000000060 + iVar4 * iVar9;
      unaff_R12 = (ulonglong)uStack0000000000000060;
      if (*(int *)(unaff_RBX + 0x1c) <= (int)uVar8) {
        do {
          unaff_R13D = unaff_R13D + 1;
          if (*(int *)(unaff_RBX + 0x18) <= unaff_R13D) goto LAB_1807915cb;
          unaff_RSI = (ulonglong)unaff_RDI & 0xffffffff;
          unaff_R12 = (ulonglong)unaff_RDI & 0xffffffff;
        } while (*(int *)(unaff_RBX + 0x1c) < 1);
        unaff_R14 = (int *)&stack0x00000088;
        uStack0000000000000060 = (uint)unaff_RDI;
      }
      iVar7 = (int)unaff_RSI;
      iVar9 = in_stack_00000070;
      if (iVar7 < in_stack_00000070) {
        iVar9 = iVar7;
      }
      puVar6 = unaff_RDI;
      if ((iVar9 == 0) || (unaff_R14[2] == 0)) {
        puVar5 = (uint64_t *)
                 FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x88,&UNK_18095b780,0x12d);
        if (puVar5 != (uint64_t *)0x0) {
          *puVar5 = &UNK_18095b638;
          puVar6 = puVar5;
        }
      }
      else {
        puVar5 = (uint64_t *)
                 FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0xb0,&UNK_18095b780,0x132);
        if (puVar5 != (uint64_t *)0x0) {
          puVar6 = puVar5 + 0x12;
          *puVar5 = &UNK_18095b678;
          *(int32_t *)(puVar5 + 0x11) = 0;
          puVar5[0x13] = puVar6;
          *puVar6 = puVar6;
          puVar5[0x14] = unaff_RDI;
          puVar6 = puVar5;
        }
      }
      *(uint64_t **)
       (*(longlong *)(unaff_RBX + 0x38) +
       (longlong)(*(int *)(unaff_RBX + 0x1c) * unaff_R13D + iVar7) * 8) = puVar6;
      param_1 = *(uint64_t **)
                 (*(longlong *)(unaff_RBX + 0x38) +
                 (longlong)(*(int *)(unaff_RBX + 0x1c) * unaff_R13D + iVar7) * 8);
      if (param_1 == (uint64_t *)0x0) goto LAB_1807915cb;
      in_R10 = *(uint64_t *)(unaff_RBX + 8);
      in_R11 = *(code **)*param_1;
      param_4 = uVar2;
      if (*(int *)(unaff_RBX + 0x1c) + -1 <= iVar7) break;
      iVar9 = *unaff_R14;
      iVar4 = unaff_R14[1];
      iVar3 = (*in_R11)(param_1,in_R10,iVar9,uVar2,iVar4);
      if ((iVar3 != 0) ||
         (plVar1 = *(longlong **)
                    (*(longlong *)(unaff_RBX + 0x38) +
                    (longlong)(*(int *)(unaff_RBX + 0x1c) * unaff_R13D + iVar7) * 8),
         iVar7 = (**(code **)(*plVar1 + 8))
                           (plVar1,(int)((*(int *)(unaff_RBX + 0x18) * uStack0000000000000060 +
                                         unaff_R13D) * in_stack_00000078) + in_stack_00000080,
                            uStack000000000000006c,uStack0000000000000068,iVar4 * iVar9), iVar7 != 0
         )) goto LAB_1807915cb;
    }
  }
LAB_1807915cb:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000b0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1807916ce(void)
void FUN_1807916ce(void)

{
  ulonglong in_stack_000000b0;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000b0 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_1807916e0(longlong param_1,uint64_t param_2,int param_3,uint64_t param_4,int param_5,
             int param_6,int32_t param_7)

{
  longlong lVar1;
  int32_t uVar2;
  
  *(uint64_t *)(param_1 + 8) = param_2;
  *(int32_t *)(param_1 + 0x1c) = param_7;
  *(int *)(param_1 + 0x10) = param_3;
  *(int *)(param_1 + 0x14) = param_5;
  *(int *)(param_1 + 0x18) = param_6;
  *(int *)(param_1 + 0x20) = param_5 + param_6;
  *(int *)(param_1 + 0x24) = param_3 * 2;
  lVar1 = FUN_180741d80(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_3 * 4,0x10,&UNK_18095b780,0x87
                        ,0);
  *(longlong *)(param_1 + 0x40) = lVar1;
  uVar2 = 0;
  if (lVar1 == 0) {
    uVar2 = 0x26;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180791770(longlong *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
void FUN_180791770(longlong *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)

{
  float fVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  uint64_t uVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  float fVar14;
  longlong lVar15;
  float fVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int8_t auStack_318 [32];
  float fStack_2f8;
  float fStack_2f0;
  int32_t uStack_2e8;
  int32_t uStack_2d8;
  uint64_t uStack_2d0;
  uint64_t uStack_2c8;
  uint64_t uStack_2c0;
  uint64_t uStack_2b8;
  uint64_t uStack_2b0;
  int32_t uStack_2a8;
  uint64_t uStack_2a0;
  uint64_t uStack_298;
  uint64_t uStack_290;
  int32_t uStack_288;
  longlong alStack_278 [32];
  longlong alStack_178 [32];
  ulonglong uStack_78;
  
  uStack_78 = _DAT_180bf00a8 ^ (ulonglong)auStack_318;
  cVar2 = *(char *)((longlong)param_1 + 0x14);
  iVar5 = 1;
  if (cVar2 == '\0') {
    iVar5 = (int)param_1[3];
  }
  uVar12 = 0;
  uStack_288 = 0xffffffff;
  uStack_290 = 0;
  uStack_2b0 = 0;
  fStack_2f8 = (float)((uint)fStack_2f8 & 0xffffff00);
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_2a8 = 0xffffffff;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2d8 = param_4;
  uStack_2d0 = param_2;
  uStack_2c8 = param_3;
  FUN_18075a100(&uStack_2a0,param_1[1],iVar5,0);
  fStack_2f8 = (float)((uint)fStack_2f8 & 0xffffff00);
  FUN_18075a100(&uStack_2c0,param_1[1],(int)param_1[3],0);
  uVar17 = uVar12;
  if (iVar5 < 1) {
    iVar10 = (int)param_1[2];
  }
  else {
    do {
      iVar10 = (int)param_1[2];
      lVar6 = func_0x00018075e4e0(&uStack_2a0);
      alStack_278[uVar12] = lVar6 + (longlong)(iVar10 * (int)uVar17) * 4;
      uVar12 = uVar12 + 1;
      uVar17 = (ulonglong)((int)uVar17 + 1);
    } while ((longlong)uVar12 < (longlong)iVar5);
  }
  iVar11 = 0;
  if (0 < (int)param_1[3]) {
    plVar13 = alStack_178;
    do {
      iVar10 = (int)param_1[2];
      lVar6 = func_0x00018075e4e0(&uStack_2c0);
      iVar8 = iVar10 * iVar11;
      iVar11 = iVar11 + 1;
      *plVar13 = lVar6 + (longlong)iVar8 * 4;
      plVar13 = plVar13 + 1;
    } while (iVar11 < (int)param_1[3]);
  }
  fStack_2f8 = (float)iVar10;
  FUN_18075d5e0(uStack_2d0,alStack_278,uStack_2d8,iVar5);
  fVar18 = *(float *)((longlong)param_1 + 0x24);
  fVar16 = 0.0;
  lVar6 = 0;
  uStack_2d8 = 0;
  lVar15 = 0;
  fVar1 = *(float *)(param_1 + 4);
  fVar20 = 0.0;
  fVar19 = 0.0;
  fVar14 = fVar16;
  if (fVar18 != *(float *)((longlong)param_1 + 0x2c)) {
    fVar14 = 1.79366e-43;
    lVar15 = 0x80;
    fVar19 = (*(float *)((longlong)param_1 + 0x2c) - fVar18) * 0.0078125;
  }
  fStack_2f0 = fVar16;
  if (fVar1 != *(float *)(param_1 + 5)) {
    fStack_2f0 = 1.79366e-43;
    uStack_2d8 = 0x80;
    fVar20 = (*(float *)(param_1 + 5) - fVar1) * 0.0078125;
  }
  if ((fVar14 == 0.0) && (fVar18 <= 0.0)) {
    lVar6 = param_1[2];
    lVar15 = param_1[3];
    uVar7 = func_0x00018075e4e0(&uStack_2c0);
                    // WARNING: Subroutine does not return
    memset(uVar7,0,(longlong)(int)lVar6 * (longlong)(int)lVar15 * 4);
  }
  fVar14 = fVar16;
  if (lVar15 != 0) {
    fVar14 = (float)lVar15;
    do {
      if (0 < (int)param_1[3]) {
        plVar13 = alStack_178;
        fVar9 = fVar16;
        do {
          fVar4 = fVar9;
          if (cVar2 != '\0') {
            fVar4 = 0.0;
          }
          fVar9 = (float)((int)fVar9 + 1);
          *(float *)(*plVar13 + lVar6 * 4) =
               fVar18 * *(float *)(alStack_278[(int)fVar4] + lVar6 * 4);
          plVar13 = plVar13 + 1;
        } while ((int)fVar9 < (int)param_1[3]);
      }
      lVar6 = lVar6 + 1;
      fVar18 = fVar18 + fVar19;
    } while (lVar6 < lVar15);
  }
  if ((int)fVar14 < (int)param_1[2]) {
    lVar6 = (longlong)(int)fVar14 * 4;
    do {
      if (0 < (int)param_1[3]) {
        plVar13 = alStack_178;
        fVar19 = fVar16;
        do {
          fVar9 = fVar19;
          if (cVar2 != '\0') {
            fVar9 = 0.0;
          }
          fVar19 = (float)((int)fVar19 + 1);
          *(float *)(lVar6 + *plVar13) = fVar18 * *(float *)(alStack_278[(int)fVar9] + lVar6);
          plVar13 = plVar13 + 1;
        } while ((int)fVar19 < (int)param_1[3]);
      }
      fVar14 = (float)((int)fVar14 + 1);
      lVar6 = lVar6 + 4;
    } while ((int)fVar14 < (int)param_1[2]);
  }
  fStack_2f8 = fVar20;
  iVar5 = (**(code **)(*param_1 + 0x10))(param_1,alStack_178,alStack_278,fVar1);
  if (iVar5 == 0) {
    if (0 < (int)param_1[3]) {
      plVar13 = alStack_178;
      do {
        iVar10 = 0;
        iVar5 = *(int *)((longlong)param_1 + 0x1c);
        if (0 < iVar5) {
          fVar18 = fVar16;
          if (cVar2 != '\0') {
            fVar18 = 0.0;
          }
          do {
            uStack_2e8 = uStack_2d8;
            plVar3 = *(longlong **)(param_1[7] + (longlong)(iVar5 * (int)fVar16 + iVar10) * 8);
            fStack_2f8 = fVar1;
            fStack_2f0 = fVar20;
            iVar5 = (**(code **)(*plVar3 + 0x10))
                              (plVar3,alStack_278[(int)fVar18],*plVar13,(int)param_1[2]);
            if (iVar5 != 0) goto LAB_180791aec;
            iVar5 = *(int *)((longlong)param_1 + 0x1c);
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar5);
        }
        fVar16 = (float)((int)fVar16 + 1);
        plVar13 = plVar13 + 1;
      } while ((int)fVar16 < (int)param_1[3]);
    }
    *(int *)(param_1 + 4) = (int)param_1[5];
    *(int32_t *)((longlong)param_1 + 0x24) = *(int32_t *)((longlong)param_1 + 0x2c);
    FUN_18075f4a0(alStack_178,uStack_2c8,(int)param_1[3],(int)param_1[2]);
  }
LAB_180791aec:
  func_0x000180759110(&uStack_2c0);
  func_0x000180759110(&uStack_2a0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_318);
}





// 函数: void FUN_180791b40(longlong param_1)
void FUN_180791b40(longlong param_1)

{
                    // WARNING: Subroutine does not return
  memset(*(uint64_t *)(param_1 + 0x40),0,(longlong)*(int *)(param_1 + 0x10) << 2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * FUN_180791b60(void)

{
  FUN_180791040();
  _DAT_180c10a88 = 0x20;
  _DAT_180c10a70 = 0x180be2b40;
  _DAT_180c10a80 = 0x40;
  return &DAT_180c10a70;
}



uint64_t FUN_180791bb0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong lVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar5 = 0;
  *(uint64_t *)(lVar1 + 0x450) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x458) = 0;
  *(int32_t *)(lVar1 + 0x45c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x460) = 0x3f43ef17;
  *(int32_t *)(lVar1 + 0x464) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x224) = 0x3f800000;
  *(uint64_t *)(lVar1 + 0x468) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x470) = 0;
  *(int32_t *)(lVar1 + 0x474) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x478) = 0x3fec835e;
  *(uint64_t *)(lVar1 + 0x47c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x228) = 0x3f800000;
  lVar2 = *(longlong *)(lVar1 + 0xe8);
  *(float *)(lVar1 + 0x220) = (float)*(int *)(*(longlong *)(lVar1 + 0xa8) + 0x6d0) * 0.5 - 10.0;
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar4 = 0;
    do {
      uVar3 = func_0x000180762a70(lVar1,iVar5,
                                  *(int32_t *)
                                   (*(longlong *)(*(longlong *)(lVar2 + 0x68) + lVar4) + 0x38));
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar2 = *(longlong *)(lVar1 + 0xe8);
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar5 < *(int *)(lVar2 + 0x60));
  }
  *(int32_t *)(lVar1 + 0x218) = *(int32_t *)(lVar1 + 0x484);
  *(int32_t *)(lVar1 + 0x21c) = *(int32_t *)(lVar1 + 0x488);
  FUN_180793880(lVar1);
  return 0;
}





// 函数: void FUN_180791d40(longlong *param_1)
void FUN_180791d40(longlong *param_1)

{
                    // WARNING: Subroutine does not return
  memset(*param_1 + 0x22c,0,0x200);
}



uint64_t FUN_180791db0(longlong *param_1,int param_2,int32_t *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    *param_3 = *(int32_t *)(lVar1 + 0x488);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x488);
  }
  else {
    if ((param_2 != 1) || (*param_3 = *(int32_t *)(lVar1 + 0x484), param_4 == 0)) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x484);
  }
                    // WARNING: Subroutine does not return
  FUN_18076b390(param_4,0x20,&UNK_180958d90,(double)fVar2);
}





