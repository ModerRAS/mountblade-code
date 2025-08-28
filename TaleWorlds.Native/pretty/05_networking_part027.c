/* 函数别名定义: MemoryCacheController */
#define MemoryCacheController MemoryCacheController


/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part027.c - 3 个函数

// 函数: void FUN_180856ec0(int64_t param_1,uint64_t *param_2)
void FUN_180856ec0(int64_t param_1,uint64_t *param_2)

{
  int iVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  char cVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int32_t *puVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int64_t *plVar18;
  int64_t *plVar19;
  int iVar20;
  int64_t *plVar21;
  int *piVar22;
  int64_t *plVar23;
  int iVar24;
  int8_t auStack_d8 [32];
  uint64_t uStack_b8;
  uint64_t *******pppppppuStack_a8;
  uint64_t *******pppppppuStack_a0;
  int iStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  uint64_t *puStack_80;
  int64_t *plStack_78;
  uint64_t uStack_70;
  int aiStack_68 [8];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  lVar11 = *(int64_t *)(param_1 + 0x110);
  lVar7 = lVar11;
  puStack_80 = param_2;
  if (lVar11 != 0) {
    lVar7 = (**(code **)(*(int64_t *)*param_2 + 0x2f0))((int64_t *)*param_2,lVar11 + 0x10,1);
    if (lVar7 == 0) {
                    // WARNING: Subroutine does not return
      SystemController(lVar11 + 0x10,&plStack_78);
    }
    *(int64_t *)(param_1 + 0x110) = lVar7;
  }
  if (lVar7 != 0) {
    plVar21 = param_2 + 0x51;
    if (param_2 == (uint64_t *)0xffffffffffffff08) {
      plVar21 = (int64_t *)0x0;
    }
    if (plVar21 != (int64_t *)0x0) {
      if (((*(int *)((int64_t)plVar21 + 0x24) != 0) && ((int)plVar21[1] != 0)) &&
         (iVar6 = *(int *)(*plVar21 +
                          (int64_t)
                          (int)((*(uint *)(lVar7 + 0x1c) ^ *(uint *)(lVar7 + 0x18) ^
                                 *(uint *)(lVar7 + 0x14) ^ *(uint *)(lVar7 + 0x10)) &
                               (int)plVar21[1] - 1U) * 4), iVar6 != -1)) {
        lVar2 = plVar21[2];
        do {
          lVar8 = (int64_t)iVar6;
          if ((*(int64_t *)(lVar2 + lVar8 * 0x18) == *(int64_t *)(lVar7 + 0x10)) &&
             (*(int64_t *)(lVar2 + 8 + lVar8 * 0x18) == *(int64_t *)(lVar7 + 0x18)))
          goto LAB_180856fce;
          iVar6 = *(int *)(lVar2 + 0x10 + lVar8 * 0x18);
        } while (iVar6 != -1);
      }
      iVar6 = -1;
LAB_180856fce:
      if (iVar6 != -1) {
        puVar9 = (int32_t *)FUN_18084cde0(*(uint64_t *)(param_1 + 0x110),&plStack_78);
        *(int32_t *)(param_1 + 0x10c) = *puVar9;
        if (*(char *)(param_1 + 0x13c) != '\0') {
          plVar21 = (int64_t *)(param_1 + 0x70);
          if (((int64_t *)*plVar21 == plVar21) && (*(int64_t **)(param_1 + 0x78) == plVar21)) {
            iStack_98 = *(int *)(param_1 + 0x30);
            lVar7 = *(int64_t *)(param_1 + 0x38);
          }
          else {
            iStack_98 = *(int *)(*(int64_t *)(param_1 + 0x78) + 0x18);
            lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 0x78) + 0x20);
          }
          if (lVar7 != 0) {
            *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
          }
          pppppppuStack_a8 = &pppppppuStack_a8;
          plVar18 = (int64_t *)(*(int64_t *)(param_1 + 0x110) + 0x58);
          pppppppuStack_a0 = &pppppppuStack_a8;
          uStack_90 = 0;
          uStack_88 = 0;
          uStack_70 = (int64_t *)*plVar18;
          for (plVar21 = uStack_70;
              ((plVar21 != plVar18 && ((int)plVar21[2] != iStack_98)) && (plVar21 != plVar18));
              plVar21 = (int64_t *)*plVar21) {
          }
          plStack_78 = plVar18;
          RenderingSystem_ShaderManager0(&uStack_90,0);
          *pppppppuStack_a0 = pppppppuStack_a8;
          pppppppuStack_a8[1] = pppppppuStack_a0;
          pppppppuStack_a0 = &pppppppuStack_a8;
          pppppppuStack_a8 = &pppppppuStack_a8;
          if (lVar7 != 0) {
            piVar22 = (int *)(lVar7 + 0x10);
            *piVar22 = *piVar22 + -1;
            if (*piVar22 == 0) {
              uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
                    // WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar7,&rendering_buffer_2208_ptr,0x76);
            }
          }
          if (((plVar21 == plVar18) ||
              (((int)plVar21[4] != 0 &&
               (cVar5 = FUN_1808b0820(plVar21 + 3,*(uint64_t *)(param_1 + 0x160)), cVar5 == '\0'))
              )) && (iVar6 = FUN_1808552c0(param_1), iVar6 != 0)) goto LAB_180857786;
        }
        iVar6 = FUN_1808560c0(param_1);
        if (iVar6 != 0) goto LAB_180857786;
        lVar7 = *(int64_t *)(param_1 + 0x110);
        if (*(int *)(param_1 + 0x34) - 4U < 2) {
          plVar21 = *(int64_t **)(param_1 + 0x38);
          lVar2 = *plVar21;
          if (lVar2 != 0) {
            plStack_78 = *(int64_t **)(lVar2 + 0x10);
            uStack_70 = *(int64_t **)(lVar2 + 0x18);
            lVar7 = func_0x00018084d100(lVar7,&plStack_78);
            *plVar21 = lVar7;
            lVar7 = *(int64_t *)(param_1 + 0x110);
          }
        }
        for (puVar3 = *(uint64_t **)(param_1 + 0x70); puVar3 != (uint64_t *)(param_1 + 0x70);
            puVar3 = (uint64_t *)*puVar3) {
          lVar7 = *(int64_t *)(param_1 + 0x110);
          if (*(int *)((int64_t)puVar3 + 0x1c) - 4U < 2) {
            plVar21 = (int64_t *)puVar3[4];
            lVar2 = *plVar21;
            if (lVar2 != 0) {
              plStack_78 = *(int64_t **)(lVar2 + 0x10);
              uStack_70 = *(int64_t **)(lVar2 + 0x18);
              lVar7 = func_0x00018084d100(lVar7,&plStack_78);
              *plVar21 = lVar7;
              lVar7 = *(int64_t *)(param_1 + 0x110);
            }
          }
          if (puVar3 == (uint64_t *)(param_1 + 0x70)) break;
        }
        if (*(int *)(param_1 + 0x4c) - 4U < 2) {
          plVar21 = *(int64_t **)(param_1 + 0x50);
          lVar2 = *plVar21;
          if (lVar2 != 0) {
            plStack_78 = *(int64_t **)(lVar2 + 0x10);
            uStack_70 = *(int64_t **)(lVar2 + 0x18);
            lVar7 = func_0x00018084d100(lVar7,&plStack_78);
            *plVar21 = lVar7;
            lVar7 = *(int64_t *)(param_1 + 0x110);
          }
        }
        lVar2 = *(int64_t *)(param_1 + 0x58);
        if (lVar2 != 0) {
          plStack_78 = *(int64_t **)(lVar2 + 0x10);
          uStack_70 = *(int64_t **)(lVar2 + 0x18);
          uVar10 = func_0x00018084d100(lVar7,&plStack_78);
          *(uint64_t *)(param_1 + 0x58) = uVar10;
          lVar7 = *(int64_t *)(param_1 + 0x110);
        }
        iVar6 = FUN_180859e40(param_1,lVar11 + 0x38,lVar7 + 0x38,0);
        if (((iVar6 != 0) ||
            (iVar6 = FUN_180859e40(param_1,lVar11 + 0x48,*(int64_t *)(param_1 + 0x110) + 0x48,1),
            iVar6 != 0)) ||
           ((iVar6 = FUN_18085d460(param_1,lVar11 + 0x38,*(int64_t *)(param_1 + 0x110) + 0x38,0),
            iVar6 != 0 ||
            (iVar6 = FUN_18085d460(param_1,lVar11 + 0x48,*(int64_t *)(param_1 + 0x110) + 0x48,1),
            iVar6 != 0)))) goto LAB_180857786;
        puVar3 = (uint64_t *)(lVar11 + 0x68);
        iVar6 = FUN_180856280(param_1,puVar3,*(int64_t *)(param_1 + 0x110) + 0x68);
        if (iVar6 != 0) goto LAB_180857786;
        plVar18 = (int64_t *)(*(int64_t *)(param_1 + 0x110) + 0x68);
        plVar21 = (int64_t *)*plVar18;
        if (plVar21 != plVar18) {
          puVar4 = (uint64_t *)*puVar3;
joined_r0x0001808572dd:
          do {
            if (puVar4 != puVar3) {
              if ((puVar4[2] != plVar21[2]) || (puVar4[3] != plVar21[3])) {
                if (puVar4 != puVar3) {
                  puVar4 = (uint64_t *)*puVar4;
                }
                goto joined_r0x0001808572dd;
              }
              if ((puVar4 != (uint64_t *)0x0) &&
                 (((*(uint *)(param_1 + 8) < *(uint *)((int64_t)puVar4 + 0x34) &&
                   (uVar17 = *(uint *)((int64_t)plVar21 + 0x34), uVar17 < *(uint *)(param_1 + 8)))
                  && (uVar17 != 0)))) {
                iVar6 = FUN_18085ef10(*(uint64_t *)(param_1 + 0x160));
                if (iVar6 != 0) goto LAB_180857786;
                puVar9 = (int32_t *)MemoryCacheController0();
                uStack_b8 = 0;
                *(int32_t *)(param_1 + 0x148) = *puVar9;
                iVar6 = FUN_18085bc30(param_1,uVar17 - 1,0,1);
                if (iVar6 != 0) goto LAB_180857786;
                break;
              }
            }
            if ((plVar21 == plVar18) ||
               (plVar21 = (int64_t *)*plVar21, puVar4 = (uint64_t *)*puVar3, plVar21 == plVar18))
            break;
          } while( true );
        }
        plStack_78 = (int64_t *)(param_1 + 0xb8);
        uStack_70 = (int64_t *)0xffffffffffffffff;
        aiStack_68[0] = -1;
        FUN_1808549c0(plStack_78,&uStack_70,aiStack_68);
        plVar21 = plStack_78;
        param_2 = puStack_80;
        if (aiStack_68[0] != -1) {
          iVar6 = aiStack_68[0];
          iVar16 = uStack_70._4_4_;
          iVar24 = (int)uStack_70;
          do {
            lVar11 = (int64_t)iVar6 * 0x18;
            lVar7 = func_0x00018084d100(*(uint64_t *)(param_1 + 0x110),plVar21[2] + lVar11);
            param_2 = puStack_80;
            iVar15 = iVar24;
            if (lVar7 == 0) {
              if (iVar6 == -1) break;
              lVar7 = plVar21[2];
              iVar20 = *(int *)(lVar7 + 0x10 + lVar11);
              iVar14 = iVar24;
              if (iVar20 == -1) {
                iVar14 = 0;
                if (iVar24 != -1) {
                  iVar14 = iVar24 + 1;
                }
                if (iVar14 != (int)plVar21[1]) {
                  lVar11 = (int64_t)iVar14;
                  do {
                    if (*(int *)(*plVar21 + lVar11 * 4) != -1) {
                      iVar20 = *(int *)(*plVar21 + (int64_t)iVar14 * 4);
                      goto LAB_180857434;
                    }
                    iVar14 = iVar14 + 1;
                    lVar11 = lVar11 + 1;
                  } while (lVar11 != (int)plVar21[1]);
                }
                iVar14 = -1;
                iVar20 = -1;
              }
LAB_180857434:
              if (iVar16 == -1) {
                piVar22 = (int *)(*plVar21 + (int64_t)iVar24 * 4);
              }
              else {
                piVar22 = (int *)(lVar7 + (int64_t)iVar16 * 0x18 + 0x10);
              }
              iVar1 = *piVar22;
              lVar11 = (int64_t)iVar1;
              if (iVar1 == iVar6) {
                *(int8_t *)(lVar7 + 0x14 + lVar11 * 0x18) = 0;
                *piVar22 = *(int *)(lVar7 + 0x10 + lVar11 * 0x18);
                *(int *)(lVar7 + 0x10 + lVar11 * 0x18) = (int)plVar21[4];
                *(int *)((int64_t)plVar21 + 0x24) = *(int *)((int64_t)plVar21 + 0x24) + -1;
                *(int *)(plVar21 + 4) = iVar1;
                iVar6 = iVar20;
                iVar15 = iVar14;
                if (iVar24 != iVar14) {
                  iVar16 = -1;
                }
              }
            }
            else {
              if ((iVar6 == -1) || (iVar6 = *(int *)(plVar21[2] + 0x10 + lVar11), iVar6 == -1)) {
                iVar15 = 0;
                if (iVar24 != -1) {
                  iVar15 = iVar24 + 1;
                }
                if (iVar15 != (int)plVar21[1]) {
                  lVar11 = (int64_t)iVar15;
                  do {
                    if (*(int *)(*plVar21 + lVar11 * 4) != -1) {
                      iVar6 = *(int *)(*plVar21 + (int64_t)iVar15 * 4);
                      goto LAB_1808574d9;
                    }
                    iVar15 = iVar15 + 1;
                    lVar11 = lVar11 + 1;
                  } while (lVar11 != (int)plVar21[1]);
                }
                iVar15 = -1;
                iVar6 = -1;
LAB_1808574d9:
                iVar16 = -1;
                if (iVar24 != iVar15) goto LAB_1808574e7;
              }
              iVar16 = iVar24;
            }
LAB_1808574e7:
            iVar24 = iVar15;
          } while (iVar6 != -1);
        }
      }
    }
  }
  plVar23 = (int64_t *)0x0;
  plVar21 = (int64_t *)(param_1 + 0x118);
  plVar18 = (int64_t *)(*plVar21 + -0x18);
  if (*plVar21 == 0) {
    plVar18 = plVar23;
  }
  plVar13 = plVar23;
  if (plVar18 != (int64_t *)0x0) {
    plVar13 = plVar18 + 3;
  }
  do {
    if (plVar13 == plVar21) {
      lVar11 = *(int64_t *)(param_1 + 0x110);
      plVar18 = *(int64_t **)(lVar11 + 0x28);
      goto LAB_180857632;
    }
    plVar18 = plVar13 + -3;
    if (plVar13 == (int64_t *)0x0) {
      plVar18 = plVar23;
    }
    iVar6 = *(int *)(*(int64_t *)(param_1 + 0x110) + 0x30);
    plVar12 = plVar13;
    if (0 < iVar6) {
      lVar11 = *(int64_t *)(*(int64_t *)(param_1 + 0x110) + 0x28);
      plVar19 = plVar23;
      do {
        iVar16 = (int)plVar19;
        if ((*(int64_t *)(lVar11 + (int64_t)iVar16 * 0x10) == *(int64_t *)(plVar18[5] + 0x10)) &&
           (*(int64_t *)(lVar11 + 8 + (int64_t)iVar16 * 0x10) == *(int64_t *)(plVar18[5] + 0x18))
           ) {
          if (plVar13 != plVar21) {
            plVar19 = (int64_t *)(*plVar13 + -0x18);
            if (*plVar13 == 0) {
              plVar19 = plVar23;
            }
            plVar12 = plVar23;
            if (plVar19 != (int64_t *)0x0) {
              plVar12 = plVar19 + 3;
            }
          }
          uVar10 = (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 0x160) + 8) + 0x30))();
          iVar6 = FUN_1808c6890(plVar18,param_2,uVar10);
          goto LAB_180857610;
        }
        plVar19 = (int64_t *)(uint64_t)(iVar16 + 1U);
      } while ((int)(iVar16 + 1U) < iVar6);
    }
    if (plVar13 != plVar21) {
      lVar11 = *plVar13;
      plVar19 = (int64_t *)(lVar11 + -0x18);
      if (lVar11 == 0) {
        plVar19 = plVar23;
      }
      plVar12 = plVar23;
      if (plVar19 != (int64_t *)0x0) {
        plVar12 = plVar19 + 3;
      }
      *(int64_t *)plVar13[1] = lVar11;
      *(int64_t *)(*plVar13 + 8) = plVar13[1];
      plVar13[1] = (int64_t)plVar13;
      *plVar13 = (int64_t)plVar13;
    }
    iVar6 = func_0x0001808bef20(*(uint64_t *)(param_1 + 0x168),plVar18);
