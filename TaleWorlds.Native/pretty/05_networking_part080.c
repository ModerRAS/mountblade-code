#include "TaleWorlds.Native.Split.h"

// 05_networking_part080.c - 4 个函数

// 函数: void FUN_180889ebf(void)
void FUN_180889ebf(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



undefined4 FUN_180889efd(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int unaff_EBX;
  longlong unaff_RBP;
  int unaff_EDI;
  bool bVar12;
  float unaff_XMM6_Da;
  
code_r0x000180889efd:
  iVar10 = *(int *)(param_1 + (longlong)unaff_EDI * 4);
  do {
    if (iVar10 == -1) {
      lVar7 = *(longlong *)(unaff_RBP + 0x28);
      if (*(longlong *)(unaff_RBP + 0x30) != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(*(longlong *)(unaff_RBP + 0x30));
      }
      puVar8 = (undefined8 *)FUN_180847820();
      uVar3 = *(undefined8 *)(lVar7 + 0x80);
      uVar4 = puVar8[1];
      *(undefined8 *)(unaff_RBP + -0x48) = *puVar8;
      *(undefined8 *)(unaff_RBP + -0x40) = uVar4;
      uVar6 = FUN_180866f50(uVar3,unaff_RBP + -0x48,unaff_RBP + -0x58);
      FUN_180840100(unaff_RBP + -0x58);
      return uVar6;
    }
    do {
      lVar7 = *(longlong *)(param_3[2] + 0x18 + (longlong)iVar10 * 0x20);
      for (puVar8 = *(undefined8 **)(lVar7 + 0x288);
          (*(undefined8 **)(lVar7 + 0x288) <= puVar8 &&
          (puVar8 < (undefined8 *)
                    ((longlong)*(undefined8 **)(lVar7 + 0x288) +
                    (longlong)*(int *)(lVar7 + 0x290) * 0x14)));
          puVar8 = (undefined8 *)((longlong)puVar8 + 0x14)) {
        iVar9 = *(int *)(unaff_RBP + -0x50) + 1;
        iVar5 = unaff_EBX;
        if (unaff_EBX < 0) {
          iVar5 = -unaff_EBX;
        }
        if (iVar5 < iVar9) {
          if (unaff_EBX < 0) {
            unaff_EBX = -unaff_EBX;
          }
          iVar11 = (int)((float)unaff_EBX * unaff_XMM6_Da);
          iVar5 = iVar9;
          if (iVar9 <= iVar11) {
            iVar5 = iVar11;
          }
          if (iVar5 < 3) {
            iVar11 = 3;
          }
          else if (iVar11 < iVar9) {
            iVar11 = iVar9;
          }
          iVar5 = FUN_180849120(unaff_RBP + -0x58,iVar11);
          if (iVar5 == 0) goto LAB_180889e09;
        }
        else {
LAB_180889e09:
          iVar5 = *(int *)(unaff_RBP + -0x50);
          uVar3 = puVar8[1];
          lVar2 = *(longlong *)(unaff_RBP + -0x58);
          puVar1 = (undefined8 *)(lVar2 + (longlong)iVar5 * 0x14);
          *puVar1 = *puVar8;
          puVar1[1] = uVar3;
          *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar5 * 0x14) = *(undefined4 *)(puVar8 + 2);
          *(int *)(unaff_RBP + -0x50) = *(int *)(unaff_RBP + -0x50) + 1;
        }
        unaff_EBX = *(int *)(unaff_RBP + -0x4c);
      }
      param_3 = *(longlong **)(unaff_RBP + -0x48);
    } while ((iVar10 != -1) &&
            (iVar10 = *(int *)(param_3[2] + 0x10 + (longlong)iVar10 * 0x20), iVar10 != -1));
    iVar10 = unaff_EDI + 1;
    bVar12 = unaff_EDI != -1;
    unaff_EDI = 0;
    if (bVar12) {
      unaff_EDI = iVar10;
    }
    if (unaff_EDI != (int)param_3[1]) {
      param_1 = *param_3;
      lVar7 = (longlong)unaff_EDI;
      do {
        if (*(int *)(param_1 + lVar7 * 4) != -1) goto code_r0x000180889efd;
        unaff_EDI = unaff_EDI + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 != (int)param_3[1]);
    }
    unaff_EDI = -1;
    iVar10 = -1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180889f10(longlong param_1,uint *param_2)

{
  uint uVar1;
  
  if ((*(uint *)(param_1 + 0x24) >> 1 & 1) != 0) {
    return 0x44;
  }
  if (((param_2 != (uint *)0x0) && (uVar1 = *param_2, uVar1 - 4 < 0x1d)) && ((uVar1 & 3) == 0)) {
    if (*(longlong *)(param_1 + 0x2d8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x2d8),
                    &UNK_180985b90,0x1a9,1);
    }
                    // WARNING: Subroutine does not return
    memcpy(param_1 + 0x2c0,param_2,(longlong)(int)uVar1);
  }
  return 0x1f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180889f60(undefined8 param_1,longlong param_2)
void FUN_180889f60(undefined8 param_1,longlong param_2)

{
  longlong unaff_RDI;
  
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2,&UNK_180985b90,0x1a9,1);
  }
                    // WARNING: Subroutine does not return
  memcpy(unaff_RDI + 0x2c0);
}



