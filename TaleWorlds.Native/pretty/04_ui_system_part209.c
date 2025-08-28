#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 04_ui_system_part209.c - 3 个函数
// 函数: void SystemCore_8b880(int64_t param_1)
void SystemCore_8b880(int64_t param_1)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int iVar4;
  float fVar5;
  int8_t stack_array_148 [32];
  float *pfStack_128;
  char acStack_118 [4];
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  uint64_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  int8_t stack_array_a8 [16];
  int8_t stack_array_98 [48];
  uint64_t local_var_68;
  local_var_68 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_148;
  puVar1 = (uint64_t *)(param_1 + 0x12758);
  puVar2 = (uint64_t *)*puVar1;
  local_var_d8 = 0;
  local_var_d0 = 0;
  local_var_c8 = 0;
  fVar5 = 0.0;
  local_var_c0 = 0;
  local_var_b8 = 0;
  local_var_b0 = 0;
  for (; puVar2 != puVar1; puVar2 = (uint64_t *)*puVar2) {
    uVar3 = puVar2[2];
    SystemFunction_0001807673f0(uVar3,acStack_118);
    if (acStack_118[0] != '\0') {
      SystemCore_671a0(uVar3,param_1 + 0x11080,&fStack_110,&fStack_114);
      if (0.0 < fStack_110) {
        SystemFunction_0001807673c0(uVar3,stack_array_a8,0,0);
        pfStack_128 = &fStack_10c;
        iVar4 = SystemCore_85c10(param_1 + 0x12438,param_1 + 0x11080,stack_array_a8,0);
        if (iVar4 != 0) goto LAB_18078baa4;
        fStack_110 = fStack_110 * (1.0 - fStack_10c);
        fStack_114 = fStack_114 * (1.0 - fStack_10c);
      }
      if (0.001 <= fStack_114) {
        local_var_108 = 0;
        local_var_100 = 0;
        local_var_f8 = 0;
        local_var_f0 = 0;
        local_var_e8 = 0;
        local_var_e0 = 0;
        SystemFunction_000180767410(uVar3,&local_var_108);
        SystemCore_67800(&local_var_d8,&local_var_108,fStack_114);
        fVar5 = fVar5 + fStack_114;
      }
    }
  }
  if (((uint64_t *)*puVar1 != puVar1) || (*(uint64_t **)(param_1 + 0x12760) != puVar1)) {
    if (fVar5 < 1.0) {
      local_var_108 = 0;
      local_var_100 = 0;
      local_var_f8 = 0;
      local_var_f0 = 0;
      local_var_e8 = 0;
      local_var_e0 = 0;
      SystemFunction_000180746970(param_1,*(int32_t *)(param_1 + 0x11654),&local_var_108);
      SystemCore_67800(&local_var_d8,&local_var_108,1.0 - fVar5);
      fVar5 = 1.0;
    }
    SystemCore_67270(stack_array_98,&local_var_d8,1.0 / fVar5);
    SystemCore_43940(param_1,*(int32_t *)(param_1 + 0x11654),stack_array_98,1);
  }
