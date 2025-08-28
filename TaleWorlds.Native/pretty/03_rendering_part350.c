#include "TaleWorlds.Native.Split.h"

// 03_rendering_part350.c - 19 个函数

// 函数: void FUN_1804578be(uint64_t param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4)
void FUN_1804578be(uint64_t param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint *in_RAX;
  uint uStack0000000000000028;
  uint uStack000000000000002c;
  uint64_t uStack0000000000000030;
  uint64_t uStack0000000000000038;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  uint uStack0000000000000070;
  uint uStack0000000000000074;
  uint uStack0000000000000078;
  uint uStack000000000000007c;
  uint64_t uStack0000000000000080;
  uint64_t uStack0000000000000088;
  ulonglong in_stack_00000090;
  
  do {
    LOCK();
    uVar1 = *in_RAX;
    *in_RAX = *in_RAX | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  uStack0000000000000070 = in_RAX[1];
  uStack0000000000000074 = in_RAX[2];
  uStack0000000000000028 = in_RAX[3];
  uStack000000000000002c = in_RAX[4];
  uVar2 = *(uint64_t *)(in_RAX + 5);
  uVar3 = *(uint64_t *)(in_RAX + 7);
  *in_RAX = 0;
  uStack0000000000000030 = uVar2;
  uStack0000000000000038 = uVar3;
  uStack0000000000000078 = uStack0000000000000028;
  uStack000000000000007c = uStack000000000000002c;
  uStack0000000000000080 = uVar2;
  uStack0000000000000088 = uVar3;
  FUN_18063b5f0(&stack0x00000040,&stack0x00000020,param_3,param_4,uStack0000000000000070);
  *param_3 = uStack0000000000000040;
  param_3[1] = uStack0000000000000044;
  param_3[2] = uStack0000000000000048;
  param_3[3] = uStack000000000000004c;
  param_3[4] = uStack0000000000000050;
  param_3[5] = uStack0000000000000054;
  param_3[6] = uStack0000000000000058;
  param_3[7] = uStack000000000000005c;
  param_3[8] = uStack0000000000000060;
  param_3[9] = uStack0000000000000064;
  param_3[10] = uStack0000000000000068;
  param_3[0xb] = uStack000000000000006c;
  *(uint64_t *)(param_3 + 0xc) = uVar2;
  *(uint64_t *)(param_3 + 0xe) = uVar3;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000090 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180457947(void)
void FUN_180457947(void)

{
  return;
}





// 函数: void FUN_180457980(longlong param_1,int8_t param_2,longlong *param_3)
void FUN_180457980(longlong param_1,int8_t param_2,longlong *param_3)

{
  uint64_t uVar1;
  
  if (param_1 != 0) {
    uVar1 = (**(code **)(*param_3 + 0x158))(param_3);
    FUN_1802fbf30(param_1,param_2,param_3,uVar1);
  }
  return;
}



uint64_t * FUN_1804579d0(uint64_t *param_1,longlong param_2,char param_3,int param_4)

{
  longlong *plVar1;
  int32_t uStack_c;
  
  if ((param_2 != 0) &&
     (plVar1 = *(longlong **)
                (*(longlong *)((longlong)param_3 * 0x100 + 0xb0 + *(longlong *)(param_2 + 0x18)) +
                (longlong)param_4 * 8), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *param_1 = 0;
  param_1[1] = CONCAT44(uStack_c,0xffffffff);
  return param_1;
}





// 函数: void FUN_1804579ed(uint64_t param_1,longlong param_2,longlong param_3,uint64_t param_4,
void FUN_1804579ed(uint64_t param_1,longlong param_2,longlong param_3,uint64_t param_4,
                  uint64_t param_5)

{
  longlong *plVar1;
  longlong in_RAX;
  uint64_t *unaff_RDI;
  
  plVar1 = *(longlong **)(*(longlong *)(param_3 + 0xb0 + in_RAX) + param_2 * 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *unaff_RDI = 0;
  unaff_RDI[1] = CONCAT44(param_5._4_4_,0xffffffff);
  return;
}





// 函数: void FUN_180457a1a(void)
void FUN_180457a1a(void)

{
  uint64_t *unaff_RDI;
  uint64_t in_stack_00000028;
  
  *unaff_RDI = 0;
  unaff_RDI[1] = CONCAT44(in_stack_00000028._4_4_,0xffffffff);
  return;
}





// 函数: void FUN_180457be0(longlong param_1,uint64_t param_2,int32_t param_3,int8_t param_4)
void FUN_180457be0(longlong param_1,uint64_t param_2,int32_t param_3,int8_t param_4)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1802ebcb0(*(longlong *)(param_1 + 0x10),param_3,param_4);
      if ((*(float *)(param_1 + 0x3c) < 0.0) ||
         (*(float *)(param_1 + 0x34) <= *(float *)(param_1 + 0x3c))) {
        param_1 = *(longlong *)(param_1 + 0x28);
        if (param_1 == 0) {
          return;
        }
        if (*(float *)(param_1 + 0x3c) < 0.0) {
          return;
        }
        if (*(float *)(param_1 + 0x34) <= *(float *)(param_1 + 0x3c)) {
          return;
        }
        if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
          return;
        }
        lVar1 = *(longlong *)(param_1 + 0x10);
      }
      else {
        lVar1 = *(longlong *)(param_1 + 0x28);
        if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0xa8) & 1) == 0)) {
          FUN_1802fac00(lVar1,*(longlong *)(lVar1 + 0x10) + 0x70,0xbf800000);
        }
        if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
          return;
        }
        lVar1 = *(longlong *)(param_1 + 0x10);
      }
                    // WARNING: Subroutine does not return
      FUN_1808fd200(param_1,lVar1 + 0x70,0xbf800000);
    }
    FUN_1802fa820(param_1,param_3,param_2);
    FUN_1803005b0(param_1);
  }
  return;
}





