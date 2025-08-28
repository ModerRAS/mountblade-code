#include "TaleWorlds.Native.Split.h"

// 99_part_01_part063.c - 3 个函数

// 函数: void FUN_1800e1530(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_1800e1530(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  longlong lVar3;
  char cVar4;
  int32_t uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint64_t *puVar9;
  ulonglong uVar10;
  int8_t *puVar11;
  int8_t *puVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  int8_t auStack_138 [32];
  int8_t uStack_118;
  int32_t uStack_108;
  uint64_t *puStack_100;
  uint64_t *puStack_f8;
  ulonglong uStack_f0;
  uint64_t uStack_e8;
  void *puStack_e0;
  int8_t *puStack_d8;
  uint uStack_d0;
  uint uStack_c8;
  uint uStack_c4;
  void *puStack_c0;
  uint64_t *puStack_b8;
  int32_t uStack_b0;
  ulonglong uStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int8_t *puStack_68;
  uint uStack_60;
  uint64_t uStack_58;
  ulonglong uStack_50;
  
  uStack_78 = 0xfffffffffffffffe;
  uStack_50 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  lStack_90 = param_5;
  lStack_88 = param_6;
  lStack_80 = param_7;
  iVar15 = 0;
  iVar16 = 0;
  uStack_108 = 0;
  puStack_c0 = &UNK_180a3c3e0;
  uStack_a8 = 0;
  puStack_b8 = (uint64_t *)0x0;
  uStack_b0 = 0;
  lStack_a0 = param_3;
  lStack_98 = param_4;
  puVar9 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar9 = 0;
  puStack_b8 = puVar9;
  uVar5 = FUN_18064e990(puVar9);
  uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar5);
  *puVar9 = 0x68736e6565726373;
  *(int32_t *)(puVar9 + 1) = 0x73746f;
  uStack_b0 = 0xb;
  FUN_180624910(&puStack_c0);
  cVar4 = FUN_180624a00(&puStack_c0);
  if (cVar4 != '\0') {
    puStack_100 = (uint64_t *)0x0;
    puStack_f8 = (uint64_t *)0x0;
    uStack_f0 = 0;
    uStack_e8 = CONCAT44(uStack_e8._4_4_,3);
    FUN_18062c5f0(&puStack_c0,&puStack_100);
    puVar2 = puStack_f8;
    puVar1 = puStack_100;
    uVar17 = (longlong)puStack_f8 - (longlong)puStack_100 >> 5;
    uVar13 = 0;
    puVar9 = puVar1;
    iVar16 = 0;
    if (uVar17 != 0) {
      uVar10 = 0;
      do {
        cVar4 = FUN_180624a00(puVar1 + uVar10 * 4);
        if (cVar4 != '\0') {
          iVar15 = iVar15 + 1;
        }
        uVar13 = uVar13 + 1;
        uVar10 = (ulonglong)uVar13;
        iVar16 = iVar15;
      } while (uVar10 < uVar17);
    }
    for (; puVar9 != puVar2; puVar9 = puVar9 + 4) {
      (**(code **)*puVar9)(puVar9,0);
    }
    if (puVar1 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar1);
    }
  }
  puVar11 = (int8_t *)0x0;
  FUN_180627e10(&puStack_c0,&puStack_e0,&UNK_180a04558);
  FUN_180060680(&uStack_70,&UNK_1809fd0a0,iVar16);
  lVar3 = -1;
  do {
    lVar14 = lVar3;
    lVar3 = lVar14 + 1;
  } while (*(char *)((longlong)&uStack_70 + lVar14 + 1) != '\0');
  iVar16 = (int)(lVar14 + 1);
  if (0 < iVar16) {
    iVar16 = uStack_d0 + iVar16;
    if (iVar16 != 0) {
      uVar13 = iVar16 + 1;
      if (puStack_d8 == (int8_t *)0x0) {
        if ((int)uVar13 < 0x10) {
          uVar13 = 0x10;
        }
        puStack_d8 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar13,0x13);
        *puStack_d8 = 0;
      }
      else {
        if (uVar13 <= uStack_c8) goto LAB_1800e175d;
        uStack_118 = 0x13;
        puStack_d8 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_d8,uVar13,0x10);
      }
      uStack_c8 = FUN_18064e990(puStack_d8);
    }
