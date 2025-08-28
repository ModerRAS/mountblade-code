#include "TaleWorlds.Native.Split.h"

// 99_part_05_part043.c - 12 个函数

// 函数: void FUN_1802f46d7(undefined8 *param_1,longlong param_2)
void FUN_1802f46d7(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *unaff_R14;
  
  puVar4 = (undefined8 *)((longlong)param_1 + param_2 + 0x18);
  param_1[0x103] = param_2 + 0x800;
  puVar5 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar3 = puVar4;
  if (puVar5 != puVar1) {
    do {
      *puVar3 = *puVar5;
      puVar3 = puVar3 + 1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar1);
    plVar2 = (longlong *)unaff_R14[1];
    for (plVar6 = (longlong *)*unaff_R14; plVar6 != plVar2; plVar6 = plVar6 + 1) {
      if ((longlong *)*plVar6 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar6 + 0x38))();
      }
    }
  }
  *unaff_R14 = puVar4;
  unaff_R14[1] = puVar3;
  unaff_R14[2] = puVar4 + 0x100;
  return;
}






// 函数: void FUN_1802f4770(void)
void FUN_1802f4770(void)

{
  return;
}






// 函数: void FUN_1802f4780(undefined8 *param_1)
void FUN_1802f4780(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  for (param_1 = (undefined8 *)*param_1; param_1 != puVar1; param_1 = param_1 + 0xb) {
    (**(code **)*param_1)(param_1,0);
  }
  return;
}






// 函数: void FUN_1802f47c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1802f47c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  if ((ulonglong)((param_1[2] - *param_1) / 0x58) < 0x400) {
    puVar8 = (undefined8 *)((longlong)param_1 + param_1[0x83] + 0x18);
    param_1[0x83] = param_1[0x83] + 0x16000;
    lVar1 = param_1[1];
    puVar4 = puVar8;
    if (*param_1 != lVar1) {
      lVar5 = *param_1 - (longlong)puVar8;
      do {
        *puVar4 = &UNK_18098bcb0;
        puVar4[1] = 0;
        *(undefined4 *)(puVar4 + 2) = 0;
        *puVar4 = &UNK_1809fcc58;
        puVar4[1] = puVar4 + 3;
        *(undefined4 *)(puVar4 + 2) = 0;
        *(undefined1 *)(puVar4 + 3) = 0;
        *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(lVar5 + 0x10 + (longlong)puVar4);
        puVar2 = *(undefined **)(lVar5 + 8 + (longlong)puVar4);
        puVar7 = &DAT_18098bc73;
        if (puVar2 != (undefined *)0x0) {
          puVar7 = puVar2;
        }
        strcpy_s(puVar4[1],0x40,puVar7,param_4,uVar9);
        puVar4 = puVar4 + 0xb;
      } while (lVar5 + (longlong)puVar4 != lVar1);
      puVar3 = (undefined8 *)param_1[1];
      for (puVar6 = (undefined8 *)*param_1; puVar6 != puVar3; puVar6 = puVar6 + 0xb) {
        (**(code **)*puVar6)(puVar6,0);
      }
    }
    *param_1 = (longlong)puVar8;
    param_1[1] = (longlong)puVar4;
    param_1[2] = (longlong)(puVar8 + 0x2c00);
  }
  return;
}



undefined8 *
FUN_1802f4910(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             longlong param_5)

