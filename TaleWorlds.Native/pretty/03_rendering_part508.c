#include "TaleWorlds.Native.Split.h"

// 03_rendering_part508.c - 7 个函数

// 函数: void FUN_18053be00(void)
void FUN_18053be00(void)

{
  uint64_t uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  void *puVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  int8_t uStackX_8;
  int8_t auStack_38 [32];
  
  lVar2 = _DAT_180c95f30;
  uVar9 = 0;
  lVar5 = *(longlong *)(_DAT_180c95f30 + 0x38);
  lVar13 = *(longlong *)(_DAT_180c95f30 + 0x30);
  uVar16 = (uint)(lVar5 - lVar13 >> 3);
  lVar15 = (longlong)(int)uVar16;
  uVar11 = uVar9;
  if (0 < (int)uVar16) {
    do {
      FUN_18053da80(lVar2,auStack_38);
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < lVar15);
    lVar13 = *(longlong *)(lVar2 + 0x30);
    lVar5 = *(longlong *)(lVar2 + 0x38);
    uVar11 = uVar9;
    if (0 < (int)uVar16) {
      do {
        FUN_18053c000(*(uint64_t *)(*(longlong *)(lVar2 + 0x30) + uVar11 * 8));
        uVar11 = uVar11 + 1;
      } while ((longlong)uVar11 < lVar15);
      lVar13 = *(longlong *)(lVar2 + 0x30);
      lVar5 = *(longlong *)(lVar2 + 0x38);
    }
  }
  if (uVar16 != 0) {
    do {
      uVar1 = _DAT_180c82868;
      lVar5 = FUN_18005e890(_DAT_180c82868);
      if (lVar5 != 0) {
        plVar6 = (longlong *)FUN_18005e890(uVar1);
        (**(code **)(*plVar6 + 0x20))(plVar6,0);
      }
      lVar5 = *(longlong *)(lVar2 + 0x38);
      uVar4 = 0;
      lVar13 = *(longlong *)(lVar2 + 0x30);
      uVar11 = uVar9;
      uVar12 = uVar9;
      uVar14 = uVar9;
      if (lVar5 - lVar13 >> 3 != 0) {
        do {
          for (puVar7 = *(ulonglong **)
                         (*(longlong *)(lVar2 + 8) +
                         (*(ulonglong *)(uVar12 + lVar13) % (ulonglong)*(uint *)(lVar2 + 0x10)) * 8)
              ; puVar7 != (ulonglong *)0x0; puVar7 = (ulonglong *)puVar7[7]) {
            if (*(ulonglong *)(uVar12 + lVar13) == *puVar7) goto LAB_18053bf36;
          }
          puVar7 = *(ulonglong **)(*(longlong *)(lVar2 + 8) + *(longlong *)(lVar2 + 0x10) * 8);
LAB_18053bf36:
          lVar5 = *(longlong *)(lVar2 + 0x38);
          lVar13 = *(longlong *)(lVar2 + 0x30);
          uVar4 = (uint)uVar14 + 1;
          if (*(char *)((longlong)puVar7 + 0x34) == '\0') {
            uVar4 = (uint)uVar14;
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          uVar12 = uVar12 + 8;
          uVar14 = (ulonglong)uVar4;
        } while ((ulonglong)(longlong)(int)uVar10 < (ulonglong)(lVar5 - lVar13 >> 3));
      }
    } while (uVar4 != uVar16);
  }
  FUN_18053e6e0(lVar13,lVar5,lVar5 - lVar13 >> 3,uStackX_8);
  if (0 < lVar15) {
    do {
      lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + uVar9 * 8);
      uVar1 = *(uint64_t *)(*(longlong *)(lVar5 + 0x200) + 0x20);
      cVar3 = FUN_18053c200(lVar5);
      if (cVar3 == '\0') {
        puVar8 = &system_buffer_ptr;
        if (*(void **)(lVar5 + 0x18) != (void *)0x0) {
          puVar8 = *(void **)(lVar5 + 0x18);
        }
        FUN_180626f80(&unknown_var_8840_ptr,puVar8);
      }
      else {
        FUN_18053c7b0(lVar5,uVar1);
      }
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < lVar15);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18053be16(void)
void FUN_18053be16(void)

{
  uint64_t uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  void *puVar7;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  int8_t in_stack_00000070;
  
  lVar4 = *(longlong *)(unaff_RBX + 0x38);
  lVar11 = *(longlong *)(unaff_RBX + 0x30);
  uVar14 = (uint)(lVar4 - lVar11 >> 3);
  lVar13 = (longlong)(int)uVar14;
  if (0 < (int)uVar14) {
    uVar10 = unaff_RBP & 0xffffffff;
    do {
      FUN_18053da80();
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < lVar13);
    lVar11 = *(longlong *)(unaff_RBX + 0x30);
    lVar4 = *(longlong *)(unaff_RBX + 0x38);
    uVar10 = unaff_RBP;
    if (0 < (int)uVar14) {
      do {
        FUN_18053c000(*(uint64_t *)(*(longlong *)(unaff_RBX + 0x30) + uVar10 * 8));
        uVar10 = uVar10 + 1;
      } while ((longlong)uVar10 < lVar13);
      lVar11 = *(longlong *)(unaff_RBX + 0x30);
      lVar4 = *(longlong *)(unaff_RBX + 0x38);
    }
  }
  if (uVar14 != 0) {
    do {
      uVar1 = _DAT_180c82868;
      lVar4 = FUN_18005e890(_DAT_180c82868);
      if (lVar4 != 0) {
        plVar5 = (longlong *)FUN_18005e890(uVar1);
        (**(code **)(*plVar5 + 0x20))(plVar5,0);
      }
      lVar4 = *(longlong *)(unaff_RBX + 0x38);
      uVar12 = unaff_RBP & 0xffffffff;
      uVar3 = (uint)unaff_RBP;
      lVar11 = *(longlong *)(unaff_RBX + 0x30);
      uVar9 = unaff_RBP & 0xffffffff;
      uVar10 = unaff_RBP;
      if (lVar4 - lVar11 >> 3 != 0) {
        do {
          for (puVar6 = *(ulonglong **)
                         (*(longlong *)(unaff_RBX + 8) +
                         (*(ulonglong *)(uVar10 + lVar11) % (ulonglong)*(uint *)(unaff_RBX + 0x10))
                         * 8); puVar6 != (ulonglong *)0x0; puVar6 = (ulonglong *)puVar6[7]) {
            if (*(ulonglong *)(uVar10 + lVar11) == *puVar6) goto LAB_18053bf36;
          }
          puVar6 = *(ulonglong **)
                    (*(longlong *)(unaff_RBX + 8) + *(longlong *)(unaff_RBX + 0x10) * 8);
LAB_18053bf36:
          lVar4 = *(longlong *)(unaff_RBX + 0x38);
          lVar11 = *(longlong *)(unaff_RBX + 0x30);
          uVar3 = (uint)uVar12 + 1;
          if (*(char *)((longlong)puVar6 + 0x34) == '\0') {
            uVar3 = (uint)uVar12;
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          uVar12 = (ulonglong)uVar3;
          uVar10 = uVar10 + 8;
        } while ((ulonglong)(longlong)(int)uVar8 < (ulonglong)(lVar4 - lVar11 >> 3));
      }
    } while (uVar3 != uVar14);
  }
  FUN_18053e6e0(lVar11,lVar4,lVar4 - lVar11 >> 3,in_stack_00000070);
  if (0 < lVar13) {
    do {
      lVar4 = *(longlong *)(*(longlong *)(unaff_RBX + 0x30) + unaff_RBP * 8);
      uVar1 = *(uint64_t *)(*(longlong *)(lVar4 + 0x200) + 0x20);
      cVar2 = FUN_18053c200(lVar4);
      if (cVar2 == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(lVar4 + 0x18) != (void *)0x0) {
          puVar7 = *(void **)(lVar4 + 0x18);
        }
        FUN_180626f80(&unknown_var_8840_ptr,puVar7);
      }
      else {
        FUN_18053c7b0(lVar4,uVar1);
      }
      unaff_RBP = unaff_RBP + 1;
    } while ((longlong)unaff_RBP < lVar13);
  }
  return;
}





// 函数: void FUN_18053bf95(void)
void FUN_18053bf95(void)

{
  longlong lVar1;
  uint64_t uVar2;
  char cVar3;
  void *puVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_R14;
  
  do {
    lVar1 = *(longlong *)(*(longlong *)(unaff_RBX + 0x30) + unaff_RBP * 8);
    uVar2 = *(uint64_t *)(*(longlong *)(lVar1 + 0x200) + 0x20);
    cVar3 = FUN_18053c200(lVar1);
    if (cVar3 == '\0') {
      puVar4 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x18) != (void *)0x0) {
        puVar4 = *(void **)(lVar1 + 0x18);
      }
      FUN_180626f80(&unknown_var_8840_ptr,puVar4);
    }
    else {
      FUN_18053c7b0(lVar1,uVar2);
    }
    unaff_RBP = unaff_RBP + 1;
  } while (unaff_RBP < unaff_R14);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18053c000(ulonglong param_1)
void FUN_18053c000(ulonglong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong auStack_98 [2];
  code *pcStack_88;
  code *pcStack_80;
  ulonglong auStack_78 [2];
  code *pcStack_68;
  code *pcStack_60;
  ulonglong auStack_58 [2];
  code *pcStack_48;
  code *pcStack_40;
  ulonglong auStack_38 [2];
  code *pcStack_28;
  code *pcStack_20;
  uint64_t uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x200) + 0x20);
  if ((*(longlong *)(lVar1 + 0x24) != 0) || (*(longlong *)(lVar1 + 0x2c) != 0)) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x200) + 0x88);
    if (*(char *)(lVar1 + 0x1b1) == '\x01') {
      pcStack_68 = (code *)&unknown_var_1584_ptr;
      pcStack_60 = FUN_18053ee50;
      pcStack_88 = (code *)&unknown_var_1824_ptr;
      pcStack_80 = FUN_18053ef20;
      auStack_98[0] = param_1;
      auStack_78[0] = param_1;
      (**(code **)(*plVar2 + 0x70))
                (plVar2,&system_data_d660,*(longlong *)(param_1 + 0x200) + 0xc,0,auStack_98,auStack_78)
      ;
      if (pcStack_88 != (code *)0x0) {
        (*pcStack_88)(auStack_98,0,0);
      }
      if (pcStack_68 != (code *)0x0) {
        (*pcStack_68)(auStack_78,0,0);
        return;
      }
    }
    else {
      pcStack_28 = (code *)&unknown_var_1584_ptr;
      pcStack_20 = FUN_18053ee50;
      pcStack_48 = (code *)&unknown_var_1824_ptr;
      pcStack_40 = FUN_18053ef20;
      auStack_58[0] = param_1;
      auStack_38[0] = param_1;
      (**(code **)(*plVar2 + 0x70))
                (plVar2,&system_data_d590,*(longlong *)(param_1 + 0x200) + 0xc,0,auStack_58,auStack_38)
      ;
      if (pcStack_48 != (code *)0x0) {
        (*pcStack_48)(auStack_58,0,0);
      }
      if (pcStack_28 != (code *)0x0) {
        (*pcStack_28)(auStack_38,0,0);
      }
    }
    return;
  }
  for (puVar3 = *(ulonglong **)
                 (*(longlong *)(_DAT_180c95f30 + 8) +
                 (param_1 % (ulonglong)*(uint *)(_DAT_180c95f30 + 0x10)) * 8);
      puVar3 != (ulonglong *)0x0; puVar3 = (ulonglong *)puVar3[7]) {
    if (param_1 == *puVar3) goto LAB_18053c076;
  }
  puVar3 = *(ulonglong **)
            (*(longlong *)(_DAT_180c95f30 + 8) + *(longlong *)(_DAT_180c95f30 + 0x10) * 8);