LAB_1800e175d:
                    // WARNING: Subroutine does not return
    memcpy(puStack_d8 + uStack_d0,&uStack_70,(longlong)((int)lVar14 + 2));
  }
  FUN_180624910(&puStack_e0);
  uVar13 = uStack_d0;
  uVar6 = 0;
  uStack_70 = &UNK_180a3c3e0;
  uStack_58 = 0;
  puStack_68 = (int8_t *)0x0;
  uStack_60 = 0;
  uStack_108 = 2;
  uVar17 = (ulonglong)uStack_d0;
  puVar12 = puVar11;
  if (puStack_d8 == (int8_t *)0x0) {
LAB_1800e1810:
    uVar6 = (uint)puVar12;
    if (uVar13 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar11,puStack_d8,uVar17);
    }
  }
  else if (uStack_d0 != 0) {
    iVar16 = uStack_d0 + 1;
    if (iVar16 < 0x10) {
      iVar16 = 0x10;
    }
    puVar11 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar16,0x13);
    *puVar11 = 0;
    puStack_68 = puVar11;
    puVar12 = (int8_t *)FUN_18064e990(puVar11);
    uStack_58 = CONCAT44(uStack_58._4_4_,(int)puVar12);
    goto LAB_1800e1810;
  }
  uStack_60 = uVar13;
  if (puVar11 != (int8_t *)0x0) {
    puVar11[uVar17] = 0;
  }
  uStack_58._4_4_ = uStack_c4;
  if (uVar13 + 7 != 0) {
    uVar8 = uVar13 + 8;
    if (puVar11 == (int8_t *)0x0) {
      if ((int)uVar8 < 0x10) {
        uVar8 = 0x10;
      }
      puVar11 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar8,0x13);
      *puVar11 = 0;
    }
    else {
      if (uVar8 <= uVar6) goto LAB_1800e189d;
      uStack_118 = 0x13;
      puVar11 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar11,uVar8,0x10);
    }
    puStack_68 = puVar11;
    uStack_58._0_4_ = FUN_18064e990(puVar11);
  }
LAB_1800e189d:
  *(uint64_t *)(puVar11 + uVar17) = 0x6e65657263732f;
  uStack_60 = uVar13 + 7;
  FUN_18005d190(param_1,&uStack_70);
  uStack_108 = 0;
  uStack_70 = &UNK_180a3c3e0;
  if (puStack_68 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_68 = (int8_t *)0x0;
  uStack_58 = (ulonglong)uStack_58._4_4_ << 0x20;
  uStack_70 = &UNK_18098bcb0;
  FUN_180624910(param_1);
  iVar16 = *(int *)(param_1 + 0x10) + 1;
  FUN_1806277c0(param_1,iVar16);
  uVar13 = uStack_d0;
  *(int16_t *)((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8)) = 0x2f;
  *(int *)(param_1 + 0x10) = iVar16;
  puVar12 = (int8_t *)0x0;
  uVar8 = 0;
  uVar18 = 0;
  puStack_100 = (uint64_t *)&UNK_180a3c3e0;
  uStack_e8 = 0;
  puStack_f8 = (uint64_t *)0x0;
  uStack_f0 = uStack_f0 & 0xffffffff00000000;
  uStack_108 = 4;
  uVar17 = (ulonglong)uStack_d0;
  puVar11 = puVar12;
  uVar6 = uVar8;
  if (puStack_d8 == (int8_t *)0x0) {
LAB_1800e19a6:
    uVar18 = uVar6;
    if (uVar13 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar11,puStack_d8,uVar17);
    }
  }
  else if (uStack_d0 != 0) {
    iVar16 = uStack_d0 + 1;
    if (iVar16 < 0x10) {
      iVar16 = 0x10;
    }
    puVar11 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar16,0x13);
    *puVar11 = 0;
    puStack_f8 = (uint64_t *)puVar11;
    uVar6 = FUN_18064e990(puVar11);
    uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar6);
    goto LAB_1800e19a6;
  }
  if (puVar11 != (int8_t *)0x0) {
    puVar11[uVar17] = 0;
  }
  uStack_e8._4_4_ = uStack_c4;
  if (uVar13 + 6 != 0) {
    uVar6 = uVar13 + 7;
    if (puVar11 == (int8_t *)0x0) {
      if ((int)uVar6 < 0x10) {
        uVar6 = 0x10;
      }
      puVar11 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar6,0x13);
      *puVar11 = 0;
    }
    else {
      if (uVar6 <= uVar18) goto LAB_1800e1a38;
      uStack_118 = 0x13;
      puVar11 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar11,uVar6,0x10);
    }
    puStack_f8 = (uint64_t *)puVar11;
    uStack_e8._0_4_ = FUN_18064e990(puVar11);
  }
