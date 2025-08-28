#include "TaleWorlds.Native.Split.h"

// 03_rendering_part304.c - 10 个函数

// 函数: void FUN_18042d180(int *param_1,int *param_2,int *param_3,int *param_4)
void FUN_18042d180(int *param_1,int *param_2,int *param_3,int *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  undefined1 auStack_4c8 [32];
  int aiStack_4a8 [2];
  int *piStack_4a0;
  int *piStack_498;
  int *piStack_490;
  int *apiStack_488 [3];
  int iStack_470;
  undefined4 uStack_46c;
  undefined1 auStack_458 [1024];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_4c8;
  apiStack_488[0] = param_1;
  iVar3 = FUN_180426a80(apiStack_488,2);
  if (iVar3 == 0) {
    *(undefined8 *)(apiStack_488[0] + 0x2e) = *(undefined8 *)(apiStack_488[0] + 0x32);
    *(undefined8 *)(apiStack_488[0] + 0x30) = *(undefined8 *)(apiStack_488[0] + 0x34);
    piVar6 = (int *)FUN_18062b420(_DAT_180c8ed18,0x4860,0x22);
    iVar3 = FUN_18042b010(param_1,piVar6,param_4,1);
    if (iVar3 == 0) {
      if (piVar6 != (int *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(piVar6);
      }
      *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_1 + 0x32);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x34);
      uStack_46c = 0xff;
      lVar7 = FUN_1804276f0(param_1,apiStack_488);
      *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_1 + 0x32);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x34);
      if (lVar7 == 0) {
        piVar6 = aiStack_4a8;
        if (param_2 != (int *)0x0) {
          piVar6 = param_2;
        }
        piStack_4a0 = aiStack_4a8;
        if (param_3 != (int *)0x0) {
          piStack_4a0 = param_3;
        }
        piVar9 = aiStack_4a8;
        if (param_4 != (int *)0x0) {
          piVar9 = param_4;
        }
        iVar3 = FUN_18041efc0(param_1);
        iVar4 = FUN_18041efc0(param_1);
        if ((iVar4 + iVar3 * 0x10000 == 0x38425053) && (iVar3 = FUN_18041efc0(param_1), iVar3 == 1))
        {
          if ((*(longlong *)(param_1 + 4) == 0) ||
             (iVar3 = param_1[0x2e], 5 < param_1[0x30] - iVar3)) {
            *(longlong *)(param_1 + 0x2e) = *(longlong *)(param_1 + 0x2e) + 6;
          }
          else {
            *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_1 + 0x30);
            (**(code **)(param_1 + 6))(*(undefined8 *)(param_1 + 10),6 - (param_1[0x30] - iVar3));
          }
          uVar5 = FUN_18041efc0(param_1);
          if (uVar5 < 0x11) {
            iVar3 = FUN_18041f070(param_1);
            *piStack_4a0 = iVar3;
            iVar3 = FUN_18041f070(param_1);
            *piVar6 = iVar3;
            iVar3 = FUN_18041efc0(param_1);
            if ((iVar3 == 8) && (iVar3 = FUN_18041efc0(param_1), iVar3 == 3)) {
              *piVar9 = 4;
              goto LAB_18042d5a9;
            }
          }
        }
        *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_1 + 0x32);
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x34);
        iVar3 = FUN_18042c990(param_1,param_2,param_3,param_4);
        if ((iVar3 == 0) && (iVar3 = FUN_18042cfb0(param_1,param_2,param_3,param_4), iVar3 == 0)) {
          bVar2 = false;
          piStack_498 = aiStack_4a8;
          if (param_2 != (int *)0x0) {
            piStack_498 = param_2;
          }
          piVar6 = aiStack_4a8;
          if (param_3 != (int *)0x0) {
            piVar6 = param_3;
          }
          piStack_490 = aiStack_4a8;
          if (param_4 != (int *)0x0) {
            piStack_490 = param_4;
          }
          iVar3 = FUN_18042bf80(param_1);
          if ((iVar3 != 0) &&
             (piStack_4a0 = (int *)FUN_18042bff0(param_1,auStack_458), (char)*piStack_4a0 != '\0'))
          {
            do {
              iVar3 = strcmp(piStack_4a0,&UNK_180a27d38);
              if (iVar3 == 0) {
                bVar2 = true;
              }
              piStack_4a0 = (int *)FUN_18042bff0(param_1,auStack_458);
              piVar9 = piStack_498;
            } while ((char)*piStack_4a0 != '\0');
            if (bVar2) {
              piStack_4a0 = (int *)FUN_18042bff0(param_1,auStack_458);
              iVar3 = strncmp(piStack_4a0,&UNK_180a27d50,3);
              if (iVar3 == 0) {
                piStack_4a0 = (int *)((longlong)piStack_4a0 + 3);
                iVar3 = strtol(piStack_4a0,&piStack_4a0,10);
                piVar8 = piStack_4a0;
                *piVar6 = iVar3;
                cVar1 = (char)*piVar8;
                while (cVar1 == ' ') {
                  piVar8 = (int *)((longlong)piVar8 + 1);
                  piStack_4a0 = piVar8;
                  cVar1 = *(char *)piVar8;
                }
                iVar3 = strncmp(piVar8,&UNK_180a27d34,3);
                if (iVar3 == 0) {
                  piStack_4a0 = (int *)((longlong)piStack_4a0 + 3);
                  iVar3 = strtol(piStack_4a0,0,10);
                  piVar6 = piStack_490;
                  *piVar9 = iVar3;
                  *piVar6 = 3;
                  goto LAB_18042d5a9;
                }
              }
            }
          }
          *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_1 + 0x32);
          *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x34);
          FUN_180428680(param_1,param_2,param_3,param_4);
        }
      }
      else {
        if (param_2 != (int *)0x0) {
          *param_2 = *param_1;
        }
        if (param_3 != (int *)0x0) {
          *param_3 = param_1[1];
        }
        if (param_4 != (int *)0x0) {
          *param_4 = (iStack_470 != 0) + 3;
        }
      }
    }
    else {
      if (param_2 != (int *)0x0) {
        *param_2 = *piVar6;
      }
      if (param_3 != (int *)0x0) {
        *param_3 = piVar6[1];
      }
      if (piVar6 != (int *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(piVar6);
      }
    }
  }
  else {
    if (param_2 != (int *)0x0) {
      *param_2 = *apiStack_488[0];
    }
    if (param_3 != (int *)0x0) {
      *param_3 = apiStack_488[0][1];
    }
    if (param_4 != (int *)0x0) {
      *param_4 = apiStack_488[0][2];
    }
  }
