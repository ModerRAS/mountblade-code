#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part026.c - 2 个函数

// 函数: void FUN_180070930(uint64_t param_1,longlong param_2,int32_t param_3,longlong param_4,
void FUN_180070930(uint64_t param_1,longlong param_2,int32_t param_3,longlong param_4,
                  char param_5,char param_6)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int32_t uVar7;
  int iVar8;
  longlong lVar9;
  int8_t *puVar10;
  uint64_t *puVar11;
  int8_t *puVar12;
  byte bVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  void *puVar18;
  ulonglong uVar19;
  int8_t auStack_188 [32];
  int8_t *puStack_168;
  void *puStack_160;
  int8_t *puStack_158;
  int8_t uStack_148;
  char cStack_147;
  void *puStack_140;
  int8_t *puStack_138;
  uint uStack_130;
  ulonglong uStack_128;
  char cStack_120;
  char cStack_11f;
  int32_t uStack_11c;
  void *puStack_118;
  int8_t *puStack_110;
  uint uStack_108;
  uint64_t uStack_100;
  void *puStack_f8;
  void *puStack_f0;
  int32_t uStack_e0;
  void *puStack_d8;
  longlong lStack_d0;
  int32_t uStack_c0;
  int32_t uStack_98;
  int32_t uStack_94;
  longlong lStack_90;
  longlong lStack_88;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  ulonglong uStack_48;
  longlong lVar17;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  cStack_120 = param_5;
  puVar10 = (int8_t *)0x0;
  uVar14 = 0;
  uStack_11c = 0;
  uStack_148 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_98 = param_3;
  lStack_88 = param_4;
  FUN_1800634b0(&uStack_58,0x10,&UNK_1809fd0a0,param_3);
  lVar9 = FUN_180627910(&puStack_d8,param_4);
  puStack_118 = &UNK_180a3c3e0;
  uStack_100 = 0;
  puStack_110 = (int8_t *)0x0;
  uStack_108 = 0;
  uStack_11c = 4;
  uVar6 = *(uint *)(lVar9 + 0x10);
  uVar19 = (ulonglong)uVar6;
  uVar5 = 0;
  if (*(longlong *)(lVar9 + 8) == 0) {
LAB_180070a3f:
    uVar14 = uVar5;
    if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar10,*(uint64_t *)(lVar9 + 8),uVar19);
    }
  }
  else if (uVar6 != 0) {
    iVar4 = uVar6 + 1;
    if (iVar4 < 0x10) {
      iVar4 = 0x10;
    }
    puVar10 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar4,0x13);
    *puVar10 = 0;
    puStack_110 = puVar10;
    uVar5 = FUN_18064e990(puVar10);
    uStack_100 = CONCAT44(uStack_100._4_4_,uVar5);
    goto LAB_180070a3f;
  }
  if (puVar10 != (int8_t *)0x0) {
    puVar10[uVar19] = 0;
  }
  uVar5 = *(uint *)(lVar9 + 0x1c);
  uStack_108 = uVar6;
  uStack_100._4_4_ = uVar5;
  if (param_2 != 0) {
    lVar9 = -1;
    do {
      lVar15 = lVar9;
      lVar9 = lVar15 + 1;
    } while (*(char *)(param_2 + lVar9) != '\0');
    if (0 < (int)lVar9) {
      iVar4 = uVar6 + (int)lVar9;
      if (iVar4 != 0) {
        uVar6 = iVar4 + 1;
        if (puVar10 == (int8_t *)0x0) {
          if ((int)uVar6 < 0x10) {
            uVar6 = 0x10;
          }
          puVar10 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar6,0x13);
          *puVar10 = 0;
        }
        else {
          if (uVar6 <= uVar14) goto LAB_180070b00;
          puStack_168 = (int8_t *)CONCAT71(puStack_168._1_7_,0x13);
          puVar10 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar10,uVar6,0x10);
        }
        puStack_110 = puVar10;
        uStack_100._0_4_ = FUN_18064e990(puVar10);
      }
