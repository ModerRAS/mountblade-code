#include "TaleWorlds.Native.Split.h"

// 99_part_05_part038.c - 10 个函数

// 函数: void FUN_1802efad0(longlong param_1,longlong param_2)
void FUN_1802efad0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  longlong *plVar6;
  uint64_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  longlong **pplVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint64_t uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar19;
  char cVar20;
  int8_t auStack_e8 [32];
  longlong *plStack_c8;
  longlong **pplStack_c0;
  longlong *plStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  uint64_t uStack_a0;
  longlong **pplStack_98;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  ulonglong uStack_48;
  ulonglong uVar18;
  
  if (param_2 == 0) {
    return;
  }
  uStack_a0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  plVar6 = *(longlong **)(param_2 + 0x210);
  uVar18 = 0;
  uVar13 = uVar18;
  lStack_b0 = param_1;
  lStack_a8 = param_2;
  if (plVar6 != (longlong *)0x0) {
    uVar13 = (**(code **)(*plVar6 + 0x58))(plVar6,*(uint64_t *)(param_2 + 0x208));
  }
  FUN_1802ec3d0(param_1,*(uint64_t *)(param_2 + 0x208),uVar13);
  lVar15 = *(longlong *)(param_2 + 0x1a8);
  if (*(longlong *)(param_2 + 0x1b0) - lVar15 >> 3 != 0) {
    pplStack_c0 = &plStack_c8;
    uVar13 = uVar18;
    do {
      (**(code **)(**(longlong **)(uVar13 + lVar15) + 0xa8))
                (*(longlong **)(uVar13 + lVar15),&plStack_b8);
      uVar7 = *(uint64_t *)(param_1 + 0x260);
      pplStack_98 = &plStack_c8;
      plStack_c8 = plStack_b8;
      if (plStack_b8 != (longlong *)0x0) {
        (**(code **)(*plStack_b8 + 0x28))();
      }
      FUN_1802fc0f0(uVar7,plStack_c8);
      if (plStack_c8 != (longlong *)0x0) {
        (**(code **)(*plStack_c8 + 0x38))();
      }
      if (plStack_b8 != (longlong *)0x0) {
        (**(code **)(*plStack_b8 + 0x38))();
      }
      uVar17 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar17;
      uVar13 = uVar13 + 8;
      lVar15 = *(longlong *)(param_2 + 0x1a8);
    } while ((ulonglong)(longlong)(int)uVar17 <
             (ulonglong)(*(longlong *)(param_2 + 0x1b0) - lVar15 >> 3));
  }
  cVar20 = '\0';
  if ('\0' < *(char *)(param_2 + 0x20)) {
    do {
      lVar12 = lStack_b0;
      uVar18 = 0;
      lVar19 = (longlong)cVar20 * 0x100;
      lVar15 = *(longlong *)(param_2 + 0x18);
      lVar16 = *(longlong *)(lVar19 + 0xb0 + lVar15);
      uVar13 = uVar18;
      if (*(longlong *)(lVar19 + 0xb8 + lVar15) - lVar16 >> 3 != 0) {
        do {
          (**(code **)(**(longlong **)(uVar13 + lVar16) + 0xa8))
                    (*(longlong **)(uVar13 + lVar16),&pplStack_c0);
          pplVar11 = pplStack_c0;
          uVar7 = *(uint64_t *)(lVar12 + 0x260);
          uVar14 = (*(code *)(*pplStack_c0)[0x2b])(pplStack_c0);
          FUN_1802fbf30(uVar7,cVar20,pplVar11,uVar14);
          if (pplStack_c0 != (longlong **)0x0) {
            (*(code *)(*pplStack_c0)[7])();
          }
          uVar17 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar17;
          lVar16 = *(longlong *)(lVar19 + 0xb0 + lVar15);
          param_2 = lStack_a8;
          param_1 = lStack_b0;
          uVar13 = uVar13 + 8;
        } while ((ulonglong)(longlong)(int)uVar17 <
                 (ulonglong)(*(longlong *)(lVar19 + 0xb8 + lVar15) - lVar16 >> 3));
      }
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x260) + 0x18);
      puVar2 = (uint64_t *)(lVar19 + 0x30 + lVar15);
      uVar7 = puVar2[1];
      puVar3 = (uint64_t *)(lVar19 + 0x30 + lVar16);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      puVar2 = (uint64_t *)(lVar19 + 0x40 + lVar15);
      uVar7 = puVar2[1];
      puVar3 = (uint64_t *)(lVar19 + 0x40 + lVar16);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      *(int32_t *)(lVar19 + 0x4c + lVar16) = 0x3f800000;
      do {
        LOCK();
        puVar1 = (uint *)(lVar19 + lVar15);
        uVar17 = *puVar1;
        *puVar1 = *puVar1 | 1;
        UNLOCK();
      } while ((uVar17 & 1) != 0);
      puVar2 = (uint64_t *)(lVar19 + 4 + lVar15);
      uStack_88 = *puVar2;
      uStack_80 = puVar2[1];
      puVar2 = (uint64_t *)(lVar19 + 0x14 + lVar15);
      uStack_78 = *puVar2;
      uStack_70 = puVar2[1];
      *(int32_t *)(lVar19 + lVar15) = 0;
      do {
        LOCK();
        puVar1 = (uint *)(lVar19 + lVar16);
        uVar17 = *puVar1;
        *puVar1 = *puVar1 | 1;
        UNLOCK();
      } while ((uVar17 & 1) != 0);
      puVar2 = (uint64_t *)(lVar19 + 4 + lVar16);
      *puVar2 = uStack_88;
      puVar2[1] = uStack_80;
      puVar2 = (uint64_t *)(lVar19 + 0x14 + lVar16);
      *puVar2 = uStack_78;
      puVar2[1] = uStack_70;
      *(int32_t *)(lVar19 + lVar16) = 0;
      puVar2 = (uint64_t *)(lVar19 + 0x60 + lVar15);
      uVar7 = puVar2[1];
      puVar3 = (uint64_t *)(lVar19 + 0x60 + lVar16);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      puVar2 = (uint64_t *)(lVar19 + 0x70 + lVar15);
      uVar7 = puVar2[1];
      puVar3 = (uint64_t *)(lVar19 + 0x70 + lVar16);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      puVar4 = (int32_t *)(lVar19 + 0x80 + lVar15);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar5 = (int32_t *)(lVar19 + 0x80 + lVar16);
      *puVar5 = *puVar4;
      puVar5[1] = uVar8;
      puVar5[2] = uVar9;
      puVar5[3] = uVar10;
      puVar2 = (uint64_t *)(lVar19 + 0x90 + lVar15);
      uVar7 = puVar2[1];
      puVar3 = (uint64_t *)(lVar19 + 0x90 + lVar16);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      cVar20 = cVar20 + '\x01';
      uStack_68 = uStack_88;
      uStack_60 = uStack_80;
      uStack_58 = uStack_78;
      uStack_50 = uStack_70;
    } while (cVar20 < *(char *)(param_2 + 0x20));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1802efdd0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (*param_2 != 0) {
    plVar6 = *(longlong **)(param_1 + 0x208);
    plVar4 = (longlong *)0x0;
    lVar8 = 1;
    if (plVar6 < *(longlong **)(param_1 + 0x210)) {
      *(longlong **)(param_1 + 0x208) = plVar6 + 1;
      plVar5 = (longlong *)*param_2;
      *plVar6 = (longlong)plVar5;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))();
      }
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x200);
      lVar3 = (longlong)plVar6 - (longlong)plVar5 >> 3;
      lVar7 = lVar8;
      if ((lVar3 == 0) || (lVar7 = lVar3 * 2, plVar2 = plVar4, plVar9 = plVar4, lVar7 != 0)) {
        plVar2 = (longlong *)
                 FUN_18062b420(_DAT_180c8ed18,lVar7 * 8,*(int8_t *)(param_1 + 0x218),param_4,
                               0xfffffffffffffffe);
        plVar6 = *(longlong **)(param_1 + 0x208);
        plVar5 = *(longlong **)(param_1 + 0x200);
        plVar9 = plVar2;
      }
      for (; plVar5 != plVar6; plVar5 = plVar5 + 1) {
        *plVar2 = *plVar5;
        *plVar5 = 0;
        plVar2 = plVar2 + 1;
      }
      plVar6 = (longlong *)*param_2;
      *plVar2 = (longlong)plVar6;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))();
      }
      plVar6 = *(longlong **)(param_1 + 0x208);
      plVar5 = *(longlong **)(param_1 + 0x200);
      if (plVar5 != plVar6) {
        do {
          if ((longlong *)*plVar5 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar5 + 0x38))();
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar6);
        plVar5 = *(longlong **)(param_1 + 0x200);
      }
      if (plVar5 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar5);
      }
      *(longlong **)(param_1 + 0x200) = plVar9;
      *(longlong **)(param_1 + 0x208) = plVar2 + 1;
      *(longlong **)(param_1 + 0x210) = plVar9 + lVar7;
    }
    cVar1 = (**(code **)(*(longlong *)*param_2 + 0xe8))();
    if (cVar1 != '\0') {
      lVar7 = *param_2;
      plVar6 = *(longlong **)(param_1 + 0x228);
      if (plVar6 < *(longlong **)(param_1 + 0x230)) {
        *(longlong **)(param_1 + 0x228) = plVar6 + 1;
        *plVar6 = lVar7;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x220);
        lVar3 = (longlong)plVar6 - (longlong)plVar5 >> 3;
        if ((lVar3 == 0) || (lVar8 = lVar3 * 2, lVar8 != 0)) {
          plVar4 = (longlong *)
                   FUN_18062b420(_DAT_180c8ed18,lVar8 * 8,*(int8_t *)(param_1 + 0x238));
          plVar6 = *(longlong **)(param_1 + 0x228);
          plVar5 = *(longlong **)(param_1 + 0x220);
        }
        if (plVar5 != plVar6) {
                    // WARNING: Subroutine does not return
          memmove(plVar4,plVar5,(longlong)plVar6 - (longlong)plVar5);
        }
        *plVar4 = lVar7;
        if (*(longlong *)(param_1 + 0x220) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(longlong **)(param_1 + 0x220) = plVar4;
        *(longlong **)(param_1 + 0x228) = plVar4 + 1;
        *(longlong **)(param_1 + 0x230) = plVar4 + lVar8;
      }
    }
    cVar1 = (**(code **)(*(longlong *)*param_2 + 0x128))();
    if (cVar1 != '\0') {
      FUN_1802e8580(param_1,1);
    }
    (**(code **)(*(longlong *)*param_2 + 0x160))((longlong *)*param_2,param_1);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      (**(code **)(*(longlong *)*param_2 + 0x158))();
    }
    FUN_1802ed990(param_1,1);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1802f0080(longlong param_1,longlong *param_2,int32_t param_3)

