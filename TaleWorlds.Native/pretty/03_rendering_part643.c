#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part643.c - 12 个函数

// 函数: void FUN_18062b1e0(longlong param_1,ulonglong param_2,ulonglong param_3,int8_t param_4)
void FUN_18062b1e0(longlong param_1,ulonglong param_2,ulonglong param_3,int8_t param_4)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  int8_t auStack_178 [32];
  void **ppuStack_158;
  uint64_t uStack_148;
  uint64_t uStack_140;
  void *puStack_138;
  int8_t *puStack_130;
  int32_t uStack_128;
  int8_t auStack_120 [32];
  void *puStack_100;
  int8_t *puStack_f8;
  int32_t uStack_f0;
  int8_t auStack_e8 [32];
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [32];
  void *puStack_90;
  int8_t *puStack_88;
  int32_t uStack_80;
  int8_t auStack_78 [32];
  ulonglong uStack_58;
  
  uStack_148 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  if (param_3 < 0x10) {
    param_3 = 0x10;
  }
  if (param_3 == 0x10) {
    FUN_18062b420(param_1,param_2,param_4);
  }
  else if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      (**(code **)(param_1 + 0x28))(param_2 & 0xffffffff);
    }
    lVar3 = FUN_18064eb10(*(uint64_t *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
                           0x10),param_2,param_3,0);
    if (lVar3 == 0) {
      plVar1 = *(longlong **)(render_system_data_memory + 0x18);
      if (plVar1 != (longlong *)0x0) {
        pcVar2 = *(code **)(*plVar1 + 0x20);
        puStack_90 = &unknown_var_672_ptr;
        auStack_78[0] = 0;
        uStack_80 = 1;
        puStack_88 = auStack_78;
        strcpy_s(auStack_78,0x20,&system_state_8120);
        puStack_c8 = &unknown_var_672_ptr;
        puStack_c0 = auStack_b0;
        auStack_b0[0] = 0;
        uStack_b8 = 0xc;
        strcpy_s(auStack_b0,0x20,&unknown_var_4248_ptr);
        puStack_100 = &unknown_var_672_ptr;
        puStack_f8 = auStack_e8;
        auStack_e8[0] = 0;
        uStack_f0 = 7;
        strcpy_s(auStack_e8,0x20,&unknown_var_48_ptr);
        puStack_138 = &unknown_var_672_ptr;
        puStack_130 = auStack_120;
        auStack_120[0] = 0;
        uStack_128 = 0xe;
        strcpy_s(auStack_120,0x20,&unknown_var_56_ptr);
        ppuStack_158 = &puStack_90;
        (*pcVar2)(plVar1,&puStack_138,&puStack_100,&puStack_c8);
        puStack_138 = &system_state_ptr;
        puStack_100 = &system_state_ptr;
        puStack_c8 = &system_state_ptr;
        puStack_90 = &system_state_ptr;
      }
      FUN_180626ee0(&unknown_var_3904_ptr,param_2);
    }
    uStack_140 = FUN_18064e990(lVar3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062b420(uint64_t param_1,ulonglong param_2)
void FUN_18062b420(uint64_t param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  int8_t auStack_148 [32];
  void **ppuStack_128;
  uint64_t uStack_118;
  void *puStack_110;
  int8_t *puStack_108;
  int32_t uStack_100;
  int8_t auStack_f8 [32];
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [32];
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [32];
  void *puStack_68;
  int8_t *puStack_60;
  int32_t uStack_58;
  int8_t auStack_50 [32];
  ulonglong uStack_30;
  
  uStack_118 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_148;
  if (param_2 == 0) goto LAB_18062b644;
  uVar5 = param_2;
  if (param_2 < 0x10) {
    uVar5 = 0x10;
  }
  if (uVar5 < 0x401) {
    lVar1 = *(longlong *)
             (*(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
               0x10) + 8 + (uVar5 + 7 & 0xfffffffffffffff8));
    puVar4 = *(uint64_t **)(lVar1 + 0x10);
    if (puVar4 == (uint64_t *)0x0) goto LAB_18062b4be;
    *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
    *(uint64_t *)(lVar1 + 0x10) = *puVar4;
  }
  else {
LAB_18062b4be:
    puVar4 = (uint64_t *)FUN_18064ddd0();
  }
  if (puVar4 == (uint64_t *)0x0) {
    plVar2 = *(longlong **)(render_system_data_memory + 0x18);
    if (plVar2 != (longlong *)0x0) {
      pcVar3 = *(code **)(*plVar2 + 0x20);
      puStack_68 = &unknown_var_672_ptr;
      puStack_60 = auStack_50;
      auStack_50[0] = 0;
      uStack_58 = 1;
      strcpy_s(auStack_50,0x20,&system_state_8120);
      puStack_a0 = &unknown_var_672_ptr;
      puStack_98 = auStack_88;
      auStack_88[0] = 0;
      uStack_90 = 0xc;
      strcpy_s(auStack_88,0x20,&unknown_var_4248_ptr);
      puStack_d8 = &unknown_var_672_ptr;
      puStack_d0 = auStack_c0;
      auStack_c0[0] = 0;
      uStack_c8 = 7;
      strcpy_s(auStack_c0,0x20,&unknown_var_48_ptr);
      puStack_110 = &unknown_var_672_ptr;
      puStack_108 = auStack_f8;
      auStack_f8[0] = 0;
      uStack_100 = 0xe;
      strcpy_s(auStack_f8,0x20,&unknown_var_56_ptr);
      ppuStack_128 = &puStack_68;
      (*pcVar3)(plVar2,&puStack_110,&puStack_d8,&puStack_a0);
      puStack_110 = &system_state_ptr;
      puStack_d8 = &system_state_ptr;
      puStack_a0 = &system_state_ptr;
      puStack_68 = &system_state_ptr;
    }
    FUN_180626ee0(&unknown_var_4272_ptr,param_2);
  }
  FUN_18064e990(puVar4);
LAB_18062b644:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062b680(uint64_t param_1,longlong param_2,ulonglong param_3)
void FUN_18062b680(uint64_t param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  int8_t auStack_158 [32];
  void **ppuStack_138;
  uint64_t uStack_128;
  void *puStack_120;
  int8_t *puStack_118;
  int32_t uStack_110;
  int8_t auStack_108 [32];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [32];
  void *puStack_b0;
  int8_t *puStack_a8;
  int32_t uStack_a0;
  int8_t auStack_98 [32];
  void *puStack_78;
  int8_t *puStack_70;
  int32_t uStack_68;
  int8_t auStack_60 [32];
  ulonglong uStack_40;
  
  uStack_128 = 0xfffffffffffffffe;
  uStack_40 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_158;
  if (param_2 == 0) {
    FUN_18062b420(param_1,param_3,3);
  }
  else if (param_3 != 0) {
    uVar4 = param_3;
    if (param_3 < 0x10) {
      uVar4 = 0x10;
    }
    lVar3 = FUN_18064ea20(*(uint64_t *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
                           0x10),param_2,uVar4);
    if (lVar3 == 0) {
      plVar1 = *(longlong **)(render_system_data_memory + 0x18);
      if (plVar1 != (longlong *)0x0) {
        pcVar2 = *(code **)(*plVar1 + 0x20);
        puStack_78 = &unknown_var_672_ptr;
        puStack_70 = auStack_60;
        auStack_60[0] = 0;
        uStack_68 = 1;
        strcpy_s(auStack_60,0x20,&system_state_8120);
        puStack_b0 = &unknown_var_672_ptr;
        puStack_a8 = auStack_98;
        auStack_98[0] = 0;
        uStack_a0 = 0xc;
        strcpy_s(auStack_98,0x20,&unknown_var_4248_ptr);
        puStack_e8 = &unknown_var_672_ptr;
        puStack_e0 = auStack_d0;
        auStack_d0[0] = 0;
        uStack_d8 = 7;
        strcpy_s(auStack_d0,0x20,&unknown_var_48_ptr);
        puStack_120 = &unknown_var_672_ptr;
        puStack_118 = auStack_108;
        auStack_108[0] = 0;
        uStack_110 = 0xe;
        strcpy_s(auStack_108,0x20,&unknown_var_56_ptr);
        ppuStack_138 = &puStack_78;
        (*pcVar2)(plVar1,&puStack_120,&puStack_e8,&puStack_b0);
        puStack_120 = &system_state_ptr;
        puStack_e8 = &system_state_ptr;
        puStack_b0 = &system_state_ptr;
        puStack_78 = &system_state_ptr;
      }
      FUN_180626ee0(&unknown_var_3904_ptr,param_3);
    }
    FUN_18064e990(lVar3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062b8b0(uint64_t param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
void FUN_18062b8b0(uint64_t param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
                  int8_t param_5)

{
  uint64_t uVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  int8_t auStack_168 [32];
  void **ppuStack_148;
  uint64_t uStack_138;
  void *puStack_130;
  int8_t *puStack_128;
  int32_t uStack_120;
  int8_t auStack_118 [32];
  void *puStack_f8;
  int8_t *puStack_f0;
  int32_t uStack_e8;
  int8_t auStack_e0 [32];
  void *puStack_c0;
  int8_t *puStack_b8;
  int32_t uStack_b0;
  int8_t auStack_a8 [32];
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [32];
  ulonglong uStack_50;
  
  uStack_138 = 0xfffffffffffffffe;
  uStack_50 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_168;
  if (param_4 < 0x10) {
    param_4 = 0x10;
  }
  if (param_2 == 0) {
    FUN_18062b1e0(param_1,param_3,param_4);
  }
  else if (param_4 == 0x10) {
    FUN_18062b680();
  }
  else if (param_3 != 0) {
    uVar1 = *(uint64_t *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0x10
             );
    if (param_4 < 9) {
      lVar4 = FUN_18064ea20(uVar1,param_2,param_3,param_5);
    }
    else {
      ppuStack_148 = (void **)(param_2 % param_4);
      lVar4 = FUN_18064ec60(uVar1,param_2,param_3,param_4);
    }
    if (lVar4 == 0) {
      plVar2 = *(longlong **)(render_system_data_memory + 0x18);
      if (plVar2 != (longlong *)0x0) {
        pcVar3 = *(code **)(*plVar2 + 0x20);
        puStack_88 = &unknown_var_672_ptr;
        puStack_80 = auStack_70;
        auStack_70[0] = 0;
        uStack_78 = 1;
        strcpy_s(auStack_70,0x20,&system_state_8120);
        puStack_c0 = &unknown_var_672_ptr;
        puStack_b8 = auStack_a8;
        auStack_a8[0] = 0;
        uStack_b0 = 0xc;
        strcpy_s(auStack_a8,0x20,&unknown_var_4248_ptr);
        puStack_f8 = &unknown_var_672_ptr;
        puStack_f0 = auStack_e0;
        auStack_e0[0] = 0;
        uStack_e8 = 7;
        strcpy_s(auStack_e0,0x20,&unknown_var_48_ptr);
        puStack_130 = &unknown_var_672_ptr;
        puStack_128 = auStack_118;
        auStack_118[0] = 0;
        uStack_120 = 0xe;
        strcpy_s(auStack_118,0x20,&unknown_var_56_ptr);
        ppuStack_148 = &puStack_88;
        (*pcVar3)(plVar2,&puStack_130,&puStack_f8,&puStack_c0);
        puStack_130 = &system_state_ptr;
        puStack_f8 = &system_state_ptr;
        puStack_c0 = &system_state_ptr;
        puStack_88 = &system_state_ptr;
      }
      FUN_180626ee0(&unknown_var_3904_ptr,param_3);
    }
    FUN_18064e990(lVar4);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_168);
}



int8_t FUN_18062bb10(uint64_t param_1,longlong param_2)

{
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return 1;
}





// 函数: void FUN_18062bb40(void)
void FUN_18062bb40(void)

{
  FUN_18062b8b0();
  return;
}





// 函数: void FUN_18062bb70(longlong param_1,longlong param_2)
void FUN_18062bb70(longlong param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *puVar4;
  char *pcVar5;
  
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar4 = *(void **)(param_1 + 8);
  }
  uVar2 = strrchr(puVar4,0x2f);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar4 = *(void **)(param_1 + 8);
  }
  uVar3 = strrchr(puVar4,0x2f);
  if (uVar2 == 0) {
    if (uVar3 == 0) {
      pcVar5 = "";
      if (*(char **)(param_1 + 8) != (char *)0x0) {
        pcVar5 = *(char **)(param_1 + 8);
      }
      param_2 = param_2 - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        pcVar5[param_2] = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
    else {
      pcVar5 = (char *)(uVar3 + 1);
      param_2 = param_2 - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        pcVar5[param_2] = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
  }
  else if (uVar3 == 0) {
    pcVar5 = (char *)(uVar2 + 1);
    param_2 = param_2 - (longlong)pcVar5;
    do {
      cVar1 = *pcVar5;
      pcVar5[param_2] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  else if (uVar3 < uVar2) {
    pcVar5 = (char *)(uVar2 + 1);
    param_2 = param_2 - (longlong)pcVar5;
    do {
      cVar1 = *pcVar5;
      pcVar5[param_2] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  else {
    pcVar5 = (char *)(uVar3 + 1);
    param_2 = param_2 - (longlong)pcVar5;
    do {
      cVar1 = *pcVar5;
      pcVar5[param_2] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  return;
}





// 函数: void FUN_18062bc90(longlong param_1,int8_t *param_2)
void FUN_18062bc90(longlong param_1,int8_t *param_2)

{
  longlong lVar1;
  void *puVar2;
  void *puVar3;
  
  puVar3 = &system_buffer_ptr;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar3 = *(void **)(param_1 + 8);
  }
  lVar1 = strrchr(puVar3,0x2f);
  if (lVar1 == 0) {
    puVar3 = &system_buffer_ptr;
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      puVar3 = *(void **)(param_1 + 8);
    }
  }
  else {
    puVar3 = (void *)(lVar1 + 1);
  }
  puVar2 = (void *)strchr(puVar3,0x2e);
  if (puVar2 == (void *)0x0) {
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      puVar2 = *(void **)(param_1 + 8);
    }
    puVar2 = puVar2 + *(int *)(param_1 + 0x10);
  }
  if ((longlong)puVar2 - (longlong)puVar3 == 0) {
    *param_2 = 0;
    return;
  }
                    // WARNING: Subroutine does not return
  memcpy(param_2,puVar3,(longlong)puVar2 - (longlong)puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062bd50(uint64_t param_1,longlong param_2)
void FUN_18062bd50(uint64_t param_1,longlong param_2)

{
  uint64_t *puVar1;
  byte *pbVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  char cVar6;
  byte *pbVar7;
  int iVar8;
  void *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int8_t auStack_a8 [32];
  uint64_t *puStack_88;
  uint64_t *puStack_80;
  uint64_t uStack_78;
  int32_t uStack_70;
  uint64_t uStack_68;
  void *puStack_60;
  byte *pbStack_58;
  int iStack_50;
  ulonglong uStack_38;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_a8;
  cVar6 = FUN_180624a00();
  if (cVar6 != '\0') {
    puStack_88 = (uint64_t *)0x0;
    puStack_80 = (uint64_t *)0x0;
    uVar10 = 0;
    uStack_78 = 0;
    uStack_70 = 3;
    FUN_18062d0d0(param_1,&puStack_88);
    puVar5 = puStack_80;
    puVar4 = puStack_88;
    uVar11 = (longlong)puStack_80 - (longlong)puStack_88 >> 5;
    puVar3 = puVar4;
    if (uVar11 != 0) {
      do {
        puVar1 = puVar4 + uVar10 * 4;
        cVar6 = FUN_180624af0(puVar1);
        if (cVar6 != '\0') {
          FUN_180627490(&puStack_60,puVar1);
          iVar8 = *(int *)(param_2 + 0x10);
          if (iStack_50 == iVar8) {
            if (iStack_50 != 0) {
              pbVar7 = pbStack_58;
              do {
                pbVar2 = pbVar7 + (*(longlong *)(param_2 + 8) - (longlong)pbStack_58);
                iVar8 = (uint)*pbVar7 - (uint)*pbVar2;
                if (iVar8 != 0) break;
                pbVar7 = pbVar7 + 1;
              } while (*pbVar2 != 0);
            }
LAB_18062be3d:
            if ((iVar8 == 0) && (cVar6 = FUN_18062da70(puVar1), cVar6 == '\0')) {
              puVar9 = &system_buffer_ptr;
              if ((void *)puVar1[1] != (void *)0x0) {
                puVar9 = (void *)puVar1[1];
              }
              FUN_180627340(&unknown_var_4944_ptr,puVar9);
            }
          }
          else if (iStack_50 == 0) goto LAB_18062be3d;
          puStack_60 = &system_state_ptr;
        }
        uVar10 = (ulonglong)((int)uVar10 + 1);
      } while (uVar10 < uVar11);
    }
    for (; puVar3 != puVar5; puVar3 = puVar3 + 4) {
      (**(code **)*puVar3)(puVar3,0);
    }
    if (puVar4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar4);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062bed0(uint64_t param_1)
void FUN_18062bed0(uint64_t param_1)

{
  uint64_t uVar1;
  longlong lVar2;
  void *puVar3;
  int8_t auStack_608 [32];
  int8_t *puStack_5e8;
  int32_t uStack_5e0;
  int32_t uStack_5d8;
  void *puStack_5d0;
  void *puStack_5c8;
  int32_t uStack_5b8;
  uint64_t uStack_5b0;
  int8_t *puStack_5a8;
  int iStack_59c;
  void *apuStack_598 [2];
  byte abStack_588 [8];
  int8_t auStack_580 [152];
  int8_t auStack_4e8 [96];
  int8_t auStack_488 [32];
  void *apuStack_468 [68];
  int8_t auStack_248 [560];
  ulonglong uStack_18;
  
  uStack_5b0 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_608;
  uStack_5d8 = 0;
  uVar1 = FUN_180624440(apuStack_468,param_1);
  FUN_1806279c0(&puStack_5d0,uVar1);
  apuStack_468[0] = &system_state_ptr;
  uStack_5e0 = 0x118;
  puStack_5e8 = auStack_248;
  MultiByteToWideChar(0xfde9,0,puStack_5c8,0xffffffff);
  apuStack_598[0] = &unknown_var_7528_ptr;
  __0__basic_ios_DU__char_traits_D_std___std__IEAA_XZ(auStack_4e8);
  uStack_5d8 = 1;
  __0__basic_istream_DU__char_traits_D_std___std__QEAA_PEAV__basic_streambuf_DU__char_traits_D_std___1__N_Z
            (apuStack_598,abStack_588,0,0);
  *(void **)((longlong)apuStack_598 + (longlong)*(int *)(apuStack_598[0] + 4)) = &unknown_var_7544_ptr
  ;
  *(int *)((longlong)&iStack_59c + (longlong)*(int *)(apuStack_598[0] + 4)) =
       *(int *)(apuStack_598[0] + 4) + -0xb0;
  FUN_18009ec20(abStack_588);
  lVar2 = FUN_18009ec80(abStack_588,auStack_248,0x25);
  if (lVar2 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((longlong)apuStack_598 + (longlong)*(int *)(apuStack_598[0] + 4),2);
  }
  if ((abStack_588[*(int *)(apuStack_598[0] + 4)] & 6) == 0) {
    _tellg___basic_istream_DU__char_traits_D_std___std__QEAA_AV__fpos_U_Mbstatet___2_XZ
              (apuStack_598,auStack_488);
  }
  else {
    puVar3 = &system_buffer_ptr;
    if (puStack_5c8 != (void *)0x0) {
      puVar3 = puStack_5c8;
    }
    FUN_180626f80(&unknown_var_4840_ptr,puVar3);
  }
  puStack_5a8 = auStack_4e8;
  *(void **)((longlong)apuStack_598 + (longlong)*(int *)(apuStack_598[0] + 4)) = &unknown_var_7544_ptr
  ;
  *(int *)((longlong)&iStack_59c + (longlong)*(int *)(apuStack_598[0] + 4)) =
       *(int *)(apuStack_598[0] + 4) + -0xb0;
  FUN_18009fb60(abStack_588);
  __1__basic_istream_DU__char_traits_D_std___std__UEAA_XZ(auStack_580);
  __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(auStack_4e8);
  puStack_5d0 = &system_data_buffer_ptr;
  if (puStack_5c8 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5c8 = (void *)0x0;
  uStack_5b8 = 0;
  puStack_5d0 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_608);
}



uint64_t FUN_18062c100(uint64_t param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int32_t uVar4;
  uint64_t uVar5;
  void *puStack_28;
  longlong lStack_20;
  uint uStack_18;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  FUN_1806279c0(&puStack_28);
  uVar2 = 0;
  if (uStack_18 != 0) {
    lVar1 = 0;
    do {
      if (*(char *)(lVar1 + lStack_20) == '\\') {
        *(char *)(lVar1 + lStack_20) = '/';
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 1;
    } while (uVar2 < uStack_18);
  }
  iVar3 = uStack_18 - 1;
  lVar1 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      if (*(char *)(lVar1 + lStack_20) == '/') goto LAB_18062c185;
      iVar3 = iVar3 + -1;
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  iVar3 = -1;
LAB_18062c185:
  FUN_180629a40(&puStack_28,param_1,0,iVar3,uVar4,uVar5);
  puStack_28 = &system_data_buffer_ptr;
  if (lStack_20 == 0) {
    return param_1;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062c1e0(uint64_t param_1,char param_2)
void FUN_18062c1e0(uint64_t param_1,char param_2)

{
  char cVar1;
  uint64_t uVar2;
  longlong lVar3;
  uint uVar4;
  char *pcVar5;
  int8_t auStack_4d8 [32];
  int8_t auStack_4b8 [8];
  char *pcStack_4b0;
  uint uStack_4a8;
  uint64_t uStack_498;
  void *apuStack_488 [68];
  int8_t auStack_268 [288];
  char acStack_148 [288];
  ulonglong uStack_28;
  
  uStack_498 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_4d8;
  cVar1 = FUN_180624a00();
  if (cVar1 == '\0') {
    if (param_2 != '\0') {
      uVar2 = FUN_180624440(apuStack_488,param_1);
      FUN_1806279c0(auStack_4b8,uVar2);
      apuStack_488[0] = &system_state_ptr;
      uVar4 = 0;
      if (uStack_4a8 != 0) {
        lVar3 = 0;
        do {
          if (pcStack_4b0[lVar3] == '\\') {
            pcStack_4b0[lVar3] = '/';
          }
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 1;
        } while (uVar4 < uStack_4a8);
      }
      pcVar5 = "";
      if (pcStack_4b0 != (char *)0x0) {
        pcVar5 = pcStack_4b0;
      }
      lVar3 = -(longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        pcVar5[(longlong)(acStack_148 + lVar3)] = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
                    // WARNING: Subroutine does not return
      memset(auStack_268,0,0x118);
    }
    FUN_180624910(param_1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_4d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062c470(uint64_t param_1)
void FUN_18062c470(uint64_t param_1)

{
  code *pcVar1;
  int iVar2;
  uint64_t uVar3;
  void *puVar4;
  int8_t auStack_4f8 [32];
  int16_t *puStack_4d8;
  int32_t uStack_4d0;
  void *puStack_4c8;
  void *puStack_4c0;
  int32_t uStack_4b0;
  uint64_t uStack_4a8;
  int32_t uStack_4a0;
  int16_t *puStack_498;
  uint64_t uStack_490;
  int16_t uStack_488;
  int32_t uStack_484;
  uint64_t uStack_480;
  uint64_t uStack_478;
  uint64_t uStack_470;
  void *apuStack_468 [68];
  int16_t auStack_248 [280];
  ulonglong uStack_18;
  
  uStack_470 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_4f8;
  uVar3 = FUN_180624440(apuStack_468,param_1);
  FUN_1806279c0(&puStack_4c8,uVar3);
  apuStack_468[0] = &system_state_ptr;
  puVar4 = &system_buffer_ptr;
  if (puStack_4c0 != (void *)0x0) {
    puVar4 = puStack_4c0;
  }
  uStack_4d0 = 0x118;
  puStack_4d8 = auStack_248;
  iVar2 = MultiByteToWideChar(0xfde9,0,puVar4,0xffffffff);
  if ((ulonglong)((longlong)iVar2 * 2) < 0x230) {
    auStack_248[iVar2] = 0;
    if ((ulonglong)((longlong)(iVar2 + 1) * 2) < 0x230) {
      auStack_248[iVar2 + 1] = 0;
      uStack_4a8 = 0;
      uStack_4a0 = 3;
      puStack_498 = auStack_248;
      uStack_490 = 0;
      uStack_488 = 0x14;
      uStack_484 = 0;
      uStack_478 = 0;
      uStack_480 = 0;
      SHFileOperationW(&uStack_4a8);
      puStack_4c8 = &system_data_buffer_ptr;
      if (puStack_4c0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_4c0 = (void *)0x0;
      uStack_4b0 = 0;
      puStack_4c8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_4f8);
    }
    FUN_1808fcdc8();
  }
  FUN_1808fcdc8();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062c5f0(uint64_t param_1,longlong param_2)
void FUN_18062c5f0(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  int8_t auStack_778 [32];
  uint64_t *puStack_758;
  int32_t uStack_750;
  uint64_t uStack_748;
  uint64_t uStack_740;
  void *puStack_738;
  longlong lStack_730;
  uint uStack_728;
  int32_t uStack_720;
  void *puStack_718;
  longlong lStack_710;
  uint uStack_708;
  int32_t uStack_700;
  uint64_t uStack_6f8;
  byte abStack_6e8 [44];
  short sStack_6bc;
  short sStack_6ba;
  short sStack_6b8;
  uint64_t uStack_498;
  uint64_t auStack_278 [70];
  ulonglong uStack_48;
  
  uStack_6f8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_778;
  cVar2 = FUN_180624a00();
  if (cVar2 != '\0') {
    uVar4 = FUN_180624440(&uStack_498,param_1);
    FUN_1806279c0(&puStack_718,uVar4);
    uStack_498 = &system_state_ptr;
    if (*(char *)((ulonglong)(uStack_708 - 1) + lStack_710) == '/') {
      uVar6 = uStack_708 + 1;
      FUN_1806277c0(&puStack_718,uVar6);
      *(int16_t *)((ulonglong)uStack_708 + lStack_710) = 0x2a;
    }
    else {
      uVar6 = uStack_708 + 2;
      FUN_1806277c0(&puStack_718,uVar6);
      *(int16_t *)((ulonglong)uStack_708 + lStack_710) = 0x2a2f;
      *(int8_t *)((int16_t *)((ulonglong)uStack_708 + lStack_710) + 1) = 0;
    }
    uStack_750 = 0x118;
    puStack_758 = auStack_278;
    uStack_708 = uVar6;
    MultiByteToWideChar(0xfde9,0,lStack_710,0xffffffff);
    lVar5 = FindFirstFileW(auStack_278,abStack_6e8);
    if (lVar5 != -1) {
      do {
        if ((((sStack_6bc != 0x2e) || (sStack_6ba != 0)) &&
            ((sStack_6bc != 0x2e || ((sStack_6ba != 0x2e || (sStack_6b8 != 0)))))) &&
           ((abStack_6e8[0] & 0x10) != 0)) {
          FUN_1806279c0(&puStack_738,param_1);
          if (*(char *)((ulonglong)(uStack_728 - 1) + lStack_730) != '/') {
            uVar6 = uStack_728 + 1;
            FUN_1806277c0(&puStack_738,uVar6);
            *(int16_t *)((ulonglong)uStack_728 + lStack_730) = 0x2f;
            uStack_728 = uVar6;
          }
          uStack_740 = 0;
          uStack_748 = 0;
          uStack_750 = 0x118;
          puStack_758 = &uStack_498;
          WideCharToMultiByte(0xfde9,0,&sStack_6bc,0xffffffff);
          lVar1 = -1;
          do {
            lVar7 = lVar1;
            lVar1 = lVar7 + 1;
          } while (*(char *)((longlong)&uStack_498 + lVar7 + 1) != '\0');
          iVar3 = (int)(lVar7 + 1);
          if (0 < iVar3) {
            FUN_1806277c0(&puStack_738,uStack_728 + iVar3);
                    // WARNING: Subroutine does not return
            memcpy((ulonglong)uStack_728 + lStack_730,&uStack_498,(longlong)((int)lVar7 + 2));
          }
          if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
            *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) + 0x20;
            FUN_180627ae0();
          }
          else {
            FUN_180059820(param_2,&puStack_738);
          }
          puStack_738 = &system_data_buffer_ptr;
          if (lStack_730 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_730 = 0;
          uStack_720 = 0;
          puStack_738 = &system_state_ptr;
        }
        iVar3 = FindNextFileW(lVar5,abStack_6e8);
      } while (iVar3 != 0);
    }
    FindClose(lVar5);
    puStack_718 = &system_data_buffer_ptr;
    if (lStack_710 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_710 = 0;
    uStack_700 = 0;
    puStack_718 = &system_state_ptr;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_778);
}





