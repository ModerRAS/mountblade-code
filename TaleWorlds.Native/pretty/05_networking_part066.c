#include "TaleWorlds.Native.Split.h"

// 05_networking_part066.c - 10 个函数

// 函数: void FUN_180876428(void)
void FUN_180876428(void)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong in_RAX;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong *unaff_RBP;
  undefined8 *unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar12;
  char unaff_R13B;
  longlong unaff_R14;
  uint uVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined1 in_stack_00000040;
  longlong *in_stack_00000048;
  int iStack0000000000000050;
  int iStack0000000000000058;
  undefined4 uStack000000000000005c;
  longlong in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  
  unaff_RBP[-0x10] = in_RAX;
  unaff_RBP[-0xf] = unaff_RDI;
  unaff_RBP[-0xe] = unaff_RDI;
  unaff_RBP[-0xd] = unaff_RDI;
  unaff_RBP[-0xc] = unaff_RDI;
  *(undefined4 *)(unaff_RBP + -0xb) = 0xffffffff;
  uVar15 = (undefined4)unaff_RDI;
  *(undefined4 *)((longlong)unaff_RBP + -0x54) = uVar15;
  unaff_RBP[-10] = unaff_RDI;
  unaff_RBP[-9] = unaff_RDI;
  unaff_RBP[-8] = unaff_RDI;
  unaff_RBP[-7] = unaff_RDI;
  *(undefined4 *)(unaff_RBP + -6) = 0xffffffff;
  *(undefined4 *)((longlong)unaff_RBP + -0x2c) = uVar15;
  unaff_RBP[-5] = unaff_RDI;
  unaff_RBP[-4] = unaff_RDI;
  unaff_RBP[-3] = unaff_RDI;
  unaff_RBP[-2] = unaff_RDI;
  *(undefined4 *)(unaff_RBP + -1) = 0xffffffff;
  *(undefined4 *)((longlong)unaff_RBP + -4) = uVar15;
  *unaff_RBP = unaff_RDI;
  unaff_RBP[1] = unaff_RDI;
  unaff_RBP[2] = unaff_RDI;
  unaff_RBP[3] = unaff_RDI;
  *(undefined4 *)(unaff_RBP + 4) = 0xffffffff;
  *(undefined4 *)((longlong)unaff_RBP + 0x24) = uVar15;
  unaff_RBP[5] = unaff_RDI;
  unaff_RBP[6] = unaff_RDI;
  unaff_RBP[7] = unaff_RDI;
  unaff_RBP[8] = unaff_RDI;
  *(undefined4 *)(unaff_RBP + 9) = 0xffffffff;
  *(undefined4 *)((longlong)unaff_RBP + 0x4c) = uVar15;
  unaff_RBP[10] = unaff_RDI;
  unaff_RBP[0xb] = unaff_RDI;
  unaff_RBP[0xc] = unaff_RDI;
  unaff_RBP[0xd] = unaff_RDI;
  *(undefined4 *)(unaff_RBP + 0xe) = 0xffffffff;
  *(undefined4 *)((longlong)unaff_RBP + 0x74) = uVar15;
  uVar15 = func_0x0001808713a0();
  if (unaff_R13B == '\0') {
    iVar5 = FUN_18086f610(uVar15,unaff_R14 + 0xad8,&stack0x00000040);
    uVar15 = extraout_XMM0_Da_00;
  }
  else {
    iVar5 = FUN_180882610(uVar15,unaff_RSI + 0x53);
    if (iVar5 != 0) goto LAB_180876d05;
    iVar5 = FUN_18088b520();
    uVar15 = extraout_XMM0_Da;
  }
  if (iVar5 != 0) goto LAB_180876d05;
  uVar2 = *(undefined8 *)(unaff_R14 + 0x78);
  while ((iVar5 = (int)unaff_RDI, -1 < iVar5 && (iVar5 < *(int *)(unaff_RSI + 0x11)))) {
    iVar6 = FUN_1808d9fe0(*(undefined8 *)(unaff_RSI[0x10] + (longlong)iVar5 * 8),uVar2);
    if (iVar6 != 0) goto LAB_180876d05;
    uVar15 = extraout_XMM0_Da_01;
    unaff_RDI = (ulonglong)(iVar5 + 1);
  }
  uVar2 = *(undefined8 *)(unaff_R14 + 0x78);
  uVar13 = *(uint *)(unaff_R14 + 0x20) >> 1;
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(unaff_RSI + 0x13))); iVar5 = iVar5 + 1) {
    iVar6 = FUN_1808da5c0(*(undefined8 *)(unaff_RSI[0x12] + (longlong)iVar5 * 8),uVar2,uVar13 & 1);
    if (((1 < iVar6 - 0x35U) || ((uVar13 & 1) == 0)) && (iVar6 != 0)) goto LAB_180876d05;
    uVar15 = extraout_XMM0_Da_02;
  }
  if ((unaff_R13B == '\0') &&
     (iVar5 = FUN_180880350(uVar15,*(undefined8 *)(unaff_R14 + 800)), uVar15 = extraout_XMM0_Da_03,
     iVar5 != 0)) goto LAB_180876d05;
  _iStack0000000000000050 = *(undefined8 **)(unaff_R14 + 800);
  in_stack_00000048 = (longlong *)&UNK_180985c10;
  puVar11 = _iStack0000000000000050;
  if (unaff_R13B != '\0') {
    puVar11 = &stack0x00000048;
  }
  lVar8 = *(longlong *)(unaff_R14 + 0xa0);
  _iStack0000000000000058 = unaff_RSI;
  if (lVar8 != 0) {
    uVar15 = FUN_180768360(lVar8);
  }
  iVar5 = FUN_1808787d0(uVar15,unaff_R14 + 0x898,unaff_R14 + 0x4a8,unaff_R14 + 0x4d8,puVar11);
  if (iVar5 != 0) {
    if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar8);
    }
    goto LAB_180876d05;
  }
  if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar8);
  }
  if (unaff_R13B != '\0') {
    in_stack_00000070 = 0;
    iVar5 = FUN_18088c740(&stack0x00000070);
    if ((((iVar5 == 0) &&
         (iVar5 = FUN_18087e0b0(extraout_XMM0_Da_04,*(undefined8 *)(unaff_R14 + 0xc0),
                                unaff_RBP + 0x9c,*(undefined8 *)(unaff_R14 + 800),unaff_RBP + -0x10)
         , iVar5 == 0)) &&
        ((((iVar5 = FUN_180869270(FUN_180873f80,unaff_R14 + 0x328), iVar5 == 0 &&
           (((iVar5 = FUN_1808690e0(FUN_180873f80,unaff_R14 + 0x358), iVar5 == 0 &&
             (iVar5 = FUN_180869720(FUN_180873f80,unaff_R14 + 0x388), iVar5 == 0)) &&
            (iVar5 = FUN_180869400(FUN_180873f80,unaff_R14 + 0x3b8), iVar5 == 0)))) &&
          (iVar5 = FUN_180869590(FUN_180873f80,unaff_R14 + 1000), iVar5 == 0)) || (iVar5 == 0)))) &&
       (iVar5 = FUN_1808740c0(unaff_RBP + -0x10), iVar5 == 0)) {
      FUN_180882a50(unaff_RSI + 0x59,unaff_RBP + -0x10);
      lVar8 = *(longlong *)(unaff_R14 + 0xa0);
      in_stack_00000060 = lVar8;
      if (lVar8 != 0) {
        FUN_180768360(lVar8);
      }
      in_stack_00000048 = (longlong *)(unaff_R14 + 0x778);
      _iStack0000000000000050 = (undefined8 *)0xffffffffffffffff;
      _iStack0000000000000058 = (undefined8 *)CONCAT44(uStack000000000000005c,0xffffffff);
      FUN_1808741f0(in_stack_00000048,&stack0x00000050,&stack0x00000058);
      if (iStack0000000000000058 != -1) {
        iVar5 = iStack0000000000000058;
        iVar6 = iStack0000000000000050;
        do {
          do {
            lVar8 = *(longlong *)(in_stack_00000048[2] + 0x18 + (longlong)iVar5 * 0x20);
            iVar7 = FUN_1808c7ff0(*(undefined8 *)(lVar8 + 0xd0));
            if (iVar7 != 0) {
              if (in_stack_00000060 != 0) {
                    // WARNING: Subroutine does not return
                FUN_180768400();
              }
              goto LAB_180876b83;
            }
            puVar1 = (uint *)(*(longlong *)(lVar8 + 0xd0) + 4);
            *puVar1 = *puVar1 & 0xfffffff7;
          } while ((iVar5 != -1) &&
                  (iVar5 = *(int *)(in_stack_00000048[2] + 0x10 + (longlong)iVar5 * 0x20),
                  iVar5 != -1));
          iVar5 = iVar6 + 1;
          bVar14 = iVar6 != -1;
          iVar6 = 0;
          if (bVar14) {
            iVar6 = iVar5;
          }
          if (iVar6 != (int)in_stack_00000048[1]) {
            lVar8 = (longlong)iVar6;
            do {
              if (*(int *)(*in_stack_00000048 + lVar8 * 4) != -1) {
                iVar5 = *(int *)(*in_stack_00000048 + (longlong)iVar6 * 4);
                goto LAB_1808768bc;
              }
              iVar6 = iVar6 + 1;
              lVar8 = lVar8 + 1;
            } while (lVar8 != (int)in_stack_00000048[1]);
          }
          iVar5 = -1;
          iVar6 = iVar5;
LAB_1808768bc:
          lVar8 = in_stack_00000060;
        } while (iVar5 != -1);
      }
      uVar2 = *(undefined8 *)(unaff_R14 + 0x90);
      plVar3 = *(longlong **)(unaff_R14 + 800);
      uVar12 = unaff_RSI[0x57];
      do {
        if ((uVar12 < (ulonglong)unaff_RSI[0x57]) ||
           ((ulonglong)((longlong)*(int *)(unaff_RSI + 0x58) * 0x10 + unaff_RSI[0x57]) <= uVar12))
        goto LAB_1808769aa;
        cVar4 = func_0x0001808c0d90(uVar2,uVar12);
        if (cVar4 != '\0') {
          iVar5 = FUN_1808c2060(uVar2,uVar12,0);
          if (iVar5 != 0) goto LAB_1808769aa;
          lVar9 = (**(code **)(*plVar3 + 0x150))(plVar3,uVar12);
          if (lVar9 != 0) {
            FUN_1808c5220(unaff_RBP + -0x10,lVar9);
            in_stack_00000060 = *(longlong *)(lVar9 + 0x10);
            uStack0000000000000068 = *(undefined4 *)(lVar9 + 0x18);
            uStack000000000000006c = *(undefined4 *)(lVar9 + 0x1c);
            in_stack_00000040 = 1;
            FUN_180879610(unaff_RBP + -0xf,&stack0x00000060);
          }
        }
        uVar12 = uVar12 + 0x10;
      } while( true );
    }
    goto LAB_180876b83;
  }
  if (unaff_RSI[0x5c] != 0) {
    lVar8 = *(longlong *)(unaff_R14 + 0xa0);
    if (lVar8 != 0) {
      FUN_180768360();
    }
    plVar3 = unaff_RSI + 4;
    if (plVar3 == (longlong *)0x0) {
FUN_180876d54:
      if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar8);
      }
      goto LAB_180876d05;
    }
    plVar10 = (longlong *)*plVar3;
    if (plVar10 != plVar3) {
      iVar5 = 0;
      do {
        plVar10 = (longlong *)*plVar10;
        iVar5 = iVar5 + 1;
      } while (plVar10 != plVar3);
      if (iVar5 != 0) goto FUN_180876d54;
    }
    lVar9 = *(longlong *)(unaff_R14 + 0xaa8);
    unaff_RSI[5] = (longlong *)(unaff_R14 + 0xaa8);
    *plVar3 = lVar9;
    *(longlong **)(lVar9 + 8) = plVar3;
    *(longlong **)unaff_RSI[5] = plVar3;
    if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar8);
    }
  }
  iVar5 = FUN_1808db1d0(*(undefined8 *)(unaff_R14 + 0xaa0));
  if (iVar5 == 0) {
    if (*(char *)(unaff_RSI + 0x5f) != '\0') {
      if (((*(longlong *)(unaff_R14 + 0xad0) != 0) &&
          ((*(ushort *)(*(longlong *)(unaff_R14 + 0xad0) + 0xe) & 0x3fff) == 1)) &&
         (iVar5 = FUN_1808bc120(*(undefined8 *)(unaff_R14 + 0x90)), iVar5 != 0)) goto LAB_180876d05;
      if (((*(char *)(unaff_RSI + 0x5f) != '\0') && (*(longlong *)(unaff_R14 + 0x80) != 0)) &&
         (unaff_RSI[0x60] != 0)) {
        func_0x0001808671f0();
      }
    }
    if (*(longlong *)(unaff_R14 + 0xad0) != 0) {
      FUN_180881eb0();
    }
  }