{
  uint64_t uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  
  iVar16 = 0;
  plVar4 = *(longlong **)(param_1 + 0x200);
  uVar12 = *(longlong *)(param_1 + 0x208) - (longlong)plVar4 >> 3;
  if (uVar12 != 0) {
    iVar11 = iVar16;
    do {
      if (*plVar4 == *param_2) break;
      iVar11 = iVar11 + 1;
      plVar4 = plVar4 + 1;
    } while ((ulonglong)(longlong)iVar11 < uVar12);
  }
  if (**(char **)(*param_2 + 0x10) != '\0') {
    lVar5 = *(longlong *)(param_1 + 0x228);
    lVar6 = *(longlong *)(param_1 + 0x220);
    if (lVar5 - lVar6 >> 3 != 0) {
      lVar8 = 0;
      do {
        if (*(longlong *)(lVar6 + lVar8) == *param_2) {
          *(uint64_t *)(lVar6 + lVar8) = *(uint64_t *)(lVar6 + -8 + (lVar5 - lVar6 >> 3) * 8);
          lVar6 = *(longlong *)(param_1 + 0x228);
          lVar5 = *(longlong *)(param_1 + 0x220);
          uVar10 = lVar6 - lVar5 >> 3;
          uVar13 = uVar10 - 1;
          if (uVar10 < uVar13) {
            if (*(longlong *)(param_1 + 0x230) - lVar6 >> 3 == -1) {
                    // WARNING: Subroutine does not return
              memset(lVar6,0,0xfffffffffffffff8,uVar12,0xfffffffffffffffe);
            }
            if (uVar10 == 0) {
              uVar10 = 1;
            }
            else {
              uVar10 = uVar10 * 2;
            }
            if (uVar10 < uVar13) {
              uVar10 = uVar13;
            }
            if (uVar10 == 0) {
              uVar1 = 0;
            }
            else {
              uVar1 = FUN_18062b420(_DAT_180c8ed18,uVar10 * 8,*(int8_t *)(param_1 + 0x238));
              lVar6 = *(longlong *)(param_1 + 0x228);
              lVar5 = *(longlong *)(param_1 + 0x220);
            }
            if (lVar5 == lVar6) {
                    // WARNING: Subroutine does not return
              memset(uVar1,0,0xfffffffffffffff8);
            }
                    // WARNING: Subroutine does not return
            memmove(uVar1,lVar5,lVar6 - lVar5);
          }
          lVar5 = lVar5 + uVar13 * 8;
          *(longlong *)(param_1 + 0x228) = lVar5;
        }
        iVar16 = iVar16 + 1;
        lVar8 = lVar8 + 8;
        lVar6 = *(longlong *)(param_1 + 0x220);
      } while ((ulonglong)(longlong)iVar16 < (ulonglong)(lVar5 - lVar6 >> 3));
    }
  }
  uVar13 = 0;
  lVar5 = *(longlong *)(param_1 + 0x200);
  uVar12 = uVar13;
  if (*(longlong *)(param_1 + 0x208) - lVar5 >> 3 != 0) {
    do {
      plVar2 = (longlong *)0x0;
      plVar4 = (longlong *)*param_2;
      if (*(longlong **)(uVar13 + lVar5) == plVar4) {
        (**(code **)(*plVar4 + 0x80))(plVar4,param_3);
        (**(code **)(*(longlong *)*param_2 + 0x160))((longlong *)*param_2,0);
        lVar5 = *(longlong *)(param_1 + 0x200);
        plVar4 = *(longlong **)(lVar5 + -8 + (*(longlong *)(param_1 + 0x208) - lVar5 >> 3) * 8);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4);
        }
        plVar3 = *(longlong **)(lVar5 + uVar13);
        *(longlong **)(lVar5 + uVar13) = plVar4;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x38))();
        }
        plVar4 = *(longlong **)(param_1 + 0x208);
        plVar3 = *(longlong **)(param_1 + 0x200);
        uVar7 = (longlong)plVar4 - (longlong)plVar3 >> 3;
        uVar10 = uVar7 - 1;
        if (uVar7 < uVar10) {
          if (*(longlong *)(param_1 + 0x210) - (longlong)plVar4 >> 3 == -1) {
            for (lVar5 = 0x1fffffffffffffff; lVar5 != 0; lVar5 = lVar5 + -1) {
              *plVar4 = 0;
              plVar4 = plVar4 + 1;
            }
            *(longlong *)(param_1 + 0x208) = *(longlong *)(param_1 + 0x208) + -8;
          }
          else {
            uVar9 = uVar7 * 2;
            if (uVar7 == 0) {
              uVar9 = 1;
            }
            if (uVar9 < uVar10) {
              uVar9 = uVar10;
            }
            plVar15 = plVar2;
            if (uVar9 != 0) {
              plVar2 = (longlong *)
                       FUN_18062b420(_DAT_180c8ed18,uVar9 * 8,*(int8_t *)(param_1 + 0x218));
              plVar4 = *(longlong **)(param_1 + 0x208);
              plVar3 = *(longlong **)(param_1 + 0x200);
              plVar15 = plVar2;
            }
            for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
              *plVar2 = *plVar3;
              *plVar3 = 0;
              plVar2 = plVar2 + 1;
            }
            plVar4 = plVar2;
            for (lVar5 = 0x1fffffffffffffff; lVar5 != 0; lVar5 = lVar5 + -1) {
              *plVar4 = 0;
              plVar4 = plVar4 + 1;
            }
            plVar4 = *(longlong **)(param_1 + 0x208);
            plVar3 = *(longlong **)(param_1 + 0x200);
            if (plVar3 != plVar4) {
              do {
                if ((longlong *)*plVar3 != (longlong *)0x0) {
                  (**(code **)(*(longlong *)*plVar3 + 0x38))();
                }
                plVar3 = plVar3 + 1;
              } while (plVar3 != plVar4);
              plVar3 = *(longlong **)(param_1 + 0x200);
            }
            if (plVar3 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(plVar3);
            }
            *(longlong **)(param_1 + 0x200) = plVar15;
            *(longlong **)(param_1 + 0x208) = plVar2 + -1;
            *(longlong **)(param_1 + 0x210) = plVar15 + uVar9;
          }
        }
        else {
          plVar2 = plVar3 + uVar10;
          if (plVar2 != plVar4) {
            do {
              if ((longlong *)*plVar2 != (longlong *)0x0) {
                (**(code **)(*(longlong *)*plVar2 + 0x38))();
              }
              plVar2 = plVar2 + 1;
            } while (plVar2 != plVar4);
            plVar3 = *(longlong **)(param_1 + 0x200);
          }
          *(longlong **)(param_1 + 0x208) = plVar3 + uVar10;
        }
        FUN_1801b0660(*(uint64_t *)(param_1 + 0x20),*param_2);
        FUN_1802ed990(param_1,1);
      }
      uVar14 = (int)uVar12 + 1;
      uVar13 = uVar13 + 8;
      lVar5 = *(longlong *)(param_1 + 0x200);
      uVar12 = (ulonglong)uVar14;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)(*(longlong *)(param_1 + 0x208) - lVar5 >> 3));
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return 1;
}



