#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part023.c - 23 个函数

// 函数: void FUN_180066140(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180066140(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  longlong lVar2;
  void *puVar3;
  ulonglong uVar4;
  uint64_t uStack_88;
  longlong lStack_80;
  void *puStack_70;
  longlong lStack_68;
  uint uStack_60;
  uint64_t uStack_58;
  void *puStack_50;
  void *puStack_48;
  int32_t uStack_38;
  
  uStack_88 = 0;
  lStack_80 = 0;
  lVar2 = *param_1;
  puStack_70 = &UNK_180a3c3e0;
  uStack_58 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  uVar1 = *(uint *)(lVar2 + 0x10);
  uVar4 = (ulonglong)uVar1;
  if (*(longlong *)(lVar2 + 8) != 0) {
    FUN_1806277c0(&puStack_70,uVar4,param_3,param_4,1,0xfffffffffffffffe);
  }
  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lStack_68,*(uint64_t *)(lVar2 + 8),uVar4);
  }
  if (lStack_68 != 0) {
    *(int8_t *)(uVar4 + lStack_68) = 0;
  }
  uStack_60 = uVar1;
  uStack_58._4_4_ = *(uint *)(lVar2 + 0x1c);
  FUN_1806277c0(&puStack_70,1);
  *(int16_t *)((ulonglong)uStack_60 + lStack_68) = 0x5c;
  uStack_60 = 1;
  FUN_180627e10(&puStack_70,&puStack_50,param_3);
  puStack_70 = &UNK_180a3c3e0;
  if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_68 = 0;
  uStack_58 = (ulonglong)uStack_58._4_4_ << 0x20;
  puStack_70 = &UNK_18098bcb0;
  puVar3 = &DAT_18098bc73;
  if (puStack_48 != (void *)0x0) {
    puVar3 = puStack_48;
  }
  FUN_18062dee0(&uStack_88,puVar3,&UNK_1809fe80c,param_4,0);
  FUN_1800ae730(param_2,&uStack_88);
  if (lStack_80 != 0) {
    fclose();
    lStack_80 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  (**(code **)(**(longlong **)param_1[1] + 0x40))(*(longlong **)param_1[1],&puStack_50);
  puStack_50 = &UNK_180a3c3e0;
  if (puStack_48 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_48 = (void *)0x0;
  uStack_38 = 0;
  puStack_50 = &UNK_18098bcb0;
  if (lStack_80 != 0) {
    fclose();
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800665ec)
// WARNING: Removing unreachable block (ram,0x0001800665f5)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180066320(uint64_t param_1,uint64_t param_2,char param_3,char param_4,
void FUN_180066320(uint64_t param_1,uint64_t param_2,char param_3,char param_4,
                  uint64_t param_5)

{
  char cVar1;
  int iVar2;
  int32_t uVar3;
  int iVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  int8_t auStack_1f8 [32];
  void *puStack_1d8;
  void *puStack_1d0;
  void *puStack_1c8;
  void *puStack_1b8;
  longlong lStack_1b0;
  int32_t uStack_1a8;
  uint64_t uStack_1a0;
  void *puStack_198;
  longlong lStack_190;
  int32_t uStack_180;
  void *puStack_178;
  void *puStack_170;
  int32_t uStack_168;
  ulonglong uStack_160;
  void *puStack_158;
  void *puStack_150;
  int32_t uStack_148;
  ulonglong uStack_140;
  void *puStack_138;
  longlong lStack_130;
  int32_t uStack_120;
  void *puStack_110;
  longlong lStack_108;
  int32_t uStack_f8;
  void *puStack_f0;
  longlong lStack_e8;
  int32_t uStack_d8;
  void *puStack_d0;
  void *puStack_c8;
  int32_t uStack_b8;
  uint64_t uStack_b0;
  void **ppuStack_a8;
  int32_t auStack_98 [14];
  ulonglong uStack_60;
  ulonglong uStack_48;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_1f8;
  cVar1 = (**(code **)**(uint64_t **)(_DAT_180c8ed08 + 0x18))();
  iVar4 = 0;
  if (cVar1 != '\0') {
    FUN_180627910(&puStack_1b8,&DAT_180c84870);
    FUN_180065f00(&puStack_1b8,0);
    puStack_1b8 = &UNK_180a3c3e0;
    if (lStack_1b0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_1b0 = 0;
    uStack_1a0 = (ulonglong)uStack_1a0._4_4_ << 0x20;
    puStack_1b8 = &UNK_18098bcb0;
    goto LAB_180066971;
  }
  if (((DAT_180c82843 != '\0') || (DAT_180c82850 != '\0')) ||
     (*(int *)(_DAT_180c868b0 + 0x10e0) == 1)) {
    FUN_1800622d0(_DAT_180c86928,5,3,&UNK_1809fea68);
    FUN_1800623e0();
    goto LAB_180066971;
  }
  if ((param_3 == '\0') && (DAT_180c82851 == '\0')) {
    if (((DAT_180c82860 == '\0') || (iVar2 = IsDebuggerPresent(), iVar2 != 0)) &&
       (DAT_180c82842 == '\0')) {
      uVar3 = MessageBoxA(0,&UNK_1809feaa0,&UNK_1809feb24,0x40004);
      switch(uVar3) {
      case 1:
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
      if (iVar4 == 4) goto LAB_18006650a;
    }
    else if (*(char *)(_DAT_180c86928 + 0x18) != '\0') {
      puStack_1c8 = &UNK_1809feaa0;
      puStack_1d0 = &UNK_1809feb24;
      puStack_1d8 = &UNK_180a04f08;
      FUN_1800623b0(_DAT_180c86928,3,0xffffffff00000000,0xd);
    }
    FUN_1800622d0(_DAT_180c86928,5,3,&UNK_1809feb28);
  }
  else {
LAB_18006650a:
    FUN_180052070(&puStack_198);
    uVar5 = FUN_180627910(&puStack_138,&DAT_1809feb50);
    iVar4 = FUN_180628d60(&puStack_198,uVar5);
    puStack_138 = &UNK_180a3c3e0;
    if (lStack_130 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_130 = 0;
    uStack_120 = 0;
    puStack_138 = &UNK_18098bcb0;
    FUN_180629a40(&puStack_198,&puStack_d0,iVar4 + 7,0xffffffff);
    puStack_1b8 = &UNK_180a3c3e0;
    uStack_1a0 = 0;
    lStack_1b0 = 0;
    uStack_1a8 = 0;
    puStack_158 = &UNK_180a3c3e0;
    uStack_140 = 0;
    puStack_150 = (void *)0x0;
    uStack_148 = 0;
    puStack_178 = &UNK_180a3c3e0;
    uStack_160 = 0;
    puStack_170 = (void *)0x0;
    uStack_168 = 0;
    uVar6 = FUN_180623ce0();
    FUN_180628040(&puStack_158,&UNK_1809fe8f8,uVar6 / 0x100000 & 0xffffffff);
    auStack_98[0] = 0x48;
    uVar5 = GetCurrentProcess();
    iVar4 = K32GetProcessMemoryInfo(uVar5,auStack_98,0x48);
    uVar6 = 0;
    if (iVar4 != 0) {
      uVar6 = uStack_60;
    }
    FUN_180628040(&puStack_178,&UNK_1809fe8f8,uVar6 / 0x100000 & 0xffffffff);
    FUN_1800622d0(_DAT_180c86928,5,3,&DAT_1809fcc18);
    puStack_1d8 = &DAT_18098bc73;
    if (puStack_150 != (void *)0x0) {
      puStack_1d8 = puStack_150;
    }
    FUN_1800622d0(_DAT_180c86928,5,3,&UNK_1809feb58);
    puStack_1d8 = &DAT_18098bc73;
    if (puStack_170 != (void *)0x0) {
      puStack_1d8 = puStack_170;
    }
    FUN_1800622d0(_DAT_180c86928,5,3,&UNK_1809feb70);
    puStack_1d8 = &DAT_18098bc73;
    FUN_1800622d0(_DAT_180c86928,5,3,&UNK_1809feb88);
    puStack_1d8 = &DAT_18098bc73;
    if (puStack_c8 != (void *)0x0) {
      puStack_1d8 = puStack_c8;
    }
    FUN_1800622d0(_DAT_180c86928,5,3,&UNK_1809feba8);
    puStack_1d8 = &UNK_1809febc8;
    if (param_3 != '\0') {
      puStack_1d8 = &UNK_1809febc0;
    }
    FUN_1800622d0(_DAT_180c86928,5,3,&UNK_1809febd8);
    FUN_1800623e0();
    if (((param_4 == '\0') || (DAT_180c82844 != '\0')) || (*(int *)(_DAT_180c868b0 + 0x1150) != 0))
    {
      FUN_1800622d0(_DAT_180c86928,5,3,&UNK_1809febf0);
      FUN_1800623e0();
    }
    else {
      FUN_180625690(&puStack_198);
    }
    ppuStack_a8 = &puStack_138;
    uVar5 = FUN_180627ae0(&puStack_138,&puStack_198);
    FUN_180063820(uVar5);
    FUN_180063b30(&puStack_198,param_5);
    FUN_180063cf0(&puStack_198);
    FUN_1800ba940(&puStack_138);
    FUN_180627e10(&puStack_138,&puStack_f0,&UNK_1809fe848);
    FUN_180627e10(&puStack_198,&puStack_110,&UNK_1809fe848);
    FUN_18062db60(&puStack_110,&puStack_f0);
    puStack_110 = &UNK_180a3c3e0;
    if (lStack_108 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_108 = 0;
    uStack_f8 = 0;
    puStack_110 = &UNK_18098bcb0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_e8 = 0;
    uStack_d8 = 0;
    puStack_f0 = &UNK_18098bcb0;
    puStack_138 = &UNK_180a3c3e0;
    if (lStack_130 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_130 = 0;
    uStack_120 = 0;
    puStack_138 = &UNK_18098bcb0;
    FUN_180064010(&puStack_198);
    FUN_1800649d0(&puStack_198);
    FUN_180065160(&puStack_198);
    FUN_180065d50(&puStack_198,param_2,param_3,0);
    puStack_178 = &UNK_180a3c3e0;
    if (puStack_170 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_170 = (void *)0x0;
    uStack_160 = uStack_160 & 0xffffffff00000000;
    puStack_178 = &UNK_18098bcb0;
    puStack_158 = &UNK_180a3c3e0;
    if (puStack_150 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_150 = (void *)0x0;
    uStack_140 = uStack_140 & 0xffffffff00000000;
    puStack_158 = &UNK_18098bcb0;
    lStack_1b0 = 0;
    uStack_1a0 = uStack_1a0 & 0xffffffff00000000;
    puStack_1b8 = &UNK_18098bcb0;
    puStack_d0 = &UNK_180a3c3e0;
    if (puStack_c8 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_c8 = (void *)0x0;
    uStack_b8 = 0;
    puStack_d0 = &UNK_18098bcb0;
    puStack_198 = &UNK_180a3c3e0;
    if (lStack_190 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_190 = 0;
    uStack_180 = 0;
    puStack_198 = &UNK_18098bcb0;
  }
LAB_180066971:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_1f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800669c0(uint64_t param_1,uint64_t param_2,char param_3,uint64_t param_4,
void FUN_1800669c0(uint64_t param_1,uint64_t param_2,char param_3,uint64_t param_4,
                  uint64_t param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  int iVar6;
  longlong lVar7;
  void *puStack_a0;
  uint64_t *puStack_98;
  int32_t uStack_90;
  uint64_t uStack_88;
  int8_t auStack_80 [72];
  
  cVar2 = (**(code **)**(uint64_t **)(_DAT_180c8ed08 + 0x18))();
  if (cVar2 == '\0') {
    if ((DAT_180c82843 == '\0') && (*(int *)(_DAT_180c868b0 + 0x10e0) != 1)) {
      iVar3 = 0;
      if ((param_3 != '\0') || (DAT_180c82851 != '\0')) {
LAB_180066bf4:
        FUN_180052070(auStack_80);
        puStack_a0 = &UNK_180a3c3e0;
        uStack_88 = 0;
        puStack_98 = (uint64_t *)0x0;
        uStack_90 = 0;
        puVar5 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
        *(int8_t *)puVar5 = 0;
        puStack_98 = puVar5;
        uVar4 = FUN_18064e990(puVar5);
        uStack_88 = CONCAT44(uStack_88._4_4_,uVar4);
        *puVar5 = 0x73656873617263;
        uStack_90 = 7;
        FUN_180628d60(auStack_80,&puStack_a0);
        puStack_a0 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar5);
      }
      if (((DAT_180c82860 == '\0') || (iVar6 = IsDebuggerPresent(), iVar6 != 0)) &&
         (DAT_180c82842 == '\0')) {
        uVar4 = MessageBoxA(0,&UNK_1809feaa0,&UNK_1809feb24,0x40004);
        switch(uVar4) {
        case 1:
          break;
        default:
          iVar3 = 1;
          break;
        case 4:
          iVar3 = 2;
          break;
        case 5:
          iVar3 = 3;
          break;
        case 6:
          iVar3 = 4;
          break;
        case 7:
          iVar3 = 5;
        }
        if (iVar3 == 4) goto LAB_180066bf4;
      }
      else if (*(char *)(_DAT_180c86928 + 0x18) != '\0') {
        FUN_1800623b0(_DAT_180c86928,3,0xffffffff00000000,0xd,&UNK_180a04f08,&UNK_1809feb24,
                      &UNK_1809feaa0);
      }
      FUN_1800622d0(_DAT_180c86928,5,3,&UNK_1809feb28);
    }
    else {
      FUN_1800622d0(_DAT_180c86928,5,3,&UNK_1809fea68);
      FUN_1800623e0();
    }
  }
  else {
    puStack_a0 = &UNK_180a3c3e0;
    uStack_88 = 0;
    puStack_98 = (uint64_t *)0x0;
    uStack_90 = 0;
    lVar1 = -1;
    do {
      lVar7 = lVar1;
      lVar1 = lVar7 + 1;
    } while (*(char *)(lVar7 + 0x180c84871) != '\0');
    if ((int)(lVar7 + 1) != 0) {
      iVar6 = (int)lVar7 + 2;
      iVar3 = iVar6;
      if (iVar6 < 0x10) {
        iVar3 = 0x10;
      }
      puStack_98 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar3,0x13);
      *(int8_t *)puStack_98 = 0;
      uVar4 = FUN_18064e990(puStack_98);
      uStack_88 = CONCAT44(uStack_88._4_4_,uVar4);
                    // WARNING: Subroutine does not return
      memcpy(puStack_98,&DAT_180c84870,iVar6);
    }
    uStack_90 = 0;
    FUN_180065f00(&puStack_a0,param_5);
    puStack_a0 = &UNK_180a3c3e0;
    if (puStack_98 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}





// 函数: void FUN_180066dd0(void)
void FUN_180066dd0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180066df0(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_180066df0(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  longlong lVar6;
  
  puVar4 = (uint64_t *)param_1[1];
  lVar1 = 0;
  if (puVar4 < (uint64_t *)param_1[2]) {
    param_1[1] = (longlong)(puVar4 + 4);
    *puVar4 = &UNK_18098bcb0;
    puVar4[1] = 0;
    *(int32_t *)(puVar4 + 2) = 0;
    *puVar4 = &UNK_180a3c3e0;
    puVar4[3] = 0;
    puVar4[1] = 0;
    *(int32_t *)(puVar4 + 2) = 0;
    *(int32_t *)(puVar4 + 2) = *(int32_t *)(param_2 + 0x10);
    puVar4[1] = *(uint64_t *)(param_2 + 8);
    *(int32_t *)((longlong)puVar4 + 0x1c) = *(int32_t *)(param_2 + 0x1c);
    *(int32_t *)(puVar4 + 3) = *(int32_t *)(param_2 + 0x18);
    *(int32_t *)(param_2 + 0x10) = 0;
    *(uint64_t *)(param_2 + 8) = 0;
    *(uint64_t *)(param_2 + 0x18) = 0;
    return;
  }
  lVar3 = *param_1;
  lVar6 = (longlong)puVar4 - lVar3 >> 5;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) goto LAB_180066ec4;
  }
  lVar1 = FUN_18062b420(_DAT_180c8ed18,lVar6 << 5,(char)param_1[3],param_4,0xfffffffffffffffe);
  puVar4 = (uint64_t *)param_1[1];
  lVar3 = *param_1;
LAB_180066ec4:
  puVar2 = (uint64_t *)FUN_180059780(lVar3,puVar4,lVar1);
  *puVar2 = &UNK_18098bcb0;
  puVar2[1] = 0;
  *(int32_t *)(puVar2 + 2) = 0;
  *puVar2 = &UNK_180a3c3e0;
  puVar2[3] = 0;
  puVar2[1] = 0;
  *(int32_t *)(puVar2 + 2) = 0;
  *(int32_t *)(puVar2 + 2) = *(int32_t *)(param_2 + 0x10);
  puVar2[1] = *(uint64_t *)(param_2 + 8);
  *(int32_t *)((longlong)puVar2 + 0x1c) = *(int32_t *)(param_2 + 0x1c);
  *(int32_t *)(puVar2 + 3) = *(int32_t *)(param_2 + 0x18);
  *(int32_t *)(param_2 + 0x10) = 0;
  *(uint64_t *)(param_2 + 8) = 0;
  *(uint64_t *)(param_2 + 0x18) = 0;
  puVar4 = (uint64_t *)param_1[1];
  puVar5 = (uint64_t *)*param_1;
  if (puVar5 != puVar4) {
    do {
      (**(code **)*puVar5)(puVar5,0);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar4);
    puVar5 = (uint64_t *)*param_1;
  }
  if (puVar5 == (uint64_t *)0x0) {
    *param_1 = lVar1;
    param_1[1] = (longlong)(puVar2 + 4);
    param_1[2] = lVar6 * 0x20 + lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}



longlong FUN_180066f90(longlong param_1,ulonglong param_2,uint64_t param_3,char *param_4,
                      ulonglong param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_5 <= param_2) {
    if (param_5 == 0) {
      return 0;
    }
    cVar1 = *param_4;
    lVar4 = (param_1 - param_5) + param_2;
    for (lVar3 = memchr(param_1,(int)cVar1,(lVar4 + 1) - param_1); lVar3 != 0;
        lVar3 = memchr(lVar3 + 1,(int)cVar1,(lVar4 + 1) - (lVar3 + 1))) {
      iVar2 = memcmp(lVar3,param_4,param_5);
      if (iVar2 == 0) {
        return lVar3 - param_1;
      }
    }
  }
  return -1;
}





// 函数: void FUN_180067050(void)
void FUN_180067050(void)

{
  code *pcVar1;
  
  __Xout_of_range_std__YAXPEBD_Z(&UNK_1809fec28);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}





// 函数: void FUN_180067070(longlong *param_1)
void FUN_180067070(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = param_1[3];
  if (0xf < uVar1) {
    lVar2 = *param_1;
    lVar3 = lVar2;
    if (0xfff < uVar1 + 1) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar2 - lVar3,uVar1 + 0x28);
      }
    }
    free(lVar3);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int8_t *)param_1 = 0;
  return;
}





// 函数: void FUN_1800670d0(void)
void FUN_1800670d0(void)

{
  FUN_180067070();
  return;
}





// 函数: void FUN_1800670f0(void)
void FUN_1800670f0(void)

{
  code *pcVar1;
  
  __Xlength_error_std__YAXPEBD_Z(&UNK_1809fec40);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}





// 函数: void FUN_180067110(ulonglong param_1)
void FUN_180067110(ulonglong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (0xfff < param_1) {
    uVar4 = param_1 + 0x27;
    if (uVar4 <= param_1) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar3 = FUN_1808fc418(uVar4);
    if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    *(longlong *)((lVar3 + 0x27U & 0xffffffffffffffe0) - 8) = lVar3;
    return;
  }
  if (param_1 == 0) {
    return;
  }
  do {
    lVar3 = malloc(param_1);
    if (lVar3 != 0) {
      return;
    }
    iVar2 = _callnewh(param_1);
  } while (iVar2 != 0);
  if (param_1 == 0xffffffffffffffff) {
    FUN_1808fd8b4();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_1808fd894();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}





// 函数: void FUN_180067170(longlong param_1,ulonglong param_2)
void FUN_180067170(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1;
  if (0xfff < param_2) {
    lVar1 = *(longlong *)(param_1 + -8);
    if (0x1f < (param_1 - lVar1) - 8U) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn(param_1 - lVar1,param_2 + 0x27);
    }
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(lVar1);
  return;
}





// 函数: void FUN_1800671b0(uint64_t *param_1,uint64_t param_2,ulonglong param_3)
void FUN_1800671b0(uint64_t *param_1,uint64_t param_2,ulonglong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  uint64_t uVar3;
  ulonglong uVar4;
  uint64_t *puVar5;
  ulonglong uVar6;
  
  uVar1 = param_1[3];
  if (param_3 <= uVar1) {
    puVar5 = param_1;
    if (0xf < uVar1) {
      puVar5 = (uint64_t *)*param_1;
    }
    param_1[2] = param_3;
                    // WARNING: Subroutine does not return
    memmove(puVar5);
  }
  if (param_3 < 0x8000000000000000) {
    uVar4 = param_3 | 0xf;
    uVar6 = 0x7fffffffffffffff;
    if (((uVar4 < 0x8000000000000000) && (uVar1 <= 0x7fffffffffffffff - (uVar1 >> 1))) &&
       (uVar1 = (uVar1 >> 1) + uVar1, uVar6 = uVar4, uVar4 < uVar1)) {
      uVar6 = uVar1;
    }
    uVar3 = FUN_180067110(uVar6 + 1);
    param_1[2] = param_3;
    param_1[3] = uVar6;
                    // WARNING: Subroutine does not return
    memcpy(uVar3,param_2,param_3);
  }
  FUN_1800670f0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}





// 函数: void FUN_18006720b(ulonglong param_1)
void FUN_18006720b(ulonglong param_1)

{
  ulonglong uVar1;
  uint64_t uVar2;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  uint64_t unaff_RSI;
  ulonglong unaff_RDI;
  
  param_1 = param_1 | 0xf;
  if (((param_1 <= unaff_RDI) && (unaff_RBP <= unaff_RDI - (unaff_RBP >> 1))) &&
     (uVar1 = (unaff_RBP >> 1) + unaff_RBP, unaff_RDI = param_1, param_1 < uVar1)) {
    unaff_RDI = uVar1;
  }
  uVar2 = FUN_180067110(unaff_RDI + 1);
  *(uint64_t *)(unaff_RBX + 0x10) = unaff_RSI;
  *(ulonglong *)(unaff_RBX + 0x18) = unaff_RDI;
                    // WARNING: Subroutine does not return
  memcpy(uVar2);
}





// 函数: void FUN_18006729a(void)
void FUN_18006729a(void)

{
  return;
}





// 函数: void FUN_1800672b0(void)
void FUN_1800672b0(void)

{
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}





// 函数: void FUN_1800672b7(void)
void FUN_1800672b7(void)

{
  code *pcVar1;
  
  FUN_1800670f0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800672c0(longlong param_1)
void FUN_1800672c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  longlong *plVar6;
  uint auStackX_8 [2];
  longlong lStackX_10;
  longlong lStackX_18;
  longlong *plStackX_20;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  void *puStack_50;
  void *puStack_48;
  
  uVar4 = GetCurrentThread();
  SetThreadPriority(uVar4,0);
  auStackX_8[0] = 0;
  lStackX_18 = 0;
  lStackX_10 = 0;
  while( true ) {
    while( true ) {
      iVar3 = GetQueuedCompletionStatus
                        (*(uint64_t *)(param_1 + 0x28),auStackX_8,&lStackX_18,&lStackX_10,
                         0xffffffff);
      lVar2 = lStackX_10;
      if (iVar3 == 0) break;
      if (lStackX_18 == -1) {
        return;
      }
      *(longlong *)(lStackX_10 + 0x1c8) =
           *(longlong *)(lStackX_10 + 0x1c8) - (ulonglong)auStackX_8[0];
      uVar4 = _DAT_180c86940;
      if (*(longlong *)(lStackX_10 + 0x1c8) < 1) {
        lVar1 = *(longlong *)(param_1 + 0x20);
        uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x40,8,10);
        plStackX_20 = (longlong *)&uStack_60;
        puStack_50 = &UNK_180068e70;
        puStack_48 = &UNK_180068e60;
        uStack_70 = (int32_t)uVar4;
        uStack_6c = (int32_t)((ulonglong)uVar4 >> 0x20);
        uStack_68 = (int32_t)lVar2;
        uStack_64 = (int32_t)((ulonglong)lVar2 >> 0x20);
        uStack_60 = uStack_70;
        uStack_5c = uStack_6c;
        uStack_58 = uStack_68;
        uStack_54 = uStack_64;
        plVar6 = (longlong *)FUN_180069e10(uVar5,&uStack_60);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x28))(plVar6);
        }
        uVar4 = _DAT_180c82868;
        plStackX_20 = plVar6;
        if (*(char *)(lVar1 + 0x368) == '\0') {
          plVar6[3] = -4;
          (**(code **)(*plVar6 + 0x28))(plVar6);
          FUN_18005e110(uVar4,&plStackX_20);
        }
        else {
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x28))(plVar6);
          }
          FUN_18005e450(uVar4,&plStackX_20);
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6);
        }
      }
    }
    iVar3 = GetLastError();
    if (iVar3 == 0x2df) {
      return;
    }
    if (lStackX_10 == 0) break;
    FUN_180067480(*(uint64_t *)(param_1 + 0x20));
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&UNK_1809fec50,iVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180067480(uint64_t param_1,longlong param_2)
void FUN_180067480(uint64_t param_1,longlong param_2)

{
  void *puVar1;
  void *puVar2;
  
  puVar1 = *(void **)(*(longlong *)(param_2 + 0x1f8) + 0x10);
  puVar2 = &DAT_18098bc73;
  if (puVar1 != (void *)0x0) {
    puVar2 = puVar1;
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&UNK_1809fec70,puVar2);
}





// 函数: void FUN_180067810(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180067810(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(param_1,0,0,param_4,0xfffffffffffffffe);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180067840(longlong *param_1)
void FUN_180067840(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong lStackX_8;
  uint64_t *puStackX_10;
  longlong lStack_c8;
  longlong lStack_c0;
  uint64_t uStack_b8;
  int16_t uStack_b0;
  int8_t uStack_ae;
  int8_t auStack_88 [64];
  uint64_t uStack_48;
  uint64_t uStack_40;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar3 = param_1[1];
  iVar9 = *(int *)(lVar3 + 0x138) - *(int *)(lVar3 + 0x1d8);
  lVar4 = *(longlong *)(lVar3 + 0x150);
  plVar8 = (longlong *)0x0;
  if (lVar4 != 0) {
    uVar5 = *(uint64_t *)(lVar3 + 0x158);
    uVar6 = *(uint64_t *)(lVar3 + 0x1e0);
    lStackX_8 = *(longlong *)(lVar3 + 0x140);
    lVar3 = *(longlong *)(lVar3 + 0x1f0);
    if (lVar4 - 2U < 2) {
      plVar8 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x10,8,3);
      *plVar8 = (longlong)&UNK_1809ff4e0;
      *(bool *)(plVar8 + 1) = lVar4 == 3;
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,auStack_88,iVar9 + lVar3,lStackX_8,uVar6,uVar5);
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar8);
  }
  uStack_ae = 3;
  lVar3 = param_1[1];
  uStack_b8 = *(uint64_t *)(lVar3 + 0x140);
  lStack_c8 = (longlong)iVar9 + *(longlong *)(lVar3 + 0x1f0);
  uStack_b0 = 1;
  lStack_c0 = lStack_c8;
  (**(code **)(lVar3 + 0x180))(&lStack_c8,*(longlong *)(lVar3 + 0x1f8) + 8);
  if (((char)uStack_b0 == '\0') && (lStack_c8 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  LOCK();
  piVar1 = (int *)(*(longlong *)(param_1[1] + 0x1f8) + 0x120);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  lStackX_8 = *(longlong *)(param_1[1] + 0x1a8);
  lVar3 = *param_1;
  FUN_180069cc0(lVar3 + 0x10,&lStackX_8);
  iVar9 = _Cnd_signal(lVar3 + 0x278);
  if (iVar9 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar9);
  }
  puStackX_10 = *(uint64_t **)(param_1[1] + 0x1b0);
  lVar3 = *param_1;
  FUN_180069cc0(lVar3 + 0x10,&puStackX_10);
  iVar9 = _Cnd_signal(lVar3 + 0x278);
  if (iVar9 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar9);
  }
  lVar3 = *(longlong *)(param_1[1] + 0x1c0);
  if (*(longlong *)(param_1[1] + 0x1b8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar3);
  }
  lVar3 = param_1[1];
  if (*(longlong *)(lVar3 + 0x150) == 0) {
    if (*(longlong *)(lVar3 + 0x148) == 0) {
      plVar8 = *(longlong **)(lVar3 + 0x140);
    }
  }
  else {
    plVar8 = *(longlong **)(lVar3 + 0x140);
    if (*(longlong *)(lVar3 + 0x148) == 0) {
      plVar8 = (longlong *)((longlong)plVar8 + *(longlong *)(lVar3 + 0x158));
    }
  }
  LOCK();
  plVar2 = (longlong *)(*(longlong *)(*param_1 + 8) + 0x3f0);
  *plVar2 = *plVar2 - (longlong)plVar8;
  UNLOCK();
  LOCK();
  piVar1 = (int *)(*(longlong *)(*param_1 + 8) + 0x3f8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  lVar4 = *param_1;
  puVar7 = (uint64_t *)param_1[1];
  lVar3 = lVar4 + 0x200380;
  uStack_40 = 0x180068808;
  lStackX_8 = lVar3;
  puStackX_10 = puVar7;
  iVar9 = _Mtx_lock(lVar3);
  if (iVar9 != 0) {
    uStack_40 = 0x180068815;
    __Throw_C_error_std__YAXH_Z(iVar9);
  }
  uStack_40 = 0x18006881f;
  FUN_180069530(puVar7 + 4);
  *puVar7 = *(uint64_t *)(lVar4 + 0x200378);
  *(uint64_t **)(lVar4 + 0x200378) = puVar7;
  uStack_40 = 0x18006883a;
  iVar9 = _Mtx_unlock(lVar3);
  if (iVar9 != 0) {
    uStack_40 = 0x180068847;
    __Throw_C_error_std__YAXH_Z(iVar9);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180067bc0(uint64_t *param_1)
void FUN_180067bc0(uint64_t *param_1)

{
  int8_t auStack_b8 [48];
  uint64_t *puStack_88;
  uint64_t uStack_70;
  uint64_t *puStack_68;
  ulonglong uStack_30;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  puStack_68 = param_1;
  FUN_18006b940();
  *param_1 = &UNK_1809fee70;
  puStack_88 = param_1 + 0x6e;
                    // WARNING: Subroutine does not return
  memset(puStack_88,0,0x200000);
}





// 函数: void FUN_180067f00(void)
void FUN_180067f00(void)

{
  _Mtx_destroy_in_situ();
  return;
}





// 函数: void FUN_180067f30(void)
void FUN_180067f30(void)

{
  _Mtx_destroy_in_situ();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