{
  byte bVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte *pbVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plStackX_8;
  
  plVar4 = (longlong *)*param_1;
  if ((param_4 == plVar4) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (*(int *)(param_5 + 0x10) != 0)) {
      param_4 = plVar4;
      if (*(int *)(plVar4 + 6) != 0) {
        pbVar5 = *(byte **)(param_5 + 8);
        lVar7 = plVar4[5] - (longlong)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar7];
          if (bVar1 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_1802f4a27;
      }
LAB_1802f4a07:
      uVar8 = 0;
LAB_1802f4a0a:
      if (param_4 != (longlong *)0x0) {
        FUN_1802f51a0(param_1,param_2,param_4,uVar8,param_5);
        return param_2;
      }
    }
  }
  else {
    plVar4 = (longlong *)func_0x00018066bd70(param_4);
    if (*(int *)(param_5 + 0x10) != 0) {
      if ((int)param_4[6] != 0) {
        pbVar5 = *(byte **)(param_5 + 8);
        lVar7 = param_4[5] - (longlong)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar7];
          if (bVar1 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_1802f4a27;
      }
      if ((int)plVar4[6] != 0) {
        pbVar5 = (byte *)plVar4[5];
        lVar7 = *(longlong *)(param_5 + 8) - (longlong)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar7];
          if (bVar1 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        if (0 < (int)(bVar1 - uVar6)) {
          if (*param_4 == 0) goto LAB_1802f4a07;
          uVar8 = 1;
          param_4 = plVar4;
          goto LAB_1802f4a0a;
        }
      }
    }
  }
LAB_1802f4a27:
  bVar2 = true;
  plVar4 = (longlong *)param_1[2];
  plVar3 = param_1;
  while (plVar4 != (longlong *)0x0) {
    plVar3 = plVar4;
    if ((int)plVar4[6] == 0) {
      bVar2 = false;
LAB_1802f4a50:
      plVar4 = (longlong *)*plVar4;
    }
    else {
      if (*(int *)(param_5 + 0x10) == 0) {
        bVar2 = true;
      }
      else {
        pbVar5 = (byte *)plVar4[5];
        lVar7 = *(longlong *)(param_5 + 8) - (longlong)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar7];
          if (bVar1 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar6);
      }
      if (!bVar2) goto LAB_1802f4a50;
      plVar4 = (longlong *)plVar4[1];
    }
  }
  plVar4 = plVar3;
  if (bVar2) {
    if (plVar3 != (longlong *)param_1[1]) {
      plVar4 = (longlong *)func_0x00018066b9a0(plVar3);
      goto LAB_1802f4a70;
    }
  }
  else {
LAB_1802f4a70:
    if (*(int *)(param_5 + 0x10) == 0) goto LAB_1802f4ac4;
    if ((int)plVar4[6] != 0) {
      pbVar5 = *(byte **)(param_5 + 8);
      lVar7 = plVar4[5] - (longlong)pbVar5;
      do {
        bVar1 = *pbVar5;
        uVar6 = (uint)pbVar5[lVar7];
        if (bVar1 != uVar6) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_1802f4ac4;
    }
  }
  FUN_1802f51a0(param_1,&plStackX_8,plVar3,0,param_5);
  plVar4 = plStackX_8;
LAB_1802f4ac4:
  *param_2 = plVar4;
  return param_2;
}






