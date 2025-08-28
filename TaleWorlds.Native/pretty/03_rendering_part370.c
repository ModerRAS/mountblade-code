#include "TaleWorlds.Native.Split.h"

// 03_rendering_part370.c - 9 个函数

// 函数: void FUN_18046c0ed(longlong *param_1)
void FUN_18046c0ed(longlong *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong in_RAX;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *unaff_RBX;
  undefined8 *unaff_RBP;
  longlong *unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R14;
  undefined8 *unaff_R15;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uStackX_20;
  undefined4 uStackX_24;
  undefined8 in_stack_00000060;
  ulonglong in_stack_00000068;
  undefined8 in_stack_00000070;
  ulonglong in_stack_00000078;
  
  do {
    (**(code **)(in_RAX + 0x160))(param_1);
    puVar16 = unaff_RBX;
    param_1 = unaff_RDI;
    while( true ) {
      uStackX_20 = *(undefined4 *)(*(longlong *)(unaff_R14 + 0x28) + 0x70);
      uStackX_24 = *(undefined4 *)(*(longlong *)(unaff_R14 + 0x28) + 0x74);
      FUN_180084760(&uStackX_20,unaff_RBP + 6);
      in_stack_00000060 = unaff_RBP[-0xb];
      in_stack_00000070 = unaff_RBP[-9];
      in_stack_00000068 = unaff_RBP[-10] & 0xffffffff;
      in_stack_00000078 = unaff_RBP[-8] & 0xffffffff;
      *(undefined4 *)(unaff_RBP + -0x10) = *(undefined4 *)(unaff_RBP + -7);
      *(undefined4 *)((longlong)unaff_RBP + -0x7c) = *(undefined4 *)((longlong)unaff_RBP + -0x34);
      *(undefined4 *)(unaff_RBP + -0xf) = *(undefined4 *)(unaff_RBP + -6);
      *(undefined4 *)((longlong)unaff_RBP + -0x74) = *(undefined4 *)((longlong)unaff_RBP + -0x2c);
      *(undefined4 *)(unaff_RBP + -0xe) = *(undefined4 *)(unaff_RBP + -5);
      *(undefined4 *)((longlong)unaff_RBP + -0x6c) = *(undefined4 *)((longlong)unaff_RBP + -0x24);
      *(undefined4 *)(unaff_RBP + -0xd) = *(undefined4 *)(unaff_RBP + -4);
      *(undefined4 *)((longlong)unaff_RBP + -100) = *(undefined4 *)((longlong)unaff_RBP + -0x1c);
      *(undefined4 *)((longlong)unaff_RBP + -0x74) = 0;
      *(undefined4 *)((longlong)unaff_RBP + -100) = 0x3f800000;
      puVar14 = (undefined8 *)FUN_1800946d0(&stack0x00000060,&uStackX_20,unaff_RBP + 6);
      uVar10 = puVar14[1];
      uVar11 = puVar14[2];
      uVar12 = puVar14[3];
      unaff_RBP[-2] = *puVar14;
      unaff_RBP[-1] = uVar10;
      uVar2 = *(undefined4 *)(puVar14 + 4);
      uVar3 = *(undefined4 *)((longlong)puVar14 + 0x24);
      uVar4 = *(undefined4 *)(puVar14 + 5);
      uVar5 = *(undefined4 *)((longlong)puVar14 + 0x2c);
      *unaff_RBP = uVar11;
      unaff_RBP[1] = uVar12;
      uVar6 = *(undefined4 *)(puVar14 + 6);
      uVar7 = *(undefined4 *)((longlong)puVar14 + 0x34);
      uVar8 = *(undefined4 *)(puVar14 + 7);
      uVar9 = *(undefined4 *)((longlong)puVar14 + 0x3c);
      lVar15 = *param_1;
      *(undefined4 *)(unaff_RBP + 2) = uVar2;
      *(undefined4 *)((longlong)unaff_RBP + 0x14) = uVar3;
      *(undefined4 *)(unaff_RBP + 3) = uVar4;
      *(undefined4 *)((longlong)unaff_RBP + 0x1c) = uVar5;
      *(undefined4 *)(unaff_RBP + 4) = uVar6;
      *(undefined4 *)((longlong)unaff_RBP + 0x24) = uVar7;
      *(undefined4 *)(unaff_RBP + 5) = uVar8;
      *(undefined4 *)((longlong)unaff_RBP + 0x2c) = uVar9;
      if (lVar15 == unaff_R12) {
        lVar15 = (longlong)param_1 + 0x214;
      }
      else {
        lVar15 = (**(code **)(lVar15 + 0x198))(param_1);
      }
      FUN_18063a240(unaff_R14 + 0x50,lVar15,unaff_RBP + -2);
      unaff_RBX = puVar16 + 10;
      if (unaff_RBX == unaff_R15) {
        pfVar1 = (float *)(unaff_R14 + 0x50);
        fVar19 = *(float *)(unaff_R14 + 0x60);
        if (*pfVar1 <= fVar19) {
          fVar18 = (fVar19 + *pfVar1) * 0.5;
          *(float *)(unaff_R14 + 0x70) = fVar18;
          *(float *)(unaff_R14 + 0x74) =
               (*(float *)(unaff_R14 + 100) + *(float *)(unaff_R14 + 0x54)) * 0.5;
          *(float *)(unaff_R14 + 0x78) =
               (*(float *)(unaff_R14 + 0x68) + *(float *)(unaff_R14 + 0x58)) * 0.5;
          *(undefined4 *)(unaff_R14 + 0x7c) = 0x7f7fffff;
          fVar19 = fVar19 - fVar18;
          fVar18 = *(float *)(unaff_R14 + 0x68) - *(float *)(unaff_R14 + 0x78);
          fVar17 = *(float *)(unaff_R14 + 100) - *(float *)(unaff_R14 + 0x74);
          *(float *)(unaff_R14 + 0x80) = SQRT(fVar17 * fVar17 + fVar19 * fVar19 + fVar18 * fVar18);
          return;
        }
        *(undefined4 *)(unaff_R14 + 0x80) = 0;
        pfVar1[0] = 0.0;
        pfVar1[1] = 0.0;
        *(undefined8 *)(unaff_R14 + 0x58) = 0;
        *(undefined8 *)(unaff_R14 + 0x60) = 0;
        *(undefined8 *)(unaff_R14 + 0x68) = 0;
        *(undefined8 *)(unaff_R14 + 0x70) = 0;
        *(undefined8 *)(unaff_R14 + 0x78) = 0;
        return;
      }
      param_1 = (longlong *)*unaff_RBX;
      uVar10 = puVar16[0xb];
      uVar11 = puVar16[0xd];
      uVar12 = puVar16[0xe];
      uVar13 = puVar16[0xf];
      unaff_RBP[-10] = puVar16[0xc];
      unaff_RBP[-9] = uVar11;
      uVar2 = *(undefined4 *)(puVar16 + 0x10);
      uVar3 = *(undefined4 *)((longlong)puVar16 + 0x84);
      uVar4 = *(undefined4 *)(puVar16 + 0x11);
      uVar5 = *(undefined4 *)((longlong)puVar16 + 0x8c);
      unaff_RBP[-8] = uVar12;
      unaff_RBP[-7] = uVar13;
      uVar6 = *(undefined4 *)(puVar16 + 0x12);
      uVar7 = *(undefined4 *)((longlong)puVar16 + 0x94);
      uVar8 = *(undefined4 *)(puVar16 + 0x13);
      uVar9 = *(undefined4 *)((longlong)puVar16 + 0x9c);
      in_RAX = *param_1;
      unaff_RBP[-0xc] = param_1;
      unaff_RBP[-0xb] = uVar10;
      *(undefined4 *)(unaff_RBP + -6) = uVar2;
      *(undefined4 *)((longlong)unaff_RBP + -0x2c) = uVar3;
      *(undefined4 *)(unaff_RBP + -5) = uVar4;
      *(undefined4 *)((longlong)unaff_RBP + -0x24) = uVar5;
      *(undefined4 *)(unaff_RBP + -4) = uVar6;
      *(undefined4 *)((longlong)unaff_RBP + -0x1c) = uVar7;
      *(undefined4 *)(unaff_RBP + -3) = uVar8;
      *(undefined4 *)((longlong)unaff_RBP + -0x14) = uVar9;
      unaff_RDI = param_1;
      if (in_RAX != unaff_R12) break;
      FUN_180276f30(param_1,(longlong)param_1 + 0x214,0);
      puVar16 = unaff_RBX;
    }
  } while( true );
}





