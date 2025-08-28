#include "TaleWorlds.Native.Split.h"

// 99_part_10_part016.c - 6 个函数

// 函数: void FUN_1806ab9c3(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1806ab9c3(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint param_7,uint param_8,
                  uint64_t *param_9,longlong param_10,uint64_t param_11,uint64_t param_12,
                  uint64_t param_13)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  char *pcVar16;
  uint64_t *puVar17;
  uint uVar18;
  longlong lVar19;
  char *pcVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong unaff_RBX;
  uint *unaff_RBP;
  uint64_t *unaff_RSI;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  longlong *unaff_R14;
  uint64_t *unaff_R15;
  int32_t uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uStack000000000000003c;
  uint uStack0000000000000044;
  
  lVar19 = unaff_R14[0x1c];
  puVar13 = (uint64_t *)(**(code **)(*param_1 + 8))(param_1,0x90,&unknown_var_5552_ptr,param_4,0x45c);
  if (puVar13 == (uint64_t *)0x0) {
    puVar13 = (uint64_t *)0x0;
    param_9 = (uint64_t *)0x0;
  }
  else {
    plVar9 = (longlong *)unaff_R14[0x13];
    param_9 = puVar13;
    uVar14 = (**(code **)(*plVar9 + 0x18))(plVar9,*(uint64_t *)(unaff_RBX + 8),&param_6);
    param_12 = (**(code **)(*plVar9 + 0x18))
                         (plVar9,**(uint64_t **)(unaff_RBP + 0x56),(longlong)&param_6 + 1);
    plVar9 = (longlong *)unaff_R14[0x13];
    param_13 = uVar14;
    uVar14 = (**(code **)(*plVar9 + 0x18))(plVar9,unaff_R15[1],(longlong)&param_6 + 2);
    uVar15 = (**(code **)(*plVar9 + 0x18))(plVar9,*unaff_R15,(longlong)&param_6 + 3);
    *(uint64_t *)(unaff_RBP + -0x1e) = uVar14;
    *(uint64_t *)(unaff_RBP + -0x20) = uVar15;
    uVar14 = *(uint64_t *)(unaff_RBP + -0x20);
    uVar15 = *(uint64_t *)(unaff_RBP + -0x1e);
    *(int32_t *)(puVar13 + 3) = *(int32_t *)(param_10 + 0x18);
    uVar6 = unaff_RBP[0x5a];
    puVar13[1] = uVar14;
    puVar13[2] = uVar15;
    *(int *)(puVar13 + 6) = (int)lVar19;
    *(int32_t *)(puVar13 + 4) = (int32_t)param_12;
    *(int32_t *)((longlong)puVar13 + 0x24) = param_12._4_4_;
    *(int32_t *)(puVar13 + 5) = (int32_t)param_13;
    *(int32_t *)((longlong)puVar13 + 0x2c) = param_13._4_4_;
    puVar13[7] = 0;
    puVar13[8] = 0;
    *(uint *)(puVar13 + 9) = uVar6;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    *puVar13 = &unknown_var_5120_ptr;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = 0;
  }
  uVar22 = 0;
  *(uint64_t **)(unaff_RBP + -0x20) = puVar13;
  uStack000000000000003c = 0;
  uStack0000000000000044 = 0;
  lVar19 = **(longlong **)(unaff_RBP + 0x58);
  if ((int)((*(longlong **)(unaff_RBP + 0x58))[1] - lVar19 >> 5) == 0) {
LAB_1806abf5a:
    if (puVar13 == (uint64_t *)0x0) {
LAB_1806abfce:
      *unaff_RSI = &unknown_var_3712_ptr;
      unaff_RSI[1] = &system_buffer_ptr;
      unaff_RSI[2] = &system_buffer_ptr;
      *(int32_t *)(unaff_RSI + 3) = 0xffffffff;
      unaff_RSI[4] = &system_buffer_ptr;
      unaff_RSI[5] = &system_buffer_ptr;
      *(int32_t *)(unaff_RSI + 6) = 0xffffffff;
      unaff_RSI[7] = 0;
      unaff_RSI[8] = 0;
      *(int32_t *)(unaff_RSI + 9) = 0;
      unaff_RSI[10] = 0;
      unaff_RSI[0xb] = 0;
      *(int8_t *)(unaff_RSI + 0xc) = 0;
    }
    else {
      puVar13[10] = puVar13[0x10];
      puVar13[0xb] = puVar13[0x10] + (ulonglong)*(uint *)(puVar13 + 0x11) * 4;
      if (*(uint *)(unaff_R14 + 0x1c) < (*(uint *)((longlong)unaff_R14 + 0xe4) & 0x7fffffff)) {
        *(uint64_t **)(unaff_R14[0x1b] + (ulonglong)*(uint *)(unaff_R14 + 0x1c) * 8) = puVar13;
        *(int *)(unaff_R14 + 0x1c) = (int)unaff_R14[0x1c] + 1;
      }
      else {
        FUN_1806ae030(unaff_R14 + 0x1b,unaff_RBP + -0x20);
      }
      param_12 = **(uint64_t **)(unaff_RBP + 0x56);
      param_13 = (*(uint64_t **)(unaff_RBP + 0x56))[1];
      puVar17 = (uint64_t *)FUN_1806ab040(unaff_R14 + 0x14,&param_12,&param_6);
      if ((char)param_6 == '\0') {
        *puVar17 = param_12;
        puVar17[1] = param_13;
        puVar17[2] = puVar13;
      }
      *unaff_RSI = &unknown_var_3712_ptr;
      uVar14 = puVar13[2];
      unaff_RSI[1] = puVar13[1];
      unaff_RSI[2] = uVar14;
      *(int32_t *)(unaff_RSI + 3) = *(int32_t *)(puVar13 + 3);
      uVar14 = puVar13[5];
      unaff_RSI[4] = puVar13[4];
      unaff_RSI[5] = uVar14;
      *(int32_t *)(unaff_RSI + 6) = *(int32_t *)(puVar13 + 6);
      unaff_RSI[7] = puVar13[7];
      unaff_RSI[8] = puVar13[8];
      *(int32_t *)(unaff_RSI + 9) = *(int32_t *)(puVar13 + 9);
      unaff_RSI[10] = puVar13[10];
      unaff_RSI[0xb] = puVar13[0xb];
      *(int8_t *)(unaff_RSI + 0xc) = 1;
    }
    return;
  }
