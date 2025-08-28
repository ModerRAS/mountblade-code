#include "TaleWorlds.Native.Split.h"

// 05_networking_part081.c - 2 个函数

// 函数: void FUN_18088af30(longlong param_1,undefined8 param_2,undefined1 param_3)
void FUN_18088af30(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined1 auStack_2b8 [32];
  longlong *plStack_298;
  undefined1 uStack_290;
  undefined1 uStack_288;
  longlong lStack_278;
  undefined4 uStack_270;
  uint uStack_26c;
  int aiStack_268 [2];
  longlong lStack_260;
  longlong lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 auStack_228 [2];
  undefined8 uStack_220;
  undefined8 auStack_218 [48];
  uint uStack_98;
  undefined1 auStack_94 [4];
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_2b8;
  if (((((*(uint *)(param_1 + 0x24) >> 1 & 1) == 0) ||
       (iVar2 = FUN_1808673a0(*(undefined8 *)(param_1 + 0x80)), iVar2 != 0)) ||
      (iVar2 = FUN_180882400(param_1), iVar2 != 0)) ||
     ((*(longlong *)(param_1 + 0x90) == 0 ||
      (iVar2 = FUN_1808c26e0(*(longlong *)(param_1 + 0x90),param_2,param_3,
                             *(undefined8 *)(param_1 + 0xad0)), iVar2 != 0)))) goto FUN_18088b503;
  lVar4 = *(longlong *)(param_1 + 0xa8);
  if (((*(byte *)(param_1 + 0x24) & 1) == 0) && (*(longlong *)(lVar4 + 0x48) == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  iVar2 = 0;
  if ((*(char *)(lVar4 + 0x5d) != '\0') || (*(char *)(lVar4 + 100) != '\0')) {
    auStack_228[0] = 5;
    uStack_220 = func_0x0001808e3470(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x4d0),
                                     *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x774));
    lVar4 = *(longlong *)(param_1 + 0x90);
    iStack_88 = *(int *)(lVar4 + 0x550);
    if (0 < iStack_88) {
      puVar3 = auStack_218;
      puVar6 = (undefined8 *)(lVar4 + 0x554);
      do {
        uVar5 = puVar6[1];
        iVar2 = iVar2 + 1;
        *puVar3 = *puVar6;
        puVar3[1] = uVar5;
        uVar5 = puVar6[3];
        puVar3[2] = puVar6[2];
        puVar3[3] = uVar5;
        uVar5 = puVar6[5];
        puVar3[4] = puVar6[4];
        puVar3[5] = uVar5;
        puVar3 = puVar3 + 6;
        puVar6 = (undefined8 *)((longlong)puVar6 + 0x44);
      } while (iVar2 < iStack_88);
    }
    uStack_98 = (uint)(*(char *)(lVar4 + 0x781) != '\0');
    iVar2 = FUN_180738630(auStack_94,0,0);
    if (((iVar2 != 0) ||
        (iVar2 = func_0x00018088e470(*(undefined8 *)(param_1 + 0x98),&uStack_270), iVar2 != 0)) ||
       (iVar2 = FUN_180739890(*(undefined8 *)(param_1 + 0x78),&uStack_240), iVar2 != 0))
    goto FUN_18088b503;
    uStack_84 = uStack_240;
    uStack_7c = uStack_238;
    lStack_260 = 0;
    uStack_74 = uStack_230;
    uStack_6c = uStack_270;
    uStack_70 = uStack_22c;
    lStack_258 = 0;
    lStack_278 = 0;
    iVar2 = FUN_18073a0c0(*(undefined8 *)(param_1 + 0x78),&lStack_260,&lStack_258,&lStack_278);
    if (iVar2 != 0) goto FUN_18088b503;
    lStack_60 = lStack_260 - *(longlong *)(param_1 + 200);
    lStack_58 = lStack_258 - *(longlong *)(param_1 + 0xd0);
    lStack_68 = lStack_278 - *(longlong *)(param_1 + 0xd8);
    *(longlong *)(param_1 + 0xd8) = lStack_278;
    *(longlong *)(param_1 + 200) = lStack_260;
    *(longlong *)(param_1 + 0xd0) = lStack_258;
    iVar2 = FUN_18073a840(*(undefined8 *)(param_1 + 0x78),aiStack_268,0,0);
    if ((iVar2 != 0) ||
       (iVar2 = FUN_180739a50(*(undefined8 *)(param_1 + 0x78),&uStack_26c,0), iVar2 != 0))
    goto FUN_18088b503;
    uStack_50 = 0;
    uStack_48 = 0;
    iStack_90 = (int)(((float)uStack_26c / (float)aiStack_268[0]) * 1e+06);
    iStack_8c = (int)((float)*(int *)(param_1 + 0x2cc) * 1000.0);
    iVar2 = FUN_1808e3830(auStack_228,&uStack_250);
    if ((iVar2 != 0) ||
       (iVar2 = FUN_1808e30d0(*(undefined8 *)(param_1 + 0xa8),uStack_250), iVar2 != 0))
    goto FUN_18088b503;
  }
  lVar4 = *(longlong *)(param_1 + 0xa8);
  if ((*(char *)(lVar4 + 0x5e) != '\0') || (*(char *)(lVar4 + 0x65) != '\0')) {
    func_0x0001808e3b80(auStack_228);
    iVar2 = FUN_1808e55b0(auStack_228,param_1,uVar7);
    if ((iVar2 != 0) ||
       (((iVar2 = FUN_1808bc3a0(*(undefined8 *)(param_1 + 0x90),auStack_228), iVar2 != 0 ||
         (iVar2 = func_0x0001808e57e0(auStack_228,&uStack_250), iVar2 != 0)) ||
        (iVar2 = FUN_1808e30d0(*(undefined8 *)(param_1 + 0xa8),uStack_250), iVar2 != 0)))) {
      FUN_180872ef0(&uStack_220);
      goto FUN_18088b503;
    }
    FUN_180872ef0(&uStack_220);
    lVar4 = *(longlong *)(param_1 + 0xa8);
  }
  if ((*(char *)(lVar4 + 0x62) != '\0') || (*(char *)(lVar4 + 0x69) != '\0')) {
    FUN_1808e3be0(auStack_228);
    iVar2 = FUN_1808e5790(auStack_228,param_1,uVar7);
    if (((iVar2 != 0) ||
        ((iVar2 = FUN_1808bc650(*(undefined8 *)(param_1 + 0x90),auStack_228), iVar2 != 0 ||
         (iVar2 = thunk_FUN_1808e3970(auStack_228,&uStack_250), iVar2 != 0)))) ||
       (iVar2 = FUN_1808e30d0(*(undefined8 *)(param_1 + 0xa8),uStack_250), iVar2 != 0)) {
      FUN_180874340(auStack_218);
      goto FUN_18088b503;
    }
    FUN_180874340(auStack_218);
    lVar4 = *(longlong *)(param_1 + 0xa8);
  }
  if ((*(char *)(lVar4 + 0x60) == '\0') && (*(char *)(lVar4 + 0x67) == '\0')) {
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      iVar2 = FUN_1808e5eb0();
      if (iVar2 != 0) goto FUN_18088b503;
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
  }
  else if (*(longlong *)(param_1 + 0xb8) == 0) {
    lStack_278 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    iVar2 = FUN_18073a200(*(undefined8 *)(param_1 + 0x78),&lStack_278);
    if ((iVar2 != 0) ||
       (plStack_298 = (longlong *)(param_1 + 0xb8),
       iVar2 = FUN_1808e5d30(*(undefined8 *)(param_1 + 0xa8),&uStack_250,
                             *(undefined8 *)(param_1 + 0x78),lStack_278), iVar2 != 0))
    goto FUN_18088b503;
  }
  if ((*(char *)(*(longlong *)(param_1 + 0xa8) + 0x61) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x68) == '\0')) {
    if ((*(longlong *)(param_1 + 0xb0) != 0) &&
       (iVar2 = FUN_18088e8b0(*(undefined8 *)(param_1 + 0x98)), iVar2 == 0)) {
      puVar3 = *(undefined8 **)(param_1 + 0xb0);
      (**(code **)*puVar3)(puVar3,0);
      plStack_298 = (longlong *)CONCAT71(plStack_298._1_7_,1);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar3,&UNK_180985b90,0x17a);
    }
  }
  else if (*(longlong *)(param_1 + 0xb0) == 0) {
    bVar1 = *(byte *)(param_1 + 0x24);
    uStack_288 = 1;
    uStack_290 = 0;
    plStack_298 = (longlong *)((ulonglong)plStack_298 & 0xffffffff00000000);
    lVar4 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x38,&UNK_180985b90,0x171);
    if (lVar4 != 0) {
      uVar5 = func_0x0001808967b0(lVar4,param_1,(bVar1 & 1) << 0x18);
      *(undefined8 *)(param_1 + 0xb0) = uVar5;
      FUN_18088cee0(*(undefined8 *)(param_1 + 0x98),uVar5,0);
    }
  }
