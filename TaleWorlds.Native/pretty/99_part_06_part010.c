#include "TaleWorlds.Native.Split.h"

// 99_part_06_part010.c - 15 个函数

// 函数: void FUN_1803addf0(longlong param_1,longlong param_2)
void FUN_1803addf0(longlong param_1,longlong param_2)

{
  int32_t uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  int8_t auStack_158 [32];
  int32_t uStack_138;
  int32_t uStack_128;
  longlong *plStack_118;
  longlong lStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  code *pcStack_d8;
  code *pcStack_d0;
  uint64_t uStack_c8;
  void *puStack_b8;
  int8_t *puStack_b0;
  int32_t uStack_a8;
  int8_t auStack_a0 [72];
  ulonglong uStack_58;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  if ((*(int *)(param_2 + 0x60c40) != -1) &&
     (*(longlong *)(*(longlong *)(param_2 + 0x60c20) + (longlong)*(int *)(param_2 + 0x60c40) * 8) !=
      0)) {
    fVar9 = *(float *)(param_1 + 0xe1c) * 0.1;
    iVar6 = (int)fVar9;
    iVar7 = (int)((ulonglong)((longlong)iVar6 * -0x2aaaaaab) >> 0x20);
    iVar7 = (iVar7 >> 2) - (iVar7 >> 0x1f);
    iVar6 = iVar6 + iVar7 * 0x18;
    fVar9 = fVar9 - (float)iVar6;
    lStack_110 = FUN_1803a8d80(param_1,iVar7,iVar6);
    lVar3 = FUN_1803a8d80(param_1);
    plVar4 = (longlong *)FUN_1803a8fc0(param_1);
    plStack_118 = (longlong *)FUN_1803a8fc0(param_1);
    if (*(int *)(param_2 + 0x60c40) == -1) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)
               (*(longlong *)(param_2 + 0x60c20) + (longlong)*(int *)(param_2 + 0x60c40) * 8);
    }
    if ((((lVar3 == 0) || (lStack_110 == 0)) || (plVar4 == (longlong *)0x0)) ||
       (plStack_118 == (longlong *)0x0)) {
      if (lStack_110 != 0) {
        lVar3 = lStack_110;
      }
      if (lVar3 != 0) {
        uStack_138 = *(int32_t *)(param_2 + 0xa0);
        FUN_18031b790(lVar8,lVar3,lVar3,0);
      }
    }
    else {
      if (*(char *)(param_1 + 0xe18) != '\0') {
        iVar6 = 0;
        do {
          lVar5 = FUN_1803a8d80();
          if (lVar5 != 0) {
            *(uint *)(lVar5 + 0x328) = *(uint *)(lVar5 + 0x328) | 0x20000000;
            uStack_108 = 0;
            uStack_100 = 0;
            pcStack_f8 = (code *)0x0;
            pcStack_f0 = _guard_check_icall;
            FUN_18023c450(lVar5,0,0xffffffff,&uStack_108);
            if (pcStack_f8 != (code *)0x0) {
              (*pcStack_f8)(&uStack_108,0,0);
            }
          }
          lVar5 = FUN_1803a8fc0();
          if (lVar5 != 0) {
            *(uint *)(lVar5 + 0x328) = *(uint *)(lVar5 + 0x328) | 0x20000000;
            uStack_e8 = 0;
            uStack_e0 = 0;
            pcStack_d8 = (code *)0x0;
            pcStack_d0 = _guard_check_icall;
            FUN_18023c450(lVar5,0,0xffffffff,&uStack_e8);
            if (pcStack_d8 != (code *)0x0) {
              (*pcStack_d8)(&uStack_e8,0,0);
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x18);
        *(int8_t *)(param_1 + 0xe18) = 0;
      }
      plVar2 = plStack_118;
      uStack_138 = *(int32_t *)(param_2 + 0xa0);
      FUN_18031b790(lVar8,lStack_110,lVar3,fVar9);
      uVar1 = *(int32_t *)(param_2 + 0xa0);
      plStack_118 = plVar4;
      (**(code **)(*plVar4 + 0x28))(plVar4);
      plStack_118 = *(longlong **)(lVar8 + 0x18);
      *(longlong **)(lVar8 + 0x18) = plVar4;
      if (plStack_118 != (longlong *)0x0) {
        (**(code **)(*plStack_118 + 0x38))();
      }
      plStack_118 = plVar2;
      (**(code **)(*plVar2 + 0x28))(plVar2);
      plStack_118 = *(longlong **)(lVar8 + 0x20);
      *(longlong **)(lVar8 + 0x20) = plVar2;
      if (plStack_118 != (longlong *)0x0) {
        (**(code **)(*plStack_118 + 0x38))();
      }
      *(float *)(lVar8 + 0x10) = fVar9;
      if (*(longlong *)(lVar8 + 0x28) == 0) {
        puStack_b8 = &UNK_1809fcc58;
        puStack_b0 = auStack_a0;
        auStack_a0[0] = 0;
        uStack_a8 = 0x18;
        strcpy_s(auStack_a0,0x40,&UNK_180a1ac50);
        uStack_138 = CONCAT31(uStack_138._1_3_,1);
        uStack_128 = uVar1;
        FUN_1800db460(&puStack_b8,lVar8 + 0x28);
        puStack_b8 = &UNK_18098bcb0;
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803ae160(uint64_t param_1,ulonglong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803ae160(uint64_t param_1,ulonglong *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  void *puVar6;
  void *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  if ((ulonglong)((longlong)(param_2[2] - *param_2) / 0x58) < 0x40) {
    puVar2 = (uint64_t *)
             FUN_18062b420(_DAT_180c8ed18,0x1600,(char)param_2[3],param_4,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_2[1];
    puVar3 = (uint64_t *)*param_2;
    puVar4 = puVar2;
    if (puVar3 != puVar1) {
      do {
        *puVar4 = &UNK_18098bcb0;
        puVar4[1] = 0;
        *(int32_t *)(puVar4 + 2) = 0;
        *puVar4 = &UNK_1809fcc58;
        puVar4[1] = puVar4 + 3;
        *(int32_t *)(puVar4 + 2) = 0;
        *(int8_t *)(puVar4 + 3) = 0;
        *(int32_t *)(puVar4 + 2) = *(int32_t *)(puVar3 + 2);
        puVar7 = &system_buffer_ptr;
        if ((void *)puVar3[1] != (void *)0x0) {
          puVar7 = (void *)puVar3[1];
        }
        strcpy_s(puVar4[1],0x40,puVar7);
        puVar3 = puVar3 + 0xb;
        puVar4 = puVar4 + 0xb;
      } while (puVar3 != puVar1);
      puVar1 = (uint64_t *)param_2[1];
      puVar3 = (uint64_t *)*param_2;
      if (puVar3 != puVar1) {
        do {
          (**(code **)*puVar3)(puVar3,0);
          puVar3 = puVar3 + 0xb;
        } while (puVar3 != puVar1);
        puVar3 = (uint64_t *)*param_2;
      }
    }
    if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar3);
    }
    *param_2 = (ulonglong)puVar2;
    param_2[1] = (ulonglong)puVar4;
    param_2[2] = (ulonglong)(puVar2 + 0x2c0);
  }
  FUN_1800b8370(param_2,&system_data_9210);
  FUN_1800b8370(param_2,&system_data_9270);
  FUN_1800b8370(param_2,&system_data_9450);
  FUN_1800b8370(param_2,&system_data_93f0);
  FUN_1800b8370(param_2,&system_data_94b0);
  FUN_1800b8370(param_2,&system_data_91b0);
  FUN_1800b8370(param_2,&system_data_9390);
  FUN_1800b8370(param_2,&system_data_92d0);
  FUN_1800b8370(param_2,&system_data_9510);
  FUN_1800b8370(param_2,&system_data_9330);
  FUN_1800b8370(param_2,&system_data_9570);
  FUN_1800b8370(param_2,&system_data_95d0);
  FUN_1800b8370(param_2,&system_data_9690);
  FUN_1800b8370(param_2,&system_data_96f0);
  FUN_1800b8370(param_2,&system_data_9750);
  FUN_1800b8370(param_2,&system_data_97b0);
  FUN_1800b8370(param_2,&system_data_9810);
  FUN_1800b8370(param_2,&system_data_9870);
  FUN_1800b8370(param_2,&system_data_98d0);
  FUN_1800b8370(param_2,&system_data_9930);
  FUN_1800b8370(param_2,&system_data_9990);
  FUN_1800b8370(param_2,&system_data_99f0);
  FUN_1800b8370(param_2,&system_data_9a50);
  FUN_1800b8370(param_2,&system_data_9ab0);
  FUN_1800b8370(param_2,&system_data_9b70);
  FUN_1800b8370(param_2,&system_data_9bd0);
  FUN_1800b8370(param_2,&system_data_9c30);
  FUN_1800b8370(param_2,&system_data_9c90);
  FUN_1800b8370(param_2,&system_data_9cf0);
  FUN_1800b8370(param_2,&system_data_9d50);
  FUN_1800b8370(param_2,&system_data_9db0);
  FUN_1800b8370(param_2,&system_data_9e10);
  FUN_1800b8370(param_2,&system_data_9e70);
  FUN_1800b8370(param_2,&system_data_9ed0);
  FUN_1800b8370(param_2,&system_data_9f30);
  FUN_1800b8370(param_2,&system_data_9f90);
  FUN_1800b8370(param_2,&system_data_9ff0);
  FUN_1800b8370(param_2,&system_data_a050);
  FUN_1800b8370(param_2,&system_data_a0b0);
  FUN_1800b8370(param_2,&system_data_a110);
  FUN_1800b8370(param_2,&system_data_a170);
  FUN_1800b8370(param_2,&system_data_a1d0);
  FUN_1800b8370(param_2,&system_data_a230);
  FUN_1800b8370(param_2,&system_data_a290);
  FUN_1800b8370(param_2,&system_data_9b10);
  uVar5 = param_2[1];
  if (uVar5 < param_2[2]) {
    param_2[1] = uVar5 + 0x58;
    FUN_1800b8300(uVar5);
    return;
  }
  uVar8 = *param_2;
  lVar10 = (longlong)(uVar5 - uVar8) / 0x58;
  puVar1 = (uint64_t *)0x0;
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 == 0) goto LAB_1800b8417;
  }
  puVar1 = (uint64_t *)
           FUN_18062b420(_DAT_180c8ed18,lVar10 * 0x58,(char)param_2[3],param_4,0xfffffffffffffffe);
  uVar5 = param_2[1];
  uVar8 = *param_2;
LAB_1800b8417:
  puVar3 = puVar1;
  if (uVar8 != uVar5) {
    lVar9 = uVar8 - (longlong)puVar1;
    do {
      *puVar3 = &UNK_18098bcb0;
      puVar3[1] = 0;
      *(int32_t *)(puVar3 + 2) = 0;
      *puVar3 = &UNK_1809fcc58;
      puVar3[1] = puVar3 + 3;
      *(int32_t *)(puVar3 + 2) = 0;
      *(int8_t *)(puVar3 + 3) = 0;
      *(int32_t *)(puVar3 + 2) = *(int32_t *)(lVar9 + 0x10 + (longlong)puVar3);
      puVar7 = *(void **)(lVar9 + 8 + (longlong)puVar3);
      puVar6 = &system_buffer_ptr;
      if (puVar7 != (void *)0x0) {
        puVar6 = puVar7;
      }
      strcpy_s(puVar3[1],0x40,puVar6);
      puVar3 = puVar3 + 0xb;
    } while (lVar9 + (longlong)puVar3 != uVar5);
  }
  FUN_1800b8300(puVar3,&system_data_9630);
  puVar4 = (uint64_t *)param_2[1];
  puVar2 = (uint64_t *)*param_2;
  if (puVar2 != puVar4) {
    do {
      (**(code **)*puVar2)(puVar2,0);
      puVar2 = puVar2 + 0xb;
    } while (puVar2 != puVar4);
    puVar2 = (uint64_t *)*param_2;
  }
  if (puVar2 == (uint64_t *)0x0) {
    *param_2 = (ulonglong)puVar1;
    param_2[1] = (ulonglong)(puVar3 + 0xb);
    param_2[2] = (ulonglong)(puVar1 + lVar10 * 0xb);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803ae570(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_1803ae570(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  int32_t *puVar3;
  void *puVar4;
  uint uVar5;
  int8_t auStack_4d8 [32];
  void *puStack_4b8;
  longlong lStack_4b0;
  uint uStack_4a8;
  int32_t uStack_4a0;
  uint64_t uStack_498;
  void *puStack_488;
  int8_t *puStack_480;
  int32_t uStack_478;
  int8_t auStack_470 [520];
  void *apuStack_268 [68];
  ulonglong uStack_48;
  
  uStack_498 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_4d8;
  FUN_1806279c0(&puStack_4b8);
  uVar5 = uStack_4a8 + 0x19;
  FUN_1806277c0(&puStack_4b8,uVar5);
  puVar3 = (int32_t *)((ulonglong)uStack_4a8 + lStack_4b0);
  *puVar3 = 0x6f6d7441;
  puVar3[1] = 0x65687073;
  puVar3[2] = 0x2f736572;
  puVar3[3] = 0x65746e49;
  *(uint64_t *)(puVar3 + 4) = 0x646574616c6f7072;
  *(int16_t *)(puVar3 + 6) = 0x2f;
  uStack_4a8 = uVar5;
  lVar2 = FUN_180624440(&puStack_488,&puStack_4b8);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(lVar2 + 8) != (void *)0x0) {
    puVar4 = *(void **)(lVar2 + 8);
  }
  (**(code **)(puStack_4b8 + 0x10))(&puStack_4b8,puVar4);
  puStack_488 = &UNK_18098bcb0;
  cVar1 = FUN_180624a00(&puStack_4b8);
  if (cVar1 == '\0') {
LAB_1803ae6c2:
    puStack_488 = &UNK_1809feda8;
    puStack_480 = auStack_470;
    auStack_470[0] = 0;
    uStack_478 = 0x2e;
    strcpy_s(auStack_470,0x100,&UNK_180a230e0);
    lVar2 = FUN_180624440(apuStack_268,&puStack_488);
    puVar4 = &system_buffer_ptr;
    if (*(void **)(lVar2 + 8) != (void *)0x0) {
      puVar4 = *(void **)(lVar2 + 8);
    }
    (**(code **)(puStack_4b8 + 0x10))(&puStack_4b8,puVar4);
    apuStack_268[0] = &UNK_18098bcb0;
    puStack_488 = &UNK_18098bcb0;
    cVar1 = FUN_180624a00(&puStack_4b8);
    if (cVar1 == '\0') goto LAB_1803ae7d0;
    if (0 < *(int *)(param_3 + 0x10)) {
      FUN_1806277c0(&puStack_4b8,uStack_4a8 + *(int *)(param_3 + 0x10));
                    // WARNING: Subroutine does not return
      memcpy((ulonglong)uStack_4a8 + lStack_4b0,*(uint64_t *)(param_3 + 8),
             (longlong)(*(int *)(param_3 + 0x10) + 1));
    }
    uVar5 = uStack_4a8 + 4;
    FUN_1806277c0(&puStack_4b8,uVar5);
    *(int32_t *)((ulonglong)uStack_4a8 + lStack_4b0) = 0x6c6d782e;
    *(int8_t *)((int32_t *)((ulonglong)uStack_4a8 + lStack_4b0) + 1) = 0;
    uStack_4a8 = uVar5;
  }
  else {
    if (0 < *(int *)(param_3 + 0x10)) {
      FUN_1806277c0(&puStack_4b8,uStack_4a8 + *(int *)(param_3 + 0x10));
                    // WARNING: Subroutine does not return
      memcpy((ulonglong)uStack_4a8 + lStack_4b0,*(uint64_t *)(param_3 + 8),
             (longlong)(*(int *)(param_3 + 0x10) + 1));
    }
    uVar5 = uStack_4a8 + 4;
    FUN_1806277c0(&puStack_4b8,uVar5);
    *(int32_t *)((ulonglong)uStack_4a8 + lStack_4b0) = 0x6c6d782e;
    *(int8_t *)((int32_t *)((ulonglong)uStack_4a8 + lStack_4b0) + 1) = 0;
    uStack_4a8 = uVar5;
    cVar1 = FUN_180624af0(&puStack_4b8);
    if (cVar1 == '\0') goto LAB_1803ae6c2;
  }
  FUN_1803aa2e0(param_1,&puStack_4b8);
LAB_1803ae7d0:
  puStack_4b8 = &UNK_180a3c3e0;
  if (lStack_4b0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_4b0 = 0;
  uStack_4a0 = 0;
  puStack_4b8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_4d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803ae820(uint64_t param_1,longlong param_2)
void FUN_1803ae820(uint64_t param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  int32_t *puVar3;
  void *puVar4;
  uint uVar5;
  int8_t auStack_4b8 [32];
  void *puStack_498;
  longlong lStack_490;
  uint uStack_488;
  int32_t uStack_480;
  uint64_t uStack_478;
  void *puStack_468;
  int8_t *puStack_460;
  int32_t uStack_458;
  int8_t auStack_450 [520];
  void *apuStack_248 [68];
  ulonglong uStack_28;
  
  uStack_478 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_4b8;
  FUN_1806279c0(&puStack_498,param_1);
  uVar5 = uStack_488 + 0x19;
  FUN_1806277c0(&puStack_498,uVar5);
  puVar3 = (int32_t *)((ulonglong)uStack_488 + lStack_490);
  *puVar3 = 0x6f6d7441;
  puVar3[1] = 0x65687073;
  puVar3[2] = 0x2f736572;
  puVar3[3] = 0x65746e49;
  *(uint64_t *)(puVar3 + 4) = 0x646574616c6f7072;
  *(int16_t *)(puVar3 + 6) = 0x2f;
  uStack_488 = uVar5;
  lVar2 = FUN_180624440(&puStack_468,&puStack_498);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(lVar2 + 8) != (void *)0x0) {
    puVar4 = *(void **)(lVar2 + 8);
  }
  (**(code **)(puStack_498 + 0x10))(&puStack_498,puVar4);
  puStack_468 = &UNK_18098bcb0;
  cVar1 = FUN_180624a00(&puStack_498);
  if (cVar1 == '\0') {
    puStack_468 = &UNK_1809feda8;
    puStack_460 = auStack_450;
    auStack_450[0] = 0;
    uStack_458 = 0x2e;
    strcpy_s(auStack_450,0x100,&UNK_180a230e0);
    lVar2 = FUN_180624440(apuStack_248,&puStack_468);
    puVar4 = &system_buffer_ptr;
    if (*(void **)(lVar2 + 8) != (void *)0x0) {
      puVar4 = *(void **)(lVar2 + 8);
    }
    (**(code **)(puStack_498 + 0x10))(&puStack_498,puVar4);
    apuStack_248[0] = &UNK_18098bcb0;
    puStack_468 = &UNK_18098bcb0;
    cVar1 = FUN_180624a00(&puStack_498);
    if (cVar1 == '\0') goto LAB_1803aea10;
  }
  if (0 < *(int *)(param_2 + 0x10)) {
    FUN_1806277c0(&puStack_498,uStack_488 + *(int *)(param_2 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)uStack_488 + lStack_490,*(uint64_t *)(param_2 + 8),
           (longlong)(*(int *)(param_2 + 0x10) + 1));
  }
  uVar5 = uStack_488 + 4;
  FUN_1806277c0(&puStack_498,uVar5);
  *(int32_t *)((ulonglong)uStack_488 + lStack_490) = 0x6c6d782e;
  *(int8_t *)((int32_t *)((ulonglong)uStack_488 + lStack_490) + 1) = 0;
  uStack_488 = uVar5;
  FUN_180624af0(&puStack_498);
LAB_1803aea10:
  puStack_498 = &UNK_180a3c3e0;
  if (lStack_490 == 0) {
    lStack_490 = 0;
    uStack_480 = 0;
    puStack_498 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_4b8);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1803aea70(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803aea70(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1803aeb70(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1803aea90(ulonglong *param_1,uint64_t *param_2)
void FUN_1803aea90(ulonglong *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  longlong lVar6;
  
  puVar1 = (uint64_t *)param_1[1];
  if (puVar1 < (uint64_t *)param_1[2]) {
    param_1[1] = (ulonglong)(puVar1 + 2);
    uVar4 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar4;
    return;
  }
  puVar2 = (uint64_t *)*param_1;
  lVar6 = (longlong)puVar1 - (longlong)puVar2 >> 4;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) {
      puVar5 = (uint64_t *)0x0;
      goto LAB_1803aeb18;
    }
  }
  uVar3 = param_1[0x23];
  param_1[0x23] = lVar6 * 0x10 + uVar3;
  puVar5 = (uint64_t *)((longlong)param_1 + uVar3 + 0x18);
LAB_1803aeb18:
  if (puVar2 == puVar1) {
    uVar4 = param_2[1];
    *puVar5 = *param_2;
    puVar5[1] = uVar4;
    *param_1 = (ulonglong)puVar5;
    param_1[1] = (ulonglong)(puVar5 + 2);
    param_1[2] = (ulonglong)(puVar5 + lVar6 * 2);
    return;
  }
                    // WARNING: Subroutine does not return
  memmove(puVar5,puVar2,(longlong)puVar1 - (longlong)puVar2);
}






// 函数: void FUN_1803aeb70(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803aeb70(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_1803aeb70(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    param_2[5] = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}



longlong * FUN_1803aec00(longlong *param_1,longlong *param_2,int param_3)

{
  if (param_3 == 3) {
    return (longlong *)0x180c06340;
  }
  if (param_3 == 4) {
    return param_1;
  }
  if (param_3 == 0) {
    param_2 = (longlong *)*param_1;
  }
  else {
    if (param_3 == 1) {
      param_2 = (longlong *)*param_2;
      *param_1 = (longlong)param_2;
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x28))(param_2);
      }
      return (longlong *)0x0;
    }
    if (param_3 != 2) {
      return (longlong *)0x0;
    }
    *param_1 = *param_2;
    *param_2 = 0;
    param_2 = (longlong *)*param_2;
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x38))();
  }
  return (longlong *)0x0;
}






// 函数: void FUN_1803aeca0(int param_1,int param_2,uint64_t *param_3)
void FUN_1803aeca0(int param_1,int param_2,uint64_t *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (longlong)param_1;
  if (lVar1 < param_2) {
    lVar2 = lVar1 << 4;
    lVar1 = param_2 - lVar1;
    do {
      FUN_1804160b0(*(uint64_t *)(*(longlong *)*param_3 + lVar2),
                    *(uint64_t *)(*(longlong *)*param_3 + 8 + lVar2));
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}






// 函数: void FUN_1803aecb8(void)
void FUN_1803aecb8(void)

{
  longlong in_RAX;
  longlong lVar1;
  uint64_t *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar2;
  
  lVar1 = in_RAX << 4;
  lVar2 = unaff_RDI - in_RAX;
  do {
    FUN_1804160b0(*(uint64_t *)(*(longlong *)*unaff_RSI + lVar1),
                  *(uint64_t *)(*(longlong *)*unaff_RSI + 8 + lVar1));
    lVar1 = lVar1 + 0x10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}






// 函数: void FUN_1803aecf3(void)
void FUN_1803aecf3(void)

{
  return;
}






// 函数: void FUN_1803aed40(int param_1,int param_2,longlong *param_3)
void FUN_1803aed40(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  void *puVar2;
  longlong lVar3;
  
  if (param_1 < param_2) {
    param_3 = (longlong *)*param_3;
    do {
      if (param_1 == 0) {
        FUN_180417fd0(*param_3 + 0xd88,&system_data_a2e8,param_3[1]);
        puVar2 = &system_data_a2e8;
        lVar3 = param_3[1];
        lVar1 = *param_3 + 0xd88;
LAB_1803aedff:
        FUN_180418190(lVar1,puVar2,lVar3);
      }
      else {
        if (param_1 == 1) {
          FUN_180417fd0(*param_3 + 0xdb8,&system_data_a308,param_3[2]);
          puVar2 = &system_data_a308;
          lVar3 = param_3[2];
          lVar1 = *param_3 + 0xdb8;
          goto LAB_1803aedff;
        }
        if (param_1 == 2) {
          FUN_180417fd0(*param_3 + 0xde8,&system_data_a328,param_3[3]);
          puVar2 = &system_data_a328;
          lVar3 = param_3[3];
          lVar1 = *param_3 + 0xde8;
          goto LAB_1803aedff;
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1803aee20(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c06300;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}






// 函数: void FUN_1803aef00(longlong param_1,longlong *param_2)
void FUN_1803aef00(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint64_t uVar4;
  uint64_t uStack_30;
  uint64_t uStack_28;
  code *pcStack_20;
  code *pcStack_18;
  
  uVar4 = 0xfffffffffffffffe;
  plVar2 = (longlong *)*param_2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(longlong **)(param_1 + 0x150);
  *(longlong **)(param_1 + 0x150) = plVar2;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x150) + 0x328);
    *puVar1 = *puVar1 | 0x20000000;
    uStack_30 = 0;
    uStack_28 = 0;
    pcStack_20 = (code *)0x0;
    pcStack_18 = _guard_check_icall;
    FUN_18023c450(*(uint64_t *)(param_1 + 0x150),0,0xffffffff,&uStack_30,uVar4);
    if (pcStack_20 != (code *)0x0) {
      (*pcStack_20)(&uStack_30,0,0);
    }
  }
  *(int *)(param_1 + 0x340) = *(int *)(param_1 + 0x340) + 1;
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1803aeff0(longlong param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)

{
  longlong lVar1;
  int iVar2;
  uint64_t *puVar3;
  
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x28) = 3;
  *(longlong *)param_1 = param_1;
  *(longlong *)(param_1 + 8) = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  lVar1 = param_1 + 0x30;
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(int32_t *)(param_1 + 0x58) = 3;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(param_1 + 0x38) = lVar1;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(int8_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x50) = 0;
  lVar1 = param_1 + 0x60;
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(int32_t *)(param_1 + 0x88) = 3;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(param_1 + 0x68) = lVar1;
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(int8_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x80) = 0;
  lVar1 = param_1 + 0x90;
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(int32_t *)(param_1 + 0xb8) = 3;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(param_1 + 0x98) = lVar1;
  *(uint64_t *)(param_1 + 0xa0) = 0;
  *(int8_t *)(param_1 + 0xa8) = 0;
  *(uint64_t *)(param_1 + 0xb0) = 0;
  lVar1 = param_1 + 0xc0;
  *(uint64_t *)(param_1 + 0xd8) = 0;
  *(int32_t *)(param_1 + 0xe8) = 3;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(param_1 + 200) = lVar1;
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(int8_t *)(param_1 + 0xd8) = 0;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(uint64_t *)(param_1 + 0xf0) = 0;
  *(uint64_t *)(param_1 + 0xf8) = 0;
  *(uint64_t *)(param_1 + 0x100) = 0;
  *(int32_t *)(param_1 + 0x108) = 3;
  *(uint64_t *)(param_1 + 0x110) = 0;
  *(uint64_t *)(param_1 + 0x118) = 0;
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(int32_t *)(param_1 + 0x128) = 3;
  *(uint64_t *)(param_1 + 0x130) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(uint64_t *)(param_1 + 0x140) = 0;
  *(int32_t *)(param_1 + 0x148) = 3;
  lVar1 = param_1 + 0x150;
  *(uint64_t *)(param_1 + 0x168) = 0;
  *(int32_t *)(param_1 + 0x178) = 3;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(param_1 + 0x158) = lVar1;
  *(uint64_t *)(param_1 + 0x160) = 0;
  *(int8_t *)(param_1 + 0x168) = 0;
  *(uint64_t *)(param_1 + 0x170) = 0;
  _Mtx_init_in_situ(param_1 + 0x198,2,param_3,param_4,0xfffffffffffffffe);
  *(uint64_t *)(param_1 + 400) = 0;
  puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,3);
  *puVar3 = &UNK_18098bcb0;
  puVar3[1] = 0;
  *(int32_t *)(puVar3 + 2) = 0;
  *puVar3 = &UNK_180a3c3e0;
  puVar3[3] = 0;
  puVar3[1] = 0;
  *(int32_t *)(puVar3 + 2) = 0;
  *(uint64_t **)(param_1 + 0x188) = puVar3;
  *(int8_t *)(param_1 + 0x1e8) = 0;
  if (system_data_2847 != '\0') {
    if (_DAT_180bf5218 == 10) {
      iVar2 = strcmp(_DAT_180bf5210,&UNK_180a01db8);
    }
    else if (_DAT_180bf5218 == 0xc) {
      iVar2 = strcmp(_DAT_180bf5210,&UNK_180a01de0);
    }
    else {
      if (_DAT_180bf5218 != 0xd) {
        return param_1;
      }
      iVar2 = strcmp(_DAT_180bf5210,&UNK_180a01e30);
    }
    if (iVar2 == 0) {
      *(int8_t *)(param_1 + 0x1e8) = 1;
    }
  }
  return param_1;
}






// 函数: void FUN_1803af240(longlong param_1)
void FUN_1803af240(longlong param_1)

{
  uint64_t *puVar1;
  longlong lVar2;
  
  puVar1 = *(uint64_t **)(param_1 + 0x188);
  if (puVar1 != (uint64_t *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
  }
  *(uint64_t *)(param_1 + 0x188) = 0;
  _Mtx_destroy_in_situ();
  FUN_18004b730();
  if (*(longlong *)(param_1 + 0x130) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_18005d580();
  if (*(longlong *)(param_1 + 0xf0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_18004b730();
  FUN_18004b730();
  FUN_18004b730();
  FUN_18004b730();
  FUN_1803b9430(param_1,*(uint64_t *)(param_1 + 0x10));
  return;
}






// 函数: void FUN_1803af370(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803af370(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1803b9430(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1803af3a0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803af3a0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1803b9430(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