// 函数: void FUN_180457c60(longlong param_1,char param_2,char param_3,uint64_t *param_4)
void FUN_180457c60(longlong param_1,char param_2,char param_3,uint64_t *param_4)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    if (param_3 != '\0') {
      param_2 = *(char *)((longlong)param_2 + 0xc0 + *(longlong *)(param_1 + 0x208));
    }
    lVar4 = (longlong)param_2 * 0x1b0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 0x140);
    uVar3 = ((uint64_t *)(lVar4 + lVar2))[1];
    *param_4 = *(uint64_t *)(lVar4 + lVar2);
    param_4[1] = uVar3;
    puVar1 = (uint64_t *)(lVar4 + 0x10 + lVar2);
    uVar3 = puVar1[1];
    param_4[2] = *puVar1;
    param_4[3] = uVar3;
    puVar1 = (uint64_t *)(lVar4 + 0x20 + lVar2);
    uVar3 = puVar1[1];
    param_4[4] = *puVar1;
    param_4[5] = uVar3;
    puVar1 = (uint64_t *)(lVar4 + 0x30 + lVar2);
    uVar3 = puVar1[1];
    param_4[6] = *puVar1;
    param_4[7] = uVar3;
    return;
  }
  FUN_180626f80(&UNK_180a2a770);
  *param_4 = 0x3f800000;
  param_4[1] = 0;
  param_4[2] = 0x3f80000000000000;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[5] = 0x3f800000;
  param_4[6] = 0;
  param_4[7] = 0x3f80000000000000;
  return;
}





// 函数: void FUN_180457d00(longlong param_1,char param_2,char param_3,uint64_t *param_4)
void FUN_180457d00(longlong param_1,char param_2,char param_3,uint64_t *param_4)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    if (param_3 != '\0') {
      param_2 = *(char *)((longlong)param_2 + 0xc0 + *(longlong *)(param_1 + 0x208));
    }
    lVar4 = (longlong)param_2 * 0x1b0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 0x140);
    puVar1 = (uint64_t *)(lVar4 + 0x50 + lVar2);
    uVar3 = puVar1[1];
    *param_4 = *puVar1;
    param_4[1] = uVar3;
    puVar1 = (uint64_t *)(lVar4 + 0x60 + lVar2);
    uVar3 = puVar1[1];
    param_4[2] = *puVar1;
    param_4[3] = uVar3;
    puVar1 = (uint64_t *)(lVar4 + 0x70 + lVar2);
    uVar3 = puVar1[1];
    param_4[4] = *puVar1;
    param_4[5] = uVar3;
    puVar1 = (uint64_t *)(lVar4 + 0x80 + lVar2);
    uVar3 = puVar1[1];
    param_4[6] = *puVar1;
    param_4[7] = uVar3;
    return;
  }
  FUN_180626f80(&UNK_180a2a7c0);
  *param_4 = 0x3f800000;
  param_4[1] = 0;
  param_4[2] = 0x3f80000000000000;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[5] = 0x3f800000;
  param_4[6] = 0;
  param_4[7] = 0x3f80000000000000;
  return;
}





