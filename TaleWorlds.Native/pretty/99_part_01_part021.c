#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part021.c - 7 个函数

// 函数: void FUN_1800b4ec0(uint64_t param_1,char param_2,char param_3)
void FUN_1800b4ec0(uint64_t param_1,char param_2,char param_3)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  int8_t auStack_c8 [32];
  char cStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  uint64_t uStack_50;
  longlong alStack_48 [4];
  
  lVar4 = _DAT_180c86930;
  uStack_50 = 0xfffffffffffffffe;
  alStack_48[3] = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_c8;
  lStack_a0 = _DAT_180c86930;
  lStack_58 = _DAT_180c86930 + 0x770;
  cStack_a8 = param_2;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lStack_60 = lVar4 + 0x7c0;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lStack_68 = lVar4 + 0x810;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lStack_70 = lVar4 + 0x860;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lStack_78 = lVar4 + 0x8b0;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lStack_80 = lVar4 + 0x900;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lStack_88 = lVar4 + 0x950;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lStack_90 = lVar4 + 0x9a0;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lStack_98 = lVar4 + 0x9f0;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  if (param_3 != '\0') {
    plVar8 = *(longlong **)(lVar4 + 0xa8);
    for (plVar7 = *(longlong **)(lVar4 + 0xa0); plVar7 != plVar8; plVar7 = plVar7 + 1) {
      lVar15 = *plVar7;
      if ((*(int *)(lVar15 + 0x380) == 2) && ((*(uint *)(lVar15 + 0x328) & 0x20000000) == 0)) {
        FUN_18023b050(lVar15,0);
      }
    }
  }
  alStack_48[0] = lVar4 + 0x6c0;
  alStack_48[1] = lVar4 + 0x6e0;
  alStack_48[2] = lVar4 + 0x700;
  lVar15 = 0;
  do {
    plVar6 = (longlong *)0x0;
    plVar8 = (longlong *)alStack_48[lVar15];
    plVar7 = (longlong *)plVar8[1];
    plVar9 = (longlong *)*plVar8;
    uVar14 = (longlong)plVar7 - (longlong)plVar9 >> 3;
    iVar5 = (int)uVar14;
    lVar13 = (longlong)iVar5;
    plVar12 = plVar6;
    if (0 < iVar5) {
      do {
        lVar2 = *(longlong *)(*plVar8 + (longlong)plVar12 * 8);
        if ((((*(int *)(lVar2 + 8) == 1) && (*(int *)(lVar2 + 0x380) == 2)) &&
            ((*(uint *)(lVar2 + 0x328) & 0x20000000) == 0)) &&
           ((*(longlong *)(lVar2 + 0x340) + 5U <
             (ulonglong)(longlong)*(int *)(_DAT_180c86870 + 0x224) || (param_2 == '\0')))) {
          puVar1 = (uint64_t *)(*plVar8 + (longlong)plVar12 * 8);
          lVar2 = *plVar8 + lVar13 * 8;
          uVar3 = *puVar1;
          *puVar1 = *(uint64_t *)(lVar2 + -8);
          *(uint64_t *)(lVar2 + -8) = uVar3;
          uVar14 = (ulonglong)((int)uVar14 - 1);
          lVar13 = lVar13 + -1;
        }
        else {
          plVar12 = (longlong *)((longlong)plVar12 + 1);
        }
        iVar5 = (int)uVar14;
      } while ((longlong)plVar12 < lVar13);
      plVar7 = (longlong *)plVar8[1];
      plVar9 = (longlong *)*plVar8;
    }
    uVar11 = (ulonglong)iVar5;
    uVar14 = (longlong)plVar7 - (longlong)plVar9 >> 3;
    if (uVar14 < uVar11) {
      uVar10 = uVar11 - uVar14;
      if (uVar10 <= (ulonglong)(plVar8[2] - (longlong)plVar7 >> 3)) {
        uVar14 = uVar10;
        if (uVar10 != 0) {
          for (; uVar14 != 0; uVar14 = uVar14 - 1) {
            *plVar7 = 0;
            plVar7 = plVar7 + 1;
          }
          plVar7 = (longlong *)plVar8[1];
        }
        plVar7 = plVar7 + uVar10;
        param_2 = cStack_a8;
        goto LAB_1800b5291;
      }
      uVar16 = uVar14 * 2;
      if (uVar14 == 0) {
        uVar16 = 1;
      }
      if (uVar16 < uVar11) {
        uVar16 = uVar11;
      }
      plVar12 = plVar6;
      if (uVar16 != 0) {
        plVar6 = (longlong *)FUN_18062b420(_DAT_180c8ed18,uVar16 * 8,(char)plVar8[3]);
        plVar7 = (longlong *)plVar8[1];
        plVar9 = (longlong *)*plVar8;
        plVar12 = plVar6;
      }
      for (; plVar9 != plVar7; plVar9 = plVar9 + 1) {
        *plVar6 = *plVar9;
        *plVar9 = 0;
        plVar6 = plVar6 + 1;
      }
      uVar14 = uVar10;
      plVar7 = plVar6;
      if (uVar10 != 0) {
        for (; uVar14 != 0; uVar14 = uVar14 - 1) {
          *plVar7 = 0;
          plVar7 = plVar7 + 1;
        }
      }
      plVar7 = (longlong *)plVar8[1];
      plVar9 = (longlong *)*plVar8;
      if (plVar9 != plVar7) {
        do {
          if ((longlong *)*plVar9 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar9 + 0x38))();
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar7);
        plVar9 = (longlong *)*plVar8;
      }
      if (plVar9 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar9);
      }
      *plVar8 = (longlong)plVar12;
      plVar8[1] = (longlong)(plVar6 + uVar10);
      plVar8[2] = (longlong)(plVar12 + uVar16);
      param_2 = cStack_a8;
    }
    else {
      plVar6 = plVar9 + uVar11;
      if (plVar6 != plVar7) {
        do {
          if ((longlong *)*plVar6 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar6 + 0x38))();
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar7);
        plVar9 = (longlong *)*plVar8;
      }
      plVar7 = plVar9 + uVar11;
