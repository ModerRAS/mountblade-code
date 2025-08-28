#include "TaleWorlds.Native.Split.h"

// 05_networking_part078_sub002_sub002.c - 1 个函数

// 函数: void FUN_1808825ef(void)
void FUN_1808825ef(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}



undefined8 FUN_180882610(longlong param_1,ulonglong *param_2)

{
  short sVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined1 auStackX_8 [8];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar2 = (**(code **)(**(longlong **)(param_1 + 800) + 0x10))();
  uVar3 = (**(code **)(**(longlong **)(param_1 + 800) + 0x10))();
  if (lVar2 != 0) {
    FUN_180768360(uVar3);
  }
  puVar5 = (undefined4 *)*param_2;
  lVar6 = 0;
  do {
    if ((puVar5 < (undefined4 *)*param_2) ||
       ((undefined4 *)*param_2 + (longlong)(int)param_2[1] * 5 <= puVar5)) {
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(uVar3,puVar5);
      }
      return 0;
    }
    sVar1 = *(short *)(puVar5 + 4);
    if (sVar1 == 8) {
      uStack_38 = *puVar5;
      uStack_34 = puVar5[1];
      uStack_30 = puVar5[2];
      uStack_2c = puVar5[3];
      lVar4 = param_1 + 0xb00;
      if (param_1 == -0xad8) {
        lVar4 = lVar6;
      }
      if (lVar4 != 0) {
        auStackX_8[0] = 1;
        FUN_180879610(uStack_38,&uStack_38,auStackX_8);
      }
      lVar4 = (**(code **)(**(longlong **)(param_1 + 800) + 0x2f8))
                        (*(longlong **)(param_1 + 800),&uStack_38,1);
LAB_180882a0d:
      if (lVar4 != 0) {
        *(ushort *)(lVar4 + 0xe) = *(ushort *)(lVar4 + 0xe) | 0x8000;
      }
    }
    else {
      if (sVar1 == 0x14) {
        uStack_38 = *puVar5;
        uStack_34 = puVar5[1];
        uStack_30 = puVar5[2];
        uStack_2c = puVar5[3];
        if (param_1 + 0xad8 != 0) {
          auStackX_8[0] = 1;
          FUN_180879610(param_1 + 0xad8,&uStack_38,auStackX_8);
        }
        lVar4 = (**(code **)(**(longlong **)(param_1 + 800) + 0x288))
                          (*(longlong **)(param_1 + 800),&uStack_38,1);
        goto LAB_180882a0d;
      }
      if (sVar1 == 0x15) {
        uStack_38 = *puVar5;
        uStack_34 = puVar5[1];
        uStack_30 = puVar5[2];
        uStack_2c = puVar5[3];
        lVar4 = param_1 + 0xb28;
        if (param_1 == -0xad8) {
          lVar4 = lVar6;
        }
        if (lVar4 != 0) {
          auStackX_8[0] = 1;
          FUN_180879610(uStack_38,&uStack_38,auStackX_8);
        }
        lVar4 = (**(code **)(**(longlong **)(param_1 + 800) + 0x280))
                          (*(longlong **)(param_1 + 800),&uStack_38,1);
        goto LAB_180882a0d;
      }
      if (sVar1 == 0) {
        uStack_38 = *puVar5;
        uStack_34 = puVar5[1];
        uStack_30 = puVar5[2];
        uStack_2c = puVar5[3];
        lVar4 = param_1 + 0xb50;
        if (param_1 == -0xad8) {
          lVar4 = lVar6;
        }
        if (lVar4 != 0) {
          auStackX_8[0] = 1;
          FUN_180879610(uStack_38,&uStack_38,auStackX_8);
        }
        lVar4 = (**(code **)(**(longlong **)(param_1 + 800) + 0x340))
                          (*(longlong **)(param_1 + 800),&uStack_38,1);
        goto LAB_180882a0d;
      }
      if (sVar1 == 1) {
        uStack_38 = *puVar5;
        uStack_34 = puVar5[1];
        uStack_30 = puVar5[2];
        uStack_2c = puVar5[3];
        lVar4 = param_1 + 0xb78;
        if (param_1 == -0xad8) {
          lVar4 = lVar6;
        }
        if (lVar4 != 0) {
          auStackX_8[0] = 1;
          FUN_180879610(uStack_38,&uStack_38,auStackX_8);
        }
        lVar4 = (**(code **)(**(longlong **)(param_1 + 800) + 0x338))
                          (*(longlong **)(param_1 + 800),&uStack_38,1);
        goto LAB_180882a0d;
      }
      if (sVar1 == 2) {
        uStack_38 = *puVar5;
        uStack_34 = puVar5[1];
        uStack_30 = puVar5[2];
        uStack_2c = puVar5[3];
        lVar4 = param_1 + 0xba0;
        if (param_1 == -0xad8) {
          lVar4 = lVar6;
        }
        if (lVar4 != 0) {
          auStackX_8[0] = 1;
          FUN_180879610(uStack_38,&uStack_38,auStackX_8);
        }
        lVar4 = (**(code **)(**(longlong **)(param_1 + 800) + 0x328))
                          (*(longlong **)(param_1 + 800),&uStack_38,1);
        goto LAB_180882a0d;
      }
      if (sVar1 == 3) {
        uStack_38 = *puVar5;
        uStack_34 = puVar5[1];
        uStack_30 = puVar5[2];
        uStack_2c = puVar5[3];
        lVar4 = param_1 + 0xbc8;
        if (param_1 == -0xad8) {
          lVar4 = lVar6;
        }
        if (lVar4 != 0) {
          auStackX_8[0] = 1;
          FUN_180879610(uStack_38,&uStack_38,auStackX_8);
        }
        lVar4 = (**(code **)(**(longlong **)(param_1 + 800) + 0x330))
                          (*(longlong **)(param_1 + 800),&uStack_38,1);
        goto LAB_180882a0d;
      }
      if (sVar1 == 0x1e) {
        uStack_38 = *puVar5;
        uStack_34 = puVar5[1];
        uStack_30 = puVar5[2];
        uStack_2c = puVar5[3];
        lVar4 = func_0x00018086dc30(param_1 + 0xad8);
        if (lVar4 != 0) {
          auStackX_8[0] = 1;
          FUN_180879610(lVar4,&uStack_38,auStackX_8);
        }
        lVar4 = (**(code **)(**(longlong **)(param_1 + 800) + 800))
                          (*(longlong **)(param_1 + 800),&uStack_38,1);
        goto LAB_180882a0d;
      }
      if (sVar1 == 0xe) {
        uStack_38 = *puVar5;
        uStack_34 = puVar5[1];
        uStack_30 = puVar5[2];
        uStack_2c = puVar5[3];
        lVar4 = param_1 + 0xbf0;
        if (param_1 == -0xad8) {
          lVar4 = lVar6;
        }
        if (lVar4 != 0) {
          auStackX_8[0] = 1;
          FUN_180879610(uStack_38,&uStack_38,auStackX_8);
        }
        lVar4 = (**(code **)(**(longlong **)(param_1 + 800) + 0x2e8))
                          (*(longlong **)(param_1 + 800),&uStack_38,1);
        goto LAB_180882a0d;
      }
      if (sVar1 == 0x17) {
        uStack_38 = *puVar5;
        uStack_34 = puVar5[1];
        uStack_30 = puVar5[2];
        uStack_2c = puVar5[3];
        lVar4 = param_1 + 0xc18;
        if (param_1 == -0xad8) {
          lVar4 = lVar6;
        }
        if (lVar4 != 0) {
          auStackX_8[0] = 1;
          FUN_180879610(uStack_38,&uStack_38,auStackX_8);
        }
        lVar4 = (**(code **)(**(longlong **)(param_1 + 800) + 0x270))
                          (*(longlong **)(param_1 + 800),&uStack_38,1);
        goto LAB_180882a0d;
      }
      if (sVar1 == 7) {
        uStack_38 = *puVar5;
        uStack_34 = puVar5[1];
        uStack_30 = puVar5[2];
        uStack_2c = puVar5[3];
        lVar4 = func_0x00018086dc30(param_1 + 0xad8);
        if (lVar4 != 0) {
          auStackX_8[0] = 1;
          FUN_180879610(lVar4,&uStack_38,auStackX_8);
        }
        lVar4 = (**(code **)(**(longlong **)(param_1 + 800) + 0x300))
                          (*(longlong **)(param_1 + 800),&uStack_38,1);
        goto LAB_180882a0d;
      }
    }
    puVar5 = puVar5 + 5;
  } while( true );
}