uint64_t FUN_1802f0510(longlong param_1,char param_2,int32_t param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_1 + 0x200);
  lVar4 = *plVar1;
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x208) - lVar4 >> 3 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar3 + lVar4) + 0x80))(*(longlong **)(lVar3 + lVar4),param_3);
      (**(code **)(**(longlong **)(lVar3 + *plVar1) + 0x160))(*(longlong **)(lVar3 + *plVar1),0);
      if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_1801b0660(*(longlong *)(param_1 + 0x20),*(uint64_t *)(*plVar1 + lVar3));
      }
      lVar4 = *plVar1;
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while ((ulonglong)(longlong)iVar2 < (ulonglong)(*(longlong *)(param_1 + 0x208) - lVar4 >> 3));
  }
  FUN_1800b8500(plVar1);
  *(uint64_t *)(param_1 + 0x228) = *(uint64_t *)(param_1 + 0x220);
  if (param_2 != '\0') {
    FUN_1802ed990(param_1,1);
  }
  return 1;
}



uint64_t FUN_1802f0516(longlong param_1,char param_2,int32_t param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_1 + 0x200);
  lVar4 = *plVar1;
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x208) - lVar4 >> 3 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar3 + lVar4) + 0x80))(*(longlong **)(lVar3 + lVar4),param_3);
      (**(code **)(**(longlong **)(lVar3 + *plVar1) + 0x160))(*(longlong **)(lVar3 + *plVar1),0);
      if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_1801b0660(*(longlong *)(param_1 + 0x20),*(uint64_t *)(*plVar1 + lVar3));
      }
      lVar4 = *plVar1;
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while ((ulonglong)(longlong)iVar2 < (ulonglong)(*(longlong *)(param_1 + 0x208) - lVar4 >> 3));
  }
  FUN_1800b8500(plVar1);
  *(uint64_t *)(param_1 + 0x228) = *(uint64_t *)(param_1 + 0x220);
  if (param_2 != '\0') {
    FUN_1802ed990(param_1,1);
  }
  return 1;
}



