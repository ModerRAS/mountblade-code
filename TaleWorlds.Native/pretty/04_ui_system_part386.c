#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part386.c - 5 个函数

// 函数: void FUN_180877810(int64_t param_1,int64_t *param_2)
void FUN_180877810(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint64_t uVar8;
  int8_t auStack_98 [32];
  uint64_t uStack_78;
  uint64_t uStack_70;
  int8_t auStack_68 [40];
  uint64_t uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  if (*(int *)(param_1 + 0x98) == 0) {
    plVar1 = (int64_t *)(param_1 + 0x90);
    uVar6 = (int)*(uint *)(param_1 + 0x9c) >> 0x1f;
    if ((*(int *)(param_1 + 0x88) <= (int)((*(uint *)(param_1 + 0x9c) ^ uVar6) - uVar6)) ||
       (iVar2 = FUN_180882f00(plVar1,*(int *)(param_1 + 0x88)), iVar2 == 0)) {
      for (uVar8 = *(uint64_t *)(param_1 + 0x80);
          (*(uint64_t *)(param_1 + 0x80) <= uVar8 &&
          (uVar8 < (int64_t)*(int *)(param_1 + 0x88) * 0x10 + *(uint64_t *)(param_1 + 0x80)));
          uVar8 = uVar8 + 0x10) {
        lVar3 = (**(code **)(*param_2 + 0x270))(param_2,uVar8,1);
        if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
          SystemStateProcessor(uVar8,auStack_68);
        }
        uStack_78 = *(uint64_t *)(lVar3 + 0x38);
        uStack_70 = *(uint64_t *)(lVar3 + 0x40);
        uVar4 = FUN_18084dc20(&uStack_78);
        iVar5 = *(int *)(param_1 + 0x98) + 1;
        uVar6 = (int)*(uint *)(param_1 + 0x9c) >> 0x1f;
        iVar2 = (*(uint *)(param_1 + 0x9c) ^ uVar6) - uVar6;
        if (iVar2 < iVar5) {
          iVar7 = (int)((float)iVar2 * 1.5);
          iVar2 = iVar5;
          if (iVar5 <= iVar7) {
            iVar2 = iVar7;
          }
          if (iVar2 < 8) {
            iVar7 = 8;
          }
          else if (iVar7 < iVar5) {
            iVar7 = iVar5;
          }
          iVar2 = FUN_180882f00(plVar1,iVar7);
          if (iVar2 != 0) break;
        }
        *(uint64_t *)(*plVar1 + (int64_t)*(int *)(param_1 + 0x98) * 8) = uVar4;
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180877970(int64_t param_1,int64_t *param_2)
void FUN_180877970(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  uint *puVar2;
  int64_t *plVar3;
  int iVar4;
  uint uVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int iVar8;
  int64_t *plVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  int8_t auStack_158 [32];
  uint uStack_138;
  uint uStack_130;
  uint uStack_128;
  uint uStack_120;
  uint uStack_118;
  uint uStack_110;
  uint uStack_108;
  uint uStack_100;
  uint uStack_f8;
  uint uStack_f0;
  int iStack_e8;
  int64_t lStack_e0;
  uint64_t uStack_d8;
  int64_t lStack_d0;
  uint64_t uStack_c8;
  int32_t uStack_c0;
  int iStack_bc;
  int64_t *plStack_b8;
  int64_t *plStack_b0;
  int64_t *plStack_a8;
  int64_t *plStack_a0;
  int64_t *plStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t *plStack_80;
  uint64_t uStack_78;
  int aiStack_70 [6];
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  lStack_e0 = 0;
  uStack_d8 = 0;
  lStack_d0 = 0;
  uStack_c8 = 0;
  iStack_bc = 0;
  uStack_c0 = 0xffffffff;
  plStack_b0 = param_2;
  lStack_88 = param_1;
  for (iStack_e8 = 0;
      (lVar7 = lStack_88, -1 < iStack_e8 && (iStack_e8 < *(int *)(lStack_88 + 0xd8)));
      iStack_e8 = iStack_e8 + 1) {
    plVar6 = (int64_t *)
             (*(int64_t *)(*(int64_t *)(lStack_88 + 0xd0) + (int64_t)iStack_e8 * 8) + 0x68);
    plStack_a0 = (int64_t *)*plVar6;
    plStack_a8 = plVar6;
    if (plStack_a0 != plVar6) {
      do {
        plVar1 = plStack_a0 + 0xc;
        plStack_98 = plVar1;
        for (plVar3 = (int64_t *)plStack_a0[0xc]; plStack_b8 = plVar3, plVar3 != plVar1;
            plVar3 = (int64_t *)*plVar3) {
          plVar6 = (int64_t *)0x0;
          puVar2 = (uint *)(plVar3 + 2);
          lVar7 = (**(code **)(*param_2 + 0x268))(param_2,plVar3 + 4,1);
          if (lVar7 == 0) {
            uStack_f0 = (uint)*(byte *)((int64_t)plVar3 + 0x2f);
            uStack_f8 = (uint)*(byte *)((int64_t)plVar3 + 0x2e);
            uStack_100 = (uint)*(byte *)((int64_t)plVar3 + 0x2d);
            uStack_108 = (uint)*(byte *)((int64_t)plVar3 + 0x2c);
            uStack_110 = (uint)*(byte *)((int64_t)plVar3 + 0x2b);
            uStack_118 = (uint)*(byte *)((int64_t)plVar3 + 0x2a);
            uStack_120 = (uint)*(byte *)((int64_t)plVar3 + 0x29);
            uStack_128 = (uint)*(byte *)(plVar3 + 5);
            uStack_130 = (uint)*(ushort *)((int64_t)plVar3 + 0x26);
            uStack_138 = (uint)*(ushort *)((int64_t)plVar3 + 0x24);
                    // WARNING: Subroutine does not return
            SystemValidationProcessor(&plStack_80,0x27,&unknown_var_8960_ptr,(int)plVar3[4]);
          }
          if ((iStack_bc != 0) && ((int)uStack_d8 != 0)) {
            iVar4 = *(int *)(lStack_e0 +
                            (int64_t)
                            (int)((*(uint *)((int64_t)plVar3 + 0x1c) ^ *(uint *)(plVar3 + 3) ^
                                   *(uint *)((int64_t)plVar3 + 0x14) ^ *puVar2) &
                                 (int)uStack_d8 - 1U) * 4);
            while (iVar4 != -1) {
              plVar9 = (int64_t *)((int64_t)iVar4 * 0x20 + lStack_d0);
              if ((*plVar9 == *(int64_t *)puVar2) && (plVar9[1] == plVar3[3])) {
                plVar6 = (int64_t *)plVar9[3];
                break;
              }
              iVar4 = (int)plVar9[2];
            }
          }
          lStack_90 = lVar7;
          if (plVar6 == (int64_t *)0x0) {
            uStack_128 = CONCAT31(uStack_128._1_3_,1);
            uStack_130 = uStack_130 & 0xffffff00;
            uStack_138 = 0;
            plVar6 = (int64_t *)
                     SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x10,&unknown_var_5856_ptr,0xa0d
                                  );
            if (plVar6 == (int64_t *)0x0) goto LAB_180877e87;
            *plVar6 = 0;
            plVar6[1] = 0;
            plStack_b8 = plVar6;
            iVar4 = FUN_180852bb0(&lStack_e0,puVar2,&plStack_b8);
            if (iVar4 == 0) goto LAB_180877bb2;
LAB_180877c01:
            if (iVar4 != 0) goto LAB_180877e87;
          }
          else {
LAB_180877bb2:
            uVar10 = (int)*(uint *)((int64_t)plVar6 + 0xc) >> 0x1f;
            iVar8 = (int)plVar6[1] + 1;
            iVar4 = (*(uint *)((int64_t)plVar6 + 0xc) ^ uVar10) - uVar10;
            if (iVar4 < iVar8) {
              iVar11 = (int)((float)iVar4 * 1.5);
              iVar4 = iVar8;
              if (iVar8 <= iVar11) {
                iVar4 = iVar11;
              }
              if (iVar4 < 8) {
                iVar11 = 8;
              }
              else if (iVar11 < iVar8) {
                iVar11 = iVar8;
              }
              iVar4 = FUN_180747f10(plVar6,iVar11);
              if (iVar4 != 0) goto LAB_180877c01;
            }
            *(int64_t *)(*plVar6 + (int64_t)(int)plVar6[1] * 8) = lStack_90;
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          }
          plVar6 = plStack_a8;
          param_2 = plStack_b0;
          if (plVar3 == plVar1) break;
        }
      } while ((plStack_a0 != plVar6) &&
              (plStack_a0 = (int64_t *)*plStack_a0, plStack_a0 != plVar6));
    }
  }
  bVar12 = 0x37 < *(uint *)(lStack_88 + 0x218);
  iVar4 = FUN_180868a80(bVar12,&lStack_e0,lStack_88 + 0xe0,param_2);
  if ((((iVar4 != 0) || (iVar4 = FUN_180868a80(bVar12,&lStack_e0,lVar7 + 0xf0,param_2), iVar4 != 0))
      || (iVar4 = FUN_180868a80(bVar12,&lStack_e0,lVar7 + 0x150,param_2), iVar4 != 0)) ||
     ((iVar4 = FUN_180868a80(bVar12,&lStack_e0,lVar7 + 0x160,param_2), iVar4 != 0 ||
      (iVar4 = FUN_180868a80(bVar12,&lStack_e0,lVar7 + 0x170,param_2), iVar4 != 0)))) {
LAB_180877e87:
    iVar4 = SystemStatusChecker(&lStack_e0);
    if ((iVar4 == 0) && (iVar4 = FUN_1808744f0(&lStack_d0), iVar4 == 0)) {
      uStack_c0 = 0xffffffff;
      iStack_bc = 0;
    }
    FUN_1808744f0(&lStack_d0);
    SystemStatusChecker(&lStack_e0);
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_158);
  }
  plStack_80 = &lStack_e0;
  uStack_78 = 0xffffffffffffffff;
  aiStack_70[0] = -1;
  FUN_1808741f0(&lStack_e0,&uStack_78,aiStack_70);
  if (aiStack_70[0] == -1) goto LAB_180877e87;
  plVar6 = *(int64_t **)(plStack_80[2] + 0x18 + (int64_t)aiStack_70[0] * 0x20);
  uVar10 = *(uint *)((int64_t)plVar6 + 0xc);
  uVar5 = -uVar10;
  if (-1 < (int)uVar10) {
    uVar5 = uVar10;
  }
  if ((int)uVar5 < 0) {
    if (0 < (int)plVar6[1]) goto LAB_180877dfe;
    if ((0 < (int)uVar10) && (*plVar6 != 0)) {
      uStack_138 = CONCAT31(uStack_138._1_3_,1);
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar6,&unknown_var_8432_ptr,0x100);
    }
    *plVar6 = 0;
    *(int32_t *)((int64_t)plVar6 + 0xc) = 0;
    uVar10 = 0;
  }
  iVar4 = (int)plVar6[1];
  if (iVar4 < 0) {
                    // WARNING: Subroutine does not return
    memset(*plVar6 + (int64_t)iVar4 * 8,0,(int64_t)-iVar4 << 3);
  }
  *(int32_t *)(plVar6 + 1) = 0;
  if (0 < (int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f))) {
    FUN_180747f10(plVar6,0);
  }
