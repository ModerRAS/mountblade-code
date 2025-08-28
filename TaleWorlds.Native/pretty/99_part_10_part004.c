#include "TaleWorlds.Native.Split.h"

// 99_part_10_part004.c - 4 个函数

// 函数: void FUN_1806a4890(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1806a4890(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5)

{
  longlong lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int8_t auStack_28 [16];
  
  lVar1 = *(longlong *)(param_1[1] + 8);
  uVar2 = (**(code **)(*param_1 + 0x40))(param_1,auStack_28);
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(lVar1 + 0x20))(param_1[1] + 8,param_2,uVar3,param_3,param_4,param_5,uVar2);
                    // WARNING: Could not recover jumptable at 0x0001806a491e. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}



bool FUN_1806a4930(longlong param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t *param_5,int param_6,longlong *param_7)

{
  char cVar1;
  char cVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  byte *pbVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  char *pcVar11;
  longlong *plVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  int32_t *puVar15;
  ulonglong uVar16;
  byte *pbVar17;
  uint uVar18;
  int32_t uVar19;
  void *puVar20;
  longlong lVar21;
  longlong *plVar22;
  void *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  bool bVar26;
  int32_t auStackX_8 [2];
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  ulonglong auStack_1c8 [2];
  void *puStack_1b8;
  void *puStack_1b0;
  longlong lStack_1a8;
  ulonglong uStack_1a0;
  int8_t auStack_198 [16];
  void *puStack_188;
  void *puStack_180;
  void *puStack_178;
  uint64_t uStack_170;
  int32_t uStack_168;
  void *puStack_160;
  uint64_t uStack_158;
  int32_t uStack_150;
  int32_t uStack_14c;
  uint64_t uStack_148;
  int iStack_140;
  uint64_t *puStack_138;
  uint64_t *puStack_130;
  void *apuStack_128 [12];
  int8_t auStack_c8 [136];
  
  puStack_188 = (void *)*param_5;
  puVar20 = (void *)param_5[1];
  puVar23 = &system_buffer_ptr;
  if (puVar20 != (void *)0x0) {
    puVar23 = puVar20;
  }
  lVar25 = 0;
  lVar10 = lVar25;
  do {
    lVar21 = lVar10;
    bVar26 = puVar23[lVar21] == (&UNK_18094a6b8)[lVar21];
    if (!bVar26) goto LAB_1806a49b8;
    lVar10 = lVar21 + 1;
  } while (lVar21 + 1 != 8);
  bVar26 = puVar23[lVar21] == (&UNK_18094a6b8)[lVar21];
LAB_1806a49b8:
  plVar22 = *(longlong **)(param_1 + 0x40);
  puStack_180 = &UNK_18094a6a8;
  if (!bVar26) {
    puStack_180 = puVar20;
  }
  puStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  plVar9 = (longlong *)(**(code **)(*plVar22 + 0x18))(plVar22);
  lVar10 = (**(code **)(*plVar9 + 0x18))(plVar9,auStack_c8,&puStack_188);
  puStack_1b8 = puStack_188;
  puStack_1b0 = puStack_180;
  iVar8 = *(int *)(lVar10 + 0x18);
  if (iVar8 == 0x4d) {
    iVar8 = 0x4e;
    puStack_1b8 = &UNK_18094a280;
    puStack_1b0 = &UNK_18094a698;
  }
  lVar10 = (**(code **)(*plVar9 + 0x18))(plVar9,auStack_c8,param_2);
  iVar6 = param_6;
  (**(code **)(*plVar9 + 0x50))
            (plVar9,apuStack_128,*(int32_t *)(lVar10 + 0x18),uStackX_18,uStackX_20,iVar8,param_6)
  ;
  apuStack_128[0] = &UNK_18094a9a8;
  (**(code **)(*plVar22 + 0x20))(plVar22);
  if (iVar6 == 2) {
    puVar20 = &system_buffer_ptr;
    if (puStack_1b0 != (void *)0x0) {
      puVar20 = puStack_1b0;
    }
    iVar8 = strcmp(puVar20,&UNK_18094a698);
    if (iVar8 == 0) {
      return (bool)2;
    }
  }
  lVar10 = param_1 + -8;
  uVar24 = param_7[1] - *param_7 >> 4;
  iVar8 = (int)uVar24;
  lStack_1a8 = lVar10;
  uStack_1a0 = uVar24;
  if (*(uint *)(param_1 + 0x50) < (uint)(iVar8 << 4)) {
    param_5._0_1_ = '\0';
    FUN_1806a6600(param_1 + 0x48,iVar8 << 4,&param_5);
  }
  puVar4 = *(uint64_t **)(param_1 + 0x48);
  if (iVar8 != 0) {
    uVar16 = uVar24 & 0xffffffff;
    puVar14 = puVar4;
    do {
      *puVar14 = &UNK_18094a700;
      *(int32_t *)(puVar14 + 1) = 0;
      puVar14 = puVar14 + 2;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
    if (iVar8 != 0) {
      auStack_1c8[0] = uVar24 & 0xffffffff;
      plVar22 = param_7;
      do {
        lVar10 = *plVar22;
        pbVar5 = *(byte **)(lVar25 + lVar10);
        if ((pbVar5 == (byte *)0x0) || (bVar7 = *pbVar5, bVar7 == 0)) {
          uVar19 = 0;
        }
        else {
          if (*(int *)(param_1 + 0x3c) != 0) {
            uVar18 = 0x1505;
            pbVar17 = pbVar5;
            do {
              pbVar17 = pbVar17 + 1;
              uVar18 = uVar18 * 0x21 ^ (uint)bVar7;
              bVar7 = *pbVar17;
            } while (bVar7 != 0);
            uVar18 = *(uint *)(*(longlong *)(param_1 + 0x20) +
                              (ulonglong)(*(int *)(param_1 + 0x2c) - 1U & uVar18) * 4);
            if (uVar18 != 0xffffffff) {
              do {
                pcVar11 = *(char **)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar18 * 0x10);
                lVar21 = (longlong)pbVar5 - (longlong)pcVar11;
                do {
                  cVar1 = *pcVar11;
                  cVar2 = pcVar11[lVar21];
                  if (cVar1 != cVar2) break;
                  pcVar11 = pcVar11 + 1;
                } while (cVar2 != '\0');
                if (cVar1 == cVar2) {
                  if ((uVar18 != 0xffffffff) &&
                     (lVar21 = (ulonglong)uVar18 * 0x10 + *(longlong *)(param_1 + 0x10), lVar21 != 0
                     )) {
                    uVar19 = *(int32_t *)(lVar21 + 8);
                    plVar22 = param_7;
                    goto LAB_1806a4ce6;
                  }
                  break;
                }
                uVar18 = *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar18 * 4);
              } while (uVar18 != 0xffffffff);
            }
          }
          plVar22 = *(longlong **)(param_1 + 0x40);
          plVar9 = (longlong *)(**(code **)(*plVar22 + 0x18))(plVar22);
          plVar12 = (longlong *)(**(code **)(*plVar9 + 0xc0))(plVar9);
          (**(code **)(*plVar12 + 0x20))(plVar12,auStackX_8,pbVar5);
          plVar9 = (longlong *)(**(code **)(*plVar9 + 0xc0))(plVar9);
          uVar13 = (**(code **)(*plVar9 + 0x28))(plVar9,auStackX_8[0]);
          uStack_168 = auStackX_8[0];
          puStack_178 = &UNK_18094a6d0;
          uStack_170 = uVar13;
          FUN_1806a39a0(param_1 + -8,&puStack_178,1);
          uVar3 = auStackX_8[0];
          puStack_178 = &UNK_18094a308;
          uStack_1d0 = uVar13;
          puVar14 = (uint64_t *)FUN_1806a45c0(param_1 + 8,&uStack_1d0,&param_5);
          uVar19 = auStackX_8[0];
          if ((char)param_5 == '\0') {
            *puVar14 = uVar13;
            *(int32_t *)(puVar14 + 1) = uVar3;
          }
          (**(code **)(*plVar22 + 0x20))(plVar22);
          plVar22 = param_7;
        }
LAB_1806a4ce6:
        uVar3 = *(int32_t *)(lVar25 + lVar10 + 8);
        *(int32_t *)((longlong)puVar4 + lVar25 + 8) = uVar19;
        *(int32_t *)((longlong)puVar4 + lVar25 + 0xc) = uVar3;
        lVar25 = lVar25 + 0x10;
        auStack_1c8[0] = auStack_1c8[0] - 1;
      } while (auStack_1c8[0] != 0);
      auStack_1c8[0] = 0;
      uVar24 = uStack_1a0;
      lVar10 = lStack_1a8;
    }
  }
  puVar15 = (int32_t *)FUN_1806a74b0(lVar10,&param_5,puStack_1b0);
  uVar19 = *puVar15;
  puVar15 = (int32_t *)FUN_1806a74b0(lVar10,auStackX_8,puStack_1b8);
  puVar14 = puStackX_10;
  uStack_1d0 = CONCAT44(uVar19,*puVar15);
  puVar15 = (int32_t *)FUN_1806a74b0(lVar10,auStack_198,puStackX_10[1]);
  uVar19 = *puVar15;
  puVar15 = (int32_t *)FUN_1806a74b0(lVar10,&lStack_1a8,*puVar14);
  uStack_1d8 = CONCAT44(uVar19,*puVar15);
  puVar15 = (int32_t *)FUN_1806a74b0(lVar10,&uStack_1a0,uStackX_20);
  uVar19 = *puVar15;
  puVar15 = (int32_t *)FUN_1806a74b0(lVar10,auStack_1c8,uStackX_18);
  uStack_150 = *puVar15;
  puStack_160 = &UNK_18094a710;
  uStack_158 = uStack_1d8;
  uStack_148 = uStack_1d0;
  puStack_130 = puVar4 + (uVar24 & 0xffffffff) * 2;
  iStack_140 = param_6;
  uStack_14c = uVar19;
  puStack_138 = puVar4;
  FUN_1806a39a0(lVar10,&puStack_160,4);
  return *(char *)(lVar10 + 0x1b8) == '\0';
}



