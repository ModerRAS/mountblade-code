#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part020.c - 6 个函数

// 函数: void FUN_1804f3510(longlong param_1)
void FUN_1804f3510(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int *piVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  char *pcVar17;
  ulonglong uVar18;
  int32_t uVar19;
  
  uVar18 = 0;
  LOCK();
  *(int32_t *)(param_1 + 0x87c908) = 0;
  UNLOCK();
  plVar10 = (longlong *)(param_1 + 0x87c910);
  uVar7 = uVar18;
  do {
    if (*plVar10 == 0) break;
    if (*plVar10 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)(param_1 + 0x87c910 + (longlong)(int)uVar7 * 8) = 0;
    uVar15 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar15;
    plVar10 = plVar10 + 1;
  } while (uVar15 < 0xff);
  LOCK();
  *(int32_t *)(param_1 + 0x87c008) = 0;
  UNLOCK();
  plVar10 = (longlong *)(param_1 + 0x87c010);
  uVar7 = uVar18;
  do {
    if (*plVar10 == 0) break;
    if (*plVar10 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)(param_1 + 0x87c010 + (longlong)(int)uVar7 * 8) = 0;
    uVar15 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar15;
    plVar10 = plVar10 + 1;
  } while (uVar15 < 0xff);
  plVar10 = *(longlong **)(param_1 + 0x87bd10);
  plVar11 = *(longlong **)(param_1 + 0x87bd08);
  if (plVar11 != plVar10) {
    do {
      if ((longlong *)plVar11[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar11[1] + 0x38))();
      }
      if ((longlong *)*plVar11 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar11 + 0x38))();
      }
      plVar11 = plVar11 + 3;
    } while (plVar11 != plVar10);
    plVar11 = *(longlong **)(param_1 + 0x87bd08);
  }
  *(longlong **)(param_1 + 0x87bd10) = plVar11;
  FUN_1804fb680(param_1 + 0x87bd28);
  *(int32_t *)(param_1 + 0x87bd78) = 0x45610000;
  *(int32_t *)(param_1 + 0x87b710) = 0;
  FUN_1804f0ad0(param_1,1);
  uVar15 = *(uint *)(param_1 + 0x52ed94);
  if (0 < (int)uVar15) {
    piVar8 = (int *)(param_1 + 0x30b0);
    uVar7 = uVar18;
    uVar9 = uVar18;
    do {
      if (-1 < *piVar8) goto LAB_1804f3681;
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar9 = uVar9 + 1;
      piVar8 = piVar8 + 0x298;
    } while ((longlong)uVar9 < (longlong)(int)uVar15);
  }
  uVar7 = (ulonglong)uVar15;