LAB_1806abb30:
  iVar7 = *(int *)((longlong)unaff_R14 + 0x3c);
  puVar2 = (uint *)(uVar22 * 0x20 + lVar19);
  uVar6 = *puVar2;
  uVar18 = puVar2[1];
  uVar8 = puVar2[2];
  uVar12 = puVar2[3];
  puVar2 = (uint *)(uVar22 * 0x20 + 0x10 + lVar19);
  uVar26 = *puVar2;
  uVar27 = puVar2[1];
  uVar21 = puVar2[2];
  uVar23 = puVar2[3];
  unaff_RBP[4] = uVar6;
  unaff_RBP[5] = uVar18;
  unaff_RBP[6] = uVar8;
  unaff_RBP[7] = uVar12;
  unaff_RBP[8] = uVar26;
  unaff_RBP[9] = uVar27;
  unaff_RBP[10] = uVar21;
  unaff_RBP[0xb] = uVar23;
  if (iVar7 != 0) {
    pbVar10 = *(byte **)(unaff_RBP + 6);
    uVar18 = 0x1505;
    bVar3 = *pbVar10;
    pbVar1 = pbVar10;
    while (bVar3 != 0) {
      pbVar1 = pbVar1 + 1;
      uVar18 = uVar18 * 0x21 ^ (uint)bVar3;
      bVar3 = *pbVar1;
    }
    pbVar11 = *(byte **)(unaff_RBP + 8);
    uVar22 = 0x1505;
    bVar3 = *pbVar11;
    pbVar1 = pbVar11;
    while (bVar3 != 0) {
      pbVar1 = pbVar1 + 1;
      uVar22 = (ulonglong)((int)uVar22 * 0x21 ^ (uint)bVar3);
      bVar3 = *pbVar1;
    }
    uVar18 = *(uint *)(unaff_R14[4] +
                      ((uVar22 ^ uVar18) & (ulonglong)(*(int *)((longlong)unaff_R14 + 0x2c) - 1)) *
                      4);
    if (uVar18 != 0xffffffff) {
      do {
        uVar22 = (ulonglong)uVar18;
        lVar19 = unaff_R14[2] + uVar22 * 0x18;
        pcVar16 = *(char **)(unaff_R14[2] + uVar22 * 0x18);
        pcVar20 = "";
        if (pcVar16 != (char *)0x0) {
          pcVar20 = pcVar16;
        }
        lVar24 = (longlong)pbVar10 - (longlong)pcVar20;
        do {
          cVar4 = *pcVar20;
          cVar5 = pcVar20[lVar24];
          if (cVar4 != cVar5) break;
          pcVar20 = pcVar20 + 1;
        } while (cVar5 != '\0');
        if (cVar4 == cVar5) {
          pcVar16 = "";
          if (*(char **)(lVar19 + 8) != (char *)0x0) {
            pcVar16 = *(char **)(lVar19 + 8);
          }
          lVar24 = (longlong)pbVar11 - (longlong)pcVar16;
          do {
            cVar4 = *pcVar16;
            cVar5 = pcVar16[lVar24];
            if (cVar4 != cVar5) break;
            pcVar16 = pcVar16 + 1;
          } while (cVar5 != '\0');
          if (cVar4 == cVar5) goto LAB_1806abc5a;
        }
        uVar18 = *(uint *)(unaff_R14[3] + uVar22 * 4);
        if (uVar18 == 0xffffffff) break;
      } while( true );
    }
  }
  goto LAB_1806abfac;
