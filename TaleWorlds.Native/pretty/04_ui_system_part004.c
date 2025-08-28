#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part004.c - 19 个函数

// 函数: void FUN_180651970(longlong param_1,uint64_t param_2)
void FUN_180651970(longlong param_1,uint64_t param_2)

{
  uint64_t auStackX_10 [3];
  
  auStackX_10[0] = param_2;
  FUN_18005ea90(param_1 + 0x168,auStackX_10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180651990(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180651990(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  void *puVar1;
  void *puVar2;
  longlong *plStackX_10;
  void *puStack_50;
  void *puStack_48;
  int32_t uStack_38;
  void *puStack_30;
  void *puStack_28;
  
  plStackX_10 = param_2;
  FUN_18005ea90(param_1 + 0x168,&plStackX_10,param_3,param_4,0xfffffffffffffffe);
  (**(code **)(*param_2 + 8))(param_2,&puStack_30);
  (**(code **)(*param_2 + 0x10))(param_2,&puStack_50);
  puVar2 = &system_buffer_ptr;
  if (puStack_48 != (void *)0x0) {
    puVar2 = puStack_48;
  }
  puVar1 = &system_buffer_ptr;
  if (puStack_28 != (void *)0x0) {
    puVar1 = puStack_28;
  }
  (**(code **)(_DAT_180c8f008 + 0xe8))(puVar1,puVar2);
  (**(code **)*param_2)(param_2);
  puStack_50 = &UNK_180a3c3e0;
  if (puStack_48 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_48 = (void *)0x0;
  uStack_38 = 0;
  puStack_50 = &UNK_18098bcb0;
  puStack_30 = &UNK_180a3c3e0;
  if (puStack_28 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180651a80(longlong param_1,longlong param_2,longlong param_3)
void FUN_180651a80(longlong param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  void *puVar2;
  void *puVar3;
  
  pcVar1 = _DAT_180c8f018;
  *(int8_t *)(param_1 + 0x189) = 1;
  if (pcVar1 == (code *)0x0) {
    FUN_180626ee0(&UNK_180a3dc30);
  }
  else {
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar2 = *(void **)(param_2 + 8);
    }
    puVar3 = &system_buffer_ptr;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar3 = *(void **)(param_3 + 8);
    }
    (*pcVar1)(puVar2,puVar3,_DAT_180c8ecfc,_DAT_180bf3ff4);
  }
  if (_DAT_180c8f010 == (code *)0x0) {
    FUN_180626f80(&UNK_180a3dc58);
    if (_DAT_180c8f010 == (code *)0x0) {
      FUN_180626ee0(&UNK_180a3dc30);
      goto LAB_180651b0f;
    }
  }
  (*_DAT_180c8f010)();
LAB_180651b0f:
  *(longlong *)(param_1 + 0x10) = param_1;
  (**(code **)(param_1 + 0x78))(0,FUN_1806555f0);
  (**(code **)(param_1 + 0x78))(1,FUN_1806552e0);
  (**(code **)(param_1 + 0x78))(2,&UNK_1803f60a0);
  (**(code **)(param_1 + 0x78))(3,FUN_180655e60);
  (**(code **)(param_1 + 0x78))(4,&UNK_180655e50);
  (**(code **)(param_1 + 0x78))(5,&UNK_180084650);
  (**(code **)(param_1 + 0x78))(6,&UNK_180655f30);
  (**(code **)(param_1 + 0x78))(7,&UNK_1806561b0);
  (**(code **)(param_1 + 0x78))(8,FUN_180656160);
  (**(code **)(param_1 + 0x78))(9,FUN_180656110);
  (**(code **)(param_1 + 0x78))(10,&UNK_1806561c0);
  (**(code **)(param_1 + 0x78))(0xb,FUN_180656020);
  (**(code **)(param_1 + 0x78))(0xc,&UNK_180150380);
  (**(code **)(param_1 + 0x78))(0xd,FUN_180655f50);
  (**(code **)(param_1 + 0x78))(0xe,&UNK_180656100);
  (**(code **)(param_1 + 0x78))(0xf,&UNK_180656330);
  (**(code **)(param_1 + 0x78))(0x10,FUN_1806563a0);
  (**(code **)(param_1 + 0x78))(0x11,FUN_1806561d0);
  (**(code **)(param_1 + 0x78))(0x12,&UNK_180656320);
  (**(code **)(param_1 + 0x78))(0x13,FUN_180656340);
  (**(code **)(param_1 + 0x78))(0x14,FUN_180656410);
  (**(code **)(param_1 + 0x78))(0x15,FUN_1806565a0);
  (**(code **)(param_1 + 0x78))(0x16,FUN_180656610);
  (**(code **)(param_1 + 0x78))(0x17,FUN_1806566c0);
  (**(code **)(param_1 + 0x78))(0x18,FUN_18006f4c0);
  (**(code **)(param_1 + 0x78))(0x19,&UNK_180656700);
  (**(code **)(param_1 + 0x78))(0x1a,&UNK_180046680);
  (**(code **)(param_1 + 0x78))(0x1b,_guard_check_icall);
  (**(code **)(param_1 + 0x78))(0x1c,_guard_check_icall);
  (**(code **)(param_1 + 0x78))(0x1d,0x180069ee0);
  (**(code **)(param_1 + 0x78))(0x1e,&UNK_180046230);
  (**(code **)(param_1 + 0x78))(0x1f,_guard_check_icall);
  (**(code **)(param_1 + 0x78))(0x20,_guard_check_icall);
  (**(code **)(param_1 + 0x80))();
                    // WARNING: Could not recover jumptable at 0x000180651d0e. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(param_1 + 0x58))();
  return;
}





// 函数: void FUN_180651d20(longlong param_1)
void FUN_180651d20(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = 0;
  uVar3 = uVar1;
  if (*(longlong *)(param_1 + 0x170) - *(longlong *)(param_1 + 0x168) >> 3 == 0) {
    *(int8_t *)(param_1 + 0x188) = 1;
    return;
  }
  do {
    (**(code **)**(uint64_t **)(uVar1 + *(longlong *)(param_1 + 0x168)))();
    uVar1 = uVar1 + 8;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while ((ulonglong)(longlong)(int)uVar2 <
           (ulonglong)(*(longlong *)(param_1 + 0x170) - *(longlong *)(param_1 + 0x168) >> 3));
  *(int8_t *)(param_1 + 0x188) = 1;
  return;
}





// 函数: void FUN_180651d46(void)
void FUN_180651d46(void)

{
  longlong unaff_RBX;
  ulonglong uVar1;
  uint unaff_EDI;
  
  uVar1 = (ulonglong)unaff_EDI;
  do {
    (**(code **)**(uint64_t **)(uVar1 + *(longlong *)(unaff_RBX + 0x168)))();
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x170) - *(longlong *)(unaff_RBX + 0x168) >> 3));
  *(int8_t *)(unaff_RBX + 0x188) = 1;
  return;
}





// 函数: void FUN_180651d97(longlong param_1)
void FUN_180651d97(longlong param_1)

{
  *(int8_t *)(param_1 + 0x188) = 1;
  return;
}



uint64_t FUN_180652100(longlong param_1,uint64_t param_2,int32_t param_3)

{
  longlong lVar1;
  void *puVar2;
  
  lVar1 = (**(code **)(param_1 + 0x148))(param_3);
  puVar2 = &system_buffer_ptr;
  if (*(void **)(lVar1 + 8) != (void *)0x0) {
    puVar2 = *(void **)(lVar1 + 8);
  }
  FUN_180627910(param_2,puVar2);
  return param_2;
}



ulonglong FUN_180652190(longlong param_1,longlong param_2,longlong param_3,uint64_t param_4)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong lVar2;
  void *puVar3;
  ulonglong uVar4;
  uint64_t uVar5;
  void *puStack_30;
  longlong lStack_28;
  uint uStack_20;
  int32_t uStack_14;
  
  uVar5 = 0xfffffffffffffffe;
  if (*(int *)(param_3 + 0x10) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar3 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar3 = *(void **)(param_3 + 8);
  }
  lVar1 = (**(code **)(param_1 + 0xb0))(puVar3);
  puVar3 = &system_buffer_ptr;
  if (*(void **)(lVar1 + 8) != (void *)0x0) {
    puVar3 = *(void **)(lVar1 + 8);
  }
  FUN_180627910(&puStack_30,puVar3);
  if (uStack_20 == 7) {
    lVar1 = 0;
    do {
      lVar2 = lVar1 + 1;
      if (*(char *)(lStack_28 + lVar1) != (&UNK_180a16f70)[lVar1]) goto LAB_180652228;
      lVar1 = lVar2;
    } while (lVar2 != 8);
    uVar4 = 0;
  }
  else {
LAB_180652228:
    if (lStack_28 != 0) {
      FUN_1806277c0(param_2,uStack_20);
    }
    if (uStack_20 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*(uint64_t *)(param_2 + 8),lStack_28,(ulonglong)uStack_20,param_4,uVar5);
    }
    *(int32_t *)(param_2 + 0x10) = 0;
    if (*(longlong *)(param_2 + 8) != 0) {
      *(int8_t *)((ulonglong)uStack_20 + *(longlong *)(param_2 + 8)) = 0;
    }
    *(int32_t *)(param_2 + 0x1c) = uStack_14;
    uVar4 = 1;
  }
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar4;
}



uint64_t FUN_1806522b0(longlong param_1,longlong param_2)

{
  void *puVar1;
  
  puVar1 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar1 = *(void **)(param_2 + 8);
  }
  (**(code **)(param_1 + 0x110))(puVar1);
  return 1;
}



