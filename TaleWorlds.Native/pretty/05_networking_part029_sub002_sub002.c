#include "TaleWorlds.Native.Split.h"

// 05_networking_part029_sub002_sub002.c - 1 个函数

// 函数: void FUN_180857de5(void)
void FUN_180857de5(void)

{
  ulonglong in_stack_00000048;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * FUN_180857df0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x48) < _DAT_180c4eaac) {
    FUN_1808fcb90(&system_ptr_eaac);
    if (_DAT_180c4eaac == -1) {
      _DAT_180c4eaa8 = 0xffffffff;
      FUN_1808fcb30(&system_ptr_eaac);
    }
  }
  return &system_ptr_eaa8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180857e50(longlong param_1,uint *param_2,int param_3,uint param_4)

{
  int *piVar1;
  int32_t uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint64_t uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  int32_t *puVar14;
  longlong lVar15;
  uint *puVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  longlong *plVar21;
  byte bVar22;
  uint64_t uVar23;
  longlong *plVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong *plVar27;
  bool bVar28;
  bool bVar29;
  longlong **in_stack_fffffffffffffe78;
  uint8_t uVar30;
  longlong in_stack_fffffffffffffe88;
  uint7 uVar31;
  uint uStack_168;
  int iStack_164;
  byte bStack_160;
  uint uStack_15c;
  uint uStack_158;
  char cStack_154;
  char acStack_153 [3];
  uint uStack_150;
  longlong *plStack_148;
  uint auStack_140 [2];
  uint uStack_138;
  uint uStack_134;
  longlong *plStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  uint uStack_118;
  int32_t uStack_114;
  longlong *plStack_110;
  int iStack_108;
  int *piStack_100;
  longlong lStack_f8;
  ulonglong uStack_f0;
  uint uStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  int iStack_d4;
  uint uStack_d0;
  int iStack_cc;
  longlong *plStack_c8;
  longlong lStack_c0;
  longlong *plStack_b8;
  uint auStack_b0 [2];
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  int aiStack_90 [4];
  uint64_t uStack_80;
  int aiStack_70 [4];
  uint64_t uStack_60;
  int8_t auStack_50 [24];
  
  uVar12 = (ulonglong)param_4;
  if (*(char *)(param_1 + 0x13c) != '\0') {
    return 0;
  }
  *(int *)(param_1 + 0xc) = param_3;
  uVar10 = 0;
  if (param_3 == 2 || param_3 == 3) {
    uVar7 = *(uint *)(param_1 + 8);
    uStack_15c = param_4;
    goto LAB_180857f82;
  }
  uVar7 = *param_2;
  uVar9 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 8) + 0x30))();
  lVar15 = func_0x0001808b8910(uVar9);
  uVar12 = (ulonglong)*(uint *)(lVar15 + 0x1fc);
  if (*(uint *)(lVar15 + 0x1fc) == 0xffffffff) {
    lVar15 = (*(code *)**(uint64_t **)(*(longlong *)(param_1 + 0x160) + 8))();
    iVar8 = *(int *)(lVar15 + 0xe4);
    if (iVar8 < 0) {
LAB_180857f16:
      uVar12 = 0;
    }
    else if (iVar8 < 3) {
      uVar12 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x168) + 0x77c);
    }
    else {
      if ((iVar8 == 3) || (iVar8 != 4)) goto LAB_180857f16;
      uVar12 = 1;
    }
  }
  iVar8 = FUN_18085ab70(param_1);
  if (0 < iVar8) {
    uVar6 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
    uVar10 = (longlong)iVar8;
    if (uVar6 != 48000) {
      uVar10 = ((longlong)iVar8 * 48000) / (longlong)(ulonglong)uVar6;
    }
    if (0xffffffff < (longlong)uVar10) {
      uVar10 = 0xffffffff;
    }
  }
  if (uVar12 + (uVar10 & 0xffffffff) < 0x100000000) {
    uStack_15c = (int)uVar12 + (int)uVar10;
    if (uStack_15c == 0) {
      uStack_15c = 1;
    }
    uVar12 = (ulonglong)uStack_15c;
  }
  else {
    uVar12 = 0xffffffff;
    uStack_15c = 0xffffffff;
  }
  *(int *)(param_1 + 0x108) = (int)uVar12;
LAB_180857f82:
  uVar10 = (ulonglong)uVar7;
  plVar24 = (longlong *)(param_1 + 0x70);
  if (((longlong *)*plVar24 == plVar24) && (*(longlong **)(param_1 + 0x78) == plVar24)) {
    uVar26 = *(ulonglong *)(param_1 + 0x28);
    uStack_e8 = *(uint *)(param_1 + 0x30);
    lVar15 = *(longlong *)(param_1 + 0x38);
  }
  else {
    lVar15 = *(longlong *)(param_1 + 0x78);
    uVar26 = *(ulonglong *)(lVar15 + 0x10);
    uStack_e8 = *(uint *)(lVar15 + 0x18);
    lVar15 = *(longlong *)(lVar15 + 0x20);
  }
  uStack_128 = (ulonglong)uStack_e8;
  uStack_f0 = uVar26;
  plStack_b8 = plVar24;
  if (lVar15 != 0) {
    *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + 1;
    piVar1 = (int *)(lVar15 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),lVar15,&unknown_var_2208_ptr,0x76,1);
    }
  }
  if (((longlong *)*plVar24 == plVar24) && (*(longlong **)(param_1 + 0x78) == plVar24)) {
    iVar8 = *(int *)(param_1 + 0x34);
    lVar15 = *(longlong *)(param_1 + 0x38);
  }
  else {
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x1c);
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20);
  }
  if ((lVar15 != 0) && (*(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + 1, lVar15 != 0)) {
    piVar1 = (int *)(lVar15 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),lVar15,&unknown_var_2208_ptr,0x76,1);
    }
  }
  if (iVar8 == 3) {
    *(int32_t *)(param_1 + 0xc) = 3;
  }
  iStack_164 = 0;
  iStack_108 = 0;
  plStack_c8 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8);
  lStack_c0 = *plStack_c8;
  piStack_100 = (int *)(lStack_c0 + 0x48);