// 函数: void FUN_1802f4b20(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1802f4b20(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1802f4b20(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    param_2[4] = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802f4b90(longlong param_1,ulonglong *param_2,undefined8 param_3)
void FUN_1802f4b90(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined1 auStack_128 [32];
  undefined *puStack_108;
  undefined *puStack_100;
  undefined4 uStack_f8;
  ulonglong uStack_f0;
  longlong lStack_e8;
  char *pcStack_e0;
  ulonglong *puStack_d8;
  char *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_c0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_128;
  pcVar8 = *(char **)(param_1 + 8);
  cVar4 = *pcVar8;
  pcVar12 = pcVar8;
  pcStack_e0 = pcVar8;
  puStack_d8 = param_2;
  uStack_c8 = param_3;
  if (cVar4 != '\0') {
    do {
      puVar11 = (undefined8 *)0x0;
      pcStack_e0 = pcVar12;
      lVar5 = strchr(uStack_c8,(int)cVar4);
      if ((lVar5 != 0) && (pcVar8 != pcVar12)) {
        puStack_108 = &UNK_180a3c3e0;
        uStack_f0 = 0;
        puStack_100 = (undefined *)0x0;
        uStack_f8 = 0;
        FUN_180628210(&puStack_108,pcVar8,(int)pcVar12 - (int)pcVar8);
        pcVar8 = pcVar12 + 1;
        puStack_a8 = &UNK_1809fcc58;
        puStack_a0 = auStack_90;
        auStack_90[0] = 0;
        uStack_98 = uStack_f8;
        puVar9 = &DAT_18098bc73;
        if (puStack_100 != (undefined *)0x0) {
          puVar9 = puStack_100;
        }
        pcStack_d0 = pcVar8;
        strcpy_s(auStack_90,0x40,puVar9);
        uVar1 = param_2[1];
        if (uVar1 < param_2[2]) {
          param_2[1] = uVar1 + 0x58;
          FUN_1800b8300(uVar1,&puStack_a8);
        }
        else {
          uVar2 = *param_2;
          lStack_e8 = (longlong)(uVar1 - uVar2) / 0x58;
          if (lStack_e8 == 0) {
            lStack_e8 = 1;
LAB_1802f4d0f:
            puVar11 = (undefined8 *)((longlong)param_2 + param_2[0x83] + 0x18);
            param_2[0x83] = param_2[0x83] + lStack_e8 * 0x58;
          }
          else {
            lStack_e8 = lStack_e8 * 2;
            if (lStack_e8 != 0) goto LAB_1802f4d0f;
          }
          puVar6 = puVar11;
          if (uVar2 != uVar1) {
            lVar5 = uVar2 - (longlong)puVar11;
            do {
              *puVar6 = &UNK_18098bcb0;
              puVar6[1] = 0;
              *(undefined4 *)(puVar6 + 2) = 0;
              *puVar6 = &UNK_1809fcc58;
              puVar6[1] = puVar6 + 3;
              *(undefined4 *)(puVar6 + 2) = 0;
              *(undefined1 *)(puVar6 + 3) = 0;
              *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(lVar5 + 0x10 + (longlong)puVar6);
              puVar9 = *(undefined **)(lVar5 + 8 + (longlong)puVar6);
              puVar10 = &DAT_18098bc73;
              if (puVar9 != (undefined *)0x0) {
                puVar10 = puVar9;
              }
              puStack_b8 = puVar6;
              strcpy_s(puVar6[1],0x40,puVar10);
              puVar6 = puVar6 + 0xb;
              param_2 = puStack_d8;
              pcVar12 = pcStack_e0;
            } while (lVar5 + (longlong)puVar6 != uVar1);
          }
          lVar5 = lStack_e8;
          FUN_1800b8300(puVar6,&puStack_a8);
          puVar3 = (undefined8 *)param_2[1];
          pcVar8 = pcStack_d0;
          for (puVar7 = (undefined8 *)*param_2; pcStack_d0 = pcVar8, puVar7 != puVar3;
              puVar7 = puVar7 + 0xb) {
            (**(code **)*puVar7)(puVar7,0);
            pcVar8 = pcStack_d0;
          }
          *param_2 = (ulonglong)puVar11;
          param_2[1] = (ulonglong)(puVar6 + 0xb);
          param_2[2] = (ulonglong)(puVar11 + lVar5 * 0xb);
        }
        puStack_a8 = &UNK_18098bcb0;
        puStack_108 = &UNK_180a3c3e0;
        if (puStack_100 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_100 = (undefined *)0x0;
        uStack_f0 = uStack_f0 & 0xffffffff00000000;
        puStack_108 = &UNK_18098bcb0;
      }
      pcStack_e0 = pcVar12 + 1;
      cVar4 = *pcStack_e0;
      pcVar12 = pcStack_e0;
    } while (cVar4 != '\0');
    if (pcVar8 != pcStack_e0) {
      puStack_108 = &UNK_180a3c3e0;
      uStack_f0 = 0;
      puStack_100 = (undefined *)0x0;
      uStack_f8 = 0;
      FUN_180628210(&puStack_108,pcVar8,(int)pcStack_e0 - (int)pcVar8);
      puStack_a8 = &UNK_1809fcc58;
      puStack_a0 = auStack_90;
      auStack_90[0] = 0;
      uStack_98 = uStack_f8;
      puVar9 = &DAT_18098bc73;
      if (puStack_100 != (undefined *)0x0) {
        puVar9 = puStack_100;
      }
      strcpy_s(auStack_90,0x40,puVar9);
      FUN_1802f52c0(param_2,&puStack_a8);
      puStack_a8 = &UNK_18098bcb0;
      puStack_108 = &UNK_180a3c3e0;
      if (puStack_100 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_100 = (undefined *)0x0;
      uStack_f0 = uStack_f0 & 0xffffffff00000000;
      puStack_108 = &UNK_18098bcb0;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_128);
}



undefined8
FUN_1802f4f50(longlong param_1,longlong param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  
  fVar4 = *(float *)(param_1 + 0x20) + *(float *)(param_2 + 0x20);
  FUN_1806457f0(param_1,param_1 + 0x10,param_2,param_2 + 0x10,&fStack_58,&fStack_78);
  fStack_58 = fStack_58 - fStack_78;
  fStack_54 = fStack_54 - fStack_74;
  fStack_50 = fStack_50 - fStack_70;
  fVar3 = fStack_54 * fStack_54 + fStack_58 * fStack_58 + fStack_50 * fStack_50;
  if (fVar4 * fVar4 < fVar3) {
    param_3[0] = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    param_3[3] = 0.0;
    param_4[0] = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
    param_4[3] = 0.0;
    *param_5 = 0.0;
    return 0;
  }
  *(ulonglong *)param_3 = CONCAT44(fStack_74,fStack_78);
  *(ulonglong *)(param_3 + 2) = CONCAT44(uStack_6c,fStack_70);
  if (0.0 < fVar4) {
    fVar1 = *(float *)(param_2 + 0x20) / fVar4;
    param_3[1] = fStack_54 * fVar1 + param_3[1];
    *param_3 = fVar1 * fStack_58 + *param_3;
    param_3[2] = fStack_50 * fVar1 + param_3[2];
  }
  if (1e-06 < fVar3) {
    *param_4 = fStack_58;
    param_4[1] = fStack_54;
    param_4[2] = fStack_50;
    param_4[3] = 3.4028235e+38;
    fVar1 = fStack_58 * fStack_58 + fStack_54 * fStack_54 + fStack_50 * fStack_50;
    auVar2 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
    fVar3 = auVar2._0_4_;
    fVar3 = fVar3 * 0.5 * (3.0 - fVar1 * fVar3 * fVar3);
    *param_4 = fStack_58 * fVar3;
    param_4[1] = fStack_54 * fVar3;
    param_4[2] = fStack_50 * fVar3;
    *param_5 = fVar4 - fVar3 * fVar1;
    return 1;
  }
  param_4[0] = 0.0;
  param_4[1] = 1.0;
  param_4[2] = 0.0;
  param_4[3] = 3.4028235e+38;
  *param_5 = fVar4;
  return 1;
}



undefined1 FUN_1802f5073(void)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  float *in_R11;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 in_XMM3_Qa;
  undefined4 uVar3;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  float in_XMM4_Da;
  float fVar4;
  float fVar5;
  float unaff_XMM9_Da;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  uVar3 = (undefined4)((ulonglong)in_XMM3_Qa >> 0x20);
  *in_R11 = fStack0000000000000040;
  in_R11[1] = fStack0000000000000044;
  in_R11[2] = fStack0000000000000048;
  in_R11[3] = fStack000000000000004c;
  fVar5 = fStack0000000000000040 * fStack0000000000000040 +
          fStack0000000000000044 * fStack0000000000000044 +
          fStack0000000000000048 * fStack0000000000000048;
  auVar1._4_4_ = uVar3;
  auVar1._0_4_ = fVar5;
  auVar1._8_4_ = in_XMM3_Dc;
  auVar1._12_4_ = in_XMM3_Dd;
  auVar2._4_4_ = uVar3;
  auVar2._0_4_ = fVar5;
  auVar2._8_4_ = in_XMM3_Dc;
  auVar2._12_4_ = in_XMM3_Dd;
  auVar2 = rsqrtss(auVar1,auVar2);
  fVar4 = auVar2._0_4_;
  fVar4 = in_XMM4_Da * fVar4 * (3.0 - fVar5 * fVar4 * fVar4);
  *in_R11 = fStack0000000000000040 * fVar4;
  in_R11[1] = fStack0000000000000044 * fVar4;
  in_R11[2] = fStack0000000000000048 * fVar4;
  *(float *)CONCAT71(in_register_00000001,in_AL) = unaff_XMM9_Da - fVar4 * fVar5;
  return 1;
}



undefined8 FUN_1802f513f(void)

{
  undefined8 *in_R11;
  undefined4 unaff_XMM9_Da;
  undefined4 *in_stack_000000d0;
  
  *in_R11 = 0x3f80000000000000;
  in_R11[1] = 0x7f7fffff00000000;
  *in_stack_000000d0 = unaff_XMM9_Da;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802f51a0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
void FUN_1802f51a0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (((char)param_4 == '\0') && (param_3 != param_1)) {
    if (*(int *)(param_3 + 0x30) == 0) {
LAB_1802f520a:
      uVar5 = 1;
      goto LAB_1802f5215;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar2 = *(byte **)(param_3 + 0x28);
      lVar4 = *(longlong *)(param_5 + 8) - (longlong)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar3 = (uint)pbVar2[lVar4];
        if (bVar1 != uVar3) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar1 - uVar3) < 1) goto LAB_1802f520a;
    }
  }
  uVar5 = 0;
LAB_1802f5215:
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0xd8,*(undefined1 *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  FUN_180627ae0(lVar4 + 0x20,param_5);
  *(undefined8 *)(lVar4 + 0x40) = &UNK_18098bcb0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined4 *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x40) = &UNK_1809fcc28;
  *(undefined1 **)(lVar4 + 0x48) = (undefined1 *)(lVar4 + 0x58);
  *(undefined4 *)(lVar4 + 0x50) = 0;
  *(undefined1 *)(lVar4 + 0x58) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,param_3,param_1,uVar5);
}






