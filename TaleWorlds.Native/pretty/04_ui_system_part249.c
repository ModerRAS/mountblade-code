#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part249.c - 4 个函数

// 函数: void FUN_18080d486(void)
void FUN_18080d486(void)

{
  return;
}



undefined8 FUN_18080d590(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x5d0)) {
    pcVar2 = (char *)(*(longlong *)(param_1 + 0x5d8) + 0x1c);
    uVar5 = uVar3;
    do {
      if (*pcVar2 == '\0') {
        plVar4 = (longlong *)((longlong)(int)uVar5 * 200 + *(longlong *)(param_1 + 0x5d8));
        *(undefined1 *)((longlong)plVar4 + 0x1c) = 1;
        lVar1 = *(longlong *)(param_2 + 8);
        plVar4[1] = param_2 + 8;
        *plVar4 = lVar1;
        *(longlong **)(lVar1 + 8) = plVar4;
        *(longlong **)plVar4[1] = plVar4;
        *(undefined1 *)((longlong)plVar4 + 0x3b) = 0;
        *(undefined8 *)((longlong)plVar4 + 100) = 0;
        *(undefined4 *)(plVar4 + 0xe) = 0x40;
        *(undefined4 *)((longlong)plVar4 + 0x6c) = 0x400000;
        *(undefined4 *)((longlong)plVar4 + 0x74) = 0;
        *(undefined1 *)(plVar4 + 0xf) = 0;
        *(undefined8 *)((longlong)plVar4 + 0x7c) = 0;
        *(undefined4 *)(plVar4 + 0x11) = 0x80;
        *(undefined4 *)((longlong)plVar4 + 0x84) = 0x800000;
        *(undefined4 *)((longlong)plVar4 + 0x8c) = 0;
        *(undefined1 *)(plVar4 + 0x12) = 0;
        *(undefined8 *)((longlong)plVar4 + 0x94) = 0;
        *(undefined8 *)((longlong)plVar4 + 0x9c) = 0;
        *(undefined4 *)((longlong)plVar4 + 0xa4) = 0;
        *(undefined1 *)(plVar4 + 0x15) = 0;
        *(undefined4 *)(plVar4 + 0x16) = 0x400;
        if (param_4 != (undefined8 *)0x0) {
          *param_4 = plVar4;
        }
        return 0;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
      uVar3 = uVar3 + 1;
      pcVar2 = pcVar2 + 200;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x5d0));
  }
  return 0x1c;
}



undefined8 FUN_18080d690(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  char acStackX_8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x000180743c20(lVar1,1);
  }
  iVar5 = 0;
  *(undefined2 *)(param_1 + 0xbe8) = 0x100;
  if (0 < *(int *)(param_1 + 0x3c8)) {
    plVar7 = (longlong *)(param_1 + 0x3d0);
    do {
      lVar2 = *plVar7;
      if ((lVar2 != 0) && (plVar6 = (longlong *)(lVar2 + 8), *plVar6 != 0)) {
        while ((plVar3 = (longlong *)*plVar6, plVar3 != plVar6 ||
               (*(longlong **)(lVar2 + 0x10) != plVar6))) {
          plVar4 = (longlong *)plVar3[4];
          if (plVar4 != (longlong *)0x0) {
            if (*(longlong *)(param_1 + 0x5f0) != 0) {
              (**(code **)(*plVar4 + 0x118))
                        (plVar4,*(undefined8 *)
                                 (*(longlong *)(param_1 + 0x5f0) + (longlong)(int)plVar4[0x3a] * 8))
              ;
              plVar4 = (longlong *)plVar3[4];
            }
            if (plVar4 != (longlong *)0x0) {
              FUN_180758220(plVar4,0x80);
              plVar4 = (longlong *)plVar3[4];
            }
          }
          acStackX_8[0] = '\0';
          if ((plVar4 == (longlong *)0x0) ||
             ((**(code **)(*plVar4 + 0xa8))(plVar4,acStackX_8), acStackX_8[0] == '\0')) {
            if (plVar3[4] != 0) {
              FUN_180758220(plVar3[4],0x80);
              if (*(longlong *)(plVar3[6] + 0x5f0) != 0) {
                plVar4 = (longlong *)plVar3[4];
                (**(code **)(*plVar4 + 0x118))
                          (plVar4,*(undefined8 *)
                                   (*(longlong *)(plVar3[6] + 0x5f0) +
                                   (longlong)(int)plVar4[0x3a] * 8));
              }
            }
            *(undefined1 *)((longlong)plVar3 + 0x3c) = 0;
            *(longlong *)plVar3[1] = *plVar3;
            *(longlong *)(*plVar3 + 8) = plVar3[1];
            plVar3[1] = (longlong)plVar3;
            *plVar3 = (longlong)plVar3;
            *(undefined1 *)((longlong)plVar3 + 0x1c) = 0;
          }
        }
      }
      iVar5 = iVar5 + 1;
      plVar7 = plVar7 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x3c8));
  }
  if ((lVar1 != 0) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar1,1);
  }
  return 0;
}