LAB_180070b00:
                    // WARNING: Subroutine does not return
      memcpy(puVar10 + uVar19,param_2,(longlong)((int)lVar15 + 2));
    }
  }
  FUN_180627e10(&puStack_118,&puStack_f8,&uStack_58);
  uStack_94 = 0;
  uStack_11c = 0;
  puStack_118 = &UNK_180a3c3e0;
  if (puVar10 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar10);
  }
  puStack_110 = (int8_t *)0x0;
  uStack_100 = (ulonglong)uStack_100._4_4_ << 0x20;
  puStack_118 = &UNK_18098bcb0;
  puStack_d8 = &UNK_180a3c3e0;
  if (lStack_d0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_d0 = 0;
  uStack_c0 = 0;
  puStack_d8 = &UNK_18098bcb0;
  puVar18 = &DAT_18098bc73;
  if (puStack_f0 != (void *)0x0) {
    puVar18 = puStack_f0;
  }
  cVar3 = FUN_1800f9600(puVar18);
  if (cVar3 != '\0') {
    puStack_f8 = &UNK_180a3c3e0;
    if (puStack_f0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    goto LAB_1800718e9;
  }
  iVar4 = WaitForSingleObject(_DAT_180c91900,1);
  lVar9 = _DAT_180c82868;
  if (iVar4 != 0) {
    puStack_f8 = &UNK_180a3c3e0;
    if (puStack_f0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    goto LAB_1800718e9;
  }
  lStack_90 = _DAT_180c82868;
  puStack_140 = &UNK_180a3c3e0;
  uStack_128 = 0;
  puStack_138 = (int8_t *)0x0;
  uStack_130 = 0;
  puVar18 = &DAT_1809ff660;
  if (cStack_120 != '\0') {
    puVar18 = &UNK_1809ff648;
  }
  lVar15 = -1;
  do {
    lVar16 = lVar15;
    lVar15 = lVar16 + 1;
  } while (puVar18[lVar15] != '\0');
  iVar4 = (int)lVar15;
  if (0 < iVar4) {
    if (iVar4 != 0) {
      iVar4 = iVar4 + 1;
      if (iVar4 < 0x10) {
        iVar4 = 0x10;
      }
      puStack_138 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar4,0x13);
      *puStack_138 = 0;
      uVar7 = FUN_18064e990(puStack_138);
      uStack_128 = CONCAT44(uStack_128._4_4_,uVar7);
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_138 + uStack_130,puVar18,(longlong)((int)lVar16 + 2));
  }
  puStack_138 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *puStack_138 = 0;
  uVar5 = FUN_18064e990(puStack_138);
  uStack_128 = CONCAT44(uStack_128._4_4_,uVar5);
  *(int16_t *)(puStack_138 + uStack_130) = 10;
  uStack_130 = 1;
  uVar6 = 2;
  if (puStack_138 == (int8_t *)0x0) {
    uStack_130 = 1;
    puStack_138 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *puStack_138 = 0;
LAB_180070db8:
    uVar7 = FUN_18064e990(puStack_138);
    uStack_128 = CONCAT44(uStack_128._4_4_,uVar7);
  }
  else if (uVar5 < 3) {
    puStack_168 = (int8_t *)CONCAT71(puStack_168._1_7_,0x13);
    uStack_130 = 1;
    puStack_138 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_138,3,0x10);
    goto LAB_180070db8;
  }
  *(int16_t *)(puStack_138 + uStack_130) = 10;
  uStack_130 = 2;
  if (param_2 != 0) {
    lVar15 = -1;
    do {
      lVar16 = lVar15;
      lVar15 = lVar16 + 1;
    } while (*(char *)(param_2 + lVar15) != '\0');
    iVar4 = (int)lVar15;
    if (0 < iVar4) {
      uVar5 = uVar6;
      if (iVar4 != -2) {
        uVar14 = iVar4 + 3;
        if (puStack_138 == (int8_t *)0x0) {
          if ((int)uVar14 < 0x10) {
            uVar14 = 0x10;
          }
          uStack_130 = uVar6;
          puStack_138 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar14,0x13);
          *puStack_138 = 0;
        }
        else {
          uVar5 = uStack_130;
          if (uVar14 <= (uint)uStack_128) goto LAB_180070e64;
          puStack_168 = (int8_t *)CONCAT71(puStack_168._1_7_,0x13);
          uStack_130 = uVar6;
          puStack_138 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_138,uVar14,0x10);
        }
        uVar7 = FUN_18064e990(puStack_138);
        uStack_128 = CONCAT44(uStack_128._4_4_,uVar7);
        uVar5 = uStack_130;
      }
LAB_180070e64:
      uStack_130 = uVar5;
                    // WARNING: Subroutine does not return
      memcpy(puStack_138 + uStack_130,param_2,(longlong)((int)lVar16 + 2));
    }
  }
  if (puStack_138 == (int8_t *)0x0) {
    uStack_130 = uVar6;
    puStack_138 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *puStack_138 = 0;
LAB_180070ee8:
    uVar7 = FUN_18064e990(puStack_138);
    uStack_128 = CONCAT44(uStack_128._4_4_,uVar7);
  }
  else if ((uint)uStack_128 < 4) {
    puStack_168 = (int8_t *)CONCAT71(puStack_168._1_7_,0x13);
    uStack_130 = uVar6;
    puStack_138 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_138,4,0x10);
    goto LAB_180070ee8;
  }
  *(int16_t *)(puStack_138 + uStack_130) = 0x3a;
  uStack_130 = 3;
  FUN_180628380(&puStack_140,uStack_98);
  uVar6 = uStack_130;
  uVar5 = uStack_130 + 1;
  if (uVar5 != 0) {
    uVar14 = uStack_130 + 2;
    if (puStack_138 == (int8_t *)0x0) {
      if ((int)uVar14 < 0x10) {
        uVar14 = 0x10;
      }
      puStack_138 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar14,0x13);
      *puStack_138 = 0;
    }
    else {
      if (uVar14 <= (uint)uStack_128) goto LAB_180070f81;
      puStack_168 = (int8_t *)CONCAT71(puStack_168._1_7_,0x13);
      puStack_138 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_138,uVar14,0x10);
    }
    uVar7 = FUN_18064e990(puStack_138);
    uStack_128 = CONCAT44(uStack_128._4_4_,uVar7);
  }