bool FUN_1806a4e20(longlong param_1,uint64_t *param_2,uint64_t *param_3,ulonglong *param_4,
                  int32_t param_5)

{
  char cVar1;
  char cVar2;
  int32_t uVar3;
  longlong *plVar4;
  byte *pbVar5;
  byte bVar6;
  longlong *plVar7;
  int32_t *puVar8;
  char *pcVar9;
  longlong *plVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  ulonglong uVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  int32_t uVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  char acStackX_8 [8];
  uint64_t *puStackX_10;
  uint64_t *puStackX_18;
  uint64_t uStackX_20;
  int32_t auStack_138 [2];
  uint64_t uStack_130;
  int32_t uStack_128;
  int32_t uStack_124;
  ulonglong uStack_120;
  ulonglong uStack_118;
  int8_t auStack_110 [4];
  int8_t auStack_10c [4];
  uint64_t uStack_108;
  longlong lStack_100;
  void *puStack_f8;
  uint64_t uStack_f0;
  int32_t uStack_e8;
  void *puStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  int32_t uStack_b8;
  void *apuStack_b0 [14];
  
  plVar4 = *(longlong **)(param_1 + 0x40);
  uVar18 = *param_4;
  uVar13 = param_4[1];
  puStackX_10 = param_2;
  puStackX_18 = param_3;
  uStackX_20 = param_4;
  plVar7 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4);
  uStack_120 = uVar18;
  uStack_118 = uVar13;
  (**(code **)(*plVar7 + 0x98))(plVar7,apuStack_b0,param_2,param_3,&uStack_120,param_5);
  apuStack_b0[0] = &UNK_18094a9b0;
  (**(code **)(*plVar4 + 0x20))(plVar4);
  puVar19 = uStackX_20;
  uVar18 = (longlong)(uStackX_20[1] - *uStackX_20) >> 5;
  iVar16 = (int)uVar18;
  uStack_120 = uVar18;
  if (*(uint *)(param_1 + 0x50) < (uint)(iVar16 << 5)) {
    acStackX_8[0] = '\0';
    FUN_1806a6600(param_1 + 0x48,iVar16 << 5,acStackX_8);
  }
  lStack_100 = *(longlong *)(param_1 + 0x48);
  lVar21 = 0;
  if (iVar16 != 0) {
    puVar12 = (uint64_t *)(lStack_100 + 8);
    uVar13 = uVar18 & 0xffffffff;
    do {
      puVar12[-1] = &UNK_18094a720;
      *puVar12 = 0;
      *(int32_t *)(puVar12 + 1) = 0;
      puVar12 = puVar12 + 4;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    if (iVar16 != 0) {
      uVar18 = uVar18 & 0xffffffff;
      do {
        lVar22 = *puVar19 + lVar21;
        uStack_130 = uVar18;
        puVar8 = (int32_t *)
                 FUN_1806a74b0(param_1 + -8,auStack_110,*(uint64_t *)(lVar22 + 0x10));
        uVar3 = *puVar8;
        puVar8 = (int32_t *)FUN_1806a74b0(param_1 + -8,auStack_10c,*(uint64_t *)(lVar22 + 8));
        uStack_128 = *puVar8;
        pbVar5 = *(byte **)(lVar21 + *puVar19);
        uVar17 = 0;
        uStack_124 = uVar3;
        if ((pbVar5 != (byte *)0x0) && (bVar6 = *pbVar5, bVar6 != 0)) {
          if (*(int *)(param_1 + 0x3c) != 0) {
            uVar15 = 0x1505;
            pbVar14 = pbVar5;
            do {
              pbVar14 = pbVar14 + 1;
              uVar15 = uVar15 * 0x21 ^ (uint)bVar6;
              bVar6 = *pbVar14;
            } while (bVar6 != 0);
            uVar15 = *(uint *)(*(longlong *)(param_1 + 0x20) +
                              (ulonglong)(*(int *)(param_1 + 0x2c) - 1U & uVar15) * 4);
            if (uVar15 != 0xffffffff) {
              do {
                pcVar9 = *(char **)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar15 * 0x10);
                lVar20 = (longlong)pbVar5 - (longlong)pcVar9;
                do {
                  cVar1 = *pcVar9;
                  cVar2 = pcVar9[lVar20];
                  if (cVar1 != cVar2) break;
                  pcVar9 = pcVar9 + 1;
                } while (cVar2 != '\0');
                if (cVar1 == cVar2) {
                  if ((uVar15 != 0xffffffff) &&
                     (lVar20 = (ulonglong)uVar15 * 0x10 + *(longlong *)(param_1 + 0x10), lVar20 != 0
                     )) {
                    uVar17 = *(int32_t *)(lVar20 + 8);
                    goto LAB_1806a50da;
                  }
                  break;
                }
                uVar15 = *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar15 * 4);
              } while (uVar15 != 0xffffffff);
            }
          }
          plVar4 = *(longlong **)(param_1 + 0x40);
          plVar7 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4);
          plVar10 = (longlong *)(**(code **)(*plVar7 + 0xc0))(plVar7);
          (**(code **)(*plVar10 + 0x20))(plVar10,auStack_138,pbVar5);
          plVar7 = (longlong *)(**(code **)(*plVar7 + 0xc0))(plVar7);
          uVar11 = (**(code **)(*plVar7 + 0x28))(plVar7,auStack_138[0]);
          uStack_e8 = auStack_138[0];
          puStack_f8 = &UNK_18094a6d0;
          uStack_f0 = uVar11;
          FUN_1806a39a0(param_1 + -8,&puStack_f8,1);
          uVar3 = auStack_138[0];
          puStack_f8 = &UNK_18094a308;
          uStack_108 = uVar11;
          puVar12 = (uint64_t *)FUN_1806a45c0(param_1 + 8,&uStack_108,acStackX_8);
          uVar17 = auStack_138[0];
          if (acStackX_8[0] == '\0') {
            *puVar12 = uVar11;
            *(int32_t *)(puVar12 + 1) = uVar3;
          }
          (**(code **)(*plVar4 + 0x20))(plVar4);
          uVar18 = uStack_130;
        }
LAB_1806a50da:
        uVar3 = *(int32_t *)(lVar22 + 0x1c);
        *(int32_t *)(lVar21 + 0x14 + lStack_100) = *(int32_t *)(lVar22 + 0x18);
        *(int32_t *)(lVar21 + 8 + lStack_100) = uVar17;
        *(ulonglong *)(lVar21 + 0xc + lStack_100) = CONCAT44(uStack_124,uStack_128);
        *(int32_t *)(lVar21 + 0x18 + lStack_100) = uVar3;
        lVar21 = lVar21 + 0x20;
        uVar18 = uVar18 - 1;
        puVar19 = uStackX_20;
      } while (uVar18 != 0);
      uStack_130 = 0;
      param_3 = puStackX_18;
    }
  }
  lVar21 = lStack_100;
  puVar8 = (int32_t *)FUN_1806a74b0(param_1 + -8,&uStackX_20,param_3[1]);
  uVar3 = *puVar8;
  puVar8 = (int32_t *)FUN_1806a74b0(param_1 + -8,&puStackX_18,*param_3);
  puVar12 = puStackX_10;
  uStack_130 = CONCAT44(uVar3,*puVar8);
  puVar8 = (int32_t *)FUN_1806a74b0(param_1 + -8,&puStackX_10,puStackX_10[1]);
  uVar3 = *puVar8;
  puVar8 = (int32_t *)FUN_1806a74b0(param_1 + -8,acStackX_8,*puVar12);
  puStack_e0 = &UNK_18094a730;
  lStack_c0 = (uStack_120 & 0xffffffff) * 0x20 + lVar21;
  uStackX_20 = (ulonglong *)CONCAT44(uVar3,*puVar8);
  uStack_d8 = uStackX_20;
  uStack_d0 = uStack_130;
  uStack_b8 = param_5;
  lStack_c8 = lVar21;
  FUN_1806a39a0(param_1 + -8,&puStack_e0,5);
  return *(char *)(param_1 + 0x1b0) == '\0';
}