LAB_18042d5a9:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_4c8);
}





// 函数: void FUN_18042d5f0(undefined8 *param_1,char *param_2,longlong param_3)
void FUN_18042d5f0(undefined8 *param_1,char *param_2,longlong param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStackX_10 [8];
  undefined1 uStackX_20;
  undefined1 uStackX_21;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  
  cVar2 = *param_2;
  if (cVar2 != '\0') {
    param_3 = param_3 + -8;
    do {
      param_2 = param_2 + 1;
      if (cVar2 != ' ') {
        if (cVar2 == '1') {
          auStackX_10[0] = *(undefined1 *)(param_3 + 8);
          puVar3 = auStackX_10;
          uVar4 = 1;
        }
        else if (cVar2 == '2') {
          puVar3 = &uStackX_20;
          uStackX_20 = (undefined1)*(undefined4 *)(param_3 + 8);
          uVar4 = 2;
          uStackX_21 = (undefined1)((uint)*(undefined4 *)(param_3 + 8) >> 8);
        }
        else {
          if (cVar2 != '4') {
            return;
          }
          uVar1 = *(undefined4 *)(param_3 + 8);
          puVar3 = &uStack_18;
          uStack_18 = (undefined1)uVar1;
          uVar4 = 4;
          uStack_17 = (undefined1)((uint)uVar1 >> 8);
          uStack_15 = (undefined1)((uint)uVar1 >> 0x18);
          uStack_16 = (undefined1)((uint)uVar1 >> 0x10);
        }
        param_3 = param_3 + 8;
        (*(code *)*param_1)(param_1[1],puVar3,uVar4);
      }
      cVar2 = *param_2;
    } while (cVar2 != '\0');
  }
  return;
}