LAB_1800e1a38:
  *(int32_t *)(puVar11 + uVar17) = 0x7065642f;
  *(int16_t *)(puVar11 + uVar17 + 4) = 0x6874;
  puVar11[uVar17 + 6] = 0;
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar13 + 6);
  FUN_18005d190(param_2,&puStack_100);
  uStack_108 = 0;
  puStack_100 = (uint64_t *)&UNK_180a3c3e0;
  if (puStack_f8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_f8 = (uint64_t *)0x0;
  uStack_e8 = (ulonglong)uStack_e8._4_4_ << 0x20;
  puStack_100 = (uint64_t *)&UNK_18098bcb0;
  FUN_180624910(param_2);
  iVar16 = *(int *)(param_2 + 0x10) + 1;
  FUN_1806277c0(param_2,iVar16);
  uVar13 = uStack_d0;
  *(int16_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 0x2f;
  *(int *)(param_2 + 0x10) = iVar16;
  uStack_70 = &UNK_180a3c3e0;
  uVar18 = 0;
  uStack_58 = 0;
  puStack_68 = (int8_t *)0x0;
  uStack_60 = 0;
  uStack_108 = 8;
  uVar17 = (ulonglong)uStack_d0;
  puVar11 = puVar12;
  uVar6 = uVar8;
  if (puStack_d8 == (int8_t *)0x0) {
LAB_1800e1b4e:
    if (uVar13 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar11,puStack_d8,uVar17);
    }
  }
  else {
    uVar6 = uVar18;
    if (uStack_d0 != 0) {
      iVar16 = uStack_d0 + 1;
      if (iVar16 < 0x10) {
        iVar16 = 0x10;
      }
      puVar11 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar16,0x13);
      *puVar11 = 0;
      puStack_68 = puVar11;
      uVar6 = FUN_18064e990(puVar11);
      uStack_58 = CONCAT44(uStack_58._4_4_,uVar6);
      goto LAB_1800e1b4e;
    }
  }
  uStack_60 = uVar13;
  if (puVar11 != (int8_t *)0x0) {
    puVar11[uVar17] = 0;
  }
  uStack_58._4_4_ = uStack_c4;
  if (uVar13 + 8 != 0) {
    uVar7 = uVar13 + 9;
    if (puVar11 == (int8_t *)0x0) {
      if ((int)uVar7 < 0x10) {
        uVar7 = 0x10;
      }
      puVar11 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar7,0x13);
      *puVar11 = 0;
    }
    else {
      if (uVar7 <= uVar6) goto LAB_1800e1bd4;
      uStack_118 = 0x13;
      puVar11 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar11,uVar7,0x10);
    }
    puStack_68 = puVar11;
    uStack_58._0_4_ = FUN_18064e990(puVar11);
  }
