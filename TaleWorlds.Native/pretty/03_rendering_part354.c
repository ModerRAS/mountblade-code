#include "TaleWorlds.Native.Split.h"

// 03_rendering_part354.c - 13 个函数

// 函数: void FUN_18045c5c0(longlong param_1)
void FUN_18045c5c0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  int32_t uVar3;
  longlong lVar4;
  int8_t auStack_178 [32];
  void *puStack_158;
  int32_t *puStack_150;
  int32_t uStack_148;
  uint64_t uStack_140;
  void *puStack_130;
  longlong lStack_128;
  int32_t uStack_118;
  void *puStack_110;
  longlong lStack_108;
  int32_t uStack_f8;
  void *puStack_f0;
  longlong lStack_e8;
  int32_t uStack_d8;
  uint64_t uStack_d0;
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [136];
  ulonglong uStack_28;
  
  uStack_d0 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  puStack_c8 = &UNK_1809fcc28;
  puStack_c0 = auStack_b0;
  uStack_b8 = 0;
  auStack_b0[0] = 0;
  if (param_1 != 0) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)(param_1 + lVar4) != '\0');
    uStack_b8 = (int32_t)lVar4;
    strcpy_s(auStack_b0,0x80,param_1);
  }
  FUN_18019e140(&puStack_f0,&puStack_c8);
  puStack_c8 = &UNK_18098bcb0;
  lVar4 = *_DAT_180c86870;
  FUN_180627910(&puStack_130,param_1);
  iVar2 = FUN_1801426a0(lVar4,&puStack_130);
  puStack_130 = &UNK_180a3c3e0;
  if (lStack_128 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_128 = 0;
  uStack_118 = 0;
  puStack_130 = &UNK_18098bcb0;
  if (iVar2 == -1) {
    pcVar1 = *(code **)(*_DAT_180c8f008 + 0x70);
    puStack_158 = &UNK_180a3c3e0;
    uStack_140 = 0;
    puStack_150 = (int32_t *)0x0;
    uStack_148 = 0;
    puStack_150 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puStack_150 = 0;
    uVar3 = FUN_18064e990(puStack_150);
    *puStack_150 = 0x4e454353;
    puStack_150[1] = 0x4f4e5f45;
    puStack_150[2] = 0x4f465f54;
    puStack_150[3] = 0x444e55;
    uStack_148 = 0xf;
    uStack_140._0_4_ = uVar3;
    (*pcVar1)(_DAT_180c8f008,&puStack_158);
    puStack_158 = &UNK_180a3c3e0;
    if (puStack_150 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_150 = (int32_t *)0x0;
    uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
    puStack_158 = &UNK_18098bcb0;
  }
  else {
    if ((iVar2 < 0) ||
       ((ulonglong)(*(longlong *)(lVar4 + 0x890) - *(longlong *)(lVar4 + 0x888) >> 5) <=
        (ulonglong)(longlong)iVar2)) {
      lVar4 = FUN_180628ca0();
    }
    else {
      lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)(lVar4 + 0x888);
    }
    FUN_180627ce0(lVar4,&puStack_110,&puStack_f0);
    (**(code **)(*_DAT_180c8f008 + 0x70))(_DAT_180c8f008,&puStack_110);
    puStack_110 = &UNK_180a3c3e0;
    if (lStack_108 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_108 = 0;
    uStack_f8 = 0;
    puStack_110 = &UNK_18098bcb0;
  }
  puStack_f0 = &UNK_180a3c3e0;
  if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_e8 = 0;
  uStack_d8 = 0;
  puStack_f0 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18045c820(uint64_t param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  int32_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  longlong lVar7;
  uint uVar8;
  void *puStack_68;
  int8_t *puStack_60;
  uint uStack_58;
  uint64_t uStack_50;
  int8_t auStack_48 [32];
  
  pcVar1 = *(code **)(*_DAT_180c8f008 + 0x70);
  lVar2 = *_DAT_180c86870;
  uVar6 = FUN_180627910(auStack_48,param_1);
  iVar3 = FUN_180142220(lVar2,uVar6);
  puStack_68 = &UNK_180a3c3e0;
  uStack_50 = 0;
  puStack_60 = (int8_t *)0x0;
  uStack_58 = 0;
  lVar7 = *(longlong *)(lVar2 + 0x860);
  if (lVar7 != lVar2 + 0x858) {
    do {
      if (((*(longlong *)(lVar7 + 0x48) - (longlong)*(int **)(lVar7 + 0x40) & 0xfffffffffffffffcU)
           == 4) && (**(int **)(lVar7 + 0x40) == iVar3)) {
        if (0 < *(int *)(lVar7 + 0x30)) {
          iVar3 = uStack_58 + *(int *)(lVar7 + 0x30);
          if (iVar3 != 0) {
            uVar8 = iVar3 + 1;
            if (puStack_60 == (int8_t *)0x0) {
              if ((int)uVar8 < 0x10) {
                uVar8 = 0x10;
              }
              puStack_60 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar8,0x13);
              *puStack_60 = 0;
            }
            else {
              if (uVar8 <= (uint)uStack_50) goto LAB_18045c96d;
              puStack_60 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_60,uVar8,0x10,0x13);
            }
            uVar4 = FUN_18064e990(puStack_60);
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
          }
LAB_18045c96d:
                    // WARNING: Subroutine does not return
          memcpy(puStack_60 + uStack_58,*(uint64_t *)(lVar7 + 0x28),
                 (longlong)(*(int *)(lVar7 + 0x30) + 1));
        }
        uVar8 = uStack_58 + 1;
        if (uVar8 != 0) {
          uVar5 = uStack_58 + 2;
          if (puStack_60 == (int8_t *)0x0) {
            if ((int)uVar5 < 0x10) {
              uVar5 = 0x10;
            }
            puStack_60 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar5,0x13);
            *puStack_60 = 0;
          }
          else {
            if (uVar5 <= (uint)uStack_50) goto LAB_18045c9ed;
            puStack_60 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_60,uVar5,0x10,0x13);
          }
          uVar4 = FUN_18064e990(puStack_60);
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        }
LAB_18045c9ed:
        *(int16_t *)(puStack_60 + uStack_58) = 0x2a;
        uStack_58 = uVar8;
      }
      lVar7 = func_0x00018066bd70(lVar7);
    } while (lVar7 != lVar2 + 0x858);
  }
  uVar4 = (*pcVar1)(_DAT_180c8f008,&puStack_68);
  puStack_68 = &UNK_180a3c3e0;
  if (puStack_60 == (int8_t *)0x0) {
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_18045ca80(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  int32_t uVar2;
  uint64_t uVar3;
  void *puStack_28;
  longlong lStack_20;
  
  pcVar1 = *(code **)(*_DAT_180c8f008 + 0x70);
  uVar3 = FUN_180627ae0(&puStack_28,_DAT_180c86870 + 0x2c0,param_3,param_4,0,0xfffffffffffffffe);
  uVar2 = (*pcVar1)(_DAT_180c8f008,uVar3,param_3,param_4,1);
  puStack_28 = &UNK_180a3c3e0;
  if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_18045cb50(void)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(_DAT_180c8aa08 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 0x68) == (code *)&UNK_1800467f0) {
      cVar2 = (char)plVar1[2] != '\0';
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x68))();
    }
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045cba0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18045cba0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puStack_70;
  longlong lStack_68;
  int32_t uStack_58;
  void *puStack_50;
  longlong lStack_48;
  int32_t uStack_38;
  void *puStack_30;
  longlong lStack_28;
  
  *(int8_t *)(_DAT_180c86950 + 0x17e8) = 0;
  FUN_180627910(&puStack_30,param_3,param_3,param_4,0xfffffffffffffffe);
  FUN_180627910(&puStack_50,param_2);
  FUN_180627910(&puStack_70,param_1);
  FUN_1801d5720();
  puStack_70 = &UNK_180a3c3e0;
  if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_68 = 0;
  uStack_58 = 0;
  puStack_70 = &UNK_18098bcb0;
  puStack_50 = &UNK_180a3c3e0;
  if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_48 = 0;
  uStack_38 = 0;
  puStack_50 = &UNK_18098bcb0;
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045cca0(longlong param_1,longlong param_2,uint64_t param_3)
void FUN_18045cca0(longlong param_1,longlong param_2,uint64_t param_3)

