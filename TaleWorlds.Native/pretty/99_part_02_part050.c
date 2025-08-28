#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part050.c - 27 个函数

// 函数: void FUN_1801bac9c(longlong *param_1,uint param_2)
void FUN_1801bac9c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong in_RAX;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  uint64_t unaff_RBX;
  char *pcVar8;
  uint64_t unaff_RBP;
  ulonglong uVar9;
  int iVar10;
  uint64_t unaff_RSI;
  ulonglong uVar11;
  uint64_t unaff_RDI;
  uint *puVar12;
  longlong lVar13;
  uint uVar14;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  longlong lVar15;
  uint64_t unaff_R14;
  uint *puVar16;
  longlong lVar17;
  bool bVar18;
  byte bStack0000000000000028;
  int32_t uStack0000000000000030;
  int8_t uStack0000000000000038;
  longlong lStack0000000000000040;
  longlong lStack0000000000000048;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int iStack0000000000000058;
  int16_t uStack000000000000005c;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  int32_t uStack0000000000000070;
  int8_t uStack0000000000000074;
  int32_t uStack0000000000000078;
  int32_t uStack000000000000007c;
  uint uStack0000000000000080;
  int16_t uStack0000000000000084;
  uint64_t in_stack_00000088;
  int32_t in_stack_00000090;
  uint64_t in_stack_00000098;
  int32_t uStack00000000000000a0;
  int8_t uStack00000000000000a4;
  uint64_t in_stack_000000b8;
  uint in_stack_00000108;
  int in_stack_00000110;
  int iStack0000000000000118;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R14;
  do {
    lVar4 = *(longlong *)
             (*(longlong *)
               ((longlong)*(int *)param_1[1] * 0x908 + *param_1 + 8 +
               (ulonglong)(param_2 >> 0xc) * 8) +
             (ulonglong)(param_2 + (param_2 >> 0xc) * -0x1000) * 8);
    if ((*(char *)param_1[2] != '\0') || ((*(byte *)(lVar4 + 0x2e8) & 0xb) == 0xb)) {
      bVar18 = false;
      iStack0000000000000118 = 0;
      if (0 < *(int *)param_1[3]) {
        lStack0000000000000040 = 0;
        lStack0000000000000048 = lVar4;
        do {
          lVar17 = lStack0000000000000040;
          iVar10 = 0;
          lVar15 = *(longlong *)(lStack0000000000000040 + param_1[4]);
          bStack0000000000000028 = 0;
          if (*(int *)(lVar15 + 8) != -1) {
            bStack0000000000000028 = (byte)*(int32_t *)(lVar15 + 0x18);
          }
          if ((*(uint *)(lVar15 + 4) & 0x1000000) == 0) {
            bStack0000000000000028 = bStack0000000000000028 & 1;
            uStack0000000000000030 = *(int32_t *)(lVar15 + 0x174);
            uStack0000000000000038 = *(int8_t *)param_1[2];
            cVar2 = FUN_1801ab580(param_1[5],lVar4,*(uint64_t *)param_1[6]);
            if (cVar2 != '\0') {
              lVar13 = param_1[7];
              if (*(longlong *)(lVar4 + 0x260) != 0) {
                FUN_1801bcdd0(*(longlong *)(lVar4 + 0x260),lVar4 + 0x70,lVar13,
                              *(int32_t *)(param_1[5] + 0x8220));
              }
              if ((*(uint *)(lVar15 + 4) & 0x100) == 0) {
                FUN_1802e73b0(lVar4,lVar13 + 0x30,lVar15);
              }
              iStack0000000000000058 = (int)*(float *)(lVar4 + 0x2c0);
              uStack0000000000000054 = 0;
              uStack000000000000005c = 0xff00;
              in_stack_00000060 = 0;
              in_stack_00000068 = 0xffffffffffffffff;
              uStack0000000000000070 = 0xffffffff;
              uStack0000000000000074 = 0xff;
              uStack0000000000000078 = 0xffffffff;
              uStack0000000000000050 = *(int32_t *)(lVar4 + 0x2b8);
              uStack0000000000000080 = (uint)(*(char *)(lVar4 + 0x2e4) == '\0');
              uStack000000000000007c = 0;
              uStack0000000000000084 = 0x400;
              in_stack_00000088 = 0;
              in_stack_00000090 = 0;
              in_stack_00000098 = 0;
              uStack00000000000000a0 = 0;
              uStack00000000000000a4 = 0;
              in_stack_000000b8 = 0;
              FUN_1802e7550(lVar4,lVar15,&stack0x00000050);
              plVar6 = *(longlong **)(lVar4 + 0x1c0);
              iVar3 = (int)(*(longlong *)(lVar4 + 0x1c8) - (longlong)plVar6 >> 3);
              if ((!bVar18) && (0 < iVar3)) {
                lVar15 = (longlong)iVar3;
                if ((*(char *)param_1[8] == '\0') && (lVar13 = lVar15, iVar3 = 0, 0 < lVar15)) {
                  do {
                    lVar1 = *plVar6;
                    plVar6 = plVar6 + 1;
                    iVar3 = iVar10 + 1;
                    if ((*(uint *)(lVar1 + 0x2ac) & 0x10000000) != 0) {
                      iVar3 = iVar10;
                    }
                    lVar13 = lVar13 + -1;
                    iVar10 = iVar3;
                  } while (lVar13 != 0);
                }
                puVar12 = (uint *)((longlong)*(int *)param_1[9] * 0x908 + *param_1);
                if (iVar3 == 0) {
                  uVar14 = 0xffffffff;
                }
                else {
                  LOCK();
                  uVar14 = *puVar12;
                  *puVar12 = *puVar12 + iVar3;
                  UNLOCK();
                  uVar11 = (ulonglong)(uVar14 >> 0xc);
                  uVar9 = (ulonglong)(iVar3 + -1 + uVar14 >> 0xc);
                  lVar4 = lStack0000000000000048;
                  if (uVar11 <= uVar9) {
                    pcVar8 = (char *)((longlong)puVar12 + uVar11 + 0x808);
                    lVar13 = (uVar9 - uVar11) + 1;
                    puVar16 = puVar12 + (ulonglong)(uVar14 >> 0xc) * 2 + 2;
                    do {
                      iVar10 = (int)uVar11;
                      if (*(longlong *)puVar16 == 0) {
                        lVar4 = FUN_18062b420(_DAT_180c8ed18,0x8000,0x25);
                        LOCK();
                        bVar18 = *(longlong *)(puVar12 + (longlong)iVar10 * 2 + 2) == 0;
                        if (bVar18) {
                          *(longlong *)(puVar12 + (longlong)iVar10 * 2 + 2) = lVar4;
                        }
                        UNLOCK();
                        if (bVar18) {
                          LOCK();
                          *(int8_t *)((longlong)iVar10 + 0x808 + (longlong)puVar12) = 0;
                          UNLOCK();
                        }
                        else {
                          if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
                            FUN_18064e900(lVar4);
                          }
                          do {
                          } while (*pcVar8 != '\0');
                        }
                      }
                      else {
                        do {
                        } while (*pcVar8 != '\0');
                      }
                      uVar11 = (ulonglong)(iVar10 + 1);
                      puVar16 = puVar16 + 2;
                      pcVar8 = pcVar8 + 1;
                      lVar13 = lVar13 + -1;
                      lVar4 = lStack0000000000000048;
                      lVar17 = lStack0000000000000040;
                    } while (lVar13 != 0);
                  }
                }
                lVar13 = 0;
                if (0 < lVar15) {
                  do {
                    lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x1c0) + lVar13 * 8);
                    if ((*(char *)param_1[8] != '\0') ||
                       ((*(uint *)(lVar1 + 0x2ac) & 0x10000000) == 0)) {
                      uVar5 = uVar14 >> 0xc;
                      uVar7 = uVar14 + uVar5 * -0x1000;
                      uVar14 = uVar14 + 1;
                      *(longlong *)
                       (*(longlong *)
                         ((longlong)*(int *)param_1[9] * 0x908 + *param_1 + 8 + (ulonglong)uVar5 * 8
                         ) + (ulonglong)uVar7 * 8) = lVar1;
                    }
                    lVar13 = lVar13 + 1;
                  } while (lVar13 < lVar15);
                }
                bVar18 = true;
              }
            }
          }
          lStack0000000000000040 = lVar17 + 8;
          iStack0000000000000118 = iStack0000000000000118 + 1;
        } while (iStack0000000000000118 < *(int *)param_1[3]);
      }
    }
    param_2 = in_stack_00000108 + 1;
    in_stack_00000108 = param_2;
  } while ((int)param_2 < in_stack_00000110);
  return;
}