LAB_1800e1bd4:
  lVar3 = lStack_a0;
  *(uint64_t *)(puVar11 + uVar17) = 0x736c616d726f6e2f;
  puVar11[uVar17 + 8] = 0;
  uStack_60 = uVar13 + 8;
  FUN_18005d190(lStack_a0,&uStack_70);
  uStack_108 = 0;
  uStack_70 = &UNK_180a3c3e0;
  if (puStack_68 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_68 = (int8_t *)0x0;
  uStack_58 = (ulonglong)uStack_58._4_4_ << 0x20;
  uStack_70 = &UNK_18098bcb0;
  FUN_180624910(lVar3);
  iVar16 = *(int *)(lVar3 + 0x10) + 1;
  FUN_1806277c0(lVar3,iVar16);
  uVar13 = uStack_d0;
  *(int16_t *)((ulonglong)*(uint *)(lVar3 + 0x10) + *(longlong *)(lVar3 + 8)) = 0x2f;
  *(int *)(lVar3 + 0x10) = iVar16;
  puStack_100 = (uint64_t *)&UNK_180a3c3e0;
  uStack_e8 = 0;
  puStack_f8 = (uint64_t *)0x0;
  uStack_f0 = uStack_f0 & 0xffffffff00000000;
  uStack_108 = 0x10;
  uVar17 = (ulonglong)uStack_d0;
  puVar11 = puVar12;
  uVar6 = uVar8;
  if (puStack_d8 == (int8_t *)0x0) {
LAB_1800e1cdb:
    if (uVar13 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar11,puStack_d8,uVar17);
    }
  }
  else {
    uVar6 = uVar18;
    if (uStack_d0 != 0) {
      iVar16 = uStack_d0 + 1;
      if (iVar16 < 0x10) {
        iVar16 = 0x10;
      }
      puVar11 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar16,0x13);
      *puVar11 = 0;
      puStack_f8 = (uint64_t *)puVar11;
      uVar6 = FUN_18064e990(puVar11);
      uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar6);
      goto LAB_1800e1cdb;
    }
  }
  if (puVar11 != (int8_t *)0x0) {
    puVar11[uVar17] = 0;
  }
  uStack_e8._4_4_ = uStack_c4;
  if (uVar13 + 7 != 0) {
    uVar7 = uVar13 + 8;
    if (puVar11 == (int8_t *)0x0) {
      if ((int)uVar7 < 0x10) {
        uVar7 = 0x10;
      }
      puVar11 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar7,0x13);
      *puVar11 = 0;
    }
    else {
      if (uVar7 <= uVar6) goto LAB_1800e1d66;
      uStack_118 = 0x13;
      puVar11 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar11,uVar7,0x10);
    }
    puStack_f8 = (uint64_t *)puVar11;
    uStack_e8._0_4_ = FUN_18064e990(puVar11);
  }
LAB_1800e1d66:
  lVar3 = lStack_98;
  *(uint64_t *)(puVar11 + uVar17) = 0x6f6465626c612f;
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar13 + 7);
  FUN_18005d190(lStack_98,&puStack_100);
  uStack_108 = 0;
  puStack_100 = (uint64_t *)&UNK_180a3c3e0;
  if (puStack_f8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_f8 = (uint64_t *)0x0;
  uStack_e8 = (ulonglong)uStack_e8._4_4_ << 0x20;
  puStack_100 = (uint64_t *)&UNK_18098bcb0;
  FUN_180624910(lVar3);
  iVar16 = *(int *)(lVar3 + 0x10) + 1;
  FUN_1806277c0(lVar3,iVar16);
  uVar13 = uStack_d0;
  *(int16_t *)((ulonglong)*(uint *)(lVar3 + 0x10) + *(longlong *)(lVar3 + 8)) = 0x2f;
  *(int *)(lVar3 + 0x10) = iVar16;
  uStack_70 = &UNK_180a3c3e0;
  uStack_58 = 0;
  puStack_68 = (int8_t *)0x0;
  uStack_60 = 0;
  uStack_108 = 0x20;
  uVar17 = (ulonglong)uStack_d0;
  puVar11 = puVar12;
  uVar6 = uVar8;
  if (puStack_d8 == (int8_t *)0x0) {
LAB_1800e1e60:
    if (uVar13 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar11,puStack_d8,uVar17);
    }
  }
  else {
    uVar6 = uVar18;
    if (uStack_d0 != 0) {
      iVar16 = uStack_d0 + 1;
      if (iVar16 < 0x10) {
        iVar16 = 0x10;
      }
      puVar11 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar16,0x13);
      *puVar11 = 0;
      puStack_68 = puVar11;
      uVar6 = FUN_18064e990(puVar11);
      uStack_58 = CONCAT44(uStack_58._4_4_,uVar6);
      goto LAB_1800e1e60;
    }
  }
  uStack_60 = uVar13;
  if (puVar11 != (int8_t *)0x0) {
    puVar11[uVar17] = 0;
  }
  uStack_58._4_4_ = uStack_c4;
  if (uVar13 + 0xc != 0) {
    uVar7 = uVar13 + 0xd;
    if (puVar11 == (int8_t *)0x0) {
      if ((int)uVar7 < 0x10) {
        uVar7 = 0x10;
      }
      puVar11 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar7,0x13);
      *puVar11 = 0;
    }
    else {
      if (uVar7 <= uVar6) goto LAB_1800e1ee6;
      uStack_118 = 0x13;
      puVar11 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar11,uVar7,0x10);
    }
    puStack_68 = puVar11;
    uStack_58._0_4_ = FUN_18064e990(puVar11);
  }