LAB_180070f81:
  *(int16_t *)(puStack_138 + uStack_130) = 10;
  uVar14 = uVar6 + 0xd;
  uStack_130 = uVar5;
  if (uVar14 != 0) {
    uVar5 = uVar6 + 0xe;
    if (puStack_138 == (int8_t *)0x0) {
      if ((int)uVar5 < 0x10) {
        uVar5 = 0x10;
      }
      puStack_138 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar5,0x13);
      *puStack_138 = 0;
    }
    else {
      if (uVar5 <= (uint)uStack_128) goto LAB_180071000;
      puStack_168 = (int8_t *)CONCAT71(puStack_168._1_7_,0x13);
      puStack_138 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_138,uVar5,0x10);
    }
    uVar7 = FUN_18064e990(puStack_138);
    uStack_128 = CONCAT44(uStack_128._4_4_,uVar7);
  }
LAB_180071000:
  lVar15 = lStack_88;
  puVar11 = (uint64_t *)(puStack_138 + uStack_130);
  *puVar11 = 0x6973736572707845;
  *(int32_t *)(puVar11 + 1) = 0x203a6e6f;
  *(int8_t *)((longlong)puVar11 + 0xc) = 0;
  lVar16 = -1;
  uStack_130 = uVar14;
  if (lStack_88 != 0) {
    do {
      lVar17 = lVar16;
      lVar16 = lVar17 + 1;
    } while (*(char *)(lStack_88 + lVar16) != '\0');
    if (0 < (int)lVar16) {
      iVar4 = uVar14 + (int)lVar16;
      if (iVar4 != 0) {
        uVar6 = iVar4 + 1;
        if (puStack_138 == (int8_t *)0x0) {
          if ((int)uVar6 < 0x10) {
            uVar6 = 0x10;
          }
          puStack_138 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar6,0x13);
          *puStack_138 = 0;
        }
        else {
          if (uVar6 <= (uint)uStack_128) goto LAB_1800710b8;
          puStack_168 = (int8_t *)CONCAT71(puStack_168._1_7_,0x13);
          puStack_138 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_138,uVar6,0x10);
        }
        uVar7 = FUN_18064e990(puStack_138);
        uStack_128 = CONCAT44(uStack_128._4_4_,uVar7);
      }
