#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part488.c - 3 个函数

// 函数: void FUN_18052a030(longlong param_1,longlong param_2)
void FUN_18052a030(longlong param_1,longlong param_2)

{
  int32_t uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  void *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  
  bVar5 = false;
  bVar4 = false;
  lVar10 = 0x9e0;
  lVar9 = 0x9e8;
  do {
    lVar2 = *(longlong *)(lVar9 + *(longlong *)(param_1 + 0x8f8));
    if (lVar2 != 0) {
      if (**(longlong **)(lVar2 + 0xf8) == 0) {
LAB_18052a0d7:
        bVar3 = true;
      }
      else {
        plVar7 = (longlong *)FUN_1804dfed0(*(longlong **)(lVar2 + 0xf8),&plStackX_20);
        bVar5 = true;
        if (*plVar7 == 0) goto LAB_18052a0d7;
        plVar7 = (longlong *)FUN_1804dfed0(*(uint64_t *)(lVar2 + 0xf8),&plStackX_18);
        bVar5 = true;
        bVar4 = true;
        if (*(longlong *)(*plVar7 + 0x20) == 0) goto LAB_18052a0d7;
        bVar3 = false;
      }
      if ((bVar4) && (bVar4 = false, plStackX_18 != (longlong *)0x0)) {
        (**(code **)(*plStackX_18 + 0x38))();
      }
      if ((bVar5) && (bVar5 = false, plStackX_20 != (longlong *)0x0)) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      if (bVar3) {
        if (**(longlong **)(lVar2 + 0xf8) == 0) {
          puVar8 = &unknown_var_6832_ptr;
        }
        else {
          plVar7 = (longlong *)**(longlong **)(lVar2 + 0xf8);
          if (plVar7 == (longlong *)0x0) {
            puVar8 = &unknown_var_6952_ptr;
          }
          else {
            (**(code **)(*plVar7 + 0x28))(plVar7);
            (**(code **)(*plVar7 + 0x38))(plVar7);
            puVar8 = &unknown_var_6912_ptr;
          }
        }
                    // WARNING: Subroutine does not return
        FUN_180062300(system_message_context,puVar8);
      }
      uVar1 = *(int32_t *)(lVar10 + *(longlong *)(param_1 + 0x8f8));
      AcquireSRWLockExclusive(param_2);
      iVar6 = _Mtx_lock(param_2 + 8);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      FUN_18050c740(param_1,uVar1,0x28,1);
      iVar6 = _Mtx_unlock(param_2 + 8);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      ReleaseSRWLockExclusive(param_2);
    }
    lVar9 = lVar9 + 8;
    lVar10 = lVar10 + 4;
    if (0x9f7 < lVar9) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18052a270(longlong *param_1,longlong param_2)
void FUN_18052a270(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int32_t uVar2;
  int32_t uVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint64_t uVar11;
  longlong *plVar12;
  float *pfVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong *plStackX_8;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  int32_t uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  int32_t uStack_15c;
  int32_t uStack_158;
  int32_t uStack_154;
  uint64_t uStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  int32_t uStack_13c;
  uint64_t uStack_138;
  longlong *aplStack_128 [12];
  int8_t auStack_c8 [16];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int32_t uStack_ac;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  int32_t uStack_8c;
  
  uStack_138 = 0xfffffffffffffffe;
  if ((int)param_1[0xad] - 3U < 2) {
    fVar19 = (float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x140] * 8) -
                    param_1[0x13f]);
    fVar18 = fVar19 * 1e-05;
    cVar6 = *(float *)(param_1 + 0x141) + 0.11 < fVar18;
    plStackX_8 = (longlong *)CONCAT71(plStackX_8._1_7_,cVar6);
    bVar1 = *(float *)(param_1 + 0x141) < fVar18;
    if (((((*(uint *)((longlong)param_1 + 0x56c) & 0x4000) == 0) || ((char)param_1[0x14a] != '\0'))
        || (param_1[0xdb] == 0)) ||
       (((*(char *)(param_1[0xdb] + 0x8be) == '\0' || (system_status_flag == 1)) ||
        (system_status_flag == 4)))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
      if (*(float *)((longlong)param_1 + 0xa0c) <= fVar18 &&
          fVar18 != *(float *)((longlong)param_1 + 0xa0c)) {
        FUN_18052a030();
      }
    }
    if ((((char)param_1[0x14a] == '\0') && (!bVar1)) &&
       (2 < (ushort)(*(short *)(param_1[0xcb] + 0x40) - 2U))) {
      if ((bool)cVar6) {
        return;
      }
      iVar8 = func_0x000180506a20();
      if (iVar8 <= (int)(*(longlong *)(param_1[0x11b] + 0x98d8e0) -
                         *(longlong *)(param_1[0x11b] + 0x98d8d8) >> 3)) {
        return;
      }
      cVar5 = FUN_180529ac0(param_1,param_2);
      if (cVar5 == '\0') {
        return;
      }
      if (bVar4) {
        FUN_18052a030(param_1,param_2);
      }
      fVar17 = (float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x140] * 8) -
                      param_1[0x13f]) * 1e-05;
      *(float *)(param_1 + 0x141) = fVar17;
      *(float *)((longlong)param_1 + 0xa0c) = fVar17;
      bVar1 = true;
    }
    if ((ushort)(*(short *)(param_1[0xcb] + 0x40) - 2U) < 2) {
      if (*(char *)(render_system_data_config + 0x210) == '\0') {
        AcquireSRWLockShared(param_2);
        FUN_18052b4f0(param_1);
        ReleaseSRWLockShared(param_2);
      }
      if ((((*(uint *)((longlong)param_1 + 0x56c) & 0x800) != 0) &&
          (*(longlong *)(param_1[0xe5] + 0x5e0) != 0)) && (5.0 < fVar18)) {
        AcquireSRWLockExclusive(param_2);
        FUN_18052adc0(param_1);
        ReleaseSRWLockExclusive(param_2);
      }
      lVar15 = *(longlong *)(param_1[0xcb] + 0xd0);
      if (lVar15 != 0) {
        lVar15 = *(longlong *)(lVar15 + 0x1000);
      }
      fVar19 = fVar19 * fVar19;
      fVar19 = fVar19 * fVar19 * fVar19 * 9.999999e-37;
      AcquireSRWLockShared(param_2);
      if ((*(uint *)((longlong)param_1 + 0x56c) & 0x800) == 0) {
        cVar6 = *(char *)(lVar15 + 0x208);
        cVar5 = '\0';
        if ('\0' < cVar6) {
          do {
            cVar7 = FUN_1805301a0(*(uint64_t *)(lVar15 + 8 + (longlong)cVar5 * 8),fVar19,
                                  fVar18 < 3.0);
            if (cVar7 == '\0') {
              ReleaseSRWLockShared(param_2);
              goto LAB_18052a61a;
            }
            cVar5 = cVar5 + '\x01';
          } while (cVar5 < cVar6);
        }
      }
      else {
        lVar10 = param_1[0xb2];
        lVar16 = (longlong)*(char *)(lVar10 + 0x25e0);
        if (0 < lVar16) {
          lVar14 = 0;
LAB_18052a570:
          cVar6 = *(char *)((longlong)*(char *)(lVar14 + 0x25d8 + lVar10) + 0x209 + lVar15);
          if (cVar6 < '\0') {
            uVar11 = 0;
          }
          else {
            uVar11 = *(uint64_t *)(lVar15 + 8 + (longlong)cVar6 * 8);
          }
          cVar6 = FUN_1805301a0(uVar11,fVar19,fVar18 < 3.0);
          if (cVar6 != '\0') goto code_r0x00018052a5a2;
          ReleaseSRWLockShared(param_2);
LAB_18052a61a:
          param_1[0x142] = *(longlong *)(&system_error_code + (longlong)(int)param_1[0x143] * 8) + 40000
          ;
          goto LAB_18052a5b9;
        }
      }
LAB_18052a5b1:
      ReleaseSRWLockShared(param_2);
LAB_18052a5b9:
      if ((*(byte *)(param_1[4] + 0x40) & 1) == 0) {
        fVar19 = 29.5;
      }
      else {
        fVar19 = 20.0;
      }
      if ((fVar19 < fVar18) ||
         ((1.0 < fVar18 &&
          (0.0 < (float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x143] * 8) -
                        param_1[0x142]) * 1e-05)))) {
        FUN_18051aff0(param_1,0,param_2);
      }
      else if (((*(uint *)((longlong)param_1 + 0x56c) & 0x800) != 0) &&
              (*(longlong *)(param_1[0xe5] + 0x5e0) != 0)) {
        lVar16 = (longlong)*(int *)(param_1[0xe5] + 0x5e8) * 0xa60;
        lVar15 = param_1[0x11b];
        lVar10 = *(longlong *)(lVar16 + 0x3778 + lVar15);
        if ((lVar10 == 0) || (*(char *)(lVar10 + 0x8be) == '\0')) {
          AcquireSRWLockExclusive(param_2);
          FUN_18052adc0(param_1);
          ReleaseSRWLockExclusive(param_2);
        }
        else {
          lVar10 = *(longlong *)(lVar16 + 0x30c0 + lVar15);
          fStack_140 = (*(float *)(lVar10 + 0x1b8) + *(float *)(lVar10 + 0x1c8)) * 0.5;
          fStack_144 = (*(float *)(lVar10 + 0x1c4) + *(float *)(lVar10 + 0x1b4)) * 0.5;
          fStack_148 = (*(float *)(lVar10 + 0x1c0) + *(float *)(lVar10 + 0x1b0)) * 0.5;
          uStack_13c = 0x7f7fffff;
          fStack_160 = *(float *)(lVar10 + 0x1c8) - *(float *)(lVar10 + 0x1b8);
          fStack_164 = *(float *)(lVar10 + 0x1c4) - *(float *)(lVar10 + 0x1b4);
          fStack_168 = *(float *)(lVar10 + 0x1c0) - *(float *)(lVar10 + 0x1b0);
          uStack_15c = 0x7f7fffff;
          uStack_158 = 0;
          uStack_154 = 0;
          uStack_150 = 0x7f7fffff3f800000;
          FUN_180084ae0(&fStack_178);
          if (3.0 < *(float *)(*(longlong *)(lVar16 + 0x30c0 + lVar15) + 0x28)) {
            FUN_180085970(&fStack_178,0x3e19999a);
          }
          if (*(int *)(lVar16 + 0x3608 + lVar15) == 1) {
            AcquireSRWLockExclusive(param_2);
            (**(code **)(**(longlong **)(param_1[0xe5] + 0x5e0) + 0x98))
                      (*(longlong **)(param_1[0xe5] + 0x5e0),&fStack_178);
            ReleaseSRWLockExclusive(param_2);
          }
          else {
            AcquireSRWLockExclusive(param_2);
            FUN_18052adc0(param_1);
            ReleaseSRWLockExclusive(param_2);
          }
        }
      }
      cVar6 = (char)plStackX_8;
    }
    if ((((bVar1) && ((char)param_1[0x14a] == '\0')) && (param_1[0xcb] != 0)) &&
       (*(short *)(param_1[0xcb] + 0x40) == 0)) {
      if (cVar6 == '\0') {
        lVar15 = param_1[0x11b];
        plStackX_8 = param_1;
        iVar8 = func_0x000180506a20();
        lVar10 = param_1[0xdb];
        iVar9 = _Mtx_lock(param_2 + 0x58);
        if (iVar9 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar9);
        }
        plVar12 = (longlong *)(lVar15 + 0x98d8d8);
        if ((ulonglong)(*(longlong *)(lVar15 + 0x98d8e0) - *plVar12 >> 3) <
            (ulonglong)(longlong)iVar8) {
          FUN_18005ea90(plVar12,&plStackX_8);
          uVar11 = *(uint64_t *)(*(longlong *)(lVar10 + 0x8a8) + 0x260);
          FUN_1802feaf0(uVar11,1);
          lVar10 = FUN_1803009f0(uVar11);
          lVar15 = param_1[0x145];
          *(longlong *)(lVar10 + 0x1008) = param_1[0x144];
          *(longlong *)(lVar10 + 0x1010) = lVar15;
          uVar2 = *(int32_t *)((longlong)param_1 + 0xa34);
          lVar15 = param_1[0x147];
          uVar3 = *(int32_t *)((longlong)param_1 + 0xa3c);
          *(int *)(lVar10 + 0x1018) = (int)param_1[0x146];
          *(int32_t *)(lVar10 + 0x101c) = uVar2;
          *(int *)(lVar10 + 0x1020) = (int)lVar15;
          *(int32_t *)(lVar10 + 0x1024) = uVar3;
          bVar1 = true;
        }
        else {
          lVar15 = *(longlong *)(*(longlong *)(lVar10 + 0x8a8) + 0x260);
          bVar1 = false;
          if (*(short *)(lVar15 + 0x40) != 0) {
            if (*(float *)(lVar15 + 0x3c) < 0.0) {
              *(int32_t *)(lVar15 + 0x34) = 0x3dcccccd;
            }
            else {
              *(float *)(lVar15 + 0x34) = *(float *)(lVar15 + 0x3c) + 1.1920929e-07;
            }
            if ((*(longlong *)(lVar15 + 0x10) != 0) &&
               (lVar10 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x20), lVar10 != 0)) {
              FUN_1801b6ae0(lVar10,lVar15);
            }
            *(int16_t *)(lVar15 + 0x40) = 0;
            if ((*(longlong *)(lVar15 + 0x130) != 0) || (*(longlong *)(lVar15 + 0x138) != 0)) {
              (**(code **)(lVar15 + 0x138))(*(longlong *)(lVar15 + 0x130),lVar15);
            }
          }
        }
        iVar8 = _Mtx_unlock(param_2 + 0x58);
        if (iVar8 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar8);
        }
        if (bVar1) {
          iVar8 = *(int *)((longlong)param_1 + 0x564);
          if (((iVar8 != -1) && ((*(uint *)((longlong)param_1 + 0x56c) & 0x800) != 0)) &&
             (lVar15 = param_1[0xe5], *(int *)(lVar15 + 0x5e8) != iVar8)) {
            lVar10 = param_1[0x11b];
            if (*(longlong *)((longlong)iVar8 * 0xa60 + 0x36f8 + lVar10) != 0) {
              *(int *)(lVar15 + 0x5e8) = iVar8;
              lVar15 = *(longlong *)((longlong)iVar8 * 0xa60 + 0x30c0 + lVar10);
              pfVar13 = (float *)(lVar15 + 0x1b0);
              fStack_90 = (*(float *)(lVar15 + 0x1c8) + *(float *)(lVar15 + 0x1b8)) * 0.5;
              fStack_94 = (*(float *)(lVar15 + 0x1c4) + *(float *)(lVar15 + 0x1b4)) * 0.5;
              fStack_98 = (*(float *)(lVar15 + 0x1c0) + *pfVar13) * 0.5;
              uStack_8c = 0x7f7fffff;
              fStack_b0 = *(float *)(lVar15 + 0x1c8) - *(float *)(lVar15 + 0x1b8);
              fStack_b4 = *(float *)(lVar15 + 0x1c4) - *(float *)(lVar15 + 0x1b4);
              fStack_b8 = *(float *)(lVar15 + 0x1c0) - *pfVar13;
              uStack_ac = 0x7f7fffff;
              uStack_a8 = 0;
              uStack_a4 = 0;
              uStack_a0 = 0x3f800000;
              uStack_9c = 0x7f7fffff;
              FUN_180084ae0(auStack_c8);
              uStack_150 = *(uint64_t *)(render_system_data_config + 0x28);
              fStack_174 = *pfVar13;
              fStack_170 = pfVar13[1];
              uStack_16c = 0;
              fStack_168 = 3.4028235e+38;
              fStack_164 = pfVar13[4];
              fStack_160 = pfVar13[5];
              uStack_15c = 0;
              uStack_158 = 0x7f7fffff;
              fStack_178 = pfVar13[8] * 0.5;
              plStackX_8 = *(longlong **)(param_1[0xe5] + 0x5e0);
              *(uint64_t *)(param_1[0xe5] + 0x5e0) = 0;
              if (plStackX_8 != (longlong *)0x0) {
                (**(code **)(*plStackX_8 + 0x38))();
              }
              FUN_1802f5e40(aplStack_128);
              uVar11 = FUN_18062b1e0(system_memory_pool_ptr,0x140,0x10,3);
              plVar12 = (longlong *)FUN_18014a1b0(uVar11);
              if (plVar12 != (longlong *)0x0) {
                plStackX_8 = plVar12;
                (**(code **)(*plVar12 + 0x28))(plVar12);
              }
              plStackX_8 = aplStack_128[0];
              if (aplStack_128[0] != (longlong *)0x0) {
                lVar15 = *aplStack_128[0];
                aplStack_128[0] = plVar12;
                (**(code **)(lVar15 + 0x38))();
                plVar12 = aplStack_128[0];
              }
              aplStack_128[0] = plVar12;
              uVar11 = FUN_18062b1e0(system_memory_pool_ptr,0x130,8,6);
                    // WARNING: Subroutine does not return
              memset(uVar11,0,0x130);
            }
            *(int32_t *)(lVar15 + 0x5e8) = 0xffffffff;
          }
        }
      }
      if ((system_status_flag != 1) && (system_status_flag != 4)) {
        FUN_18051b580(param_1,param_2,0);
      }
    }
  }
  return;
code_r0x00018052a5a2:
  lVar14 = lVar14 + 1;
  if (lVar16 <= lVar14) goto LAB_18052a5b1;
  goto LAB_18052a570;
}





// 函数: void FUN_18052adc0(longlong param_1)
void FUN_18052adc0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x728);
  if (*(longlong *)(lVar2 + 0x5e0) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x318);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x90))();
      lVar2 = *(longlong *)(param_1 + 0x728);
    }
    plVar1 = *(longlong **)(lVar2 + 0x5e0);
    *(uint64_t *)(lVar2 + 0x5e0) = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    *(int32_t *)(*(longlong *)(param_1 + 0x728) + 0x5e8) = 0xffffffff;
    return;
  }
  *(int32_t *)(lVar2 + 0x5e8) = 0xffffffff;
  return;
}



// WARNING: Removing unreachable block (ram,0x0001804f42d8)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