// 函数: void FUN_1801bb0a4(void)
void FUN_1801bb0a4(void)

{
  return;
}






// 函数: void FUN_1801bb0b0(longlong *param_1,ulonglong param_2)
void FUN_1801bb0b0(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  if ((ulonglong)(param_1[2] - lVar3 >> 2) < param_2) {
    if (param_2 == 0) {
      lVar4 = 0;
    }
    else {
      plVar1 = (longlong *)param_1[3];
      uVar2 = (longlong)((int)plVar1[2] + 0xf) & 0xfffffffffffffff0;
      lVar4 = *plVar1 + uVar2;
      *(int *)(plVar1 + 2) = (int)uVar2 + (int)param_2 * 4;
      lVar3 = *param_1;
    }
    if (lVar3 != param_1[1]) {
                    // WARNING: Subroutine does not return
      memmove(lVar4,lVar3,param_1[1] - lVar3);
    }
    param_1[1] = lVar4;
    *param_1 = lVar4;
    param_1[2] = lVar4 + param_2 * 4;
  }
  return;
}






// 函数: void FUN_1801bb0d3(longlong param_1,longlong param_2)
void FUN_1801bb0d3(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *unaff_RBX;
  longlong unaff_RSI;
  longlong lVar3;
  
  if (unaff_RSI == 0) {
    lVar3 = 0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x18);
    uVar2 = (longlong)((int)plVar1[2] + 0xf) & 0xfffffffffffffff0;
    lVar3 = *plVar1 + uVar2;
    *(int *)(plVar1 + 2) = (int)uVar2 + (int)unaff_RSI * 4;
    param_2 = *unaff_RBX;
  }
  if (param_2 == unaff_RBX[1]) {
    unaff_RBX[1] = lVar3;
    *unaff_RBX = lVar3;
    unaff_RBX[2] = lVar3 + unaff_RSI * 4;
    return;
  }
                    // WARNING: Subroutine does not return
  memmove(lVar3,param_2,unaff_RBX[1] - param_2);
}