LAB_180877dfe:
  uStack_138 = CONCAT31(uStack_138._1_3_,1);
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar6,&unknown_var_5856_ptr,0xa71);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180877f00(int64_t param_1,int64_t *param_2)
void FUN_180877f00(int64_t param_1,int64_t *param_2)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int iVar4;
  int32_t *puVar5;
  int8_t auStack_c8 [32];
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  uint uStack_78;
  uint uStack_70;
  uint uStack_68;
  uint uStack_60;
  int8_t auStack_58 [40];
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  puVar5 = *(int32_t **)(param_1 + 0x80);
  while ((*(int32_t **)(param_1 + 0x80) <= puVar5 &&
         (puVar5 < *(int32_t **)(param_1 + 0x80) + (int64_t)*(int *)(param_1 + 0x88) * 4))) {
    lVar3 = (**(code **)(*param_2 + 0x270))(param_2,puVar5,1);
    if (lVar3 == 0) {
      uStack_60 = (uint)*(byte *)((int64_t)puVar5 + 0xf);
      uStack_68 = (uint)*(byte *)((int64_t)puVar5 + 0xe);
      uStack_70 = (uint)*(byte *)((int64_t)puVar5 + 0xd);
      uStack_78 = (uint)*(byte *)(puVar5 + 3);
      uStack_80 = (uint)*(byte *)((int64_t)puVar5 + 0xb);
      uStack_88 = (uint)*(byte *)((int64_t)puVar5 + 10);
      uStack_90 = (uint)*(byte *)((int64_t)puVar5 + 9);
      uStack_98 = (uint)*(byte *)(puVar5 + 2);
      uStack_a0 = (uint)*(ushort *)((int64_t)puVar5 + 6);
      uStack_a8 = (uint)*(ushort *)(puVar5 + 1);
                    // WARNING: Subroutine does not return
      SystemValidationProcessor(auStack_58,0x27,&unknown_var_8960_ptr,*puVar5);
    }
    lVar3 = (**(code **)(*param_2 + 0x278))(param_2,lVar3 + 0x38,1);
    if (lVar3 == 0) {
      iVar2 = (int)((int64_t)puVar5 - *(int64_t *)(param_1 + 0x80) >> 4);
      if ((iVar2 < 0) || (iVar1 = *(int *)(param_1 + 0x88), iVar1 <= iVar2)) break;
      iVar4 = (iVar1 - iVar2) + -1;
      if (0 < iVar4) {
        lVar3 = (int64_t)iVar2 * 0x10 + *(int64_t *)(param_1 + 0x80);
                    // WARNING: Subroutine does not return
        memmove(lVar3,lVar3 + 0x10,(int64_t)iVar4 << 4);
      }
      *(int *)(param_1 + 0x88) = iVar1 + -1;
    }
    else {
      puVar5 = puVar5 + 4;
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808780d0(int64_t param_1,int64_t *param_2)
void FUN_1808780d0(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  ushort uVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint uVar6;
  int32_t uVar7;
  int8_t auStack_58 [32];
  int8_t auStack_38 [40];
  uint64_t uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_58;
  lVar4 = (**(code **)(*param_2 + 0x110))(param_2,param_1 + 0x30,1);
  if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
    SystemStateProcessor(param_1 + 0x30,auStack_38);
  }
  plVar1 = (int64_t *)(lVar4 + 0x20);
  plVar5 = *(int64_t **)(lVar4 + 0x20);
  if (plVar5 != plVar1) {
    while ((int)plVar5[8] != *(int *)(param_1 + 0x40)) {
      if ((plVar5 == plVar1) || (plVar5 = (int64_t *)*plVar5, plVar5 == plVar1))
      goto LAB_18087811f;
    }
    if (plVar5 != (int64_t *)0x0) {
      uVar2 = *(ushort *)((int64_t)plVar5 + 0x4a);
      *(uint *)(param_1 + 0x44) = (uint)uVar2;
      if (uVar2 == 1) {
        lVar4 = FUN_180869ab0(param_2,plVar5 + 6);
      }
      else {
        lVar4 = 0;
      }
      iVar3 = *(int *)(param_1 + 0x48);
      if (iVar3 == 0) {
        if ((uVar2 != 0) && (uVar2 == 1)) {
          uVar7 = *(int32_t *)(param_1 + 0x50);
          if (lVar4 != 0) {
            uVar7 = func_0x0001808c6590(lVar4,uVar7);
          }
          *(int32_t *)(param_1 + 0x50) = uVar7;
          uVar7 = *(int32_t *)(param_1 + 0x54);
          if (lVar4 != 0) {
            uVar7 = func_0x0001808c6590(lVar4,uVar7);
          }
          *(int32_t *)(param_1 + 0x54) = uVar7;
          uVar7 = *(int32_t *)(param_1 + 0x58);
          if (lVar4 != 0) {
            uVar7 = func_0x0001808c6590(lVar4,uVar7);
          }
          *(int32_t *)(param_1 + 0x58) = uVar7;
        }
      }
      else if (iVar3 == 1) {
        if (uVar2 == 0) {
          *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x54);
        }
        else if (uVar2 == 1) {
          uVar6 = *(uint *)(param_1 + 0x50);
          if (lVar4 != 0) {
            uVar6 = func_0x0001808c6590(lVar4,uVar6);
          }
          *(uint *)(param_1 + 0x58) = uVar6 ^ 0x80000000;
        }
      }
      else if (iVar3 == 2) {
        if (uVar2 == 0) {
          *(int32_t *)(param_1 + 0x78) = *(int32_t *)(param_1 + 0x54);
        }
        else if (uVar2 == 1) {
          uVar6 = *(uint *)(param_1 + 0x54);
          if (lVar4 != 0) {
            uVar6 = func_0x0001808c6590(lVar4,uVar6);
          }
          *(uint *)(param_1 + 0x78) = uVar6 ^ 0x80000000;
        }
      }
    }
  }
LAB_18087811f:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_58);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808782a0(int64_t param_1,int64_t *param_2,int64_t *param_3)
void FUN_1808782a0(int64_t param_1,int64_t *param_2,int64_t *param_3)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int32_t *puVar3;
  uint *puVar4;
  uint64_t uVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int64_t lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int *piVar15;
  int iVar16;
  int64_t *plVar17;
  bool bVar18;
  int8_t auStack_118 [32];
  uint uStack_f8;
  uint uStack_f0;
  uint uStack_e8;
  uint uStack_e0;
  uint uStack_d8;
  uint uStack_d0;
  uint uStack_c8;
  uint uStack_c0;
  uint uStack_b8;
  uint uStack_b0;
  int aiStack_a8 [2];
  int64_t lStack_a0;
  uint64_t uStack_98;
  int64_t alStack_90 [2];
  int32_t uStack_80;
  int iStack_7c;
  int64_t alStack_78 [2];
  int64_t *plStack_68;
  uint64_t uStack_60;
  int aiStack_58 [6];
  uint64_t uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  lStack_a0 = 0;
  uStack_98 = 0;
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  uStack_80 = 0xffffffff;
  iStack_7c = 0;
  for (iVar13 = 0; (-1 < iVar13 && (iVar13 < *(int *)(param_1 + 0x198))); iVar13 = iVar13 + 1) {
    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 400) + (int64_t)iVar13 * 8);
    if (*(int *)(lVar2 + 0x48) == 2) {
      puVar1 = (uint64_t *)(lVar2 + 0x60);
      lVar7 = (**(code **)(*param_3 + 0x318))(param_3,puVar1,1);
      if (lVar7 == 0) {
        uStack_b0 = (uint)*(byte *)(lVar2 + 0x6f);
        uStack_b8 = (uint)*(byte *)(lVar2 + 0x6e);
        uStack_c0 = (uint)*(byte *)(lVar2 + 0x6d);
        uStack_c8 = (uint)*(byte *)(lVar2 + 0x6c);
        uStack_d0 = (uint)*(byte *)(lVar2 + 0x6b);
        uStack_d8 = (uint)*(byte *)(lVar2 + 0x6a);
        uStack_e0 = (uint)*(byte *)(lVar2 + 0x69);
        uStack_e8 = (uint)*(byte *)(lVar2 + 0x68);
        uStack_f0 = (uint)*(ushort *)(lVar2 + 0x66);
        uStack_f8 = (uint)*(ushort *)(lVar2 + 100);
                    // WARNING: Subroutine does not return
        SystemValidationProcessor(&plStack_68,0x27,&unknown_var_8960_ptr,*(int32_t *)puVar1);
      }
      if (*(int *)(lVar7 + 0x60) != 0x1f) goto LAB_180878734;
      aiStack_a8[0] = 0;
      alStack_78[0] = lVar2 + 0x70;
      plVar17 = alStack_78;
      aiStack_a8[1] = 1;
      alStack_78[1] = lVar2 + 0x74;
      piVar15 = aiStack_a8;
      iVar16 = 0;
      do {
        lVar9 = *(int64_t *)(*(int64_t *)(lVar7 + 0x48) + (int64_t)*piVar15 * 8);
        if ((lVar9 == 0) || (*(int *)(lVar9 + 0x10) != 0)) goto LAB_180878734;
        puVar3 = (int32_t *)*plVar17;
        iVar16 = iVar16 + 1;
        piVar15 = piVar15 + 1;
        plVar17 = plVar17 + 1;
        *puVar3 = *(int32_t *)(lVar9 + 0x18);
      } while (iVar16 < 2);
      plStack_68 = (int64_t *)*puVar1;
      uStack_60 = *(uint64_t *)(lVar2 + 0x68);
      iVar16 = FUN_18087dd70(&lStack_a0,&plStack_68,lVar2 + 0x10);
      if (iVar16 != 0) goto LAB_180878734;
      puVar8 = (uint64_t *)SystemCoreProcessor();
      uVar5 = puVar8[1];
      *puVar1 = *puVar8;
      *(uint64_t *)(lVar2 + 0x68) = uVar5;
    }
  }
  if (iStack_7c != 0) {
    uStack_60 = 0xffffffffffffffff;
    aiStack_58[0] = -1;
    plStack_68 = param_2;
    FUN_1808741f0(param_2,&uStack_60,aiStack_58);
    lVar2 = alStack_90[0];
    aiStack_a8[0] = aiStack_58[0];
    if (aiStack_58[0] != -1) {
      iVar13 = (int)uStack_60;
LAB_1808784c1:
      alStack_78[0] = (int64_t)aiStack_a8[0] * 0x20;
      lVar7 = *(int64_t *)(alStack_78[0] + 0x18 + plStack_68[2]);
      puVar14 = *(uint **)(lVar7 + 0x48);
LAB_1808784e0:
      do {
        puVar4 = *(uint **)(lVar7 + 0x48);
        if ((puVar14 < puVar4) || (puVar4 + (int64_t)*(int *)(lVar7 + 0x50) * 4 <= puVar14))
        goto LAB_1808786c3;
        if ((int)uStack_98 != 0) {
          iVar16 = *(int *)(lStack_a0 +
                           (int64_t)
                           (int)((int)uStack_98 - 1U &
                                (puVar14[3] ^ puVar14[2] ^ puVar14[1] ^ *puVar14)) * 4);
          while (iVar16 != -1) {
            lVar9 = (int64_t)iVar16;
            if ((*(int64_t *)(lVar2 + lVar9 * 0x24) == *(int64_t *)puVar14) &&
               (*(int64_t *)(lVar2 + 8 + lVar9 * 0x24) == *(int64_t *)(puVar14 + 2))) {
              if (iVar16 != -1) {
                iVar16 = (int)((int64_t)puVar14 - (int64_t)puVar4 >> 4);
                if ((iVar16 < 0) || (iVar6 = *(int *)(lVar7 + 0x50), iVar6 <= iVar16))
                goto LAB_180878734;
                iVar11 = (iVar6 - iVar16) + -1;
                if (0 < iVar11) {
                    // WARNING: Subroutine does not return
                  memmove(puVar4 + (int64_t)iVar16 * 4,puVar4 + (int64_t)iVar16 * 4 + 4,
                          (int64_t)iVar11 << 4);
                }
                *(int *)(lVar7 + 0x50) = iVar6 + -1;
                uVar12 = (int)*(uint *)(lVar7 + 100) >> 0x1f;
                iVar6 = (*(uint *)(lVar7 + 100) ^ uVar12) - uVar12;
                iVar16 = *(int *)(lVar7 + 0x60) + 1;
                if (iVar6 < iVar16) {
                  iVar11 = (int)((float)iVar6 * 1.5);
                  iVar6 = iVar16;
                  if (iVar16 <= iVar11) {
                    iVar6 = iVar11;
                  }
                  if (iVar6 < 4) {
                    iVar11 = 4;
                  }
                  else if (iVar11 < iVar16) {
                    iVar11 = iVar16;
                  }
                  if (iVar11 < *(int *)(lVar7 + 0x60)) goto LAB_180878734;
                  lVar10 = 0;
                  if (iVar11 != 0) {
                    if (0x3ffffffe < iVar11 * 0x10 - 1U) goto LAB_180878734;
                    uStack_e8 = CONCAT31(uStack_e8._1_3_,1);
                    uStack_f0 = uStack_f0 & 0xffffff00;
                    uStack_f8 = 0;
                    lVar10 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar11 * 0x10,
                                           &unknown_var_8432_ptr,0xf4);
                    if (lVar10 == 0) goto LAB_180878734;
                    if (*(int *)(lVar7 + 0x60) != 0) {
                    // WARNING: Subroutine does not return
                      memcpy(lVar10,*(uint64_t *)(lVar7 + 0x58),
                             (int64_t)*(int *)(lVar7 + 0x60) << 4);
                    }
                  }
                  if ((0 < *(int *)(lVar7 + 100)) && (*(int64_t *)(lVar7 + 0x58) != 0)) {
                    uStack_f8 = CONCAT31(uStack_f8._1_3_,1);
                    // WARNING: Subroutine does not return
                    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                  *(int64_t *)(lVar7 + 0x58),&unknown_var_8432_ptr,0x100);
                  }
                  *(int64_t *)(lVar7 + 0x58) = lVar10;
                  *(int *)(lVar7 + 100) = iVar11;
                }
                puVar1 = (uint64_t *)(lVar2 + 0x14 + lVar9 * 0x24);
                uVar5 = puVar1[1];
                puVar8 = (uint64_t *)
                         ((int64_t)*(int *)(lVar7 + 0x60) * 0x10 + *(int64_t *)(lVar7 + 0x58));
                *puVar8 = *puVar1;
                puVar8[1] = uVar5;
                *(int *)(lVar7 + 0x60) = *(int *)(lVar7 + 0x60) + 1;
                goto LAB_1808784e0;
              }
              break;
            }
            iVar16 = *(int *)(lVar2 + 0x10 + lVar9 * 0x24);
          }
        }
        puVar14 = puVar14 + 4;
      } while( true );
    }
  }
