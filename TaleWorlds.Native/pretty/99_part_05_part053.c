#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part053.c - 18 个函数

// 函数: void FUN_1802faebf(void)
void FUN_1802faebf(void)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  float fVar1;
  float unaff_XMM6_Da;
  
  (**(code **)(*(longlong *)(unaff_RDI + 0x210) + 0x50))
            (*(uint64_t *)(*(longlong *)(unaff_RDI + 0x210) + 0x48),&stack0x00000030);
  if (0.0 <= unaff_XMM6_Da) {
    fVar1 = *(float *)(unaff_RDI + 0x34) - unaff_XMM6_Da;
    *(float *)(unaff_RDI + 0x34) = fVar1;
    if (unaff_XMM6_Da < fVar1) {
      *(float *)(unaff_RDI + 0x34) = unaff_XMM6_Da;
    }
  }
  else {
    *(int32_t *)(unaff_RDI + 0x34) = 0;
  }
  *(int32_t *)(unaff_RDI + 0x50) = *(int32_t *)(system_main_module_state + 0x224);
  *(ushort *)(unaff_RDI + 0xa8) = *(ushort *)(unaff_RDI + 0xa8) | 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xf80) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802faee4(void)
void FUN_1802faee4(void)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  float fVar1;
  float unaff_XMM6_Da;
  
  (**(code **)(**(longlong **)(unaff_RDI + 0x210) + 0x60))();
  if (0.0 <= unaff_XMM6_Da) {
    fVar1 = *(float *)(unaff_RDI + 0x34) - unaff_XMM6_Da;
    *(float *)(unaff_RDI + 0x34) = fVar1;
    if (unaff_XMM6_Da < fVar1) {
      *(float *)(unaff_RDI + 0x34) = unaff_XMM6_Da;
    }
  }
  else {
    *(int32_t *)(unaff_RDI + 0x34) = 0;
  }
  *(int32_t *)(unaff_RDI + 0x50) = *(int32_t *)(system_main_module_state + 0x224);
  *(ushort *)(unaff_RDI + 0xa8) = *(ushort *)(unaff_RDI + 0xa8) | 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xf80) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802faf70(longlong param_1,char param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802faf70(longlong param_1,char param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  int8_t uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  
  lVar4 = *(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3;
  plVar6 = (longlong *)0x0;
  plVar3 = plVar6;
  if (lVar4 != 0) {
    plVar3 = (longlong *)
             FUN_18062b420(system_memory_pool_ptr,lVar4 * 8,*(uint *)(param_1 + 0x1c0) & 0xff,param_4,
                           0xfffffffffffffffe);
  }
  plVar8 = *(longlong **)(param_1 + 0x1b0);
  plVar5 = plVar3;
  for (plVar10 = *(longlong **)(param_1 + 0x1a8); plVar10 != plVar8; plVar10 = plVar10 + 1) {
    plVar1 = (longlong *)*plVar10;
    *plVar5 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    plVar5 = plVar5 + 1;
  }
  uVar9 = (longlong)plVar5 - (longlong)plVar3 >> 3;
  plVar8 = plVar6;
  plVar10 = plVar3;
  if (uVar9 != 0) {
    do {
      plVar1 = (longlong *)*plVar10;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))();
      }
      uVar2 = FUN_1802fc790(param_1,plVar1);
      FUN_1802fca80(param_1,plVar1,uVar2);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      uVar7 = (int)plVar8 + 1;
      plVar8 = (longlong *)(ulonglong)uVar7;
      plVar10 = plVar10 + 1;
    } while ((ulonglong)(longlong)(int)uVar7 < uVar9);
  }
  plVar8 = plVar3;
  if ((param_2 != '\0') && ('\0' < *(char *)(param_1 + 0x20))) {
    do {
      FUN_1802f93b0((longlong)(int)plVar6 * 0x100 + *(longlong *)(param_1 + 0x18),param_1);
      uVar7 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar7;
    } while ((int)uVar7 < (int)*(char *)(param_1 + 0x20));
  }
  for (; plVar8 != plVar5; plVar8 = plVar8 + 1) {
    if ((longlong *)*plVar8 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar8 + 0x38))();
    }
  }
  if (plVar3 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar3);
  }
  return;
}






