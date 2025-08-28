#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part207.c - 9 个函数

// 函数: void FUN_18078a276(void)
void FUN_18078a276(void)

{
  longlong *in_RAX;
  longlong unaff_RBX;
  ulonglong uVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = 0;
  uVar4 = uVar1;
  uVar5 = uVar1;
  if (0 < (int)in_RAX[4]) {
    do {
      uVar3 = (int)uVar4 + 1;
      plVar2 = (longlong *)(in_RAX[5] + uVar5);
      *(longlong *)plVar2[1] = *plVar2;
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (longlong)plVar2;
      *plVar2 = (longlong)plVar2;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 0x18;
    } while ((int)uVar3 < (int)in_RAX[4]);
  }
  if (in_RAX == *(longlong **)(unaff_RBX + 8)) {
    plVar2 = (longlong *)*in_RAX;
    if ((longlong *)*in_RAX == *(longlong **)(unaff_RBX + 8)) {
      plVar2 = (longlong *)uVar1;
    }
    *(longlong **)(unaff_RBX + 8) = plVar2;
  }
  *(longlong *)in_RAX[1] = *in_RAX;
  *(longlong *)(*in_RAX + 8) = in_RAX[1];
  in_RAX[1] = (longlong)in_RAX;
  *in_RAX = (longlong)in_RAX;
  *(int *)(unaff_RBX + 0x10) = *(int *)(unaff_RBX + 0x10) - (int)in_RAX[4];
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),in_RAX[3],&UNK_18095adb0,0x70,1);
}



uint64_t FUN_18078a334(void)

{
  return 0;
}



int FUN_18078a340(longlong *param_1,ulonglong param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  
  lVar2 = *param_1;
  iVar5 = (int)param_1[3];
  iVar9 = 0x16;
  if (-1 < iVar5) {
    iVar9 = iVar5;
  }
  bVar4 = false;
  if (param_2 == 0) {
    iVar5 = 0x1f;
  }
  else {
    cVar6 = '\0';
    if (-1 < iVar5) {
      cVar6 = param_3;
    }
    if ((cVar6 != '\0') && (lVar2 != 0)) {
      func_0x000180743c20(lVar2,iVar9);
      bVar4 = true;
    }
    uVar8 = *(int *)((longlong)param_1 + 0x1c) + 0xa7U & -*(int *)((longlong)param_1 + 0x1c);
    plVar7 = (longlong *)param_1[1];
    do {
      uVar3 = *(ulonglong *)plVar7[6];
      if ((uVar3 <= param_2) && (param_2 < (int)plVar7[4] * uVar8 + uVar3)) {
        iVar5 = (int)((param_2 - uVar3) / (ulonglong)uVar8);
        if ((iVar5 != -1) &&
           (plVar1 = (longlong *)(plVar7[5] + (longlong)iVar5 * 0x18),
           *(longlong *)(plVar7[5] + 0x10 + (longlong)iVar5 * 0x18) != 0)) {
          iVar5 = FUN_180763220(param_2,(param_2 - uVar3) % (ulonglong)uVar8);
          if (iVar5 == 0) {
            *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
            *(int *)((longlong)plVar7 + 0x24) = *(int *)((longlong)plVar7 + 0x24) + -1;
            *(longlong *)plVar1[1] = *plVar1;
            *(longlong *)(*plVar1 + 8) = plVar1[1];
            plVar1[1] = (longlong)plVar1;
            *plVar1 = (longlong)plVar1;
            plVar1[2] = 0;
            plVar1[1] = param_1[7];
            *plVar1 = (longlong)(param_1 + 6);
            param_1[7] = (longlong)plVar1;
            *(longlong **)plVar1[1] = plVar1;
            iVar5 = 0;
            if ((*(int *)((longlong)plVar7 + 0x24) == 0) && ((char)param_1[5] != '\0')) {
              FUN_18078a540(param_1,plVar7);
              iVar5 = 0;
            }
          }
          goto LAB_18078a3ed;
        }
        break;
      }
      plVar7 = (longlong *)*plVar7;
    } while (plVar7 != (longlong *)param_1[1]);
    iVar5 = 0x1e;
  }
LAB_18078a3ed:
  if ((bVar4) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar2,iVar9);
  }
  return iVar5;
}