// 函数: void FUN_180457db0(uint64_t param_1)
void FUN_180457db0(uint64_t param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *aplStackX_8 [4];
  
  plVar2 = (longlong *)FUN_1802fc690(param_1,aplStackX_8,3,0,0xfffffffffffffffe);
  lVar1 = *plVar2;
  if (aplStackX_8[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_8[0] + 0x38))();
  }
  if (lVar1 != 0) {
    *(int8_t *)(lVar1 + 0x44) = 1;
  }
  return;
}





// 函数: void FUN_180457e60(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180457e60(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *aplStackX_10 [2];
  longlong **pplStackX_20;
  
  cVar1 = FUN_1802fc790();
  if (param_2 != (longlong *)0x0) {
    if (cVar1 == -1) {
      plVar2 = (longlong *)
               FUN_1802f4600(*(uint64_t *)(param_1 + 0x1a8),*(uint64_t *)(param_1 + 0x1b0),
                             param_2);
      if (plVar2 != *(longlong **)(param_1 + 0x1b0)) {
        param_2 = (longlong *)*plVar2;
        (**(code **)(*param_2 + 0x1e0))(param_2,0);
        if ((*(longlong *)(param_1 + 0x10) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) != 0)) {
          FUN_1802549d0(param_2);
        }
        *(int32_t *)(param_2 + 2) = 4;
        *(int32_t *)((longlong)param_2 + 0x14) = 1;
        *(int32_t *)(param_2 + 3) = 0;
        *(int32_t *)((longlong)param_2 + 0x1c) = 0;
        param_2[4] = 0;
        FUN_1800ba050(param_1 + 0x1a8,plVar2);
      }
      lVar3 = FUN_1802f4600(*(uint64_t *)(param_1 + 0x1c8),*(uint64_t *)(param_1 + 0x1d0),
                            param_2);
      if (lVar3 != *(longlong *)(param_1 + 0x1d0)) {
        FUN_1800ba050(param_1 + 0x1c8,lVar3);
      }
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x18);
      pplStackX_20 = aplStackX_10;
      aplStackX_10[0] = param_2;
      (**(code **)(*param_2 + 0x28))(param_2,param_2,cVar1,param_4,0xfffffffffffffffe);
      FUN_1802f9710((longlong)cVar1 * 0x100 + lVar3,aplStackX_10,param_1);
    }
    if (0.0 <= *(float *)(param_1 + 0x3c)) {
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x3c) + 1.1920929e-07;
      return;
    }
    *(int32_t *)(param_1 + 0x34) = 0x3dcccccd;
  }
  return;
}





