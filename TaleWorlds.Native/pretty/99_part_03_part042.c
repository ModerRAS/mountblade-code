#include "TaleWorlds.Native.Split.h"

// 99_part_03_part042.c - 2 个函数

// 函数: void FUN_1801f5080(longlong param_1,longlong param_2,uint64_t *param_3,uint param_4,char param_5)
void FUN_1801f5080(longlong param_1,longlong param_2,uint64_t *param_3,uint param_4,char param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int32_t uVar4;
  longlong *plVar5;
  int32_t *puVar6;
  uint64_t *puVar7;
  byte *pbVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  uint64_t *puVar14;
  uint64_t *puVar15;
  int32_t *puVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  int iStack_d8;
  longlong lStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  code *pcStack_a8;
  code *pcStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  code *pcStack_88;
  code *pcStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  longlong *plStack_68;
  longlong *plStack_60;
  uint64_t uStack_58;
  int8_t auStack_50 [8];
  int8_t auStack_48 [8];
  int8_t auStack_40 [8];
  
  uStack_58 = 0xfffffffffffffffe;
  puVar16 = (int32_t *)(param_2 + 0x74);
  plVar12 = (longlong *)(param_2 + 0x138);
  plVar11 = (longlong *)(param_1 + 0x88);
  lStack_c0 = 0x10;
  do {
    lVar18 = plVar11[1];
    lVar13 = *plVar11;
    lVar17 = lVar18 - lVar13 >> 0x3f;
    lVar10 = (lVar18 - lVar13) / 0x50 + lVar17;
    if (lVar10 == lVar17) {
LAB_1801f5644:
      *puVar16 = 0xffffffff;
    }
    else {
      iStack_d8 = 0;
      bVar2 = true;
      iVar19 = 0;
      if (lVar10 == lVar17) {
LAB_1801f5349:
        iVar20 = 0;
        lVar17 = lVar18 - lVar13 >> 0x3f;
        iVar19 = iStack_d8;
        if ((lVar18 - lVar13) / 0x50 + lVar17 != lVar17) {
          lVar18 = 0;
          do {
            lVar13 = lVar13 + lVar18;
            if (*(int *)(lVar13 + 0x44) == -1) {
              iVar19 = *(int *)(lVar13 + 0x10);
              if (iVar19 == 4) {
                lVar17 = 0;
                do {
                  lVar10 = lVar17 + 1;
                  if (*(char *)(*(longlong *)(lVar13 + 8) + lVar17) != (&UNK_180a0e8b8)[lVar17])
                  goto LAB_1801f54c5;
                  lVar17 = lVar10;
                } while (lVar10 != 5);
                plVar5 = (longlong *)FUN_180058080(param_3,auStack_48,lVar13 + 0x20);
                if ((uint64_t *)*plVar5 == param_3) goto LAB_1801f54c5;
                puVar7 = param_3;
                if ((uint64_t *)param_3[2] != (uint64_t *)0x0) {
                  puVar14 = (uint64_t *)param_3[2];
                  do {
                    if (*(int *)(lVar13 + 0x30) == 0) {
                      bVar2 = false;
                      puVar15 = (uint64_t *)puVar14[1];
                    }
                    else {
                      if (*(int *)(puVar14 + 6) == 0) {
                        bVar2 = true;
                      }
                      else {
                        pbVar8 = *(byte **)(lVar13 + 0x28);
                        lVar17 = puVar14[5] - (longlong)pbVar8;
                        do {
                          uVar9 = (uint)pbVar8[lVar17];
                          iVar19 = *pbVar8 - uVar9;
                          if (*pbVar8 != uVar9) break;
                          pbVar8 = pbVar8 + 1;
                        } while (uVar9 != 0);
                        bVar2 = 0 < iVar19;
                        if (iVar19 < 1) {
                          puVar15 = (uint64_t *)puVar14[1];
                          goto LAB_1801f544b;
                        }
                      }
                      puVar15 = (uint64_t *)*puVar14;
                    }
LAB_1801f544b:
                    if (bVar2) {
                      puVar14 = puVar7;
                    }
                    puVar7 = puVar14;
                    puVar14 = puVar15;
                  } while (puVar15 != (uint64_t *)0x0);
                }
                if (puVar7 == param_3) {
LAB_1801f549a:
                  puVar7 = (uint64_t *)FUN_1800c2ab0(param_3,auStack_40);
                  puVar7 = (uint64_t *)*puVar7;
                }
                else if (*(int *)(puVar7 + 6) != 0) {
                  if (*(int *)(lVar13 + 0x30) != 0) {
                    pbVar8 = (byte *)puVar7[5];
                    lVar17 = *(longlong *)(lVar13 + 0x28) - (longlong)pbVar8;
                    do {
                      bVar1 = *pbVar8;
                      uVar9 = (uint)pbVar8[lVar17];
                      if (bVar1 != uVar9) break;
                      pbVar8 = pbVar8 + 1;
                    } while (uVar9 != 0);
                    if ((int)(bVar1 - uVar9) < 1) goto LAB_1801f54b1;
                  }
                  goto LAB_1801f549a;
                }
LAB_1801f54b1:
                *puVar16 = *(int32_t *)(puVar7 + 8);
                puVar16[0x10] = *(int32_t *)(lVar13 + 0x40);
              }
              else {
LAB_1801f54c5:
                if ((iVar19 == 8) &&
                   (iVar3 = strcmp(*(uint64_t *)(lVar13 + 8),&UNK_180a0e890), iVar3 == 0)) {
                  uVar4 = FUN_1801f2c40();
                  *puVar16 = uVar4;
                }
                else if (iVar19 == 7) {
                  lVar17 = 0;
                  do {
                    lVar10 = lVar17 + 1;
                    if (*(char *)(*(longlong *)(lVar13 + 8) + lVar17) != (&DAT_180a0e8a0)[lVar17])
                    goto LAB_1801f55e6;
                    lVar17 = lVar10;
                  } while (lVar10 != 8);
                  *puVar16 = 0xfffffffe;
                  plVar5 = (longlong *)FUN_1800b08e0(_DAT_180c86930,&plStack_60,lVar13 + 0x20,1);
                  lVar13 = *plVar5;
                  *plVar5 = 0;
                  plStack_68 = (longlong *)*plVar12;
                  *plVar12 = lVar13;
                  if (plStack_68 != (longlong *)0x0) {
                    (**(code **)(*plStack_68 + 0x38))();
                  }
                  if (plStack_60 != (longlong *)0x0) {
                    (**(code **)(*plStack_60 + 0x38))();
                  }
                  *(uint *)(*plVar12 + 0x328) = *(uint *)(*plVar12 + 0x328) | 0x20000000;
                  uStack_98 = 0;
                  uStack_90 = 0;
                  pcStack_88 = (code *)0x0;
                  pcStack_80 = _guard_check_icall;
                  FUN_18023c450(*plVar12,1,0xffffffff,&uStack_98);
                  if (pcStack_88 != (code *)0x0) {
                    (*pcStack_88)(&uStack_98,0,0);
                  }
                }
                else {
LAB_1801f55e6:
                  *puVar16 = 0xffffffff;
                }
              }
              iStack_d8 = iStack_d8 + 1;
              iVar19 = iStack_d8;
            }
            iVar20 = iVar20 + 1;
            lVar18 = lVar18 + 0x50;
            lVar13 = *plVar11;
          } while ((ulonglong)(longlong)iVar20 < (ulonglong)((plVar11[1] - lVar13) / 0x50));
        }
      }
      else {
        lVar17 = 0;
        do {
          lVar13 = lVar13 + lVar17;
          uVar9 = *(uint *)(lVar13 + 0x44);
          if (((uVar9 != 0xffffffff) && ((uVar9 & param_4) == uVar9)) &&
             ((*(uint *)(lVar13 + 0x48) & param_4) == 0)) {
            iVar20 = *(int *)(lVar13 + 0x10);
            if (iVar20 == 4) {
              lVar18 = 0;
              do {
                lVar10 = lVar18 + 1;
                if (*(char *)(*(longlong *)(lVar13 + 8) + lVar18) != (&UNK_180a0e8b8)[lVar18])
                goto LAB_1801f51c0;
                lVar18 = lVar10;
              } while (lVar10 != 5);
              plVar5 = (longlong *)FUN_180058080(param_3,auStack_50,lVar13 + 0x20);
              if ((uint64_t *)*plVar5 == param_3) goto LAB_1801f51c0;
              puVar6 = (int32_t *)FUN_1800c2970(param_3,lVar13 + 0x20);
              *puVar16 = *puVar6;
              puVar16[0x10] = *(int32_t *)(lVar13 + 0x40);
            }
            else {
LAB_1801f51c0:
              if (param_5 == '\0') {
                if ((iVar20 == 8) &&
                   (iVar3 = strcmp(*(uint64_t *)(lVar13 + 8),&UNK_180a0e890), iVar3 == 0)) {
                  uVar4 = FUN_1801f2c40();
                  *puVar16 = uVar4;
                }
                else {
                  if (iVar20 != 7) goto LAB_1801f52de;
                  lVar18 = 0;
                  do {
                    lVar10 = lVar18 + 1;
                    if (*(char *)(*(longlong *)(lVar13 + 8) + lVar18) != (&DAT_180a0e8a0)[lVar18])
                    goto LAB_1801f52de;
                    lVar18 = lVar10;
                  } while (lVar10 != 8);
                  *puVar16 = 0xfffffffe;
                  plVar5 = (longlong *)FUN_1800b08e0(_DAT_180c86930,&plStack_70,lVar13 + 0x20,1);
                  lVar13 = *plVar5;
                  *plVar5 = 0;
                  plStack_78 = (longlong *)*plVar12;
                  *plVar12 = lVar13;
                  if (plStack_78 != (longlong *)0x0) {
                    (**(code **)(*plStack_78 + 0x38))();
                  }
                  if (plStack_70 != (longlong *)0x0) {
                    (**(code **)(*plStack_70 + 0x38))();
                  }
                  *(uint *)(*plVar12 + 0x328) = *(uint *)(*plVar12 + 0x328) | 0x20000000;
                  uStack_b8 = 0;
                  uStack_b0 = 0;
                  pcStack_a8 = (code *)0x0;
                  pcStack_a0 = _guard_check_icall;
                  FUN_18023c450(*plVar12,1,0xffffffff,&uStack_b8);
                  if (pcStack_a8 != (code *)0x0) {
                    (*pcStack_a8)(&uStack_b8,0,0);
                  }
                }
              }
              else {
LAB_1801f52de:
                *puVar16 = 0xffffffff;
              }
            }
            bVar2 = false;
            iStack_d8 = iStack_d8 + 1;
          }
          iVar19 = iVar19 + 1;
          lVar17 = lVar17 + 0x50;
          lVar18 = plVar11[1];
          lVar13 = *plVar11;
        } while ((ulonglong)(longlong)iVar19 < (ulonglong)((lVar18 - lVar13) / 0x50));
        iVar19 = iStack_d8;
        if (bVar2) goto LAB_1801f5349;
      }
      if (iVar19 == 0) goto LAB_1801f5644;
    }
    plVar11 = plVar11 + 4;
    plVar12 = plVar12 + 1;
    puVar16 = puVar16 + 1;
    lStack_c0 = lStack_c0 + -1;
    if (lStack_c0 == 0) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801f5690(longlong param_1,uint64_t param_2,int32_t param_3)
void FUN_1801f5690(longlong param_1,uint64_t param_2,int32_t param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  longlong *plVar6;
  longlong *plVar7;
  void *puVar8;
  longlong lVar9;
  longlong lVar10;
  void *puVar11;
  int *piVar12;
  longlong lVar13;
  int8_t auStack_108 [32];
  code *pcStack_e8;
  longlong *plStack_d8;
  longlong *plStack_d0;
  longlong *aplStack_c8 [2];
  uint64_t uStack_b8;
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  iVar4 = *(int *)(param_1 + 0x50);
  lVar13 = 4;
  if (iVar4 == 0) {
    if (*(char *)(param_1 + 0x6a) == '\0') {
LAB_1801f63c6:
      uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x450,8,3);
      plVar6 = (longlong *)FUN_1801fa180(uVar5);
    }
    else {
      uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x458,8,3);
      plVar6 = (longlong *)
               FUN_1801fa0e0(uVar5,*(int32_t *)(param_1 + 0x7c),*(int32_t *)(param_1 + 0x80));
    }
  }
  else if ((iVar4 == 0xe) &&
          (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0e8f0), iVar3 == 0)) {
    plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x470,8,3);
    plStack_d8 = plVar6;
    FUN_1801fa180(plVar6);
    *plVar6 = (longlong)&UNK_180a26220;
    *(int32_t *)((longlong)plVar6 + 0x46c) = 5;
    *(int16_t *)(plVar6 + 0x8d) = 0;
  }
  else if ((iVar4 == 0x12) &&
          (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0e900), iVar3 == 0)) {
    uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x468,8,3);
    plVar6 = (longlong *)FUN_1803f6670(uVar5);
  }
  else if ((iVar4 == 0x15) &&
          (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0e8c0), iVar3 == 0)) {
    uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x478,8,3);
    plVar6 = (longlong *)FUN_1803f7080(uVar5);
  }
  else if ((iVar4 == 0x14) &&
          (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0e8d8), iVar3 == 0)) {
    plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x478,8,3);
    plStack_d8 = plVar6;
    FUN_1801fa180(plVar6);
    *plVar6 = (longlong)&UNK_180a26640;
    pcStack_e8 = FUN_180045af0;
    FUN_1808fc838(plVar6 + 0x8a,8,2,&SUB_18005d5f0);
    plVar6[0x8c] = 0;
    *(int32_t *)(plVar6 + 0x8d) = 0;
    *(int32_t *)((longlong)plVar6 + 0x46c) = 4;
    plStack_d0 = (longlong *)plVar6[0x8b];
    plVar6[0x8b] = 0;
    if (plStack_d0 != (longlong *)0x0) {
      (**(code **)(*plStack_d0 + 0x38))();
    }
    plVar7 = (longlong *)plVar6[0x8b];
    if (plVar7 != (longlong *)0x0) {
      plStack_d0 = plVar7;
      (**(code **)(*plVar7 + 0x28))(plVar7);
    }
    plStack_d0 = (longlong *)plVar6[0x8a];
    plVar6[0x8a] = (longlong)plVar7;
    if (plStack_d0 != (longlong *)0x0) {
      (**(code **)(*plStack_d0 + 0x38))();
    }
    *(int32_t *)((longlong)plVar6 + 0x474) = 0;
    plStack_d0 = (longlong *)plVar6[0x8c];
    plVar6[0x8c] = 0;
    if (plStack_d0 != (longlong *)0x0) {
      (**(code **)(*plStack_d0 + 0x38))();
    }
  }
  else {
    if ((iVar4 == 0x17) &&
       (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0e940), iVar3 == 0)) {
      plStack_d8 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x450,8,3);
                    // WARNING: Subroutine does not return
      memset(plStack_d8,0,0x450);
    }
    if ((iVar4 == 0xd) &&
       (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0e958), iVar3 == 0)) {
      plStack_d8 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x460,8,3);
                    // WARNING: Subroutine does not return
      memset(plStack_d8,0,0x460);
    }
    if ((iVar4 == 0x12) &&
       (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0e918), iVar3 == 0)) {
      uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x490,8,3);
      plVar6 = (longlong *)
               FUN_1803fc260(uVar5,*(int32_t *)(param_1 + 0x7c),*(int32_t *)(param_1 + 0x80));
    }
    else if (iVar4 == 0xd) {
      iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0e930);
      if (iVar3 == 0) {
        plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x460,8,3);
        uVar1 = *(int32_t *)(param_1 + 0x80);
        uVar2 = *(int32_t *)(param_1 + 0x7c);
        plStack_d8 = plVar6;
        FUN_1801fa180(plVar6);
        *plVar6 = (longlong)&UNK_180a0ef58;
        *(int32_t *)(plVar6 + 0x8a) = uVar2;
        *(int32_t *)((longlong)plVar6 + 0x454) = uVar1;
        *plVar6 = (longlong)&UNK_180a0eea0;
      }
      else {
        iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0e990);
        if (iVar3 != 0) goto LAB_1801f5b10;
        plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x4a8,8,3);
        uVar1 = *(int32_t *)(param_1 + 0x80);
        uVar2 = *(int32_t *)(param_1 + 0x7c);
        plStack_d8 = plVar6;
        FUN_1801fa180(plVar6);
        *plVar6 = (longlong)&UNK_180a0ef58;
        *(int32_t *)(plVar6 + 0x8a) = uVar2;
        *(int32_t *)((longlong)plVar6 + 0x454) = uVar1;
        *plVar6 = (longlong)&UNK_180a26780;
        *(int32_t *)((longlong)plVar6 + 0x49c) = 2;
      }
    }
    else {
LAB_1801f5b10:
      if ((iVar4 == 0x14) &&
         (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0e9a0), iVar3 == 0)) {
        plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x4d8,8,3);
        uVar1 = *(int32_t *)(param_1 + 0x80);
        uVar2 = *(int32_t *)(param_1 + 0x7c);
        plStack_d8 = plVar6;
        FUN_1801fa180(plVar6);
        *plVar6 = (longlong)&UNK_180a0ef58;
        *(int32_t *)(plVar6 + 0x8a) = uVar2;
        *(int32_t *)((longlong)plVar6 + 0x454) = uVar1;
        *plVar6 = (longlong)&UNK_180a26e08;
        plVar6[0x8b] = 0;
        plVar6[0x99] = 0;
        puStack_a8 = &UNK_1809fcc58;
        puStack_a0 = auStack_90;
        auStack_90[0] = 0;
        uStack_98 = 0x16;
        strcpy_s(auStack_90,0x40,&UNK_180a0dc68);
        plVar7 = (longlong *)FUN_1800b31f0(_DAT_180c86930,aplStack_c8,&puStack_a8,1);
        lVar9 = *plVar7;
        *plVar7 = 0;
        plStack_d0 = (longlong *)plVar6[0x8b];
        plVar6[0x8b] = lVar9;
        if (plStack_d0 != (longlong *)0x0) {
          (**(code **)(*plStack_d0 + 0x38))();
        }
        if (aplStack_c8[0] != (longlong *)0x0) {
          (**(code **)(*aplStack_c8[0] + 0x38))();
        }
        puStack_a8 = &UNK_18098bcb0;
      }
      else if ((iVar4 == 0x13) &&
              (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0e968), iVar3 == 0)) {
        plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x4c0,8,3);
        uVar1 = *(int32_t *)(param_1 + 0x80);
        uVar2 = *(int32_t *)(param_1 + 0x7c);
        plStack_d8 = plVar6;
        FUN_1801fa180(plVar6);
        *plVar6 = (longlong)&UNK_180a0ef58;
        *(int32_t *)(plVar6 + 0x8a) = uVar2;
        *(int32_t *)((longlong)plVar6 + 0x454) = uVar1;
        *plVar6 = (longlong)&UNK_180a26e88;
        plVar6[0x8b] = 0;
        puStack_a8 = &UNK_1809fcc58;
        puStack_a0 = auStack_90;
        auStack_90[0] = 0;
        uStack_98 = 0x15;
        strcpy_s(auStack_90,0x40,&UNK_180a0dca0);
        plVar7 = (longlong *)FUN_1800b31f0(_DAT_180c86930,&plStack_d0,&puStack_a8,1);
        lVar9 = *plVar7;
        *plVar7 = 0;
        aplStack_c8[0] = (longlong *)plVar6[0x8b];
        plVar6[0x8b] = lVar9;
        if (aplStack_c8[0] != (longlong *)0x0) {
          (**(code **)(*aplStack_c8[0] + 0x38))();
        }
        if (plStack_d0 != (longlong *)0x0) {
          (**(code **)(*plStack_d0 + 0x38))();
        }
        puStack_a8 = &UNK_18098bcb0;
      }
      else if ((iVar4 == 0xf) &&
              (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0e980), iVar3 == 0)) {
        plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x450,8,3);
        plStack_d8 = plVar6;
        FUN_1801fa180(plVar6);
        *plVar6 = (longlong)&UNK_180a0f010;
      }
      else if ((iVar4 == 0xd) &&
              (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0e9f0), iVar3 == 0)) {
        plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x458,8,3);
        plStack_d8 = plVar6;
        FUN_1801fa180(plVar6);
        *plVar6 = (longlong)&UNK_180a26ee8;
        *(int8_t *)(plVar6 + 0x8a) = 2;
        *(int32_t *)((longlong)plVar6 + 0x454) = 5;
      }
      else if ((iVar4 == 0x1a) &&
              (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0ea00), iVar3 == 0)) {
        plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x450,8,3);
        plStack_d8 = plVar6;
        FUN_1801fa180(plVar6);
        *plVar6 = (longlong)&UNK_180a0ee48;
      }
      else if ((iVar4 == 0x11) &&
              (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0e9b8), iVar3 == 0)) {
        plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x470,8,3);
        plStack_d8 = plVar6;
        FUN_1801fa180(plVar6);
        *plVar6 = (longlong)&UNK_180a26f90;
        pcStack_e8 = FUN_180045af0;
        FUN_1808fc838(plVar6 + 0x8a,8,2,&SUB_18005d5f0);
        plVar6[0x8d] = 0;
        *(int32_t *)(plVar6 + 0x8c) = 0;
        *(int32_t *)((longlong)plVar6 + 0x464) = 4;
        aplStack_c8[0] = (longlong *)plVar6[0x8b];
        plVar6[0x8b] = 0;
        if (aplStack_c8[0] != (longlong *)0x0) {
          (**(code **)(*aplStack_c8[0] + 0x38))();
        }
        plVar7 = (longlong *)plVar6[0x8b];
        if (plVar7 != (longlong *)0x0) {
          aplStack_c8[0] = plVar7;
          (**(code **)(*plVar7 + 0x28))(plVar7);
        }
        aplStack_c8[0] = (longlong *)plVar6[0x8a];
        plVar6[0x8a] = (longlong)plVar7;
        if (aplStack_c8[0] != (longlong *)0x0) {
          (**(code **)(*aplStack_c8[0] + 0x38))();
        }
      }
      else {
        if (iVar4 == 0x1b) {
          iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0e9d0);
          if (iVar3 == 0) {
            uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x488,8,3);
            plVar6 = (longlong *)FUN_1803fa510(uVar5);
            goto LAB_1801f63db;
          }
          iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0ea48);
          if (iVar3 == 0) {
            plStack_d8 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x450,8,3);
                    // WARNING: Subroutine does not return
            memset(plStack_d8,0,0x450);
          }
        }
        if ((iVar4 == 0x1e) &&
           (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0ea68), iVar3 == 0)) {
          plStack_d8 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x450,8,3);
                    // WARNING: Subroutine does not return
          memset(plStack_d8,0,0x450);
        }
        if ((iVar4 == 0xd) &&
           (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0ea20), iVar3 == 0)) {
          plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x460,8,3);
          uVar1 = *(int32_t *)(param_1 + 0x80);
          uVar2 = *(int32_t *)(param_1 + 0x7c);
          plStack_d8 = plVar6;
          FUN_1801fa180(plVar6);
          *plVar6 = (longlong)&UNK_180a0ef58;
          *(int32_t *)(plVar6 + 0x8a) = uVar2;
          *(int32_t *)((longlong)plVar6 + 0x454) = uVar1;
          *plVar6 = (longlong)&UNK_180a26480;
          *(int32_t *)(plVar6 + 0x8b) = 0;
        }
        else if ((iVar4 == 0x16) &&
                (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0ea30), iVar3 == 0)) {
          plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x450,8,3);
          plStack_d8 = plVar6;
          FUN_1801fa180(plVar6);
          *plVar6 = (longlong)&UNK_180a0efb8;
        }
        else if ((iVar4 == 0x13) &&
                (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0ead0), iVar3 == 0)) {
          plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x458,8,3);
          uVar1 = *(int32_t *)(param_1 + 0x80);
          uVar2 = *(int32_t *)(param_1 + 0x7c);
          plStack_d8 = plVar6;
          FUN_1801fa180(plVar6);
          *plVar6 = (longlong)&UNK_180a0ef58;
          *(int32_t *)(plVar6 + 0x8a) = uVar2;
          *(int32_t *)((longlong)plVar6 + 0x454) = uVar1;
          *plVar6 = (longlong)&UNK_180a26420;
        }
        else if ((iVar4 == 0x16) &&
                (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0eae8), iVar3 == 0)) {
          uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x478,8,3);
          plVar6 = (longlong *)
                   FUN_1803f8a80(uVar5,*(int32_t *)(param_1 + 0x7c),
                                 *(int32_t *)(param_1 + 0x80));
        }
        else if ((iVar4 == 0x23) &&
                (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0ea88), iVar3 == 0)) {
          plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x450,8,3);
          plStack_d8 = plVar6;
          FUN_1801fa180(plVar6);
          *plVar6 = (longlong)&UNK_180a26368;
        }
        else if ((iVar4 == 0x1e) &&
                (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0eab0), iVar3 == 0)) {
          plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x450,8,3);
          plStack_d8 = plVar6;
          FUN_1801fa180(plVar6);
          *plVar6 = (longlong)&UNK_180a26538;
          *(int8_t *)((longlong)plVar6 + 0x4e) = 0;
        }
        else if ((iVar4 == 0x12) &&
                (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0eb30), iVar3 == 0)) {
          plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x470,8,3);
          plStack_d8 = plVar6;
          FUN_1801fa180(plVar6);
          *plVar6 = (longlong)&UNK_180a0ef00;
          pcStack_e8 = FUN_180045af0;
          FUN_1808fc838(plVar6 + 0x8b,8,3,&SUB_18005d5f0);
          *(int32_t *)(plVar6 + 0x8a) = 0;
        }
        else {
          if ((iVar4 == 0x14) &&
             (iVar3 = strcmp(*(uint64_t *)(param_1 + 0x48),&UNK_180a0eb48), iVar3 == 0)) {
            plStack_d8 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x450,8,3);
                    // WARNING: Subroutine does not return
            memset(plStack_d8,0,0x450);
          }
          puVar8 = *(void **)(param_1 + 0x48);
          if ((iVar4 != 0xf) || (iVar4 = strcmp(puVar8,&UNK_180a0eb00), iVar4 != 0)) {
            puVar11 = &DAT_18098bc73;
            if (puVar8 != (void *)0x0) {
              puVar11 = puVar8;
            }
            FUN_180626f80(&UNK_180a0eb10,puVar11);
            goto LAB_1801f63c6;
          }
          plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x450,8,3);
          plStack_d8 = plVar6;
          FUN_1801fa180(plVar6);
          *plVar6 = (longlong)&UNK_180a27040;
        }
      }
    }
  }