bool FUN_1806a5200(longlong param_1,uint64_t *param_2,uint64_t *param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  longlong *plVar4;
  longlong *plVar5;
  int32_t *puVar6;
  longlong lVar7;
  int8_t auStackX_8 [8];
  int8_t auStackX_10 [8];
  int8_t auStackX_18 [8];
  int8_t auStackX_20 [8];
  void *puStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  
  plVar4 = *(longlong **)(param_1 + 0x40);
  plVar5 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4);
  (**(code **)(*plVar5 + 0x10))(plVar5,param_2,param_3);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  lVar7 = param_1 + -8;
  puVar6 = (int32_t *)FUN_1806a74b0(lVar7,auStackX_8,param_3[1]);
  uVar1 = *puVar6;
  puVar6 = (int32_t *)FUN_1806a74b0(lVar7,auStackX_10,*param_3);
  uVar2 = *puVar6;
  puVar6 = (int32_t *)FUN_1806a74b0(lVar7,auStackX_18,param_2[1]);
  uVar3 = *puVar6;
  puVar6 = (int32_t *)FUN_1806a74b0(lVar7,auStackX_20,*param_2);
  puStack_48 = &UNK_18094a6f0;
  uStack_40 = CONCAT44(uVar3,*puVar6);
  uStack_38 = CONCAT44(uVar1,uVar2);
  FUN_1806a39a0(lVar7,&puStack_48,3);
  return *(char *)(param_1 + 0x1b0) == '\0';
}