// 函数: void FUN_180457ea0(void)
void FUN_180457ea0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180457ef3(void)
void FUN_180457ef3(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong unaff_RBP;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_R13;
  
  lVar2 = 0x40;
  lVar3 = 0x40;
  lVar4 = unaff_RBP + 0x20;
  do {
    func_0x000180074f10(lVar4);
    lVar4 = lVar4 + 0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar4 = unaff_RBP + 0x840;
  do {
    func_0x000180074f10(lVar4);
    lVar4 = lVar4 + 0x10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  plVar1 = *(longlong **)(unaff_R13 + 0x210);
  *(int8_t *)(unaff_RBP + 0x1060) = 0;
  *(uint64_t *)(unaff_RBP + 0x830) = 0;
  (**(code **)(*plVar1 + 0x38))();
                    // WARNING: Subroutine does not return
  memset(unaff_RBP + 0x20,0,0x1050);
}





// 函数: void FUN_180457fb0(void)
void FUN_180457fb0(void)

{
  int32_t *puVar1;
  int32_t *puVar2;
  longlong *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  char in_AL;
  char cVar15;
  byte bVar16;
  uint64_t uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int32_t *unaff_RBP;
  int32_t unaff_ESI;
  longlong lVar20;
  char unaff_R12B;
  longlong unaff_R13;
  longlong unaff_R14;
  int32_t *unaff_R15;
  int32_t in_stack_00000030;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  int32_t uStack0000000000000078;
  int32_t uStack000000000000007c;
  
  uVar18 = *(ulonglong *)(unaff_RBP + 0x20c);
  uVar19 = *(ulonglong *)(unaff_RBP + 0x208);
  do {
    uVar18 = uVar18 | 1L << ((longlong)in_AL & 0x3fU);
    uVar19 = uVar19 | uVar18;
    *(ulonglong *)(unaff_RBP + 0x20c) = uVar18;
    *(ulonglong *)(unaff_RBP + 0x208) = uVar19;
    in_AL = *(char *)((longlong)in_AL + 0x100U + unaff_R14);
  } while (-1 < in_AL);
  plVar3 = *(longlong **)(unaff_R13 + 0x210);
  unaff_RBP[-0x1c] = 0x3f800000;
  unaff_RBP[-0x1b] = 0;
  unaff_RBP[-0x1a] = 0;
  unaff_RBP[-0x19] = 0;
  unaff_RBP[-0x18] = 0;
  unaff_RBP[-0x17] = 0;
  unaff_RBP[-0x16] = 0;
  unaff_RBP[-0x15] = 0x3f800000;
  unaff_RBP[-0x14] = 0x3f800000;
  unaff_RBP[-0x13] = 0;
  unaff_RBP[-0x12] = 0;
  unaff_RBP[-0x11] = 0;
  unaff_RBP[-0x10] = 0;
  unaff_RBP[-0xf] = 0;
  unaff_RBP[-0xe] = 0;
  unaff_RBP[-0xd] = 0x3f800000;
  unaff_RBP[-0xc] = 0;
  unaff_RBP[-0xb] = 0;
  unaff_RBP[-10] = 0;
  unaff_RBP[-9] = 0;
  *(int16_t *)(unaff_RBP + -8) = 0xffff;
  *(char *)((longlong)unaff_RBP + -0x1e) = (char)unaff_ESI;
  uStack0000000000000040 = 0x3f800000;
  uStack0000000000000044 = 0;
  uStack0000000000000048 = 0;
  uStack000000000000004c = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  uStack0000000000000058 = 0;
  uStack000000000000005c = 0x3f800000;
  uStack0000000000000060 = 0x3f800000;
  uStack0000000000000064 = 0;
  uStack0000000000000068 = 0;
  uStack000000000000006c = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000074 = 0;
  uStack0000000000000078 = 0;
  uStack000000000000007c = 0x3f800000;
  *(int16_t *)(unaff_RBP + -0x20) = 0xffff;
  unaff_RBP[-0x1f] = unaff_ESI;
  *(short *)(unaff_RBP + -0x1e) = (short)unaff_ESI;
  (**(code **)(*plVar3 + 0x50))
            (plVar3,in_stack_00000030,unaff_RBP + 8,unaff_RBP + -0x1c,&stack0x00000040);
  func_0x000180435370(unaff_RBP + 8);
  cVar15 = (**(code **)(**(longlong **)(unaff_R13 + 0x210) + 0x38))();
  if (cVar15 != '\0') {
    cVar15 = *(char *)(unaff_RBP + 0x418);
    bVar16 = 0;
    if ('\0' < cVar15) {
      do {
        if ((*(ulonglong *)(unaff_RBP + 0x20c) >> ((ulonglong)bVar16 & 0x3f) & 1) != 0) {
          lVar20 = (longlong)(char)bVar16 * 0x1b0;
          puVar1 = (int32_t *)(*(longlong *)(unaff_R14 + 0x140) + 0x80 + lVar20);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          puVar2 = unaff_RBP + (longlong)(char)bVar16 * 4 + 0x310;
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          cVar15 = *(char *)(unaff_RBP + 0x418);
          *(ulonglong *)(unaff_RBP + 0x208) =
               *(ulonglong *)(unaff_RBP + 0x208) |
               *(ulonglong *)(*(longlong *)(unaff_R14 + 0x140) + 0xe8 + lVar20);
        }
        bVar16 = bVar16 + 1;
      } while ((char)bVar16 < cVar15);
    }
  }
  uVar17 = FUN_18022a890(unaff_RBP + 8,unaff_R12B);
  FUN_18063b5f0(unaff_RBP + -4,uVar17);
  uVar4 = unaff_RBP[-3];
  uVar5 = unaff_RBP[-2];
  uVar6 = unaff_RBP[-1];
  uVar7 = *unaff_RBP;
  uVar8 = unaff_RBP[1];
  uVar9 = unaff_RBP[2];
  uVar10 = unaff_RBP[3];
  uVar11 = unaff_RBP[4];
  uVar12 = unaff_RBP[5];
  uVar13 = unaff_RBP[6];
  uVar14 = unaff_RBP[7];
  *unaff_R15 = unaff_RBP[-4];
  unaff_R15[1] = uVar4;
  unaff_R15[2] = uVar5;
  unaff_R15[3] = uVar6;
  unaff_R15[4] = uVar7;
  unaff_R15[5] = uVar8;
  unaff_R15[6] = uVar9;
  unaff_R15[7] = uVar10;
  puVar1 = unaff_RBP + (longlong)unaff_R12B * 4 + 0x108;
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  unaff_R15[8] = uVar11;
  unaff_R15[9] = uVar12;
  unaff_R15[10] = uVar13;
  unaff_R15[0xb] = uVar14;
  unaff_R15[0xc] = uVar4;
  unaff_R15[0xd] = uVar5;
  unaff_R15[0xe] = uVar6;
  unaff_R15[0xf] = uVar7;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x41c) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180458085(void)
void FUN_180458085(void)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  byte bVar14;
  uint64_t uVar15;
  int32_t *unaff_RBP;
  char cVar16;
  longlong lVar17;
  char unaff_R12B;
  longlong unaff_R14;
  int32_t *unaff_R15;
  
  cVar16 = *(char *)(unaff_RBP + 0x418);
  bVar14 = 0;
  if ('\0' < cVar16) {
    do {
      if ((*(ulonglong *)(unaff_RBP + 0x20c) >> ((ulonglong)bVar14 & 0x3f) & 1) != 0) {
        lVar17 = (longlong)(char)bVar14 * 0x1b0;
        puVar1 = (int32_t *)(*(longlong *)(unaff_R14 + 0x140) + 0x80 + lVar17);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar2 = unaff_RBP + (longlong)(char)bVar14 * 4 + 0x310;
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        cVar16 = *(char *)(unaff_RBP + 0x418);
        *(ulonglong *)(unaff_RBP + 0x208) =
             *(ulonglong *)(unaff_RBP + 0x208) |
             *(ulonglong *)(*(longlong *)(unaff_R14 + 0x140) + 0xe8 + lVar17);
      }
      bVar14 = bVar14 + 1;
    } while ((char)bVar14 < cVar16);
  }
  uVar15 = FUN_18022a890(unaff_RBP + 8,unaff_R12B);
  FUN_18063b5f0(unaff_RBP + -4,uVar15);
  uVar3 = unaff_RBP[-3];
  uVar4 = unaff_RBP[-2];
  uVar5 = unaff_RBP[-1];
  uVar6 = *unaff_RBP;
  uVar7 = unaff_RBP[1];
  uVar8 = unaff_RBP[2];
  uVar9 = unaff_RBP[3];
  uVar10 = unaff_RBP[4];
  uVar11 = unaff_RBP[5];
  uVar12 = unaff_RBP[6];
  uVar13 = unaff_RBP[7];
  *unaff_R15 = unaff_RBP[-4];
  unaff_R15[1] = uVar3;
  unaff_R15[2] = uVar4;
  unaff_R15[3] = uVar5;
  unaff_R15[4] = uVar6;
  unaff_R15[5] = uVar7;
  unaff_R15[6] = uVar8;
  unaff_R15[7] = uVar9;
  puVar1 = unaff_RBP + (longlong)unaff_R12B * 4 + 0x108;
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  unaff_R15[8] = uVar10;
  unaff_R15[9] = uVar11;
  unaff_R15[10] = uVar12;
  unaff_R15[0xb] = uVar13;
  unaff_R15[0xc] = uVar3;
  unaff_R15[0xd] = uVar4;
  unaff_R15[0xe] = uVar5;
  unaff_R15[0xf] = uVar6;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x41c) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18045814f(void)
void FUN_18045814f(void)

{
  longlong unaff_RBP;
  uint64_t *in_R9;
  
  *in_R9 = 0x3f800000;
  in_R9[1] = 0;
  in_R9[2] = 0x3f80000000000000;
  in_R9[3] = 0;
  *(int32_t *)(in_R9 + 4) = 0;
  *(int32_t *)((longlong)in_R9 + 0x24) = 0;
  *(int32_t *)(in_R9 + 5) = 0x3f800000;
  *(int32_t *)((longlong)in_R9 + 0x2c) = 0;
  *(int32_t *)(in_R9 + 6) = 0;
  *(int32_t *)((longlong)in_R9 + 0x34) = 0;
  *(int32_t *)(in_R9 + 7) = 0;
  *(int32_t *)((longlong)in_R9 + 0x3c) = 0x3f800000;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1070) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1804581a0(longlong param_1)

{
  int32_t uVar1;
  longlong lVar2;
  void *puVar3;
  void *puStack_30;
  longlong lStack_28;
  int32_t uStack_20;
  uint64_t uStack_18;
  
  puStack_30 = &UNK_180a3c3e0;
  uStack_18 = 0;
  lStack_28 = 0;
  uStack_20 = 0;
  if ((param_1 != 0) && (*(longlong **)(param_1 + 0x210) != (longlong *)0x0)) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0xb0))();
    if (lVar2 != 0) {
      puVar3 = &DAT_18098bc73;
      if (*(void **)(lVar2 + 0x18) != (void *)0x0) {
        puVar3 = *(void **)(lVar2 + 0x18);
      }
      (**(code **)(puStack_30 + 0x10))(&puStack_30,puVar3);
    }
  }
  uVar1 = (**(code **)(*_DAT_180c8f008 + 0x70))(_DAT_180c8f008,&puStack_30);
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar1;
}