LAB_1800e1ee6:
  lVar3 = lStack_90;
  *(uint64_t *)(puVar11 + uVar17) = 0x616c75636570732f;
  *(int32_t *)(puVar11 + uVar17 + 8) = 0x79746972;
  puVar11[uVar17 + 0xc] = 0;
  uStack_60 = uVar13 + 0xc;
  FUN_18005d190(lStack_90,&uStack_70);
  uStack_108 = 0;
  uStack_70 = &UNK_180a3c3e0;
  if (puStack_68 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_68 = (int8_t *)0x0;
  uStack_58 = (ulonglong)uStack_58._4_4_ << 0x20;
  uStack_70 = &UNK_18098bcb0;
  FUN_180624910(lVar3);
  iVar16 = *(int *)(lVar3 + 0x10) + 1;
  FUN_1806277c0(lVar3,iVar16);
  uVar13 = uStack_d0;
  *(int16_t *)((ulonglong)*(uint *)(lVar3 + 0x10) + *(longlong *)(lVar3 + 8)) = 0x2f;
  *(int *)(lVar3 + 0x10) = iVar16;
  puStack_100 = (uint64_t *)&UNK_180a3c3e0;
  uStack_e8 = 0;
  puStack_f8 = (uint64_t *)0x0;
  uStack_f0 = uStack_f0 & 0xffffffff00000000;
  uStack_108 = 0x40;
  uVar17 = (ulonglong)uStack_d0;
  puVar11 = puVar12;
  uVar6 = uVar8;
  if (puStack_d8 == (int8_t *)0x0) {
LAB_1800e1ff7:
    if (uVar13 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar11,puStack_d8,uVar17);
    }
  }
  else {
    uVar6 = uVar18;
    if (uStack_d0 != 0) {
      iVar16 = uStack_d0 + 1;
      if (iVar16 < 0x10) {
        iVar16 = 0x10;
      }
      puVar11 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar16,0x13);
      *puVar11 = 0;
      puStack_f8 = (uint64_t *)puVar11;
      uVar6 = FUN_18064e990(puVar11);
      uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar6);
      goto LAB_1800e1ff7;
    }
  }
  if (puVar11 != (int8_t *)0x0) {
    puVar11[uVar17] = 0;
  }
  uStack_e8._4_4_ = uStack_c4;
  if (uVar13 + 10 != 0) {
    uVar7 = uVar13 + 0xb;
    if (puVar11 == (int8_t *)0x0) {
      if ((int)uVar7 < 0x10) {
        uVar7 = 0x10;
      }
      puVar11 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar7,0x13);
      *puVar11 = 0;
    }
    else {
      if (uVar7 <= uVar6) goto LAB_1800e2082;
      uStack_118 = 0x13;
      puVar11 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar11,uVar7,0x10);
    }
    puStack_f8 = (uint64_t *)puVar11;
    uStack_e8._0_4_ = FUN_18064e990(puVar11);
  }
