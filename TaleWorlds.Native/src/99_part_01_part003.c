#include "TaleWorlds.Native.Split.h"

// 99_part_01_part003.c - 9 个函数

// 函数: void FUN_1800a023d(void)
void FUN_1800a023d(void)

{
  longlong unaff_RDI;
  undefined4 *unaff_R15;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  
  FUN_1800a1160();
  FUN_1800a0e50();
  if (unaff_RDI != 0) {
    FUN_1800a1160();
  }
  FUN_1800a0e50();
  if (unaff_RDI != 0) {
    FUN_1800a1160();
  }
  *unaff_R15 = unaff_XMM6_Da;
  unaff_R15[1] = unaff_XMM6_Db;
  unaff_R15[2] = unaff_XMM6_Dc;
  unaff_R15[3] = unaff_XMM6_Dd;
  return;
}



undefined8 * FUN_1800a02a0(longlong param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  char *pcVar4;
  longlong lVar5;
  char *pcVar6;
  
  if (param_2 == (char *)0x0) {
    return *(undefined8 **)(param_1 + 0x40);
  }
  cVar2 = *param_2;
  pcVar6 = param_2;
  while (cVar2 != '\0') {
    pcVar6 = pcVar6 + 1;
    cVar2 = *pcVar6;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x40);
  do {
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    pcVar4 = (char *)*puVar3;
    if (pcVar4 == (char *)0x0) {
      lVar5 = 0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      lVar5 = puVar3[2];
    }
    if (lVar5 == (longlong)pcVar6 - (longlong)param_2) {
      pcVar1 = pcVar4 + lVar5;
      if (pcVar1 <= pcVar4) {
        return puVar3;
      }
      lVar5 = (longlong)param_2 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar5]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar1 <= pcVar4) {
          return puVar3;
        }
      }
    }
    puVar3 = (undefined8 *)puVar3[6];
  } while( true );
}



undefined8 * FUN_1800a02d0(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  longlong in_R10;
  longlong in_R11;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      pcVar2 = (char *)*param_2;
      if (pcVar2 == (char *)0x0) {
        lVar3 = 0;
        pcVar2 = (char *)0x180d48d24;
      }
      else {
        lVar3 = param_2[2];
      }
      if (lVar3 == in_R10) {
        pcVar1 = pcVar2 + lVar3;
        if (pcVar1 <= pcVar2) {
          return param_2;
        }
        lVar3 = in_R11 - (longlong)pcVar2;
        while (*pcVar2 == pcVar2[lVar3]) {
          pcVar2 = pcVar2 + 1;
          if (pcVar1 <= pcVar2) {
            return param_2;
          }
        }
      }
      param_2 = (undefined8 *)param_2[6];
    } while (param_2 != (undefined8 *)0x0);
  }
  return (undefined8 *)0x0;
}