LAB_1808580a0:
  do {
    while( true ) {
      if ((*piStack_100 < _DAT_180c4ea98) && (FUN_1808fcb90(&system_ptr_ea98), _DAT_180c4ea98 == -1))
      {
        _DAT_180c4ea94 = 0;
        FUN_1808fcb30(&system_ptr_ea98);
      }
      uVar7 = (uint)uVar12;
      if (uVar7 <= _DAT_180c4ea94) {
        return 0;
      }
      if (*(longlong *)(param_1 + 0x140) == 0) break;
      if (((longlong *)*plVar24 == plVar24) && ((longlong *)plVar24[1] == plVar24)) {
        uStack_150 = *(uint *)(param_1 + 0x34);
        plVar24 = *(longlong **)(param_1 + 0x38);
      }
      else {
        uStack_150 = *(uint *)(*(longlong *)(param_1 + 0x78) + 0x1c);
        plVar24 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x20);
      }
      if (plVar24 != (longlong *)0x0) {
        *(int *)(plVar24 + 2) = (int)plVar24[2] + 1;
      }
      plStack_130 = plVar24;
      if ((1 < uStack_150 - 4) || (plVar24 == (longlong *)0x0)) {
        uVar18 = 0x1c;
        goto LAB_180859163;
      }
      plStack_148 = *(longlong **)(param_1 + 0x140);
      uVar20 = (int)plStack_148[0x14] - (int)plStack_148[0x15];
      uVar6 = *(uint *)((longlong)plStack_148 + 0xa4);
      if ((uVar6 <= *(uint *)(param_1 + 0x148)) && ((*(byte *)(param_1 + 0x128) & 2) == 0)) {
        uVar5 = FUN_18085c620(param_1,uVar26);
        uVar18 = (ulonglong)uVar5;
        plVar24 = plStack_130;
        if (uVar5 != 0) goto LAB_180859163;
      }
      uVar5 = *(uint *)(param_1 + 0x148);
      bVar22 = 0;
      uVar19 = (int)plStack_148[0x14] - uVar5;
      uStack_168 = 0;
      bStack_160 = 0;
      aiStack_70[0] = 0;
      uStack_60 = 0;
      aiStack_90[0] = 0;
      uStack_80 = 0;
      if ((*(uint *)(param_1 + 0x128) & 2) == 0) {
        if ((*(uint *)(param_1 + 0x128) & 1) == 0) {
          FUN_1808639c0(*(uint64_t *)(param_1 + 0x160),uVar26);
          lStack_f8 = *(longlong *)(param_1 + 0x140) + 0x10;
          FUN_180855fc0(param_1 + 0x90,&uStack_120,lStack_f8);
          if ((int)plStack_110 == -1) {
            uStack_158 = (uint)uStack_128;
            if (*(char *)(param_1 + 0x13f) != '\0') {
              uStack_158 = *(uint *)(param_1 + 0x154);
            }
            FUN_1808577c0(param_1 + 0x90,lStack_f8,&uStack_158);
            puVar11 = (ulonglong *)
                      FUN_180855fc0(param_1 + 0x90,auStack_50,*(longlong *)(param_1 + 0x140) + 0x10)
            ;
            uStack_120 = *puVar11;
            uStack_118 = (uint)puVar11[1];
            uStack_114 = *(int32_t *)((longlong)puVar11 + 0xc);
            plStack_110 = (longlong *)puVar11[2];
          }
          else if (uStack_150 == 4) {
            uVar5 = (uint)uStack_128;
            if (*(char *)(param_1 + 0x13f) != '\0') {
              uVar5 = *(uint *)(param_1 + 0x154);
            }
            *(uint *)(*(longlong *)(uStack_120 + 0x10) + 0x14 + (longlong)(int)plStack_110 * 0x18) =
                 uVar5;
          }
          *(int32_t *)(param_1 + 0x154) =
               *(int32_t *)
                (*(longlong *)(uStack_120 + 0x10) + 0x14 + (longlong)(int)plStack_110 * 0x18);
          *(int32_t *)(param_1 + 0x14c) = *(int32_t *)(param_1 + 0x148);
          *(int8_t *)(param_1 + 0x13f) = 0;
          *(int8_t *)(param_1 + 0x13d) = 0;
        }
        uStack_d8 = 0xffffffff;
        if ((ulonglong)*(uint *)(param_1 + 0x14c) + (ulonglong)*(uint *)(param_1 + 0x154) <
            0x100000000) {
          uStack_d8 = *(uint *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x154);
        }
        iStack_d4 = -1;
        if ((ulonglong)uStack_d8 + (ulonglong)uVar19 < 0x100000000) {
          iStack_d4 = uStack_d8 + uVar19;
        }
        in_stack_fffffffffffffe88 = param_1 + 0xb8;
        in_stack_fffffffffffffe78 =
             (longlong **)((ulonglong)in_stack_fffffffffffffe78 & 0xffffffffffffff00);
        FUN_180856830(param_1,&uStack_d8,0,1,in_stack_fffffffffffffe78,aiStack_70,
                      in_stack_fffffffffffffe88,&cStack_154);
        uVar5 = *(uint *)(param_1 + 0x148);
        if ((cStack_154 == '\0') || (uVar19 = aiStack_70[0] - uStack_d8, uVar6 - uVar5 <= uVar19)) {
          bVar22 = 0;
          uVar19 = uVar6 - uVar5;
        }
        else {
          bVar22 = 1;
          uStack_168 = 1;
        }
      }
      plVar24 = plStack_130;
      uVar6 = uVar19;
      if (uVar5 < uVar20) {
        uVar6 = uVar20 - uVar5;
        bVar3 = 0;
        if (uVar19 <= uVar20 - uVar5) {
          uVar6 = uVar19;
          bVar3 = bVar22;
        }
        uStack_168 = (uint)bVar3;
      }
      else {
        if ((*(byte *)(param_1 + 0x128) & 4) == 0) {
          uVar2 = *(int32_t *)((longlong)plStack_130 + 0xc);
          *(uint *)(param_1 + 0x150) = uVar5 - uVar20;
          *(int32_t *)(param_1 + 0x158) = uVar2;
          *(int32_t *)(param_1 + 0x15c) = uVar2;
          *(int8_t *)(param_1 + 0x13e) = 0;
        }
        uStack_d0 = 0xffffffff;
        if ((ulonglong)*(uint *)(param_1 + 0x150) + (ulonglong)*(uint *)(param_1 + 0x158) <
            0x100000000) {
          uStack_d0 = *(uint *)(param_1 + 0x150) + *(uint *)(param_1 + 0x158);
        }
        iStack_cc = -1;
        if ((ulonglong)uStack_d0 + (ulonglong)uVar19 < 0x100000000) {
          iStack_cc = uStack_d0 + uVar19;
        }
        in_stack_fffffffffffffe88 = param_1 + 0xb8;
        in_stack_fffffffffffffe78 =
             (longlong **)((ulonglong)in_stack_fffffffffffffe78 & 0xffffffffffffff00);
        FUN_180856830(param_1,&uStack_d0,0,1,in_stack_fffffffffffffe78,aiStack_90,
                      in_stack_fffffffffffffe88,acStack_153);
        if ((acStack_153[0] != '\0') && (uVar5 = aiStack_90[0] - uStack_d0, uVar5 <= uVar19)) {
          uVar6 = uVar5;
          if ((char)uStack_168 == '\0') {
            bStack_160 = 1;
          }
          else {
            bStack_160 = 1;
            if (uVar5 != uVar19) {
              uStack_168 = 0;
            }
          }
        }
      }
      uStack_150 = 0;
      uVar5 = uStack_150;
      uStack_158 = uVar7;
      if (uVar6 <= uVar7) {
        uStack_150 = (uint)bStack_160;
        uVar5 = uStack_168;
        uStack_158 = uVar6;
      }
      if ((*(int *)(*plStack_c8 + 0x48) < _DAT_180c4ea98) &&
         (FUN_1808fcb90(&system_ptr_ea98), _DAT_180c4ea98 == -1)) {
        _DAT_180c4ea94 = 0;
        FUN_1808fcb30(&system_ptr_ea98);
      }
      if (_DAT_180c4ea94 < uStack_158) {
        uVar9 = 0;
        if ((char)uStack_150 != '\0') {
          uVar9 = uStack_80;
        }
        uVar23 = 0;
        if ((char)uVar5 != '\0') {
          uVar23 = uStack_60;
        }
        uVar6 = FUN_18085b580(param_1,uStack_158,uVar23,uVar9);
        uVar18 = (ulonglong)uVar6;
        if (uVar6 != 0) goto LAB_180859163;
        uStack_15c = uVar7 - uStack_158;
        uVar12 = (ulonglong)uStack_15c;
      }
      *(int32_t *)(param_1 + 0xc) = 2;
      if (*(uint *)(plStack_148 + 0x14) <= *(uint *)(param_1 + 0x148)) {
        if ((*(byte *)(param_1 + 0x128) & 2) == 0) {
          uVar7 = FUN_18085c620(param_1,uVar26,plVar24 + 1);
          uVar18 = (ulonglong)uVar7;
          if (uVar7 != 0) goto LAB_180859163;
        }
        if ((*(uint *)(param_1 + 0x128) & 4) == 0) {
          *(int32_t *)(param_1 + 0x158) = *(int32_t *)((longlong)plVar24 + 0xc);
          *(uint *)(param_1 + 0x150) = *(int *)(param_1 + 0x148) - uVar20;
        }
        uVar18 = (ulonglong)(uint)((int)plStack_148[0x14] - (int)plVar24[1]);
        uVar7 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
        if (uVar7 != 48000) {
          uVar18 = (uVar7 * uVar18) / 48000;
        }
        uVar10 = 0xffffffff;
        uVar26 = uVar26 + (uVar18 & 0xffffffff);
        if ((ulonglong)*(uint *)(param_1 + 0x158) + (ulonglong)*(uint *)(param_1 + 0x150) <
            0x100000000) {
          uVar10 = (ulonglong)(*(uint *)(param_1 + 0x150) + *(uint *)(param_1 + 0x158));
        }
        uStack_e8 = (uint)uVar10;
        *(uint *)(param_1 + 8) = uStack_e8;
        *(int32_t *)(param_1 + 0x138) = 0xffffffff;
        *(uint *)(param_1 + 0xc) = ~(*(uint *)(param_1 + 0x128) >> 2) & 1 | 2;
        uStack_128 = uVar10;
        uStack_f0 = uVar26;
        uVar7 = FUN_180854810(param_1,uVar26,uVar10,0);
        uVar18 = (ulonglong)uVar7;
        if (uVar7 != 0) {
LAB_180859163:
          if (plVar24 == (longlong *)0x0) {
            return uVar18;
          }
          plVar21 = plVar24 + 2;
          *(int *)plVar21 = (int)*plVar21 + -1;
          if ((int)*plVar21 == 0) {
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar24,&unknown_var_2208_ptr,0x76,1);
          }
          return uVar18;
        }
        if ((*(int *)(*plStack_c8 + 0x48) < _DAT_180c4ea98) &&
           (FUN_1808fcb90(&system_ptr_ea98), _DAT_180c4ea98 == -1)) {
          _DAT_180c4ea94 = uVar7;
          FUN_1808fcb30(&system_ptr_ea98);
        }
        *(uint *)(param_1 + 0x148) = _DAT_180c4ea94;
        uVar7 = FUN_180855810(param_1,uVar26);
        uVar18 = (ulonglong)uVar7;
        if (uVar7 != 0) goto LAB_180859163;
      }
      plVar21 = plVar24 + 2;
      *(int *)plVar21 = (int)*plVar21 + -1;
      if ((int)*plVar21 == 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar24,&unknown_var_2208_ptr,0x76,1);
      }