undefined8 FUN_180882a50(ulonglong *param_1,longlong param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 auStackX_8 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar4 = (undefined4 *)*param_1;
  lVar5 = 0;
  do {
    if ((puVar4 < (undefined4 *)*param_1) ||
       ((undefined4 *)*param_1 + (longlong)(int)param_1[1] * 5 <= puVar4)) {
      return 0;
    }
    uVar1 = *(ushort *)(puVar4 + 4);
    if (uVar1 == 0x14) {
      uStack_28 = *puVar4;
      uStack_24 = puVar4[1];
      uStack_20 = puVar4[2];
      uStack_1c = puVar4[3];
      lVar3 = param_2 + 0x58;
      if (param_2 == -8) {
        lVar3 = lVar5;
      }
      if (lVar3 == 0) {
        return 0x44;
      }
      auStackX_8[0] = 1;
      uVar2 = FUN_180879610(uStack_28,&uStack_28,auStackX_8);
LAB_180882bf3:
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    else {
      if (uVar1 < 4) {
        uStack_28 = *puVar4;
        uStack_24 = puVar4[1];
        uStack_20 = puVar4[2];
        uStack_1c = puVar4[3];
        if (param_2 + 8 == 0) {
          return 0x44;
        }
        auStackX_8[0] = 1;
        uVar2 = FUN_180879610(param_2 + 8,&uStack_28,auStackX_8);
        goto LAB_180882bf3;
      }
      if ((ushort)(uVar1 - 0xc) < 2) {
        uStack_28 = *puVar4;
        uStack_24 = puVar4[1];
        uStack_20 = puVar4[2];
        uStack_1c = puVar4[3];
        lVar3 = param_2 + 0x30;
        if (param_2 == -8) {
          lVar3 = lVar5;
        }
        if (lVar3 == 0) {
          return 0x44;
        }
        auStackX_8[0] = 1;
        uVar2 = FUN_180879610(uStack_28,&uStack_28,auStackX_8);
        goto LAB_180882bf3;
      }
      if (uVar1 == 8) {
        uStack_28 = *puVar4;
        uStack_24 = puVar4[1];
        uStack_20 = puVar4[2];
        uStack_1c = puVar4[3];
        lVar3 = param_2 + 0x80;
        if (param_2 == -8) {
          lVar3 = lVar5;
        }
        if (lVar3 == 0) {
          return 0x44;
        }
        auStackX_8[0] = 1;
        uVar2 = FUN_180879610(uStack_28,&uStack_28,auStackX_8);
        goto LAB_180882bf3;
      }
      if (uVar1 == 0x16) {
        uStack_28 = *puVar4;
        uStack_24 = puVar4[1];
        uStack_20 = puVar4[2];
        uStack_1c = puVar4[3];
        lVar3 = param_2 + 0xa8;
        if (param_2 == -8) {
          lVar3 = lVar5;
        }
        if (lVar3 == 0) {
          return 0x44;
        }
        auStackX_8[0] = 1;
        uVar2 = FUN_180879610(uStack_28,&uStack_28,auStackX_8);
        goto LAB_180882bf3;
      }
      if (uVar1 == 0x17) {
        uStack_28 = *puVar4;
        uStack_24 = puVar4[1];
        uStack_20 = puVar4[2];
        uStack_1c = puVar4[3];
        lVar3 = param_2 + 0xd0;
        if (param_2 == -8) {
          lVar3 = lVar5;
        }
        if (lVar3 == 0) {
          return 0x44;
        }
        auStackX_8[0] = 1;
        uVar2 = FUN_180879610(uStack_28,&uStack_28,auStackX_8);
        goto LAB_180882bf3;
      }
    }
    puVar4 = puVar4 + 5;
  } while( true );
}



undefined8 FUN_180882c20(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uStack_18;
  longlong lStack_10;
  
  if (param_2 == 0) {
    return 0x1c;
  }
  if (*(longlong *)(param_2 + 0x2e8) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_2 + 0x2e8) + 0x38);
    *puVar1 = *puVar1 | 1;
  }
  uStack_18 = 1;
  lStack_10 = param_2;
  uVar2 = FUN_1808e03a0(*(undefined8 *)(param_1 + 0xac8),&uStack_18,0);
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180882c70(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar5 = (undefined8 *)0x0;
  if (param_2 != 0) {
    if (param_2 * 0x6c - 1U < 0x3fffffff) {
      puVar5 = (undefined8 *)
               FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x6c,&UNK_180957f70,
                             0xf4,0,0,1);
      if (puVar5 != (undefined8 *)0x0) {
        iVar3 = (int)param_1[1];
        lVar6 = (longlong)iVar3;
        if ((iVar3 != 0) && (0 < iVar3)) {
          lVar8 = *param_1 - (longlong)puVar5;
          puVar7 = puVar5;
          do {
            uVar4 = ((undefined8 *)(lVar8 + (longlong)puVar7))[1];
            puVar1 = (undefined8 *)((longlong)puVar7 + 0x6c);
            *puVar7 = *(undefined8 *)(lVar8 + (longlong)puVar7);
            puVar7[1] = uVar4;
            puVar2 = (undefined8 *)(lVar8 + -0x5c + (longlong)puVar1);
            uVar4 = puVar2[1];
            puVar7[2] = *puVar2;
            puVar7[3] = uVar4;
            puVar2 = (undefined8 *)(lVar8 + -0x4c + (longlong)puVar1);
            uVar4 = puVar2[1];
            puVar7[4] = *puVar2;
            puVar7[5] = uVar4;
            puVar2 = (undefined8 *)(lVar8 + -0x3c + (longlong)puVar1);
            uVar4 = puVar2[1];
            puVar7[6] = *puVar2;
            puVar7[7] = uVar4;
            puVar2 = (undefined8 *)(lVar8 + -0x2c + (longlong)puVar1);
            uVar4 = puVar2[1];
            puVar7[8] = *puVar2;
            puVar7[9] = uVar4;
            puVar2 = (undefined8 *)(lVar8 + -0x1c + (longlong)puVar1);
            uVar4 = puVar2[1];
            puVar7[10] = *puVar2;
            puVar7[0xb] = uVar4;
            puVar7[0xc] = *(undefined8 *)(lVar8 + -0xc + (longlong)puVar1);
            *(undefined4 *)(puVar7 + 0xd) = *(undefined4 *)(lVar8 + -4 + (longlong)puVar1);
            lVar6 = lVar6 + -1;
            puVar7 = puVar1;
          } while (lVar6 != 0);
        }
        goto LAB_180882d69;
      }
    }
    return 0x26;
  }
