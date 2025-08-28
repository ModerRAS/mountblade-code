#include "TaleWorlds.Native.Split.h"

// 03_rendering_part540.c - 8 个函数

// 函数: void FUN_180561b50(longlong param_1,longlong *param_2)
void FUN_180561b50(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  int *piVar10;
  ulonglong uVar11;
  int iVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  puVar7 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (undefined4 *)param_2[1];
  }
  *puVar7 = 6;
  puVar7 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar6 = *(undefined4 *)(param_1 + 8);
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (undefined4 *)param_2[1];
  }
  *puVar7 = uVar6;
  puVar7 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (undefined4 *)param_2[1];
  }
  *puVar7 = uVar6;
  puVar7 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (undefined4 *)param_2[1];
  }
  *puVar7 = uVar6;
  puVar7 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (undefined4 *)param_2[1];
  }
  *puVar7 = uVar6;
  puVar7 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (undefined4 *)param_2[1];
  }
  *puVar7 = uVar6;
  puVar7 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (undefined4 *)param_2[1];
  }
  *puVar7 = uVar6;
  puVar7 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (undefined4 *)param_2[1];
  }
  *puVar7 = uVar6;
  puVar7 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 0x11) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (0x10 - *param_2));
    puVar7 = (undefined4 *)param_2[1];
  }
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  *puVar7 = *(undefined4 *)(param_1 + 0x24);
  puVar7[1] = uVar6;
  puVar7[2] = uVar4;
  puVar7[3] = uVar5;
  param_2[1] = param_2[1] + 0x10;
  FUN_180639fd0(param_2,param_1 + 0x44);
  FUN_180639ec0(param_2,param_1 + 0x58);
  FUN_180639ec0(param_2,param_1 + 0x78);
  FUN_180639ec0(param_2,param_1 + 0x98);
  FUN_180639ec0(param_2,param_1 + 0xb8);
  FUN_180639ec0(param_2,param_1 + 0xf8);
  puVar7 = (undefined4 *)param_2[1];
  uVar6 = *(undefined4 *)(param_1 + 0x138);
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (undefined4 *)param_2[1];
  }
  *puVar7 = uVar6;
  puVar7 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar6 = *(undefined4 *)(param_1 + 0x13c);
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (undefined4 *)param_2[1];
  }
  *puVar7 = uVar6;
  param_2[1] = param_2[1] + 4;
  FUN_180639ec0(param_2,param_1 + 0x118);
  puVar7 = (undefined4 *)param_2[1];
  uVar6 = *(undefined4 *)(param_1 + 0x140);
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (undefined4 *)param_2[1];
  }
  *puVar7 = uVar6;
  puVar7 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar7;
  uVar6 = *(undefined4 *)(param_1 + 0x144);
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (undefined4 *)param_2[1];
  }
  *puVar7 = uVar6;
  puVar8 = (undefined1 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar8;
  uVar1 = *(undefined1 *)(param_1 + 0x148);
  if ((ulonglong)((*param_2 - (longlong)puVar8) + param_2[2]) < 2) {
    FUN_180639bf0(param_2,puVar8 + (1 - *param_2));
    puVar8 = (undefined1 *)param_2[1];
  }
  *puVar8 = uVar1;
  puVar7 = (undefined4 *)(param_2[1] + 1);
  param_2[1] = (longlong)puVar7;
  uVar6 = *(undefined4 *)(param_1 + 0x40);
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (undefined4 *)param_2[1];
  }
  *puVar7 = uVar6;
  param_2[1] = param_2[1] + 4;
  FUN_180639ec0(param_2,param_1 + 0xd8);
  FUN_180639ec0(param_2,param_1 + 0x170);
  FUN_180639ec0(param_2,param_1 + 400);
  puVar8 = (undefined1 *)param_2[1];
  uVar1 = *(undefined1 *)(param_1 + 0x1b0);
  if ((ulonglong)((*param_2 - (longlong)puVar8) + param_2[2]) < 2) {
    FUN_180639bf0(param_2,puVar8 + (1 - *param_2));
    puVar8 = (undefined1 *)param_2[1];
  }
  *puVar8 = uVar1;
  puVar8 = (undefined1 *)(param_2[1] + 1);
  param_2[1] = (longlong)puVar8;
  uVar1 = *(undefined1 *)(param_1 + 0x1b1);
  if ((ulonglong)((*param_2 - (longlong)puVar8) + param_2[2]) < 2) {
    FUN_180639bf0(param_2,puVar8 + (1 - *param_2));
    puVar8 = (undefined1 *)param_2[1];
  }
  *puVar8 = uVar1;
  puVar8 = (undefined1 *)(param_2[1] + 1);
  param_2[1] = (longlong)puVar8;
  uVar1 = *(undefined1 *)(param_1 + 0x1b2);
  if ((ulonglong)((*param_2 - (longlong)puVar8) + param_2[2]) < 2) {
    FUN_180639bf0(param_2,puVar8 + (1 - *param_2));
    puVar8 = (undefined1 *)param_2[1];
  }
  *puVar8 = uVar1;
  puVar7 = (undefined4 *)(param_2[1] + 1);
  param_2[1] = (longlong)puVar7;
  uVar2 = *(ulonglong *)(param_1 + 0x38);
  if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
    puVar7 = (undefined4 *)param_2[1];
  }
  uVar14 = 0;
  *puVar7 = 0;
  lVar3 = *param_2;
  lVar9 = param_2[1] + 4;
  param_2[1] = lVar9;
  uVar15 = uVar14;
  if (lVar3 != 0) {
    uVar15 = lVar9 - lVar3;
  }
  if ((ulonglong)((lVar3 - lVar9) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(lVar9 - lVar3) + 4);
    lVar9 = param_2[1];
  }
  param_2[1] = lVar9 + 4;
  puVar13 = (undefined8 *)&UNK_1809f8e00;
  uVar11 = uVar14;
  do {
    if ((puVar13[1] & uVar2) != 0) {
      FUN_180639de0(param_2,*puVar13);
      uVar11 = (ulonglong)((int)uVar11 + 1);
    }
    puVar13 = puVar13 + 2;
  } while ((longlong)puVar13 < 0x1809f9070);
  *(int *)(uVar15 + *param_2) = (int)uVar11;
  lVar3 = *(longlong *)(param_1 + 0x158);
  lVar9 = *(longlong *)(param_1 + 0x150);
  piVar10 = (int *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)piVar10) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar10 + (4 - *param_2));
    piVar10 = (int *)param_2[1];
  }
  iVar12 = (int)(lVar3 - lVar9 >> 3);
  *piVar10 = iVar12;
  param_2[1] = param_2[1] + 4;
  if (0 < iVar12) {
    do {
      uVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x150) + uVar14 * 8) + 0x18))();
      switch(uVar6) {
      case 0:
        puVar7 = (undefined4 *)param_2[1];
        if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 0x11) {
          FUN_180639bf0(param_2,(longlong)puVar7 + (0x10 - *param_2));
          puVar7 = (undefined4 *)param_2[1];
        }
        *puVar7 = 0xc;
        param_2[1] = param_2[1] + 4;
        puVar13 = (undefined8 *)param_2[1];
        if (puVar13 == (undefined8 *)0x0) {
          puVar7 = (undefined4 *)_errno();
          *puVar7 = 0x16;
          _invalid_parameter_noinfo();
        }
        else {
          if ((ulonglong)((*param_2 - (longlong)puVar13) + param_2[2]) < 0xc) {
                    // WARNING: Subroutine does not return
            memset(puVar13,0);
          }
          *puVar13 = 0x6563616c70736964;
          *(undefined4 *)(puVar13 + 1) = 0x746e656d;
        }
        param_2[1] = param_2[1] + 0xc;
        puVar7 = (undefined4 *)param_2[1];
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x150) + uVar14 * 8);
        if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
          FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
          puVar7 = (undefined4 *)param_2[1];
        }
        *puVar7 = 0;
        param_2[1] = param_2[1] + 4;
        FUN_180639f50(param_2,lVar3 + 8);
        uVar6 = *(undefined4 *)(lVar3 + 0x18);
        goto code_r0x000180562696;
      case 1:
        puVar7 = (undefined4 *)param_2[1];
        if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 0x12) {
          FUN_180639bf0(param_2,(longlong)puVar7 + (0x11 - *param_2));
          puVar7 = (undefined4 *)param_2[1];
        }
        *puVar7 = 0xd;
        param_2[1] = param_2[1] + 4;
        puVar13 = (undefined8 *)param_2[1];
        if (puVar13 == (undefined8 *)0x0) {
          puVar7 = (undefined4 *)_errno();
          *puVar7 = 0x16;
          _invalid_parameter_noinfo();
          param_2[1] = param_2[1] + 0xd;
        }
        else {
          if ((ulonglong)((*param_2 - (longlong)puVar13) + param_2[2]) < 0xd) {
                    // WARNING: Subroutine does not return
            memset(puVar13,0);
          }
          *puVar13 = 0x766f6d5f64617571;
          *(undefined4 *)(puVar13 + 1) = 0x6e656d65;
          *(undefined1 *)((longlong)puVar13 + 0xc) = 0x74;
          param_2[1] = param_2[1] + 0xd;
        }
        goto code_r0x0001805625e4;
      case 2:
        puVar7 = (undefined4 *)param_2[1];
        if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 0xf) {
          FUN_180639bf0(param_2,(longlong)puVar7 + (0xe - *param_2));
          puVar7 = (undefined4 *)param_2[1];
        }
        *puVar7 = 10;
        param_2[1] = param_2[1] + 4;
        puVar13 = (undefined8 *)param_2[1];
        if (puVar13 == (undefined8 *)0x0) {
          puVar7 = (undefined4 *)_errno();
          *puVar7 = 0x16;
          _invalid_parameter_noinfo();
        }
        else {
          if ((ulonglong)((*param_2 - (longlong)puVar13) + param_2[2]) < 10) {
                    // WARNING: Subroutine does not return
            memset(puVar13,0);
          }
          *puVar13 = 0x5f766f6d5f706962;
          *(undefined2 *)(puVar13 + 1) = 0x6b69;
        }
        param_2[1] = param_2[1] + 10;
        FUN_180562730(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + uVar14 * 8),param_2);
        break;
      case 3:
        puVar7 = (undefined4 *)param_2[1];
        if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 10) {
          FUN_180639bf0(param_2,(longlong)puVar7 + (9 - *param_2));
          puVar7 = (undefined4 *)param_2[1];
        }
        *puVar7 = 5;
        param_2[1] = param_2[1] + 4;
        puVar7 = (undefined4 *)param_2[1];
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)_errno();
          *puVar7 = 0x16;
          _invalid_parameter_noinfo();
        }
        else {
          if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
                    // WARNING: Subroutine does not return
            memset(puVar7,0);
          }
          *puVar7 = 0x6e656c62;
          *(undefined1 *)(puVar7 + 1) = 100;
        }
        param_2[1] = param_2[1] + 5;
        goto code_r0x00018056241c;
      case 4:
        puVar7 = (undefined4 *)param_2[1];
        if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 0x11) {
          FUN_180639bf0(param_2,(longlong)puVar7 + (0x10 - *param_2));
          puVar7 = (undefined4 *)param_2[1];
        }
        *puVar7 = 0xc;
        param_2[1] = param_2[1] + 4;
        puVar13 = (undefined8 *)param_2[1];
        if (puVar13 == (undefined8 *)0x0) {
          puVar7 = (undefined4 *)_errno();
          *puVar7 = 0x16;
          _invalid_parameter_noinfo();
          param_2[1] = param_2[1] + 0xc;
        }
        else {
          if ((ulonglong)((*param_2 - (longlong)puVar13) + param_2[2]) < 0xc) {
                    // WARNING: Subroutine does not return
            memset(puVar13,0);
          }
          *puVar13 = 0x68635f746e756f6d;
          *(undefined4 *)(puVar13 + 1) = 0x65676e61;
          param_2[1] = param_2[1] + 0xc;
        }
