#include "TaleWorlds.Native.Split.h"

// 03_rendering_part200.c - 3 个函数

// 函数: void FUN_1803847d0(undefined8 param_1,longlong param_2,longlong param_3)
void FUN_1803847d0(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  char *pcVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint *puVar18;
  ulonglong *puVar19;
  float *pfVar20;
  longlong lVar21;
  uint *puVar22;
  undefined8 *puVar23;
  bool bVar24;
  undefined4 uVar25;
  undefined1 auStack_268 [32];
  ulonglong *puStack_248;
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [16];
  longlong lStack_218;
  longlong lStack_210;
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [224];
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  ulonglong uStack_98;
  
  lVar17 = _DAT_180c86890;
  uStack_98 = _DAT_180bf00a8 ^ (ulonglong)auStack_268;
  lVar21 = _DAT_180c86890 + 0x7440;
  puVar18 = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0x74e0) * 0x50 + lVar21);
  LOCK();
  uVar1 = *puVar18;
  *puVar18 = *puVar18 + 1;
  UNLOCK();
  uVar8 = uVar1 >> 9;
  uVar16 = (ulonglong)uVar8;
  pcVar14 = (char *)((longlong)puVar18 + uVar16 + 0x48);
  puVar22 = puVar18 + (ulonglong)uVar8 * 2 + 2;
  lStack_218 = param_3;
  lStack_210 = param_2;
  do {
    iVar15 = (int)uVar16;
    if (*(longlong *)puVar22 == 0) {
      lVar9 = FUN_18062b420(_DAT_180c8ed18,0x48000,0x25);
      LOCK();
      bVar24 = *(longlong *)(puVar18 + (longlong)iVar15 * 2 + 2) == 0;
      if (bVar24) {
        *(longlong *)(puVar18 + (longlong)iVar15 * 2 + 2) = lVar9;
      }
      UNLOCK();
      if (bVar24) {
        LOCK();
        *(undefined1 *)((longlong)iVar15 + 0x48 + (longlong)puVar18) = 0;
        UNLOCK();
      }
      else {
        if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar9);
        }
        do {
        } while (*pcVar14 != '\0');
      }
    }
    else {
      do {
      } while (*pcVar14 != '\0');
    }
    lVar9 = lStack_218;
    pcVar14 = pcVar14 + 1;
    uVar16 = (ulonglong)(iVar15 + 1);
    puVar22 = puVar22 + 2;
  } while ((longlong)(pcVar14 + (-0x48 - (longlong)puVar18)) <= (longlong)(ulonglong)uVar8);
  puVar23 = (undefined8 *)
            (*(longlong *)
              ((longlong)*(int *)(lVar17 + 0x74e0) * 0x50 + lVar21 + 8 + (ulonglong)uVar8 * 8) +
            (ulonglong)(uVar1 - (uVar1 & 0xfffffe00)) * 0x240);
  puVar10 = (undefined8 *)FUN_1803de8d0(lStack_218,auStack_1f0);
  uVar7 = puVar10[1];
  *puVar23 = *puVar10;
  puVar23[1] = uVar7;
  *(undefined4 *)((longlong)puVar23 + 0xc) = *(undefined4 *)(lVar9 + 0x34);
  *(undefined4 *)(puVar23 + 2) = *(undefined4 *)(lVar9 + 0x38);
  *(undefined4 *)((longlong)puVar23 + 0x14) = 0x7fc00001;
  *(float *)(puVar23 + 3) = 1.0 / (float)*(int *)(lVar9 + 0x3ec);
  *(float *)((longlong)puVar23 + 0x1c) = (float)(*(int *)(lVar9 + 200) != 0);
  FUN_180094c20(auStack_1d8);
  FUN_1803e0670(lVar9,0,auStack_1d8);
  *(uint *)((longlong)puVar23 + 0x24) = uStack_f8 ^ 0x80000000;
  *(uint *)(puVar23 + 5) = uStack_f4 ^ 0x80000000;
  *(uint *)((longlong)puVar23 + 0x2c) = uStack_f0 ^ 0x80000000;
  *(float *)(puVar23 + 4) = (float)(*(uint *)(lVar9 + 0xc0) & 0x80);
  uVar25 = cosf(*(float *)(lVar9 + 0xec) * 0.017453292);
  *(undefined4 *)(puVar23 + 6) = uVar25;
  uVar25 = cosf(*(float *)(lVar9 + 0xe8) * 0.017453292);
  *(undefined4 *)((longlong)puVar23 + 0x34) = uVar25;
  *(float *)(puVar23 + 7) = (float)*(int *)(lVar9 + 0x394);
  *(float *)((longlong)puVar23 + 0x3c) = (float)(*(uint *)(lVar9 + 0xc0) & 8);
  *(undefined4 *)(puVar23 + 8) = *(undefined4 *)(lVar9 + 0x398);
  *(undefined4 *)((longlong)puVar23 + 0x44) = *(undefined4 *)(lVar9 + 0x39c);
  uVar7 = *(undefined8 *)(lVar9 + 0xb8);
  puVar23[0x46] = *(undefined8 *)(lVar9 + 0xb0);
  puVar23[0x47] = uVar7;
  if (*(int *)(lVar9 + 200) != 0) {
    puVar10 = (undefined8 *)(lVar9 + 0x170);
    puVar19 = (ulonglong *)(lStack_210 + 0x3580);
    if ((*(byte *)(lVar9 + 0xc0) & 0x80) == 0) {
      lVar21 = 0x28;
      lVar17 = 0x28;
      do {
        puVar13 = *(undefined8 **)(lVar9 + 0x180);
        puVar12 = puVar10;
        if (puVar13 != (undefined8 *)0x0) {
          do {
            if ((ulonglong)puVar13[4] < *puVar19) {
              puVar13 = (undefined8 *)*puVar13;
            }
            else {
              puVar12 = puVar13;
              puVar13 = (undefined8 *)puVar13[1];
            }
          } while (puVar13 != (undefined8 *)0x0);
        }
        if ((puVar12 == puVar10) || (*puVar19 < (ulonglong)puVar12[4])) {
          puStack_248 = puVar19;
          puVar12 = (undefined8 *)FUN_180387860(puVar10,auStack_238);
          puVar12 = (undefined8 *)*puVar12;
        }
        if (*(longlong *)(lVar17 + (longlong)puVar12) == 0) goto FUN_180384e7e;
        lVar17 = lVar17 + 8;
      } while (lVar17 < 0x58);
      puVar13 = puVar23 + 0x16;
      pfVar20 = (float *)(puVar23 + 10);
      lVar17 = lVar9 - (longlong)puVar23;
      do {
        puVar23 = *(undefined8 **)(lVar9 + 0x180);
        puVar12 = puVar10;
        if (puVar23 != (undefined8 *)0x0) {
          do {
            if ((ulonglong)puVar23[4] < *puVar19) {
              puVar23 = (undefined8 *)*puVar23;
            }
            else {
              puVar12 = puVar23;
              puVar23 = (undefined8 *)puVar23[1];
            }
          } while (puVar23 != (undefined8 *)0x0);
        }
        if ((puVar12 == puVar10) || (*puVar19 < (ulonglong)puVar12[4])) {
          puStack_248 = puVar19;
          puVar12 = (undefined8 *)FUN_180387860(puVar10,auStack_208);
          puVar12 = (undefined8 *)*puVar12;
        }
        iVar15 = *(int *)(*(longlong *)(lVar21 + (longlong)puVar12) + 0xc);
        iVar3 = *(int *)(*(longlong *)(lVar21 + (longlong)puVar12) + 0x10);
        puVar23 = *(undefined8 **)(lVar9 + 0x180);
        puVar12 = puVar10;
        if (puVar23 != (undefined8 *)0x0) {
          do {
            if ((ulonglong)puVar23[4] < *puVar19) {
              puVar23 = (undefined8 *)*puVar23;
            }
            else {
              puVar12 = puVar23;
              puVar23 = (undefined8 *)puVar23[1];
            }
          } while (puVar23 != (undefined8 *)0x0);
        }
        if ((puVar12 == puVar10) || (*puVar19 < (ulonglong)puVar12[4])) {
          puStack_248 = puVar19;
          puVar12 = (undefined8 *)FUN_180387860(puVar10,auStack_200);
          puVar12 = (undefined8 *)*puVar12;
        }
        iVar4 = *(int *)(*(longlong *)(lVar21 + (longlong)puVar12) + 0xc);
        iVar5 = *(int *)(*(longlong *)(lVar21 + (longlong)puVar12) + 0x10);
        puVar23 = *(undefined8 **)(lVar9 + 0x180);
        puVar12 = puVar10;
        if (puVar23 != (undefined8 *)0x0) {
          do {
            if ((ulonglong)puVar23[4] < *puVar19) {
              puVar23 = (undefined8 *)*puVar23;
            }
            else {
              puVar12 = puVar23;
              puVar23 = (undefined8 *)puVar23[1];
            }
          } while (puVar23 != (undefined8 *)0x0);
        }
        if ((puVar12 == puVar10) || (*puVar19 < (ulonglong)puVar12[4])) {
          puStack_248 = puVar19;
          puVar12 = (undefined8 *)FUN_180387860(puVar10,auStack_1f8);
          puVar12 = (undefined8 *)*puVar12;
        }
        iVar6 = *(int *)(*(longlong *)(lVar21 + (longlong)puVar12) + 0x10);
        fVar2 = *(float *)(*(longlong *)(lVar21 + (longlong)puVar12) + 4);
        puVar12 = *(undefined8 **)(lVar9 + 0x180);
        puVar23 = puVar10;
        if (puVar12 != (undefined8 *)0x0) {
          do {
            if ((ulonglong)puVar12[4] < *puVar19) {
              puVar12 = (undefined8 *)*puVar12;
            }
            else {
              puVar23 = puVar12;
              puVar12 = (undefined8 *)puVar12[1];
            }
          } while (puVar12 != (undefined8 *)0x0);
        }
        if ((puVar23 == puVar10) || (*puVar19 < (ulonglong)puVar23[4])) {
          puStack_248 = puVar19;
          puVar23 = (undefined8 *)FUN_180387860(puVar10,auStack_228);
          puVar23 = (undefined8 *)*puVar23;
        }
        puVar23 = (undefined8 *)(lVar21 + (longlong)puVar23);
        lVar21 = lVar21 + 8;
        *pfVar20 = 0.05 / (float)(int)((float *)*puVar23)[4] + *(float *)*puVar23;
        pfVar20[1] = 0.05 / (float)iVar6 + fVar2;
        pfVar20[2] = ((float)iVar4 * 0.9) / (float)iVar5;
        pfVar20[3] = ((float)iVar15 * 0.9) / (float)iVar3;
        pfVar20 = pfVar20 + 4;
        puVar23 = (undefined8 *)((longlong)puVar13 + lVar17 + 0x120);
        uVar7 = puVar23[1];
        *puVar13 = *puVar23;
        puVar13[1] = uVar7;
        puVar23 = (undefined8 *)((longlong)puVar13 + lVar17 + 0x130);
        uVar7 = puVar23[1];
        puVar13[2] = *puVar23;
        puVar13[3] = uVar7;
        puVar23 = (undefined8 *)((longlong)puVar13 + lVar17 + 0x140);
        uVar7 = puVar23[1];
        puVar13[4] = *puVar23;
        puVar13[5] = uVar7;
        puVar23 = (undefined8 *)((longlong)puVar13 + lVar17 + 0x150);
        uVar7 = puVar23[1];
        puVar13[6] = *puVar23;
        puVar13[7] = uVar7;
        puVar13 = puVar13 + 8;
      } while (lVar21 < 0x58);
    }
    else {
      plVar11 = (longlong *)FUN_180387380(puVar10,puVar19);
      if (*plVar11 == 0) {
FUN_180384e7e:
        *(undefined4 *)((longlong)puVar23 + 0x1c) = 0;
      }
      else {
        plVar11 = (longlong *)FUN_180387380(puVar10,puVar19);
        iVar15 = *(int *)(*plVar11 + 0xc);
        iVar3 = *(int *)(*plVar11 + 0x10);
        plVar11 = (longlong *)FUN_180387380(puVar10,puVar19);
        iVar4 = *(int *)(*plVar11 + 0xc);
        iVar5 = *(int *)(*plVar11 + 0x10);
        plVar11 = (longlong *)FUN_180387380(puVar10,puVar19);
        iVar6 = *(int *)(*plVar11 + 0x10);
        fVar2 = *(float *)(*plVar11 + 4);
        puVar10 = (undefined8 *)FUN_180387380(puVar10,puVar19);
        *(float *)(puVar23 + 10) = 0.05 / (float)(int)((float *)*puVar10)[4] + *(float *)*puVar10;
        *(float *)((longlong)puVar23 + 0x54) = 0.05 / (float)iVar6 + fVar2;
        *(float *)(puVar23 + 0xb) = ((float)iVar4 * 0.9) / (float)iVar5;
        *(float *)((longlong)puVar23 + 0x5c) = ((float)iVar15 * 0.9) / (float)iVar3;
        uVar7 = *(undefined8 *)(lVar9 + 0x1d8);
        puVar23[0x16] = *(undefined8 *)(lVar9 + 0x1d0);
        puVar23[0x17] = uVar7;
        uVar7 = *(undefined8 *)(lVar9 + 0x1e8);
        puVar23[0x18] = *(undefined8 *)(lVar9 + 0x1e0);
        puVar23[0x19] = uVar7;
        uVar7 = *(undefined8 *)(lVar9 + 0x1f8);
        puVar23[0x1a] = *(undefined8 *)(lVar9 + 0x1f0);
        puVar23[0x1b] = uVar7;
        uVar7 = *(undefined8 *)(lVar9 + 0x208);
        puVar23[0x1c] = *(undefined8 *)(lVar9 + 0x200);
        puVar23[0x1d] = uVar7;
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_98 ^ (ulonglong)auStack_268);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803847fb(undefined8 param_1,longlong param_2,longlong param_3)
void FUN_1803847fb(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  char *pcVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint *puVar18;
  ulonglong *puVar19;
  longlong in_R11;
  float *pfVar20;
  undefined8 unaff_R13;
  longlong lVar21;
  uint *puVar22;
  undefined8 *puVar23;
  bool bVar24;
  undefined4 uVar25;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Dc;
  longlong lStack0000000000000050;
  longlong lStack0000000000000058;
  uint uStack0000000000000170;
  uint uStack0000000000000174;
  uint in_stack_00000178;
  ulonglong in_stack_000001d0;
  undefined4 in_stack_000001e0;
  undefined4 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  
  *(undefined8 *)(in_R11 + 8) = unaff_R13;
  lVar17 = _DAT_180c86890;
  lVar21 = _DAT_180c86890 + 0x7440;
  puVar18 = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0x74e0) * 0x50 + lVar21);
  LOCK();
  uVar1 = *puVar18;
  *puVar18 = *puVar18 + 1;
  UNLOCK();
  uVar8 = uVar1 >> 9;
  uVar16 = (ulonglong)uVar8;
  pcVar14 = (char *)((longlong)puVar18 + uVar16 + 0x48);
  puVar22 = puVar18 + (ulonglong)uVar8 * 2 + 2;
  lStack0000000000000050 = param_3;
  lStack0000000000000058 = param_2;
  do {
    iVar15 = (int)uVar16;
    if (*(longlong *)puVar22 == 0) {
      lVar9 = FUN_18062b420(_DAT_180c8ed18,0x48000,0x25);
      LOCK();
      bVar24 = *(longlong *)(puVar18 + (longlong)iVar15 * 2 + 2) == 0;
      if (bVar24) {
        *(longlong *)(puVar18 + (longlong)iVar15 * 2 + 2) = lVar9;
      }
      UNLOCK();
      if (bVar24) {
        LOCK();
        *(undefined1 *)((longlong)iVar15 + 0x48 + (longlong)puVar18) = 0;
        UNLOCK();
      }
      else {
        if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar9);
        }
        do {
        } while (*pcVar14 != '\0');
      }
    }
    else {
      do {
      } while (*pcVar14 != '\0');
    }
    lVar9 = lStack0000000000000050;
    pcVar14 = pcVar14 + 1;
    uVar16 = (ulonglong)(iVar15 + 1);
    puVar22 = puVar22 + 2;
  } while ((longlong)(pcVar14 + (-0x48 - (longlong)puVar18)) <= (longlong)(ulonglong)uVar8);
  puVar23 = (undefined8 *)
            (*(longlong *)
              ((longlong)*(int *)(lVar17 + 0x74e0) * 0x50 + lVar21 + 8 + (ulonglong)uVar8 * 8) +
            (ulonglong)(uVar1 - (uVar1 & 0xfffffe00)) * 0x240);
  puVar10 = (undefined8 *)FUN_1803de8d0(lStack0000000000000050,&stack0x00000078);
  uVar7 = puVar10[1];
  *puVar23 = *puVar10;
  puVar23[1] = uVar7;
  *(undefined4 *)((longlong)puVar23 + 0xc) = *(undefined4 *)(lVar9 + 0x34);
  *(undefined4 *)(puVar23 + 2) = *(undefined4 *)(lVar9 + 0x38);
  *(undefined4 *)((longlong)puVar23 + 0x14) = 0x7fc00001;
  *(float *)(puVar23 + 3) = 1.0 / (float)*(int *)(lVar9 + 0x3ec);
  *(float *)((longlong)puVar23 + 0x1c) = (float)(*(int *)(lVar9 + 200) != 0);
  FUN_180094c20(&stack0x00000090);
  FUN_1803e0670(lVar9,0,&stack0x00000090);
  *(uint *)((longlong)puVar23 + 0x24) = uStack0000000000000170 ^ 0x80000000;
  *(uint *)(puVar23 + 5) = uStack0000000000000174 ^ 0x80000000;
  *(uint *)((longlong)puVar23 + 0x2c) = in_stack_00000178 ^ 0x80000000;
  *(float *)(puVar23 + 4) = (float)(*(uint *)(lVar9 + 0xc0) & 0x80);
  uVar25 = cosf(*(float *)(lVar9 + 0xec) * 0.017453292);
  *(undefined4 *)(puVar23 + 6) = uVar25;
  uVar25 = cosf(*(float *)(lVar9 + 0xe8) * 0.017453292);
  *(undefined4 *)((longlong)puVar23 + 0x34) = uVar25;
  *(float *)(puVar23 + 7) = (float)*(int *)(lVar9 + 0x394);
  *(float *)((longlong)puVar23 + 0x3c) = (float)(*(uint *)(lVar9 + 0xc0) & 8);
  *(undefined4 *)(puVar23 + 8) = *(undefined4 *)(lVar9 + 0x398);
  *(undefined4 *)((longlong)puVar23 + 0x44) = *(undefined4 *)(lVar9 + 0x39c);
  uVar7 = *(undefined8 *)(lVar9 + 0xb8);
  puVar23[0x46] = *(undefined8 *)(lVar9 + 0xb0);
  puVar23[0x47] = uVar7;
  if (*(int *)(lVar9 + 200) != 0) {
    puVar10 = (undefined8 *)(lVar9 + 0x170);
    puVar19 = (ulonglong *)(lStack0000000000000058 + 0x3580);
    in_stack_000001f0 = unaff_XMM9_Qa;
    in_stack_000001f8 = unaff_XMM9_Qb;
    in_stack_00000200 = unaff_XMM8_Qa;
    in_stack_00000208 = unaff_XMM8_Qb;
    in_stack_00000210 = unaff_XMM7_Qa;
    if ((*(byte *)(lVar9 + 0xc0) & 0x80) == 0) {
      lVar21 = 0x28;
      lVar17 = 0x28;
      do {
        puVar13 = *(undefined8 **)(lVar9 + 0x180);
        puVar12 = puVar10;
        if (puVar13 != (undefined8 *)0x0) {
          do {
            if ((ulonglong)puVar13[4] < *puVar19) {
              puVar13 = (undefined8 *)*puVar13;
            }
            else {
              puVar12 = puVar13;
              puVar13 = (undefined8 *)puVar13[1];
            }
          } while (puVar13 != (undefined8 *)0x0);
        }
        if ((puVar12 == puVar10) || (*puVar19 < (ulonglong)puVar12[4])) {
          puVar12 = (undefined8 *)FUN_180387860(puVar10,&stack0x00000030);
          puVar12 = (undefined8 *)*puVar12;
        }
        if (*(longlong *)(lVar17 + (longlong)puVar12) == 0) goto FUN_180384e7e;
        lVar17 = lVar17 + 8;
      } while (lVar17 < 0x58);
      puVar13 = puVar23 + 0x16;
      pfVar20 = (float *)(puVar23 + 10);
      lVar17 = lVar9 - (longlong)puVar23;
      in_stack_000001e0 = unaff_XMM10_Da;
      in_stack_000001e8 = unaff_XMM10_Dc;
      do {
        puVar23 = *(undefined8 **)(lVar9 + 0x180);
        puVar12 = puVar10;
        if (puVar23 != (undefined8 *)0x0) {
          do {
            if ((ulonglong)puVar23[4] < *puVar19) {
              puVar23 = (undefined8 *)*puVar23;
            }
            else {
              puVar12 = puVar23;
              puVar23 = (undefined8 *)puVar23[1];
            }
          } while (puVar23 != (undefined8 *)0x0);
        }
        if ((puVar12 == puVar10) || (*puVar19 < (ulonglong)puVar12[4])) {
          puVar12 = (undefined8 *)FUN_180387860(puVar10,&stack0x00000060);
          puVar12 = (undefined8 *)*puVar12;
        }
        iVar15 = *(int *)(*(longlong *)(lVar21 + (longlong)puVar12) + 0xc);
        iVar3 = *(int *)(*(longlong *)(lVar21 + (longlong)puVar12) + 0x10);
        puVar23 = *(undefined8 **)(lVar9 + 0x180);
        puVar12 = puVar10;
        if (puVar23 != (undefined8 *)0x0) {
          do {
            if ((ulonglong)puVar23[4] < *puVar19) {
              puVar23 = (undefined8 *)*puVar23;
            }
            else {
              puVar12 = puVar23;
              puVar23 = (undefined8 *)puVar23[1];
            }
          } while (puVar23 != (undefined8 *)0x0);
        }
        if ((puVar12 == puVar10) || (*puVar19 < (ulonglong)puVar12[4])) {
          puVar12 = (undefined8 *)FUN_180387860(puVar10,&stack0x00000068);
          puVar12 = (undefined8 *)*puVar12;
        }
        iVar4 = *(int *)(*(longlong *)(lVar21 + (longlong)puVar12) + 0xc);
        iVar5 = *(int *)(*(longlong *)(lVar21 + (longlong)puVar12) + 0x10);
        puVar23 = *(undefined8 **)(lVar9 + 0x180);
        puVar12 = puVar10;
        if (puVar23 != (undefined8 *)0x0) {
          do {
            if ((ulonglong)puVar23[4] < *puVar19) {
              puVar23 = (undefined8 *)*puVar23;
            }
            else {
              puVar12 = puVar23;
              puVar23 = (undefined8 *)puVar23[1];
            }
          } while (puVar23 != (undefined8 *)0x0);
        }
        if ((puVar12 == puVar10) || (*puVar19 < (ulonglong)puVar12[4])) {
          puVar12 = (undefined8 *)FUN_180387860(puVar10,&stack0x00000070);
          puVar12 = (undefined8 *)*puVar12;
        }
        iVar6 = *(int *)(*(longlong *)(lVar21 + (longlong)puVar12) + 0x10);
        fVar2 = *(float *)(*(longlong *)(lVar21 + (longlong)puVar12) + 4);
        puVar12 = *(undefined8 **)(lVar9 + 0x180);
        puVar23 = puVar10;
        if (puVar12 != (undefined8 *)0x0) {
          do {
            if ((ulonglong)puVar12[4] < *puVar19) {
              puVar12 = (undefined8 *)*puVar12;
            }
            else {
              puVar23 = puVar12;
              puVar12 = (undefined8 *)puVar12[1];
            }
          } while (puVar12 != (undefined8 *)0x0);
        }
        if ((puVar23 == puVar10) || (*puVar19 < (ulonglong)puVar23[4])) {
          puVar23 = (undefined8 *)FUN_180387860(puVar10,&stack0x00000040);
          puVar23 = (undefined8 *)*puVar23;
        }
        puVar23 = (undefined8 *)(lVar21 + (longlong)puVar23);
        lVar21 = lVar21 + 8;
        *pfVar20 = 0.05 / (float)(int)((float *)*puVar23)[4] + *(float *)*puVar23;
        pfVar20[1] = 0.05 / (float)iVar6 + fVar2;
        pfVar20[2] = ((float)iVar4 * 0.9) / (float)iVar5;
        pfVar20[3] = ((float)iVar15 * 0.9) / (float)iVar3;
        pfVar20 = pfVar20 + 4;
        puVar23 = (undefined8 *)((longlong)puVar13 + lVar17 + 0x120);
        uVar7 = puVar23[1];
        *puVar13 = *puVar23;
        puVar13[1] = uVar7;
        puVar23 = (undefined8 *)((longlong)puVar13 + lVar17 + 0x130);
        uVar7 = puVar23[1];
        puVar13[2] = *puVar23;
        puVar13[3] = uVar7;
        puVar23 = (undefined8 *)((longlong)puVar13 + lVar17 + 0x140);
        uVar7 = puVar23[1];
        puVar13[4] = *puVar23;
        puVar13[5] = uVar7;
        puVar23 = (undefined8 *)((longlong)puVar13 + lVar17 + 0x150);
        uVar7 = puVar23[1];
        puVar13[6] = *puVar23;
        puVar13[7] = uVar7;
        puVar13 = puVar13 + 8;
      } while (lVar21 < 0x58);
    }
    else {
      plVar11 = (longlong *)FUN_180387380(puVar10,puVar19);
      if (*plVar11 == 0) {
FUN_180384e7e:
        *(undefined4 *)((longlong)puVar23 + 0x1c) = 0;
      }
      else {
        plVar11 = (longlong *)FUN_180387380(puVar10,puVar19);
        iVar15 = *(int *)(*plVar11 + 0xc);
        iVar3 = *(int *)(*plVar11 + 0x10);
        plVar11 = (longlong *)FUN_180387380(puVar10,puVar19);
        iVar4 = *(int *)(*plVar11 + 0xc);
        iVar5 = *(int *)(*plVar11 + 0x10);
        plVar11 = (longlong *)FUN_180387380(puVar10,puVar19);
        iVar6 = *(int *)(*plVar11 + 0x10);
        fVar2 = *(float *)(*plVar11 + 4);
        puVar10 = (undefined8 *)FUN_180387380(puVar10,puVar19);
        *(float *)(puVar23 + 10) = 0.05 / (float)(int)((float *)*puVar10)[4] + *(float *)*puVar10;
        *(float *)((longlong)puVar23 + 0x54) = 0.05 / (float)iVar6 + fVar2;
        *(float *)(puVar23 + 0xb) = ((float)iVar4 * 0.9) / (float)iVar5;
        *(float *)((longlong)puVar23 + 0x5c) = ((float)iVar15 * 0.9) / (float)iVar3;
        uVar7 = *(undefined8 *)(lVar9 + 0x1d8);
        puVar23[0x16] = *(undefined8 *)(lVar9 + 0x1d0);
        puVar23[0x17] = uVar7;
        uVar7 = *(undefined8 *)(lVar9 + 0x1e8);
        puVar23[0x18] = *(undefined8 *)(lVar9 + 0x1e0);
        puVar23[0x19] = uVar7;
        uVar7 = *(undefined8 *)(lVar9 + 0x1f8);
        puVar23[0x1a] = *(undefined8 *)(lVar9 + 0x1f0);
        puVar23[0x1b] = uVar7;
        uVar7 = *(undefined8 *)(lVar9 + 0x208);
        puVar23[0x1c] = *(undefined8 *)(lVar9 + 0x200);
        puVar23[0x1d] = uVar7;
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000001d0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180384a5b(void)
void FUN_180384a5b(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong unaff_RBP;
  longlong lVar13;
  ulonglong *puVar14;
  longlong unaff_R12;
  float *pfVar15;
  longlong lVar16;
  longlong unaff_R15;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Dc;
  longlong in_stack_00000058;
  ulonglong in_stack_000001d0;
  undefined4 in_stack_000001e0;
  undefined4 in_stack_000001e8;
  
  puVar9 = (undefined8 *)(unaff_RBP + 0x170);
  puVar14 = (ulonglong *)(in_stack_00000058 + 0x3580);
  if ((*(byte *)(unaff_RBP + 0xc0) & 0x80) == 0) {
    lVar16 = 0x28;
    lVar13 = 0x28;
    do {
      puVar12 = *(undefined8 **)(unaff_RBP + 0x180);
      puVar10 = puVar9;
      if (puVar12 != (undefined8 *)0x0) {
        do {
          if ((ulonglong)puVar12[4] < *puVar14) {
            puVar12 = (undefined8 *)*puVar12;
          }
          else {
            puVar10 = puVar12;
            puVar12 = (undefined8 *)puVar12[1];
          }
        } while (puVar12 != (undefined8 *)0x0);
      }
      if ((puVar10 == puVar9) || (*puVar14 < (ulonglong)puVar10[4])) {
        puVar10 = (undefined8 *)FUN_180387860(puVar9,&stack0x00000030);
        puVar10 = (undefined8 *)*puVar10;
      }
      if (*(longlong *)(lVar13 + (longlong)puVar10) == unaff_R12) goto FUN_180384e7e;
      lVar13 = lVar13 + 8;
    } while (lVar13 < 0x58);
    puVar12 = (undefined8 *)(unaff_R15 + 0xb0);
    pfVar15 = (float *)(unaff_R15 + 0x50);
    lVar13 = unaff_RBP - unaff_R15;
    in_stack_000001e0 = unaff_XMM10_Da;
    in_stack_000001e8 = unaff_XMM10_Dc;
    do {
      puVar10 = *(undefined8 **)(unaff_RBP + 0x180);
      puVar11 = puVar9;
      if (puVar10 != (undefined8 *)0x0) {
        do {
          if ((ulonglong)puVar10[4] < *puVar14) {
            puVar10 = (undefined8 *)*puVar10;
          }
          else {
            puVar11 = puVar10;
            puVar10 = (undefined8 *)puVar10[1];
          }
        } while (puVar10 != (undefined8 *)0x0);
      }
      if ((puVar11 == puVar9) || (*puVar14 < (ulonglong)puVar11[4])) {
        puVar11 = (undefined8 *)FUN_180387860(puVar9,&stack0x00000060);
        puVar11 = (undefined8 *)*puVar11;
      }
      iVar2 = *(int *)(*(longlong *)(lVar16 + (longlong)puVar11) + 0xc);
      iVar3 = *(int *)(*(longlong *)(lVar16 + (longlong)puVar11) + 0x10);
      puVar10 = *(undefined8 **)(unaff_RBP + 0x180);
      puVar11 = puVar9;
      if (puVar10 != (undefined8 *)0x0) {
        do {
          if ((ulonglong)puVar10[4] < *puVar14) {
            puVar10 = (undefined8 *)*puVar10;
          }
          else {
            puVar11 = puVar10;
            puVar10 = (undefined8 *)puVar10[1];
          }
        } while (puVar10 != (undefined8 *)0x0);
      }
      if ((puVar11 == puVar9) || (*puVar14 < (ulonglong)puVar11[4])) {
        puVar11 = (undefined8 *)FUN_180387860(puVar9,&stack0x00000068);
        puVar11 = (undefined8 *)*puVar11;
      }
      iVar4 = *(int *)(*(longlong *)(lVar16 + (longlong)puVar11) + 0xc);
      iVar5 = *(int *)(*(longlong *)(lVar16 + (longlong)puVar11) + 0x10);
      puVar10 = *(undefined8 **)(unaff_RBP + 0x180);
      puVar11 = puVar9;
      if (puVar10 != (undefined8 *)0x0) {
        do {
          if ((ulonglong)puVar10[4] < *puVar14) {
            puVar10 = (undefined8 *)*puVar10;
          }
          else {
            puVar11 = puVar10;
            puVar10 = (undefined8 *)puVar10[1];
          }
        } while (puVar10 != (undefined8 *)0x0);
      }
      if ((puVar11 == puVar9) || (*puVar14 < (ulonglong)puVar11[4])) {
        puVar11 = (undefined8 *)FUN_180387860(puVar9,&stack0x00000070);
        puVar11 = (undefined8 *)*puVar11;
      }
      iVar6 = *(int *)(*(longlong *)(lVar16 + (longlong)puVar11) + 0x10);
      fVar1 = *(float *)(*(longlong *)(lVar16 + (longlong)puVar11) + 4);
      puVar11 = *(undefined8 **)(unaff_RBP + 0x180);
      puVar10 = puVar9;
      if (puVar11 != (undefined8 *)0x0) {
        do {
          if ((ulonglong)puVar11[4] < *puVar14) {
            puVar11 = (undefined8 *)*puVar11;
          }
          else {
            puVar10 = puVar11;
            puVar11 = (undefined8 *)puVar11[1];
          }
        } while (puVar11 != (undefined8 *)0x0);
      }
      if ((puVar10 == puVar9) || (*puVar14 < (ulonglong)puVar10[4])) {
        puVar10 = (undefined8 *)FUN_180387860(puVar9,&stack0x00000040);
        puVar10 = (undefined8 *)*puVar10;
      }
      puVar10 = (undefined8 *)(lVar16 + (longlong)puVar10);
      lVar16 = lVar16 + 8;
      *pfVar15 = 0.05 / (float)(int)((float *)*puVar10)[4] + *(float *)*puVar10;
      pfVar15[1] = 0.05 / (float)iVar6 + fVar1;
      pfVar15[2] = ((float)iVar4 * 0.9) / (float)iVar5;
      pfVar15[3] = ((float)iVar2 * 0.9) / (float)iVar3;
      pfVar15 = pfVar15 + 4;
      puVar10 = (undefined8 *)((longlong)puVar12 + lVar13 + 0x120);
      uVar7 = puVar10[1];
      *puVar12 = *puVar10;
      puVar12[1] = uVar7;
      puVar10 = (undefined8 *)((longlong)puVar12 + lVar13 + 0x130);
      uVar7 = puVar10[1];
      puVar12[2] = *puVar10;
      puVar12[3] = uVar7;
      puVar10 = (undefined8 *)((longlong)puVar12 + lVar13 + 0x140);
      uVar7 = puVar10[1];
      puVar12[4] = *puVar10;
      puVar12[5] = uVar7;
      puVar10 = (undefined8 *)((longlong)puVar12 + lVar13 + 0x150);
      uVar7 = puVar10[1];
      puVar12[6] = *puVar10;
      puVar12[7] = uVar7;
      puVar12 = puVar12 + 8;
    } while (lVar16 < 0x58);
  }
  else {
    plVar8 = (longlong *)FUN_180387380(puVar9,puVar14);
    if (*plVar8 == unaff_R12) {
FUN_180384e7e:
      *(int *)(unaff_R15 + 0x1c) = (int)unaff_R12;
    }
    else {
      plVar8 = (longlong *)FUN_180387380(puVar9,puVar14);
      iVar2 = *(int *)(*plVar8 + 0xc);
      iVar3 = *(int *)(*plVar8 + 0x10);
      plVar8 = (longlong *)FUN_180387380(puVar9,puVar14);
      iVar4 = *(int *)(*plVar8 + 0xc);
      iVar5 = *(int *)(*plVar8 + 0x10);
      plVar8 = (longlong *)FUN_180387380(puVar9,puVar14);
      iVar6 = *(int *)(*plVar8 + 0x10);
      fVar1 = *(float *)(*plVar8 + 4);
      puVar9 = (undefined8 *)FUN_180387380(puVar9,puVar14);
      *(float *)(unaff_R15 + 0x50) = 0.05 / (float)(int)((float *)*puVar9)[4] + *(float *)*puVar9;
      *(float *)(unaff_R15 + 0x54) = 0.05 / (float)iVar6 + fVar1;
      *(float *)(unaff_R15 + 0x58) = ((float)iVar4 * 0.9) / (float)iVar5;
      *(float *)(unaff_R15 + 0x5c) = ((float)iVar2 * 0.9) / (float)iVar3;
      uVar7 = *(undefined8 *)(unaff_RBP + 0x1d8);
      *(undefined8 *)(unaff_R15 + 0xb0) = *(undefined8 *)(unaff_RBP + 0x1d0);
      *(undefined8 *)(unaff_R15 + 0xb8) = uVar7;
      uVar7 = *(undefined8 *)(unaff_RBP + 0x1e8);
      *(undefined8 *)(unaff_R15 + 0xc0) = *(undefined8 *)(unaff_RBP + 0x1e0);
      *(undefined8 *)(unaff_R15 + 200) = uVar7;
      uVar7 = *(undefined8 *)(unaff_RBP + 0x1f8);
      *(undefined8 *)(unaff_R15 + 0xd0) = *(undefined8 *)(unaff_RBP + 0x1f0);
      *(undefined8 *)(unaff_R15 + 0xd8) = uVar7;
      uVar7 = *(undefined8 *)(unaff_RBP + 0x208);
      *(undefined8 *)(unaff_R15 + 0xe0) = *(undefined8 *)(unaff_RBP + 0x200);
      *(undefined8 *)(unaff_R15 + 0xe8) = uVar7;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000001d0 ^ (ulonglong)&stack0x00000000);
}