// 函数: void FUN_1801bb143(void)
void FUN_1801bb143(void)

{
  return;
}



longlong FUN_1801bb150(longlong param_1,longlong param_2,uint64_t param_3,uint param_4,
                      char param_5,float param_6)

{
  longlong *plVar1;
  char cVar2;
  uint64_t *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = 3.4028235e+38;
  lVar4 = 0;
  if (*(longlong *)(param_1 + 0x480) - *(longlong *)(param_1 + 0x478) >> 3 != 0) {
    puVar3 = (uint64_t *)func_0x000180388c90(param_3);
    plVar1 = (longlong *)puVar3[1];
    for (plVar6 = (longlong *)*puVar3; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      lVar5 = *plVar6;
      if ((((*(uint *)(lVar5 + 0x134) & param_4 & 0xfffffffe) == (param_4 & 0xfffffffe)) ||
          ((*(uint *)(lVar5 + 0x134) & 1) != 0)) &&
         (cVar2 = FUN_18038d0a0(lVar5,param_2), cVar2 != '\0')) {
        if (param_5 != '\0') {
          return lVar5;
        }
        fVar7 = (float)func_0x00018038d2f0(lVar5,param_2);
        fVar7 = ABS(*(float *)(param_2 + 8) - fVar7);
        if ((fVar7 < param_6) && (fVar7 < fVar8)) {
          lVar4 = lVar5;
          fVar8 = fVar7;
        }
      }
    }
  }
  return lVar4;
}