uint64_t FUN_1806522e0(longlong param_1,longlong param_2)

{
  void *puVar1;
  
  puVar1 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar1 = *(void **)(param_2 + 8);
  }
  (**(code **)(param_1 + 0x118))(puVar1);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_180652310(longlong param_1,int *param_2,longlong *param_3,uint64_t param_4)

{
  void *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *puVar7;
  int32_t uVar8;
  uint64_t uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  uVar5 = 0;
  iVar2 = (**(code **)(param_1 + 0x60))(param_3[1] - *param_3 >> 5);
  *param_2 = iVar2;
  if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x30))(iVar2);
  }
  uVar8 = 1;
  lVar3 = *param_3;
  uVar6 = uVar5;
  if (param_3[1] - lVar3 >> 5 != 0) {
    do {
      puVar1 = *(void **)(lVar3 + 8 + uVar6);
      puVar7 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar7 = puVar1;
      }
      (**(code **)(param_1 + 0x128))(*param_2,uVar5,puVar7,param_4,uVar8,uVar9);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      lVar3 = *param_3;
      uVar6 = uVar6 + 0x20;
    } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(param_3[1] - lVar3 >> 5));
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t get_ftdn_managed_interface(void)

{
                    // 0x6523f0  33  get_ftdn_managed_interface
  return _DAT_180c8f008;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180652400(longlong *param_1,longlong param_2)
void FUN_180652400(longlong *param_1,longlong param_2)

{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint64_t *puVar10;
  longlong lVar11;
  longlong lVar12;
  uint64_t *puVar13;
  longlong lVar14;
  uint64_t *puVar15;
  int16_t auStackX_10 [4];
  ulonglong uStackX_18;
  uint64_t uStackX_20;
  uint64_t *puStack_98;
  uint64_t *puStack_90;
  uint64_t uStack_88;
  int32_t uStack_80;
  void *puStack_78;
  longlong lStack_70;
  int32_t uStack_60;
  uint64_t *puStack_58;
  uint64_t *puStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    puStack_98 = (uint64_t *)0x0;
    puStack_90 = (uint64_t *)0x0;
    uStack_88 = 0;
    uStack_80 = 3;
    auStackX_10[0] = 10;
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_180057980(param_2,&puStack_98,auStackX_10);
    }
    uVar9 = (longlong)puStack_90 - (longlong)puStack_98 >> 5;
    puVar15 = puStack_98;
    puVar13 = puStack_98;
    puVar5 = puStack_90;
    if ((int)uVar9 != 0) {
      uVar9 = uVar9 & 0xffffffff;
      do {
        puStack_58 = (uint64_t *)0x0;
        puStack_50 = (uint64_t *)0x0;
        uStack_48 = 0;
        uStack_40 = 3;
        auStackX_10[0] = 0x40;
        uStackX_18 = uVar9;
        if (puVar15[1] != 0) {
          FUN_180057980(puVar15,&puStack_58,auStackX_10);
        }
        puVar6 = puStack_50;
        puVar5 = puStack_58;
        puVar13 = puStack_58;
        if (((longlong)puStack_50 - (longlong)puStack_58 & 0xffffffffffffffe0U) == 0x60) {
          FUN_180627ae0(&puStack_78,puStack_58);
          iVar7 = atoi(puVar5[5]);
          iVar8 = atoi(puVar5[9]);
          uStackX_20 = FUN_180650c20(&puStack_78);
          puVar13 = (uint64_t *)param_1[1];
          if (puVar13 < (uint64_t *)param_1[2]) {
            *puVar13 = uStackX_20;
            puVar13[1] = (longlong)iVar7;
            puVar13[2] = (longlong)iVar8;
            param_1[1] = param_1[1] + 0x18;
          }
          else {
            lVar14 = *param_1;
            lVar12 = ((longlong)puVar13 - lVar14) / 0x18;
            if (lVar12 == 0) {
              lVar12 = 1;
LAB_18065258b:
              puVar10 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar12 * 0x18,(char)param_1[3]);
              puVar13 = (uint64_t *)param_1[1];
              lVar14 = *param_1;
            }
            else {
              lVar12 = lVar12 * 2;
              if (lVar12 != 0) goto LAB_18065258b;
              puVar10 = (uint64_t *)0x0;
            }
            lVar11 = ((longlong)puVar13 - lVar14) / 0x18;
            puVar13 = puVar10;
            if (0 < lVar11) {
              do {
                puVar1 = (int32_t *)((longlong)puVar13 + (lVar14 - (longlong)puVar10));
                uVar2 = puVar1[1];
                uVar3 = puVar1[2];
                uVar4 = puVar1[3];
                *(int32_t *)puVar13 = *puVar1;
                *(int32_t *)((longlong)puVar13 + 4) = uVar2;
                *(int32_t *)(puVar13 + 1) = uVar3;
                *(int32_t *)((longlong)puVar13 + 0xc) = uVar4;
                puVar13[2] = *(uint64_t *)
                              ((longlong)puVar13 + (lVar14 - (longlong)puVar10) + 0x10);
                lVar11 = lVar11 + -1;
                puVar13 = puVar13 + 3;
              } while (0 < lVar11);
            }
            *puVar13 = uStackX_20;
            puVar13[1] = (longlong)iVar7;
            puVar13[2] = (longlong)iVar8;
            if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *param_1 = (longlong)puVar10;
            param_1[1] = (longlong)(puVar13 + 3);
            param_1[2] = (longlong)(puVar10 + lVar12 * 3);
            uVar9 = uStackX_18;
          }
          puStack_78 = &UNK_180a3c3e0;
          if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_70 = 0;
          uStack_60 = 0;
          puStack_78 = &UNK_18098bcb0;
          for (puVar13 = puVar5; puVar13 != puVar6; puVar13 = puVar13 + 4) {
            (**(code **)*puVar13)(puVar13,0);
          }
        }
        else {
          for (; puVar13 != puVar6; puVar13 = puVar13 + 4) {
            (**(code **)*puVar13)(puVar13,0);
          }
        }
        if (puVar5 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar5);
        }
        puVar15 = puVar15 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      uStackX_18 = 0;
      puVar15 = puStack_98;
      puVar13 = puStack_98;
      puVar5 = puStack_90;
    }
    for (; puVar10 = puStack_90, puVar6 = puStack_98, puVar15 != puStack_90; puVar15 = puVar15 + 4)
    {
      puStack_98 = puVar13;
      puStack_90 = puVar5;
      (**(code **)*puVar15)(puVar15,0);
      puVar13 = puStack_98;
      puVar5 = puStack_90;
      puStack_90 = puVar10;
      puStack_98 = puVar6;
    }
    if (puStack_98 != (uint64_t *)0x0) {
      puStack_98 = puVar13;
      puStack_90 = puVar5;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar6);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806526f0(void)