LAB_18078baa4:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_68 ^ (uint64_t)stack_array_148);
}
uint64_t SystemCore_8baf0(int64_t param_1,int32_t param_2)
{
  uint uVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  int64_t lVar17;
  int64_t *plVar18;
  char acStackX_18 [8];
  char acStackX_20 [8];
  int64_t lStack_d0;
  int64_t lStack_c8;
  int iStack_c0;
  uint local_var_bc;
  int64_t lStack_b8;
  int64_t lStack_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int8_t stack_array_80 [28];
  int8_t local_var_64;
  int8_t stack_array_60 [28];
  int8_t local_var_44;
  plVar14 = (int64_t *)(*(int64_t *)(param_1 + 0x368) + -0x178);
  if (*(int64_t *)(param_1 + 0x368) == 0) {
    plVar14 = (int64_t *)0x0;
  }
  while (plVar13 = plVar14, plVar13 != (int64_t *)(param_1 + 0x1f0)) {
    acStackX_18[0] = '\0';
    plVar14 = (int64_t *)(plVar13[0x2f] + -0x178);
    if (plVar13[0x2f] == 0) {
      plVar14 = (int64_t *)0x0;
    }
    (**(code **)(*plVar13 + 0xa8))(plVar13,acStackX_18);
    if (acStackX_18[0] != '\0') {
      SystemCore_58620(plVar13,param_2,0);
    }
    (**(code **)(*plVar13 + 0xa8))(plVar13,acStackX_18);
    if (acStackX_18[0] == '\0') {
      UIComponent_Renderer(plVar13,0x5b);
    }
  }
  if (*(int64_t *)(param_1 + 0x6b0) != 0) {
    iStack_c0 = 0;
    SystemFunction_000180786170(*(uint64_t *)(*(int64_t *)(param_1 + 0x6b0) + 0x40),&iStack_c0);
    if (iStack_c0 != 0) {
      plVar14 = (int64_t *)(param_1 + 0x650);
      plVar13 = (int64_t *)*plVar14;
      plVar18 = plVar14;
LAB_18078bbf0:
      do {
        plVar11 = (int64_t *)0x0;
        lStack_d0 = 0;
        lStack_c8 = 0;
        acStackX_20[0] = '\0';
        bVar6 = false;
        plVar15 = plVar11;
        while( true ) {
          plVar12 = (int64_t *)0x0;
          iVar8 = (int)plVar15;
          plVar16 = (int64_t *)plVar13[2];
          if (plVar16 == (int64_t *)0x0) break;
          uVar9 = (**(code **)(*plVar16 + 0x1f0))(plVar16,acStackX_20);
          plVar15 = (int64_t *)(uVar9 & 0xffffffff);
          iVar8 = (int)uVar9;
          if ((acStackX_20[0] == '\0') || ((*(uint *)(plVar16 + 9) & 0x20000) != 0)) {
            plVar16 = (int64_t *)(*plVar13 + -0x178);
            if (*plVar13 == 0) {
              plVar16 = plVar12;
            }
            if (plVar16 != (int64_t *)0x0) {
              plVar12 = plVar16 + 0x2f;
            }
          }
          else {
            puVar2 = *(uint64_t **)(plVar16[0x3b] + 0x28);
            if ((puVar2 == (uint64_t *)0x0) || (cVar7 = (**(code **)*puVar2)(), cVar7 == '\0'))
            break;
            if (((*(uint *)(puVar2 + 0xb) >> 0xb & 1) == 0) ||
               ((*(uint *)(puVar2 + 0xb) & 0x40) != 0)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if ((*(int *)(puVar2 + 0x22) == 7) || (*(int *)(puVar2 + 0x22) == 5)) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            if ((!bVar4) && (!bVar5)) break;
            plVar12 = (int64_t *)*plVar13;
          }
          plVar13 = plVar12;
          if (plVar12 == plVar14) {
            return 0;
          }
        }
        if (plVar13 == plVar14) {
          return 0;
        }
        if (plVar13 == plVar18) {
          return 0;
        }
        if (iVar8 != 0) {
          return 0;
        }
        uVar10 = SystemCore_565c0(plVar16,&lStack_d0);
        if ((int)uVar10 != 0) {
          return uVar10;
        }
        lVar17 = *(int64_t *)(lStack_d0 + 0x28);
        if ((lVar17 == 0) && (*(int64_t *)(lStack_d0 + 0x30) == 0)) {
          return 0x1c;
        }
        if ((*(uint *)(lStack_d0 + 0x38) >> 9 & 1) == 0) {
          if ((((*(uint *)(lStack_d0 + 0x38) & 0x10080) == 0) || (lVar17 == 0)) ||
             (*(int *)(lVar17 + 0x110) != 7)) goto LAB_18078bd92;
        }
        else {
          iVar8 = SystemFunction_000180742ca0(param_1,*(int32_t *)(*(int64_t *)(lVar17 + 0x60) + 0xa4),
                                      &local_var_a8);
          if ((iVar8 == 0) &&
             (iVar8 = SystemCore_704e0(local_var_a8,
                                    *(int32_t *)(*(int64_t *)(lStack_d0 + 0x28) + 0x68)),
             iVar8 == 0)) {
LAB_18078bd92:
            if ((*(int64_t *)(lStack_d0 + 0x28) == 0) && (*(int64_t *)(lStack_d0 + 0x30) == 0)) {
              return 0x1c;
            }
            SystemFunction_000180786990(*(uint64_t *)(param_1 + 0x6b8),&lStack_c8,1);
          }
        }
        if (lStack_c8 != 0) {
LAB_18078bec8:
          if (bVar6) {
            SystemCore_560f0(plVar11,stack_array_80);
            SystemFunction_000180756200(plVar11,&lStack_98);
            SystemFunction_0001807561d0(plVar11,&lStack_90);
            UIComponent_Renderer(plVar11,4);
            *(uint *)(lStack_c8 + 0x3c) = *(uint *)(lStack_c8 + 0x3c) & 0xfffffe8f;
            *(uint *)(lStack_c8 + 0x3c) = *(uint *)(lStack_c8 + 0x3c) | 0x80;
            SystemFunction_000180786990(*(uint64_t *)(param_1 + 0x6b0),&lStack_d0,0);
            plVar11[0x3b] = lStack_d0;
            if (lStack_98 == 0) {
              if (lStack_90 != 0) {
                SystemCore_568a0(plVar11,lStack_90,plVar11[4],1,0,0);
                goto LAB_18078bf7d;
              }
            }
            else {
              SystemCore_56aa0(plVar11,lStack_98,plVar11[4],1,0,0);
LAB_18078bf7d:
              SystemCore_571f0(plVar11,stack_array_80);
              (**(code **)(*plVar11 + 0x10))(plVar11,local_var_64);
            }
            lVar3 = *plVar13;
            plVar13 = (int64_t *)0x0;
            lVar17 = lVar3 + -0x178;
            if (lVar3 == 0) {
              lVar17 = 0;
            }
            if (lVar17 != 0) {
              plVar13 = (int64_t *)(lVar17 + 0x178);
            }
          }
          else {
            SystemCore_560f0(plVar16,stack_array_60);
            SystemFunction_000180756200(plVar16,&lStack_b0);
            SystemFunction_0001807561d0(plVar16,&lStack_88);
            UIComponent_Renderer(plVar16,4);
            uVar1 = *(uint *)(plVar16 + 9);
            *(uint *)(plVar16 + 9) = uVar1 | 0x200000;
            if ((lStack_b0 == 0) || ((*(byte *)(lStack_b0 + 0x2c) & 0x80) == 0)) {
              *(uint *)(plVar16 + 9) = uVar1 & 0xfffeffff | 0x200000;
              plVar16[0x3b] = lStack_c8;
            }
            else {
              lVar17 = *(int64_t *)(lStack_b0 + 0x178);
              plVar16[0x3b] = lVar17;
              *(int64_t *)(lVar17 + 0xc0) = lStack_c8;
            }
            if (lStack_88 == 0) {
              SystemCore_56aa0(plVar16,lStack_b0,plVar16[4],1,0,0);
            }
            else {
              SystemCore_568a0(plVar16,lStack_88);
            }
            SystemCore_571f0(plVar16,stack_array_60);
            (**(code **)(*plVar16 + 0x10))(plVar16,local_var_44);
            *(uint *)(plVar16 + 9) = *(uint *)(plVar16 + 9) & 0xffdfffff;
          }
          goto LAB_18078bbf0;
        }
        if (plVar18 == plVar14) {
          plVar18 = (int64_t *)plVar18[1];
        }
        plVar11 = (int64_t *)0x0;
joined_r0x00018078bdd1:
        if ((plVar18 == plVar13) || (plVar18 == plVar14)) goto LAB_18078bea3;
        plVar15 = (int64_t *)plVar18[2];
        (**(code **)(*plVar15 + 0x1f0))(plVar15,acStackX_20);
        if (acStackX_20[0] != '\0') {
          *(uint *)(plVar15 + 9) = *(uint *)(plVar15 + 9) & 0xfffeffff;
LAB_18078be93:
          plVar18 = (int64_t *)plVar18[1];
          goto joined_r0x00018078bdd1;
        }
        if (((*(uint *)(lStack_d0 + 0x38) & 0x200) != 0) &&
           ((iVar8 = SystemFunction_000180742ca0(param_1,*(int32_t *)
                                                  (*(int64_t *)
                                                    (*(int64_t *)(lStack_d0 + 0x28) + 0x60) + 0xa4)
                                         ,&local_var_a0), iVar8 != 0 ||
            (iVar8 = SystemCore_704e0(local_var_a0,*(int32_t *)(*(int64_t *)(lStack_d0 + 0x28) + 0x68)
                                  ), iVar8 != 0)))) {
          (**(code **)(*plVar15 + 0x98))(plVar15,&local_var_bc);
          if ((local_var_bc & 0x200) != 0) {
            lStack_b8 = 0;
            SystemCore_565c0(plVar15,&lStack_b8);
            if ((*(int64_t *)(lStack_b8 + 0x28) != 0) &&
               (*(int *)(*(int64_t *)(lStack_b8 + 0x28) + 0x28) ==
                *(int *)(*(int64_t *)(lStack_d0 + 0x28) + 0x28))) goto LAB_18078beb6;
          }
          goto LAB_18078be93;
        }
LAB_18078beb6:
        SystemCore_565c0(plVar15,&lStack_c8);
        bVar6 = true;
        plVar11 = plVar15;
LAB_18078bea3:
        if (lStack_c8 != 0) goto LAB_18078bec8;
        *(uint *)(plVar16 + 9) = *(uint *)(plVar16 + 9) & 0xfffeffff;
      } while( true );
    }
  }
  return 0;
}
// WARNING: Removing unreachable block (ram,0x00018078c678)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_8c0a0(int64_t param_1,char param_2)
void SystemCore_8c0a0(int64_t param_1,char param_2)
{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  float fVar11;
  int8_t stack_array_188 [32];
  float *pfStack_168;
  char acStack_158 [4];
  float fStack_154;
  float fStack_150;
  uint local_var_14c;
  float afStack_148 [2];
  uint64_t local_var_140;
  uint64_t local_var_138;
  uint64_t local_var_130;
  uint64_t local_var_128;
  uint64_t local_var_120;
  uint64_t local_var_118;
  int8_t stack_array_110 [16];
  uint64_t local_var_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  int8_t stack_array_a0 [48];
  uint64_t local_var_70;
  local_var_70 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  if (*(char *)(param_1 + 8) != '\0') {
    if ((*(code **)(param_1 + 0x11838) != (code *)0x0) &&
       ((*(uint *)(param_1 + 0x11840) & 0x400) != 0)) {
      pfStack_168 = *(float **)(param_1 + 0x11670);
      (**(code **)(param_1 + 0x11838))(param_1,0x400,0,0);
    }
    SystemCore_72cd0(param_1 + 0x11678);
    if (*(int *)(param_1 + 0x116b4) == 0) {
      SystemCore_PerformanceMonitor(param_1 + 0x116b4);
    }
    SystemCore_PerformanceMonitor(&local_var_14c);
    uVar8 = local_var_14c;
    if (*(uint *)(param_1 + 0x116b4) <= local_var_14c) {
      uVar8 = local_var_14c - *(int *)(param_1 + 0x116b4);
    }
    *(uint *)(param_1 + 0x116b4) = local_var_14c;
    if ((*(int64_t *)(param_1 + 0x6b0) == 0) || (iVar5 = SystemFunction_000180069ee0(), iVar5 == 0)) {
      puVar1 = (uint64_t *)(param_1 + 0x12758);
      puVar3 = (uint64_t *)*puVar1;
      fVar11 = 0.0;
      local_var_140 = 0;
      local_var_138 = 0;
      local_var_130 = 0;
      local_var_128 = 0;
      local_var_120 = 0;
      local_var_118 = 0;
      for (; puVar3 != puVar1; puVar3 = (uint64_t *)*puVar3) {
        uVar4 = puVar3[2];
        SystemFunction_0001807673f0(uVar4,acStack_158);
        if (acStack_158[0] != '\0') {
          SystemCore_671a0(uVar4,param_1 + 0x11080,&fStack_150,&fStack_154);
          if (0.0 < fStack_150) {
            SystemFunction_0001807673c0(uVar4,stack_array_110,0,0);
            pfStack_168 = afStack_148;
            iVar5 = SystemCore_85c10(param_1 + 0x12438,param_1 + 0x11080,stack_array_110,0);
            if (iVar5 != 0) goto SystemCore_8c746;
            fStack_150 = fStack_150 * (1.0 - afStack_148[0]);
            fStack_154 = fStack_154 * (1.0 - afStack_148[0]);
          }
          if (0.001 <= fStack_154) {
            local_var_100 = 0;
            local_var_f8 = 0;
            local_var_f0 = 0;
            local_var_e8 = 0;
            local_var_e0 = 0;
            local_var_d8 = 0;
            SystemFunction_000180767410(uVar4,&local_var_100);
            SystemCore_67800(&local_var_140,&local_var_100,fStack_154);
            fVar11 = fVar11 + fStack_154;
          }
        }
      }
      if (((uint64_t *)*puVar1 != puVar1) || (*(uint64_t **)(param_1 + 0x12760) != puVar1)) {
        if (fVar11 < 1.0) {
          local_var_d0 = 0;
          local_var_c8 = 0;
          local_var_c0 = 0;
          local_var_b8 = 0;
          local_var_b0 = 0;
          local_var_a8 = 0;
          SystemFunction_000180746970(param_1,*(int32_t *)(param_1 + 0x11654),&local_var_d0);
          SystemCore_67800(&local_var_140,&local_var_d0,1.0 - fVar11);
          fVar11 = 1.0;
        }
        SystemCore_67270(stack_array_a0,&local_var_140,1.0 / fVar11);
        SystemCore_43940(param_1,*(int32_t *)(param_1 + 0x11654),stack_array_a0,1);
      }
      puVar1 = *(uint64_t **)(param_1 + 0x11708);
      do {
        if (puVar1 == (uint64_t *)(param_1 + 0x11708)) {
          iVar5 = SystemCore_8baf0(param_1,uVar8);
          if ((iVar5 != 0) || (iVar5 = SystemCore_8c760(param_1,uVar8), iVar5 != 0)) break;
          if (*(int64_t *)(param_1 + 0x670) != 0) {
            SystemCore_72c50(param_1 + 0x11678,1);
            iVar5 = SystemCore_89300(*(uint64_t *)(param_1 + 0x670));
            if (iVar5 != 0) break;
            SystemCore_72c50(param_1 + 0x11678,0);
          }
          if ((param_2 == '\0') || (iVar5 = SystemCore_8a600(param_1,1), iVar5 == 0)) {
            uVar7 = 0;
            uVar9 = uVar7;
            uVar10 = uVar7;
            if (*(int *)(param_1 + 0x694) < 1) goto LAB_18078c477;
            goto LAB_18078c440;
          }
          break;
        }
        puVar3 = (uint64_t *)*puVar1;
        iVar5 = SystemCore_54a30(puVar1[2],uVar8,0);
        puVar1 = puVar3;
      } while (iVar5 == 0);
    }
  }
  goto SystemCore_8c746;
  while( true ) {
    uVar8 = (int)uVar9 + 1;
    uVar9 = (uint64_t)uVar8;
    uVar10 = uVar10 + 0x38;
    if (*(int *)(param_1 + 0x694) <= (int)uVar8) break;
LAB_18078c440:
    lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 0x6a0) + 0x30 + uVar10);
    if (((lVar6 != 0) && (*(char *)(lVar6 + 0x31) != '\0')) &&
       (iVar5 = SystemCore_48290(param_1,uVar9), iVar5 != 0)) goto SystemCore_8c746;
  }