// 函数: void FUN_1801bb2c0(longlong *param_1)
void FUN_1801bb2c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x420) {
    FUN_1801bd090(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1801bb3a0(longlong param_1,longlong param_2,int8_t param_3)
void FUN_1801bb3a0(longlong param_1,longlong param_2,int8_t param_3)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  void *puStack_60;
  longlong lStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  int iStack_40;
  
  if (param_1 != param_2) {
    iVar2 = 0;
    lVar4 = (param_2 - param_1) / 0x28;
    for (lVar1 = lVar4; lVar1 != 0; lVar1 = lVar1 >> 1) {
      iVar2 = iVar2 + 1;
    }
    FUN_1801bca90(param_1,param_2,(longlong)(iVar2 + -1) * 2,param_3,0xfffffffffffffffe);
    if (lVar4 < 0x1d) {
      FUN_1801bb890(param_1,param_2);
    }
    else {
      lVar4 = param_1 + 0x460;
      FUN_1801bb890(param_1,lVar4);
      for (; lVar4 != param_2; lVar4 = lVar4 + 0x28) {
        puStack_60 = &unknown_var_3456_ptr;
        uStack_50 = *(int32_t *)(lVar4 + 0x10);
        lStack_58 = *(longlong *)(lVar4 + 8);
        uStack_48 = *(uint64_t *)(lVar4 + 0x18);
        *(int32_t *)(lVar4 + 0x10) = 0;
        *(uint64_t *)(lVar4 + 8) = 0;
        *(uint64_t *)(lVar4 + 0x18) = 0;
        iStack_40 = *(int *)(lVar4 + 0x20);
        piVar3 = (int *)(lVar4 + -8);
        lVar1 = lVar4;
        if (*piVar3 < iStack_40) {
          do {
            FUN_18005d190(lVar1,piVar3 + -8);
            piVar3[10] = *piVar3;
            lVar1 = lVar1 + -0x28;
            piVar3 = piVar3 + -10;
          } while (*piVar3 < iStack_40);
        }
        FUN_18005d190(lVar1,&puStack_60);
        *(int *)(lVar1 + 0x20) = iStack_40;
        puStack_60 = &unknown_var_3456_ptr;
        if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801bb560(longlong *param_1,uint64_t *param_2)
void FUN_1801bb560(longlong *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  longlong lVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  longlong lVar9;
  
  puVar7 = (uint64_t *)param_1[1];
  puVar8 = (uint64_t *)*param_1;
  lVar9 = ((longlong)puVar7 - (longlong)puVar8) / 0x18;
  puVar3 = (uint64_t *)0x0;
  if (lVar9 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 == 0) goto LAB_1801bb5eb;
  }
  puVar3 = (uint64_t *)
           FUN_18062b420(_DAT_180c8ed18,lVar9 * 0x18,(char)param_1[3],puVar7,0xfffffffffffffffe);
  puVar7 = (uint64_t *)param_1[1];
  puVar8 = (uint64_t *)*param_1;
LAB_1801bb5eb:
  puVar4 = puVar3;
  if (puVar8 != puVar7) {
    puVar5 = puVar8 + 1;
    do {
      *puVar4 = puVar5[-1];
      *(uint64_t *)(((longlong)puVar3 - (longlong)puVar8) + (longlong)puVar5) = *puVar5;
      *puVar5 = 0;
      *(int8_t *)(((longlong)puVar3 - (longlong)puVar8) + 8 + (longlong)puVar5) =
           *(int8_t *)(puVar5 + 1);
      puVar4 = puVar4 + 3;
      puVar1 = puVar5 + 2;
      puVar5 = puVar5 + 3;
    } while (puVar1 != puVar7);
  }
  *puVar4 = *param_2;
  puVar4[1] = param_2[1];
  param_2[1] = 0;
  *(int8_t *)(puVar4 + 2) = *(int8_t *)(param_2 + 2);
  lVar2 = param_1[1];
  lVar6 = *param_1;
  if (lVar6 != lVar2) {
    do {
      if (*(longlong **)(lVar6 + 8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar6 + 8) + 0x38))();
      }
      lVar6 = lVar6 + 0x18;
    } while (lVar6 != lVar2);
    lVar6 = *param_1;
  }
  if (lVar6 == 0) {
    *param_1 = (longlong)puVar3;
    param_1[1] = (longlong)(puVar4 + 3);
    param_1[2] = (longlong)(puVar3 + lVar9 * 3);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801bb6c0(longlong *param_1,uint64_t *param_2)
void FUN_1801bb6c0(longlong *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  longlong *plVar2;
  longlong lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  longlong lVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  longlong lVar10;
  
  puVar8 = (uint64_t *)param_1[1];
  puVar9 = (uint64_t *)*param_1;
  lVar10 = ((longlong)puVar8 - (longlong)puVar9) / 0x18;
  puVar4 = (uint64_t *)0x0;
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 == 0) goto LAB_1801bb74b;
  }
  puVar4 = (uint64_t *)
           FUN_18062b420(_DAT_180c8ed18,lVar10 * 0x18,(char)param_1[3],puVar8,0xfffffffffffffffe);
  puVar8 = (uint64_t *)param_1[1];
  puVar9 = (uint64_t *)*param_1;
LAB_1801bb74b:
  puVar6 = puVar4;
  if (puVar9 != puVar8) {
    puVar5 = puVar9 + 1;
    do {
      *puVar6 = puVar5[-1];
      *(uint64_t *)(((longlong)puVar4 - (longlong)puVar9) + (longlong)puVar5) = *puVar5;
      *puVar5 = 0;
      *(int8_t *)(((longlong)puVar4 - (longlong)puVar9) + 8 + (longlong)puVar5) =
           *(int8_t *)(puVar5 + 1);
      puVar6 = puVar6 + 3;
      puVar1 = puVar5 + 2;
      puVar5 = puVar5 + 3;
    } while (puVar1 != puVar8);
  }
  *puVar6 = *param_2;
  plVar2 = (longlong *)param_2[1];
  puVar6[1] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  *(int8_t *)(puVar6 + 2) = *(int8_t *)(param_2 + 2);
  lVar3 = param_1[1];
  lVar7 = *param_1;
  if (lVar7 != lVar3) {
    do {
      if (*(longlong **)(lVar7 + 8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar7 + 8) + 0x38))();
      }
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != lVar3);
    lVar7 = *param_1;
  }
  if (lVar7 == 0) {
    *param_1 = (longlong)puVar4;
    param_1[1] = (longlong)(puVar6 + 3);
    param_1[2] = (longlong)(puVar4 + lVar10 * 3);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar7);
}






