#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part076.c - 1 个函数

// 函数: void FUN_18030bde0(int32_t param_1,int64_t param_2)
void FUN_18030bde0(int32_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  void **ppuVar5;
  char cVar6;
  char *pcVar7;
  int32_t *puVar8;
  uint64_t *puVar9;
  int64_t in_RCX;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int *piVar13;
  int iVar14;
  int64_t lVar15;
  int64_t *plVar16;
  int64_t lVar17;
  uint64_t *puVar18;
  uint64_t *puVar19;
  char *pcVar20;
  char *pcVar21;
  int iVar22;
  int64_t lVar23;
  int64_t lVar24;
  int8_t auStack_218 [32];
  code *pcStack_1f8;
  uint64_t *puStack_1e8;
  int64_t *plStack_1e0;
  void **ppuStack_1d8;
  void *puStack_1d0;
  int64_t lStack_1c8;
  int iStack_1c0;
  uint64_t uStack_1b8;
  int64_t lStack_1b0;
  int64_t *plStack_1a0;
  uint64_t uStack_198;
  int8_t auStack_190 [24];
  int8_t auStack_178 [8];
  int8_t auStack_170 [8];
  int8_t auStack_168 [8];
  int64_t alStack_160 [19];
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  int32_t uStack_b8;
  uint64_t uStack_b4;
  uint64_t uStack_ac;
  uint64_t uStack_a4;
  uint64_t uStack_9c;
  uint64_t uStack_94;
  uint64_t uStack_8c;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  void *puStack_70;
  int64_t lStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_48;
  
  uStack_198 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_218;
  pcVar21 = "guid";
  do {
    pcVar20 = pcVar21;
    pcVar21 = pcVar20 + 1;
  } while (*pcVar21 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); lStack_1b0 = in_RCX, puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar21 = (char *)*puVar9;
    if (pcVar21 == (char *)0x0) {
      pcVar7 = (char *)0x0;
      pcVar21 = (char *)0x180d48d24;
    }
    else {
      pcVar7 = (char *)puVar9[2];
    }
    if (pcVar7 == pcVar20 + -0x180a04c43) {
      pcVar7 = pcVar7 + (int64_t)pcVar21;
      if (pcVar7 <= pcVar21) {
LAB_18030be84:
        lVar10 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar10 = puVar9[1];
        }
        puVar8 = (int32_t *)FUN_1802c0460(auStack_190,lVar10);
        param_1 = *puVar8;
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        *(int32_t *)(in_RCX + 0xd0) = param_1;
        *(int32_t *)(in_RCX + 0xd4) = uVar2;
        *(int32_t *)(in_RCX + 0xd8) = uVar3;
        *(int32_t *)(in_RCX + 0xdc) = uVar4;
        break;
      }
      lVar10 = (int64_t)&unknown_var_6228_ptr - (int64_t)pcVar21;
      while (*pcVar21 == pcVar21[lVar10]) {
        pcVar21 = pcVar21 + 1;
        if (pcVar7 <= pcVar21) goto LAB_18030be84;
      }
    }
  }
  pcVar21 = "name";
  do {
    pcVar20 = pcVar21;
    pcVar21 = pcVar20 + 1;
  } while (*pcVar21 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar21 = (char *)*puVar9;
    if (pcVar21 == (char *)0x0) {
      pcVar7 = (char *)0x0;
      pcVar21 = (char *)0x180d48d24;
    }
    else {
      pcVar7 = (char *)puVar9[2];
    }
    if (pcVar7 == pcVar20 + -0x180a03a83) {
      pcVar7 = pcVar7 + (int64_t)pcVar21;
      if (pcVar7 <= pcVar21) {
LAB_18030bf14:
        lVar10 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar10 = puVar9[1];
        }
        param_1 = (**(code **)(*(int64_t *)(in_RCX + 0x38) + 0x10))(in_RCX + 0x38,lVar10);
        break;
      }
      lVar10 = (int64_t)&system_data_3a84 - (int64_t)pcVar21;
      while (*pcVar21 == pcVar21[lVar10]) {
        pcVar21 = pcVar21 + 1;
        if (pcVar7 <= pcVar21) goto LAB_18030bf14;
      }
    }
  }
  puStack_1d0 = &system_data_buffer_ptr;
  uStack_1b8 = 0;
  lStack_1c8 = 0;
  iStack_1c0 = 0;
  pcVar21 = "owner_skeleton";
  do {
    pcVar20 = pcVar21;
    pcVar21 = pcVar20 + 1;
  } while (*pcVar21 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar21 = (char *)*puVar9;
    if (pcVar21 == (char *)0x0) {
      pcVar7 = (char *)0x0;
      pcVar21 = (char *)0x180d48d24;
    }
    else {
      pcVar7 = (char *)puVar9[2];
    }
    if (pcVar7 == pcVar20 + -0x180a1a43f) {
      pcVar7 = pcVar21 + (int64_t)pcVar7;
      if (pcVar7 <= pcVar21) {
LAB_18030bfe4:
        lVar10 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar10 = puVar9[1];
        }
        param_1 = FUN_180627c50(&puStack_1d0,lVar10);
        break;
      }
      lVar10 = (int64_t)&unknown_var_4288_ptr - (int64_t)pcVar21;
      while (*pcVar21 == pcVar21[lVar10]) {
        pcVar21 = pcVar21 + 1;
        if (pcVar7 <= pcVar21) goto LAB_18030bfe4;
      }
    }
  }
  if (iStack_1c0 != 0) {
    puVar9 = (uint64_t *)FUN_1800b3970(param_1,&plStack_1a0,&puStack_1d0,1);
    uVar1 = *puVar9;
    *puVar9 = 0;
    plStack_1e0 = *(int64_t **)(in_RCX + 0x180);
    *(uint64_t *)(in_RCX + 0x180) = uVar1;
    if (plStack_1e0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1e0 + 0x38))();
    }
    if (plStack_1a0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1a0 + 0x38))();
    }
  }
  pcVar21 = "capsules";
  do {
    pcVar20 = pcVar21;
    pcVar21 = pcVar20 + 1;
  } while (*pcVar21 != '\0');
  puVar9 = *(uint64_t **)(param_2 + 0x30);