LAB_180857610:
    plVar13 = plVar12;
  } while (iVar6 == 0);
LAB_180857786:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_d8);
LAB_180857632:
  if ((plVar18 < *(int64_t **)(lVar11 + 0x28)) ||
     (*(int64_t **)(lVar11 + 0x28) + (int64_t)*(int *)(lVar11 + 0x30) * 2 <= plVar18))
  goto LAB_180857786;
  plVar13 = (int64_t *)(*plVar21 + -0x18);
  if (*plVar21 == 0) {
    plVar13 = plVar23;
  }
  plVar12 = plVar13 + 3;
  if (plVar13 == (int64_t *)0x0) {
    plVar12 = plVar23;
  }
  while (plVar12 != plVar21) {
    plVar13 = plVar12 + 2;
    if (plVar12 == (int64_t *)0x0) {
      plVar13 = (int64_t *)0x28;
    }
    if ((*(int64_t *)(*plVar13 + 0x10) == *plVar18) &&
       (*(int64_t *)(*plVar13 + 0x18) == plVar18[1])) {
      plVar13 = plVar12 + -3;
      if (plVar12 == (int64_t *)0x0) {
        plVar13 = plVar23;
      }
      if (plVar13 != (int64_t *)0x0) goto LAB_180857774;
      break;
    }
    if (plVar12 == plVar21) break;
    plVar13 = (int64_t *)(*plVar12 + -0x18);
    if (*plVar12 == 0) {
      plVar13 = plVar23;
    }
    plVar12 = plVar23;
    if (plVar13 != (int64_t *)0x0) {
      plVar12 = plVar13 + 3;
    }
  }
  plStack_78 = (int64_t *)0x0;
  uVar10 = (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 0x160) + 8) + 0x30))();
  iVar6 = FUN_1808b6c30(uVar10,plVar18,1,&plStack_78);
  if ((iVar6 != 0) ||
     (iVar6 = FUN_1808c6c00(plStack_78,2 < *(int *)(*(int64_t *)(param_1 + 0x160) + 0x2e4)),
     iVar6 != 0)) goto LAB_180857786;
  plVar13 = plStack_78 + 3;
  if (plStack_78 == (int64_t *)0x0) {
    plVar13 = plVar23;
  }
  if (plVar13 == (int64_t *)0x0) goto LAB_180857786;
  plVar12 = (int64_t *)*plVar13;
  plVar19 = plVar23;
  if (plVar12 != plVar13) {
    do {
      plVar12 = (int64_t *)*plVar12;
      uVar17 = (int)plVar19 + 1;
      plVar19 = (int64_t *)(uint64_t)uVar17;
    } while (plVar12 != plVar13);
    if (uVar17 != 0) goto LAB_180857786;
  }
  plVar13[1] = *(int64_t *)(param_1 + 0x120);
  *plVar13 = (int64_t)plVar21;
  *(int64_t **)(param_1 + 0x120) = plVar13;
  *(int64_t **)plVar13[1] = plVar13;