LAB_1800710b8:
                    // WARNING: Subroutine does not return
      memcpy(puStack_138 + uStack_130,lVar15,(longlong)((int)lVar17 + 2));
    }
  }
  iVar4 = uVar6 + 0xe;
  if (iVar4 != 0) {
    uVar6 = uVar6 + 0xf;
    if (puStack_138 == (int8_t *)0x0) {
      if ((int)uVar6 < 0x10) {
        uVar6 = 0x10;
      }
      puStack_138 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar6,0x13);
      *puStack_138 = 0;
    }
    else {
      if (uVar6 <= (uint)uStack_128) goto LAB_18007113f;
      puStack_168 = (int8_t *)CONCAT71(puStack_168._1_7_,0x13);
      puStack_138 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_138,uVar6,0x10);
    }
    uVar7 = FUN_18064e990(puStack_138);
    uStack_128 = CONCAT44(uStack_128._4_4_,uVar7);
  }
LAB_18007113f:
  *(int16_t *)(puStack_138 + uStack_130) = 10;
  uStack_130 = iVar4;
  if (lVar9 != 0) {
    FUN_18005dab0(lVar9);
  }
  bVar13 = 1;
  cStack_11f = '\x01';
  cVar3 = (**(code **)**(uint64_t **)(_DAT_180c8ed08 + 0x18))();
  if ((cVar3 != '\0') || (iVar4 = IsDebuggerPresent(), iVar4 == 0)) {
    bVar13 = 0;
  }
  if (_DAT_180c86870 == 0) {
    cStack_147 = '\0';
  }
  else {
    cStack_147 = *(char *)(_DAT_180c86870 + 0x24);
  }
  bVar2 = true;
  if (lVar9 != 0) {
    iVar4 = *(int *)(**(longlong **)(lVar9 + 8) + 0x48);
    iVar8 = _Thrd_id();
    cStack_11f = iVar8 == iVar4;
    bVar2 = (bool)cStack_11f;
  }
  lVar9 = _DAT_180c86950;
  if ((DAT_180c82842 == '\0') && (bVar2)) {
    if ((_DAT_180c86950 != 0) && (*(char *)(_DAT_180c86950 + 0x1609) != '\x01')) {
      FUN_1801723a0(*(uint64_t *)(_DAT_180c86870 + 8),*(char *)(_DAT_180c868d0 + 0x2028) != '\0',
                    *(int32_t *)(_DAT_180c86950 + 0x160c));
      *(int8_t *)(lVar9 + 0x1609) = 1;
    }
    if (*(longlong *)(_DAT_180c86870 + 8) != 0) {
      FUN_1801719d0();
    }
  }
  puStack_118 = &UNK_180a3c3e0;
  uStack_100 = 0;
  puStack_110 = (int8_t *)0x0;
  uStack_108 = 0;
  if (bVar13 == 0) {
    lVar9 = FUN_1800f9ce0(&puStack_d8,0);
    uStack_108 = *(uint *)(lVar9 + 0x10);
    puStack_110 = *(int8_t **)(lVar9 + 8);
    uStack_100 = *(ulonglong *)(lVar9 + 0x18);
    *(int32_t *)(lVar9 + 0x10) = 0;
    *(uint64_t *)(lVar9 + 8) = 0;
    *(uint64_t *)(lVar9 + 0x18) = 0;
    puStack_d8 = &UNK_180a3c3e0;
    if (lStack_d0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_d0 = 0;
    uStack_c0 = 0;
    puStack_d8 = &UNK_18098bcb0;
  }
  puVar10 = puStack_110;
  FUN_180062380(_DAT_180c86928,5,0xffffffff00000000,&UNK_1809ff550);
  puStack_168 = &DAT_18098bc73;
  if (puStack_138 != (int8_t *)0x0) {
    puStack_168 = puStack_138;
  }
  FUN_180062380(_DAT_180c86928,4,0xffffffff00000000,&UNK_1809ff5b0);
  puStack_168 = &DAT_18098bc73;
  if (puVar10 != (int8_t *)0x0) {
    puStack_168 = puVar10;
  }
  FUN_1800623b0(_DAT_180c86928,4,0xffffffff00000000,3);
  FUN_1800623e0();
  puVar12 = &DAT_18098bc73;
  if (puStack_138 != (int8_t *)0x0) {
    puVar12 = puStack_138;
  }
  OutputDebugStringA(puVar12);
  FUN_18004c2b0(lVar15);
  if (DAT_180c82860 != '\0') {
    if (bVar13 != 0) {
      if (((cStack_147 == '\0') && (param_6 != '\0')) && (*(int *)(_DAT_180c86870 + 0x340) != 2)) {
        uStack_148 = 1;
      }
      else if (DAT_180c82851 == '\0') {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((_DAT_180c86948 == 0) || (*(int *)(_DAT_180c86948 + 0x168) == 2)) {
      FUN_180062380(_DAT_180c86928,4,0xffffffff00000000,&UNK_1809ff688);
      FUN_1800623e0();
      iVar4 = IsDebuggerPresent();
      if ((iVar4 != 0) && (DAT_180c82851 == '\0')) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (DAT_180c82842 == '\0') {
    puVar18 = &UNK_1809ff6bc;
    if (cStack_120 != '\0') {
      puVar18 = &UNK_1809ff6b0;
    }
    do {
      while( true ) {
        puVar12 = &DAT_18098bc73;
        if (puStack_138 != (int8_t *)0x0) {
          puVar12 = puStack_138;
        }
        if (((DAT_180c82860 == '\0') || (iVar4 = IsDebuggerPresent(), iVar4 != 0)) &&
           (DAT_180c82842 == '\0')) break;
        if (*(char *)(_DAT_180c86928 + 0x18) != '\0') {
          puStack_168 = &UNK_180a04f08;
          puStack_160 = puVar18;
          puStack_158 = puVar12;
          FUN_1800623b0(_DAT_180c86928,3,0xffffffff00000000,0xd);
        }
      }
      uVar7 = MessageBoxA(0,puVar12,puVar18,0x52012);
      switch(uVar7) {
      case 1:
        iVar4 = 0;
        break;
      default:
        iVar4 = 1;
        break;
      case 4:
        iVar4 = 2;
        break;
      case 5:
        iVar4 = 3;
        break;
      case 6:
        iVar4 = 4;
        break;
      case 7:
        iVar4 = 5;
      }
    } while (iVar4 == 1);
    if (iVar4 == 2) {
      if (bVar13 == 0) {
        puVar12 = &DAT_18098bc73;
        if (puVar10 != (int8_t *)0x0) {
          puVar12 = puVar10;
        }
        if (((DAT_180c82860 == '\0') || (iVar4 = IsDebuggerPresent(), iVar4 != 0)) &&
           (DAT_180c82842 == '\0')) {
          MessageBoxA(0,puVar12,&UNK_1809ff6c8,0x41010);
        }
        else if (*(char *)(_DAT_180c86928 + 0x18) != '\0') {
          puStack_160 = &UNK_1809ff6c8;
          puStack_168 = &UNK_180a04f08;
          puStack_158 = puVar12;
          FUN_1800623b0(_DAT_180c86928,3,0xffffffff00000000,0xd);
        }
      }
      else if (((param_6 == '\0') || (*(int *)(_DAT_180c86870 + 0x340) == 2)) &&
              (DAT_180c82851 == '\0')) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if (iVar4 == 3) goto LAB_1800715eb;
    if (_DAT_180c86870 == 0) {
      cVar3 = '\x01';
    }
    else {
      cVar3 = *(char *)(_DAT_180c86870 + 0x29);
    }
    if (cStack_147 != '\0') {
      FUN_180055f70(cVar3,5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (cVar3 != '\0') {
      _DAT_180c82854 = 5;
    }
    if ((DAT_180c82842 == '\0') && (cStack_11f != '\0')) {
      if (*(longlong *)(_DAT_180c86870 + 8) != 0) {
        FUN_1801718f0();
      }
      if (_DAT_180c86950 != 0) {
        FUN_180092940(_DAT_180c86950,*(int8_t *)(_DAT_180c86950 + 0x160a));
      }
    }
    if (lStack_90 != 0) {
      FUN_18005db30();
    }
    do {
      iVar4 = ReleaseSemaphore(_DAT_180c91900,1);
    } while (iVar4 == 0);
    puStack_118 = &UNK_180a3c3e0;
    if (puVar10 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar10);
    }
    puStack_110 = (int8_t *)0x0;
    uStack_100 = uStack_100 & 0xffffffff00000000;
    puStack_118 = &UNK_18098bcb0;
    puStack_140 = &UNK_180a3c3e0;
    if (puStack_138 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_138 = (int8_t *)0x0;
    uStack_128 = uStack_128 & 0xffffffff00000000;
    puStack_140 = &UNK_18098bcb0;
    puStack_f8 = &UNK_180a3c3e0;
    if (puStack_f0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
LAB_1800718e9:
    uStack_e0 = 0;
    puStack_f0 = (void *)0x0;
    puStack_f8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_188);
  }
LAB_1800715eb:
  puVar18 = &DAT_18098bc73;
  if (puStack_f0 != (void *)0x0) {
    puVar18 = puStack_f0;
  }
  uVar7 = FUN_1800f98e0(puVar18);
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&UNK_1809ff6e0,bVar13 ^ 1,uVar7);
}



// WARNING: Removing unreachable block (ram,0x000180071b49)
// WARNING: Removing unreachable block (ram,0x000180071ad3)
// WARNING: Removing unreachable block (ram,0x000180071a52)
// WARNING: Removing unreachable block (ram,0x000180071c73)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180071940(uint64_t param_1,longlong param_2,int32_t param_3,longlong param_4)
void FUN_180071940(uint64_t param_1,longlong param_2,int32_t param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  int32_t uVar3;
  longlong lVar4;
  void *puVar5;
  int32_t *puVar6;
  uint64_t *puVar7;
  int8_t *puVar8;
  void *puVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  void *puStack_90;
  int8_t *puStack_88;
  uint uStack_80;
  ulonglong uStack_78;
  void *puStack_70;
  void *puStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  void *puStack_50;
  longlong lStack_48;
  int32_t uStack_38;
  
  iVar1 = WaitForSingleObject(_DAT_180c91900,0);
  if (iVar1 != 0) {
    return;
  }
  puVar9 = (void *)0x0;
  puStack_70 = &UNK_180a3c3e0;
  uStack_58 = 0;
  puStack_68 = (void *)0x0;
  uStack_60 = 0;
  iVar1 = IsDebuggerPresent();
  if (iVar1 == 0) {
    lVar4 = FUN_1800f9ce0(&puStack_50,0);
    uStack_60 = *(int32_t *)(lVar4 + 0x10);
    puVar9 = *(void **)(lVar4 + 8);
    uStack_58 = *(uint64_t *)(lVar4 + 0x18);
    *(int32_t *)(lVar4 + 0x10) = 0;
    *(uint64_t *)(lVar4 + 8) = 0;
    *(uint64_t *)(lVar4 + 0x18) = 0;
    puStack_50 = &UNK_180a3c3e0;
    puStack_68 = puVar9;
    if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_48 = 0;
    uStack_38 = 0;
    puStack_50 = &UNK_18098bcb0;
  }
  puStack_90 = &UNK_180a3c3e0;
  uStack_78 = 0;
  puStack_88 = (int8_t *)0x0;
  uStack_80 = 0;
  puStack_88 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,0x12,0x13);
  *puStack_88 = 0;
  uVar2 = FUN_18064e990(puStack_88);
  uStack_78 = CONCAT44(uStack_78._4_4_,uVar2);
  puVar6 = (int32_t *)(puStack_88 + uStack_80);
  *puVar6 = 0x65737341;
  puVar6[1] = 0x6f697472;
  puVar6[2] = 0x6146206e;
  puVar6[3] = 0x64656c69;
  *(int16_t *)(puVar6 + 4) = 0x21;
  uStack_80 = 0x11;
  if (puStack_88 == (int8_t *)0x0) {
    uStack_80 = 0x11;
    puStack_88 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,0x13,0x13);
    *puStack_88 = 0;
LAB_180071af3:
    uVar3 = FUN_18064e990(puStack_88);
    uStack_78 = CONCAT44(uStack_78._4_4_,uVar3);
  }
  else if (uVar2 < 0x13) {
    uStack_80 = 0x11;
    puStack_88 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_88,0x13,0x10,0x13);
    goto LAB_180071af3;
  }
  *(int16_t *)(puStack_88 + uStack_80) = 10;
  uStack_80 = 0x12;
  uVar2 = 0x13;
  if (puStack_88 == (int8_t *)0x0) {
    uStack_80 = 0x12;
    puStack_88 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,0x14,0x13);
    *puStack_88 = 0;
LAB_180071b69:
    uVar3 = FUN_18064e990(puStack_88);
    uStack_78 = CONCAT44(uStack_78._4_4_,uVar3);
  }
  else if ((uint)uStack_78 < 0x14) {
    uStack_80 = 0x12;
    puStack_88 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_88,0x14,0x10,0x13);
    goto LAB_180071b69;
  }
  *(int16_t *)(puStack_88 + uStack_80) = 10;
  uStack_80 = 0x13;
  if (param_2 != 0) {
    lVar4 = -1;
    do {
      lVar10 = lVar4;
      lVar4 = lVar10 + 1;
    } while (*(char *)(param_2 + lVar4) != '\0');
    iVar1 = (int)lVar4;
    if (0 < iVar1) {
      uVar11 = uVar2;
      if (iVar1 != -0x13) {
        uVar12 = iVar1 + 0x14;
        if (puStack_88 == (int8_t *)0x0) {
          if ((int)uVar12 < 0x10) {
            uVar12 = 0x10;
          }
          uStack_80 = uVar2;
          puStack_88 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar12,0x13);
          *puStack_88 = 0;
        }
        else {
          uVar11 = uStack_80;
          if (uVar12 <= (uint)uStack_78) goto LAB_180071c1a;
          uStack_80 = uVar2;
          puStack_88 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_88,uVar12,0x10,0x13);
        }
        uVar3 = FUN_18064e990(puStack_88);
        uStack_78 = CONCAT44(uStack_78._4_4_,uVar3);
        uVar11 = uStack_80;
      }
LAB_180071c1a:
      uStack_80 = uVar11;
                    // WARNING: Subroutine does not return
      memcpy(puStack_88 + uStack_80,param_2,(longlong)((int)lVar10 + 2));
    }
  }
  if (puStack_88 == (int8_t *)0x0) {
    uStack_80 = uVar2;
    puStack_88 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,0x15,0x13);
    *puStack_88 = 0;
