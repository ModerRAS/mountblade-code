#include "TaleWorlds.Native.Split.h"

// 99_part_07_part011_sub001.c - 2 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_07_part011.c - 2 个函数


// 函数: void FUN_1804a45f0(uint64_t param_1,longlong *param_2)
void FUN_1804a45f0(uint64_t param_1,longlong *param_2)

{
  byte bVar1;
  bool bVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  longlong lVar6;
  uint64_t uVar7;
  byte *pbVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  void *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint64_t *puVar19;
  longlong *plVar20;
  int iVar21;
  longlong lVar22;
  int16_t auStackX_18 [4];
  char acStackX_20 [8];
  char cStack_f8;
  char acStack_f7 [7];
  longlong lStack_f0;
  longlong lStack_e8;
  longlong *plStack_e0;
  longlong *plStack_d8;
  longlong *plStack_d0;
  longlong *plStack_c8;
  longlong *plStack_c0;
  longlong *plStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  uint64_t *puStack_a0;
  uint64_t *puStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  void *puStack_80;
  longlong lStack_78;
  uint64_t *puStack_60;
  uint64_t *puStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  uint64_t uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lVar6 = (**(code **)(_DAT_180c8ece0 + 0x2d8))(*(int32_t *)(_DAT_180c8ece0 + 0x10));
  puVar13 = &system_buffer_ptr;
  if (*(void **)(lVar6 + 8) != (void *)0x0) {
    puVar13 = *(void **)(lVar6 + 8);
  }
  FUN_180627910(&puStack_80,puVar13);
  puStack_a0 = (uint64_t *)0x0;
  puStack_98 = (uint64_t *)0x0;
  uStack_90 = 0;
  uStack_88 = 3;
  auStackX_18[0] = 0x2c;
  if (lStack_78 != 0) {
    FUN_180057980(&puStack_80,&puStack_a0,auStackX_18);
  }
  iVar21 = 0;
  uVar18 = (longlong)puStack_98 - (longlong)puStack_a0 >> 5;
  puVar19 = puStack_a0;
  lVar6 = _DAT_180c95ea0;
  puVar3 = puStack_a0;
  puVar4 = puStack_98;
  if (uVar18 != 0) {
    do {
      puStack_60 = (uint64_t *)0x0;
      puStack_58 = (uint64_t *)0x0;
      uStack_50 = 0;
      uStack_48 = 3;
      auStackX_18[0] = 0x7c;
      if (puVar19[1] != 0) {
        FUN_180057980(puVar19,&puStack_60,auStackX_18);
      }
      puVar5 = puStack_58;
      puVar4 = puStack_60;
      puVar3 = puVar4;
      if (((((longlong)puStack_58 - (longlong)puStack_60 & 0xffffffffffffffe0U) == 0x40) &&
          (0 < *(int *)(puStack_60 + 2))) && (0 < *(int *)(puStack_60 + 6))) {
        uVar7 = FUN_1801427a0(param_2,puStack_60);
        FUN_180627be0(uVar7,puVar4 + 4);
      }
      for (; puVar3 != puVar5; puVar3 = puVar3 + 4) {
        (**(code **)*puVar3)(puVar3,0);
      }
      if (puVar4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar4);
      }
      iVar21 = iVar21 + 1;
      puVar19 = puVar19 + 4;
      lVar6 = _DAT_180c95ea0;
      puVar3 = puStack_a0;
      puVar4 = puStack_98;
    } while ((ulonglong)(longlong)iVar21 < uVar18);
  }
  do {
    puStack_a0 = puVar3;
    puStack_98 = puVar4;
    if (lVar6 == 0x180c95e98) {
      lStack_e8 = 0x180c95e98;
      for (puVar19 = puVar3; puVar19 != puVar4; puVar19 = puVar19 + 4) {
        (**(code **)*puVar19)(puVar19,0);
      }
      if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar3);
      }
      puStack_80 = &unknown_var_3456_ptr;
      if (lStack_78 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    lStack_f0 = *(longlong *)(lVar6 + 0x28);
    plVar20 = (longlong *)(lStack_f0 + 0x2a0);
    lVar22 = 3;
    lStack_e8 = lVar6;
    do {
      lVar15 = *plVar20;
      if (lVar15 != 0) {
        lVar17 = lVar15 + 0x1f0;
        plVar10 = param_2;
        if ((longlong *)param_2[2] != (longlong *)0x0) {
          plVar9 = (longlong *)param_2[2];
          do {
            if (*(int *)(lVar15 + 0x200) == 0) {
              bVar2 = false;
              plVar16 = (longlong *)plVar9[1];
            }
            else {
              if ((int)plVar9[6] == 0) {
                bVar2 = true;
              }
              else {
                pbVar8 = *(byte **)(lVar15 + 0x1f8);
                lVar14 = plVar9[5] - (longlong)pbVar8;
                do {
                  uVar11 = (uint)pbVar8[lVar14];
                  iVar21 = *pbVar8 - uVar11;
                  if (*pbVar8 != uVar11) break;
                  pbVar8 = pbVar8 + 1;
                } while (uVar11 != 0);
                bVar2 = 0 < iVar21;
                if (iVar21 < 1) {
                  plVar16 = (longlong *)plVar9[1];
                  goto LAB_1804a4817;
                }
              }
              plVar16 = (longlong *)*plVar9;
            }
LAB_1804a4817:
            if (bVar2) {
              plVar9 = plVar10;
            }
            plVar10 = plVar9;
            plVar9 = plVar16;
          } while (plVar16 != (longlong *)0x0);
        }
        if (plVar10 == param_2) {
LAB_1804a486b:
          plVar9 = (longlong *)*param_2;
          if ((plVar10 == plVar9) || (plVar10 == param_2)) {
            if ((param_2[4] != 0) && (*(int *)(lVar15 + 0x200) != 0)) {
              plVar10 = plVar9;
              if ((int)plVar9[6] != 0) {
                pbVar8 = *(byte **)(lVar15 + 0x1f8);
                lVar15 = plVar9[5] - (longlong)pbVar8;
                do {
                  bVar1 = *pbVar8;
                  uVar11 = (uint)pbVar8[lVar15];
                  if (bVar1 != uVar11) break;
                  pbVar8 = pbVar8 + 1;
                } while (uVar11 != 0);
                if ((int)(bVar1 - uVar11) < 1) goto LAB_1804a495b;
              }
LAB_1804a4937:
              uVar7 = 0;
LAB_1804a493a:
              if (plVar10 != (longlong *)0x0) {
                FUN_180142a00(param_2,&plStack_e0,plVar10,uVar7,lVar17);
                plVar10 = plStack_e0;
                plVar9 = plStack_e0;
                goto LAB_1804a4993;
              }
            }
          }
          else {
            plVar9 = (longlong *)func_0x00018066bd70(plVar10);
            if (*(int *)(lVar15 + 0x200) != 0) {
              if ((int)plVar10[6] != 0) {
                pbVar8 = *(byte **)(lVar15 + 0x1f8);
                lVar14 = plVar10[5] - (longlong)pbVar8;
                do {
                  bVar1 = *pbVar8;
                  uVar11 = (uint)pbVar8[lVar14];
                  if (bVar1 != uVar11) break;
                  pbVar8 = pbVar8 + 1;
                } while (uVar11 != 0);
                if ((int)(bVar1 - uVar11) < 1) goto LAB_1804a495b;
              }
              if ((int)plVar9[6] != 0) {
                pbVar8 = (byte *)plVar9[5];
                lVar15 = *(longlong *)(lVar15 + 0x1f8) - (longlong)pbVar8;
                do {
                  bVar1 = *pbVar8;
                  uVar11 = (uint)pbVar8[lVar15];
                  if (bVar1 != uVar11) break;
                  pbVar8 = pbVar8 + 1;
                } while (uVar11 != 0);
                if (0 < (int)(bVar1 - uVar11)) {
                  if (*plVar10 == 0) goto LAB_1804a4937;
                  uVar7 = 1;
                  plVar10 = plVar9;
                  goto LAB_1804a493a;
                }
              }
            }
          }
LAB_1804a495b:
          plVar10 = (longlong *)FUN_1800590b0(param_2,auStackX_18,lVar17);
          plVar9 = plVar10;
          if ((char)auStackX_18[0] != '\0') {
            FUN_180142a00(param_2,&plStack_c0,plVar10,0,lVar17);
            plVar10 = plStack_c0;
            plVar9 = plStack_c0;
          }
        }
        else {
          plVar9 = plStack_e0;
          if ((int)plVar10[6] != 0) {
            if (*(int *)(lVar15 + 0x200) != 0) {
              pbVar8 = (byte *)plVar10[5];
              lVar14 = *(longlong *)(lVar15 + 0x1f8) - (longlong)pbVar8;
              do {
                bVar1 = *pbVar8;
                uVar11 = (uint)pbVar8[lVar14];
                if (bVar1 != uVar11) break;
                pbVar8 = pbVar8 + 1;
              } while (uVar11 != 0);
              if ((int)(bVar1 - uVar11) < 1) goto LAB_1804a4993;
            }
            goto LAB_1804a486b;
          }
        }
LAB_1804a4993:
        plStack_e0 = plVar9;
        (**(code **)(plVar10[8] + 0x10))(plVar10 + 8,&unknown_var_1816_ptr);
      }
      lVar15 = lStack_f0;
      plVar20 = plVar20 + 1;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    if (*(longlong *)(lStack_f0 + 0x2b8) != 0) {
      plVar20 = (longlong *)FUN_1801427a0(param_2,*(longlong *)(lStack_f0 + 0x2b8) + 0x1f0);
      (**(code **)(*plVar20 + 0x10))(plVar20,&unknown_var_1816_ptr);
    }
    if (*(longlong *)(lVar15 + 0x2c0) != 0) {
      plVar20 = (longlong *)FUN_1801427a0(param_2,*(longlong *)(lVar15 + 0x2c0) + 0x1f0);
      (**(code **)(*plVar20 + 0x10))(plVar20,&unknown_var_1816_ptr);
    }
    if (*(longlong *)(lVar15 + 0x2c8) != 0) {
      plVar20 = (longlong *)FUN_1801427a0(param_2,*(longlong *)(lVar15 + 0x2c8) + 0x1f0);
      (**(code **)(*plVar20 + 0x10))(plVar20,&unknown_var_1816_ptr);
    }
    if (*(longlong *)(lVar15 + 0x2d0) != 0) {
      plVar20 = (longlong *)FUN_1801427a0(param_2,*(longlong *)(lVar15 + 0x2d0) + 0x1f0);
      (**(code **)(*plVar20 + 0x10))(plVar20,&unknown_var_1816_ptr);
    }
    if (*(longlong *)(lVar15 + 0x370) != 0) {
      plVar20 = (longlong *)FUN_1801427a0(param_2,*(longlong *)(lVar15 + 0x370) + 0x1f0);
      (**(code **)(*plVar20 + 0x10))(plVar20,&unknown_var_1816_ptr);
    }
    iVar21 = 0;
    if (0 < *(int *)(lVar15 + 0x380)) {
      lVar22 = 0;
      do {
        plVar20 = (longlong *)(lVar22 + 0x40 + *(longlong *)(lVar15 + 0x378));
        lVar6 = 6;
        do {
          lVar15 = *plVar20;
          if (lVar15 != 0) {
            lVar17 = lVar15 + 0x1f0;
            plVar10 = param_2;
            if ((longlong *)param_2[2] != (longlong *)0x0) {
              plVar9 = (longlong *)param_2[2];
              do {
                if (*(int *)(lVar15 + 0x200) == 0) {
                  bVar2 = false;
                  plVar16 = (longlong *)plVar9[1];
                }
                else {
                  if ((int)plVar9[6] == 0) {
                    bVar2 = true;
                  }
                  else {
                    pbVar8 = *(byte **)(lVar15 + 0x1f8);
                    lVar14 = plVar9[5] - (longlong)pbVar8;
                    do {
                      uVar11 = (uint)pbVar8[lVar14];
                      iVar12 = *pbVar8 - uVar11;
                      if (*pbVar8 != uVar11) break;
                      pbVar8 = pbVar8 + 1;
                    } while (uVar11 != 0);
                    bVar2 = 0 < iVar12;
                    if (iVar12 < 1) {
                      plVar16 = (longlong *)plVar9[1];
                      goto LAB_1804a4b47;
                    }
                  }
                  plVar16 = (longlong *)*plVar9;
                }
LAB_1804a4b47:
                if (bVar2) {
                  plVar9 = plVar10;
                }
                plVar10 = plVar9;
                plVar9 = plVar16;
              } while (plVar16 != (longlong *)0x0);
            }
            if (plVar10 == param_2) {
LAB_1804a4b9b:
              plVar9 = (longlong *)*param_2;
              if ((plVar10 == plVar9) || (plVar10 == param_2)) {
                if ((param_2[4] != 0) && (*(int *)(lVar15 + 0x200) != 0)) {
                  plVar10 = plVar9;
                  if ((int)plVar9[6] != 0) {
                    pbVar8 = *(byte **)(lVar15 + 0x1f8);
                    lVar15 = plVar9[5] - (longlong)pbVar8;
                    do {
                      bVar1 = *pbVar8;
                      uVar11 = (uint)pbVar8[lVar15];
                      if (bVar1 != uVar11) break;
                      pbVar8 = pbVar8 + 1;
                    } while (uVar11 != 0);
                    if ((int)(bVar1 - uVar11) < 1) goto LAB_1804a4c99;
                  }
LAB_1804a4c77:
                  uVar7 = 0;
LAB_1804a4c7a:
                  if (plVar10 != (longlong *)0x0) {
                    FUN_180142a00(param_2,&plStack_d8,plVar10,uVar7,lVar17);
                    plVar10 = plStack_d8;
                    plVar9 = plStack_d8;
                    goto LAB_1804a4cd0;
                  }
                }
              }
              else {
                plVar9 = (longlong *)func_0x00018066bd70(plVar10);
                if (*(int *)(lVar15 + 0x200) != 0) {
                  if ((int)plVar10[6] != 0) {
                    pbVar8 = *(byte **)(lVar15 + 0x1f8);
                    lVar14 = plVar10[5] - (longlong)pbVar8;
                    do {
                      bVar1 = *pbVar8;
                      uVar11 = (uint)pbVar8[lVar14];
                      if (bVar1 != uVar11) break;
                      pbVar8 = pbVar8 + 1;
                    } while (uVar11 != 0);
                    if ((int)(bVar1 - uVar11) < 1) goto LAB_1804a4c99;
                  }
                  if ((int)plVar9[6] != 0) {
                    pbVar8 = (byte *)plVar9[5];
                    lVar15 = *(longlong *)(lVar15 + 0x1f8) - (longlong)pbVar8;
                    do {
                      bVar1 = *pbVar8;
                      uVar11 = (uint)pbVar8[lVar15];
                      if (bVar1 != uVar11) break;
                      pbVar8 = pbVar8 + 1;
                    } while (uVar11 != 0);
                    if (0 < (int)(bVar1 - uVar11)) {
                      if (*plVar10 == 0) goto LAB_1804a4c77;
                      uVar7 = 1;
                      plVar10 = plVar9;
                      goto LAB_1804a4c7a;
                    }
                  }
                }
              }
LAB_1804a4c99:
              plVar10 = (longlong *)FUN_1800590b0(param_2,acStackX_20,lVar17);
              plVar9 = plVar10;
              if (acStackX_20[0] != '\0') {
                FUN_180142a00(param_2,&plStack_b8,plVar10,0,lVar17);
                plVar10 = plStack_b8;
                plVar9 = plStack_b8;
              }
            }
            else {
              plVar9 = plStack_d8;
              if ((int)plVar10[6] != 0) {
                if (*(int *)(lVar15 + 0x200) != 0) {
                  pbVar8 = (byte *)plVar10[5];
                  lVar14 = *(longlong *)(lVar15 + 0x1f8) - (longlong)pbVar8;
                  do {
                    bVar1 = *pbVar8;
                    uVar11 = (uint)pbVar8[lVar14];
                    if (bVar1 != uVar11) break;
                    pbVar8 = pbVar8 + 1;
                  } while (uVar11 != 0);
                  if ((int)(bVar1 - uVar11) < 1) goto LAB_1804a4cd0;
                }
                goto LAB_1804a4b9b;
              }
            }
LAB_1804a4cd0:
            plStack_d8 = plVar9;
            (**(code **)(plVar10[8] + 0x10))(plVar10 + 8,&unknown_var_1816_ptr);
          }
          plVar20 = plVar20 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        iVar21 = iVar21 + 1;
        lVar22 = lVar22 + 400;
        lVar15 = lStack_f0;
        lVar6 = lStack_e8;
      } while (iVar21 < *(int *)(lStack_f0 + 0x380));
    }
    iVar21 = 0;
    if (0 < *(int *)(lVar15 + 0x390)) {
      lVar22 = 0;
      do {
        plVar20 = (longlong *)(lVar22 + 0x40 + *(longlong *)(lVar15 + 0x388));
        lVar6 = 6;
        do {
          lVar15 = *plVar20;
          if (lVar15 != 0) {
            lVar17 = lVar15 + 0x1f0;
            plVar10 = param_2;
            if ((longlong *)param_2[2] != (longlong *)0x0) {
              plVar9 = (longlong *)param_2[2];
              do {
                if (*(int *)(lVar15 + 0x200) == 0) {
                  bVar2 = false;
                  plVar16 = (longlong *)plVar9[1];
                }
                else {
                  if ((int)plVar9[6] == 0) {
                    bVar2 = true;
                  }
                  else {
                    pbVar8 = *(byte **)(lVar15 + 0x1f8);
                    lVar14 = plVar9[5] - (longlong)pbVar8;
                    do {
                      uVar11 = (uint)pbVar8[lVar14];
                      iVar12 = *pbVar8 - uVar11;
                      if (*pbVar8 != uVar11) break;
                      pbVar8 = pbVar8 + 1;
                    } while (uVar11 != 0);
                    bVar2 = 0 < iVar12;
                    if (iVar12 < 1) {
                      plVar16 = (longlong *)plVar9[1];
                      goto LAB_1804a4db7;
                    }
                  }
                  plVar16 = (longlong *)*plVar9;
                }
LAB_1804a4db7:
                if (bVar2) {
                  plVar9 = plVar10;
                }
                plVar10 = plVar9;
                plVar9 = plVar16;
              } while (plVar16 != (longlong *)0x0);
            }
            if (plVar10 == param_2) {
LAB_1804a4e0b:
              plVar9 = (longlong *)*param_2;
              if ((plVar10 == plVar9) || (plVar10 == param_2)) {
                if ((param_2[4] != 0) && (*(int *)(lVar15 + 0x200) != 0)) {
                  plVar10 = plVar9;
                  if ((int)plVar9[6] != 0) {
                    pbVar8 = *(byte **)(lVar15 + 0x1f8);
                    lVar15 = plVar9[5] - (longlong)pbVar8;
                    do {
                      bVar1 = *pbVar8;
                      uVar11 = (uint)pbVar8[lVar15];
                      if (bVar1 != uVar11) break;
                      pbVar8 = pbVar8 + 1;
                    } while (uVar11 != 0);
                    if ((int)(bVar1 - uVar11) < 1) goto LAB_1804a4f09;
                  }
LAB_1804a4ee7:
                  uVar7 = 0;
LAB_1804a4eea:
                  if (plVar10 != (longlong *)0x0) {
                    FUN_180142a00(param_2,&plStack_d0,plVar10,uVar7,lVar17);
                    plVar10 = plStack_d0;
                    plVar9 = plStack_d0;
                    goto LAB_1804a4f42;
                  }
                }
              }
              else {
                plVar9 = (longlong *)func_0x00018066bd70(plVar10);
                if (*(int *)(lVar15 + 0x200) != 0) {
                  if ((int)plVar10[6] != 0) {
                    pbVar8 = *(byte **)(lVar15 + 0x1f8);
                    lVar14 = plVar10[5] - (longlong)pbVar8;
                    do {
                      bVar1 = *pbVar8;
                      uVar11 = (uint)pbVar8[lVar14];
                      if (bVar1 != uVar11) break;
                      pbVar8 = pbVar8 + 1;
                    } while (uVar11 != 0);
                    if ((int)(bVar1 - uVar11) < 1) goto LAB_1804a4f09;
                  }
                  if ((int)plVar9[6] != 0) {
                    pbVar8 = (byte *)plVar9[5];
                    lVar15 = *(longlong *)(lVar15 + 0x1f8) - (longlong)pbVar8;
                    do {
                      bVar1 = *pbVar8;
                      uVar11 = (uint)pbVar8[lVar15];
                      if (bVar1 != uVar11) break;
                      pbVar8 = pbVar8 + 1;
                    } while (uVar11 != 0);
                    if (0 < (int)(bVar1 - uVar11)) {
                      if (*plVar10 == 0) goto LAB_1804a4ee7;
                      uVar7 = 1;
                      plVar10 = plVar9;
                      goto LAB_1804a4eea;
                    }
                  }
                }
              }
LAB_1804a4f09:
              plVar10 = (longlong *)FUN_1800590b0(param_2,&cStack_f8,lVar17);
              plVar9 = plVar10;
              if (cStack_f8 != '\0') {
                FUN_180142a00(param_2,&plStack_b0,plVar10,0,lVar17);
                plVar10 = plStack_b0;
                plVar9 = plStack_b0;
              }
            }
            else {
              plVar9 = plStack_d0;
              if ((int)plVar10[6] != 0) {
                if (*(int *)(lVar15 + 0x200) != 0) {
                  pbVar8 = (byte *)plVar10[5];
                  lVar14 = *(longlong *)(lVar15 + 0x1f8) - (longlong)pbVar8;
                  do {
                    bVar1 = *pbVar8;
                    uVar11 = (uint)pbVar8[lVar14];
                    if (bVar1 != uVar11) break;
                    pbVar8 = pbVar8 + 1;
                  } while (uVar11 != 0);
                  if ((int)(bVar1 - uVar11) < 1) goto LAB_1804a4f42;
                }
                goto LAB_1804a4e0b;
              }
            }
LAB_1804a4f42:
            plStack_d0 = plVar9;
            (**(code **)(plVar10[8] + 0x10))(plVar10 + 8,&unknown_var_1816_ptr);
          }
          plVar20 = plVar20 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        iVar21 = iVar21 + 1;
        lVar22 = lVar22 + 400;
        lVar15 = lStack_f0;
        lVar6 = lStack_e8;
      } while (iVar21 < *(int *)(lStack_f0 + 0x390));
    }
    iVar21 = 0;
    if (0 < *(int *)(lVar15 + 0x3a0)) {
      lVar22 = 0;
      do {
        lVar17 = *(longlong *)(lVar22 + 0x20 + *(longlong *)(lVar15 + 0x398));
        if (lVar17 != 0) {
          lVar15 = lVar17 + 0x1f0;
          plVar20 = param_2;
          if ((longlong *)param_2[2] != (longlong *)0x0) {
            plVar10 = (longlong *)param_2[2];
            do {
              if (*(int *)(lVar17 + 0x200) == 0) {
                bVar2 = false;
                plVar9 = (longlong *)plVar10[1];
              }
              else {
                if ((int)plVar10[6] == 0) {
                  bVar2 = true;
                }
                else {
                  pbVar8 = *(byte **)(lVar17 + 0x1f8);
                  lVar14 = plVar10[5] - (longlong)pbVar8;
                  do {
                    uVar11 = (uint)pbVar8[lVar14];
                    iVar12 = *pbVar8 - uVar11;
                    if (*pbVar8 != uVar11) break;
                    pbVar8 = pbVar8 + 1;
                  } while (uVar11 != 0);
                  bVar2 = 0 < iVar12;
                  if (iVar12 < 1) {
                    plVar9 = (longlong *)plVar10[1];
                    goto LAB_1804a5019;
                  }
                }
                plVar9 = (longlong *)*plVar10;
              }
LAB_1804a5019:
              if (bVar2) {
                plVar10 = plVar20;
              }
              plVar20 = plVar10;
              plVar10 = plVar9;
            } while (plVar9 != (longlong *)0x0);
          }
          if (plVar20 == param_2) {
LAB_1804a506b:
            plVar10 = (longlong *)*param_2;
            if ((plVar20 == plVar10) || (plVar20 == param_2)) {
              if ((param_2[4] != 0) && (*(int *)(lVar17 + 0x200) != 0)) {
                plVar20 = plVar10;
                if ((int)plVar10[6] != 0) {
                  pbVar8 = *(byte **)(lVar17 + 0x1f8);
                  lVar17 = plVar10[5] - (longlong)pbVar8;
                  do {
                    bVar1 = *pbVar8;
                    uVar11 = (uint)pbVar8[lVar17];
                    if (bVar1 != uVar11) break;
                    pbVar8 = pbVar8 + 1;
                  } while (uVar11 != 0);
                  if ((int)(bVar1 - uVar11) < 1) goto LAB_1804a5159;
                }
LAB_1804a5137:
                uVar7 = 0;
LAB_1804a513a:
                if (plVar20 != (longlong *)0x0) {
                  FUN_180142a00(param_2,&plStack_c8,plVar20,uVar7,lVar15);
                  plVar20 = plStack_c8;
                  plVar10 = plStack_c8;
                  goto LAB_1804a5192;
                }
              }
            }
            else {
              plVar10 = (longlong *)func_0x00018066bd70(plVar20);
              if (*(int *)(lVar17 + 0x200) != 0) {
                if ((int)plVar20[6] != 0) {
                  pbVar8 = *(byte **)(lVar17 + 0x1f8);
                  lVar14 = plVar20[5] - (longlong)pbVar8;
                  do {
                    bVar1 = *pbVar8;
                    uVar11 = (uint)pbVar8[lVar14];
                    if (bVar1 != uVar11) break;
                    pbVar8 = pbVar8 + 1;
                  } while (uVar11 != 0);
                  if ((int)(bVar1 - uVar11) < 1) goto LAB_1804a5159;
                }
                if ((int)plVar10[6] != 0) {
                  pbVar8 = (byte *)plVar10[5];
                  lVar17 = *(longlong *)(lVar17 + 0x1f8) - (longlong)pbVar8;
                  do {
                    bVar1 = *pbVar8;
                    uVar11 = (uint)pbVar8[lVar17];
                    if (bVar1 != uVar11) break;
                    pbVar8 = pbVar8 + 1;
                  } while (uVar11 != 0);
                  if (0 < (int)(bVar1 - uVar11)) {
                    if (*plVar20 == 0) goto LAB_1804a5137;
                    uVar7 = 1;
                    plVar20 = plVar10;
                    goto LAB_1804a513a;
                  }
                }
              }
            }
LAB_1804a5159:
            plVar20 = (longlong *)FUN_1800590b0(param_2,acStack_f7,lVar15);
            plVar10 = plVar20;
            if (acStack_f7[0] != '\0') {
              FUN_180142a00(param_2,&plStack_a8,plVar20,0,lVar15);
              plVar20 = plStack_a8;
              plVar10 = plStack_a8;
            }
          }
          else {
            plVar10 = plStack_c8;
            if ((int)plVar20[6] != 0) {
              if (*(int *)(lVar17 + 0x200) != 0) {
                pbVar8 = (byte *)plVar20[5];
                lVar14 = *(longlong *)(lVar17 + 0x1f8) - (longlong)pbVar8;
                do {
                  bVar1 = *pbVar8;
                  uVar11 = (uint)pbVar8[lVar14];
                  if (bVar1 != uVar11) break;
                  pbVar8 = pbVar8 + 1;
                } while (uVar11 != 0);
                if ((int)(bVar1 - uVar11) < 1) goto LAB_1804a5192;
              }
              goto LAB_1804a506b;
            }
          }
LAB_1804a5192:
          plStack_c8 = plVar10;
          (**(code **)(plVar20[8] + 0x10))(plVar20 + 8,&unknown_var_1816_ptr);
          lVar15 = lStack_f0;
        }
        iVar21 = iVar21 + 1;
        lVar22 = lVar22 + 0x58;
      } while (iVar21 < *(int *)(lVar15 + 0x3a0));
    }
    lVar6 = func_0x00018066bd70(lVar6);
    puVar3 = puStack_a0;
    puVar4 = puStack_98;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