LAB_180857774:
  plVar18 = plVar18 + 2;
  goto LAB_180857632;
}



uint64_t FUN_1808577c0(int64_t *param_1,uint *param_2,int32_t *param_3)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t uVar8;
  int iVar9;
  int64_t lVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int64_t lVar7;
  
  uVar6 = FUN_180855b80();
  if ((int)uVar6 == 0) {
    if ((int)param_1[1] == 0) {
      return 0x1c;
    }
    lVar10 = (int64_t)
             (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) & (int)param_1[1] - 1U);
    piVar13 = (int *)(*param_1 + lVar10 * 4);
    iVar4 = *(int *)(*param_1 + lVar10 * 4);
    if (iVar4 != -1) {
      lVar10 = param_1[2];
      do {
        lVar7 = (int64_t)iVar4;
        if ((*(int64_t *)(lVar10 + lVar7 * 0x18) == *(int64_t *)param_2) &&
           (*(int64_t *)(lVar10 + 8 + lVar7 * 0x18) == *(int64_t *)(param_2 + 2))) {
          return 0x1c;
        }
        iVar4 = *(int *)(lVar10 + 0x10 + lVar7 * 0x18);
        piVar13 = (int *)(lVar10 + 0x10 + lVar7 * 0x18);
      } while (iVar4 != -1);
    }
    iVar4 = (int)param_1[4];
    lVar10 = (int64_t)iVar4;
    if (iVar4 == -1) {
      iVar4 = (int)param_1[3];
      uVar11 = (int)*(uint *)((int64_t)param_1 + 0x1c) >> 0x1f;
      uVar6 = *(uint64_t *)param_2;
      uVar3 = *(uint64_t *)(param_2 + 2);
      uVar2 = *param_3;
      iVar5 = (*(uint *)((int64_t)param_1 + 0x1c) ^ uVar11) - uVar11;
      iVar9 = iVar4 + 1;
      if (iVar5 < iVar9) {
        iVar12 = (int)((float)iVar5 * 1.5);
        iVar5 = iVar9;
        if (iVar9 <= iVar12) {
          iVar5 = iVar12;
        }
        if (iVar5 < 2) {
          iVar12 = 2;
        }
        else if (iVar12 < iVar9) {
          iVar12 = iVar9;
        }
        uVar8 = RenderingSystem_TextureManager(param_1 + 2,iVar12);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
      }
      lVar7 = (int64_t)(int)param_1[3];
      lVar10 = param_1[2];
      puVar1 = (uint64_t *)(lVar10 + lVar7 * 0x18);
      *puVar1 = uVar6;
      puVar1[1] = uVar3;
      *(int32_t *)(lVar10 + 0x10 + lVar7 * 0x18) = 0xffffffff;
      *(int32_t *)(lVar10 + 0x14 + lVar7 * 0x18) = uVar2;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
    else {
      lVar7 = param_1[2];
      *(int32_t *)(param_1 + 4) = *(int32_t *)(lVar7 + 0x10 + lVar10 * 0x18);
      *(int32_t *)(lVar7 + 0x10 + lVar10 * 0x18) = 0xffffffff;
      uVar6 = *(uint64_t *)(param_2 + 2);
      puVar1 = (uint64_t *)(lVar7 + lVar10 * 0x18);
      *puVar1 = *(uint64_t *)param_2;
      puVar1[1] = uVar6;
      *(int32_t *)(lVar7 + 0x14 + lVar10 * 0x18) = *param_3;
    }
    *piVar13 = iVar4;
    *(int *)((int64_t)param_1 + 0x24) = *(int *)((int64_t)param_1 + 0x24) + 1;
    uVar6 = 0;
  }
  return uVar6;
}



