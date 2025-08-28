#include "TaleWorlds.Native.Split.h"

// 03_rendering_part227.c - 16 个函数

// 函数: void FUN_180395ea0(longlong param_1,int param_2,longlong param_3,longlong param_4,int param_5,
void FUN_180395ea0(longlong param_1,int param_2,longlong param_3,longlong param_4,int param_5,
                  int param_6,longlong *param_7,float *param_8)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  float fVar10;
  
  if ((*(longlong *)(param_1 + 0x480) - *(longlong *)(param_1 + 0x478) >> 3 != 0) &&
     ((lVar7 = *param_7, lVar7 == 0 ||
      ((*(longlong *)(lVar7 + 0x100) - *(longlong *)(lVar7 + 0xf8) & 0xfffffffffffffff8U) != 0)))) {
    iVar4 = 0;
    iVar5 = 0;
    plVar8 = (longlong *)(param_4 + 0xb0);
    lVar9 = 0;
    lVar7 = param_1;
    while ((lVar6 = *param_7, lVar6 == 0 ||
           ((*(longlong *)(lVar6 + 0x100) - *(longlong *)(lVar6 + 0xf8) & 0xfffffffffffffff8U) != 0)
           )) {
      if (iVar4 < (int)(uint)*(byte *)(param_4 + 0xa8)) {
        lVar6 = *plVar8;
        iVar4 = iVar4 + 1;
        plVar8 = plVar8 + 1;
      }
      else {
        if ((ulonglong)(*(longlong *)(param_4 + 0x100) - *(longlong *)(param_4 + 0xf8) >> 3) <=
            (ulonglong)(longlong)iVar5) {
          return;
        }
        lVar6 = *(longlong *)(lVar9 + *(longlong *)(param_4 + 0xf8));
        iVar5 = iVar5 + 1;
        lVar9 = lVar9 + 8;
      }
      if (((lVar6 != 0) && ((*(byte *)(lVar6 + 0x139) & 1) != 0)) &&
         ((*(byte *)(lVar6 + 0x139) & 2) == 0)) {
        lVar3 = (longlong)param_2;
        iVar2 = *(int *)(lVar7 + 0x558 + lVar3 * 4);
        if (*(int *)(lVar6 + 0x40 + lVar3 * 4) < iVar2) {
          *(int *)(lVar6 + 0x40 + lVar3 * 4) = iVar2;
          cVar1 = FUN_18038d0a0(lVar6,param_3);
          if (cVar1 != '\0') {
            fVar10 = (float)func_0x00018038d2f0(lVar6,param_3);
            fVar10 = ABS(*(float *)(param_3 + 8) - fVar10);
            if ((fVar10 < 1.5) && (fVar10 < *param_8)) {
              *param_8 = fVar10;
              *param_7 = lVar6;
            }
          }
          lVar3 = *param_7;
          if (((lVar3 == 0) ||
              ((*(longlong *)(lVar3 + 0x100) - *(longlong *)(lVar3 + 0xf8) & 0xfffffffffffffff8U) !=
               0)) && ((iVar5 != 0 || (param_6 < param_5)))) {
            iVar2 = 1;
            if (iVar5 != 0) {
              iVar2 = -1;
            }
            FUN_180395ea0(lVar7,param_2,param_3,lVar6,param_5,iVar2 + param_6,param_7,param_8);
            lVar7 = param_1;
          }
        }
      }
    }
  }
  return;
}