// 函数: void FUN_1802fb130(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802fb130(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  
  *(int32_t *)(param_1 + 8) = 0;
  *(int8_t *)(param_1 + 0x20) = 0;
  *(int32_t *)(param_1 + 0x1e8) = 0;
  *(int32_t *)(param_1 + 0x1ec) = 0;
  *(int32_t *)(param_1 + 0x1f0) = 0;
  *(int32_t *)(param_1 + 500) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x1f8) = 0;
  *(int32_t *)(param_1 + 0x1fc) = 0;
  *(int32_t *)(param_1 + 0x200) = 0;
  *(int32_t *)(param_1 + 0x204) = 0x7f7fffff;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x180) = 0;
  *(uint64_t *)(param_1 + 0xd8) = 0;
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(int32_t *)(param_1 + 0x3c) = 0xbf800000;
  *(uint64_t *)(param_1 + 0x34) = 0x3dcccccd;
  *(uint64_t *)(param_1 + 0x210) = 0;
  *(int32_t *)(param_1 + 0x30) = 0x3c888889;
  *(int16_t *)(param_1 + 0xa8) = 0x40;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int16_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x28) = 0;
  plVar1 = *(longlong **)(param_1 + 0x178);
  *(uint64_t *)(param_1 + 0x178) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,0,param_3,param_4,0xfffffffffffffffe);
  }
  *(uint64_t *)(param_1 + 0x44) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x4c) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x208) = 0;
  *(int8_t *)(param_1 + 0xaa) = 0;
  *(uint64_t *)(param_1 + 0x218) = 0;
  *(uint64_t *)(param_1 + 0x220) = 0x7f7fffff00000000;
  *(uint64_t *)(param_1 + 0x228) = 0;
  *(uint64_t *)(param_1 + 0x230) = 0x7f7fffff00000000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fb220(longlong param_1)
