#include "TaleWorlds.Native.Split.h"

// 99_part_01_part054.c - 3 个函数

// 函数: void FUN_1800db610(longlong param_1,longlong param_2)
void FUN_1800db610(longlong param_1,longlong param_2)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint64_t uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint64_t uVar12;
  uint uVar13;
  longlong *plVar14;
  int8_t auStack_168 [32];
  int32_t uStack_148;
  int32_t uStack_140;
  void **ppuStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  void *puStack_108;
  int8_t *puStack_100;
  int32_t uStack_f8;
  int8_t auStack_f0 [72];
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_118 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  ppuStack_138 = &puStack_a8;
  plVar10 = (longlong *)0x0;
  puStack_a8 = &UNK_1809fcc58;
  puStack_a0 = auStack_90;
  uStack_98 = 0;
  auStack_90[0] = 0;
  FUN_180049bf0(&puStack_a8,&UNK_180a04124);
  FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_a8);
  lVar8 = *(longlong *)(param_2 + 0x99c0);
  if (lVar8 == 0) {
LAB_1800dbbe1:
    if ((*(int *)(param_2 + 0x27f8) == 0) && (*(longlong *)(param_2 + 0x97a0) == 0))
    goto LAB_1800dbd5e;
    FUN_1802c8260(*(uint64_t *)(param_2 + 0x99c0),param_2,0);
    FUN_1802c8fe0(*(uint64_t *)(param_2 + 0x99c0),param_2);
    FUN_1802c84d0(*(uint64_t *)(param_2 + 0x99c0),param_2);
    *(int8_t *)(param_1 + 0x1350) = 1;
    lVar8 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if ((*(longlong *)(lVar8 + 0x84f8) != 0) ||
       ((*(int *)(lVar8 + 0x8898) != -1 || (*(int *)(lVar8 + 0x8a98) != 0x10)))) {
      ppuStack_138 = (void **)0x0;
      (**(code **)(**(longlong **)(lVar8 + 0x8400) + 0x40))
                (*(longlong **)(lVar8 + 0x8400),0x18,1,&ppuStack_138);
      *(uint64_t *)(lVar8 + 0x84f8) = 0;
      *(int32_t *)(lVar8 + 0x8898) = 0xffffffff;
      *(int32_t *)(lVar8 + 0x8a98) = 0x10;
      *(int *)(lVar8 + 0x82b4) = *(int *)(lVar8 + 0x82b4) + 1;
    }
    lVar4 = _DAT_180c86938;
    lVar8 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    uVar12 = *(uint64_t *)(lVar8 + 0x83b8);
    plVar11 = *(longlong **)(lVar8 + 0x83f0);
    *(uint64_t *)(lVar8 + 0x83f0) = 0;
    FUN_18029de40(*(uint64_t *)(lVar4 + 0x1cd8),1);
    plVar10 = (longlong *)**(uint64_t **)(*(longlong *)(param_2 + 0x99c0) + 0x50);
    uStack_148 = 0xffffffff;
    (**(code **)(*plVar10 + 0x48))(plVar10,0,param_2,0);
    *(int8_t *)(param_1 + 0x1350) = 0;
LAB_1800dbcff:
    FUN_18029ad30(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),0,uVar12);
    plVar10 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
    if ((plVar11 != (longlong *)0x0) && (*plVar11 != 0)) {
      (**(code **)(*plVar10 + 0x70))(plVar10,*plVar11,2);
    }
    lVar8 = _DAT_180c86938;
    plVar10[0x107e] = (longlong)plVar11;
  }
  else {
    if (1 < (ulonglong)(*(longlong *)(lVar8 + 0x58) - *(longlong *)(lVar8 + 0x50) >> 3)) {
      FUN_1802c8260(lVar8,param_2,0);
      FUN_1802c8fe0(*(uint64_t *)(param_2 + 0x99c0),param_2);
      FUN_1802c84d0(*(uint64_t *)(param_2 + 0x99c0),param_2);
      *(int8_t *)(param_1 + 0x1350) = 1;
      FUN_1800debc0();
      lVar8 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      if (((*(longlong *)(lVar8 + 0x84f8) != 0) || (*(int *)(lVar8 + 0x8898) != -1)) ||
         (*(int *)(lVar8 + 0x8a98) != 0x10)) {
        uStack_130 = 0;
        (**(code **)(**(longlong **)(lVar8 + 0x8400) + 0x40))
                  (*(longlong **)(lVar8 + 0x8400),0x18,1,&uStack_130);
        *(uint64_t *)(lVar8 + 0x84f8) = 0;
        *(int32_t *)(lVar8 + 0x8898) = 0xffffffff;
        *(int32_t *)(lVar8 + 0x8a98) = 0x10;
        *(int *)(lVar8 + 0x82b4) = *(int *)(lVar8 + 0x82b4) + 1;
      }
      lVar4 = _DAT_180c86938;
      lVar8 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      uVar12 = *(uint64_t *)(lVar8 + 0x83b8);
      plVar11 = *(longlong **)(lVar8 + 0x83f0);
      puVar1 = *(uint64_t **)(*(longlong *)(param_2 + 0x99c0) + 0x50);
      if ((*(longlong *)(*(longlong *)(param_2 + 0x99c0) + 0x58) - (longlong)puVar1 &
          0xfffffffffffffff8U) == 8) {
        plVar10 = (longlong *)*puVar1;
        uStack_148 = 0xffffffff;
        (**(code **)(*plVar10 + 0x48))(plVar10,0,param_2,0);
      }
      else {
        *(uint64_t *)(lVar8 + 0x83f0) = 0;
        FUN_18029de40(*(uint64_t *)(lVar4 + 0x1cd8),1);
        uVar2 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
        uVar7 = FUN_180245280(param_2);
        uStack_148 = 0xffffffff;
        FUN_18029d150(uVar2,0x21,uVar7);
        lVar8 = *(longlong *)(param_2 + 0x99c0);
        plVar14 = plVar10;
        if (*(longlong *)(lVar8 + 0x58) - *(longlong *)(lVar8 + 0x50) >> 3 != 0) {
          do {
            plVar3 = *(longlong **)((longlong)plVar10 + *(longlong *)(lVar8 + 0x50));
            uStack_148 = 0xffffffff;
            (**(code **)(*plVar3 + 0x48))(plVar3,0,param_2,0);
            uVar13 = (int)plVar14 + 1;
            plVar10 = plVar10 + 1;
            lVar8 = *(longlong *)(param_2 + 0x99c0);
            plVar14 = (longlong *)(ulonglong)uVar13;
          } while ((ulonglong)(longlong)(int)uVar13 <
                   (ulonglong)(*(longlong *)(lVar8 + 0x58) - *(longlong *)(lVar8 + 0x50) >> 3));
        }
        lVar8 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
        if (((*(longlong *)(lVar8 + 0x8540) != 0) || (*(int *)(lVar8 + 0x88bc) != -1)) ||
           (*(int *)(lVar8 + 0x8abc) != 0x20)) {
          uStack_128 = 0;
          (**(code **)(**(longlong **)(lVar8 + 0x8400) + 0x218))
                    (*(longlong **)(lVar8 + 0x8400),0x21,1,&uStack_128);
          *(uint64_t *)(lVar8 + 0x8540) = 0;
          *(int32_t *)(lVar8 + 0x88bc) = 0xffffffff;
          *(int32_t *)(lVar8 + 0x8abc) = 0x20;
          *(int *)(lVar8 + 0x82b4) = *(int *)(lVar8 + 0x82b4) + 1;
        }
      }
      FUN_1802c8f70(*(uint64_t *)(param_2 + 0x99c0));
      *(int8_t *)(param_1 + 0x1350) = 0;
      if (0 < *(int *)(param_2 + 0x2920)) {
        ppuStack_138 = &puStack_108;
        puStack_108 = &UNK_1809fcc58;
        puStack_100 = auStack_f0;
        uStack_f8 = 0;
        auStack_f0[0] = 0;
        FUN_180049bf0(&puStack_108,&UNK_180a04158);
        FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_108);
        FUN_1800dd660(param_1,param_2);
        FUN_1802c2ac0(&puStack_108);
      }
      goto LAB_1800dbcff;
    }
    if (((lVar8 == 0) ||
        ((*(longlong *)(lVar8 + 0x58) - *(longlong *)(lVar8 + 0x50) & 0xfffffffffffffff8U) != 0x38))
       || (*(longlong *)(*(longlong *)(lVar8 + 0x50) + 0x30) == 0)) goto LAB_1800dbbe1;
    lVar4 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if (((*(longlong *)(lVar4 + 0x84f8) != 0) || (*(int *)(lVar4 + 0x8898) != -1)) ||
       (*(int *)(lVar4 + 0x8a98) != 0x10)) {
      uStack_120 = 0;
      (**(code **)(**(longlong **)(lVar4 + 0x8400) + 0x40))
                (*(longlong **)(lVar4 + 0x8400),0x18,1,&uStack_120);
      *(uint64_t *)(lVar4 + 0x84f8) = 0;
      *(int32_t *)(lVar4 + 0x8898) = 0xffffffff;
      *(int32_t *)(lVar4 + 0x8a98) = 0x10;
      *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
      lVar8 = *(longlong *)(param_2 + 0x99c0);
    }
    lVar6 = _DAT_180c86938;
    lVar5 = _DAT_180c86870;
    lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x50) + 0x30) + 0x428);
    lVar9 = *(longlong *)(lVar4 + 0x1d8);
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else if (_DAT_180c86870 != 0) {
      *(longlong *)(lVar4 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
      lVar8 = *(longlong *)(param_2 + 0x99c0);
    }
    if (*(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x50) + 0x30) + 0x448) != 0) {
      lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x50) + 0x28) + 0x448);
      lVar4 = *(longlong *)(lVar8 + 0x1e0);
      if (lVar4 != 0) {
        if (lVar5 != 0) {
          *(longlong *)(lVar8 + 0x340) = (longlong)*(int *)(lVar5 + 0x224);
        }
        plVar10 = (longlong *)(lVar4 + 0x10);
      }
    }
    lVar8 = *(longlong *)(lVar6 + 0x1cd8);
    uVar12 = *(uint64_t *)(lVar8 + 0x83b8);
    plVar11 = *(longlong **)(lVar8 + 0x83f0);
    FUN_18029ad30(lVar8,0,lVar9);
    plVar14 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
    if ((plVar10 != (longlong *)0x0) && (*plVar10 != 0)) {
      (**(code **)(*plVar14 + 0x70))(plVar14,*plVar10,4);
    }
    lVar8 = _DAT_180c86938;
    plVar14[0x107e] = (longlong)plVar10;
    FUN_18029de40(*(uint64_t *)(lVar8 + 0x1cd8),1);
    if (*(int *)(_DAT_180c86920 + 0x5b0) == 1) {
      uStack_140 = 0;
      uStack_148 = 0;
      FUN_18029c8a0(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),1,0xffffffff,0x3f800000);
    }
    FUN_18029ad30(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),0,uVar12);
    plVar10 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
    if ((plVar11 != (longlong *)0x0) && (*plVar11 != 0)) {
      (**(code **)(*plVar10 + 0x70))(plVar10,*plVar11,2);
    }
    lVar8 = _DAT_180c86938;
    plVar10[0x107e] = (longlong)plVar11;
  }
  FUN_18029de40(*(uint64_t *)(lVar8 + 0x1cd8),1);
