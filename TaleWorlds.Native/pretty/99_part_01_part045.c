#include "TaleWorlds.Native.Split.h"

// 99_part_01_part045.c - 2 个函数

// 函数: void FUN_1800cfb40(uint64_t param_1,longlong param_2,longlong *param_3)
void FUN_1800cfb40(uint64_t param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  uint64_t uVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int8_t auStack_148 [32];
  int8_t auStack_128 [8];
  void **ppuStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  void *puStack_108;
  int8_t *puStack_100;
  int32_t uStack_f8;
  int8_t auStack_f0 [72];
  void *apuStack_a8 [12];
  ulonglong uStack_48;
  
  lVar9 = _DAT_180c86938;
  uVar4 = _DAT_180c86890;
  uStack_110 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_148;
  iVar1 = *(int *)(param_2 + 0x25a8);
  if ((0 < iVar1) && ((*(byte *)(param_2 + 0x35c0) & 0x40) != 0)) {
    lVar5 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(int32_t *)(lVar5 + 0x11f0) = *(int32_t *)(lVar5 + 0x1230);
    *(int32_t *)(lVar5 + 0x11f4) = *(int32_t *)(lVar5 + 0x1234);
    *(int32_t *)(lVar5 + 0x11f8) = *(int32_t *)(lVar5 + 0x1238);
    *(int32_t *)(lVar5 + 0x11fc) = *(int32_t *)(lVar5 + 0x123c);
    *(int32_t *)(lVar5 + 0x1200) = *(int32_t *)(lVar5 + 0x1240);
    *(int32_t *)(lVar5 + 0x1204) = *(int32_t *)(lVar5 + 0x1244);
    *(int32_t *)(lVar5 + 0x1208) = *(int32_t *)(lVar5 + 0x1248);
    *(int32_t *)(lVar5 + 0x120c) = *(int32_t *)(lVar5 + 0x124c);
    *(int32_t *)(lVar5 + 0x1210) = *(int32_t *)(lVar5 + 0x1250);
    *(int32_t *)(lVar5 + 0x1214) = *(int32_t *)(lVar5 + 0x1254);
    *(int32_t *)(lVar5 + 0x1218) = *(int32_t *)(lVar5 + 0x1258);
    *(int32_t *)(lVar5 + 0x121c) = *(int32_t *)(lVar5 + 0x125c);
    *(int32_t *)(lVar5 + 0x1220) = *(int32_t *)(lVar5 + 0x1260);
    *(int32_t *)(lVar5 + 0x1224) = *(int32_t *)(lVar5 + 0x1264);
    *(int32_t *)(lVar5 + 0x1228) = *(int32_t *)(lVar5 + 0x1268);
    *(int32_t *)(lVar5 + 0x122c) = *(int32_t *)(lVar5 + 0x126c);
    lVar5 = *(longlong *)(lVar9 + 0x1cd8);
    FUN_18029fc10(lVar5,*(uint64_t *)(lVar9 + 0x1c70),lVar5 + 0x1100,0x6d0);
    FUN_18024c0f0(param_2,apuStack_a8);
    FUN_1802c22a0(auStack_128,&UNK_180a03fa0);
    ppuStack_120 = &puStack_108;
    plVar7 = (longlong *)0x0;
    puStack_108 = &UNK_1809fcc58;
    puStack_100 = auStack_f0;
    uStack_f8 = 0;
    auStack_f0[0] = 0;
    FUN_180049bf0(&puStack_108,&UNK_180a03f80);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_108);
    lVar9 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if ((*(longlong *)(lVar9 + 0x84b8) != 0) ||
       ((*(int *)(lVar9 + 0x8878) != -1 || (*(int *)(lVar9 + 0x8a78) != 0x10)))) {
      uStack_118 = 0;
      (**(code **)(**(longlong **)(lVar9 + 0x8400) + 0x40))
                (*(longlong **)(lVar9 + 0x8400),0x10,1,&uStack_118);
      *(uint64_t *)(lVar9 + 0x84b8) = 0;
      *(int32_t *)(lVar9 + 0x8878) = 0xffffffff;
      *(int32_t *)(lVar9 + 0x8a78) = 0x10;
      *(int *)(lVar9 + 0x82b4) = *(int *)(lVar9 + 0x82b4) + 1;
    }
    lVar9 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if (((*(longlong *)(lVar9 + 0x8540) != 0) || (*(int *)(lVar9 + 0x88bc) != -1)) ||
       (*(int *)(lVar9 + 0x8abc) != 0x10)) {
      ppuStack_120 = (void **)0x0;
      (**(code **)(**(longlong **)(lVar9 + 0x8400) + 0x40))
                (*(longlong **)(lVar9 + 0x8400),0x21,1,&ppuStack_120);
      *(uint64_t *)(lVar9 + 0x8540) = 0;
      *(int32_t *)(lVar9 + 0x88bc) = 0xffffffff;
      *(int32_t *)(lVar9 + 0x8abc) = 0x10;
      *(int *)(lVar9 + 0x82b4) = *(int *)(lVar9 + 0x82b4) + 1;
    }
    lVar5 = FUN_180245280(param_2);
    lVar9 = _DAT_180c86938;
    plVar3 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
    iVar2 = *(int *)(param_2 + 0x357c);
    plVar8 = plVar7;
    if (*(longlong *)(lVar5 + 0x1e0) != 0) {
      if (_DAT_180c86870 != 0) {
        *(longlong *)(lVar5 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
      }
      plVar8 = (longlong *)((longlong)(iVar2 * 2 + 1) * 0x10 + *(longlong *)(lVar5 + 0x1e0));
      if ((plVar8 != (longlong *)0x0) && (*plVar8 != 0)) {
        (**(code **)(*plVar3 + 0x70))(plVar3,*plVar8,4);
        lVar9 = _DAT_180c86938;
      }
    }
    plVar3[0x107e] = (longlong)plVar8;
    FUN_18029ad30(*(uint64_t *)(lVar9 + 0x1cd8),0,param_3);
    FUN_18029de40(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),1);
    if (0 < iVar1) {
      do {
        lVar9 = *(longlong *)
                 (*(longlong *)(param_2 + 0x25b0 + ((ulonglong)plVar7 >> 0xb) * 8) + 0x10 +
                 (ulonglong)(uint)((int)plVar7 + (int)((ulonglong)plVar7 >> 0xb) * -0x800) * 0x18);
        *(int32_t *)(lVar9 + 0xc4) = 1;
        *(int32_t *)(lVar9 + 0xa4) = *(int32_t *)(*param_3 + 0x324);
        *(int32_t *)(lVar9 + 0xa0) = *(int32_t *)(lVar5 + 0x324);
        FUN_1800e8640(uVar4);
        uVar6 = (int)plVar7 + 1;
        plVar7 = (longlong *)(ulonglong)uVar6;
      } while ((int)uVar6 < iVar1);
    }
    FUN_1802c2ac0(&puStack_108);
    _DAT_180c8695c = _DAT_180c8695c + -1;
    (**(code **)(*_DAT_180c86968 + 0x20))();
    apuStack_a8[0] = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800cfee0(longlong param_1,longlong param_2)
void FUN_1800cfee0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  uint64_t uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int8_t auStack_228 [32];
  int32_t uStack_208;
  void *puStack_1a0;
  longlong lStack_198;
  int32_t uStack_188;
  int8_t auStack_180 [8];
  int iStack_178;
  int32_t uStack_174;
  uint uStack_170;
  uint64_t uStack_138;
  int8_t auStack_c8 [128];
  ulonglong uStack_48;
  
  uStack_138 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_228;
  uStack_208 = 0;
  if (((*(byte *)(param_2 + 0x1bd8) & 0x20) == 0) || (*(char *)(param_1 + 0x1507) == '\0')) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_228);
  }
  FUN_1800baa00(auStack_180);
  while( true ) {
    if (((int)uStack_170 < 1) ||
       (lVar2 = strstr(CONCAT44(uStack_174,iStack_178),&system_data_cfb8), lVar2 == 0)) {
      cVar1 = FUN_180624a00(auStack_180);
      if (cVar1 == '\0') {
        FUN_180624910(auStack_180);
      }
                    // WARNING: Subroutine does not return
      memset(auStack_c8,0,0x80);
    }
    iVar7 = 1;
    iVar4 = (int)lVar2 - iStack_178;
    if (uStack_170 < iVar4 + 1U) {
      iVar7 = uStack_170 - iVar4;
    }
    uVar6 = iVar4 + iVar7;
    if (uVar6 < uStack_170) {
      lVar5 = (longlong)(int)uVar6;
      do {
        *(int8_t *)((CONCAT44(uStack_174,iStack_178) - (longlong)iVar7) + lVar5) =
             *(int8_t *)(CONCAT44(uStack_174,iStack_178) + lVar5);
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 1;
      } while (uVar6 < uStack_170);
    }
    uStack_170 = uStack_170 - iVar7;
    *(int8_t *)((ulonglong)uStack_170 + CONCAT44(uStack_174,iStack_178)) = 0;
    uVar3 = FUN_180627910(&puStack_1a0,&system_data_e2c8);
    FUN_1806288c0(auStack_180,(int)lVar2 - iStack_178,uVar3);
    puStack_1a0 = &UNK_180a3c3e0;
    if (lStack_198 != 0) break;
    lStack_198 = 0;
    uStack_188 = 0;
    puStack_1a0 = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