LAB_180882d69:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = (longlong)puVar5;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180882c94(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *unaff_RBX;
  int unaff_ESI;
  longlong lVar8;
  
  puVar5 = (undefined8 *)0x0;
  if (unaff_ESI == 0) {
LAB_180882d69:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&UNK_180957f70,0x100,1);
    }
    *unaff_RBX = (longlong)puVar5;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_ESI;
    return 0;
  }
  if (unaff_ESI * 0x6c - 1U < 0x3fffffff) {
    puVar5 = (undefined8 *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),unaff_ESI * 0x6c,&UNK_180957f70,
                           0xf4,0);
    if (puVar5 != (undefined8 *)0x0) {
      iVar3 = (int)unaff_RBX[1];
      lVar6 = (longlong)iVar3;
      if ((iVar3 != 0) && (0 < iVar3)) {
        lVar8 = *unaff_RBX - (longlong)puVar5;
        puVar7 = puVar5;
        do {
          uVar4 = ((undefined8 *)(lVar8 + (longlong)puVar7))[1];
          puVar1 = (undefined8 *)((longlong)puVar7 + 0x6c);
          *puVar7 = *(undefined8 *)(lVar8 + (longlong)puVar7);
          puVar7[1] = uVar4;
          puVar2 = (undefined8 *)(lVar8 + -0x5c + (longlong)puVar1);
          uVar4 = puVar2[1];
          puVar7[2] = *puVar2;
          puVar7[3] = uVar4;
          puVar2 = (undefined8 *)(lVar8 + -0x4c + (longlong)puVar1);
          uVar4 = puVar2[1];
          puVar7[4] = *puVar2;
          puVar7[5] = uVar4;
          puVar2 = (undefined8 *)(lVar8 + -0x3c + (longlong)puVar1);
          uVar4 = puVar2[1];
          puVar7[6] = *puVar2;
          puVar7[7] = uVar4;
          puVar2 = (undefined8 *)(lVar8 + -0x2c + (longlong)puVar1);
          uVar4 = puVar2[1];
          puVar7[8] = *puVar2;
          puVar7[9] = uVar4;
          puVar2 = (undefined8 *)(lVar8 + -0x1c + (longlong)puVar1);
          uVar4 = puVar2[1];
          puVar7[10] = *puVar2;
          puVar7[0xb] = uVar4;
          puVar7[0xc] = *(undefined8 *)(lVar8 + -0xc + (longlong)puVar1);
          *(undefined4 *)(puVar7 + 0xd) = *(undefined4 *)(lVar8 + -4 + (longlong)puVar1);
          lVar6 = lVar6 + -1;
          puVar7 = puVar1;
        } while (lVar6 != 0);
      }
      goto LAB_180882d69;
    }
  }
  return 0x26;
}



undefined8 FUN_180882db4(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180882dd0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar5 = (undefined8 *)0x0;
  if (param_2 != 0) {
    if (param_2 * 0x28 - 1U < 0x3fffffff) {
      puVar5 = (undefined8 *)
               FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x28,&UNK_180957f70,
                             0xf4,0,0,1);
      if (puVar5 != (undefined8 *)0x0) {
        iVar3 = (int)param_1[1];
        lVar6 = (longlong)iVar3;
        if ((iVar3 != 0) && (0 < iVar3)) {
          lVar8 = *param_1 - (longlong)puVar5;
          puVar7 = puVar5;
          do {
            uVar4 = ((undefined8 *)(lVar8 + (longlong)puVar7))[1];
            puVar1 = puVar7 + 5;
            *puVar7 = *(undefined8 *)(lVar8 + (longlong)puVar7);
            puVar7[1] = uVar4;
            puVar2 = (undefined8 *)(lVar8 + -0x18 + (longlong)puVar1);
            uVar4 = puVar2[1];
            puVar7[2] = *puVar2;
            puVar7[3] = uVar4;
            puVar7[4] = *(undefined8 *)(lVar8 + -8 + (longlong)puVar1);
            lVar6 = lVar6 + -1;
            puVar7 = puVar1;
          } while (lVar6 != 0);
        }
        goto LAB_180882e99;
      }
    }
    return 0x26;
  }
