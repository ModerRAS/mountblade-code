#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part234.c - 3 个函数

// 函数: void FUN_1802041f0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],longlong param_3,
void FUN_1802041f0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],longlong param_3,
                  undefined1 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 (*pauVar4) [16];
  int iVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 auStackX_8 [8];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  lVar3 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar3 = lVar3 >> 4;
    if (lVar3 < 0x21) {
LAB_1802042b6:
      if (((1 < lVar3) && (param_1 != param_2)) && (pauVar6 = param_1 + 1, pauVar6 != param_2)) {
        pauVar7 = param_1 + 2;
        do {
          auStack_38 = *pauVar6;
          iVar5 = auStack_38._8_4_;
          if (iVar5 == *(int *)(*param_1 + 8)) {
            bVar1 = auStack_38._12_4_ < *(int *)(*param_1 + 0xc);
          }
          else {
            bVar1 = *(int *)(*param_1 + 8) < iVar5;
          }
          pauVar4 = pauVar6;
          if (bVar1) {
            auStack_28 = auStack_38;
            func_0x00018018a000(auStackX_8);
                    // WARNING: Subroutine does not return
            memmove((longlong)pauVar7 - ((longlong)pauVar6 - (longlong)param_1),param_1);
          }
          while( true ) {
            if (iVar5 == *(int *)(pauVar4[-1] + 8)) {
              bVar1 = auStack_38._12_4_ < *(int *)(pauVar4[-1] + 0xc);
            }
            else {
              bVar1 = *(int *)(pauVar4[-1] + 8) < iVar5;
            }
            if (!bVar1) break;
            uVar2 = *(undefined8 *)(pauVar4[-1] + 8);
            *(undefined8 *)*pauVar4 = *(undefined8 *)pauVar4[-1];
            *(undefined8 *)(*pauVar4 + 8) = uVar2;
            pauVar4 = pauVar4 + -1;
          }
          *pauVar4 = auStack_38;
          pauVar6 = pauVar6 + 1;
          pauVar7 = pauVar7 + 1;
        } while (pauVar6 != param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar3) {
        FUN_180204700(param_1,param_2,param_4);
        if ((longlong)param_2 - (longlong)param_1 >> 4 < 2) {
          return;
        }
        param_2 = param_2 + -1;
        do {
          auStack_38 = *param_2;
          uVar2 = *(undefined8 *)(*param_1 + 8);
          *(undefined8 *)*param_2 = *(undefined8 *)*param_1;
          *(undefined8 *)(*param_2 + 8) = uVar2;
          FUN_180204870(param_1,0,(longlong)param_2 - (longlong)param_1 >> 4,auStack_38,param_4);
          param_2 = param_2 + -1;
        } while (1 < (longlong)param_2 + (0x10 - (longlong)param_1) >> 4);
        return;
      }
      goto LAB_1802042b6;
    }
    FUN_180204420(auStack_38,param_1,param_2,param_4);
    pauVar6 = (undefined1 (*) [16])auStack_38._0_8_;
    uVar2 = auStack_38._8_8_;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)(auStack_38._0_8_ - (longlong)param_1 & 0xfffffffffffffff0U) <
        (longlong)((longlong)param_2 - auStack_38._8_8_ & 0xfffffffffffffff0U)) {
      FUN_1802041f0(param_1,auStack_38._0_8_,param_3,param_4);
      pauVar6 = param_2;
      param_1 = (undefined1 (*) [16])uVar2;
    }
    else {
      FUN_1802041f0(auStack_38._8_8_,param_2,param_3,param_4);
    }
    lVar3 = (longlong)pauVar6 - (longlong)param_1;
    param_2 = pauVar6;
  } while( true );
}