LAB_180876d05:
  FUN_180872630(unaff_RBP + 0xf);
  FUN_180873cd0(unaff_RBP + -0xf);
  FUN_1808dc190(unaff_RBP + 0x9c);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(unaff_RBP[0x110] ^ (ulonglong)&stack0x00000000);
LAB_1808769aa:
  uVar12 = unaff_RSI[0x55];
  do {
    if ((uVar12 < (ulonglong)unaff_RSI[0x55]) ||
       ((ulonglong)((longlong)*(int *)(unaff_RSI + 0x56) * 0x10 + unaff_RSI[0x55]) <= uVar12))
    break;
    cVar4 = func_0x0001808c0d90(uVar2,uVar12);
    if (cVar4 != '\x01') {
      iVar5 = FUN_1808c2060(uVar2,uVar12,1);
      if (iVar5 != 0) break;
      lVar9 = (**(code **)(*plVar3 + 0x150))(plVar3,uVar12,1);
      if (lVar9 != 0) {
        FUN_1808c5220(unaff_RBP + -0x10,lVar9);
        in_stack_00000060 = *(longlong *)(lVar9 + 0x10);
        uStack0000000000000068 = *(undefined4 *)(lVar9 + 0x18);
        uStack000000000000006c = *(undefined4 *)(lVar9 + 0x1c);
        in_stack_00000040 = 1;
        FUN_180879610(unaff_RBP + -0xf,&stack0x00000060,&stack0x00000040);
      }
    }
    uVar12 = uVar12 + 0x10;
  } while( true );
  if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar8);
  }
  iVar5 = FUN_1808bfbe0(*(undefined8 *)(unaff_R14 + 0x90),unaff_RBP + -0x10);
  if (iVar5 == 0) {
    lVar8 = *(longlong *)(unaff_R14 + 0xa0);
    if (lVar8 != 0) {
      FUN_180768360(lVar8);
    }
    in_stack_00000048 = (longlong *)(unaff_R14 + 0x898);
    _iStack0000000000000050 = (undefined8 *)0xffffffffffffffff;
    _iStack0000000000000058 = (undefined8 *)CONCAT44(uStack000000000000005c,0xffffffff);
    FUN_1808741f0(in_stack_00000048,&stack0x00000050,&stack0x00000058);
    plVar3 = in_stack_00000048;
    while (in_stack_00000048 = plVar3, iStack0000000000000058 != -1) {
      lVar9 = (longlong)iStack0000000000000058;
      in_stack_00000060 = *(longlong *)(unaff_R14 + 800);
      iVar5 = FUN_18086f460(*(undefined8 *)(lVar9 * 0x20 + 0x18 + plVar3[2]),unaff_R14 + 0xad8,
                            &stack0x00000060);
      if ((iVar5 != 0) ||
         (iVar5 = FUN_18087c9b0(*(undefined8 *)(lVar9 * 0x20 + 0x18 + plVar3[2]),unaff_RBP + -0x10),
         iVar5 != 0)) {
        if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_180768400(lVar8);
        }
        goto LAB_180876b83;
      }
      func_0x000180874280(&stack0x00000048);
      plVar3 = in_stack_00000048;
    }
    if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar8);
    }
    if ((((*(longlong *)(unaff_R14 + 0xad0) == 0) || (iVar5 = FUN_180881eb0(), iVar5 == 0)) &&
        (iVar5 = FUN_180875800(unaff_RBP + 0x9c,*(undefined8 *)(unaff_R14 + 800)), iVar5 == 0)) &&
       ((uVar15 = extraout_XMM0_Da_05, unaff_RSI[0x5d] == 0 ||
        (iVar5 = FUN_1808dea80(), uVar15 = extraout_XMM0_Da_06, iVar5 == 0)))) {
      (**(code **)*unaff_RSI)(uVar15,0);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0));
    }
  }