LAB_180882e99:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = (longlong)puVar5;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180882df4(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *unaff_RBX;
  int unaff_EDI;
  longlong lVar8;
  
  puVar5 = (undefined8 *)0x0;
  if (unaff_EDI == 0) {
LAB_180882e99:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&UNK_180957f70,0x100,1);
    }
    *unaff_RBX = (longlong)puVar5;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x28 - 1U < 0x3fffffff) {
    puVar5 = (undefined8 *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x28,&UNK_180957f70,
                           0xf4,0);
    if (puVar5 != (undefined8 *)0x0) {
      iVar3 = (int)unaff_RBX[1];
      lVar6 = (longlong)iVar3;
      if ((iVar3 != 0) && (0 < iVar3)) {
        lVar8 = *unaff_RBX - (longlong)puVar5;
        puVar7 = puVar5;
        do {
          uVar4 = ((undefined8 *)(lVar8 + (longlong)puVar7))[1];
          puVar1 = puVar7 + 5;
          *puVar7 = *(undefined8 *)(lVar8 + (longlong)puVar7);
          puVar7[1] = uVar4;
          puVar2 = (undefined8 *)(lVar8 + -0x18 + (longlong)puVar1);
          uVar4 = puVar2[1];
          puVar7[2] = *puVar2;
          puVar7[3] = uVar4;
          puVar7[4] = *(undefined8 *)(lVar8 + -8 + (longlong)puVar1);
          lVar6 = lVar6 + -1;
          puVar7 = puVar1;
        } while (lVar6 != 0);
      }
      goto LAB_180882e99;
    }
  }
  return 0x26;
}



undefined8 FUN_180882ee4(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180882f00(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar3 = (undefined8 *)0x0;
  if (param_2 != 0) {
    if (param_2 * 8 - 1U < 0x3fffffff) {
      puVar3 = (undefined8 *)
               FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 8,&UNK_180957f70,0xf4
                             ,0,0,1);
      if (puVar3 != (undefined8 *)0x0) {
        iVar1 = (int)param_1[1];
        lVar4 = (longlong)iVar1;
        if ((iVar1 != 0) && (lVar2 = *param_1, 0 < iVar1)) {
          puVar5 = puVar3;
          do {
            *puVar5 = *(undefined8 *)((lVar2 - (longlong)puVar3) + (longlong)puVar5);
            puVar5 = puVar5 + 1;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        goto LAB_180882fa1;
      }
    }
    return 0x26;
  }
LAB_180882fa1:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = (longlong)puVar3;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180882f24(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *unaff_RBX;
  int unaff_EDI;
  
  puVar3 = (undefined8 *)0x0;
  if (unaff_EDI == 0) {
LAB_180882fa1:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&UNK_180957f70,0x100,1);
    }
    *unaff_RBX = (longlong)puVar3;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 8 - 1U < 0x3fffffff) {
    puVar3 = (undefined8 *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 8,&UNK_180957f70,0xf4,0
                          );
    if (puVar3 != (undefined8 *)0x0) {
      iVar1 = (int)unaff_RBX[1];
      lVar4 = (longlong)iVar1;
      if ((iVar1 != 0) && (lVar2 = *unaff_RBX, 0 < iVar1)) {
        puVar5 = puVar3;
        do {
          *puVar5 = *(undefined8 *)((lVar2 - (longlong)puVar3) + (longlong)puVar5);
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      goto LAB_180882fa1;
    }
  }
  return 0x26;
}



undefined8 FUN_180882fec(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180883010(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    if (param_2 * 0x278 - 1U < 0x3fffffff) {
      lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x278,&UNK_180957f70,
                            0xf4,0,0,1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
                    // WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(longlong)(int)param_1[1] * 0x278);
        }
        goto LAB_1808830a3;
      }
    }
    return 0x26;
  }
LAB_1808830a3:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180883034(void)

{
  longlong lVar1;
  longlong *unaff_RBX;
  int unaff_EDI;
  
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_1808830a3:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&UNK_180957f70,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (unaff_EDI * 0x278 - 1U < 0x3fffffff) {
    lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),unaff_EDI * 0x278,&UNK_180957f70,
                          0xf4,0);
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(longlong)(int)unaff_RBX[1] * 0x278);
      }
      goto LAB_1808830a3;
    }
  }
  return 0x26;
}