undefined8 * FUN_180204420(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  
  puVar10 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 5) * 2;
  lVar13 = (longlong)param_3 + (-0x10 - (longlong)param_2) >> 4;
  if (lVar13 < 0x29) {
    func_0x000180204980(param_2,puVar10,param_3 + -2);
  }
  else {
    lVar14 = lVar13 + 1 >> 3;
    lVar13 = lVar14 * 0x10;
    func_0x000180204980(param_2,param_2 + lVar14 * 2,param_2 + lVar14 * 4);
    func_0x000180204980((longlong)puVar10 - lVar13,puVar10,lVar13 + (longlong)puVar10);
    lVar13 = (longlong)param_3 + (-0x10 - lVar13);
    func_0x000180204980(param_3 + lVar14 * -4 + -2,lVar13,param_3 + -2);
    func_0x000180204980(param_2 + lVar14 * 2,puVar10,lVar13);
  }
  puVar8 = puVar10 + 2;
  if (param_2 < puVar10) {
    while( true ) {
      iVar1 = *(int *)(puVar10 + -1);
      iVar2 = *(int *)(puVar10 + 1);
      if (iVar1 == iVar2) {
        bVar3 = *(int *)((longlong)puVar10 + -4) < *(int *)((longlong)puVar10 + 0xc);
      }
      else {
        bVar3 = iVar2 < iVar1;
      }
      if (bVar3) break;
      if (iVar2 == iVar1) {
        bVar3 = *(int *)((longlong)puVar10 + 0xc) < *(int *)((longlong)puVar10 + -4);
      }
      else {
        bVar3 = iVar1 < iVar2;
      }
      if ((bVar3) || (puVar10 = puVar10 + -2, puVar10 <= param_2)) break;
    }
  }
  puVar7 = puVar8;
  puVar11 = puVar10;
  if (puVar8 < param_3) {
    iVar1 = *(int *)(puVar10 + 1);
    while( true ) {
      iVar2 = *(int *)(puVar8 + 1);
      if (iVar2 == iVar1) {
        bVar3 = *(int *)((longlong)puVar8 + 0xc) < *(int *)((longlong)puVar10 + 0xc);
      }
      else {
        bVar3 = iVar1 < iVar2;
      }
      puVar7 = puVar8;
      if (bVar3) break;
      if (iVar1 == iVar2) {
        bVar3 = *(int *)((longlong)puVar10 + 0xc) < *(int *)((longlong)puVar8 + 0xc);
      }
      else {
        bVar3 = iVar2 < iVar1;
      }
      if ((bVar3) || (puVar8 = puVar8 + 2, puVar7 = puVar8, param_3 <= puVar8)) break;
    }
  }
