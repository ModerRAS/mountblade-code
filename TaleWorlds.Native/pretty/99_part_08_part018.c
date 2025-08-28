#include "TaleWorlds.Native.Split.h"

// 99_part_08_part018.c - 5 个函数

// 函数: void FUN_1804f17b0(longlong param_1,longlong param_2,int32_t *param_3)
void FUN_1804f17b0(longlong param_1,longlong param_2,int32_t *param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int8_t uVar7;
  uint64_t uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  ulonglong uVar15;
  int32_t uStack_128;
  int32_t uStack_124;
  uint64_t uStack_120;
  int32_t uStack_118;
  uint64_t uStack_114;
  uint64_t uStack_10c;
  int32_t uStack_104;
  int32_t uStack_100;
  int8_t uStack_fc;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  uint64_t uStack_b8;
  int8_t uStack_b0;
  uint64_t uStack_ac;
  uint64_t uStack_a4;
  uint64_t uStack_9c;
  uint64_t uStack_94;
  uint64_t uStack_8c;
  int32_t uStack_84;
  uint64_t uStack_80;
  int8_t uStack_78;
  uint64_t uStack_74;
  int32_t uStack_6c;
  longlong *plStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  int8_t auStack_50 [24];
  ulonglong uVar14;
  
  uStack_58 = 0xfffffffffffffffe;
  uVar12 = 0;
  plStackX_10 = (longlong *)0x0;
  uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x2f0,0x10,3);
  plVar9 = (longlong *)FUN_1802e6b00(uVar8,3);
  if (plVar9 != (longlong *)0x0) {
    plStackX_8 = plVar9;
    (**(code **)(*plVar9 + 0x28))(plVar9);
  }
  plStackX_8 = (longlong *)0x0;
  uVar1 = *(uint *)((longlong)plVar9 + 0x2ac);
  *(uint *)((longlong)plVar9 + 0x2ac) = uVar1 | 0x2660000;
  plStackX_10 = plVar9;
  FUN_1802ee810(plVar9,uVar1);
  FUN_1802ee990(plVar9,uVar1);
  uVar8 = *(uint64_t *)(param_1 + 0x18);
  pplStackX_18 = &plStackX_8;
  plStackX_8 = plVar9;
  (**(code **)(*plVar9 + 0x28))(plVar9);
  uVar15 = 0;
  FUN_180198b90(uVar8,&plStackX_8,1,1,0,1,0);
  *(int8_t *)((longlong)plVar9 + 0x2e4) = 1;
  uVar14 = uVar12;
  if (plVar9[0x39] - plVar9[0x38] >> 3 != 0) {
    do {
      iVar13 = (int)uVar14;
      FUN_1802e8580(*(uint64_t *)(uVar12 + plVar9[0x38]),1);
      uVar12 = uVar12 + 8;
      uVar14 = (ulonglong)(iVar13 + 1U);
    } while ((ulonglong)(longlong)(int)(iVar13 + 1U) < (ulonglong)(plVar9[0x39] - plVar9[0x38] >> 3)
            );
  }
  uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x9b0,0x10,3);
  plVar10 = (longlong *)
            FUN_18053f6c0(uVar8,*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x3c0) + 0x10);
  pplStackX_18 = (longlong **)plVar10;
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10);
  }
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(int32_t *)(plVar10 + 0x124) = *param_3;
  *(int32_t *)((longlong)plVar10 + 0x924) = uVar4;
  *(int32_t *)(plVar10 + 0x125) = uVar5;
  *(int32_t *)((longlong)plVar10 + 0x92c) = uVar6;
  plVar2 = *(longlong **)(param_2 + 0x6d8);
  if (((plVar2 != (longlong *)0x0) && (plVar10 != plVar2)) &&
     (*(char *)((longlong)plVar2 + 0x8be) != '\0')) {
    FUN_18053fcb0(plVar2,1);
    uStack_60 = (int32_t)plVar2[0x127];
    plStack_68 = plVar2;
    FUN_1804dd4d0(plVar2[0x126] + 0x2b58,auStack_50,&plStack_68);
  }
  plStackX_8 = plVar10;
  (**(code **)(*plVar10 + 0x28))(plVar10);
  plStackX_8 = *(longlong **)(param_2 + 0x6d8);
  *(longlong **)(param_2 + 0x6d8) = plVar10;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x240,0x10,3);
  lVar11 = FUN_1802fb490(uVar8);
  FUN_1802eeb00(plVar9,lVar11);
  *(int32_t *)(lVar11 + 0x3c) = 0x3f800000;
  uStack_118 = 0;
  uStack_100 = 0x1000000;
  uStack_114 = 0x3f80000000000000;
  uStack_10c = 0xbe4ccccdbe4ccccd;
  uStack_104 = 0x3ecccccd;
  uStack_fc = 0;
  uStack_128 = 0;
  uStack_124 = 0xffffffff;
  uStack_120 = 0x10064;
  FUN_18051ec50(param_2,&uStack_128);
  uStack_128 = 1;
  FUN_18051ec50(param_2,&uStack_128);
  if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
    lVar3 = *(longlong *)(param_2 + 0x590);
    uStack_ac = 0xffffffffffffffff;
    uStack_80 = 0xffffffffffffffff;
    uStack_78 = 0xff;
    uStack_74 = 0;
    uStack_84 = 0xffffffff;
    uStack_a4 = 0;
    uStack_9c = 0;
    uStack_94 = 0;
    uStack_8c = 0;
    uStack_6c = 0x3f800000;
    uStack_b0 = 1;
    uStack_f8 = *(uint64_t *)(lVar3 + 0x2450);
    uStack_f0 = *(uint64_t *)(lVar3 + 0x2458);
    uStack_e8 = *(uint64_t *)(lVar3 + 0x2460);
    uStack_e0 = *(uint64_t *)(lVar3 + 0x2468);
    uStack_d8 = *(uint64_t *)(lVar3 + 0x2470);
    uStack_d0 = *(uint64_t *)(lVar3 + 0x2478);
    uStack_c8 = *(int32_t *)(lVar3 + 0x2480);
    uStack_c4 = *(int32_t *)(lVar3 + 0x2484);
    uStack_c0 = *(int32_t *)(lVar3 + 0x2488);
    uStack_bc = *(int32_t *)(lVar3 + 0x248c);
    uStack_b8 = *(uint64_t *)(lVar3 + 0x2490);
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_18055dcf0(&system_data_25a0,*(int32_t *)(param_2 + 0x10),9,&uStack_f8,uVar15,0);
    lVar3 = *(longlong *)(param_2 + 0x590);
    uStack_ac = 0xffffffffffffffff;
    uStack_80 = 0xffffffffffffffff;
    uStack_78 = 0xff;
    uStack_74 = 0;
    uStack_84 = 0xffffffff;
    uStack_a4 = 0;
    uStack_9c = 0;
    uStack_94 = 0;
    uStack_8c = 0;
    uStack_6c = 0x3f800000;
    uStack_b0 = 1;
    uStack_f8 = *(uint64_t *)(lVar3 + 0x2498);
    uStack_f0 = *(uint64_t *)(lVar3 + 0x24a0);
    uStack_e8 = *(uint64_t *)(lVar3 + 0x24a8);
    uStack_e0 = *(uint64_t *)(lVar3 + 0x24b0);
    uStack_d8 = *(uint64_t *)(lVar3 + 0x24b8);
    uStack_d0 = *(uint64_t *)(lVar3 + 0x24c0);
    uStack_c8 = *(int32_t *)(lVar3 + 0x24c8);
    uStack_c4 = *(int32_t *)(lVar3 + 0x24cc);
    uStack_c0 = *(int32_t *)(lVar3 + 0x24d0);
    uStack_bc = *(int32_t *)(lVar3 + 0x24d4);
    uStack_b8 = *(uint64_t *)(lVar3 + 0x24d8);
    FUN_18055dcf0(&system_data_25a0,*(int32_t *)(param_2 + 0x10),0,&uStack_f8,
                  uVar15 & 0xffffffffffffff00,0);
  }
  FUN_1802fa090(lVar11,*(uint64_t *)
                        ((longlong)*(int *)(*(longlong *)(param_2 + 0x590) + 0xac) * 0xe0 + 0x58 +
                        _DAT_180c95fb0));
  FUN_180544930(plVar10,plVar9);
  FUN_180544640(plVar10,0);
  lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x6d8) + 0x8a8) + 0x260);
  *(longlong *)(param_2 + 0x658) = lVar11;
  *(int32_t *)(param_2 + 0x668) = *(int32_t *)(*(longlong *)(param_2 + 0x660) + 0x3ec4);
  *(uint64_t *)(param_2 + 0x660) = *(uint64_t *)(*(longlong *)(param_2 + 0x8d8) + 0x18);
  if (*(longlong *)(param_2 + 0x738) != 0) {
    if ((lVar11 == 0) || (2 < (ushort)(*(short *)(lVar11 + 0x40) - 2U))) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    *(int8_t *)(*(longlong *)(param_2 + 0x738) + 0x198) = uVar7;
  }
  FUN_180530ca0(param_2,0);
  (**(code **)(*plVar10 + 0x38))(plVar10);
  (**(code **)(*plVar9 + 0x38))(plVar9);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f1c90(longlong param_1,int param_2,char param_3)