undefined8 FUN_1808830ee(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180883110(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar9 = (undefined8 *)0x0;
  if (param_2 != 0) {
    if (param_2 * 0x118 - 1U < 0x3fffffff) {
      puVar9 = (undefined8 *)
               FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x118,&UNK_180957f70,
                             0xf4,0,0,1);
      if (puVar9 != (undefined8 *)0x0) {
        iVar1 = (int)param_1[1];
        lVar11 = (longlong)iVar1;
        if ((iVar1 != 0) && (lVar2 = *param_1, 0 < iVar1)) {
          puVar14 = puVar9;
          do {
            lVar12 = 2;
            puVar7 = (undefined8 *)((lVar2 - (longlong)puVar9) + (longlong)puVar14);
            puVar8 = puVar14;
            do {
              puVar13 = puVar8;
              puVar10 = puVar7;
              uVar6 = puVar10[1];
              *puVar13 = *puVar10;
              puVar13[1] = uVar6;
              uVar6 = puVar10[3];
              puVar13[2] = puVar10[2];
              puVar13[3] = uVar6;
              uVar6 = puVar10[5];
              puVar13[4] = puVar10[4];
              puVar13[5] = uVar6;
              uVar6 = puVar10[7];
              puVar13[6] = puVar10[6];
              puVar13[7] = uVar6;
              uVar6 = puVar10[9];
              puVar13[8] = puVar10[8];
              puVar13[9] = uVar6;
              uVar6 = puVar10[0xb];
              puVar13[10] = puVar10[10];
              puVar13[0xb] = uVar6;
              uVar6 = puVar10[0xd];
              puVar13[0xc] = puVar10[0xc];
              puVar13[0xd] = uVar6;
              uVar6 = puVar10[0xf];
              puVar13[0xe] = puVar10[0xe];
              puVar13[0xf] = uVar6;
              lVar12 = lVar12 + -1;
              puVar7 = puVar10 + 0x10;
              puVar8 = puVar13 + 0x10;
            } while (lVar12 != 0);
            uVar3 = *(undefined4 *)((longlong)puVar10 + 0x84);
            uVar4 = *(undefined4 *)(puVar10 + 0x11);
            uVar5 = *(undefined4 *)((longlong)puVar10 + 0x8c);
            puVar14 = puVar14 + 0x23;
            *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar10 + 0x10);
            *(undefined4 *)((longlong)puVar13 + 0x84) = uVar3;
            *(undefined4 *)(puVar13 + 0x11) = uVar4;
            *(undefined4 *)((longlong)puVar13 + 0x8c) = uVar5;
            puVar13[0x12] = puVar10[0x12];
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        goto LAB_18088322e;
      }
    }
    return 0x26;
  }
LAB_18088322e:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = (longlong)puVar9;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180883134(void)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *unaff_RBX;
  int unaff_ESI;
  undefined8 *puVar14;
  
  puVar9 = (undefined8 *)0x0;
  if (unaff_ESI == 0) {
LAB_18088322e:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&UNK_180957f70,0x100,1);
    }
    *unaff_RBX = (longlong)puVar9;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_ESI;
    return 0;
  }
  if (unaff_ESI * 0x118 - 1U < 0x3fffffff) {
    puVar9 = (undefined8 *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),unaff_ESI * 0x118,&UNK_180957f70,
                           0xf4,0);
    if (puVar9 != (undefined8 *)0x0) {
      iVar1 = (int)unaff_RBX[1];
      lVar11 = (longlong)iVar1;
      if ((iVar1 != 0) && (lVar2 = *unaff_RBX, 0 < iVar1)) {
        puVar14 = puVar9;
        do {
          lVar12 = 2;
          puVar7 = (undefined8 *)((lVar2 - (longlong)puVar9) + (longlong)puVar14);
          puVar8 = puVar14;
          do {
            puVar13 = puVar8;
            puVar10 = puVar7;
            uVar6 = puVar10[1];
            *puVar13 = *puVar10;
            puVar13[1] = uVar6;
            uVar6 = puVar10[3];
            puVar13[2] = puVar10[2];
            puVar13[3] = uVar6;
            uVar6 = puVar10[5];
            puVar13[4] = puVar10[4];
            puVar13[5] = uVar6;
            uVar6 = puVar10[7];
            puVar13[6] = puVar10[6];
            puVar13[7] = uVar6;
            uVar6 = puVar10[9];
            puVar13[8] = puVar10[8];
            puVar13[9] = uVar6;
            uVar6 = puVar10[0xb];
            puVar13[10] = puVar10[10];
            puVar13[0xb] = uVar6;
            uVar6 = puVar10[0xd];
            puVar13[0xc] = puVar10[0xc];
            puVar13[0xd] = uVar6;
            uVar6 = puVar10[0xf];
            puVar13[0xe] = puVar10[0xe];
            puVar13[0xf] = uVar6;
            lVar12 = lVar12 + -1;
            puVar7 = puVar10 + 0x10;
            puVar8 = puVar13 + 0x10;
          } while (lVar12 != 0);
          uVar3 = *(undefined4 *)((longlong)puVar10 + 0x84);
          uVar4 = *(undefined4 *)(puVar10 + 0x11);
          uVar5 = *(undefined4 *)((longlong)puVar10 + 0x8c);
          puVar14 = puVar14 + 0x23;
          *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar10 + 0x10);
          *(undefined4 *)((longlong)puVar13 + 0x84) = uVar3;
          *(undefined4 *)(puVar13 + 0x11) = uVar4;
          *(undefined4 *)((longlong)puVar13 + 0x8c) = uVar5;
          puVar13[0x12] = puVar10[0x12];
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      goto LAB_18088322e;
    }
  }
  return 0x26;
}