LAB_180071c93:
    uVar3 = FUN_18064e990(puStack_88);
    uStack_78 = CONCAT44(uStack_78._4_4_,uVar3);
  }
  else if ((uint)uStack_78 < 0x15) {
    uStack_80 = uVar2;
    puStack_88 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_88,0x15,0x10,0x13);
    goto LAB_180071c93;
  }
  *(int16_t *)(puStack_88 + uStack_80) = 0x3a;
  uStack_80 = 0x14;
  FUN_180628380(&puStack_90,param_3);
  uVar2 = uStack_80;
  uVar11 = uStack_80 + 1;
  if (uVar11 != 0) {
    uVar12 = uStack_80 + 2;
    if (puStack_88 == (int8_t *)0x0) {
      if ((int)uVar12 < 0x10) {
        uVar12 = 0x10;
      }
      puStack_88 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar12,0x13);
      *puStack_88 = 0;
    }
    else {
      if (uVar12 <= (uint)uStack_78) goto LAB_180071d1f;
      puStack_88 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_88,uVar12,0x10,0x13);
    }
    uVar3 = FUN_18064e990(puStack_88);
    uStack_78 = CONCAT44(uStack_78._4_4_,uVar3);
  }
LAB_180071d1f:
  *(int16_t *)(puStack_88 + uStack_80) = 10;
  uVar12 = uVar2 + 0xd;
  uStack_80 = uVar11;
  if (uVar12 != 0) {
    uVar11 = uVar2 + 0xe;
    if (puStack_88 == (int8_t *)0x0) {
      if ((int)uVar11 < 0x10) {
        uVar11 = 0x10;
      }
      puStack_88 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar11,0x13);
      *puStack_88 = 0;
    }
    else {
      if (uVar11 <= (uint)uStack_78) goto LAB_180071d94;
      puStack_88 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_88,uVar11,0x10,0x13);
    }
    uVar3 = FUN_18064e990(puStack_88);
    uStack_78 = CONCAT44(uStack_78._4_4_,uVar3);
  }