int FUN_18078a353(longlong param_1,ulonglong param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  uint uVar7;
  longlong unaff_R15;
  
  bVar3 = false;
  if (param_2 == 0) {
    iVar4 = 0x1f;
  }
  else {
    cVar5 = '\0';
    if (-1 < *(int *)(param_1 + 0x18)) {
      cVar5 = param_3;
    }
    if ((cVar5 != '\0') && (unaff_R15 != 0)) {
      func_0x000180743c20();
      bVar3 = true;
    }
    uVar7 = *(int *)(param_1 + 0x1c) + 0xa7U & -*(int *)(param_1 + 0x1c);
    plVar6 = *(longlong **)(param_1 + 8);
    do {
      uVar2 = *(ulonglong *)plVar6[6];
      if ((uVar2 <= param_2) && (param_2 < (int)plVar6[4] * uVar7 + uVar2)) {
        iVar4 = (int)((param_2 - uVar2) / (ulonglong)uVar7);
        if ((iVar4 != -1) &&
           (plVar1 = (longlong *)(plVar6[5] + (longlong)iVar4 * 0x18),
           *(longlong *)(plVar6[5] + 0x10 + (longlong)iVar4 * 0x18) != 0)) {
          iVar4 = FUN_180763220(param_2,(param_2 - uVar2) % (ulonglong)uVar7);
          if (iVar4 == 0) {
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
            *(int *)((longlong)plVar6 + 0x24) = *(int *)((longlong)plVar6 + 0x24) + -1;
            *(longlong *)plVar1[1] = *plVar1;
            *(longlong *)(*plVar1 + 8) = plVar1[1];
            plVar1[1] = (longlong)plVar1;
            *plVar1 = (longlong)plVar1;
            plVar1[2] = 0;
            plVar1[1] = *(longlong *)(param_1 + 0x38);
            *plVar1 = param_1 + 0x30;
            *(longlong **)(param_1 + 0x38) = plVar1;
            *(longlong **)plVar1[1] = plVar1;
            iVar4 = 0;
            if ((*(int *)((longlong)plVar6 + 0x24) == 0) && (*(char *)(param_1 + 0x28) != '\0')) {
              FUN_18078a540(param_1,plVar6);
              iVar4 = 0;
            }
          }
          goto LAB_18078a3ed;
        }
        break;
      }
      plVar6 = (longlong *)*plVar6;
    } while (plVar6 != *(longlong **)(param_1 + 8));
    iVar4 = 0x1e;
  }
LAB_18078a3ed:
  if ((bVar3) && (unaff_R15 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return iVar4;
}



int32_t FUN_18078a40b(void)

{
  int32_t unaff_EBP;
  longlong unaff_R15;
  
  if (unaff_R15 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return unaff_EBP;
}



ulonglong FUN_18078a427(uint64_t param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  char unaff_R13B;
  longlong unaff_R14;
  longlong unaff_R15;
  
  iVar2 = (int)((ulonglong)(unaff_RDI - param_2) / (ulonglong)param_3);
  if ((iVar2 == -1) ||
     (plVar1 = (longlong *)(*(longlong *)(unaff_RBX + 0x28) + (longlong)iVar2 * 0x18),
     *(ulonglong *)(*(longlong *)(unaff_RBX + 0x28) + 0x10 + (longlong)iVar2 * 0x18) == unaff_RBP))
  {
    uVar3 = 0x1e;
  }
  else {
    uVar3 = FUN_180763220();
    if (uVar3 == 0) {
      *(int *)(unaff_R14 + 0x14) = *(int *)(unaff_R14 + 0x14) + -1;
      *(int *)(unaff_RBX + 0x24) = *(int *)(unaff_RBX + 0x24) + -1;
      *(longlong *)plVar1[1] = *plVar1;
      *(longlong *)(*plVar1 + 8) = plVar1[1];
      plVar1[1] = (longlong)plVar1;
      *plVar1 = (longlong)plVar1;
      plVar1[2] = unaff_RBP;
      plVar1[1] = *(longlong *)(unaff_R14 + 0x38);
      *plVar1 = unaff_R14 + 0x30;
      *(longlong **)(unaff_R14 + 0x38) = plVar1;
      *(longlong **)plVar1[1] = plVar1;
      if ((*(int *)(unaff_RBX + 0x24) == (int)unaff_RBP) &&
         (*(char *)(unaff_R14 + 0x28) != (char)unaff_RBP)) {
        FUN_18078a540();
      }
      goto LAB_18078a3ed;
    }
  }
  unaff_RBP = (ulonglong)uVar3;
LAB_18078a3ed:
  if ((unaff_R13B != '\0') && (unaff_R15 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return unaff_RBP & 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18078a540(longlong param_1,longlong *param_2)
void FUN_18078a540(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar2 = 0;
  uVar3 = uVar2;
  uVar5 = uVar2;
  if (0 < (int)param_2[4]) {
    do {
      uVar4 = (int)uVar5 + 1;
      plVar1 = (longlong *)(param_2[5] + uVar3);
      *(longlong *)plVar1[1] = *plVar1;
      *(longlong *)(*plVar1 + 8) = plVar1[1];
      plVar1[1] = (longlong)plVar1;
      *plVar1 = (longlong)plVar1;
      uVar3 = uVar3 + 0x18;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < (int)param_2[4]);
  }
  if (param_2 == *(longlong **)(param_1 + 8)) {
    plVar1 = (longlong *)*param_2;
    if ((longlong *)*param_2 == *(longlong **)(param_1 + 8)) {
      plVar1 = (longlong *)uVar2;
    }
    *(longlong **)(param_1 + 8) = plVar1;
  }
  *(longlong *)param_2[1] = *param_2;
  *(longlong *)(*param_2 + 8) = param_2[1];
  param_2[1] = (longlong)param_2;
  *param_2 = (longlong)param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - (int)param_2[4];
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2[3],&UNK_18095adb0,0x70,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18078a600(longlong param_1,char param_2)
void FUN_18078a600(longlong param_1,char param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int8_t auStack_88 [32];
  int32_t *puStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  char acStack_48 [4];
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  uVar6 = 0;
  acStack_48[0] = '\0';
  iStack_40 = 0;
  if (((&DAT_180c108d8)[*(uint *)(param_1 + 0x116b8)] == '\0') &&
     (((FUN_180768b70(&iStack_40), param_2 == '\0' ||
       (999 < (uint)(iStack_40 - *(int *)(param_1 + 0x116c0)))) ||
      (*(char *)(*(longlong *)(param_1 + 0x670) + 0x311) != '\0')))) {
    *(int *)(param_1 + 0x116c0) = iStack_40;
    iVar3 = FUN_180768280(acStack_48);
    if (iVar3 != 0) goto FUN_18078aa2c;
    if (acStack_48[0] != '\0') {
      _DAT_180c108d8 = 0x1010101;
      _DAT_180c108e0 = 0x1010101;
      _DAT_180c108dc = 0x1010101;
      _DAT_180c108e4 = 0x1010101;
    }
  }
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x116b8);
  if ((&DAT_180c108e0)[uVar4] != '\0') {
    if (7 < uVar4) goto LAB_18078aa58;
    (&DAT_180c108e0)[uVar4] = 0;
    *(int8_t *)(*(longlong *)(param_1 + 0x670) + 0x310) = 0;
    lVar1 = *(longlong *)(param_1 + 0x670);
    if (*(code **)(lVar1 + 0x3b8) != (code *)0x0) {
      uVar4 = lVar1 + 8;
      if (lVar1 == 0) {
        uVar4 = uVar6;
      }
      (**(code **)(lVar1 + 0x3b8))(uVar4);
    }
  }
  if (param_2 == '\0') goto FUN_18078aa2c;
  if ((&DAT_180c108d8)[*(uint *)(param_1 + 0x116b8)] != '\0') {
    if ((*(code **)(param_1 + 0x11838) == (code *)0x0) || ((*(byte *)(param_1 + 0x11840) & 1) == 0))
    {
      if (*(int *)(param_1 + 0x678) == 2) {
        iVar3 = FUN_18078ae40(param_1,*(int32_t *)(param_1 + 0x116c4),
                              *(int32_t *)(param_1 + 0x116c8));
        if (iVar3 == 0) goto LAB_18078a91f;
LAB_18078a792:
        iVar3 = FUN_18078ae40(param_1,2);
      }
      else {
        iVar3 = FUN_1807466e0(param_1,&uStack_44);
        if (iVar3 != 0) goto FUN_18078aa2c;
        if (uStack_44 == 0) goto LAB_18078a792;
        uVar4 = uVar6;
        uVar5 = 0;
        if (0 < (int)uStack_44) {
          do {
            uStack_50 = 0;
            puStack_68 = &uStack_38;
            uStack_58 = 0;
            uStack_60 = 0;
            uVar5 = (uint)uVar4;
            iVar3 = FUN_180746460(param_1,uVar4,0,0);
            if (iVar3 != 0) goto FUN_18078aa2c;
            if ((CONCAT44(uStack_34,uStack_38) == *(longlong *)(param_1 + 0x116cc)) &&
               (CONCAT44(uStack_2c,uStack_30) == *(longlong *)(param_1 + 0x116d4))) break;
            uVar5 = uVar5 + 1;
            uVar4 = (ulonglong)uVar5;
          } while ((int)uVar5 < (int)uStack_44);
        }
        iStack_3c = 0;
        if (uVar5 == uStack_44) {
          uVar5 = 0;
        }
        iVar3 = FUN_1807466e0(param_1,&iStack_3c);
        if (((iVar3 == 0) && (-2 < (int)uVar5)) && ((int)uVar5 < iStack_3c)) {
          uStack_50 = 0;
          puStack_68 = &uStack_38;
          uStack_58 = 0;
          uStack_60 = 0;
          uVar4 = uVar6;
          if (uVar5 != 0xffffffff) {
            uVar4 = (ulonglong)uVar5;
          }
          iVar3 = FUN_180746460(param_1,uVar4,0,0);
          if (iVar3 == 0) {
            if ((CONCAT44(uStack_34,uStack_38) == *(longlong *)(param_1 + 0x684)) &&
               (CONCAT44(uStack_2c,uStack_30) == *(longlong *)(param_1 + 0x68c))) {
              *(int *)(param_1 + 0x680) = (int)uVar4;
              goto LAB_18078a91f;
            }
            if (*(char *)(param_1 + 8) == '\0') {
LAB_18078a8f5:
              *(int *)(param_1 + 0x680) = (int)uVar4;
              *(int32_t *)(param_1 + 0x684) = uStack_38;
              *(int32_t *)(param_1 + 0x688) = uStack_34;
              *(int32_t *)(param_1 + 0x68c) = uStack_30;
              *(int32_t *)(param_1 + 0x690) = uStack_2c;
              goto LAB_18078a91f;
            }
            iVar3 = FUN_18078b6a0(param_1);
            if (iVar3 == 0) {
              if (*(longlong *)(param_1 + 0x107b8) != 0) {
                *(int32_t *)(*(longlong *)(param_1 + 0x107b8) + 0x30) = 1;
              }
              iVar3 = FUN_18078b010(param_1,uVar4);
              if ((iVar3 == 0) || (iVar3 = FUN_18078ae40(param_1,2), iVar3 == 0))
              goto LAB_18078a8f5;
            }
          }
        }
        iVar3 = FUN_18078ae40(param_1,2);
      }
      if (iVar3 != 0) goto FUN_18078aa2c;
    }
    else {
      puStack_68 = *(int32_t **)(param_1 + 0x11670);
      (**(code **)(param_1 + 0x11838))(param_1,1,0);
    }
LAB_18078a91f:
    if (7 < (ulonglong)*(uint *)(param_1 + 0x116b8)) {
LAB_18078aa58:
      FUN_1808fcdc8();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (&DAT_180c108d8)[*(uint *)(param_1 + 0x116b8)] = 0;
  }
  if ((*(char *)(*(longlong *)(param_1 + 0x670) + 0x311) != '\0') &&
     (iVar3 = FUN_18078b6a0(param_1), iVar3 == 0)) {
    lVar1 = *(longlong *)(param_1 + 0x670);
    uStack_44 = 0;
    if (*(code **)(lVar1 + 0x340) != (code *)0x0) {
      uVar4 = lVar1 + 8;
      if (lVar1 == 0) {
        uVar4 = uVar6;
      }
      iVar3 = (**(code **)(lVar1 + 0x340))(uVar4,&uStack_44);
      if (iVar3 != 0) goto FUN_18078aa2c;
    }
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x680);
    if ((*(uint *)(param_1 + 0x680) != 0) &&
       (*(int32_t *)(param_1 + 0x680) = 0, uVar4 = uVar6, 0 < (int)uStack_44)) {
      do {
        uStack_50 = 0;
        puStack_68 = &uStack_38;
        uStack_58 = 0;
        uStack_60 = 0;
        iVar3 = FUN_180746460(param_1,uVar4,0,0);
        if (iVar3 != 0) goto FUN_18078aa2c;
        if ((CONCAT44(uStack_34,uStack_38) == *(longlong *)(param_1 + 0x684)) &&
           (CONCAT44(uStack_2c,uStack_30) == *(longlong *)(param_1 + 0x68c))) {
          *(int *)(param_1 + 0x680) = (int)uVar4;
          goto LAB_18078aa03;
        }
        uVar5 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar5;
      } while ((int)uVar5 < (int)uStack_44);
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x680);
    }
LAB_18078aa03:
    iVar3 = FUN_18078b010(param_1,uVar4);
    if (iVar3 != 0) {
      FUN_18078ae40(param_1,2);
    }
  }
FUN_18078aa2c:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_88);
}





// 函数: void FUN_18078a6c7(int32_t param_1)
void FUN_18078a6c7(int32_t param_1)

{
  code *pcVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int iVar6;
  ulonglong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char unaff_DIL;
  int iVar7;
  char cVar8;
  int unaff_R14D;
  longlong unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t uVar9;
  int32_t extraout_XMM0_Da_07;
  int32_t extraout_XMM0_Da_08;
  int32_t extraout_XMM0_Da_09;
  int32_t extraout_XMM0_Da_10;
  
  cVar8 = (char)unaff_R14D;
  if (*(char *)(in_RAX + 0xc108e0 + unaff_R15) != cVar8) {
    if (7 < in_RAX) goto LAB_18078aa58;
    *(char *)(in_RAX + 0xc108e0 + unaff_R15) = cVar8;
    *(char *)(*(longlong *)(unaff_RBX + 0x670) + 0x310) = cVar8;
    pcVar1 = *(code **)(*(longlong *)(unaff_RBX + 0x670) + 0x3b8);
    if (pcVar1 != (code *)0x0) {
      param_1 = (*pcVar1)();
    }
  }
  if (unaff_DIL == '\0') goto LAB_18078aa24;
  if (*(char *)((ulonglong)*(uint *)(unaff_RBX + 0x116b8) + 0xc108d8 + unaff_R15) != cVar8) {
    if ((*(code **)(unaff_RBX + 0x11838) == (code *)0x0) ||
       ((*(byte *)(unaff_RBX + 0x11840) & 1) == 0)) {
      if (*(int *)(unaff_RBX + 0x678) == 2) {
        iVar6 = FUN_18078ae40(param_1,*(int32_t *)(unaff_RBX + 0x116c4),
                              *(int32_t *)(unaff_RBX + 0x116c8));
        uVar9 = extraout_XMM0_Da;
        if (iVar6 == 0) goto LAB_18078a91f;
LAB_18078a792:
        iVar6 = FUN_18078ae40(uVar9,2);
      }
      else {
        iVar6 = FUN_1807466e0(param_1,unaff_RBP + -0x2c);
        if (iVar6 != 0) goto LAB_18078aa24;
        iVar6 = *(int *)(unaff_RBP + -0x2c);
        uVar9 = extraout_XMM0_Da_00;
        if (iVar6 == 0) goto LAB_18078a792;
        iVar7 = unaff_R14D;
        if (0 < iVar6) {
          do {
            iVar6 = FUN_180746460(uVar9,iVar7,0,0,unaff_RBP + -0x20);
            if (iVar6 != 0) goto LAB_18078aa24;
            uVar9 = extraout_XMM0_Da_01;
            if ((*(longlong *)(unaff_RBP + -0x20) == *(longlong *)(unaff_RBX + 0x116cc)) &&
               (*(longlong *)(unaff_RBP + -0x18) == *(longlong *)(unaff_RBX + 0x116d4))) {
              iVar6 = *(int *)(unaff_RBP + -0x2c);
              break;
            }
            iVar6 = *(int *)(unaff_RBP + -0x2c);
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar6);
        }
        *(int *)(unaff_RBP + -0x24) = unaff_R14D;
        if (iVar7 == iVar6) {
          iVar7 = unaff_R14D;
        }
        iVar6 = FUN_1807466e0(uVar9,unaff_RBP + -0x24);
        uVar9 = extraout_XMM0_Da_02;
        if (((iVar6 == 0) && (-2 < iVar7)) && (iVar7 < *(int *)(unaff_RBP + -0x24))) {
          iVar6 = unaff_R14D;
          if (iVar7 != -1) {
            iVar6 = iVar7;
          }
          iVar7 = FUN_180746460(extraout_XMM0_Da_02,iVar6,0,0,unaff_RBP + -0x20);
          uVar9 = extraout_XMM0_Da_03;
          if (iVar7 == 0) {
            if ((*(longlong *)(unaff_RBP + -0x20) == *(longlong *)(unaff_RBX + 0x684)) &&
               (*(longlong *)(unaff_RBP + -0x18) == *(longlong *)(unaff_RBX + 0x68c))) {
              *(int *)(unaff_RBX + 0x680) = iVar6;
              goto LAB_18078a91f;
            }
            if (*(char *)(unaff_RBX + 8) == cVar8) {
LAB_18078a8f5:
              uVar9 = *(int32_t *)(unaff_RBP + -0x20);
              uVar3 = *(int32_t *)(unaff_RBP + -0x1c);
              uVar4 = *(int32_t *)(unaff_RBP + -0x18);
              uVar5 = *(int32_t *)(unaff_RBP + -0x14);
              *(int *)(unaff_RBX + 0x680) = iVar6;
              *(int32_t *)(unaff_RBX + 0x684) = uVar9;
              *(int32_t *)(unaff_RBX + 0x688) = uVar3;
              *(int32_t *)(unaff_RBX + 0x68c) = uVar4;
              *(int32_t *)(unaff_RBX + 0x690) = uVar5;
              goto LAB_18078a91f;
            }
            iVar7 = FUN_18078b6a0();
            uVar9 = extraout_XMM0_Da_04;
            if (iVar7 == 0) {
              if (*(longlong *)(unaff_RBX + 0x107b8) != 0) {
                *(int32_t *)(*(longlong *)(unaff_RBX + 0x107b8) + 0x30) = 1;
              }
              iVar7 = FUN_18078b010(extraout_XMM0_Da_04,iVar6);
              if ((iVar7 == 0) ||
                 (iVar7 = FUN_18078ae40(extraout_XMM0_Da_05,2), uVar9 = extraout_XMM0_Da_06,
                 iVar7 == 0)) goto LAB_18078a8f5;
            }
          }
        }
        iVar6 = FUN_18078ae40(uVar9,2);
      }
      if (iVar6 != 0) goto LAB_18078aa24;
    }
    else {
      (**(code **)(unaff_RBX + 0x11838))(param_1,1,0,0,*(uint64_t *)(unaff_RBX + 0x11670));
    }
LAB_18078a91f:
    if (7 < (ulonglong)*(uint *)(unaff_RBX + 0x116b8)) {
LAB_18078aa58:
      FUN_1808fcdc8();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(char *)((ulonglong)*(uint *)(unaff_RBX + 0x116b8) + 0xc108d8 + unaff_R15) = cVar8;
  }
  if ((*(char *)(*(longlong *)(unaff_RBX + 0x670) + 0x311) != cVar8) &&
     (iVar6 = FUN_18078b6a0(), iVar6 == 0)) {
    lVar2 = *(longlong *)(unaff_RBX + 0x670);
    *(int *)(unaff_RBP + -0x2c) = unaff_R14D;
    pcVar1 = *(code **)(lVar2 + 0x340);
    uVar9 = extraout_XMM0_Da_07;
    iVar6 = unaff_R14D;
    if (pcVar1 != (code *)0x0) {
      iVar6 = (*pcVar1)(extraout_XMM0_Da_07,unaff_RBP + -0x2c);
      if (iVar6 != 0) goto LAB_18078aa24;
      iVar6 = *(int *)(unaff_RBP + -0x2c);
      uVar9 = extraout_XMM0_Da_08;
    }
    iVar7 = *(int *)(unaff_RBX + 0x680);
    if ((*(int *)(unaff_RBX + 0x680) != 0) &&
       (*(int *)(unaff_RBX + 0x680) = unaff_R14D, iVar7 = unaff_R14D, 0 < iVar6)) {
      do {
        iVar6 = FUN_180746460(uVar9,unaff_R14D,0,0,unaff_RBP + -0x20);
        if (iVar6 != 0) goto LAB_18078aa24;
        uVar9 = extraout_XMM0_Da_09;
        if ((*(longlong *)(unaff_RBP + -0x20) == *(longlong *)(unaff_RBX + 0x684)) &&
           (*(longlong *)(unaff_RBP + -0x18) == *(longlong *)(unaff_RBX + 0x68c))) {
          *(int *)(unaff_RBX + 0x680) = unaff_R14D;
          iVar7 = unaff_R14D;
          goto LAB_18078aa03;
        }
        unaff_R14D = unaff_R14D + 1;
      } while (unaff_R14D < *(int *)(unaff_RBP + -0x2c));
      iVar7 = *(int *)(unaff_RBX + 0x680);
    }
LAB_18078aa03:
    iVar6 = FUN_18078b010(uVar9,iVar7);
    if (iVar6 != 0) {
      FUN_18078ae40(extraout_XMM0_Da_10,2);
    }
  }
LAB_18078aa24:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x10) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18078aa2c(void)
void FUN_18078aa2c(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x10) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18078aa4e(void)
void FUN_18078aa4e(void)

{
  int iVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int32_t unaff_EDI;
  
  *(int32_t *)(unaff_RBX + 0x680) = unaff_EDI;
  iVar1 = FUN_18078b010();
  if (iVar1 != 0) {
    FUN_18078ae40();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x10) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18078aa60(longlong param_1)

{
  uint *puVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t uVar5;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int8_t uStack_4c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t *puStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  uStack_58 = *(int32_t *)(param_1 + 0x6d8);
  lVar4 = 0;
  uStack_4c = 1;
  _uStack_54 = CONCAT44(5,*(int32_t *)(*(longlong *)(param_1 + 0x670) + 0x58));
  puVar2 = (uint64_t *)func_0x0001807e5100();
  uStack_48 = *puVar2;
  uStack_40 = puVar2[1];
  uStack_38 = puVar2[2];
  uStack_30 = puVar2[3];
  uStack_20 = puVar2[5];
  uStack_18 = puVar2[6];
  uStack_10 = puVar2[7];
  puStack_28 = &uStack_58;
  lVar3 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x2d8,&UNK_18095ae30,0x1c6,0);
  if (lVar3 != 0) {
    lVar4 = FUN_1807e4c10(lVar3);
  }
  *(longlong *)(param_1 + 0x10f80) = lVar4;
  if (lVar4 == 0) {
    return 0x26;
  }
  *(longlong *)(lVar4 + 0xa8) = param_1;
  *(longlong *)(*(longlong *)(param_1 + 0x10f80) + 0xd8) = param_1 + 0x11848;
  *(int32_t *)(*(longlong *)(param_1 + 0x10f80) + 0xe0) = *(int32_t *)(param_1 + 0x116b8);
  uVar5 = FUN_18075a230(*(uint64_t *)(param_1 + 0x10f80),&uStack_48);
  if ((int)uVar5 == 0) {
    *(int32_t *)(*(longlong *)(param_1 + 0x10f80) + 0x2b8) = 0xffffffff;
    *(code **)(*(longlong *)(param_1 + 0x10f80) + 0x298) = FUN_180787030;
    *(uint64_t *)(*(longlong *)(param_1 + 0x10f80) + 0x1e8) = *(uint64_t *)(param_1 + 0x670);
    *(float *)(*(longlong *)(param_1 + 0x10f80) + 0x230) =
         (float)*(int *)(*(longlong *)(param_1 + 0x670) + 100);
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x10f80) + 0x38))();
    if ((int)uVar5 == 0) {
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x10f80) + 0x28))
                        (*(longlong **)(param_1 + 0x10f80),0,0,0);
      if ((int)uVar5 == 0) {
        uVar5 = FUN_180762070(*(uint64_t *)(param_1 + 0x10f80),1);
        if ((int)uVar5 == 0) {
          LOCK();
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x10f80) + 100);
          *puVar1 = *puVar1 | 0x200;
          UNLOCK();
          uVar5 = 0;
        }
      }
    }
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18078ac40(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  uint64_t uVar3;
  int32_t auStackX_10 [4];
  int32_t auStackX_20 [2];
  
  if ((0 < param_2) && (-1 < param_3)) {
    auStackX_20[0] = 0;
    auStackX_10[0] = 0;
    func_0x000180746360(param_1,auStackX_10,auStackX_20);
    iVar1 = *(int *)(param_1 + 0x6d4);
    lVar2 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x30,&UNK_18095ae30,0x1ee,0);
    *(longlong *)(param_1 + 0x10f88) = lVar2;
    if (lVar2 == 0) {
      return 0x26;
    }
    uVar3 = FUN_1807869c0(lVar2,auStackX_10[0],param_2,iVar1 * 4,param_3);
    return uVar3;
  }
  return 0x1c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18078ac65(uint64_t param_1)