// 函数: void FUN_180395ed7(uint64_t param_1,int param_2)
void FUN_180395ed7(uint64_t param_1,int param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong in_R11;
  longlong unaff_R13;
  longlong *plVar7;
  longlong lVar8;
  float fVar9;
  longlong in_stack_000000a0;
  int in_stack_000000a8;
  int in_stack_000000c0;
  int in_stack_000000c8;
  longlong *in_stack_000000d0;
  float *in_stack_000000d8;
  
  lVar8 = *in_stack_000000d0;
  if ((lVar8 == 0) ||
     ((*(longlong *)(lVar8 + 0x100) - *(longlong *)(lVar8 + 0xf8) & 0xfffffffffffffff8U) != 0)) {
    iVar4 = 0;
    iVar5 = 0;
    plVar7 = (longlong *)(unaff_RBP + 0xb0);
    lVar8 = 0;
    while ((lVar6 = *in_stack_000000d0, lVar6 == 0 ||
           ((*(longlong *)(lVar6 + 0x100) - *(longlong *)(lVar6 + 0xf8) & 0xfffffffffffffff8U) != 0)
           )) {
      if (iVar4 < (int)(uint)*(byte *)(unaff_RBP + 0xa8)) {
        lVar6 = *plVar7;
        iVar4 = iVar4 + 1;
        plVar7 = plVar7 + 1;
      }
      else {
        if ((ulonglong)(*(longlong *)(unaff_RBP + 0x100) - *(longlong *)(unaff_RBP + 0xf8) >> 3) <=
            (ulonglong)(longlong)iVar5) {
          return;
        }
        lVar6 = *(longlong *)(lVar8 + *(longlong *)(unaff_RBP + 0xf8));
        iVar5 = iVar5 + 1;
        lVar8 = lVar8 + 8;
      }
      if (((lVar6 != 0) && ((*(byte *)(lVar6 + 0x139) & 1) != 0)) &&
         ((*(byte *)(lVar6 + 0x139) & 2) == 0)) {
        lVar3 = (longlong)param_2;
        iVar1 = *(int *)(in_R11 + 0x558 + lVar3 * 4);
        if (*(int *)(lVar6 + 0x40 + lVar3 * 4) < iVar1) {
          *(int *)(lVar6 + 0x40 + lVar3 * 4) = iVar1;
          cVar2 = FUN_18038d0a0(lVar6);
          if (cVar2 != '\0') {
            fVar9 = (float)func_0x00018038d2f0(lVar6);
            fVar9 = ABS(*(float *)(unaff_R13 + 8) - fVar9);
            if ((fVar9 < 1.5) && (fVar9 < *in_stack_000000d8)) {
              *in_stack_000000d8 = fVar9;
              *in_stack_000000d0 = lVar6;
            }
          }
          lVar6 = *in_stack_000000d0;
          param_2 = in_stack_000000a8;
          if (((lVar6 == 0) ||
              ((*(longlong *)(lVar6 + 0x100) - *(longlong *)(lVar6 + 0xf8) & 0xfffffffffffffff8U) !=
               0)) && ((iVar5 != 0 || (in_stack_000000c8 < in_stack_000000c0)))) {
            FUN_180395ea0(in_R11,in_stack_000000a8);
            in_R11 = in_stack_000000a0;
          }
        }
      }
    }
  }
  return;
}