undefined8 FUN_180889fd6(void)

{
  return 0x1f;
}



undefined8 FUN_180889ff0(longlong *param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_2;
  if (((param_2 < 0) || (lVar2 = param_1[1], (int)lVar2 <= param_2)) ||
     ((param_2 != 0 &&
      (iVar3 = memcmp(*(longlong *)(*param_1 + -8 + lVar4 * 8) + 0x10,*param_3 + 0x10,0x10),
      -1 < iVar3)))) {
    return 0x1f;
  }
  if (param_2 != (int)lVar2 + -1) {
    lVar2 = *param_3;
    lVar1 = *(longlong *)(*param_1 + 8 + lVar4 * 8);
    iVar3 = memcmp(lVar1 + 0x10,lVar2 + 0x10,0x10);
    if (iVar3 < 0) {
      return 0x1f;
    }
    iVar3 = memcmp(lVar2 + 0x10,lVar1 + 0x10,0x10);
    if (-1 < iVar3) {
      return 0x1f;
    }
  }
  *(longlong *)(*param_1 + lVar4 * 8) = *param_3;
  return 0;
}





// 函数: void FUN_18088a0c0(longlong param_1,longlong param_2)
void FUN_18088a0c0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(longlong *)(param_1 + 0xad0) = param_2;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    puVar1 = (undefined4 *)FUN_180847820();
    uStack_18 = *puVar1;
    uStack_14 = puVar1[1];
    uStack_10 = puVar1[2];
    uStack_c = puVar1[3];
    if (param_2 != 0) {
      uStack_18 = *(undefined4 *)(param_2 + 0x10);
      uStack_14 = *(undefined4 *)(param_2 + 0x14);
      uStack_10 = *(undefined4 *)(param_2 + 0x18);
      uStack_c = *(undefined4 *)(param_2 + 0x1c);
    }
    FUN_180867170(*(undefined8 *)(param_1 + 0x80),&uStack_18);
  }
  return;
}



int FUN_18088a1f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar2 = FUN_180744cc0(param_1);
    if ((iVar2 == 0) && (iVar2 = FUN_1808744f0(param_1 + 0x10), iVar2 == 0)) {
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    else if (iVar2 != 0) goto LAB_18088a24d;
  }
  iVar2 = 0;
LAB_18088a24d:
  if (lVar1 == 0) {
    return iVar2;
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(lVar1);
}



int FUN_18088a1fa(longlong param_1)