LAB_1800b5291:
      plVar8[1] = (longlong)plVar7;
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 < 3);
  lVar15 = *(longlong *)(lVar4 + 0x748);
  if (lVar15 != lVar4 + 0x740) {
    plVar7 = (longlong *)0x0;
    do {
      plVar8 = *(longlong **)(lVar15 + 0x30);
      plVar9 = *(longlong **)(lVar15 + 0x28);
      uVar14 = (longlong)plVar8 - (longlong)plVar9 >> 3;
      iVar5 = (int)uVar14;
      lVar13 = (longlong)iVar5;
      plVar6 = plVar7;
      if (0 < iVar5) {
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar15 + 0x28) + (longlong)plVar6 * 8);
          if ((*(int *)(lVar2 + 8) == 1) &&
             ((*(int *)(lVar2 + 0x16c) + 5 < *(int *)(_DAT_180c86870 + 0x224) || (param_2 == '\0')))
             ) {
            puVar1 = (uint64_t *)(*(longlong *)(lVar15 + 0x28) + (longlong)plVar6 * 8);
            lVar2 = *(longlong *)(lVar15 + 0x28) + lVar13 * 8;
            uVar3 = *puVar1;
            *puVar1 = *(uint64_t *)(lVar2 + -8);
            *(uint64_t *)(lVar2 + -8) = uVar3;
            uVar14 = (ulonglong)((int)uVar14 - 1);
            lVar13 = lVar13 + -1;
          }
          else {
            plVar6 = (longlong *)((longlong)plVar6 + 1);
          }
          iVar5 = (int)uVar14;
        } while ((longlong)plVar6 < lVar13);
        plVar8 = *(longlong **)(lVar15 + 0x30);
        plVar9 = *(longlong **)(lVar15 + 0x28);
      }
      uVar11 = (ulonglong)iVar5;
      uVar14 = (longlong)plVar8 - (longlong)plVar9 >> 3;
      if (uVar14 < uVar11) {
        uVar10 = uVar11 - uVar14;
        if (uVar10 <= (ulonglong)(*(longlong *)(lVar15 + 0x38) - (longlong)plVar8 >> 3)) {
          uVar14 = uVar10;
          if (uVar10 != 0) {
            for (; uVar14 != 0; uVar14 = uVar14 - 1) {
              *plVar8 = 0;
              plVar8 = plVar8 + 1;
            }
            plVar8 = *(longlong **)(lVar15 + 0x30);
          }
          plVar8 = plVar8 + uVar10;
          goto LAB_1800b547f;
        }
        uVar16 = uVar14 * 2;
        if (uVar14 == 0) {
          uVar16 = 1;
        }
        if (uVar16 < uVar11) {
          uVar16 = uVar11;
        }
        plVar6 = plVar7;
        plVar12 = plVar7;
        if (uVar16 != 0) {
          plVar6 = (longlong *)
                   FUN_18062b420(_DAT_180c8ed18,uVar16 * 8,*(int8_t *)(lVar15 + 0x40));
          plVar8 = *(longlong **)(lVar15 + 0x30);
          plVar9 = *(longlong **)(lVar15 + 0x28);
          plVar12 = plVar6;
        }
        for (; plVar9 != plVar8; plVar9 = plVar9 + 1) {
          *plVar6 = *plVar9;
          *plVar9 = 0;
          plVar6 = plVar6 + 1;
        }
        uVar14 = uVar10;
        plVar8 = plVar6;
        if (uVar10 != 0) {
          for (; uVar14 != 0; uVar14 = uVar14 - 1) {
            *plVar8 = 0;
            plVar8 = plVar8 + 1;
          }
        }
        plVar8 = *(longlong **)(lVar15 + 0x30);
        plVar9 = *(longlong **)(lVar15 + 0x28);
        if (plVar9 != plVar8) {
          do {
            if ((longlong *)*plVar9 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar9 + 0x38))();
            }
            plVar9 = plVar9 + 1;
          } while (plVar9 != plVar8);
          plVar9 = *(longlong **)(lVar15 + 0x28);
        }
        if (plVar9 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar9);
        }
        *(longlong **)(lVar15 + 0x28) = plVar12;
        *(longlong **)(lVar15 + 0x30) = plVar6 + uVar10;
        *(longlong **)(lVar15 + 0x38) = plVar12 + uVar16;
      }
      else {
        plVar6 = plVar9 + uVar11;
        if (plVar6 != plVar8) {
          do {
            if ((longlong *)*plVar6 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar6 + 0x38))();
            }
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar8);
          plVar9 = *(longlong **)(lVar15 + 0x28);
        }
        plVar8 = plVar9 + uVar11;