LAB_18078c477:
  if (((param_2 != '\0') && (*(int64_t *)(param_1 + 0x11838) != 0)) &&
     (((*(uint *)(param_1 + 0x11840) & 0x1000) != 0 &&
      (iVar5 = SystemCore_499f0(param_1), iVar5 != 0x39)))) {
    if (iVar5 != 0) goto SystemCore_8c746;
    if (*(char *)(param_1 + 0x6a8) != '\0') {
      pfStack_168 = *(float **)(param_1 + 0x11670);
      *(int8_t *)(param_1 + 0x6a8) = 0;
      (**(code **)(param_1 + 0x11838))(param_1,0x1000,0,0);
    }
  }
  if (0 < *(int *)(param_1 + 0x11400)) {
    lVar6 = param_1 + 0x110ed;
    do {
      *(int16_t *)(lVar6 + -1) = 0;
      lVar6 = lVar6 + 0x70;
      uVar8 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x11400));
  }
  *(int8_t *)(param_1 + 0x12440) = 0;
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    SystemCore_8c950(param_1);
  }
  lVar6 = *(int64_t *)(param_1 + 0x670);
  if ((lVar6 != 0) && (0 < *(int *)(param_1 + 0x10f70))) {
    if (param_1 != 0) {
      SystemFunction_000180743c20(param_1,7);
      lVar6 = *(int64_t *)(param_1 + 0x670);
    }
    uVar2 = *(int32_t *)(lVar6 + 0x318);
    for (puVar1 = *(uint64_t **)(param_1 + 0x10f58); puVar1 != (uint64_t *)(param_1 + 0x10f58);
        puVar1 = (uint64_t *)*puVar1) {
      lVar6 = puVar1[2];
      if (*(char *)(lVar6 + 0x212) != '\0') {
        SystemCore_5a370(lVar6,uVar2);
      }
      if (*(char *)(lVar6 + 0x426) != '\0') {
        SystemCore_5a370(lVar6 + 0x214,uVar2);
      }
    }
    if (param_1 != 0) {
// WARNING: Subroutine does not return
      SystemCoreHandler(param_1,7);
    }
  }
  iVar5 = SystemCore_43660(param_1);
  if (iVar5 == 0) {
    if (param_1 != 0) {
      SystemFunction_000180743c20(param_1,6);
    }
    puVar1 = *(uint64_t **)(param_1 + 0x10ff0);
    while (puVar1 != (uint64_t *)(param_1 + 0x10ff0)) {
      lVar6 = puVar1[2];
      puVar1 = (uint64_t *)*puVar1;
      if (((*(int64_t *)(lVar6 + 0x120) != 0) && ((*(byte *)(lVar6 + 0x11a) & 0x40) != 0)) &&
         ((*(uint *)(lVar6 + 100) >> 10 & 1) == 0)) {
        (**(code **)(lVar6 + 0x120))(lVar6 + 0xb0,0x40,0);
      }
    }
    if (param_1 != 0) {
// WARNING: Subroutine does not return
      SystemCoreHandler(param_1,6);
    }
    puVar1 = puRam0000000000012780;
    if ((lRam0000000000012770 == 0) ||
       (iVar5 = SystemCore_d0fe0(), puVar1 = puRam0000000000012780, iVar5 == 0)) {
      for (; puVar1 != (uint64_t *)0x12780; puVar1 = (uint64_t *)*puVar1) {
        lVar6 = puVar1[2];
        if ((*(code **)(lVar6 + 0x120) != (code *)0x0) && ((*(byte *)(lVar6 + 0x11a) & 4) != 0)) {
          (**(code **)(lVar6 + 0x120))(lVar6 + 0xb0,4,0);
        }
      }
      SystemCore_72cf0(0x11678,0x5f);
      if ((pcRam0000000000011838 != (code *)0x0) && ((uRam0000000000011840 & 0x800) != 0)) {
        pfStack_168 = pfRam0000000000011670;
        (*pcRam0000000000011838)(0,0x800,0,0);
      }
    }
  }