LAB_18053c076:
  *(int8_t *)((longlong)puVar3 + 0x34) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack



// 函数: void FUN_18053c200(ulonglong param_1)
void FUN_18053c200(ulonglong param_1)

{
  int32_t uVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  uint64_t uVar7;
  ulonglong *puVar8;
  bool bVar9;
  int8_t auStack_128 [32];
  int32_t uStack_108;
  int32_t uStack_100;
  int8_t uStack_f8;
  longlong *plStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  longlong *plStack_d0;
  longlong alStack_c8 [7];
  longlong *plStack_90;
  void *puStack_88;
  code *pcStack_80;
  ulonglong uStack_78;
  void **ppuStack_50;
  ulonglong uStack_48;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_128;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x200) + 0x20);
  bVar9 = *(char *)(lVar5 + 0x1b0) == -1;
  puStack_88 = &unknown_var_9568_ptr;
  pcStack_80 = FUN_18053bb30;
  ppuStack_50 = &puStack_88;
  uStack_78 = param_1;
  if ((*(longlong *)(lVar5 + 0x24) != 0) || (*(longlong *)(lVar5 + 0x2c) != 0)) {
    for (puVar8 = *(ulonglong **)
                   (*(longlong *)(_DAT_180c95f30 + 8) +
                   (param_1 % (ulonglong)*(uint *)(_DAT_180c95f30 + 0x10)) * 8);
        puVar8 != (ulonglong *)0x0; puVar8 = (ulonglong *)puVar8[7]) {
      if (param_1 == *puVar8) goto LAB_18053c2d6;
    }
    puVar8 = *(ulonglong **)
              (*(longlong *)(_DAT_180c95f30 + 8) + *(longlong *)(_DAT_180c95f30 + 0x10) * 8);
LAB_18053c2d6:
    if (puVar8[5] != 0) {
      cVar4 = *(char *)(lVar5 + 0x1b1);
      if (cVar4 == '\x02') {
        uVar1 = *(int32_t *)(lVar5 + 8);
        fVar2 = *(float *)(lVar5 + 0x10);
        fVar3 = *(float *)(lVar5 + 0xc);
        plStack_d0 = alStack_c8;
        plStack_90 = (longlong *)0x0;
        if (ppuStack_50 != (void **)0x0) {
          plStack_90 = (longlong *)(*(code *)&unknown_var_368_ptr)(ppuStack_50,alStack_c8);
        }
        plStack_e8 = alStack_c8;
        *(int *)(param_1 + 0x18c) = (int)fVar3;
        *(int *)(param_1 + 400) = (int)fVar2;
        *(int32_t *)(param_1 + 0x188) = uVar1;
        *(int8_t *)(param_1 + 0x194) = 2;
        *(uint64_t *)(param_1 + 0x88) = 0;
        FUN_180405430(param_1 + 0x98,alStack_c8);
        if (plStack_90 != (longlong *)0x0) {
          (**(code **)(*plStack_90 + 0x20))
                    (plStack_90,
                     CONCAT71((int7)((ulonglong)alStack_c8 >> 8),plStack_90 != alStack_c8));
        }
      }
      else {
        if (bVar9) {
          plStack_e8 = *(longlong **)(lVar5 + 0x24);
          uStack_e0 = *(uint64_t *)(lVar5 + 0x2c);
          uStack_108 = CONCAT31(uStack_108._1_3_,cVar4 == '\x01');
          lVar6 = FUN_18053d300(&plStack_e8,*(int32_t *)(lVar5 + 0xc),
                                *(int32_t *)(lVar5 + 0x10),*(int32_t *)(lVar5 + 8));
          if (lVar6 != 0) {
            uStack_108 = CONCAT31(uStack_108._1_3_,cVar4);
            FUN_18053d000(param_1,lVar6,&puStack_88,lVar5);
            goto LAB_18053c45b;
          }
        }
        uVar7 = FUN_18053cf40(puVar8 + 1);
        uStack_108 = CONCAT31(uStack_108._1_3_,cVar4);
        FUN_18053d000(param_1,uVar7,&puStack_88,lVar5);
        if (bVar9) {
          plStack_e8 = *(longlong **)(lVar5 + 0x24);
          uStack_e0 = *(uint64_t *)(lVar5 + 0x2c);
          uStack_100 = *(int32_t *)(lVar5 + 8);
          uStack_108 = *(int32_t *)(lVar5 + 0x10);
          uStack_f8 = cVar4 == '\x01';
          FUN_18053d120(uStack_108,uVar7,&plStack_e8,*(int32_t *)(lVar5 + 0xc));
        }
      }
    }
  }