joined_r0x000180204576:
  do {
    puVar15 = puVar10;
    if (param_3 <= puVar8) {
joined_r0x0001802045de:
      for (; param_2 < puVar10; puVar10 = puVar10 + -2) {
        puVar9 = puVar15 + -2;
        iVar1 = *(int *)(puVar15 + -1);
        iVar2 = *(int *)(puVar11 + 1);
        if (iVar1 == iVar2) {
          bVar3 = *(int *)((longlong)puVar15 + -4) < *(int *)((longlong)puVar11 + 0xc);
        }
        else {
          bVar3 = iVar2 < iVar1;
        }
        puVar12 = puVar11;
        if (!bVar3) {
          if (iVar2 == iVar1) {
            bVar3 = *(int *)((longlong)puVar11 + 0xc) < *(int *)((longlong)puVar15 + -4);
          }
          else {
            bVar3 = iVar1 < iVar2;
          }
          if (bVar3) break;
          puVar12 = puVar11 + -2;
          if (puVar12 != puVar9) {
            uVar4 = puVar15[-1];
            uVar5 = *puVar12;
            uVar6 = puVar11[-1];
            *puVar12 = *puVar9;
            puVar11[-1] = uVar4;
            *puVar9 = uVar5;
            puVar15[-1] = uVar6;
          }
        }
        puVar11 = puVar12;
        puVar15 = puVar9;
      }
      if (puVar10 == param_2) {
        if (puVar8 == param_3) {
          *param_1 = puVar11;
          param_1[1] = puVar7;
          return param_1;
        }
        if (puVar7 != puVar8) {
          uVar4 = puVar7[1];
          uVar5 = *puVar11;
          uVar6 = puVar11[1];
          *puVar11 = *puVar7;
          puVar11[1] = uVar4;
          *puVar7 = uVar5;
          puVar7[1] = uVar6;
        }
        uVar4 = puVar8[1];
        uVar5 = *puVar11;
        uVar6 = puVar11[1];
        *puVar11 = *puVar8;
        puVar11[1] = uVar4;
        *puVar8 = uVar5;
        puVar8[1] = uVar6;
        puVar8 = puVar8 + 2;
        puVar7 = puVar7 + 2;
        puVar11 = puVar11 + 2;
      }
      else {
        puVar15 = puVar10 + -2;
        if (puVar8 == param_3) {
          puVar9 = puVar11 + -2;
          if (puVar15 != puVar9) {
            uVar4 = puVar11[-1];
            uVar5 = *puVar15;
            uVar6 = puVar10[-1];
            *puVar15 = *puVar9;
            puVar10[-1] = uVar4;
            *puVar9 = uVar5;
            puVar11[-1] = uVar6;
          }
          uVar4 = puVar7[-1];
          uVar5 = *puVar9;
          uVar6 = puVar11[-1];
          *puVar9 = puVar7[-2];
          puVar11[-1] = uVar4;
          puVar7[-2] = uVar5;
          puVar7[-1] = uVar6;
          puVar7 = puVar7 + -2;
          puVar10 = puVar15;
          puVar11 = puVar9;
        }
        else {
          uVar4 = *puVar8;
          uVar5 = puVar8[1];
          uVar6 = puVar10[-1];
          *puVar8 = *puVar15;
          puVar8[1] = uVar6;
          puVar8 = puVar8 + 2;
          *puVar15 = uVar4;
          puVar10[-1] = uVar5;
          puVar10 = puVar15;
        }
      }
      goto joined_r0x000180204576;
    }
    iVar1 = *(int *)(puVar11 + 1);
    iVar2 = *(int *)(puVar8 + 1);
    if (iVar1 == iVar2) {
      bVar3 = *(int *)((longlong)puVar11 + 0xc) < *(int *)((longlong)puVar8 + 0xc);
    }
    else {
      bVar3 = iVar2 < iVar1;
    }
    puVar9 = puVar7;
    if (!bVar3) {
      if (iVar2 == iVar1) {
        bVar3 = *(int *)((longlong)puVar8 + 0xc) < *(int *)((longlong)puVar11 + 0xc);
      }
      else {
        bVar3 = iVar1 < iVar2;
      }
      if (bVar3) goto joined_r0x0001802045de;
      puVar9 = puVar7 + 2;
      if (puVar7 != puVar8) {
        uVar4 = puVar8[1];
        uVar5 = *puVar7;
        uVar6 = puVar7[1];
        *puVar7 = *puVar8;
        puVar7[1] = uVar4;
        *puVar8 = uVar5;
        puVar8[1] = uVar6;
      }
    }
    puVar8 = puVar8 + 2;
    puVar7 = puVar9;
  } while( true );
}