LAB_180858c20:
      plVar24 = (longlong *)(param_1 + 0x70);
    }
    uStack_138 = (uint)uVar10;
    uStack_134 = 0xffffffff;
    if (uVar12 + uVar10 < 0x100000000) {
      uStack_134 = uVar7 + uStack_138;
    }
    puVar16 = (uint *)(param_1 + 0xb8);
    auStack_b0[0] = 0;
    lStack_98 = 0;
    lStack_a8 = 0;
    lStack_a0 = 0;
    uVar12 = FUN_180856570(param_1,&uStack_138,0,auStack_b0,puVar16,param_3 == 4);
    uVar20 = auStack_b0[0];
    uVar7 = uStack_134;
    uVar6 = uStack_138;
    if ((int)uVar12 != 0) {
      return uVar12;
    }
    uStack_e0 = uStack_138;
    uStack_dc = uStack_134;
    if (auStack_b0[0] < uStack_134) {
      uStack_dc = auStack_b0[0];
    }
    uVar12 = FUN_18085b200(param_1,&uStack_e0,&uStack_f0);
    uVar19 = uStack_dc;
    uVar5 = uStack_e0;
    if ((int)uVar12 != 0) {
      return uVar12;
    }
    uStack_168 = 0;
    plVar24 = (longlong *)(*(longlong *)(param_1 + 0x110) + 0x58);
    plStack_148 = (longlong *)*plVar24;
    plStack_130 = plVar24;
    uVar25 = 0;
    if (plStack_148 != plVar24) {
      while (uVar25 = uStack_168, *(uint *)(plStack_148 + 2) <= uVar19) {
        if (((0 < *(int *)(param_1 + 300)) && (uVar5 <= *(uint *)(plStack_148 + 2))) &&
           (((int)plStack_148[4] == 0 ||
            (cVar4 = FUN_1808b0820(plStack_148 + 3,*(uint64_t *)(param_1 + 0x160)),
            plVar24 = plStack_130, cVar4 != '\0')))) {
          if (*(uint *)(plStack_148 + 2) == uVar19) {
            uStack_168 = uStack_168 + 1;
          }
          else {
            if (*(int *)(param_1 + 300) < 1) {
              return 0x1c;
            }
            *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + -1;
          }
        }
        uVar25 = uStack_168;
        if ((plStack_148 == plVar24) ||
           (plStack_148 = (longlong *)*plStack_148, plStack_148 == plVar24)) break;
      }
    }
    lVar15 = lStack_a0;
    if ((int)uVar25 <= *(int *)(param_1 + 300)) {
      *(uint *)(param_1 + 300) = *(int *)(param_1 + 300) - uVar25;
    }
    uVar31 = (uint7)((ulonglong)in_stack_fffffffffffffe88 >> 8);
    uVar30 = (uint8_t)((ulonglong)puVar16 >> 8);
    if (lStack_a0 != 0) {
      uStack_134 = uVar20;
      if (uVar20 == uVar6) {
        iStack_164 = iStack_164 + 1;
      }
      else {
        iStack_108 = iStack_108 + 1;
        bVar28 = *(int *)(param_1 + 0xc) != 2;
        lVar13 = (ulonglong)uVar31 << 8;
        iStack_164 = 0;
        uVar9 = CONCAT71(uVar30,1);
        uVar12 = FUN_18085acd0(param_1,&uStack_f0,&uStack_138,*(longlong *)(param_1 + 0x110) + 0x48,
                               uVar9,bVar28,lVar13);
        if ((int)uVar12 != 0) {
          return uVar12;
        }
        in_stack_fffffffffffffe88 = CONCAT71((int7)((ulonglong)lVar13 >> 8),(char)uVar12);
        puVar16 = (uint *)CONCAT71((int7)((ulonglong)uVar9 >> 8),(char)uVar12);
        uVar12 = FUN_18085acd0(param_1,&uStack_f0,&uStack_138,*(longlong *)(param_1 + 0x110) + 0x38,
                               puVar16,bVar28,in_stack_fffffffffffffe88);
        if ((int)uVar12 != 0) {
          return uVar12;
        }
        *(uint *)(param_1 + 8) = uVar20;
        uStack_15c = uStack_15c - (uVar20 - uVar6);
      }
      uVar12 = (ulonglong)uStack_15c;
      uVar7 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
      uVar6 = (uint)uStack_128;
      if (uVar20 < uVar6) {
        uVar6 = uVar6 - uVar20;
        if (uVar7 != 48000) {
          uVar6 = (uint)(((ulonglong)uVar6 * (ulonglong)uVar7) / 48000);
        }
        uVar18 = -(ulonglong)uVar6;
      }
      else {
        uVar18 = (ulonglong)(uVar20 - uVar6);
        if (uVar7 != 48000) {
          uVar18 = (uVar18 * uVar7) / 48000;
        }
        uVar18 = uVar18 & 0xffffffff;
      }
      uVar26 = uVar26 + uVar18;
      *(int32_t *)(param_1 + 0xc) = 3;
      uStack_f0 = uVar26;
      lVar13 = func_0x00018084d0b0(*(uint64_t *)(param_1 + 0x110),lVar15 + 0x20);
      if (lVar13 == 0) {
        return 0x1c;
      }
      auStack_140[0] = 0;
      lStack_f8 = lVar13;
      if ((*(uint *)(lVar15 + 0x38) >> 2 & 1) != 0) {
        puVar16 = auStack_140;
        uVar18 = FUN_180854ce0(param_1,lVar15,lVar13,uVar20,puVar16);
        if ((int)uVar18 != 0) {
          return uVar18;
        }
      }
      if ((*(int *)(*plStack_c8 + 0x48) < _DAT_180c4ea98) &&
         (FUN_1808fcb90(&system_ptr_ea98), _DAT_180c4ea98 == -1)) {
        _DAT_180c4ea94 = 0;
        FUN_1808fcb30(&system_ptr_ea98);
      }
      if (*(uint *)(lVar15 + 0xa0) != _DAT_180c4ea94) {
        puVar14 = (int32_t *)FUN_18084da10();
        uVar7 = auStack_140[0];
        plVar24 = (longlong *)(param_1 + 0x70);
        *(int32_t *)(param_1 + 0x148) = *puVar14;
        if (((longlong *)*plVar24 == plVar24) && (*(longlong **)(param_1 + 0x78) == plVar24)) {
          uVar18 = *(ulonglong *)(param_1 + 0x28);
          plStack_148 = *(longlong **)(param_1 + 0x38);
        }
        else {
          uVar18 = *(ulonglong *)(*(longlong *)(param_1 + 0x78) + 0x10);
          plStack_148 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x20);
        }
        if (plStack_148 != (longlong *)0x0) {
          *(int *)(plStack_148 + 2) = (int)plStack_148[2] + 1;
        }
        if (uVar26 < uVar18) {
          if (plStack_148 == (longlong *)0x0) {
            return 0x1c;
          }
          plVar24 = plStack_148 + 2;
          *(int *)plVar24 = (int)*plVar24 + -1;
          iVar8 = (int)*plVar24;
          plVar24 = plStack_148;
          goto joined_r0x0001808591a3;
        }
        *(int8_t *)(param_1 + 0x13c) = 0;
        plStack_130 = (longlong *)0x0;
        puVar14 = (int32_t *)FUN_18084da10();
        in_stack_fffffffffffffe78 = &plStack_130;
        uVar7 = FUN_18085c4b0(param_1,lVar15,*puVar14,uVar7,in_stack_fffffffffffffe78);
        plVar24 = plStack_130;
        uVar18 = (ulonglong)uVar7;
        if (uVar7 == 0) {
          uStack_118 = uVar20;
          uStack_114 = 4;
          plStack_110 = plStack_130;
          if (plStack_130 != (longlong *)0x0) {
            *(int *)(plStack_130 + 2) = (int)plStack_130[2] + 1;
          }
          uStack_120 = uVar26;
          uVar7 = FUN_180859210(param_1 + 0x70,&uStack_120);
          uVar18 = (ulonglong)uVar7;
          if (plVar24 != (longlong *)0x0) {
            plVar21 = plVar24 + 2;
            *(int *)plVar21 = (int)*plVar21 + -1;
            if ((int)*plVar21 == 0) {
                    // WARNING: Subroutine does not return
              FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar24,&unknown_var_2208_ptr,0x76,1);
            }
          }
        }
        if (plStack_148 != (longlong *)0x0) {
          plVar24 = plStack_148 + 2;
          *(int *)plVar24 = (int)*plVar24 + -1;
          if ((int)*plVar24 == 0) {
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plStack_148,&unknown_var_2208_ptr,0x76,1)
            ;
          }
        }
        if ((int)uVar18 != 0) {
          return uVar18;
        }
        uStack_128 = (ulonglong)uVar20;
        uStack_e8 = uVar20;
        if (lStack_98 != 0) {
          lVar15 = func_0x00018084d0b0(*(uint64_t *)(param_1 + 0x110),lStack_98 + 0x20);
          *(int32_t *)(param_1 + 0x154) = *(int32_t *)(lVar15 + 0x20);
          *(int8_t *)(param_1 + 0x13f) = 1;
          if ((ulonglong)*(uint *)(lStack_f8 + 0x20) + (ulonglong)auStack_140[0] < 0x100000000) {
            uStack_158 = auStack_140[0] + *(uint *)(lStack_f8 + 0x20);
          }
          else {
            uStack_158 = 0xffffffff;
          }
          in_stack_fffffffffffffe78 =
               (longlong **)((ulonglong)in_stack_fffffffffffffe78 & 0xffffffffffffff00);
          uVar18 = FUN_18085f8d0(*(uint64_t *)(param_1 + 0x160),uVar26,
                                 *(longlong *)(param_1 + 0x110) + 0x48,1,in_stack_fffffffffffffe78);
          if ((int)uVar18 != 0) {
            return uVar18;
          }
          uVar18 = FUN_18085c6f0(param_1,uVar26,&uStack_158,0);
          if ((int)uVar18 != 0) {
            return uVar18;
          }
        }
        goto LAB_180858c20;
      }
      if ((ulonglong)auStack_140[0] + (ulonglong)*(uint *)(lVar13 + 0x20) < 0x100000000) {
        uVar10 = (ulonglong)(auStack_140[0] + *(uint *)(lVar13 + 0x20));
      }
      else {
        uVar10 = 0xffffffff;
      }
      uVar7 = (uint)uVar10;
      in_stack_fffffffffffffe78 = (longlong **)((ulonglong)puVar16 & 0xffffffffffffff00);
      uStack_158 = uVar7;
      uVar18 = FUN_18085f8d0(*(uint64_t *)(param_1 + 0x160),uVar26,
                             *(longlong *)(param_1 + 0x110) + 0x48,1,in_stack_fffffffffffffe78);
      if ((int)uVar18 != 0) {
        return uVar18;
      }
      uVar18 = FUN_18085c6f0(param_1,uVar26,&uStack_158,0);
      if ((int)uVar18 != 0) {
        return uVar18;
      }
      *(uint *)(param_1 + 8) = uVar7;
      *(int32_t *)(param_1 + 0x138) = 0xffffffff;
      uStack_128 = uVar10;
      uStack_e8 = uVar7;
      if ((iStack_164 < 0x65) && (iStack_108 < 0x1f)) {
        uVar18 = FUN_180854810(param_1,uVar26,uVar10,0);
        if ((int)uVar18 != 0) {
          return uVar18;
        }
        plVar24 = (longlong *)(param_1 + 0x70);
      }
      else {
        uVar6 = 0xffffffff;
        if (uVar10 + uVar12 < 0x100000000) {
          uVar6 = uStack_15c + uVar7;
        }
        uVar20 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
        if (uVar6 < uVar7) {
          uVar6 = uVar7 - uVar6;
          if (uVar20 != 48000) {
            uVar6 = (uint)(((ulonglong)uVar6 * (ulonglong)uVar20) / 48000);
          }
          uVar12 = -(ulonglong)uVar6;
        }
        else {
          uVar6 = uVar6 - uVar7;
          if (uVar20 != 48000) {
            uVar6 = (uint)(((ulonglong)uVar6 * (ulonglong)uVar20) / 48000);
          }
          uVar12 = (ulonglong)uVar6;
        }
        if (uVar12 + uVar26 < uVar26) {
          return 0x1c;
        }
        plVar21 = (longlong *)(param_1 + 0x70);
        if (((longlong *)*plVar21 == plVar21) && (*(longlong **)(param_1 + 0x78) == plVar21)) {
          uVar18 = *(ulonglong *)(param_1 + 0x28);
          plVar24 = *(longlong **)(param_1 + 0x38);
        }
        else {
          uVar18 = *(ulonglong *)(*(longlong *)(param_1 + 0x78) + 0x10);
          plVar24 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x20);
        }
        if (plVar24 != (longlong *)0x0) {
          *(int *)(plVar24 + 2) = (int)plVar24[2] + 1;
        }
        if (uVar26 < uVar18) {
LAB_1808591d6:
          if (plVar24 == (longlong *)0x0) {
            return 0x1c;
          }
          plVar21 = plVar24 + 2;
          *(int *)plVar21 = (int)*plVar21 + -1;
          iVar8 = (int)*plVar21;
joined_r0x0001808591a3:
          if (iVar8 != 0) {
            return 0x1c;
          }
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar24,&unknown_var_2208_ptr,0x76,1);
        }
        *(int8_t *)(param_1 + 0x13c) = 0;
        uStack_114 = 2;
        plStack_110 = (longlong *)0x0;
        uStack_120 = uVar26;
        uStack_118 = uVar7;
        uVar6 = FUN_180859210(plVar21,&uStack_120);
        if (uVar6 == 0) {
          uStack_114 = 3;
          plStack_110 = (longlong *)0x0;
          uStack_120 = uVar12 + uVar26;
          uStack_118 = uVar7;
          uVar6 = FUN_180859210(plVar21,&uStack_120);
          if (uVar6 != 0) goto LAB_180858e04;
          if (plVar24 != (longlong *)0x0) {
            plVar21 = plVar24 + 2;
            *(int *)plVar21 = (int)*plVar21 + -1;
            if ((int)*plVar21 == 0) {
                    // WARNING: Subroutine does not return
              FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar24,&unknown_var_2208_ptr,0x76,1);
            }
          }
        }
        else {
LAB_180858e04:
          if (plVar24 != (longlong *)0x0) {
            plVar21 = plVar24 + 2;
            *(int *)plVar21 = (int)*plVar21 + -1;
            if ((int)*plVar21 == 0) {
                    // WARNING: Subroutine does not return
              FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar24,&unknown_var_2208_ptr,0x76,1);
            }
          }
          if (uVar6 != 0) {
            return (ulonglong)uVar6;
          }
        }
        puVar16 = (uint *)FUN_18084da10();
        plVar24 = (longlong *)(param_1 + 0x70);
        uStack_15c = *puVar16;
        uVar12 = (ulonglong)uStack_15c;
      }
      goto LAB_1808580a0;
    }
    bVar28 = lStack_a8 != 0;
    if (bVar28) {
      uVar7 = *(uint *)(lStack_a8 + 0x10);
      uStack_134 = uVar7;
    }
    bVar29 = *(int *)(param_1 + 0xc) != 2;
    lVar15 = (ulonglong)uVar31 << 8;
    uVar9 = CONCAT71(uVar30,1);
    uVar12 = FUN_18085acd0(param_1,&uStack_f0,&uStack_138,*(longlong *)(param_1 + 0x110) + 0x48,
                           uVar9,bVar29,lVar15);
    if ((int)uVar12 != 0) {
      return uVar12;
    }
    in_stack_fffffffffffffe88 = CONCAT71((int7)((ulonglong)lVar15 >> 8),(char)uVar12);
    in_stack_fffffffffffffe78 = (longlong **)CONCAT71((int7)((ulonglong)uVar9 >> 8),(char)uVar12);
    uVar12 = FUN_18085acd0(param_1,&uStack_f0,&uStack_138,*(longlong *)(param_1 + 0x110) + 0x38,
                           in_stack_fffffffffffffe78,bVar29,in_stack_fffffffffffffe88);
    if ((int)uVar12 != 0) {
      return uVar12;
    }
    *(uint *)(param_1 + 8) = uVar7;
    *(int32_t *)(param_1 + 0xc) = 2;
    if ((*(int *)(lStack_c0 + 0x48) < _DAT_180c4ea98) &&
       (FUN_1808fcb90(&system_ptr_ea98), _DAT_180c4ea98 == -1)) {
      _DAT_180c4ea94 = 0;
      FUN_1808fcb30(&system_ptr_ea98);
    }
    uStack_15c = _DAT_180c4ea94;
    plVar24 = (longlong *)(param_1 + 0x70);
    if (bVar28) {
      uVar6 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
      uVar20 = (uint)uStack_128;
      if (uVar7 < uVar20) {
        uVar12 = (ulonglong)(uVar20 - uVar7);
        if (uVar6 != 48000) {
          uVar12 = (uVar12 * uVar6) / 48000;
        }
        uVar12 = -(uVar12 & 0xffffffff);
      }
      else {
        uVar20 = uVar7 - uVar20;
        if (uVar6 != 48000) {
          uVar20 = (uint)(((ulonglong)uVar20 * (ulonglong)uVar6) / 48000);
        }
        uVar12 = (ulonglong)uVar20;
      }
      uVar12 = uVar12 + uVar26;
      plVar24 = (longlong *)(*(longlong *)(param_1 + 0x160) + 0x380);
      lVar15 = *plVar24 + -0x20;
      if (*plVar24 == 0) {
        lVar15 = 0;
      }
      if (lVar15 == 0) {
        plVar21 = (longlong *)0x0;
      }
      else {
        plVar21 = (longlong *)(lVar15 + 0x20);
      }
      if (plVar21 != plVar24) {
        plVar27 = (longlong *)0x0;
        do {
          plVar17 = plVar21 + -4;
          if (plVar21 == (longlong *)0x0) {
            plVar17 = plVar27;
          }
          iVar8 = (**(code **)(*plVar17 + 0x88))(plVar17,uVar12);
          uVar7 = uStack_134;
          if ((iVar8 != 0) || (plVar21 == plVar24)) break;
          plVar17 = (longlong *)(*plVar21 + -0x20);
          if (*plVar21 == 0) {
            plVar17 = plVar27;
          }
          plVar21 = plVar27;
          if (plVar17 != (longlong *)0x0) {
            plVar21 = plVar17 + 4;
          }
        } while (plVar21 != plVar24);
      }
      uVar18 = FUN_18085f960(*(uint64_t *)(param_1 + 0x160),uVar12);
      if ((int)uVar18 != 0) {
        return uVar18;
      }
      plVar24 = (longlong *)(param_1 + 0x70);
      if (((longlong *)*plVar24 == plVar24) && (*(longlong **)(param_1 + 0x78) == plVar24)) {
        uVar18 = *(ulonglong *)(param_1 + 0x28);
        plVar24 = *(longlong **)(param_1 + 0x38);
      }
      else {
        uVar18 = *(ulonglong *)(*(longlong *)(param_1 + 0x78) + 0x10);
        plVar24 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x20);
      }
      if (plVar24 != (longlong *)0x0) {
        *(int *)(plVar24 + 2) = (int)plVar24[2] + 1;
      }
      if (uVar12 < uVar18) goto LAB_1808591d6;
      *(int8_t *)(param_1 + 0x13c) = 1;
      plStack_110 = (longlong *)0x0;
      uStack_114 = 1;
      uStack_120 = uVar12;
      uStack_118 = uVar7;
      uVar7 = FUN_180859210(param_1 + 0x70,&uStack_120);
      if (plVar24 != (longlong *)0x0) {
        plVar21 = plVar24 + 2;
        *(int *)plVar21 = (int)*plVar21 + -1;
        if ((int)*plVar21 == 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar24,&unknown_var_2208_ptr,0x76,1);
        }
      }
      plVar24 = plStack_b8;
      if (uVar7 != 0) {
        return (ulonglong)uVar7;
      }
    }
    uVar12 = (ulonglong)uStack_15c;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180859210(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)
           FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x28,&unknown_var_1696_ptr,0xbf,0,0,1);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)plVar2;
    plVar2[1] = (longlong)plVar2;
    plVar2[2] = *param_2;
    *(int *)(plVar2 + 3) = (int)param_2[1];
    *(int32_t *)((longlong)plVar2 + 0x1c) = *(int32_t *)((longlong)param_2 + 0xc);
    lVar1 = param_2[2];
    plVar2[4] = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
    }
    plVar2[1] = *(longlong *)(param_1 + 8);
    *plVar2 = param_1;
    *(longlong **)(param_1 + 8) = plVar2;
    *(longlong **)plVar2[1] = plVar2;
    return 0;
  }
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808592c0(longlong param_1,longlong param_2,uint64_t param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint64_t uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  plVar1 = (longlong *)(param_1 + 0x70);
  if (((longlong *)*plVar1 == plVar1) && (*(longlong **)(param_1 + 0x78) == plVar1)) {
    lVar7 = *(longlong *)(param_1 + 0x38);
    lVar9 = *(longlong *)(param_1 + 0x28);
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x30);
    if (lVar7 != 0) {
      *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x78);
    lVar7 = *(longlong *)(lVar4 + 0x20);
    lVar9 = *(longlong *)(lVar4 + 0x10);
    uVar8 = (ulonglong)*(uint *)(lVar4 + 0x18);
    if (lVar7 != 0) {
      *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
    }
  }
  if (lVar7 != 0) {
    piVar2 = (int *)(lVar7 + 0x10);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),lVar7,&unknown_var_2208_ptr,0x76,1);
    }
  }
  iVar11 = -1;
  uVar5 = 0;
  if (0 < param_2 - lVar9) {
    uVar5 = param_2 - lVar9;
  }
  if ((longlong)uVar5 < 1) {
    uVar5 = 0;
  }
  else {
    uVar10 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
    if (uVar10 != 48000) {
      uVar5 = (longlong)(uVar5 * 48000) / (longlong)(ulonglong)uVar10;
    }
    if (0xffffffff < (longlong)uVar5) {
      uVar5 = 0xffffffff;
    }
  }
  uVar10 = (uint)uVar8;
  if (uVar8 + (uVar5 & 0xffffffff) < 0x100000000) {
    iVar11 = uVar10 + (int)uVar5;
  }
  auStackX_8[0] = 0;
  uVar6 = FUN_18084d140(*(uint64_t *)(param_1 + 0x110),iVar11,param_3,auStackX_8);
  if ((int)uVar6 == 0) {
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
    if (uVar10 <= auStackX_8[0]) {
      uVar8 = (ulonglong)(auStackX_8[0] - uVar10);
      if (uVar3 != 48000) {
        uVar8 = (uVar8 * uVar3) / 48000;
      }
      *param_4 = (uVar8 & 0xffffffff) + lVar9;
      return 0;
    }
    uVar8 = (ulonglong)(uVar10 - auStackX_8[0]);
    if (uVar3 != 48000) {
      uVar8 = (uVar8 * uVar3) / 48000;
    }
    *param_4 = lVar9 - (uVar8 & 0xffffffff);
    uVar6 = 0;
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808592ca(longlong param_1,longlong param_2,uint64_t param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint64_t uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint in_stack_00000060;
  
  plVar1 = (longlong *)(param_1 + 0x70);
  if (((longlong *)*plVar1 == plVar1) && (*(longlong **)(param_1 + 0x78) == plVar1)) {
    lVar7 = *(longlong *)(param_1 + 0x38);
    lVar9 = *(longlong *)(param_1 + 0x28);
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x30);
    if (lVar7 != 0) {
      *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x78);
    lVar7 = *(longlong *)(lVar4 + 0x20);
    lVar9 = *(longlong *)(lVar4 + 0x10);
    uVar8 = (ulonglong)*(uint *)(lVar4 + 0x18);
    if (lVar7 != 0) {
      *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
    }
  }
  if (lVar7 != 0) {
    piVar2 = (int *)(lVar7 + 0x10);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),lVar7,&unknown_var_2208_ptr,0x76,1);
    }
  }
  iVar11 = -1;
  uVar5 = 0;
  if (0 < param_2 - lVar9) {
    uVar5 = param_2 - lVar9;
  }
  if ((longlong)uVar5 < 1) {
    uVar5 = 0;
  }
  else {
    uVar10 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
    if (uVar10 != 48000) {
      uVar5 = (longlong)(uVar5 * 48000) / (longlong)(ulonglong)uVar10;
    }
    if (0xffffffff < (longlong)uVar5) {
      uVar5 = 0xffffffff;
    }
  }
  uVar10 = (uint)uVar8;
  if (uVar8 + (uVar5 & 0xffffffff) < 0x100000000) {
    iVar11 = uVar10 + (int)uVar5;
  }
  in_stack_00000060 = 0;
  uVar6 = FUN_18084d140(*(uint64_t *)(param_1 + 0x110),iVar11,param_3,&stack0x00000060);
  if ((int)uVar6 == 0) {
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
    if (uVar10 <= in_stack_00000060) {
      uVar8 = (ulonglong)(in_stack_00000060 - uVar10);
      if (uVar3 != 48000) {
        uVar8 = (uVar8 * uVar3) / 48000;
      }
      *param_4 = (uVar8 & 0xffffffff) + lVar9;
      return 0;
    }
    uVar8 = (ulonglong)(uVar10 - in_stack_00000060);
    if (uVar3 != 48000) {
      uVar8 = (uVar8 * uVar3) / 48000;
    }
    *param_4 = lVar9 - (uVar8 & 0xffffffff);
    uVar6 = 0;
  }
  return uVar6;
}



