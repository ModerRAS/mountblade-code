#include "TaleWorlds.Native.Split.h"

// 99_part_08_part023.c - 9 个函数

// 函数: void FUN_1804f6570(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
void FUN_1804f6570(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
                  uint *param_5,char param_6)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int32_t uVar4;
  int8_t auStack_1b8 [48];
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  int32_t uStack_17c;
  uint64_t uStack_178;
  void *puStack_168;
  int8_t *puStack_160;
  int32_t uStack_158;
  int8_t auStack_150 [72];
  void *puStack_108;
  int8_t *puStack_100;
  int32_t uStack_f8;
  int8_t auStack_f0 [72];
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_1b8;
  if ((param_6 == '\0') && (param_2 != 0)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8);
    if ((*(int *)(lVar1 + 0x48) < _DAT_180d49e38) &&
       (FUN_1808fcb90(&system_ptr_9e38), _DAT_180d49e38 == -1)) {
      puStack_168 = &unknown_var_672_ptr;
      puStack_160 = auStack_150;
      auStack_150[0] = 0;
      uStack_158 = 4;
      strcpy_s(auStack_150,0x20,&unknown_var_4776_ptr);
      _DAT_180d49e3c = FUN_180191c00(_DAT_180c8aa00,&puStack_168);
      puStack_168 = &unknown_var_720_ptr;
      FUN_1808fcb30(&system_ptr_9e38);
    }
    if ((*(int *)(lVar1 + 0x48) < _DAT_180d49e40) &&
       (FUN_1808fcb90(&system_ptr_9e40), _DAT_180d49e40 == -1)) {
      puStack_168 = &unknown_var_672_ptr;
      puStack_160 = auStack_150;
      auStack_150[0] = 0;
      uStack_158 = 5;
      strcpy_s(auStack_150,0x20,&unknown_var_4768_ptr);
      _DAT_180d49e44 = FUN_180191c00(_DAT_180c8aa00,&puStack_168);
      puStack_168 = &unknown_var_720_ptr;
      FUN_1808fcb30(&system_ptr_9e40);
    }
    if (*(int *)(param_2 + 100) == _DAT_180d49e3c) {
      puStack_168 = &unknown_var_3480_ptr;
      puStack_160 = auStack_150;
      auStack_150[0] = 0;
      uStack_158 = 0x15;
      uVar4 = strcpy_s(auStack_150,0x40,&unknown_var_4816_ptr);
      iVar2 = FUN_1800c17c0(uVar4,&puStack_168);
      puStack_168 = &unknown_var_720_ptr;
      iVar3 = _DAT_180d49e4c;
      if ((*(int *)(lVar1 + 0x48) < _DAT_180d49e48) &&
         (FUN_1808fcb90(&system_ptr_9e48), iVar3 = _DAT_180d49e4c, _DAT_180d49e48 == -1)) {
        puStack_168 = &unknown_var_3480_ptr;
        puStack_160 = auStack_150;
        auStack_150[0] = 0;
        uStack_158 = 0x19;
        uVar4 = strcpy_s(auStack_150,0x40,&unknown_var_4784_ptr);
        _DAT_180d49e4c = FUN_1800c17c0(uVar4,&puStack_168);
        puStack_168 = &unknown_var_720_ptr;
        FUN_1808fcb30(&system_ptr_9e48);
        iVar3 = _DAT_180d49e4c;
      }
    }
    else {
      if (*(int *)(param_2 + 100) != _DAT_180d49e44) goto LAB_1804f6786;
      puStack_108 = &unknown_var_3480_ptr;
      puStack_100 = auStack_f0;
      auStack_f0[0] = 0;
      uStack_f8 = 0x16;
      uVar4 = strcpy_s(auStack_f0,0x40,&unknown_var_5144_ptr);
      iVar2 = FUN_1800c17c0(uVar4,&puStack_108);
      puStack_108 = &unknown_var_720_ptr;
      iVar3 = _DAT_180d49e54;
      if ((*(int *)(lVar1 + 0x48) < _DAT_180d49e50) &&
         (FUN_1808fcb90(&system_ptr_9e50), iVar3 = _DAT_180d49e54, _DAT_180d49e50 == -1)) {
        puStack_108 = &unknown_var_3480_ptr;
        puStack_100 = auStack_f0;
        auStack_f0[0] = 0;
        uStack_f8 = 0x13;
        uVar4 = strcpy_s(auStack_f0,0x40,&unknown_var_5120_ptr);
        _DAT_180d49e54 = FUN_1800c17c0(uVar4,&puStack_108);
        puStack_108 = &unknown_var_720_ptr;
        FUN_1808fcb30(&system_ptr_9e50);
        iVar3 = _DAT_180d49e54;
      }
    }
    if (iVar3 != -1) {
      uStack_180 = param_5[2] ^ 0x80000000;
      uStack_184 = param_5[1] ^ 0x80000000;
      uStack_188 = *param_5 ^ 0x80000000;
      uStack_17c = 0x7f7fffff;
      FUN_1804eb8d0(param_1,uStack_184,param_3,&uStack_188);
    }
  }
  else {
LAB_1804f6786:
    puStack_a8 = &unknown_var_3480_ptr;
    puStack_a0 = auStack_90;
    auStack_90[0] = 0;
    uStack_98 = 0xc;
    uVar4 = strcpy_s(auStack_90,0x40,&unknown_var_5168_ptr);
    iVar2 = FUN_1800c17c0(uVar4,&puStack_a8);
    puStack_a8 = &unknown_var_720_ptr;
  }
  if (iVar2 != -1) {
    FUN_1804eb8d0(param_1,iVar2,param_3,param_4);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_1b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f6a60(longlong param_1,uint64_t *param_2,longlong *param_3)
void FUN_1804f6a60(longlong param_1,uint64_t *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint64_t *puVar7;
  longlong lVar8;
  longlong lVar9;
  int8_t auStack_108 [32];
  longlong *plStack_e8;
  int iStack_e0;
  longlong *plStack_d8;
  uint64_t *puStack_d0;
  uint64_t *puStack_c8;
  uint64_t *puStack_c0;
  uint64_t *puStack_b8;
  int32_t uStack_b0;
  uint64_t uStack_a8;
  longlong alStack_98 [3];
  int32_t uStack_80;
  uint64_t uStack_68;
  longlong lStack_60;
  uint64_t uStack_58;
  ulonglong uStack_48;
  
  uStack_a8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  lVar5 = *(longlong *)(param_1 + 0x18);
  plStack_e8 = param_3;
  puStack_d0 = param_2;
  if (*(char *)(lVar5 + 0x5c41) != '\0') {
    FUN_1800b8500(lVar5 + 0x8138);
    FUN_1801ae4a0(lVar5,&unknown_var_6976_ptr,lVar5 + 0x8138);
    *(int8_t *)(lVar5 + 0x5c41) = 0;
  }
  plVar1 = plStack_e8;
  if ((ulonglong)(*(longlong *)(lVar5 + 0x8140) - *(longlong *)(lVar5 + 0x8138) >> 3) < 3) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60b80) == 0) {
      *puStack_d0 = *(uint64_t *)(*(longlong *)(param_1 + 0x18) + 0x60b68);
      *plStack_e8 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60b70);
    }
    else {
      plStack_e8 = (longlong *)0x0;
      *puStack_d0 = 0;
      *plVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60b80) + 0x20);
    }
  }
  else {
    puStack_c8 = (uint64_t *)0x0;
    puStack_c0 = (uint64_t *)0x0;
    puVar7 = (uint64_t *)0x0;
    puStack_b8 = (uint64_t *)0x0;
    uStack_b0 = 3;
    iStack_e0 = 0;
    lVar8 = *(longlong *)(lVar5 + 0x8138);
    puVar3 = (uint64_t *)0x0;
    if (*(longlong *)(lVar5 + 0x8140) - lVar8 >> 3 != 0) {
      plStack_d8 = (longlong *)0x0;
      puVar4 = puVar3;
      do {
        puVar2 = puStack_c0;
        lVar8 = *(longlong *)(lVar8 + (longlong)plStack_d8);
        if (puStack_c0 < puVar7) {
          *puStack_c0 = *(uint64_t *)(lVar8 + 0xa0);
          puVar3 = puVar4;
        }
        else {
          lVar6 = (longlong)puStack_c0 - (longlong)puVar4 >> 3;
          lVar9 = lVar6 * 2;
          if (lVar6 == 0) {
            lVar9 = 1;
          }
          if (lVar9 == 0) {
            puVar3 = (uint64_t *)0x0;
          }
          else {
            puVar3 = (uint64_t *)
                     FUN_18062b420(_DAT_180c8ed18,lVar9 * 8,
                                   CONCAT71((int7)((longlong)puStack_c0 - (longlong)puVar4 >> 0xb),3
                                           ));
          }
          if (puVar4 != puVar2) {
                    // WARNING: Subroutine does not return
            memmove(puVar3,puVar4,(longlong)puVar2 - (longlong)puVar4);
          }
          *puVar3 = *(uint64_t *)(lVar8 + 0xa0);
          if (puVar4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar4);
          }
          puVar7 = puVar3 + lVar9;
          puStack_c8 = puVar3;
          puStack_b8 = puVar7;
          puStack_c0 = puVar3;
        }
        puStack_c0 = puStack_c0 + 1;
        iStack_e0 = iStack_e0 + 1;
        plStack_d8 = (longlong *)((longlong)plStack_d8 + 8);
        lVar8 = *(longlong *)(lVar5 + 0x8138);
        puVar4 = puVar3;
      } while ((ulonglong)(longlong)iStack_e0 <
               (ulonglong)(*(longlong *)(lVar5 + 0x8140) - lVar8 >> 3));
    }
    plStack_d8 = alStack_98;
    alStack_98[0] = 0;
    alStack_98[1] = 0;
    alStack_98[2] = 0;
    uStack_80 = 3;
    uStack_68 = 0;
    lStack_60 = 0;
    uStack_58 = 0;
    lVar5 = (longlong)puStack_c0 - (longlong)puVar3;
    FUN_180640330(puVar3);
    FUN_18063efb0(alStack_98,&puStack_c8,lVar5 >> 3 & 0xffffffff,0);
    *puStack_d0 = uStack_68;
    *plStack_e8 = lStack_60;
    plStack_e8 = alStack_98;
    if (alStack_98[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar3);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_108);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f6d60(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804f6d60(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint64_t uVar11;
  
  uVar11 = 0xfffffffffffffffe;
  *(int8_t *)(param_1 + 0x87b3b0) = 0;
  lVar5 = (longlong)
          (int)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x78) -
                *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) >> 3);
  plVar4 = (longlong *)0x0;
  plVar8 = plVar4;
  if (0 < lVar5) {
    do {
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70) + (longlong)plVar8 * 8);
      lVar9 = *(longlong *)(lVar2 + 0x10);
      if ((lVar9 != 0) && ((*(byte *)(lVar2 + 0x18) & 0x40) != 0)) {
        plVar7 = *(longlong **)(param_1 + 0x87b398);
        if (plVar7 < *(longlong **)(param_1 + 0x87b3a0)) {
          *(longlong **)(param_1 + 0x87b398) = plVar7 + 1;
          *plVar7 = lVar9;
        }
        else {
          plVar6 = *(longlong **)(param_1 + 0x87b390);
          lVar10 = (longlong)plVar7 - (longlong)plVar6 >> 3;
          if (lVar10 == 0) {
            lVar10 = 1;
LAB_1804f6e31:
            plVar3 = (longlong *)
                     FUN_18062b420(_DAT_180c8ed18,lVar10 * 8,*(int8_t *)(param_1 + 0x87b3a8),
                                   param_4,uVar11);
            plVar7 = *(longlong **)(param_1 + 0x87b398);
            plVar6 = *(longlong **)(param_1 + 0x87b390);
          }
          else {
            lVar10 = lVar10 * 2;
            plVar3 = plVar4;
            if (lVar10 != 0) goto LAB_1804f6e31;
          }
          if (plVar6 != plVar7) {
                    // WARNING: Subroutine does not return
            memmove(plVar3,plVar6,(longlong)plVar7 - (longlong)plVar6);
          }
          *plVar3 = lVar9;
          if (*(longlong *)(param_1 + 0x87b390) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(longlong **)(param_1 + 0x87b390) = plVar3;
          *(longlong **)(param_1 + 0x87b398) = plVar3 + 1;
          *(longlong **)(param_1 + 0x87b3a0) = plVar3 + lVar10;
        }
      }
      if ((*(uint *)(lVar2 + 0x18) & 0x100000) != 0) {
        *(int8_t *)(param_1 + 0x87b3b0) = 1;
      }
      plVar8 = (longlong *)((longlong)plVar8 + 1);
    } while ((longlong)plVar8 < lVar5);
  }
  lVar5 = *(longlong *)(param_1 + 0x87b398);
  lVar2 = *(longlong *)(param_1 + 0x87b390);
  uVar1 = *(uint *)(param_1 + 0x87b3a8);
  lVar10 = lVar5 - lVar2;
  lVar9 = lVar10 >> 3;
  if (lVar9 != 0) {
    plVar4 = (longlong *)
             FUN_18062b420(_DAT_180c8ed18,lVar9 * 8,uVar1 & 0xff,param_4,uVar11,0,0,0,uVar1);
  }
  plVar8 = plVar4 + lVar9;
  if (lVar2 == lVar5) {
    lVar5 = *(longlong *)(param_1 + 0x87b390);
    *(longlong **)(param_1 + 0x87b390) = plVar4;
    *(longlong **)(param_1 + 0x87b398) = plVar8;
    *(longlong **)(param_1 + 0x87b3a0) = plVar8;
    *(uint *)(param_1 + 0x87b3a8) = uVar1;
    if (lVar5 == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  memmove(plVar4,lVar2,lVar10,param_4,uVar11,plVar4,plVar8,plVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f6fd0(longlong param_1)
void FUN_1804f6fd0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  int32_t uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iStack_68;
  float fStack_64;
  int iStack_60;
  float fStack_5c;
  
  lVar4 = _DAT_180c86878;
  piVar6 = &iStack_68;
  lVar8 = 2;
  lVar9 = 2;
  iVar1 = *(int *)(param_1 + 0x52ed94);
  do {
    func_0x00018005d390(piVar6);
    piVar6 = piVar6 + 2;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar5 = *(int *)(param_1 + 0x52ed94);
  fVar15 = -1.0;
  iVar10 = 0;
  fStack_64 = -1.0;
  iStack_68 = -1;
  iStack_60 = -1;
  fStack_5c = -1.0;
  iVar2 = iVar5;
  iVar3 = iStack_68;
  if (0 < iVar5) {
    lVar9 = 0;
    piVar6 = (int *)(param_1 + 0x30b0);
    do {
      iVar2 = iVar10;
      if (-1 < *piVar6) break;
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 1;
      piVar6 = piVar6 + 0x298;
      iVar2 = iVar5;
    } while (lVar9 < iVar5);
  }
  for (; iStack_68 = iVar3, iVar2 < iVar1;
      iVar2 = (int)*(short *)(param_1 + 0x52dda0 + (longlong)iVar2 * 2)) {
    lVar9 = (longlong)iVar2 * 0xa60;
    if ((((*(int *)(lVar9 + 0x3610 + param_1) == 2) ||
         (lVar7 = *(longlong *)(lVar9 + 0x3778 + param_1), lVar7 == 0)) ||
        (*(char *)(lVar7 + 0x8be) == '\0')) ||
       (((iVar5 = *(int *)(lVar9 + 0x3600 + param_1), -1 < iVar5 &&
         (*(int *)((longlong)iVar5 * 0xa60 + 0x3610 + param_1) == 2)) ||
        (fVar14 = *(float *)(lVar4 + 0x1b8) - *(float *)(lVar7 + 0x8e4),
        fVar13 = *(float *)(lVar4 + 0x1bc) - *(float *)(lVar7 + 0x8e8),
        fVar11 = *(float *)(lVar4 + 0x1c0) - *(float *)(lVar7 + 0x8ec),
        fVar11 = fVar14 * fVar14 + fVar13 * fVar13 + fVar11 * fVar11, 9604.0 <= fVar11)))) {
      lVar7 = *(longlong *)(lVar9 + 0x3978 + param_1);
      *(int32_t *)(lVar9 + 0x36e8 + param_1) = 0;
      *(float *)(lVar9 + 0x36ec + param_1) =
           (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(lVar7 + 0x87b790) * 8) -
                  *(longlong *)(lVar7 + 0x87b788)) * 1e-05;
      fVar15 = fStack_64;
    }
    else {
      fVar13 = 0.5;
      iVar5 = (int)(fVar11 * 0.0009371096);
      if (iVar5 == 1) {
        fVar13 = 1.5;
      }
      else if (1 < iVar5) {
        fVar13 = 3.0;
      }
      fVar11 = (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x87b790) * 8) -
                      *(longlong *)(param_1 + 0x87b788)) * 1e-05 -
               *(float *)(lVar9 + 0x36ec + param_1);
      if (fVar13 < fVar11) {
        fVar13 = fVar11;
        iVar5 = iVar2;
        if (fVar15 < fVar11) {
          iStack_68 = iVar2;
          fStack_64 = fVar11;
          fVar13 = fVar15;
          fVar15 = fVar11;
          iVar5 = iVar3;
        }
        if (fStack_5c < fVar13) {
          fStack_5c = fVar13;
          iStack_60 = iVar5;
        }
      }
    }
    iVar3 = iStack_68;
  }
  piVar6 = &iStack_68;
  do {
    if (*piVar6 != -1) {
      lVar7 = (longlong)*piVar6 * 0xa60;
      uVar12 = FUN_1804f72f0(param_1,*(longlong *)(lVar7 + 0x3778 + param_1) + 0x8e4,lVar4 + 0x1b8);
      lVar9 = *(longlong *)(lVar7 + 0x3978 + param_1);
      *(int32_t *)(lVar7 + 0x36e8 + param_1) = uVar12;
      *(float *)(lVar7 + 0x36ec + param_1) =
           (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(lVar9 + 0x87b790) * 8) -
                  *(longlong *)(lVar9 + 0x87b788)) * 1e-05;
    }
    piVar6 = piVar6 + 2;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}