LAB_1800e2082:
  lVar3 = lStack_88;
  *(uint64_t *)(puVar11 + uVar17) = 0x6973756c63636f2f;
  *(int16_t *)(puVar11 + uVar17 + 8) = 0x6e6f;
  puVar11[uVar17 + 10] = 0;
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar13 + 10);
  FUN_18005d190(lStack_88,&puStack_100);
  uStack_108 = 0;
  puStack_100 = (uint64_t *)&UNK_180a3c3e0;
  if (puStack_f8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_f8 = (uint64_t *)0x0;
  uStack_e8 = (ulonglong)uStack_e8._4_4_ << 0x20;
  puStack_100 = (uint64_t *)&UNK_18098bcb0;
  FUN_180624910(lVar3);
  iVar16 = *(int *)(lVar3 + 0x10) + 1;
  FUN_1806277c0(lVar3,iVar16);
  *(int16_t *)((ulonglong)*(uint *)(lVar3 + 0x10) + *(longlong *)(lVar3 + 8)) = 0x2f;
  *(int *)(lVar3 + 0x10) = iVar16;
  uStack_70 = &UNK_180a3c3e0;
  uStack_58 = 0;
  puStack_68 = (int8_t *)0x0;
  uStack_60 = 0;
  uStack_108 = 0x80;
  uVar17 = (ulonglong)uStack_d0;
  if (puStack_d8 == (int8_t *)0x0) {
LAB_1800e2194:
    uVar18 = uVar8;
    if (uStack_d0 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar12,puStack_d8,uVar17);
    }
  }
  else if (uStack_d0 != 0) {
    iVar16 = uStack_d0 + 1;
    if (iVar16 < 0x10) {
      iVar16 = 0x10;
    }
    puVar12 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar16,0x13);
    *puVar12 = 0;
    puStack_68 = puVar12;
    uVar8 = FUN_18064e990(puVar12);
    uStack_58 = CONCAT44(uStack_58._4_4_,uVar8);
    goto LAB_1800e2194;
  }
  uStack_60 = uStack_d0;
  if (puVar12 != (int8_t *)0x0) {
    puVar12[uVar17] = 0;
  }
  uStack_58._4_4_ = uStack_c4;
  if (uStack_d0 + 6 != 0) {
    uVar13 = uStack_d0 + 7;
    if (puVar12 == (int8_t *)0x0) {
      if ((int)uVar13 < 0x10) {
        uVar13 = 0x10;
      }
      puVar12 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar13,0x13);
      *puVar12 = 0;
    }
    else {
      if (uVar13 <= uVar18) goto LAB_1800e221a;
      uStack_118 = 0x13;
      puVar12 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar12,uVar13,0x10);
    }
    puStack_68 = puVar12;
    uStack_58._0_4_ = FUN_18064e990(puVar12);
  }
