#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part014.c - 6 个函数

// 函数: void FUN_1800533d0(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_1800533d0(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int32_t uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int8_t *puVar7;
  ulonglong uVar8;
  void *puVar9;
  longlong lVar10;
  uint uVar11;
  int8_t auStack_228 [32];
  int8_t uStack_208;
  int32_t uStack_1f8;
  int32_t uStack_1f4;
  void *puStack_1b0;
  int8_t *puStack_1a8;
  uint uStack_1a0;
  uint64_t uStack_198;
  void *puStack_f0;
  longlong lStack_e8;
  uint uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  void *puStack_c8;
  uint64_t uStack_c0;
  int32_t uStack_b8;
  uint64_t uStack_b0;
  int8_t auStack_88 [32];
  uint64_t uStack_68;
  uint64_t uStack_60;
  char acStack_58 [16];
  ulonglong uStack_48;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_228;
  puVar7 = (int8_t *)0x0;
  uStack_1f8 = 0;
  uStack_d0 = param_2;
  uStack_60 = param_2;
  uVar3 = GetCurrentProcessId();
  puStack_f0 = &UNK_180a3c3e0;
  uStack_d8 = 0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  FUN_1806277c0(&puStack_f0,6);
  lVar1 = lStack_e8;
  uVar8 = (ulonglong)uStack_e0;
  *(int32_t *)(uVar8 + lStack_e8) = 0x44495020;
  *(int16_t *)(uVar8 + 4 + lStack_e8) = 0x203a;
  *(int8_t *)(uVar8 + 6 + lStack_e8) = 0;
  uStack_e0 = 6;
  FUN_180060680(acStack_58,&UNK_1809fd0a0,uVar3);
  lVar2 = -1;
  do {
    lVar10 = lVar2;
    lVar2 = lVar10 + 1;
  } while (acStack_58[lVar10 + 1] != '\0');
  if (0 < (int)(lVar10 + 1)) {
    FUN_1806277c0(&puStack_f0,(int)lVar10 + 7);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)uStack_e0 + lStack_e8,acStack_58,(longlong)((int)lVar10 + 2));
  }
  puVar9 = &system_data_d128;
  if (system_data_2841 != '\0') {
    puVar9 = &UNK_1809fd730;
  }
  FUN_180627910(auStack_88,puVar9);
  puStack_c8 = &UNK_180a3c3e0;
  uStack_b0 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  puStack_1b0 = &UNK_180a3c3e0;
  uVar11 = 0;
  uStack_198 = 0;
  puStack_1a8 = (int8_t *)0x0;
  uStack_1a0 = 0;
  uStack_1f8 = 2;
  uVar6 = *(uint *)(param_3 + 0x10);
  uVar8 = (ulonglong)uVar6;
  uVar5 = 0;
  if (*(longlong *)(param_3 + 8) == 0) {
LAB_1800535b0:
    uVar11 = uVar5;
    if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar7,*(uint64_t *)(param_3 + 8),uVar8);
    }
  }
  else if (uVar6 != 0) {
    iVar4 = uVar6 + 1;
    if (iVar4 < 0x10) {
      iVar4 = 0x10;
    }
    puVar7 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar4,0x13);
    *puVar7 = 0;
    puStack_1a8 = puVar7;
    uVar5 = FUN_18064e990(puVar7);
    uStack_198 = CONCAT44(uStack_198._4_4_,uVar5);
    goto LAB_1800535b0;
  }
  if (puVar7 != (int8_t *)0x0) {
    puVar7[uVar8] = 0;
  }
  uStack_1f4 = *(int32_t *)(param_3 + 0x1c);
  uStack_198 = CONCAT44(uStack_1f4,(int32_t)uStack_198);
  uStack_1a0 = uVar6;
  if (uVar6 != 0xfffffffa) {
    uVar6 = uVar6 + 7;
    if (puVar7 == (int8_t *)0x0) {
      if ((int)uVar6 < 0x10) {
        uVar6 = 0x10;
      }
      puVar7 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar6,0x13);
      *puVar7 = 0;
    }
    else {
      if (uVar6 <= uVar11) goto LAB_18005364c;
      uStack_208 = 0x13;
      puVar7 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar7,uVar6,0x10);
    }
    puStack_1a8 = puVar7;
    uVar3 = FUN_18064e990(puVar7);
    uStack_198 = CONCAT44(uStack_198._4_4_,uVar3);
  }