{
  int iVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong unaff_RSI;
  int32_t unaff_EDI;
  int32_t uStack0000000000000058;
  int32_t uStack0000000000000068;
  
  uStack0000000000000068 = 0;
  uStack0000000000000058 = 0;
  func_0x000180746360(param_1,&stack0x00000058);
  iVar1 = *(int *)(unaff_RSI + 0x6d4);
  lVar2 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x30,&UNK_18095ae30,0x1ee,0);
  *(longlong *)(unaff_RSI + 0x10f88) = lVar2;
  if (lVar2 == 0) {
    return 0x26;
  }
  uVar3 = FUN_1807869c0(lVar2,uStack0000000000000058,unaff_EDI,iVar1 * 4);
  return uVar3;
}





// 函数: void FUN_18078acd5(void)
void FUN_18078acd5(void)

{
  FUN_1807869c0();
  return;
}



uint64_t FUN_18078acfd(void)

{
  return 0x1c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18078ad10(longlong param_1,int param_2)
void FUN_18078ad10(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int8_t auStack_78 [32];
  int32_t *puStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int aiStack_38 [2];
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  ulonglong uStack_20;
  
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  aiStack_38[0] = 0;
  iVar1 = FUN_1807466e0(param_1,aiStack_38);
  if (((iVar1 == 0) && (-2 < param_2)) && (param_2 < aiStack_38[0])) {
    uStack_40 = 0;
    puStack_58 = &uStack_30;
    uStack_48 = 0;
    iVar1 = 0;
    if (param_2 != -1) {
      iVar1 = param_2;
    }
    uStack_50 = 0;
    iVar2 = FUN_180746460(param_1,iVar1,0,0);
    if (iVar2 == 0) {
      if ((CONCAT44(uStack_2c,uStack_30) == *(longlong *)(param_1 + 0x684)) &&
         (CONCAT44(uStack_24,uStack_28) == *(longlong *)(param_1 + 0x68c))) {
        *(int *)(param_1 + 0x680) = iVar1;
      }
      else {
        if (*(char *)(param_1 + 8) != '\0') {
          iVar2 = FUN_18078b6a0(param_1);
          if (iVar2 != 0) goto FUN_18078adbc;
          if (*(longlong *)(param_1 + 0x107b8) != 0) {
            *(int32_t *)(*(longlong *)(param_1 + 0x107b8) + 0x30) = 1;
          }
          iVar2 = FUN_18078b010(param_1,iVar1);
          if ((iVar2 != 0) && (iVar2 = FUN_18078ae40(param_1,2), iVar2 != 0)) goto FUN_18078adbc;
        }
        *(int *)(param_1 + 0x680) = iVar1;
        *(int32_t *)(param_1 + 0x684) = uStack_30;
        *(int32_t *)(param_1 + 0x688) = uStack_2c;
        *(int32_t *)(param_1 + 0x68c) = uStack_28;
        *(int32_t *)(param_1 + 0x690) = uStack_24;
      }
    }
  }
FUN_18078adbc:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_78);
}