// 函数: void FUN_18046c110(longlong param_1,undefined4 param_2)
void FUN_18046c110(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30);
  uVar3 = 0;
  lVar2 = lVar6 >> 0x3f;
  uVar5 = uVar3;
  if (lVar6 / 0x50 + lVar2 != lVar2) {
    do {
      plVar1 = *(longlong **)(uVar3 + *(longlong *)(param_1 + 0x30));
      (**(code **)(*plVar1 + 0x1b0))(plVar1,param_2);
      uVar3 = uVar3 + 0x50;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while ((ulonglong)(longlong)(int)uVar4 <
             (ulonglong)((*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30)) / 0x50));
  }
  return;
}





// 函数: void FUN_18046c154(void)
void FUN_18046c154(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong unaff_RBX;
  undefined4 unaff_EBP;
  ulonglong uVar3;
  uint unaff_EDI;
  longlong unaff_R14;
  
  uVar3 = (ulonglong)unaff_EDI;
  do {
    plVar1 = *(longlong **)(uVar3 + *(longlong *)(unaff_RBX + 0x30));
    (**(code **)(*plVar1 + 0x1b0))(plVar1,unaff_EBP);
    uVar3 = uVar3 + 0x50;
    unaff_EDI = unaff_EDI + 1;
    lVar2 = SUB168(SEXT816(unaff_R14) *
                   SEXT816(*(longlong *)(unaff_RBX + 0x38) - *(longlong *)(unaff_RBX + 0x30)),8);
  } while ((ulonglong)(longlong)(int)unaff_EDI < (ulonglong)((lVar2 >> 5) - (lVar2 >> 0x3f)));
  return;
}