undefined8 * FUN_1800a0324(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *unaff_RBX;
  longlong lVar3;
  longlong in_R10;
  longlong in_R11;
  
  while( true ) {
    do {
      param_2 = (undefined8 *)param_2[6];
      if (param_2 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      if ((char *)*param_2 == (char *)0x0) {
        lVar3 = 0;
        pcVar2 = unaff_RBX;
      }
      else {
        lVar3 = param_2[2];
        pcVar2 = (char *)*param_2;
      }
    } while (lVar3 != in_R10);
    pcVar1 = pcVar2 + lVar3;
    if (pcVar1 <= pcVar2) break;
    lVar3 = in_R11 - (longlong)pcVar2;
    while (*pcVar2 == pcVar2[lVar3]) {
      pcVar2 = pcVar2 + 1;
      if (pcVar1 <= pcVar2) {
        return param_2;
      }
    }
  }
  return param_2;
}



undefined8 FUN_1800a0338(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



longlong *
FUN_1800a0350(longlong *param_1,char *param_2,char *param_3,char param_4,longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  
  if (param_2 != param_3) {
    lVar1 = *param_5;
    lVar2 = param_5[1];
    do {
      cVar3 = *param_2;
      if (cVar3 != param_4) {
        if (cVar3 == '\"') {
          FUN_1800a0e50(lVar2,0x26);
          if (lVar1 != 0) {
            FUN_1800a1160(lVar2,lVar1);
          }
          FUN_1800a0e50(lVar2,0x71);
          if (lVar1 != 0) {
            FUN_1800a1160(lVar2,lVar1);
          }
          FUN_1800a0e50(lVar2,0x75);
          if (lVar1 != 0) {
            FUN_1800a1160(lVar2,lVar1);
          }
          uVar4 = 0x6f;
LAB_1800a0517:
          FUN_1800a0e50(lVar2,uVar4);
          if (lVar1 != 0) {
            FUN_1800a1160(lVar2,lVar1);
          }
          uVar4 = 0x74;
        }
        else if (cVar3 == '&') {
          FUN_1800a0e50(lVar2,0x26);
          if (lVar1 != 0) {
            FUN_1800a1160(lVar2,lVar1);
          }
          FUN_1800a0e50(lVar2,0x61);
          if (lVar1 != 0) {
            FUN_1800a1160(lVar2,lVar1);
          }
          FUN_1800a0e50(lVar2,0x6d);
          if (lVar1 != 0) {
            FUN_1800a1160(lVar2,lVar1);
          }
          uVar4 = 0x70;
        }
        else {
          if (cVar3 != '\'') {
            if (cVar3 == '<') {
              FUN_1800a0e50(lVar2,0x26);
              if (lVar1 != 0) {
                FUN_1800a1160(lVar2,lVar1);
              }
              uVar4 = 0x6c;
            }
            else {
              if (cVar3 != '>') goto LAB_1800a054e;
              FUN_1800a0e50(lVar2,0x26);
              if (lVar1 != 0) {
                FUN_1800a1160(lVar2,lVar1);
              }
              uVar4 = 0x67;
            }
            goto LAB_1800a0517;
          }
          FUN_1800a0e50(lVar2,0x26);
          if (lVar1 != 0) {
            FUN_1800a1160(lVar2,lVar1);
          }
          FUN_1800a0e50(lVar2,0x61);
          if (lVar1 != 0) {
            FUN_1800a1160(lVar2,lVar1);
          }
          FUN_1800a0e50(lVar2,0x70);
          if (lVar1 != 0) {
            FUN_1800a1160(lVar2,lVar1);
          }
          FUN_1800a0e50(lVar2,0x6f);
          if (lVar1 != 0) {
            FUN_1800a1160(lVar2,lVar1);
          }
          uVar4 = 0x73;
        }
        FUN_1800a0e50(lVar2,uVar4);
        if (lVar1 != 0) {
          FUN_1800a1160(lVar2,lVar1);
        }
        cVar3 = ';';
      }
LAB_1800a054e:
      FUN_1800a0e50(lVar2,cVar3);
      if (lVar1 != 0) {
        FUN_1800a1160(lVar2,lVar1);
      }
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  lVar1 = param_5[1];
  *param_1 = *param_5;
  param_1[1] = lVar1;
  return param_1;
}






// 函数: void FUN_1800a037f(void)
void FUN_1800a037f(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_RBP;
  char *unaff_RSI;
  longlong *unaff_R12;
  char unaff_R14B;
  longlong *unaff_R15;
  
  lVar1 = *unaff_R15;
  lVar2 = unaff_R15[1];
  do {
    cVar3 = *unaff_RSI;
    if (cVar3 != unaff_R14B) {
      if (cVar3 == '\"') {
        FUN_1800a0e50(lVar2,0x26);
        if (lVar1 != 0) {
          FUN_1800a1160(lVar2,lVar1);
        }
        FUN_1800a0e50(lVar2,0x71);
        if (lVar1 != 0) {
          FUN_1800a1160(lVar2,lVar1);
        }
        FUN_1800a0e50(lVar2,0x75);
        if (lVar1 != 0) {
          FUN_1800a1160(lVar2,lVar1);
        }
        uVar4 = 0x6f;
LAB_1800a0517:
        FUN_1800a0e50(lVar2,uVar4);
        if (lVar1 != 0) {
          FUN_1800a1160(lVar2,lVar1);
        }
        uVar4 = 0x74;
      }
      else if (cVar3 == '&') {
        FUN_1800a0e50(lVar2,0x26);
        if (lVar1 != 0) {
          FUN_1800a1160(lVar2,lVar1);
        }
        FUN_1800a0e50(lVar2,0x61);
        if (lVar1 != 0) {
          FUN_1800a1160(lVar2,lVar1);
        }
        FUN_1800a0e50(lVar2,0x6d);
        if (lVar1 != 0) {
          FUN_1800a1160(lVar2,lVar1);
        }
        uVar4 = 0x70;
      }
      else {
        if (cVar3 != '\'') {
          if (cVar3 == '<') {
            FUN_1800a0e50(lVar2,0x26);
            if (lVar1 != 0) {
              FUN_1800a1160(lVar2,lVar1);
            }
            uVar4 = 0x6c;
          }
          else {
            if (cVar3 != '>') goto LAB_1800a054e;
            FUN_1800a0e50(lVar2,0x26);
            if (lVar1 != 0) {
              FUN_1800a1160(lVar2,lVar1);
            }
            uVar4 = 0x67;
          }
          goto LAB_1800a0517;
        }
        FUN_1800a0e50(lVar2,0x26);
        if (lVar1 != 0) {
          FUN_1800a1160(lVar2,lVar1);
        }
        FUN_1800a0e50(lVar2,0x61);
        if (lVar1 != 0) {
          FUN_1800a1160(lVar2,lVar1);
        }
        FUN_1800a0e50(lVar2,0x70);
        if (lVar1 != 0) {
          FUN_1800a1160(lVar2,lVar1);
        }
        FUN_1800a0e50(lVar2,0x6f);
        if (lVar1 != 0) {
          FUN_1800a1160(lVar2,lVar1);
        }
        uVar4 = 0x73;
      }
      FUN_1800a0e50(lVar2,uVar4);
      if (lVar1 != 0) {
        FUN_1800a1160(lVar2,lVar1);
      }
      cVar3 = ';';
    }
LAB_1800a054e:
    FUN_1800a0e50(lVar2,cVar3);
    if (lVar1 != 0) {
      FUN_1800a1160(lVar2,lVar1);
    }
    unaff_RSI = unaff_RSI + 1;
    if (unaff_RSI == unaff_RBP) {
      lVar1 = unaff_R15[1];
      *unaff_R12 = *unaff_R15;
      unaff_R12[1] = lVar1;
      return;
    }
  } while( true );
}






// 函数: void FUN_1800a0579(void)
void FUN_1800a0579(void)

{
  undefined8 uVar1;
  undefined8 *unaff_R12;
  undefined8 *unaff_R15;
  
  uVar1 = unaff_R15[1];
  *unaff_R12 = *unaff_R15;
  unaff_R12[1] = uVar1;
  return;
}



longlong * FUN_1800a05a0(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined7 uVar18;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar19;
  undefined1 *puVar20;
  longlong lVar21;
  undefined8 *puVar22;
  longlong lStack_68;
  longlong lStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [32];
  
  puVar22 = *(undefined8 **)(param_3 + 0x40);
  if (puVar22 != (undefined8 *)0x0) {
    lVar19 = param_2[1];
    lVar21 = *param_2;
    do {
      FUN_1800a0e50(lVar19);
      if (lVar21 != 0) {
        FUN_1800a1160(lVar19);
      }
      puVar3 = (undefined1 *)*puVar22;
      lVar19 = *param_2;
      lVar21 = param_2[1];
      if (puVar3 == (undefined1 *)0x0) {
        puVar12 = (undefined1 *)0x180d48d24;
        lVar14 = 0;
      }
      else {
        lVar14 = puVar22[2];
        puVar12 = puVar3;
      }
      puVar20 = (undefined1 *)0x180d48d24;
      lStack_68 = lVar19;
      lStack_60 = lVar21;
      if (puVar3 != (undefined1 *)0x0) {
        puVar20 = puVar3;
      }
      while (puVar20 != puVar12 + lVar14) {
        uVar1 = *puVar20;
        puVar20 = puVar20 + 1;
        FUN_1800a0e50(lVar21,uVar1);
        if (lVar19 != 0) {
          FUN_1800a1160(lVar21,lVar19);
        }
      }
      *param_2 = lVar19;
      param_2[1] = lVar21;
      lVar14 = param_2[1];
      FUN_1800a0e50(lVar14);
      lVar15 = *param_2;
      if (lVar15 != 0) {
        FUN_1800a1160(lVar14);
      }
      pcVar4 = (char *)puVar22[1];
      if (pcVar4 == (char *)0x0) {
        pcVar9 = (char *)0x180d48d24;
        lVar13 = 0;
      }
      else {
        lVar13 = puVar22[3];
        pcVar9 = pcVar4;
      }
      pcVar10 = (char *)0x180d48d24;
      if (pcVar4 != (char *)0x0) {
        pcVar10 = pcVar4;
      }
      do {
        if (pcVar10 == pcVar9 + lVar13) {
          bVar8 = false;
          goto LAB_1800a06d4;
        }
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\"');
      bVar8 = true;
LAB_1800a06d4:
      uVar18 = (undefined7)((ulonglong)(pcVar9 + lVar13) >> 8);
      if (bVar8) {
        FUN_1800a0e50(lVar14,CONCAT71(uVar18,0x27));
        if (lVar15 != 0) {
          FUN_1800a1160(lVar14,lVar15);
        }
        lVar14 = puVar22[1];
        if (lVar14 == 0) {
          lVar13 = 0x180d48d24;
          lVar15 = 0;
        }
        else {
          lVar15 = puVar22[3];
          lVar13 = lVar14;
        }
        lVar17 = 0x180d48d24;
        if (lVar14 != 0) {
          lVar17 = lVar14;
        }
        lStack_68 = lVar19;
        lStack_60 = lVar21;
        puVar11 = (undefined4 *)FUN_1800a0350(auStack_58,lVar17,lVar15 + lVar13,0x22,&lStack_68);
        uVar16 = 0x27;
      }
      else {
        FUN_1800a0e50(lVar14,CONCAT71(uVar18,0x22));
        if (lVar15 != 0) {
          FUN_1800a1160(lVar14,lVar15);
        }
        lVar14 = puVar22[1];
        if (lVar14 == 0) {
          lVar13 = 0x180d48d24;
          lVar15 = 0;
        }
        else {
          lVar15 = puVar22[3];
          lVar13 = lVar14;
        }
        lVar17 = 0x180d48d24;
        if (lVar14 != 0) {
          lVar17 = lVar14;
        }
        lStack_68 = lVar19;
        lStack_60 = lVar21;
        puVar11 = (undefined4 *)FUN_1800a0350(auStack_48,lVar17,lVar15 + lVar13,0x27,&lStack_68);
        uVar16 = 0x22;
      }
      uVar5 = puVar11[1];
      uVar6 = puVar11[2];
      uVar7 = puVar11[3];
      *(undefined4 *)param_2 = *puVar11;
      *(undefined4 *)((longlong)param_2 + 4) = uVar5;
      *(undefined4 *)(param_2 + 1) = uVar6;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar7;
      lVar19 = param_2[1];
      FUN_1800a0e50(lVar19,uVar16);
      lVar21 = *param_2;
      if (lVar21 != 0) {
        FUN_1800a1160(lVar19,lVar21);
      }
    } while ((puVar22[4] != 0) && (puVar22 = (undefined8 *)puVar22[6], puVar22 != (undefined8 *)0x0)
            );
  }
  lVar19 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar19;
  return param_1;
}






// 函数: void FUN_1800a05c2(undefined8 param_1,longlong *param_2)
void FUN_1800a05c2(undefined8 param_1,longlong *param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  longlong in_RAX;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined7 uVar18;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined8 unaff_RBX;
  longlong lVar19;
  undefined1 *puVar20;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  longlong lVar21;
  undefined8 *unaff_RDI;
  longlong *unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  longlong *unaff_R15;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  longlong in_stack_00000030;
  longlong in_stack_00000038;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBX;
  lVar19 = param_2[1];
  *(undefined8 *)(in_RAX + 0x10) = unaff_RBP;
  *(undefined8 *)(in_RAX + 0x18) = unaff_RSI;
  lVar21 = *param_2;
  *(undefined8 *)(in_RAX + -0x20) = unaff_R13;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R14;
  *(undefined4 *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  do {
    FUN_1800a0e50(lVar19);
    if (lVar21 != 0) {
      FUN_1800a1160(lVar19);
    }
    puVar3 = (undefined1 *)*unaff_RDI;
    lVar19 = *unaff_R15;
    lVar21 = unaff_R15[1];
    if (puVar3 == (undefined1 *)0x0) {
      puVar12 = (undefined1 *)0x180d48d24;
      lVar14 = 0;
    }
    else {
      lVar14 = unaff_RDI[2];
      puVar12 = puVar3;
    }
    puVar20 = (undefined1 *)0x180d48d24;
    in_stack_00000030 = lVar19;
    in_stack_00000038 = lVar21;
    if (puVar3 != (undefined1 *)0x0) {
      puVar20 = puVar3;
    }
    while (puVar20 != puVar12 + lVar14) {
      uVar1 = *puVar20;
      puVar20 = puVar20 + 1;
      FUN_1800a0e50(lVar21,uVar1);
      if (lVar19 != 0) {
        FUN_1800a1160(lVar21,lVar19);
      }
    }
    *unaff_R15 = lVar19;
    unaff_R15[1] = lVar21;
    lVar14 = unaff_R15[1];
    FUN_1800a0e50(lVar14);
    lVar15 = *unaff_R15;
    if (lVar15 != 0) {
      FUN_1800a1160(lVar14);
    }
    pcVar4 = (char *)unaff_RDI[1];
    if (pcVar4 == (char *)0x0) {
      pcVar9 = (char *)0x180d48d24;
      lVar13 = 0;
    }
    else {
      lVar13 = unaff_RDI[3];
      pcVar9 = pcVar4;
    }
    pcVar10 = (char *)0x180d48d24;
    if (pcVar4 != (char *)0x0) {
      pcVar10 = pcVar4;
    }
    do {
      if (pcVar10 == pcVar9 + lVar13) {
        bVar8 = false;
        goto LAB_1800a06d4;
      }
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\"');
    bVar8 = true;
LAB_1800a06d4:
    uVar18 = (undefined7)((ulonglong)(pcVar9 + lVar13) >> 8);
    if (bVar8) {
      FUN_1800a0e50(lVar14,CONCAT71(uVar18,0x27));
      if (lVar15 != 0) {
        FUN_1800a1160(lVar14,lVar15);
      }
      lVar14 = unaff_RDI[1];
      if (lVar14 == 0) {
        lVar13 = 0x180d48d24;
        lVar15 = 0;
      }
      else {
        lVar15 = unaff_RDI[3];
        lVar13 = lVar14;
      }
      lVar17 = 0x180d48d24;
      if (lVar14 != 0) {
        lVar17 = lVar14;
      }
      in_stack_00000030 = lVar19;
      in_stack_00000038 = lVar21;
      puVar11 = (undefined4 *)
                FUN_1800a0350(&stack0x00000040,lVar17,lVar15 + lVar13,0x22,&stack0x00000030);
      uVar16 = 0x27;
    }
    else {
      FUN_1800a0e50(lVar14,CONCAT71(uVar18,0x22));
      if (lVar15 != 0) {
        FUN_1800a1160(lVar14,lVar15);
      }
      lVar14 = unaff_RDI[1];
      if (lVar14 == 0) {
        lVar13 = 0x180d48d24;
        lVar15 = 0;
      }
      else {
        lVar15 = unaff_RDI[3];
        lVar13 = lVar14;
      }
      lVar17 = 0x180d48d24;
      if (lVar14 != 0) {
        lVar17 = lVar14;
      }
      in_stack_00000030 = lVar19;
      in_stack_00000038 = lVar21;
      puVar11 = (undefined4 *)
                FUN_1800a0350(&stack0x00000050,lVar17,lVar15 + lVar13,0x27,&stack0x00000030);
      uVar16 = 0x22;
    }
    uVar5 = puVar11[1];
    uVar6 = puVar11[2];
    uVar7 = puVar11[3];
    *(undefined4 *)unaff_R15 = *puVar11;
    *(undefined4 *)((longlong)unaff_R15 + 4) = uVar5;
    *(undefined4 *)(unaff_R15 + 1) = uVar6;
    *(undefined4 *)((longlong)unaff_R15 + 0xc) = uVar7;
    lVar19 = unaff_R15[1];
    FUN_1800a0e50(lVar19,uVar16);
    lVar21 = *unaff_R15;
    if (lVar21 != 0) {
      FUN_1800a1160(lVar19,lVar21);
    }
    if ((unaff_RDI[4] == 0) ||
       (unaff_RDI = (undefined8 *)unaff_RDI[6], unaff_RDI == (undefined8 *)0x0)) {
      lVar19 = unaff_R15[1];
      *unaff_R12 = *unaff_R15;
      unaff_R12[1] = lVar19;
      return;
    }
  } while( true );
}






// 函数: void FUN_1800a07f8(void)
void FUN_1800a07f8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_R12;
  undefined8 *unaff_R15;
  
  uVar1 = unaff_R15[1];
  *unaff_R12 = *unaff_R15;
  unaff_R12[1] = uVar1;
  return;
}



longlong *
FUN_1800a0820(longlong *param_1,longlong *param_2,longlong param_3,byte param_4,uint param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  
  if ((param_4 & 1) == 0) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    if (0 < (int)param_5) {
      uVar8 = (ulonglong)param_5;
      do {
        FUN_1800a0e50(lVar3,9);
        if (lVar2 != 0) {
          FUN_1800a1160(lVar3,lVar2);
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    *param_2 = lVar2;
    param_2[1] = lVar3;
  }
  lVar2 = param_2[1];
  FUN_1800a0e50(lVar2,0x3c);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x21);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x2d);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2);
  }
  puVar4 = *(undefined1 **)(param_3 + 8);
  lVar2 = *param_2;
  lVar3 = param_2[1];
  if (puVar4 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x180d48d24;
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_3 + 0x18);
    puVar6 = puVar4;
  }
  puVar9 = (undefined1 *)0x180d48d24;
  if (puVar4 != (undefined1 *)0x0) {
    puVar9 = puVar4;
  }
  while (puVar9 != puVar6 + lVar7) {
    uVar1 = *puVar9;
    puVar9 = puVar9 + 1;
    FUN_1800a0e50(lVar3,uVar1);
    if (lVar2 != 0) {
      FUN_1800a1160(lVar3,lVar2);
    }
  }
  *param_2 = lVar2;
  param_2[1] = lVar3;
  lVar7 = param_2[1];
  FUN_1800a0e50(lVar7,0x2d);
  lVar5 = *param_2;
  if (lVar5 != 0) {
    FUN_1800a1160(lVar7,lVar5);
  }
  FUN_1800a0e50(lVar7,0x2d);
  if (lVar5 != 0) {
    FUN_1800a1160(lVar7,lVar5);
  }
  FUN_1800a0e50(lVar7,0x3e);
  if (lVar5 != 0) {
    FUN_1800a1160(lVar7,lVar5);
  }
  *param_1 = lVar2;
  param_1[1] = lVar3;
  return param_1;
}






// 函数: void FUN_1800a0831(undefined8 param_1,longlong *param_2,longlong param_3,byte param_4)
void FUN_1800a0831(undefined8 param_1,longlong *param_2,longlong param_3,byte param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong *unaff_R15;
  uint in_stack_00000080;
  
  if ((param_4 & 1) == 0) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    if (0 < (int)in_stack_00000080) {
      uVar8 = (ulonglong)in_stack_00000080;
      do {
        FUN_1800a0e50(lVar3,9);
        if (lVar2 != 0) {
          FUN_1800a1160(lVar3,lVar2);
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    *param_2 = lVar2;
    param_2[1] = lVar3;
  }
  lVar2 = param_2[1];
  FUN_1800a0e50(lVar2,0x3c);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x21);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x2d);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2);
  }
  puVar4 = *(undefined1 **)(param_3 + 8);
  lVar2 = *param_2;
  lVar3 = param_2[1];
  if (puVar4 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x180d48d24;
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_3 + 0x18);
    puVar6 = puVar4;
  }
  puVar9 = (undefined1 *)0x180d48d24;
  if (puVar4 != (undefined1 *)0x0) {
    puVar9 = puVar4;
  }
  while (puVar9 != puVar6 + lVar7) {
    uVar1 = *puVar9;
    puVar9 = puVar9 + 1;
    FUN_1800a0e50(lVar3,uVar1);
    if (lVar2 != 0) {
      FUN_1800a1160(lVar3,lVar2);
    }
  }
  *param_2 = lVar2;
  param_2[1] = lVar3;
  lVar7 = param_2[1];
  FUN_1800a0e50(lVar7,0x2d);
  lVar5 = *param_2;
  if (lVar5 != 0) {
    FUN_1800a1160(lVar7,lVar5);
  }
  FUN_1800a0e50(lVar7,0x2d);
  if (lVar5 != 0) {
    FUN_1800a1160(lVar7,lVar5);
  }
  FUN_1800a0e50(lVar7,0x3e);
  if (lVar5 != 0) {
    FUN_1800a1160(lVar7,lVar5);
  }
  *unaff_R15 = lVar2;
  unaff_R15[1] = lVar3;
  return;
}