uint64_t FUN_1802f0550(void)

{
  longlong *unaff_RBX;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong uVar1;
  longlong in_R9;
  int32_t unaff_R14D;
  char unaff_R15B;
  
  uVar1 = (ulonglong)unaff_ESI;
  do {
    (**(code **)(**(longlong **)(uVar1 + in_R9) + 0x80))(*(longlong **)(uVar1 + in_R9),unaff_R14D);
    (**(code **)(**(longlong **)(uVar1 + *unaff_RBX) + 0x160))(*(longlong **)(uVar1 + *unaff_RBX),0)
    ;
    if (*(longlong *)(unaff_RBP + 0x20) != 0) {
      FUN_1801b0660(*(longlong *)(unaff_RBP + 0x20),*(uint64_t *)(*unaff_RBX + uVar1));
    }
    in_R9 = *unaff_RBX;
    unaff_ESI = unaff_ESI + 1;
    uVar1 = uVar1 + 8;
  } while ((ulonglong)(longlong)(int)unaff_ESI < (ulonglong)(unaff_RBX[1] - in_R9 >> 3));
  FUN_1800b8500();
  *(uint64_t *)(unaff_RBP + 0x228) = *(uint64_t *)(unaff_RBP + 0x220);
  if (unaff_R15B != '\0') {
    FUN_1802ed990();
  }
  return 1;
}