undefined8 * FUN_180204430(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong in_R10;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  
  puVar10 = param_2 + (in_R10 - (longlong)param_2 >> 5) * 2;
  lVar13 = (longlong)param_3 + (-0x10 - (longlong)param_2) >> 4;
  if (lVar13 < 0x29) {
    func_0x000180204980(param_2,puVar10,param_3 + -2);
  }
  else {
    lVar14 = lVar13 + 1 >> 3;
    lVar13 = lVar14 * 0x10;
    func_0x000180204980(param_2,param_2 + lVar14 * 2,param_2 + lVar14 * 4);
    func_0x000180204980((longlong)puVar10 - lVar13,puVar10,lVar13 + (longlong)puVar10);
    lVar13 = (longlong)param_3 + (-0x10 - lVar13);
    func_0x000180204980(param_3 + lVar14 * -4 + -2,lVar13,param_3 + -2);
    func_0x000180204980(param_2 + lVar14 * 2,puVar10,lVar13);
  }
  puVar8 = puVar10 + 2;
  if (param_2 < puVar10) {
    while( true ) {
      iVar1 = *(int *)(puVar10 + -1);
      iVar2 = *(int *)(puVar10 + 1);
      if (iVar1 == iVar2) {
        bVar3 = *(int *)((longlong)puVar10 + -4) < *(int *)((longlong)puVar10 + 0xc);
      }
      else {
        bVar3 = iVar2 < iVar1;
      }
      if (bVar3) break;
      if (iVar2 == iVar1) {
        bVar3 = *(int *)((longlong)puVar10 + 0xc) < *(int *)((longlong)puVar10 + -4);
      }
      else {
        bVar3 = iVar1 < iVar2;
      }
      if ((bVar3) || (puVar10 = puVar10 + -2, puVar10 <= param_2)) break;
    }
  }
  puVar7 = puVar8;
  puVar11 = puVar10;
  if (puVar8 < param_3) {
    iVar1 = *(int *)(puVar10 + 1);
    while( true ) {
      iVar2 = *(int *)(puVar8 + 1);
      if (iVar2 == iVar1) {
        bVar3 = *(int *)((longlong)puVar8 + 0xc) < *(int *)((longlong)puVar10 + 0xc);
      }
      else {
        bVar3 = iVar1 < iVar2;
      }
      puVar7 = puVar8;
      if (bVar3) break;
      if (iVar1 == iVar2) {
        bVar3 = *(int *)((longlong)puVar10 + 0xc) < *(int *)((longlong)puVar8 + 0xc);
      }
      else {
        bVar3 = iVar2 < iVar1;
      }
      if ((bVar3) || (puVar8 = puVar8 + 2, puVar7 = puVar8, param_3 <= puVar8)) break;
    }
  }
joined_r0x000180204576:
  do {
    puVar15 = puVar10;
    if (param_3 <= puVar8) {
joined_r0x0001802045de:
      for (; param_2 < puVar10; puVar10 = puVar10 + -2) {
        puVar9 = puVar15 + -2;
        iVar1 = *(int *)(puVar15 + -1);
        iVar2 = *(int *)(puVar11 + 1);
        if (iVar1 == iVar2) {
          bVar3 = *(int *)((longlong)puVar15 + -4) < *(int *)((longlong)puVar11 + 0xc);
        }
        else {
          bVar3 = iVar2 < iVar1;
        }
        puVar12 = puVar11;
        if (!bVar3) {
          if (iVar2 == iVar1) {
            bVar3 = *(int *)((longlong)puVar11 + 0xc) < *(int *)((longlong)puVar15 + -4);
          }
          else {
            bVar3 = iVar1 < iVar2;
          }
          if (bVar3) break;
          puVar12 = puVar11 + -2;
          if (puVar12 != puVar9) {
            uVar4 = puVar15[-1];
            uVar5 = *puVar12;
            uVar6 = puVar11[-1];
            *puVar12 = *puVar9;
            puVar11[-1] = uVar4;
            *puVar9 = uVar5;
            puVar15[-1] = uVar6;
          }
        }
        puVar11 = puVar12;
        puVar15 = puVar9;
      }
      if (puVar10 == param_2) {
        if (puVar8 == param_3) {
          *param_1 = puVar11;
          param_1[1] = puVar7;
          return param_1;
        }
        if (puVar7 != puVar8) {
          uVar4 = puVar7[1];
          uVar5 = *puVar11;
          uVar6 = puVar11[1];
          *puVar11 = *puVar7;
          puVar11[1] = uVar4;
          *puVar7 = uVar5;
          puVar7[1] = uVar6;
        }
        uVar4 = puVar8[1];
        uVar5 = *puVar11;
        uVar6 = puVar11[1];
        *puVar11 = *puVar8;
        puVar11[1] = uVar4;
        *puVar8 = uVar5;
        puVar8[1] = uVar6;
        puVar8 = puVar8 + 2;
        puVar7 = puVar7 + 2;
        puVar11 = puVar11 + 2;
      }
      else {
        puVar15 = puVar10 + -2;
        if (puVar8 == param_3) {
          puVar9 = puVar11 + -2;
          if (puVar15 != puVar9) {
            uVar4 = puVar11[-1];
            uVar5 = *puVar15;
            uVar6 = puVar10[-1];
            *puVar15 = *puVar9;
            puVar10[-1] = uVar4;
            *puVar9 = uVar5;
            puVar11[-1] = uVar6;
          }
          uVar4 = puVar7[-1];
          uVar5 = *puVar9;
          uVar6 = puVar11[-1];
          *puVar9 = puVar7[-2];
          puVar11[-1] = uVar4;
          puVar7[-2] = uVar5;
          puVar7[-1] = uVar6;
          puVar7 = puVar7 + -2;
          puVar10 = puVar15;
          puVar11 = puVar9;
        }
        else {
          uVar4 = *puVar8;
          uVar5 = puVar8[1];
          uVar6 = puVar10[-1];
          *puVar8 = *puVar15;
          puVar8[1] = uVar6;
          puVar8 = puVar8 + 2;
          *puVar15 = uVar4;
          puVar10[-1] = uVar5;
          puVar10 = puVar15;
        }
      }
      goto joined_r0x000180204576;
    }
    iVar1 = *(int *)(puVar11 + 1);
    iVar2 = *(int *)(puVar8 + 1);
    if (iVar1 == iVar2) {
      bVar3 = *(int *)((longlong)puVar11 + 0xc) < *(int *)((longlong)puVar8 + 0xc);
    }
    else {
      bVar3 = iVar2 < iVar1;
    }
    puVar9 = puVar7;
    if (!bVar3) {
      if (iVar2 == iVar1) {
        bVar3 = *(int *)((longlong)puVar8 + 0xc) < *(int *)((longlong)puVar11 + 0xc);
      }
      else {
        bVar3 = iVar1 < iVar2;
      }
      if (bVar3) goto joined_r0x0001802045de;
      puVar9 = puVar7 + 2;
      if (puVar7 != puVar8) {
        uVar4 = puVar8[1];
        uVar5 = *puVar7;
        uVar6 = puVar7[1];
        *puVar7 = *puVar8;
        puVar7[1] = uVar4;
        *puVar8 = uVar5;
        puVar8[1] = uVar6;
      }
    }
    puVar8 = puVar8 + 2;
    puVar7 = puVar9;
  } while( true );
}





