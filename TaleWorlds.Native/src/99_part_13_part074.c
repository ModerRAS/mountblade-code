#include "TaleWorlds.Native.Split.h"

// 99_part_13_part074.c - 4 个函数

// 函数: void FUN_1808daf48(void)
void FUN_1808daf48(void)

{
  undefined8 *unaff_RSI;
  
  (**(code **)*unaff_RSI)();
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0));
}



undefined4 FUN_1808daf90(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uStackX_10;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  uStackX_10 = 0;
  if ((*(ushort *)(param_2 + 0xe) & 0x3fff) == 1) {
    iVar1 = FUN_18088c740(&uStackX_10,*(undefined8 *)(param_1 + 0x20));
    if (iVar1 != 0) goto LAB_1808daff4;
  }
  FUN_1808db3f0(param_1,param_2);
LAB_1808daff4:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStackX_10);
}



undefined8 FUN_1808db010(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int aiStackX_8 [2];
  undefined4 auStackX_20 [2];
  longlong alStack_28 [2];
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (undefined4 *)0x0)) {
    return 0x1c;
  }
  iVar3 = 0;
  aiStackX_8[0] = 0;
  uVar2 = FUN_18073a390(param_1,2,aiStackX_8);
  if ((int)uVar2 == 0) {
    if (0 < aiStackX_8[0]) {
      do {
        auStackX_20[0] = 0;
        uVar2 = FUN_18073a590(param_1,2,iVar3,auStackX_20);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        alStack_28[0] = 0;
        uVar2 = FUN_180739b90(param_1,auStackX_20[0],alStack_28);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        iVar1 = func_0x00018076b6b0(alStack_28[0] + 4,param_2,0x20);
        if (iVar1 == 0) {
          *param_3 = auStackX_20[0];
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < aiStackX_8[0]);
    }
    uVar2 = 0x36;
  }
  return uVar2;
}



undefined8 FUN_1808db03d(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *unaff_R14;
  int iStack0000000000000050;
  
  iVar3 = 0;
  iStack0000000000000050 = 0;
  uVar2 = FUN_18073a390(param_1,2,&stack0x00000050);
  if ((int)uVar2 == 0) {
    if (0 < iStack0000000000000050) {
      do {
        uVar2 = FUN_18073a590();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_180739b90();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        iVar1 = func_0x00018076b6b0(4);
        if (iVar1 == 0) {
          *unaff_R14 = 0;
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iStack0000000000000050);
    }
    uVar2 = 0x36;
  }
  return uVar2;
}



undefined8 FUN_1808db059(void)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong unaff_RBP;
  uint *unaff_R14;
  int in_stack_00000050;
  uint uStack0000000000000068;
  
  uVar4 = unaff_RBP & 0xffffffff;
  uVar3 = (uint)unaff_RBP;
  while( true ) {
    if (in_stack_00000050 <= (int)uVar3) {
      return 0x36;
    }
    uStack0000000000000068 = (uint)unaff_RBP;
    uVar2 = FUN_18073a590();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_180739b90();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    iVar1 = func_0x00018076b6b0(unaff_RBP + 4);
    if (iVar1 == 0) break;
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
  }
  *unaff_R14 = uStack0000000000000068;
  return 0;
}






// 函数: void FUN_1808db0d2(void)
void FUN_1808db0d2(void)

{
  return;
}



undefined8 FUN_1808db0e0(void)

{
  undefined4 *unaff_R14;
  undefined4 in_stack_00000068;
  
  *unaff_R14 = in_stack_00000068;
  return 0;
}



undefined8 FUN_1808db0eb(void)

{
  return 0x1c;
}



undefined8 FUN_1808db100(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x74);
    uVar2 = *(undefined4 *)(param_2 + 0x78);
    uVar3 = *(undefined4 *)(param_2 + 0x7c);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    *(undefined4 *)(param_1 + 0x7c) = uVar3;
    if (*(longlong *)(param_2 + 0x68) != 0) {
      *(longlong *)(param_1 + 0x68) = *(longlong *)(param_2 + 0x68);
      *(undefined8 *)(param_2 + 0x68) = 0;
      uVar4 = func_0x0001808676e0(*(undefined8 *)(param_1 + 0x68),param_1);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
  }
  return 0;
}