// 函数: void FUN_1801bb830(uint64_t param_1,char param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801bb830(uint64_t param_1,char param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != '\0') {
    free(param_1,0x20,param_3,param_4,0xfffffffffffffffe);
  }
  return;
}






// 函数: void FUN_1801bb890(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801bb890(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t uVar4;
  void *puStack_60;
  longlong lStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  int iStack_40;
  
  if (param_1 != param_2) {
    uVar4 = 0xfffffffffffffffe;
    for (lVar2 = param_1 + 0x28; lVar2 != param_2; lVar2 = lVar2 + 0x28) {
      puStack_60 = &unknown_var_3456_ptr;
      uStack_50 = *(int32_t *)(lVar2 + 0x10);
      lStack_58 = *(longlong *)(lVar2 + 8);
      uStack_48 = *(uint64_t *)(lVar2 + 0x18);
      *(int32_t *)(lVar2 + 0x10) = 0;
      *(uint64_t *)(lVar2 + 8) = 0;
      *(uint64_t *)(lVar2 + 0x18) = 0;
      iStack_40 = *(int *)(lVar2 + 0x20);
      lVar1 = lVar2;
      lVar3 = lVar2;
      while ((lVar1 != param_1 && (*(int *)(lVar1 + -8) < iStack_40))) {
        FUN_18005d190(lVar3,lVar1 + -0x28,param_3,param_4,uVar4);
        *(int32_t *)(lVar3 + 0x20) = *(int32_t *)(lVar1 + -8);
        lVar3 = lVar3 + -0x28;
        lVar1 = lVar1 + -0x28;
      }
      FUN_18005d190(lVar3,&puStack_60,param_3,param_4,uVar4);
      *(int *)(lVar3 + 0x20) = iStack_40;
      puStack_60 = &unknown_var_3456_ptr;
      if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
  }
  return;
}