LAB_180876b83:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&stack0x00000070);
}





// 函数: void FUN_180876d27(void)
void FUN_180876d27(void)

{
  longlong unaff_RBP;
  
  FUN_1808dc190(unaff_RBP + 0x4e0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x880) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180876d54(void)
void FUN_180876d54(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  FUN_180872630(unaff_RBP + 0x78);
  FUN_180873cd0(unaff_RBP + -0x78);
  FUN_1808dc190(unaff_RBP + 0x4e0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x880) ^ (ulonglong)&stack0x00000000);
}



undefined8 FUN_180876d70(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) == 0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_1808db8c0();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180876d90(longlong param_1,longlong *param_2)
void FUN_180876d90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  short sVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [40];
  ulonglong uStack_10;
  
  uStack_10 = _DAT_180bf00a8 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x48) == 0) {
    lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_1 + 0x30,1);
    if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(param_1 + 0x30,auStack_38);
    }
    plVar1 = (longlong *)(lVar3 + 0x20);
    plVar4 = *(longlong **)(lVar3 + 0x20);
    if (plVar4 != plVar1) {
      while ((int)plVar4[8] != *(int *)(param_1 + 0x40)) {
        if ((plVar4 == plVar1) || (plVar4 = (longlong *)*plVar4, plVar4 == plVar1))
        goto LAB_180876e6f;
      }
      if (plVar4 != (longlong *)0x0) {
        sVar2 = *(short *)((longlong)plVar4 + 0x4a);
        if (sVar2 == 1) {
          lVar3 = FUN_180869ab0(param_2,plVar4 + 6);
        }
        else {
          lVar3 = 0;
        }
        if ((sVar2 != 0) && (sVar2 == 1)) {
          if (lVar3 == 0) {
            uVar5 = 0xc2a00000;
          }
          else {
            uVar5 = func_0x0001808c6500(lVar3,0xc2a00000);
          }
          *(undefined4 *)(param_1 + 0x5c) = uVar5;
        }
      }
    }
  }