undefined8 FUN_18080d69a(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong unaff_R15;
  char in_stack_00000050;
  
  if (unaff_R15 != 0) {
    func_0x000180743c20();
  }
  iVar4 = 0;
  *(undefined2 *)(param_1 + 0xbe8) = 0x100;
  if (0 < *(int *)(param_1 + 0x3c8)) {
    plVar6 = (longlong *)(param_1 + 0x3d0);
    do {
      lVar1 = *plVar6;
      if ((lVar1 != 0) && (plVar5 = (longlong *)(lVar1 + 8), *plVar5 != 0)) {
        while ((plVar2 = (longlong *)*plVar5, plVar2 != plVar5 ||
               (*(longlong **)(lVar1 + 0x10) != plVar5))) {
          plVar3 = (longlong *)plVar2[4];
          if (plVar3 != (longlong *)0x0) {
            if (*(longlong *)(param_1 + 0x5f0) != 0) {
              (**(code **)(*plVar3 + 0x118))
                        (plVar3,*(undefined8 *)
                                 (*(longlong *)(param_1 + 0x5f0) + (longlong)(int)plVar3[0x3a] * 8))
              ;
              plVar3 = (longlong *)plVar2[4];
            }
            if (plVar3 != (longlong *)0x0) {
              FUN_180758220(plVar3,0x80);
              plVar3 = (longlong *)plVar2[4];
            }
          }
          in_stack_00000050 = '\0';
          if ((plVar3 == (longlong *)0x0) ||
             ((**(code **)(*plVar3 + 0xa8))(plVar3,&stack0x00000050), in_stack_00000050 == '\0')) {
            if (plVar2[4] != 0) {
              FUN_180758220(plVar2[4],0x80);
              if (*(longlong *)(plVar2[6] + 0x5f0) != 0) {
                plVar3 = (longlong *)plVar2[4];
                (**(code **)(*plVar3 + 0x118))
                          (plVar3,*(undefined8 *)
                                   (*(longlong *)(plVar2[6] + 0x5f0) +
                                   (longlong)(int)plVar3[0x3a] * 8));
              }
            }
            *(undefined1 *)((longlong)plVar2 + 0x3c) = 0;
            *(longlong *)plVar2[1] = *plVar2;
            *(longlong *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (longlong)plVar2;
            *plVar2 = (longlong)plVar2;
            *(undefined1 *)((longlong)plVar2 + 0x1c) = 0;
          }
        }
      }
      iVar4 = iVar4 + 1;
      plVar6 = plVar6 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x3c8));
  }
  if ((unaff_R15 != 0) && (unaff_R15 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return 0;
}



undefined8 FUN_18080d6db(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int unaff_EBP;
  longlong unaff_RSI;
  longlong *plVar4;
  char unaff_R12B;
  longlong *plVar5;
  longlong unaff_R15;
  char in_stack_00000050;
  
  plVar5 = (longlong *)(unaff_RSI + 0x3d0);
  do {
    lVar1 = *plVar5;
    if ((lVar1 != 0) && (plVar4 = (longlong *)(lVar1 + 8), *plVar4 != 0)) {
      while ((plVar2 = (longlong *)*plVar4, plVar2 != plVar4 ||
             (*(longlong **)(lVar1 + 0x10) != plVar4))) {
        plVar3 = (longlong *)plVar2[4];
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(unaff_RSI + 0x5f0) != 0) {
            (**(code **)(*plVar3 + 0x118))
                      (plVar3,*(undefined8 *)
                               (*(longlong *)(unaff_RSI + 0x5f0) + (longlong)(int)plVar3[0x3a] * 8))
            ;
            plVar3 = (longlong *)plVar2[4];
          }
          if (plVar3 != (longlong *)0x0) {
            FUN_180758220(plVar3,0x80);
            plVar3 = (longlong *)plVar2[4];
          }
        }
        in_stack_00000050 = '\0';
        if ((plVar3 == (longlong *)0x0) ||
           ((**(code **)(*plVar3 + 0xa8))(plVar3,&stack0x00000050), in_stack_00000050 == '\0')) {
          if (plVar2[4] != 0) {
            FUN_180758220(plVar2[4],0x80);
            if (*(longlong *)(plVar2[6] + 0x5f0) != 0) {
              plVar3 = (longlong *)plVar2[4];
              (**(code **)(*plVar3 + 0x118))
                        (plVar3,*(undefined8 *)
                                 (*(longlong *)(plVar2[6] + 0x5f0) + (longlong)(int)plVar3[0x3a] * 8
                                 ));
            }
          }
          *(undefined1 *)((longlong)plVar2 + 0x3c) = 0;
          *(longlong *)plVar2[1] = *plVar2;
          *(longlong *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (longlong)plVar2;
          *plVar2 = (longlong)plVar2;
          *(undefined1 *)((longlong)plVar2 + 0x1c) = 0;
        }
      }
    }
    unaff_EBP = unaff_EBP + 1;
    plVar5 = plVar5 + 1;
  } while (unaff_EBP < *(int *)(unaff_RSI + 0x3c8));
  if ((unaff_R12B != '\0') && (unaff_R15 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return 0;
}



undefined8 FUN_18080d80c(void)

{
  char unaff_R12B;
  longlong unaff_R15;
  
  if ((unaff_R12B != '\0') && (unaff_R15 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return 0;
}



undefined8 FUN_18080d820(void)

{
  longlong unaff_R15;
  
  if (unaff_R15 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18080d840(longlong param_1,int *param_2,undefined4 *param_3)
void FUN_18080d840(longlong param_1,int *param_2,undefined4 *param_3)

{
  short sVar1;
  longlong lVar2;
  short *psVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined1 auStack_178 [32];
  int iStack_158;
  int iStack_154;
  int aiStack_148 [64];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  lVar2 = *(longlong *)(param_1 + 0x178);
  iVar8 = *(int *)(lVar2 + 0x4858);
  iVar6 = *(int *)(lVar2 + 0x4850) + -1;
  psVar3 = *(short **)(lVar2 + 0x4848);
  iStack_158 = iVar8 << ((byte)iVar6 & 0x1f);
  iVar9 = iVar8;
  piVar11 = param_2;
  if (iVar6 == 0) {
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      sVar1 = *psVar3;
      cVar4 = func_0x000180815aa0(param_1,(int)sVar1);
      *piVar11 = (int)cVar4;
      psVar3 = psVar3 + (longlong)(1 << ((byte)sVar1 & 0x1f)) * 2;
      piVar11 = piVar11 + 1;
    }
    piVar10 = aiStack_148;
    piVar11 = param_2;
    iVar9 = iStack_158;
    for (; iStack_158 = iVar9, iVar8 != 0; iVar8 = iVar8 + -1) {
      iVar9 = *piVar11;
      piVar11 = piVar11 + 1;
      if (iVar9 != 0) {
        cVar4 = func_0x000180815b30(param_1,2);
        *piVar10 = (int)cVar4;
        piVar10 = piVar10 + 1;
      }
      iVar9 = iStack_158;
    }
  }
  else {
    iVar6 = *(int *)(lVar2 + 0x4854);
    iVar9 = iStack_158;
    iStack_154 = iVar6;
    for (; iStack_158 = iVar9, iVar6 != 0; iVar6 = iVar6 + -1) {
      sVar1 = *psVar3;
      cVar4 = func_0x000180815aa0(param_1,(int)sVar1);
      *piVar11 = (int)cVar4;
      cVar4 = func_0x000180815aa0(param_1,(int)sVar1);
      piVar11[1] = (int)cVar4;
      piVar11 = piVar11 + 2;
      psVar3 = psVar3 + (longlong)(1 << ((byte)sVar1 & 0x1f)) * 2;
      iVar9 = iStack_158;
    }
    for (iVar8 = iVar8 - iStack_154; iVar8 != 0; iVar8 = iVar8 + -1) {
      sVar1 = *psVar3;
      cVar4 = func_0x000180815aa0(param_1,(int)sVar1);
      *piVar11 = (int)cVar4;
      piVar11[1] = (int)cVar4;
      piVar11 = piVar11 + 2;
      if (sVar1 < 0) goto LAB_18080daad;
      psVar3 = psVar3 + (longlong)(1 << ((byte)sVar1 & 0x1f)) * 2;
    }
    piVar10 = aiStack_148;
    piVar11 = param_2;
    for (iVar8 = iVar9; iVar8 != 0; iVar8 = iVar8 + -1) {
      iVar6 = *piVar11;
      piVar11 = piVar11 + 1;
      if (iVar6 != 0) {
        cVar4 = func_0x000180815b30(param_1,2);
        *piVar10 = (int)cVar4;
        piVar10 = piVar10 + 1;
      }
    }
  }
  piVar11 = aiStack_148;
  do {
    if (iVar9 == 0) {
LAB_18080daad:
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_178);
    }
    iVar8 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = param_3;
    if (iVar8 != 0) {
      iVar8 = *piVar11;
      piVar11 = piVar11 + 1;
      uVar5 = func_0x000180815b30(param_1,6);
      *param_3 = uVar5;
      puVar7 = param_3 + 1;
      if (iVar8 == 0) {
        uVar5 = func_0x000180815b30(param_1,6);
        *puVar7 = uVar5;
LAB_18080da8d:
        uVar5 = func_0x000180815b30(param_1,6);
      }
      else {
        if (iVar8 == 1) {
          *puVar7 = uVar5;
          goto LAB_18080da8d;
        }
        if (iVar8 == 2) {
          *puVar7 = uVar5;
          puVar7 = param_3 + 3;
          param_3[2] = uVar5;
          goto LAB_18080daa1;
        }
        uVar5 = func_0x000180815b30(param_1,6);
        *puVar7 = uVar5;
      }
      param_3[2] = uVar5;
      puVar7 = param_3 + 3;
    }
LAB_18080daa1:
    iVar9 = iVar9 + -1;
    param_3 = puVar7;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18080dae0(longlong param_1,int *param_2,longlong param_3,longlong param_4,int param_5)
void FUN_18080dae0(longlong param_1,int *param_2,longlong param_3,longlong param_4,int param_5)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  int iVar10;
  float *pfVar11;
  byte *pbVar12;
  short *psVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_108 [32];
  int iStack_e8;
  int iStack_e4;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  float *pfStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong alStack_a8 [14];
  
  alStack_a8[10] = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  lVar14 = *(longlong *)(param_1 + 0x178);
  psVar13 = *(short **)(lVar14 + 0x4848);
  iStack_e4 = *(int *)(lVar14 + 0x4858);
  lStack_d0 = (longlong)*(int *)(lVar14 + 0x4854);
  lStack_b8 = (longlong)*(int *)(lVar14 + 0x4850);
  lStack_d8 = param_1;
  lStack_c0 = param_3;
  if (0 < lStack_d0) {
    pfStack_c8 = (float *)(param_3 + 0x80);
    lStack_e0 = lStack_d0;
    do {
      iStack_e8 = (int)*psVar13;
      pfVar11 = pfStack_c8;
      lVar14 = lStack_b8;
      if (0 < lStack_b8) {
        do {
          iVar4 = *param_2;
          param_2 = param_2 + 1;
          if (iVar4 == 0) {
            pfVar11[0x20] = 0.0;
            *pfVar11 = 0.0;
            pfVar11[-0x20] = 0.0;
          }
          else {
            sVar2 = psVar13[(longlong)iVar4 * 2 + 1];
            sVar3 = psVar13[(longlong)iVar4 * 2];
            uVar16 = (ulonglong)sVar3;
            if (sVar2 < 0) {
              fVar17 = *(float *)((uVar16 * 0x40 +
                                  (longlong)*(int *)(param_4 + (longlong)param_5 * 4)) * 4 +
                                 0x180c37da0);
              iVar4 = func_0x000180815aa0(param_1,uVar16 & 0xffffffff);
              iVar10 = (int)sVar2;
              pfVar11[-0x20] = (float)(iVar4 + iVar10) * fVar17;
              iVar4 = func_0x000180815aa0(param_1,(int)sVar3);
              *pfVar11 = (float)(iVar4 + iVar10) * fVar17;
              iVar4 = func_0x000180815aa0(param_1,uVar16 & 0xffffffff);
              fVar17 = (float)(iVar4 + iVar10) * fVar17;
            }
            else {
              uVar9 = (ulonglong)*(uint *)(param_4 + (longlong)param_5 * 4);
              alStack_a8[3] = 0x180c36fc0;
              alStack_a8[0] = 0;
              alStack_a8[1] = 0;
              alStack_a8[5] = 0x180c37020;
              alStack_a8[9] = 0x180c371a0;
              alStack_a8[2] = 0;
              alStack_a8[4] = 0;
              alStack_a8[6] = 0;
              alStack_a8[7] = 0;
              alStack_a8[8] = 0;
              uVar5 = func_0x000180815aa0(lStack_d8,uVar16 & 0xffffffff);
              pbVar12 = (byte *)((ulonglong)uVar5 * 3 + alStack_a8[sVar2]);
              pfVar11[-0x20] = *(float *)(((ulonglong)*pbVar12 * 0x40 + uVar9) * 4 + 0x180c37da0);
              *pfVar11 = *(float *)(((ulonglong)pbVar12[1] * 0x40 + uVar9) * 4 + 0x180c37da0);
              fVar17 = *(float *)(((ulonglong)pbVar12[2] * 0x40 + uVar9) * 4 + 0x180c37da0);
              param_1 = lStack_d8;
            }
            param_4 = param_4 + 0xc;
            pfVar11[0x20] = fVar17;
          }
          lVar14 = lVar14 + -1;
          pfVar11 = pfVar11 + 0x80;
        } while (lVar14 != 0);
      }
      pfStack_c8 = pfStack_c8 + 1;
      lStack_e0 = lStack_e0 + -1;
      psVar13 = psVar13 + (longlong)(1 << ((byte)iStack_e8 & 0x1f)) * 2;
    } while (lStack_e0 != 0);
    lStack_e0 = 0;
  }
  lVar14 = (longlong)iStack_e4;
  if (lStack_d0 < lVar14) {
    lVar7 = (longlong)param_5;
    pfVar11 = (float *)(lStack_c0 + (lStack_d0 + 0xa0) * 4);
    lVar15 = lVar14 - lStack_d0;
    lStack_e0 = lVar7;
    lStack_d0 = lVar14;
    do {
      lVar14 = lStack_d8;
      iStack_e4 = (int)*psVar13;
      iVar4 = param_2[1];
      if (iVar4 == 0) {
        pfVar11[0x20] = 0.0;
        *pfVar11 = 0.0;
        pfVar11[-0x20] = 0.0;
        pfVar11[-0x60] = 0.0;
        pfVar11[-0x80] = 0.0;
        pfVar11[-0xa0] = 0.0;
      }
      else {
        sVar2 = psVar13[(longlong)iVar4 * 2 + 1];
        sVar3 = psVar13[(longlong)iVar4 * 2];
        iStack_e8 = (int)sVar3;
        if (sVar2 < 0) {
          fVar17 = *(float *)(((longlong)*(int *)(param_4 + 0xc + lVar7 * 4) +
                              (longlong)sVar3 * 0x40) * 4 + 0x180c37da0);
          iVar4 = func_0x000180815aa0(lStack_d8,(int)sVar3);
          iVar10 = (int)sVar2;
          pfVar11[-0xa0] = (float)(iVar4 + iVar10);
          pfVar11[-0x20] = (float)(iVar4 + iVar10) * fVar17;
          iVar4 = func_0x000180815aa0(lVar14,iStack_e8);
          pfVar11[-0x80] = (float)(iVar4 + iVar10);
          *pfVar11 = (float)(iVar4 + iVar10) * fVar17;
          iVar4 = func_0x000180815aa0(lVar14,iStack_e8);
          fVar18 = (float)(iVar4 + iVar10);
          pfVar11[-0x60] = fVar18;
          pfVar11[0x20] = fVar18 * fVar17;
          piVar1 = (int *)(param_4 + lStack_e0 * 4);
          param_4 = param_4 + 0x18;
          fVar17 = *(float *)(((longlong)*piVar1 + (longlong)sVar3 * 0x40) * 4 + 0x180c37da0);
          pfVar11[-0xa0] = fVar17 * pfVar11[-0xa0];
          pfVar11[-0x60] = fVar18 * fVar17;
          pfVar11[-0x80] = fVar17 * pfVar11[-0x80];
          lVar7 = lStack_e0;
        }
        else {
          uVar16 = (ulonglong)*(uint *)(param_4 + lVar7 * 4);
          alStack_a8[5] = 0x180c37020;
          alStack_a8[3] = 0x180c36fc0;
          uVar9 = (ulonglong)*(uint *)(param_4 + 0xc + lVar7 * 4);
          alStack_a8[9] = 0x180c371a0;
          alStack_a8[0] = 0;
          alStack_a8[1] = 0;
          alStack_a8[2] = 0;
          alStack_a8[4] = 0;
          alStack_a8[6] = 0;
          alStack_a8[7] = 0;
          alStack_a8[8] = 0;
          uVar5 = func_0x000180815aa0(lStack_d8,iStack_e8);
          param_4 = param_4 + 0x18;
          pbVar12 = (byte *)((ulonglong)uVar5 * 3 + alStack_a8[sVar2]);
          pfVar11[-0xa0] = *(float *)(((ulonglong)*pbVar12 * 0x40 + uVar16) * 4 + 0x180c37da0);
          pfVar11[-0x20] = *(float *)(((ulonglong)*pbVar12 * 0x40 + uVar9) * 4 + 0x180c37da0);
          pfVar11[-0x80] = *(float *)(((ulonglong)pbVar12[1] * 0x40 + uVar16) * 4 + 0x180c37da0);
          *pfVar11 = *(float *)(((ulonglong)pbVar12[1] * 0x40 + uVar9) * 4 + 0x180c37da0);
          pfVar11[-0x60] = *(float *)(((ulonglong)pbVar12[2] * 0x40 + uVar16) * 4 + 0x180c37da0);
          pfVar11[0x20] = *(float *)(((ulonglong)pbVar12[2] * 0x40 + uVar9) * 4 + 0x180c37da0);
          lVar7 = lStack_e0;
        }
      }
      pfVar11 = pfVar11 + 1;
      psVar13 = psVar13 + (longlong)(1 << ((byte)iStack_e4 & 0x1f)) * 2;
      lVar15 = lVar15 + -1;
      param_2 = param_2 + 2;
      lVar14 = lStack_d0;
    } while (lVar15 != 0);
  }
  lStack_d0 = lVar14;
  if (lStack_d0 < 0x20) {
    lVar14 = 0x20 - lStack_d0;
    puVar8 = (undefined4 *)(lStack_c0 + 0x80 + lStack_d0 * 4);
    do {
      puVar6 = puVar8;
      lVar7 = lStack_b8;
      if (0 < lStack_b8) {
        do {
          puVar6[0x20] = 0;
          *puVar6 = 0;
          puVar6[-0x20] = 0;
          lVar7 = lVar7 + -1;
          puVar6 = puVar6 + 0x80;
        } while (lVar7 != 0);
      }
      puVar8 = puVar8 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(alStack_a8[10] ^ (ulonglong)auStack_108);
}





// 函数: void FUN_18080db06(undefined8 param_1,int *param_2,longlong param_3,longlong param_4)
void FUN_18080db06(undefined8 param_1,int *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong in_RAX;
  undefined4 *puVar9;
  float *pfVar10;
  undefined4 *puVar11;
  undefined8 unaff_RBX;
  ulonglong uVar12;
  int iVar13;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  float *pfVar14;
  longlong lVar15;
  byte *pbVar16;
  undefined4 uVar17;
  undefined8 in_R10;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined2 *puVar18;
  undefined8 unaff_R13;
  longlong lVar19;
  longlong lVar20;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined8 uStack0000000000000030;
  longlong lStack0000000000000038;
  longlong lStack0000000000000048;
  longlong lStack0000000000000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  ulonglong in_stack_000000b0;
  int in_stack_00000130;
  
  *(undefined8 *)(in_R11 + 0x20) = unaff_RBX;
  *(undefined8 *)(in_R11 + -8) = unaff_RBP;
  *(undefined8 *)(in_R11 + -0x10) = unaff_RSI;
  *(undefined8 *)(in_R11 + -0x18) = unaff_RDI;
  *(undefined8 *)(in_R11 + -0x20) = unaff_R12;
  puVar18 = *(undefined2 **)(in_RAX + 0x4848);
  *(undefined8 *)(in_R11 + -0x28) = unaff_R13;
  *(undefined8 *)(in_R11 + -0x30) = unaff_R14;
  iVar7 = *(int *)(in_RAX + 0x4858);
  *(undefined8 *)(in_R11 + -0x38) = unaff_R15;
  lStack0000000000000038 = (longlong)*(int *)(in_RAX + 0x4854);
  lStack0000000000000050 = (longlong)*(int *)(in_RAX + 0x4850);
  *(undefined4 *)(in_R11 + -0x48) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x44) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x40) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0x3c) = unaff_XMM6_Dd;
  uStack0000000000000030 = param_1;
  lStack0000000000000048 = param_3;
  if (0 < lStack0000000000000038) {
    pfVar10 = (float *)(param_3 + 0x80);
    lVar15 = lStack0000000000000038;
    do {
      uVar2 = *puVar18;
      pfVar14 = pfVar10;
      lVar19 = lStack0000000000000050;
      iVar6 = in_stack_00000130;
      if (0 < lStack0000000000000050) {
        do {
          iVar13 = *param_2;
          param_2 = param_2 + 1;
          if (iVar13 == 0) {
            fVar22 = (float)in_R10;
            pfVar14[0x20] = fVar22;
            *pfVar14 = fVar22;
            pfVar14[-0x20] = fVar22;
          }
          else {
            sVar3 = puVar18[(longlong)iVar13 * 2 + 1];
            sVar4 = puVar18[(longlong)iVar13 * 2];
            uVar21 = (ulonglong)sVar4;
            if (sVar3 < 0) {
              fVar22 = *(float *)((uVar21 * 0x40 + (longlong)*(int *)(param_4 + (longlong)iVar6 * 4)
                                  ) * 4 + 0x180c37da0);
              iVar6 = func_0x000180815aa0(param_1,uVar21 & 0xffffffff);
              iVar13 = (int)sVar3;
              pfVar14[-0x20] = (float)(iVar6 + iVar13) * fVar22;
              iVar6 = func_0x000180815aa0(param_1,(int)sVar4);
              *pfVar14 = (float)(iVar6 + iVar13) * fVar22;
              iVar6 = func_0x000180815aa0(param_1,uVar21 & 0xffffffff);
              fVar22 = (float)(iVar6 + iVar13) * fVar22;
            }
            else {
              uVar12 = (ulonglong)*(uint *)(param_4 + (longlong)iVar6 * 4);
              in_stack_00000078 = 0x180c36fc0;
              in_stack_00000060 = 0;
              in_stack_00000068 = 0;
              in_stack_00000088 = 0x180c37020;
              in_stack_000000a8 = 0x180c371a0;
              in_stack_00000090 = 0;
              in_stack_00000098 = 0;
              in_stack_00000070 = in_R10;
              in_stack_00000080 = in_R10;
              in_stack_000000a0 = in_R10;
              uVar8 = func_0x000180815aa0(uStack0000000000000030,uVar21 & 0xffffffff);
              pbVar16 = (byte *)((ulonglong)uVar8 * 3 + (&stack0x00000060)[sVar3]);
              pfVar14[-0x20] = *(float *)(((ulonglong)*pbVar16 * 0x40 + uVar12) * 4 + 0x180c37da0);
              *pfVar14 = *(float *)(((ulonglong)pbVar16[1] * 0x40 + uVar12) * 4 + 0x180c37da0);
              fVar22 = *(float *)(((ulonglong)pbVar16[2] * 0x40 + uVar12) * 4 + 0x180c37da0);
              param_1 = uStack0000000000000030;
            }
            param_4 = param_4 + 0xc;
            in_R10 = 0;
            pfVar14[0x20] = fVar22;
            iVar6 = in_stack_00000130;
          }
          lVar19 = lVar19 + -1;
          pfVar14 = pfVar14 + 0x80;
        } while (lVar19 != 0);
      }
      pfVar10 = pfVar10 + 1;
      lVar15 = lVar15 + -1;
      puVar18 = puVar18 + (longlong)(1 << ((byte)uVar2 & 0x1f)) * 2;
    } while (lVar15 != 0);
  }
  lVar15 = (longlong)iVar7;
  if (lStack0000000000000038 < lVar15) {
    lVar19 = (longlong)in_stack_00000130;
    pfVar10 = (float *)(lStack0000000000000048 + (lStack0000000000000038 + 0xa0) * 4);
    lVar20 = lVar15 - lStack0000000000000038;
    lStack0000000000000038 = lVar15;
    do {
      uVar5 = uStack0000000000000030;
      uVar2 = *puVar18;
      iVar7 = param_2[1];
      if (iVar7 == 0) {
        fVar22 = (float)in_R10;
        pfVar10[0x20] = fVar22;
        *pfVar10 = fVar22;
        pfVar10[-0x20] = fVar22;
        pfVar10[-0x60] = fVar22;
        pfVar10[-0x80] = fVar22;
        pfVar10[-0xa0] = fVar22;
      }
      else {
        sVar3 = puVar18[(longlong)iVar7 * 2 + 1];
        sVar4 = puVar18[(longlong)iVar7 * 2];
        iVar7 = (int)sVar4;
        if (sVar3 < 0) {
          fVar22 = *(float *)(((longlong)*(int *)(param_4 + 0xc + lVar19 * 4) +
                              (longlong)sVar4 * 0x40) * 4 + 0x180c37da0);
          iVar6 = func_0x000180815aa0(uStack0000000000000030,(int)sVar4);
          iVar13 = (int)sVar3;
          pfVar10[-0xa0] = (float)(iVar6 + iVar13);
          pfVar10[-0x20] = (float)(iVar6 + iVar13) * fVar22;
          iVar6 = func_0x000180815aa0(uVar5,iVar7);
          pfVar10[-0x80] = (float)(iVar6 + iVar13);
          *pfVar10 = (float)(iVar6 + iVar13) * fVar22;
          iVar7 = func_0x000180815aa0(uVar5,iVar7);
          fVar23 = (float)(iVar7 + iVar13);
          pfVar10[-0x60] = fVar23;
          pfVar10[0x20] = fVar23 * fVar22;
          piVar1 = (int *)(param_4 + lVar19 * 4);
          param_4 = param_4 + 0x18;
          in_R10 = 0;
          fVar22 = *(float *)(((longlong)*piVar1 + (longlong)sVar4 * 0x40) * 4 + 0x180c37da0);
          pfVar10[-0xa0] = fVar22 * pfVar10[-0xa0];
          pfVar10[-0x60] = fVar23 * fVar22;
          pfVar10[-0x80] = fVar22 * pfVar10[-0x80];
        }
        else {
          uVar21 = (ulonglong)*(uint *)(param_4 + lVar19 * 4);
          in_stack_00000088 = 0x180c37020;
          in_stack_00000078 = 0x180c36fc0;
          uVar12 = (ulonglong)*(uint *)(param_4 + 0xc + lVar19 * 4);
          in_stack_000000a8 = 0x180c371a0;
          in_stack_00000060 = 0;
          in_stack_00000068 = 0;
          in_stack_00000090 = 0;
          in_stack_00000098 = 0;
          in_stack_00000070 = in_R10;
          in_stack_00000080 = in_R10;
          in_stack_000000a0 = in_R10;
          uVar8 = func_0x000180815aa0(uStack0000000000000030,iVar7);
          param_4 = param_4 + 0x18;
          pbVar16 = (byte *)((ulonglong)uVar8 * 3 + (&stack0x00000060)[sVar3]);
          pfVar10[-0xa0] = *(float *)(((ulonglong)*pbVar16 * 0x40 + uVar21) * 4 + 0x180c37da0);
          pfVar10[-0x20] = *(float *)(((ulonglong)*pbVar16 * 0x40 + uVar12) * 4 + 0x180c37da0);
          pfVar10[-0x80] = *(float *)(((ulonglong)pbVar16[1] * 0x40 + uVar21) * 4 + 0x180c37da0);
          *pfVar10 = *(float *)(((ulonglong)pbVar16[1] * 0x40 + uVar12) * 4 + 0x180c37da0);
          pfVar10[-0x60] = *(float *)(((ulonglong)pbVar16[2] * 0x40 + uVar21) * 4 + 0x180c37da0);
          in_R10 = 0;
          pfVar10[0x20] = *(float *)(((ulonglong)pbVar16[2] * 0x40 + uVar12) * 4 + 0x180c37da0);
        }
      }
      pfVar10 = pfVar10 + 1;
      puVar18 = puVar18 + (longlong)(1 << ((byte)uVar2 & 0x1f)) * 2;
      lVar20 = lVar20 + -1;
      param_2 = param_2 + 2;
      lVar15 = lStack0000000000000038;
    } while (lVar20 != 0);
  }
  lStack0000000000000038 = lVar15;
  if (lStack0000000000000038 < 0x20) {
    lVar15 = 0x20 - lStack0000000000000038;
    puVar11 = (undefined4 *)(lStack0000000000000048 + 0x80 + lStack0000000000000038 * 4);
    do {
      puVar9 = puVar11;
      lVar19 = lStack0000000000000050;
      if (0 < lStack0000000000000050) {
        do {
          uVar17 = (undefined4)in_R10;
          puVar9[0x20] = uVar17;
          *puVar9 = uVar17;
          puVar9[-0x20] = uVar17;
          lVar19 = lVar19 + -1;
          puVar9 = puVar9 + 0x80;
        } while (lVar19 != 0);
      }
      puVar11 = puVar11 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000b0 ^ (ulonglong)&stack0x00000000);
}