bool FUN_1806a52f0(longlong param_1,uint64_t param_2)

{
  void *puStack_18;
  uint64_t uStack_10;
  
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x38))();
  puStack_18 = &UNK_18094a7c0;
  uStack_10 = param_2;
  FUN_1806a39a0(param_1,&puStack_18,0xf);
  return *(char *)(param_1 + 0x1b8) == '\0';
}



bool FUN_1806a5350(longlong param_1)

{
  void *puStackX_8;
  
  *(int32_t *)(param_1 + 0xb8) = 0;
  puStackX_8 = &UNK_18094a780;
  FUN_1806a39a0(param_1,&puStackX_8,0xe);
  return *(char *)(param_1 + 0x1b8) == '\0';
}



bool FUN_1806a53a0(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  int32_t *puVar2;
  int8_t auStackX_8 [8];
  void *puStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  uint64_t uStack_10;
  
  uVar1 = _getCurrentCounterValue_Time_shdfnd_physx__SA_KXZ();
  puVar2 = (int32_t *)FUN_1806a74b0(param_1,auStackX_8,param_3);
  uStack_18 = *puVar2;
  puStack_28 = &UNK_18094a7b0;
  uStack_20 = param_2;
  uStack_10 = uVar1;
  FUN_1806a39a0(param_1,&puStack_28,0x13);
  return *(char *)(param_1 + 0x1b8) == '\0';
}