LAB_18030c071:
  if (puVar9 == (uint64_t *)0x0) goto LAB_18030c93f;
  pcVar21 = (char *)*puVar9;
  if (pcVar21 == (char *)0x0) {
    pcVar7 = (char *)0x0;
    pcVar21 = (char *)0x180d48d24;
  }
  else {
    pcVar7 = (char *)puVar9[2];
  }
  if (pcVar7 == pcVar20 + -0x180a1a42f) {
    pcVar7 = pcVar7 + (int64_t)pcVar21;
    if (pcVar7 <= pcVar21) {
LAB_18030c0c0:
      pcVar21 = "capsule";
      do {
        pcVar20 = pcVar21;
        pcVar21 = pcVar20 + 1;
      } while (*pcVar21 != '\0');
      puVar9 = (uint64_t *)puVar9[6];
      do {
        puStack_1e8 = puVar9;
        if (puVar9 == (uint64_t *)0x0) {
LAB_18030c93f:
          iVar22 = (int)((*(int64_t *)(lStack_1b0 + 0x20) - *(int64_t *)(lStack_1b0 + 0x18)) /
                        0x128);
          plStack_1e0 = (int64_t *)(int64_t)iVar22;
          lVar10 = lStack_1b0;
          if (0 < iVar22) {
            ppuStack_1d8 = (void **)0x0;
            do {
              ppuVar5 = ppuStack_1d8;
              lVar11 = *(int64_t *)(lVar10 + 0x18);
              lVar12 = 0;
              lVar23 = 0;
              puStack_1e8 = (uint64_t *)0x2;
              do {
                lVar17 = 0;
                lVar15 = 0;
                piVar13 = (int *)((int64_t)ppuVar5 + lVar12 + lVar11);
                lVar24 = 2;
                do {
                  *piVar13 = -1;
                  if ((*(int64_t *)(lVar10 + 0x180) != 0) &&
                     (*(int *)((int64_t)ppuVar5 + lVar12 + lVar17 + 0x28 + lVar11) != 0)) {
                    cVar6 = FUN_18040b330(*(int64_t *)(lVar10 + 0x180),
                                          (int64_t)ppuVar5 + lVar23 + 0x18 + lVar15 + lVar11,0);
                    *piVar13 = (int)cVar6;
                    lVar10 = lStack_1b0;
                  }
                  lVar15 = lVar15 + 0x20;
                  piVar13 = piVar13 + 1;
                  lVar17 = lVar17 + 0x20;
                  lVar24 = lVar24 + -1;
                } while (lVar24 != 0);
                lVar23 = lVar23 + 0x58;
                lVar12 = lVar12 + 0x58;
                puStack_1e8 = (uint64_t *)((int64_t)puStack_1e8 + -1);
              } while (puStack_1e8 != (uint64_t *)0x0);
              ppuStack_1d8 = ppuStack_1d8 + 0x25;
              plStack_1e0 = (int64_t *)((int64_t)plStack_1e0 + -1);
              puStack_1e8 = (uint64_t *)0x0;
            } while (plStack_1e0 != (int64_t *)0x0);
          }
          if (*(char *)(lVar10 + 0x14) != '\0') {
            FUN_1800f4980(render_system_data_memory,*(int32_t *)(lVar10 + 0x10),lVar10);
          }
          puStack_1d0 = &system_data_buffer_ptr;
          if (lStack_1c8 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          lStack_1c8 = 0;
          uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
          puStack_1d0 = &system_state_ptr;
                    // WARNING: Subroutine does not return
          SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_218);
        }
        pcVar21 = (char *)*puVar9;
        if (pcVar21 == (char *)0x0) {
          pcVar7 = (char *)0x0;
          pcVar21 = (char *)0x180d48d24;
        }
        else {
          pcVar7 = (char *)puVar9[2];
        }
        if (pcVar7 == pcVar20 + -0x180a1a487) {
          pcVar7 = pcVar21 + (int64_t)pcVar7;
          if (pcVar7 <= pcVar21) {
LAB_18030c136:
            plVar16 = (int64_t *)(in_RCX + 0x18);
            plStack_1e0 = plVar16;
            goto LAB_18030c154;
          }
          lVar10 = (int64_t)&unknown_var_4360_ptr - (int64_t)pcVar21;
          while (*pcVar21 == pcVar21[lVar10]) {
            pcVar21 = pcVar21 + 1;
            if (pcVar7 <= pcVar21) goto LAB_18030c136;
          }
        }
        puVar9 = (uint64_t *)puVar9[0xb];
      } while( true );
    }
    lVar10 = (int64_t)&unknown_var_4272_ptr - (int64_t)pcVar21;
    while (*pcVar21 == pcVar21[lVar10]) {
      pcVar21 = pcVar21 + 1;
      if (pcVar7 <= pcVar21) goto LAB_18030c0c0;
    }
  }
  puVar9 = (uint64_t *)puVar9[0xb];
  goto LAB_18030c071;