uint64_t FUN_1802f05b8(void)

{
  longlong unaff_RBP;
  char unaff_R15B;
  
  FUN_1800b8500();
  *(uint64_t *)(unaff_RBP + 0x228) = *(uint64_t *)(unaff_RBP + 0x220);
  if (unaff_R15B != '\0') {
    FUN_1802ed990();
  }
  return 1;
}



int8_t FUN_1802f05e7(void)

{
  FUN_1802ed990();
  return 1;
}






// 函数: void FUN_1802f0600(longlong param_1,int32_t param_2)
void FUN_1802f0600(longlong param_1,int32_t param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  char cVar8;
  
  uVar4 = 0;
  uVar5 = uVar4;
  uVar7 = uVar4;
  if (*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802f0600(*(uint64_t *)(uVar7 + *(longlong *)(param_1 + 0x1c0)),param_2);
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
      uVar7 = uVar7 + 8;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  uVar5 = uVar4;
  uVar7 = uVar4;
  if (*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(uVar7 + *(longlong *)(param_1 + 0xf0));
      (**(code **)(*plVar1 + 0x1b0))(plVar1,param_2);
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
      uVar7 = uVar7 + 8;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3));
  }
  lVar2 = *(longlong *)(param_1 + 0x260);
  if (lVar2 != 0) {
    cVar8 = '\0';
    if ('\0' < *(char *)(lVar2 + 0x20)) {
      do {
        lVar3 = (longlong)cVar8 * 0x100 + *(longlong *)(lVar2 + 0x18);
        uVar5 = uVar4;
        uVar7 = uVar4;
        if (*(longlong *)(lVar3 + 0xb8) - *(longlong *)(lVar3 + 0xb0) >> 3 != 0) {
          do {
            plVar1 = *(longlong **)(uVar5 + *(longlong *)(lVar3 + 0xb0));
            (**(code **)(*plVar1 + 0x1b0))(plVar1,0xffffffff);
            uVar6 = (int)uVar7 + 1;
            uVar5 = uVar5 + 8;
            uVar7 = (ulonglong)uVar6;
          } while ((ulonglong)(longlong)(int)uVar6 <
                   (ulonglong)(*(longlong *)(lVar3 + 0xb8) - *(longlong *)(lVar3 + 0xb0) >> 3));
        }
        cVar8 = cVar8 + '\x01';
      } while (cVar8 < *(char *)(lVar2 + 0x20));
    }
    uVar5 = uVar4;
    if (*(longlong *)(lVar2 + 0x1b0) - *(longlong *)(lVar2 + 0x1a8) >> 3 != 0) {
      do {
        plVar1 = *(longlong **)(uVar4 + *(longlong *)(lVar2 + 0x1a8));
        (**(code **)(*plVar1 + 0x1b0))(plVar1,param_2);
        uVar4 = uVar4 + 8;
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
      } while ((ulonglong)(longlong)(int)uVar6 <
               (ulonglong)(*(longlong *)(lVar2 + 0x1b0) - *(longlong *)(lVar2 + 0x1a8) >> 3));
    }
  }
  return;
}