LAB_1800b547f:
        *(longlong **)(lVar15 + 0x30) = plVar8;
      }
      lVar15 = func_0x00018066bd70(lVar15);
      param_2 = cStack_a8;
    } while (lVar15 != lVar4 + 0x740);
  }
  FUN_18005cf50(lStack_a0);
  iVar5 = _Mtx_unlock(lStack_98);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  iVar5 = _Mtx_unlock(lStack_90);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  iVar5 = _Mtx_unlock(lStack_88);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  iVar5 = _Mtx_unlock(lStack_80);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  iVar5 = _Mtx_unlock(lStack_78);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  iVar5 = _Mtx_unlock(lStack_70);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  iVar5 = _Mtx_unlock(lStack_68);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  iVar5 = _Mtx_unlock(lStack_60);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  iVar5 = _Mtx_unlock(lStack_58);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(alStack_48[3] ^ (ulonglong)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char FUN_1800b55b0(uint64_t param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  char cVar6;
  void *puVar7;
  ulonglong *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  char *pcVar13;
  uint64_t uVar14;
  
  lVar3 = _DAT_180c86930;
  uVar14 = 0xfffffffffffffffe;
  iVar4 = (**(code **)(*(longlong *)*param_2 + 0x60))();
  puVar8 = (ulonglong *)(lVar3 + 8 + (longlong)iVar4 * 0x98);
  pcVar13 = "";
  if (*(char **)(*param_2 + 0x18) != (char *)0x0) {
    pcVar13 = *(char **)(*param_2 + 0x18);
  }
  iVar4 = _Mtx_lock(puVar8 + 8);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  cVar6 = '\0';
  if ((char)puVar8[0x12] == '\0') {
    iVar4 = FUN_1802abf70(puVar8,pcVar13);
    uVar10 = (ulonglong)*(int *)(puVar8[4] + 4 + (longlong)iVar4 * 8);
    uVar12 = *puVar8;
    if (uVar10 < (ulonglong)((longlong)(puVar8[1] - uVar12) >> 3)) {
      plVar11 = (longlong *)(uVar12 + uVar10 * 8);
      do {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(*plVar11 + 0x18) != (void *)0x0) {
          puVar7 = *(void **)(*plVar11 + 0x18);
        }
        pcVar5 = pcVar13;
        do {
          cVar1 = *pcVar5;
          cVar2 = pcVar5[(longlong)puVar7 - (longlong)pcVar13];
          if (cVar1 != cVar2) break;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          FUN_1800ba050(puVar8,uVar12 + (longlong)(int)uVar10 * 8,
                        (longlong)puVar7 - (longlong)pcVar13,uVar10,uVar14);
          cVar6 = '\x01';
          goto LAB_1800b56df;
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        plVar11 = plVar11 + 1;
        uVar12 = *puVar8;
      } while ((ulonglong)(longlong)(int)uVar9 < (ulonglong)((longlong)(puVar8[1] - uVar12) >> 3));
      *(int8_t *)(puVar8 + 0x12) = 1;
    }
    else {
LAB_1800b56df:
      *(int8_t *)(puVar8 + 0x12) = 1;
    }
  }
  else {
    plVar11 = (longlong *)*puVar8;
    if (plVar11 < (longlong *)puVar8[1]) {
      do {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(*plVar11 + 0x18) != (void *)0x0) {
          puVar7 = *(void **)(*plVar11 + 0x18);
        }
        pcVar5 = pcVar13;
        do {
          cVar1 = *pcVar5;
          cVar2 = pcVar5[(longlong)puVar7 - (longlong)pcVar13];
          if (cVar1 != cVar2) break;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          FUN_1800ba050(puVar8,plVar11,(longlong)puVar7 - (longlong)pcVar13,plVar11,uVar14);
          cVar6 = '\x01';
          break;
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 < (longlong *)puVar8[1]);
    }
  }
  iVar4 = _Mtx_unlock(puVar8 + 8);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  if (cVar6 == '\0') {
    puVar7 = &system_buffer_ptr;
    if (*(void **)(*param_2 + 0x18) != (void *)0x0) {
      puVar7 = *(void **)(*param_2 + 0x18);
    }
    FUN_180626f80(&unknown_var_7912_ptr,puVar7);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return cVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b57a0(uint64_t param_1,longlong *param_2)
void FUN_1800b57a0(uint64_t param_1,longlong *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  void *puVar5;
  void *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int8_t auStack_d8 [32];
  uint64_t *puStack_b8;
  longlong *plStack_b0;
  longlong lStack_a8;
  uint64_t uStack_a0;
  void *puStack_98;
  void *puStack_90;
  int32_t uStack_88;
  uint8_t auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_d8;
  lStack_a8 = _DAT_180c86930;
  plVar7 = *(longlong **)(_DAT_180c86930 + 0x1d0);
  lVar8 = _DAT_180c86930;
  plStack_b0 = param_2;
  if (plVar7 != *(longlong **)(_DAT_180c86930 + 0x1d8)) {
    do {
      puStack_98 = &unknown_var_3480_ptr;
      puStack_90 = auStack_80;
      auStack_80[0] = 0;
      uStack_88 = *(int32_t *)(*plVar7 + 0x20);
      puVar6 = *(void **)(*plVar7 + 0x18);
      puVar5 = &system_buffer_ptr;
      if (puVar6 != (void *)0x0) {
        puVar5 = puVar6;
      }
      strcpy_s(auStack_80,0x40,puVar5);
      puVar4 = (uint64_t *)param_2[1];
      if (puVar4 < (uint64_t *)param_2[2]) {
        param_2[1] = (longlong)(puVar4 + 0xb);
        *puVar4 = &unknown_var_720_ptr;
        puVar4[1] = 0;
        *(int32_t *)(puVar4 + 2) = 0;
        *puVar4 = &unknown_var_3480_ptr;
        puVar4[1] = puVar4 + 3;
        *(int32_t *)(puVar4 + 2) = 0;
        *(int8_t *)(puVar4 + 3) = 0;
        *(int32_t *)(puVar4 + 2) = uStack_88;
        puVar6 = &system_buffer_ptr;
        if (puStack_90 != (void *)0x0) {
          puVar6 = puStack_90;
        }
        puStack_b8 = puVar4;
        strcpy_s(puVar4[1],0x40,puVar6);
      }
      else {
        puVar3 = (uint64_t *)*param_2;
        lVar10 = ((longlong)puVar4 - (longlong)puVar3) / 0x58;
        if (lVar10 == 0) {
          lVar10 = 1;
LAB_1800b5909:
          puVar1 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar10 * 0x58,(char)param_2[3]);
          puVar4 = (uint64_t *)param_2[1];
          puVar3 = (uint64_t *)*param_2;
        }
        else {
          lVar10 = lVar10 * 2;
          if (lVar10 != 0) goto LAB_1800b5909;
          puVar1 = (uint64_t *)0x0;
        }
        puVar2 = puVar1;
        if (puVar3 != puVar4) {
          lVar9 = (longlong)puVar3 - (longlong)puVar1;
          do {
            *puVar2 = &unknown_var_720_ptr;
            puVar2[1] = 0;
            *(int32_t *)(puVar2 + 2) = 0;
            *puVar2 = &unknown_var_3480_ptr;
            puVar2[1] = puVar2 + 3;
            *(int32_t *)(puVar2 + 2) = 0;
            *(int8_t *)(puVar2 + 3) = 0;
            *(int32_t *)(puVar2 + 2) = *(int32_t *)(lVar9 + 0x10 + (longlong)puVar2);
            puVar6 = *(void **)(lVar9 + 8 + (longlong)puVar2);
            puVar5 = &system_buffer_ptr;
            if (puVar6 != (void *)0x0) {
              puVar5 = puVar6;
            }
            puStack_b8 = puVar2;
            strcpy_s(puVar2[1],0x40,puVar5);
            puVar2 = puVar2 + 0xb;
            param_2 = plStack_b0;
            lVar8 = lStack_a8;
          } while ((uint64_t *)(lVar9 + (longlong)puVar2) != puVar4);
        }
        *puVar2 = &unknown_var_720_ptr;
        puVar2[1] = 0;
        *(int32_t *)(puVar2 + 2) = 0;
        *puVar2 = &unknown_var_3480_ptr;
        puVar2[1] = puVar2 + 3;
        *(int32_t *)(puVar2 + 2) = 0;
        *(int8_t *)(puVar2 + 3) = 0;
        *(int32_t *)(puVar2 + 2) = uStack_88;
        puVar6 = &system_buffer_ptr;
        if (puStack_90 != (void *)0x0) {
          puVar6 = puStack_90;
        }
        puStack_b8 = puVar2;
        strcpy_s(puVar2[1],0x40,puVar6);
        puVar4 = (uint64_t *)param_2[1];
        puVar3 = (uint64_t *)*param_2;
        if (puVar3 != puVar4) {
          do {
            (**(code **)*puVar3)(puVar3,0);
            puVar3 = puVar3 + 0xb;
          } while (puVar3 != puVar4);
          puVar3 = (uint64_t *)*param_2;
        }
        if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar3);
        }
        *param_2 = (longlong)puVar1;
        param_2[1] = (longlong)(puVar2 + 0xb);
        param_2[2] = (longlong)(puVar1 + lVar10 * 0xb);
      }
      puStack_98 = &unknown_var_720_ptr;
      plVar7 = plVar7 + 1;
    } while (plVar7 != *(longlong **)(lVar8 + 0x1d8));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b5ac0(uint64_t param_1,longlong *param_2,float param_3)
void FUN_1800b5ac0(uint64_t param_1,longlong *param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int8_t auStack_b8 [32];
  int32_t uStack_98;
  void *puStack_90;
  longlong lStack_88;
  uint uStack_80;
  ulonglong uStack_78;
  longlong *plStack_70;
  longlong *plStack_68;
  uint64_t uStack_60;
  longlong *plStack_58;
  char acStack_50 [16];
  ulonglong uStack_40;
  
  lVar1 = _DAT_180c86930;
  uStack_60 = 0xfffffffffffffffe;
  uStack_40 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_b8;
  iVar7 = 0;
  uStack_98 = 0;
  plVar6 = (longlong *)(_DAT_180c86930 + 0xc60);
  plStack_58 = param_2;
  if (*plVar6 == 0) {
    puStack_90 = &unknown_var_3456_ptr;
    uStack_78 = 0;
    lStack_88 = 0;
    uStack_80 = 0;
    do {
      (**(code **)(puStack_90 + 0x10))(&puStack_90,&unknown_var_7896_ptr);
      FUN_180060680(acStack_50,&unknown_var_4576_ptr,iVar7);
      lVar2 = -1;
      do {
        lVar5 = lVar2;
        lVar2 = lVar5 + 1;
      } while (acStack_50[lVar5 + 1] != '\0');
      iVar4 = (int)(lVar5 + 1);
      if (0 < iVar4) {
        FUN_1806277c0(&puStack_90,uStack_80 + iVar4);
                    // WARNING: Subroutine does not return
        memcpy((ulonglong)uStack_80 + lStack_88,acStack_50,(longlong)((int)lVar5 + 2));
      }
      plVar3 = (longlong *)FUN_1800b08e0(lVar1,&plStack_68,&puStack_90,1);
      uStack_98 = 2;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != (longlong *)0x0) {
        plStack_70 = plVar3;
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      plStack_70 = (longlong *)*plVar6;
      *plVar6 = (longlong)plVar3;
      if (plStack_70 != (longlong *)0x0) {
        (**(code **)(*plStack_70 + 0x38))();
      }
      uStack_98 = 0;
      if (plStack_68 != (longlong *)0x0) {
        (**(code **)(*plStack_68 + 0x38))();
      }
      iVar7 = iVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (iVar7 < 0x14);
    puStack_90 = &unknown_var_3456_ptr;
    if (lStack_88 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_88 = 0;
    uStack_78 = uStack_78 & 0xffffffff00000000;
    puStack_90 = &unknown_var_720_ptr;
  }
  plVar6 = *(longlong **)(lVar1 + 0xc60 + (longlong)((int)param_3 % 0x14) * 8);
  *param_2 = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))();
  }
  uStack_98 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b5cc0(uint64_t param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800b5cc0(uint64_t param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  
  lVar6 = _DAT_180c86930;
  iVar2 = (**(code **)(*param_2 + 0x60))(param_2);
  *(int8_t *)((longlong)param_2 + 0xb2) = 1;
  plVar5 = (longlong *)((longlong)iVar2 * 0x98 + lVar6 + 8);
  uVar10 = 0xfffffffffffffffe;
  iVar2 = _Mtx_lock(plVar5 + 8);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  puVar8 = (uint64_t *)plVar5[1];
  puVar3 = (uint64_t *)0x0;
  if (puVar8 < (uint64_t *)plVar5[2]) {
    plVar5[1] = (longlong)(puVar8 + 1);
    *puVar8 = param_2;
    goto LAB_1802abf36;
  }
  puVar4 = (uint64_t *)*plVar5;
  lVar6 = (longlong)puVar8 - (longlong)puVar4 >> 3;
  if (lVar6 == 0) {
    lVar6 = 1;
LAB_1802abea0:
    puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar6 * 8,(char)plVar5[3],param_4,uVar10);
    puVar8 = (uint64_t *)plVar5[1];
    puVar4 = (uint64_t *)*plVar5;
    puVar9 = puVar3;
  }
  else {
    lVar6 = lVar6 * 2;
    puVar9 = puVar3;
    if (lVar6 != 0) goto LAB_1802abea0;
  }
  for (; puVar4 != puVar8; puVar4 = puVar4 + 1) {
    *puVar3 = *puVar4;
    *puVar4 = 0;
    puVar3 = puVar3 + 1;
  }
  *puVar3 = param_2;
  plVar1 = (longlong *)plVar5[1];
  plVar7 = (longlong *)*plVar5;
  if (plVar7 != plVar1) {
    do {
      if ((longlong *)*plVar7 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar7 + 0x38))();
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
    plVar7 = (longlong *)*plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar7);
  }
  *plVar5 = (longlong)puVar9;
  plVar5[1] = (longlong)(puVar3 + 1);
  plVar5[2] = (longlong)(puVar9 + lVar6);
LAB_1802abf36:
  *(int8_t *)(plVar5 + 0x12) = 1;
  iVar2 = _Mtx_unlock(plVar5 + 8);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b5d10(uint64_t param_1,longlong *param_2)
void FUN_1800b5d10(uint64_t param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar1 = _DAT_180c86930;
  plVar6 = *(longlong **)(_DAT_180c86930 + 0x300);
  if (plVar6 != *(longlong **)(_DAT_180c86930 + 0x308)) {
    do {
      plVar2 = (longlong *)0x0;
      plVar4 = (longlong *)param_2[1];
      if (plVar4 < (longlong *)param_2[2]) {
        param_2[1] = (longlong)(plVar4 + 1);
        plVar2 = (longlong *)*plVar6;
        *plVar4 = (longlong)plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x28))();
        }
      }
      else {
        plVar5 = (longlong *)*param_2;
        lVar3 = (longlong)plVar4 - (longlong)plVar5 >> 3;
        if (lVar3 == 0) {
          lVar3 = 1;
LAB_1800b5da5:
          plVar2 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar3 * 8);
          plVar4 = (longlong *)param_2[1];
          plVar5 = (longlong *)*param_2;
          plVar7 = plVar2;
        }
        else {
          lVar3 = lVar3 * 2;
          plVar7 = plVar2;
          if (lVar3 != 0) goto LAB_1800b5da5;
        }
        for (; plVar5 != plVar4; plVar5 = plVar5 + 1) {
          *plVar2 = *plVar5;
          plVar2 = plVar2 + 1;
          *plVar5 = 0;
        }
        plVar4 = (longlong *)*plVar6;
        *plVar2 = (longlong)plVar4;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))();
        }
        plVar4 = (longlong *)param_2[1];
        plVar5 = (longlong *)*param_2;
        if (plVar5 != plVar4) {
          do {
            if ((longlong *)*plVar5 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar5 + 0x38))();
            }
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar4);
          plVar5 = (longlong *)*param_2;
        }
        if (plVar5 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar5);
        }
        *param_2 = (longlong)plVar7;
        param_2[2] = (longlong)(plVar7 + lVar3);
        param_2[1] = (longlong)(plVar2 + 1);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != *(longlong **)(lVar1 + 0x308));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b5d38(void)