SystemCore_8c746:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_70 ^ (uint64_t)stack_array_188);
}
// WARNING: Removing unreachable block (ram,0x00018078c678)
// 函数: void SystemCore_8c0dd(int64_t param_1)
void SystemCore_8c0dd(int64_t param_1)
{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int iVar5;
  int64_t lVar6;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  code *in_R10;
  char unaff_R13B;
  uint64_t uVar10;
  float fVar11;
  float extraout_XMM0_Da;
  int32_t uVar12;
  float extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t unaff_XMM6_Da;
  float fVar13;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Dc;
  char cStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  uint local_buffer_3c;
  float local_var_40;
  uint64_t local_var_48;
  uint64_t local_buffer_50;
  uint64_t local_buffer_58;
  uint64_t local_var_60;
  uint64_t local_var_68;
  uint64_t local_var_70;
  int32_t local_var_120;
  int32_t local_var_128;
  int32_t local_var_130;
  int32_t local_var_138;
  int32_t local_var_140;
  int32_t local_var_148;
  int32_t local_var_150;
  int32_t local_var_158;
  if ((in_R10 != (code *)0x0) && ((*(uint *)(param_1 + 0x11840) & 0x400) != 0)) {
    (*in_R10)(param_1,0x400,0,0,*(uint64_t *)(param_1 + 0x11670));
  }
  SystemCore_72cd0(unaff_RBX + 0x11678);
  if (*(int *)(unaff_RBX + 0x116b4) == 0) {
    SystemCore_PerformanceMonitor(unaff_RBX + 0x116b4);
  }
  fVar11 = (float)SystemCore_PerformanceMonitor((int64_t)&local_buffer_00000038 + 4);
  uVar8 = local_buffer_3c;
  if (*(uint *)(unaff_RBX + 0x116b4) <= local_buffer_3c) {
    uVar8 = local_buffer_3c - *(int *)(unaff_RBX + 0x116b4);
  }
  *(uint *)(unaff_RBX + 0x116b4) = local_buffer_3c;
  if ((*(int64_t *)(unaff_RBX + 0x6b0) == 0) ||
     (iVar5 = SystemFunction_000180069ee0(), fVar11 = extraout_XMM0_Da, iVar5 == 0)) {
    puVar1 = (uint64_t *)(unaff_RBX + 0x12758);
    puVar3 = (uint64_t *)*puVar1;
    fVar13 = 0.0;
    local_var_48 = 0;
    local_buffer_50 = 0;
    local_buffer_58 = 0;
    local_var_60 = 0;
    local_var_68 = 0;
    local_var_70 = 0;
    local_var_128 = unaff_XMM9_Dc;
    local_var_120 = unaff_XMM9_Da;
    local_var_138 = unaff_XMM8_Dc;
    local_var_130 = unaff_XMM8_Da;
    local_var_148 = unaff_XMM7_Dc;
    local_var_140 = unaff_XMM7_Da;
    local_var_158 = unaff_XMM6_Dc;
    local_var_150 = unaff_XMM6_Da;
    for (; puVar3 != puVar1; puVar3 = (uint64_t *)*puVar3) {
      uVar4 = puVar3[2];
      fVar11 = (float)SystemFunction_0001807673f0(uVar4,&local_buffer_00000030);
      if (cStack0000000000000030 != '\0') {
        SystemCore_671a0(uVar4,unaff_RBX + 0x11080,&local_buffer_00000038,(int64_t)&local_buffer_00000030 + 4);
        if (0.0 < fStack0000000000000038) {
          SystemFunction_0001807673c0(uVar4,&local_buffer_00000078,0,0);
          iVar5 = SystemCore_85c10(unaff_RBX + 0x12438,unaff_RBX + 0x11080,&local_buffer_00000078,0,
                                &local_buffer_00000040);
          if (iVar5 != 0) goto SystemCore_8c72e;
          fStack0000000000000038 = fStack0000000000000038 * (1.0 - local_var_40);
          fStack0000000000000034 = fStack0000000000000034 * (1.0 - local_var_40);
        }
        fVar11 = fStack0000000000000038;
        if (0.001 <= fStack0000000000000034) {
          *(uint64_t *)(unaff_RBP + -0x78) = 0;
          *(uint64_t *)(unaff_RBP + -0x70) = 0;
          *(uint64_t *)(unaff_RBP + -0x68) = 0;
          *(uint64_t *)(unaff_RBP + -0x60) = 0;
          *(uint64_t *)(unaff_RBP + -0x58) = 0;
          *(uint64_t *)(unaff_RBP + -0x50) = 0;
          SystemFunction_000180767410(uVar4,unaff_RBP + -0x78);
          fVar11 = (float)SystemCore_67800(&local_buffer_00000048,unaff_RBP + -0x78,fStack0000000000000034);
          fVar13 = fVar13 + fStack0000000000000034;
        }
      }
    }
    if (((uint64_t *)*puVar1 != puVar1) || (*(uint64_t **)(unaff_RBX + 0x12760) != puVar1)) {
      if (fVar13 < 1.0) {
        uVar12 = *(int32_t *)(unaff_RBX + 0x11654);
        *(uint64_t *)(unaff_RBP + -0x48) = 0;
        *(uint64_t *)(unaff_RBP + -0x40) = 0;
        *(uint64_t *)(unaff_RBP + -0x38) = 0;
        *(uint64_t *)(unaff_RBP + -0x30) = 0;
        *(uint64_t *)(unaff_RBP + -0x28) = 0;
        *(uint64_t *)(unaff_RBP + -0x20) = 0;
        SystemFunction_000180746970(fVar11,uVar12,unaff_RBP + -0x48);
        SystemCore_67800(&local_buffer_00000048,unaff_RBP + -0x48,1.0 - fVar13);
        fVar13 = 1.0;
      }
      uVar12 = SystemCore_67270(unaff_RBP + -0x18,&local_buffer_00000048,1.0 / fVar13);
      fVar11 = (float)SystemCore_43940(uVar12,*(int32_t *)(unaff_RBX + 0x11654),unaff_RBP + -0x18,1)
      ;
    }
    puVar1 = *(uint64_t **)(unaff_RBX + 0x11708);
    do {
      if (puVar1 == (uint64_t *)(unaff_RBX + 0x11708)) {
        iVar5 = SystemCore_8baf0(fVar11,uVar8);
        if ((iVar5 != 0) || (iVar5 = SystemCore_8c760(extraout_XMM0_Da_01,uVar8), iVar5 != 0)) break;
        uVar12 = extraout_XMM0_Da_02;
        if (*(int64_t *)(unaff_RBX + 0x670) != 0) {
          SystemCore_72c50(unaff_RBX + 0x11678,1);
          iVar5 = SystemCore_89300(*(uint64_t *)(unaff_RBX + 0x670));
          if (iVar5 != 0) break;
          uVar12 = SystemCore_72c50(unaff_RBX + 0x11678,0);
        }
        if ((unaff_R13B == '\0') ||
           (iVar5 = SystemCore_8a600(uVar12,1), uVar12 = extraout_XMM0_Da_03, iVar5 == 0)) {
          uVar7 = 0;
          uVar9 = uVar7;
          uVar10 = uVar7;
          if (*(int *)(unaff_RBX + 0x694) < 1) goto LAB_18078c477;
          goto LAB_18078c440;
        }
        break;
      }
      puVar3 = (uint64_t *)*puVar1;
      iVar5 = SystemCore_54a30(puVar1[2],uVar8,0);
      puVar1 = puVar3;
      fVar11 = extraout_XMM0_Da_00;
    } while (iVar5 == 0);
  }
  goto SystemCore_8c72e;
  while( true ) {
    uVar8 = (int)uVar9 + 1;
    uVar9 = (uint64_t)uVar8;
    uVar10 = uVar10 + 0x38;
    if (*(int *)(unaff_RBX + 0x694) <= (int)uVar8) break;
LAB_18078c440:
    lVar6 = *(int64_t *)(*(int64_t *)(unaff_RBX + 0x6a0) + 0x30 + uVar10);
    if (((lVar6 != 0) && (*(char *)(lVar6 + 0x31) != '\0')) &&
       (iVar5 = SystemCore_48290(uVar12,uVar9), uVar12 = extraout_XMM0_Da_04, iVar5 != 0))
    goto SystemCore_8c72e;
  }
LAB_18078c477:
  if (((unaff_R13B != '\0') && (*(int64_t *)(unaff_RBX + 0x11838) != 0)) &&
     (((*(uint *)(unaff_RBX + 0x11840) & 0x1000) != 0 &&
      (iVar5 = SystemCore_499f0(), uVar12 = extraout_XMM0_Da_05, iVar5 != 0x39)))) {
    if (iVar5 != 0) goto SystemCore_8c72e;
    if (*(char *)(unaff_RBX + 0x6a8) != '\0') {
      *(int8_t *)(unaff_RBX + 0x6a8) = 0;
      uVar12 = (**(code **)(unaff_RBX + 0x11838))
                         (extraout_XMM0_Da_05,0x1000,0,0,*(uint64_t *)(unaff_RBX + 0x11670));
    }
  }
  if (0 < *(int *)(unaff_RBX + 0x11400)) {
    lVar6 = unaff_RBX + 0x110ed;
    do {
      *(int16_t *)(lVar6 + -1) = 0;
      lVar6 = lVar6 + 0x70;
      uVar8 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar8;
    } while ((int)uVar8 < *(int *)(unaff_RBX + 0x11400));
  }
  *(int8_t *)(unaff_RBX + 0x12440) = 0;
  if ((*(byte *)(unaff_RBX + 0x78) & 1) != 0) {
    uVar12 = SystemCore_8c950();
  }
  lVar6 = *(int64_t *)(unaff_RBX + 0x670);
  if ((lVar6 != 0) && (0 < *(int *)(unaff_RBX + 0x10f70))) {
    if (unaff_RBX != 0) {
      uVar12 = SystemFunction_000180743c20(uVar12,7);
      lVar6 = *(int64_t *)(unaff_RBX + 0x670);
    }
    uVar2 = *(int32_t *)(lVar6 + 0x318);
    for (puVar1 = *(uint64_t **)(unaff_RBX + 0x10f58);
        puVar1 != (uint64_t *)(unaff_RBX + 0x10f58); puVar1 = (uint64_t *)*puVar1) {
      lVar6 = puVar1[2];
      if (*(char *)(lVar6 + 0x212) != '\0') {
        uVar12 = SystemCore_5a370(lVar6,uVar2);
      }
      if (*(char *)(lVar6 + 0x426) != '\0') {
        uVar12 = SystemCore_5a370(lVar6 + 0x214,uVar2);
      }
    }
    if (unaff_RBX != 0) {
// WARNING: Subroutine does not return
      SystemCoreHandler(uVar12,7);
    }
  }
  iVar5 = SystemCore_43660();
  if (iVar5 == 0) {
    uVar12 = extraout_XMM0_Da_06;
    if (unaff_RBX != 0) {
      uVar12 = SystemFunction_000180743c20(extraout_XMM0_Da_06,6);
    }
    puVar1 = *(uint64_t **)(unaff_RBX + 0x10ff0);
    while (puVar1 != (uint64_t *)(unaff_RBX + 0x10ff0)) {
      lVar6 = puVar1[2];
      puVar1 = (uint64_t *)*puVar1;
      if (((*(int64_t *)(lVar6 + 0x120) != 0) && ((*(byte *)(lVar6 + 0x11a) & 0x40) != 0)) &&
         ((*(uint *)(lVar6 + 100) >> 10 & 1) == 0)) {
        uVar12 = (**(code **)(lVar6 + 0x120))(lVar6 + 0xb0,0x40,0);
      }
    }
    if (unaff_RBX != 0) {
// WARNING: Subroutine does not return
      SystemCoreHandler(uVar12,6);
    }
    puVar1 = puRam0000000000012780;
    if ((lRam0000000000012770 == 0) ||
       (iVar5 = SystemCore_d0fe0(), puVar1 = puRam0000000000012780, iVar5 == 0)) {
      for (; puVar1 != (uint64_t *)0x12780; puVar1 = (uint64_t *)*puVar1) {
        lVar6 = puVar1[2];
        if ((*(code **)(lVar6 + 0x120) != (code *)0x0) && ((*(byte *)(lVar6 + 0x11a) & 4) != 0)) {
          (**(code **)(lVar6 + 0x120))(lVar6 + 0xb0,4,0);
        }
      }
      uVar12 = SystemCore_72cf0(0x11678,0x5f);
      if ((pcRam0000000000011838 != (code *)0x0) && ((uRam0000000000011840 & 0x800) != 0)) {
        (*pcRam0000000000011838)(uVar12,0x800,0,0,uRam0000000000011670);
      }
    }
  }
SystemCore_8c72e:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x18) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Removing unreachable block (ram,0x00018078c678)