LAB_180878734:
  iVar13 = SystemStatusChecker(&lStack_a0);
  if ((iVar13 == 0) && (iVar13 = FUN_1808745b0(alStack_90), iVar13 == 0)) {
    uStack_80 = 0xffffffff;
    iStack_7c = 0;
  }
  FUN_1808745b0(alStack_90);
  SystemStatusChecker(&lStack_a0);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_118);
LAB_1808786c3:
  if ((aiStack_a8[0] != -1) &&
     (aiStack_a8[0] = *(int *)(alStack_78[0] + 0x10 + plStack_68[2]), aiStack_a8[0] != -1))
  goto LAB_1808784c1;
  iVar16 = iVar13 + 1;
  bVar18 = iVar13 != -1;
  iVar13 = 0;
  if (bVar18) {
    iVar13 = iVar16;
  }
  if (iVar13 != (int)plStack_68[1]) {
    lVar7 = (int64_t)iVar13;
    do {
      if (*(int *)(*plStack_68 + lVar7 * 4) != -1) {
        aiStack_a8[0] = *(int *)(*plStack_68 + (int64_t)iVar13 * 4);
        goto LAB_180878722;
      }
      iVar13 = iVar13 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 != (int)plStack_68[1]);
  }
  aiStack_a8[0] = -1;
  iVar13 = -1;
LAB_180878722:
  if (aiStack_a8[0] == -1) goto LAB_180878734;
  goto LAB_1808784c1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