code_r0x00018056241c:
        puVar7 = (undefined4 *)param_2[1];
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x150) + uVar14 * 8);
        if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
          FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
          puVar7 = (undefined4 *)param_2[1];
        }
        *puVar7 = 0;
        param_2[1] = param_2[1] + 4;
        puVar7 = (undefined4 *)param_2[1];
        uVar6 = *(undefined4 *)(lVar3 + 8);
        if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
          FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
          puVar7 = (undefined4 *)param_2[1];
        }
        *puVar7 = uVar6;
        param_2[1] = param_2[1] + 4;
        uVar6 = *(undefined4 *)(lVar3 + 0xc);
        goto code_r0x000180562696;
      case 5:
        puVar7 = (undefined4 *)param_2[1];
        if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 0x10) {
          FUN_180639bf0(param_2,(longlong)puVar7 + (0xf - *param_2));
          puVar7 = (undefined4 *)param_2[1];
        }
        *puVar7 = 0xb;
        param_2[1] = param_2[1] + 4;
        puVar13 = (undefined8 *)param_2[1];
        if (puVar13 == (undefined8 *)0x0) {
          puVar7 = (undefined4 *)_errno();
          *puVar7 = 0x16;
          _invalid_parameter_noinfo();
        }
        else {
          if ((ulonglong)((*param_2 - (longlong)puVar13) + param_2[2]) < 0xb) {
                    // WARNING: Subroutine does not return
            memset(puVar13,0);
          }
          *puVar13 = 0x6977735f646e6168;
          *(undefined2 *)(puVar13 + 1) = 0x6374;
          *(undefined1 *)((longlong)puVar13 + 10) = 0x68;
        }
        param_2[1] = param_2[1] + 0xb;