uint64_t FUN_180859384(uint64_t param_1,ulonglong param_2)

{
  uint uVar1;
  longlong in_RAX;
  uint64_t uVar2;
  ulonglong uVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint unaff_EDI;
  ulonglong in_R10;
  longlong *unaff_R15;
  uint uStack0000000000000060;
  
  if (*(uint *)(in_RAX + 0x774) != 48000) {
    param_2 = (longlong)(param_2 * 48000) / (longlong)(ulonglong)*(uint *)(in_RAX + 0x774);
  }
  if ((longlong)in_R10 < (longlong)param_2) {
    param_2 = in_R10;
  }
  if ((ulonglong)unaff_EDI + (param_2 & 0xffffffff) <= in_R10) {
    in_R10 = (ulonglong)(unaff_EDI + (int)param_2);
  }
  uStack0000000000000060 = 0;
  uVar2 = FUN_18084d140(*(uint64_t *)(unaff_RBP + 0x110),in_R10 & 0xffffffff);
  if ((int)uVar2 == 0) {
    uVar1 = *(uint *)(*(longlong *)(unaff_RBP + 0x168) + 0x774);
    if (unaff_EDI <= uStack0000000000000060) {
      uVar3 = (ulonglong)(uStack0000000000000060 - unaff_EDI);
      if (uVar1 != 48000) {
        uVar3 = (uVar3 * uVar1) / 48000;
      }
      *unaff_R15 = (uVar3 & 0xffffffff) + unaff_RBX;
      return 0;
    }
    uVar3 = (ulonglong)(unaff_EDI - uStack0000000000000060);
    if (uVar1 != 48000) {
      uVar3 = (uVar3 * uVar1) / 48000;
    }
    *unaff_R15 = unaff_RBX - (uVar3 & 0xffffffff);
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1808593e4(void)

{
  uint uVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint unaff_EDI;
  longlong *unaff_R15;
  uint in_stack_00000060;
  
  uVar1 = *(uint *)(*(longlong *)(unaff_RBP + 0x168) + 0x774);
  if (unaff_EDI <= in_stack_00000060) {
    uVar2 = (ulonglong)(in_stack_00000060 - unaff_EDI);
    if (uVar1 != 48000) {
      uVar2 = (uVar2 * uVar1) / 48000;
    }
    *unaff_R15 = (uVar2 & 0xffffffff) + unaff_RBX;
    return 0;
  }
  uVar2 = (ulonglong)(unaff_EDI - in_stack_00000060);
  if (uVar1 != 48000) {
    uVar2 = (uVar2 * uVar1) / 48000;
  }
  *unaff_R15 = unaff_RBX - (uVar2 & 0xffffffff);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180859470(longlong *param_1,int param_2)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int iVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  longlong lVar7;
  longlong lVar8;
  int32_t *puVar9;
  longlong lVar10;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar7 = 0;
  if (param_2 != 0) {
    if (param_2 * 0x1c - 1U < 0x3fffffff) {
      lVar7 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x1c,&unknown_var_8432_ptr,
                            0xf4,0,0,1);
      if (lVar7 != 0) {
        iVar3 = (int)param_1[1];
        lVar8 = (longlong)iVar3;
        if ((iVar3 != 0) && (0 < iVar3)) {
          lVar10 = *param_1 - lVar7;
          puVar9 = (int32_t *)(lVar7 + 0x10);
          do {
            puVar2 = (int32_t *)(lVar10 + -0x10 + (longlong)puVar9);
            uVar4 = puVar2[1];
            uVar5 = puVar2[2];
            uVar6 = puVar2[3];
            puVar1 = puVar9 + 7;
            puVar9[-4] = *puVar2;
            puVar9[-3] = uVar4;
            puVar9[-2] = uVar5;
            puVar9[-1] = uVar6;
            *puVar9 = *(int32_t *)(lVar10 + -0x1c + (longlong)puVar1);
            *(uint64_t *)(puVar9 + 1) = *(uint64_t *)(lVar10 + -0x18 + (longlong)puVar1);
            lVar8 = lVar8 + -1;
            puVar9 = puVar1;
          } while (lVar8 != 0);
        }
        goto LAB_180859535;
      }
    }
    return 0x26;
  }
LAB_180859535:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = lVar7;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180859494(void)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int iVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  longlong lVar7;
  longlong lVar8;
  int32_t *puVar9;
  longlong *unaff_RBX;
  int unaff_EDI;
  longlong lVar10;
  
  lVar7 = 0;
  if (unaff_EDI == 0) {
LAB_180859535:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&unknown_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar7;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (unaff_EDI * 0x1c - 1U < 0x3fffffff) {
    lVar7 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),unaff_EDI * 0x1c,&unknown_var_8432_ptr,
                          0xf4,0);
    if (lVar7 != 0) {
      iVar3 = (int)unaff_RBX[1];
      lVar8 = (longlong)iVar3;
      if ((iVar3 != 0) && (0 < iVar3)) {
        lVar10 = *unaff_RBX - lVar7;
        puVar9 = (int32_t *)(lVar7 + 0x10);
        do {
          puVar2 = (int32_t *)(lVar10 + -0x10 + (longlong)puVar9);
          uVar4 = puVar2[1];
          uVar5 = puVar2[2];
          uVar6 = puVar2[3];
          puVar1 = puVar9 + 7;
          puVar9[-4] = *puVar2;
          puVar9[-3] = uVar4;
          puVar9[-2] = uVar5;
          puVar9[-1] = uVar6;
          *puVar9 = *(int32_t *)(lVar10 + -0x1c + (longlong)puVar1);
          *(uint64_t *)(puVar9 + 1) = *(uint64_t *)(lVar10 + -0x18 + (longlong)puVar1);
          lVar8 = lVar8 + -1;
          puVar9 = puVar1;
        } while (lVar8 != 0);
      }
      goto LAB_180859535;
    }
  }
  return 0x26;
}