// 函数: void FUN_1804f6ffc(longlong param_1)
void FUN_1804f6ffc(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong in_RAX;
  int *piVar4;
  longlong lVar5;
  longlong unaff_RBX;
  longlong lVar6;
  ulonglong unaff_RBP;
  ulonglong uVar7;
  int iVar8;
  uint64_t unaff_R14;
  longlong unaff_R15;
  float fVar9;
  int32_t uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iStackX_20;
  float fStackX_24;
  float fStack000000000000002c;
  
  *(uint64_t *)(in_RAX + 8) = unaff_R14;
  uVar7 = unaff_RBP & 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x52ed94);
  do {
    func_0x00018005d390(unaff_RBX);
    unaff_RBX = unaff_RBX + 8;
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
  iVar3 = *(int *)(param_1 + 0x52ed94);
  fVar13 = -1.0;
  iVar8 = 0;
  fStackX_24 = -1.0;
  iStackX_20 = -1;
  fStack000000000000002c = -1.0;
  iVar2 = iVar3;
  if (0 < iVar3) {
    lVar5 = 0;
    piVar4 = (int *)(param_1 + 0x30b0);
    do {
      iVar2 = iVar8;
      if (-1 < *piVar4) break;
      iVar8 = iVar8 + 1;
      lVar5 = lVar5 + 1;
      piVar4 = piVar4 + 0x298;
      iVar2 = iVar3;
    } while (lVar5 < iVar3);
  }
  for (; iVar2 < iVar1; iVar2 = (int)*(short *)(param_1 + 0x52dda0 + (longlong)iVar2 * 2)) {
    lVar5 = (longlong)iVar2 * 0xa60;
    if ((((*(int *)(lVar5 + 0x3610 + param_1) == (int)unaff_RBP) ||
         (lVar6 = *(longlong *)(lVar5 + 0x3778 + param_1), lVar6 == 0)) ||
        (*(char *)(lVar6 + 0x8be) == '\0')) ||
       (((iVar3 = *(int *)(lVar5 + 0x3600 + param_1), -1 < iVar3 &&
         (*(int *)((longlong)iVar3 * 0xa60 + 0x3610 + param_1) == (int)unaff_RBP)) ||
        (fVar12 = *(float *)(unaff_R15 + 0x1b8) - *(float *)(lVar6 + 0x8e4),
        fVar11 = *(float *)(unaff_R15 + 0x1bc) - *(float *)(lVar6 + 0x8e8),
        fVar9 = *(float *)(unaff_R15 + 0x1c0) - *(float *)(lVar6 + 0x8ec),
        fVar9 = fVar12 * fVar12 + fVar11 * fVar11 + fVar9 * fVar9, 9604.0 <= fVar9)))) {
      lVar6 = *(longlong *)(lVar5 + 0x3978 + param_1);
      *(int32_t *)(lVar5 + 0x36e8 + param_1) = 0;
      *(float *)(lVar5 + 0x36ec + param_1) =
           (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(lVar6 + 0x87b790) * 8) -
                  *(longlong *)(lVar6 + 0x87b788)) * 1e-05;
      fVar13 = fStackX_24;
    }
    else {
      fVar11 = 0.5;
      iVar3 = (int)(fVar9 * 0.0009371096);
      if (iVar3 == 1) {
        fVar11 = 1.5;
      }
      else if (1 < iVar3) {
        fVar11 = 3.0;
      }
      fVar9 = (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x87b790) * 8) -
                     *(longlong *)(param_1 + 0x87b788)) * 1e-05 -
              *(float *)(lVar5 + 0x36ec + param_1);
      if (fVar11 < fVar9) {
        fVar11 = fVar9;
        if (fVar13 < fVar9) {
          iStackX_20 = iVar2;
          fStackX_24 = fVar9;
          fVar11 = fVar13;
          fVar13 = fVar9;
        }
        if (fStack000000000000002c < fVar11) {
          fStack000000000000002c = fVar11;
        }
      }
    }
  }
  piVar4 = &iStackX_20;
  do {
    if (*piVar4 != -1) {
      lVar6 = (longlong)*piVar4 * 0xa60;
      uVar10 = FUN_1804f72f0(param_1,*(longlong *)(lVar6 + 0x3778 + param_1) + 0x8e4,
                             unaff_R15 + 0x1b8);
      lVar5 = *(longlong *)(lVar6 + 0x3978 + param_1);
      *(int32_t *)(lVar6 + 0x36e8 + param_1) = uVar10;
      *(float *)(lVar6 + 0x36ec + param_1) =
           (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(lVar5 + 0x87b790) * 8) -
                  *(longlong *)(lVar5 + 0x87b788)) * 1e-05;
    }
    piVar4 = piVar4 + 2;
    unaff_RBP = unaff_RBP - 1;
  } while (unaff_RBP != 0);
  return;
}