// 函数: void FUN_1802f52c0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1802f52c0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  
  uVar11 = 0xfffffffffffffffe;
  uVar1 = param_1[1];
  if (uVar1 < param_1[2]) {
    param_1[1] = uVar1 + 0x58;
    FUN_1800b8300(uVar1);
    return;
  }
  uVar2 = *param_1;
  lVar10 = (longlong)(uVar1 - uVar2) / 0x58;
  puVar7 = (undefined8 *)0x0;
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 == 0) goto LAB_1802f5364;
  }
  puVar7 = (undefined8 *)((longlong)param_1 + param_1[0x83] + 0x18);
  param_1[0x83] = param_1[0x83] + lVar10 * 0x58;
LAB_1802f5364:
  puVar5 = puVar7;
  if (uVar2 != uVar1) {
    lVar9 = uVar2 - (longlong)puVar7;
    do {
      *puVar5 = &UNK_18098bcb0;
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 2) = 0;
      *puVar5 = &UNK_1809fcc58;
      puVar5[1] = puVar5 + 3;
      *(undefined4 *)(puVar5 + 2) = 0;
      *(undefined1 *)(puVar5 + 3) = 0;
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(lVar9 + 0x10 + (longlong)puVar5);
      puVar3 = *(undefined **)(lVar9 + 8 + (longlong)puVar5);
      puVar8 = &DAT_18098bc73;
      if (puVar3 != (undefined *)0x0) {
        puVar8 = puVar3;
      }
      strcpy_s(puVar5[1],0x40,puVar8,param_4,uVar11);
      puVar5 = puVar5 + 0xb;
    } while (lVar9 + (longlong)puVar5 != uVar1);
  }
  FUN_1800b8300(puVar5,param_2);
  puVar4 = (undefined8 *)param_1[1];
  for (puVar6 = (undefined8 *)*param_1; puVar6 != puVar4; puVar6 = puVar6 + 0xb) {
    (**(code **)*puVar6)(puVar6,0);
  }
  *param_1 = (ulonglong)puVar7;
  param_1[1] = (ulonglong)(puVar5 + 0xb);
  param_1[2] = (ulonglong)(puVar7 + lVar10 * 0xb);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802f5440(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)