undefined8 FUN_180883279(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180883290(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar9 = (undefined8 *)0x0;
  if (param_2 != 0) {
    if (param_2 * 0x128 - 1U < 0x3fffffff) {
      puVar9 = (undefined8 *)
               FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x128,&UNK_180957f70,
                             0xf4,0,0,1);
      if (puVar9 != (undefined8 *)0x0) {
        iVar1 = (int)param_1[1];
        lVar11 = (longlong)iVar1;
        if ((iVar1 != 0) && (lVar2 = *param_1, 0 < iVar1)) {
          puVar14 = puVar9;
          do {
            lVar12 = 2;
            puVar7 = (undefined8 *)((lVar2 - (longlong)puVar9) + (longlong)puVar14);
            puVar8 = puVar14;
            do {
              puVar13 = puVar8;
              puVar10 = puVar7;
              uVar6 = puVar10[1];
              *puVar13 = *puVar10;
              puVar13[1] = uVar6;
              uVar6 = puVar10[3];
              puVar13[2] = puVar10[2];
              puVar13[3] = uVar6;
              uVar6 = puVar10[5];
              puVar13[4] = puVar10[4];
              puVar13[5] = uVar6;
              uVar6 = puVar10[7];
              puVar13[6] = puVar10[6];
              puVar13[7] = uVar6;
              uVar6 = puVar10[9];
              puVar13[8] = puVar10[8];
              puVar13[9] = uVar6;
              uVar6 = puVar10[0xb];
              puVar13[10] = puVar10[10];
              puVar13[0xb] = uVar6;
              uVar6 = puVar10[0xd];
              puVar13[0xc] = puVar10[0xc];
              puVar13[0xd] = uVar6;
              uVar6 = puVar10[0xf];
              puVar13[0xe] = puVar10[0xe];
              puVar13[0xf] = uVar6;
              lVar12 = lVar12 + -1;
              puVar7 = puVar10 + 0x10;
              puVar8 = puVar13 + 0x10;
            } while (lVar12 != 0);
            uVar3 = *(undefined4 *)((longlong)puVar10 + 0x84);
            uVar4 = *(undefined4 *)(puVar10 + 0x11);
            uVar5 = *(undefined4 *)((longlong)puVar10 + 0x8c);
            puVar14 = puVar14 + 0x25;
            *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar10 + 0x10);
            *(undefined4 *)((longlong)puVar13 + 0x84) = uVar3;
            *(undefined4 *)(puVar13 + 0x11) = uVar4;
            *(undefined4 *)((longlong)puVar13 + 0x8c) = uVar5;
            uVar6 = puVar10[0x13];
            puVar13[0x12] = puVar10[0x12];
            puVar13[0x13] = uVar6;
            puVar13[0x14] = puVar10[0x14];
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        goto LAB_1808833ba;
      }
    }
    return 0x26;
  }
LAB_1808833ba:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = (longlong)puVar9;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808832b4(void)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *unaff_RBX;
  int unaff_ESI;
  undefined8 *puVar14;
  
  puVar9 = (undefined8 *)0x0;
  if (unaff_ESI == 0) {
LAB_1808833ba:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&UNK_180957f70,0x100,1);
    }
    *unaff_RBX = (longlong)puVar9;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_ESI;
    return 0;
  }
  if (unaff_ESI * 0x128 - 1U < 0x3fffffff) {
    puVar9 = (undefined8 *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),unaff_ESI * 0x128,&UNK_180957f70,
                           0xf4,0);
    if (puVar9 != (undefined8 *)0x0) {
      iVar1 = (int)unaff_RBX[1];
      lVar11 = (longlong)iVar1;
      if ((iVar1 != 0) && (lVar2 = *unaff_RBX, 0 < iVar1)) {
        puVar14 = puVar9;
        do {
          lVar12 = 2;
          puVar7 = (undefined8 *)((lVar2 - (longlong)puVar9) + (longlong)puVar14);
          puVar8 = puVar14;
          do {
            puVar13 = puVar8;
            puVar10 = puVar7;
            uVar6 = puVar10[1];
            *puVar13 = *puVar10;
            puVar13[1] = uVar6;
            uVar6 = puVar10[3];
            puVar13[2] = puVar10[2];
            puVar13[3] = uVar6;
            uVar6 = puVar10[5];
            puVar13[4] = puVar10[4];
            puVar13[5] = uVar6;
            uVar6 = puVar10[7];
            puVar13[6] = puVar10[6];
            puVar13[7] = uVar6;
            uVar6 = puVar10[9];
            puVar13[8] = puVar10[8];
            puVar13[9] = uVar6;
            uVar6 = puVar10[0xb];
            puVar13[10] = puVar10[10];
            puVar13[0xb] = uVar6;
            uVar6 = puVar10[0xd];
            puVar13[0xc] = puVar10[0xc];
            puVar13[0xd] = uVar6;
            uVar6 = puVar10[0xf];
            puVar13[0xe] = puVar10[0xe];
            puVar13[0xf] = uVar6;
            lVar12 = lVar12 + -1;
            puVar7 = puVar10 + 0x10;
            puVar8 = puVar13 + 0x10;
          } while (lVar12 != 0);
          uVar3 = *(undefined4 *)((longlong)puVar10 + 0x84);
          uVar4 = *(undefined4 *)(puVar10 + 0x11);
          uVar5 = *(undefined4 *)((longlong)puVar10 + 0x8c);
          puVar14 = puVar14 + 0x25;
          *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar10 + 0x10);
          *(undefined4 *)((longlong)puVar13 + 0x84) = uVar3;
          *(undefined4 *)(puVar13 + 0x11) = uVar4;
          *(undefined4 *)((longlong)puVar13 + 0x8c) = uVar5;
          uVar6 = puVar10[0x13];
          puVar13[0x12] = puVar10[0x12];
          puVar13[0x13] = uVar6;
          puVar13[0x14] = puVar10[0x14];
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      goto LAB_1808833ba;
    }
  }
  return 0x26;
}



undefined8 FUN_180883405(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180883420(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    if (param_2 * 0x24 - 1U < 0x3fffffff) {
      lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x24,&UNK_180957f70,
                            0xf4,0,0,1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
                    // WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(longlong)(int)param_1[1] * 0x24);
        }
        goto LAB_1808834b4;
      }
    }
    return 0x26;
  }
LAB_1808834b4:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180883444(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong *unaff_RBX;
  int unaff_EDI;
  
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_1808834b4:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&UNK_180957f70,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x24 - 1U < 0x3fffffff) {
    lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x24,&UNK_180957f70,0xf4
                          ,0);
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(longlong)(int)unaff_RBX[1] * 0x24);
      }
      goto LAB_1808834b4;
    }
  }
  return 0x26;
}



undefined8 FUN_1808834ff(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180883520(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    if (param_2 * 0x30 - 1U < 0x3fffffff) {
      lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x30,&UNK_180957f70,
                            0xf4,0,0,1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
                    // WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(longlong)(int)param_1[1] * 0x30);
        }
        goto LAB_1808835b4;
      }
    }
    return 0x26;
  }
LAB_1808835b4:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180883544(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong *unaff_RBX;
  int unaff_EDI;
  
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_1808835b4:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&UNK_180957f70,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x30 - 1U < 0x3fffffff) {
    lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x30,&UNK_180957f70,0xf4
                          ,0);
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(longlong)(int)unaff_RBX[1] * 0x30);
      }
      goto LAB_1808835b4;
    }
  }
  return 0x26;
}