// 函数: void FUN_1802f06d7(void)
void FUN_1802f06d7(void)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong unaff_RBP;
  ulonglong uVar3;
  longlong unaff_RDI;
  int32_t unaff_R12D;
  uint uVar4;
  ulonglong uVar5;
  char cVar6;
  
  cVar6 = '\0';
  if ((char)unaff_RBP < *(char *)(unaff_RDI + 0x20)) {
    do {
      uVar5 = unaff_RBP & 0xffffffff;
      lVar2 = (longlong)cVar6 * 0x100 + *(longlong *)(unaff_RDI + 0x18);
      uVar3 = unaff_RBP;
      if (*(longlong *)(lVar2 + 0xb8) - *(longlong *)(lVar2 + 0xb0) >> 3 != 0) {
        do {
          plVar1 = *(longlong **)(uVar3 + *(longlong *)(lVar2 + 0xb0));
          (**(code **)(*plVar1 + 0x1b0))(plVar1,0xffffffff);
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
          uVar3 = uVar3 + 8;
        } while ((ulonglong)(longlong)(int)uVar4 <
                 (ulonglong)(*(longlong *)(lVar2 + 0xb8) - *(longlong *)(lVar2 + 0xb0) >> 3));
      }
      cVar6 = cVar6 + '\x01';
    } while (cVar6 < *(char *)(unaff_RDI + 0x20));
  }
  uVar3 = unaff_RBP;
  if (*(longlong *)(unaff_RDI + 0x1b0) - *(longlong *)(unaff_RDI + 0x1a8) >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(unaff_RBP + *(longlong *)(unaff_RDI + 0x1a8));
      (**(code **)(*plVar1 + 0x1b0))(plVar1,unaff_R12D);
      unaff_RBP = unaff_RBP + 8;
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
    } while ((ulonglong)(longlong)(int)uVar4 <
             (ulonglong)(*(longlong *)(unaff_RDI + 0x1b0) - *(longlong *)(unaff_RDI + 0x1a8) >> 3));
  }
  return;
}