uint64_t FUN_1808577e2(void)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  uint64_t uVar8;
  int iVar9;
  int64_t lVar10;
  uint uVar11;
  int iVar12;
  uint *unaff_RBX;
  int64_t *unaff_RSI;
  int *piVar13;
  int32_t *unaff_R15;
  int64_t lVar7;
  
  if (in_EAX == 0) {
    return 0x1c;
  }
  lVar10 = (int64_t)(int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) & in_EAX - 1U);
  piVar13 = (int *)(*unaff_RSI + lVar10 * 4);
  iVar5 = *(int *)(*unaff_RSI + lVar10 * 4);
  if (iVar5 != -1) {
    lVar10 = unaff_RSI[2];
    do {
      lVar7 = (int64_t)iVar5;
      if ((*(int64_t *)(lVar10 + lVar7 * 0x18) == *(int64_t *)unaff_RBX) &&
         (*(int64_t *)(lVar10 + 8 + lVar7 * 0x18) == *(int64_t *)(unaff_RBX + 2))) {
        return 0x1c;
      }
      iVar5 = *(int *)(lVar10 + 0x10 + lVar7 * 0x18);
      piVar13 = (int *)(lVar10 + 0x10 + lVar7 * 0x18);
    } while (iVar5 != -1);
  }
  iVar5 = (int)unaff_RSI[4];
  lVar10 = (int64_t)iVar5;
  if (iVar5 == -1) {
    iVar5 = (int)unaff_RSI[3];
    uVar11 = (int)*(uint *)((int64_t)unaff_RSI + 0x1c) >> 0x1f;
    uVar3 = *(uint64_t *)unaff_RBX;
    uVar4 = *(uint64_t *)(unaff_RBX + 2);
    uVar2 = *unaff_R15;
    iVar6 = (*(uint *)((int64_t)unaff_RSI + 0x1c) ^ uVar11) - uVar11;
    iVar9 = iVar5 + 1;
    if (iVar6 < iVar9) {
      iVar12 = (int)((float)iVar6 * 1.5);
      iVar6 = iVar9;
      if (iVar9 <= iVar12) {
        iVar6 = iVar12;
      }
      if (iVar6 < 2) {
        iVar12 = 2;
      }
      else if (iVar12 < iVar9) {
        iVar12 = iVar9;
      }
      uVar8 = RenderingSystem_TextureManager(unaff_RSI + 2,iVar12);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
    }
    lVar7 = (int64_t)(int)unaff_RSI[3];
    lVar10 = unaff_RSI[2];
    puVar1 = (uint64_t *)(lVar10 + lVar7 * 0x18);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    *(int32_t *)(lVar10 + 0x10 + lVar7 * 0x18) = 0xffffffff;
    *(int32_t *)(lVar10 + 0x14 + lVar7 * 0x18) = uVar2;
    *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + 1;
  }
  else {
    lVar7 = unaff_RSI[2];
    *(int32_t *)(unaff_RSI + 4) = *(int32_t *)(lVar7 + 0x10 + lVar10 * 0x18);
    *(int32_t *)(lVar7 + 0x10 + lVar10 * 0x18) = 0xffffffff;
    uVar3 = *(uint64_t *)(unaff_RBX + 2);
    puVar1 = (uint64_t *)(lVar7 + lVar10 * 0x18);
    *puVar1 = *(uint64_t *)unaff_RBX;
    puVar1[1] = uVar3;
    *(int32_t *)(lVar7 + 0x14 + lVar10 * 0x18) = *unaff_R15;
  }
  *piVar13 = iVar5;
  *(int *)((int64_t)unaff_RSI + 0x24) = *(int *)((int64_t)unaff_RSI + 0x24) + 1;
  return 0;
}