int32_t FUN_180458280(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (*(longlong **)(param_1 + 0x210) != (longlong *)0x0)) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0xb0))();
    if (lVar1 != 0) {
      return *(int32_t *)(lVar1 + 0x68);
    }
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804582c0(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804582c0(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plStack_50;
  longlong *plStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  
  plStack_50 = (longlong *)0x0;
  plStack_48 = (longlong *)0x0;
  uStack_40 = 0;
  uStack_38 = 3;
  FUN_1802fdc90(0,&plStack_50,0xffffffff,param_4,0xfffffffffffffffe);
  plVar6 = plStack_50;
  if (plStack_50 != plStack_48) {
    do {
      plVar1 = (longlong *)*plVar6;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plVar5 = *(longlong **)(param_2 + 0x18);
      if (plVar5 < *(longlong **)(param_2 + 0x20)) {
        *(longlong **)(param_2 + 0x18) = plVar5 + 1;
        *plVar5 = (longlong)plVar1;
      }
      else {
        plVar3 = *(longlong **)(param_2 + 0x10);
        lVar4 = (longlong)plVar5 - (longlong)plVar3 >> 3;
        if (lVar4 == 0) {
          lVar4 = 1;
LAB_180458382:
          plVar2 = (longlong *)
                   FUN_18062b420(_DAT_180c8ed18,lVar4 * 8,*(int8_t *)(param_2 + 0x28));
          plVar5 = *(longlong **)(param_2 + 0x18);
          plVar3 = *(longlong **)(param_2 + 0x10);
          plVar7 = plVar2;
        }
        else {
          lVar4 = lVar4 * 2;
          plVar2 = (longlong *)0x0;
          plVar7 = (longlong *)0x0;
          if (lVar4 != 0) goto LAB_180458382;
        }
        for (; plVar3 != plVar5; plVar3 = plVar3 + 1) {
          *plVar2 = *plVar3;
          *plVar3 = 0;
          plVar2 = plVar2 + 1;
        }
        *plVar2 = (longlong)plVar1;
        plVar1 = *(longlong **)(param_2 + 0x18);
        plVar5 = *(longlong **)(param_2 + 0x10);
        if (plVar5 != plVar1) {
          do {
            if ((longlong *)*plVar5 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar5 + 0x38))();
            }
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar1);
          plVar5 = *(longlong **)(param_2 + 0x10);
        }
        if (plVar5 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar5);
        }
        *(longlong **)(param_2 + 0x10) = plVar7;
        *(longlong **)(param_2 + 0x18) = plVar2 + 1;
        *(longlong **)(param_2 + 0x20) = plVar7 + lVar4;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plStack_48);
  }
  if (plStack_50 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180458460(longlong param_1,longlong param_2)
void FUN_180458460(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int8_t auStack_8b8 [32];
  longlong *plStack_898;
  uint64_t uStack_888;
  void *puStack_878;
  int8_t *puStack_870;
  int32_t uStack_868;
  int8_t auStack_860 [1032];
  void *puStack_458;
  int8_t *puStack_450;
  int32_t uStack_448;
  int8_t auStack_440 [1032];
  ulonglong uStack_38;
  
  uStack_888 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_8b8;
  puStack_458 = &UNK_18098bb30;
  puStack_450 = auStack_440;
  uStack_448 = 0;
  auStack_440[0] = 0;
  lVar2 = -1;
  lVar1 = lVar2;
  if (param_1 != 0) {
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_1 + lVar1) != '\0');
    uStack_448 = (int32_t)lVar1;
    strcpy_s(auStack_440,0x400,param_1);
  }
  FUN_1800b3970();
  if (plStack_898 != (longlong *)0x0) {
    puStack_878 = &UNK_18098bb30;
    puStack_870 = auStack_860;
    uStack_868 = 0;
    auStack_860[0] = 0;
    if (param_2 != 0) {
      do {
        lVar2 = lVar2 + 1;
      } while (*(char *)(param_2 + lVar2) != '\0');
      uStack_868 = (int32_t)lVar2;
      strcpy_s(auStack_860,0x400,param_2);
    }
    FUN_18040b330(plStack_898,&puStack_878,1);
    puStack_878 = &UNK_18098bcb0;
  }
  if (plStack_898 != (longlong *)0x0) {
    (**(code **)(*plStack_898 + 0x38))();
  }
  puStack_458 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_8b8);
}