LAB_1806abc5a:
  if (((uVar18 != 0xffffffff) && (lVar19 != 0)) &&
     (lVar19 = *(longlong *)(lVar19 + 0x10), lVar19 != 0)) {
    uVar18 = *(uint *)(lVar19 + 0x28);
    if (uVar18 <= unaff_RBP[0xb]) {
      uVar8 = unaff_RBP[10];
      uVar12 = unaff_RBP[0xb] + uVar8;
      if (uStack000000000000003c < uVar12) {
        uStack000000000000003c = uVar12;
      }
      if (((uStack000000000000003c <= unaff_RBP[0x5a]) &&
          (uVar28 = (**(code **)(*unaff_R14 + 0x58))
                              (uVar6,unaff_RBP + 0xc,*(int32_t *)(param_10 + 0x18),
                               *(uint64_t *)(unaff_RBP + 4)), (char)unaff_RBP[0x22] != '\0')) &&
         ((**(code **)(*unaff_R14 + 0x20))(uVar28,unaff_RBP + 0x24,unaff_RBP[0x18]),
         (char)unaff_RBP[0x40] != '\0')) {
        param_7 = unaff_RBP[0x21];
        uVar26 = unaff_RBP[0x1f];
        param_6._4_4_ = unaff_RBP[0x20];
        uVar37 = *(uint *)(lVar19 + 8);
        uVar38 = *(uint *)(lVar19 + 0xc);
        uVar39 = *(uint *)(lVar19 + 0x10);
        uVar40 = *(uint *)(lVar19 + 0x14);
        uVar23 = *(uint *)(lVar19 + 0x18);
        uVar29 = unaff_RBP[0xe];
        uVar30 = unaff_RBP[0xf];
        uVar31 = unaff_RBP[0x10];
        uVar32 = unaff_RBP[0x11];
        uVar15 = *(uint64_t *)(unaff_RBP + 0x14);
        uVar33 = unaff_RBP[0x1a];
        uVar34 = unaff_RBP[0x1b];
        uVar35 = unaff_RBP[0x1c];
        uVar36 = unaff_RBP[0x1d];
        uVar14 = *(uint64_t *)(unaff_RBP + 0x16);
        uVar27 = unaff_RBP[0x1e];
        uVar25 = unaff_RBP[0x18];
        unaff_RBP[-9] = uVar26;
        unaff_RBP[-7] = param_7;
        unaff_RBP[-8] = param_6._4_4_;
        *(void **)(unaff_RBP + -0x1c) = &unknown_var_3704_ptr;
        uVar6 = *(uint *)((longlong)param_9 + 0x6c);
        uVar12 = *(uint *)(param_9 + 0xd);
        uVar21 = unaff_RBP[0x12];
        unaff_RBP[-0x16] = uVar21;
        *(uint64_t *)(unaff_RBP + -0x14) = uVar15;
        *(uint64_t *)(unaff_RBP + -0x12) = uVar14;
        unaff_RBP[-0x10] = uVar25;
        unaff_RBP[-10] = uVar27;
        unaff_RBP[-2] = uVar23;
        unaff_RBP[-1] = uVar8;
        *unaff_RBP = uVar18;
        unaff_RBP[1] = uVar18;
        unaff_RBP[-0x1a] = uVar29;
        unaff_RBP[-0x19] = uVar30;
        unaff_RBP[-0x18] = uVar31;
        unaff_RBP[-0x17] = uVar32;
        unaff_RBP[-0xe] = uVar33;
        unaff_RBP[-0xd] = uVar34;
        unaff_RBP[-0xc] = uVar35;
        unaff_RBP[-0xb] = uVar36;
        unaff_RBP[-6] = uVar37;
        unaff_RBP[-5] = uVar38;
        unaff_RBP[-4] = uVar39;
        unaff_RBP[-3] = uVar40;
        param_8 = uVar26;
        if (uVar12 < (uVar6 & 0x7fffffff)) {
          puVar13 = (uint64_t *)((ulonglong)uVar12 * 0x78 + param_9[0xc]);
          *puVar13 = &unknown_var_3704_ptr;
          *(uint *)((longlong)puVar13 + 0x4c) = uVar26;
          *(uint *)(puVar13 + 10) = param_6._4_4_;
          *(uint *)((longlong)puVar13 + 0x54) = param_7;
          *(uint *)(puVar13 + 1) = uVar29;
          *(uint *)((longlong)puVar13 + 0xc) = uVar30;
          *(uint *)(puVar13 + 2) = uVar31;
          *(uint *)((longlong)puVar13 + 0x14) = uVar32;
          *(uint *)(puVar13 + 3) = uVar21;
          puVar13[4] = uVar15;
          puVar13[5] = uVar14;
          *(uint *)(puVar13 + 6) = uVar25;
          *(uint *)(puVar13 + 7) = uVar33;
          *(uint *)((longlong)puVar13 + 0x3c) = uVar34;
          *(uint *)(puVar13 + 8) = uVar35;
          *(uint *)((longlong)puVar13 + 0x44) = uVar36;
          *(uint *)(puVar13 + 9) = uVar27;
          *(uint *)(puVar13 + 0xb) = uVar37;
          *(uint *)((longlong)puVar13 + 0x5c) = uVar38;
          *(uint *)(puVar13 + 0xc) = uVar39;
          *(uint *)((longlong)puVar13 + 100) = uVar40;
          *(uint *)(puVar13 + 0xd) = uVar23;
          *(uint *)((longlong)puVar13 + 0x6c) = uVar8;
          *(uint *)(puVar13 + 0xe) = uVar18;
          *(uint *)((longlong)puVar13 + 0x74) = uVar18;
          *(int *)(param_9 + 0xd) = *(int *)(param_9 + 0xd) + 1;
        }
        else {
          FUN_1806ae340(param_9 + 0xc,unaff_RBP + -0x1c);
          param_7 = unaff_RBP[-7];
          uVar18 = *unaff_RBP;
          uVar23 = unaff_RBP[-2];
          uVar37 = unaff_RBP[-6];
          uVar38 = unaff_RBP[-5];
          uVar39 = unaff_RBP[-4];
          uVar40 = unaff_RBP[-3];
          uVar26 = unaff_RBP[-9];
          uVar27 = unaff_RBP[-10];
          uVar33 = unaff_RBP[-0xe];
          uVar34 = unaff_RBP[-0xd];
          uVar35 = unaff_RBP[-0xc];
          uVar36 = unaff_RBP[-0xb];
          uVar25 = unaff_RBP[-0x10];
          uVar14 = *(uint64_t *)(unaff_RBP + -0x12);
          uVar15 = *(uint64_t *)(unaff_RBP + -0x14);
          uVar21 = unaff_RBP[-0x16];
          uVar29 = unaff_RBP[-0x1a];
          uVar30 = unaff_RBP[-0x19];
          uVar31 = unaff_RBP[-0x18];
          uVar32 = unaff_RBP[-0x17];
          param_6._4_4_ = unaff_RBP[-8];
        }
        puVar13 = param_9;
        if (*(uint *)(param_9 + 0xf) < (*(uint *)((longlong)param_9 + 0x7c) & 0x7fffffff)) {
          puVar17 = (uint64_t *)((ulonglong)*(uint *)(param_9 + 0xf) * 0x78 + param_9[0xe]);
          *puVar17 = &unknown_var_3704_ptr;
          *(uint *)(puVar17 + 10) = param_6._4_4_;
          *(uint *)((longlong)puVar17 + 0x54) = param_7;
          uVar6 = unaff_RBP[-1];
          *(uint *)(puVar17 + 1) = uVar29;
          *(uint *)((longlong)puVar17 + 0xc) = uVar30;
          *(uint *)(puVar17 + 2) = uVar31;
          *(uint *)((longlong)puVar17 + 0x14) = uVar32;
          *(uint *)(puVar17 + 3) = uVar21;
          puVar17[4] = uVar15;
          puVar17[5] = uVar14;
          *(uint *)(puVar17 + 6) = uVar25;
          *(uint *)(puVar17 + 7) = uVar33;
          *(uint *)((longlong)puVar17 + 0x3c) = uVar34;
          *(uint *)(puVar17 + 8) = uVar35;
          *(uint *)((longlong)puVar17 + 0x44) = uVar36;
          *(uint *)(puVar17 + 9) = uVar27;
          *(uint *)((longlong)puVar17 + 0x4c) = uVar26;
          *(uint *)((longlong)puVar17 + 0x6c) = uVar6;
          *(uint *)((longlong)puVar17 + 0x74) = unaff_RBP[1];
          *(uint *)(puVar17 + 0xb) = uVar37;
          *(uint *)((longlong)puVar17 + 0x5c) = uVar38;
          *(uint *)(puVar17 + 0xc) = uVar39;
          *(uint *)((longlong)puVar17 + 100) = uVar40;
          *(uint *)(puVar17 + 0xd) = uVar23;
          *(uint *)(puVar17 + 0xe) = uVar18;
          *(int *)(param_9 + 0xf) = *(int *)(param_9 + 0xf) + 1;
        }
        else {
          uVar29 = FUN_1806ae100(param_9 + 0xe,unaff_RBP + -0x1c);
          uVar23 = unaff_RBP[-2];
          uVar25 = unaff_RBP[-0x10];
        }
        puVar13[7] = puVar13[0xe];
        puVar13[8] = (ulonglong)*(uint *)(puVar13 + 0xf) * 0x78 + puVar13[0xe];
        if (uVar23 == 0x4d) {
          if (*(uint *)(puVar13 + 0x11) < (*(uint *)((longlong)puVar13 + 0x8c) & 0x7fffffff)) {
            *(uint *)(puVar13[0x10] + (ulonglong)*(uint *)(puVar13 + 0x11) * 4) = uVar8;
            *(int *)(puVar13 + 0x11) = *(int *)(puVar13 + 0x11) + 1;
          }
          else {
            FUN_1806a5620(puVar13 + 0x10,unaff_RBP + 10);
          }
        }
        else if (uVar23 != 0x50) {
          (**(code **)(*unaff_R14 + 0x90))(uVar29,&param_12,uVar23,uVar25);
          if (param_13._1_1_ != '\0') goto LAB_1806abfac;
        }
        uStack0000000000000044 = uStack0000000000000044 + 1;
        uVar22 = (ulonglong)uStack0000000000000044;
        lVar19 = **(longlong **)(unaff_RBP + 0x58);
        if ((uint)((*(longlong **)(unaff_RBP + 0x58))[1] - lVar19 >> 5) <= uStack0000000000000044)
        goto LAB_1806abf5a;
        goto LAB_1806abb30;
      }
    }
  }
