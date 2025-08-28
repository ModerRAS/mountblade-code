#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part013.c - 2 个函数

// 函数: void FUN_1804ec4e0(longlong param_1,longlong param_2,int param_3,longlong param_4,char param_5)
void FUN_1804ec4e0(longlong param_1,longlong param_2,int param_3,longlong param_4,char param_5)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  uint64_t **ppuVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  uint64_t uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  uint64_t *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint64_t *puVar17;
  longlong *plVar18;
  float fVar19;
  int32_t uVar20;
  int8_t uVar21;
  int32_t uVar22;
  longlong lStack_100;
  uint64_t *puStack_f0;
  uint64_t **ppuStack_e8;
  uint64_t uStack_e0;
  int32_t uStack_d8;
  int32_t uStack_d4;
  longlong lStack_d0;
  int8_t uStack_c8;
  longlong *plStack_c0;
  longlong *plStack_b8;
  int32_t uStack_b0;
  float fStack_ac;
  longlong *plStack_a8;
  uint64_t uStack_a0;
  longlong lStack_98;
  int8_t auStack_90 [16];
  uint64_t uStack_80;
  uint64_t uStack_78;
  longlong lStack_70;
  uint64_t uStack_68;
  float fStack_60;
  int8_t uStack_5c;
  
  uStack_a0 = 0xfffffffffffffffe;
  uVar22 = 0;
  plVar18 = *(longlong **)(*(longlong *)(param_2 + 0x6d8) + 0x8a8);
  lStack_d0 = param_4;
  if (plVar18 == (longlong *)0x0) {
    uStack_c8 = 0;
    AcquireSRWLockExclusive(param_4);
    uStack_c8 = 1;
    iVar6 = _Mtx_lock(param_4 + 8);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
    FUN_18051a8a0(param_2,0);
    iVar6 = _Mtx_unlock(param_4 + 8);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
    ReleaseSRWLockExclusive(param_4);
  }
  else {
    FUN_18051aff0(param_2,0,param_4);
    uStack_5c = 0;
    uStack_80 = 0;
    uStack_78 = 0x7f7fffff3f800000;
    fStack_60 = 0.0;
    lStack_70 = 0;
    uStack_68 = 0;
    uStack_c8 = 1;
    AcquireSRWLockShared(param_4);
    uVar21 = 0;
    uVar20 = 0x51b1c9;
    FUN_1801aa0f0(*(uint64_t *)(param_1 + 0x18),plVar18 + 0xc,0,auStack_90,0x51b1c9,0,uVar22);
    ReleaseSRWLockShared(param_4);
    if (lStack_70 == 0) {
      plVar15 = (longlong *)0x0;
    }
    else {
      plVar15 = *(longlong **)(lStack_70 + 0x10);
    }
    plStack_a8 = plVar15;
    if ((((system_status_flag != 1) && (system_status_flag != 4)) && (plVar15 != (longlong *)0x0)) &&
       ((plVar15[0x4e] != 0 && ((*(byte *)(plVar15[0x4e] + 0x18) & 0x18) != 0)))) {
      if ((plVar18[0x4c] != 0) && ((ushort)(*(short *)(plVar18[0x4c] + 0x40) - 2U) < 3)) {
        ppuStack_e8 = (uint64_t **)plVar18[0xc];
        uStack_e0 = (longlong *)CONCAT44(*(int32_t *)((longlong)plVar18 + 0x6c),fStack_60 + 0.2);
        FUN_1802ea6d0(plVar18,&ppuStack_e8);
      }
      uStack_c8 = 1;
      lStack_d0 = param_4;
      AcquireSRWLockShared(param_4);
      FUN_1802fb960(plVar18[0x4c],plVar18 + 0xe,1);
      ReleaseSRWLockShared(param_4);
      puVar13 = (uint64_t *)(param_4 + 8);
      puStack_f0 = puVar13;
      iVar6 = _Mtx_lock(puVar13);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      FUN_1802e8a50(plVar15,plVar18,1);
      iVar6 = _Mtx_unlock(puVar13);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      param_5 = '\x01';
    }
    plStack_c0 = (longlong *)0x0;
    plStack_b8 = (longlong *)0x0;
    (**(code **)(*plVar18 + 0x28))(plVar18);
    plStack_c0 = plVar18;
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x28))(plVar15);
    }
    uStack_b0 = 0xffffffff;
    fVar19 = (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x87b790) * 8) -
                    *(longlong *)(param_1 + 0x87b788)) * 1e-05;
    plStack_b8 = plVar15;
    fStack_ac = fVar19;
    if (((*(uint *)(param_2 + 0x56c) & 0x800000) == 0) ||
       (*(int *)(param_1 + 0x98d930) != *(int *)(param_2 + 0x10))) {
      FUN_1802f0940(plVar18,0x3f800000);
    }
    FUN_1802e8580(plVar18,0,1);
    uVar2 = *(uint *)((longlong)plVar18 + 0x2ac);
    *(uint *)((longlong)plVar18 + 0x2ac) = uVar2 | 0x20400000;
    FUN_1802ee810(plVar18,uVar2);
    FUN_1802ee990(plVar18,uVar2);
    uStack_c8 = 0;
    lStack_d0 = param_4;
    AcquireSRWLockExclusive(param_4);
    uStack_c8 = 1;
    lVar11 = param_4 + 8;
    lStack_98 = lVar11;
    iVar6 = _Mtx_lock(lVar11);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
    FUN_1804f7e50(param_1,1);
    if (-1 < param_3) {
      plVar15 = (longlong *)(param_1 + 0x87bd08);
      lVar9 = *(longlong *)(param_1 + 0x87bd10) - *plVar15;
      while ((ulonglong)(lVar9 / 0x18) < (ulonglong)(longlong)param_3) {
        ppuStack_e8 = (uint64_t **)0x0;
        uStack_e0 = (longlong *)0x0;
        uStack_d4 = 0x7f7fffff;
        puVar13 = *(uint64_t **)(param_1 + 0x87bd10);
        if (puVar13 < *(uint64_t **)(param_1 + 0x87bd18)) {
          *(uint64_t **)(param_1 + 0x87bd10) = puVar13 + 3;
          *puVar13 = 0;
          ppuStack_e8 = (uint64_t **)0x0;
          puVar13[1] = 0;
          uStack_e0 = (longlong *)0x0;
          *(int32_t *)(puVar13 + 2) = uStack_d8;
          *(int32_t *)((longlong)puVar13 + 0x14) = 0x7f7fffff;
          puStack_f0 = puVar13;
        }
        else {
          FUN_180500860(plVar15,&ppuStack_e8);
        }
        ppuVar4 = ppuStack_e8;
        if (uStack_e0 != (longlong *)0x0) {
          (**(code **)(*uStack_e0 + 0x38))(uStack_e0);
        }
        if (ppuVar4 != (uint64_t **)0x0) {
          (*(code *)(*ppuVar4)[7])(ppuVar4);
        }
        lVar9 = *(longlong *)(param_1 + 0x87bd10) - *plVar15;
      }
    }
    lVar9 = *(longlong *)(param_1 + 0x87bd10) - *(longlong *)(param_1 + 0x87bd08);
    lVar10 = lVar9 / 6 + (lVar9 >> 0x3f);
    FUN_180542260(*(uint64_t *)(param_2 + 0x6d8));
    lVar9 = system_system_data_config;
    iVar6 = *(int *)(param_2 + 0x18);
    if ((iVar6 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar6);
    }
    (**(code **)(lVar9 + 0x220))(*(int32_t *)(param_1 + 0x98d928),iVar6);
    uVar22 = 0;
    if ((iVar6 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar6);
    }
    if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
      iVar6 = _Mtx_lock(0x180c95528);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      uVar22 = *(int32_t *)(param_2 + 0x10);
      cVar5 = FUN_180645c10(0x180c95578,0,&unknown_var_3504_ptr);
      if ((((cVar5 != '\0') &&
           (cVar5 = FUN_180645c10(0x180c95578,0xe,&unknown_var_3472_ptr), cVar5 != '\0')) &&
          (cVar5 = FUN_180645c10(0x180c95578,uVar22,&unknown_var_3424_ptr), cVar5 != '\0')) &&
         (cVar5 = FUN_180645c10(0x180c95578,(lVar10 >> 2) - (lVar10 >> 0x3f) & 0xffffffff,
                                &unknown_var_3344_ptr), cVar5 != '\0')) {
        FUN_180645c10(0x180c95578,param_5,&unknown_var_3504_ptr);
      }
      lVar9 = 0;
      system_system_config = system_system_config & 0xffffffff00000000;
      iVar6 = (int)(system_system_config - system_system_config >> 3);
      lVar11 = system_system_config;
      if (0 < iVar6) {
        do {
          lVar10 = *(longlong *)(lVar11 + lVar9 * 8);
          if ((lVar10 != 0) && (*(char *)(*(longlong *)(lVar10 + 0x58f8) + 0x1c) != '\0')) {
            FUN_1805b59d0(lVar10,0x180c95578);
            lVar11 = system_system_config;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar6);
      }
      if (system_system_config != 0) {
        FUN_180567f30(system_system_config,0x180c95578);
      }
      system_system_config = 0;
                    // WARNING: Subroutine does not return
      memset(system_system_config,0,(longlong)(system_system_config >> 3));
    }
    puVar13 = *(uint64_t **)(param_2 + 0x9a0);
    if (puVar13 != (uint64_t *)0x0) {
      lVar9 = *(longlong *)(param_2 + 0x6d8);
      uVar16 = 0;
      lVar10 = 0;
      puVar17 = puVar13;
      do {
        if (((ulonglong)puVar13[0x80] >> (uVar16 & 0x3f) & 1) != 0) {
          FUN_1803004f0(*(uint64_t *)(*(longlong *)(lVar9 + 0x8a8) + 0x260),uVar16,
                        *(uint64_t *)((longlong)puVar13 + lVar10));
          FUN_180544ac0(lVar9);
          puVar13 = *(uint64_t **)(param_2 + 0x9a0);
          puVar17 = puVar13;
        }
        bVar12 = (char)uVar16 + 1;
        uVar16 = (ulonglong)bVar12;
        lVar10 = lVar10 + 0x10;
      } while ((char)bVar12 < '@');
      if (puVar17 != (uint64_t *)0x0) {
        puStack_f0 = puVar17;
        FUN_1808fc8a8(puVar17,0x10,0x40,FUN_180534590,uVar20,uVar21,uVar22);
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar17);
      }
      *(uint64_t *)(param_2 + 0x9a0) = 0;
      puStack_f0 = (uint64_t *)0x0;
    }
    plVar14 = (longlong *)(*(longlong *)(param_2 + 0x6d8) + 0x90);
    lStack_100 = 5;
    plVar15 = plVar14;
    do {
      if (*plVar14 != 0) {
        piVar1 = (int *)(param_1 + 0x87bd28);
        if (*(longlong *)(param_1 + 0x87bd38) - *(longlong *)(param_1 + 0x87bd30) >> 2 == 0) {
          FUN_1804fd200(piVar1);
        }
        puVar7 = (uint *)(*(longlong *)(param_1 + 0x87bd38) + -4);
        uVar2 = *puVar7;
        *(uint **)(param_1 + 0x87bd38) = puVar7;
        uVar16 = (ulonglong)(uVar2 >> 4);
        lVar9 = (ulonglong)(uVar2 & 0xf) * 0x40;
        *(int32_t *)(lVar9 + 8 + *(longlong *)(*(longlong *)(param_1 + 0x87bd50) + uVar16 * 8)) =
             1;
        *(int *)(param_1 + 0x87bd70) = *(int *)(param_1 + 0x87bd70) + 1;
        if (*piVar1 <= (int)uVar2) {
          *piVar1 = uVar2 + 1;
        }
        puVar13 = (uint64_t *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x87bd50) + uVar16 * 8) + lVar9);
        if ((void *)*puVar13 == &unknown_var_5520_ptr) {
          puVar13[2] = 0;
          plVar3 = (longlong *)puVar13[3];
          puVar13[3] = 0;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x38))();
          }
        }
        else {
          (**(code **)((void *)*puVar13 + 8))(puVar13);
        }
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x87bd50) + uVar16 * 8);
        ppuStack_e8 = &puStack_f0;
        uVar8 = FUN_1804dfed0(plVar15,&puStack_f0);
        FUN_1805ae000(lVar10 + lVar9,param_1,uVar8,0x3f000000,1);
      }
      plVar15 = plVar15 + 0x30;
      plVar14 = plVar14 + 0x30;
      lStack_100 = lStack_100 + -1;
    } while (lStack_100 != 0);
    if (param_5 == '\0') {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x3c0) + 0x2d30;
      if (((*(uint *)(param_2 + 0x56c) & 0x800000) == 0) &&
         (*(int *)(param_1 + 0x98d930) != *(int *)(param_2 + 0x10))) {
        uVar22 = FUN_1804cb810(lVar9,plVar18,0);
        uStack_b0 = uVar22;
      }
      else {
        uVar22 = FUN_1804cb810(lVar9,plVar18,1);
        uStack_b0 = uVar22;
      }
    }
    else {
      uVar22 = 0xffffffff;
    }
    FUN_18051a8a0(param_2,param_5);
    plVar15 = *(longlong **)(param_1 + 0x87bd10);
    if (plVar15 < *(longlong **)(param_1 + 0x87bd18)) {
      *(longlong **)(param_1 + 0x87bd10) = plVar15 + 3;
      *plVar15 = (longlong)plVar18;
      if (plVar18 != (longlong *)0x0) {
        (**(code **)(*plVar18 + 0x28))(plVar18);
      }
      plVar14 = plStack_a8;
      plVar15[1] = (longlong)plStack_a8;
      if (plStack_a8 != (longlong *)0x0) {
        (**(code **)(*plStack_a8 + 0x28))(plStack_a8);
      }
      *(int32_t *)(plVar15 + 2) = uVar22;
      *(float *)((longlong)plVar15 + 0x14) = fVar19;
    }
    else {
      FUN_1805009e0(param_1 + 0x87bd08,&plStack_c0);
      plVar14 = plStack_b8;
      plVar18 = plStack_c0;
    }
    FUN_1804f7e50(param_1,0);
    iVar6 = _Mtx_unlock(lVar11);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
    ReleaseSRWLockExclusive(param_4);
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x38))(plVar14);
    }
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 0x38))(plVar18);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804ecea0(longlong param_1,int param_2)
void FUN_1804ecea0(longlong param_1,int param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int8_t uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint64_t *puVar13;
  uint uVar14;
  longlong lVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  int32_t uVar21;
  uint64_t uStack_298;
  longlong lStack_290;
  uint uStack_288;
  int32_t uStack_284;
  longlong lStack_280;
  uint64_t auStack_278 [72];
  
  lVar18 = system_system_config;
  if (((-1 < param_2) && (lVar11 = (longlong)param_2, param_2 < *(int *)(param_1 + 0x52ed94))) &&
     (-1 < *(short *)(param_1 + 0x52dda0 + lVar11 * 2))) {
    lVar12 = lVar11 * 0xa60;
    lVar15 = *(longlong *)(lVar12 + 0x3778 + param_1);
    if (((lVar15 != 0) && (*(char *)(lVar15 + 0x8be) != '\0')) &&
       (*(longlong *)(lVar12 + 0x3630 + param_1) != 0)) {
      lVar12 = param_1 + 0x30a0 + lVar12;
      lVar15 = *(longlong *)(system_system_config + 0x4c4d0);
      *(int32_t *)(lVar12 + 0x200) = *(int32_t *)(system_system_config + 0x4c4dc);
      *(int32_t *)(lVar12 + 0x204) = *(int32_t *)(lVar18 + 0x4c4e0);
      if (*(int *)(lVar12 + 0x5f8) == 0) {
        iVar10 = func_0x0001804e1880();
        if (iVar10 < *(int *)(param_1 + 0x52ed94)) {
          do {
            puVar2 = (uint *)((longlong)iVar10 * 0x240 + 0x74eb98 + param_1);
            *puVar2 = *puVar2 & 0xfffffffe;
            iVar10 = (int)*(short *)(param_1 + 0x52dda0 + (longlong)iVar10 * 2);
          } while (iVar10 < *(int *)(param_1 + 0x52ed94));
        }
        if (*(int *)(param_1 + 0x8fd224) != 0) {
          lVar1 = param_1 + 0x87d220;
          uVar19 = *(int *)(param_1 + 0x8fd224) + *(uint *)(param_1 + 0x8fd220) & 0x800003ff;
          if ((int)uVar19 < 0) {
            uVar19 = (uVar19 - 1 | 0xfffffc00) + 1;
          }
          uStack_288 = uVar19 + 0x3ff & 0x800003ff;
          if ((int)uStack_288 < 0) {
            uStack_288 = (uStack_288 - 1 | 0xfffffc00) + 1;
          }
          uVar14 = *(int *)(param_1 + 0x98d22c) + *(int *)(param_1 + 0x98d228) & 0x800003ff;
          if ((int)uVar14 < 0) {
            uVar14 = (uVar14 - 1 | 0xfffffc00) + 1;
          }
          uVar14 = uVar14 + 0x3ff & 0x800003ff;
          if ((int)uVar14 < 0) {
            uVar14 = (uVar14 - 1 | 0xfffffc00) + 1;
          }
          while ((uStack_288 != *(uint *)(param_1 + 0x8fd220) &&
                 (lVar15 < *(longlong *)((longlong)(int)uStack_288 * 0x200 + 0x10 + lVar1)))) {
            uStack_288 = uStack_288 + 0x3ff & 0x800003ff;
            if ((int)uStack_288 < 0) {
              uStack_288 = (uStack_288 - 1 | 0xfffffc00) + 1;
            }
            uVar14 = uVar14 + 0x3ff & 0x800003ff;
            if ((int)uVar14 < 0) {
              uVar14 = (uVar14 - 1 | 0xfffffc00) + 1;
            }
          }
          if ((*(int *)(lVar12 + 0x10) == *(int *)((longlong)(int)uStack_288 * 0x200 + 0x1c + lVar1)
              ) && (*(longlong *)((longlong)(int)uStack_288 * 0x200 + 0x10 + lVar1) == lVar15)) {
            while ((uStack_288 != uVar19 &&
                   (*(int *)((longlong)(int)uStack_288 * 0x200 + 0x28 + lVar1) != 0))) {
              uStack_288 = uStack_288 + 1 & 0x800003ff;
              if ((int)uStack_288 < 0) {
                uStack_288 = (uStack_288 - 1 | 0xfffffc00) + 1;
              }
              uVar14 = uVar14 + 1 & 0x800003ff;
              if ((int)uVar14 < 0) {
                uVar14 = (uVar14 - 1 | 0xfffffc00) + 1;
              }
            }
            if (uStack_288 != uVar19) {
              lVar20 = 4;
              lVar15 = 4;
              puVar7 = auStack_278;
              puVar8 = (uint64_t *)((longlong)(int)uVar14 * 0x240 + param_1 + 0x8fd228);
              do {
                puVar13 = puVar8;
                puVar17 = puVar7;
                uVar3 = puVar13[1];
                uVar4 = puVar13[2];
                uVar5 = puVar13[3];
                *puVar17 = *puVar13;
                puVar17[1] = uVar3;
                uVar3 = puVar13[4];
                uVar6 = puVar13[5];
                puVar17[2] = uVar4;
                puVar17[3] = uVar5;
                uVar4 = puVar13[6];
                uVar5 = puVar13[7];
                puVar17[4] = uVar3;
                puVar17[5] = uVar6;
                uVar3 = puVar13[8];
                uVar6 = puVar13[9];
                puVar17[6] = uVar4;
                puVar17[7] = uVar5;
                uVar4 = puVar13[10];
                uVar5 = puVar13[0xb];
                puVar17[8] = uVar3;
                puVar17[9] = uVar6;
                uVar3 = puVar13[0xc];
                uVar6 = puVar13[0xd];
                puVar17[10] = uVar4;
                puVar17[0xb] = uVar5;
                uVar4 = puVar13[0xe];
                uVar5 = puVar13[0xf];
                puVar17[0xc] = uVar3;
                puVar17[0xd] = uVar6;
                puVar17[0xe] = uVar4;
                puVar17[0xf] = uVar5;
                lVar15 = lVar15 + -1;
                puVar7 = puVar17 + 0x10;
                puVar8 = puVar13 + 0x10;
              } while (lVar15 != 0);
              uVar3 = puVar13[0x11];
              uVar4 = puVar13[0x12];
              uVar5 = puVar13[0x13];
              puVar17[0x10] = puVar13[0x10];
              puVar17[0x11] = uVar3;
              uVar3 = puVar13[0x14];
              uVar6 = puVar13[0x15];
              puVar17[0x12] = uVar4;
              puVar17[0x13] = uVar5;
              uVar4 = puVar13[0x16];
              uVar5 = puVar13[0x17];
              puVar17[0x14] = uVar3;
              puVar17[0x15] = uVar6;
              puVar17[0x16] = uVar4;
              puVar17[0x17] = uVar5;
              puVar17 = (uint64_t *)(param_1 + 0x74eb90 + lVar11 * 0x240);
              puVar7 = puVar17;
              puVar8 = auStack_278;
              do {
                puVar16 = puVar8;
                puVar13 = puVar7;
                uVar3 = puVar16[1];
                uVar4 = puVar16[2];
                uVar5 = puVar16[3];
                *puVar13 = *puVar16;
                puVar13[1] = uVar3;
                uVar3 = puVar16[4];
                uVar6 = puVar16[5];
                puVar13[2] = uVar4;
                puVar13[3] = uVar5;
                uVar4 = puVar16[6];
                uVar5 = puVar16[7];
                puVar13[4] = uVar3;
                puVar13[5] = uVar6;
                uVar3 = puVar16[8];
                uVar6 = puVar16[9];
                puVar13[6] = uVar4;
                puVar13[7] = uVar5;
                uVar4 = puVar16[10];
                uVar5 = puVar16[0xb];
                puVar13[8] = uVar3;
                puVar13[9] = uVar6;
                uVar3 = puVar16[0xc];
                uVar6 = puVar16[0xd];
                puVar13[10] = uVar4;
                puVar13[0xb] = uVar5;
                uVar4 = puVar16[0xe];
                uVar5 = puVar16[0xf];
                puVar13[0xc] = uVar3;
                puVar13[0xd] = uVar6;
                puVar13[0xe] = uVar4;
                puVar13[0xf] = uVar5;
                lVar20 = lVar20 + -1;
                puVar7 = puVar13 + 0x10;
                puVar8 = puVar16 + 0x10;
              } while (lVar20 != 0);
              uVar3 = puVar16[0x11];
              uVar4 = puVar16[0x12];
              uVar5 = puVar16[0x13];
              puVar13[0x10] = puVar16[0x10];
              puVar13[0x11] = uVar3;
              uVar3 = puVar16[0x14];
              uVar6 = puVar16[0x15];
              puVar13[0x12] = uVar4;
              puVar13[0x13] = uVar5;
              uVar4 = puVar16[0x16];
              uVar5 = puVar16[0x17];
              puVar13[0x14] = uVar3;
              puVar13[0x15] = uVar6;
              puVar13[0x16] = uVar4;
              puVar13[0x17] = uVar5;
              uVar3 = *(uint64_t *)(lVar18 + 0x4c4b0);
              uVar19 = *(uint *)((longlong)(int)uStack_288 * 0x200 + 0x24 + lVar1);
              *(uint64_t *)((longlong)puVar17 + 0xc) = *(uint64_t *)(lVar18 + 0x4c4a8);
              *(uint64_t *)((longlong)puVar17 + 0x14) = uVar3;
              *(uint64_t *)((longlong)puVar17 + 0x1c) = *(uint64_t *)(lVar18 + 0x4c4c8);
              if ((uVar19 >> 0xb & 1) == 0) {
                *(int32_t *)((longlong)puVar17 + 0x34) = *(int32_t *)(lVar18 + 0x4c4d8);
              }
              uStack_298 = CONCAT44(uStack_284,uStack_288);
              uVar19 = uStack_288;
              lStack_290 = lVar1;
              lStack_280 = lVar1;
              while( true ) {
                uVar14 = *(int *)(param_1 + 0x8fd220) + *(int *)(param_1 + 0x8fd224) & 0x800003ff;
                if ((int)uVar14 < 0) {
                  uVar14 = (uVar14 - 1 | 0xfffffc00) + 1;
                }
                if (uVar19 == uVar14) break;
                lVar18 = (longlong)(int)uVar19 * 0x200 + lVar1;
                uVar21 = func_0x000180598ed0(puVar17,*(int32_t *)(lVar18 + 0x18));
                if ((*(uint *)(lVar18 + 0x24) & 0x800) != 0) {
                  FUN_1805984e0(uVar21,*(int32_t *)(lVar18 + 0x18),lVar18);
                }
                FUN_180598f80(puVar17,param_1,*(int32_t *)(lVar18 + 0x18),lVar18,1);
                FUN_180590fc0(puVar17,param_1,*(int32_t *)(lVar18 + 0x18),lVar18);
                lVar11 = param_1 + 0x74eb90;
                FUN_180593ce0(puVar17,*(int32_t *)(lVar18 + 0x18),param_1,lVar18,
                              param_1 + 0x52eda0,param_1 + 0x62ed98,lVar11);
                uVar21 = *(int32_t *)(lVar18 + 0x18);
                if ((system_status_flag == 0) || (system_status_flag == 5)) {
                  uVar9 = 1;
                }
                else {
                  uVar9 = 0;
                }
                *(int8_t *)(param_1 + 0x87d208) = uVar9;
                if ((system_status_flag == 1) || (system_status_flag == 4)) {
                  uVar9 = 1;
                }
                else {
                  uVar9 = 0;
                }
                *(int8_t *)(param_1 + 0x87d209) = uVar9;
                FUN_1805a7cb0(param_1 + 0x87bd80,uVar21,param_1,param_1 + 0x52eda0,
                              param_1 + 0x62ed98,lVar11,*(int32_t *)(param_1 + 0x52ed94));
                FUN_1805a9bc0(param_1 + 0x87bd80,param_1,param_1 + 0x52eda0,param_1 + 0x62ed98,
                              lVar11,param_2);
                FUN_180592060(puVar17,*(int32_t *)(lVar18 + 0x18),param_1,lVar18);
                uVar19 = uVar19 + 1 & 0x800003ff;
                if ((int)uVar19 < 0) {
                  uVar19 = (uVar19 - 1 | 0xfffffc00) + 1;
                }
              }
              uStack_298 = *(uint64_t *)((longlong)puVar17 + 0xc);
              lStack_290 = *(uint64_t *)((longlong)puVar17 + 0x14);
              FUN_18051f1e0(lVar12,&uStack_298);
              uVar19 = uVar19 + 0x3ff & 0x800003ff;
              if ((int)uVar19 < 0) {
                uVar19 = (uVar19 - 1 | 0xfffffc00) + 1;
              }
              if (*(int *)((longlong)(int)uVar19 * 0x200 + 0x28 + lVar1) == 0) {
                *(uint64_t *)(*(longlong *)(lVar12 + 0x20) + 0x1c) =
                     *(uint64_t *)((longlong)puVar17 + 0x1c);
              }
              if ((*(uint *)((longlong)(int)uVar19 * 0x200 + 0x24 + lVar1) & 0x800) == 0) {
                func_0x000180598e50(*(uint64_t *)(lVar12 + 0x20),
                                    *(int32_t *)((longlong)puVar17 + 0x34));
              }
              if (-1 < *(int *)(lVar12 + 0x560)) {
                func_0x00018051a670((longlong)*(int *)(lVar12 + 0x560) * 0xa60 + 0x30a0 + param_1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