void FUN_1802fb220(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int32_t uVar3;
  longlong lVar4;
  
  lVar2 = system_parameter_buffer;
  iVar1 = *(int *)(system_main_module_state + 0x224);
  if (*(int *)(param_1 + 0x4c) != iVar1) {
    lVar4 = system_parameter_buffer + 0xc28;
    *(int32_t *)(param_1 + 0x48) = *(int32_t *)(param_1 + 0x44);
    uVar3 = FUN_180080380((longlong)*(int *)(lVar2 + 0xe78) * 0x128 + lVar4,
                          (int)*(char *)(param_1 + 0x20));
    *(int32_t *)(param_1 + 0x44) = uVar3;
    *(int *)(param_1 + 0x4c) = iVar1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fb280(longlong param_1)
void FUN_1802fb280(longlong param_1)

{
  uint64_t *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint uVar14;
  uint uVar15;
  uint64_t uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  char cVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  
  iVar3 = *(int *)(param_1 + 0x4c);
  iVar4 = *(int *)(system_main_module_state + 0x224);
  if (iVar3 != iVar4) {
    *(int32_t *)(param_1 + 0x48) = *(int32_t *)(param_1 + 0x44);
    cVar2 = *(char *)(param_1 + 0x20);
    uVar22 = (ulonglong)cVar2;
    lVar24 = (longlong)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc28;
    uVar14 = FUN_180080380(lVar24,uVar22 & 0xffffffff);
    *(uint *)(param_1 + 0x44) = uVar14;
    *(int *)(param_1 + 0x4c) = iVar4;
    if ((*(byte *)(param_1 + 0xa8) >> 3 & 1) == 0) {
      if (iVar3 == iVar4 + -1) {
        uVar15 = *(int *)(system_parameter_buffer + 0xe78) + 1U & 0x80000001;
        if ((int)uVar15 < 0) {
          uVar15 = (uVar15 - 1 | 0xfffffffe) + 1;
        }
        uVar5 = *(uint *)(param_1 + 0x48);
        uVar19 = uVar14 >> 0xd;
        lVar23 = (longlong)(int)uVar15 * 0x128 + system_parameter_buffer + 0xc28;
        if (uVar19 == uVar14 + (int)cVar2 >> 0xd) {
          uVar15 = uVar5 >> 0xd;
          if (uVar15 == uVar5 + (int)cVar2 >> 0xd) {
                    // WARNING: Subroutine does not return
            memcpy(*(longlong *)(lVar24 + 8 + (ulonglong)uVar19 * 8) +
                   (ulonglong)(uVar14 + uVar19 * -0x2000) * 0x40,
                   *(longlong *)(lVar23 + 8 + (ulonglong)uVar15 * 8) +
                   (ulonglong)(uVar5 + uVar15 * -0x2000) * 0x40,uVar22 << 6);
          }
        }
        if ('\0' < cVar2) {
          uVar22 = uVar22 & 0xffffffff;
          uVar21 = (ulonglong)uVar14;
          do {
            iVar3 = (int)uVar21;
            uVar19 = (uVar5 - uVar14) + iVar3;
            uVar15 = uVar19 >> 0xd;
            lVar6 = *(longlong *)(lVar23 + 8 + (ulonglong)uVar15 * 8);
            lVar17 = (ulonglong)(uVar19 + uVar15 * -0x2000) * 0x40;
            uVar16 = ((uint64_t *)(lVar6 + lVar17))[1];
            puVar1 = (uint64_t *)(lVar6 + 0x10 + lVar17);
            uVar8 = *puVar1;
            uVar9 = puVar1[1];
            puVar1 = (uint64_t *)(lVar6 + 0x20 + lVar17);
            uVar10 = *puVar1;
            uVar11 = puVar1[1];
            puVar1 = (uint64_t *)(lVar6 + 0x30 + lVar17);
            uVar12 = *puVar1;
            uVar13 = puVar1[1];
            lVar7 = *(longlong *)(lVar24 + 8 + (uVar21 >> 0xd) * 8);
            lVar18 = (ulonglong)(uint)(iVar3 + (int)(uVar21 >> 0xd) * -0x2000) * 0x40;
            *(uint64_t *)(lVar7 + lVar18) = *(uint64_t *)(lVar6 + lVar17);
            ((uint64_t *)(lVar7 + lVar18))[1] = uVar16;
            puVar1 = (uint64_t *)(lVar7 + 0x10 + lVar18);
            *puVar1 = uVar8;
            puVar1[1] = uVar9;
            puVar1 = (uint64_t *)(lVar7 + 0x20 + lVar18);
            *puVar1 = uVar10;
            puVar1[1] = uVar11;
            puVar1 = (uint64_t *)(lVar7 + 0x30 + lVar18);
            *puVar1 = uVar12;
            puVar1[1] = uVar13;
            uVar22 = uVar22 - 1;
            uVar21 = (ulonglong)(iVar3 + 1);
          } while (uVar22 != 0);
        }
      }
      else {
        cVar20 = '\0';
        if ('\0' < cVar2) {
          do {
            FUN_1802feba0(param_1,cVar20);
            cVar20 = cVar20 + '\x01';
          } while (cVar20 < cVar2);
        }
      }
    }
    else {
      uVar16 = FUN_1803009f0(param_1);
      FUN_1800802e0(lVar24,(ulonglong)uVar14,uVar16,uVar22 & 0xffffffff);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fb2ae(longlong param_1)
void FUN_1802fb2ae(longlong param_1)

{
  uint64_t *puVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint uVar13;
  uint uVar14;
  uint64_t uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  char cVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong unaff_RDI;
  longlong lVar22;
  int unaff_R12D;
  longlong lVar23;
  int unaff_R15D;
  int32_t extraout_XMM0_Da;
  int32_t uVar24;
  
  cVar2 = *(char *)(param_1 + 0x20);
  uVar21 = (ulonglong)cVar2;
  lVar23 = (longlong)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc28;
  uVar13 = FUN_180080380(lVar23,uVar21 & 0xffffffff);
  *(uint *)(unaff_RDI + 0x44) = uVar13;
  *(int *)(unaff_RDI + 0x4c) = unaff_R15D;
  if ((*(byte *)(unaff_RDI + 0xa8) >> 3 & 1) == 0) {
    if (unaff_R12D == unaff_R15D + -1) {
      uVar14 = *(int *)(system_parameter_buffer + 0xe78) + 1U & 0x80000001;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xfffffffe) + 1;
      }
      uVar3 = *(uint *)(unaff_RDI + 0x48);
      uVar18 = uVar13 >> 0xd;
      lVar22 = (longlong)(int)uVar14 * 0x128 + system_parameter_buffer + 0xc28;
      if (uVar18 == uVar13 + (int)cVar2 >> 0xd) {
        uVar14 = uVar3 >> 0xd;
        if (uVar14 == uVar3 + (int)cVar2 >> 0xd) {
                    // WARNING: Subroutine does not return
          memcpy(*(longlong *)(lVar23 + 8 + (ulonglong)uVar18 * 8) +
                 (ulonglong)(uVar13 + uVar18 * -0x2000) * 0x40,
                 *(longlong *)(lVar22 + 8 + (ulonglong)uVar14 * 8) +
                 (ulonglong)(uVar3 + uVar14 * -0x2000) * 0x40,uVar21 << 6);
        }
      }
      if ('\0' < cVar2) {
        uVar21 = uVar21 & 0xffffffff;
        uVar20 = (ulonglong)uVar13;
        do {
          iVar6 = (int)uVar20;
          uVar18 = (uVar3 - uVar13) + iVar6;
          uVar14 = uVar18 >> 0xd;
          lVar4 = *(longlong *)(lVar22 + 8 + (ulonglong)uVar14 * 8);
          lVar16 = (ulonglong)(uVar18 + uVar14 * -0x2000) * 0x40;
          uVar15 = ((uint64_t *)(lVar4 + lVar16))[1];
          puVar1 = (uint64_t *)(lVar4 + 0x10 + lVar16);
          uVar7 = *puVar1;
          uVar8 = puVar1[1];
          puVar1 = (uint64_t *)(lVar4 + 0x20 + lVar16);
          uVar9 = *puVar1;
          uVar10 = puVar1[1];
          puVar1 = (uint64_t *)(lVar4 + 0x30 + lVar16);
          uVar11 = *puVar1;
          uVar12 = puVar1[1];
          lVar5 = *(longlong *)(lVar23 + 8 + (uVar20 >> 0xd) * 8);
          lVar17 = (ulonglong)(uint)(iVar6 + (int)(uVar20 >> 0xd) * -0x2000) * 0x40;
          *(uint64_t *)(lVar5 + lVar17) = *(uint64_t *)(lVar4 + lVar16);
          ((uint64_t *)(lVar5 + lVar17))[1] = uVar15;
          puVar1 = (uint64_t *)(lVar5 + 0x10 + lVar17);
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          puVar1 = (uint64_t *)(lVar5 + 0x20 + lVar17);
          *puVar1 = uVar9;
          puVar1[1] = uVar10;
          puVar1 = (uint64_t *)(lVar5 + 0x30 + lVar17);
          *puVar1 = uVar11;
          puVar1[1] = uVar12;
          uVar21 = uVar21 - 1;
          uVar20 = (ulonglong)(iVar6 + 1);
        } while (uVar21 != 0);
      }
    }
    else {
      cVar19 = '\0';
      uVar24 = extraout_XMM0_Da;
      if ('\0' < cVar2) {
        do {
          uVar24 = FUN_1802feba0(uVar24,cVar19);
          cVar19 = cVar19 + '\x01';
        } while (cVar19 < cVar2);
      }
    }
  }
  else {
    uVar15 = FUN_1803009f0();
    FUN_1800802e0(lVar23,(ulonglong)uVar13,uVar15,uVar21 & 0xffffffff);
  }
  return;
}






// 函数: void FUN_1802fb47b(void)
void FUN_1802fb47b(void)

{
  return;
}



uint64_t *
FUN_1802fb490(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_3552_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_2552_ptr;
  _Mtx_init_in_situ(param_1 + 0xb,2,param_3,param_4,0xfffffffffffffffe);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(int32_t *)(param_1 + 0x19) = 3;
  _Mtx_init_in_situ(param_1 + 0x1c,2);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(int32_t *)(param_1 + 0x2b) = 3;
  param_1[0x2c] = &unknown_var_9288_ptr;
  LOCK();
  *(int32_t *)(param_1 + 0x2d) = 0;
  UNLOCK();
  param_1[0x2e] = 0xffffffffffffffff;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(int32_t *)(param_1 + 0x34) = 3;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(int32_t *)(param_1 + 0x38) = 3;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(int32_t *)(param_1 + 0x3c) = 3;
  FUN_1802fb130(param_1);
  return param_1;
}



uint64_t FUN_1802fb5e0(uint64_t param_1,ulonglong param_2)

{
  FUN_1802fb790();
  if ((param_2 & 1) != 0) {
    free(param_1,0x240);
  }
  return param_1;
}



uint64_t *
FUN_1802fb620(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_3552_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_2552_ptr;
  _Mtx_init_in_situ(param_1 + 0xb,2,param_3,param_4,0xfffffffffffffffe);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(int32_t *)(param_1 + 0x19) = 3;
  _Mtx_init_in_situ(param_1 + 0x1c,2);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(int32_t *)(param_1 + 0x2b) = 3;
  param_1[0x2c] = &unknown_var_9288_ptr;
  LOCK();
  *(int32_t *)(param_1 + 0x2d) = 0;
  UNLOCK();
  param_1[0x2e] = 0xffffffffffffffff;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(int32_t *)(param_1 + 0x34) = 3;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(int32_t *)(param_1 + 0x38) = 3;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(int32_t *)(param_1 + 0x3c) = 3;
  FUN_1802fb130(param_1);
  FUN_1802fa090(param_1,param_2,param_3);
  return param_1;
}






// 函数: void FUN_1802fb790(uint64_t *param_1)
void FUN_1802fb790(uint64_t *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &unknown_var_2552_ptr;
  plVar1 = (longlong *)param_1[0x2f];
  param_1[0x2f] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  FUN_1802fc320(param_1);
  FUN_1803001a0(param_1);
  FUN_1802fc520(param_1,0);
  plVar1 = (longlong *)param_1[0x42];
  if (plVar1 != (longlong *)0x0) {
    lVar2 = __RTCastToVoid(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1,0);
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
    param_1[0x42] = 0;
  }
  lVar2 = param_1[0x1b];
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)(lVar2 + 0x18) = 0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar2);
  }
  if (param_1[0x1a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x1a] = 0;
  FUN_180057830();
  FUN_180057830();
  if (param_1[0x31] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((longlong *)param_1[0x2f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2f] + 0x38))();
  }
  param_1[0x2c] = &unknown_var_9288_ptr;
  if (param_1[0x28] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _Mtx_destroy_in_situ();
  if (param_1[0x16] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _Mtx_destroy_in_situ();
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fb960(longlong param_1,uint64_t param_2,char param_3)
void FUN_1802fb960(longlong param_1,uint64_t param_2,char param_3)

{
  int32_t uVar1;
  int iVar2;
  uint64_t uVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  
  if ((((byte)*(ushort *)(param_1 + 0xa8) >> 3 & 1) == 0) && (param_3 != '\0')) {
    if ((*(ushort *)(param_1 + 0xa8) & 1) == 0) {
      FUN_1802fac00(param_1,param_2,0xbf800000);
      cVar6 = *(char *)(param_1 + 0x20);
    }
    else {
      cVar6 = *(char *)(param_1 + 0x20);
      cVar5 = '\0';
      if ('\0' < cVar6) {
        do {
          FUN_1802feba0(param_1,cVar5);
          cVar6 = *(char *)(param_1 + 0x20);
          cVar5 = cVar5 + '\x01';
        } while (cVar5 < cVar6);
      }
    }
    uVar1 = *(int32_t *)(param_1 + 0x44);
    lVar4 = system_parameter_buffer + 0xc28;
    iVar2 = *(int *)(system_parameter_buffer + 0xe78);
    uVar3 = FUN_1803009f0(param_1);
    FUN_180300a60((longlong)iVar2 * 0x128 + lVar4,uVar3,uVar1,(int)cVar6);
  }
  if (param_3 == '\0') {
    *(ushort *)(param_1 + 0xa8) = *(ushort *)(param_1 + 0xa8) & 0xfff7;
    return;
  }
  *(ushort *)(param_1 + 0xa8) = *(ushort *)(param_1 + 0xa8) | 8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fb969(longlong param_1,uint64_t param_2,char param_3)
void FUN_1802fb969(longlong param_1,uint64_t param_2,char param_3)

{
  int32_t uVar1;
  int iVar2;
  uint64_t uVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  longlong unaff_RSI;
  
  if ((((byte)*(ushort *)(param_1 + 0xa8) >> 3 & 1) == 0) && (param_3 != '\0')) {
    if ((*(ushort *)(param_1 + 0xa8) & 1) == 0) {
      FUN_1802fac00();
      cVar6 = *(char *)(unaff_RSI + 0x20);
    }
    else {
      cVar6 = *(char *)(unaff_RSI + 0x20);
      cVar5 = '\0';
      if ('\0' < cVar6) {
        do {
          FUN_1802feba0();
          cVar6 = *(char *)(unaff_RSI + 0x20);
          cVar5 = cVar5 + '\x01';
        } while (cVar5 < cVar6);
      }
    }
    uVar1 = *(int32_t *)(unaff_RSI + 0x44);
    lVar4 = system_parameter_buffer + 0xc28;
    iVar2 = *(int *)(system_parameter_buffer + 0xe78);
    uVar3 = FUN_1803009f0();
    FUN_180300a60((longlong)iVar2 * 0x128 + lVar4,uVar3,uVar1,(int)cVar6);
  }
  if (param_3 == '\0') {
    *(ushort *)(unaff_RSI + 0xa8) = *(ushort *)(unaff_RSI + 0xa8) & 0xfff7;
    return;
  }
  *(ushort *)(unaff_RSI + 0xa8) = *(ushort *)(unaff_RSI + 0xa8) | 8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fb990(ulonglong param_1)
void FUN_1802fb990(ulonglong param_1)

{
  int32_t uVar1;
  int iVar2;
  uint64_t uVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  longlong unaff_RSI;
  char unaff_R14B;
  
  if ((param_1 & 1) == 0) {
    FUN_1802fac00();
    cVar6 = *(char *)(unaff_RSI + 0x20);
  }
  else {
    cVar6 = *(char *)(unaff_RSI + 0x20);
    cVar5 = '\0';
    if ('\0' < cVar6) {
      do {
        FUN_1802feba0();
        cVar6 = *(char *)(unaff_RSI + 0x20);
        cVar5 = cVar5 + '\x01';
      } while (cVar5 < cVar6);
    }
  }
  uVar1 = *(int32_t *)(unaff_RSI + 0x44);
  lVar4 = system_parameter_buffer + 0xc28;
  iVar2 = *(int *)(system_parameter_buffer + 0xe78);
  uVar3 = FUN_1803009f0();
  FUN_180300a60((longlong)iVar2 * 0x128 + lVar4,uVar3,uVar1,(int)cVar6);
  if (unaff_R14B != '\0') {
    *(ushort *)(unaff_RSI + 0xa8) = *(ushort *)(unaff_RSI + 0xa8) | 8;
    return;
  }
  *(ushort *)(unaff_RSI + 0xa8) = *(ushort *)(unaff_RSI + 0xa8) & 0xfff7;
  return;
}






// 函数: void FUN_1802fba26(void)
void FUN_1802fba26(void)

{
  longlong unaff_RSI;
  char unaff_R14B;
  
  if (unaff_R14B != '\0') {
    *(ushort *)(unaff_RSI + 0xa8) = *(ushort *)(unaff_RSI + 0xa8) | 8;
    return;
  }
  *(ushort *)(unaff_RSI + 0xa8) = *(ushort *)(unaff_RSI + 0xa8) & 0xfff7;
  return;
}






// 函数: void FUN_1802fba30(void)
void FUN_1802fba30(void)

{
  longlong unaff_RSI;
  
  *(ushort *)(unaff_RSI + 0xa8) = *(ushort *)(unaff_RSI + 0xa8) | 8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fba50(longlong param_1)
void FUN_1802fba50(longlong param_1)

{
  uint64_t uVar1;
  char cVar2;
  char cVar3;
  
  cVar2 = *(char *)(param_1 + 0x20);
  cVar3 = '\0';
  if ('\0' < cVar2) {
    do {
      FUN_1802feba0(param_1,cVar3);
      cVar2 = *(char *)(param_1 + 0x20);
      cVar3 = cVar3 + '\x01';
    } while (cVar3 < cVar2);
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_180300a60((longlong)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc28,
                  *(longlong *)(param_1 + 0xd0),*(int32_t *)(param_1 + 0x44),(int)cVar2);
    *(ushort *)(param_1 + 0xa8) = *(ushort *)(param_1 + 0xa8) | 8;
    return;
  }
  uVar1 = FUN_18062b1e0(system_memory_pool_ptr,0x1028,8,3);
                    // WARNING: Subroutine does not return
  memset(uVar1,0,0x1028);
}






// 函数: void FUN_1802fbb40(longlong param_1)
void FUN_1802fbb40(longlong param_1)

{
  uint64_t *puVar1;
  uint uVar2;
  longlong lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  bool bVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) == 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  cVar12 = '\0';
  if ('\0' < *(char *)(param_1 + 0x20)) {
    do {
      lVar10 = (longlong)cVar12 * 0x100;
      lVar11 = (longlong)cVar12 * 0x1b0 + *(longlong *)(*(longlong *)(param_1 + 0x208) + 0x140);
      lVar3 = *(longlong *)(param_1 + 0x18);
      uVar4 = *(uint64_t *)(lVar11 + 0x80);
      uVar5 = *(uint64_t *)(lVar11 + 0x88);
      uVar6 = *(uint64_t *)(lVar11 + 0x98);
      puVar1 = (uint64_t *)(lVar10 + 0x30 + lVar3);
      *puVar1 = *(uint64_t *)(lVar11 + 0x90);
      puVar1[1] = uVar6;
      puVar1 = (uint64_t *)(lVar10 + 0x40 + lVar3);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar9 = (uint *)(*(longlong *)(param_1 + 0x18) + lVar10);
      uVar4 = *(uint64_t *)(lVar11 + 0x30);
      uVar5 = *(uint64_t *)(lVar11 + 0x38);
      uVar6 = *(uint64_t *)(lVar11 + 0x40);
      uVar7 = *(uint64_t *)(lVar11 + 0x48);
      do {
        LOCK();
        uVar2 = *puVar9;
        *puVar9 = *puVar9 | 1;
        UNLOCK();
      } while ((uVar2 & 1) != 0);
      uStack_68 = (uint)uVar6;
      uStack_64 = (uint)((ulonglong)uVar6 >> 0x20);
      uStack_60 = (uint)uVar7;
      uStack_5c = (uint)((ulonglong)uVar7 >> 0x20);
      uStack_58 = (uint)uVar4;
      uStack_54 = (uint)((ulonglong)uVar4 >> 0x20);
      uStack_50 = (uint)uVar5;
      uStack_4c = (uint)((ulonglong)uVar5 >> 0x20);
      puVar9[1] = uStack_68;
      puVar9[2] = uStack_64;
      puVar9[3] = uStack_60;
      puVar9[4] = uStack_5c;
      puVar9[5] = uStack_58;
      puVar9[6] = uStack_54;
      puVar9[7] = uStack_50;
      puVar9[8] = uStack_4c;
      *puVar9 = 0;
      if (bVar8) {
        FUN_1802feba0(param_1,(longlong)(ulonglong)(uint)((int)puVar9 - *(int *)(param_1 + 0x18)) >>
                              8 & 0xff);
      }
      cVar12 = cVar12 + '\x01';
    } while (cVar12 < *(char *)(param_1 + 0x20));
  }
  return;
}






// 函数: void FUN_1802fbb7a(void)
void FUN_1802fbb7a(void)

{
  uint64_t *puVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RBX;
  char unaff_SIL;
  char unaff_DIL;
  uint uStackX_20;
  uint uStackX_24;
  uint uStack0000000000000028;
  uint uStack000000000000002c;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  uint uStack0000000000000038;
  uint uStack000000000000003c;
  uint64_t uStack0000000000000040;
  uint64_t uStack0000000000000048;
  uint64_t uStack0000000000000050;
  uint64_t uStack0000000000000058;
  uint64_t uStack0000000000000060;
  uint64_t uStack0000000000000068;
  uint64_t uStack0000000000000070;
  uint64_t uStack0000000000000078;
  
  do {
    lVar5 = (longlong)unaff_DIL * 0x100;
    lVar6 = (longlong)unaff_DIL * 0x1b0 + *(longlong *)(*(longlong *)(unaff_RBX + 0x208) + 0x140);
    lVar3 = *(longlong *)(unaff_RBX + 0x18);
    uStack0000000000000050 = *(uint64_t *)(lVar6 + 0x80);
    uStack0000000000000058 = *(uint64_t *)(lVar6 + 0x88);
    uStack0000000000000040 = *(uint64_t *)(lVar6 + 0x90);
    uStack0000000000000048 = *(uint64_t *)(lVar6 + 0x98);
    puVar1 = (uint64_t *)(lVar5 + 0x30 + lVar3);
    *puVar1 = uStack0000000000000040;
    puVar1[1] = uStack0000000000000048;
    puVar1 = (uint64_t *)(lVar5 + 0x40 + lVar3);
    *puVar1 = uStack0000000000000050;
    puVar1[1] = uStack0000000000000058;
    puVar4 = (uint *)(*(longlong *)(unaff_RBX + 0x18) + lVar5);
    uStack0000000000000070 = *(uint64_t *)(lVar6 + 0x30);
    uStack0000000000000078 = *(uint64_t *)(lVar6 + 0x38);
    uStack0000000000000060 = *(uint64_t *)(lVar6 + 0x40);
    uStack0000000000000068 = *(uint64_t *)(lVar6 + 0x48);
    do {
      LOCK();
      uVar2 = *puVar4;
      *puVar4 = *puVar4 | 1;
      UNLOCK();
    } while ((uVar2 & 1) != 0);
    uStackX_20 = (uint)uStack0000000000000060;
    uStackX_24 = (uint)((ulonglong)uStack0000000000000060 >> 0x20);
    uStack0000000000000028 = (uint)uStack0000000000000068;
    uStack000000000000002c = (uint)((ulonglong)uStack0000000000000068 >> 0x20);
    uStack0000000000000030 = (uint)uStack0000000000000070;
    uStack0000000000000034 = (uint)((ulonglong)uStack0000000000000070 >> 0x20);
    uStack0000000000000038 = (uint)uStack0000000000000078;
    uStack000000000000003c = (uint)((ulonglong)uStack0000000000000078 >> 0x20);
    puVar4[1] = uStackX_20;
    puVar4[2] = uStackX_24;
    puVar4[3] = uStack0000000000000028;
    puVar4[4] = uStack000000000000002c;
    puVar4[5] = uStack0000000000000030;
    puVar4[6] = uStack0000000000000034;
    puVar4[7] = uStack0000000000000038;
    puVar4[8] = uStack000000000000003c;
    *puVar4 = 0;
    if (unaff_SIL != '\0') {
      _uStack0000000000000028 = uStack0000000000000068;
      _uStack0000000000000030 = uStack0000000000000070;
      _uStack0000000000000038 = uStack0000000000000078;
      FUN_1802feba0(uStackX_20,
                    (longlong)(ulonglong)(uint)((int)puVar4 - *(int *)(unaff_RBX + 0x18)) >> 8 &
                    0xff);
    }
    unaff_DIL = unaff_DIL + '\x01';
  } while (unaff_DIL < *(char *)(unaff_RBX + 0x20));
  return;
}






// 函数: void FUN_1802fbc37(void)
void FUN_1802fbc37(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