{
  int iVar1;
  longlong unaff_RSI;
  
  if (unaff_RSI != 0) {
    FUN_180768360();
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar1 = FUN_180744cc0(param_1);
    if ((iVar1 == 0) && (iVar1 = FUN_1808744f0(param_1 + 0x10), iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    else if (iVar1 != 0) goto LAB_18088a24d;
  }
  iVar1 = 0;
LAB_18088a24d:
  if (unaff_RSI == 0) {
    return iVar1;
  }
                    // WARNING: Subroutine does not return
  FUN_180768400();
}





// 函数: void FUN_18088a257(void)
void FUN_18088a257(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



ulonglong FUN_18088a270(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x350);
  if (lVar3 != 0) {
    FUN_180768360(lVar3);
  }
  if (*(int *)(param_1 + 0x34c) == 0) {
    uVar1 = FUN_180744cc0(param_1 + 0x328);
    if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x338), uVar1 == 0)) {
      *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x34c) = 0;
      goto LAB_18088a2ee;
    }
    uVar2 = (ulonglong)uVar1;
    if (uVar1 == 0) goto LAB_18088a2ee;
LAB_18088a2cf:
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
  }
  else {
LAB_18088a2ee:
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x380);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x37c) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x358);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x368), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x378) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x37c) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x3b0);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x3ac) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x388);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x398), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x3a8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x3ac) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x3e0);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x3dc) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x3b8);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x3c8), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x3d8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x3dc) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x410);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x40c) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 1000);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x3f8), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x408) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x40c) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x440);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x43c) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x418);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x428), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x43c) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x470);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x46c) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x448);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x458), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x468) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x46c) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x4a0);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x49c) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x478);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x488), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x498) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x49c) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x4d0);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x4cc) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x4a8);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x4b8), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x4c8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x4cc) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x500);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x4fc) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x4d8);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x4e8), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x4f8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x4fc) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x530);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x52c) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x508);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x518), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x528) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x52c) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x560);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x55c) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x538);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x548), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x558) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x55c) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x590);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x58c) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x568);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x578), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x588) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x58c) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x5c0);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x5bc) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x598);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x5a8), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x5b8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x5bc) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x620);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x61c) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x5f8);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x608), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x618) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x61c) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x650);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x64c) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x628);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x638), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x648) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x64c) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x680);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x67c) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x658);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x668), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x678) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x67c) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    uVar2 = FUN_18088a1f0(param_1 + 0x688);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    lVar3 = *(longlong *)(param_1 + 0x6e0);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x6dc) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x6b8);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x6c8), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x6d8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x6dc) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x710);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x70c) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x6e8);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x6f8), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x708) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x70c) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x740);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x73c) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x718);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x728), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x738) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x73c) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x770);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x76c) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x748);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x758), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x768) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x76c) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x7a0);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x79c) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x778);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x788), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x798) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x79c) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 2000);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x7cc) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x7a8);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x7b8), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x7c8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x7cc) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x800);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x7fc) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x7d8);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x7e8), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x7f8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x7fc) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x830);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x82c) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x808);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x818), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x828) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x82c) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x860);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
    }
    if (*(int *)(param_1 + 0x85c) == 0) {
      uVar1 = FUN_180744cc0(param_1 + 0x838);
      if ((uVar1 == 0) && (uVar1 = FUN_1808744f0(param_1 + 0x848), uVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x858) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x85c) = 0;
      }
      else {
        uVar2 = (ulonglong)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    uVar2 = FUN_18088a1f0(param_1 + 0x868);
    if (((int)uVar2 == 0) && (uVar2 = FUN_18088a1f0(param_1 + 0x898), (int)uVar2 == 0)) {
      uVar2 = FUN_1808c24f0(*(undefined8 *)(param_1 + 0x90));
    }
  }
  return uVar2;
}



undefined8 FUN_18088ac50(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18088a1f0(param_1 + 0x688);
  if ((int)uVar1 == 0) {
    return 0;
  }
  return uVar1;
}



