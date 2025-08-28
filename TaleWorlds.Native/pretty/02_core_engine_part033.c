#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part033.c - 2 个函数

// 函数: void FUN_180077710(longlong param_1)
void FUN_180077710(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180077750(longlong param_1,uint *param_2,float *param_3,longlong param_4,
                       longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  char cVar21;
  byte bVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  longlong lVar27;
  longlong lVar28;
  undefined4 *puVar29;
  uint *puVar30;
  byte bVar31;
  char *pcVar32;
  int iVar33;
  ulonglong uVar34;
  uint *puVar35;
  bool bVar36;
  undefined4 auStackX_8 [2];
  uint *puStackX_10;
  float *pfStackX_18;
  longlong lStackX_20;
  undefined4 auStack_138 [2];
  ulonglong uStack_130;
  undefined8 *apuStack_128 [2];
  longlong lStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  puStackX_10 = param_2;
  pfStackX_18 = param_3;
  lStackX_20 = param_4;
  if (*(char *)(param_1 + 0xf9) == '\0') {
    uVar24 = FUN_18062b1e0(_DAT_180c8ed18,0xc0,8,9);
    uVar24 = FUN_180084ea0(uVar24);
    *(undefined8 *)(param_1 + 0x1d8) = uVar24;
    LOCK();
    *(undefined1 *)(param_1 + 0xf9) = 1;
    UNLOCK();
  }
  if ((char)*(byte *)(param_1 + 0xfd) < '\0') {
    lVar27 = *(longlong *)(param_1 + 0x1b8);
    uVar24 = *(undefined8 *)(lVar27 + 0x290);
    *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(lVar27 + 0x288);
    *(undefined8 *)(param_1 + 0x2b0) = uVar24;
    uVar23 = *(undefined4 *)(lVar27 + 0x29c);
    uVar7 = *(undefined4 *)(lVar27 + 0x2a0);
    uVar8 = *(undefined4 *)(lVar27 + 0x2a4);
    *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(lVar27 + 0x298);
    *(undefined4 *)(param_1 + 700) = uVar23;
    *(undefined4 *)(param_1 + 0x2c0) = uVar7;
    *(undefined4 *)(param_1 + 0x2c4) = uVar8;
  }
  uVar25 = (ulonglong)*(uint *)(param_1 + 0x270);
  if ((*param_2 & *(uint *)(param_1 + 0x270)) == 0) goto FUN_180077ef9;
  bVar31 = *(byte *)(param_1 + 0xfd) & 0x20;
  lVar27 = param_1;
  if (bVar31 == 0) {
    lVar27 = func_0x000180085de0(*(undefined8 *)(param_1 + 0x1b0));
  }
  if (*(int *)(lVar27 + 0x200) == 0) {
LAB_180077847:
    if ((*(byte *)(param_1 + 0x100) & 4) != 0) goto LAB_180077879;
    lVar27 = *(longlong *)(param_1 + 0x1b8);
    uVar25 = 0;
    if (*(char *)(lVar27 + 0x38c) == '\t') {
      uVar25 = func_0x00018022d300();
      *(char *)(lVar27 + 0x38c) = (char)uVar25;
      if ((char)uVar25 == '\t') goto LAB_180077879;
    }
FUN_180077ef9:
    uVar25 = uVar25 & 0xffffffffffffff00;
  }
  else {
    lVar27 = param_1;
    if (bVar31 == 0) {
      lVar27 = func_0x000180085de0(*(undefined8 *)(param_1 + 0x1b0));
    }
    if (*(int *)(lVar27 + 0x1fc) * 3 == 0) goto LAB_180077847;
LAB_180077879:
    cVar21 = func_0x0001800854e0(param_1);
    if ((cVar21 == '\0') || (param_4 == 0)) {
      FUN_18007b1e0(param_1,0);
      if ((*(byte *)(param_1 + 0xfe) & 4) == 0) {
        uVar24 = FUN_180077420(param_1,param_2);
        bVar31 = (char)uVar24 << 2;
        bVar22 = bVar31 | *(byte *)(param_1 + 0xfe) & 0xfb;
        uVar25 = CONCAT71((int7)((ulonglong)uVar24 >> 8),bVar22);
        *(byte *)(param_1 + 0xfe) = bVar22;
        if ((bVar31 & 4) == 0) goto FUN_180077ef9;
      }
      uVar6 = *(uint *)(*(longlong *)(param_1 + 0x1b8) + 0x388);
      if (((uVar6 >> 0x19 & 1) != 0) ||
         ((*(longlong *)(param_1 + 600) != 0 && (0 < *(int *)(*(longlong *)(param_1 + 600) + 0x1c)))
         )) {
        iVar33 = *(int *)(_DAT_180c86870 + 0x224);
        puVar26 = *(undefined8 **)(param_1 + 600);
        if (puVar26 == (undefined8 *)0x0) {
          puVar26 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x58,8,3);
          *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffffffffffff;
          *(undefined4 *)(puVar26 + 9) = 0xffffffff;
          *puVar26 = 0;
          puVar26[2] = 0;
          puVar26[7] = 0;
          *(undefined4 *)(puVar26 + 5) = 0xffffffff;
          *(undefined4 *)(puVar26 + 4) = 0xffffffff;
          puVar26[3] = 0;
          *(undefined4 *)(puVar26 + 8) = 0;
          *(undefined4 *)(puVar26 + 1) = 0;
          *(undefined1 *)((longlong)puVar26 + 0x44) = 0;
          *(undefined1 *)((longlong)puVar26 + 0x24) = 0;
          *(undefined8 **)(param_1 + 600) = puVar26;
        }
        param_3 = pfStackX_18;
        if (*(int *)(puVar26 + 4) != iVar33) {
          *(int *)(puVar26 + 4) = iVar33;
          FUN_180079270(param_1,param_5);
          param_3 = pfStackX_18;
          if (((byte)(uVar6 >> 0x19) & 1) != 0) {
            if ((*(uint *)(param_1 + 0x100) & 0x800) != 0) {
              FUN_18007ee70(param_1);
            }
            lStack_118 = _DAT_180c86890 + 0x5868;
            puVar30 = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0x6a78) * 0x908 + lStack_118);
            LOCK();
            uVar6 = *puVar30;
            *puVar30 = *puVar30 + 1;
            UNLOCK();
            uVar25 = (ulonglong)(uVar6 >> 9);
            uVar34 = (ulonglong)(uVar6 >> 9);
            pcVar32 = (char *)((longlong)puVar30 + uVar34 + 0x808);
            puVar35 = puVar30 + (uVar25 + 1) * 2;
            uStack_130 = uVar25;
            do {
              iVar33 = (int)uVar34;
              if (*(longlong *)puVar35 == 0) {
                lVar27 = FUN_18062b420(_DAT_180c8ed18,0xc000,0x25);
                LOCK();
                bVar36 = *(longlong *)(puVar30 + (longlong)iVar33 * 2 + 2) == 0;
                if (bVar36) {
                  *(longlong *)(puVar30 + (longlong)iVar33 * 2 + 2) = lVar27;
                }
                UNLOCK();
                if (bVar36) {
                  FUN_1800e94a0(puVar30,iVar33 << 9);
                  LOCK();
                  *(undefined1 *)((longlong)puVar30 + (longlong)iVar33 + 0x808) = 0;
                  UNLOCK();
                  uVar25 = uStack_130;
                }
                else {
                  if (lVar27 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  do {
                    uVar25 = uStack_130;
                  } while (*pcVar32 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar32 != '\0');
              }
              pcVar32 = pcVar32 + 1;
              uVar34 = (ulonglong)(iVar33 + 1);
              puVar35 = puVar35 + 2;
            } while ((longlong)(pcVar32 + (-0x808 - (longlong)puVar30)) <= (longlong)uVar25);
            puVar26 = (undefined8 *)
                      (*(longlong *)
                        ((longlong)*(int *)(lStack_118 + 0x1210) * 0x908 + lStack_118 + 8 +
                        uVar25 * 8) + (ulonglong)(uVar6 - (uVar6 & 0xfffffe00)) * 0x60);
            lVar27 = param_1;
            apuStack_128[0] = puVar26;
            if ((*(byte *)(param_1 + 0xfd) & 0x20) == 0) {
              lVar27 = func_0x000180085de0(*(undefined8 *)(param_1 + 0x1b0));
            }
            lVar28 = *(longlong *)(param_1 + 0x1b8);
            bVar31 = *(byte *)(lVar28 + 0x38c);
            if (bVar31 == 9) {
              bVar31 = func_0x00018022d300();
              *(byte *)(lVar28 + 0x38c) = bVar31;
            }
            param_2 = puStackX_10;
            lVar27 = *(longlong *)(lVar27 + 0x1e0);
            *puVar26 = *(undefined8 *)(lVar27 + (ulonglong)bVar31 * 0x18);
            puVar26[1] = *(undefined8 *)(lVar27 + 8 + (ulonglong)bVar31 * 0x18);
            *(undefined4 *)(apuStack_128[0] + 2) =
                 *(undefined4 *)(*(longlong *)(param_1 + 600) + 0x2c);
            *(undefined4 *)((longlong)apuStack_128[0] + 0x14) =
                 *(undefined4 *)(*(longlong *)(param_1 + 600) + 0x4c);
            *(int *)(apuStack_128[0] + 9) = (int)*(char *)(*(longlong *)(param_1 + 600) + 0x44);
            if ((*(longlong *)(param_1 + 0x2d0) == 0) ||
               (*(int *)(*(longlong *)(param_1 + 0x2d0) + 0x14) == 0)) {
              uVar23 = 0xffffffff;
            }
            else {
              uVar23 = *(undefined4 *)(param_1 + 0x108);
            }
            *(undefined4 *)(apuStack_128[0] + 3) = uVar23;
            if ((*(longlong *)(param_1 + 0x2d0) == 0) ||
               (*(int *)(*(longlong *)(param_1 + 0x2d0) + 0x14) == 0)) {
              uVar23 = 0xffffffff;
            }
            else {
              uVar23 = *(undefined4 *)(param_1 + 0x10c);
            }
            *(undefined4 *)((longlong)apuStack_128[0] + 0x1c) = uVar23;
            if ((*(longlong *)(param_1 + 0x2d0) == 0) ||
               (*(int *)(*(longlong *)(param_1 + 0x2d0) + 0x14) == 0)) {
              uVar23 = 0xffffffff;
            }
            else {
              uVar23 = *(undefined4 *)(param_1 + 0x110);
            }
            *(undefined4 *)(apuStack_128[0] + 4) = uVar23;
            *(byte *)((longlong)apuStack_128[0] + 0x4e) = *(byte *)(param_1 + 0xfe) >> 3 & 1;
            if (*(int *)(param_1 + 0x108) != -1) {
              puVar29 = *(undefined4 **)(param_1 + 0x2d0);
              uVar23 = puVar29[1];
              uVar7 = puVar29[2];
              uVar8 = puVar29[3];
              *(undefined4 *)(apuStack_128[0] + 5) = *puVar29;
              *(undefined4 *)((longlong)apuStack_128[0] + 0x2c) = uVar23;
              *(undefined4 *)(apuStack_128[0] + 6) = uVar7;
              *(undefined4 *)((longlong)apuStack_128[0] + 0x34) = uVar8;
              uVar24 = *(undefined8 *)(puVar29 + 6);
              apuStack_128[0][7] = *(undefined8 *)(puVar29 + 4);
              apuStack_128[0][8] = uVar24;
            }
            *(undefined1 *)((longlong)apuStack_128[0] + 0x4f) =
                 *(undefined1 *)(*(longlong *)(param_1 + 600) + 0x24);
            lVar27 = *(longlong *)(param_1 + 600);
            if (*(char *)(lVar27 + 0x24) != '\0') {
              uVar23 = *(undefined4 *)(param_1 + 0x2ac);
              uVar7 = *(undefined4 *)(param_1 + 0x2b0);
              uVar8 = *(undefined4 *)(param_1 + 0x2b4);
              *(undefined4 *)(apuStack_128[0] + 10) = *(undefined4 *)(param_1 + 0x2a8);
              *(undefined4 *)((longlong)apuStack_128[0] + 0x54) = uVar23;
              *(undefined4 *)(apuStack_128[0] + 0xb) = uVar7;
              *(undefined4 *)((longlong)apuStack_128[0] + 0x5c) = uVar8;
              lVar27 = *(longlong *)(param_1 + 600);
            }
            *(bool *)((longlong)apuStack_128[0] + 0x4c) = *(longlong *)(lVar27 + 0x10) != 0;
            *(undefined1 *)((longlong)apuStack_128[0] + 0x4d) = 1;
            if ((*(char *)(param_5 + 0xc) != '\0') ||
               (0 < *(int *)(*(longlong *)(param_1 + 600) + 0x1c))) {
              *(undefined1 *)((longlong)apuStack_128[0] + 0x4d) = 0;
            }
            if (*(uint **)(puStackX_10 + 10) == (uint *)0x0) {
              auStack_138[0] = 0xffffffff;
              puVar29 = auStack_138;
              puVar35 = puStackX_10;
            }
            else {
              auStackX_8[0] = 0xffffffff;
              puVar29 = auStackX_8;
              puVar35 = *(uint **)(puStackX_10 + 10);
            }
            FUN_180080e90(puVar35 + 0xce2,puVar29,apuStack_128);
            param_3 = pfStackX_18;
            param_4 = lStackX_20;
          }
        }
      }
    }
    if ((*(uint *)(param_1 + 0x100) & 0x4000000) != 0) {
      fVar9 = *param_3;
      fVar10 = param_3[1];
      fVar11 = param_3[2];
      fVar12 = param_3[3];
      fVar13 = param_3[4];
      fVar14 = param_3[5];
      fVar15 = param_3[6];
      fVar16 = param_3[7];
      fVar17 = param_3[8];
      fVar18 = param_3[9];
      fVar19 = param_3[10];
      fVar20 = param_3[0xb];
      fVar1 = *(float *)(param_1 + 0x124);
      fVar2 = *(float *)(param_1 + 0x120);
      fVar3 = *(float *)(param_1 + 0x128);
      fVar4 = *(float *)(param_1 + 0x134);
      fVar5 = *(float *)(param_1 + 0x130);
      fStack_c8 = fVar1 * fVar13 + fVar2 * fVar9 + fVar3 * fVar17;
      fStack_c4 = fVar1 * fVar14 + fVar2 * fVar10 + fVar3 * fVar18;
      fStack_c0 = fVar1 * fVar15 + fVar2 * fVar11 + fVar3 * fVar19;
      fStack_bc = fVar1 * fVar16 + fVar2 * fVar12 + fVar3 * fVar20;
      fVar1 = *(float *)(param_1 + 0x138);
      fVar2 = *(float *)(param_1 + 0x140);
      fVar3 = *(float *)(param_1 + 0x144);
      fStack_b8 = fVar4 * fVar13 + fVar5 * fVar9 + fVar1 * fVar17;
      fStack_b4 = fVar4 * fVar14 + fVar5 * fVar10 + fVar1 * fVar18;
      fStack_b0 = fVar4 * fVar15 + fVar5 * fVar11 + fVar1 * fVar19;
      fStack_ac = fVar4 * fVar16 + fVar5 * fVar12 + fVar1 * fVar20;
      fVar1 = *(float *)(param_1 + 0x148);
      fVar4 = *(float *)(param_1 + 0x154);
      fVar5 = *(float *)(param_1 + 0x150);
      fStack_a8 = fVar3 * fVar13 + fVar2 * fVar9 + fVar1 * fVar17;
      fStack_a4 = fVar3 * fVar14 + fVar2 * fVar10 + fVar1 * fVar18;
      fStack_a0 = fVar3 * fVar15 + fVar2 * fVar11 + fVar1 * fVar19;
      fStack_9c = fVar3 * fVar16 + fVar2 * fVar12 + fVar1 * fVar20;
      fVar1 = *(float *)(param_1 + 0x158);
      fStack_98 = fVar4 * fVar13 + fVar5 * fVar9 + fVar1 * fVar17 + param_3[0xc];
      fStack_94 = fVar4 * fVar14 + fVar5 * fVar10 + fVar1 * fVar18 + param_3[0xd];
      fStack_90 = fVar4 * fVar15 + fVar5 * fVar11 + fVar1 * fVar19 + param_3[0xe];
      fStack_8c = fVar4 * fVar16 + fVar5 * fVar12 + fVar1 * fVar20 + param_3[0xf];
      param_3 = &fStack_c8;
    }
    FUN_180085190(&uStack_108,param_2 + 0xc,*(undefined1 *)(param_1 + 0xf7),param_3);
    uVar6 = param_2[0x6f6];
    iVar33 = *(int *)(_DAT_180c86870 + 0x224);
    if (((*(byte *)(param_1 + 0xfd) & 1) == 0) &&
       ((*(int *)(param_1 + 0x1d0) == iVar33 || (*(int *)(param_1 + 0x1d0) == iVar33 + -1)))) {
      bVar31 = 0;
    }
    else {
      bVar31 = 1;
    }
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe | bVar31;
    bVar22 = (byte)uVar6 & 0x20;
    if ((bVar22 != 0) && (bVar31 != 0)) {
      *(undefined8 *)(param_1 + 0x160) = uStack_108;
      *(undefined8 *)(param_1 + 0x168) = uStack_100;
      *(undefined8 *)(param_1 + 0x170) = uStack_f8;
      *(undefined8 *)(param_1 + 0x178) = uStack_f0;
      *(undefined8 *)(param_1 + 0x180) = uStack_e8;
      *(undefined8 *)(param_1 + 0x188) = uStack_e0;
      *(undefined8 *)(param_1 + 400) = uStack_d8;
      *(undefined8 *)(param_1 + 0x198) = uStack_d0;
    }
    uVar25 = FUN_18024a290(param_2,param_1,&uStack_108,param_4,param_5);
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe;
    *(int *)(param_1 + 0x1d0) = iVar33;
    if (bVar22 != 0) {
      *(undefined8 *)(param_1 + 0x160) = uStack_108;
      *(undefined8 *)(param_1 + 0x168) = uStack_100;
      *(undefined8 *)(param_1 + 0x170) = uStack_f8;
      *(undefined8 *)(param_1 + 0x178) = uStack_f0;
      *(undefined8 *)(param_1 + 0x180) = uStack_e8;
      *(undefined8 *)(param_1 + 0x188) = uStack_e0;
      *(undefined8 *)(param_1 + 400) = uStack_d8;
      *(undefined8 *)(param_1 + 0x198) = uStack_d0;
    }
  }
  return uVar25;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007799c(void)
void FUN_18007799c(void)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  byte bVar29;
  byte bVar30;
  undefined4 uVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong lVar34;
  undefined4 *puVar35;
  longlong unaff_RBX;
  uint *puVar36;
  char *pcVar37;
  undefined8 *puVar38;
  float *pfVar39;
  int unaff_R12D;
  int iVar40;
  ulonglong uVar41;
  uint *puVar42;
  bool in_ZF;
  bool bVar43;
  undefined4 in_stack_00000030;
  ulonglong in_stack_00000038;
  undefined8 *in_stack_00000040;
  longlong in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float fStack00000000000000b8;
  float fStack00000000000000bc;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  undefined4 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000118;
  undefined4 in_stack_00000170;
  longlong in_stack_00000178;
  float *in_stack_00000180;
  undefined8 in_stack_00000188;
  longlong in_stack_00000190;
  
  if (!in_ZF) {
    FUN_18007ee70();
  }
  in_stack_00000050 = _DAT_180c86890 + 0x5868;
  puVar36 = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0x6a78) * 0x908 + in_stack_00000050);
  LOCK();
  uVar1 = *puVar36;
  *puVar36 = *puVar36 + unaff_R12D;
  UNLOCK();
  uVar32 = (ulonglong)(uVar1 >> 9);
  uVar41 = (ulonglong)(uVar1 >> 9);
  pcVar37 = (char *)((longlong)puVar36 + uVar41 + 0x808);
  puVar42 = puVar36 + (uVar32 + 1) * 2;
  in_stack_00000038 = uVar32;
  do {
    iVar40 = (int)uVar41;
    if (*(longlong *)puVar42 == 0) {
      lVar33 = FUN_18062b420(_DAT_180c8ed18,0xc000,0x25);
      LOCK();
      bVar43 = *(longlong *)(puVar36 + (longlong)iVar40 * 2 + 2) == 0;
      if (bVar43) {
        *(longlong *)(puVar36 + (longlong)iVar40 * 2 + 2) = lVar33;
      }
      UNLOCK();
      if (bVar43) {
        FUN_1800e94a0(puVar36,iVar40 << 9);
        LOCK();
        *(undefined1 *)((longlong)puVar36 + (longlong)iVar40 + 0x808) = 0;
        UNLOCK();
        uVar32 = in_stack_00000038;
      }
      else {
        if (lVar33 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        do {
          uVar32 = in_stack_00000038;
        } while (*pcVar37 != '\0');
      }
    }
    else {
      do {
      } while (*pcVar37 != '\0');
    }
    pcVar37 = pcVar37 + 1;
    uVar41 = (ulonglong)(iVar40 + 1);
    puVar42 = puVar42 + 2;
  } while ((longlong)(pcVar37 + (-0x808 - (longlong)puVar36)) <= (longlong)uVar32);
  puVar38 = (undefined8 *)
            (*(longlong *)
              ((longlong)*(int *)(in_stack_00000050 + 0x1210) * 0x908 + in_stack_00000050 + 8 +
              uVar32 * 8) + (ulonglong)(uVar1 - (uVar1 & 0xfffffe00)) * 0x60);
  lVar33 = unaff_RBX;
  in_stack_00000040 = puVar38;
  if ((*(byte *)(unaff_RBX + 0xfd) & 0x20) == 0) {
    lVar33 = func_0x000180085de0(*(undefined8 *)(unaff_RBX + 0x1b0));
  }
  lVar34 = *(longlong *)(unaff_RBX + 0x1b8);
  bVar29 = *(byte *)(lVar34 + 0x38c);
  if (bVar29 == 9) {
    bVar29 = func_0x00018022d300();
    *(byte *)(lVar34 + 0x38c) = bVar29;
  }
  lVar34 = in_stack_00000178;
  lVar33 = *(longlong *)(lVar33 + 0x1e0);
  *puVar38 = *(undefined8 *)(lVar33 + (ulonglong)bVar29 * 0x18);
  puVar38[1] = *(undefined8 *)(lVar33 + 8 + (ulonglong)bVar29 * 0x18);
  *(undefined4 *)(in_stack_00000040 + 2) = *(undefined4 *)(*(longlong *)(unaff_RBX + 600) + 0x2c);
  *(undefined4 *)((longlong)in_stack_00000040 + 0x14) =
       *(undefined4 *)(*(longlong *)(unaff_RBX + 600) + 0x4c);
  *(int *)(in_stack_00000040 + 9) = (int)*(char *)(*(longlong *)(unaff_RBX + 600) + 0x44);
  if ((*(longlong *)(unaff_RBX + 0x2d0) == 0) ||
     (*(int *)(*(longlong *)(unaff_RBX + 0x2d0) + 0x14) == 0)) {
    uVar31 = 0xffffffff;
  }
  else {
    uVar31 = *(undefined4 *)(unaff_RBX + 0x108);
  }
  *(undefined4 *)(in_stack_00000040 + 3) = uVar31;
  if ((*(longlong *)(unaff_RBX + 0x2d0) == 0) ||
     (*(int *)(*(longlong *)(unaff_RBX + 0x2d0) + 0x14) == 0)) {
    uVar31 = 0xffffffff;
  }
  else {
    uVar31 = *(undefined4 *)(unaff_RBX + 0x10c);
  }
  *(undefined4 *)((longlong)in_stack_00000040 + 0x1c) = uVar31;
  if ((*(longlong *)(unaff_RBX + 0x2d0) == 0) ||
     (*(int *)(*(longlong *)(unaff_RBX + 0x2d0) + 0x14) == 0)) {
    uVar31 = 0xffffffff;
  }
  else {
    uVar31 = *(undefined4 *)(unaff_RBX + 0x110);
  }
  *(undefined4 *)(in_stack_00000040 + 4) = uVar31;
  *(byte *)((longlong)in_stack_00000040 + 0x4e) = *(byte *)(unaff_RBX + 0xfe) >> 3 & 1;
  if (*(int *)(unaff_RBX + 0x108) != -1) {
    puVar35 = *(undefined4 **)(unaff_RBX + 0x2d0);
    uVar31 = puVar35[1];
    uVar7 = puVar35[2];
    uVar8 = puVar35[3];
    *(undefined4 *)(in_stack_00000040 + 5) = *puVar35;
    *(undefined4 *)((longlong)in_stack_00000040 + 0x2c) = uVar31;
    *(undefined4 *)(in_stack_00000040 + 6) = uVar7;
    *(undefined4 *)((longlong)in_stack_00000040 + 0x34) = uVar8;
    uVar21 = *(undefined8 *)(puVar35 + 6);
    in_stack_00000040[7] = *(undefined8 *)(puVar35 + 4);
    in_stack_00000040[8] = uVar21;
  }
  *(undefined1 *)((longlong)in_stack_00000040 + 0x4f) =
       *(undefined1 *)(*(longlong *)(unaff_RBX + 600) + 0x24);
  lVar33 = *(longlong *)(unaff_RBX + 600);
  if (*(char *)(lVar33 + 0x24) != '\0') {
    uVar31 = *(undefined4 *)(unaff_RBX + 0x2ac);
    uVar7 = *(undefined4 *)(unaff_RBX + 0x2b0);
    uVar8 = *(undefined4 *)(unaff_RBX + 0x2b4);
    *(undefined4 *)(in_stack_00000040 + 10) = *(undefined4 *)(unaff_RBX + 0x2a8);
    *(undefined4 *)((longlong)in_stack_00000040 + 0x54) = uVar31;
    *(undefined4 *)(in_stack_00000040 + 0xb) = uVar7;
    *(undefined4 *)((longlong)in_stack_00000040 + 0x5c) = uVar8;
    lVar33 = *(longlong *)(unaff_RBX + 600);
  }
  *(bool *)((longlong)in_stack_00000040 + 0x4c) = *(longlong *)(lVar33 + 0x10) != 0;
  *(undefined1 *)((longlong)in_stack_00000040 + 0x4d) = 1;
  if ((*(char *)(in_stack_00000190 + 0xc) != '\0') ||
     (0 < *(int *)(*(longlong *)(unaff_RBX + 600) + 0x1c))) {
    *(undefined1 *)((longlong)in_stack_00000040 + 0x4d) = 0;
  }
  if (*(longlong *)(in_stack_00000178 + 0x28) == 0) {
    in_stack_00000030 = 0xffffffff;
    puVar35 = &stack0x00000030;
    lVar33 = in_stack_00000178;
  }
  else {
    in_stack_00000170 = 0xffffffff;
    puVar35 = &stack0x00000170;
    lVar33 = *(longlong *)(in_stack_00000178 + 0x28);
  }
  FUN_180080e90(lVar33 + 0x3388,puVar35,&stack0x00000040);
  pfVar39 = in_stack_00000180;
  if ((*(uint *)(unaff_RBX + 0x100) & 0x4000000) != 0) {
    fVar9 = *in_stack_00000180;
    fVar10 = in_stack_00000180[1];
    fVar11 = in_stack_00000180[2];
    fVar12 = in_stack_00000180[3];
    fVar13 = in_stack_00000180[4];
    fVar14 = in_stack_00000180[5];
    fVar15 = in_stack_00000180[6];
    fVar16 = in_stack_00000180[7];
    fVar17 = in_stack_00000180[8];
    fVar18 = in_stack_00000180[9];
    fVar19 = in_stack_00000180[10];
    fVar20 = in_stack_00000180[0xb];
    fVar2 = *(float *)(unaff_RBX + 0x124);
    fVar3 = *(float *)(unaff_RBX + 0x120);
    fVar4 = *(float *)(unaff_RBX + 0x128);
    fVar5 = *(float *)(unaff_RBX + 0x134);
    fVar6 = *(float *)(unaff_RBX + 0x130);
    fStack00000000000000a0 = fVar2 * fVar13 + fVar3 * fVar9 + fVar4 * fVar17;
    fStack00000000000000a4 = fVar2 * fVar14 + fVar3 * fVar10 + fVar4 * fVar18;
    fStack00000000000000a8 = fVar2 * fVar15 + fVar3 * fVar11 + fVar4 * fVar19;
    fStack00000000000000ac = fVar2 * fVar16 + fVar3 * fVar12 + fVar4 * fVar20;
    fVar2 = *(float *)(unaff_RBX + 0x138);
    fVar3 = *(float *)(unaff_RBX + 0x140);
    fVar4 = *(float *)(unaff_RBX + 0x144);
    fStack00000000000000b0 = fVar5 * fVar13 + fVar6 * fVar9 + fVar2 * fVar17;
    fStack00000000000000b4 = fVar5 * fVar14 + fVar6 * fVar10 + fVar2 * fVar18;
    fStack00000000000000b8 = fVar5 * fVar15 + fVar6 * fVar11 + fVar2 * fVar19;
    fStack00000000000000bc = fVar5 * fVar16 + fVar6 * fVar12 + fVar2 * fVar20;
    fVar2 = *(float *)(unaff_RBX + 0x148);
    fVar5 = *(float *)(unaff_RBX + 0x154);
    fVar6 = *(float *)(unaff_RBX + 0x150);
    fStack00000000000000c0 = fVar4 * fVar13 + fVar3 * fVar9 + fVar2 * fVar17;
    fStack00000000000000c4 = fVar4 * fVar14 + fVar3 * fVar10 + fVar2 * fVar18;
    fStack00000000000000c8 = fVar4 * fVar15 + fVar3 * fVar11 + fVar2 * fVar19;
    fStack00000000000000cc = fVar4 * fVar16 + fVar3 * fVar12 + fVar2 * fVar20;
    fVar2 = *(float *)(unaff_RBX + 0x158);
    fStack00000000000000d0 =
         fVar5 * fVar13 + fVar6 * fVar9 + fVar2 * fVar17 + in_stack_00000180[0xc];
    fStack00000000000000d4 =
         fVar5 * fVar14 + fVar6 * fVar10 + fVar2 * fVar18 + in_stack_00000180[0xd];
    fStack00000000000000d8 =
         fVar5 * fVar15 + fVar6 * fVar11 + fVar2 * fVar19 + in_stack_00000180[0xe];
    fStack00000000000000dc =
         fVar5 * fVar16 + fVar6 * fVar12 + fVar2 * fVar20 + in_stack_00000180[0xf];
    pfVar39 = &stack0x000000a0;
  }
  FUN_180085190(&stack0x00000060,lVar34 + 0x30,*(undefined1 *)(unaff_RBX + 0xf7),pfVar39);
  uVar28 = in_stack_00000098;
  uVar27 = in_stack_00000090;
  uVar26 = in_stack_00000088;
  uVar25 = in_stack_00000080;
  uVar24 = in_stack_00000078;
  uVar23 = in_stack_00000070;
  uVar22 = in_stack_00000068;
  uVar21 = in_stack_00000060;
  bVar29 = *(byte *)(lVar34 + 0x1bd8);
  iVar40 = *(int *)(_DAT_180c86870 + 0x224);
  if (((*(byte *)(unaff_RBX + 0xfd) & 1) == 0) &&
     ((*(int *)(unaff_RBX + 0x1d0) == iVar40 || (*(int *)(unaff_RBX + 0x1d0) == iVar40 + -1)))) {
    bVar30 = 0;
  }
  else {
    bVar30 = 1;
  }
  *(byte *)(unaff_RBX + 0xfd) = *(byte *)(unaff_RBX + 0xfd) & 0xfe | bVar30;
  bVar29 = bVar29 & 0x20;
  if ((bVar29 != 0) && (bVar30 != 0)) {
    *(undefined8 *)(unaff_RBX + 0x160) = in_stack_00000060;
    *(undefined8 *)(unaff_RBX + 0x168) = in_stack_00000068;
    *(undefined8 *)(unaff_RBX + 0x170) = in_stack_00000070;
    *(undefined8 *)(unaff_RBX + 0x178) = in_stack_00000078;
    *(undefined8 *)(unaff_RBX + 0x180) = in_stack_00000080;
    *(undefined8 *)(unaff_RBX + 0x188) = in_stack_00000088;
    *(undefined8 *)(unaff_RBX + 400) = in_stack_00000090;
    *(undefined8 *)(unaff_RBX + 0x198) = in_stack_00000098;
  }
  FUN_18024a290(lVar34);
  *(byte *)(unaff_RBX + 0xfd) = *(byte *)(unaff_RBX + 0xfd) & 0xfe;
  *(int *)(unaff_RBX + 0x1d0) = iVar40;
  if (bVar29 != 0) {
    *(undefined8 *)(unaff_RBX + 0x160) = uVar21;
    *(undefined8 *)(unaff_RBX + 0x168) = uVar22;
    *(undefined8 *)(unaff_RBX + 0x170) = uVar23;
    *(undefined8 *)(unaff_RBX + 0x178) = uVar24;
    *(undefined8 *)(unaff_RBX + 0x180) = uVar25;
    *(undefined8 *)(unaff_RBX + 0x188) = uVar26;
    *(undefined8 *)(unaff_RBX + 400) = uVar27;
    *(undefined8 *)(unaff_RBX + 0x198) = uVar28;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