uint64_t FUN_180859580(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808595a0(longlong *param_1,int param_2)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int iVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  longlong lVar7;
  longlong lVar8;
  int32_t *puVar9;
  longlong lVar10;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar7 = 0;
  if (param_2 != 0) {
    if (param_2 * 0x18 - 1U < 0x3fffffff) {
      lVar7 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x18,&unknown_var_8432_ptr,
                            0xf4,0,0,1);
      if (lVar7 != 0) {
        iVar3 = (int)param_1[1];
        lVar8 = (longlong)iVar3;
        if ((iVar3 != 0) && (0 < iVar3)) {
          lVar10 = *param_1 - lVar7;
          puVar9 = (int32_t *)(lVar7 + 0x10);
          do {
            puVar2 = (int32_t *)(lVar10 + -0x10 + (longlong)puVar9);
            uVar4 = puVar2[1];
            uVar5 = puVar2[2];
            uVar6 = puVar2[3];
            puVar1 = puVar9 + 6;
            puVar9[-4] = *puVar2;
            puVar9[-3] = uVar4;
            puVar9[-2] = uVar5;
            puVar9[-1] = uVar6;
            *puVar9 = *(int32_t *)(lVar10 + -0x18 + (longlong)puVar1);
            *(int8_t *)(puVar9 + 1) = *(int8_t *)(lVar10 + -0x14 + (longlong)puVar1);
            lVar8 = lVar8 + -1;
            puVar9 = puVar1;
          } while (lVar8 != 0);
        }
        goto LAB_180859665;
      }
    }
    return 0x26;
  }