bool FUN_1806a5430(longlong param_1)

{
  void *puStackX_8;
  
  *(int32_t *)(param_1 + 0xb8) = 0;
  puStackX_8 = &UNK_18094a780;
  FUN_1806a39a0(param_1,&puStackX_8,10);
  return *(char *)(param_1 + 0x1b8) == '\0';
}






// 函数: void FUN_1806a5480(longlong param_1)
void FUN_1806a5480(longlong param_1)

{
  longlong *plVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(uint *)(param_1 + 0x1d0) != 0) {
    lVar3 = 0;
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x1d0);
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x1c8));
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
        puVar2 = *(uint64_t **)(lVar3 + *(longlong *)(param_1 + 0x1c8));
        (**(code **)*puVar2)(puVar2,0);
      }
      lVar3 = lVar3 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *(int32_t *)(param_1 + 0x1d0) = 0;
  *(uint64_t *)(param_1 + 0x1e8) = 0;
  return;
}






// 函数: void FUN_1806a5493(void)
void FUN_1806a5493(void)

{
  longlong *plVar1;
  uint64_t *puVar2;
  uint in_EAX;
  longlong lVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  
  lVar3 = 0;
  uVar4 = (ulonglong)in_EAX;
  do {
    plVar1 = *(longlong **)(lVar3 + *(longlong *)(unaff_RDI + 0x1c8));
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      puVar2 = *(uint64_t **)(lVar3 + *(longlong *)(unaff_RDI + 0x1c8));
      (**(code **)*puVar2)(puVar2,0);
    }
    lVar3 = lVar3 + 8;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  *(int32_t *)(unaff_RDI + 0x1d0) = 0;
  *(uint64_t *)(unaff_RDI + 0x1e8) = 0;
  return;
}






// 函数: void FUN_1806a54ef(void)
void FUN_1806a54ef(void)

{
  longlong unaff_RDI;
  
  *(int32_t *)(unaff_RDI + 0x1d0) = 0;
  *(uint64_t *)(unaff_RDI + 0x1e8) = 0;
  return;
}



longlong * FUN_1806a5530(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x60);
  (**(code **)(*(longlong *)(param_1 + 0x60) + 0x20))(plVar1);
  (**(code **)(*plVar1 + 0x60))(plVar1);
  (**(code **)(*plVar1 + 0x38))(plVar1);
  return plVar1;
}