void FUN_1802f5440(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  if (param_3 != param_4) {
    puVar9 = (undefined8 *)param_1[1];
    uVar6 = (longlong)param_4 - (longlong)param_3 >> 3;
    if ((ulonglong)(param_1[2] - (longlong)puVar9 >> 3) < uVar6) {
      plVar5 = (longlong *)*param_1;
      lVar10 = (longlong)puVar9 - (longlong)plVar5 >> 3;
      uVar7 = lVar10 * 2;
      if (lVar10 == 0) {
        uVar7 = 1;
      }
      if (uVar7 <= lVar10 + uVar6) {
        uVar7 = lVar10 + uVar6;
      }
      plVar3 = (longlong *)0x0;
      plVar2 = plVar3;
      if (uVar7 != 0) {
        plVar3 = (longlong *)FUN_18062b420(_DAT_180c8ed18,uVar7 * 8,*(undefined1 *)(param_1 + 3));
        plVar5 = (longlong *)*param_1;
        plVar2 = plVar3;
      }
      for (; plVar5 != param_2; plVar5 = plVar5 + 1) {
        *plVar3 = *plVar5;
        plVar3 = plVar3 + 1;
        *plVar5 = 0;
      }
      do {
        plVar5 = (longlong *)*param_3;
        *plVar3 = (longlong)plVar5;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x28))();
        }
        param_3 = param_3 + 1;
        plVar3 = plVar3 + 1;
      } while (param_3 != param_4);
      plVar5 = (longlong *)param_1[1];
      if (param_2 != plVar5) {
        do {
          *plVar3 = *param_2;
          plVar3 = plVar3 + 1;
          *param_2 = 0;
          param_2 = param_2 + 1;
        } while (param_2 != plVar5);
        plVar5 = (longlong *)param_1[1];
      }
      plVar8 = (longlong *)*param_1;
      if (plVar8 != plVar5) {
        do {
          if ((longlong *)*plVar8 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar8 + 0x38))();
          }
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar5);
        plVar8 = (longlong *)*param_1;
      }
      if (plVar8 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar8);
      }
      *param_1 = plVar2;
      param_1[1] = plVar3;
      param_1[2] = plVar2 + uVar7;
    }
    else {
      uVar7 = (longlong)puVar9 - (longlong)param_2 >> 3;
      if (uVar6 < uVar7) {
        puVar1 = puVar9 + -uVar6;
        puVar4 = puVar9;
        if (uVar6 * -8 != 0) {
          do {
            *puVar4 = *puVar1;
            *puVar1 = 0;
            puVar1 = puVar1 + 1;
            puVar4 = puVar4 + 1;
          } while (puVar1 != puVar9);
          puVar9 = (undefined8 *)param_1[1];
        }
        FUN_1802f58f0(param_2,puVar9 + -uVar6);
        FUN_18017b5e0(param_3,param_4,param_2);
        param_1[1] = param_1[1] + uVar6 * 8;
      }
      else {
        FUN_18017b680(param_3 + uVar7,param_4);
        plVar3 = (longlong *)param_1[1];
        plVar5 = plVar3 + (uVar6 - uVar7);
        plVar2 = param_2;
        if (param_2 != plVar3) {
          do {
            *plVar5 = *plVar2;
            plVar5 = plVar5 + 1;
            *plVar2 = 0;
            plVar2 = plVar2 + 1;
          } while (plVar2 != plVar3);
        }
        FUN_1802f5980(param_3,param_3 + uVar7,param_2 + uVar7);
        param_1[1] = param_1[1] + uVar6 * 8;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802f545a(undefined8 *param_1,longlong *param_2,longlong param_3,longlong *param_4)
void FUN_1802f545a(undefined8 *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong in_RAX;
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *unaff_RSI;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  
  puVar8 = (undefined8 *)param_1[1];
  uVar5 = (longlong)param_4 - param_3 >> 3;
  if ((ulonglong)(in_RAX - (longlong)puVar8 >> 3) < uVar5) {
    plVar4 = (longlong *)*param_1;
    lVar9 = (longlong)puVar8 - (longlong)plVar4 >> 3;
    uVar6 = lVar9 * 2;
    if (lVar9 == 0) {
      uVar6 = 1;
    }
    if (uVar6 <= lVar9 + uVar5) {
      uVar6 = lVar9 + uVar5;
    }
    plVar2 = (longlong *)0x0;
    plVar10 = plVar2;
    if (uVar6 != 0) {
      plVar2 = (longlong *)FUN_18062b420(_DAT_180c8ed18,uVar6 * 8,*(undefined1 *)(param_1 + 3));
      plVar4 = (longlong *)*param_1;
      plVar10 = plVar2;
    }
    for (; plVar4 != param_2; plVar4 = plVar4 + 1) {
      *plVar2 = *plVar4;
      plVar2 = plVar2 + 1;
      *plVar4 = 0;
    }
    do {
      plVar4 = (longlong *)*unaff_RSI;
      *plVar2 = (longlong)plVar4;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))();
      }
      unaff_RSI = unaff_RSI + 1;
      plVar2 = plVar2 + 1;
    } while (unaff_RSI != param_4);
    plVar4 = (longlong *)param_1[1];
    if (param_2 != plVar4) {
      do {
        *plVar2 = *param_2;
        plVar2 = plVar2 + 1;
        *param_2 = 0;
        param_2 = param_2 + 1;
      } while (param_2 != plVar4);
      plVar4 = (longlong *)param_1[1];
    }
    plVar7 = (longlong *)*param_1;
    if (plVar7 != plVar4) {
      do {
        if ((longlong *)*plVar7 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar7 + 0x38))();
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar4);
      plVar7 = (longlong *)*param_1;
    }
    if (plVar7 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar7);
    }
    *param_1 = plVar10;
    param_1[1] = plVar2;
    param_1[2] = plVar10 + uVar6;
  }
  else {
    uVar6 = (longlong)puVar8 - (longlong)param_2 >> 3;
    if (uVar5 < uVar6) {
      puVar1 = puVar8 + -uVar5;
      puVar3 = puVar8;
      if (uVar5 * -8 != 0) {
        do {
          *puVar3 = *puVar1;
          *puVar1 = 0;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        } while (puVar1 != puVar8);
        puVar8 = (undefined8 *)param_1[1];
      }
      FUN_1802f58f0(param_2,puVar8 + -uVar5);
      FUN_18017b5e0();
      param_1[1] = param_1[1] + uVar5 * 8;
    }
    else {
      FUN_18017b680(unaff_RSI + uVar6,param_4);
      plVar2 = (longlong *)param_1[1];
      plVar4 = plVar2 + (uVar5 - uVar6);
      if (param_2 != plVar2) {
        do {
          *plVar4 = *param_2;
          plVar4 = plVar4 + 1;
          *param_2 = 0;
          param_2 = param_2 + 1;
        } while (param_2 != plVar2);
      }
      FUN_1802f5980();
      param_1[1] = param_1[1] + uVar5 * 8;
    }
  }
  return;
}