LAB_18030c154:
  pcStack_1f8 = FUN_1800f88f0;
  FUN_1808fc838(auStack_178,0x58,2,FUN_18030cdf0);
  ppuStack_1d8 = &puStack_70;
  puStack_70 = &system_data_buffer_ptr;
  uStack_58 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  uStack_b4 = 0x3f800000;
  uStack_ac = 0;
  uStack_a4 = 0x3f80000000000000;
  uStack_9c = 0;
  uStack_94 = 0;
  uStack_8c = 0x3f800000;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0x3f800000;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_c8 = 0;
  pcVar21 = "name";
  do {
    pcVar20 = pcVar21;
    pcVar21 = pcVar20 + 1;
  } while (*pcVar21 != '\0');
  for (puVar18 = (uint64_t *)puVar9[8]; puVar18 != (uint64_t *)0x0;
      puVar18 = (uint64_t *)puVar18[6]) {
    pcVar21 = (char *)*puVar18;
    if (pcVar21 == (char *)0x0) {
      pcVar7 = (char *)0x0;
      pcVar21 = (char *)0x180d48d24;
    }
    else {
      pcVar7 = (char *)puVar18[2];
    }
    if (pcVar7 == pcVar20 + -0x180a03a83) {
      pcVar7 = pcVar7 + (int64_t)pcVar21;
      if (pcVar7 <= pcVar21) {
LAB_18030c270:
        lVar10 = 0x180d48d24;
        if (puVar18[1] != 0) {
          lVar10 = puVar18[1];
        }
        FUN_180627c50(&puStack_70,lVar10);
        break;
      }
      lVar10 = (int64_t)&system_data_3a84 - (int64_t)pcVar21;
      while (*pcVar21 == pcVar21[lVar10]) {
        pcVar21 = pcVar21 + 1;
        if (pcVar7 <= pcVar21) goto LAB_18030c270;
      }
    }
  }
  pcVar21 = "length";
  do {
    pcVar20 = pcVar21;
    pcVar21 = pcVar20 + 1;
  } while (*pcVar21 != '\0');
  for (puVar18 = (uint64_t *)puVar9[8]; puVar18 != (uint64_t *)0x0;
      puVar18 = (uint64_t *)puVar18[6]) {
    pcVar21 = (char *)*puVar18;
    if (pcVar21 == (char *)0x0) {
      pcVar7 = (char *)0x0;
      pcVar21 = (char *)0x180d48d24;
    }
    else {
      pcVar7 = (char *)puVar18[2];
    }
    if (pcVar7 == pcVar20 + -0x180a1a47f) {
      pcVar7 = pcVar7 + (int64_t)pcVar21;
      if (pcVar7 <= pcVar21) {
LAB_18030c2f0:
        lVar10 = 0x180d48d24;
        if (puVar18[1] != 0) {
          lVar10 = puVar18[1];
        }
        FUN_18010cbc0(lVar10,&system_data_6430,&uStack_c8);
        break;
      }
      lVar10 = (int64_t)&unknown_var_4352_ptr - (int64_t)pcVar21;
      while (*pcVar21 == pcVar21[lVar10]) {
        pcVar21 = pcVar21 + 1;
        if (pcVar7 <= pcVar21) goto LAB_18030c2f0;
      }
    }
  }
  FUN_180631960(puVar9,&unknown_var_4344_ptr,&uStack_c4);
  FUN_180631f30(puVar9,&unknown_var_2248_ptr,&uStack_b4);
  pcVar21 = "points";
  do {
    pcVar20 = pcVar21;
    pcVar21 = pcVar20 + 1;
  } while (*pcVar21 != '\0');
  puVar18 = (uint64_t *)puVar9[6];