// 函数: void FUN_1801bb9e0(longlong param_1,longlong *param_2)
void FUN_1801bb9e0(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  longlong *plVar5;
  code *pcVar6;
  byte *pbVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint64_t uStackX_8;
  
  lVar3 = *param_2;
  uVar9 = 0;
  uVar14 = *(longlong *)(lVar3 + 0x208) - *(longlong *)(lVar3 + 0x200) >> 3;
  uVar10 = uVar9;
  uVar13 = uVar9;
  if (uVar14 != 0) {
    do {
      pcVar4 = *(char **)(*(longlong *)(uVar10 + *(longlong *)(lVar3 + 0x200)) + 0x10);
      if (*pcVar4 != '\0') {
        iVar2 = *(int *)(pcVar4 + 0x18);
        iVar8 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
        if (iVar2 == iVar8) {
          if (iVar2 != 0) {
            pbVar7 = *(byte **)(pcVar4 + 0x10);
            lVar11 = *(longlong *)(*(longlong *)(param_1 + 8) + 8) - (longlong)pbVar7;
            do {
              pbVar1 = pbVar7 + lVar11;
              iVar8 = (uint)*pbVar7 - (uint)*pbVar1;
              if (iVar8 != 0) break;
              pbVar7 = pbVar7 + 1;
            } while (*pbVar1 != 0);
          }
        }
        else if (iVar2 != 0) goto LAB_1801bba71;
        if (iVar8 == 0) {
          **(longlong **)(param_1 + 0x10) = lVar3;
          return;
        }
      }
LAB_1801bba71:
      uVar12 = (int)uVar13 + 1;
      uVar10 = uVar10 + 8;
      uVar13 = (ulonglong)uVar12;
    } while ((ulonglong)(longlong)(int)uVar12 < uVar14);
  }
  lVar11 = *(longlong *)(lVar3 + 0x1c0);
  uVar10 = uVar9;
  if (*(longlong *)(lVar3 + 0x1c8) - lVar11 >> 3 != 0) {
    do {
      uStackX_8 = *(uint64_t *)(uVar9 + lVar11);
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x38);
      if (plVar5 == (longlong *)0x0) {
        __Xbad_function_call_std__YAXXZ();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5,&uStackX_8);
      lVar11 = *(longlong *)(lVar3 + 0x1c0);
      uVar12 = (int)uVar10 + 1;
      uVar9 = uVar9 + 8;
      uVar10 = (ulonglong)uVar12;
    } while ((ulonglong)(longlong)(int)uVar12 <
             (ulonglong)(*(longlong *)(lVar3 + 0x1c8) - lVar11 >> 3));
  }
  return;
}






// 函数: void FUN_1801bbb10(int param_1,int param_2,longlong *param_3)
void FUN_1801bbb10(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar2 = (longlong)param_1; lVar2 < param_2; lVar2 = lVar2 + 1) {
    lVar1 = *(longlong *)(*(longlong *)(*param_3 + 0x60d10) + lVar2 * 8);
    if (*(short *)(lVar1 + 0x2b0) != *(short *)(lVar1 + 0x2b4)) {
      if (*(char *)(lVar1 + 0x2d8) == '\0') {
        FUN_1802e7e20(lVar1);
      }
      else {
        FUN_18063ad30(*(longlong *)(lVar1 + 0x28),*(longlong *)(lVar1 + 0x28) + 0xf8,lVar1 + 0x70);
      }
      *(int16_t *)(lVar1 + 0x2b0) = *(int16_t *)(lVar1 + 0x2b4);
    }
  }
  return;
}