LAB_1806abfac:
  if (puVar13 != (uint64_t *)0x0) {
    (**(code **)*puVar13)(puVar13,0);
    (**(code **)(*_DAT_180be0050 + 0x10))(_DAT_180be0050,puVar13);
  }
  goto LAB_1806abfce;
}






// 函数: void FUN_1806ac025(void)
void FUN_1806ac025(void)

{
  return;
}






// 函数: void FUN_1806ac037(longlong param_1,uint64_t param_2,longlong *param_3,uint64_t param_4,
void FUN_1806ac037(longlong param_1,uint64_t param_2,longlong *param_3,uint64_t param_4,
                  uint64_t param_5,char param_6)

{
  int32_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  longlong unaff_RBP;
  uint64_t *unaff_RSI;
  longlong unaff_R13;
  longlong unaff_R14;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  
  *(longlong *)(*param_3 + param_1 * 8) = unaff_R13;
  *(int *)(param_3 + 1) = (int)param_3[1] + 1;
  puVar1 = *(int32_t **)(unaff_RBP + 0x158);
  uStack0000000000000060 = *puVar1;
  uStack0000000000000064 = puVar1[1];
  uStack0000000000000068 = puVar1[2];
  uStack000000000000006c = puVar1[3];
  puVar3 = (uint64_t *)FUN_1806ab040(unaff_R14 + 0xa0,&stack0x00000060,&param_6);
  if (param_6 == '\0') {
    *puVar3 = CONCAT44(uStack0000000000000064,uStack0000000000000060);
    puVar3[1] = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    puVar3[2] = unaff_R13;
  }
  *unaff_RSI = &unknown_var_3712_ptr;
  uVar2 = *(uint64_t *)(unaff_R13 + 0x10);
  unaff_RSI[1] = *(uint64_t *)(unaff_R13 + 8);
  unaff_RSI[2] = uVar2;
  *(int32_t *)(unaff_RSI + 3) = *(int32_t *)(unaff_R13 + 0x18);
  uVar2 = *(uint64_t *)(unaff_R13 + 0x28);
  unaff_RSI[4] = *(uint64_t *)(unaff_R13 + 0x20);
  unaff_RSI[5] = uVar2;
  *(int32_t *)(unaff_RSI + 6) = *(int32_t *)(unaff_R13 + 0x30);
  unaff_RSI[7] = *(uint64_t *)(unaff_R13 + 0x38);
  unaff_RSI[8] = *(uint64_t *)(unaff_R13 + 0x40);
  *(int32_t *)(unaff_RSI + 9) = *(int32_t *)(unaff_R13 + 0x48);
  unaff_RSI[10] = *(uint64_t *)(unaff_R13 + 0x50);
  unaff_RSI[0xb] = *(uint64_t *)(unaff_R13 + 0x58);
  *(int8_t *)(unaff_RSI + 0xc) = 1;
  return;
}