LAB_180876e6f:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_58);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180876eb0(longlong param_1,longlong *param_2)
void FUN_180876eb0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined *puStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  char cStack_68;
  undefined1 auStack_60 [40];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  puStack_78 = &UNK_180985f58;
  uStack_70 = 0x7f7fffff;
  uStack_6c = 0;
  cStack_68 = '\0';
  lVar2 = (**(code **)(*param_2 + 0x330))(param_2,param_1 + 0x50,1);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18084b240(param_1 + 0x50,auStack_60);
  }
  iVar1 = FUN_18084b5a0(&puStack_78,lVar2 + 0x80,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_18084b5a0(&puStack_78,lVar2 + 0x90,param_2);
    if (iVar1 == 0) {
      uVar3 = 0;
      if (cStack_68 != '\0') {
        uVar3 = uStack_70;
      }
      *(undefined4 *)(param_1 + 0xf4) = uStack_6c;
      *(undefined4 *)(param_1 + 0xf0) = uVar3;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_98);
}



undefined8 FUN_180876fb0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (((((*(int *)(param_1 + 0x70) != 0) || (*(int *)(param_1 + 0x74) != 0)) ||
       (*(int *)(param_1 + 0x78) != 0)) || (*(int *)(param_1 + 0x7c) != 0)) &&
     ((lVar1 = (**(code **)(*param_2 + 0x278))(param_2,param_1 + 0x70,1), lVar1 != 0 &&
      (0.0 < *(float *)(lVar1 + 0x38))))) {
    if (0.0 < *(float *)(param_1 + 0xa8)) {
      *(float *)(param_1 + 0xac) = *(float *)(lVar1 + 0x38) / *(float *)(param_1 + 0xa8);
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180877030(longlong param_1,longlong *param_2,longlong param_3)
void FUN_180877030(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_158 [32];
  uint uStack_138;
  uint uStack_130;
  uint uStack_128;
  uint uStack_120;
  uint uStack_118;
  uint uStack_110;
  uint uStack_108;
  uint uStack_100;
  uint uStack_f8;
  uint uStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  undefined1 auStack_c8 [128];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  lStack_e8 = param_3;
  if (*(uint *)(param_1 + 0x218) < 0x49) {
    for (iVar8 = 0; (-1 < iVar8 && (iVar8 < *(int *)(param_1 + 0x1a8))); iVar8 = iVar8 + 1) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar8 * 8);
      lVar4 = (**(code **)(*param_2 + 0x330))(param_2,lVar1 + 0x50,1);
      if (lVar4 != 0) {
        if ((((*(int *)(lVar1 + 0x40) != 0) || (*(int *)(lVar1 + 0x44) != 0)) ||
            (*(int *)(lVar1 + 0x48) != 0)) || (lVar5 = lVar4, *(int *)(lVar1 + 0x4c) != 0)) {
          lVar5 = (**(code **)(*param_2 + 0x340))(param_2,lVar1 + 0x40,1);
          if (lVar5 == 0) goto LAB_1808770de;
        }
        *(undefined4 *)(lVar4 + 0x50) = *(undefined4 *)(lVar5 + 0xc0);
      }
LAB_1808770de:
    }
    if ((*(char *)(param_1 + 0x2f8) != '\0') && (lStack_e8 != 0)) {
      *(undefined4 *)(lStack_e8 + 0x50) = *(undefined4 *)(lStack_e8 + 0xc0);
    }
  }
  uVar6 = *(uint *)(param_1 + 0x218);
  if (uVar6 < 0x3a) {
    for (iVar8 = 0; (-1 < iVar8 && (iVar8 < *(int *)(param_1 + 0xe8))); iVar8 = iVar8 + 1) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar8 * 8);
      lVar4 = (**(code **)(*param_2 + 0x288))(param_2,(undefined4 *)(lVar1 + 0xd8),1);
      lStack_e0 = lVar4;
      if (lVar4 == 0) {
        uStack_f0 = (uint)*(byte *)(lVar1 + 0xe7);
        uStack_f8 = (uint)*(byte *)(lVar1 + 0xe6);
        uStack_100 = (uint)*(byte *)(lVar1 + 0xe5);
        uStack_108 = (uint)*(byte *)(lVar1 + 0xe4);
        uStack_110 = (uint)*(byte *)(lVar1 + 0xe3);
        uStack_118 = (uint)*(byte *)(lVar1 + 0xe2);
        uStack_120 = (uint)*(byte *)(lVar1 + 0xe1);
        uStack_128 = (uint)*(byte *)(lVar1 + 0xe0);
        uStack_130 = (uint)*(ushort *)(lVar1 + 0xde);
        uStack_138 = (uint)*(ushort *)(lVar1 + 0xdc);
                    // WARNING: Subroutine does not return
        FUN_18076b390(auStack_c8,0x27,&UNK_180958180,*(undefined4 *)(lVar1 + 0xd8));
      }
      lVar5 = (**(code **)(*param_2 + 0x340))(param_2,(undefined4 *)(lVar4 + 0x40),1);
      if (lVar5 == 0) {
        uStack_f0 = (uint)*(byte *)(lVar4 + 0x4f);
        uStack_f8 = (uint)*(byte *)(lVar4 + 0x4e);
        uStack_100 = (uint)*(byte *)(lVar4 + 0x4d);
        uStack_108 = (uint)*(byte *)(lVar4 + 0x4c);
        uStack_110 = (uint)*(byte *)(lVar4 + 0x4b);
        uStack_118 = (uint)*(byte *)(lVar4 + 0x4a);
        uStack_120 = (uint)*(byte *)(lVar4 + 0x49);
        uStack_128 = (uint)*(byte *)(lVar4 + 0x48);
        uStack_130 = (uint)*(ushort *)(lVar4 + 0x46);
        uStack_138 = (uint)*(ushort *)(lVar4 + 0x44);
                    // WARNING: Subroutine does not return
        FUN_18076b390(auStack_c8,0x27,&UNK_180958180,*(undefined4 *)(lVar4 + 0x40));
      }
      *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar5 + 0x50);
      *(undefined4 *)(lVar1 + 0x3c) = *(undefined4 *)(lVar5 + 0x54);
    }
    uVar6 = *(uint *)(param_1 + 0x218);
  }
  if (uVar6 < 0x3f) {
    for (iVar8 = 0; (-1 < iVar8 && (iVar8 < *(int *)(param_1 + 0x168))); iVar8 = iVar8 + 1) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar8 * 8);
      for (uVar7 = *(ulonglong *)(lVar1 + 0xd8);
          (uVar2 = *(ulonglong *)(lVar1 + 0xd8), uVar2 <= uVar7 &&
          (uVar7 < uVar2 + (longlong)*(int *)(lVar1 + 0xe0) * 0x14)); uVar7 = uVar7 + 0x14) {
        lVar4 = (**(code **)(*param_2 + 0x128))(param_2,uVar7,CONCAT71((int7)(uVar2 >> 8),1));
        if ((lVar4 != 0) && (*(short *)(lVar4 + 0xc) == 0xc)) {
          *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar1 + 0x38);
          *(undefined4 *)(lVar4 + 0x3c) = *(undefined4 *)(lVar1 + 0x3c);
        }
      }
    }
    uVar6 = *(uint *)(param_1 + 0x218);
  }
  if (uVar6 - 0x3b < 0x10) {
    for (iVar8 = 0; (-1 < iVar8 && (iVar8 < *(int *)(param_1 + 0x178))); iVar8 = iVar8 + 1) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x170) + (longlong)iVar8 * 8);
      if (*(int *)(lVar1 + 0x38) == 0) {
        *(undefined4 *)(lVar1 + 0x38) = 2;
      }
    }
    uVar6 = *(uint *)(param_1 + 0x218);
  }
  if (uVar6 < 0x4a) {
    for (iVar8 = 0; (-1 < iVar8 && (iVar8 < *(int *)(param_1 + 0x38))); iVar8 = iVar8 + 1) {
      iVar3 = FUN_1808793e0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar8 * 8),
                            param_2);
      if (iVar3 != 0) goto LAB_18087752c;
    }
    iVar8 = FUN_180868de0(FUN_1808793e0,param_1,param_2);
    if (((iVar8 != 0) || (iVar8 = FUN_180868fc0(FUN_1808793e0,param_1,param_2), iVar8 != 0)) ||
       (iVar8 = FUN_180868ea0(FUN_1808793e0,param_1,param_2), iVar8 != 0)) goto LAB_18087752c;
  }
  if (((*(uint *)(param_1 + 0x218) < 0x4c) && (lStack_e8 != 0)) &&
     (iVar8 = *(int *)(lStack_e8 + 0x50), iVar8 != 0)) {
    for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(param_1 + 0x88))); iVar3 = iVar3 + 1) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar3 * 8);
      if (*(int *)(lVar1 + 0x60) == 0x1b) {
        lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x48) + 0xa0);
        if ((lVar1 == 0) || (*(int *)(lVar1 + 0x10) != 1)) goto LAB_18087752c;
        if (*(int *)(lVar1 + 0x18) == 0) {
          func_0x0001808da780(lVar1,iVar8);
        }
      }
    }
    for (iVar3 = 0; (iVar9 = 0, -1 < iVar3 && (iVar9 = 0, iVar3 < *(int *)(param_1 + 0x168)));
        iVar3 = iVar3 + 1) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar3 * 8);
      if (*(int *)(lVar1 + 0x38) == 0) {
        *(int *)(lVar1 + 0x38) = iVar8;
      }
    }
    for (; (-1 < iVar9 && (iVar9 < *(int *)(param_1 + 0x158))); iVar9 = iVar9 + 1) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar9 * 8);
      if (*(int *)(lVar1 + 0x38) == 0) {
        *(int *)(lVar1 + 0x38) = iVar8;
      }
    }
  }
