#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part199_sub002.c - 1 个函数
// 函数: void function_784ebd(uint64_t param_1,uint64_t param_2,char param_3)
void function_784ebd(uint64_t param_1,uint64_t param_2,char param_3)
{
  bool bVar1;
  bool bVar2;
  uint in_EAX;
  int iVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t lVar6;
  float *pfVar7;
  uint64_t uVar8;
  uint uVar9;
  float *pfVar10;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int iVar11;
  int *unaff_RSI;
  int32_t *puVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  char unaff_R12B;
  char unaff_R13B;
  char unaff_R14B;
  char unaff_R15B;
  int32_t uVar15;
  float fVar16;
  uint64_t uVar17;
  int8_t auVar18 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  float fVar19;
  float fVar20;
  float fVar21;
  int32_t uVar22;
  int32_t local_buffer_68;
  uint64_t local_buffer_70;
  uint64_t local_buffer_78;
  uint64_t extraout_XMM0_Qb;
  if ((uint)param_2 == in_EAX) {
    if (param_3 != '\0') goto LAB_180784edc;
  }
  else {
    *(uint *)(unaff_RBX + 0x24c) = in_EAX;
    param_2 = (uint64_t)in_EAX;
LAB_180784edc:
    _local_buffer_68 =
         (int32_t *)((uint64_t)_local_buffer_68 & 0xffffffff00000000);
    Function_6e7dee28(*(uint64_t *)(unaff_RBX + 0xa8),param_2,&local_buffer_00000068);
    *(int32_t *)(unaff_RBX + 0x244) = local_buffer_68;
    if ((*(int64_t *)(unaff_RBX + 0x270) != 0) && (iVar3 = function_7d4800(), iVar3 != 0))
    goto LAB_180785945;
    Function_cd24674d(*(uint64_t *)(unaff_RBX + 0xa8),*(int32_t *)(unaff_RBX + 0x24c),
                        &local_buffer_00000068);
    puVar12 = _local_buffer_68;
    if (_local_buffer_68[4] != 0) {
      lVar5 = *(int64_t *)(unaff_RBX + 0x270);
      if (lVar5 == 0) {
        lVar5 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xc0,&processed_var_9488_ptr,0x5d7,0);
        *(int64_t *)(unaff_RBX + 0x270) = lVar5;
        if (lVar5 == 0) goto LAB_180785945;
      }
      iVar3 = function_7d4f50(lVar5,puVar12,0xffffffff);
      if (iVar3 != 0) goto LAB_180785945;
    }
  }
  if (unaff_R14B != '\0') {
    if (*unaff_RSI == 0) {
      iVar3 = 2;
    }
    else if (*unaff_RSI == 1) {
      iVar3 = 3;
    }
    else {
      iVar3 = unaff_RSI[1];
      if (iVar3 == 0) {
        iVar3 = *(int *)(*(int64_t *)(unaff_RBX + 0xa8) + 0x1193c);
      }
    }
    _local_buffer_68 =
         (int32_t *)((uint64_t)_local_buffer_68 & 0xffffffff00000000);
    Function_6e7dee28(*(uint64_t *)(unaff_RBX + 0xa8),iVar3,&local_buffer_00000068);
    *(int32_t *)(unaff_RBX + 0x248) = local_buffer_68;
  }
  uVar22 = 0;
  if (unaff_R15B != '\0') {
    if (-80.0 < *(float *)(unaff_RBX + 0x290)) {
      uVar15 = powf();
    }
    else {
      uVar15 = 0;
    }
    *(int32_t *)(unaff_RBX + 0x224) = uVar15;
  }
  if (unaff_R12B != '\0') {
    _local_buffer_68 = (int32_t *)0x0;
    iVar3 = Function_cd24674d(*(uint64_t *)(unaff_RBX + 0xa8),*(int32_t *)(unaff_RBX + 0x27c)
                                ,&local_buffer_00000068);
    if (iVar3 != 0) goto LAB_180785945;
    uVar4 = Function_afecfdcd(*(int32_t *)(unaff_RBX + 0x2c4),
                                *(int32_t *)(unaff_RBX + 0x27c));
    uVar9 = (1 << ((byte)*_local_buffer_68 & 0x1f)) - 1;
    if ((uVar9 & uVar4) == uVar9) {
      *(int32_t **)(unaff_RBX + 600) = _local_buffer_68;
    }
    else {
      if (*(int64_t *)(unaff_RBX + 0x260) == 0) {
        lVar5 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xc0,&processed_var_9488_ptr,0x5fc,0);
        *(int64_t *)(unaff_RBX + 0x260) = lVar5;
        if (lVar5 == 0) goto LAB_180785945;
      }
      else {
        iVar3 = function_7d4800();
        if (iVar3 != 0) goto LAB_180785945;
        lVar5 = *(int64_t *)(unaff_RBX + 0x260);
      }
      iVar3 = function_7d4f50(lVar5,_local_buffer_68,uVar4);
      if (iVar3 != 0) goto LAB_180785945;
      *(uint64_t *)(unaff_RBX + 600) = *(uint64_t *)(unaff_RBX + 0x260);
    }
    if ((*(int64_t *)(unaff_RBX + 0x268) != 0) && (iVar3 = function_7d4800(), iVar3 != 0))
    goto LAB_180785945;
    lVar5 = *(int64_t *)(unaff_RBX + 600);
    if (*(int *)(lVar5 + 0x10) != 0) {
      lVar6 = *(int64_t *)(unaff_RBX + 0x268);
      if (lVar6 == 0) {
        lVar6 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xc0,&processed_var_9488_ptr,0x60c,0);
        *(int64_t *)(unaff_RBX + 0x268) = lVar6;
        if (lVar6 == 0) goto LAB_180785945;
        lVar5 = *(int64_t *)(unaff_RBX + 600);
      }
      iVar3 = function_7d4f50(lVar6,lVar5,uVar4);
      if (iVar3 != 0) goto LAB_180785945;
    }
  }
  iVar3 = 0;
  if (unaff_R13B != '\0') {
    lVar5 = unaff_RBP + -0x70;
    iVar11 = *(int *)(unaff_RBX + 0x24c);
    if (*unaff_RSI == 0) {
      if ((iVar11 == 2) || (iVar11 == 3)) {
        lVar5 = 0;
      }
      else {
        Function_cd24674d(*(uint64_t *)(unaff_RBX + 0xa8),iVar11,&local_buffer_00000068);
        if ((float)(int)_local_buffer_68[1] <= 1.0) {
          fVar19 = 1.0;
        }
        else {
          Function_cd24674d(*(uint64_t *)(unaff_RBX + 0xa8),*(int32_t *)(unaff_RBX + 0x24c),
                              &local_buffer_00000068);
          fVar19 = SQRT((float)(int)_local_buffer_68[1]);
        }
        function_7d47c0(*(int32_t *)(unaff_RBX + 0x244),1,0xc,unaff_RBP + -0x70);
        Function_cd24674d(*(uint64_t *)(unaff_RBX + 0xa8),*(int32_t *)(unaff_RBX + 0x24c),
                            &local_buffer_00000068);
        Function_75f7bba3(_local_buffer_68,1.0 / fVar19,0x3f800000);
      }
    }
    else if (*unaff_RSI == 1) {
      Function_cd24674d(*(uint64_t *)(unaff_RBX + 0xa8),iVar11,&local_buffer_00000068);
      if (-1 < (int)_local_buffer_68[0x26]) {
        uVar22 = 0x3f3504f3;
      }
      function_7d47c0(*(int32_t *)(unaff_RBX + 0x244),2,0xc);
      Function_cd24674d(*(uint64_t *)(unaff_RBX + 0xa8),*(int32_t *)(unaff_RBX + 0x24c),
                          &local_buffer_00000068);
      function_7d65f0(_local_buffer_68,*(int32_t *)(unaff_RBX + 0x280),uVar22,0x3f800000,0xc
                   );
    }
    else {
      Function_cd24674d(*(uint64_t *)(unaff_RBX + 0xa8),iVar11,&local_buffer_00000068);
      auVar18._0_8_ = function_7d47c0(0xc,0xc,0xc);
      auVar18._8_8_ = extraout_XMM0_Qb;
      if (0.0 < *(float *)(unaff_RBX + 0x2b8)) {
        iVar11 = *(int *)(unaff_RBX + 0x2c8);
        if (iVar11 == 1) {
          uVar17 = function_782f30(auVar18._0_8_,*(int32_t *)(unaff_RBX + 0x2d8));
          Function_65c5e898(uVar17,*(int32_t *)(unaff_RBX + 0x2dc));
          function_784b00();
        }
        else {
          fVar19 = 0.0;
          local_buffer_70 = 0;
          fVar20 = 0.0;
          local_buffer_78 = 0;
          *(uint64_t *)(unaff_RBP + -0x80) = 0;
          *(uint64_t *)(unaff_RBP + -0x78) = 0;
          if (0 < iVar11) {
            pfVar10 = (float *)&local_buffer_00000070;
            puVar12 = (int32_t *)(unaff_RBX + 0x2d8);
            iVar11 = iVar3;
            do {
              fVar16 = (float)puVar12[-3];
              if (0.0 < fVar16) {
                auVar18._0_8_ = function_782f30(auVar18._0_8_,*puVar12);
                auVar18._8_8_ = extraout_XMM0_Qb_00;
                *pfVar10 = (float)auVar18._0_8_ * fVar16;
                fVar21 = 1.0 - fVar20;
                if (fVar16 <= 1.0 - fVar20) {
                  fVar21 = fVar16;
                }
                fVar20 = fVar20 + fVar21;
                fVar19 = fVar19 + fVar21 * (float)auVar18._0_8_;
              }
              iVar11 = iVar11 + 1;
              puVar12 = puVar12 + 5;
              pfVar10 = pfVar10 + 1;
            } while (iVar11 < *(int *)(unaff_RBX + 0x2c8));
            if (fVar19 != 0.0) {
              if (0 < *(int *)(unaff_RBX + 0x2c8)) {
                pfVar10 = (float *)&local_buffer_00000070;
                lVar6 = unaff_RBX + 0x2d4;
                do {
                  if (*pfVar10 != 0.0) {
                    Function_65c5e898(auVar18._0_8_,*(int32_t *)(lVar6 + 8));
                    auVar18._0_8_ = function_784b00();
                    auVar18._8_8_ = extraout_XMM0_Qb_01;
                  }
                  iVar3 = iVar3 + 1;
                  pfVar10 = pfVar10 + 1;
                  lVar6 = lVar6 + 0x14;
                } while (iVar3 < *(int *)(unaff_RBX + 0x2c8));
              }
              uVar4 = *(uint *)(unaff_RBX + 0x248);
              uVar13 = (uint64_t)uVar4;
              fVar20 = 0.0;
              if (0 < (int)uVar4) {
                pfVar10 = (float *)(unaff_RBP + -0x70);
                uVar14 = (uint64_t)uVar4;
                do {
                  pfVar7 = pfVar10;
                  uVar8 = (uint64_t)*(uint *)(unaff_RBX + 0x244);
                  if (0 < (int)*(uint *)(unaff_RBX + 0x244)) {
                    do {
                      fVar20 = fVar20 + *pfVar7 * *pfVar7;
                      uVar8 = uVar8 - 1;
                      pfVar7 = pfVar7 + 1;
                    } while (uVar8 != 0);
                  }
                  pfVar10 = pfVar10 + 0xc;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              fVar16 = *(float *)(unaff_RBX + 0x2b8);
              if (0 < (int)uVar4) {
                uVar4 = *(uint *)(unaff_RBX + 0x244);
                pfVar10 = (float *)(unaff_RBP + -0x70);
                do {
                  pfVar7 = pfVar10;
                  uVar14 = (uint64_t)uVar4;
                  if (0 < (int)uVar4) {
                    do {
                      *pfVar7 = (fVar19 / SQRT(fVar20)) * fVar16 * *pfVar7;
                      uVar14 = uVar14 - 1;
                      pfVar7 = pfVar7 + 1;
                    } while (uVar14 != 0);
                  }
                  pfVar10 = pfVar10 + 0xc;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
            }
          }
        }
      }
      if (*(float *)(unaff_RBX + 0x2b8) < 1.0) {
        if ((*(int **)(unaff_RBX + 0x270) == (int *)0x0) || (**(int **)(unaff_RBX + 0x270) == 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((*(int **)(unaff_RBX + 0x268) == (int *)0x0) || (**(int **)(unaff_RBX + 0x268) == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar1) || (0.0 <= *(float *)(unaff_RBX + 0x2a0))) {
          fVar19 = 0.0;
        }
        else {
          fVar19 = -*(float *)(unaff_RBX + 0x2a0);
        }
        if ((!bVar2) || (fVar20 = *(float *)(unaff_RBX + 0x2a0), fVar20 <= 0.0)) {
          fVar20 = 0.0;
        }
        fVar16 = 1.0 - *(float *)(unaff_RBX + 0x2b8);
        if ((1.0 - fVar20) * fVar16 != 0.0) {
          function_784b00();
        }
        if ((fVar16 * fVar20 != 0.0) && (bVar2)) {
          function_784b00();
        }
        if ((fVar16 * fVar19 != 0.0) && (bVar1)) {
          function_7d6d40(*(uint64_t *)(unaff_RBX + 0x270),*(uint64_t *)(unaff_RBX + 600),
                        *(int32_t *)(unaff_RBX + 0x284),*(int32_t *)(unaff_RBX + 0x288),
                        *(int32_t *)(unaff_RBX + 0x28c));
        }
        if ((((1.0 - fVar19) * fVar16 != 0.0) && (bVar2)) && (bVar1)) {
          function_7d6d40(*(uint64_t *)(unaff_RBX + 0x270),*(uint64_t *)(unaff_RBX + 0x268),
                        *(int32_t *)(unaff_RBX + 0x284),*(int32_t *)(unaff_RBX + 0x288),
                        *(int32_t *)(unaff_RBX + 0x28c));
        }
      }
    }
    function_765da0(*(uint64_t *)(unaff_RBX + 0x218),lVar5,*(int32_t *)(unaff_RBX + 0x248),
                  *(int32_t *)(unaff_RBX + 0x244),0xc);
  }
LAB_180785945:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1d0) ^ (uint64_t)&local_buffer_00000000);
}