undefined8 FUN_1808835ff(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180883620(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar7 = (undefined4 *)0x0;
  if (param_2 != 0) {
    if (param_2 * 0x1c - 1U < 0x3fffffff) {
      puVar7 = (undefined4 *)
               FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x1c,&UNK_180957f70,
                             0xf4,0,0,1);
      if (puVar7 != (undefined4 *)0x0) {
        iVar3 = (int)param_1[1];
        lVar8 = (longlong)iVar3;
        if ((iVar3 != 0) && (0 < iVar3)) {
          lVar10 = *param_1 - (longlong)puVar7;
          puVar9 = puVar7;
          do {
            puVar2 = (undefined4 *)(lVar10 + (longlong)puVar9);
            uVar4 = puVar2[1];
            uVar5 = puVar2[2];
            uVar6 = puVar2[3];
            puVar1 = puVar9 + 7;
            *puVar9 = *puVar2;
            puVar9[1] = uVar4;
            puVar9[2] = uVar5;
            puVar9[3] = uVar6;
            *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(lVar10 + -0xc + (longlong)puVar1);
            puVar9[6] = *(undefined4 *)(lVar10 + -4 + (longlong)puVar1);
            lVar8 = lVar8 + -1;
            puVar9 = puVar1;
          } while (lVar8 != 0);
        }
        goto LAB_1808836e7;
      }
    }
    return 0x26;
  }
LAB_1808836e7:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = (longlong)puVar7;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180883644(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong *unaff_RBX;
  int unaff_EDI;
  longlong lVar10;
  
  puVar7 = (undefined4 *)0x0;
  if (unaff_EDI == 0) {
LAB_1808836e7:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&UNK_180957f70,0x100,1);
    }
    *unaff_RBX = (longlong)puVar7;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (unaff_EDI * 0x1c - 1U < 0x3fffffff) {
    puVar7 = (undefined4 *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),unaff_EDI * 0x1c,&UNK_180957f70,
                           0xf4,0);
    if (puVar7 != (undefined4 *)0x0) {
      iVar3 = (int)unaff_RBX[1];
      lVar8 = (longlong)iVar3;
      if ((iVar3 != 0) && (0 < iVar3)) {
        lVar10 = *unaff_RBX - (longlong)puVar7;
        puVar9 = puVar7;
        do {
          puVar2 = (undefined4 *)(lVar10 + (longlong)puVar9);
          uVar4 = puVar2[1];
          uVar5 = puVar2[2];
          uVar6 = puVar2[3];
          puVar1 = puVar9 + 7;
          *puVar9 = *puVar2;
          puVar9[1] = uVar4;
          puVar9[2] = uVar5;
          puVar9[3] = uVar6;
          *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(lVar10 + -0xc + (longlong)puVar1);
          puVar9[6] = *(undefined4 *)(lVar10 + -4 + (longlong)puVar1);
          lVar8 = lVar8 + -1;
          puVar9 = puVar1;
        } while (lVar8 != 0);
      }
      goto LAB_1808836e7;
    }
  }
  return 0x26;
}