// 函数: void FUN_18085791f(void)
void FUN_18085791f(void)

{
  return;
}



uint64_t FUN_180857928(void)

{
  return 0x1c;
}



uint64_t FUN_180857940(int64_t *param_1,uint *param_2,int8_t *param_3)

{
  uint64_t *puVar1;
  int8_t uVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t uVar8;
  int iVar9;
  int64_t lVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int64_t lVar7;
  
  uVar6 = FUN_180855ce0();
  if ((int)uVar6 == 0) {
    if ((int)param_1[1] == 0) {
      return 0x1c;
    }
    lVar10 = (int64_t)
             (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) & (int)param_1[1] - 1U);
    piVar13 = (int *)(*param_1 + lVar10 * 4);
    iVar4 = *(int *)(*param_1 + lVar10 * 4);
    if (iVar4 != -1) {
      lVar10 = param_1[2];
      do {
        lVar7 = (int64_t)iVar4;
        if ((*(int64_t *)(lVar10 + lVar7 * 0x18) == *(int64_t *)param_2) &&
           (*(int64_t *)(lVar10 + 8 + lVar7 * 0x18) == *(int64_t *)(param_2 + 2))) {
          return 0x1c;
        }
        iVar4 = *(int *)(lVar10 + 0x10 + lVar7 * 0x18);
        piVar13 = (int *)(lVar10 + 0x10 + lVar7 * 0x18);
      } while (iVar4 != -1);
    }
    iVar4 = (int)param_1[4];
    lVar10 = (int64_t)iVar4;
    if (iVar4 == -1) {
      iVar4 = (int)param_1[3];
      uVar11 = (int)*(uint *)((int64_t)param_1 + 0x1c) >> 0x1f;
      uVar6 = *(uint64_t *)param_2;
      uVar3 = *(uint64_t *)(param_2 + 2);
      uVar2 = *param_3;
      iVar5 = (*(uint *)((int64_t)param_1 + 0x1c) ^ uVar11) - uVar11;
      iVar9 = iVar4 + 1;
      if (iVar5 < iVar9) {
        iVar12 = (int)((float)iVar5 * 1.5);
        iVar5 = iVar9;
        if (iVar9 <= iVar12) {
          iVar5 = iVar12;
        }
        if (iVar5 < 2) {
          iVar12 = 2;
        }
        else if (iVar12 < iVar9) {
          iVar12 = iVar9;
        }
        uVar8 = FUN_1808595a0(param_1 + 2,iVar12);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
      }
      lVar7 = (int64_t)(int)param_1[3];
      lVar10 = param_1[2];
      puVar1 = (uint64_t *)(lVar10 + lVar7 * 0x18);
      *puVar1 = uVar6;
      puVar1[1] = uVar3;
      *(int32_t *)(lVar10 + 0x10 + lVar7 * 0x18) = 0xffffffff;
      *(int8_t *)(lVar10 + 0x14 + lVar7 * 0x18) = uVar2;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
    else {
      lVar7 = param_1[2];
      *(int32_t *)(param_1 + 4) = *(int32_t *)(lVar7 + 0x10 + lVar10 * 0x18);
      *(int32_t *)(lVar7 + 0x10 + lVar10 * 0x18) = 0xffffffff;
      uVar6 = *(uint64_t *)(param_2 + 2);
      puVar1 = (uint64_t *)(lVar7 + lVar10 * 0x18);
      *puVar1 = *(uint64_t *)param_2;
      puVar1[1] = uVar6;
      *(int8_t *)(lVar7 + 0x14 + lVar10 * 0x18) = *param_3;
    }
    *piVar13 = iVar4;
    *(int *)((int64_t)param_1 + 0x24) = *(int *)((int64_t)param_1 + 0x24) + 1;
    uVar6 = 0;
  }
  return uVar6;
}