LAB_18087752c:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180877560(longlong *param_1,longlong *param_2,longlong *param_3)
void FUN_180877560(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined1 auStack_118 [32];
  uint uStack_f8;
  uint uStack_f0;
  uint uStack_e8;
  uint uStack_e0;
  uint uStack_d8;
  uint uStack_d0;
  uint uStack_c8;
  uint uStack_c0;
  uint uStack_b8;
  uint uStack_b0;
  longlong lStack_a8;
  longlong *plStack_a0;
  longlong *plStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined1 auStack_80 [40];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  iVar3 = (int)param_1[1];
  lVar7 = (longlong)iVar3;
  uVar5 = (int)*(uint *)((longlong)param_2 + 0xc) >> 0x1f;
  plStack_a0 = param_3;
  plStack_98 = param_1;
  if (((iVar3 <= (int)((*(uint *)((longlong)param_2 + 0xc) ^ uVar5) - uVar5)) ||
      (iVar2 = FUN_18084c470(param_2,iVar3), iVar2 == 0)) && (lStack_88 = lVar7, 0 < iVar3)) {
    lVar9 = 0;
    lStack_a8 = 0;
    do {
      lVar1 = lStack_a8;
      puVar8 = (undefined4 *)(*plStack_98 + lStack_a8);
      lVar4 = (**(code **)(*plStack_a0 + 0x140))(plStack_a0,puVar8,1);
      lStack_90 = lVar4;
      if (lVar4 == 0) {
        uStack_b0 = (uint)*(byte *)((longlong)puVar8 + 0xf);
        uStack_b8 = (uint)*(byte *)((longlong)puVar8 + 0xe);
        uStack_c0 = (uint)*(byte *)((longlong)puVar8 + 0xd);
        uStack_c8 = (uint)*(byte *)(puVar8 + 3);
        uStack_d0 = (uint)*(byte *)((longlong)puVar8 + 0xb);
        uStack_d8 = (uint)*(byte *)((longlong)puVar8 + 10);
        uStack_e0 = (uint)*(byte *)((longlong)puVar8 + 9);
        uStack_e8 = (uint)*(byte *)(puVar8 + 2);
        uStack_f0 = (uint)*(ushort *)((longlong)puVar8 + 6);
        uStack_f8 = (uint)*(ushort *)(puVar8 + 1);
                    // WARNING: Subroutine does not return
        FUN_18076b390(auStack_80,0x27,&UNK_180958180,*puVar8);
      }
      uVar5 = (int)*(uint *)((longlong)param_2 + 0xc) >> 0x1f;
      iVar2 = (int)param_2[1] + 1;
      iVar3 = (*(uint *)((longlong)param_2 + 0xc) ^ uVar5) - uVar5;
      if (iVar3 < iVar2) {
        iVar6 = (int)((float)iVar3 * 1.5);
        iVar3 = iVar2;
        if (iVar2 <= iVar6) {
          iVar3 = iVar6;
        }
        if (iVar3 < 0x10) {
          iVar6 = 0x10;
        }
        else if (iVar6 < iVar2) {
          iVar6 = iVar2;
        }
        iVar3 = FUN_18084c470(param_2,iVar6);
        if (iVar3 != 0) break;
      }
      lStack_a8 = lVar1 + 0x10;
      lVar9 = lVar9 + 1;
      *(undefined4 *)(*param_2 + (longlong)(int)param_2[1] * 4) = *(undefined4 *)(lVar4 + 0x44);
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    } while (lVar9 < lVar7);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_118);
}