FUN_18088b503:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_2b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18088afd0(void)
void FUN_18088afd0(void)

{
  int iVar1;
  longlong in_RAX;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong *in_stack_00000020;
  longlong *plVar7;
  longlong in_stack_00000040;
  undefined4 uStack0000000000000048;
  uint uStack000000000000004c;
  int in_stack_00000050;
  longlong in_stack_00000058;
  longlong in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  iVar6 = 0;
  if ((*(char *)(in_RAX + 0x5d) != '\0') || (*(char *)(in_RAX + 100) != '\0')) {
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    *(undefined4 *)(unaff_RBP + -0x70) = 5;
    uVar2 = func_0x0001808e3470(*(undefined8 *)(lVar4 + 0x4d0),*(undefined4 *)(lVar4 + 0x774));
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    *(undefined8 *)(unaff_RBP + -0x68) = uVar2;
    iVar1 = *(int *)(lVar4 + 0x550);
    *(int *)(unaff_RBP + 0x130) = iVar1;
    if (0 < iVar1) {
      puVar3 = (undefined8 *)(unaff_RBP + -0x60);
      puVar5 = (undefined8 *)(lVar4 + 0x554);
      do {
        uVar2 = puVar5[1];
        iVar6 = iVar6 + 1;
        *puVar3 = *puVar5;
        puVar3[1] = uVar2;
        uVar2 = puVar5[3];
        puVar3[2] = puVar5[2];
        puVar3[3] = uVar2;
        uVar2 = puVar5[5];
        puVar3[4] = puVar5[4];
        puVar3[5] = uVar2;
        puVar3 = puVar3 + 6;
        puVar5 = (undefined8 *)((longlong)puVar5 + 0x44);
      } while (iVar6 < *(int *)(unaff_RBP + 0x130));
    }
    *(undefined4 *)(unaff_RBP + 0x120) = 0;
    *(uint *)(unaff_RBP + 0x120) = (uint)(*(char *)(lVar4 + 0x781) != '\0');
    iVar6 = FUN_180738630(unaff_RBP + 0x124,0,0);
    if (((iVar6 != 0) ||
        (iVar6 = func_0x00018088e470(*(undefined8 *)(unaff_RDI + 0x98),&stack0x00000048), iVar6 != 0
        )) || (iVar6 = FUN_180739890(*(undefined8 *)(unaff_RDI + 0x78),&stack0x00000078), iVar6 != 0
              )) goto LAB_18088b4fb;
    uVar2 = *(undefined8 *)(unaff_RDI + 0x78);
    *(undefined8 *)(unaff_RBP + 0x134) = in_stack_00000078;
    *(undefined8 *)(unaff_RBP + 0x13c) = in_stack_00000080;
    in_stack_00000058 = 0;
    *(undefined4 *)(unaff_RBP + 0x144) = *(undefined4 *)(unaff_RBP + -0x78);
    *(undefined4 *)(unaff_RBP + 0x14c) = uStack0000000000000048;
    *(undefined4 *)(unaff_RBP + 0x148) = *(undefined4 *)(unaff_RBP + -0x74);
    in_stack_00000060 = 0;
    in_stack_00000040 = 0;
    iVar6 = FUN_18073a0c0(uVar2,&stack0x00000058,&stack0x00000060,&stack0x00000040);
    if (iVar6 != 0) goto LAB_18088b4fb;
    *(longlong *)(unaff_RBP + 0x158) = in_stack_00000058 - *(longlong *)(unaff_RDI + 200);
    *(longlong *)(unaff_RBP + 0x160) = in_stack_00000060 - *(longlong *)(unaff_RDI + 0xd0);
    lVar4 = *(longlong *)(unaff_RDI + 0xd8);
    *(longlong *)(unaff_RDI + 0xd8) = in_stack_00000040;
    uVar2 = *(undefined8 *)(unaff_RDI + 0x78);
    *(longlong *)(unaff_RDI + 200) = in_stack_00000058;
    *(longlong *)(unaff_RDI + 0xd0) = in_stack_00000060;
    *(longlong *)(unaff_RBP + 0x150) = in_stack_00000040 - lVar4;
    iVar6 = FUN_18073a840(uVar2,&stack0x00000050,0,0);
    if ((iVar6 != 0) ||
       (iVar6 = FUN_180739a50(*(undefined8 *)(unaff_RDI + 0x78),(longlong)&stack0x00000048 + 4,0),
       iVar6 != 0)) goto LAB_18088b4fb;
    *(undefined8 *)(unaff_RBP + 0x168) = 0;
    *(undefined4 *)(unaff_RBP + 0x170) = 0;
    iVar6 = *(int *)(unaff_RDI + 0x2cc);
    *(int *)(unaff_RBP + 0x128) =
         (int)(((float)uStack000000000000004c / (float)in_stack_00000050) * 1e+06);
    *(int *)(unaff_RBP + 300) = (int)((float)iVar6 * 1000.0);
    iVar6 = FUN_1808e3830(unaff_RBP + -0x70,&stack0x00000068);
    if ((iVar6 != 0) ||
       (iVar6 = FUN_1808e30d0(*(undefined8 *)(unaff_RDI + 0xa8),in_stack_00000068), iVar6 != 0))
    goto LAB_18088b4fb;
  }
  lVar4 = *(longlong *)(unaff_RDI + 0xa8);
  if ((*(char *)(lVar4 + 0x5e) != '\0') || (*(char *)(lVar4 + 0x65) != '\0')) {
    func_0x0001808e3b80(unaff_RBP + -0x70);
    iVar6 = FUN_1808e55b0(unaff_RBP + -0x70);
    if ((iVar6 != 0) ||
       (((iVar6 = FUN_1808bc3a0(*(undefined8 *)(unaff_RDI + 0x90),unaff_RBP + -0x70), iVar6 != 0 ||
         (iVar6 = func_0x0001808e57e0(unaff_RBP + -0x70,&stack0x00000068), iVar6 != 0)) ||
        (iVar6 = FUN_1808e30d0(*(undefined8 *)(unaff_RDI + 0xa8),in_stack_00000068), iVar6 != 0))))
    {
      FUN_180872ef0(unaff_RBP + -0x68);
      goto LAB_18088b4fb;
    }
    FUN_180872ef0(unaff_RBP + -0x68);
    lVar4 = *(longlong *)(unaff_RDI + 0xa8);
  }
  if ((*(char *)(lVar4 + 0x62) != '\0') || (*(char *)(lVar4 + 0x69) != '\0')) {
    FUN_1808e3be0(unaff_RBP + -0x70);
    iVar6 = FUN_1808e5790(unaff_RBP + -0x70);
    if (((iVar6 != 0) ||
        ((iVar6 = FUN_1808bc650(*(undefined8 *)(unaff_RDI + 0x90),unaff_RBP + -0x70), iVar6 != 0 ||
         (iVar6 = thunk_FUN_1808e3970(unaff_RBP + -0x70,&stack0x00000068), iVar6 != 0)))) ||
       (iVar6 = FUN_1808e30d0(*(undefined8 *)(unaff_RDI + 0xa8),in_stack_00000068), iVar6 != 0)) {
      FUN_180874340(unaff_RBP + -0x60);
      goto LAB_18088b4fb;
    }
    FUN_180874340(unaff_RBP + -0x60);
    lVar4 = *(longlong *)(unaff_RDI + 0xa8);
  }
  if ((*(char *)(lVar4 + 0x60) == '\0') && (*(char *)(lVar4 + 0x67) == '\0')) {
    if (*(longlong *)(unaff_RDI + 0xb8) != 0) {
      iVar6 = FUN_1808e5eb0();
      if (iVar6 != 0) goto LAB_18088b4fb;
      *(undefined8 *)(unaff_RDI + 0xb8) = 0;
    }
  }
  else {
    plVar7 = (longlong *)(unaff_RDI + 0xb8);
    if (*plVar7 == 0) {
      in_stack_00000040 = 0;
      in_stack_00000068 = 0;
      in_stack_00000070 = 0;
      iVar6 = FUN_18073a200(*(undefined8 *)(unaff_RDI + 0x78),&stack0x00000040);
      if ((iVar6 != 0) ||
         (iVar6 = FUN_1808e5d30(*(undefined8 *)(unaff_RDI + 0xa8),&stack0x00000068,
                                *(undefined8 *)(unaff_RDI + 0x78),in_stack_00000040,plVar7),
         in_stack_00000020 = plVar7, iVar6 != 0)) goto LAB_18088b4fb;
    }
  }
  if ((*(char *)(*(longlong *)(unaff_RDI + 0xa8) + 0x61) == '\0') &&
     (*(char *)(*(longlong *)(unaff_RDI + 0xa8) + 0x68) == '\0')) {
    if ((*(longlong *)(unaff_RDI + 0xb0) != 0) &&
       (iVar6 = FUN_18088e8b0(*(undefined8 *)(unaff_RDI + 0x98)), iVar6 == 0)) {
      puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
      (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar3,&UNK_180985b90,0x17a,1);
    }
  }
  else if ((*(longlong *)(unaff_RDI + 0xb0) == 0) &&
          (lVar4 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x38,&UNK_180985b90,0x171,
                                 (ulonglong)in_stack_00000020 & 0xffffffff00000000), lVar4 != 0)) {
    uVar2 = func_0x0001808967b0(lVar4);
    *(undefined8 *)(unaff_RDI + 0xb0) = uVar2;
    FUN_18088cee0(*(undefined8 *)(unaff_RDI + 0x98),uVar2,0);
  }
LAB_18088b4fb:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x180) ^ (ulonglong)&stack0x00000000);
}