// 函数: void FUN_1801bbb2e(void)
void FUN_1801bbb2e(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong *unaff_R14;
  
  do {
    lVar1 = *(longlong *)(*(longlong *)(*unaff_R14 + 0x60d10) + unaff_RDI * 8);
    if (*(short *)(lVar1 + 0x2b0) != *(short *)(lVar1 + 0x2b4)) {
      if (*(char *)(lVar1 + 0x2d8) == '\0') {
        FUN_1802e7e20(lVar1);
      }
      else {
        FUN_18063ad30(*(longlong *)(lVar1 + 0x28),*(longlong *)(lVar1 + 0x28) + 0xf8,lVar1 + 0x70);
      }
      *(int16_t *)(lVar1 + 0x2b0) = *(int16_t *)(lVar1 + 0x2b4);
    }
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RSI);
  return;
}






// 函数: void FUN_1801bbba0(void)
void FUN_1801bbba0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801bbc00(int param_1,int param_2,longlong *param_3)
void FUN_1801bbc00(int param_1,int param_2,longlong *param_3)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 < param_2) {
    do {
      lVar3 = *param_3;
      lVar2 = *(longlong *)(lVar3 + 0x448);
      if (lVar2 == 0) {
        uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x2370,8,3);
        lVar2 = FUN_180373a60(uVar1,lVar3);
        lVar3 = *param_3;
      }
      FUN_180378b60(lVar2,*(uint64_t *)(lVar3 + 0x60b80),param_1);
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801bbc16(int param_1,int param_2)
void FUN_1801bbc16(int param_1,int param_2)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong *unaff_RSI;
  longlong lVar3;
  
  do {
    lVar3 = *unaff_RSI;
    lVar2 = *(longlong *)(lVar3 + 0x448);
    if (lVar2 == 0) {
      uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x2370,8,3);
      lVar2 = FUN_180373a60(uVar1,lVar3);
      lVar3 = *unaff_RSI;
    }
    FUN_180378b60(lVar2,*(uint64_t *)(lVar3 + 0x60b80),param_1);
    param_1 = param_1 + 1;
  } while (param_1 < param_2);
  return;
}






// 函数: void FUN_1801bbc81(void)
void FUN_1801bbc81(void)

{
  return;
}