// 函数: void FUN_180395f09(uint64_t param_1,int param_2)
void FUN_180395f09(uint64_t param_1,int param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong in_R11;
  longlong unaff_R13;
  longlong *plVar7;
  longlong lVar8;
  float fVar9;
  longlong in_stack_000000a0;
  int in_stack_000000a8;
  int in_stack_000000c0;
  int in_stack_000000c8;
  float *in_stack_000000d8;
  
  iVar4 = 0;
  iVar5 = 0;
  plVar7 = (longlong *)(unaff_RBP + 0xb0);
  lVar8 = 0;
  while ((lVar6 = *unaff_RBX, lVar6 == 0 ||
         ((*(longlong *)(lVar6 + 0x100) - *(longlong *)(lVar6 + 0xf8) & 0xfffffffffffffff8U) != 0)))
  {
    if (iVar4 < (int)(uint)*(byte *)(unaff_RBP + 0xa8)) {
      lVar6 = *plVar7;
      iVar4 = iVar4 + 1;
      plVar7 = plVar7 + 1;
    }
    else {
      if ((ulonglong)(*(longlong *)(unaff_RBP + 0x100) - *(longlong *)(unaff_RBP + 0xf8) >> 3) <=
          (ulonglong)(longlong)iVar5) {
        return;
      }
      lVar6 = *(longlong *)(lVar8 + *(longlong *)(unaff_RBP + 0xf8));
      iVar5 = iVar5 + 1;
      lVar8 = lVar8 + 8;
    }
    if (((lVar6 != 0) && ((*(byte *)(lVar6 + 0x139) & 1) != 0)) &&
       ((*(byte *)(lVar6 + 0x139) & 2) == 0)) {
      lVar3 = (longlong)param_2;
      iVar1 = *(int *)(in_R11 + 0x558 + lVar3 * 4);
      if (*(int *)(lVar6 + 0x40 + lVar3 * 4) < iVar1) {
        *(int *)(lVar6 + 0x40 + lVar3 * 4) = iVar1;
        cVar2 = FUN_18038d0a0(lVar6);
        if (cVar2 != '\0') {
          fVar9 = (float)func_0x00018038d2f0(lVar6);
          fVar9 = ABS(*(float *)(unaff_R13 + 8) - fVar9);
          if ((fVar9 < 1.5) && (fVar9 < *in_stack_000000d8)) {
            *in_stack_000000d8 = fVar9;
            *unaff_RBX = lVar6;
          }
        }
        lVar6 = *unaff_RBX;
        param_2 = in_stack_000000a8;
        if (((lVar6 == 0) ||
            ((*(longlong *)(lVar6 + 0x100) - *(longlong *)(lVar6 + 0xf8) & 0xfffffffffffffff8U) != 0
            )) && ((iVar5 != 0 || (in_stack_000000c8 < in_stack_000000c0)))) {
          FUN_180395ea0(in_R11,in_stack_000000a8);
          in_R11 = in_stack_000000a0;
        }
      }
    }
  }
  return;
}





// 函数: void FUN_1803960ea(void)
void FUN_1803960ea(void)

{
  return;
}





// 函数: void FUN_1803960f2(void)
void FUN_1803960f2(void)

{
  return;
}



ulonglong FUN_180396100(longlong param_1,float *param_2,uint64_t param_3,char param_4)

