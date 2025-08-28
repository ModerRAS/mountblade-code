#include "TaleWorlds.Native.Split.h"

// 99_part_03_part003.c - 2 个函数

// 函数: void FUN_1801c6120(void)
void FUN_1801c6120(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int32_t *puVar8;
  ulonglong uVar9;
  void *puVar10;
  void *puVar11;
  int8_t *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  void *puStack_158;
  void *puStack_150;
  uint uStack_148;
  ulonglong uStack_140;
  void *puStack_138;
  int8_t *puStack_130;
  uint uStack_128;
  ulonglong uStack_120;
  void *puStack_118;
  int8_t *puStack_110;
  uint uStack_108;
  ulonglong uStack_100;
  void *puStack_f8;
  void *puStack_f0;
  uint uStack_e8;
  int32_t uStack_e0;
  uint64_t uStack_d8;
  longlong lStack_d0;
  uint64_t uStack_c0;
  longlong lStack_b8;
  uint64_t uStack_a8;
  longlong lStack_a0;
  uint64_t uStack_90;
  longlong lStack_88;
  uint64_t uStack_78;
  longlong lStack_70;
  void *puStack_60;
  longlong lStack_58;
  int32_t uStack_48;
  uint64_t uStack_40;
  
  lVar3 = _DAT_180c8aa08;
  uStack_40 = 0xfffffffffffffffe;
  if (*(char *)(_DAT_180c86870 + 0x168) == '\0') {
    lVar1 = _DAT_180c8aa08 + 1000;
    iVar5 = _Mtx_lock();
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
    uVar13 = 0;
    plVar2 = (longlong *)(lVar3 + 0x348);
    lVar6 = *plVar2;
    uVar9 = uVar13;
    uVar16 = uVar13;
    if ((*(longlong *)(lVar3 + 0x350) - lVar6) / 0x50 != 0) {
      do {
        if (*(int *)(lVar6 + 0x40 + uVar9) < 1) {
          uStack_a8 = 0;
          lStack_a0 = 0;
          puVar11 = *(void **)(lVar6 + 8 + uVar9);
          puVar10 = &system_buffer_ptr;
          if (puVar11 != (void *)0x0) {
            puVar10 = puVar11;
          }
          FUN_18062dee0(&uStack_a8,puVar10,&UNK_180a0cf4c);
          lVar7 = lStack_a0;
          if (lStack_a0 == 0) {
                    // WARNING: Subroutine does not return
            FUN_180062300(_DAT_180c86928,&UNK_180a0d048);
          }
          fwrite(*(uint64_t *)(lVar6 + 0x20 + uVar9),(longlong)*(int *)(lVar6 + 0x28 + uVar9),1,
                 lStack_a0);
          fclose(lVar7);
          lStack_a0 = 0;
          LOCK();
          _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
          UNLOCK();
        }
        else {
          uStack_d8 = 0;
          lStack_d0 = 0;
          FUN_180627ae0(&puStack_f8,uVar9 + 0x30 + lVar6);
          iVar5 = *(int *)(lVar6 + 0x10 + uVar9);
          if (0 < iVar5) {
            FUN_1806277c0(&puStack_f8,uStack_e8 + iVar5);
                    // WARNING: Subroutine does not return
            memcpy(puStack_f0 + uStack_e8,*(uint64_t *)(lVar6 + 8 + uVar9),
                   (longlong)(*(int *)(lVar6 + 0x10 + uVar9) + 1));
          }
          puVar11 = &system_buffer_ptr;
          if (puStack_f0 != (void *)0x0) {
            puVar11 = puStack_f0;
          }
          FUN_18062dee0(&uStack_d8,puVar11,&UNK_180a0cf4c);
          lVar7 = lStack_d0;
          fwrite(*(uint64_t *)(lVar6 + 0x20 + uVar9),(longlong)*(int *)(lVar6 + 0x28 + uVar9),1,
                 lStack_d0);
          if (lVar7 != 0) {
            fclose(lVar7);
            lStack_d0 = 0;
            LOCK();
            _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
            UNLOCK();
            lVar7 = 0;
          }
          puStack_f8 = &UNK_180a3c3e0;
          if (puStack_f0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puStack_f0 = (void *)0x0;
          uStack_e0 = 0;
          puStack_f8 = &UNK_18098bcb0;
          if (lVar7 != 0) {
            fclose(lVar7);
            lStack_d0 = 0;
            LOCK();
            _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
            UNLOCK();
          }
        }
        uVar15 = (int)uVar16 + 1;
        lVar6 = *plVar2;
        uVar9 = uVar9 + 0x50;
        uVar16 = (ulonglong)uVar15;
      } while ((ulonglong)(longlong)(int)uVar15 <
               (ulonglong)((*(longlong *)(lVar3 + 0x350) - lVar6) / 0x50));
    }
    FUN_1801e11f0(plVar2);
    if ((*(longlong *)(lVar3 + 0x370) - *(longlong *)(lVar3 + 0x368)) / 0x18 != 0) {
      puStack_158 = &UNK_180a3c3e0;
      uStack_140 = 0;
      puStack_150 = (void *)0x0;
      uStack_148 = 0;
      lVar6 = FUN_1800baa80(&puStack_60);
      if (puStack_150 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uVar15 = *(uint *)(lVar6 + 0x10);
      puStack_150 = *(void **)(lVar6 + 8);
      uStack_140 = *(ulonglong *)(lVar6 + 0x18);
      *(int32_t *)(lVar6 + 0x10) = 0;
      *(uint64_t *)(lVar6 + 8) = 0;
      *(uint64_t *)(lVar6 + 0x18) = 0;
      puStack_60 = &UNK_180a3c3e0;
      uStack_148 = uVar15;
      if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_58 = 0;
      uStack_48 = 0;
      puStack_60 = &UNK_18098bcb0;
      FUN_1806277c0(&puStack_158,uVar15 + 0x12);
      puVar8 = (int32_t *)(puStack_150 + uStack_148);
      *puVar8 = 0x65726f43;
      puVar8[1] = 0x64616853;
      puVar8[2] = 0x2f737265;
      puVar8[3] = 0x31443344;
      *(int16_t *)(puVar8 + 4) = 0x2f31;
      *(int8_t *)((longlong)puVar8 + 0x12) = 0;
      uStack_148 = uVar15 + 0x12;
      FUN_1806277c0(&puStack_158,uVar15 + 0x24);
      puVar8 = (int32_t *)(puStack_150 + uStack_148);
      *puVar8 = 0x64616873;
      puVar8[1] = 0x6d5f7265;
      puVar8[2] = 0x69707061;
      puVar8[3] = 0x622e676e;
      *(int16_t *)(puVar8 + 4) = 0x6e69;
      *(int8_t *)((longlong)puVar8 + 0x12) = 0;
      uStack_c0 = 0;
      lStack_b8 = 0;
      puVar11 = &system_buffer_ptr;
      if (puStack_150 != (void *)0x0) {
        puVar11 = puStack_150;
      }
      uStack_148 = uVar15 + 0x24;
      FUN_18062dee0(&uStack_c0,puVar11,&UNK_180a06780);
      lVar6 = lStack_b8;
      if (lStack_b8 == 0) {
                    // WARNING: Subroutine does not return
        FUN_180062300(_DAT_180c86928,&UNK_180a0d010);
      }
      uVar9 = uVar13;
      if ((*(longlong *)(lVar3 + 0x370) - *(longlong *)(lVar3 + 0x368)) / 0x18 != 0) {
        do {
          lVar7 = *(longlong *)(lVar3 + 0x368) + uVar9 * 0x18;
          fwrite(lVar7,0x14,1,lVar6);
          fwrite(lVar7 + 0x14,4,1,lVar6);
          uVar15 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar15;
          uVar9 = (longlong)(int)uVar15;
        } while ((ulonglong)(longlong)(int)uVar15 <
                 (ulonglong)((*(longlong *)(lVar3 + 0x370) - *(longlong *)(lVar3 + 0x368)) / 0x18));
      }
      *(uint64_t *)(lVar3 + 0x370) = *(uint64_t *)(lVar3 + 0x368);
      if (lVar6 != 0) {
        fclose(lVar6);
        lStack_b8 = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
        lVar6 = 0;
      }
      if (lVar6 != 0) {
        fclose(lVar6);
        lStack_b8 = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
      }
      puStack_158 = &UNK_180a3c3e0;
      if (puStack_150 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_150 = (void *)0x0;
      uStack_140 = uStack_140 & 0xffffffff00000000;
      puStack_158 = &UNK_18098bcb0;
    }
    lVar6 = lVar3 + 0x388;
    for (lVar7 = *(longlong *)(lVar3 + 0x390); lVar7 != lVar6; lVar7 = func_0x00018066bd70(lVar7)) {
      uVar9 = 0;
      puStack_138 = &UNK_180a3c3e0;
      uStack_120 = 0;
      puStack_130 = (int8_t *)0x0;
      uStack_128 = 0;
      FUN_1806277c0(&puStack_138,*(int32_t *)(lVar7 + 0x30));
      if (*(int *)(lVar7 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_130,*(uint64_t *)(lVar7 + 0x28),*(int *)(lVar7 + 0x30) + 1);
      }
      if (*(longlong *)(lVar7 + 0x28) != 0) {
        uStack_128 = 0;
        if (puStack_130 != (int8_t *)0x0) {
          *puStack_130 = 0;
        }
        uStack_120 = uStack_120 & 0xffffffff;
      }
      iVar5 = uStack_128 + 0x12;
      FUN_1806277c0(&puStack_138,iVar5);
      puVar8 = (int32_t *)(puStack_130 + uStack_128);
      *puVar8 = 0x64616873;
      puVar8[1] = 0x6d5f7265;
      puVar8[2] = 0x69707061;
      puVar8[3] = 0x622e676e;
      *(int16_t *)(puVar8 + 4) = 0x6e69;
      *(int8_t *)((longlong)puVar8 + 0x12) = 0;
      uStack_90 = 0;
      lStack_88 = 0;
      puVar12 = &system_buffer_ptr;
      if (puStack_130 != (int8_t *)0x0) {
        puVar12 = puStack_130;
      }
      uStack_128 = iVar5;
      FUN_18062dee0(&uStack_90,puVar12,&UNK_180a06780);
      lVar4 = lStack_88;
      if (lStack_88 == 0) {
                    // WARNING: Subroutine does not return
        FUN_180062300(_DAT_180c86928,&UNK_180a0d010);
      }
      lVar14 = *(longlong *)(lVar7 + 0x40);
      uVar16 = uVar9;
      if ((*(longlong *)(lVar7 + 0x48) - lVar14) / 0x18 != 0) {
        do {
          lVar14 = lVar14 + uVar9 * 0x18;
          fwrite(lVar14,0x18,1,lVar4);
          fwrite(lVar14 + 0x14,4,1,lVar4);
          uVar15 = (int)uVar16 + 1;
          lVar14 = *(longlong *)(lVar7 + 0x40);
          uVar9 = (ulonglong)(int)uVar15;
          uVar16 = (ulonglong)uVar15;
        } while (uVar9 < (ulonglong)((*(longlong *)(lVar7 + 0x48) - lVar14) / 0x18));
      }
      fclose(lVar4);
      lStack_88 = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
      UNLOCK();
      puStack_138 = &UNK_180a3c3e0;
      if (puStack_130 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_130 = (int8_t *)0x0;
      uStack_120 = uStack_120 & 0xffffffff00000000;
      puStack_138 = &UNK_18098bcb0;
    }
    FUN_180058710(lVar6,*(uint64_t *)(lVar3 + 0x398));
    *(longlong *)lVar6 = lVar6;
    *(longlong *)(lVar3 + 0x390) = lVar6;
    *(uint64_t *)(lVar3 + 0x398) = 0;
    *(int8_t *)(lVar3 + 0x3a0) = 0;
    *(uint64_t *)(lVar3 + 0x3a8) = 0;
    lVar6 = lVar3 + 0x3b8;
    for (lVar7 = *(longlong *)(lVar3 + 0x3c0); lVar7 != lVar6; lVar7 = func_0x00018066bd70(lVar7)) {
      puStack_118 = &UNK_180a3c3e0;
      uStack_100 = 0;
      puStack_110 = (int8_t *)0x0;
      uStack_108 = 0;
      FUN_1806277c0(&puStack_118,*(int32_t *)(lVar7 + 0x30));
      if (*(int *)(lVar7 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_110,*(uint64_t *)(lVar7 + 0x28),*(int *)(lVar7 + 0x30) + 1);
      }
      if (*(longlong *)(lVar7 + 0x28) != 0) {
        uStack_108 = 0;
        if (puStack_110 != (int8_t *)0x0) {
          *puStack_110 = 0;
        }
        uStack_100 = uStack_100 & 0xffffffff;
      }
      iVar5 = uStack_108 + 0x12;
      FUN_1806277c0(&puStack_118,iVar5);
      puVar8 = (int32_t *)(puStack_110 + uStack_108);
      *puVar8 = 0x64616873;
      puVar8[1] = 0x6d5f7265;
      puVar8[2] = 0x69707061;
      puVar8[3] = 0x622e676e;
      *(int16_t *)(puVar8 + 4) = 0x6e69;
      *(int8_t *)((longlong)puVar8 + 0x12) = 0;
      uStack_78 = 0;
      lStack_70 = 0;
      puVar12 = &system_buffer_ptr;
      if (puStack_110 != (int8_t *)0x0) {
        puVar12 = puStack_110;
      }
      uStack_108 = iVar5;
      FUN_18062dee0(&uStack_78,puVar12,&UNK_180a06780);
      lVar4 = lStack_70;
      if (lStack_70 == 0) {
                    // WARNING: Subroutine does not return
        FUN_180062300(_DAT_180c86928,&UNK_180a0d010);
      }
      lVar14 = *(longlong *)(lVar7 + 0x40);
      uVar9 = 0;
      uVar16 = 0;
      if ((*(longlong *)(lVar7 + 0x48) - lVar14) / 0x28 != 0) {
        do {
          lVar14 = lVar14 + uVar9 * 0x28;
          fwrite(lVar14,0x20,1,lVar4);
          fwrite(lVar14 + 0x20,4,1,lVar4);
          uVar15 = (int)uVar16 + 1;
          lVar14 = *(longlong *)(lVar7 + 0x40);
          uVar9 = (longlong)(int)uVar15;
          uVar16 = (ulonglong)uVar15;
        } while ((ulonglong)(longlong)(int)uVar15 <
                 (ulonglong)((*(longlong *)(lVar7 + 0x48) - lVar14) / 0x28));
      }
      fclose(lVar4);
      lStack_70 = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
      UNLOCK();
      puStack_118 = &UNK_180a3c3e0;
      if (puStack_110 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_110 = (int8_t *)0x0;
      uStack_100 = uStack_100 & 0xffffffff00000000;
      puStack_118 = &UNK_18098bcb0;
    }
    FUN_180058710(lVar6,*(uint64_t *)(lVar3 + 0x3c8));
    *(longlong *)lVar6 = lVar6;
    *(longlong *)(lVar3 + 0x3c0) = lVar6;
    *(uint64_t *)(lVar3 + 0x3c8) = 0;
    *(int8_t *)(lVar3 + 0x3d0) = 0;
    *(uint64_t *)(lVar3 + 0x3d8) = 0;
    iVar5 = _Mtx_unlock(lVar1);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
  }
  return;
}



uint64_t *
FUN_1801c6b50(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int32_t param_4,
             char param_5)

{
  int32_t *puVar1;
  int iVar2;
  
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  if (param_5 != '\0') {
    FUN_1801c5870(param_2,0,param_3,param_4,1,0xfffffffffffffffe);
  }
  FUN_180628040(param_2,&UNK_1809fd0a0,param_4);
  switch((int)param_3) {
  case 0:
    iVar2 = *(int *)(param_2 + 2) + 6;
    FUN_1806277c0(param_2,iVar2);
    puVar1 = (int32_t *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]);
    *puVar1 = 0x61732e76;
    *(int16_t *)(puVar1 + 1) = 0x7863;
    break;
  case 1:
    iVar2 = *(int *)(param_2 + 2) + 6;
    FUN_1806277c0(param_2,iVar2);
    puVar1 = (int32_t *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]);
    *puVar1 = 0x61732e70;
    *(int16_t *)(puVar1 + 1) = 0x7863;
    break;
  case 2:
    iVar2 = *(int *)(param_2 + 2) + 6;
    FUN_1806277c0(param_2,iVar2);
    puVar1 = (int32_t *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]);
    *puVar1 = 0x61732e64;
    *(int16_t *)(puVar1 + 1) = 0x7863;
    break;
  case 3:
    iVar2 = *(int *)(param_2 + 2) + 6;
    FUN_1806277c0(param_2,iVar2);
    puVar1 = (int32_t *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]);
    *puVar1 = 0x61732e68;
    *(int16_t *)(puVar1 + 1) = 0x7863;
    break;
  case 4:
    iVar2 = *(int *)(param_2 + 2) + 6;
    FUN_1806277c0(param_2,iVar2);
    puVar1 = (int32_t *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]);
    *puVar1 = 0x61732e63;
    *(int16_t *)(puVar1 + 1) = 0x7863;
    break;
  case 5:
    iVar2 = *(int *)(param_2 + 2) + 6;
    FUN_1806277c0(param_2,iVar2);
    puVar1 = (int32_t *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]);
    *puVar1 = 0x61732e67;
    *(int16_t *)(puVar1 + 1) = 0x7863;
    break;
  default:
    goto LAB_1801c6d27;
  }
  *(int8_t *)((longlong)puVar1 + 6) = 0;
  *(int *)(param_2 + 2) = iVar2;
