#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part212.c - 2 个函数

// 函数: void FUN_18018ee00(void)
void FUN_18018ee00(void)

{
  uint64_t *puVar1;
  uint uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  void *puVar11;
  void *puVar12;
  longlong lVar13;
  int8_t auStack_208 [32];
  longlong lStack_1e8;
  longlong lStack_1e0;
  uint64_t *puStack_1d8;
  longlong *plStack_1d0;
  longlong lStack_1c8;
  uint64_t uStack_1c0;
  void *puStack_1b8;
  int8_t *puStack_1b0;
  int32_t uStack_1a8;
  int8_t auStack_1a0 [72];
  void *puStack_158;
  int8_t *puStack_150;
  int32_t uStack_148;
  int8_t auStack_140 [72];
  void *puStack_f8;
  int8_t *puStack_f0;
  int32_t uStack_e8;
  int8_t auStack_e0 [72];
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_1c0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_208;
  lStack_1e0 = _DAT_180c8a9f8;
  lStack_1c8 = _DAT_180c86930;
  plStack_1d0 = *(longlong **)(_DAT_180c86930 + 0xa0);
  lVar10 = _DAT_180c8a9f8;
  if (plStack_1d0 != *(longlong **)(_DAT_180c86930 + 0xa8)) {
    do {
      puVar3 = (uint64_t *)0x0;
      lVar13 = *plStack_1d0;
      uVar2 = *(uint *)(lVar13 + 0x328);
      lStack_1e8 = lVar13;
      if ((uVar2 >> 0x1a & 1) != 0) {
        puStack_1b8 = &UNK_1809fcc58;
        puStack_1b0 = auStack_1a0;
        auStack_1a0[0] = 0;
        uStack_1a8 = *(int32_t *)(lVar13 + 0x20);
        puVar11 = &DAT_18098bc73;
        if (*(void **)(lVar13 + 0x18) != (void *)0x0) {
          puVar11 = *(void **)(lVar13 + 0x18);
        }
        strcpy_s(auStack_1a0,0x40,puVar11);
        uVar6 = *(ulonglong *)(lVar10 + 0x3c8);
        if (uVar6 < *(ulonglong *)(lVar10 + 0x3d0)) {
          *(ulonglong *)(lVar10 + 0x3c8) = uVar6 + 0x58;
          FUN_1800b8300(uVar6,&puStack_1b8);
        }
        else {
          uVar8 = *(ulonglong *)(lVar10 + 0x3c0);
          lVar9 = (longlong)(uVar6 - uVar8) / 0x58;
          if (lVar9 == 0) {
            lVar9 = 1;
LAB_18018ef5b:
            puVar3 = (uint64_t *)
                     FUN_18062b420(_DAT_180c8ed18,lVar9 * 0x58,*(int8_t *)(lVar10 + 0x3d8));
            uVar6 = *(ulonglong *)(lVar10 + 0x3c8);
            uVar8 = *(ulonglong *)(lVar10 + 0x3c0);
          }
          else {
            lVar9 = lVar9 * 2;
            if (lVar9 != 0) goto LAB_18018ef5b;
          }
          puVar4 = puVar3;
          if (uVar8 != uVar6) {
            lVar7 = uVar8 - (longlong)puVar3;
            do {
              *puVar4 = &UNK_18098bcb0;
              puVar4[1] = 0;
              *(int32_t *)(puVar4 + 2) = 0;
              *puVar4 = &UNK_1809fcc58;
              puVar4[1] = puVar4 + 3;
              *(int32_t *)(puVar4 + 2) = 0;
              *(int8_t *)(puVar4 + 3) = 0;
              *(int32_t *)(puVar4 + 2) = *(int32_t *)(lVar7 + 0x10 + (longlong)puVar4);
              puVar11 = *(void **)(lVar7 + 8 + (longlong)puVar4);
              puVar12 = &DAT_18098bc73;
              if (puVar11 != (void *)0x0) {
                puVar12 = puVar11;
              }
              puStack_1d8 = puVar4;
              strcpy_s(puVar4[1],0x40,puVar12);
              puVar4 = puVar4 + 0xb;
              lVar10 = lStack_1e0;
              lVar13 = lStack_1e8;
            } while (lVar7 + (longlong)puVar4 != uVar6);
          }
          FUN_1800b8300(puVar4,&puStack_1b8);
          puVar1 = *(uint64_t **)(lVar10 + 0x3c8);
          puVar5 = *(uint64_t **)(lVar10 + 0x3c0);
          if (puVar5 != puVar1) {
            do {
              (**(code **)*puVar5)(puVar5,0);
              puVar5 = puVar5 + 0xb;
            } while (puVar5 != puVar1);
            puVar5 = *(uint64_t **)(lVar10 + 0x3c0);
          }
          if (puVar5 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar5);
          }
          *(uint64_t **)(lVar10 + 0x3c0) = puVar3;
          *(uint64_t **)(lVar10 + 0x3c8) = puVar4 + 0xb;
          *(uint64_t **)(lVar10 + 0x3d0) = puVar3 + lVar9 * 0xb;
        }
        puStack_1b8 = &UNK_18098bcb0;
        uVar2 = *(uint *)(lVar13 + 0x328);
      }
      puVar3 = (uint64_t *)0x0;
      if ((uVar2 >> 0x1b & 1) != 0) {
        puStack_158 = &UNK_1809fcc58;
        puStack_150 = auStack_140;
        auStack_140[0] = 0;
        uStack_148 = *(int32_t *)(lVar13 + 0x20);
        puVar11 = &DAT_18098bc73;
        if (*(void **)(lVar13 + 0x18) != (void *)0x0) {
          puVar11 = *(void **)(lVar13 + 0x18);
        }
        strcpy_s(auStack_140,0x40,puVar11);
        uVar6 = *(ulonglong *)(lVar10 + 1000);
        if (uVar6 < *(ulonglong *)(lVar10 + 0x3f0)) {
          *(ulonglong *)(lVar10 + 1000) = uVar6 + 0x58;
          FUN_1800b8300(uVar6,&puStack_158);
        }
        else {
          uVar8 = *(ulonglong *)(lVar10 + 0x3e0);
          lVar9 = (longlong)(uVar6 - uVar8) / 0x58;
          if (lVar9 == 0) {
            lVar9 = 1;
LAB_18018f13f:
            puVar3 = (uint64_t *)
                     FUN_18062b420(_DAT_180c8ed18,lVar9 * 0x58,*(int8_t *)(lVar10 + 0x3f8));
            uVar6 = *(ulonglong *)(lVar10 + 1000);
            uVar8 = *(ulonglong *)(lVar10 + 0x3e0);
          }
          else {
            lVar9 = lVar9 * 2;
            if (lVar9 != 0) goto LAB_18018f13f;
          }
          puVar4 = puVar3;
          if (uVar8 != uVar6) {
            lVar7 = uVar8 - (longlong)puVar3;
            do {
              *puVar4 = &UNK_18098bcb0;
              puVar4[1] = 0;
              *(int32_t *)(puVar4 + 2) = 0;
              *puVar4 = &UNK_1809fcc58;
              puVar4[1] = puVar4 + 3;
              *(int32_t *)(puVar4 + 2) = 0;
              *(int8_t *)(puVar4 + 3) = 0;
              *(int32_t *)(puVar4 + 2) = *(int32_t *)(lVar7 + 0x10 + (longlong)puVar4);
              puVar11 = *(void **)(lVar7 + 8 + (longlong)puVar4);
              puVar12 = &DAT_18098bc73;
              if (puVar11 != (void *)0x0) {
                puVar12 = puVar11;
              }
              puStack_1d8 = puVar4;
              strcpy_s(puVar4[1],0x40,puVar12);
              puVar4 = puVar4 + 0xb;
              lVar10 = lStack_1e0;
              lVar13 = lStack_1e8;
            } while (lVar7 + (longlong)puVar4 != uVar6);
          }
          FUN_1800b8300(puVar4,&puStack_158);
          puVar1 = *(uint64_t **)(lVar10 + 1000);
          puVar5 = *(uint64_t **)(lVar10 + 0x3e0);
          if (puVar5 != puVar1) {
            do {
              (**(code **)*puVar5)(puVar5,0);
              puVar5 = puVar5 + 0xb;
            } while (puVar5 != puVar1);
            puVar5 = *(uint64_t **)(lVar10 + 0x3e0);
          }
          if (puVar5 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar5);
          }
          *(uint64_t **)(lVar10 + 0x3e0) = puVar3;
          *(uint64_t **)(lVar10 + 1000) = puVar4 + 0xb;
          *(uint64_t **)(lVar10 + 0x3f0) = puVar3 + lVar9 * 0xb;
        }
        puStack_158 = &UNK_18098bcb0;
        uVar2 = *(uint *)(lVar13 + 0x328);
      }
      puVar3 = (uint64_t *)0x0;
      if ((uVar2 >> 0x1c & 1) != 0) {
        puStack_f8 = &UNK_1809fcc58;
        puStack_f0 = auStack_e0;
        auStack_e0[0] = 0;
        uStack_e8 = *(int32_t *)(lVar13 + 0x20);
        puVar11 = &DAT_18098bc73;
        if (*(void **)(lVar13 + 0x18) != (void *)0x0) {
          puVar11 = *(void **)(lVar13 + 0x18);
        }
        strcpy_s(auStack_e0,0x40,puVar11);
        uVar6 = *(ulonglong *)(lVar10 + 0x428);
        if (uVar6 < *(ulonglong *)(lVar10 + 0x430)) {
          *(ulonglong *)(lVar10 + 0x428) = uVar6 + 0x58;
          FUN_1800b8300(uVar6,&puStack_f8);
        }
        else {
          uVar8 = *(ulonglong *)(lVar10 + 0x420);
          lVar9 = (longlong)(uVar6 - uVar8) / 0x58;
          if (lVar9 == 0) {
            lVar9 = 1;
LAB_18018f31a:
            puVar3 = (uint64_t *)
                     FUN_18062b420(_DAT_180c8ed18,lVar9 * 0x58,*(int8_t *)(lVar10 + 0x438));
            uVar6 = *(ulonglong *)(lVar10 + 0x428);
            uVar8 = *(ulonglong *)(lVar10 + 0x420);
          }
          else {
            lVar9 = lVar9 * 2;
            if (lVar9 != 0) goto LAB_18018f31a;
          }
          puVar4 = puVar3;
          if (uVar8 != uVar6) {
            lVar7 = uVar8 - (longlong)puVar3;
            do {
              *puVar4 = &UNK_18098bcb0;
              puVar4[1] = 0;
              *(int32_t *)(puVar4 + 2) = 0;
              *puVar4 = &UNK_1809fcc58;
              puVar4[1] = puVar4 + 3;
              *(int32_t *)(puVar4 + 2) = 0;
              *(int8_t *)(puVar4 + 3) = 0;
              *(int32_t *)(puVar4 + 2) = *(int32_t *)(lVar7 + 0x10 + (longlong)puVar4);
              puVar11 = *(void **)(lVar7 + 8 + (longlong)puVar4);
              puVar12 = &DAT_18098bc73;
              if (puVar11 != (void *)0x0) {
                puVar12 = puVar11;
              }
              puStack_1d8 = puVar4;
              strcpy_s(puVar4[1],0x40,puVar12);
              puVar4 = puVar4 + 0xb;
              lVar10 = lStack_1e0;
              lVar13 = lStack_1e8;
            } while (lVar7 + (longlong)puVar4 != uVar6);
          }
          FUN_1800b8300(puVar4,&puStack_f8);
          puVar1 = *(uint64_t **)(lVar10 + 0x428);
          puVar5 = *(uint64_t **)(lVar10 + 0x420);
          if (puVar5 != puVar1) {
            do {
              (**(code **)*puVar5)(puVar5,0);
              puVar5 = puVar5 + 0xb;
            } while (puVar5 != puVar1);
            puVar5 = *(uint64_t **)(lVar10 + 0x420);
          }
          if (puVar5 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar5);
          }
          *(uint64_t **)(lVar10 + 0x420) = puVar3;
          *(uint64_t **)(lVar10 + 0x428) = puVar4 + 0xb;
          *(uint64_t **)(lVar10 + 0x430) = puVar3 + lVar9 * 0xb;
        }
        puStack_f8 = &UNK_18098bcb0;
        uVar2 = *(uint *)(lVar13 + 0x328);
      }
      puVar3 = (uint64_t *)0x0;
      if ((uVar2 >> 0x14 & 1) != 0) {
        puStack_98 = &UNK_1809fcc58;
        puStack_90 = auStack_80;
        auStack_80[0] = 0;
        uStack_88 = *(int32_t *)(lVar13 + 0x20);
        puVar11 = &DAT_18098bc73;
        if (*(void **)(lVar13 + 0x18) != (void *)0x0) {
          puVar11 = *(void **)(lVar13 + 0x18);
        }
        strcpy_s(auStack_80,0x40,puVar11);
        uVar6 = *(ulonglong *)(lVar10 + 0x448);
        if (uVar6 < *(ulonglong *)(lVar10 + 0x450)) {
          *(ulonglong *)(lVar10 + 0x448) = uVar6 + 0x58;
          FUN_1800b8300(uVar6,&puStack_98);
        }
        else {
          uVar8 = *(ulonglong *)(lVar10 + 0x440);
          lVar13 = (longlong)(uVar6 - uVar8) / 0x58;
          if (lVar13 == 0) {
            lStack_1e8 = 1;
LAB_18018f515:
            lVar13 = lStack_1e8;
            puVar3 = (uint64_t *)
                     FUN_18062b420(_DAT_180c8ed18,lStack_1e8 * 0x58,*(int8_t *)(lVar10 + 0x458))
            ;
            uVar6 = *(ulonglong *)(lVar10 + 0x448);
            uVar8 = *(ulonglong *)(lVar10 + 0x440);
          }
          else {
            lVar13 = lVar13 * 2;
            lStack_1e8 = lVar13;
            if (lVar13 != 0) goto LAB_18018f515;
          }
          puVar4 = puVar3;
          if (uVar8 != uVar6) {
            lVar9 = uVar8 - (longlong)puVar3;
            do {
              *puVar4 = &UNK_18098bcb0;
              puVar4[1] = 0;
              *(int32_t *)(puVar4 + 2) = 0;
              *puVar4 = &UNK_1809fcc58;
              puVar4[1] = puVar4 + 3;
              *(int32_t *)(puVar4 + 2) = 0;
              *(int8_t *)(puVar4 + 3) = 0;
              *(int32_t *)(puVar4 + 2) = *(int32_t *)((longlong)puVar4 + lVar9 + 0x10);
              puVar11 = *(void **)((longlong)puVar4 + lVar9 + 8);
              puVar12 = &DAT_18098bc73;
              if (puVar11 != (void *)0x0) {
                puVar12 = puVar11;
              }
              puStack_1d8 = puVar4;
              strcpy_s(puVar4[1],0x40,puVar12);
              puVar4 = puVar4 + 0xb;
              lVar10 = lStack_1e0;
              lVar13 = lStack_1e8;
            } while ((longlong)puVar4 + lVar9 != uVar6);
          }
          FUN_1800b8300(puVar4,&puStack_98);
          puVar1 = *(uint64_t **)(lVar10 + 0x448);
          puVar5 = *(uint64_t **)(lVar10 + 0x440);
          if (puVar5 != puVar1) {
            do {
              (**(code **)*puVar5)(puVar5,0);
              puVar5 = puVar5 + 0xb;
            } while (puVar5 != puVar1);
            puVar5 = *(uint64_t **)(lVar10 + 0x440);
          }
          if (puVar5 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar5);
          }
          *(uint64_t **)(lVar10 + 0x440) = puVar3;
          *(uint64_t **)(lVar10 + 0x448) = puVar4 + 0xb;
          *(uint64_t **)(lVar10 + 0x450) = puVar3 + lVar13 * 0xb;
        }
        puStack_98 = &UNK_18098bcb0;
      }
      plStack_1d0 = plStack_1d0 + 1;
    } while (plStack_1d0 != *(longlong **)(lStack_1c8 + 0xa8));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_208);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18018f6a0(uint64_t param_1,longlong param_2)