code_r0x0001805625e4:
        puVar7 = (undefined4 *)param_2[1];
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x150) + uVar14 * 8);
        if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
          FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
          puVar7 = (undefined4 *)param_2[1];
        }
        *puVar7 = 0;
        param_2[1] = param_2[1] + 4;
        puVar7 = (undefined4 *)param_2[1];
        uVar6 = *(undefined4 *)(lVar3 + 8);
        if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
          FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
          puVar7 = (undefined4 *)param_2[1];
        }
        *puVar7 = uVar6;
        param_2[1] = param_2[1] + 4;
        puVar7 = (undefined4 *)param_2[1];
        uVar6 = *(undefined4 *)(lVar3 + 0xc);
        if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
          FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
          puVar7 = (undefined4 *)param_2[1];
        }
        *puVar7 = uVar6;
        param_2[1] = param_2[1] + 4;
        uVar6 = *(undefined4 *)(lVar3 + 0x10);
code_r0x000180562696:
        puVar7 = (undefined4 *)param_2[1];
        if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) < 5) {
          FUN_180639bf0(param_2,(longlong)puVar7 + (4 - *param_2));
          puVar7 = (undefined4 *)param_2[1];
        }
        *puVar7 = uVar6;
        param_2[1] = param_2[1] + 4;
      }
      uVar14 = uVar14 + 1;
    } while ((longlong)uVar14 < (longlong)iVar12);
  }
  return;
}