// 函数: void FUN_1804f70a5(uint64_t param_1,uint64_t param_2,int param_3,float param_4,
void FUN_1804f70a5(uint64_t param_1,uint64_t param_2,int param_3,float param_4,
                  uint64_t param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBP;
  int *piVar4;
  longlong unaff_RDI;
  int32_t in_R11D;
  longlong unaff_R12;
  int unaff_R14D;
  longlong unaff_R15;
  float fVar5;
  int32_t uVar6;
  float fVar7;
  float fVar8;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  int iStackX_20;
  float fStackX_24;
  
  do {
    lVar2 = (longlong)param_3 * 0xa60;
    if (((((*(int *)(lVar2 + 0x3610 + unaff_RDI) == (int)unaff_RBP) ||
          (lVar3 = *(longlong *)(lVar2 + 0x3778 + unaff_RDI), lVar3 == 0)) ||
         (*(char *)(lVar3 + 0x8be) == (char)in_R11D)) ||
        ((iVar1 = *(int *)(lVar2 + 0x3600 + unaff_RDI), -1 < iVar1 &&
         (*(int *)((longlong)iVar1 * 0xa60 + 0x3610 + unaff_RDI) == (int)unaff_RBP)))) ||
       (fVar8 = *(float *)(unaff_R15 + 0x1b8) - *(float *)(lVar3 + 0x8e4),
       fVar7 = *(float *)(unaff_R15 + 0x1bc) - *(float *)(lVar3 + 0x8e8),
       fVar5 = *(float *)(unaff_R15 + 0x1c0) - *(float *)(lVar3 + 0x8ec),
       fVar5 = fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5, 9604.0 <= fVar5)) {
      lVar3 = *(longlong *)(lVar2 + 0x3978 + unaff_RDI);
      *(int32_t *)(lVar2 + 0x36e8 + unaff_RDI) = in_R11D;
      fVar5 = (float)(*(longlong *)(unaff_R12 + (longlong)*(int *)(lVar3 + 0x87b790) * 8) -
                     *(longlong *)(lVar3 + 0x87b788)) * unaff_XMM6_Da;
      *(float *)(lVar2 + 0x36ec + unaff_RDI) = fVar5;
      param_4 = fStackX_24;
    }
    else {
      iVar1 = (int)(fVar5 * 0.0009371096);
      fVar7 = in_XMM4_Da;
      if ((iVar1 != 1) && (fVar7 = 0.5, 1 < iVar1)) {
        fVar7 = in_XMM5_Da;
      }
      fVar5 = (float)(*(longlong *)(unaff_R12 + (longlong)*(int *)(unaff_RDI + 0x87b790) * 8) -
                     *(longlong *)(unaff_RDI + 0x87b788)) * unaff_XMM6_Da -
              *(float *)(lVar2 + 0x36ec + unaff_RDI);
      if (fVar7 < fVar5) {
        fVar7 = fVar5;
        if (param_4 < fVar5) {
          iStackX_20 = param_3;
          fStackX_24 = fVar5;
          fVar7 = param_4;
          param_4 = fVar5;
        }
        if (param_5._4_4_ < fVar7) {
          param_5._4_4_ = fVar7;
        }
      }
    }
    param_3 = (int)*(short *)(unaff_RDI + 0x52dda0 + (longlong)param_3 * 2);
  } while (param_3 < unaff_R14D);
  piVar4 = &iStackX_20;
  do {
    if (*piVar4 != -1) {
      lVar3 = (longlong)*piVar4 * 0xa60;
      uVar6 = FUN_1804f72f0(fVar5,*(longlong *)(lVar3 + 0x3778 + unaff_RDI) + 0x8e4,
                            unaff_R15 + 0x1b8);
      lVar2 = *(longlong *)(lVar3 + 0x3978 + unaff_RDI);
      *(int32_t *)(lVar3 + 0x36e8 + unaff_RDI) = uVar6;
      fVar5 = (float)(*(longlong *)(unaff_R12 + (longlong)*(int *)(lVar2 + 0x87b790) * 8) -
                     *(longlong *)(lVar2 + 0x87b788)) * unaff_XMM6_Da;
      *(float *)(lVar3 + 0x36ec + unaff_RDI) = fVar5;
    }
    piVar4 = piVar4 + 2;
    unaff_RBP = unaff_RBP + -1;
  } while (unaff_RBP != 0);
  return;
}