// 函数: void FUN_1801bbd60(int param_1,int param_2,uint64_t *param_3)
void FUN_1801bbd60(int param_1,int param_2,uint64_t *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  
  if (param_1 < param_2) {
    uVar6 = (ulonglong)(uint)(param_2 - param_1);
    uVar3 = (ulonglong)param_1;
    do {
      puVar4 = (ulonglong *)((uVar3 & 0xffffffff) * 0x10 + *(longlong *)*param_3);
      puVar5 = puVar4 + 1;
      if ((*puVar4 & 0xffffffff00000000) == 0) {
        puVar5 = (ulonglong *)0x0;
      }
      if (puVar5 != (ulonglong *)0x0) {
        uVar1 = *puVar5;
        lVar2 = *(longlong *)(uVar1 + 0x28);
        *(uint64_t *)(lVar2 + 0x158) = *(uint64_t *)(lVar2 + 0x150);
        lVar2 = *(longlong *)(uVar1 + 0x28);
        *(uint64_t *)(lVar2 + 0x138) = *(uint64_t *)(lVar2 + 0x130);
      }
      uVar3 = uVar3 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}






// 函数: void FUN_1801bbd6d(uint param_1,uint param_2)
void FUN_1801bbd6d(uint param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  uint64_t *in_R10;
  
  uVar5 = (ulonglong)param_2;
  do {
    puVar3 = (ulonglong *)((ulonglong)param_1 * 0x10 + *(longlong *)*in_R10);
    puVar4 = puVar3 + 1;
    if ((*puVar3 & 0xffffffff00000000) == 0) {
      puVar4 = (ulonglong *)0x0;
    }
    if (puVar4 != (ulonglong *)0x0) {
      uVar1 = *puVar4;
      lVar2 = *(longlong *)(uVar1 + 0x28);
      *(uint64_t *)(lVar2 + 0x158) = *(uint64_t *)(lVar2 + 0x150);
      lVar2 = *(longlong *)(uVar1 + 0x28);
      *(uint64_t *)(lVar2 + 0x138) = *(uint64_t *)(lVar2 + 0x130);
    }
    param_1 = param_1 + 1;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  return;
}






// 函数: void FUN_1801bbde0(void)
void FUN_1801bbde0(void)

{
  return;
}






// 函数: void FUN_1801bbe30(int param_1,int param_2,uint64_t *param_3)
void FUN_1801bbe30(int param_1,int param_2,uint64_t *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar2 = (longlong)param_1; lVar2 < param_2; lVar2 = lVar2 + 1) {
    lVar1 = *(longlong *)(*(longlong *)*param_3 + lVar2 * 8);
    if (*(short *)(lVar1 + 0x2b0) != *(short *)(lVar1 + 0x2b4)) {
      if (*(char *)(lVar1 + 0x2d8) == '\0') {
        FUN_1802e7e20(lVar1);
      }
      else {
        FUN_18063ad30(*(longlong *)(lVar1 + 0x28),*(longlong *)(lVar1 + 0x28) + 0xf8,lVar1 + 0x70);
      }
      *(int16_t *)(lVar1 + 0x2b0) = *(int16_t *)(lVar1 + 0x2b4);
    }
  }
  return;
}






// 函数: void FUN_1801bbe4e(void)
void FUN_1801bbe4e(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  uint64_t *unaff_R14;
  
  do {
    lVar1 = *(longlong *)(*(longlong *)*unaff_R14 + unaff_RDI * 8);
    if (*(short *)(lVar1 + 0x2b0) != *(short *)(lVar1 + 0x2b4)) {
      if (*(char *)(lVar1 + 0x2d8) == '\0') {
        FUN_1802e7e20(lVar1);
      }
      else {
        FUN_18063ad30(*(longlong *)(lVar1 + 0x28),*(longlong *)(lVar1 + 0x28) + 0xf8,lVar1 + 0x70);
      }
      *(int16_t *)(lVar1 + 0x2b0) = *(int16_t *)(lVar1 + 0x2b4);
    }
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RSI);
  return;
}






// 函数: void FUN_1801bbeaf(void)
void FUN_1801bbeaf(void)

{
  return;
}






// 函数: void FUN_1801bbf00(int param_1,int param_2,uint64_t *param_3)
void FUN_1801bbf00(int param_1,int param_2,uint64_t *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (longlong)param_1;
  if (lVar1 < param_2) {
    lVar2 = param_2 - lVar1;
    lVar1 = lVar1 * 8 + 0x118;
    do {
      FUN_18024fb60(param_3[1] + 0x570,*(longlong *)*param_3,
                    *(uint64_t *)(*(longlong *)(*(longlong *)*param_3 + 0x3580) + lVar1));
      lVar1 = lVar1 + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}






// 函数: void FUN_1801bbf18(void)
void FUN_1801bbf18(void)

{
  longlong in_RAX;
  longlong unaff_RBX;
  longlong lVar1;
  uint64_t *unaff_RSI;
  longlong lVar2;
  
  lVar1 = unaff_RBX - in_RAX;
  lVar2 = in_RAX * 8 + 0x118;
  do {
    FUN_18024fb60(unaff_RSI[1] + 0x570,*(longlong *)*unaff_RSI,
                  *(uint64_t *)(*(longlong *)(*(longlong *)*unaff_RSI + 0x3580) + lVar2));
    lVar2 = lVar2 + 8;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}






// 函数: void FUN_1801bbf60(void)
void FUN_1801bbf60(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




