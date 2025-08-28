#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part200.c - 1 个函数

// 函数: void FUN_18017ef40(void)
void FUN_18017ef40(void)

{
  longlong lVar1;
  code ****ppppcVar2;
  code *pcVar3;
  code ******ppppppcVar4;
  code *****pppppcVar5;
  int32_t uVar6;
  int iVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  longlong lVar10;
  code *****pppppcVar11;
  code ******ppppppcVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  void *puVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  int8_t auStack_1b8 [32];
  code ***pppcStack_198;
  code *****pppppcStack_188;
  code *****pppppcStack_180;
  code *****pppppcStack_178;
  code ***pppcStack_170;
  int32_t *puStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  int8_t uStack_150;
  void *puStack_148;
  int32_t *puStack_140;
  int32_t uStack_138;
  uint64_t uStack_130;
  int32_t uStack_128;
  uint64_t uStack_120;
  void *puStack_118;
  int8_t *puStack_110;
  int32_t uStack_108;
  int8_t auStack_100 [32];
  void *puStack_e0;
  int8_t *puStack_d8;
  int32_t uStack_d0;
  int8_t auStack_c8 [32];
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [32];
  void *puStack_70;
  int8_t *puStack_68;
  int32_t uStack_60;
  int8_t auStack_58 [32];
  ulonglong uStack_38;
  
  lVar13 = _DAT_180c86870;
  uStack_120 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_1b8;
  uVar15 = 0;
  uStack_128 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
               0x48) < _DAT_180d49620) && (FUN_1808fcb90(&DAT_180d49620), _DAT_180d49620 == -1)) {
    _DAT_180d49628 = 0;
    FUN_1808fc820(&UNK_180941b00);
    FUN_1808fcb30(&DAT_180d49620);
  }
  uStack_150 = 0;
  iVar7 = *(int *)(lVar13 + 0x318);
  if (iVar7 == 0) {
    uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
    pppppcStack_178 = (code *****)&pppcStack_170;
    uStack_160 = &UNK_180180900;
    uStack_158 = &UNK_1801808f0;
    pppppcStack_180 = (code *****)FUN_18006b640(uVar8,&pppcStack_170);
    pppppcStack_188 = pppppcStack_180;
    if ((code ******)pppppcStack_180 != (code ******)0x0) {
      (*(code *)(*pppppcStack_180)[5])(pppppcStack_180);
    }
    uVar8 = _DAT_180c82868;
    pppppcStack_178 = (code *****)&pppppcStack_180;
    if ((code ******)pppppcStack_180 != (code ******)0x0) {
      (*(code *)(*pppppcStack_180)[5])(pppppcStack_180);
    }
    FUN_18005e110(uVar8,&pppppcStack_180);
    FUN_1800b88d0(lVar13 + 800,&pppppcStack_188);
    iVar7 = *(int *)(lVar13 + 0x340);
    if (iVar7 == 2) {
      _DAT_180c91020 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
      *_DAT_180c91020 = 0;
      _DAT_180c91020[1] = 0;
      _DAT_180c91020[2] = 0;
      FUN_1806536d0();
      FUN_180653940();
      iVar7 = *(int *)(lVar13 + 0x340);
    }
    if (iVar7 == 3) {
      _DAT_180c91030 = FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
      FUN_180653ef0();
      lVar13 = _DAT_180c91030;
      pppcStack_170 = (code ***)&UNK_180a3c3e0;
      uStack_158 = (void *)0x0;
      puStack_168 = (int32_t *)0x0;
      uStack_160 = (void *)((ulonglong)uStack_160 & 0xffffffff00000000);
      puVar9 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x18,0x13);
      *(int8_t *)puVar9 = 0;
      puStack_168 = puVar9;
      uVar6 = FUN_18064e990(puVar9);
      uStack_158 = (void *)CONCAT44(uStack_158._4_4_,uVar6);
      *puVar9 = 0x65726f63;
      puVar9[1] = 0x5f726c63;
      puVar9[2] = 0x61657263;
      puVar9[3] = 0x645f6574;
      *(uint64_t *)(puVar9 + 4) = 0x65746167656c65;
      uStack_160 = (void *)CONCAT44(uStack_160._4_4_,0x17);
      GetProcAddress(*(uint64_t *)(lVar13 + 0x10),puVar9);
      pppcStack_170 = (code ***)&UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar9);
    }
    if (*(int *)(lVar13 + 0x340) != 0) {
      pppppcStack_178 = (code *****)FUN_18062b1e0(_DAT_180c8ed18,400,8,3);
      *pppppcStack_178 = (code ****)&UNK_180a3dcb0;
      pppppcStack_178[1] = (code ****)&UNK_180a3dca0;
      pppppcStack_178[2] = (code ****)0x0;
      pppppcStack_180 = pppppcStack_178 + 0x2d;
      *pppppcStack_180 = (code ****)0x0;
      pppppcStack_178[0x2e] = (code ****)0x0;
      pppppcStack_178[0x2f] = (code ****)0x0;
      *(int32_t *)(pppppcStack_178 + 0x30) = 3;
      *(int16_t *)(pppppcStack_178 + 0x31) = 0;
      _DAT_180c8f008 = (code ******)pppppcStack_178;
      *(int32_t *)((longlong)pppppcStack_178 + 0x18c) = 0;
      *(code ******)(lVar13 + 0x40) = pppppcStack_178;
                    // WARNING: Subroutine does not return
      FUN_180062300(_DAT_180c86928,&UNK_180a09c50);
    }
    pppppcStack_178 = (code *****)FUN_18062b1e0(_DAT_180c8ed18,400,8,3);
    *pppppcStack_178 = (code ****)&UNK_180a3dcb0;
    ((code ******)pppppcStack_178)[1] = (code *****)&UNK_180a3dca0;
    ((code ******)pppppcStack_178)[2] = (code *****)0x0;
    pppppcStack_180 = (code *****)((code ******)pppppcStack_178 + 0x2d);
    *pppppcStack_180 = (code ****)0x0;
    ((code ******)pppppcStack_178)[0x2e] = (code *****)0x0;
    ((code ******)pppppcStack_178)[0x2f] = (code *****)0x0;
    *(int32_t *)((code ******)pppppcStack_178 + 0x30) = 3;
    *(int16_t *)((code ******)pppppcStack_178 + 0x31) = 0;
    _DAT_180c8f008 = (code ******)pppppcStack_178;
    *(int32_t *)((longlong)pppppcStack_178 + 0x18c) = 0;
    *pppppcStack_178 = (code ****)&UNK_180a3e030;
    *(code ******)(lVar13 + 0x40) = pppppcStack_178;
    uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x238,8,3);
    uVar8 = FUN_1801504b0(uVar8);
    (**(code **)(**(longlong **)(lVar13 + 0x40) + 8))(*(longlong **)(lVar13 + 0x40),uVar8);
    (**(code **)(**(longlong **)(lVar13 + 0x2b0) + 0x80))
              (*(longlong **)(lVar13 + 0x2b0),*(uint64_t *)(lVar13 + 0x40));
    ppppppcVar12 = (code ******)pppppcStack_188;
    if ((*(int *)(lVar13 + 0x3c) == -1) || (*(int *)(lVar13 + 0x318) + 1 < *(int *)(lVar13 + 0x3c)))
    {
      *(int *)(lVar13 + 0x318) = *(int *)(lVar13 + 0x318) + 1;
    }
  }
  else {
    if (iVar7 == 1) {
      FUN_18005e770(_DAT_180c82868,lVar13 + 800,0);
      FUN_1800b8500(lVar13 + 800);
      lVar1 = _DAT_180c86930;
      plVar18 = *(longlong **)(_DAT_180c86930 + 0x138);
      if (plVar18 != *(longlong **)(_DAT_180c86930 + 0x140)) {
        do {
          lVar14 = *plVar18;
          if ((*(longlong *)(lVar14 + 0x15b8) == 0) && (*(int *)(lVar14 + 0x16c0) != 0)) {
            lVar10 = FUN_1802aaef0(lVar1 + 0xac0,lVar14 + 0x16b0);
            if (lVar10 == 0) {
              uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x50,0x10,3);
              lVar10 = FUN_1800ba230(uVar8,lVar14 + 0x16b0);
              FUN_1802ab0c0(lVar1 + 0xac0,lVar10);
            }
            *(longlong *)(lVar14 + 0x15b8) = lVar10;
          }
          plVar18 = plVar18 + 1;
        } while (plVar18 != *(longlong **)(lVar1 + 0x140));
      }
      FUN_1800b3cc0(lVar1);
      FUN_18018ee00();
      if (*(int *)(lVar13 + 0x3c) != -1) {
        if (*(int *)(lVar13 + 0x318) + 1 < *(int *)(lVar13 + 0x3c)) {
          *(int *)(lVar13 + 0x318) = *(int *)(lVar13 + 0x318) + 1;
        }
        goto LAB_18018054e;
      }
LAB_180180381:
      *(int *)(lVar13 + 0x318) = *(int *)(lVar13 + 0x318) + 1;
      goto LAB_18018054e;
    }
    if (iVar7 == 2) {
      if ((*(int *)(lVar13 + 0x3c) == -1) || (3 < *(int *)(lVar13 + 0x3c))) {
        *(int32_t *)(lVar13 + 0x318) = 3;
      }
      goto LAB_18018054e;
    }
    if (iVar7 == 3) {
      uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
      pppppcStack_178 = (code *****)&pppcStack_170;
      uStack_160 = &UNK_1801808b0;
      uStack_158 = &UNK_1801808a0;
      pppcStack_170 = (code ***)FUN_18021bff0;
      pppppcStack_188 = (code *****)FUN_18006b640(uVar8,&pppcStack_170);
      pppppcStack_180 = pppppcStack_188;
      if (pppppcStack_188 != (code *****)0x0) {
        (*(code *)(*pppppcStack_188)[5])(pppppcStack_188);
      }
      uVar8 = _DAT_180c82868;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      if (pppppcStack_188 != (code *****)0x0) {
        (*(code *)(*pppppcStack_188)[5])(pppppcStack_188);
      }
      FUN_18005e110(uVar8,&pppppcStack_188);
      lVar1 = lVar13 + 800;
      FUN_1800b88d0(lVar1,&pppppcStack_180);
      uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
      pppppcStack_188 = (code *****)&pppcStack_170;
      uStack_160 = &UNK_1801808b0;
      uStack_158 = &UNK_1801808a0;
      pppcStack_170 = (code ***)FUN_18021dc50;
      pppppcVar11 = (code *****)FUN_18006b640(uVar8,&pppcStack_170);
      if (pppppcVar11 != (code *****)0x0) {
        pppppcStack_178 = pppppcVar11;
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      pppppcStack_178 = pppppcStack_180;
      pppppcVar5 = pppppcVar11;
      if (pppppcStack_180 != (code *****)0x0) {
        ppppcVar2 = *pppppcStack_180;
        pppppcStack_180 = pppppcVar11;
        (*(code *)ppppcVar2[7])();
        pppppcVar5 = pppppcStack_180;
      }
      pppppcStack_180 = pppppcVar5;
      uVar8 = _DAT_180c82868;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      pppppcStack_188 = pppppcVar11;
      if (pppppcVar11 != (code *****)0x0) {
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      FUN_18005e110(uVar8,&pppppcStack_188);
      FUN_1800b88d0(lVar1,&pppppcStack_180);
      uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
      pppppcStack_188 = (code *****)&pppcStack_170;
      uStack_160 = &UNK_1801808b0;
      uStack_158 = &UNK_1801808a0;
      pppcStack_170 = (code ***)FUN_18021b090;
      pppppcVar11 = (code *****)FUN_18006b640(uVar8,&pppcStack_170);
      if (pppppcVar11 != (code *****)0x0) {
        pppppcStack_178 = pppppcVar11;
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      pppppcStack_178 = pppppcStack_180;
      pppppcVar5 = pppppcVar11;
      if (pppppcStack_180 != (code *****)0x0) {
        ppppcVar2 = *pppppcStack_180;
        pppppcStack_180 = pppppcVar11;
        (*(code *)ppppcVar2[7])();
        pppppcVar5 = pppppcStack_180;
      }
      pppppcStack_180 = pppppcVar5;
      uVar8 = _DAT_180c82868;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      pppppcStack_188 = pppppcVar11;
      if (pppppcVar11 != (code *****)0x0) {
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      FUN_18005e110(uVar8,&pppppcStack_188);
      FUN_1800b88d0(lVar1,&pppppcStack_180);
      uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
      pppppcStack_188 = (code *****)&pppcStack_170;
      uStack_160 = &UNK_1801808b0;
      uStack_158 = &UNK_1801808a0;
      pppcStack_170 = (code ***)&UNK_18021cb40;
      pppppcVar11 = (code *****)FUN_18006b640(uVar8,&pppcStack_170);
      if (pppppcVar11 != (code *****)0x0) {
        pppppcStack_178 = pppppcVar11;
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      pppppcStack_178 = pppppcStack_180;
      pppppcVar5 = pppppcVar11;
      if (pppppcStack_180 != (code *****)0x0) {
        ppppcVar2 = *pppppcStack_180;
        pppppcStack_180 = pppppcVar11;
        (*(code *)ppppcVar2[7])();
        pppppcVar5 = pppppcStack_180;
      }
      pppppcStack_180 = pppppcVar5;
      uVar8 = _DAT_180c82868;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      pppppcStack_188 = pppppcVar11;
      if (pppppcVar11 != (code *****)0x0) {
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      FUN_18005e110(uVar8,&pppppcStack_188);
      FUN_1800b88d0(lVar1,&pppppcStack_180);
      uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
      pppppcStack_188 = (code *****)&pppcStack_170;
      uStack_160 = &UNK_1801808b0;
      uStack_158 = &UNK_1801808a0;
      pppcStack_170 = (code ***)FUN_18021cb50;
      pppppcVar11 = (code *****)FUN_18006b640(uVar8,&pppcStack_170);
      if (pppppcVar11 != (code *****)0x0) {
        pppppcStack_178 = pppppcVar11;
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      pppppcStack_178 = pppppcStack_180;
      pppppcVar5 = pppppcVar11;
      if (pppppcStack_180 != (code *****)0x0) {
        ppppcVar2 = *pppppcStack_180;
        pppppcStack_180 = pppppcVar11;
        (*(code *)ppppcVar2[7])();
        pppppcVar5 = pppppcStack_180;
      }
      pppppcStack_180 = pppppcVar5;
      uVar8 = _DAT_180c82868;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      pppppcStack_188 = pppppcVar11;
      if (pppppcVar11 != (code *****)0x0) {
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      FUN_18005e110(uVar8,&pppppcStack_188);
      FUN_1800b88d0(lVar1,&pppppcStack_180);
      uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
      pppppcStack_188 = (code *****)&pppcStack_170;
      uStack_160 = &UNK_1801808b0;
      uStack_158 = &UNK_1801808a0;
      pppcStack_170 = (code ***)FUN_18021cf80;
      pppppcVar11 = (code *****)FUN_18006b640(uVar8,&pppcStack_170);
      if (pppppcVar11 != (code *****)0x0) {
        pppppcStack_178 = pppppcVar11;
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      pppppcStack_178 = pppppcStack_180;
      pppppcVar5 = pppppcVar11;
      if (pppppcStack_180 != (code *****)0x0) {
        ppppcVar2 = *pppppcStack_180;
        pppppcStack_180 = pppppcVar11;
        (*(code *)ppppcVar2[7])();
        pppppcVar5 = pppppcStack_180;
      }
      pppppcStack_180 = pppppcVar5;
      uVar8 = _DAT_180c82868;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      pppppcStack_188 = pppppcVar11;
      if (pppppcVar11 != (code *****)0x0) {
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      FUN_18005e110(uVar8,&pppppcStack_188);
      FUN_1800b88d0(lVar1,&pppppcStack_180);
      uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
      pppppcStack_188 = (code *****)&pppcStack_170;
      uStack_160 = &UNK_1801808b0;
      uStack_158 = &UNK_1801808a0;
      pppcStack_170 = (code ***)FUN_18021b4f0;
      pppppcVar11 = (code *****)FUN_18006b640(uVar8,&pppcStack_170);
      if (pppppcVar11 != (code *****)0x0) {
        pppppcStack_178 = pppppcVar11;
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      pppppcStack_178 = pppppcStack_180;
      pppppcVar5 = pppppcVar11;
      if (pppppcStack_180 != (code *****)0x0) {
        ppppcVar2 = *pppppcStack_180;
        pppppcStack_180 = pppppcVar11;
        (*(code *)ppppcVar2[7])();
        pppppcVar5 = pppppcStack_180;
      }
      pppppcStack_180 = pppppcVar5;
      uVar8 = _DAT_180c82868;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      pppppcStack_188 = pppppcVar11;
      if (pppppcVar11 != (code *****)0x0) {
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      FUN_18005e110(uVar8,&pppppcStack_188);
      FUN_1800b88d0(lVar1,&pppppcStack_180);
      uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
      pppppcStack_188 = (code *****)&pppcStack_170;
      uStack_160 = &UNK_1801808b0;
      uStack_158 = &UNK_1801808a0;
      pppcStack_170 = (code ***)FUN_18021b070;
      pppppcVar11 = (code *****)FUN_18006b640(uVar8,&pppcStack_170);
      if (pppppcVar11 != (code *****)0x0) {
        pppppcStack_178 = pppppcVar11;
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      pppppcStack_178 = pppppcStack_180;
      pppppcVar5 = pppppcVar11;
      if (pppppcStack_180 != (code *****)0x0) {
        ppppcVar2 = *pppppcStack_180;
        pppppcStack_180 = pppppcVar11;
        (*(code *)ppppcVar2[7])();
        pppppcVar5 = pppppcStack_180;
      }
      pppppcStack_180 = pppppcVar5;
      uVar8 = _DAT_180c82868;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      pppppcStack_188 = pppppcVar11;
      if (pppppcVar11 != (code *****)0x0) {
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      FUN_18005e110(uVar8,&pppppcStack_188);
      FUN_1800b88d0(lVar1,&pppppcStack_180);
      uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
      pppppcStack_188 = (code *****)&pppcStack_170;
      uStack_160 = &UNK_1801808b0;
      uStack_158 = &UNK_1801808a0;
      pppcStack_170 = (code ***)FUN_18021e9c0;
      ppppppcVar12 = (code ******)FUN_18006b640(uVar8,&pppcStack_170);
      if (ppppppcVar12 != (code ******)0x0) {
        pppppcStack_178 = (code *****)ppppppcVar12;
        (*(code *)(*ppppppcVar12)[5])(ppppppcVar12);
      }
      pppppcStack_178 = pppppcStack_180;
      ppppppcVar4 = ppppppcVar12;
      if (pppppcStack_180 != (code *****)0x0) {
        ppppcVar2 = *pppppcStack_180;
        pppppcStack_180 = (code *****)ppppppcVar12;
        (*(code *)ppppcVar2[7])();
        ppppppcVar4 = (code ******)pppppcStack_180;
      }
      pppppcStack_180 = (code *****)ppppppcVar4;
      uVar8 = _DAT_180c82868;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      pppppcStack_188 = (code *****)ppppppcVar12;
      if (ppppppcVar12 != (code ******)0x0) {
        (*(code *)(*ppppppcVar12)[5])(ppppppcVar12);
      }
      FUN_18005e110(uVar8,&pppppcStack_188);
      FUN_1800b88d0(lVar1,&pppppcStack_180);
      ppppppcVar12 = (code ******)pppppcStack_180;
      if ((*(int *)(lVar13 + 0x3c) == -1) ||
         (*(int *)(lVar13 + 0x318) + 1 < *(int *)(lVar13 + 0x3c))) {
        *(int *)(lVar13 + 0x318) = *(int *)(lVar13 + 0x318) + 1;
      }
    }
    else {
      if (iVar7 == 4) {
        plVar18 = *(longlong **)(lVar13 + 0x40);
        if (*(code **)(*plVar18 + 0x20) == FUN_180651d20) {
          uVar16 = uVar15;
          if (plVar18[0x2e] - plVar18[0x2d] >> 3 != 0) {
            do {
              (**(code **)**(uint64_t **)(uVar15 + plVar18[0x2d]))();
              uVar20 = (int)uVar16 + 1;
              uVar15 = uVar15 + 8;
              uVar16 = (ulonglong)uVar20;
            } while ((ulonglong)(longlong)(int)uVar20 <
                     (ulonglong)(plVar18[0x2e] - plVar18[0x2d] >> 3));
          }
          *(int8_t *)(plVar18 + 0x31) = 1;
        }
        else {
          (**(code **)(*plVar18 + 0x20))(plVar18);
        }
        plVar18 = *(longlong **)(_DAT_180c8ed08 + 0x18);
        lVar13 = (**(code **)(_DAT_180c8a9c0 + 0x30))();
        puVar17 = &DAT_18098bc73;
        if (*(void **)(lVar13 + 8) != (void *)0x0) {
          puVar17 = *(void **)(lVar13 + 8);
        }
        FUN_180627910(&puStack_148,puVar17);
        lVar13 = (**(code **)(_DAT_180c8a9c0 + 0x20))();
        puVar17 = &DAT_18098bc73;
        if (*(void **)(lVar13 + 8) != (void *)0x0) {
          puVar17 = *(void **)(lVar13 + 8);
        }
        FUN_180627910(&pppcStack_170,puVar17);
        pcVar3 = *(code **)(*plVar18 + 0x20);
        puStack_e0 = &UNK_18098bc80;
        puStack_d8 = auStack_c8;
        auStack_c8[0] = 0;
        uStack_d0 = 0xd;
        strcpy_s(auStack_c8,0x20,&UNK_18098ba70);
        puStack_118 = &UNK_18098bc80;
        puStack_110 = auStack_100;
        auStack_100[0] = 0;
        uStack_108 = 7;
        strcpy_s(auStack_100,0x20,&UNK_18098ba10);
        puStack_70 = &UNK_18098bc80;
        puStack_68 = auStack_58;
        auStack_58[0] = 0;
        uStack_60 = 0xe;
        strcpy_s(auStack_58,0x20,&UNK_18098ba18);
        pppcStack_198 = (code ***)&puStack_148;
        (*pcVar3)(plVar18,&puStack_70,&puStack_118,&puStack_e0);
        puStack_70 = &UNK_18098bcb0;
        puStack_118 = &UNK_18098bcb0;
        puStack_e0 = &UNK_18098bcb0;
        pcVar3 = *(code **)(*plVar18 + 0x20);
        puStack_a8 = &UNK_18098bc80;
        puStack_a0 = auStack_90;
        auStack_90[0] = 0;
        uStack_98 = 0xe;
        strcpy_s(auStack_90,0x20,&UNK_18098ba60);
        puStack_118 = &UNK_18098bc80;
        puStack_110 = auStack_100;
        auStack_100[0] = 0;
        uStack_108 = 7;
        strcpy_s(auStack_100,0x20,&UNK_18098ba10);
        puStack_e0 = &UNK_18098bc80;
        puStack_d8 = auStack_c8;
        auStack_c8[0] = 0;
        uStack_d0 = 0xe;
        strcpy_s(auStack_c8,0x20,&UNK_18098ba18);
        pppcStack_198 = (code ***)&pppcStack_170;
        (*pcVar3)(plVar18,&puStack_e0,&puStack_118,&puStack_a8);
        puStack_e0 = &UNK_18098bcb0;
        puStack_118 = &UNK_18098bcb0;
        puStack_a8 = &UNK_18098bcb0;
        pppcStack_170 = (code ***)&UNK_180a3c3e0;
        if (puStack_168 == (int32_t *)0x0) {
          puStack_168 = (int32_t *)0x0;
          uStack_158 = (void *)((ulonglong)uStack_158._4_4_ << 0x20);
          pppcStack_170 = (code ***)&UNK_18098bcb0;
          puStack_148 = &UNK_180a3c3e0;
          if (puStack_140 == (int32_t *)0x0) {
            puStack_140 = (int32_t *)0x0;
            uStack_130 = (ulonglong)uStack_130._4_4_ << 0x20;
            puStack_148 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
            FUN_180062300(_DAT_180c86928,&UNK_180a09cf0);
          }
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      if (iVar7 != 5) {
        if (iVar7 == 6) {
          FUN_18005e770(_DAT_180c82868,lVar13 + 800,0);
          FUN_1800b8500(lVar13 + 800);
          (**(code **)(**(longlong **)(_DAT_180c86870 + 0x2b0) + 0x120))
                    (*(longlong **)(_DAT_180c86870 + 0x2b0),0);
          FUN_18021e0a0();
          if (*(int *)(lVar13 + 0x3c) != -1) {
            if (*(int *)(lVar13 + 0x318) + 1 < *(int *)(lVar13 + 0x3c)) {
              *(int *)(lVar13 + 0x318) = *(int *)(lVar13 + 0x318) + 1;
            }
            goto LAB_18018054e;
          }
        }
        else {
          if (iVar7 != 7) {
            uStack_150 = 1;
            puStack_a8 = &UNK_18098bc80;
            puStack_a0 = auStack_90;
            auStack_90[0] = 0;
            uStack_98 = 0xb;
            strcpy_s(auStack_90,0x20,&UNK_1809fd298);
            FUN_180051f00(_DAT_180c86870,&puStack_a8);
            lVar13 = _DAT_180c8a9a0;
            puStack_a8 = &UNK_18098bcb0;
            pppcStack_170 = (code ***)&UNK_180a3c3e0;
            uStack_158 = (void *)0x0;
            puStack_168 = (int32_t *)0x0;
            uStack_160 = (void *)((ulonglong)uStack_160._4_4_ << 0x20);
            puStack_148 = &UNK_180a3c3e0;
            uStack_130 = 0;
            puStack_140 = (int32_t *)0x0;
            uStack_138 = 0;
            puVar9 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
            *(int8_t *)puVar9 = 0;
            puStack_140 = puVar9;
            uVar6 = FUN_18064e990(puVar9);
            uStack_130 = CONCAT44(uStack_130._4_4_,uVar6);
            *puVar9 = 0x646e6572;
            *(int16_t *)(puVar9 + 1) = 0x7265;
            *(int8_t *)((longlong)puVar9 + 6) = 0;
            uStack_138 = 6;
            uStack_128 = 1;
            FUN_180058080((code ******)(lVar13 + 0x70),&pppppcStack_178,&puStack_148);
            if ((code ******)pppppcStack_178 != (code ******)(lVar13 + 0x70)) {
              FUN_180627be0(&pppcStack_170,pppppcStack_178 + 8);
              if ((int)uStack_160 == 3) {
                do {
                  uVar16 = uVar15 + 1;
                  if (*(char *)((longlong)puStack_168 + uVar15) != (&UNK_180a0f0b8)[uVar15]) break;
                  uVar15 = uVar16;
                } while (uVar16 != 4);
              }
            }
            uStack_128 = 0;
            puStack_148 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar9);
          }
          (**(code **)(**(longlong **)(_DAT_180c86870 + 0x2b0) + 0x120))
                    (*(longlong **)(_DAT_180c86870 + 0x2b0),1);
          lVar1 = _DAT_180c868a8;
          *(int8_t *)(_DAT_180c868a8 + 0x130) = 1;
          lVar14 = *(longlong *)(lVar1 + 0xb8);
          lVar1 = lVar1 + 0xb0;
          if (lVar14 != lVar1) {
            do {
              lVar10 = *(longlong *)(lVar14 + 0x20);
              iVar7 = (int)(*(longlong *)(lVar10 + 0x188) - *(longlong *)(lVar10 + 0x180) >> 3);
              lVar19 = 0;
              if (0 < iVar7) {
                do {
                  (**(code **)(**(longlong **)(*(longlong *)(lVar10 + 0x180) + lVar19 * 8) + 0x48))
                            ();
                  lVar19 = lVar19 + 1;
                } while (lVar19 < iVar7);
              }
              lVar14 = func_0x00018066bd70(lVar14);
            } while (lVar14 != lVar1);
          }
          (**(code **)(**(longlong **)(_DAT_180c86870 + 0x2b0) + 0x128))();
          uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0xc0,8,3);
          uVar8 = FUN_180370550(uVar8);
          *(uint64_t *)(lVar13 + 0x3e0) = uVar8;
          if ((*(int *)(lVar13 + 0x3c) != -1) &&
             (*(int *)(lVar13 + 0x3c) <= *(int *)(lVar13 + 0x318) + 1)) goto LAB_18018054e;
        }
        goto LAB_180180381;
      }
      FUN_18005e770(_DAT_180c82868,lVar13 + 800,0);
      FUN_1800b8500(lVar13 + 800);
      uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
      pppppcStack_178 = (code *****)&pppcStack_170;
      uStack_160 = &UNK_1801808b0;
      uStack_158 = &UNK_1801808a0;
      pppcStack_170 = (code ***)FUN_18021b9c0;
      pppppcStack_188 = (code *****)FUN_18006b640(uVar8,&pppcStack_170);
      pppppcStack_180 = pppppcStack_188;
      if (pppppcStack_188 != (code *****)0x0) {
        (*(code *)(*pppppcStack_188)[5])(pppppcStack_188);
      }
      uVar8 = _DAT_180c82868;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      if (pppppcStack_188 != (code *****)0x0) {
        (*(code *)(*pppppcStack_188)[5])(pppppcStack_188);
      }
      FUN_18005e110(uVar8,&pppppcStack_188);
      FUN_1800b88d0(lVar13 + 800,&pppppcStack_180);
      uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
      pppppcStack_188 = (code *****)&pppcStack_170;
      uStack_160 = &UNK_1801808b0;
      uStack_158 = &UNK_1801808a0;
      pppcStack_170 = (code ***)FUN_18021bc50;
      pppppcVar11 = (code *****)FUN_18006b640(uVar8,&pppcStack_170);
      if (pppppcVar11 != (code *****)0x0) {
        pppppcStack_178 = pppppcVar11;
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      pppppcStack_178 = pppppcStack_180;
      pppppcVar5 = pppppcVar11;
      if (pppppcStack_180 != (code *****)0x0) {
        ppppcVar2 = *pppppcStack_180;
        pppppcStack_180 = pppppcVar11;
        (*(code *)ppppcVar2[7])();
        pppppcVar5 = pppppcStack_180;
      }
      pppppcStack_180 = pppppcVar5;
      uVar8 = _DAT_180c82868;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      pppppcStack_188 = pppppcVar11;
      if (pppppcVar11 != (code *****)0x0) {
        (*(code *)(*pppppcVar11)[5])(pppppcVar11);
      }
      FUN_18005e110(uVar8,&pppppcStack_188);
      FUN_1800b88d0(lVar13 + 800,&pppppcStack_180);
      uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
      pppppcStack_188 = (code *****)&pppcStack_170;
      uStack_160 = &UNK_180180860;
      uStack_158 = &UNK_180180850;
      pppcStack_170 = (code ***)FUN_18013ea70;
      puStack_168 = (int32_t *)_DAT_180c868d8;
      ppppppcVar12 = (code ******)FUN_18006b640(uVar8,&pppcStack_170);
      if (ppppppcVar12 != (code ******)0x0) {
        pppppcStack_178 = (code *****)ppppppcVar12;
        (*(code *)(*ppppppcVar12)[5])(ppppppcVar12);
      }
      pppppcStack_178 = pppppcStack_180;
      ppppppcVar4 = ppppppcVar12;
      if (pppppcStack_180 != (code *****)0x0) {
        ppppcVar2 = *pppppcStack_180;
        pppppcStack_180 = (code *****)ppppppcVar12;
        (*(code *)ppppcVar2[7])();
        ppppppcVar4 = (code ******)pppppcStack_180;
      }
      pppppcStack_180 = (code *****)ppppppcVar4;
      uVar8 = _DAT_180c82868;
      pppppcStack_178 = (code *****)&pppppcStack_188;
      pppppcStack_188 = (code *****)ppppppcVar12;
      if (ppppppcVar12 != (code ******)0x0) {
        (*(code *)(*ppppppcVar12)[5])(ppppppcVar12);
      }
      FUN_18005e110(uVar8,&pppppcStack_188);
      FUN_1800b88d0(lVar13 + 800,&pppppcStack_180);
      ppppppcVar12 = (code ******)pppppcStack_180;
      if ((*(int *)(lVar13 + 0x3c) == -1) ||
         (*(int *)(lVar13 + 0x318) + 1 < *(int *)(lVar13 + 0x3c))) {
        *(int *)(lVar13 + 0x318) = *(int *)(lVar13 + 0x318) + 1;
      }
    }
  }
  if (ppppppcVar12 != (code ******)0x0) {
    (*(code *)(*ppppppcVar12)[7])();
  }
LAB_18018054e:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