// 函数: void FUN_180204463(undefined8 param_1,longlong param_2)
void FUN_180204463(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *unaff_RBP;
  undefined8 *unaff_RSI;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *in_R10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong in_R11;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *unaff_R15;
  
  lVar13 = in_R11 >> 3;
  lVar14 = lVar13 * 0x10;
  lVar1 = lVar14 + param_2;
  func_0x000180204980(param_1,lVar1,lVar13 * 0x20 + param_2);
  func_0x000180204980((longlong)in_R10 - lVar14,in_R10,lVar14 + (longlong)in_R10);
  lVar14 = (longlong)unaff_RSI + (-0x10 - lVar14);
  func_0x000180204980(unaff_RSI + lVar13 * -4 + -2,lVar14,unaff_RSI + -2);
  func_0x000180204980(lVar1,in_R10,lVar14);
  puVar9 = in_R10 + 2;
  if (unaff_RBP < in_R10) {
    while( true ) {
      iVar2 = *(int *)(in_R10 + -1);
      iVar3 = *(int *)(in_R10 + 1);
      if (iVar2 == iVar3) {
        bVar4 = *(int *)((longlong)in_R10 + -4) < *(int *)((longlong)in_R10 + 0xc);
      }
      else {
        bVar4 = iVar3 < iVar2;
      }
      if (bVar4) break;
      if (iVar3 == iVar2) {
        bVar4 = *(int *)((longlong)in_R10 + 0xc) < *(int *)((longlong)in_R10 + -4);
      }
      else {
        bVar4 = iVar2 < iVar3;
      }
      if ((bVar4) || (in_R10 = in_R10 + -2, in_R10 <= unaff_RBP)) break;
    }
  }
  puVar8 = puVar9;
  puVar11 = in_R10;
  if (puVar9 < unaff_RSI) {
    iVar2 = *(int *)(in_R10 + 1);
    while( true ) {
      iVar3 = *(int *)(puVar9 + 1);
      if (iVar3 == iVar2) {
        bVar4 = *(int *)((longlong)puVar9 + 0xc) < *(int *)((longlong)in_R10 + 0xc);
      }
      else {
        bVar4 = iVar2 < iVar3;
      }
      puVar8 = puVar9;
      if (bVar4) break;
      if (iVar2 == iVar3) {
        bVar4 = *(int *)((longlong)in_R10 + 0xc) < *(int *)((longlong)puVar9 + 0xc);
      }
      else {
        bVar4 = iVar3 < iVar2;
      }
      if ((bVar4) || (puVar9 = puVar9 + 2, puVar8 = puVar9, unaff_RSI <= puVar9)) break;
    }
  }
joined_r0x000180204576:
  do {
    puVar15 = in_R10;
    if (unaff_RSI <= puVar9) {
joined_r0x0001802045de:
      for (; unaff_RBP < in_R10; in_R10 = in_R10 + -2) {
        puVar10 = puVar15 + -2;
        iVar2 = *(int *)(puVar15 + -1);
        iVar3 = *(int *)(puVar11 + 1);
        if (iVar2 == iVar3) {
          bVar4 = *(int *)((longlong)puVar15 + -4) < *(int *)((longlong)puVar11 + 0xc);
        }
        else {
          bVar4 = iVar3 < iVar2;
        }
        puVar12 = puVar11;
        if (!bVar4) {
          if (iVar3 == iVar2) {
            bVar4 = *(int *)((longlong)puVar11 + 0xc) < *(int *)((longlong)puVar15 + -4);
          }
          else {
            bVar4 = iVar2 < iVar3;
          }
          if (bVar4) break;
          puVar12 = puVar11 + -2;
          if (puVar12 != puVar10) {
            uVar5 = puVar15[-1];
            uVar6 = *puVar12;
            uVar7 = puVar11[-1];
            *puVar12 = *puVar10;
            puVar11[-1] = uVar5;
            *puVar10 = uVar6;
            puVar15[-1] = uVar7;
          }
        }
        puVar11 = puVar12;
        puVar15 = puVar10;
      }
      if (in_R10 == unaff_RBP) {
        if (puVar9 == unaff_RSI) {
          *unaff_R15 = puVar11;
          unaff_R15[1] = puVar8;
          return;
        }
        if (puVar8 != puVar9) {
          uVar5 = puVar8[1];
          uVar6 = *puVar11;
          uVar7 = puVar11[1];
          *puVar11 = *puVar8;
          puVar11[1] = uVar5;
          *puVar8 = uVar6;
          puVar8[1] = uVar7;
        }
        uVar5 = puVar9[1];
        uVar6 = *puVar11;
        uVar7 = puVar11[1];
        *puVar11 = *puVar9;
        puVar11[1] = uVar5;
        *puVar9 = uVar6;
        puVar9[1] = uVar7;
        puVar9 = puVar9 + 2;
        puVar8 = puVar8 + 2;
        puVar11 = puVar11 + 2;
      }
      else {
        puVar15 = in_R10 + -2;
        if (puVar9 == unaff_RSI) {
          puVar10 = puVar11 + -2;
          if (puVar15 != puVar10) {
            uVar5 = puVar11[-1];
            uVar6 = *puVar15;
            uVar7 = in_R10[-1];
            *puVar15 = *puVar10;
            in_R10[-1] = uVar5;
            *puVar10 = uVar6;
            puVar11[-1] = uVar7;
          }
          uVar5 = puVar8[-1];
          uVar6 = *puVar10;
          uVar7 = puVar11[-1];
          *puVar10 = puVar8[-2];
          puVar11[-1] = uVar5;
          puVar8[-2] = uVar6;
          puVar8[-1] = uVar7;
          puVar8 = puVar8 + -2;
          in_R10 = puVar15;
          puVar11 = puVar10;
        }
        else {
          uVar5 = *puVar9;
          uVar6 = puVar9[1];
          uVar7 = in_R10[-1];
          *puVar9 = *puVar15;
          puVar9[1] = uVar7;
          puVar9 = puVar9 + 2;
          *puVar15 = uVar5;
          in_R10[-1] = uVar6;
          in_R10 = puVar15;
        }
      }
      goto joined_r0x000180204576;
    }
    iVar2 = *(int *)(puVar11 + 1);
    iVar3 = *(int *)(puVar9 + 1);
    if (iVar2 == iVar3) {
      bVar4 = *(int *)((longlong)puVar11 + 0xc) < *(int *)((longlong)puVar9 + 0xc);
    }
    else {
      bVar4 = iVar3 < iVar2;
    }
    puVar10 = puVar8;
    if (!bVar4) {
      if (iVar3 == iVar2) {
        bVar4 = *(int *)((longlong)puVar9 + 0xc) < *(int *)((longlong)puVar11 + 0xc);
      }
      else {
        bVar4 = iVar2 < iVar3;
      }
      if (bVar4) goto joined_r0x0001802045de;
      puVar10 = puVar8 + 2;
      if (puVar8 != puVar9) {
        uVar5 = puVar9[1];
        uVar6 = *puVar8;
        uVar7 = puVar8[1];
        *puVar8 = *puVar9;
        puVar8[1] = uVar5;
        *puVar9 = uVar6;
        puVar9[1] = uVar7;
      }
    }
    puVar9 = puVar9 + 2;
    puVar8 = puVar10;
  } while( true );
}