LAB_1800dbd5e:
  FUN_1802c2ac0(&puStack_a8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800dbd90(longlong param_1,longlong param_2,longlong param_3)
void FUN_1800dbd90(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  uint uVar2;
  uint64_t uVar3;
  longlong lVar4;
  longlong lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int8_t auStack_158 [32];
  int32_t uStack_138;
  int8_t auStack_128 [4];
  int32_t uStack_124;
  uint uStack_120;
  uint uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  int32_t uStack_104;
  int32_t uStack_100;
  int8_t uStack_fc;
  uint64_t uStack_fb;
  int32_t uStack_f0;
  int8_t uStack_ec;
  longlong *plStack_e8;
  uint64_t uStack_e0;
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_e0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  uStack_124 = 0;
  if (((*(byte *)(param_3 + 0x1bd8) & 0x20) != 0) && (*(char *)(param_3 + 0x9a30) == '\0')) {
    FUN_1802c22a0(auStack_128,&UNK_180a04140);
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_2 + 0x280) + 0x1e0) + 0x1588);
    if (((uVar2 & 0x10) != 0) && (*(longlong *)(param_3 + 0x9960) != 0)) {
      uStack_138 = 0xffffffff;
      FUN_18029d150(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),0x16,*(longlong *)(param_3 + 0x9960),
                    0x10);
    }
    if (((*(longlong *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x83b8) != 0) &&
        ((char)uVar2 < '\0')) ||
       (((*(uint *)(param_2 + 0x314) & 0x400) != 0 && ((uVar2 >> 8 & 1) != 0)))) {
      if (*(ulonglong *)(param_3 + 0x99a0) != (ulonglong)*(uint *)(param_1 + 0x2ca8)) {
        *(ulonglong *)(param_3 + 0x99a0) = (ulonglong)*(uint *)(param_1 + 0x2ca8);
        lVar4 = FUN_180244ff0(param_3);
        uVar1 = *(ushort *)(lVar4 + 0x32c);
        lVar5 = FUN_180244ff0(param_3);
        lVar4 = *(longlong *)(param_3 + 0x9998);
        if (lVar4 == 0) {
          uStack_118 = 1;
          uStack_114 = 1;
          uStack_10c = 0;
          uStack_108 = 0;
          uStack_104 = 0;
          uStack_100 = 0x3f800000;
          uStack_fb = 1;
          uStack_fc = 0;
          uStack_f0 = 0xffffffff;
          uStack_ec = 0;
          uStack_120 = (uint)uVar1;
          uStack_11c = (uint)*(ushort *)(lVar5 + 0x32e);
          lVar4 = FUN_180244ff0(param_3);
          uStack_110 = *(int32_t *)(lVar4 + 0x324);
          puStack_d8 = &UNK_1809fcc28;
          puStack_d0 = auStack_c0;
          auStack_c0[0] = 0;
          uStack_c8 = 0x13;
          strcpy_s(auStack_c0,0x80,&UNK_180a04190);
          uVar6 = FUN_1800b1230(_DAT_180c86930,&plStack_e8,&puStack_d8,&uStack_120);
          uStack_124 = 1;
          FUN_180060b80(param_3 + 0x9998,uVar6);
          uStack_124 = 0;
          if (plStack_e8 != (longlong *)0x0) {
            (**(code **)(*plStack_e8 + 0x38))();
          }
          puStack_d8 = &UNK_18098bcb0;
          lVar4 = *(longlong *)(param_3 + 0x9998);
        }
        if (*(char *)(lVar4 + 900) != '\0') {
          uVar6 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
          uVar3 = *(uint64_t *)(param_3 + 0x9998);
          uVar7 = FUN_180244ff0(param_3);
          FUN_18029e3e0(uVar6,uVar7,uVar3);
        }
      }
      if ((*(longlong *)(param_3 + 0x9998) != 0) &&
         (*(char *)(*(longlong *)(param_3 + 0x9998) + 900) != '\0')) {
        *(uint64_t *)(param_2 + 0x48) = *(uint64_t *)(param_3 + 0x9998);
        uStack_138 = 0xffffffff;
        FUN_18029d150(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),9,*(uint64_t *)(param_3 + 0x9998));
      }
    }
    _DAT_180c8695c = _DAT_180c8695c + -1;
    (**(code **)(*_DAT_180c86968 + 0x20))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800dc070(void **param_1,longlong param_2,char param_3)