// 函数: void FUN_18042d60b(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_18042d60b(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  char in_AL;
  undefined8 *puVar2;
  char *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 uVar3;
  undefined1 uStackX_20;
  undefined1 uStackX_21;
  undefined1 uStackX_22;
  undefined1 uStackX_23;
  undefined1 in_stack_00000048;
  undefined1 uStack0000000000000058;
  undefined1 uStack0000000000000059;
  
  param_3 = param_3 + -8;
  do {
    unaff_RSI = unaff_RSI + 1;
    if (in_AL != ' ') {
      if (in_AL == '1') {
        in_stack_00000048 = *(undefined1 *)(param_3 + 8);
        puVar2 = (undefined8 *)&stack0x00000048;
        uVar3 = 1;
      }
      else if (in_AL == '2') {
        puVar2 = (undefined8 *)&stack0x00000058;
        uStack0000000000000058 = (undefined1)*(undefined4 *)(param_3 + 8);
        uVar3 = 2;
        uStack0000000000000059 = (undefined1)((uint)*(undefined4 *)(param_3 + 8) >> 8);
      }
      else {
        if (in_AL != '4') {
          return;
        }
        uVar1 = *(undefined4 *)(param_3 + 8);
        puVar2 = (undefined8 *)&uStackX_20;
        uStackX_20 = (undefined1)uVar1;
        uVar3 = 4;
        uStackX_21 = (undefined1)((uint)uVar1 >> 8);
        uStackX_23 = (undefined1)((uint)uVar1 >> 0x18);
        uStackX_22 = (undefined1)((uint)uVar1 >> 0x10);
      }
      param_3 = param_3 + 8;
      (*(code *)*unaff_RDI)(unaff_RDI[1],puVar2,uVar3);
    }
    in_AL = *unaff_RSI;
  } while (in_AL != '\0');
  return;
}