// 函数: void FUN_1800a099d(void)
void FUN_1800a099d(void)

{
  longlong unaff_RDI;
  undefined4 *unaff_R15;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  
  FUN_1800a1160();
  FUN_1800a0e50();
  if (unaff_RDI != 0) {
    FUN_1800a1160();
  }
  FUN_1800a0e50();
  if (unaff_RDI != 0) {
    FUN_1800a1160();
  }
  *unaff_R15 = unaff_XMM6_Da;
  unaff_R15[1] = unaff_XMM6_Db;
  unaff_R15[2] = unaff_XMM6_Dc;
  unaff_R15[3] = unaff_XMM6_Dd;
  return;
}



longlong *
FUN_1800a0a00(longlong *param_1,longlong *param_2,longlong param_3,byte param_4,uint param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  
  if ((param_4 & 1) == 0) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    if (0 < (int)param_5) {
      uVar7 = (ulonglong)param_5;
      do {
        FUN_1800a0e50(lVar3,9);
        if (lVar2 != 0) {
          FUN_1800a1160(lVar3,lVar2);
        }
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    *param_2 = lVar2;
    param_2[1] = lVar3;
  }
  lVar2 = param_2[1];
  FUN_1800a0e50(lVar2,0x3c);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x21);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x44);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x4f);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x43);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x54);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x59);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x50);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x45);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2);
  }
  puVar4 = *(undefined1 **)(param_3 + 8);
  lVar2 = *param_2;
  lVar3 = param_2[1];
  if (puVar4 == (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x180d48d24;
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_3 + 0x18);
    puVar5 = puVar4;
  }
  puVar8 = (undefined1 *)0x180d48d24;
  if (puVar4 != (undefined1 *)0x0) {
    puVar8 = puVar4;
  }
  while (puVar8 != puVar5 + lVar6) {
    uVar1 = *puVar8;
    puVar8 = puVar8 + 1;
    FUN_1800a0e50(lVar3,uVar1);
    if (lVar2 != 0) {
      FUN_1800a1160(lVar3,lVar2);
    }
  }
  *param_2 = lVar2;
  param_2[1] = lVar3;
  lVar6 = param_2[1];
  FUN_1800a0e50(lVar6,0x3e);
  if (*param_2 != 0) {
    FUN_1800a1160(lVar6);
  }
  *param_1 = lVar2;
  param_1[1] = lVar3;
  return param_1;
}