LAB_1801c6d27:
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1801c6d60(uint64_t param_1,longlong param_2,int *param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  longlong lVar3;
  int iVar4;
  int32_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  void *puVar11;
  void *puStack_d0;
  uint64_t *puStack_c8;
  int32_t uStack_c0;
  ulonglong uStack_b8;
  void *puStack_b0;
  uint64_t *puStack_a8;
  int32_t uStack_a0;
  uint64_t uStack_98;
  void *puStack_90;
  longlong lStack_88;
  int iStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [32];
  uint64_t uStack_50;
  longlong lStack_48;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uVar8 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  puVar11 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar11 = *(void **)(param_2 + 8);
  }
  FUN_18062dee0(&uStack_50,puVar11,&UNK_180a01ff0);
  lVar3 = lStack_48;
  if (lStack_48 != 0) {
    uVar7 = _ftelli64(lStack_48);
    _fseeki64(lVar3,0,2);
    iVar4 = _ftelli64(lVar3);
    _fseeki64(lVar3,uVar7,0);
    if (iVar4 != 0) {
      uVar8 = FUN_18062b420(_DAT_180c8ed18,iVar4,0x11);
    }
    fread(uVar8,iVar4,1,lVar3);
    fclose(lVar3);
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
    *param_3 = iVar4;
    return uVar8;
  }
  puStack_b0 = &UNK_180a3c3e0;
  uStack_98 = 0;
  puStack_a8 = (uint64_t *)0x0;
  uStack_a0 = 0;
  puVar9 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x29,0x13);
  *(int8_t *)puVar9 = 0;
  puStack_a8 = puVar9;
  uVar5 = FUN_18064e990(puVar9);
  uStack_98 = CONCAT44(uStack_98._4_4_,uVar5);
  *puVar9 = 0x6120726564616853;
  puVar9[1] = 0x20796c626d657373;
  *(int32_t *)(puVar9 + 2) = 0x6c756f63;
  *(int32_t *)((longlong)puVar9 + 0x14) = 0x6f6e2064;
  *(int32_t *)(puVar9 + 3) = 0x65622074;
  *(int32_t *)((longlong)puVar9 + 0x1c) = 0x756f6620;
  puVar9[4] = 0x3a20726f6620646e;
  *(int8_t *)(puVar9 + 5) = 0;
  uStack_a0 = 0x28;
  FUN_1806279c0(&puStack_90,param_2);
  puStack_d0 = &UNK_180a3c3e0;
  uStack_b8 = 0;
  puStack_c8 = (uint64_t *)0x0;
  uStack_c0 = 0;
  puVar10 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x29,0x13);
  *(int8_t *)puVar10 = 0;
  puStack_c8 = puVar10;
  uVar6 = FUN_18064e990(puVar10);
  uVar8 = puVar9[1];
  *puVar10 = *puVar9;
  puVar10[1] = uVar8;
  uVar5 = *(int32_t *)((longlong)puVar9 + 0x14);
  uVar1 = *(int32_t *)(puVar9 + 3);
  uVar2 = *(int32_t *)((longlong)puVar9 + 0x1c);
  *(int32_t *)(puVar10 + 2) = *(int32_t *)(puVar9 + 2);
  *(int32_t *)((longlong)puVar10 + 0x14) = uVar5;
  *(int32_t *)(puVar10 + 3) = uVar1;
  *(int32_t *)((longlong)puVar10 + 0x1c) = uVar2;
  puVar10[4] = puVar9[4];
  uStack_c0 = 0x28;
  *(int8_t *)(puVar10 + 5) = 0;
  uStack_b8 = (ulonglong)uVar6;
  if (0 < iStack_80) {
    if ((iStack_80 != -0x28) && (uVar6 < iStack_80 + 0x29U)) {
      puVar10 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar10,iStack_80 + 0x29U,0x10,0x13);
      puStack_c8 = puVar10;
      uVar5 = FUN_18064e990(puVar10);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar5);
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar10 + 5,lStack_88,(longlong)(iStack_80 + 1));
  }
  FUN_180627e10(&puStack_d0,auStack_70,&UNK_180a0d08c);
  puStack_d0 = &UNK_180a3c3e0;
  if (puVar10 == (uint64_t *)0x0) {
    puStack_c8 = (uint64_t *)0x0;
    uStack_b8 = uStack_b8 & 0xffffffff00000000;
    puStack_d0 = &UNK_18098bcb0;
    puStack_90 = &UNK_180a3c3e0;
    if (lStack_88 == 0) {
      lStack_88 = 0;
      uStack_78 = 0;
      puStack_90 = &UNK_18098bcb0;
      puStack_b0 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar9);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1801c70b0(ulonglong param_1,longlong param_2,uint64_t param_3,longlong param_4)

{
  uint uVar1;
  int32_t uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int32_t *puVar6;
  ulonglong uVar7;
  int8_t *puVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uStackX_8;
  int8_t auStackX_10 [8];
  longlong alStack_70 [2];
  void *puStack_60;
  int8_t *puStack_58;
  uint uStack_50;
  uint64_t uStack_48;
  
  uVar10 = 0;
  puStack_60 = &UNK_180a3c3e0;
  uStack_48 = 0;
  puStack_58 = (int8_t *)0x0;
  uStack_50 = 0;
  uStackX_8 = param_1;
  if ((param_4 == 0) || (*(longlong *)(param_4 + 800) == 0)) {
    FUN_1801c5700(&puStack_60,param_3);
  }
  else {
    uVar3 = *(uint *)(param_4 + 0x2e0);
    if (*(longlong *)(param_4 + 0x2d8) == 0) {
LAB_1801c7166:
      if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_58,*(uint64_t *)(param_4 + 0x2d8),(ulonglong)uVar3);
      }
    }
    else if (uVar3 != 0) {
      uVar1 = uVar3 + 1;
      if ((int)(uVar3 + 1) < 0x10) {
        uVar1 = 0x10;
      }
      puStack_58 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar1,0x13);
      *puStack_58 = 0;
      uVar2 = FUN_18064e990(puStack_58);
      uStack_48 = CONCAT44(uStack_48._4_4_,uVar2);
      goto LAB_1801c7166;
    }
    if (puStack_58 != (int8_t *)0x0) {
      puStack_58[uVar3] = 0;
    }
    uStack_48 = CONCAT44(*(int32_t *)(param_4 + 0x2ec),(uint)uStack_48);
    uStack_50 = uVar3;
  }
  iVar9 = uStack_50 + 0x1c;
  if (iVar9 != 0) {
    uVar3 = uStack_50 + 0x1d;
    if (puStack_58 == (int8_t *)0x0) {
      if ((int)uVar3 < 0x10) {
        uVar3 = 0x10;
      }
      puStack_58 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar3,0x13);
      *puStack_58 = 0;
    }
    else {
      if (uVar3 <= (uint)uStack_48) goto LAB_1801c720f;
      puStack_58 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_58,uVar3,0x10,0x13);
    }
    uVar2 = FUN_18064e990(puStack_58);
    uStack_48 = CONCAT44(uStack_48._4_4_,uVar2);
  }