// 函数: void FUN_1802f569d(void)
void FUN_1802f569d(void)

{
  return;
}






// 函数: void FUN_1802f56a0(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)
void FUN_1802f56a0(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  
  if (param_3 != param_4) {
    puVar8 = (undefined8 *)param_1[1];
    uVar5 = (longlong)param_4 - (longlong)param_3 >> 3;
    if ((ulonglong)(param_1[2] - (longlong)puVar8 >> 3) < uVar5) {
      plVar4 = (longlong *)*param_1;
      lVar9 = (longlong)puVar8 - (longlong)plVar4 >> 3;
      uVar6 = lVar9 * 2;
      if (lVar9 == 0) {
        uVar6 = 1;
      }
      if (uVar6 <= lVar9 + uVar5) {
        uVar6 = lVar9 + uVar5;
      }
      plVar10 = (longlong *)0x0;
      plVar2 = plVar10;
      if (uVar6 != 0) {
        plVar10 = (longlong *)((longlong)param_1 + param_1[0x103] + 0x18);
        param_1[0x103] = param_1[0x103] + uVar6 * 8;
        plVar4 = (longlong *)*param_1;
        plVar2 = plVar10;
      }
      for (; plVar4 != param_2; plVar4 = plVar4 + 1) {
        *plVar10 = *plVar4;
        plVar10 = plVar10 + 1;
        *plVar4 = 0;
      }
      do {
        plVar4 = (longlong *)*param_3;
        *plVar10 = (longlong)plVar4;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))();
        }
        param_3 = param_3 + 1;
        plVar10 = plVar10 + 1;
      } while (param_3 != param_4);
      plVar4 = (longlong *)param_1[1];
      if (param_2 != plVar4) {
        do {
          *plVar10 = *param_2;
          plVar10 = plVar10 + 1;
          *param_2 = 0;
          param_2 = param_2 + 1;
        } while (param_2 != plVar4);
        plVar4 = (longlong *)param_1[1];
      }
      for (plVar7 = (longlong *)*param_1; plVar7 != plVar4; plVar7 = plVar7 + 1) {
        if ((longlong *)*plVar7 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar7 + 0x38))();
        }
      }
      *param_1 = plVar2;
      param_1[1] = plVar10;
      param_1[2] = plVar2 + uVar6;
    }
    else {
      uVar6 = (longlong)puVar8 - (longlong)param_2 >> 3;
      if (uVar5 < uVar6) {
        puVar1 = puVar8 + -uVar5;
        puVar3 = puVar8;
        if (uVar5 * -8 != 0) {
          do {
            *puVar3 = *puVar1;
            *puVar1 = 0;
            puVar1 = puVar1 + 1;
            puVar3 = puVar3 + 1;
          } while (puVar1 != puVar8);
          puVar8 = (undefined8 *)param_1[1];
        }
        FUN_1802f58f0(param_2,puVar8 + -uVar5);
        FUN_18017b5e0(param_3,param_4,param_2);
        param_1[1] = param_1[1] + uVar5 * 8;
      }
      else {
        FUN_18017b680(param_3 + uVar6,param_4);
        plVar10 = (longlong *)param_1[1];
        plVar4 = plVar10 + (uVar5 - uVar6);
        plVar2 = param_2;
        if (param_2 != plVar10) {
          do {
            *plVar4 = *plVar2;
            plVar4 = plVar4 + 1;
            *plVar2 = 0;
            plVar2 = plVar2 + 1;
          } while (plVar2 != plVar10);
        }
        FUN_1802f5980(param_3,param_3 + uVar6,param_2 + uVar6);
        param_1[1] = param_1[1] + uVar5 * 8;
      }
    }
  }
  return;
}