{
  longlong lVar1;
  longlong lVar2;
  int8_t auStack_f8 [32];
  void *puStack_d8;
  longlong lStack_d0;
  int32_t uStack_c0;
  uint64_t uStack_b8;
  void *puStack_b0;
  int8_t *puStack_a8;
  int32_t uStack_a0;
  int8_t auStack_98 [32];
  void *puStack_78;
  int8_t *puStack_70;
  int32_t uStack_68;
  int8_t auStack_60 [32];
  ulonglong uStack_40;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  *(int8_t *)(_DAT_180c86950 + 0x17e8) = 0;
  FUN_180627910(&puStack_d8,param_3);
  puStack_78 = &UNK_18098bc80;
  puStack_70 = auStack_60;
  uStack_68 = 0;
  auStack_60[0] = 0;
  lVar2 = -1;
  lVar1 = lVar2;
  if (param_2 != 0) {
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    uStack_68 = (int32_t)lVar1;
    strcpy_s(auStack_60,0x20,param_2);
  }
  puStack_b0 = &UNK_18098bc80;
  puStack_a8 = auStack_98;
  uStack_a0 = 0;
  auStack_98[0] = 0;
  if (param_1 != 0) {
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_1 + lVar2) != '\0');
    uStack_a0 = (int32_t)lVar2;
    strcpy_s(auStack_98,0x20,param_1);
  }
  FUN_1801d6240();
  puStack_b0 = &UNK_18098bcb0;
  puStack_78 = &UNK_18098bcb0;
  puStack_d8 = &UNK_180a3c3e0;
  if (lStack_d0 == 0) {
    lStack_d0 = 0;
    uStack_c0 = 0;
    puStack_d8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_f8);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045ce10(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18045ce10(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puStack_30;
  longlong lStack_28;
  
  *(int8_t *)(_DAT_180c86950 + 0x17e8) = 0;
  FUN_180627910(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  FUN_1801c4410();
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_18045ceb0(void)

{
  int8_t uVar1;
  int iVar2;
  longlong lVar3;
  longlong ***ppplVar4;
  int iVar5;
  longlong ****pppplVar6;
  char cVar7;
  longlong ***ppplStackX_8;
  longlong ***ppplStackX_10;
  longlong ***ppplStackX_18;
  
  pppplVar6 = (longlong ****)FUN_18062b1e0(_DAT_180c8ed18,0xd0,8,3,0xfffffffffffffffe);
  ppplVar4 = _DAT_180c8aa08;
  ppplStackX_8 = (longlong ***)pppplVar6;
  FUN_180049830(pppplVar6);
  *pppplVar6 = (longlong ***)&UNK_180a0de58;
  *(int8_t *)(pppplVar6 + 0x18) = 0;
  pppplVar6[0x19] = ppplVar4;
  ppplStackX_18 = (longlong ***)pppplVar6;
  (*(code *)(*pppplVar6)[5])(pppplVar6);
  lVar3 = _DAT_180c82868;
  ppplStackX_10 = (longlong ***)&ppplStackX_8;
  ppplStackX_8 = (longlong ***)pppplVar6;
  (*(code *)(*pppplVar6)[5])(pppplVar6);
  FUN_18005e300(lVar3,&ppplStackX_8);
  iVar5 = _Thrd_id();
  lVar3 = _DAT_180c82868;
  if (_DAT_180c9105c == 0) {
    iVar2 = *(int *)(**(longlong **)(_DAT_180c82868 + 8) + 0x48);
joined_r0x00018045cfc8:
    if (iVar5 != iVar2) {
      while( true ) {
        if ((*pppplVar6)[0xd] == (longlong **)&UNK_1800467f0) {
          cVar7 = *(char *)(pppplVar6 + 2) != '\0';
        }
        else {
          cVar7 = (*(code *)(*pppplVar6)[0xd])(pppplVar6);
        }
        if (cVar7 != '\0') break;
        Sleep(1000);
      }
      goto LAB_18045cf9b;
    }
  }
  else {
    iVar2 = _DAT_180c9105c;
    if (iVar5 != *(int *)(**(longlong **)(_DAT_180c82868 + 8) + 0x48)) goto joined_r0x00018045cfc8;
  }
  ppplStackX_8 = (longlong ***)&ppplStackX_10;
  ppplStackX_10 = (longlong ***)pppplVar6;
  (*(code *)(*pppplVar6)[5])(pppplVar6);
  FUN_18005e6a0(lVar3,&ppplStackX_10,1);
LAB_18045cf9b:
  uVar1 = *(int8_t *)(pppplVar6 + 0x18);
  (*(code *)(*pppplVar6)[7])(pppplVar6);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_18045d030(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  int32_t uVar2;
  uint64_t uVar3;
  longlong lStack_48;
  void *puStack_30;
  longlong lStack_28;
  
  pcVar1 = *(code **)(*_DAT_180c8f008 + 0x70);
  FUN_180627910(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  uVar3 = FUN_180169110();
  uVar2 = (*pcVar1)(_DAT_180c8f008,uVar3);
  if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar2;
}





// 函数: void FUN_18045d100(void)
void FUN_18045d100(void)

{
  code *pcVar1;
  
  _Exit();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}





// 函数: void FUN_18045d1d0(uint64_t param_1)
void FUN_18045d1d0(uint64_t param_1)

{
  void *puStack_60;
  longlong lStack_58;
  int32_t uStack_48;
  void *puStack_40;
  longlong lStack_38;
  
  FUN_180627910(&puStack_40);
  FUN_180627910(&puStack_60,param_1);
  FUN_180047e70();
  puStack_60 = &UNK_180a3c3e0;
  if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_58 = 0;
  uStack_48 = 0;
  puStack_60 = &UNK_18098bcb0;
  puStack_40 = &UNK_180a3c3e0;
  if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045d290(uint64_t param_1,uint64_t param_2,float param_3)
void FUN_18045d290(uint64_t param_1,uint64_t param_2,float param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  char *pcVar5;
  bool bVar6;
  int8_t auStack_e8 [32];
  void *puStack_c8;
  char *pcStack_c0;
  int iStack_b8;
  int32_t uStack_b0;
  void *puStack_a8;
  longlong lStack_a0;
  int32_t uStack_90;
  uint64_t uStack_88;
  void *puStack_80;
  int8_t *puStack_78;
  int iStack_70;
  int8_t auStack_68 [32];
  ulonglong uStack_48;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  uVar4 = FUN_180627910(&puStack_a8);
  iVar3 = FUN_180046b80(&system_ptr_5240,uVar4);
  if (iVar3 == -1) {
    iVar3 = FUN_180046890(&system_ptr_5240,uVar4);
  }
  puStack_a8 = &UNK_180a3c3e0;
  if (lStack_a0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_a0 = 0;
  uStack_90 = 0;
  puStack_a8 = &UNK_18098bcb0;
  FUN_180627910(&puStack_c8,param_1);
  puStack_80 = &UNK_18098bc80;
  puStack_78 = auStack_68;
  auStack_68[0] = 0;
  iStack_70 = 0xc;
  strcpy_s(auStack_68,0x20,&UNK_180a2a860);
  if (iStack_b8 == iStack_70) {
    if (iStack_b8 != 0) {
      pcVar5 = pcStack_c0;
      do {
        cVar1 = *pcVar5;
        cVar2 = pcVar5[(longlong)puStack_78 - (longlong)pcStack_c0];
        if (cVar1 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      bVar6 = cVar1 == cVar2;
      goto LAB_18045d3b8;
    }
LAB_18045d3ae:
    if (iStack_70 == 0) {
      bVar6 = true;
      goto LAB_18045d3b8;
    }
  }
  else if (iStack_b8 == 0) goto LAB_18045d3ae;
  bVar6 = false;
LAB_18045d3b8:
  puStack_80 = &UNK_18098bcb0;
  if (bVar6) {
    *(double *)((longlong)iVar3 * 0x100 + 0x78 + _DAT_180bf5248) = (double)param_3;
  }
  puStack_c8 = &UNK_180a3c3e0;
  if (pcStack_c0 != (char *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  pcStack_c0 = (char *)0x0;
  uStack_b0 = 0;
  puStack_c8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045d430(uint64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
void FUN_18045d430(uint64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint64_t uVar4;
  ulonglong uVar5;
  uint64_t *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *puStack_70;
  longlong lStack_68;
  uint64_t *puStack_50;
  uint64_t *puStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  
  FUN_180627910(&puStack_70,param_1,param_3,param_4,0xfffffffffffffffe);
  puStack_50 = (uint64_t *)0x0;
  puStack_48 = (uint64_t *)0x0;
  uVar5 = 0;
  uStack_40 = 0;
  uStack_38 = 3;
  if (lStack_68 != 0) {
    FUN_180057980(&puStack_70,&puStack_50,&system_ptr_ccb0);
  }
  puVar2 = puStack_48;
  puVar1 = puStack_50;
  lVar9 = *_DAT_180c868f8;
  uVar10 = (longlong)puStack_48 - (longlong)puStack_50 >> 5;
  if (uVar10 < 2) {
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x88,8,3);
    puVar6 = puVar1 + 4;
  }
  else {
    uVar8 = uVar5;
    if (uVar10 != 1) {
      do {
        lVar3 = FUN_180161e00(lVar9,puVar1 + uVar5 * 4);
        if (lVar3 == 0) {
          uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x88,8,3);
          lVar3 = FUN_1801614d0(uVar4,puVar1 + uVar5 * 4);
          FUN_180161eb0(lVar9,lVar3);
        }
        lVar9 = lVar3;
        uVar7 = (int)uVar8 + 1;
        uVar5 = (ulonglong)(int)uVar7;
        uVar8 = (ulonglong)uVar7;
      } while (uVar5 < uVar10 - 1);
    }
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x88,8,3);
    puVar6 = puVar1 + uVar10 * 4 + -4;
  }
  lVar3 = FUN_1801614d0(uVar4,puVar6);
  *(int32_t *)(lVar3 + 0x20) = 3;
  FUN_180161eb0(lVar9,lVar3);
  for (puVar6 = puVar1; puVar6 != puVar2; puVar6 = puVar6 + 4) {
    (**(code **)*puVar6)(puVar6,0);
  }
  if (puVar1 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  puStack_70 = &UNK_180a3c3e0;
  if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_18045d610(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)
void FUN_18045d610(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  longlong *plStackX_8;
  uint64_t **ppuStackX_10;
  uint64_t **appuStack_90 [2];
  void *puStack_80;
  code *pcStack_78;
  longlong alStack_68 [10];
  
  alStack_68[0] = 0;
  alStack_68[1] = 0;
  alStack_68[2] = 0;
  alStack_68[3] = 0;
  alStack_68[4] = 0;
  alStack_68[5] = 0;
  alStack_68[6] = 0;
  alStack_68[7] = 0;
  alStack_68[8] = 0;
  plStackX_8 = alStack_68;
  ppuStackX_10 = appuStack_90;
  puStack_80 = &UNK_1800adc10;
  pcStack_78 = FUN_1800adba0;
  appuStack_90[0] = &plStackX_8;
  FUN_18005c650(appuStack_90);
  fVar1 = (float)alStack_68[0];
  if (alStack_68[0] < 0) {
    fVar1 = fVar1 + 1.8446744e+19;
  }
  *param_1 = fVar1;
  fVar1 = (float)alStack_68[2];
  if (alStack_68[2] < 0) {
    fVar1 = fVar1 + 1.8446744e+19;
  }
  *param_2 = fVar1;
  fVar1 = (float)alStack_68[3];
  if (alStack_68[3] < 0) {
    fVar1 = fVar1 + 1.8446744e+19;
  }
  *param_3 = fVar1;
  fVar1 = (float)alStack_68[4];
  if (alStack_68[4] < 0) {
    fVar1 = fVar1 + 1.8446744e+19;
  }
  *param_4 = fVar1;
  fVar1 = (float)alStack_68[5];
  if (alStack_68[5] < 0) {
    fVar1 = fVar1 + 1.8446744e+19;
  }
  *param_5 = fVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045d760(void)
void FUN_18045d760(void)

{
  uint64_t in_R9;
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x48) < _DAT_180d499c8) {
    FUN_1808fcb90(&system_ptr_99c8);
    if (_DAT_180d499c8 == -1) {
      _DAT_180d499d0 = &UNK_180a009c8;
      _DAT_180d499d8 = &system_ptr_99e8;


// 函数: void FUN_18045d9f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18045d9f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int8_t auStack_30 [48];
  
  FUN_180627910(auStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  FUN_180046ca0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045da50(uint64_t param_1)
void FUN_18045da50(uint64_t param_1)

{
  void *puStack_50;
  longlong lStack_48;
  int8_t auStack_30 [40];
  
  FUN_18005e630(_DAT_180c82868);
  FUN_1800bc000(&puStack_50,param_1);
  FUN_180627ae0(auStack_30,&puStack_50);
  FUN_180056c50();
  FUN_18005e630(_DAT_180c82868);
  puStack_50 = &UNK_180a3c3e0;
  if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045daf0(uint64_t param_1)
void FUN_18045daf0(uint64_t param_1)

{
  int8_t auStack_30 [40];
  
  FUN_18005e630(_DAT_180c82868);
  FUN_180627910(auStack_30,param_1);
  FUN_180056c50();
  FUN_18005e630(_DAT_180c82868);
  return;
}



// WARNING: Removing unreachable block (ram,0x00018017747d)
// WARNING: Removing unreachable block (ram,0x000180177a18)
// WARNING: Removing unreachable block (ram,0x000180177a22)
// WARNING: Removing unreachable block (ram,0x000180177a2e)
// WARNING: Removing unreachable block (ram,0x000180177a35)
// WARNING: Removing unreachable block (ram,0x000180177581)
// WARNING: Removing unreachable block (ram,0x000180177590)
// WARNING: Removing unreachable block (ram,0x00018017759c)
// WARNING: Removing unreachable block (ram,0x0001801775a3)
// WARNING: Removing unreachable block (ram,0x0001801775b3)
// WARNING: Removing unreachable block (ram,0x0001801775c0)
// WARNING: Removing unreachable block (ram,0x0001801775cc)
// WARNING: Removing unreachable block (ram,0x0001801775d3)
// WARNING: Removing unreachable block (ram,0x000180177263)
// WARNING: Removing unreachable block (ram,0x000180177296)
// WARNING: Removing unreachable block (ram,0x00018017726a)
// WARNING: Removing unreachable block (ram,0x000180177274)
// WARNING: Removing unreachable block (ram,0x000180177280)
// WARNING: Removing unreachable block (ram,0x000180177287)
// WARNING: Removing unreachable block (ram,0x000180177290)
// WARNING: Removing unreachable block (ram,0x000180177298)
// WARNING: Removing unreachable block (ram,0x00018017753a)
// WARNING: Removing unreachable block (ram,0x000180177540)
// WARNING: Removing unreachable block (ram,0x000180177550)
// WARNING: Removing unreachable block (ram,0x00018017755c)
// WARNING: Removing unreachable block (ram,0x000180177563)
// WARNING: Removing unreachable block (ram,0x0001801772c2)
// WARNING: Removing unreachable block (ram,0x0001801772d0)
// WARNING: Removing unreachable block (ram,0x0001801772dc)
// WARNING: Removing unreachable block (ram,0x0001801772e3)
// WARNING: Removing unreachable block (ram,0x00018017764c)
// WARNING: Removing unreachable block (ram,0x00018017749a)
// WARNING: Removing unreachable block (ram,0x0001801774a8)
// WARNING: Removing unreachable block (ram,0x0001801774aa)
// WARNING: Removing unreachable block (ram,0x000180176fc3)
// WARNING: Removing unreachable block (ram,0x000180177722)
// WARNING: Removing unreachable block (ram,0x00018017729d)
// WARNING: Removing unreachable block (ram,0x00018017766b)
// WARNING: Removing unreachable block (ram,0x000180177677)
// WARNING: Removing unreachable block (ram,0x000180177679)
// WARNING: Removing unreachable block (ram,0x00018017739f)
// WARNING: Removing unreachable block (ram,0x0001801773a6)
// WARNING: Removing unreachable block (ram,0x0001801773b0)
// WARNING: Removing unreachable block (ram,0x0001801773bc)
// WARNING: Removing unreachable block (ram,0x0001801773c3)
// WARNING: Removing unreachable block (ram,0x00018017731b)
// WARNING: Removing unreachable block (ram,0x000180177321)
// WARNING: Removing unreachable block (ram,0x000180177330)
// WARNING: Removing unreachable block (ram,0x00018017733c)
// WARNING: Removing unreachable block (ram,0x000180177343)
// WARNING: Removing unreachable block (ram,0x00018017734b)
// WARNING: Removing unreachable block (ram,0x000180177356)
// WARNING: Removing unreachable block (ram,0x000180177360)
// WARNING: Removing unreachable block (ram,0x00018017736c)
// WARNING: Removing unreachable block (ram,0x000180177373)
// WARNING: Removing unreachable block (ram,0x00018017737b)
// WARNING: Removing unreachable block (ram,0x000180177385)
// WARNING: Removing unreachable block (ram,0x0001801773cb)
// WARNING: Removing unreachable block (ram,0x000180177381)
// WARNING: Removing unreachable block (ram,0x0001801773cd)
// WARNING: Removing unreachable block (ram,0x0001801773d6)
// WARNING: Removing unreachable block (ram,0x0001801773da)
// WARNING: Removing unreachable block (ram,0x0001801773e4)
// WARNING: Removing unreachable block (ram,0x0001801773eb)
// WARNING: Removing unreachable block (ram,0x000180177400)
// WARNING: Removing unreachable block (ram,0x00018017740c)
// WARNING: Removing unreachable block (ram,0x000180177413)
// WARNING: Removing unreachable block (ram,0x00018017741e)
// WARNING: Removing unreachable block (ram,0x000180177417)
// WARNING: Removing unreachable block (ram,0x000180177420)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