// 函数: void FUN_18078ad5d(int32_t param_1)
void FUN_18078ad5d(int32_t param_1)

{
  int iVar1;
  longlong unaff_RBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar2;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  ulonglong in_stack_00000058;
  
  iVar2 = unaff_EBP;
  if (unaff_ESI != -1) {
    iVar2 = unaff_ESI;
  }
  iVar1 = FUN_180746460(param_1,iVar2,0,0);
  if (iVar1 == 0) {
    if ((_uStack0000000000000048 == *(longlong *)(unaff_RBX + 0x684)) &&
       (_uStack0000000000000050 == *(longlong *)(unaff_RBX + 0x68c))) {
      *(int *)(unaff_RBX + 0x680) = iVar2;
    }
    else {
      if (*(char *)(unaff_RBX + 8) != (char)unaff_EBP) {
        iVar1 = FUN_18078b6a0();
        if (iVar1 != 0) goto LAB_18078adb4;
        if (*(longlong *)(unaff_RBX + 0x107b8) != 0) {
          *(int32_t *)(*(longlong *)(unaff_RBX + 0x107b8) + 0x30) = 1;
        }
        iVar1 = FUN_18078b010(extraout_XMM0_Da,iVar2);
        if ((iVar1 != 0) && (iVar1 = FUN_18078ae40(extraout_XMM0_Da_00,2), iVar1 != 0))
        goto LAB_18078adb4;
      }
      *(int *)(unaff_RBX + 0x680) = iVar2;
      *(int32_t *)(unaff_RBX + 0x684) = uStack0000000000000048;
      *(int32_t *)(unaff_RBX + 0x688) = uStack000000000000004c;
      *(int32_t *)(unaff_RBX + 0x68c) = uStack0000000000000050;
      *(int32_t *)(unaff_RBX + 0x690) = uStack0000000000000054;
    }
  }
LAB_18078adb4:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000058 ^ (ulonglong)&stack0x00000000);
}