ulonglong FUN_1806ac0e0(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  uint uVar6;
  char acStackX_20 [8];
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_28;
  
  lVar2 = FUN_1806ac530();
  if (lVar2 == 0) {
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
    lVar2 = FUN_1806ad710(param_1,param_2);
  }
  uVar3 = FUN_1806ac530(param_1,param_3);
  if (uVar3 == 0) {
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
    uVar3 = FUN_1806ad710(param_1,param_3);
  }
  if (*(int *)(uVar3 + 0x1c) < 0) {
    *(int8_t *)(lVar2 + 0x68) = 1;
    *(int32_t *)(uVar3 + 0x1c) = *(int32_t *)(lVar2 + 0x18);
    *(int32_t *)(uVar3 + 0x28) = *(int32_t *)(lVar2 + 0x28);
    *(int32_t *)(uVar3 + 0x2c) = *(int32_t *)(lVar2 + 0x2c);
    *(int32_t *)(uVar3 + 0x30) = *(int32_t *)(lVar2 + 0x30);
    *(uint64_t *)(uVar3 + 0x38) = *(uint64_t *)(lVar2 + 0x38);
    *(uint64_t *)(uVar3 + 0x40) = *(uint64_t *)(lVar2 + 0x40);
    *(int32_t *)(uVar3 + 0x48) = *(int32_t *)(lVar2 + 0x48);
    *(int32_t *)(uVar3 + 0x4c) = *(int32_t *)(lVar2 + 0x4c);
    *(int32_t *)(uVar3 + 0x50) = *(int32_t *)(lVar2 + 0x50);
    *(uint64_t *)(uVar3 + 0x58) = *(uint64_t *)(lVar2 + 0x58);
    *(uint64_t *)(uVar3 + 0x60) = *(uint64_t *)(lVar2 + 0x60);
    *(int32_t *)(uVar3 + 0x24) = *(int32_t *)(lVar2 + 0x24);
    *(int32_t *)(uVar3 + 0x20) = *(int32_t *)(lVar2 + 0x20);
    *(int8_t *)(uVar3 + 0x69) = *(int8_t *)(lVar2 + 0x69);
    FUN_1806aa210(uVar3 + 0x80,lVar2 + 0x80);
    FUN_1806aa210(uVar3 + 0x90,lVar2 + 0x90);
    do {
      uVar5 = 0;
      if (*(int *)(lVar2 + 0x78) != 0) {
        do {
          uStack_58 = *(uint64_t *)(uVar3 + 8);
          uStack_50 = *(uint64_t *)(uVar3 + 0x10);
          lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x70) + uVar5 * 8);
          uStack_48 = *(uint64_t *)(lVar1 + 0x20);
          uStack_28 = uStack_48;
          puVar4 = (uint64_t *)FUN_1806aae60(param_1 + 0x40,&uStack_58,acStackX_20);
          if (acStackX_20[0] == '\0') {
            *puVar4 = uStack_58;
            puVar4[1] = uStack_50;
            puVar4[3] = lVar1;
            puVar4[2] = uStack_48;
          }
          uVar6 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(lVar2 + 0x78));
      }
      uVar6 = *(uint *)(lVar2 + 0x1c);
      uVar5 = (ulonglong)uVar6;
      if (((int)uVar6 < 0) || (*(uint *)(param_1 + 0x80) <= uVar6)) break;
      uVar5 = *(ulonglong *)(param_1 + 0x78);
      lVar2 = *(longlong *)(uVar5 + (ulonglong)uVar6 * 8);
    } while (lVar2 != 0);
    uVar3 = CONCAT71((int7)(uVar5 >> 8),1);
  }
  else {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  return uVar3;
}