LAB_18030c347:
  if (puVar18 == (uint64_t *)0x0) goto LAB_18030c834;
  pcVar21 = (char *)*puVar18;
  if (pcVar21 == (char *)0x0) {
    pcVar7 = (char *)0x0;
    pcVar21 = (char *)0x180d48d24;
  }
  else {
    pcVar7 = (char *)puVar18[2];
  }
  if (pcVar7 != pcVar20 + -0x180a1a46f) {
LAB_18030c3ca:
    puVar18 = (uint64_t *)puVar18[0xb];
    goto LAB_18030c347;
  }
  pcVar7 = pcVar7 + (int64_t)pcVar21;
  if (pcVar21 < pcVar7) {
    lVar10 = (int64_t)&unknown_var_4336_ptr - (int64_t)pcVar21;
    while (*pcVar21 == pcVar21[lVar10]) {
      pcVar21 = pcVar21 + 1;
      if (pcVar7 <= pcVar21) goto LAB_18030c390;
    }
    goto LAB_18030c3ca;
  }
LAB_18030c390:
  pcVar21 = "point";
  do {
    pcVar20 = pcVar21;
    pcVar21 = pcVar20 + 1;
  } while (*pcVar21 != '\0');
  for (puVar18 = (uint64_t *)puVar18[6]; puVar18 != (uint64_t *)0x0;
      puVar18 = (uint64_t *)puVar18[0xb]) {
    pcVar21 = (char *)*puVar18;
    if (pcVar21 == (char *)0x0) {
      pcVar7 = (char *)0x0;
      pcVar21 = (char *)0x180d48d24;
    }
    else {
      pcVar7 = (char *)puVar18[2];
    }
    if (pcVar7 == pcVar20 + -0x18098be47) {
      pcVar7 = pcVar21 + (int64_t)pcVar7;
      if (pcVar7 <= pcVar21) {
LAB_18030c400:
        iVar22 = 0;
        lVar10 = 0;
LAB_18030c410:
        pcVar21 = "radius";
        do {
          pcVar20 = pcVar21;
          pcVar21 = pcVar20 + 1;
        } while (*pcVar21 != '\0');
        for (puVar9 = (uint64_t *)puVar18[8]; puVar9 != (uint64_t *)0x0;
            puVar9 = (uint64_t *)puVar9[6]) {
          pcVar21 = (char *)*puVar9;
          if (pcVar21 == (char *)0x0) {
            pcVar7 = (char *)0x0;
            pcVar21 = (char *)0x180d48d24;
          }
          else {
            pcVar7 = (char *)puVar9[2];
          }
          if (pcVar7 == pcVar20 + -0x180a1a48f) {
            pcVar7 = pcVar7 + (int64_t)pcVar21;
            if (pcVar7 <= pcVar21) {
LAB_18030c490:
              lVar11 = 0x180d48d24;
              if (puVar9[1] != 0) {
                lVar11 = puVar9[1];
              }
              goto LAB_18030c4af;
            }
            lVar11 = (int64_t)&unknown_var_4368_ptr - (int64_t)pcVar21;
            while (*pcVar21 == pcVar21[lVar11]) {
              pcVar21 = pcVar21 + 1;
              if (pcVar7 <= pcVar21) goto LAB_18030c490;
            }
          }
        }
        lVar11 = 0;
LAB_18030c4af:
        if ((auStack_168 + (int64_t)iVar22 * 0x58 != (int8_t *)0x0) && (lVar11 != 0)) {
          FUN_18010cbc0(lVar11,&system_data_6430,auStack_168 + (int64_t)iVar22 * 0x58);
        }
        pcVar21 = "bones";
        do {
          pcVar20 = pcVar21;
          pcVar21 = pcVar20 + 1;
        } while (*pcVar21 != '\0');
        puVar9 = (uint64_t *)puVar18[6];
LAB_18030c4f0:
        if (puVar9 != (uint64_t *)0x0) {
          pcVar21 = (char *)*puVar9;
          if (pcVar21 == (char *)0x0) {
            pcVar7 = (char *)0x0;
            pcVar21 = (char *)0x180d48d24;
          }
          else {
            pcVar7 = (char *)puVar9[2];
          }
          if (pcVar7 != pcVar20 + -0x180a19c8b) goto LAB_18030c575;
          pcVar7 = pcVar7 + (int64_t)pcVar21;
          if (pcVar21 < pcVar7) {
            lVar11 = (int64_t)&unknown_var_2316_ptr - (int64_t)pcVar21;
            while (*pcVar21 == pcVar21[lVar11]) {
              pcVar21 = pcVar21 + 1;
              if (pcVar7 <= pcVar21) goto LAB_18030c530;
            }
            goto LAB_18030c575;
          }
LAB_18030c530:
          iVar14 = 0;
          pcVar21 = "bone";
          do {
            pcVar20 = pcVar21;
            pcVar21 = pcVar20 + 1;
          } while (*pcVar21 != '\0');
          for (puVar9 = (uint64_t *)puVar9[6]; puVar9 != (uint64_t *)0x0;
              puVar9 = (uint64_t *)puVar9[0xb]) {
            pcVar21 = (char *)*puVar9;
            if (pcVar21 == (char *)0x0) {
              pcVar7 = (char *)0x0;
              pcVar21 = (char *)0x180d48d24;
            }
            else {
              pcVar7 = (char *)puVar9[2];
            }
            if (pcVar7 == pcVar20 + -0x180a19c83) {
              pcVar7 = pcVar7 + (int64_t)pcVar21;
              if (pcVar7 <= pcVar21) {
LAB_18030c5a4:
                lVar11 = 0;
LAB_18030c5a6:
                if (iVar14 < 2) {
                  plVar16 = (int64_t *)((int64_t)alStack_160 + lVar10 * 0x58 + lVar11);
                  pcVar21 = "name";
                  do {
                    pcVar20 = pcVar21;
                    pcVar21 = pcVar20 + 1;
                  } while (*pcVar21 != '\0');
                  for (puVar19 = (uint64_t *)puVar9[8]; puVar19 != (uint64_t *)0x0;
                      puVar19 = (uint64_t *)puVar19[6]) {
                    pcVar21 = (char *)*puVar19;
                    if (pcVar21 == (char *)0x0) {
                      pcVar7 = (char *)0x0;
                      pcVar21 = (char *)0x180d48d24;
                    }
                    else {
                      pcVar7 = (char *)puVar19[2];
                    }
                    if (pcVar7 == pcVar20 + -0x180a03a83) {
                      pcVar7 = pcVar7 + (int64_t)pcVar21;
                      if (pcVar7 <= pcVar21) {
LAB_18030c631:
                        lVar12 = 0x180d48d24;
                        if (puVar19[1] != 0) {
                          lVar12 = puVar19[1];
                        }
                        (**(code **)(*plVar16 + 0x10))(plVar16,lVar12);
                        break;
                      }
                      lVar12 = (int64_t)&system_data_3a84 - (int64_t)pcVar21;
                      while (*pcVar21 == pcVar21[lVar12]) {
                        pcVar21 = pcVar21 + 1;
                        if (pcVar7 <= pcVar21) goto LAB_18030c631;
                      }
                    }
                  }
                  pcVar21 = "weight";
                  do {
                    pcVar20 = pcVar21;
                    pcVar21 = pcVar20 + 1;
                  } while (*pcVar21 != '\0');
                  for (puVar19 = (uint64_t *)puVar9[8]; puVar19 != (uint64_t *)0x0;
                      puVar19 = (uint64_t *)puVar19[6]) {
                    pcVar21 = (char *)*puVar19;
                    if (pcVar21 == (char *)0x0) {
                      pcVar7 = (char *)0x0;
                      pcVar21 = (char *)0x180d48d24;
                    }
                    else {
                      pcVar7 = (char *)puVar19[2];
                    }
                    if (pcVar7 == pcVar20 + -0x180a1029b) {
                      pcVar7 = pcVar21 + (int64_t)pcVar7;
                      if (pcVar7 <= pcVar21) {
LAB_18030c6d0:
                        lVar12 = 0x180d48d24;
                        if (puVar19[1] != 0) {
                          lVar12 = puVar19[1];
                        }
                        goto LAB_18030c6f3;
                      }
                      lVar12 = (int64_t)&unknown_var_2908_ptr - (int64_t)pcVar21;
                      while (*pcVar21 == pcVar21[lVar12]) {
                        pcVar21 = pcVar21 + 1;
                        if (pcVar7 <= pcVar21) goto LAB_18030c6d0;
                      }
                    }
                  }
                  lVar12 = 0;
LAB_18030c6f3:
                  if ((auStack_170 + ((int64_t)iVar22 * 0x16 + (int64_t)iVar14) * 4 !=
                       (int8_t *)0x0) && (lVar12 != 0)) {
                    FUN_18010cbc0(lVar12,&system_data_6430,
                                  auStack_170 + ((int64_t)iVar22 * 0x16 + (int64_t)iVar14) * 4);
                  }
                  iVar14 = iVar14 + 1;
                  lVar11 = lVar11 + 0x20;
                  pcVar21 = "bone";
                  do {
                    pcVar20 = pcVar21;
                    pcVar21 = pcVar20 + 1;
                  } while (*pcVar21 != '\0');
                  puVar9 = (uint64_t *)puVar9[0xb];
                  if (puVar9 != (uint64_t *)0x0) {
                    do {
                      pcVar21 = (char *)*puVar9;
                      if (pcVar21 == (char *)0x0) {
                        pcVar7 = (char *)0x0;
                        pcVar21 = (char *)0x180d48d24;
                      }
                      else {
                        pcVar7 = (char *)puVar9[2];
                      }
                      if (pcVar7 == pcVar20 + -0x180a19c83) {
                        pcVar7 = pcVar7 + (int64_t)pcVar21;
                        if (pcVar7 <= pcVar21) goto LAB_18030c5a6;
                        lVar12 = (int64_t)&unknown_var_2308_ptr - (int64_t)pcVar21;
                        while (*pcVar21 == pcVar21[lVar12]) {
                          pcVar21 = pcVar21 + 1;
                          if (pcVar7 <= pcVar21) goto LAB_18030c5a6;
                        }
                      }
                      puVar9 = (uint64_t *)puVar9[0xb];
                      if (puVar9 == (uint64_t *)0x0) break;
                    } while( true );
                  }
                }
                break;
              }
              lVar11 = (int64_t)&unknown_var_2308_ptr - (int64_t)pcVar21;
              while (*pcVar21 == pcVar21[lVar11]) {
                pcVar21 = pcVar21 + 1;
                if (pcVar7 <= pcVar21) goto LAB_18030c5a4;
              }
            }
          }
        }
        iVar22 = iVar22 + 1;
        lVar10 = lVar10 + 1;
        pcVar21 = "point";
        do {
          pcVar20 = pcVar21;
          pcVar21 = pcVar20 + 1;
        } while (*pcVar21 != '\0');
        puVar18 = (uint64_t *)puVar18[0xb];
        do {
          puVar9 = puStack_1e8;
          plVar16 = plStack_1e0;
          if (puVar18 == (uint64_t *)0x0) goto LAB_18030c834;
          pcVar21 = (char *)*puVar18;
          if (pcVar21 == (char *)0x0) {
            pcVar7 = (char *)0x0;
            pcVar21 = (char *)0x180d48d24;
          }
          else {
            pcVar7 = (char *)puVar18[2];
          }
          if (pcVar7 == pcVar20 + -0x18098be47) {
            pcVar7 = pcVar21 + (int64_t)pcVar7;
            if (pcVar7 <= pcVar21) goto LAB_18030c410;
            lVar11 = (int64_t)&system_data_be48 - (int64_t)pcVar21;
            while (*pcVar21 == pcVar21[lVar11]) {
              pcVar21 = pcVar21 + 1;
              if (pcVar7 <= pcVar21) goto LAB_18030c410;
            }
          }
          puVar18 = (uint64_t *)puVar18[0xb];
        } while( true );
      }
      lVar10 = (int64_t)&system_data_be48 - (int64_t)pcVar21;
      while (*pcVar21 == pcVar21[lVar10]) {
        pcVar21 = pcVar21 + 1;
        if (pcVar7 <= pcVar21) goto LAB_18030c400;
      }
    }
  }