LAB_1801c720f:
  puVar6 = (int32_t *)(puStack_58 + uStack_50);
  *puVar6 = 0x706d6f63;
  puVar6[1] = 0x73736572;
  puVar6[2] = 0x735f6465;
  puVar6[3] = 0x65646168;
  *(uint64_t *)(puVar6 + 4) = 0x2e65686361635f72;
  puVar6[6] = 0x6b636173;
  *(int8_t *)(puVar6 + 7) = 0;
  alStack_70[0] = -1;
  puVar8 = &system_buffer_ptr;
  if (puStack_58 != (int8_t *)0x0) {
    puVar8 = puStack_58;
  }
  uStack_50 = iVar9;
  FUN_18063ba00(alStack_70,puVar8,5,0x104);
  lVar11 = alStack_70[0];
  SetFilePointerEx(alStack_70[0],*(uint64_t *)(param_2 + 8),auStackX_10,0);
  if (*(int *)(param_2 + 0x10) == 0) {
    iVar9 = 0;
    uVar5 = uVar10;
  }
  else {
    uVar5 = FUN_18062b420(_DAT_180c8ed18,(longlong)*(int *)(param_2 + 0x10),3);
    iVar9 = *(int *)(param_2 + 0x10);
  }
  if (iVar9 != 0) {
    do {
      uVar7 = (longlong)iVar9 - uVar10;
      uVar12 = 0x1000000;
      if (uVar7 < 0x1000000) {
        uVar12 = uVar7 & 0xffffffff;
      }
      uStackX_8 = uStackX_8 & 0xffffffff00000000;
      iVar4 = ReadFile(lVar11,uVar10 + uVar5,uVar12,&uStackX_8,0);
    } while (((iVar4 != 0) && ((int)uStackX_8 != 0)) &&
            (uVar10 = uVar10 + (uStackX_8 & 0xffffffff), uVar10 < (ulonglong)(longlong)iVar9));
  }
  if (lVar11 != -1) {
    LOCK();
    _DAT_180c8ed64 = _DAT_180c8ed64 + -1;
    UNLOCK();
    CloseHandle(alStack_70[0]);
    lVar11 = -1;
    alStack_70[0] = -1;
  }
  if (lVar11 != -1) {
    LOCK();
    _DAT_180c8ed64 = _DAT_180c8ed64 + -1;
    UNLOCK();
    CloseHandle(alStack_70[0]);
    alStack_70[0] = -1;
  }
  puStack_60 = &UNK_180a3c3e0;
  if (puStack_58 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t *
FUN_1801c7390(longlong param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lStackX_8;
  int32_t *puStackX_10;
  int32_t uVar5;
  uint64_t uVar6;
  longlong lVar7;
  int8_t uVar8;
  
  lVar2 = _DAT_180c8aa08;
  uVar6 = 0xfffffffffffffffe;
  uVar5 = 0;
  lVar4 = *(longlong *)(_DAT_180c8aa08 + 0x50) + 0x360;
  uVar8 = 1;
  lStackX_8 = param_1;
  puStackX_10 = param_2;
  lVar7 = lVar4;
  AcquireSRWLockShared(lVar4);
  FUN_1801e6940(*(uint64_t *)(*(longlong *)(lVar2 + 0x50) + 0x318),&lStackX_8,param_3,param_4,
                uVar5,uVar6,lVar7,uVar8);
  if (lStackX_8 == *(longlong *)(*(longlong *)(lVar2 + 0x50) + 0x318)) {
    for (lVar3 = *(longlong *)(lVar2 + 0x60); lVar3 != lVar2 + 0x58;
        lVar3 = func_0x00018066bd70(lVar3)) {
      FUN_1801e6940(*(uint64_t *)(*(longlong *)(lVar3 + 0x40) + 800),&lStackX_8,param_3,param_4,
                    uVar5,uVar6,lVar7,uVar8);
      if (lStackX_8 != *(longlong *)(*(longlong *)(lVar3 + 0x40) + 800)) {
        *param_2 = *(int32_t *)(lStackX_8 + 0x34);
        plVar1 = *(longlong **)(lVar3 + 0x40);
        *(longlong **)(param_2 + 2) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x28))();
        }
        goto LAB_1801c74a0;
      }
    }
    *param_2 = 0xffffffff;
    *(uint64_t *)(param_2 + 2) = 0;
  }
  else {
    *param_2 = *(int32_t *)(lStackX_8 + 0x34);
    plVar1 = *(longlong **)(lVar2 + 0x50);
    *(longlong **)(param_2 + 2) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
  }
LAB_1801c74a0:
  ReleaseSRWLockShared(lVar4);
  return param_2;
}






// 函数: void FUN_1801c7500(void)
void FUN_1801c7500(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