// 函数: void FUN_180562730(longlong param_1,longlong *param_2)
void FUN_180562730(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = 0;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 8);
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  if ((ulonglong)((*param_2 - (longlong)puVar2) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    *(undefined4 *)param_2[1] = uVar1;
  }
  else {
    *puVar2 = uVar1;
  }
  param_2[1] = param_2[1] + 4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180562920(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 param_4)
void FUN_180562920(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  uVar2 = **(undefined4 **)(param_2 + 8);
  *(undefined4 **)(param_2 + 8) = *(undefined4 **)(param_2 + 8) + 1;
  *(undefined4 *)(param_1 + 9) = uVar2;
  uVar2 = **(undefined4 **)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar2;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 10) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  lVar10 = (longlong)**(int **)(param_2 + 8);
  *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
  FUN_18049b770(param_1,lVar10,uVar2,param_4,0xfffffffffffffffe);
  lVar6 = 0;
  iVar5 = 0;
  lVar12 = lVar6;
  if (0 < lVar10) {
    do {
      lVar3 = *param_1;
      uVar11 = **(uint **)(param_2 + 8);
      *(uint **)(param_2 + 8) = *(uint **)(param_2 + 8) + 1;
      *(short *)(lVar12 + 0x24 + lVar3) = (short)uVar11;
      if ((short)uVar11 != 0) {
        lVar10 = lVar6;
        if ((uVar11 & 0xffff) != 0) {
          lVar10 = FUN_18062b420(_DAT_180c8ed18,(uVar11 & 0xffff) * 4,4);
          uVar11 = (uint)*(ushort *)(lVar12 + 0x24 + lVar3);
        }
        *(longlong *)(lVar12 + 0x1c + lVar3) = lVar10;
        if ((ulonglong)(uVar11 & 0xffff) != 0) {
          lVar6 = FUN_18062b420(_DAT_180c8ed18,(ulonglong)(uVar11 & 0xffff) << 4,4);
          uVar11 = (uint)*(ushort *)(lVar12 + 0x24 + lVar3);
          lVar10 = *(longlong *)(lVar12 + 0x1c + lVar3);
        }
        *(longlong *)(lVar12 + 0x14 + lVar3) = lVar6;
                    // WARNING: Subroutine does not return
        memcpy(lVar10,*(undefined8 *)(param_2 + 8),(ulonglong)(uVar11 & 0xffff) << 2);
      }
      lVar3 = *param_1;
      *(undefined2 *)(lVar12 + 0x10 + lVar3) = **(undefined2 **)(param_2 + 8);
      lVar4 = *(longlong *)(param_2 + 8);
      puVar7 = (uint *)(lVar4 + 2);
      *(uint **)(param_2 + 8) = puVar7;
      if (*(short *)(lVar12 + 0x10 + lVar3) != 0) {
        *(undefined1 *)(lVar12 + 0x12 + lVar3) = *(undefined1 *)puVar7;
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
        *(undefined1 *)(lVar12 + 0x13 + lVar3) = **(undefined1 **)(param_2 + 8);
        puVar8 = (undefined4 *)(*(longlong *)(param_2 + 8) + 1);
        *(undefined4 **)(param_2 + 8) = puVar8;
        *(undefined4 *)(lVar12 + 8 + lVar3) = *puVar8;
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
        *(undefined4 *)(lVar12 + 0xc + lVar3) = **(undefined4 **)(param_2 + 8);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
        uVar1 = *(ushort *)(lVar12 + 0x10 + lVar3);
        if (uVar1 != 0) {
          iVar5 = (uint)uVar1 *
                  ((*(byte *)(lVar12 + 0x12 + lVar3) + 1) * 3 +
                  (uint)*(byte *)(lVar12 + 0x13 + lVar3)) + -1;
          iVar5 = (((int)(iVar5 + (iVar5 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
          iVar5 = ((int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3) + 4;
        }
        if (iVar5 != 0) {
          lVar6 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar5,4);
        }
        *(longlong *)(lVar12 + lVar3) = lVar6;
                    // WARNING: Subroutine does not return
        memcpy(lVar6,*(undefined8 *)(param_2 + 8),(longlong)iVar5);
      }
      lVar3 = *param_1;
      uVar11 = *puVar7;
      *(longlong *)(param_2 + 8) = lVar4 + 6;
      *(short *)(lVar12 + 0x48 + lVar3) = (short)uVar11;
      if ((short)uVar11 != 0) {
        lVar10 = lVar6;
        if ((uVar11 & 0xffff) != 0) {
          lVar10 = FUN_18062b420(_DAT_180c8ed18,(uVar11 & 0xffff) * 4,4);
          uVar11 = (uint)*(ushort *)(lVar12 + 0x48 + lVar3);
        }
        *(longlong *)(lVar12 + 0x40 + lVar3) = lVar10;
        if ((ulonglong)(uVar11 & 0xffff) != 0) {
          lVar6 = FUN_18062b420(_DAT_180c8ed18,(ulonglong)(uVar11 & 0xffff) << 4,4);
          uVar11 = (uint)*(ushort *)(lVar12 + 0x48 + lVar3);
          lVar10 = *(longlong *)(lVar12 + 0x40 + lVar3);
        }
        *(longlong *)(lVar12 + 0x38 + lVar3) = lVar6;
                    // WARNING: Subroutine does not return
        memcpy(lVar10,*(undefined8 *)(param_2 + 8),(ulonglong)(uVar11 & 0xffff) << 2);
      }
      lVar3 = *param_1;
      uVar11 = **(uint **)(param_2 + 8);
      *(uint **)(param_2 + 8) = *(uint **)(param_2 + 8) + 1;
      *(short *)(lVar12 + 0x36 + lVar3) = (short)uVar11;
      if ((short)uVar11 != 0) {
        lVar10 = lVar6;
        if ((uVar11 & 0xffff) != 0) {
          lVar10 = FUN_18062b420(_DAT_180c8ed18,(uVar11 & 0xffff) * 4,4);
          uVar11 = (uint)*(ushort *)(lVar12 + 0x36 + lVar3);
        }
        *(longlong *)(lVar12 + 0x2e + lVar3) = lVar10;
        if ((ulonglong)(uVar11 & 0xffff) != 0) {
          lVar6 = FUN_18062b420(_DAT_180c8ed18,(ulonglong)(uVar11 & 0xffff) << 4,4);
          uVar11 = (uint)*(ushort *)(lVar12 + 0x36 + lVar3);
          lVar10 = *(longlong *)(lVar12 + 0x2e + lVar3);
        }
        *(longlong *)(lVar12 + 0x26 + lVar3) = lVar6;
                    // WARNING: Subroutine does not return
        memcpy(lVar10,*(undefined8 *)(param_2 + 8),(ulonglong)(uVar11 & 0xffff) << 2);
      }
      lVar10 = lVar10 + -1;
      lVar12 = lVar12 + 0x4a;
    } while (lVar10 != 0);
  }
  FUN_180562d60(param_1 + 4,param_2);
  puVar9 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,4);
  *puVar9 = 0;
  *(undefined4 *)(puVar9 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
  *(undefined1 *)(puVar9 + 2) = 0;
  puVar9[3] = 0;
  *(undefined1 *)(puVar9 + 4) = 0;
  param_1[7] = (longlong)puVar9;
  FUN_180562e50(puVar9,param_2,param_1);
  *(undefined4 *)((longlong)param_1 + 0x54) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180562d60(undefined8 *param_1,longlong param_2)
void FUN_180562d60(undefined8 *param_1,longlong param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar1 = **(undefined2 **)(param_2 + 8);
  *(undefined2 *)(param_1 + 2) = uVar1;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 2;
  if (*(short *)(param_1 + 2) != 0) {
    uVar4 = 0;
    *(undefined1 *)((longlong)param_1 + 0x12) = **(undefined1 **)(param_2 + 8);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
    *(undefined1 *)((longlong)param_1 + 0x13) = **(undefined1 **)(param_2 + 8);
    puVar3 = (undefined4 *)(*(longlong *)(param_2 + 8) + 1);
    *(undefined4 **)(param_2 + 8) = puVar3;
    *(undefined4 *)(param_1 + 1) = *puVar3;
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
    *(undefined4 *)((longlong)param_1 + 0xc) = **(undefined4 **)(param_2 + 8);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
    if (*(ushort *)(param_1 + 2) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = ((uint)*(byte *)((longlong)param_1 + 0x12) +
               (uint)*(byte *)((longlong)param_1 + 0x12) * 2 +
              (uint)*(byte *)((longlong)param_1 + 0x13)) * (uint)*(ushort *)(param_1 + 2) + -1;
      iVar2 = (((int)(iVar2 + (iVar2 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
      iVar2 = ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) + 4;
    }
    if (iVar2 != 0) {
      uVar4 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar2,
                            CONCAT71((uint7)(byte)((ushort)uVar1 >> 8),4));
    }
    *param_1 = uVar4;
                    // WARNING: Subroutine does not return
    memcpy(uVar4,*(undefined8 *)(param_2 + 8),(longlong)iVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180562da2(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_180562da2(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *in_RAX;
  undefined4 *puVar2;
  longlong unaff_RBX;
  undefined8 *unaff_RDI;
  
  *(undefined1 *)((longlong)unaff_RDI + 0x13) = *in_RAX;
  puVar2 = (undefined4 *)(*(longlong *)(param_2 + 8) + 1);
  *(undefined4 **)(param_2 + 8) = puVar2;
  *(undefined4 *)(unaff_RDI + 1) = *puVar2;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  if (*(ushort *)(unaff_RDI + 2) == 0) {
    iVar1 = (int)param_4;
  }
  else {
    iVar1 = ((uint)*(byte *)((longlong)unaff_RDI + 0x12) +
             (uint)*(byte *)((longlong)unaff_RDI + 0x12) * 2 +
            (uint)*(byte *)((longlong)unaff_RDI + 0x13)) * (uint)*(ushort *)(unaff_RDI + 2) + -1;
    iVar1 = (((int)(iVar1 + (iVar1 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
    iVar1 = ((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3) + 4;
  }
  if (iVar1 != 0) {
    param_4 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar1,4);
  }
  *unaff_RDI = param_4;
                    // WARNING: Subroutine does not return
  memcpy(param_4,*(undefined8 *)(unaff_RBX + 8),(longlong)iVar1);
}





// 函数: void FUN_180562e44(void)
void FUN_180562e44(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180562e50(undefined8 *param_1,longlong param_2,undefined8 param_3)
void FUN_180562e50(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  *param_1 = param_3;
  uVar1 = **(undefined4 **)(param_2 + 8);
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)((longlong)param_1 + 0xc) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined1 *)(param_1 + 2) = **(undefined1 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
  *(undefined1 *)(param_1 + 4) = **(undefined1 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
  iVar2 = (int)*(char *)(param_1 + 4) * (int)*(char *)(param_1 + 2) *
          *(int *)((longlong)param_1 + 0xc) + -1;
  iVar2 = (((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
  iVar2 = ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) + 2;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar2,
                          CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),4));
  }
  param_1[3] = uVar3;
                    // WARNING: Subroutine does not return
  memcpy(uVar3,*(undefined8 *)(param_2 + 8),(longlong)iVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180562f10(longlong param_1)
void FUN_180562f10(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
  *puVar1 = &UNK_180a35f78;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