LAB_1800e221a:
  lVar3 = lStack_80;
  *(int32_t *)(puVar12 + uVar17) = 0x6e69662f;
  *(int16_t *)(puVar12 + uVar17 + 4) = 0x6c61;
  puVar12[uVar17 + 6] = 0;
  uStack_60 = uStack_d0 + 6;
  FUN_18005d190(lStack_80,&uStack_70);
  uStack_108 = 0;
  uStack_70 = &UNK_180a3c3e0;
  if (puStack_68 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_68 = (int8_t *)0x0;
  uStack_58 = (ulonglong)uStack_58._4_4_ << 0x20;
  uStack_70 = &UNK_18098bcb0;
  FUN_180624910(lVar3);
  iVar16 = *(int *)(lVar3 + 0x10) + 1;
  FUN_1806277c0(lVar3,iVar16);
  *(int16_t *)((ulonglong)*(uint *)(lVar3 + 0x10) + *(longlong *)(lVar3 + 8)) = 0x2f;
  *(int *)(lVar3 + 0x10) = iVar16;
  puStack_e0 = &UNK_180a3c3e0;
  if (puStack_d8 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_d8 = (int8_t *)0x0;
  uStack_c8 = 0;
  puStack_e0 = &UNK_18098bcb0;
  puStack_c0 = &UNK_180a3c3e0;
  if (puStack_b8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_b8 = (uint64_t *)0x0;
  uStack_a8 = uStack_a8 & 0xffffffff00000000;
  puStack_c0 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e2310(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_1800e2310(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  int32_t param_5,uint64_t param_6)

{
  longlong lVar1;
  int iVar2;
  int32_t uVar3;
  int8_t *puVar4;
  longlong lVar5;
  int iVar6;
  void *puVar7;
  int8_t auStack_2b8 [32];
  uint64_t uStack_298;
  int32_t uStack_290;
  uint64_t uStack_288;
  void *puStack_278;
  int8_t *puStack_270;
  int32_t uStack_268;
  ulonglong uStack_260;
  uint64_t uStack_258;
  char acStack_248 [512];
  ulonglong uStack_48;
  
  uStack_258 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_2b8;
  if (*(char *)(param_1 + 900) != '\0') {
    puVar7 = &system_buffer_ptr;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar7 = *(void **)(param_3 + 8);
    }
    uStack_288 = param_6;
    uStack_290 = param_5;
    uStack_298 = param_4;
    FUN_180626eb0(acStack_248,0x200,&UNK_180a045d0,puVar7);
    FUN_18023a940(param_1);
    puStack_278 = &UNK_180a3c3e0;
    uStack_260 = 0;
    puStack_270 = (int8_t *)0x0;
    uStack_268 = 0;
    lVar1 = -1;
    do {
      lVar5 = lVar1;
      lVar1 = lVar5 + 1;
    } while (acStack_248[lVar5 + 1] != '\0');
    if ((int)(lVar5 + 1) != 0) {
      iVar6 = (int)lVar5 + 2;
      iVar2 = iVar6;
      if (iVar6 < 0x10) {
        iVar2 = 0x10;
      }
      puVar4 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar2,0x13);
      *puVar4 = 0;
      puStack_270 = puVar4;
      uVar3 = FUN_18064e990(puVar4);
      uStack_260 = CONCAT44(uStack_260._4_4_,uVar3);
                    // WARNING: Subroutine does not return
      memcpy(puVar4,acStack_248,iVar6);
    }
    uStack_268 = 0;
    FUN_180225ee0();
    puStack_278 = &UNK_180a3c3e0;
    if (puStack_270 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_270 = (int8_t *)0x0;
    uStack_260 = uStack_260 & 0xffffffff00000000;
    puStack_278 = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_2b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e24b0(uint64_t param_1,longlong param_2)
void FUN_1800e24b0(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  int32_t uVar2;
  int8_t auStack_218 [32];
  void **ppuStack_1f8;
  void **ppuStack_1f0;
  void **ppuStack_1e8;
  void *puStack_1d8;
  longlong lStack_1d0;
  int32_t uStack_1c8;
  ulonglong uStack_1c0;
  void *puStack_1b8;
  longlong lStack_1b0;
  int32_t uStack_1a8;
  ulonglong uStack_1a0;
  void *puStack_198;
  longlong lStack_190;
  int32_t uStack_188;
  ulonglong uStack_180;
  void *puStack_178;
  longlong lStack_170;
  int32_t uStack_168;
  ulonglong uStack_160;
  void *puStack_158;
  longlong lStack_150;
  int32_t uStack_148;
  ulonglong uStack_140;
  void *puStack_138;
  longlong lStack_130;
  int32_t uStack_128;
  ulonglong uStack_120;
  void *puStack_118;
  longlong lStack_110;
  int32_t uStack_108;
  ulonglong uStack_100;
  uint64_t uStack_f8;
  void **ppuStack_f0;
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *apuStack_88 [12];
  ulonglong uStack_28;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_218;
  FUN_18024c0f0(param_2,apuStack_88);
  ppuStack_f0 = &puStack_e8;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  uStack_d8 = 0;
  auStack_d0[0] = 0;
  FUN_180049bf0(&puStack_e8,&UNK_180a045a8);
  FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_e8);
  if (*(int *)(param_2 + 0x1bdc) != 0) {
    if (*(int *)(param_2 + 0x1bdc) == 3) {
      puStack_198 = &UNK_180a3c3e0;
      uStack_180 = 0;
      lStack_190 = 0;
      uStack_188 = 0;
      puStack_1b8 = &UNK_180a3c3e0;
      uStack_1a0 = 0;
      lStack_1b0 = 0;
      uStack_1a8 = 0;
      puStack_118 = &UNK_180a3c3e0;
      uStack_100 = 0;
      lStack_110 = 0;
      uStack_108 = 0;
      puStack_138 = &UNK_180a3c3e0;
      uStack_120 = 0;
      lStack_130 = 0;
      uStack_128 = 0;
      puStack_158 = &UNK_180a3c3e0;
      uStack_140 = 0;
      lStack_150 = 0;
      uStack_148 = 0;
      puStack_178 = &UNK_180a3c3e0;
      uStack_160 = 0;
      lStack_170 = 0;
      uStack_168 = 0;
      puStack_1d8 = &UNK_180a3c3e0;
      uStack_1c0 = 0;
      lStack_1d0 = 0;
      uStack_1c8 = 0;
      ppuStack_1e8 = &puStack_1d8;
      ppuStack_1f0 = &puStack_178;
      ppuStack_1f8 = &puStack_158;
      FUN_1800e1530(&puStack_198,&puStack_1b8,&puStack_118,&puStack_138);
      uVar2 = *(int32_t *)(param_2 + 0x1bdc);
      lVar1 = FUN_180244ff0(param_2);
      if (lVar1 != 0) {
        ppuStack_1f0 = (void **)&UNK_180a045ec;
        ppuStack_1f8 = (void **)CONCAT44(ppuStack_1f8._4_4_,uVar2);
        FUN_1800e2310(lVar1,9,&puStack_198,&UNK_180a045e0);
      }
      uVar2 = *(int32_t *)(param_2 + 0x1bdc);
      lVar1 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x99d0) + 0x58) + -8) + 0x428);
      if (lVar1 != 0) {
        ppuStack_1f0 = (void **)&UNK_180a045fc;
        ppuStack_1f8 = (void **)CONCAT44(ppuStack_1f8._4_4_,uVar2);
        FUN_1800e2310(lVar1,5,&puStack_1b8,&UNK_180a045f0);
        uVar2 = *(int32_t *)(param_2 + 0x1bdc);
      }
      if (*(longlong *)(param_2 + 0x9690) != 0) {
        ppuStack_1f0 = (void **)&UNK_180a045fc;
        ppuStack_1f8 = (void **)CONCAT44(ppuStack_1f8._4_4_,uVar2);
        FUN_1800e2310(*(longlong *)(param_2 + 0x9690),8,&puStack_1d8,&UNK_180a04620);
      }
      puStack_1d8 = &UNK_180a3c3e0;
      if (lStack_1d0 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_1d0 = 0;
      uStack_1c0 = uStack_1c0 & 0xffffffff00000000;
      puStack_1d8 = &UNK_18098bcb0;
      puStack_178 = &UNK_180a3c3e0;
      if (lStack_170 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_170 = 0;
      uStack_160 = uStack_160 & 0xffffffff00000000;
      puStack_178 = &UNK_18098bcb0;
      puStack_158 = &UNK_180a3c3e0;
      if (lStack_150 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_150 = 0;
      uStack_140 = uStack_140 & 0xffffffff00000000;
      puStack_158 = &UNK_18098bcb0;
      puStack_138 = &UNK_180a3c3e0;
      if (lStack_130 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_130 = 0;
      uStack_120 = uStack_120 & 0xffffffff00000000;
      puStack_138 = &UNK_18098bcb0;
      puStack_118 = &UNK_180a3c3e0;
      if (lStack_110 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_110 = 0;
      uStack_100 = uStack_100 & 0xffffffff00000000;
      puStack_118 = &UNK_18098bcb0;
      puStack_1b8 = &UNK_180a3c3e0;
      if (lStack_1b0 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_1b0 = 0;
      uStack_1a0 = uStack_1a0 & 0xffffffff00000000;
      puStack_1b8 = &UNK_18098bcb0;
      puStack_198 = &UNK_180a3c3e0;
      if (lStack_190 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_190 = 0;
      uStack_180 = uStack_180 & 0xffffffff00000000;
      puStack_198 = &UNK_18098bcb0;
    }
    Sleep(10);
  }
  FUN_1802c2ac0(&puStack_e8);
  apuStack_88[0] = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_218);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