// 函数: void FUN_1804f724f(float param_1)
void FUN_1804f724f(float param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RBP;
  int *piVar3;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R15;
  int32_t uVar4;
  float unaff_XMM6_Da;
  int aiStackX_20 [2];
  
  piVar3 = aiStackX_20;
  do {
    if (*piVar3 != -1) {
      lVar2 = (longlong)*piVar3 * 0xa60;
      uVar4 = FUN_1804f72f0(param_1,*(longlong *)(lVar2 + 0x3778 + unaff_RDI) + 0x8e4,
                            unaff_R15 + 0x1b8);
      lVar1 = *(longlong *)(lVar2 + 0x3978 + unaff_RDI);
      *(int32_t *)(lVar2 + 0x36e8 + unaff_RDI) = uVar4;
      param_1 = (float)(*(longlong *)(unaff_R12 + (longlong)*(int *)(lVar1 + 0x87b790) * 8) -
                       *(longlong *)(lVar1 + 0x87b788)) * unaff_XMM6_Da;
      *(float *)(lVar2 + 0x36ec + unaff_RDI) = param_1;
    }
    piVar3 = piVar3 + 2;
    unaff_RBP = unaff_RBP + -1;
  } while (unaff_RBP != 0);
  return;
}






// 函数: void FUN_1804f7260(float param_1)
void FUN_1804f7260(float param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RBP;
  int *unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R15;
  int32_t uVar3;
  float unaff_XMM6_Da;
  
  do {
    if (*unaff_RSI != -1) {
      lVar2 = (longlong)*unaff_RSI * 0xa60;
      uVar3 = FUN_1804f72f0(param_1,*(longlong *)(lVar2 + 0x3778 + unaff_RDI) + 0x8e4,
                            unaff_R15 + 0x1b8);
      lVar1 = *(longlong *)(lVar2 + 0x3978 + unaff_RDI);
      *(int32_t *)(lVar2 + 0x36e8 + unaff_RDI) = uVar3;
      param_1 = (float)(*(longlong *)(unaff_R12 + (longlong)*(int *)(lVar1 + 0x87b790) * 8) -
                       *(longlong *)(lVar1 + 0x87b788)) * unaff_XMM6_Da;
      *(float *)(lVar2 + 0x36ec + unaff_RDI) = param_1;
    }
    unaff_RSI = unaff_RSI + 2;
    unaff_RBP = unaff_RBP + -1;
  } while (unaff_RBP != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f72f0(longlong param_1,float *param_2,float *param_3)
void FUN_1804f72f0(longlong param_1,float *param_2,float *param_3)

{
  longlong *plVar1;
  float fVar2;
  int8_t auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int8_t auStack_2a8 [32];
  uint64_t uStack_288;
  longlong **pplStack_280;
  int32_t uStack_278;
  float afStack_274 [3];
  float fStack_268;
  float fStack_264;
  float fStack_260;
  int32_t uStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  int32_t uStack_24c;
  int32_t uStack_23c;
  int32_t uStack_22c;
  int32_t uStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  int32_t uStack_20c;
  void *puStack_208;
  int32_t uStack_200;
  int32_t uStack_1fc;
  int8_t uStack_1f8;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  int32_t uStack_1d4;
  int32_t uStack_1d0;
  float *pfStack_1c8;
  float *pfStack_1c0;
  float *pfStack_1b8;
  float *pfStack_1b0;
  float *pfStack_1a8;
  int32_t *puStack_1a0;
  uint64_t uStack_198;
  uint64_t uStack_190;
  float *pfStack_188;
  longlong *aplStack_180 [2];
  code *pcStack_170;
  void *puStack_168;
  uint64_t uStack_160;
  longlong **pplStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  int8_t uStack_12c;
  void **ppuStack_128;
  int8_t auStack_118 [64];
  int iStack_d8;
  ulonglong uStack_c8;
  
  uStack_160 = 0xfffffffffffffffe;
  uStack_c8 = _DAT_180bf00a8 ^ (ulonglong)auStack_2a8;
  iStack_d8 = 0;
  puStack_208 = &unknown_var_6432_ptr;
  uStack_1fc = 0x10013701;
  uStack_200 = 2;
  uStack_1f8 = 0;
  fStack_1d8 = param_3[2] - param_2[2];
  fStack_1dc = param_3[1] - param_2[1];
  fStack_1e0 = *param_3 - *param_2;
  uStack_23c = 0x7f7fffff;
  fStack_1f0 = *param_2;
  fStack_1ec = param_2[1];
  fStack_1e8 = param_2[2];
  fStack_1e4 = param_2[3];
  uStack_1d4 = 0x7f7fffff;
  uStack_1d0 = func_0x00018023a1e0(&fStack_1e0,fStack_1f0,fStack_1e0,fStack_1dc);
  uStack_150 = CONCAT44(fStack_1ec,fStack_1f0);
  uStack_148 = CONCAT44(fStack_1e4,fStack_1e8);
  fStack_140 = fStack_1e0;
  fStack_13c = fStack_1dc;
  fStack_138 = fStack_1d8;
  uStack_134 = uStack_1d4;
  uStack_12c = 0;
  ppuStack_128 = &puStack_208;
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28f8) + 0x318);
  uStack_130 = uStack_1d0;
  (**(code **)(*plVar1 + 0x118))(plVar1,&uStack_150,auStack_118);
  if (0 < iStack_d8) {
    fVar7 = param_3[2] - param_2[2];
    fVar5 = param_3[1] - param_2[1];
    fVar6 = *param_3 - *param_2;
    fStack_210 = fVar7 * 0.5;
    fStack_214 = fVar5 * 0.5;
    fStack_218 = fVar6 * 0.5;
    fStack_264 = -fStack_218;
    uStack_22c = 0x7f7fffff;
    uStack_25c = 0x7f7fffff;
    fVar4 = fVar5 * fVar5 * 0.25 + fStack_264 * fStack_264;
    auVar3 = ZEXT416((uint)fVar4);
    if (fVar4 <= 1.1754944e-38) {
      fVar4 = 1.1754944e-38;
    }
    auVar3 = rsqrtss(auVar3,ZEXT416((uint)fVar4));
    fVar2 = auVar3._0_4_;
    fStack_260 = fVar2 * 0.5 * (3.0 - fVar4 * fVar2 * fVar2);
    fStack_268 = fStack_260 * fStack_214;
    fStack_264 = fStack_264 * fStack_260;
    fStack_260 = fStack_260 * 0.0;
    fStack_250 = fStack_268 * fStack_214 - fStack_264 * fStack_218;
    fStack_254 = fStack_260 * fStack_218 - fStack_268 * fStack_210;
    fStack_258 = fStack_264 * fStack_210 - fStack_260 * fStack_214;
    uStack_21c = 0x7f7fffff;
    uStack_24c = 0x7f7fffff;
    fVar4 = fStack_258 * fStack_258 + fStack_254 * fStack_254 + fStack_250 * fStack_250;
    auVar3 = ZEXT416((uint)fVar4);
    if (fVar4 <= 1.1754944e-38) {
      fVar4 = 1.1754944e-38;
    }
    auVar3 = rsqrtss(auVar3,ZEXT416((uint)fVar4));
    fVar2 = auVar3._0_4_;
    fVar4 = fVar2 * 0.5 * (3.0 - fVar4 * fVar2 * fVar2);
    fStack_258 = fStack_258 * fVar4;
    fStack_254 = fStack_254 * fVar4;
    fStack_250 = fStack_250 * fVar4;
    afStack_274[0] = SQRT((fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7) * 0.25);
    fStack_210 = param_2[2] + fStack_210;
    fStack_214 = param_2[1] + fStack_214;
    fStack_218 = *param_2 + fStack_218;
    uStack_20c = 0x7f7fffff;
    uStack_278 = 0x10;
    pplStack_158 = aplStack_180;
    pfStack_1c8 = afStack_274;
    pfStack_1c0 = &fStack_268;
    pfStack_1b8 = &fStack_258;
    pfStack_1b0 = &fStack_218;
    puStack_1a0 = &uStack_278;
    uStack_190 = &puStack_208;
    pcStack_170 = FUN_180502560;
    puStack_168 = &unknown_var_3376_ptr;
    pfStack_1a8 = param_2;
    uStack_198 = param_1;
    pfStack_188 = param_3;
    aplStack_180[0] = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,system_allocation_flags);
    *aplStack_180[0] = (longlong)pfStack_1c8;
    aplStack_180[0][1] = (longlong)pfStack_1c0;
    aplStack_180[0][2] = (longlong)pfStack_1b8;
    aplStack_180[0][3] = (longlong)pfStack_1b0;
    aplStack_180[0][4] = (longlong)pfStack_1a8;
    aplStack_180[0][5] = (longlong)puStack_1a0;
    *(int32_t *)(aplStack_180[0] + 6) = (int32_t)uStack_198;
    *(int32_t *)((longlong)aplStack_180[0] + 0x34) = uStack_198._4_4_;
    *(int32_t *)(aplStack_180[0] + 7) = (int32_t)uStack_190;
    *(int32_t *)((longlong)aplStack_180[0] + 0x3c) = uStack_190._4_4_;
    aplStack_180[0][8] = (longlong)pfStack_188;
    pplStack_280 = aplStack_180;
    uStack_288 = 0xffffffffffffffff;
    FUN_18015b810(pfStack_188,0,0x10,1);
  }
  iStack_d8 = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_c8 ^ (ulonglong)auStack_2a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