undefined8 FUN_180883732(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180883750(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar12 = 0;
  lVar7 = lVar12;
  if (param_2 == 0) {
LAB_1808838fe:
    if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
    }
    *param_1 = lVar7;
    uVar9 = 0;
    *(int *)((longlong)param_1 + 0xc) = param_2;
  }
  else {
    if (param_2 * 0x1c - 1U < 0x3fffffff) {
      lVar7 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x1c,&UNK_180957f70,
                            0xf4,0,0,1);
      if (lVar7 != 0) {
        lVar8 = (longlong)(int)param_1[1];
        if ((int)param_1[1] != 0) {
          lVar11 = *param_1;
          if (3 < lVar8) {
            lVar13 = lVar11 - lVar7;
            lVar14 = (lVar8 - 4U >> 2) + 1;
            lVar12 = lVar14 * 4;
            puVar10 = (undefined4 *)(lVar7 + 0x2c);
            do {
              puVar2 = (undefined8 *)((longlong)puVar10 + lVar13 + -0x2c);
              uVar9 = puVar2[1];
              puVar1 = puVar10 + 0x1c;
              *(undefined8 *)(puVar10 + -0xb) = *puVar2;
              *(undefined8 *)(puVar10 + -9) = uVar9;
              puVar10[-7] = *(undefined4 *)((longlong)puVar10 + lVar13 + -0x1c);
              puVar10[-6] = *(undefined4 *)((longlong)puVar10 + lVar13 + -0x18);
              *(undefined1 *)(puVar10 + -5) = *(undefined1 *)((longlong)puVar10 + lVar13 + -0x14);
              puVar2 = (undefined8 *)((longlong)puVar10 + lVar13 + -0x10);
              uVar9 = puVar2[1];
              *(undefined8 *)(puVar10 + -4) = *puVar2;
              *(undefined8 *)(puVar10 + -2) = uVar9;
              *puVar10 = *(undefined4 *)(lVar13 + -0x70 + (longlong)puVar1);
              puVar10[1] = *(undefined4 *)(lVar13 + -0x6c + (longlong)puVar1);
              *(undefined1 *)(puVar10 + 2) = *(undefined1 *)(lVar13 + -0x68 + (longlong)puVar1);
              puVar2 = (undefined8 *)((longlong)puVar10 + lVar13 + 0xc);
              uVar9 = puVar2[1];
              *(undefined8 *)(puVar10 + 3) = *puVar2;
              *(undefined8 *)(puVar10 + 5) = uVar9;
              puVar10[7] = *(undefined4 *)(lVar13 + -0x54 + (longlong)puVar1);
              puVar10[8] = *(undefined4 *)((longlong)puVar10 + lVar13 + 0x20);
              *(undefined1 *)(puVar10 + 9) = *(undefined1 *)((longlong)puVar10 + lVar13 + 0x24);
              puVar3 = (undefined4 *)((longlong)puVar10 + lVar13 + 0x28);
              uVar4 = puVar3[1];
              uVar5 = puVar3[2];
              uVar6 = puVar3[3];
              puVar10[10] = *puVar3;
              puVar10[0xb] = uVar4;
              puVar10[0xc] = uVar5;
              puVar10[0xd] = uVar6;
              puVar10[0xe] = *(undefined4 *)((longlong)puVar10 + lVar13 + 0x38);
              puVar10[0xf] = *(undefined4 *)((longlong)puVar10 + lVar13 + 0x3c);
              *(undefined1 *)(puVar10 + 0x10) = *(undefined1 *)((longlong)puVar10 + lVar13 + 0x40);
              lVar14 = lVar14 + -1;
              puVar10 = puVar1;
            } while (lVar14 != 0);
          }
          if (lVar12 < lVar8) {
            lVar11 = lVar11 - lVar7;
            lVar8 = lVar8 - lVar12;
            puVar10 = (undefined4 *)(lVar7 + 0x10 + lVar12 * 0x1c);
            do {
              puVar3 = (undefined4 *)((longlong)puVar10 + lVar11 + -0x10);
              uVar4 = puVar3[1];
              uVar5 = puVar3[2];
              uVar6 = puVar3[3];
              puVar1 = puVar10 + 7;
              puVar10[-4] = *puVar3;
              puVar10[-3] = uVar4;
              puVar10[-2] = uVar5;
              puVar10[-1] = uVar6;
              *puVar10 = *(undefined4 *)(lVar11 + -0x1c + (longlong)puVar1);
              puVar10[1] = *(undefined4 *)(lVar11 + -0x18 + (longlong)puVar1);
              *(undefined1 *)(puVar10 + 2) = *(undefined1 *)(lVar11 + -0x14 + (longlong)puVar1);
              lVar8 = lVar8 + -1;
              puVar10 = puVar1;
            } while (lVar8 != 0);
          }
        }
        goto LAB_1808838fe;
      }
    }
    uVar9 = 0x26;
  }
  return uVar9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180883774(void)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong *unaff_RBX;
  int unaff_EBP;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar12 = 0;
  lVar7 = lVar12;
  if (unaff_EBP == 0) {
LAB_1808838fe:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&UNK_180957f70,0x100,1);
    }
    *unaff_RBX = lVar7;
    uVar9 = 0;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EBP;
  }
  else {
    if (unaff_EBP * 0x1c - 1U < 0x3fffffff) {
      lVar7 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),unaff_EBP * 0x1c,&UNK_180957f70,
                            0xf4,0);
      if (lVar7 != 0) {
        lVar8 = (longlong)(int)unaff_RBX[1];
        if ((int)unaff_RBX[1] != 0) {
          lVar11 = *unaff_RBX;
          if (3 < lVar8) {
            lVar13 = lVar11 - lVar7;
            lVar14 = (lVar8 - 4U >> 2) + 1;
            lVar12 = lVar14 * 4;
            puVar10 = (undefined4 *)(lVar7 + 0x2c);
            do {
              puVar2 = (undefined8 *)((longlong)puVar10 + lVar13 + -0x2c);
              uVar9 = puVar2[1];
              puVar1 = puVar10 + 0x1c;
              *(undefined8 *)(puVar10 + -0xb) = *puVar2;
              *(undefined8 *)(puVar10 + -9) = uVar9;
              puVar10[-7] = *(undefined4 *)((longlong)puVar10 + lVar13 + -0x1c);
              puVar10[-6] = *(undefined4 *)((longlong)puVar10 + lVar13 + -0x18);
              *(undefined1 *)(puVar10 + -5) = *(undefined1 *)((longlong)puVar10 + lVar13 + -0x14);
              puVar2 = (undefined8 *)((longlong)puVar10 + lVar13 + -0x10);
              uVar9 = puVar2[1];
              *(undefined8 *)(puVar10 + -4) = *puVar2;
              *(undefined8 *)(puVar10 + -2) = uVar9;
              *puVar10 = *(undefined4 *)(lVar13 + -0x70 + (longlong)puVar1);
              puVar10[1] = *(undefined4 *)(lVar13 + -0x6c + (longlong)puVar1);
              *(undefined1 *)(puVar10 + 2) = *(undefined1 *)(lVar13 + -0x68 + (longlong)puVar1);
              puVar2 = (undefined8 *)((longlong)puVar10 + lVar13 + 0xc);
              uVar9 = puVar2[1];
              *(undefined8 *)(puVar10 + 3) = *puVar2;
              *(undefined8 *)(puVar10 + 5) = uVar9;
              puVar10[7] = *(undefined4 *)(lVar13 + -0x54 + (longlong)puVar1);
              puVar10[8] = *(undefined4 *)((longlong)puVar10 + lVar13 + 0x20);
              *(undefined1 *)(puVar10 + 9) = *(undefined1 *)((longlong)puVar10 + lVar13 + 0x24);
              puVar3 = (undefined4 *)((longlong)puVar10 + lVar13 + 0x28);
              uVar4 = puVar3[1];
              uVar5 = puVar3[2];
              uVar6 = puVar3[3];
              puVar10[10] = *puVar3;
              puVar10[0xb] = uVar4;
              puVar10[0xc] = uVar5;
              puVar10[0xd] = uVar6;
              puVar10[0xe] = *(undefined4 *)((longlong)puVar10 + lVar13 + 0x38);
              puVar10[0xf] = *(undefined4 *)((longlong)puVar10 + lVar13 + 0x3c);
              *(undefined1 *)(puVar10 + 0x10) = *(undefined1 *)((longlong)puVar10 + lVar13 + 0x40);
              lVar14 = lVar14 + -1;
              puVar10 = puVar1;
            } while (lVar14 != 0);
          }
          if (lVar12 < lVar8) {
            lVar11 = lVar11 - lVar7;
            lVar8 = lVar8 - lVar12;
            puVar10 = (undefined4 *)(lVar7 + 0x10 + lVar12 * 0x1c);
            do {
              puVar3 = (undefined4 *)((longlong)puVar10 + lVar11 + -0x10);
              uVar4 = puVar3[1];
              uVar5 = puVar3[2];
              uVar6 = puVar3[3];
              puVar1 = puVar10 + 7;
              puVar10[-4] = *puVar3;
              puVar10[-3] = uVar4;
              puVar10[-2] = uVar5;
              puVar10[-1] = uVar6;
              *puVar10 = *(undefined4 *)(lVar11 + -0x1c + (longlong)puVar1);
              puVar10[1] = *(undefined4 *)(lVar11 + -0x18 + (longlong)puVar1);
              *(undefined1 *)(puVar10 + 2) = *(undefined1 *)(lVar11 + -0x14 + (longlong)puVar1);
              lVar8 = lVar8 + -1;
              puVar10 = puVar1;
            } while (lVar8 != 0);
          }
        }
        goto LAB_1808838fe;
      }
    }
    uVar9 = 0x26;
  }
  return uVar9;
}



undefined8 FUN_18088394e(void)

{
  return 0x26;
}



undefined8 FUN_180883960(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong alStackX_8 [4];
  undefined8 uStack_68;
  longlong lStack_60;
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  
  auStack_58[0] = 0;
  alStackX_8[0] = 0;
  uStack_50 = param_2;
  uVar2 = (**(code **)**(undefined8 **)(param_1 + 0xaa0))
                    (*(undefined8 **)(param_1 + 0xaa0),auStack_58,0x1000,alStackX_8);
  if ((int)uVar2 == 0) {
    if (alStackX_8[0] == 0) {
      return 0x1c;
    }
    if (*(longlong *)(alStackX_8[0] + 0x2e8) != 0) {
      puVar1 = (uint *)(*(longlong *)(alStackX_8[0] + 0x2e8) + 0x38);
      *puVar1 = *puVar1 | 1;
    }
    lStack_60 = alStackX_8[0];
    uStack_68 = 1;
    uVar2 = FUN_1808e03a0(*(undefined8 *)(param_1 + 0xac8),&uStack_68,0);
  }
  return uVar2;
}



uint FUN_180883a00(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_18073b3e0(*(undefined8 *)(param_1 + 0x78));
  uVar2 = 0;
  if ((uVar1 & 0xfffffff7) != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