// 函数: void FUN_18046c1a2(void)
void FUN_18046c1a2(void)

{
  return;
}



undefined8 * FUN_18046c1c0(undefined8 *param_1,uint param_2)

{
  *param_1 = &UNK_180a2ae38;
  FUN_1808fc8a8(param_1 + 2,0x20,0x200,FUN_180046860,0xfffffffffffffffe);
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x4010);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18046c240(longlong param_1,int param_2,char param_3)
void FUN_18046c240(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uStackX_20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  LOCK();
  *(undefined1 *)(param_1 + 8) = 0;
  UNLOCK();
  uStack_70 = *(longlong *)(param_1 + 0x10);
  if (uStack_70 != *(longlong *)(param_1 + 0x18)) {
    uStackX_20 = param_2 + 1U & 0x80000001;
    if ((int)uStackX_20 < 0) {
      uStackX_20 = (uStackX_20 - 1 | 0xfffffffe) + 1;
    }
    do {
      lVar2 = *(longlong *)(uStack_70 + 8);
      lVar7 = (longlong)(int)uStackX_20 << 0xd;
      uStack_78 = 0x20;
      do {
        lVar8 = 8;
        do {
          lVar3 = *(longlong *)(lVar2 + 0x18);
          *(undefined8 *)(lVar3 + 0x18 + lVar7) = *(undefined8 *)(lVar3 + 0x10 + lVar7);
          if (param_3 != '\0') {
            lVar10 = *(longlong *)(lVar2 + 0x18) + lVar7;
            lVar3 = *(longlong *)(lVar10 + 0x18);
            lVar4 = *(longlong *)(lVar10 + 0x10);
            uVar1 = *(uint *)(lVar10 + 0x28);
            lVar9 = lVar3 - lVar4;
            lVar6 = lVar9 >> 5;
            if (lVar6 == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = FUN_18062b420(_DAT_180c8ed18,lVar6 << 5,uVar1 & 0xff);
            }
            lVar6 = lVar6 * 0x20 + lVar5;
            if (lVar4 != lVar3) {
                    // WARNING: Subroutine does not return
              memmove(lVar5,lVar4,lVar9);
            }
            lVar3 = *(longlong *)(lVar10 + 0x10);
            *(longlong *)(lVar10 + 0x10) = lVar5;
            *(longlong *)(lVar10 + 0x18) = lVar6;
            *(longlong *)(lVar10 + 0x20) = lVar6;
            *(uint *)(lVar10 + 0x28) = uVar1;
            if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
          }
          lVar7 = lVar7 + 0x20;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        uStack_78 = uStack_78 + -1;
      } while (uStack_78 != 0);
      uStack_70 = uStack_70 + 0x10;
    } while (uStack_70 != *(longlong *)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18046c430(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18046c430(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  
  uVar12 = 0xfffffffffffffffe;
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (lVar6 != *(longlong *)(param_1 + 0x18)) {
    do {
      lVar2 = *(longlong *)(lVar6 + 8);
      lVar11 = 0;
      do {
        lVar8 = 8;
        do {
          *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x18 + lVar11) =
               *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x10 + lVar11);
          lVar10 = *(longlong *)(lVar2 + 0x18) + lVar11;
          lVar3 = *(longlong *)(lVar10 + 0x18);
          lVar4 = *(longlong *)(lVar10 + 0x10);
          uVar1 = *(uint *)(lVar10 + 0x28);
          lVar9 = lVar3 - lVar4;
          lVar7 = lVar9 >> 5;
          if (lVar7 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = FUN_18062b420(_DAT_180c8ed18,lVar7 << 5,uVar1 & 0xff,param_4,uVar12,0,0,0,uVar1)
            ;
          }
          lVar7 = lVar7 * 0x20 + lVar5;
          if (lVar4 != lVar3) {
                    // WARNING: Subroutine does not return
            memmove(lVar5,lVar4,lVar9,param_4,uVar12,lVar5,lVar7,lVar7);
          }
          lVar3 = *(longlong *)(lVar10 + 0x10);
          *(longlong *)(lVar10 + 0x10) = lVar5;
          uVar14 = *(undefined8 *)(lVar10 + 0x18);
          *(longlong *)(lVar10 + 0x18) = lVar7;
          uVar15 = *(undefined8 *)(lVar10 + 0x20);
          *(longlong *)(lVar10 + 0x20) = lVar7;
          uVar16 = *(undefined4 *)(lVar10 + 0x28);
          *(uint *)(lVar10 + 0x28) = uVar1;
          if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lVar11 = lVar11 + 0x20;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      } while (lVar11 < 0x2000);
      lVar11 = 0;
      uVar13 = 0;
      do {
        lVar8 = 8;
        do {
          *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x2018 + lVar11) =
               *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x2010 + lVar11);
          lVar3 = *(longlong *)(lVar2 + 0x18);
          lVar4 = *(longlong *)(lVar11 + 0x2018 + lVar3);
          lVar7 = *(longlong *)(lVar11 + 0x2010 + lVar3);
          uVar1 = *(uint *)(lVar11 + 0x2028 + lVar3);
          lVar10 = lVar4 - lVar7;
          lVar9 = lVar10 >> 5;
          if (lVar9 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = FUN_18062b420(_DAT_180c8ed18,lVar9 << 5,uVar1 & 0xff,param_4,uVar12,uVar13,
                                  uVar14,uVar15,uVar16,0,0,0,uVar1);
          }
          lVar9 = lVar9 * 0x20 + lVar5;
          if (lVar7 != lVar4) {
                    // WARNING: Subroutine does not return
            memmove(lVar5,lVar7,lVar10);
          }
          lVar4 = *(longlong *)(lVar11 + 0x2010 + lVar3);
          *(longlong *)(lVar11 + 0x2010 + lVar3) = lVar5;
          *(longlong *)(lVar11 + 0x2018 + lVar3) = lVar9;
          *(longlong *)(lVar11 + 0x2020 + lVar3) = lVar9;
          *(uint *)(lVar11 + 0x2028 + lVar3) = uVar1;
          if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lVar11 = lVar11 + 0x20;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      } while (lVar11 < 0x2000);
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != *(longlong *)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18046c710(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  while( true ) {
    if (plVar1 == *(longlong **)(param_1 + 0x18)) {
      puVar2 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,3);
      *puVar2 = 0;
      puVar2[3] = 0;
      lVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x4010,8,0xe);
                    // WARNING: Subroutine does not return
      memset(lVar3 + 8,0,0x4008);
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 2;
  }
  return plVar1[1];
}



undefined8 FUN_18046c9a0(undefined8 param_1,ulonglong param_2)

{
  FUN_18046c9e0();
  if ((param_2 & 1) != 0) {
    free(param_1,0xf8);
  }
  return param_1;
}





// 函数: void FUN_18046c9e0(undefined8 *param_1)
void FUN_18046c9e0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_1 = &UNK_180a2ada8;
  iVar5 = 0;
  plVar1 = param_1 + 0x19;
  lVar3 = *plVar1;
  if (param_1[0x1a] - lVar3 >> 3 != 0) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar4 + lVar3);
      if (lVar3 != 0) {
        plVar1 = (longlong *)(lVar3 + 0x10);
        lVar4 = *plVar1;
        if (lVar4 != *(longlong *)(lVar3 + 0x18)) {
          do {
            plVar2 = *(longlong **)(lVar4 + 8);
            if (plVar2 != (longlong *)0x0) {
              if ((longlong *)plVar2[3] != (longlong *)0x0) {
                (**(code **)(*(longlong *)plVar2[3] + 0x38))();
              }
              if ((longlong *)*plVar2 != (longlong *)0x0) {
                (**(code **)(*(longlong *)*plVar2 + 0x38))();
              }
                    // WARNING: Subroutine does not return
              FUN_18064e900(plVar2);
            }
            lVar4 = lVar4 + 0x10;
          } while (lVar4 != *(longlong *)(lVar3 + 0x18));
        }
        *(longlong *)(lVar3 + 0x18) = *plVar1;
        if (*(longlong *)(lVar3 + 0x30) == 0) {
          if (*plVar1 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(lVar3);
          }
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)(lVar4 + *plVar1) = 0;
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 8;
      lVar3 = *plVar1;
    } while ((ulonglong)(longlong)iVar5 < (ulonglong)(param_1[0x1a] - lVar3 >> 3));
  }
  param_1[0x1a] = lVar3;
  if (*plVar1 == 0) {
    *param_1 = &UNK_1809fcb90;
    _Mtx_destroy_in_situ();
    _Cnd_destroy_in_situ(param_1 + 4);
    *param_1 = &UNK_18098bdc8;
    *param_1 = &UNK_180a21720;
    *param_1 = &UNK_180a21690;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18046cb50(longlong param_1,undefined8 param_2,int param_3,char param_4,undefined4 param_5,
void FUN_18046cb50(longlong param_1,undefined8 param_2,int param_3,char param_4,undefined4 param_5,
                  undefined1 param_6)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  
  uVar14 = 0xfffffffffffffffe;
  *(undefined8 *)(param_1 + 0xe8) = param_2;
  puVar5 = (undefined8 *)0x0;
  if (param_4 != '\0') {
    lVar7 = *(longlong *)(param_1 + 0xd0);
    lVar11 = *(longlong *)(param_1 + 200);
    lVar4 = lVar7 - lVar11;
    while (lVar4 >> 3 != 0) {
      lVar7 = *(longlong *)(lVar11 + -8 + (lVar7 - lVar11 >> 3) * 8);
      if (lVar7 != 0) {
        plVar1 = (longlong *)(lVar7 + 0x10);
        lVar11 = *plVar1;
        if (lVar11 != *(longlong *)(lVar7 + 0x18)) {
          do {
            plVar3 = *(longlong **)(lVar11 + 8);
            if (plVar3 != (longlong *)0x0) {
              if ((longlong *)plVar3[3] != (longlong *)0x0) {
                (**(code **)(*(longlong *)plVar3[3] + 0x38))();
              }
              if ((longlong *)*plVar3 != (longlong *)0x0) {
                (**(code **)(*(longlong *)*plVar3 + 0x38))();
              }
                    // WARNING: Subroutine does not return
              FUN_18064e900(plVar3);
            }
            lVar11 = lVar11 + 0x10;
          } while (lVar11 != *(longlong *)(lVar7 + 0x18));
        }
        *(longlong *)(lVar7 + 0x18) = *plVar1;
        if (*(longlong *)(lVar7 + 0x30) == 0) {
          if (*plVar1 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(lVar7);
          }
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)
       (*(longlong *)(param_1 + 200) + -8 +
       (*(longlong *)(param_1 + 0xd0) - *(longlong *)(param_1 + 200) >> 3) * 8) = 0;
      lVar11 = *(longlong *)(param_1 + 0xd0);
      lVar7 = *(longlong *)(param_1 + 200);
      uVar12 = lVar11 - lVar7 >> 3;
      uVar2 = uVar12 - 1;
      if (uVar12 < uVar2) {
        if (*(longlong *)(param_1 + 0xd8) - lVar11 >> 3 == -1) {
                    // WARNING: Subroutine does not return
          memset(lVar11,0,0xfffffffffffffff8);
        }
        if (uVar12 == 0) {
          uVar12 = 1;
        }
        else {
          uVar12 = uVar12 * 2;
        }
        if (uVar12 < uVar2) {
          uVar12 = uVar2;
        }
        if (uVar12 != 0) {
          puVar5 = (undefined8 *)
                   FUN_18062b420(_DAT_180c8ed18,uVar12 * 8,*(undefined1 *)(param_1 + 0xe0));
          lVar11 = *(longlong *)(param_1 + 0xd0);
          lVar7 = *(longlong *)(param_1 + 200);
        }
        if (lVar7 != lVar11) {
                    // WARNING: Subroutine does not return
          memmove(puVar5,lVar7,lVar11 - lVar7);
        }
                    // WARNING: Subroutine does not return
        memset(puVar5,0,0xfffffffffffffff8);
      }
      lVar7 = lVar7 + uVar2 * 8;
      *(longlong *)(param_1 + 0xd0) = lVar7;
      lVar11 = *(longlong *)(param_1 + 200);
      lVar4 = lVar7 - lVar11;
    }
  }
  puVar13 = *(undefined8 **)(param_1 + 0xd0);
  lVar7 = *(longlong *)(param_1 + 200);
  lVar11 = (longlong)puVar13 - lVar7;
  do {
    if ((ulonglong)(longlong)param_3 <= (ulonglong)(lVar11 >> 3)) {
      lVar11 = (longlong)puVar13 - lVar7;
      while( true ) {
        if ((ulonglong)(lVar11 >> 3) <= (ulonglong)(longlong)param_3) {
          puVar6 = puVar5;
          if ((longlong)puVar13 - lVar7 >> 3 != 0) {
            do {
              FUN_18046c240(*(undefined8 *)(*(longlong *)(param_1 + 200) + (longlong)puVar6),param_5
                            ,param_6);
              uVar10 = (int)puVar5 + 1;
              puVar5 = (undefined8 *)(ulonglong)uVar10;
              puVar6 = puVar6 + 1;
            } while ((ulonglong)(longlong)(int)uVar10 <
                     (ulonglong)(*(longlong *)(param_1 + 0xd0) - *(longlong *)(param_1 + 200) >> 3))
            ;
          }
          *(undefined8 *)(param_1 + 0xf0) = 0;
          return;
        }
        lVar7 = *(longlong *)(lVar7 + -8 + ((longlong)puVar13 - lVar7 >> 3) * 8);
        if (lVar7 != 0) {
          plVar1 = (longlong *)(lVar7 + 0x10);
          lVar11 = *plVar1;
          if (lVar11 != *(longlong *)(lVar7 + 0x18)) {
            do {
              plVar3 = *(longlong **)(lVar11 + 8);
              if (plVar3 != (longlong *)0x0) {
                if ((longlong *)plVar3[3] != (longlong *)0x0) {
                  (**(code **)(*(longlong *)plVar3[3] + 0x38))();
                }
                if ((longlong *)*plVar3 != (longlong *)0x0) {
                  (**(code **)(*(longlong *)*plVar3 + 0x38))();
                }
                    // WARNING: Subroutine does not return
                FUN_18064e900(plVar3);
              }
              lVar11 = lVar11 + 0x10;
            } while (lVar11 != *(longlong *)(lVar7 + 0x18));
          }
          *(longlong *)(lVar7 + 0x18) = *plVar1;
          if (*(longlong *)(lVar7 + 0x30) == 0) {
            if (*plVar1 == 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(lVar7);
            }
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 *)
         (*(longlong *)(param_1 + 200) + -8 +
         (*(longlong *)(param_1 + 0xd0) - *(longlong *)(param_1 + 200) >> 3) * 8) = 0;
        lVar7 = *(longlong *)(param_1 + 0xd0);
        lVar11 = *(longlong *)(param_1 + 200);
        uVar12 = lVar7 - lVar11 >> 3;
        uVar2 = uVar12 - 1;
        if (uVar12 < uVar2) break;
        puVar13 = (undefined8 *)(lVar11 + uVar2 * 8);
        *(undefined8 **)(param_1 + 0xd0) = puVar13;
        lVar7 = *(longlong *)(param_1 + 200);
        lVar11 = (longlong)puVar13 - lVar7;
      }
      if (*(longlong *)(param_1 + 0xd8) - lVar7 >> 3 == -1) {
                    // WARNING: Subroutine does not return
        memset(lVar7,0,0xfffffffffffffff8);
      }
      if (uVar12 == 0) {
        uVar12 = 1;
      }
      else {
        uVar12 = uVar12 * 2;
      }
      if (uVar12 < uVar2) {
        uVar12 = uVar2;
      }
      if (uVar12 != 0) {
        puVar5 = (undefined8 *)
                 FUN_18062b420(_DAT_180c8ed18,uVar12 * 8,*(undefined1 *)(param_1 + 0xe0));
        lVar7 = *(longlong *)(param_1 + 0xd0);
        lVar11 = *(longlong *)(param_1 + 200);
      }
      if (lVar11 != lVar7) {
                    // WARNING: Subroutine does not return
        memmove(puVar5,lVar11,lVar7 - lVar11);
      }
                    // WARNING: Subroutine does not return
      memset(puVar5,0,0xfffffffffffffff8);
    }
    puVar6 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x50,8,3,uVar14);
    *puVar6 = *(undefined8 *)(param_1 + 0xc0);
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *(undefined4 *)(puVar6 + 5) = 3;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 3;
    LOCK();
    *(undefined1 *)(puVar6 + 1) = 0;
    UNLOCK();
    puVar13 = *(undefined8 **)(param_1 + 0xd0);
    if (puVar13 < *(undefined8 **)(param_1 + 0xd8)) {
      *(undefined8 **)(param_1 + 0xd0) = puVar13 + 1;
      *puVar13 = puVar6;
      puVar13 = *(undefined8 **)(param_1 + 0xd0);
    }
    else {
      puVar9 = *(undefined8 **)(param_1 + 200);
      lVar7 = (longlong)puVar13 - (longlong)puVar9 >> 3;
      if (lVar7 == 0) {
        lVar7 = 1;
LAB_18046ce7a:
        puVar8 = (undefined8 *)
                 FUN_18062b420(_DAT_180c8ed18,lVar7 * 8,*(undefined1 *)(param_1 + 0xe0));
        puVar13 = *(undefined8 **)(param_1 + 0xd0);
        puVar9 = *(undefined8 **)(param_1 + 200);
      }
      else {
        lVar7 = lVar7 * 2;
        puVar8 = puVar5;
        if (lVar7 != 0) goto LAB_18046ce7a;
      }
      if (puVar9 != puVar13) {
                    // WARNING: Subroutine does not return
        memmove(puVar8,puVar9,(longlong)puVar13 - (longlong)puVar9);
      }
      *puVar8 = puVar6;
      puVar13 = puVar8 + 1;
      if (*(longlong *)(param_1 + 200) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 **)(param_1 + 200) = puVar8;
      *(undefined8 **)(param_1 + 0xd0) = puVar13;
      *(undefined8 **)(param_1 + 0xd8) = puVar8 + lVar7;
    }
    lVar7 = *(longlong *)(param_1 + 200);
    lVar11 = (longlong)puVar13 - lVar7;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18046d1a0(longlong param_1)
void FUN_18046d1a0(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lStackX_8;
  undefined8 uStackX_10;
  undefined8 **ppuStackX_18;
  undefined8 uVar7;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 *apuStack_50 [2];
  code *pcStack_40;
  code *pcStack_38;
  
  uVar7 = 0xfffffffffffffffe;
  lVar5 = *(longlong *)(param_1 + 0xc0);
  plVar6 = (longlong *)
           (((longlong)*(int *)(*(longlong *)(lVar5 + 0x2148) + 0x3054) + 0x10b) * 0x20 + lVar5);
  lVar4 = _DAT_180c8ed58;
  if (_DAT_180c8ed58 == 0) {
    QueryPerformanceCounter(&lStackX_8);
    lVar5 = *(longlong *)(param_1 + 0xc0);
    lVar4 = lStackX_8;
  }
  dVar2 = (double)(lVar4 - _DAT_180c8ed48) * _DAT_180c8ed50;
  uStackX_10 = *(undefined8 *)(param_1 + 0xe8);
  uVar3 = *(int *)(lVar5 + 0x2140) + 1U & 0x80000001;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
  }
  *(uint *)(lVar5 + 0x2140) = uVar3;
  lVar4 = plVar6[1];
  lVar1 = *plVar6;
  ppuStackX_18 = apuStack_50;
  pcStack_40 = FUN_1803805e0;
  pcStack_38 = FUN_180380510;
  apuStack_50[0] = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,DAT_180bf65bc);
  uStack_70 = SUB84(plVar6,0);
  uStack_68 = (undefined4)lVar5;
  uStack_64 = (undefined4)((ulonglong)lVar5 >> 0x20);
  *apuStack_50[0] = plVar6;
  *(undefined4 *)(apuStack_50[0] + 1) = uStack_68;
  *(undefined4 *)((longlong)apuStack_50[0] + 0xc) = uStack_64;
  apuStack_50[0][2] = &uStackX_10;
  apuStack_50[0][3] = param_1 + 200;
  FUN_18015b810(uStack_70,0,lVar4 - lVar1 >> 3 & 0xffffffff,1,0xffffffffffffffff,apuStack_50,uVar7);
  lVar5 = _DAT_180c8ed58;
  if (_DAT_180c8ed58 == 0) {
    QueryPerformanceCounter(&lStackX_8);
    lVar5 = lStackX_8;
  }
  *(double *)(param_1 + 0xf0) = (double)(lVar5 - _DAT_180c8ed48) * _DAT_180c8ed50 - dVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