uint64_t FUN_180857962(void)

{
  uint64_t *puVar1;
  int8_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  uint64_t uVar8;
  int iVar9;
  int64_t lVar10;
  uint uVar11;
  int iVar12;
  uint *unaff_RBX;
  int64_t *unaff_RSI;
  int *piVar13;
  int8_t *unaff_R15;
  int64_t lVar7;
  
  if (in_EAX == 0) {
    return 0x1c;
  }
  lVar10 = (int64_t)(int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) & in_EAX - 1U);
  piVar13 = (int *)(*unaff_RSI + lVar10 * 4);
  iVar5 = *(int *)(*unaff_RSI + lVar10 * 4);
  if (iVar5 != -1) {
    lVar10 = unaff_RSI[2];
    do {
      lVar7 = (int64_t)iVar5;
      if ((*(int64_t *)(lVar10 + lVar7 * 0x18) == *(int64_t *)unaff_RBX) &&
         (*(int64_t *)(lVar10 + 8 + lVar7 * 0x18) == *(int64_t *)(unaff_RBX + 2))) {
        return 0x1c;
      }
      iVar5 = *(int *)(lVar10 + 0x10 + lVar7 * 0x18);
      piVar13 = (int *)(lVar10 + 0x10 + lVar7 * 0x18);
    } while (iVar5 != -1);
  }
  iVar5 = (int)unaff_RSI[4];
  lVar10 = (int64_t)iVar5;
  if (iVar5 == -1) {
    iVar5 = (int)unaff_RSI[3];
    uVar11 = (int)*(uint *)((int64_t)unaff_RSI + 0x1c) >> 0x1f;
    uVar3 = *(uint64_t *)unaff_RBX;
    uVar4 = *(uint64_t *)(unaff_RBX + 2);
    uVar2 = *unaff_R15;
    iVar6 = (*(uint *)((int64_t)unaff_RSI + 0x1c) ^ uVar11) - uVar11;
    iVar9 = iVar5 + 1;
    if (iVar6 < iVar9) {
      iVar12 = (int)((float)iVar6 * 1.5);
      iVar6 = iVar9;
      if (iVar9 <= iVar12) {
        iVar6 = iVar12;
      }
      if (iVar6 < 2) {
        iVar12 = 2;
      }
      else if (iVar12 < iVar9) {
        iVar12 = iVar9;
      }
      uVar8 = FUN_1808595a0(unaff_RSI + 2,iVar12);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
    }
    lVar7 = (int64_t)(int)unaff_RSI[3];
    lVar10 = unaff_RSI[2];
    puVar1 = (uint64_t *)(lVar10 + lVar7 * 0x18);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    *(int32_t *)(lVar10 + 0x10 + lVar7 * 0x18) = 0xffffffff;
    *(int8_t *)(lVar10 + 0x14 + lVar7 * 0x18) = uVar2;
    *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + 1;
  }
  else {
    lVar7 = unaff_RSI[2];
    *(int32_t *)(unaff_RSI + 4) = *(int32_t *)(lVar7 + 0x10 + lVar10 * 0x18);
    *(int32_t *)(lVar7 + 0x10 + lVar10 * 0x18) = 0xffffffff;
    uVar3 = *(uint64_t *)(unaff_RBX + 2);
    puVar1 = (uint64_t *)(lVar7 + lVar10 * 0x18);
    *puVar1 = *(uint64_t *)unaff_RBX;
    puVar1[1] = uVar3;
    *(int8_t *)(lVar7 + 0x14 + lVar10 * 0x18) = *unaff_R15;
  }
  *piVar13 = iVar5;
  *(int *)((int64_t)unaff_RSI + 0x24) = *(int *)((int64_t)unaff_RSI + 0x24) + 1;
  return 0;
}





// 函数: void FUN_180857aa1(void)
void FUN_180857aa1(void)

{
  return;
}



uint64_t FUN_180857aaa(void)

{
  return 0x1c;
}



uint64_t FUN_180857ac0(int64_t param_1)

{
  int *piVar1;
  
  if ((*(uint *)(*(int64_t *)(param_1 + 0x160) + 0x2d8) >> 1 & 1) != 0) {
    piVar1 = (int *)MemoryCacheController0();
    if (*(int *)(param_1 + 0x20) == *piVar1) {
      return 1;
    }
  }
  return 0;
}



uint64_t FUN_180857b40(int64_t param_1)

{
  uint64_t uVar1;
  
  *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
  if ((*(char *)(param_1 + 0x13c) != '\0') && (uVar1 = FUN_1808552c0(), (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