void FUN_1800dc070(void **param_1,longlong param_2,char param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  void **ppuVar5;
  uint uVar6;
  int32_t *puVar7;
  longlong lVar8;
  uint64_t uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int32_t *puVar13;
  longlong *plVar14;
  uint64_t uVar15;
  int32_t uVar16;
  int8_t auStack_238 [32];
  int8_t uStack_218;
  void **ppuStack_208;
  int8_t auStack_200 [8];
  void **ppuStack_1f8;
  void *puStack_1f0;
  int32_t *puStack_1e8;
  int32_t uStack_1e0;
  uint64_t uStack_1d8;
  uint uStack_1d0;
  uint uStack_1cc;
  int32_t uStack_1c8;
  int32_t uStack_1c4;
  int32_t uStack_1c0;
  int8_t uStack_1bc;
  int16_t uStack_1bb;
  int8_t uStack_1b9;
  int32_t uStack_1b8;
  uint64_t uStack_1b0;
  void *puStack_1a8;
  int8_t *puStack_1a0;
  int32_t uStack_198;
  int8_t auStack_190 [72];
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [136];
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_1b0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  ppuStack_1f8 = param_1;
  FUN_1802c22a0(auStack_200,&UNK_180a04178);
  puStack_1f0 = &UNK_180a3c3e0;
  uStack_1d8 = 0;
  puStack_1e8 = (int32_t *)0x0;
  uStack_1e0 = 0;
  puVar7 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x12,0x13);
  *(int8_t *)puVar7 = 0;
  puStack_1e8 = puVar7;
  uVar6 = FUN_18064e990(puVar7);
  *puVar7 = 0x646e6572;
  puVar7[1] = 0x775f7265;
  puVar7[2] = 0x72657461;
  puVar7[3] = 0x73656d5f;
  *(int16_t *)(puVar7 + 4) = 0x68;
  uStack_1e0 = 0x11;
  uStack_1d8._0_4_ = uVar6;
  if (param_3 != '\0') {
    if (uVar6 < 0x18) {
      uStack_218 = 0x13;
      puVar7 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar7,0x18,0x10);
      puStack_1e8 = puVar7;
      uStack_1d8._0_4_ = FUN_18064e990(puVar7);
    }
    *(int32_t *)((longlong)puVar7 + 0x11) = 0x7065645f;
    *(int16_t *)((longlong)puVar7 + 0x15) = 0x6874;
    *(int8_t *)((longlong)puVar7 + 0x17) = 0;
    uStack_1e0 = 0x17;
  }
  puVar13 = (int32_t *)&system_buffer_ptr;
  if (puVar7 != (int32_t *)0x0) {
    puVar13 = puVar7;
  }
  ppuStack_208 = &puStack_a8;
  puStack_a8 = &UNK_1809fcc58;
  puStack_a0 = auStack_90;
  uStack_98 = 0;
  auStack_90[0] = 0;
  if (puVar13 != (int32_t *)0x0) {
    FUN_180049bf0(&puStack_a8);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_a8);
  }
  if (param_3 == '\0') {
    lVar3 = *(longlong *)(param_2 + 0x34e0);
    if (lVar3 == 0) goto LAB_1800dc560;
    ppuStack_208 = &puStack_1a8;
    puStack_1a8 = &UNK_1809fcc58;
    puStack_1a0 = auStack_190;
    uStack_198 = 0;
    auStack_190[0] = 0;
    FUN_180049bf0(&puStack_1a8,&UNK_180a041c4);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_1a8);
    lVar8 = _DAT_180c86938;
    *(uint64_t *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x83f0) = 0;
    FUN_18029de40(*(uint64_t *)(lVar8 + 0x1cd8),1);
    ppuStack_208 = &puStack_148;
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    FUN_180049bf0(&puStack_148,&system_data_3ec0);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_148);
    FUN_1800dbd90(param_1,lVar3,param_2);
    lVar10 = FUN_180245280(param_2);
    lVar8 = *(longlong *)(param_2 + 0x9968);
    if (((lVar8 == 0) && (lVar8 = FUN_180245280(param_2), lVar8 == 0)) || (lVar10 == lVar8)) {
      uVar15 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
      lVar8 = FUN_180244ff0(param_2);
      iVar2 = *(int *)(param_2 + 0x3578);
      if (*(longlong *)(lVar8 + 0x1d8) == 0) {
        lVar8 = 0;
      }
      else {
        if (_DAT_180c86870 != 0) {
          *(longlong *)(lVar8 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
        }
        lVar8 = (longlong)(int)((uint)*(byte *)(lVar8 + 0x335) * iVar2) * 0x10 +
                *(longlong *)(lVar8 + 0x1d8);
      }
      FUN_18029ad30(uVar15,0,lVar8);
      lVar8 = _DAT_180c86938;
      *(uint64_t *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x83f0) = 0;
      FUN_18029de40(*(uint64_t *)(lVar8 + 0x1cd8),1);
      *(int32_t *)(lVar3 + 0xc4) = 1;
      lVar8 = FUN_180244ff0(param_2);
      *(int32_t *)(lVar3 + 0xa4) = *(int32_t *)(lVar8 + 0x324);
      *(int8_t *)(lVar3 + 0x90) = 1;
    }
    else {
      uVar15 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
      uVar9 = FUN_180244ff0(param_2);
      uVar9 = func_0x0001800858c0(uVar9,*(int32_t *)(param_2 + 0x3578),0);
      FUN_18029ad30(uVar15,0,uVar9);
      lVar12 = _DAT_180c86938;
      plVar4 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
      plVar14 = *(longlong **)(lVar8 + 0x1e0);
      if (plVar14 != (longlong *)0x0) {
        if (_DAT_180c86870 != 0) {
          *(longlong *)(lVar8 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
        }
        plVar14 = plVar14 + 2;
        if ((plVar14 != (longlong *)0x0) && (*plVar14 != 0)) {
          (**(code **)(*plVar4 + 0x70))(plVar4,*plVar14,4);
          lVar12 = _DAT_180c86938;
        }
      }
      plVar4[0x107e] = (longlong)plVar14;
      FUN_18029de40(*(uint64_t *)(lVar12 + 0x1cd8),1);
      *(int32_t *)(lVar3 + 0xc4) = 1;
      lVar8 = FUN_180244ff0(param_2);
      *(int32_t *)(lVar3 + 0xa4) = *(int32_t *)(lVar8 + 0x324);
      *(int8_t *)(lVar3 + 0x92) = 2;
      *(int8_t *)(lVar3 + 0x90) = 0;
      param_1 = ppuStack_1f8;
      if (lVar10 == 0) {
        *(int32_t *)(lVar3 + 0xa0) = 0x1a;
      }
      else {
        *(int32_t *)(lVar3 + 0xa0) = *(int32_t *)(lVar10 + 0x324);
      }
    }
    *(uint64_t *)(lVar3 + 0x48) = *(uint64_t *)(param_2 + 0x9998);
    *(longlong *)(lVar3 + 0x50) = lVar10;
    FUN_1800e8640(param_1,lVar3);
    lVar3 = _DAT_180c86938;
    *(uint64_t *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x83f0) = 0;
    FUN_18029de40(*(uint64_t *)(lVar3 + 0x1cd8),1);
    FUN_1802c2ac0(&puStack_148);
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0x34d8);
    if (lVar3 == 0) goto LAB_1800dc560;
    ppuStack_1f8 = &puStack_1a8;
    puStack_1a8 = &UNK_1809fcc58;
    puStack_1a0 = auStack_190;
    uStack_198 = 0;
    auStack_190[0] = 0;
    FUN_180049bf0(&puStack_1a8,&UNK_180a04868);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_1a8);
    if ((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0) {
      lVar8 = FUN_180245280(param_2);
      uVar1 = *(ushort *)(lVar8 + 0x32c);
      lVar8 = FUN_180245280(param_2);
      uStack_1c8 = 1;
      uStack_1bb = 1;
      uStack_1b9 = 0;
      uStack_1c0 = 0;
      uStack_1bc = 0x8a;
      uStack_1d0 = (uint)uVar1;
      uStack_1cc = (uint)*(ushort *)(lVar8 + 0x32e);
      lVar8 = FUN_180245280(param_2);
      uStack_1c4 = *(int32_t *)(lVar8 + 0x324);
      uStack_1b8 = *(int32_t *)(param_2 + 0x1bd4);
      puStack_148 = &UNK_1809fcc28;
      puStack_140 = auStack_130;
      auStack_130[0] = 0;
      uStack_138 = 0x17;
      uVar16 = strcpy_s(auStack_130,0x80,&UNK_180a041d0);
      FUN_1800b1d80(uVar16,&ppuStack_208,&puStack_148,&uStack_1d0);
      ppuVar5 = ppuStack_208;
      puStack_148 = &UNK_18098bcb0;
      uVar15 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
      uVar9 = FUN_180245280(param_2);
      FUN_18029e3e0(uVar15,uVar9,ppuVar5);
      ppuVar5 = ppuStack_208;
      ppuStack_1f8 = ppuStack_208;
      if (ppuStack_208 != (void **)0x0) {
        (**(code **)(*ppuStack_208 + 0x28))(ppuStack_208);
      }
      ppuStack_1f8 = *(void ***)(param_2 + 0x9968);
      *(void ***)(param_2 + 0x9968) = ppuVar5;
      if (ppuStack_1f8 != (void **)0x0) {
        (**(code **)(*ppuStack_1f8 + 0x38))();
      }
      if (ppuStack_208 != (void **)0x0) {
        (**(code **)(*ppuStack_208 + 0x38))();
      }
    }
    lVar10 = FUN_180245280(param_2);
    lVar8 = *(longlong *)(param_2 + 0x9968);
    if (lVar8 == 0) {
      lVar8 = FUN_180245280(param_2);
    }
    lVar11 = _DAT_180c86938;
    lVar12 = *(longlong *)(param_2 + 0x96e8);
    if (lVar8 != 0) {
      if (lVar12 == 0) {
        *(uint64_t *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x83b8) = 0;
      }
      else {
        uVar15 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
        func_0x0001800858c0(lVar12,0,0);
        FUN_18029ad30(uVar15);
        *(int32_t *)(lVar3 + 0xa4) = *(int32_t *)(lVar12 + 0x324);
        lVar11 = _DAT_180c86938;
      }
      *(int32_t *)(lVar3 + 0xc4) = 1;
      plVar4 = *(longlong **)(lVar11 + 0x1cd8);
      if (*(longlong *)(lVar8 + 0x1e0) == 0) {
        plVar14 = (longlong *)0x0;
      }
      else {
        if (_DAT_180c86870 != 0) {
          *(longlong *)(lVar8 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
        }
        plVar14 = (longlong *)(*(longlong *)(lVar8 + 0x1e0) + 0x10);
        if ((plVar14 != (longlong *)0x0) && (*plVar14 != 0)) {
          (**(code **)(*plVar4 + 0x70))(plVar4,*plVar14,4);
          lVar11 = _DAT_180c86938;
        }
      }
      plVar4[0x107e] = (longlong)plVar14;
      FUN_18029de40(*(uint64_t *)(lVar11 + 0x1cd8),(lVar12 != 0) + '\x01');
    }
    *(int8_t *)(lVar3 + 0x92) = 4;
    *(int32_t *)(lVar3 + 0xa0) = *(int32_t *)(lVar10 + 0x324);
    FUN_1800e8640(param_1,lVar3);
    lVar3 = _DAT_180c86938;
    *(uint64_t *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x83f0) = 0;
    FUN_18029de40(*(uint64_t *)(lVar3 + 0x1cd8),1);
  }
  FUN_1802c2ac0(&puStack_1a8);
LAB_1800dc560:
  lVar3 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  if (((*(longlong *)(lVar3 + 0x8480) != 0) || (*(int *)(lVar3 + 0x885c) != -1)) ||
     (*(int *)(lVar3 + 0x8a5c) != 0x13)) {
    ppuStack_208 = (void **)0x0;
    (**(code **)(**(longlong **)(lVar3 + 0x8400) + 200))
              (*(longlong **)(lVar3 + 0x8400),9,1,&ppuStack_208);
    (**(code **)(**(longlong **)(lVar3 + 0x8400) + 0x1f8))
              (*(longlong **)(lVar3 + 0x8400),9,1,&ppuStack_208);
    (**(code **)(**(longlong **)(lVar3 + 0x8400) + 0x40))
              (*(longlong **)(lVar3 + 0x8400),9,1,&ppuStack_208);
    *(uint64_t *)(lVar3 + 0x8480) = 0;
    *(int32_t *)(lVar3 + 0x885c) = 0xffffffff;
    *(int32_t *)(lVar3 + 0x8a5c) = 0x13;
    *(int *)(lVar3 + 0x82b4) = *(int *)(lVar3 + 0x82b4) + 1;
  }
  lVar3 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  if (((*(longlong *)(lVar3 + 0x8488) != 0) || (*(int *)(lVar3 + 0x8860) != -1)) ||
     (*(int *)(lVar3 + 0x8a60) != 0x13)) {
    ppuStack_208 = (void **)0x0;
    (**(code **)(**(longlong **)(lVar3 + 0x8400) + 200))
              (*(longlong **)(lVar3 + 0x8400),10,1,&ppuStack_208);
    (**(code **)(**(longlong **)(lVar3 + 0x8400) + 0x1f8))
              (*(longlong **)(lVar3 + 0x8400),10,1,&ppuStack_208);
    (**(code **)(**(longlong **)(lVar3 + 0x8400) + 0x40))
              (*(longlong **)(lVar3 + 0x8400),10,1,&ppuStack_208);
    *(uint64_t *)(lVar3 + 0x8488) = 0;
    *(int32_t *)(lVar3 + 0x8860) = 0xffffffff;
    *(int32_t *)(lVar3 + 0x8a60) = 0x13;
    *(int *)(lVar3 + 0x82b4) = *(int *)(lVar3 + 0x82b4) + 1;
  }
  FUN_1802c2ac0(&puStack_a8);
  puStack_1f0 = &UNK_180a3c3e0;
  if (puVar7 == (int32_t *)0x0) {
    puStack_1e8 = (int32_t *)0x0;
    uStack_1d8 = (ulonglong)uStack_1d8._4_4_ << 0x20;
    puStack_1f0 = &UNK_18098bcb0;
    _DAT_180c8695c = _DAT_180c8695c + -1;
    (**(code **)(*_DAT_180c86968 + 0x20))();
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_238);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar7);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