// 函数: void FUN_1808775bf(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)
void FUN_1808775bf(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong unaff_RBX;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong *unaff_R15;
  float fVar9;
  longlong *in_stack_00000078;
  longlong *in_stack_00000080;
  ulonglong in_stack_000000c0;
  
  if (0 < (int)unaff_RBX) {
    lVar6 = 0;
    lVar8 = lVar6;
    do {
      puVar7 = (undefined4 *)(*param_1 + lVar6);
      lVar2 = (**(code **)(*param_4 + 0x140))(param_4,puVar7,1);
      if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18076b390(&stack0x00000098,0x27,&UNK_180958180,*puVar7,*(undefined2 *)(puVar7 + 1));
      }
      uVar4 = (int)*(uint *)((longlong)unaff_R15 + 0xc) >> 0x1f;
      iVar3 = (int)unaff_R15[1] + 1;
      iVar1 = (*(uint *)((longlong)unaff_R15 + 0xc) ^ uVar4) - uVar4;
      if (iVar1 < iVar3) {
        fVar9 = (float)iVar1 * 1.5;
        iVar5 = (int)fVar9;
        iVar1 = iVar3;
        if (iVar3 <= iVar5) {
          iVar1 = iVar5;
        }
        if (iVar1 < 0x10) {
          iVar5 = 0x10;
        }
        else if (iVar5 < iVar3) {
          iVar5 = iVar3;
        }
        iVar1 = FUN_18084c470(fVar9,iVar5);
        if (iVar1 != 0) break;
      }
      lVar6 = lVar6 + 0x10;
      lVar8 = lVar8 + 1;
      *(undefined4 *)(*unaff_R15 + (longlong)(int)unaff_R15[1] * 4) = *(undefined4 *)(lVar2 + 0x44);
      *(int *)(unaff_R15 + 1) = (int)unaff_R15[1] + 1;
      param_1 = in_stack_00000080;
      param_4 = in_stack_00000078;
    } while (lVar8 < unaff_RBX);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000c0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180877798(void)
void FUN_180877798(void)

{
  ulonglong in_stack_000000c0;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000c0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1808777c0(longlong param_1,undefined8 param_2)
void FUN_1808777c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_180877560(param_1 + 0x90,param_1 + 0xb0,param_2);
  if (iVar1 == 0) {
    FUN_180877560(param_1 + 0x80,param_1 + 0xa0,param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