void FUN_1806526f0(void)

{
  int8_t auStack_2a8 [144];
  uint64_t uStack_218;
  int8_t auStack_178 [288];
  ulonglong uStack_58;
  
  uStack_218 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_2a8;
                    // WARNING: Subroutine does not return
  memset(auStack_178,0,0x118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180652b60(uint64_t param_1,longlong *param_2)
void FUN_180652b60(uint64_t param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int8_t auStack_de8 [184];
  int8_t auStack_d30 [32];
  uint64_t uStack_d10;
  uint64_t uStack_d08;
  int8_t auStack_848 [2048];
  ulonglong uStack_48;
  
  uStack_d10 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_de8;
  FUN_180057110();
  uStack_d08 = 0x180c96740;
  iVar1 = _Mtx_lock(0x180c96740);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  lVar2 = (param_2[1] - *param_2) / 6 + (param_2[1] - *param_2 >> 0x3f);
  if ((int)(lVar2 >> 2) != (int)(lVar2 >> 0x3f)) {
    FUN_180629090(auStack_d30);
                    // WARNING: Subroutine does not return
    memset(auStack_848,0,0x800);
  }
  iVar1 = _Mtx_unlock(0x180c96740);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_de8);
}



uint64_t *
FUN_180653220(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  char *pcVar1;
  void *puVar2;
  longlong lVar3;
  ulonglong uVar5;
  longlong lVar6;
  void *puVar7;
  void *puStack_38;
  longlong lStack_30;
  int32_t uStack_28;
  int32_t uStack_20;
  int32_t uStack_1c;
  longlong lVar4;
  
  lVar6 = 0;
  FUN_180627910(&puStack_38,&system_buffer_ptr,param_3,param_4,0,0xfffffffffffffffe);
  lVar4 = -1;
  do {
    lVar3 = lVar4 + 1;
    pcVar1 = (char *)(lVar4 + 0x180c8f021);
    lVar4 = lVar3;
  } while (*pcVar1 != '\0');
  if (lVar3 == 0) {
    uVar5 = param_1[1] - *param_1 >> 5;
    if ((int)uVar5 == 0) {
      FUN_180627910(param_2,&UNK_180a3dd38);
      puStack_38 = &UNK_180a3c3e0;
      if (lStack_30 == 0) {
        return param_2;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uVar5 = uVar5 & 0xffffffff;
    do {
      puVar2 = *(void **)(lVar6 + 8 + *param_1);
      puVar7 = &system_buffer_ptr;
      if (puVar2 != (void *)0x0) {
        puVar7 = puVar2;
      }
      FUN_180628040(&puStack_38,&UNK_1809fe62c,puVar7);
      lVar6 = lVar6 + 0x20;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  else {
    (**(code **)(puStack_38 + 0x10))(&puStack_38);
  }
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  *(int32_t *)(param_2 + 2) = uStack_28;
  param_2[1] = lStack_30;
  *(int32_t *)((longlong)param_2 + 0x1c) = uStack_1c;
  *(int32_t *)(param_2 + 3) = uStack_20;
  return param_2;
}





// 函数: void FUN_1806533a0(longlong param_1)
void FUN_1806533a0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 == 0) {


// 函数: void FUN_1806533b4(longlong param_1)
void FUN_1806533b4(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_1 + lVar2) != '\0');
  uVar1 = (uint)lVar2;
  if (0x1fff < uVar1) {
    uVar1 = 0x1fff;
  }
                    // WARNING: Subroutine does not return
  memcpy(&system_data_f020,param_1,(longlong)(int)uVar1);
}





// 函数: void FUN_18065340f(void)
void FUN_18065340f(void)

{
  code *pcVar1;
  
  FUN_1808fcdc8();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



uint64_t *
FUN_180653420(uint64_t *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int8_t auStack_28 [8];
  uint64_t uStack_20;
  int32_t uStack_18;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x10) != 0)) {
    uVar1 = mono_string_to_utf8(param_2);
    FUN_180627910(auStack_28,uVar1,param_3,param_4,uVar2,uVar3);
    mono_free(uVar1);
    *param_1 = &UNK_18098bcb0;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    *param_1 = &UNK_180a3c3e0;
    *(int32_t *)(param_1 + 2) = uStack_18;
    param_1[1] = uStack_20;
    *(int32_t *)((longlong)param_1 + 0x1c) = uStack_c;
    *(int32_t *)(param_1 + 3) = uStack_10;
    return param_1;
  }
  uVar3 = FUN_180628ca0();
  FUN_180627ae0(param_1,uVar3);
  return param_1;
}





// 函数: void FUN_180653530(uint64_t param_1)
void FUN_180653530(uint64_t param_1)

{
  FUN_1806533a0();
  OutputDebugStringA(param_1);
  FUN_180626ee0(&UNK_180a3dd80);


// 函数: void FUN_180653670(longlong param_1,longlong param_2)
void FUN_180653670(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  
  uVar1 = FUN_18062b420(_DAT_180c8ed18,param_1 * param_2,0x19);
                    // WARNING: Subroutine does not return
  memset(uVar1,0,param_1 * param_2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806536d0(void)
void FUN_1806536d0(void)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  
  puVar1 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,3,0xfffffffffffffffe);
  *puVar1 = 1;
  puVar1[1] = FUN_180653580;
  puVar1[2] = FUN_1806535c0;
  puVar1[3] = FUN_180653630;
  puVar1[4] = FUN_180653670;
  mono_set_allocator_vtable(puVar1);
  puVar2 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x13,0x13);
  *(int8_t *)puVar2 = 0;
  FUN_18064e990(puVar2);
  *puVar2 = 0x7372756e;
  puVar2[1] = 0x2d797265;
  puVar2[2] = 0x657a6973;
  puVar2[3] = 0x3931383d;
  *(int16_t *)(puVar2 + 4) = 0x6b32;
  *(int8_t *)((longlong)puVar2 + 0x12) = 0;
  puVar1 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar1 = 0;
  FUN_18064e990(puVar1);
  *puVar1 = 0x5f43475f4f4e4f4d;
  *(int32_t *)(puVar1 + 1) = 0x41524150;
  *(int16_t *)((longlong)puVar1 + 0xc) = 0x534d;
  *(int8_t *)((longlong)puVar1 + 0xe) = 0;
  SetEnvironmentVariableA(puVar1,puVar2);
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180653940(void)
void FUN_180653940(void)

{
  longlong *plVar1;
  int32_t *puVar2;
  int32_t uVar3;
  longlong lVar4;
  uint64_t *puVar5;
  int32_t *puVar6;
  ulonglong uVar7;
  int8_t auStack_d8 [32];
  void *puStack_b8;
  int32_t *puStack_b0;
  uint uStack_a8;
  ulonglong uStack_a0;
  int32_t uStack_98;
  void *puStack_90;
  uint64_t *puStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_50;
  ulonglong uStack_30;
  
  plVar1 = _DAT_180c91020;
  uStack_50 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  uStack_98 = 0;
  puStack_b8 = &UNK_180a3c3e0;
  uStack_a0 = 0;
  puStack_b0 = (int32_t *)0x0;
  uStack_a8 = 0;
  FUN_1806277c0(&puStack_b8,0x15);
  puVar2 = puStack_b0;
  uVar7 = (ulonglong)uStack_a8;
  puVar6 = (int32_t *)((longlong)puStack_b0 + uVar7);
  *puVar6 = 0x656c6154;
  puVar6[1] = 0x6c726f57;
  puVar6[2] = 0x442e7364;
  puVar6[3] = 0x654e746f;
  *(int32_t *)((longlong)puStack_b0 + uVar7 + 0x10) = 0x6c642e74;
  *(int16_t *)((longlong)puStack_b0 + uVar7 + 0x14) = 0x6c;
  uStack_a8 = 0x15;
  puVar6 = (int32_t *)&system_buffer_ptr;
  if (puStack_b0 != (int32_t *)0x0) {
    puVar6 = puStack_b0;
  }
  lVar4 = mono_domain_assembly_open(_DAT_180c91028,puVar6);
  puStack_b8 = &UNK_180a3c3e0;
  if (puVar2 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  puStack_b0 = (int32_t *)0x0;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  puStack_b8 = &UNK_18098bcb0;
  *plVar1 = lVar4;
  if (lVar4 == 0) {
    FUN_180626ee0(&UNK_180a3ddc0,&system_data_dda8);
    lVar4 = *plVar1;
  }
  lVar4 = mono_assembly_get_image(lVar4);
  plVar1[1] = lVar4;
  if (lVar4 == 0) {
    FUN_180626ee0(&UNK_180a3deb8);
  }
  puStack_90 = &UNK_180a3c3e0;
  uStack_78 = 0;
  puStack_88 = (uint64_t *)0x0;
  uStack_80 = 0;
  puVar5 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar5 = 0;
  puStack_88 = puVar5;
  uVar3 = FUN_18064e990(puVar5);
  uStack_78 = CONCAT44(uStack_78._4_4_,uVar3);
  *puVar5 = 0x6c6c6f72746e6f43;
  *(int16_t *)(puVar5 + 1) = 0x7265;
  *(int8_t *)((longlong)puVar5 + 10) = 0;
  uStack_80 = 10;
  puStack_b8 = &UNK_180a3c3e0;
  uStack_a0 = 0;
  puStack_b0 = (int32_t *)0x0;
  uStack_a8 = 0;
  puVar6 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x12,0x13);
  *(int8_t *)puVar6 = 0;
  puStack_b0 = puVar6;
  uVar3 = FUN_18064e990(puVar6);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar3);
  *puVar6 = 0x656c6154;
  puVar6[1] = 0x6c726f57;
  puVar6[2] = 0x442e7364;
  puVar6[3] = 0x654e746f;
  *(int16_t *)(puVar6 + 4) = 0x74;
  uStack_a8 = 0x11;
  mono_class_from_name(plVar1[1],puVar6,puVar5);
  puStack_b8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar6);
}