int32_t FUN_1804585e0(uint64_t param_1)

{
  longlong lVar1;
  longlong *plStackX_18;
  void *puStack_30;
  longlong lStack_28;
  int32_t uStack_18;
  
  FUN_180627910(&puStack_30,param_1);
  FUN_180157390();
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_28 = 0;
  uStack_18 = 0;
  puStack_30 = &UNK_18098bcb0;
  lVar1 = plStackX_18[10];
  if (plStackX_18 != (longlong *)0x0) {
    (**(code **)(*plStackX_18 + 0x38))();
  }
  return (int)lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_180458680(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  int32_t uVar2;
  void *puStack_30;
  longlong lStack_28;
  
  pcVar1 = *(code **)(*_DAT_180c86878 + 0xd0);
  FUN_180627910(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  uVar2 = (*pcVar1)(_DAT_180c86878,&puStack_30);
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180458740(int32_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180458740(int32_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *aplStackX_10 [3];
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if (*(char *)(_DAT_180c86878 + 0x210) == '\0') {
    FUN_180158990(_DAT_180c86878,aplStackX_10,param_1,param_4,0xfffffffffffffffe);
    if (aplStackX_10[0] != (longlong *)0x0) {
      uStack_18 = *param_2;
      uStack_14 = param_2[1];
      uStack_10 = param_2[2];
      uStack_c = param_2[3];
      (**(code **)(*aplStackX_10[0] + 0xf0))(aplStackX_10[0],&uStack_18);
    }
    if (aplStackX_10[0] != (longlong *)0x0) {
      (**(code **)(*aplStackX_10[0] + 0x38))();
    }
  }
  return;
}



int32_t FUN_1804587b0(ulonglong param_1,uint64_t param_2)

{
  longlong lVar1;
  longlong *aplStackX_18 [2];
  
  FUN_180157b70(param_1,aplStackX_18,param_1 & 0xffffffff,param_2,1);
  lVar1 = aplStackX_18[0][10];
  if (aplStackX_18[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_18[0] + 0x38))();
  }
  return (int)lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180458800(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  uint64_t uVar2;
  longlong *aplStackX_10 [3];
  
  FUN_180158990(_DAT_180c86878,aplStackX_10,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_10[0] != (longlong *)0x0) {
    cVar1 = (**(code **)(*aplStackX_10[0] + 0xd8))();
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_180458841;
    }
  }
  uVar2 = 0;
LAB_180458841:
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180458860(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180458860(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *aplStackX_10 [3];
  
  FUN_180158990(_DAT_180c86878,aplStackX_10,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