// 函数: void FUN_1800a0a10(undefined8 param_1,longlong *param_2,longlong param_3,byte param_4)
void FUN_1800a0a10(undefined8 param_1,longlong *param_2,longlong param_3,byte param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong *unaff_R15;
  uint in_stack_00000080;
  
  if ((param_4 & 1) == 0) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    if (0 < (int)in_stack_00000080) {
      uVar7 = (ulonglong)in_stack_00000080;
      do {
        FUN_1800a0e50(lVar3,9);
        if (lVar2 != 0) {
          FUN_1800a1160(lVar3,lVar2);
        }
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    *param_2 = lVar2;
    param_2[1] = lVar3;
  }
  lVar2 = param_2[1];
  FUN_1800a0e50(lVar2,0x3c);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x21);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x44);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x4f);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x43);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x54);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x59);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x50);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2,0x45);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2,lVar3);
  }
  FUN_1800a0e50(lVar2);
  if (lVar3 != 0) {
    FUN_1800a1160(lVar2);
  }
  puVar4 = *(undefined1 **)(param_3 + 8);
  lVar2 = *param_2;
  lVar3 = param_2[1];
  if (puVar4 == (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x180d48d24;
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_3 + 0x18);
    puVar5 = puVar4;
  }
  puVar8 = (undefined1 *)0x180d48d24;
  if (puVar4 != (undefined1 *)0x0) {
    puVar8 = puVar4;
  }
  while (puVar8 != puVar5 + lVar6) {
    uVar1 = *puVar8;
    puVar8 = puVar8 + 1;
    FUN_1800a0e50(lVar3,uVar1);
    if (lVar2 != 0) {
      FUN_1800a1160(lVar3,lVar2);
    }
  }
  *param_2 = lVar2;
  param_2[1] = lVar3;
  lVar6 = param_2[1];
  FUN_1800a0e50(lVar6,0x3e);
  if (*param_2 != 0) {
    FUN_1800a1160(lVar6);
  }
  *unaff_R15 = lVar2;
  unaff_R15[1] = lVar3;
  return;
}






// 函数: void FUN_1800a0c13(void)
void FUN_1800a0c13(void)

{
  undefined4 *unaff_R15;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  
  FUN_1800a1160();
  *unaff_R15 = unaff_XMM6_Da;
  unaff_R15[1] = unaff_XMM6_Db;
  unaff_R15[2] = unaff_XMM6_Dc;
  unaff_R15[3] = unaff_XMM6_Dd;
  return;
}