// 函数: void FUN_1802f06e9(void)
void FUN_1802f06e9(void)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong unaff_RBP;
  ulonglong uVar3;
  longlong unaff_RDI;
  int32_t unaff_R12D;
  uint uVar4;
  ulonglong uVar5;
  char unaff_R15B;
  
  do {
    uVar5 = unaff_RBP & 0xffffffff;
    lVar2 = (longlong)unaff_R15B * 0x100 + *(longlong *)(unaff_RDI + 0x18);
    uVar3 = unaff_RBP;
    if (*(longlong *)(lVar2 + 0xb8) - *(longlong *)(lVar2 + 0xb0) >> 3 != 0) {
      do {
        plVar1 = *(longlong **)(uVar3 + *(longlong *)(lVar2 + 0xb0));
        (**(code **)(*plVar1 + 0x1b0))(plVar1,0xffffffff);
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar3 = uVar3 + 8;
      } while ((ulonglong)(longlong)(int)uVar4 <
               (ulonglong)(*(longlong *)(lVar2 + 0xb8) - *(longlong *)(lVar2 + 0xb0) >> 3));
    }
    unaff_R15B = unaff_R15B + '\x01';
  } while (unaff_R15B < *(char *)(unaff_RDI + 0x20));
  uVar3 = unaff_RBP;
  if (*(longlong *)(unaff_RDI + 0x1b0) - *(longlong *)(unaff_RDI + 0x1a8) >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(unaff_RBP + *(longlong *)(unaff_RDI + 0x1a8));
      (**(code **)(*plVar1 + 0x1b0))(plVar1,unaff_R12D);
      unaff_RBP = unaff_RBP + 8;
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
    } while ((ulonglong)(longlong)(int)uVar4 <
             (ulonglong)(*(longlong *)(unaff_RDI + 0x1b0) - *(longlong *)(unaff_RDI + 0x1a8) >> 3));
  }
  return;
}