undefined8 FUN_1808db140(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    if (*(longlong *)(param_2 + 0x48) != 0) {
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_2 + 0x48);
      *(undefined8 *)(param_2 + 0x48) = 0;
      uVar1 = func_0x0001808676e0(*(undefined8 *)(param_1 + 0x48),param_1);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
  }
  return 0;
}



undefined8 FUN_1808db190(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    return 0x1c;
  }
  if (((*(byte *)(param_2 + 0xc4) & 1) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0xad0) != 0) {
      return 0x1c;
    }
    FUN_18088a0c0();
  }
  return 0;
}



int FUN_1808db1d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  longlong lStackX_10;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  if (param_2 == 0) {
    return 0x1c;
  }
  uStack_18 = *(uint *)(param_2 + 0x10);
  uStack_14 = *(uint *)(param_2 + 0x14);
  uStack_10 = *(uint *)(param_2 + 0x18);
  uStack_c = *(uint *)(param_2 + 0x1c);
  plVar1 = *(longlong **)(param_1 + 8);
  lVar2 = plVar1[5];
  lStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  iVar3 = FUN_180851a40(plVar1);
  if (iVar3 == 0) {
    if ((int)plVar1[1] == 0) {
FUN_1808db2d6:
      iVar3 = 0x1c;
      goto LAB_1808db2db;
    }
    lVar5 = (longlong)(int)((uStack_14 ^ uStack_10 ^ uStack_18 ^ uStack_c) & (int)plVar1[1] - 1U);
    piVar6 = (int *)(*plVar1 + lVar5 * 4);
    iVar3 = *(int *)(*plVar1 + lVar5 * 4);
    if (iVar3 != -1) {
      lVar5 = plVar1[2];
      do {
        lVar4 = (longlong)iVar3 * 0x20;
        if ((*(longlong *)(lVar4 + lVar5) == CONCAT44(uStack_14,uStack_18)) &&
           (*(longlong *)(lVar4 + 8 + lVar5) == CONCAT44(uStack_c,uStack_10))) goto FUN_1808db2d6;
        piVar6 = (int *)(lVar5 + 0x10 + lVar4);
        iVar3 = *piVar6;
      } while (iVar3 != -1);
    }
    iVar3 = FUN_18084e8f0(plVar1,&uStack_18,&lStackX_10,piVar6);
    if (iVar3 != 0) goto LAB_1808db2aa;
  }
  else {
LAB_1808db2aa:
    if (iVar3 != 0) {
LAB_1808db2db:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (iVar3 != 0) {
        return iVar3;
      }
      goto LAB_1808db2bb;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_1808db2bb:
  *(short *)(param_2 + 0xe) = *(short *)(param_2 + 0xe) + 1;
  return 0;
}



int FUN_1808db1f4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong in_RCX;
  longlong lVar5;
  longlong unaff_RSI;
  int *piVar6;
  longlong in_XMM0_Qb;
  undefined8 uStackX_20;
  longlong lStack0000000000000028;
  
  plVar1 = *(longlong **)(in_RCX + 8);
  lVar2 = plVar1[5];
  uStackX_20 = param_1;
  lStack0000000000000028 = in_XMM0_Qb;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  iVar3 = FUN_180851a40(plVar1);
  if (iVar3 == 0) {
    if ((int)plVar1[1] == 0) {
FUN_1808db2d6:
      iVar3 = 0x1c;
      goto LAB_1808db2db;
    }
    lVar5 = (longlong)
            (int)((uStackX_20._4_4_ ^ (uint)lStack0000000000000028 ^ (uint)uStackX_20 ^
                  lStack0000000000000028._4_4_) & (int)plVar1[1] - 1U);
    piVar6 = (int *)(*plVar1 + lVar5 * 4);
    iVar3 = *(int *)(*plVar1 + lVar5 * 4);
    if (iVar3 != -1) {
      lVar5 = plVar1[2];
      do {
        lVar4 = (longlong)iVar3 * 0x20;
        if ((*(longlong *)(lVar4 + lVar5) == uStackX_20) &&
           (*(longlong *)(lVar4 + 8 + lVar5) == lStack0000000000000028)) goto FUN_1808db2d6;
        piVar6 = (int *)(lVar5 + 0x10 + lVar4);
        iVar3 = *piVar6;
      } while (iVar3 != -1);
    }
    iVar3 = FUN_18084e8f0(plVar1,&uStackX_20,&stack0x00000048,piVar6);
    if (iVar3 != 0) goto LAB_1808db2aa;
  }
  else {
LAB_1808db2aa:
    if (iVar3 != 0) {
LAB_1808db2db:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (iVar3 != 0) {
        return iVar3;
      }
      goto LAB_1808db2bb;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_1808db2bb:
  *(short *)(unaff_RSI + 0xe) = *(short *)(unaff_RSI + 0xe) + 1;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0001808db2bb)

undefined8 FUN_1808db2d6(void)

{
  longlong unaff_RDI;
  
  if (unaff_RDI == 0) {
    return 0x1c;
  }
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined8 FUN_1808db300(longlong param_1,undefined8 param_2,longlong param_3)

{
  if (((*(byte *)(param_3 + 0xc4) & 1) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    FUN_18088a0c0(*(longlong *)(param_1 + 0x20),param_3);
  }
  return 0;
}



undefined8 FUN_1808db380(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (((*(byte *)(param_2 + 0xc4) & 1) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    FUN_18088a0c0();
  }
  uVar1 = *(undefined4 *)(param_3 + 0x74);
  uVar2 = *(undefined4 *)(param_3 + 0x78);
  uVar3 = *(undefined4 *)(param_3 + 0x7c);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
  *(undefined4 *)(param_2 + 0x74) = uVar1;
  *(undefined4 *)(param_2 + 0x78) = uVar2;
  *(undefined4 *)(param_2 + 0x7c) = uVar3;
  if (*(longlong *)(param_3 + 0x68) != 0) {
    *(longlong *)(param_2 + 0x68) = *(longlong *)(param_3 + 0x68);
    *(undefined8 *)(param_3 + 0x68) = 0;
    uVar4 = func_0x0001808676e0(*(undefined8 *)(param_2 + 0x68),param_2);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808db3f0(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  ushort uVar15;
  ushort uVar16;
  int *piVar17;
  
  if (param_2 == (undefined8 *)0x0) {
    return 0x1c;
  }
  uVar1 = *(ushort *)((longlong)param_2 + 0xe);
  uVar16 = (uVar1 & 0x3fff) + (uVar1 >> 0xe & 1);
  if (((uVar16 < 2) && ((uVar1 & 0x7fff) != 0)) || ((uVar1 & 0x3fff) == 1)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  uVar15 = uVar1 - 1;
  if ((uVar1 & 0x3fff) == 0) {
    uVar15 = uVar1 & 0x8000;
  }
  *(ushort *)((longlong)param_2 + 0xe) = uVar15;
  if (((bVar8) && (param_1[2] != 0)) && ((code *)param_1[3] != (code *)0x0)) {
    (*(code *)param_1[3])(param_1[2],param_2);
  }
  if (uVar16 < 2) {
    if ((uVar1 & 0x7fff) != 0) {
      plVar2 = (longlong *)param_1[1];
      uVar4 = *(uint *)(param_2 + 2);
      uVar5 = *(uint *)((longlong)param_2 + 0x14);
      lVar14 = param_2[2];
      uVar6 = *(uint *)(param_2 + 3);
      uVar7 = *(uint *)((longlong)param_2 + 0x1c);
      lVar9 = param_2[3];
      lVar3 = plVar2[5];
      if (lVar3 != 0) {
        FUN_180768360(lVar3);
      }
      if (*(int *)((longlong)plVar2 + 0x24) == 0) {
        uVar12 = 0;
      }
      else if ((int)plVar2[1] == 0) {
        uVar12 = 0x1c;
      }
      else {
        uVar12 = 0;
        lVar13 = (longlong)(int)((uVar5 ^ uVar4 ^ uVar6 ^ uVar7) & (int)plVar2[1] - 1U);
        piVar17 = (int *)(*plVar2 + lVar13 * 4);
        iVar10 = *(int *)(*plVar2 + lVar13 * 4);
        if (iVar10 != -1) {
          lVar13 = plVar2[2];
          do {
            lVar11 = (longlong)iVar10 * 0x20;
            if ((*(longlong *)(lVar11 + lVar13) == lVar14) &&
               (*(longlong *)(lVar11 + 8 + lVar13) == lVar9)) {
              iVar10 = *piVar17;
              lVar14 = (longlong)iVar10 * 0x20;
              *(undefined8 *)(lVar14 + 0x18 + lVar13) = 0;
              *piVar17 = *(int *)(lVar14 + 0x10 + lVar13);
              *(int *)(lVar14 + 0x10 + lVar13) = (int)plVar2[4];
              *(int *)((longlong)plVar2 + 0x24) = *(int *)((longlong)plVar2 + 0x24) + -1;
              *(int *)(plVar2 + 4) = iVar10;
              break;
            }
            piVar17 = (int *)(lVar13 + 0x10 + lVar11);
            iVar10 = *piVar17;
          } while (iVar10 != -1);
        }
      }
      if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar3);
      }
      if ((int)uVar12 != 0) {
        return uVar12;
      }
    }
    uVar12 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
    if ((int)uVar12 == 0) {
      (**(code **)*param_2)(param_2,0);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2,&UNK_180988a80,0xcc,1);
    }
  }
  else {
    uVar12 = 0;
  }
  return uVar12;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808db4b7(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *unaff_RBX;
  longlong *unaff_RSI;
  int *piVar6;
  longlong *unaff_R14;
  undefined8 extraout_XMM0_Qa;
  longlong in_XMM0_Qb;
  longlong lStack0000000000000030;
  longlong lStack0000000000000038;
  
  lVar1 = unaff_RSI[5];
  lStack0000000000000030 = param_1;
  lStack0000000000000038 = in_XMM0_Qb;
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  if (*(int *)((longlong)unaff_RSI + 0x24) == 0) {
    uVar4 = 0;
  }
  else if ((int)unaff_RSI[1] == 0) {
    uVar4 = 0x1c;
  }
  else {
    uVar4 = 0;
    lVar5 = (longlong)
            (int)((lStack0000000000000030._4_4_ ^ (uint)lStack0000000000000030 ^
                   (uint)lStack0000000000000038 ^ lStack0000000000000038._4_4_) &
                 (int)unaff_RSI[1] - 1U);
    piVar6 = (int *)(*unaff_RSI + lVar5 * 4);
    iVar2 = *(int *)(*unaff_RSI + lVar5 * 4);
    if (iVar2 != -1) {
      lVar5 = unaff_RSI[2];
      do {
        lVar3 = (longlong)iVar2 * 0x20;
        if ((*(longlong *)(lVar3 + lVar5) == lStack0000000000000030) &&
           (*(longlong *)(lVar3 + 8 + lVar5) == lStack0000000000000038)) {
          iVar2 = *piVar6;
          lVar3 = (longlong)iVar2 * 0x20;
          *(undefined8 *)(lVar3 + 0x18 + lVar5) = 0;
          *piVar6 = *(int *)(lVar3 + 0x10 + lVar5);
          *(int *)(lVar3 + 0x10 + lVar5) = (int)unaff_RSI[4];
          *(int *)((longlong)unaff_RSI + 0x24) = *(int *)((longlong)unaff_RSI + 0x24) + -1;
          *(int *)(unaff_RSI + 4) = iVar2;
          uVar4 = 0;
          break;
        }
        piVar6 = (int *)(lVar5 + 0x10 + lVar3);
        iVar2 = *piVar6;
      } while (iVar2 != -1);
    }
  }
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  if (((int)uVar4 == 0) && (uVar4 = (**(code **)(*unaff_R14 + 0x18))(), (int)uVar4 == 0)) {
    (**(code **)*unaff_RBX)(extraout_XMM0_Qa,0);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0));
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808db4df(undefined8 param_1,ushort param_2,undefined8 param_3,ushort param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  ushort uVar13;
  undefined8 *unaff_RBX;
  short unaff_SI;
  uint unaff_EDI;
  int *piVar14;
  longlong *unaff_R14;
  undefined4 extraout_XMM0_Da;
  
  uVar13 = param_2 - 1;
  if ((param_2 & param_4) == 0) {
    uVar13 = param_2 & 0x8000;
  }
  *(ushort *)((longlong)unaff_RBX + 0xe) = uVar13;
  if ((((param_2 & param_4) == 1) && (unaff_R14[2] != 0)) && ((code *)unaff_R14[3] != (code *)0x0))
  {
    (*(code *)unaff_R14[3])();
  }
  if (unaff_EDI < 2) {
    if (unaff_SI != 0) {
      plVar1 = (longlong *)unaff_R14[1];
      uVar3 = *(uint *)(unaff_RBX + 2);
      uVar4 = *(uint *)((longlong)unaff_RBX + 0x14);
      lVar12 = unaff_RBX[2];
      uVar5 = *(uint *)(unaff_RBX + 3);
      uVar6 = *(uint *)((longlong)unaff_RBX + 0x1c);
      lVar7 = unaff_RBX[3];
      lVar2 = plVar1[5];
      if (lVar2 != 0) {
        FUN_180768360(lVar2);
      }
      if (*(int *)((longlong)plVar1 + 0x24) == 0) {
        uVar10 = 0;
      }
      else if ((int)plVar1[1] == 0) {
        uVar10 = 0x1c;
      }
      else {
        uVar10 = 0;
        lVar11 = (longlong)(int)((uVar4 ^ uVar3 ^ uVar5 ^ uVar6) & (int)plVar1[1] - 1U);
        piVar14 = (int *)(*plVar1 + lVar11 * 4);
        iVar8 = *(int *)(*plVar1 + lVar11 * 4);
        if (iVar8 != -1) {
          lVar11 = plVar1[2];
          do {
            lVar9 = (longlong)iVar8 * 0x20;
            if ((*(longlong *)(lVar9 + lVar11) == lVar12) &&
               (*(longlong *)(lVar9 + 8 + lVar11) == lVar7)) {
              iVar8 = *piVar14;
              lVar12 = (longlong)iVar8 * 0x20;
              *(undefined8 *)(lVar12 + 0x18 + lVar11) = 0;
              *piVar14 = *(int *)(lVar12 + 0x10 + lVar11);
              *(int *)(lVar12 + 0x10 + lVar11) = (int)plVar1[4];
              *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
              *(int *)(plVar1 + 4) = iVar8;
              break;
            }
            piVar14 = (int *)(lVar11 + 0x10 + lVar9);
            iVar8 = *piVar14;
          } while (iVar8 != -1);
        }
      }
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if ((int)uVar10 != 0) {
        return uVar10;
      }
    }
    uVar10 = (**(code **)(*unaff_R14 + 0x18))();
    if ((int)uVar10 == 0) {
      (**(code **)*unaff_RBX)(extraout_XMM0_Da,0);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0));
    }
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808db4f8(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  int *piVar5;
  longlong *unaff_R14;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  uint uStack0000000000000038;
  uint uStack000000000000003c;
  
  if ((int)unaff_RSI[1] == 0) {
    uVar3 = 0x1c;
  }
  else {
    uVar3 = 0;
    lVar4 = (longlong)
            (int)((uStack0000000000000034 ^ uStack0000000000000030 ^ uStack0000000000000038 ^
                  uStack000000000000003c) & (int)unaff_RSI[1] - 1U);
    piVar5 = (int *)(*unaff_RSI + lVar4 * 4);
    iVar1 = *(int *)(*unaff_RSI + lVar4 * 4);
    if (iVar1 != -1) {
      lVar4 = unaff_RSI[2];
      do {
        lVar2 = (longlong)iVar1 * 0x20;
        if ((*(longlong *)(lVar2 + lVar4) == _uStack0000000000000030) &&
           (*(longlong *)(lVar2 + 8 + lVar4) == _uStack0000000000000038)) {
          iVar1 = *piVar5;
          lVar2 = (longlong)iVar1 * 0x20;
          *(undefined8 *)(lVar2 + 0x18 + lVar4) = 0;
          *piVar5 = *(int *)(lVar2 + 0x10 + lVar4);
          *(int *)(lVar2 + 0x10 + lVar4) = (int)unaff_RSI[4];
          *(int *)((longlong)unaff_RSI + 0x24) = *(int *)((longlong)unaff_RSI + 0x24) + -1;
          *(int *)(unaff_RSI + 4) = iVar1;
          break;
        }
        piVar5 = (int *)(lVar4 + 0x10 + lVar2);
        iVar1 = *piVar5;
      } while (iVar1 != -1);
    }
  }
  if (unaff_RBP != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  if (((int)uVar3 == 0) && (uVar3 = (**(code **)(*unaff_R14 + 0x18))(), (int)uVar3 == 0)) {
    (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0));
  }
  return uVar3;
}



undefined4 FUN_1808db5a6(void)

{
  undefined4 unaff_EDI;
  
  return unaff_EDI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808db8c0(longlong param_1)
void FUN_1808db8c0(longlong param_1)

{
  float fVar1;
  
  FUN_1808c6310(param_1 + 0x7c,*(undefined4 *)(param_1 + 0x70));
  FUN_1808c6310(param_1 + 0x84,*(undefined4 *)(param_1 + 0x74));
  if (0.00578 <= ABS(*(float *)(param_1 + 0x78))) {
    fVar1 = _DAT_180bef7b0 * *(float *)(param_1 + 0x78);
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x8c) = fVar1;
  if (fVar1 == 0.0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    return;
  }
  fVar1 = (float)expf();
  *(float *)(param_1 + 0x90) = 1.0 / (fVar1 - 1.0);
  return;
}



undefined8 FUN_1808dbae0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort auStackX_8 [4];
  uint auStackX_20 [2];
  uint uStack_38;
  uint auStack_34 [3];
  
  plVar2 = (longlong *)*param_1;
  iVar6 = 0;
  if (*plVar2 == 0) {
    uVar3 = 0x1c;
  }
  else {
    if (plVar2[2] != 0) {
      uStack_38 = 0;
      uVar3 = func_0x00018076a7d0(*plVar2,&uStack_38);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if ((ulonglong)plVar2[2] < (ulonglong)uStack_38 + 2) {
        uVar3 = 0x11;
        goto LAB_1808dbb54;
      }
    }
    uVar3 = FUN_180769ed0(*plVar2,auStackX_8,1,2,0);
  }
LAB_1808dbb54:
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar7 = (uint)auStackX_8[0];
  if ((auStackX_8[0] & 0x8000) == 0) goto LAB_1808dbbe6;
  if (*plVar2 == 0) {
    uVar3 = 0x1c;
  }
  else {
    if (plVar2[2] != 0) {
      auStack_34[0] = 0;
      uVar3 = func_0x00018076a7d0(*plVar2,auStack_34);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if ((ulonglong)plVar2[2] < (ulonglong)auStack_34[0] + 2) {
        uVar3 = 0x11;
        goto LAB_1808dbbc8;
      }
    }
    uVar3 = FUN_180769ed0(*plVar2,auStackX_8,1,2,0);
  }
LAB_1808dbbc8:
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar7 = (uint)auStackX_8[0] << 0xf | uVar7 & 0x7fff;
LAB_1808dbbe6:
  uVar4 = (int)*(uint *)((longlong)param_2 + 0xc) >> 0x1f;
  uVar5 = uVar7 >> 1;
  if (((int)uVar5 <= (int)((*(uint *)((longlong)param_2 + 0xc) ^ uVar4) - uVar4)) ||
     (uVar3 = FUN_180882f00(param_2,uVar5), (int)uVar3 == 0)) {
    iVar1 = (int)param_2[1];
    if (iVar1 < (int)uVar5) {
      if (0 < (int)(uVar5 - iVar1)) {
                    // WARNING: Subroutine does not return
        memset(*param_2 + (longlong)iVar1 * 8,0,(ulonglong)(uVar5 - iVar1) << 3);
      }
    }
    *(uint *)(param_2 + 1) = uVar5;
    auStackX_20[0] = 0;
    if (uVar7 >> 1 != 0) {
      do {
        uVar3 = FUN_1808dde10(param_1,auStackX_20[0]);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if (*(int *)(param_1[1] + 0x18) == 0) {
          uVar3 = FUN_1808997b0(*param_1,*param_2 + (longlong)iVar6 * 8);
        }
        else {
          uVar3 = 0x1c;
        }
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_1808de0e0(param_1,auStackX_20);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        iVar6 = iVar6 + 1;
        auStackX_20[0] = auStackX_20[0] & -(uVar7 & 1);
      } while (iVar6 < (int)uVar5);
    }
    uVar3 = 0;
  }
  return uVar3;
}



ulonglong FUN_1808dbbeb(undefined8 param_1,uint param_2)

{
  uint in_EAX;
  ulonglong uVar1;
  uint unaff_EBX;
  uint uVar2;
  undefined8 *unaff_RSI;
  int iVar3;
  uint unaff_R14D;
  longlong *unaff_R15;
  
  uVar2 = unaff_R14D >> 1;
  if (((int)((in_EAX ^ param_2) - param_2) < (int)uVar2) &&
     (uVar1 = FUN_180882f00(), (int)uVar1 != 0)) {
    return uVar1;
  }
  iVar3 = (int)unaff_R15[1];
  if (iVar3 < (int)uVar2) {
    if (0 < (int)(uVar2 - iVar3)) {
                    // WARNING: Subroutine does not return
      memset(*unaff_R15 + (longlong)iVar3 * 8,0,(ulonglong)(uVar2 - iVar3) << 3);
    }
  }
  *(uint *)(unaff_R15 + 1) = uVar2;
  uVar1 = (ulonglong)unaff_EBX;
  if (unaff_EBX == 0) {
    iVar3 = 0;
    if (unaff_R14D >> 1 != 0) {
      do {
        uVar1 = FUN_1808dde10();
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
          uVar1 = FUN_1808997b0(*unaff_RSI,*unaff_R15 + (longlong)iVar3 * 8);
        }
        else {
          uVar1 = 0x1c;
        }
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = FUN_1808de0e0();
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar2);
    }
    uVar1 = 0;
  }
  return uVar1;
}






// 函数: void FUN_1808dbcbc(void)
void FUN_1808dbcbc(void)

{
  return;
}



undefined8 * FUN_1808dbcd0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  
  *(undefined4 *)(param_1 + 1) = 0xb1e55ed1;
  *param_1 = &UNK_180984ab8;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x1b;
  puVar5 = (undefined4 *)FUN_180847820();
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  puVar6 = param_1 + 4;
  *(undefined4 *)(param_1 + 2) = *puVar5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *puVar6 = puVar6;
  param_1[5] = puVar6;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *param_1 = &UNK_180988b00;
  puVar6 = (undefined8 *)FUN_180847820();
  uVar4 = puVar6[1];
  param_1[0x40] = *puVar6;
  param_1[0x41] = uVar4;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000180898d8f)
// WARNING: Removing unreachable block (ram,0x000180898da0)
// WARNING: Removing unreachable block (ram,0x000180898dda)
// WARNING: Removing unreachable block (ram,0x000180898de2)
// WARNING: Removing unreachable block (ram,0x000180898dea)
// WARNING: Removing unreachable block (ram,0x000180898df0)
// WARNING: Removing unreachable block (ram,0x000180898e56)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_1808dbf90(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar1 = uVar2 ^ (int)uVar2 >> 0x1f;
  if ((int)(uVar1 - ((int)uVar2 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return uVar1;
    }
    if ((0 < (int)uVar2) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
    }
    *param_1 = 0;
    uVar2 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  uVar2 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
  if ((int)uVar2 < 1) {
    return uVar2;
  }
  if ((int)param_1[1] < 1) {
    if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
    }
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return 0;
  }
  return 0x1c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