uint64_t FUN_1806ac1e0(void)

{
  longlong lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R14;
  uint64_t uStackX_20;
  char in_stack_00000098;
  
  FUN_1806aa210();
  FUN_1806aa210(unaff_R14 + 0x90,unaff_RDI + 0x90);
  do {
    uVar5 = 0;
    if (*(int *)(unaff_RDI + 0x78) != 0) {
      do {
        uStackX_20 = *(uint64_t *)(unaff_R14 + 8);
        uVar3 = *(uint64_t *)(unaff_R14 + 0x10);
        lVar1 = *(longlong *)(*(longlong *)(unaff_RDI + 0x70) + uVar5 * 8);
        uVar2 = *(uint64_t *)(lVar1 + 0x20);
        puVar4 = (uint64_t *)FUN_1806aae60(unaff_RBP + 0x40,&uStackX_20,&stack0x00000098);
        if (in_stack_00000098 == '\0') {
          *puVar4 = uStackX_20;
          puVar4[1] = uVar3;
          puVar4[3] = lVar1;
          puVar4[2] = uVar2;
        }
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(unaff_RDI + 0x78));
    }
    uVar6 = *(uint *)(unaff_RDI + 0x1c);
    uVar5 = (ulonglong)uVar6;
    if (((int)uVar6 < 0) || (*(uint *)(unaff_RBP + 0x80) <= uVar6)) break;
    uVar5 = *(ulonglong *)(unaff_RBP + 0x78);
    unaff_RDI = *(longlong *)(uVar5 + (ulonglong)uVar6 * 8);
  } while (unaff_RDI != 0);
  return CONCAT71((int7)(uVar5 >> 8),1);
}