// 函数: void FUN_1802f0768(void)
void FUN_1802f0768(void)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong unaff_RBP;
  ulonglong uVar3;
  longlong unaff_RDI;
  int32_t unaff_R12D;
  
  uVar3 = unaff_RBP;
  if (*(longlong *)(unaff_RDI + 0x1b0) - *(longlong *)(unaff_RDI + 0x1a8) >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(unaff_RBP + *(longlong *)(unaff_RDI + 0x1a8));
      (**(code **)(*plVar1 + 0x1b0))(plVar1,unaff_R12D);
      unaff_RBP = unaff_RBP + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(unaff_RDI + 0x1b0) - *(longlong *)(unaff_RDI + 0x1a8) >> 3));
  }
  return;
}






// 函数: void FUN_1802f0784(void)
void FUN_1802f0784(void)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RDI;
  int32_t unaff_R12D;
  ulonglong uVar3;
  
  uVar3 = unaff_RBP;
  do {
    plVar1 = *(longlong **)(unaff_RBP + *(longlong *)(unaff_RDI + 0x1a8));
    (**(code **)(*plVar1 + 0x1b0))(plVar1,unaff_R12D);
    unaff_RBP = unaff_RBP + 8;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while ((ulonglong)(longlong)(int)uVar2 <
           (ulonglong)(*(longlong *)(unaff_RDI + 0x1b0) - *(longlong *)(unaff_RDI + 0x1a8) >> 3));
  return;
}






// 函数: void FUN_1802f07e0(longlong param_1)
void FUN_1802f07e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  lVar2 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x208) - lVar2 >> 3 != 0) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar4 + lVar2);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      FUN_180354170(plVar1);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
      lVar2 = *(longlong *)(param_1 + 0x200);
    } while ((ulonglong)(longlong)iVar3 < (ulonglong)(*(longlong *)(param_1 + 0x208) - lVar2 >> 3));
  }
  return;
}






// 函数: void FUN_1802f0890(longlong param_1,int32_t param_2)
void FUN_1802f0890(longlong param_1,int32_t param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = 0;
  lVar4 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x208) - lVar4 >> 3 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + lVar4);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      (**(code **)(*plVar1 + 200))(plVar1,param_2);
      (**(code **)(*plVar1 + 0x38))(plVar1);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
      lVar4 = *(longlong *)(param_1 + 0x200);
    } while ((ulonglong)(longlong)iVar2 < (ulonglong)(*(longlong *)(param_1 + 0x208) - lVar4 >> 3));
  }
  return;
}






// 函数: void FUN_1802f0940(longlong param_1,int32_t param_2)
void FUN_1802f0940(longlong param_1,int32_t param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = 0;
  *(int32_t *)(param_1 + 700) = param_2;
  uVar3 = uVar1;
  if (*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802f0940(*(uint64_t *)(*(longlong *)(param_1 + 0x1c0) + uVar1),param_2,1);
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  return;
}






// 函数: void FUN_1802f0976(void)
void FUN_1802f0976(void)

{
  longlong unaff_RBX;
  ulonglong uVar1;
  uint unaff_EDI;
  
  uVar1 = (ulonglong)unaff_EDI;
  do {
    FUN_1802f0940(*(uint64_t *)(*(longlong *)(unaff_RBX + 0x1c0) + uVar1));
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3));
  return;
}