void FUN_1800b5d38(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong unaff_R13;
  longlong *unaff_R14;
  longlong *plVar5;
  
  do {
    plVar1 = (longlong *)0x0;
    plVar3 = (longlong *)unaff_RDI[1];
    if (plVar3 < (longlong *)unaff_RDI[2]) {
      unaff_RDI[1] = (longlong)(plVar3 + 1);
      plVar1 = (longlong *)*unaff_R14;
      *plVar3 = (longlong)plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))();
      }
    }
    else {
      plVar4 = (longlong *)*unaff_RDI;
      lVar2 = (longlong)plVar3 - (longlong)plVar4 >> 3;
      if (lVar2 == 0) {
        lVar2 = 1;
LAB_1800b5da5:
        plVar1 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 8);
        plVar3 = (longlong *)unaff_RDI[1];
        plVar4 = (longlong *)*unaff_RDI;
        plVar5 = plVar1;
      }
      else {
        lVar2 = lVar2 * 2;
        plVar5 = plVar1;
        if (lVar2 != 0) goto LAB_1800b5da5;
      }
      for (; plVar4 != plVar3; plVar4 = plVar4 + 1) {
        *plVar1 = *plVar4;
        plVar1 = plVar1 + 1;
        *plVar4 = 0;
      }
      plVar3 = (longlong *)*unaff_R14;
      *plVar1 = (longlong)plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))();
      }
      plVar3 = (longlong *)unaff_RDI[1];
      plVar4 = (longlong *)*unaff_RDI;
      if (plVar4 != plVar3) {
        do {
          if ((longlong *)*plVar4 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar4 + 0x38))();
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar3);
        plVar4 = (longlong *)*unaff_RDI;
      }
      if (plVar4 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar4);
      }
      *unaff_RDI = (longlong)plVar5;
      unaff_RDI[2] = (longlong)(plVar5 + lVar2);
      unaff_RDI[1] = (longlong)(plVar1 + 1);
    }
    unaff_R14 = unaff_R14 + 1;
    if (unaff_R14 == *(longlong **)(unaff_R13 + 0x308)) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1800b5e73(void)
void FUN_1800b5e73(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_1800b5e80(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800be9a0(_DAT_180c86898,param_2,0,param_4,0,0xfffffffffffffffe);
  return param_2;
}



uint64_t FUN_1800b5ec0(uint64_t param_1,uint64_t param_2)

{
  FUN_1800bed00();
  return param_2;
}



// WARNING: Removing unreachable block (ram,0x0001800b6113)
// WARNING: Removing unreachable block (ram,0x0001800b611a)
// WARNING: Removing unreachable block (ram,0x0001800b614a)
// WARNING: Removing unreachable block (ram,0x0001800b6152)
// WARNING: Removing unreachable block (ram,0x0001800b6155)
// WARNING: Removing unreachable block (ram,0x0001800b6122)
// WARNING: Removing unreachable block (ram,0x0001800b6127)
// WARNING: Removing unreachable block (ram,0x0001800b616e)
// WARNING: Removing unreachable block (ram,0x0001800b617c)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