// 函数: void FUN_18042d6ac(void)
void FUN_18042d6ac(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18042d6c0(undefined8 *param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
void FUN_18042d6c0(undefined8 *param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
                  longlong param_7,int param_8,undefined4 param_9,int param_10)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  byte *pbVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iStackX_18;
  byte bStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  byte bStack_54;
  byte bStack_53;
  byte bStack_52;
  byte bStack_50;
  byte bStack_4f;
  byte bStack_4e;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  
  iVar4 = param_8;
  iVar3 = param_6;
  uStack_48 = 0;
  if (0 < param_5) {
    iStackX_18 = param_3;
    if (_DAT_180c8ec8c != 0) {
      iStackX_18 = -param_3;
    }
    iVar12 = param_5 + -1;
    if (-1 < iStackX_18) {
      iVar12 = 0;
    }
    iStack_40 = -1;
    if (-1 < iStackX_18) {
      iStack_40 = param_5;
    }
    if (iVar12 != iStack_40) {
      lVar8 = (longlong)param_6;
      iStack_4c = iVar12 * param_4 * param_6;
      lVar14 = (longlong)param_2;
      iStack_44 = iStackX_18 * param_4 * param_6;
      do {
        if (0 < (int)param_4) {
          pbVar9 = (byte *)(iStack_4c + param_7);
          uVar13 = (ulonglong)param_4;
          do {
            if (iVar4 < 0) {
              (*(code *)*param_1)(param_1[1],pbVar9 + (iVar3 + -1),1);
            }
            iVar2 = param_5;
            if (iVar3 < 1) {
LAB_18042d8d2:
              if (0 < iVar4) {
                uVar10 = 1;
                pbVar7 = pbVar9 + (iVar3 + -1);
                goto LAB_18042d8e5;
              }
            }
            else {
              if (iVar3 < 3) {
                if (param_10 == 0) {
                  uVar11 = 1;
                  pbVar7 = pbVar9;
                }
                else {
                  bStack_50 = *pbVar9;
                  uVar11 = 3;
                  pbVar7 = &bStack_50;
                  bStack_4f = bStack_50;
                  bStack_4e = bStack_50;
                }
LAB_18042d8cc:
                (*(code *)*param_1)(param_1[1],pbVar7,uVar11);
                goto LAB_18042d8d2;
              }
              if (iVar3 == 3) {
LAB_18042d870:
                uVar11 = 3;
                bStack_54 = pbVar9[1 - lVar14];
                bStack_53 = pbVar9[1];
                bStack_52 = pbVar9[lVar14 + 1];
                pbVar7 = &bStack_54;
                goto LAB_18042d8cc;
              }
              if (iVar3 != 4) goto LAB_18042d8d2;
              if (iVar4 != 0) goto LAB_18042d870;
              bVar1 = pbVar9[3];
              iVar5 = (*pbVar9 - 0xff) * (uint)bVar1;
              iVar6 = (pbVar9[2] - 0xff) * (uint)bVar1;
              uStack_57 = (undefined1)(((uint)pbVar9[1] * (uint)bVar1) / 0xff);
              uVar10 = 3;
              param_5._3_1_ = SUB41(iVar2,3);
              param_5._0_3_ =
                   CONCAT12((((char)(iVar6 / 0xff) + (char)(iVar6 >> 0x1f)) -
                            (char)((longlong)iVar6 * 0x80808081 >> 0x3f)) + -1,
                            CONCAT11(uStack_57,
                                     (((char)(iVar5 / 0xff) + (char)(iVar5 >> 0x1f)) -
                                     (char)((longlong)iVar5 * 0x80808081 >> 0x3f)) + -1));
              pbVar7 = &bStack_58;
              bStack_58 = *(byte *)((longlong)&param_5 + (1 - lVar14));
              uStack_56 = *(undefined1 *)((longlong)&param_5 + lVar14 + 1);
LAB_18042d8e5:
              (*(code *)*param_1)(param_1[1],pbVar7,uVar10);
            }
            pbVar9 = pbVar9 + lVar8;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        (*(code *)*param_1)(param_1[1],&uStack_48,param_9);
        iStack_4c = iStack_4c + iStack_44;
        iVar12 = iVar12 + iStackX_18;
      } while (iVar12 != iStack_40);
    }
  }
  return;
}





// 函数: void FUN_18042d6ee(int param_1,int param_2,int param_3,uint param_4,undefined8 param_5)
void FUN_18042d6ee(int param_1,int param_2,int param_3,uint param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *unaff_RBX;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong in_R11;
  int iVar10;
  undefined8 unaff_R13;
  ulonglong uVar11;
  longlong lVar12;
  bool in_ZF;
  undefined1 uStackX_20;
  undefined1 uStackX_21;
  undefined1 uStackX_22;
  undefined1 uStackX_24;
  undefined1 uStackX_25;
  undefined1 uStackX_26;
  int iStack0000000000000034;
  int iStack0000000000000038;
  int in_stack_00000090;
  uint in_stack_00000098;
  undefined8 in_stack_000000a0;
  int in_stack_000000a8;
  longlong in_stack_000000b0;
  int in_stack_000000b8;
  undefined4 in_stack_000000c0;
  int in_stack_000000c8;
  
  iVar2 = in_stack_000000b8;
  iVar1 = in_stack_000000a8;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R13;
  if (!in_ZF) {
    param_3 = -param_3;
    *(int *)(in_R11 + 0x18) = param_3;
  }
  iVar10 = in_EAX + -1;
  if (-1 < param_3) {
    iVar10 = param_1;
  }
  iStack0000000000000038 = -1;
  if (-1 < param_3) {
    iStack0000000000000038 = in_EAX;
  }
  if (iVar10 != iStack0000000000000038) {
    lVar6 = (longlong)in_stack_000000a8;
    param_5._4_4_ = iVar10 * param_4 * in_stack_000000a8;
    lVar12 = (longlong)param_2;
    iStack0000000000000034 = param_3 * param_4 * in_stack_000000a8;
    do {
      if (0 < (int)param_4) {
        puVar7 = (undefined8 *)(param_5._4_4_ + in_stack_000000b0);
        uVar11 = (ulonglong)param_4;
        do {
          if (iVar2 < 0) {
            (*(code *)*unaff_RBX)
                      (unaff_RBX[1],(undefined1 *)((longlong)(iVar1 + -1) + (longlong)puVar7),1);
          }
          if (iVar1 < 1) {
LAB_18042d8d2:
            if (0 < iVar2) {
              uVar8 = 1;
              puVar5 = (undefined1 *)((longlong)(iVar1 + -1) + (longlong)puVar7);
              goto LAB_18042d8e5;
            }
          }
          else {
            if (iVar1 < 3) {
              if (in_stack_000000c8 == 0) {
                uVar9 = 1;
                puVar4 = puVar7;
              }
              else {
                param_5._0_1_ = *(undefined1 *)puVar7;
                uVar9 = 3;
                puVar4 = &param_5;
                param_5._1_1_ = (undefined1)param_5;
                param_5._2_1_ = (undefined1)param_5;
              }
LAB_18042d8cc:
              (*(code *)*unaff_RBX)(unaff_RBX[1],puVar4,uVar9);
              goto LAB_18042d8d2;
            }
            if (iVar1 == 3) {
LAB_18042d870:
              uVar9 = 3;
              uStackX_24 = *(undefined1 *)((longlong)puVar7 + (1 - lVar12));
              uStackX_25 = *(undefined1 *)((longlong)puVar7 + 1);
              uStackX_26 = *(undefined1 *)(lVar12 + 1 + (longlong)puVar7);
              puVar4 = (undefined8 *)&uStackX_24;
              goto LAB_18042d8cc;
            }
            if (iVar1 != 4) goto LAB_18042d8d2;
            if (iVar2 != 0) goto LAB_18042d870;
            iVar3 = (*(byte *)((longlong)puVar7 + 2) - 0xff) * (uint)*(byte *)((longlong)puVar7 + 3)
            ;
            uStackX_21 = (undefined1)
                         (((uint)*(byte *)((longlong)puVar7 + 1) *
                          (uint)*(byte *)((longlong)puVar7 + 3)) / 0xff);
            in_stack_000000a0._1_1_ = uStackX_21;
            uVar8 = 3;
            in_stack_000000a0._2_1_ =
                 (((char)(iVar3 / 0xff) + (char)(iVar3 >> 0x1f)) -
                 (char)((longlong)iVar3 * 0x80808081 >> 0x3f)) + -1;
            puVar5 = &uStackX_20;
            uStackX_20 = *(undefined1 *)((longlong)&stack0x000000a0 + (1 - lVar12));
            uStackX_22 = *(undefined1 *)((longlong)&stack0x000000a0 + lVar12 + 1);
LAB_18042d8e5:
            (*(code *)*unaff_RBX)(unaff_RBX[1],puVar5,uVar8);
          }
          puVar7 = (undefined8 *)((longlong)puVar7 + lVar6);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      (*(code *)*unaff_RBX)(unaff_RBX[1],&stack0x00000030,in_stack_000000c0);
      param_5._4_4_ = param_5._4_4_ + iStack0000000000000034;
      iVar10 = iVar10 + in_stack_00000090;
      param_4 = in_stack_00000098;
    } while (iVar10 != iStack0000000000000038);
  }
  return;
}





// 函数: void FUN_18042d71b(undefined8 param_1,int param_2,int param_3,uint param_4,undefined8 param_5,
void FUN_18042d71b(undefined8 param_1,int param_2,int param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *unaff_RBX;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int unaff_R13D;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 uStackX_20;
  undefined1 uStackX_21;
  undefined1 uStackX_22;
  undefined1 uStackX_24;
  undefined1 uStackX_25;
  undefined1 uStackX_26;
  int in_stack_00000090;
  uint in_stack_00000098;
  undefined8 in_stack_000000a0;
  int in_stack_000000a8;
  longlong in_stack_000000b0;
  int in_stack_000000b8;
  undefined4 in_stack_000000c0;
  int in_stack_000000c8;
  
  iVar2 = in_stack_000000b8;
  iVar1 = in_stack_000000a8;
  lVar6 = (longlong)in_stack_000000a8;
  param_5._4_4_ = unaff_R13D * param_4 * in_stack_000000a8;
  lVar11 = (longlong)param_2;
  param_6._4_4_ = param_3 * param_4 * in_stack_000000a8;
  do {
    if (0 < (int)param_4) {
      puVar7 = (undefined8 *)(param_5._4_4_ + in_stack_000000b0);
      uVar10 = (ulonglong)param_4;
      do {
        if (iVar2 < 0) {
          (*(code *)*unaff_RBX)
                    (unaff_RBX[1],(undefined1 *)((longlong)(iVar1 + -1) + (longlong)puVar7),1);
        }
        if (iVar1 < 1) {
LAB_18042d8d2:
          if (0 < iVar2) {
            uVar8 = 1;
            puVar5 = (undefined1 *)((longlong)(iVar1 + -1) + (longlong)puVar7);
            goto LAB_18042d8e5;
          }
        }
        else {
          if (iVar1 < 3) {
            if (in_stack_000000c8 == 0) {
              uVar9 = 1;
              puVar4 = puVar7;
            }
            else {
              param_5._0_1_ = *(undefined1 *)puVar7;
              uVar9 = 3;
              puVar4 = &param_5;
              param_5._1_1_ = (undefined1)param_5;
              param_5._2_1_ = (undefined1)param_5;
            }
LAB_18042d8cc:
            (*(code *)*unaff_RBX)(unaff_RBX[1],puVar4,uVar9);
            goto LAB_18042d8d2;
          }
          if (iVar1 == 3) {
LAB_18042d870:
            uVar9 = 3;
            uStackX_24 = *(undefined1 *)((longlong)puVar7 + (1 - lVar11));
            uStackX_25 = *(undefined1 *)((longlong)puVar7 + 1);
            uStackX_26 = *(undefined1 *)(lVar11 + 1 + (longlong)puVar7);
            puVar4 = (undefined8 *)&uStackX_24;
            goto LAB_18042d8cc;
          }
          if (iVar1 != 4) goto LAB_18042d8d2;
          if (iVar2 != 0) goto LAB_18042d870;
          iVar3 = (*(byte *)((longlong)puVar7 + 2) - 0xff) * (uint)*(byte *)((longlong)puVar7 + 3);
          uStackX_21 = (undefined1)
                       (((uint)*(byte *)((longlong)puVar7 + 1) *
                        (uint)*(byte *)((longlong)puVar7 + 3)) / 0xff);
          in_stack_000000a0._1_1_ = uStackX_21;
          uVar8 = 3;
          in_stack_000000a0._2_1_ =
               (((char)(iVar3 / 0xff) + (char)(iVar3 >> 0x1f)) -
               (char)((longlong)iVar3 * 0x80808081 >> 0x3f)) + -1;
          puVar5 = &uStackX_20;
          uStackX_20 = *(undefined1 *)((longlong)&stack0x000000a0 + (1 - lVar11));
          uStackX_22 = *(undefined1 *)((longlong)&stack0x000000a0 + lVar11 + 1);
LAB_18042d8e5:
          (*(code *)*unaff_RBX)(unaff_RBX[1],puVar5,uVar8);
        }
        puVar7 = (undefined8 *)((longlong)puVar7 + lVar6);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    (*(code *)*unaff_RBX)(unaff_RBX[1],&param_6,in_stack_000000c0);
    param_5._4_4_ = param_5._4_4_ + param_6._4_4_;
    unaff_R13D = unaff_R13D + in_stack_00000090;
    param_4 = in_stack_00000098;
    if (unaff_R13D == param_7) {
      return;
    }
  } while( true );
}





// 函数: void FUN_18042d953(void)
void FUN_18042d953(void)

{
  return;
}





// 函数: void FUN_18042d958(void)
void FUN_18042d958(void)

{
  return;
}



undefined8
FUN_18042d960(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
             undefined4 param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9,
             undefined4 param_10,undefined8 param_11)

{
  if ((-1 < param_5) && (-1 < param_4)) {
    FUN_18042d5f0(param_1,param_11,&stack0x00000060);
    FUN_18042d6c0(param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,param_10,param_7);
    return 1;
  }
  return 0;
}





// 函数: void FUN_18042da00(undefined8 param_1,uint param_2,int param_3,undefined4 param_4,undefined8 param_5
void FUN_18042da00(undefined8 param_1,uint param_2,int param_3,undefined4 param_4,undefined8 param_5
                  )

{
  FUN_18042d960(param_1,0xffffffff,0xffffffff,param_2,param_3,param_4,1,param_5,0,param_2 & 3,
                &UNK_180a27d58,0x42,0x4d,((param_2 & 3) + param_2 * 3) * param_3 + 0x36,0,0,0x36,
                0x28,param_2,param_3,1,0x18,0,0,0,0,0,0);
  return;
}





