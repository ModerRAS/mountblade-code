#include "TaleWorlds.Native.Split.h"

// 03_rendering_part306.c - 10 个函数

// 函数: void FUN_18042eb70(longlong param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
void FUN_18042eb70(longlong param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,longlong param_8)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  
  lVar4 = 0x180bfc050;
  if (param_5 != 0) {
    lVar4 = 0x180bfc068;
  }
  iVar8 = *(int *)(lVar4 + (longlong)param_7 * 4);
  if (_DAT_180c8ec8c != 0) {
    param_5 = (param_4 - param_5) + -1;
  }
  pcVar7 = (char *)(param_5 * param_2 + param_1);
  if (_DAT_180c8ec8c != 0) {
    param_2 = -param_2;
  }
  if (iVar8 == 0) {
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
    memcpy(param_8,pcVar7,(longlong)(param_3 * param_6));
    return;
  }
  iVar8 = iVar8 + -1;
  lVar4 = (longlong)param_6;
  lVar10 = (longlong)param_2;
  if (0 < param_6) {
    lVar9 = -lVar10;
    lVar5 = lVar4;
    pcVar11 = pcVar7;
    do {
      switch(iVar8) {
      case 0:
      case 4:
      case 5:
        cVar3 = *pcVar11;
        break;
      case 1:
        cVar3 = *pcVar11 - pcVar11[lVar9];
        break;
      case 2:
        cVar3 = *pcVar11 - ((byte)pcVar11[lVar9] >> 1);
        break;
      case 3:
        cVar3 = FUN_18042eb00(0,pcVar11[lVar9],0);
        pcVar11[param_8 - (longlong)pcVar7] = *pcVar11 - cVar3;
      default:
        goto LAB_18042ecb7;
      }
      pcVar11[param_8 - (longlong)pcVar7] = cVar3;
LAB_18042ecb7:
      pcVar11 = pcVar11 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  switch(iVar8) {
  case 0:
    if (lVar4 < param_3 * param_6) {
      pcVar11 = pcVar7 + lVar4;
      lVar10 = param_3 * param_6 - lVar4;
      do {
        pcVar11[param_8 - (longlong)pcVar7] = *pcVar11 - pcVar11[-lVar4];
        pcVar11 = pcVar11 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    break;
  case 1:
    if (lVar4 < param_3 * param_6) {
      pcVar11 = pcVar7 + lVar4;
      lVar4 = param_3 * param_6 - lVar4;
      do {
        pcVar11[param_8 - (longlong)pcVar7] = *pcVar11 - pcVar11[-lVar10];
        pcVar11 = pcVar11 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    break;
  case 2:
    if (lVar4 < param_3 * param_6) {
      pbVar6 = (byte *)(pcVar7 + (lVar4 - lVar10));
      lVar5 = param_3 * param_6 - lVar4;
      do {
        bVar2 = *pbVar6;
        pbVar1 = pbVar6 + (lVar10 - lVar4);
        pbVar6 = pbVar6 + 1;
        pbVar6[(lVar10 - (longlong)pcVar7) + param_8 + -1] =
             pbVar6[lVar10 + -1] - (char)((uint)*pbVar1 + (uint)bVar2 >> 1);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    break;
  case 3:
    if (lVar4 < param_3 * param_6) {
      pcVar11 = pcVar7 + (lVar4 - lVar10);
      lVar5 = param_3 * param_6 - lVar4;
      do {
        cVar3 = FUN_18042eb00(pcVar11[lVar10 - lVar4],*pcVar11,pcVar11[-lVar4]);
        pcVar11[param_8 + (lVar10 - (longlong)pcVar7)] = pcVar11[lVar10] - cVar3;
        pcVar11 = pcVar11 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    break;
  case 4:
    if (lVar4 < param_3 * param_6) {
      pcVar11 = pcVar7 + lVar4;
      lVar10 = param_3 * param_6 - lVar4;
      do {
        pcVar11[param_8 - (longlong)pcVar7] = *pcVar11 - ((byte)pcVar11[-lVar4] >> 1);
        pcVar11 = pcVar11 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    break;
  case 5:
    if (lVar4 < param_3 * param_6) {
      pcVar11 = pcVar7 + lVar4;
      lVar10 = param_3 * param_6 - lVar4;
      do {
        pcVar11[param_8 - (longlong)pcVar7] = *pcVar11 - pcVar11[-lVar4];
        pcVar11 = pcVar11 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  return;
}





// 函数: void FUN_18042ebf6(undefined8 param_1,undefined8 param_2,int param_3)
void FUN_18042ebf6(undefined8 param_1,undefined8 param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  byte *pbVar5;
  char *unaff_RBP;
  int unaff_ESI;
  int unaff_R12D;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  int in_stack_00000088;
  longlong in_stack_00000098;
  
  lVar6 = (longlong)in_stack_00000088;
  lVar8 = (longlong)param_3;
  if (0 < in_stack_00000088) {
    lVar7 = -lVar8;
    lVar4 = lVar6;
    pcVar9 = unaff_RBP;
    do {
      switch(unaff_R12D + -1) {
      case 0:
      case 4:
      case 5:
        cVar3 = *pcVar9;
        break;
      case 1:
        cVar3 = *pcVar9 - pcVar9[lVar7];
        break;
      case 2:
        cVar3 = *pcVar9 - ((byte)pcVar9[lVar7] >> 1);
        break;
      case 3:
        cVar3 = FUN_18042eb00(0,pcVar9[lVar7],0);
        pcVar9[in_stack_00000098 - (longlong)unaff_RBP] = *pcVar9 - cVar3;
      default:
        goto LAB_18042ecb7;
      }
      pcVar9[in_stack_00000098 - (longlong)unaff_RBP] = cVar3;
LAB_18042ecb7:
      pcVar9 = pcVar9 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  switch(unaff_R12D + -1) {
  case 0:
    if (lVar6 < unaff_ESI * in_stack_00000088) {
      pcVar9 = unaff_RBP + lVar6;
      lVar8 = unaff_ESI * in_stack_00000088 - lVar6;
      do {
        pcVar9[in_stack_00000098 - (longlong)unaff_RBP] = *pcVar9 - pcVar9[-lVar6];
        pcVar9 = pcVar9 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    break;
  case 1:
    if (lVar6 < unaff_ESI * in_stack_00000088) {
      pcVar9 = unaff_RBP + lVar6;
      lVar6 = unaff_ESI * in_stack_00000088 - lVar6;
      do {
        pcVar9[in_stack_00000098 - (longlong)unaff_RBP] = *pcVar9 - pcVar9[-lVar8];
        pcVar9 = pcVar9 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    break;
  case 2:
    if (lVar6 < unaff_ESI * in_stack_00000088) {
      pbVar5 = (byte *)(unaff_RBP + (lVar6 - lVar8));
      lVar4 = unaff_ESI * in_stack_00000088 - lVar6;
      do {
        bVar2 = *pbVar5;
        pbVar1 = pbVar5 + (lVar8 - lVar6);
        pbVar5 = pbVar5 + 1;
        pbVar5[(lVar8 - (longlong)unaff_RBP) + in_stack_00000098 + -1] =
             pbVar5[lVar8 + -1] - (char)((uint)*pbVar1 + (uint)bVar2 >> 1);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    break;
  case 3:
    if (lVar6 < unaff_ESI * in_stack_00000088) {
      pcVar9 = unaff_RBP + (lVar6 - lVar8);
      lVar4 = unaff_ESI * in_stack_00000088 - lVar6;
      do {
        cVar3 = FUN_18042eb00(pcVar9[lVar8 - lVar6],*pcVar9,pcVar9[-lVar6]);
        pcVar9[in_stack_00000098 + (lVar8 - (longlong)unaff_RBP)] = pcVar9[lVar8] - cVar3;
        pcVar9 = pcVar9 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    break;
  case 4:
    if (lVar6 < unaff_ESI * in_stack_00000088) {
      pcVar9 = unaff_RBP + lVar6;
      lVar8 = unaff_ESI * in_stack_00000088 - lVar6;
      do {
        pcVar9[in_stack_00000098 - (longlong)unaff_RBP] = *pcVar9 - ((byte)pcVar9[-lVar6] >> 1);
        pcVar9 = pcVar9 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    break;
  case 5:
    if (lVar6 < unaff_ESI * in_stack_00000088) {
      pcVar9 = unaff_RBP + lVar6;
      lVar8 = unaff_ESI * in_stack_00000088 - lVar6;
      do {
        pcVar9[in_stack_00000098 - (longlong)unaff_RBP] = *pcVar9 - pcVar9[-lVar6];
        pcVar9 = pcVar9 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return;
}





// 函数: void FUN_18042eeac(undefined8 param_1,longlong param_2)
void FUN_18042eeac(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined2 uVar3;
  char cVar4;
  uint uVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_BPL;
  char unaff_SIL;
  longlong unaff_RDI;
  longlong unaff_R13;
  
  uVar3 = (undefined2)param_2;
  cVar4 = in(uVar3);
  *(char *)(param_2 + -0x14) = *(char *)(param_2 + -0x14) + unaff_BPL;
  (&stack0x00000042)[unaff_R13 * 8] = (&stack0x00000042)[unaff_R13 * 8] + unaff_SIL;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x50ffbd14);
  *pcVar1 = *pcVar1 + cVar4;
  in(uVar3);
  *(char *)(unaff_RDI + -0x18ffbd10) = *(char *)(unaff_RDI + -0x18ffbd10) + unaff_BPL;
  in(uVar3);


// 函数: void FUN_18042eee0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5,
void FUN_18042eee0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                  int *param_6)

{
  longlong lVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 in_XMM1 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_d8 [32];
  undefined4 uStack_b8;
  int iStack_b0;
  uint uStack_a8;
  longlong lStack_a0;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  longlong lStack_70;
  int *piStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong uStack_40;
  
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  piStack_68 = param_6;
  uVar9 = param_5 * param_3;
  uStack_60 = 0xffffffff;
  uStack_58 = 0x200000004;
  iStack_94 = param_5;
  uStack_50 = 6;
  uStack_48 = 0x474e5089;
  uStack_44 = 0xa1a0a0d;
  iStack_8c = (uVar9 + 1) * param_4;
  iStack_98 = param_4;
  iStack_90 = param_3;
  uStack_80 = param_1;
  puVar3 = (undefined1 *)malloc((longlong)iStack_8c);
  puStack_88 = puVar3;
  if (puVar3 != (undefined1 *)0x0) {
    lVar15 = (longlong)(int)uVar9;
    lVar4 = malloc(lVar15);
    if (lVar4 == 0) {
      free(puVar3);
    }
    else {
      uVar5 = 0;
      if (0 < iStack_98) {
        lStack_70 = (longlong)(int)(uVar9 + 1);
        puStack_78 = puStack_88;
        iVar11 = 0x7fffffff;
        uVar6 = uVar5;
        uVar14 = uVar5;
        do {
          uVar10 = (uint)uVar6;
          iStack_b0 = iStack_94;
          uStack_b8 = 0;
          uStack_a8 = uVar10;
          lStack_a0 = lVar4;
          FUN_18042eb70(uStack_80,uVar9,iStack_90,iStack_98);
          uVar6 = uVar5;
          iVar20 = 0;
          if (((0 < (int)uVar9) && (iVar20 = 0, 7 < uVar9)) && (uVar6 = 0, 1 < _DAT_180bf00b0)) {
            uVar7 = uVar9 & 0x80000007;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
            }
            uVar6 = uVar5;
            auVar19 = ZEXT816(0);
            auVar21 = ZEXT816(0);
            do {
              auVar16 = pmovsxbd(in_XMM1,ZEXT416(*(uint *)(uVar6 + lVar4)));
              lVar1 = uVar6 + 4;
              auVar17 = pabsd(in_XMM2,auVar16);
              auVar18._0_4_ = auVar17._0_4_ + auVar19._0_4_;
              auVar18._4_4_ = auVar17._4_4_ + auVar19._4_4_;
              auVar18._8_4_ = auVar17._8_4_ + auVar19._8_4_;
              auVar18._12_4_ = auVar17._12_4_ + auVar19._12_4_;
              uVar6 = uVar6 + 8;
              in_XMM1 = pmovsxbd(auVar16,ZEXT416(*(uint *)(lVar1 + lVar4)));
              auVar19 = pabsd(auVar18,in_XMM1);
              in_XMM2._0_4_ = auVar19._0_4_ + auVar21._0_4_;
              in_XMM2._4_4_ = auVar19._4_4_ + auVar21._4_4_;
              in_XMM2._8_4_ = auVar19._8_4_ + auVar21._8_4_;
              in_XMM2._12_4_ = auVar19._12_4_ + auVar21._12_4_;
              auVar19 = auVar18;
              auVar21 = in_XMM2;
            } while ((longlong)uVar6 < (longlong)(int)(uVar9 - uVar7));
            iVar20 = auVar18._0_4_ + in_XMM2._0_4_ + auVar18._8_4_ + in_XMM2._8_4_ +
                     auVar18._4_4_ + in_XMM2._4_4_ + auVar18._12_4_ + in_XMM2._12_4_;
          }
          uVar7 = 0;
          if ((longlong)uVar6 < lVar15) {
            uVar2 = 0;
            if (1 < (longlong)(lVar15 - uVar6)) {
              uVar12 = uVar5;
              uVar13 = uVar5;
              do {
                uVar7 = (int)*(char *)(uVar6 + lVar4) >> 0x1f;
                uVar7 = (int)uVar12 + (((int)*(char *)(uVar6 + lVar4) ^ uVar7) - uVar7);
                uVar12 = (ulonglong)uVar7;
                uVar2 = (uint)*(char *)(uVar6 + 1 + lVar4);
                uVar8 = (int)uVar2 >> 0x1f;
                uVar6 = uVar6 + 2;
                uVar2 = (int)uVar13 + ((uVar2 ^ uVar8) - uVar8);
                uVar13 = (ulonglong)uVar2;
              } while ((longlong)uVar6 < lVar15 + -1);
            }
            if ((longlong)uVar6 < lVar15) {
              uVar8 = (int)*(char *)(uVar6 + lVar4) >> 0x1f;
              iVar20 = iVar20 + (((int)*(char *)(uVar6 + lVar4) ^ uVar8) - uVar8);
            }
            iVar20 = iVar20 + uVar7 + uVar2;
          }
          uVar7 = uVar10;
          if (iVar11 <= iVar20) {
            uVar7 = (uint)uVar14;
          }
          uVar10 = uVar10 + 1;
          uVar6 = (ulonglong)uVar10;
          uVar14 = (ulonglong)uVar7;
          if (iVar11 <= iVar20) {
            iVar20 = iVar11;
          }
          iVar11 = iVar20;
        } while ((int)uVar10 < 5);
        if (uVar10 != uVar7) {
          iStack_b0 = iStack_94;
          uStack_b8 = 0;
          uStack_a8 = uVar7;
          lStack_a0 = lVar4;
          FUN_18042eb70(uStack_80,uVar9,iStack_90,iStack_98);
          uVar6 = uVar14;
        }
        *puStack_78 = (char)uVar6;
                    // WARNING: Subroutine does not return
        memmove(puStack_78 + 1,lVar4,lVar15);
      }
      free(lVar4);
      lVar4 = malloc(0x20000);
      if (lVar4 != 0) {
        uVar5 = FUN_18042dad0(puStack_88,iStack_8c,&iStack_94,lVar4);
      }
      free(puStack_88);
      if (uVar5 != 0) {
        iVar11 = iStack_94 + 0x39;
        lVar4 = malloc((longlong)iVar11);
        if (lVar4 != 0) {
          *piStack_68 = iVar11;
                    // WARNING: Subroutine does not return
          memmove(lVar4,&uStack_48,8);
        }
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18042efc9(void)
void FUN_18042efc9(void)

{
  longlong lVar1;
  int in_EAX;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  uint unaff_ESI;
  int unaff_EDI;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong unaff_R14;
  int iVar9;
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  undefined1 auVar15 [16];
  int iStack0000000000000040;
  int iStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined1 *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 *in_stack_00000060;
  longlong in_stack_00000068;
  int *in_stack_00000070;
  ulonglong in_stack_00000098;
  
  if (0 < in_EAX) {
    in_stack_00000068 = (longlong)unaff_EDI;
    in_stack_00000060 = in_stack_00000050;
    iVar9 = 0x7fffffff;
    iVar8 = unaff_EBX;
    iVar5 = unaff_EBX;
    do {
      FUN_18042eb70(in_stack_00000058,unaff_ESI,uStack0000000000000048,in_EAX);
      lVar2 = CONCAT44(unaff_0000001c,unaff_EBX);
      iVar14 = unaff_EBX;
      if (((0 < (int)unaff_ESI) && (7 < unaff_ESI)) && (1 < _DAT_180bf00b0)) {
        uVar3 = unaff_ESI & 0x80000007;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
        }
        auVar13 = ZEXT816(0);
        auVar15 = ZEXT816(0);
        do {
          auVar10 = pmovsxbd(in_XMM1,ZEXT416(*(uint *)(lVar2 + unaff_RBP)));
          lVar1 = lVar2 + 4;
          auVar11 = pabsd(in_XMM2,auVar10);
          auVar12._0_4_ = auVar11._0_4_ + auVar13._0_4_;
          auVar12._4_4_ = auVar11._4_4_ + auVar13._4_4_;
          auVar12._8_4_ = auVar11._8_4_ + auVar13._8_4_;
          auVar12._12_4_ = auVar11._12_4_ + auVar13._12_4_;
          lVar2 = lVar2 + 8;
          in_XMM1 = pmovsxbd(auVar10,ZEXT416(*(uint *)(lVar1 + unaff_RBP)));
          auVar13 = pabsd(auVar12,in_XMM1);
          in_XMM2._0_4_ = auVar13._0_4_ + auVar15._0_4_;
          in_XMM2._4_4_ = auVar13._4_4_ + auVar15._4_4_;
          in_XMM2._8_4_ = auVar13._8_4_ + auVar15._8_4_;
          in_XMM2._12_4_ = auVar13._12_4_ + auVar15._12_4_;
          auVar13 = auVar12;
          auVar15 = in_XMM2;
        } while (lVar2 < (int)(unaff_ESI - uVar3));
        iVar14 = auVar12._0_4_ + in_XMM2._0_4_ + auVar12._8_4_ + in_XMM2._8_4_ +
                 auVar12._4_4_ + in_XMM2._4_4_ + auVar12._12_4_ + in_XMM2._12_4_;
      }
      if (lVar2 < unaff_R14) {
        iVar6 = unaff_EBX;
        iVar7 = unaff_EBX;
        if (1 < unaff_R14 - lVar2) {
          do {
            uVar3 = (int)*(char *)(lVar2 + unaff_RBP) >> 0x1f;
            iVar6 = iVar6 + (((int)*(char *)(lVar2 + unaff_RBP) ^ uVar3) - uVar3);
            uVar3 = (uint)*(char *)(lVar2 + 1 + unaff_RBP);
            uVar4 = (int)uVar3 >> 0x1f;
            lVar2 = lVar2 + 2;
            iVar7 = iVar7 + ((uVar3 ^ uVar4) - uVar4);
          } while (lVar2 < unaff_R14 + -1);
        }
        if (lVar2 < unaff_R14) {
          uVar3 = (int)*(char *)(lVar2 + unaff_RBP) >> 0x1f;
          iVar14 = iVar14 + (((int)*(char *)(lVar2 + unaff_RBP) ^ uVar3) - uVar3);
        }
        iVar14 = iVar14 + iVar6 + iVar7;
      }
      iVar6 = iVar5;
      if (iVar9 <= iVar14) {
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      iVar5 = iVar5 + 1;
      if (iVar9 <= iVar14) {
        iVar14 = iVar9;
      }
      iVar9 = iVar14;
      in_EAX = iStack0000000000000040;
    } while (iVar5 < 5);
    if (iVar5 != iVar8) {
      FUN_18042eb70(in_stack_00000058,unaff_ESI,uStack0000000000000048,iStack0000000000000040);
      iVar5 = iVar8;
    }
    *in_stack_00000060 = (char)iVar5;
                    // WARNING: Subroutine does not return
    memmove(in_stack_00000060 + 1);
  }
  free();
  lVar2 = malloc(0x20000);
  if (lVar2 == 0) {
    lVar2 = CONCAT44(unaff_0000001c,unaff_EBX);
  }
  else {
    lVar2 = FUN_18042dad0(in_stack_00000050,uStack000000000000004c,(longlong)&stack0x00000040 + 4,
                          lVar2);
  }
  free(in_stack_00000050);
  if (lVar2 != 0) {
    lVar2 = malloc((longlong)(iStack0000000000000044 + 0x39));
    if (lVar2 != 0) {
      *in_stack_00000070 = iStack0000000000000044 + 0x39;
                    // WARNING: Subroutine does not return
      memmove(lVar2,&stack0x00000090,8);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000098 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18042f1e0(void)
void FUN_18042f1e0(void)

{
  longlong lVar1;
  longlong unaff_RBX;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  int *in_stack_00000070;
  ulonglong in_stack_00000098;
  
  free(in_stack_00000050);
  if (unaff_RBX != 0) {
    lVar1 = malloc((longlong)(in_stack_00000040._4_4_ + 0x39));
    if (lVar1 != 0) {
      *in_stack_00000070 = in_stack_00000040._4_4_ + 0x39;
                    // WARNING: Subroutine does not return
      memmove(lVar1,&stack0x00000090,8);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000098 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18042f570(undefined8 *param_1,uint *param_2,uint *param_3,ushort *param_4)
void FUN_18042f570(undefined8 *param_1,uint *param_2,uint *param_3,ushort *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  char acStackX_10 [8];
  
  uVar4 = (uint)param_4[1] + *param_3;
  uVar1 = (uint)*param_4 << (0x18U - (char)uVar4 & 0x1f) | *param_2;
  if (7 < (int)uVar4) {
    uVar2 = (ulonglong)(uVar4 >> 3);
    do {
      cVar3 = (char)(uVar1 >> 0x10);
      acStackX_10[0] = cVar3;
      (*(code *)*param_1)(param_1[1],acStackX_10,1);
      if (cVar3 == -1) {
        acStackX_10[0] = '\0';
        (*(code *)*param_1)(param_1[1],acStackX_10,1);
      }
      uVar1 = uVar1 << 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *param_3 = uVar4 + (uVar4 >> 3) * -8;
    *param_2 = uVar1;
    return;
  }
  *param_2 = uVar1;
  *param_3 = uVar4;
  return;
}





// 函数: void FUN_18042f5a2(void)
void FUN_18042f5a2(void)

{
  int unaff_EBX;
  ulonglong uVar1;
  undefined8 *unaff_RSI;
  char cVar2;
  uint in_R10D;
  int *unaff_R14;
  int *unaff_R15;
  char cStack0000000000000058;
  
  uVar1 = (ulonglong)(in_R10D >> 3);
  do {
    cVar2 = (char)((uint)unaff_EBX >> 0x10);
    cStack0000000000000058 = cVar2;
    (*(code *)*unaff_RSI)(unaff_RSI[1],&stack0x00000058,1);
    if (cVar2 == -1) {
      cStack0000000000000058 = 0;
      (*(code *)*unaff_RSI)(unaff_RSI[1],&stack0x00000058,1);
    }
    unaff_EBX = unaff_EBX << 8;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  *unaff_R14 = in_R10D + (in_R10D >> 3) * -8;
  *unaff_R15 = unaff_EBX;
  return;
}





// 函数: void FUN_18042f620(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)
void FUN_18042f620(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 unaff_EBX;
  undefined4 in_R10D;
  
  *param_2 = unaff_EBX;
  *param_3 = in_R10D;
  return;
}





// 函数: void FUN_18042f630(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
void FUN_18042f630(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7,float *param_8)

{
  float fVar1;
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
  
  fVar3 = *param_6 + *param_3;
  fVar6 = *param_3 - *param_6;
  fVar8 = *param_7 + *param_2;
  fVar5 = *param_2 - *param_7;
  fVar11 = *param_8 + *param_1;
  fVar10 = *param_1 - *param_8;
  fVar1 = *param_5 + *param_4;
  fVar2 = fVar5 + fVar10;
  fVar9 = (*param_4 - *param_5) + fVar6;
  fVar4 = fVar1 + fVar11;
  fVar11 = fVar11 - fVar1;
  fVar1 = fVar3 + fVar8;
  fVar7 = (fVar6 + fVar5) * 0.70710677;
  fVar5 = (fVar9 - fVar2) * 0.38268343;
  fVar6 = fVar7 + fVar10;
  fVar3 = ((fVar8 - fVar3) + fVar11) * 0.70710677;
  fVar10 = fVar10 - fVar7;
  fVar7 = fVar9 * 0.5411961 + fVar5;
  fVar5 = fVar2 * 1.306563 + fVar5;
  *param_6 = fVar10 + fVar7;
  *param_4 = fVar10 - fVar7;
  *param_2 = fVar6 + fVar5;
  *param_8 = fVar6 - fVar5;
  *param_1 = fVar1 + fVar4;
  *param_3 = fVar3 + fVar11;
  *param_5 = fVar4 - fVar1;
  *param_7 = fVar11 - fVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