void FUN_1804f1c90(longlong param_1,int param_2,char param_3)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x98d930);
  if (iVar2 != param_2) {
    if (((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x52ed94))) &&
       (-1 < *(short *)(param_1 + 0x52dda0 + (longlong)iVar2 * 2))) {
      lVar4 = (longlong)iVar2 * 0xa60 + param_1;
      lVar3 = *(longlong *)(lVar4 + 0x3778);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x8be) != '\0')) {
        FUN_180541010(lVar3,0x21);
        lVar3 = *(longlong *)(lVar4 + 0x3778);
      }
      if (((lVar3 != 0) && (*(char *)(lVar3 + 0x8be) != '\0')) &&
         (*(longlong *)(lVar4 + 0x36f8) != 0)) {
        puVar1 = (ushort *)(*(longlong *)(*(longlong *)(lVar3 + 0x8a8) + 0x260) + 0xa8);
        *puVar1 = *puVar1 & 0xfffd;
      }
      if (-1 < *(int *)(lVar4 + 0x3604)) {
        lVar4 = (longlong)*(int *)(lVar4 + 0x3604) * 0xa60;
        lVar3 = *(longlong *)(lVar4 + 0x3778 + param_1);
        if (((lVar3 != 0) && (*(char *)(lVar3 + 0x8be) != '\0')) &&
           (*(longlong *)(lVar4 + 0x36f8 + param_1) != 0)) {
          puVar1 = (ushort *)(*(longlong *)(*(longlong *)(lVar3 + 0x8a8) + 0x260) + 0xa8);
          *puVar1 = *puVar1 & 0xfffd;
        }
      }
    }
    *(int *)(param_1 + 0x98d930) = param_2;
    if (-1 < param_2) {
      if (param_3 != '\0') {
        FUN_1804f41b0(param_1);
        param_2 = *(int *)(param_1 + 0x98d930);
      }
      lVar4 = (longlong)param_2 * 0xa60;
      lVar3 = *(longlong *)(lVar4 + 0x3778 + param_1);
      if (((lVar3 != 0) && (*(char *)(lVar3 + 0x8be) != '\0')) &&
         (*(longlong *)(lVar4 + 0x36f8 + param_1) != 0)) {
        puVar1 = (ushort *)(*(longlong *)(*(longlong *)(lVar3 + 0x8a8) + 0x260) + 0xa8);
        *puVar1 = *puVar1 | 2;
      }
      iVar2 = *(int *)(lVar4 + 0x3604 + param_1);
      if (-1 < iVar2) {
        lVar4 = (longlong)iVar2 * 0xa60;
        lVar3 = *(longlong *)(lVar4 + 0x3778 + param_1);
        if (((lVar3 != 0) && (*(char *)(lVar3 + 0x8be) != '\0')) &&
           (*(longlong *)(lVar4 + 0x36f8 + param_1) != 0)) {
          puVar1 = (ushort *)(*(longlong *)(*(longlong *)(lVar3 + 0x8a8) + 0x260) + 0xa8);
          *puVar1 = *puVar1 | 2;
        }
      }
    }
    if (_DAT_180c92514 == 1) {
      *(uint64_t *)(param_1 + 0x8fd220) = 0;
      *(uint64_t *)(param_1 + 0x98d228) = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f1cdd(longlong param_1)
void FUN_1804f1cdd(longlong param_1)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBX;
  char unaff_BPL;
  longlong lVar4;
  int unaff_EDI;
  
  lVar4 = param_1 * 0xa60 + unaff_RBX;
  lVar3 = *(longlong *)(lVar4 + 0x3778);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x8be) != '\0')) {
    FUN_180541010(lVar3,0x21);
    lVar3 = *(longlong *)(lVar4 + 0x3778);
  }
  if (((lVar3 != 0) && (*(char *)(lVar3 + 0x8be) != '\0')) && (*(longlong *)(lVar4 + 0x36f8) != 0))
  {
    puVar1 = (ushort *)(*(longlong *)(*(longlong *)(lVar3 + 0x8a8) + 0x260) + 0xa8);
    *puVar1 = *puVar1 & 0xfffd;
  }
  if (-1 < *(int *)(lVar4 + 0x3604)) {
    lVar4 = (longlong)*(int *)(lVar4 + 0x3604) * 0xa60;
    lVar3 = *(longlong *)(lVar4 + 0x3778 + unaff_RBX);
    if (((lVar3 != 0) && (*(char *)(lVar3 + 0x8be) != '\0')) &&
       (*(longlong *)(lVar4 + 0x36f8 + unaff_RBX) != 0)) {
      puVar1 = (ushort *)(*(longlong *)(*(longlong *)(lVar3 + 0x8a8) + 0x260) + 0xa8);
      *puVar1 = *puVar1 & 0xfffd;
    }
  }
  *(int *)(unaff_RBX + 0x98d930) = unaff_EDI;
  if (-1 < unaff_EDI) {
    if (unaff_BPL != '\0') {
      FUN_1804f41b0();
      unaff_EDI = *(int *)(unaff_RBX + 0x98d930);
    }
    lVar4 = (longlong)unaff_EDI * 0xa60;
    lVar3 = *(longlong *)(lVar4 + 0x3778 + unaff_RBX);
    if (((lVar3 != 0) && (*(char *)(lVar3 + 0x8be) != '\0')) &&
       (*(longlong *)(lVar4 + 0x36f8 + unaff_RBX) != 0)) {
      puVar1 = (ushort *)(*(longlong *)(*(longlong *)(lVar3 + 0x8a8) + 0x260) + 0xa8);
      *puVar1 = *puVar1 | 2;
    }
    iVar2 = *(int *)(lVar4 + 0x3604 + unaff_RBX);
    if (-1 < iVar2) {
      lVar4 = (longlong)iVar2 * 0xa60;
      lVar3 = *(longlong *)(lVar4 + 0x3778 + unaff_RBX);
      if (((lVar3 != 0) && (*(char *)(lVar3 + 0x8be) != '\0')) &&
         (*(longlong *)(lVar4 + 0x36f8 + unaff_RBX) != 0)) {
        puVar1 = (ushort *)(*(longlong *)(*(longlong *)(lVar3 + 0x8a8) + 0x260) + 0xa8);
        *puVar1 = *puVar1 | 2;
      }
    }
  }
  if (_DAT_180c92514 == 1) {
    *(uint64_t *)(unaff_RBX + 0x8fd220) = 0;
    *(uint64_t *)(unaff_RBX + 0x98d228) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f1d57(uint64_t param_1,ushort param_2)
void FUN_1804f1d57(uint64_t param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  longlong in_RAX;
  longlong lVar4;
  longlong unaff_RBX;
  char unaff_BPL;
  int unaff_EDI;
  
  lVar3 = *(longlong *)(in_RAX * 0xa60 + 0x3778 + unaff_RBX);
  if (((lVar3 != 0) && (*(char *)(lVar3 + 0x8be) != '\0')) &&
     (*(longlong *)(in_RAX * 0xa60 + 0x36f8 + unaff_RBX) != 0)) {
    puVar1 = (ushort *)(*(longlong *)(*(longlong *)(lVar3 + 0x8a8) + 0x260) + 0xa8);
    *puVar1 = *puVar1 & param_2;
  }
  *(int *)(unaff_RBX + 0x98d930) = unaff_EDI;
  if (-1 < unaff_EDI) {
    if (unaff_BPL != '\0') {
      FUN_1804f41b0();
      unaff_EDI = *(int *)(unaff_RBX + 0x98d930);
    }
    lVar4 = (longlong)unaff_EDI * 0xa60;
    lVar3 = *(longlong *)(lVar4 + 0x3778 + unaff_RBX);
    if (((lVar3 != 0) && (*(char *)(lVar3 + 0x8be) != '\0')) &&
       (*(longlong *)(lVar4 + 0x36f8 + unaff_RBX) != 0)) {
      puVar1 = (ushort *)(*(longlong *)(*(longlong *)(lVar3 + 0x8a8) + 0x260) + 0xa8);
      *puVar1 = *puVar1 | 2;
    }
    iVar2 = *(int *)(lVar4 + 0x3604 + unaff_RBX);
    if (-1 < iVar2) {
      lVar4 = (longlong)iVar2 * 0xa60;
      lVar3 = *(longlong *)(lVar4 + 0x3778 + unaff_RBX);
      if (((lVar3 != 0) && (*(char *)(lVar3 + 0x8be) != '\0')) &&
         (*(longlong *)(lVar4 + 0x36f8 + unaff_RBX) != 0)) {
        puVar1 = (ushort *)(*(longlong *)(*(longlong *)(lVar3 + 0x8a8) + 0x260) + 0xa8);
        *puVar1 = *puVar1 | 2;
      }
    }
  }
  if (_DAT_180c92514 == 1) {
    *(uint64_t *)(unaff_RBX + 0x8fd220) = 0;
    *(uint64_t *)(unaff_RBX + 0x98d228) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f1e70(longlong param_1,int32_t param_2,char param_3)
void FUN_1804f1e70(longlong param_1,int32_t param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int32_t uVar8;
  int32_t auStackX_10 [2];
  int32_t uStack_50;
  longlong lStack_40;
  int32_t *puStack_38;
  void *puStack_30;
  code *pcStack_28;
  
  if ((param_3 == '\0') && (*(char *)(param_1 + 0x98d9d0) == '\0')) {
    if (*(char *)(param_1 + 0x87296c) == '\0') {
      uVar2 = (uint)(*(longlong *)(param_1 + 0x872950) - *(longlong *)(param_1 + 0x872948) >> 3);
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x872968);
    }
    auStackX_10[0] = param_2;
    if (*(int *)(_DAT_180c8a9c8 + 0xe0) == 0) {
      puStack_38 = auStackX_10;
      puStack_30 = &UNK_180502a60;
      pcStack_28 = FUN_1805029b0;
      uStack_50 = (int32_t)param_1;
      lStack_40 = param_1;
      uVar8 = FUN_18015b810(uStack_50,0,uVar2,1,0xffffffffffffffff,&lStack_40,0xfffffffffffffffe);
      puStack_30 = &UNK_180502970;
      pcStack_28 = FUN_1805028c0;
      lStack_40 = param_1;
      FUN_18015b810(uVar8,0,uVar2,1,0xffffffffffffffff,&lStack_40);
    }
    else if (0 < (int)uVar2) {
      lVar5 = 0;
      uVar3 = (ulonglong)uVar2;
      uVar7 = (ulonglong)uVar2;
      lVar4 = lVar5;
      do {
        lVar6 = param_1 + 0x86e988;
        if (*(char *)(param_1 + 0x87296c) == '\0') {
          lVar6 = *(longlong *)(param_1 + 0x872948);
        }
        lVar6 = *(longlong *)(lVar4 + lVar6);
        if ((((*(int *)(lVar6 + 0x560) == -1) && (*(int *)(lVar6 + 0x570) == 1)) &&
            (*(int *)(lVar6 + 0x568) == 1)) &&
           ((*(int *)(lVar6 + 0x720) == 0 && (cVar1 = func_0x00018052ae60(lVar6), cVar1 == '\0'))))
        {
          FUN_1805d0cd0(*(uint64_t *)(lVar6 + 0x6e0),param_2);
          param_2 = auStackX_10[0];
        }
        lVar4 = lVar4 + 8;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      do {
        lVar4 = param_1 + 0x86e988;
        if (*(char *)(param_1 + 0x87296c) == '\0') {
          lVar4 = *(longlong *)(param_1 + 0x872948);
        }
        lVar4 = *(longlong *)(lVar5 + lVar4);
        if (((*(int *)(lVar4 + 0x560) == -1) && (*(int *)(lVar4 + 0x570) == 1)) &&
           ((*(int *)(lVar4 + 0x568) == 1 &&
            ((*(int *)(lVar4 + 0x720) == 0 && (cVar1 = func_0x00018052ae60(lVar4), cVar1 == '\0'))))
           )) {
          FUN_180520c10(lVar4 + 0x4d8,*(uint64_t *)(lVar4 + 0x6e0));
        }
        lVar5 = lVar5 + 8;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}