uint64_t *
FUN_180653ce0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &UNK_1809fcc28;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0x10;
  strcpy_s(param_2[1],0x80,&UNK_180a3def0,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180653d60(longlong param_1,uint64_t param_2,int param_3)
void FUN_180653d60(longlong param_1,uint64_t param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar3 = lVar1 - lVar2;
  uVar6 = (ulonglong)(iVar7 + param_3);
  if (uVar3 < uVar6) {
    uVar6 = (lVar2 - lVar1) + uVar6;
    if ((ulonglong)(*(longlong *)(param_1 + 0x20) - lVar1) < uVar6) {
      uVar5 = uVar3 * 2;
      if (uVar3 == 0) {
        uVar5 = 1;
      }
      if (uVar5 < uVar3 + uVar6) {
        uVar5 = uVar3 + uVar6;
      }
      if (uVar5 == 0) {
        lVar4 = lVar1;
        lVar1 = 0;
      }
      else {
        lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar5,*(int8_t *)(param_1 + 0x28));
        lVar2 = *(longlong *)(param_1 + 0x10);
        lVar4 = *(longlong *)(param_1 + 0x18);
      }
      if (lVar2 != lVar4) {
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar2,lVar4 - lVar2);
      }
      if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar1,0,uVar6);
      }
      if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(longlong *)(param_1 + 0x10) = lVar1;
      *(ulonglong *)(param_1 + 0x20) = lVar1 + uVar5;
    }
    else if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar1,0,uVar6);
    }
  }
  else {
    lVar1 = lVar2 + uVar6;
  }
  *(longlong *)(param_1 + 0x18) = lVar1;
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy((longlong)iVar7 + *(longlong *)(param_1 + 0x10),param_2,(longlong)param_3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180653dac(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4)
void FUN_180653dac(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4)

{
  longlong in_RAX;
  longlong unaff_RBX;
  longlong lVar1;
  uint64_t unaff_RBP;
  ulonglong uVar2;
  longlong unaff_RSI;
  ulonglong uVar3;
  int unaff_R12D;
  longlong *unaff_R15;
  uint64_t in_stack_00000058;
  
  uVar3 = (param_1 - unaff_RBX) + param_4;
  if ((ulonglong)(in_RAX - unaff_RBX) < uVar3) {
    uVar2 = param_2 * 2;
    if (param_2 == 0) {
      uVar2 = 1;
    }
    if (uVar2 < param_2 + uVar3) {
      uVar2 = param_2 + uVar3;
    }
    if (uVar2 == 0) {
      lVar1 = unaff_RBX;
      unaff_RBX = 0;
    }
    else {
      unaff_RBX = FUN_18062b420(_DAT_180c8ed18,uVar2,*(int8_t *)(unaff_RSI + 0x28));
      param_1 = *(longlong *)(unaff_RSI + 0x10);
      lVar1 = *unaff_R15;
    }
    if (param_1 != lVar1) {
                    // WARNING: Subroutine does not return
      memmove(unaff_RBX,param_1,lVar1 - param_1);
    }
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memset(unaff_RBX,0,uVar3);
    }
    if (*(longlong *)(unaff_RSI + 0x10) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(longlong *)(unaff_RSI + 0x10) = unaff_RBX;
    *(ulonglong *)(unaff_RSI + 0x20) = unaff_RBX + uVar2;
  }
  else {
    in_stack_00000058 = unaff_RBP;
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memset();
    }
  }
  *unaff_R15 = unaff_RBX;
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy((longlong)unaff_R12D + *(longlong *)(unaff_RSI + 0x10),in_stack_00000058);
  return;
}





// 函数: void FUN_180653e6b(void)
void FUN_180653e6b(void)

{
  uint64_t unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int unaff_R12D;
  uint64_t *unaff_R15;
  
  if (unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *unaff_R15 = unaff_RBX;
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy((longlong)unaff_R12D + *(longlong *)(unaff_RSI + 0x10));
  return;
}