undefined8 FUN_18088aca0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uStack_18;
  longlong lStack_10;
  
  if (param_2 == 0) {
    return 0x1c;
  }
  lVar2 = *(longlong *)(param_2 + 0x2e8);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x38);
    if ((uVar1 >> 1 & 1) != 0) {
      return 0;
    }
    if (((uVar1 & 1) != 0) ||
       ((*(longlong *)(param_1 + 0x90) != 0 &&
        (*(char *)(*(longlong *)(param_1 + 0x90) + 0x780) != '\0')))) {
      *(uint *)(lVar2 + 0x38) = uVar1 | 2;
      uStack_18 = 0;
      lStack_10 = param_2;
      uVar3 = FUN_1808e03a0(*(undefined8 *)(param_1 + 0xac8),&uStack_18,~(byte)(uVar1 | 2) & 1);
      if ((int)uVar3 == 0) {
        return 0;
      }
      return uVar3;
    }
  }
  uVar3 = FUN_18088ad30(param_1);
  if ((int)uVar3 == 0) {
    return 0;
  }
  return uVar3;
}



// WARNING: Removing unreachable block (ram,0x00018088ae90)
// WARNING: Removing unreachable block (ram,0x00018088aea4)

undefined8 FUN_18088ad30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  ushort uVar4;
  undefined8 uStackX_10;
  
  lVar1 = *(longlong *)(param_2 + 0x2e8);
  if (lVar1 == 0) {
    uVar4 = *(ushort *)(param_2 + 0xe) & 0x7fff;
    if (((((uVar4 == 0) || (*(char *)(param_2 + 0x2f8) == '\0')) ||
         (*(longlong *)(param_1 + 0xad0) == 0)) ||
        (((*(ushort *)(*(longlong *)(param_1 + 0xad0) + 0xe) & 0x3fff) != 1 ||
         (uVar3 = FUN_1808c1af0(*(undefined8 *)(param_1 + 0x90),param_2), (int)uVar3 == 0)))) &&
       ((lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x790), lVar1 == 0 ||
        (uVar3 = FUN_1808e1610(lVar1,param_2), (int)uVar3 == 0)))) {
      uVar3 = FUN_180875800(param_2,*(undefined8 *)(param_1 + 800));
      if (((int)uVar3 == 0) &&
         (((lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x788), lVar1 == 0 ||
           (uVar3 = FUN_1808e0820(lVar1,1), (int)uVar3 == 0)) &&
          ((uVar3 = (**(code **)(**(longlong **)(param_1 + 0xaa0) + 0x10))
                              (*(longlong **)(param_1 + 0xaa0),param_2), (int)uVar3 == 0 &&
           ((uVar4 == 0 || (uVar3 = FUN_18088a270(param_1), (int)uVar3 == 0)))))))) {
        uVar3 = 0;
      }
    }
    return uVar3;
  }
  uStackX_10 = 0;
  if ((((*(longlong *)(param_1 + 0x98) == 0) ||
       (iVar2 = FUN_18088c740(&uStackX_10,param_1), iVar2 == 0)) &&
      (iVar2 = FUN_1808dea20(lVar1), iVar2 == 0)) &&
     ((*(int *)(lVar1 + 0x2c) < 1 || (iVar2 = FUN_1808de9b0(lVar1), iVar2 == 0)))) {
    *(undefined4 *)(lVar1 + 0x34) = 0x2e;
    func_0x0001808ded80(lVar1,0);
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStackX_10);
  }
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStackX_10);
}



undefined8 FUN_18088aee0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 auStackX_10 [6];
  
  if (param_2 == 0) {
    return 0x1f;
  }
  auStackX_10[0] = 0;
  uVar1 = FUN_1808db010(*(undefined8 *)(param_1 + 0x78),param_2,auStackX_10);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_18073be90(*(undefined8 *)(param_1 + 0x78),auStackX_10[0]);
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