LAB_1801f63db:
  FUN_180627be0(plVar6 + 2,param_1);
  plVar7 = (longlong *)FUN_1800b4910(_DAT_180c86930,&plStack_d8,param_1 + 0x20);
  lVar9 = *plVar7;
  *plVar7 = 0;
  aplStack_c8[0] = (longlong *)plVar6[6];
  plVar6[6] = lVar9;
  if (aplStack_c8[0] != (longlong *)0x0) {
    (**(code **)(*aplStack_c8[0] + 0x38))();
  }
  if (plStack_d8 != (longlong *)0x0) {
    (**(code **)(*plStack_d8 + 0x38))();
  }
  if (*(char *)(param_1 + 0x6a) == '\0') {
    if ((*(byte *)(plVar6[6] + 0x1588) & 0x40) == 0) goto LAB_1801f6471;
    puVar8 = &UNK_180a0ebb0;
  }
  else {
    if ((*(byte *)(plVar6[6] + 0x1588) & 0x40) != 0) goto LAB_1801f6471;
    puVar8 = &UNK_180a0eb78;
  }
  puVar11 = &DAT_18098bc73;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar11 = *(void **)(param_1 + 8);
  }
  FUN_180626f80(puVar8,puVar11);
LAB_1801f6471:
  *(int8_t *)((longlong)plVar6 + 0x4c) = *(int8_t *)(param_1 + 0x68);
  *(int32_t *)(plVar6 + 9) = *(int32_t *)(param_1 + 100);
  plStack_d0 = *(longlong **)(param_1 + 0x6c);
  plVar6[1] = (longlong)plStack_d0;
  *(int8_t *)(plVar6 + 7) = *(int8_t *)(param_1 + 0x60);
  plVar6[8] = *(longlong *)(_DAT_180c86890 + 0x7ab8);
  plVar6[0xb] = (longlong)(double)*(float *)(param_1 + 0x6c);
  plVar6[0xc] = (longlong)(double)*(float *)(param_1 + 0x70);
  *(int32_t *)(plVar6 + 0xe) = *(int32_t *)(param_1 + 0x84);
  *(int8_t *)((longlong)plVar6 + 0x4d) = 0;
  *(int32_t *)(plVar6 + 0xd) = *(int32_t *)(param_1 + 0x74);
  *(int32_t *)((longlong)plVar6 + 0x6c) = *(int32_t *)(param_1 + 0x78);
  *(int8_t *)(plVar6 + 10) = *(int8_t *)(param_1 + 0x6a);
  pcStack_e8 = (code *)((ulonglong)pcStack_e8 & 0xffffffffffffff00);
  FUN_1801f5080(param_1,plVar6,param_2,param_3);
  plVar7 = plVar6 + 0x37;
  piVar12 = (int *)(param_1 + 0x298);
  plVar6 = plVar6 + 0x39;
  do {
    puVar8 = &DAT_18098bc73;
    if (*(void **)(piVar12 + 0x56) != (void *)0x0) {
      puVar8 = *(void **)(piVar12 + 0x56);
    }
    (**(code **)(*plVar6 + 0x10))(plVar6,puVar8);
    if (*piVar12 == 5) {
      lVar9 = 0;
      do {
        lVar10 = lVar9 + 1;
        if (*(char *)(*(longlong *)(piVar12 + -2) + lVar9) != (&UNK_180a0eb60)[lVar9])
        goto LAB_1801f657d;
        lVar9 = lVar10;
      } while (lVar10 != 6);
      *(int32_t *)plVar7 = 0xfffffffe;
    }
    else {
LAB_1801f657d:
      if ((*piVar12 == 8) &&
         (iVar4 = strcmp(*(uint64_t *)(piVar12 + -2),&UNK_180a0e890), iVar4 == 0)) {
        *(int32_t *)plVar7 = 0xfffffffd;
      }
      else {
        *(int32_t *)plVar7 = 0xffffffff;
      }
    }
    plVar6 = plVar6 + 0x13;
    plVar7 = (longlong *)((longlong)plVar7 + 4);
    piVar12 = piVar12 + 0x16;
    lVar13 = lVar13 + -1;
    if (lVar13 == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_108);
    }
  } while( true );
}



longlong FUN_1801f65f0(longlong param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (*(longlong **)(param_1 + 0x450) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x450) + 0x38))();
  }
  FUN_1801f9920(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x460,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