LAB_180859665:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = lVar7;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808595c4(uint64_t param_1,int param_2)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int iVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  longlong lVar7;
  longlong lVar8;
  int32_t *puVar9;
  longlong *unaff_RBX;
  int unaff_EDI;
  longlong lVar10;
  
  lVar7 = 0;
  if (unaff_EDI == 0) {
LAB_180859665:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&unknown_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar7;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x18 - 1U < 0x3fffffff) {
    lVar7 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x18,&unknown_var_8432_ptr,0xf4
                          ,0);
    if (lVar7 != 0) {
      iVar3 = (int)unaff_RBX[1];
      lVar8 = (longlong)iVar3;
      if ((iVar3 != 0) && (0 < iVar3)) {
        lVar10 = *unaff_RBX - lVar7;
        puVar9 = (int32_t *)(lVar7 + 0x10);
        do {
          puVar2 = (int32_t *)(lVar10 + -0x10 + (longlong)puVar9);
          uVar4 = puVar2[1];
          uVar5 = puVar2[2];
          uVar6 = puVar2[3];
          puVar1 = puVar9 + 6;
          puVar9[-4] = *puVar2;
          puVar9[-3] = uVar4;
          puVar9[-2] = uVar5;
          puVar9[-1] = uVar6;
          *puVar9 = *(int32_t *)(lVar10 + -0x18 + (longlong)puVar1);
          *(int8_t *)(puVar9 + 1) = *(int8_t *)(lVar10 + -0x14 + (longlong)puVar1);
          lVar8 = lVar8 + -1;
          puVar9 = puVar1;
        } while (lVar8 != 0);
      }
      goto LAB_180859665;
    }
  }
  return 0x26;
}



uint64_t FUN_1808596b0(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