LAB_18030c834:
  pcVar21 = "capsule";
  do {
    pcVar20 = pcVar21;
    pcVar21 = pcVar20 + 1;
  } while (*pcVar21 != '\0');
  for (puStack_1e8 = (uint64_t *)puVar9[0xb]; puStack_1e8 != (uint64_t *)0x0;
      puStack_1e8 = (uint64_t *)puStack_1e8[0xb]) {
    pcVar21 = (char *)*puStack_1e8;
    if (pcVar21 == (char *)0x0) {
      pcVar7 = (char *)0x0;
      pcVar21 = (char *)0x180d48d24;
    }
    else {
      pcVar7 = (char *)puStack_1e8[2];
    }
    if (pcVar7 == pcVar20 + -0x180a1a487) {
      pcVar7 = pcVar7 + (int64_t)pcVar21;
      if (pcVar7 <= pcVar21) goto LAB_18030c89f;
      lVar10 = (int64_t)&unknown_var_4360_ptr - (int64_t)pcVar21;
      while (*pcVar21 == pcVar21[lVar10]) {
        pcVar21 = pcVar21 + 1;
        if (pcVar7 <= pcVar21) goto LAB_18030c89f;
      }
    }
  }
  puStack_1e8 = (uint64_t *)0x0;
LAB_18030c89f:
  puVar9 = puStack_1e8;
  if (*(uint64_t *)((int64_t)plVar16 + 8) < *(uint64_t *)((int64_t)plVar16 + 0x10)) {
    *(uint64_t *)((int64_t)plVar16 + 8) = *(uint64_t *)((int64_t)plVar16 + 8) + 0x128;
    FUN_1800f8570();
  }
  else {
    FUN_18030cab0(plVar16,auStack_178);
  }
  ppuStack_1d8 = &puStack_70;
  puStack_70 = &system_data_buffer_ptr;
  if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_68 = 0;
  uStack_58 = uStack_58 & 0xffffffff00000000;
  puStack_70 = &system_state_ptr;
  FUN_1808fc8a8(auStack_178,0x58,2,FUN_1800f88f0);
  if (puVar9 == (uint64_t *)0x0) goto LAB_18030c93f;
  goto LAB_18030c154;
LAB_18030c575:
  puVar9 = (uint64_t *)puVar9[0xb];
  goto LAB_18030c4f0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