// 函数: void FUN_1806ac2a1(void)
void FUN_1806ac2a1(void)

{
  return;
}



uint64_t FUN_1806ac2c0(longlong param_1,byte *param_2,int8_t *param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  uint64_t uVar6;
  char *pcVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar11 = 0x1505;
    bVar1 = *param_2;
    pbVar9 = param_2;
    while (bVar1 != 0) {
      pbVar9 = pbVar9 + 1;
      uVar11 = (ulonglong)((int)uVar11 * 0x21 ^ (uint)bVar1);
      bVar1 = *pbVar9;
    }
    uVar12 = *(uint *)(*(longlong *)(param_1 + 0x20) + (*(int *)(param_1 + 0x2c) - 1 & uVar11) * 4);
    if (uVar12 != 0xffffffff) {
      do {
        pcVar7 = *(char **)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar12 * 0x10);
        lVar10 = (longlong)param_2 - (longlong)pcVar7;
        do {
          cVar2 = *pcVar7;
          cVar3 = pcVar7[lVar10];
          if (cVar2 != cVar3) break;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
        if (cVar2 == cVar3) {
          if ((uVar12 != 0xffffffff) &&
             (lVar10 = (ulonglong)uVar12 * 0x10 + *(longlong *)(param_1 + 0x10), lVar10 != 0)) {
            return *(uint64_t *)(lVar10 + 8);
          }
          break;
        }
        uVar12 = *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar12 * 4);
      } while (uVar12 != 0xffffffff);
    }
  }
  *param_3 = 1;
  pbVar9 = &system_buffer_ptr;
  if (param_2 != (byte *)0x0) {
    pbVar9 = param_2;
  }
  uVar11 = 0xffffffffffffffff;
  do {
    uVar8 = uVar11;
    uVar11 = uVar8 + 1;
  } while (pbVar9[uVar11] != 0);
  iVar4 = (int)uVar8 + 2;
  if (iVar4 == 0) {
    uVar6 = 0;
  }
  else {
    plVar5 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    uVar6 = (**(code **)(*plVar5 + 8))(plVar5,iVar4,&unknown_var_1832_ptr,&unknown_var_4688_ptr,0x70);
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar6,pbVar9,uVar11 & 0xffffffff);
}