LAB_18005364c:
                    // WARNING: Subroutine does not return
  memcpy(puVar7 + uVar8,lVar1,7);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180054120(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  char cVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar10;
  ulonglong uVar11;
  uint64_t uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint64_t *puVar16;
  ulonglong uVar17;
  void *puStack_70;
  int8_t *puStack_68;
  uint uStack_60;
  uint64_t uStack_58;
  uint64_t *puStack_50;
  uint64_t *puStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  ulonglong uVar9;
  
  puStack_50 = (uint64_t *)0x0;
  puStack_48 = (uint64_t *)0x0;
  uVar17 = 0;
  uStack_40 = 0;
  uStack_38 = 3;
  FUN_180052200(_DAT_180c86870,&puStack_50,param_3,param_4,0xfffffffffffffffe);
  puVar5 = puStack_48;
  puVar4 = puStack_50;
  uVar11 = (longlong)puStack_48 - (longlong)puStack_50 >> 5;
  puVar3 = puVar4;
  if (uVar11 == 0) {
LAB_180054302:
    uVar12 = 0;
joined_r0x00018005430b:
    for (; puVar3 != puVar5; puVar3 = puVar3 + 4) {
      (**(code **)*puVar3)(puVar3,0);
    }
    if (puVar4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar4);
    }
    return uVar12;
  }
  piVar10 = (int *)(puStack_50 + 2);
  uVar13 = uVar17;