LAB_1804f3681:
  if ((int)uVar7 < (int)uVar15) {
    do {
      lVar12 = (longlong)(int)uVar7;
      FUN_1805238b0(lVar12 * 0xa60 + param_1 + 0x30a0,param_1);
      func_0x0001805aeed0(lVar12 * 0x200 + param_1 + 0x52eda0);
      func_0x000180590d40(lVar12 * 0x240 + param_1 + 0x62ed98);
      uVar5 = (uint)*(short *)(param_1 + 0x52dda0 + lVar12 * 2);
      uVar7 = (ulonglong)uVar5;
    } while ((int)uVar5 < (int)uVar15);
  }
  lVar12 = *(longlong *)(param_1 + 0x98d918);
  if (lVar12 != 0) {
    if (*(code **)(lVar12 + 0x550) != (code *)0x0) {
      (**(code **)(lVar12 + 0x550))(lVar12 + 0x540,0,0);
    }
    if (*(code **)(lVar12 + 0x530) != (code *)0x0) {
      (**(code **)(lVar12 + 0x530))(lVar12 + 0x520,0,0);
    }
    if (*(longlong *)(lVar12 + 0x4f0) == 0) {
      FUN_1803a89f0(lVar12 + 0x4c0);
      if ((1 < *(ulonglong *)(lVar12 + 0x4d0)) && (*(longlong *)(lVar12 + 0x4c8) != 0)) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      FUN_1800e7b80(lVar12 + 0x278);
      FUN_1800e7b80(lVar12 + 0x30);
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar12);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x98d918) = 0;
  lVar12 = *(longlong *)(param_1 + 0x98d920);
  if (lVar12 != 0) {
    FUN_1804fd8c0(lVar12);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar12);
  }
  *(uint64_t *)(param_1 + 0x98d920) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    *(uint64_t *)(*(longlong *)(param_1 + 0x18) + 0x2838) = 0;
    FUN_1801a2ea0(*(uint64_t *)(param_1 + 0x18));
    lVar12 = *(longlong *)(param_1 + 0x18);
    if (*(code **)(lVar12 + 0x608e0) != (code *)0x0) {
      (**(code **)(lVar12 + 0x608e0))(lVar12 + 0x608d0,0,0);
    }
    *(uint64_t *)(lVar12 + 0x608e0) = 0;
    *(code **)(lVar12 + 0x608e8) = _guard_check_icall;
    FUN_1804e0970(param_1 + 0x10);
  }
  FUN_1804fbb80(param_1 + 0x30a0);
  FUN_1804fc3f0(param_1 + 0x52eda0);
  FUN_1804fbfb0(param_1 + 0x62ed98);
  FUN_1804fbfb0(param_1 + 0x74eb90);
  if (*(char *)(param_1 + 0x87296c) == '\0') {
    *(uint64_t *)(param_1 + 0x872950) = *(uint64_t *)(param_1 + 0x872948);
    *(int8_t *)(param_1 + 0x87296c) = 1;
  }
  *(int32_t *)(param_1 + 0x872968) = 0;
  if (*(char *)(param_1 + 0x876954) == '\0') {
    *(uint64_t *)(param_1 + 0x876938) = *(uint64_t *)(param_1 + 0x876930);
    *(int8_t *)(param_1 + 0x876954) = 1;
  }
  *(int32_t *)(param_1 + 0x876950) = 0;
  if (*(char *)(param_1 + 0x87a93c) == '\0') {
    *(uint64_t *)(param_1 + 0x87a920) = *(uint64_t *)(param_1 + 0x87a918);
    *(int8_t *)(param_1 + 0x87a93c) = 1;
  }
  *(int32_t *)(param_1 + 0x87a938) = 0;
  *(int8_t *)(param_1 + 0x87a940) = 0;
  FUN_1804fb980(param_1 + 0x87b318);
  FUN_180396940(param_1 + 0x87b368);
  *(int8_t *)(param_1 + 0x87b388) = 0;
  *(int8_t *)(param_1 + 0x87b2f0) = 0;
  FUN_1804fd600(param_1 + 0x87b2f8);
  *(uint64_t *)(param_1 + 0x87b6e0) = *(uint64_t *)(param_1 + 0x87b6d8);
  FUN_1800b8500(param_1 + 0x87b6b8);
  *(uint64_t *)(param_1 + 0x87b398) = *(uint64_t *)(param_1 + 0x87b390);
  *(int8_t *)(param_1 + 0x87b3b0) = 0;
  *(int32_t *)(param_1 + 0x98d930) = 0xffffffff;
  iVar6 = *(int *)(SYSTEM_STATE_MANAGER + 0x230);
  *(int *)(param_1 + 0x98d9d4) = iVar6;
  if (iVar6 == 2) {
    uVar19 = 0x3f800000;
  }
  else if (iVar6 == 1) {
    uVar19 = 0x3f000000;
  }
  else {
    uVar19 = 0x3a83126f;
  }
  *(int32_t *)(param_1 + 0x98d9d8) = uVar19;
  *(uint64_t *)(param_1 + 0x8fd220) = 0;
  *(uint64_t *)(param_1 + 0x98d228) = 0;
  uVar7 = uVar18;
  uVar9 = uVar18;
  if (0 < *(int *)(param_1 + 0x98d23c) * *(int *)(param_1 + 0x98d238)) {
    do {
      lVar12 = *(longlong *)(param_1 + 0x98d248);
      lVar13 = *(longlong *)(uVar7 + lVar12);
      if (lVar13 != 0) {
        pcVar17 = (char *)(lVar12 + 8 + uVar7);
        do {
          do {
            do {
            } while (*pcVar17 != '\0');
            LOCK();
            cVar1 = *pcVar17;
            if (cVar1 == '\0') {
              *pcVar17 = '\x01';
            }
            UNLOCK();
          } while (cVar1 != '\0');
          lVar2 = *(longlong *)(uVar7 + lVar12);
          if (lVar2 == lVar13) {
            *(uint64_t *)(uVar7 + lVar12) = *(uint64_t *)(lVar2 + 0x18);
          }
          else {
            do {
              lVar3 = lVar2;
              if (lVar3 == 0) goto LAB_1804f3a32;
              lVar2 = *(longlong *)(lVar3 + 0x18);
            } while (*(longlong *)(lVar3 + 0x18) != lVar13);
            *(uint64_t *)(lVar3 + 0x18) = *(uint64_t *)(lVar13 + 0x18);
          }
LAB_1804f3a32:
          *(uint64_t *)(lVar13 + 0x10) = 0xffffffffffffffff;
          *(uint64_t *)(lVar13 + 0x18) = 0;
          *pcVar17 = '\0';
          lVar13 = *(longlong *)(uVar7 + lVar12);
        } while (lVar13 != 0);
      }
      uVar15 = (int)uVar9 + 1;
      uVar7 = uVar7 + 9;
      uVar9 = (ulonglong)uVar15;
    } while ((int)uVar15 < *(int *)(param_1 + 0x98d23c) * *(int *)(param_1 + 0x98d238));
  }
  plVar10 = *(longlong **)(param_1 + 0x98d250);
  if (plVar10 != (longlong *)0x0) {
    lVar12 = __RTCastToVoid(plVar10);
    (**(code **)(*plVar10 + 0x30))(plVar10,0);
    if (lVar12 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar12);
    }
  }
  *(uint64_t *)(param_1 + 0x98d250) = 0;
  *(int32_t *)(param_1 + 0x98d948) = 0;
  *(uint64_t *)(param_1 + 0x98d278) = 0;
  *(uint64_t *)(param_1 + 0x98d280) = 0;
  *(uint64_t *)(param_1 + 0x98d258) =
       *(uint64_t *)(&system_error_code + (longlong)*(int *)(param_1 + 0x98d260) * 8);
  *(uint64_t *)(param_1 + 0x98d268) =
       *(uint64_t *)(&system_error_code + (longlong)*(int *)(param_1 + 0x98d270) * 8);
  lVar12 = *(longlong *)(param_1 + 0x98d900);
  lVar13 = *(longlong *)(param_1 + 0x98d8f8);
  if (lVar13 != lVar12) {
    do {
      FUN_180502300(lVar13);
      lVar13 = lVar13 + 0x70;
    } while (lVar13 != lVar12);
    lVar13 = *(longlong *)(param_1 + 0x98d8f8);
  }
  *(longlong *)(param_1 + 0x98d900) = lVar13;
  puVar4 = system_system_config;
  if ((system_data_2588 != '\0') && (system_system_config != (uint64_t *)0x0)) {
    *(int8_t *)(system_system_config + 0xce) = 0;
    puVar4[0xcd] = *puVar4;
    puVar4[0xc0] = puVar4[0xbf];
    puVar4[0xc4] = puVar4[0xc3];
    *(int32_t *)(puVar4 + 199) = 0xffffffff;
    puVar4[0xca] = puVar4[0xc9];
    func_0x0001805f6d90(&system_data_5bf0);
  }
  plVar10 = *(longlong **)(param_1 + 0x18);
  *(uint64_t *)(param_1 + 0x18) = 0;
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x38))();
  }
  FUN_180194370();
  FUN_1801946e0(system_system_data_config);
  *(uint64_t *)(param_1 + 0x98d28c) = 0;
  *(uint64_t *)(param_1 + 0x98d294) = 0;
  lVar12 = system_system_data_config;
  iVar6 = _Mtx_lock(system_system_data_config);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  lVar13 = *(longlong *)(lVar12 + 0xa0);
  uVar7 = uVar18;
  uVar9 = uVar18;
  if ((*(longlong *)(lVar12 + 0xa8) - lVar13) / 0x28 != 0) {
    do {
      uVar14 = uVar18;
      uVar16 = uVar18;
      if (*(longlong *)(lVar13 + 0x10 + uVar7) - *(longlong *)(lVar13 + 8 + uVar7) >> 3 != 0) {
        do {
          if (*(longlong *)(uVar16 + *(longlong *)(lVar13 + 8 + uVar7)) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(uint64_t *)(uVar16 + *(longlong *)(uVar7 + 8 + *(longlong *)(lVar12 + 0xa0))) = 0;
          uVar15 = (int)uVar14 + 1;
          lVar13 = *(longlong *)(lVar12 + 0xa0);
          uVar14 = (ulonglong)uVar15;
          uVar16 = uVar16 + 8;
        } while ((ulonglong)(longlong)(int)uVar15 <
                 (ulonglong)
                 (*(longlong *)(lVar13 + 0x10 + uVar7) - *(longlong *)(lVar13 + 8 + uVar7) >> 3));
      }
      *(uint64_t *)(lVar13 + 0x10 + uVar7) = *(uint64_t *)(lVar13 + 8 + uVar7);
      uVar15 = (int)uVar9 + 1;
      lVar13 = *(longlong *)(lVar12 + 0xa0);
      uVar7 = uVar7 + 0x28;
      uVar9 = (ulonglong)uVar15;
    } while ((ulonglong)(longlong)(int)uVar15 <
             (ulonglong)((*(longlong *)(lVar12 + 0xa8) - lVar13) / 0x28));
  }
  iVar6 = _Mtx_unlock(lVar12);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f3d00(longlong param_1)
void FUN_1804f3d00(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int8_t auStack_88 [32];
  int32_t uStack_68;
  uint64_t uStack_60;
  void *puStack_58;
  int8_t *puStack_50;
  int32_t uStack_48;
  int8_t auStack_40 [16];
  ulonglong uStack_30;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_88;
  pcVar1 = *(code **)(*system_system_data_config + 0x18);
  uVar8 = 0;
  puStack_58 = &system_config_ptr;
  puStack_50 = auStack_40;
  auStack_40[0] = 0;
  uStack_48 = 0xc;
  strcpy_s(auStack_40,0x10,&unknown_var_3752_ptr);
  (*pcVar1)(system_system_data_config,&puStack_58,0);
  puStack_58 = &system_state_ptr;
  FUN_180158f40();
  FUN_1804f0ad0(param_1,1);
  uVar9 = *(uint *)(param_1 + 0x52ed94);
  if (0 < (int)uVar9) {
    piVar6 = (int *)(param_1 + 0x30b0);
    uVar5 = uVar8;
    uVar7 = uVar8;
    do {
      if (-1 < *piVar6) goto LAB_1804f3df9;
      uVar5 = (ulonglong)((int)uVar5 + 1);
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 0x298;
    } while ((longlong)uVar7 < (longlong)(int)uVar9);
  }
  uVar5 = (ulonglong)uVar9;
LAB_1804f3df9:
  if ((int)uVar5 < (int)uVar9) {
    do {
      lVar10 = (longlong)(int)uVar5;
      FUN_1805238b0(lVar10 * 0xa60 + param_1 + 0x30a0,param_1);
      func_0x0001805aeed0(lVar10 * 0x200 + param_1 + 0x52eda0);
      func_0x000180590d40(lVar10 * 0x240 + param_1 + 0x62ed98);
      uVar3 = (uint)*(short *)(param_1 + 0x52dda0 + lVar10 * 2);
      uVar5 = (ulonglong)uVar3;
    } while ((int)uVar3 < (int)uVar9);
  }
  uVar5 = uVar8;
  if (system_status_flag - 2U < 2) {
    do {
      FUN_18055d610(&system_data_25a0,uVar5);
      uVar9 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar9;
    } while ((int)uVar9 < 0x3ff);
    lVar10 = system_system_config - system_system_config >> 0x3f;
    uVar5 = uVar8;
    if ((system_system_config - system_system_config) / 0xd08 + lVar10 != lVar10) {
      do {
        iVar4 = (int)uVar5;
        FUN_1805b32b0(&system_data_25a0,uVar5);
        uVar5 = (ulonglong)(iVar4 + 1U);
      } while ((ulonglong)(longlong)(int)(iVar4 + 1U) <
               (ulonglong)((system_system_config - system_system_config) / 0xd08));
    }
  }
  lVar10 = system_system_config;
  if (system_system_config != 0) {
    lVar11 = (longlong)
             (int)(*(longlong *)(system_system_config + 0x600) - *(longlong *)(system_system_config + 0x5f8) >>
                  5);
    uVar5 = uVar8;
    if (3 < lVar11) {
      lVar12 = (lVar11 - 4U >> 2) + 1;
      uVar5 = lVar12 * 4;
      uVar7 = uVar8;
      do {
        lVar2 = *(longlong *)(lVar10 + 0x5f8);
        *(uint64_t *)(uVar7 + 0xc + lVar2) = system_system_config;
        *(uint64_t *)(uVar7 + lVar2) = 0;
        *(uint64_t *)(uVar7 + 0x14 + lVar2) = system_system_config;
        *(int16_t *)(uVar7 + 8 + lVar2) = 0x101;
        lVar2 = *(longlong *)(lVar10 + 0x5f8);
        *(uint64_t *)(lVar2 + 0x2c + uVar7) = system_system_config;
        *(uint64_t *)(lVar2 + 0x20 + uVar7) = 0;
        *(uint64_t *)(lVar2 + 0x34 + uVar7) = system_system_config;
        *(int16_t *)(lVar2 + 0x28 + uVar7) = 0x101;
        lVar2 = *(longlong *)(lVar10 + 0x5f8);
        *(uint64_t *)(lVar2 + 0x4c + uVar7) = system_system_config;
        *(uint64_t *)(lVar2 + 0x40 + uVar7) = 0;
        *(uint64_t *)(lVar2 + 0x54 + uVar7) = system_system_config;
        *(int16_t *)(lVar2 + 0x48 + uVar7) = 0x101;
        lVar2 = *(longlong *)(lVar10 + 0x5f8);
        *(uint64_t *)(uVar7 + 0x6c + lVar2) = system_system_config;
        *(uint64_t *)(uVar7 + 0x60 + lVar2) = 0;
        *(uint64_t *)(uVar7 + 0x74 + lVar2) = system_system_config;
        *(int16_t *)(uVar7 + 0x68 + lVar2) = 0x101;
        uVar7 = uVar7 + 0x80;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    if ((longlong)uVar5 < lVar11) {
      lVar12 = uVar5 << 5;
      lVar11 = lVar11 - uVar5;
      do {
        lVar2 = *(longlong *)(lVar10 + 0x5f8);
        *(uint64_t *)(lVar12 + 0xc + lVar2) = system_system_config;
        *(uint64_t *)(lVar12 + lVar2) = 0;
        *(uint64_t *)(lVar12 + 0x14 + lVar2) = system_system_config;
        *(int16_t *)(lVar12 + 8 + lVar2) = 0x101;
        lVar12 = lVar12 + 0x20;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    iVar4 = (int)(*(longlong *)(lVar10 + 0x620) - *(longlong *)(lVar10 + 0x618) >> 3);
    if (0 < iVar4) {
      do {
        lVar11 = *(longlong *)(lVar10 + 0x618);
        *(int32_t *)(lVar11 + uVar8 * 8) = 0xffffffff;
        *(int16_t *)(lVar11 + 4 + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while ((longlong)uVar8 < (longlong)iVar4);
    }
  }
  FUN_1804fbb80(param_1 + 0x30a0);
  FUN_1804fc3f0(param_1 + 0x52eda0);
  FUN_1804fbfb0(param_1 + 0x62ed98);
  FUN_1804fbfb0(param_1 + 0x74eb90);
  FUN_1804fb980(param_1 + 0x87b318);
  FUN_1804fd600(param_1 + 0x87b2f8);
  FUN_180396940(param_1 + 0x87b368);
  *(int8_t *)(param_1 + 0x87b2f0) = 0;
  uStack_68 = 0;
  if ((*(int *)(param_1 + 0x98d928) != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))();
  }
  *(int32_t *)(param_1 + 0x98d928) = 0;
  uStack_68 = 0;
  pcVar1 = *(code **)(*system_system_data_config + 0x18);
  puStack_58 = &system_config_ptr;
  puStack_50 = auStack_40;
  auStack_40[0] = 0;
  uStack_48 = 8;
  strcpy_s(auStack_40,0x10,&unknown_var_3912_ptr);
  (*pcVar1)(system_system_data_config,&puStack_58,0);
  puStack_58 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_88);
}






// 函数: void FUN_1804f41b0(longlong param_1)
void FUN_1804f41b0(longlong param_1)

{
  longlong lVar1;
  int8_t uVar2;
  uint64_t uVar3;
  
  if (-1 < *(int *)(param_1 + 0x98d930)) {
    param_1 = (longlong)*(int *)(param_1 + 0x98d930) * 0xa60 + param_1;
    lVar1 = *(longlong *)(param_1 + 0x3778);
    if (*(longlong *)(lVar1 + 0x8a8) != 0) {
      if ((*(int *)(param_1 + 0x3610) == 2) && (system_data_ec8a != '\0')) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      *(int8_t *)(lVar1 + 0x848) = uVar2;
      FUN_180543e30(lVar1);
      FUN_180540440(lVar1,param_1 + 0x30a0);
    }
    if ((system_data_ec8a == '\0') || (uVar3 = 0x20, *(int *)(param_1 + 0x3608) != 1)) {
      uVar3 = 0x21;
    }
    FUN_180541010(lVar1,uVar3);
  }
  return;
}






// 函数: void FUN_1804f41c3(longlong param_1)
void FUN_1804f41c3(longlong param_1)

{
  longlong lVar1;
  int8_t in_AL;
  int8_t uVar2;
  uint8_t in_register_00000001;
  uint64_t uVar3;
  
  param_1 = CONCAT71(in_register_00000001,in_AL) * 0xa60 + param_1;
  lVar1 = *(longlong *)(param_1 + 0x3778);
  if (*(longlong *)(lVar1 + 0x8a8) != 0) {
    if ((*(int *)(param_1 + 0x3610) == 2) && (system_data_ec8a != '\0')) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    *(int8_t *)(lVar1 + 0x848) = uVar2;
    FUN_180543e30(lVar1);
    FUN_180540440(lVar1,param_1 + 0x30a0);
  }
  if ((system_data_ec8a == '\0') || (uVar3 = 0x20, *(int *)(param_1 + 0x3608) != 1)) {
    uVar3 = 0x21;
  }
  FUN_180541010(lVar1,uVar3);
  return;
}






// 函数: void FUN_1804f424b(void)
void FUN_1804f424b(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f4250(longlong param_1,int param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804f4250(longlong param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  short sVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  short *psVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  float fVar21;
  int32_t uVar22;
  
  cVar4 = (char)param_3;
  lVar12 = (longlong)param_2;
  iVar5 = 0;
  uVar22 = 0;
  if ((((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x52ed94))) &&
      (-1 < *(short *)(param_1 + 0x52dda0 + lVar12 * 2))) ||
     ((system_status_flag != 1 && (system_status_flag != 4)))) {
    lVar20 = param_1 + 0x30a0 + lVar12 * 0xa60;
    if (cVar4 != '\0') {
      FUN_18051a8a0(lVar20,1,param_3,param_4,0,0xfffffffffffffffe);
    }
    uVar18 = 0;
    iVar16 = *(int *)(param_1 + 0x87b318);
    if (0 < iVar16) {
      do {
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x87b340) + (uVar18 >> 4) * 8) + 8 +
                    (ulonglong)((uint)uVar18 & 0xf) * 0xbe0) != 0) break;
        uVar13 = (uint)uVar18 + 1;
        uVar18 = (ulonglong)uVar13;
      } while ((int)uVar13 < iVar16);
    }
    if ((int)uVar18 < iVar16) {
      do {
        lVar15 = (ulonglong)((uint)uVar18 & 0xf) * 0xbe0 +
                 *(longlong *)(*(longlong *)(param_1 + 0x87b340) + (uVar18 >> 4) * 8);
        if (*(int *)(lVar15 + 0x2a0) == param_2) {
          *(int32_t *)(lVar15 + 0x2a0) = 0xffffffff;
        }
        uVar13 = (uint)uVar18 + 1;
        uVar18 = (ulonglong)uVar13;
        iVar16 = *(int *)(param_1 + 0x87b318);
        if (iVar16 <= (int)uVar13) break;
        do {
          if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x87b340) + (uVar18 >> 4) * 8) + 8 +
                      (ulonglong)((uint)uVar18 & 0xf) * 0xbe0) != 0) break;
          uVar13 = (uint)uVar18 + 1;
          uVar18 = (ulonglong)uVar13;
        } while ((int)uVar13 < iVar16);
      } while ((int)uVar18 < iVar16);
    }
    if (-1 < *(int *)(lVar20 + 0x6a0)) {
      FUN_1804fc920((longlong)
                    ((int)*(uint64_t *)(lVar20 + 0x6a0) +
                    (int)((ulonglong)*(uint64_t *)(lVar20 + 0x6a0) >> 0x20) *
                    *(int *)(param_1 + 0x98d238)) * 9 + *(longlong *)(param_1 + 0x98d248));
    }
    (**(code **)(**(longlong **)(param_1 + 0x98d250) + 0x18))
              (*(longlong **)(param_1 + 0x98d250),lVar20);
    lVar15 = system_system_config;
    if (((cVar4 == '\0') && ((system_status_flag - 2U & 0xfffffffc) == 0)) && (system_status_flag != 4)) {
      iVar5 = _Mtx_lock(0x180c95528);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      cVar4 = FUN_180645c10(0x180c95578,0,&system_param1_ptr);
      if ((cVar4 != '\0') && (cVar4 = FUN_180645c10(0x180c95578,0xd,&unknown_var_3472_ptr), cVar4 != '\0'))
      {
        FUN_180645c10(0x180c95578,param_2,&unknown_var_3424_ptr);
      }
      system_system_config = system_system_config & 0xffffffff00000000;
      iVar5 = (int)(system_system_config - system_system_config >> 3);
      if (0 < iVar5) {
        lVar20 = 0;
        lVar12 = system_system_config;
        do {
          lVar15 = *(longlong *)(lVar12 + lVar20 * 8);
          if ((lVar15 != 0) && (*(char *)(*(longlong *)(lVar15 + 0x58f8) + 0x1c) != '\0')) {
            FUN_1805b59d0(lVar15,0x180c95578);
            lVar12 = system_system_config;
          }
          lVar20 = lVar20 + 1;
        } while (lVar20 < iVar5);
      }
      if (system_system_config != 0) {
        FUN_180567f30(system_system_config,0x180c95578);
      }
      system_system_config = 0;
                    // WARNING: Subroutine does not return
      memset(system_system_config,0,(longlong)(system_system_config >> 3));
    }
    if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
      iVar16 = 0;
      do {
        FUN_1805b32b0(&system_data_25a0,iVar16 + param_2 * 0x10);
        iVar16 = iVar16 + 1;
      } while (iVar16 < 0x10);
      if (system_system_config - system_system_config >> 3 != 0) {
        lVar15 = 0;
        do {
          FUN_180506ae0(*(longlong *)(lVar15 + system_system_config) + 0x5940,param_2);
          iVar5 = iVar5 + 1;
          lVar15 = lVar15 + 8;
        } while ((ulonglong)(longlong)iVar5 < (ulonglong)(system_system_config - system_system_config >> 3));
      }
      if (system_system_config != 0) {
        FUN_180506ae0(system_system_config + 0x5f8,param_2);
      }
    }
    else if ((system_status_flag == 1) || (system_status_flag == 4)) {
      fVar21 = (float)system_system_data_config * 1e-05;
      if (system_status_flag == 1) {
        iVar5 = 0;
        lVar15 = system_system_config + 0x4c488;
        do {
          func_0x0001805697b0(lVar15,iVar5 + param_2 * 0x10);
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x10);
      }
      else {
        uVar13 = param_2 << 4;
        lVar14 = lVar12 * 0xe00;
        lVar17 = 0x10;
        do {
          lVar3 = *(longlong *)(lVar15 + 0x648);
          if ((ulonglong)(longlong)(int)uVar13 <
              (ulonglong)((*(longlong *)(lVar15 + 0x650) - lVar3) / 0xe0)) {
            uVar7 = uVar13 & 0x8000000f;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
            }
            *(uint64_t *)(lVar3 + 0xd0 + lVar14) = system_system_config;
            *(float *)(lVar3 + 0xd8 + lVar14) = fVar21;
            *(int8_t *)(lVar3 + 0xdc + lVar14) = 0;
            switch(uVar7) {
            case 0:
            case 9:
              func_0x0001805b2c90(lVar3 + 0x10 + lVar14);
              break;
            case 1:
              *(uint64_t *)(lVar3 + 0xa0 + lVar14) = 0xffffffffffffffff;
              *(int16_t *)(lVar3 + 200 + lVar14) = 0xff;
              *(uint64_t *)(lVar3 + 0xa8 + lVar14) = 0;
              *(uint64_t *)(lVar3 + 0xb0 + lVar14) = 0;
              *(uint64_t *)(lVar3 + 0xb8 + lVar14) = 0;
              *(uint64_t *)(lVar3 + 0xc0 + lVar14) = 0;
              *(int32_t *)(lVar3 + 0xcc + lVar14) = 0;
              break;
            case 2:
              puVar1 = (int32_t *)(lVar3 + lVar14);
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1[2] = 0;
              puVar1[3] = 0;
              break;
            case 3:
            case 4:
            case 5:
            case 7:
            case 8:
            case 10:
            case 0xb:
            case 0xc:
            case 0xd:
            case 0xe:
              *(int32_t *)(lVar3 + lVar14) = 0;
              break;
            case 6:
              *(int32_t *)(lVar3 + lVar14) = 1;
              break;
            case 0xf:
              *(int32_t *)(lVar3 + lVar14) = 0xffffffff;
            }
          }
          uVar13 = uVar13 + 1;
          lVar14 = lVar14 + 0xe0;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
    }
    lVar15 = system_system_data_config;
    lVar14 = param_1 + 0x30a0;
    if (cVar4 == '\0') {
      iVar5 = *(int *)(lVar20 + 0x18);
      if ((iVar5 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x30))(iVar5);
      }
      (**(code **)(lVar15 + 0x228))(*(int32_t *)(param_1 + 0x98d928),iVar5);
      uVar22 = 0;
      if ((iVar5 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x18))(iVar5);
      }
    }
    FUN_18051aff0(lVar20,1,param_1 + 0x87a948);
    FUN_180507360(lVar20,0);
    *(int8_t *)(lVar20 + 0x1c) = 1;
    plVar11 = (longlong *)(lVar12 * 0xa60 + lVar14);
    (**(code **)(*plVar11 + 0x68))(plVar11);
    *(int32_t *)(plVar11 + 2) = 0xffffffff;
    *(int *)(param_1 + 0x52ed90) = *(int *)(param_1 + 0x52ed90) + -1;
    iVar5 = param_2 + -1;
    uVar18 = (ulonglong)iVar5;
    if (-1 < iVar5) {
      psVar10 = (short *)(lVar14 + (uVar18 + 0x295680) * 2);
      uVar8 = uVar18;
      uVar19 = uVar18;
      do {
        if (*psVar10 == param_2) {
          sVar2 = *(short *)(param_1 + 0x52dda0 + lVar12 * 2);
          sVar6 = sVar2 + -1;
          if ((int)sVar2 != *(int *)(param_1 + 0x52ed94)) {
            sVar6 = sVar2;
          }
          *(short *)(param_1 + 0x52dda0 + (longlong)(int)uVar19 * 2) = sVar6;
          break;
        }
        uVar19 = (ulonglong)((int)uVar19 - 1);
        psVar10 = psVar10 + -1;
        uVar8 = uVar8 - 1;
      } while (-1 < (longlong)uVar8);
    }
    *(int16_t *)(param_1 + 0x52dda0 + lVar12 * 2) = 0xffff;
    if ((*(int *)(param_1 + 0x52ed94) == param_2 + 1) &&
       (*(int32_t *)(param_1 + 0x52ed94) = 0, -1 < (longlong)uVar18)) {
      piVar9 = (int *)(uVar18 * 0xa60 + 0x10 + lVar14);
      uVar8 = uVar18;
      iVar16 = iVar5;
      do {
        if (-1 < *piVar9) {
          *(int *)(param_1 + 0x52ed94) = iVar16 + 1;
          break;
        }
        iVar16 = iVar16 + -1;
        piVar9 = piVar9 + -0x298;
        uVar8 = uVar8 - 1;
      } while (-1 < (longlong)uVar8);
    }
    *(int32_t *)(lVar12 * 0x200 + 0x52edbc + param_1) = 0xffffffff;
    *(int *)(param_1 + 0x62ed90) = *(int *)(param_1 + 0x62ed90) + -1;
    iVar16 = iVar5;
    if (-1 < (longlong)uVar18) {
      psVar10 = (short *)(param_1 + 0x62dda0 + uVar18 * 2);
      uVar8 = uVar18;
      do {
        if (*psVar10 == param_2) {
          sVar2 = *(short *)(param_1 + 0x62dda0 + lVar12 * 2);
          sVar6 = sVar2 + -1;
          if ((int)sVar2 != *(int *)(param_1 + 0x62ed94)) {
            sVar6 = sVar2;
          }
          *(short *)(param_1 + 0x62dda0 + (longlong)iVar16 * 2) = sVar6;
          break;
        }
        iVar16 = iVar16 + -1;
        psVar10 = psVar10 + -1;
        uVar8 = uVar8 - 1;
      } while (-1 < (longlong)uVar8);
    }
    *(int16_t *)(param_1 + 0x62dda0 + lVar12 * 2) = 0xffff;
    if ((*(int *)(param_1 + 0x62ed94) == param_2 + 1) &&
       (*(int32_t *)(param_1 + 0x62ed94) = 0, -1 < (longlong)uVar18)) {
      piVar9 = (int *)(param_1 + 0x52edbc + uVar18 * 0x200);
      do {
        if (-1 < *piVar9) {
          *(int *)(param_1 + 0x62ed94) = iVar5 + 1;
          break;
        }
        iVar5 = iVar5 + -1;
        piVar9 = piVar9 + -0x80;
        uVar18 = uVar18 - 1;
      } while (-1 < (longlong)uVar18);
    }
    FUN_1804fc230(param_1 + 0x62ed98,param_2,iVar16,uVar18,uVar22);
    FUN_1804fc230(param_1 + 0x74eb90,param_2);
    *(int8_t *)(param_1 + 0x87a940) = 1;
    *(int8_t *)(param_1 + 0x87b728) = 1;
  }
  return;
}