void FUN_18018f6a0(uint64_t param_1,longlong param_2)

{
  byte bVar1;
  int32_t uVar2;
  int iVar3;
  uint uVar4;
  uint64_t *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  byte *pbVar9;
  int iVar10;
  void *puVar11;
  longlong lVar12;
  uint64_t uVar13;
  int32_t extraout_XMM0_Da;
  int8_t auStack_698 [32];
  char acStack_678 [8];
  void *puStack_670;
  int8_t *puStack_668;
  int iStack_660;
  ulonglong uStack_658;
  void *puStack_650;
  uint64_t *puStack_648;
  int32_t uStack_640;
  ulonglong uStack_638;
  uint64_t uStack_630;
  int8_t *puStack_628;
  int iStack_61c;
  longlong alStack_618 [3];
  int8_t auStack_600 [8];
  int8_t auStack_5f8 [120];
  longlong lStack_580;
  int8_t auStack_560 [104];
  void *puStack_4f8;
  void *puStack_4f0;
  int32_t uStack_4e8;
  undefined auStack_4e0 [520];
  void *apuStack_2d8 [68];
  char acStack_b8 [128];
  ulonglong uStack_38;
  
  uStack_630 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_698;
  FUN_18005d260(param_2,*(uint64_t *)(param_2 + 0x10));
  *(longlong *)param_2 = param_2;
  *(longlong *)(param_2 + 8) = param_2;
  uVar13 = 0;
  *(uint64_t *)(param_2 + 0x10) = 0;
  *(int8_t *)(param_2 + 0x18) = 0;
  *(uint64_t *)(param_2 + 0x20) = 0;
  puStack_650 = &UNK_180a3c3e0;
  uStack_638 = 0;
  puStack_648 = (uint64_t *)0x0;
  uStack_640 = 0;
  puVar5 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x43,0x13);
  *(int8_t *)puVar5 = 0;
  puStack_648 = puVar5;
  uVar2 = FUN_18064e990(puVar5);
  uStack_638 = CONCAT44(uStack_638._4_4_,uVar2);
  *puVar5 = 0x6f4d2f4553414224;
  puVar5[1] = 0x614e2f73656c7564;
  puVar5[2] = 0x646f4d2f65766974;
  puVar5[3] = 0x2f61746144656c75;
  *(int32_t *)(puVar5 + 4) = 0x65726f43;
  *(int32_t *)((longlong)puVar5 + 0x24) = 0x656d6147;
  *(int32_t *)(puVar5 + 5) = 0x65666552;
  *(int32_t *)((longlong)puVar5 + 0x2c) = 0x636e6572;
  *(int32_t *)(puVar5 + 6) = 0x612f7365;
  *(int32_t *)((longlong)puVar5 + 0x34) = 0x736f6d74;
  *(int32_t *)(puVar5 + 7) = 0x72656870;
  *(int32_t *)((longlong)puVar5 + 0x3c) = 0x742e7365;
  *(int16_t *)(puVar5 + 8) = 0x7478;
  *(int8_t *)((longlong)puVar5 + 0x42) = 0;
  uStack_640 = 0x42;
  FUN_1800c4720(alStack_618);
  lVar6 = FUN_180624440(apuStack_2d8,&puStack_650);
  puVar11 = &DAT_18098bc73;
  if (*(void **)(lVar6 + 8) != (void *)0x0) {
    puVar11 = *(void **)(lVar6 + 8);
  }
  puStack_4f8 = &UNK_180a009c8;
  puStack_4f0 = auStack_4e0;
  uStack_4e8 = 0;
  auStack_4e0[0] = 0;
  if (puVar11 != (void *)0x0) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (puVar11[lVar6] != '\0');
    uStack_4e8 = (int32_t)lVar6;
    strcpy_s(auStack_4e0,0x200);
  }
  apuStack_2d8[0] = &UNK_18098bcb0;
  puVar11 = &DAT_18098bc73;
  if (puStack_4f0 != (void *)0x0) {
    puVar11 = puStack_4f0;
  }
  lVar6 = FUN_1800c4800(auStack_600,puVar11,1);
  if (lVar6 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((longlong)alStack_618 + (longlong)*(int *)(alStack_618[0] + 4),2);
  }
  else {
    _clear___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((longlong)alStack_618 + (longlong)*(int *)(alStack_618[0] + 4),0);
  }
  if (lStack_580 != 0) {
    plVar7 = (longlong *)
             _getline___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_PEAD_J_Z
                       (alStack_618,acStack_b8,0x80);
    bVar1 = *(byte *)((longlong)*(int *)(*plVar7 + 4) + 0x10 + (longlong)plVar7);
    while ((bVar1 & 6) == 0) {
      puStack_670 = &UNK_180a3c3e0;
      uStack_658 = 0;
      puStack_668 = (int8_t *)0x0;
      iStack_660 = 0;
      lVar6 = -1;
      do {
        lVar8 = lVar6;
        lVar6 = lVar8 + 1;
      } while (acStack_b8[lVar8 + 1] != '\0');
      if ((int)(lVar8 + 1) != 0) {
        iVar10 = (int)lVar8 + 2;
        iVar3 = iVar10;
        if (iVar10 < 0x10) {
          iVar3 = 0x10;
        }
        puStack_668 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar3,0x13);
        *puStack_668 = 0;
        uVar2 = FUN_18064e990(puStack_668);
        uStack_658 = CONCAT44(uStack_658._4_4_,uVar2);
                    // WARNING: Subroutine does not return
        memcpy(puStack_668,acStack_b8,iVar10);
      }
      iStack_660 = 0;
      FUN_180628a40(&puStack_670);
      if (iStack_660 != 0) {
        lVar6 = FUN_18062b420(_DAT_180c8ed18,0x40,*(int8_t *)(param_2 + 0x28));
        FUN_180627ae0(lVar6 + 0x20,&puStack_670);
        lVar8 = FUN_1800590b0(param_2,acStack_678,lVar6 + 0x20);
        if (acStack_678[0] != '\0') {
          if (lVar8 == param_2) goto LAB_18018fa06;
          if (*(int *)(lVar8 + 0x30) == 0) goto LAB_18018f9fb;
          if (*(int *)(lVar6 + 0x30) == 0) goto LAB_18018fa06;
          pbVar9 = *(byte **)(lVar8 + 0x28);
          lVar12 = *(longlong *)(lVar6 + 0x28) - (longlong)pbVar9;
          goto LAB_18018f9e4;
        }
        FUN_18005d1f0(extraout_XMM0_Da,lVar6);
      }
      puStack_670 = &UNK_180a3c3e0;
      if (puStack_668 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_668 = (int8_t *)0x0;
      uStack_658 = uStack_658 & 0xffffffff00000000;
      puStack_670 = &UNK_18098bcb0;
      plVar7 = (longlong *)
               _getline___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_PEAD_J_Z
                         (alStack_618,acStack_b8,0x80);
      bVar1 = *(byte *)((longlong)*(int *)(*plVar7 + 4) + 0x10 + (longlong)plVar7);
    }
    lVar6 = FUN_1800a19c0(auStack_600);
    if (lVar6 == 0) {
      _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
                ((longlong)alStack_618 + (longlong)*(int *)(alStack_618[0] + 4),2);
    }
  }
  puStack_4f8 = &UNK_18098bcb0;
  puStack_628 = auStack_560;
  *(void **)((longlong)alStack_618 + (longlong)*(int *)(alStack_618[0] + 4)) = &UNK_180a03ad8;
  *(int *)((longlong)&iStack_61c + (longlong)*(int *)(alStack_618[0] + 4)) =
       *(int *)(alStack_618[0] + 4) + -0xb8;
  FUN_18009fb60(auStack_600);
  __1__basic_iostream_DU__char_traits_D_std___std__UEAA_XZ(auStack_5f8);
  __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(auStack_560);
  puStack_650 = &UNK_180a3c3e0;
  if (puStack_648 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_648 = (uint64_t *)0x0;
  uStack_638 = uStack_638 & 0xffffffff00000000;
  puStack_650 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_698);
  while (pbVar9 = pbVar9 + 1, uVar4 != 0) {
LAB_18018f9e4:
    bVar1 = *pbVar9;
    uVar4 = (uint)pbVar9[lVar12];
    if (bVar1 != uVar4) break;
  }
  if ((int)(bVar1 - uVar4) < 1) {
LAB_18018f9fb:
    uVar13 = 1;
  }
LAB_18018fa06:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar6,lVar8,param_2,uVar13);
}