LAB_180071d94:
  puVar7 = (uint64_t *)(puStack_88 + uStack_80);
  *puVar7 = 0x6973736572707845;
  *(int32_t *)(puVar7 + 1) = 0x203a6e6f;
  *(int8_t *)((longlong)puVar7 + 0xc) = 0;
  lVar4 = -1;
  uStack_80 = uVar12;
  if (param_4 != 0) {
    do {
      lVar10 = lVar4;
      lVar4 = lVar10 + 1;
    } while (*(char *)(param_4 + lVar4) != '\0');
    if (0 < (int)lVar4) {
      iVar1 = uVar12 + (int)lVar4;
      if (iVar1 != 0) {
        uVar2 = iVar1 + 1;
        if (puStack_88 == (int8_t *)0x0) {
          if ((int)uVar2 < 0x10) {
            uVar2 = 0x10;
          }
          puStack_88 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar2,0x13);
          *puStack_88 = 0;
        }
        else {
          if (uVar2 <= (uint)uStack_78) goto LAB_180071e34;
          puStack_88 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_88,uVar2,0x10,0x13);
        }
        uVar3 = FUN_18064e990(puStack_88);
        uStack_78 = CONCAT44(uStack_78._4_4_,uVar3);
      }
LAB_180071e34:
                    // WARNING: Subroutine does not return
      memcpy(puStack_88 + uStack_80,param_4,(longlong)((int)lVar10 + 2));
    }
  }
  if (uVar2 + 0xe != 0) {
    uVar11 = uVar2 + 0xf;
    if (puStack_88 == (int8_t *)0x0) {
      if ((int)uVar11 < 0x10) {
        uVar11 = 0x10;
      }
      puStack_88 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar11,0x13);
      *puStack_88 = 0;
    }
    else {
      if (uVar11 <= (uint)uStack_78) goto LAB_180071eb0;
      puStack_88 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_88,uVar11,0x10,0x13);
    }
    uVar3 = FUN_18064e990(puStack_88);
    uStack_78 = CONCAT44(uStack_78._4_4_,uVar3);
  }