LAB_18053c45b:
  if (ppuStack_50 != (void **)0x0) {
    (**(code **)(*ppuStack_50 + 0x20))(ppuStack_50,ppuStack_50 != &puStack_88);
    ppuStack_50 = (void **)0x0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_128);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack



// 函数: void FUN_18053c4b0(longlong param_1)
void FUN_18053c4b0(longlong param_1)

{
  int32_t uVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  longlong lVar8;
  void *puVar9;
  int8_t auStack_128 [32];
  longlong **pplStack_108;
  int8_t uStack_f8;
  int8_t auStack_f7 [7];
  longlong lStack_f0;
  longlong *plStack_e8;
  int32_t uStack_e0;
  int32_t uStack_dc;
  code *pcStack_d8;
  code *pcStack_d0;
  longlong lStack_c8;
  void **ppuStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  int8_t *puStack_a8;
  longlong *plStack_90;
  uint64_t uStack_88;
  longlong *plStack_80;
  void *puStack_78;
  code *pcStack_70;
  longlong lStack_68;
  void **ppuStack_40;
  ulonglong uStack_38;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_128;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x200) + 0x20);
  auStack_f7[0] = *(char *)(lVar5 + 0x1b1) == '\x01';
  uStack_f8 = *(char *)(lVar5 + 0x1b0) == -1;
  puStack_78 = &unknown_var_9568_ptr;
  pcStack_70 = FUN_18053bb30;
  ppuStack_40 = &puStack_78;
  ppuStack_c0 = &puStack_78;
  uStack_b8 = &lStack_f0;
  uStack_b0 = auStack_f7;
  puStack_a8 = &uStack_f8;
  lStack_f0 = lVar5;
  lStack_c8 = param_1;
  lStack_68 = param_1;
  if ((*(longlong *)(lVar5 + 0x24) != 0) || (*(longlong *)(lVar5 + 0x2c) != 0)) {
    cVar4 = *(char *)(lVar5 + 0x1b1);
    if (cVar4 == '\x02') {
      uVar1 = *(int32_t *)(lVar5 + 8);
      fVar2 = *(float *)(lVar5 + 0x10);
      fVar3 = *(float *)(lVar5 + 0xc);
      plStack_80 = &lStack_c8;
      plStack_90 = (longlong *)0x0;
      if (ppuStack_40 != (void **)0x0) {
        plStack_90 = (longlong *)(*(code *)&unknown_var_368_ptr)(ppuStack_40,&lStack_c8);
      }
      plStack_e8 = &lStack_c8;
      *(int *)(param_1 + 0x18c) = (int)fVar3;
      *(int *)(param_1 + 400) = (int)fVar2;
      *(int32_t *)(param_1 + 0x188) = uVar1;
      *(int8_t *)(param_1 + 0x194) = 2;
      *(uint64_t *)(param_1 + 0x88) = 0;
      FUN_180405430(param_1 + 0x98,&lStack_c8);
      if (plStack_90 != (longlong *)0x0) {
        (**(code **)(*plStack_90 + 0x20))
                  (plStack_90,CONCAT71((int7)((ulonglong)&lStack_c8 >> 8),plStack_90 != &lStack_c8))
        ;
      }
    }
    else {
      if ((bool)uStack_f8) {
        plStack_e8 = *(longlong **)(lVar5 + 0x24);
        uStack_e0 = *(int32_t *)(lVar5 + 0x2c);
        uStack_dc = *(int32_t *)(lVar5 + 0x30);
        pplStack_108 = (longlong **)CONCAT71(pplStack_108._1_7_,cVar4 == '\x01');
        lVar8 = FUN_18053d300(&plStack_e8,*(int32_t *)(lVar5 + 0xc),*(int32_t *)(lVar5 + 0x10)
                              ,*(int32_t *)(lVar5 + 8));
        if (lVar8 != 0) {
          pplStack_108 = (longlong **)CONCAT71(pplStack_108._1_7_,cVar4);
          FUN_18053d000(param_1,lVar8,&puStack_78,lVar5);
          goto LAB_18053c759;
        }
      }
      puVar9 = &system_data_d660;
      if (cVar4 != '\x01') {
        puVar9 = &system_data_d590;
      }
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x200) + 0x88);
      pcVar7 = *(code **)(*plVar6 + 0x60);
      pcStack_d8 = FUN_18053ed70;
      pcStack_d0 = FUN_18053ecd0;
      plStack_e8 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,system_allocation_flags);
      *plStack_e8 = lStack_c8;
      plStack_e8[1] = (longlong)ppuStack_c0;
      *(int32_t *)(plStack_e8 + 2) = (int32_t)uStack_b8;
      *(int32_t *)((longlong)plStack_e8 + 0x14) = uStack_b8._4_4_;
      *(int32_t *)(plStack_e8 + 3) = (int32_t)uStack_b0;
      *(int32_t *)((longlong)plStack_e8 + 0x1c) = uStack_b0._4_4_;
      plStack_e8[4] = (longlong)puStack_a8;
      pplStack_108 = &plStack_e8;
      (*pcVar7)(plVar6,puVar9,*(longlong *)(param_1 + 0x200) + 0xc,0);
      if (pcStack_d8 != (code *)0x0) {
        (*pcStack_d8)(&plStack_e8,0,0);
      }
    }
  }