// 函数: void FUN_1806ac368(void)
void FUN_1806ac368(void)

{
  int iVar1;
  longlong *plVar2;
  uint64_t uVar3;
  ulonglong uVar4;
  void *puVar6;
  int8_t *unaff_RDI;
  void *in_R11;
  ulonglong uVar5;
  
  *unaff_RDI = 1;
  puVar6 = &system_buffer_ptr;
  if (in_R11 != (void *)0x0) {
    puVar6 = in_R11;
  }
  uVar4 = 0xffffffffffffffff;
  do {
    uVar5 = uVar4;
    uVar4 = uVar5 + 1;
  } while (puVar6[uVar4] != '\0');
  iVar1 = (int)uVar5 + 2;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2,iVar1,&unknown_var_1832_ptr,&unknown_var_4688_ptr,0x70);
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar3,puVar6,uVar4 & 0xffffffff);
}



uint64_t FUN_1806ac39b(void)

{
  int iVar1;
  longlong *plVar2;
  uint64_t uVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  void *puVar6;
  int8_t *unaff_RDI;
  longlong in_R9;
  longlong lVar7;
  int in_R10D;
  void *in_R11;
  ulonglong uVar5;
  
  if ((in_R10D != -1) && (lVar7 = in_R9 * 0x10 + unaff_RBX, lVar7 != 0)) {
    return *(uint64_t *)(lVar7 + 8);
  }
  *unaff_RDI = 1;
  puVar6 = &system_buffer_ptr;
  if (in_R11 != (void *)0x0) {
    puVar6 = in_R11;
  }
  uVar4 = 0xffffffffffffffff;
  do {
    uVar5 = uVar4;
    uVar4 = uVar5 + 1;
  } while (puVar6[uVar4] != '\0');
  iVar1 = (int)uVar5 + 2;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2,iVar1,&unknown_var_1832_ptr,&unknown_var_4688_ptr,0x70);
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar3,puVar6,uVar4 & 0xffffffff);
}






// 函数: void FUN_1806ac3b6(void)
void FUN_1806ac3b6(void)

{
  longlong *plVar1;
  uint64_t uVar2;
  
  plVar1 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
                    // WARNING: Subroutine does not return
  memcpy(uVar2);
}