LAB_180071eb0:
  *(int16_t *)(puStack_88 + uStack_80) = 10;
  uStack_80 = uVar2 + 0xe;
  FUN_180062380(_DAT_180c86928,5,0xffffffff00000000,&UNK_1809ff550);
  puVar8 = &DAT_18098bc73;
  if (puStack_88 != (int8_t *)0x0) {
    puVar8 = puStack_88;
  }
  FUN_180062380(_DAT_180c86928,4,0xffffffff00000000,&UNK_1809ff5b0,puVar8);
  puVar5 = &DAT_18098bc73;
  if (puVar9 != (void *)0x0) {
    puVar5 = puVar9;
  }
  FUN_1800623b0(_DAT_180c86928,4,0xffffffff00000000,3,puVar5);
  FUN_1800623e0();
  puVar8 = &DAT_18098bc73;
  if (puStack_88 != (int8_t *)0x0) {
    puVar8 = puStack_88;
  }
  OutputDebugStringA(puVar8);
  do {
    iVar1 = ReleaseSemaphore(_DAT_180c91900,1);
  } while (iVar1 == 0);
  puStack_90 = &UNK_180a3c3e0;
  if (puStack_88 == (int8_t *)0x0) {
    puStack_88 = (int8_t *)0x0;
    uStack_78 = uStack_78 & 0xffffffff00000000;
    puStack_90 = &UNK_18098bcb0;
    puStack_70 = &UNK_180a3c3e0;
    if (puVar9 == (void *)0x0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar9);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Removing unreachable block (ram,0x00018007258a)
// WARNING: Removing unreachable block (ram,0x0001800724fe)
// WARNING: Removing unreachable block (ram,0x00018007246a)
// WARNING: Removing unreachable block (ram,0x0001800726c4)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