LAB_18005419d:
  puStack_70 = &UNK_180a3c3e0;
  uStack_58 = 0;
  puStack_68 = (int8_t *)0x0;
  uStack_60 = 0;
  FUN_1806277c0(&puStack_70,*piVar10);
  if (*piVar10 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_68,*(uint64_t *)(piVar10 + -2),*piVar10 + 1);
  }
  if (*(longlong *)(piVar10 + -2) != 0) {
    uStack_60 = 0;
    if (puStack_68 != (int8_t *)0x0) {
      *puStack_68 = 0;
    }
    uStack_58 = uStack_58 & 0xffffffff;
  }
  uVar9 = uVar17;
  uVar14 = uVar17;
  if (uStack_60 != 0) {
    do {
      if ((byte)(puStack_68[uVar14] + 0xbf) < 0x1a) {
        puStack_68[uVar14] = puStack_68[uVar14] + ' ';
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar14 = uVar14 + 1;
    } while (uVar8 < uStack_60);
  }
  lVar6 = func_0x0001800464d0(&puStack_70);
  puVar16 = (uint64_t *)&UNK_1809fde40;
  do {
    pcVar7 = (char *)*puVar16;
    lVar15 = lVar6 - (longlong)pcVar7;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[lVar15];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) break;
    puVar16 = puVar16 + 1;
    if (0x1809fde87 < (longlong)puVar16) {
      puStack_70 = &UNK_180a3c3e0;
      if (puStack_68 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_68 = (int8_t *)0x0;
      uStack_58 = (ulonglong)uStack_58._4_4_ << 0x20;
      puStack_70 = &UNK_18098bcb0;
      uVar12 = 1;
      goto joined_r0x00018005430b;
    }
  } while( true );
  puStack_70 = &UNK_180a3c3e0;
  if (puStack_68 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_68 = (int8_t *)0x0;
  uStack_58 = (ulonglong)uStack_58._4_4_ << 0x20;
  puStack_70 = &UNK_18098bcb0;
  uVar8 = (int)uVar13 + 1;
  uVar13 = (ulonglong)uVar8;
  piVar10 = piVar10 + 8;
  if (uVar11 <= (ulonglong)(longlong)(int)uVar8) goto LAB_180054302;
  goto LAB_18005419d;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180054360(longlong *param_1,longlong param_2)
void FUN_180054360(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  longlong *plVar4;
  void *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  int8_t auStack_238 [32];
  int32_t uStack_218;
  void *puStack_208;
  longlong lStack_200;
  uint uStack_1f8;
  uint64_t uStack_1f0;
  int32_t uStack_1e8;
  void *puStack_1e0;
  longlong lStack_1d8;
  uint uStack_1d0;
  uint64_t uStack_1c8;
  void *puStack_1c0;
  longlong lStack_1b8;
  int32_t uStack_1b0;
  ulonglong uStack_1a8;
  int32_t uStack_1a0;
  uint uStack_19c;
  int8_t uStack_198;
  int32_t uStack_194;
  void *puStack_190;
  longlong lStack_188;
  int iStack_180;
  int32_t uStack_178;
  void **ppuStack_170;
  void *puStack_168;
  longlong lStack_160;
  int32_t uStack_150;
  int32_t uStack_148;
  int32_t uStack_144;
  int32_t uStack_140;
  int32_t uStack_13c;
  int32_t uStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  int32_t uStack_12c;
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  int8_t uStack_108;
  int32_t uStack_107;
  int32_t uStack_103;
  uint64_t uStack_f8;
  void **ppuStack_f0;
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  uStack_1e8 = 0;
  ppuStack_f0 = &puStack_1c0;
  puStack_1c0 = &UNK_180a3c3e0;
  uStack_1a8 = 0;
  lStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_19c = 0x100;
  uStack_198 = 0;
  uStack_194 = 0;
  puVar5 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar5 = *(void **)(param_2 + 8);
  }
  FUN_180627c50(&puStack_1c0,puVar5);
  uStack_1a0 = 0;
  uStack_19c = uStack_19c & 0xffffff00;
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x60d30,0x10,0x1f);
  plVar4 = (longlong *)FUN_1801954d0(uVar3,&puStack_1c0);
  ppuStack_170 = (void **)plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  uStack_148 = 0x3f800000;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_134 = 0x3f800000;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0x3f800000;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0x3f800000;
  uStack_107 = 0x1010101;
  uStack_103 = 1;
  uStack_108 = 1;
  puStack_e8 = &UNK_1809fcc28;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = *(int32_t *)(param_2 + 0x10);
  puVar5 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar5 = *(void **)(param_2 + 8);
  }
  strcpy_s(auStack_d0,0x80,puVar5);
  FUN_18019e140(&puStack_190,&puStack_e8);
  puStack_e8 = &UNK_18098bcb0;
  puStack_1e0 = &UNK_180a3c3e0;
  uStack_1c8 = 0;
  lStack_1d8 = 0;
  uStack_1d0 = 0;
  lVar6 = *param_1;
  FUN_1806279c0(&puStack_168,param_2);
  iVar2 = FUN_1801426a0(lVar6,&puStack_168);
  puStack_168 = &UNK_180a3c3e0;
  if (lStack_160 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_160 = 0;
  uStack_150 = 0;
  puStack_168 = &UNK_18098bcb0;
  if ((iVar2 < 0) ||
     (lVar6 = *(longlong *)(*param_1 + 0x888),
     (ulonglong)(*(longlong *)(*param_1 + 0x890) - lVar6 >> 5) <= (ulonglong)(longlong)iVar2)) {
    lVar6 = FUN_180628ca0();
  }
  else {
    lVar6 = (longlong)iVar2 * 0x20 + lVar6;
  }
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  lStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1e8 = 1;
  uVar1 = *(uint *)(lVar6 + 0x10);
  uVar7 = (ulonglong)uVar1;
  if (*(longlong *)(lVar6 + 8) != 0) {
    FUN_1806277c0(&puStack_208,uVar7);
  }
  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lStack_200,*(uint64_t *)(lVar6 + 8),uVar7);
  }
  if (lStack_200 != 0) {
    *(int8_t *)(uVar7 + lStack_200) = 0;
  }
  uStack_1f0 = CONCAT44(*(uint *)(lVar6 + 0x1c),(int32_t)uStack_1f0);
  if (0 < iStack_180) {
    uStack_1f8 = uVar1;
    FUN_1806277c0(&puStack_208,iStack_180);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)uStack_1f8 + lStack_200,lStack_188,(longlong)(iStack_180 + 1));
  }
  lStack_1d8 = lStack_200;
  uStack_1c8._0_4_ = (int32_t)uStack_1f0;
  uStack_1f8 = 0;
  uStack_1e8 = 0;
  lStack_200 = 0;
  uStack_1f0 = 0;
  puStack_208 = &UNK_18098bcb0;
  uStack_218 = 0xffffffff;
  uStack_1d0 = uVar1;
  uStack_1c8._4_4_ = *(uint *)(lVar6 + 0x1c);
  FUN_1801a6440(plVar4,_DAT_180c868e8,&puStack_1e0,&uStack_148);
  FUN_18019e260(plVar4);
  (**(code **)(*(longlong *)param_1[0x56] + 0x138))((longlong *)param_1[0x56],plVar4);
  FUN_180199500(plVar4,0x3d072b02,1);
  FUN_1801a2ea0(plVar4);
  (**(code **)(*(longlong *)param_1[0x56] + 0x140))((longlong *)param_1[0x56],plVar4);
  Sleep(1000);
  puStack_1e0 = &UNK_180a3c3e0;
  if (lStack_1d8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_1d8 = 0;
  uStack_1c8 = (ulonglong)uStack_1c8._4_4_ << 0x20;
  puStack_1e0 = &UNK_18098bcb0;
  puStack_190 = &UNK_180a3c3e0;
  if (lStack_188 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_188 = 0;
  uStack_178 = 0;
  puStack_190 = &UNK_18098bcb0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))(plVar4);
  }
  ppuStack_170 = &puStack_1c0;
  puStack_1c0 = &UNK_180a3c3e0;
  if (lStack_1b8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_1b8 = 0;
  uStack_1a8 = uStack_1a8 & 0xffffffff00000000;
  puStack_1c0 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800547b0(void)
void FUN_1800547b0(void)

{
  uint uVar1;
  longlong *plVar2;
  uint64_t *puVar3;
  char cVar4;
  uint64_t *puVar5;
  int8_t *puVar6;
  int32_t *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint64_t *puVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  void *puVar16;
  int32_t uVar17;
  int8_t auStack_178 [32];
  void *puStack_158;
  int8_t *puStack_150;
  uint uStack_148;
  uint64_t uStack_140;
  void *puStack_138;
  int8_t *puStack_130;
  uint uStack_128;
  ulonglong uStack_120;
  void *puStack_118;
  int8_t *puStack_110;
  int32_t uStack_108;
  ulonglong uStack_100;
  int iStack_f8;
  void *puStack_f0;
  int8_t *puStack_e8;
  int32_t uStack_e0;
  ulonglong uStack_d8;
  void *puStack_d0;
  longlong lStack_c8;
  int iStack_c0;
  int32_t uStack_b8;
  longlong *plStack_a8;
  longlong lStack_a0;
  void *puStack_98;
  void *puStack_90;
  int32_t uStack_80;
  void *puStack_78;
  longlong lStack_70;
  int32_t uStack_60;
  uint64_t *puStack_58;
  uint64_t *puStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  ulonglong uStack_30;
  
  uStack_38 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  plStack_a8 = _DAT_180c86870;
  lVar14 = *(longlong *)(*_DAT_180c86870 + 0x890) - *(longlong *)(*_DAT_180c86870 + 0x888) >> 5;
  iStack_f8 = 0;
  lStack_a0 = lVar14;
  if (0 < (int)lVar14) {
    do {
      iVar9 = iStack_f8;
      iVar13 = 0;
      if (iStack_f8 < 0) {
LAB_18005485e:
        lVar10 = FUN_180628ca0();
      }
      else {
        lVar10 = *(longlong *)(*_DAT_180c86870 + 0x888);
        if ((ulonglong)(*(longlong *)(*_DAT_180c86870 + 0x890) - lVar10 >> 5) <=
            (ulonglong)(longlong)iStack_f8) goto LAB_18005485e;
        lVar10 = (longlong)iStack_f8 * 0x20 + lVar10;
      }
      puStack_138 = &UNK_180a3c3e0;
      uStack_120 = 0;
      puStack_130 = (int8_t *)0x0;
      uStack_128 = 0;
      FUN_1806277c0(&puStack_138,*(int32_t *)(lVar10 + 0x10));
      if (*(int *)(lVar10 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_130,*(uint64_t *)(lVar10 + 8),*(int *)(lVar10 + 0x10) + 1);
      }
      if (*(longlong *)(lVar10 + 8) != 0) {
        uStack_128 = 0;
        if (puStack_130 != (int8_t *)0x0) {
          *puStack_130 = 0;
        }
        uStack_120 = uStack_120 & 0xffffffff;
      }
      if (iVar9 < 0) {
LAB_180054912:
        lVar10 = FUN_180628ca0();
      }
      else {
        lVar10 = *(longlong *)(*_DAT_180c86870 + 0x8a8);
        if ((ulonglong)(*(longlong *)(*_DAT_180c86870 + 0x8b0) - lVar10 >> 5) <
            (ulonglong)(longlong)iVar9) goto LAB_180054912;
        lVar10 = (longlong)iVar9 * 0x20 + lVar10;
      }
      puStack_118 = &UNK_180a3c3e0;
      uStack_100 = 0;
      puStack_110 = (int8_t *)0x0;
      uStack_108 = 0;
      FUN_1806277c0(&puStack_118,*(int32_t *)(lVar10 + 0x10));
      if (*(int *)(lVar10 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_110,*(uint64_t *)(lVar10 + 8),*(int *)(lVar10 + 0x10) + 1);
      }
      if (*(longlong *)(lVar10 + 8) != 0) {
        uStack_108 = 0;
        if (puStack_110 != (int8_t *)0x0) {
          *puStack_110 = 0;
        }
        uStack_100 = uStack_100 & 0xffffffff;
      }
      iVar8 = uStack_128 + 8;
      FUN_1806277c0(&puStack_138,iVar8);
      *(uint64_t *)(puStack_130 + uStack_128) = 0x6a624f656e656353;
      *(int8_t *)((longlong)(puStack_130 + uStack_128) + 8) = 0;
      uStack_128 = iVar8;
      cVar4 = FUN_180624a00(&puStack_138);
      if (cVar4 == '\0') {
        puStack_118 = &UNK_180a3c3e0;
        if (puStack_110 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_110 = (int8_t *)0x0;
        uStack_100 = uStack_100 & 0xffffffff00000000;
        puStack_118 = &UNK_18098bcb0;
        puStack_138 = &UNK_180a3c3e0;
        if (puStack_130 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      else {
        puStack_58 = (uint64_t *)0x0;
        puStack_50 = (uint64_t *)0x0;
        uStack_48 = 0;
        uStack_40 = 3;
        FUN_18062c5f0(&puStack_138,&puStack_58);
        puVar5 = puStack_50;
        puVar3 = puStack_58;
        lVar10 = (longlong)puStack_50 - (longlong)puStack_58;
        FUN_18004b100(&puStack_d0);
        puVar6 = &system_buffer_ptr;
        if (puStack_110 != (int8_t *)0x0) {
          puVar6 = puStack_110;
        }
        FUN_180628040(&puStack_d0,&UNK_1809fd7c4,puVar6);
        cVar4 = FUN_180624a00(&puStack_d0);
        if (cVar4 == '\0') {
          FUN_180624910(&puStack_d0);
        }
        plVar2 = plStack_a8;
        iVar8 = (int)(lVar10 >> 5);
        lVar10 = (longlong)iVar8;
        if (0 < iVar8) {
          puVar15 = (uint *)(puVar3 + 2);
          do {
            FUN_180061db0();
            FUN_180061be0();
            puStack_158 = &UNK_180a3c3e0;
            uStack_140._0_4_ = 0;
            uStack_140._4_4_ = 0;
            puStack_150 = (int8_t *)0x0;
            uStack_148 = 0;
            FUN_1806277c0(&puStack_158,*puVar15);
            if (*puVar15 != 0) {
                    // WARNING: Subroutine does not return
              memcpy(puStack_150,*(uint64_t *)(puVar15 + -2),*puVar15 + 1);
            }
            if (*(longlong *)(puVar15 + -2) != 0) {
              uStack_148 = 0;
              if (puStack_150 != (int8_t *)0x0) {
                *puStack_150 = 0;
              }
              uStack_140._4_4_ = 0;
            }
            iVar9 = uStack_148 + 0xd;
            FUN_1806277c0(&puStack_158,iVar9);
            puVar5 = (uint64_t *)(puStack_150 + uStack_148);
            *puVar5 = 0x782e656e6563732f;
            *(int32_t *)(puVar5 + 1) = 0x6e656373;
            *(int16_t *)((longlong)puVar5 + 0xc) = 0x65;
            puVar6 = &system_buffer_ptr;
            if (puStack_150 != (int8_t *)0x0) {
              puVar6 = puStack_150;
            }
            uStack_148 = iVar9;
            lVar14 = strstr(puVar6,&UNK_1809fd7d8);
            if (lVar14 == 0) {
              puVar6 = &system_buffer_ptr;
              if (puStack_150 != (int8_t *)0x0) {
                puVar6 = puStack_150;
              }
              lVar14 = strstr(puVar6,&UNK_1809fd7f8);
              if (lVar14 != 0) goto LAB_180054ec9;
              puVar6 = &system_buffer_ptr;
              if (puStack_150 != (int8_t *)0x0) {
                puVar6 = puStack_150;
              }
              lVar14 = strstr(puVar6,&UNK_1809fd810);
              if (lVar14 != 0) goto LAB_180054ec9;
              puVar6 = &system_buffer_ptr;
              if (puStack_150 != (int8_t *)0x0) {
                puVar6 = puStack_150;
              }
              lVar14 = strstr(puVar6,&UNK_1809fd828);
              if (lVar14 != 0) goto LAB_180054ec9;
              puVar6 = &system_buffer_ptr;
              if (puStack_150 != (int8_t *)0x0) {
                puVar6 = puStack_150;
              }
              lVar14 = strstr(puVar6,&UNK_1809fd848);
              if (lVar14 != 0) goto LAB_180054ec9;
              cVar4 = FUN_180624af0(&puStack_158);
              if (cVar4 == '\0') {
                uStack_148 = 0;
                if (puStack_150 != (int8_t *)0x0) {
                  *puStack_150 = 0;
                }
                uVar1 = *puVar15;
                uVar11 = (ulonglong)uVar1;
                if (*(longlong *)(puVar15 + -2) != 0) {
                  FUN_1806277c0(&puStack_158,uVar11);
                }
                if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
                  memcpy(puStack_150,*(uint64_t *)(puVar15 + -2),uVar11);
                }
                if (puStack_150 != (int8_t *)0x0) {
                  puStack_150[uVar11] = 0;
                }
                uStack_140._4_4_ = puVar15[3];
                uStack_148 = uVar1;
                FUN_1806277c0(&puStack_158,0x12);
                puVar7 = (int32_t *)(puStack_150 + uStack_148);
                *puVar7 = 0x6563732f;
                puVar7[1] = 0x782e656e;
                puVar7[2] = 0x2e6f6373;
                puVar7[3] = 0x65637378;
                *(int16_t *)(puVar7 + 4) = 0x656e;
                *(int8_t *)((longlong)puVar7 + 0x12) = 0;
                uStack_148 = 0x12;
                cVar4 = FUN_180624af0(&puStack_158);
                if (cVar4 != '\0') goto LAB_180054d28;
                puStack_158 = &UNK_180a3c3e0;
                if (puStack_150 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
              }
              else {
LAB_180054d28:
                iVar9 = *puVar15 - 1;
                if (-1 < iVar9) {
                  lVar14 = (longlong)iVar9;
                  do {
                    if (*(char *)(lVar14 + *(longlong *)(puVar15 + -2)) == '/') goto LAB_180054d57;
                    iVar9 = iVar9 + -1;
                    lVar14 = lVar14 + -1;
                  } while (-1 < lVar14);
                }
                iVar9 = -1;
LAB_180054d57:
                FUN_180629a40(puVar3 + (longlong)iVar13 * 4,&puStack_98,iVar9 + 1,0xffffffff);
                uVar17 = FUN_180054360(plVar2,&puStack_98);
                if (_DAT_180c82854 != 0) {
                  FUN_18005c1c0(uVar17,&puStack_78);
                  puStack_f0 = &UNK_180a3c3e0;
                  uStack_d8 = 0;
                  puStack_e8 = (int8_t *)0x0;
                  uStack_e0 = 0;
                  FUN_1806277c0(&puStack_f0,iStack_c0);
                  if (iStack_c0 != 0) {
                    // WARNING: Subroutine does not return
                    memcpy(puStack_e8,lStack_c8,iStack_c0 + 1);
                  }
                  if (lStack_c8 != 0) {
                    uStack_e0 = 0;
                    if (puStack_e8 != (int8_t *)0x0) {
                      *puStack_e8 = 0;
                    }
                    uStack_d8 = uStack_d8 & 0xffffffff;
                  }
                  puVar16 = &system_buffer_ptr;
                  if (puStack_90 != (void *)0x0) {
                    puVar16 = puStack_90;
                  }
                  FUN_180628040(&puStack_f0,&UNK_1809fd870,puVar16);
                  FUN_18062db60(&puStack_f0,&puStack_78);
                  _DAT_180c82854 = 0;
                  puStack_f0 = &UNK_180a3c3e0;
                  if (puStack_e8 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  puStack_e8 = (int8_t *)0x0;
                  uStack_d8 = uStack_d8 & 0xffffffff00000000;
                  puStack_f0 = &UNK_18098bcb0;
                  puStack_78 = &UNK_180a3c3e0;
                  if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  lStack_70 = 0;
                  uStack_60 = 0;
                  puStack_78 = &UNK_18098bcb0;
                }
                puStack_98 = &UNK_180a3c3e0;
                if (puStack_90 != (void *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                puStack_90 = (void *)0x0;
                uStack_80 = 0;
                puStack_98 = &UNK_18098bcb0;
                puStack_158 = &UNK_180a3c3e0;
                if (puStack_150 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
              }
            }
            else {
LAB_180054ec9:
              puStack_158 = &UNK_180a3c3e0;
              if (puStack_150 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
            }
            puStack_150 = (int8_t *)0x0;
            puStack_158 = &UNK_18098bcb0;
            iVar13 = iVar13 + 1;
            puVar15 = puVar15 + 8;
            lVar10 = lVar10 + -1;
            lVar14 = lStack_a0;
            puVar5 = puStack_50;
            iVar9 = iStack_f8;
          } while (lVar10 != 0);
        }
        puStack_d0 = &UNK_180a3c3e0;
        if (lStack_c8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_c8 = 0;
        uStack_b8 = 0;
        puStack_d0 = &UNK_18098bcb0;
        for (puVar12 = puVar3; puVar12 != puVar5; puVar12 = puVar12 + 4) {
          (**(code **)*puVar12)(puVar12,0);
        }
        if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar3);
        }
        puStack_118 = &UNK_180a3c3e0;
        if (puStack_110 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_110 = (int8_t *)0x0;
        uStack_100 = uStack_100 & 0xffffffff00000000;
        puStack_118 = &UNK_18098bcb0;
        puStack_138 = &UNK_180a3c3e0;
        if (puStack_130 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      puStack_110 = (int8_t *)0x0;
      puStack_118 = &UNK_18098bcb0;
      uStack_120 = uStack_120 & 0xffffffff00000000;
      puStack_130 = (int8_t *)0x0;
      puStack_138 = &UNK_18098bcb0;
      iStack_f8 = iVar9 + 1;
    } while (iStack_f8 < (int)lVar14);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180055050(void)
void FUN_180055050(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  longlong lVar4;
  
  puVar2 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x198,8,3);
  puVar1 = puVar2 + 4;
  FUN_180637560(puVar1);
  *puVar1 = &UNK_180a3cf50;
  *(int16_t *)(puVar2 + 0x1a) = 1;
  *(int32_t *)(puVar2 + 9) = 0;
  *(int8_t *)((longlong)puVar2 + 0x54) = 0;
  *puVar1 = &UNK_1809fe6d8;
  puVar1 = puVar2 + 0x1b;
  FUN_180637560(puVar1);
  *puVar1 = &UNK_180a3cf50;
  *(int16_t *)(puVar2 + 0x31) = 1;
  *(int32_t *)(puVar2 + 0x20) = 0;
  *(int8_t *)((longlong)puVar2 + 0x10c) = 0;
  *puVar1 = &UNK_1809fe6d8;
  *puVar2 = 0;
  *(int8_t *)(puVar2 + 3) = 0;
  puVar2[2] = 0xffffffff00000000;
  *(int32_t *)(puVar2 + 1) = 0xe;
  _DAT_180c86928 = puVar2;
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x480,8,3);
  _DAT_180c8a9f8 = FUN_18004bd10(uVar3);
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x10420,8,3);
  _DAT_180c868c0 = FUN_18005c090(uVar3);
  _DAT_180c868d8 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,3);
  *(int32_t *)(_DAT_180c868d8 + 0x19) = 0;
  *(int16_t *)(_DAT_180c868d8 + 0x1d) = 0;
  *(int8_t *)(_DAT_180c868d8 + 0x1f) = 0;
  *(int32_t *)(_DAT_180c868d8 + 0x28) = 3;
  *(longlong *)_DAT_180c868d8 = _DAT_180c868d8;
  *(longlong *)(_DAT_180c868d8 + 8) = _DAT_180c868d8;
  *(uint64_t *)(_DAT_180c868d8 + 0x10) = 0;
  *(int8_t *)(_DAT_180c868d8 + 0x18) = 0;
  *(uint64_t *)(_DAT_180c868d8 + 0x20) = 0;
  _DAT_180c86910 = FUN_18062b1e0(_DAT_180c8ed18,8,4,3);
  *(int32_t *)(_DAT_180c86910 + 4) = 0;
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x80,8,3);
  _DAT_180c86900 = FUN_18015c450(uVar3);
  lVar4 = FUN_18062b1e0(_DAT_180c8ed18,0xe8,8,3);
  _Mtx_init_in_situ(lVar4,2);
  _Mtx_init_in_situ(lVar4 + 0x50,2);
  *(uint64_t *)(lVar4 + 0xa0) = 0;
  *(uint64_t *)(lVar4 + 0xa8) = 0;
  *(uint64_t *)(lVar4 + 0xb0) = 0;
  *(int32_t *)(lVar4 + 0xb8) = 3;
  *(uint64_t *)(lVar4 + 0xc0) = 0;
  *(uint64_t *)(lVar4 + 200) = 0;
  *(uint64_t *)(lVar4 + 0xd0) = 0;
  *(int32_t *)(lVar4 + 0xd8) = 0x20;
  *(int32_t *)(lVar4 + 0xe0) = 0;
  _DAT_180c8a998 = lVar4;
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
                    // WARNING: Subroutine does not return
  memset(uVar3,0,0x70);
}





// 函数: void FUN_180055e10(longlong *param_1)
void FUN_180055e10(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    FUN_180058c20(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180055e30(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180055e30(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180058210(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