LAB_18053c759:
  if (ppuStack_40 != (void **)0x0) {
    (**(code **)(*ppuStack_40 + 0x20))
              (ppuStack_40,CONCAT71((int7)((ulonglong)&puStack_78 >> 8),ppuStack_40 != &puStack_78))
    ;
    ppuStack_40 = (void **)0x0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_128);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18053c7b0(uint64_t *param_1,longlong param_2)
void FUN_18053c7b0(uint64_t *param_1,longlong param_2)

{
  byte *pbVar1;
  int32_t *puVar2;
  uint uVar3;
  int iVar4;
  int32_t uVar5;
  int32_t uVar6;
  int16_t uVar7;
  short sVar8;
  int16_t uVar9;
  int iVar10;
  int32_t uVar11;
  byte *pbVar12;
  uint64_t uVar13;
  byte bVar14;
  ulonglong uVar15;
  longlong lVar16;
  void *puVar17;
  longlong *plVar18;
  longlong lVar19;
  void *puVar20;
  longlong lVar21;
  float fVar22;
  int8_t auStack_198 [32];
  uint64_t uStack_178;
  void *puStack_168;
  int8_t *puStack_160;
  int iStack_158;
  int8_t auStack_150 [72];
  void *puStack_108;
  int8_t *puStack_100;
  int iStack_f8;
  int8_t auStack_f0 [72];
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  *(int32_t *)(param_1 + 0x3b) = *(int32_t *)(param_2 + 0x14);
  *(int32_t *)((longlong)param_1 + 0x1dc) = *(int32_t *)(param_2 + 0x18);
  *(int32_t *)(param_1 + 0x3c) = *(int32_t *)(param_2 + 0x1c);
  uVar15 = *(ulonglong *)(param_2 + 0x38);
  param_1[0x3a] = uVar15;
  *(int32_t *)((longlong)param_1 + 0x1e4) = *(int32_t *)(param_2 + 0x140);
  *(int32_t *)(param_1 + 0x3d) = *(int32_t *)(param_2 + 0x144);
  uVar15 = *(byte *)(param_2 + 0x20) | uVar15;
  param_1[0x3a] = uVar15;
  param_1[0x3a] = (longlong)*(int *)(param_2 + 0x40) << 0x3c | uVar15;
  fVar22 = *(float *)(param_2 + 0x44);
  if (fVar22 < 0.0) {
    *(int32_t *)((longlong)param_1 + 0x6c) = 0xbf800000;
  }
  else {
    if (0.99 <= fVar22) {
      fVar22 = 0.99;
    }
    *(float *)((longlong)param_1 + 0x6c) = fVar22;
  }
  fVar22 = *(float *)(param_2 + 0x48);
  if (fVar22 < 0.0) {
    *(int32_t *)(param_1 + 0xe) = 0xbf800000;
  }
  else {
    if (0.99 <= fVar22) {
      fVar22 = 0.99;
    }
    *(float *)(param_1 + 0xe) = fVar22;
  }
  fVar22 = *(float *)(param_2 + 0x4c);
  if (fVar22 < 0.0) {
    *(int32_t *)((longlong)param_1 + 0x74) = 0xbf800000;
  }
  else {
    if (0.99 <= fVar22) {
      fVar22 = 0.99;
    }
    *(float *)((longlong)param_1 + 0x74) = fVar22;
  }
  fVar22 = *(float *)(param_2 + 0x50);
  if (fVar22 < 0.0) {
    *(int32_t *)(param_1 + 0xf) = 0xbf800000;
  }
  else {
    if (0.99 <= fVar22) {
      fVar22 = 0.99;
    }
    *(float *)(param_1 + 0xf) = fVar22;
  }
  *(int16_t *)((longlong)param_1 + 0x7c) = 0xffff;
  if (0 < *(int *)(param_2 + 0x68)) {
    iVar10 = (**(code **)(*_DAT_180c86878 + 0xd0))(_DAT_180c86878,param_2 + 0x58);
    if (iVar10 < 0) {
      puVar20 = &system_buffer_ptr;
      if ((void *)param_1[3] != (void *)0x0) {
        puVar20 = (void *)param_1[3];
      }
      puVar17 = &system_buffer_ptr;
      if (*(void **)(param_2 + 0x60) != (void *)0x0) {
        puVar17 = *(void **)(param_2 + 0x60);
      }
      FUN_180626f80(&unknown_var_8408_ptr,puVar17,puVar20);
    }
    *(short *)((longlong)param_1 + 0x7c) = (short)iVar10;
  }
  if (*(int *)(param_2 + 0x88) < 1) {
    *(int16_t *)((longlong)param_1 + 500) = 0xffff;
  }
  else {
    uVar7 = FUN_180571e20(&system_data_60c0,param_2 + 0x78);
    *(int16_t *)((longlong)param_1 + 500) = uVar7;
  }
  uVar3 = *(uint *)(param_2 + 0xa8);
  uVar15 = (ulonglong)uVar3;
  if (*(longlong *)(param_2 + 0xa0) != 0) {
    FUN_1806277c0(param_1 + 0x36,uVar15);
  }
  if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(param_1[0x37],*(uint64_t *)(param_2 + 0xa0),uVar15);
  }
  *(int32_t *)(param_1 + 0x38) = 0;
  lVar21 = param_1[0x37];
  if (lVar21 != 0) {
    *(int8_t *)(uVar15 + lVar21) = 0;
  }
  *(int32_t *)((longlong)param_1 + 0x1cc) = *(int32_t *)(param_2 + 0xb4);
  if (*(int *)(param_2 + 0xa8) < 1) {
    *(int32_t *)(param_1 + 0x3f) = 0xffffffff;
  }
  else {
    uVar11 = FUN_1805344c0(lVar21,param_2 + 0x98);
    *(int32_t *)(param_1 + 0x3f) = uVar11;
  }
  bVar14 = ((char)*(int32_t *)(param_2 + 0x138) + '\x01') * '\x10';
  *(byte *)(param_1 + 0x35) = bVar14 | *(byte *)(param_1 + 0x35) & 0xf;
  *(byte *)(param_1 + 0x35) = bVar14 | (char)*(int32_t *)(param_2 + 0x13c) + 1U;
  lVar21 = 0;
  if (*(int *)(param_2 + 0x180) < 1) {
    if (0 < *(int *)(param_2 + 0x128)) {
      puStack_a8 = &unknown_var_3480_ptr;
      puStack_a0 = auStack_90;
      auStack_90[0] = 0;
      uStack_98 = *(int32_t *)(param_2 + 0x128);
      puVar20 = &system_buffer_ptr;
      if (*(void **)(param_2 + 0x120) != (void *)0x0) {
        puVar20 = *(void **)(param_2 + 0x120);
      }
      strcpy_s(auStack_90,0x40,puVar20);
      sVar8 = FUN_1804e5820(&system_data_5ed0,&puStack_a8);
      puStack_a8 = &unknown_var_720_ptr;
LAB_18053cd7a:
      *(short *)((longlong)param_1 + 0x7e) = sVar8;
      goto LAB_18053cd7e;
    }
    *(int16_t *)((longlong)param_1 + 0x7e) = 0xffff;
  }
  else {
    puStack_168 = &unknown_var_3480_ptr;
    puStack_160 = auStack_150;
    auStack_150[0] = 0;
    iStack_158 = *(int *)(param_2 + 0x180);
    puVar20 = &system_buffer_ptr;
    if (*(void **)(param_2 + 0x178) != (void *)0x0) {
      puVar20 = *(void **)(param_2 + 0x178);
    }
    strcpy_s(auStack_150,0x40,puVar20);
    lVar16 = lVar21;
    if (((0 < iStack_158) && (iVar10 = FUN_18053a2e0(&system_data_5f30,&puStack_168), iVar10 != -1)) &&
       (iVar10 = *(int *)(_DAT_180c95f68 + (longlong)iVar10 * 4), iVar10 != -1)) {
      lVar16 = *(longlong *)(_DAT_180c95f88 + (longlong)iVar10 * 8);
    }
    lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x200) + 0x20);
    puStack_168 = &unknown_var_720_ptr;
    puStack_108 = &unknown_var_3480_ptr;
    puStack_100 = auStack_f0;
    auStack_f0[0] = 0;
    iStack_f8 = *(int *)(param_2 + 0x1a0);
    puVar20 = &system_buffer_ptr;
    if (*(void **)(param_2 + 0x198) != (void *)0x0) {
      puVar20 = *(void **)(param_2 + 0x198);
    }
    strcpy_s(auStack_f0,0x40,puVar20);
    if (((0 < iStack_f8) && (iVar10 = FUN_18053a2e0(&system_data_5f30,&puStack_108), iVar10 != -1)) &&
       (iVar10 = *(int *)(_DAT_180c95f68 + (longlong)iVar10 * 4), iVar10 != -1)) {
      lVar21 = *(longlong *)(_DAT_180c95f88 + (longlong)iVar10 * 8);
    }
    lVar21 = *(longlong *)(*(longlong *)(lVar21 + 0x200) + 0x20);
    puStack_108 = &unknown_var_720_ptr;
    iVar10 = *(int *)(lVar21 + 0x128);
    iVar4 = *(int *)(lVar16 + 0x128);
    if (iVar4 == iVar10) {
      if (iVar4 != 0) {
        pbVar12 = *(byte **)(lVar16 + 0x120);
        lVar19 = *(longlong *)(lVar21 + 0x120) - (longlong)pbVar12;
        do {
          pbVar1 = pbVar12 + lVar19;
          iVar10 = (uint)*pbVar12 - (uint)*pbVar1;
          if (iVar10 != 0) break;
          pbVar12 = pbVar12 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18053cb9d:
      if (iVar10 == 0) {
        puStack_108 = &unknown_var_3480_ptr;
        puStack_100 = auStack_f0;
        auStack_f0[0] = 0;
        iStack_f8 = *(int *)(lVar16 + 0x128);
        puVar20 = &system_buffer_ptr;
        if (*(void **)(lVar16 + 0x120) != (void *)0x0) {
          puVar20 = *(void **)(lVar16 + 0x120);
        }
        strcpy_s(auStack_f0,0x40,puVar20);
        sVar8 = FUN_1804e5820(&system_data_5ed0,&puStack_108);
        puStack_108 = &unknown_var_720_ptr;
        goto LAB_18053cd7a;
      }
    }
    else if (iVar4 == 0) goto LAB_18053cb9d;
    puStack_a8 = &unknown_var_3480_ptr;
    puStack_a0 = auStack_90;
    auStack_90[0] = 0;
    uStack_98 = *(int32_t *)(lVar16 + 0x128);
    puVar20 = &system_buffer_ptr;
    if (*(void **)(lVar16 + 0x120) != (void *)0x0) {
      puVar20 = *(void **)(lVar16 + 0x120);
    }
    strcpy_s(auStack_90,0x40,puVar20);
    uVar7 = FUN_1804e5820(&system_data_5ed0,&puStack_a8);
    puStack_a8 = &unknown_var_720_ptr;
    puStack_168 = &unknown_var_3480_ptr;
    puStack_160 = auStack_150;
    auStack_150[0] = 0;
    iStack_158 = *(int *)(lVar21 + 0x128);
    puVar20 = &system_buffer_ptr;
    if (*(void **)(lVar21 + 0x120) != (void *)0x0) {
      puVar20 = *(void **)(lVar21 + 0x120);
    }
    strcpy_s(auStack_150,0x40,puVar20);
    uVar9 = FUN_1804e5820(&system_data_5ed0,&puStack_168);
    puStack_168 = &unknown_var_720_ptr;
    sVar8 = FUN_1804e58d0(&system_data_5ed0,uVar7,uVar9,
                          *(int32_t *)(&unknown_var_5192_ptr + (longlong)*(char *)(param_2 + 0x1b0) * 4)
                         );
    *(short *)((longlong)param_1 + 0x7e) = sVar8;
LAB_18053cd7e:
    if (sVar8 != -1) {
      puVar2 = (int32_t *)((longlong)sVar8 * 0x68 + _DAT_180c95ed0);
      uVar11 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      *(int32_t *)param_1 = *puVar2;
      *(int32_t *)((longlong)param_1 + 4) = uVar11;
      *(int32_t *)(param_1 + 1) = uVar5;
      *(int32_t *)((longlong)param_1 + 0xc) = uVar6;
      goto LAB_18053cdb2;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_18053cdb2:
  if (*(int *)(param_2 + 200) < 1) {
    *(int32_t *)((longlong)param_1 + 0x1ec) = 0xffffffff;
  }
  else {
    uVar11 = FUN_18055b2f0(&system_data_6150,param_2 + 0xb8);
    *(int32_t *)((longlong)param_1 + 0x1ec) = uVar11;
  }
  if (*(int *)(param_2 + 0x108) < 1) {
    *(int32_t *)(param_1 + 0x3e) = 0xffffffff;
  }
  else {
    uVar11 = FUN_18055b2f0(&system_data_6150,param_2 + 0xf8);
    *(int32_t *)(param_1 + 0x3e) = uVar11;
  }
  plVar18 = param_1 + 0x33;
  lVar21 = 2;
  do {
    if (*plVar18 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    plVar18 = plVar18 + 1;
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  iVar10 = (int)(*(longlong *)(param_2 + 0x158) - *(longlong *)(param_2 + 0x150) >> 3);
  lVar21 = 0;
  if (0 < iVar10) {
    do {
      uVar13 = (**(code **)**(uint64_t **)(*(longlong *)(param_2 + 0x150) + lVar21 * 8))();
      plVar18 = param_1 + 0x33;
      lVar16 = 0;
      do {
        if (*plVar18 == 0) {
          param_1[lVar16 + 0x33] = uVar13;
          goto LAB_18053ce9e;
        }
        lVar16 = lVar16 + 1;
        plVar18 = plVar18 + 1;
      } while (lVar16 < 2);
      FUN_180626f80(&unknown_var_6592_ptr,2);
LAB_18053ce9e:
      lVar21 = lVar21 + 1;
    } while (lVar21 < iVar10);
  }
  FUN_18053d480(param_1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_198);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