{
  void *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  ulonglong uVar5;
  uint64_t *puVar6;
  void *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  uint64_t uVar15;
  void *puStack_90;
  void *puStack_88;
  uint uStack_80;
  ulonglong uStack_78;
  
  uVar15 = 0xfffffffffffffffe;
  uVar11 = 0;
  bVar4 = false;
  fVar14 = 10000.0;
  lVar8 = *(longlong *)(param_1 + 0x480);
  uVar5 = uVar11;
  if ((lVar8 - *(longlong *)(param_1 + 0x478) >> 3 != 0) && (uVar5 = FUN_180395830(), uVar5 == 0)) {
    if ((param_4 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x528) + 0x28b9) == '\0')) {
      *(int8_t *)(*(longlong *)(param_1 + 0x528) + 0x28b9) = 1;
      puStack_90 = &UNK_180a3c3e0;
      uStack_78 = 0;
      puStack_88 = (void *)0x0;
      uStack_80 = 0;
      FUN_1806277c0(&puStack_90,0x83);
      puVar6 = (uint64_t *)(puStack_88 + uStack_80);
      *puVar6 = 0x20676e6974746547;
      puVar6[1] = 0x207473657261656e;
      puVar6[2] = 0x6873656d2076616e;
      puVar6[3] = 0x70206120726f6620;
      puVar6[4] = 0x206e6f697469736f;
      puVar6[5] = 0x2073692074616874;
      puVar6[6] = 0x7961776120726166;
      puVar6[7] = 0x616e206d6f726620;
      puVar6[8] = 0x66206873656d2076;
      puVar6[9] = 0x6441202e73656361;
      puVar6[10] = 0x63616620676e6964;
      puVar6[0xb] = 0x6874206f74207365;
      puVar6[0xc] = 0x64726f6f63207369;
      puVar6[0xd] = 0x6d20736574616e69;
      *(int32_t *)(puVar6 + 0xe) = 0x74686769;
      *(int32_t *)((longlong)puVar6 + 0x74) = 0x20656220;
      *(int32_t *)(puVar6 + 0xf) = 0x6563656e;
      *(int32_t *)((longlong)puVar6 + 0x7c) = 0x72617373;
      *(int32_t *)(puVar6 + 0x10) = 0x203a79;
      puVar7 = &DAT_18098bc73;
      if ((*(longlong *)(param_1 + 0x528) != 0) &&
         (puVar1 = *(void **)(*(longlong *)(param_1 + 0x528) + 0x4e0),
         puVar1 != (void *)0x0)) {
        puVar7 = puVar1;
      }
      uStack_80 = 0x83;
      FUN_180628040(&puStack_90,&UNK_180a21e98,(double)*param_2,(double)param_2[1],
                    (double)param_2[2],puVar7,uVar15);
      puVar7 = &DAT_18098bc73;
      if (puStack_88 != (void *)0x0) {
        puVar7 = puStack_88;
      }
      FUN_180627020(puVar7);
      puStack_90 = &UNK_180a3c3e0;
      if (puStack_88 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_88 = (void *)0x0;
      uStack_78 = uStack_78 & 0xffffffff00000000;
      puStack_90 = &UNK_18098bcb0;
      lVar8 = *(longlong *)(param_1 + 0x480);
    }
    lVar2 = *(longlong *)(param_1 + 0x478);
    uVar9 = lVar8 - lVar2 >> 3;
    uVar12 = uVar11;
    if (uVar9 != 0) {
      do {
        uVar3 = *(ulonglong *)(uVar12 + lVar2);
        if (((*(byte *)(uVar3 + 0x139) & 1) != 0) && ((*(byte *)(uVar3 + 0x139) & 2) == 0)) {
          fVar13 = (float)FUN_18038d440(uVar3,param_2);
          if (0.0 < fVar13) {
            if ((!bVar4) && (fVar13 < fVar14)) goto LAB_180396392;
          }
          else {
            fVar13 = (float)func_0x00018038d2f0(uVar3,param_2);
            fVar13 = ABS(param_2[2] - fVar13);
            if ((fVar13 < 1.5) && ((!bVar4 || (fVar13 < fVar14)))) {
              bVar4 = true;
LAB_180396392:
              uVar5 = uVar3;
              fVar14 = fVar13;
            }
          }
        }
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        uVar12 = uVar12 + 8;
      } while ((ulonglong)(longlong)(int)uVar10 < uVar9);
    }
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803963e0(longlong param_1,longlong param_2,uint64_t *param_3,longlong *param_4,
void FUN_1803963e0(longlong param_1,longlong param_2,uint64_t *param_3,longlong *param_4,
                  float *param_5,uint param_6,int param_7,float *param_8,int param_9,int *param_10)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  float *pfVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  float fVar11;
  int8_t auStack_e8 [32];
  float *pfStack_c8;
  int32_t uStack_c0;
  int iStack_b8;
  float *pfStack_b0;
  int iStack_a8;
  int *piStack_a0;
  uint uStack_98;
  int *piStack_90;
  longlong lStack_88;
  float *pfStack_80;
  longlong *plStack_78;
  int8_t auStack_70 [8];
  float afStack_68 [4];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  uStack_98 = param_6;
  pfStack_80 = param_8;
  piStack_90 = param_10;
  if (*param_10 < param_9) {
    *param_10 = param_9;
  }
  plVar10 = (longlong *)(param_2 + 0xb0);
  lVar7 = 0;
  lVar6 = lVar7;
  lStack_88 = param_1;
  plStack_78 = plVar10;
  do {
    lVar3 = *plVar10;
    if ((((lVar3 == 0) || ((*(byte *)(lVar3 + 0x139) & 1) == 0)) ||
        ((*(byte *)(lVar3 + 0x139) & 2) != 0)) || (*(int *)(lVar3 + 0x130) == param_7)) {
LAB_1803964fd:
      afStack_68[lVar6] = 0.0;
    }
    else {
      for (piVar5 = (int *)*param_3; piVar5 != (int *)param_3[1]; piVar5 = piVar5 + 1) {
        if (*piVar5 == *(int *)(lVar3 + 0x130)) goto LAB_1803964fd;
      }
      pfVar4 = (float *)FUN_18038ba40(lVar3,auStack_70);
      fVar11 = (pfStack_80[1] - pfVar4[1]) * (pfStack_80[1] - pfVar4[1]) +
               (*pfStack_80 - *pfVar4) * (*pfStack_80 - *pfVar4);
      fVar1 = *param_5;
      afStack_68[lVar6] = fVar11;
      param_8 = pfStack_80;
      if (fVar11 < fVar1) {
        *param_4 = lVar3;
        *param_5 = fVar11;
      }
    }
    lVar6 = lVar6 + 1;
    plVar10 = plVar10 + 1;
    if (3 < lVar6) {
      if ((param_9 < *piStack_90) || (*param_4 == 0)) {
        uVar8 = (ulonglong)(int)uStack_98;
        iVar2 = *(int *)(lStack_88 + 0x558 + uVar8 * 4);
        piVar5 = piStack_90;
        uVar9 = uVar8;
        lVar6 = lStack_88;
        plVar10 = plStack_78;
        do {
          lVar3 = *plVar10;
          if (((lVar3 != 0) && (*(int *)(lVar3 + 0x40 + uVar8 * 4) < iVar2)) &&
             (afStack_68[lVar7] <= *param_5 && *param_5 != afStack_68[lVar7])) {
            iStack_a8 = param_9 + 1;
            iStack_b8 = param_7;
            uStack_c0 = (int32_t)uVar9;
            *(int *)(lVar3 + 0x40 + uVar8 * 4) = iVar2;
            pfStack_c8 = param_5;
            pfStack_b0 = param_8;
            piStack_a0 = piVar5;
            FUN_1803963e0(lVar6,lVar3,param_3,param_4);
            uVar9 = (ulonglong)uStack_98;
            piVar5 = piStack_90;
            lVar6 = lStack_88;
          }
          lVar7 = lVar7 + 1;
          plVar10 = plVar10 + 1;
          param_8 = pfStack_80;
        } while (lVar7 < 4);
      }
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_e8);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803965f0(longlong param_1)
void FUN_1803965f0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  do {
    iVar4 = 0;
    do {
      LOCK();
      puVar1 = (uint *)(param_1 + 0x578 + (longlong)iVar4 * 4);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 1;
      uVar3 = _DAT_180c82868;
      UNLOCK();
      if ((uVar2 & 1) == 0) {
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    lVar5 = FUN_18005e890(_DAT_180c82868);
    if (lVar5 != 0) {
      plVar6 = (longlong *)FUN_18005e890(uVar3);
      (**(code **)(*plVar6 + 0x20))(plVar6,0);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803966c0(longlong param_1,uint64_t *param_2)
void FUN_1803966c0(longlong param_1,uint64_t *param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  ulonglong *puVar6;
  uint64_t *puVar7;
  longlong lVar8;
  uint64_t *puVar9;
  
  if (*(char *)(param_1 + 0x1024) != '\0') {
    if (*(int *)(param_1 + 0x1020) + 1 < 0x81) {
      uVar4 = param_2[1];
      lVar8 = (longlong)*(int *)(param_1 + 0x1020) * 0x20;
      puVar9 = (uint64_t *)(lVar8 + param_1);
      *puVar9 = *param_2;
      puVar9[1] = uVar4;
      uVar4 = param_2[3];
      puVar9 = (uint64_t *)(lVar8 + 0x10 + param_1);
      *puVar9 = param_2[2];
      puVar9[1] = uVar4;
      *(int *)(param_1 + 0x1020) = *(int *)(param_1 + 0x1020) + 1;
      return;
    }
    FUN_180396b10(param_1);
  }
  puVar6 = (ulonglong *)(param_1 + 0x1000);
  puVar9 = *(uint64_t **)(param_1 + 0x1008);
  if (puVar9 < *(uint64_t **)(param_1 + 0x1010)) {
    *(uint64_t **)(param_1 + 0x1008) = puVar9 + 4;
    uVar4 = param_2[1];
    *puVar9 = *param_2;
    puVar9[1] = uVar4;
    uVar4 = param_2[3];
    puVar9[2] = param_2[2];
    puVar9[3] = uVar4;
    return;
  }
  puVar7 = (uint64_t *)*puVar6;
  lVar8 = (longlong)puVar9 - (longlong)puVar7 >> 5;
  if (lVar8 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = lVar8 * 2;
    if (lVar8 == 0) {
      puVar5 = (int32_t *)0x0;
      goto LAB_180396e63;
    }
  }
  puVar5 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,lVar8 << 5,*(int8_t *)(param_1 + 0x1018));
  puVar7 = (uint64_t *)*puVar6;
  puVar9 = *(uint64_t **)(param_1 + 0x1008);
LAB_180396e63:
  if (puVar7 != puVar9) {
                    // WARNING: Subroutine does not return
    memmove(puVar5,puVar7,(longlong)puVar9 - (longlong)puVar7);
  }
  uVar1 = *(int32_t *)((longlong)param_2 + 4);
  uVar2 = *(int32_t *)(param_2 + 1);
  uVar3 = *(int32_t *)((longlong)param_2 + 0xc);
  *puVar5 = *(int32_t *)param_2;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  uVar1 = *(int32_t *)((longlong)param_2 + 0x14);
  uVar2 = *(int32_t *)(param_2 + 3);
  uVar3 = *(int32_t *)((longlong)param_2 + 0x1c);
  puVar5[4] = *(int32_t *)(param_2 + 2);
  puVar5[5] = uVar1;
  puVar5[6] = uVar2;
  puVar5[7] = uVar3;
  if (*puVar6 == 0) {
    *puVar6 = (ulonglong)puVar5;
    *(int32_t **)(param_1 + 0x1010) = puVar5 + lVar8 * 8;
    *(int32_t **)(param_1 + 0x1008) = puVar5 + 8;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180396750(longlong param_1)
void FUN_180396750(longlong param_1)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_10 = 0;
  if (*(char *)(param_1 + 0x1024) == '\0') {
    FUN_180396dd0(param_1 + 0x1000,&uStack_28);
    return;
  }
  if (0x80 < *(int *)(param_1 + 0x1020) + 1) {
    FUN_180396b10(param_1);
    FUN_180396dd0(param_1 + 0x1000,&uStack_28);
    return;
  }
  lVar2 = (longlong)*(int *)(param_1 + 0x1020) * 0x20;
  puVar1 = (uint64_t *)(lVar2 + param_1);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (uint64_t *)(lVar2 + 0x10 + param_1);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(int *)(param_1 + 0x1020) = *(int *)(param_1 + 0x1020) + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803967f0(longlong param_1,int param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803967f0(longlong param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint64_t *puVar7;
  ulonglong uVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t unaff_RDI;
  ulonglong uVar11;
  
  uVar11 = (ulonglong)param_2;
  if (*(char *)(param_1 + 0x1024) == '\0') {
    lVar6 = *(longlong *)(param_1 + 0x1000);
LAB_180396892:
    uVar8 = *(longlong *)(param_1 + 0x1008) - lVar6 >> 5;
    if (uVar11 <= uVar8) {
      *(ulonglong *)(param_1 + 0x1008) = uVar11 * 0x20 + lVar6;
      return;
    }
    uVar11 = uVar11 - uVar8;
    plVar1 = (longlong *)(param_1 + 0x1000);
    puVar10 = *(uint64_t **)(param_1 + 0x1008);
    if (uVar11 <= (ulonglong)(*(longlong *)(param_1 + 0x1010) - (longlong)puVar10 >> 5)) {
      uVar8 = uVar11;
      if (uVar11 != 0) {
        do {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          puVar10 = puVar10 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
        puVar10 = *(uint64_t **)(param_1 + 0x1008);
      }
      *(uint64_t **)(param_1 + 0x1008) = puVar10 + uVar11 * 4;
      return;
    }
    puVar9 = (uint64_t *)*plVar1;
    lVar6 = (longlong)puVar10 - (longlong)puVar9 >> 5;
    uVar8 = lVar6 * 2;
    if (lVar6 == 0) {
      uVar8 = 1;
    }
    if (uVar8 < lVar6 + uVar11) {
      uVar8 = lVar6 + uVar11;
    }
    if (uVar8 == 0) {
      puVar7 = (uint64_t *)0x0;
    }
    else {
      puVar7 = (uint64_t *)
               FUN_18062b420(_DAT_180c8ed18,uVar8 << 5,*(int8_t *)(param_1 + 0x1018),param_4,
                             unaff_RDI);
      puVar9 = (uint64_t *)*plVar1;
      puVar10 = *(uint64_t **)(param_1 + 0x1008);
    }
    uVar3 = uVar11;
    puVar4 = puVar7;
    if (puVar9 != puVar10) {
                    // WARNING: Subroutine does not return
      memmove(puVar7,puVar9,(longlong)puVar10 - (longlong)puVar9);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4 = puVar4 + 4;
    }
    if (*plVar1 == 0) {
      *plVar1 = (longlong)puVar7;
      *(uint64_t **)(param_1 + 0x1010) = puVar7 + uVar8 * 4;
      *(uint64_t **)(param_1 + 0x1008) = puVar7 + uVar11 * 4;
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  iVar2 = *(int *)(param_1 + 0x1020);
  if (iVar2 < param_2) {
    if (0x80 < param_2) {
      FUN_180396b10(param_1);
      lVar6 = *(longlong *)(param_1 + 0x1000);
      goto LAB_180396892;
    }
    if (iVar2 < param_2) {
      uVar11 = (ulonglong)(uint)(param_2 - iVar2);
      do {
        lVar5 = (longlong)*(int *)(param_1 + 0x1020) * 0x20;
        lVar6 = param_1;
        if (*(char *)(param_1 + 0x1024) == '\0') {
          lVar6 = *(longlong *)(param_1 + 0x1000);
        }
        *(uint64_t *)(lVar5 + lVar6) = 0;
        *(uint64_t *)(lVar5 + 8 + lVar6) = 0;
        *(uint64_t *)(lVar5 + 0x10 + lVar6) = 0;
        *(uint64_t *)(lVar5 + 0x18 + lVar6) = 0;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  *(int *)(param_1 + 0x1020) = param_2;
  return;
}





// 函数: void FUN_1803968e0(longlong param_1)
void FUN_1803968e0(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(char *)(param_1 + 0x1024) == '\0') {
    *(uint64_t *)(param_1 + 0x1008) = *(uint64_t *)(param_1 + 0x1000);
    *(int8_t *)(param_1 + 0x1024) = 1;
  }
  *(int32_t *)(param_1 + 0x1020) = 0;
  puVar2 = *(uint64_t **)(param_1 + 0x1000);
  if (puVar2 != (uint64_t *)0x0) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_180396940(ulonglong *param_1)
void FUN_180396940(ulonglong *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = (uint64_t *)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803969b0(longlong param_1)
void FUN_1803969b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  FUN_1800e8140(param_1 + 0x40,0x10);
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar6 = lVar2;
  if (*(char *)(param_1 + 100) != '\0') {
    lVar6 = param_1;
  }
  lVar6 = lVar6 + 0x40;
  lVar5 = lVar2;
  if (*(char *)(param_1 + 100) != '\0') {
    lVar5 = param_1;
  }
  lVar7 = lVar6 - lVar5;
  uVar4 = lVar7 >> 3;
  if ((ulonglong)(*(longlong *)(param_1 + 0x50) - lVar2 >> 3) < uVar4) {
    if (uVar4 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_18062b420(_DAT_180c8ed18,uVar4 * 8,*(int8_t *)(param_1 + 0x58));
    }
    if (lVar5 != lVar6) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar5,lVar7);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar6 = lVar2 + uVar4 * 8;
    *(longlong *)(param_1 + 0x40) = lVar2;
    *(longlong *)(param_1 + 0x50) = lVar6;
    *(longlong *)(param_1 + 0x48) = lVar6;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x48);
    uVar3 = lVar1 - lVar2 >> 3;
    if (uVar3 < uVar4) {
      lVar7 = lVar5 + uVar3 * 8;
      if (lVar5 != lVar7) {
                    // WARNING: Subroutine does not return
        memmove(lVar2,lVar5);
      }
      if (lVar7 != lVar6) {
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar7,lVar6 - lVar7);
      }
      *(longlong *)(param_1 + 0x48) = lVar1;
    }
    else {
      if (lVar5 != lVar6) {
                    // WARNING: Subroutine does not return
        memmove(lVar2,lVar5,lVar7);
      }
      *(longlong *)(param_1 + 0x48) = lVar2;
    }
  }
  *(int8_t *)(param_1 + 100) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180396a15(void)
void FUN_180396a15(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R15;
  
  if (unaff_RBP == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(_DAT_180c8ed18,unaff_RBP * 8,*(int8_t *)(unaff_R15 + 0x58));
  }
  if (unaff_RSI != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(lVar2);
  }
  if (*(longlong *)(unaff_R15 + 0x40) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar1 = lVar2 + unaff_RBP * 8;
  *(longlong *)(unaff_R15 + 0x40) = lVar2;
  *(longlong *)(unaff_R15 + 0x50) = lVar1;
  *(longlong *)(unaff_R15 + 0x48) = lVar1;
  *(int8_t *)(unaff_R15 + 100) = 0;
  return;
}





// 函数: void FUN_180396a78(longlong param_1)
void FUN_180396a78(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R15;
  
  lVar2 = *(longlong *)(unaff_R15 + 0x48);
  uVar3 = lVar2 - param_1 >> 3;
  if (uVar3 < unaff_RBP) {
    lVar1 = unaff_RSI + uVar3 * 8;
    if (unaff_RSI != lVar1) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    if (lVar1 != unaff_RDI) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar1,unaff_RDI - lVar1);
    }
    *(longlong *)(unaff_R15 + 0x48) = lVar2;
  }
  else {
    if (unaff_RSI != unaff_RDI) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    *(longlong *)(unaff_R15 + 0x48) = param_1;
  }
  *(int8_t *)(unaff_R15 + 100) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180396b10(longlong param_1)
void FUN_180396b10(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)(param_1 + 0x1000);
  FUN_180396d20(plVar1,0x100);
  lVar3 = *plVar1;
  lVar5 = lVar3;
  if (*(char *)(param_1 + 0x1024) != '\0') {
    lVar5 = param_1;
  }
  lVar5 = lVar5 + 0x1000;
  lVar8 = lVar3;
  if (*(char *)(param_1 + 0x1024) != '\0') {
    lVar8 = param_1;
  }
  lVar7 = lVar5 - lVar8;
  uVar4 = lVar7 >> 5;
  if ((ulonglong)(*(longlong *)(param_1 + 0x1010) - lVar3 >> 5) < uVar4) {
    if (uVar4 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_18062b420(_DAT_180c8ed18,uVar4 << 5,*(int8_t *)(param_1 + 0x1018));
    }
    if (lVar8 != lVar5) {
                    // WARNING: Subroutine does not return
      memmove(lVar3,lVar8,lVar7);
    }
    if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *plVar1 = lVar3;
    lVar3 = uVar4 * 0x20 + lVar3;
    *(longlong *)(param_1 + 0x1010) = lVar3;
    *(longlong *)(param_1 + 0x1008) = lVar3;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x1008);
    uVar6 = lVar2 - lVar3 >> 5;
    if (uVar6 < uVar4) {
      lVar7 = lVar8 + uVar6 * 0x20;
      if (lVar8 != lVar7) {
                    // WARNING: Subroutine does not return
        memmove(lVar3,lVar8);
      }
      if (lVar7 != lVar5) {
                    // WARNING: Subroutine does not return
        memmove(lVar2,lVar7,lVar5 - lVar7);
      }
      *(longlong *)(param_1 + 0x1008) = lVar2;
    }
    else {
      if (lVar8 != lVar5) {
                    // WARNING: Subroutine does not return
        memmove(lVar3,lVar8,lVar7);
      }
      *(longlong *)(param_1 + 0x1008) = lVar3;
    }
  }
  *(int8_t *)(param_1 + 0x1024) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