// 函数: void FUN_1802044c5(undefined8 param_1,undefined4 param_2,longlong param_3)
void FUN_1802044c5(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *unaff_RBP;
  undefined8 *unaff_RSI;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *in_R10;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *unaff_R15;
  
  func_0x000180204980(param_1,param_2,param_3 + -0x10);
  puVar8 = in_R10 + 2;
  if (unaff_RBP < in_R10) {
    while( true ) {
      iVar1 = *(int *)(in_R10 + -1);
      iVar2 = *(int *)(in_R10 + 1);
      if (iVar1 == iVar2) {
        bVar3 = *(int *)((longlong)in_R10 + -4) < *(int *)((longlong)in_R10 + 0xc);
      }
      else {
        bVar3 = iVar2 < iVar1;
      }
      if (bVar3) break;
      if (iVar2 == iVar1) {
        bVar3 = *(int *)((longlong)in_R10 + 0xc) < *(int *)((longlong)in_R10 + -4);
      }
      else {
        bVar3 = iVar1 < iVar2;
      }
      if ((bVar3) || (in_R10 = in_R10 + -2, in_R10 <= unaff_RBP)) break;
    }
  }
  puVar7 = puVar8;
  puVar10 = in_R10;
  if (puVar8 < unaff_RSI) {
    iVar1 = *(int *)(in_R10 + 1);
    while( true ) {
      iVar2 = *(int *)(puVar8 + 1);
      if (iVar2 == iVar1) {
        bVar3 = *(int *)((longlong)puVar8 + 0xc) < *(int *)((longlong)in_R10 + 0xc);
      }
      else {
        bVar3 = iVar1 < iVar2;
      }
      puVar7 = puVar8;
      if (bVar3) break;
      if (iVar1 == iVar2) {
        bVar3 = *(int *)((longlong)in_R10 + 0xc) < *(int *)((longlong)puVar8 + 0xc);
      }
      else {
        bVar3 = iVar2 < iVar1;
      }
      if ((bVar3) || (puVar8 = puVar8 + 2, puVar7 = puVar8, unaff_RSI <= puVar8)) break;
    }
  }
joined_r0x000180204576:
  do {
    puVar12 = in_R10;
    if (unaff_RSI <= puVar8) {
joined_r0x0001802045de:
      for (; unaff_RBP < in_R10; in_R10 = in_R10 + -2) {
        puVar9 = puVar12 + -2;
        iVar1 = *(int *)(puVar12 + -1);
        iVar2 = *(int *)(puVar10 + 1);
        if (iVar1 == iVar2) {
          bVar3 = *(int *)((longlong)puVar12 + -4) < *(int *)((longlong)puVar10 + 0xc);
        }
        else {
          bVar3 = iVar2 < iVar1;
        }
        puVar11 = puVar10;
        if (!bVar3) {
          if (iVar2 == iVar1) {
            bVar3 = *(int *)((longlong)puVar10 + 0xc) < *(int *)((longlong)puVar12 + -4);
          }
          else {
            bVar3 = iVar1 < iVar2;
          }
          if (bVar3) break;
          puVar11 = puVar10 + -2;
          if (puVar11 != puVar9) {
            uVar4 = puVar12[-1];
            uVar5 = *puVar11;
            uVar6 = puVar10[-1];
            *puVar11 = *puVar9;
            puVar10[-1] = uVar4;
            *puVar9 = uVar5;
            puVar12[-1] = uVar6;
          }
        }
        puVar10 = puVar11;
        puVar12 = puVar9;
      }
      if (in_R10 == unaff_RBP) {
        if (puVar8 == unaff_RSI) {
          *unaff_R15 = puVar10;
          unaff_R15[1] = puVar7;
          return;
        }
        if (puVar7 != puVar8) {
          uVar4 = puVar7[1];
          uVar5 = *puVar10;
          uVar6 = puVar10[1];
          *puVar10 = *puVar7;
          puVar10[1] = uVar4;
          *puVar7 = uVar5;
          puVar7[1] = uVar6;
        }
        uVar4 = puVar8[1];
        uVar5 = *puVar10;
        uVar6 = puVar10[1];
        *puVar10 = *puVar8;
        puVar10[1] = uVar4;
        *puVar8 = uVar5;
        puVar8[1] = uVar6;
        puVar8 = puVar8 + 2;
        puVar7 = puVar7 + 2;
        puVar10 = puVar10 + 2;
      }
      else {
        puVar12 = in_R10 + -2;
        if (puVar8 == unaff_RSI) {
          puVar9 = puVar10 + -2;
          if (puVar12 != puVar9) {
            uVar4 = puVar10[-1];
            uVar5 = *puVar12;
            uVar6 = in_R10[-1];
            *puVar12 = *puVar9;
            in_R10[-1] = uVar4;
            *puVar9 = uVar5;
            puVar10[-1] = uVar6;
          }
          uVar4 = puVar7[-1];
          uVar5 = *puVar9;
          uVar6 = puVar10[-1];
          *puVar9 = puVar7[-2];
          puVar10[-1] = uVar4;
          puVar7[-2] = uVar5;
          puVar7[-1] = uVar6;
          puVar7 = puVar7 + -2;
          in_R10 = puVar12;
          puVar10 = puVar9;
        }
        else {
          uVar4 = *puVar8;
          uVar5 = puVar8[1];
          uVar6 = in_R10[-1];
          *puVar8 = *puVar12;
          puVar8[1] = uVar6;
          puVar8 = puVar8 + 2;
          *puVar12 = uVar4;
          in_R10[-1] = uVar5;
          in_R10 = puVar12;
        }
      }
      goto joined_r0x000180204576;
    }
    iVar1 = *(int *)(puVar10 + 1);
    iVar2 = *(int *)(puVar8 + 1);
    if (iVar1 == iVar2) {
      bVar3 = *(int *)((longlong)puVar10 + 0xc) < *(int *)((longlong)puVar8 + 0xc);
    }
    else {
      bVar3 = iVar2 < iVar1;
    }
    puVar9 = puVar7;
    if (!bVar3) {
      if (iVar2 == iVar1) {
        bVar3 = *(int *)((longlong)puVar8 + 0xc) < *(int *)((longlong)puVar10 + 0xc);
      }
      else {
        bVar3 = iVar1 < iVar2;
      }
      if (bVar3) goto joined_r0x0001802045de;
      puVar9 = puVar7 + 2;
      if (puVar7 != puVar8) {
        uVar4 = puVar8[1];
        uVar5 = *puVar7;
        uVar6 = puVar7[1];
        *puVar7 = *puVar8;
        puVar7[1] = uVar4;
        *puVar8 = uVar5;
        puVar8[1] = uVar6;
      }
    }
    puVar8 = puVar8 + 2;
    puVar7 = puVar9;
  } while( true );
}





