#include "TaleWorlds.Native.Split.h"

// 03_rendering_part013.c - 4 个函数

// 函数: void FUN_180275a60(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180275a60(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  uint64_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t *puVar8;
  int iVar9;
  void *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plStackX_10;
  
  FUN_180627be0(param_2 + 0x3e,param_1 + 0x1f0,param_3,param_4,0xfffffffffffffffe);
  param_2[6] = *(longlong *)(param_1 + 0x30);
  *(int32_t *)(param_2 + 0xb) = *(int32_t *)(param_1 + 0x58);
  uVar4 = *(uint64_t *)(param_1 + 0x21c);
  *(uint64_t *)((longlong)param_2 + 0x214) = *(uint64_t *)(param_1 + 0x214);
  *(uint64_t *)((longlong)param_2 + 0x21c) = uVar4;
  uVar5 = *(int32_t *)(param_1 + 0x228);
  uVar6 = *(int32_t *)(param_1 + 0x22c);
  uVar7 = *(int32_t *)(param_1 + 0x230);
  *(int32_t *)((longlong)param_2 + 0x224) = *(int32_t *)(param_1 + 0x224);
  *(int32_t *)(param_2 + 0x45) = uVar5;
  *(int32_t *)((longlong)param_2 + 0x22c) = uVar6;
  *(int32_t *)(param_2 + 0x46) = uVar7;
  uVar5 = *(int32_t *)(param_1 + 0x238);
  uVar6 = *(int32_t *)(param_1 + 0x23c);
  uVar7 = *(int32_t *)(param_1 + 0x240);
  *(int32_t *)((longlong)param_2 + 0x234) = *(int32_t *)(param_1 + 0x234);
  *(int32_t *)(param_2 + 0x47) = uVar5;
  *(int32_t *)((longlong)param_2 + 0x23c) = uVar6;
  *(int32_t *)(param_2 + 0x48) = uVar7;
  *(int32_t *)((longlong)param_2 + 0x244) = *(int32_t *)(param_1 + 0x244);
  *(int8_t *)(param_2 + 0x78) = *(int8_t *)(param_1 + 0x3c0);
  *(int32_t *)((longlong)param_2 + 0x3c4) = *(int32_t *)(param_1 + 0x3c4);
  *(int32_t *)(param_2 + 0x42) = *(int32_t *)(param_1 + 0x210);
  plVar1 = *(longlong **)(param_1 + 0x3b8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_2[0x77];
  param_2[0x77] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(int32_t *)(param_2 + 0xd) = *(int32_t *)(param_1 + 0x68);
  uVar5 = *(int32_t *)(param_1 + 0x70);
  uVar6 = *(int32_t *)(param_1 + 0x74);
  uVar7 = *(int32_t *)(param_1 + 0x78);
  *(int32_t *)((longlong)param_2 + 0x6c) = *(int32_t *)(param_1 + 0x6c);
  *(int32_t *)(param_2 + 0xe) = uVar5;
  *(int32_t *)((longlong)param_2 + 0x74) = uVar6;
  *(int32_t *)(param_2 + 0xf) = uVar7;
  *(int32_t *)((longlong)param_2 + 0x7c) = *(int32_t *)(param_1 + 0x7c);
  *(int32_t *)(param_2 + 0x12) = *(int32_t *)(param_1 + 0x90);
  puVar10 = &DAT_18098bc73;
  if (*(void **)(param_1 + 0x88) != (void *)0x0) {
    puVar10 = *(void **)(param_1 + 0x88);
  }
  strcpy_s(param_2[0x11],0x80,puVar10);
  *(int32_t *)(param_2 + 0x25) = *(int32_t *)(param_1 + 0x128);
  puVar10 = &DAT_18098bc73;
  if (*(void **)(param_1 + 0x120) != (void *)0x0) {
    puVar10 = *(void **)(param_1 + 0x120);
  }
  strcpy_s(param_2[0x24],0x80,puVar10);
  FUN_180627be0(param_2 + 0x36,param_1 + 0x1b0);
  FUN_180627be0(param_2 + 0x3a,param_1 + 0x1d0);
  plVar1 = *(longlong **)(param_1 + 0x3c8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_2[0x79];
  param_2[0x79] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(int32_t *)((longlong)param_2 + 0x5c) = *(int32_t *)(param_1 + 0x5c);
  if ((char)param_3 != '\0') {
    lVar11 = *(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 4;
    FUN_180284240(param_2 + 7,lVar11);
    iVar9 = (int)lVar11;
    lVar11 = (longlong)iVar9;
    if (0 < iVar9) {
      lVar12 = 0;
      do {
        puVar8 = (uint64_t *)
                 FUN_1800763c0(*(uint64_t *)(lVar12 + *(longlong *)(param_1 + 0x38)),&plStackX_10)
        ;
        lVar3 = param_2[7];
        uVar4 = *puVar8;
        *puVar8 = 0;
        plVar1 = *(longlong **)(lVar12 + lVar3);
        *(uint64_t *)(lVar12 + lVar3) = uVar4;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x38))();
        }
        if (plStackX_10 != (longlong *)0x0) {
          (**(code **)(*plStackX_10 + 0x38))();
        }
        *(longlong **)(*(longlong *)(lVar12 + param_2[7]) + 0x1c8) = param_2;
        *(int32_t *)(lVar12 + 8 + param_2[7]) =
             *(int32_t *)(lVar12 + 8 + *(longlong *)(param_1 + 0x38));
        lVar12 = lVar12 + 0x10;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
                    // WARNING: Could not recover jumptable at 0x000180275ce1. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x148))(param_2,param_1 + 0x330);
  return;
}





// 函数: void FUN_180275cf0(longlong *param_1,int param_2,longlong *param_3,char param_4)
void FUN_180275cf0(longlong *param_1,int param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plStack_30;
  int iStack_28;
  
  plStack_30 = (longlong *)0x0;
  plVar1 = (longlong *)*param_3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  iStack_28 = 1 << ((byte)param_2 & 0x1f);
  plStack_30 = plVar1;
  FUN_1802842e0(param_1 + 7,&plStack_30);
  *(longlong **)(*param_3 + 0x1c8) = param_1;
  if ((int)param_1[0xb] < param_2 + 1) {
    *(int *)(param_1 + 0xb) = param_2 + 1;
  }
  if (param_4 != '\0') {
    if (*(code **)(*param_1 + 0x160) == (code *)&UNK_180277350) {
      FUN_180276f30(param_1,(longlong)param_1 + 0x214,0);
    }
    else {
      (**(code **)(*param_1 + 0x160))(param_1);
    }
    lVar2 = param_1[5];
    if (lVar2 != 0) {
      *(short *)(lVar2 + 0x2b0) = *(short *)(lVar2 + 0x2b0) + 1;
      if (*(longlong *)(lVar2 + 0x168) != 0) {
        func_0x0001802eeba0();
      }
    }
  }
  if (plStack_30 != (longlong *)0x0) {
    (**(code **)(*plStack_30 + 0x38))();
  }
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x38))();
  }
  return;
}





// 函数: void FUN_180275e10(longlong *param_1,uint param_2,longlong *param_3,char param_4)
void FUN_180275e10(longlong *param_1,uint param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plStack_30;
  uint uStack_28;
  
  plStack_30 = (longlong *)0x0;
  plVar1 = (longlong *)*param_3;
  uStack_28 = param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plStack_30 = plVar1;
  FUN_1802842e0(param_1 + 7,&plStack_30);
  *(longlong **)(*param_3 + 0x1c8) = param_1;
  iVar3 = -1;
  if (param_2 != 0) {
    do {
      iVar3 = iVar3 + 1;
      param_2 = param_2 >> 1;
    } while (param_2 != 0);
  }
  if ((int)param_1[0xb] < iVar3 + 1) {
    *(int *)(param_1 + 0xb) = iVar3 + 1;
  }
  if (param_4 != '\0') {
    if (*(code **)(*param_1 + 0x160) == (code *)&UNK_180277350) {
      FUN_180276f30(param_1,(longlong)param_1 + 0x214,0);
    }
    else {
      (**(code **)(*param_1 + 0x160))(param_1);
    }
    lVar2 = param_1[5];
    if ((lVar2 != 0) &&
       (*(short *)(lVar2 + 0x2b0) = *(short *)(lVar2 + 0x2b0) + 1, *(longlong *)(lVar2 + 0x168) != 0
       )) {
      func_0x0001802eeba0();
    }
  }
  if (plStack_30 != (longlong *)0x0) {
    (**(code **)(*plStack_30 + 0x38))();
  }
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180275f30(uint64_t *param_1,uint *param_2,uint64_t param_3,float *param_4,
                       uint64_t *param_5)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint64_t uVar15;
  byte bVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  byte bVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint64_t uStack_e8;
  uint8_t uStack_e0;
  int8_t uStack_db;
  int16_t uStack_da;
  uint64_t *puStack_d8;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  int iStack_bc;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  uVar17 = (ulonglong)*(uint *)(param_1 + 0x42);
  if (((*param_2 & *(uint *)(param_1 + 0x42)) == 0) || (*(int *)(param_1 + 0xb) == 0)) {
LAB_180276376:
    uVar17 = uVar17 & 0xffffffffffffff00;
  }
  else {
    uStack_e8 = *param_5;
    uVar15 = param_5[1];
    uStack_d0 = param_5[3];
    uStack_c8 = *(int32_t *)(param_5 + 4);
    uStack_c4 = *(int32_t *)((longlong)param_5 + 0x24);
    uStack_c0 = *(int32_t *)(param_5 + 5);
    iStack_bc = *(int *)((longlong)param_5 + 0x2c);
    uStack_b8 = param_5[6];
    uStack_b0 = param_5[7];
    uStack_a8 = param_5[8];
    uStack_a0 = param_5[9];
    uStack_98 = *(int32_t *)(param_5 + 10);
    uStack_94 = *(int32_t *)((longlong)param_5 + 0x54);
    uStack_90 = *(int32_t *)(param_5 + 0xb);
    uStack_8c = *(int32_t *)((longlong)param_5 + 0x5c);
    uStack_88 = *(int32_t *)(param_5 + 0xc);
    uStack_84 = *(int32_t *)((longlong)param_5 + 100);
    uStack_80 = *(int32_t *)(param_5 + 0xd);
    uStack_7c = *(int32_t *)((longlong)param_5 + 0x6c);
    uStack_e0._0_4_ = (int)uVar15;
    iVar18 = (int)uStack_e0 + *(int *)((longlong)param_1 + 0x5c);
    uStack_da = (int16_t)((ulonglong)uVar15 >> 0x30);
    _uStack_e0 = CONCAT15(*(int8_t *)(param_1 + 0x76),(int5)uVar15);
    _uStack_e0 = CONCAT44(stack0xffffffffffffff24,iVar18);
    if (iStack_bc == 0) {
      iStack_bc = *(int *)(param_1 + 0x62);
      uStack_c0 = *(int32_t *)(param_1 + 99);
    }
    lVar19 = 0;
    if (*(char *)(param_1 + 0xc) == '\0') {
      if (iVar18 < 0) {
        iVar18 = 0;
      }
      else if (*(int *)(param_1 + 0xb) + -1 < iVar18) {
        iVar18 = *(int *)(param_1 + 0xb) + -1;
      }
    }
    bVar21 = 1;
    uVar20 = 1 << ((byte)iVar18 & 0x1f);
    puStack_d8 = param_1;
    if ((*(char *)(param_1 + 100) == '\0') && (*(char *)(param_1 + 0x76) == -1)) {
      fVar3 = *param_4;
      fVar4 = param_4[1];
      fVar5 = param_4[2];
      fVar6 = param_4[3];
      uVar17 = *(ulonglong *)(param_2 + 10);
      fVar26 = *(float *)((longlong)param_1 + 0x334);
      fVar23 = *(float *)(param_1 + 0x66);
      fVar24 = *(float *)(param_1 + 0x67);
      fVar25 = *(float *)((longlong)param_1 + 0x344);
      fVar7 = param_4[8];
      fVar8 = param_4[9];
      fVar9 = param_4[10];
      fVar10 = param_4[0xb];
      fVar11 = param_4[4];
      fVar12 = param_4[5];
      fVar13 = param_4[6];
      fVar14 = param_4[7];
      fVar1 = *(float *)(param_1 + 0x68);
      fStack_78 = fVar26 * fVar11 + fVar23 * fVar3 + fVar24 * fVar7;
      fStack_74 = fVar26 * fVar12 + fVar23 * fVar4 + fVar24 * fVar8;
      fStack_70 = fVar26 * fVar13 + fVar23 * fVar5 + fVar24 * fVar9;
      fStack_6c = fVar26 * fVar14 + fVar23 * fVar6 + fVar24 * fVar10;
      fVar26 = *(float *)(param_1 + 0x69);
      fVar23 = *(float *)(param_1 + 0x6a);
      fVar24 = *(float *)((longlong)param_1 + 0x354);
      fStack_68 = fVar25 * fVar11 + fVar1 * fVar3 + fVar26 * fVar7;
      fStack_64 = fVar25 * fVar12 + fVar1 * fVar4 + fVar26 * fVar8;
      fStack_60 = fVar25 * fVar13 + fVar1 * fVar5 + fVar26 * fVar9;
      fStack_5c = fVar25 * fVar14 + fVar1 * fVar6 + fVar26 * fVar10;
      fVar26 = *(float *)(param_1 + 0x6b);
      fVar25 = *(float *)((longlong)param_1 + 0x364);
      fVar1 = *(float *)(param_1 + 0x6c);
      fStack_58 = fVar24 * fVar11 + fVar23 * fVar3 + fVar26 * fVar7;
      fStack_54 = fVar24 * fVar12 + fVar23 * fVar4 + fVar26 * fVar8;
      fStack_50 = fVar24 * fVar13 + fVar23 * fVar5 + fVar26 * fVar9;
      fStack_4c = fVar24 * fVar14 + fVar23 * fVar6 + fVar26 * fVar10;
      fVar26 = *(float *)(param_1 + 0x6d);
      fStack_48 = fVar25 * fVar11 + fVar1 * fVar3 + fVar26 * fVar7 + param_4[0xc];
      fStack_44 = fVar25 * fVar12 + fVar1 * fVar4 + fVar26 * fVar8 + param_4[0xd];
      fStack_40 = fVar25 * fVar13 + fVar1 * fVar5 + fVar26 * fVar9 + param_4[0xe];
      fStack_3c = fVar25 * fVar14 + fVar1 * fVar6 + fVar26 * fVar10 + param_4[0xf];
      if ((uVar17 != 0) && (fVar26 = *(float *)(param_1 + 0xd), fVar26 != 3.4028235e+38)) {
        if ((void *)*param_1 == &UNK_180a169b8) {
          lVar22 = (longlong)param_1 + 0x214;
        }
        else {
          lVar22 = (**(code **)((void *)*param_1 + 0x198))(param_1);
          fVar26 = *(float *)(param_1 + 0xd);
          uVar17 = *(ulonglong *)(param_2 + 10);
        }
        fVar25 = *(float *)(uVar17 + 0x124) - fStack_44;
        fVar24 = *(float *)(uVar17 + 0x120) - fStack_48;
        fVar23 = *(float *)(uVar17 + 0x128) - fStack_40;
        if (fVar26 * fVar26 <
            (fVar25 * fVar25 + fVar24 * fVar24 + fVar23 * fVar23) -
            *(float *)(lVar22 + 0x30) * *(float *)(lVar22 + 0x30)) goto LAB_180276376;
      }
      iVar18 = (int)((longlong)(param_1[8] - param_1[7]) >> 4);
      lVar22 = (longlong)iVar18;
      if (0 < iVar18) {
        do {
          lVar2 = *(longlong *)(lVar19 + param_1[7]);
          if ((lVar2 != 0) && ((*(uint *)(lVar19 + 8 + param_1[7]) & uVar20) != 0)) {
            if (((param_2[0x6f6] & 0x20) != 0) && ((*(uint *)(lVar2 + 0x100) & 0x400000) != 0)) {
              *(int32_t *)(param_1 + 0x65) = *(int32_t *)(_DAT_180c86870 + 0x224);
            }
            bVar16 = FUN_180077750(lVar2,param_2,&fStack_78,param_3,&uStack_e8);
            bVar21 = bVar21 & bVar16;
          }
          lVar19 = lVar19 + 0x10;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        return (ulonglong)bVar21;
      }
    }
    else {
      uVar17 = *(ulonglong *)(param_2 + 10);
      if ((uVar17 != 0) && (fVar26 = *(float *)(param_1 + 0xd), fVar26 != 3.4028235e+38)) {
        if ((void *)*param_1 == &UNK_180a169b8) {
          lVar22 = (longlong)param_1 + 0x214;
        }
        else {
          lVar22 = (**(code **)((void *)*param_1 + 0x198))(param_1);
          fVar26 = *(float *)(param_1 + 0xd);
          uVar17 = *(ulonglong *)(param_2 + 10);
        }
        fVar25 = *(float *)(uVar17 + 0x124) - param_4[0xd];
        fVar24 = *(float *)(uVar17 + 0x120) - param_4[0xc];
        fVar23 = *(float *)(uVar17 + 0x128) - param_4[0xe];
        if (fVar26 * fVar26 <
            (fVar25 * fVar25 + fVar24 * fVar24 + fVar23 * fVar23) -
            *(float *)(lVar22 + 0x30) * *(float *)(lVar22 + 0x30)) goto LAB_180276376;
      }
      iVar18 = (int)((longlong)(param_1[8] - param_1[7]) >> 4);
      lVar22 = (longlong)iVar18;
      if (0 < iVar18) {
        do {
          lVar2 = *(longlong *)(lVar19 + param_1[7]);
          if ((lVar2 != 0) && ((*(uint *)(lVar19 + 8 + param_1[7]) & uVar20) != 0)) {
            if (((param_2[0x6f6] & 0x20) != 0) && ((*(uint *)(lVar2 + 0x100) & 0x400000) != 0)) {
              *(int32_t *)(param_1 + 0x65) = *(int32_t *)(_DAT_180c86870 + 0x224);
            }
            if ((*(byte *)(lVar2 + 0x100) & 0x20) == 0) {
              bVar16 = FUN_180077750(lVar2,param_2,param_4,param_3,&uStack_e8);
              bVar21 = bVar21 & bVar16;
            }
            else {
              FUN_180075630(lVar2,param_4);
            }
          }
          lVar19 = lVar19 + 0x10;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
    }
    uVar17 = (ulonglong)bVar21;
  }
  return uVar17;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18027606a(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  byte bVar12;
  int iVar13;
  ulonglong in_RAX;
  ulonglong uVar14;
  uint64_t *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_R9;
  uint unaff_R13D;
  byte unaff_R14B;
  longlong lVar15;
  float fVar16;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  float fVar17;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar18;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  float fVar19;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM5_Dc;
  float in_XMM5_Dd;
  
  fVar4 = *(float *)(in_R9 + 0x20);
  fVar5 = *(float *)(in_R9 + 0x24);
  fVar6 = *(float *)(in_R9 + 0x28);
  fVar7 = *(float *)(in_R9 + 0x2c);
  fVar8 = *(float *)(in_R9 + 0x10);
  fVar9 = *(float *)(in_R9 + 0x14);
  fVar10 = *(float *)(in_R9 + 0x18);
  fVar11 = *(float *)(in_R9 + 0x1c);
  fVar19 = *(float *)(unaff_RBX + 0x68);
  fVar16 = *(float *)(unaff_RBX + 0x69);
  fVar17 = *(float *)(unaff_RBX + 0x6a);
  *(float *)(unaff_RBP + -0x21) = (float)param_3 * fVar8 + (float)param_1 + (float)param_2 * fVar4;
  *(float *)(unaff_RBP + -0x1d) =
       (float)((ulonglong)param_3 >> 0x20) * fVar9 + (float)((ulonglong)param_1 >> 0x20) +
       (float)((ulonglong)param_2 >> 0x20) * fVar5;
  *(float *)(unaff_RBP + -0x19) = in_XMM2_Dc * fVar10 + in_XMM0_Dc + in_XMM1_Dc * fVar6;
  *(float *)(unaff_RBP + -0x15) = in_XMM2_Dd * fVar11 + in_XMM0_Dd + in_XMM1_Dd * fVar7;
  fVar18 = *(float *)((longlong)unaff_RBX + 0x354);
  fVar1 = *(float *)(unaff_RBX + 0x6b);
  *(float *)(unaff_RBP + -0x11) = (float)param_4 * fVar8 + fVar19 * in_XMM5_Da + fVar16 * fVar4;
  *(float *)(unaff_RBP + -0xd) =
       (float)((ulonglong)param_4 >> 0x20) * fVar9 + fVar19 * in_XMM5_Db + fVar16 * fVar5;
  *(float *)(unaff_RBP + -9) = in_XMM3_Dc * fVar10 + fVar19 * in_XMM5_Dc + fVar16 * fVar6;
  *(float *)(unaff_RBP + -5) = in_XMM3_Dd * fVar11 + fVar19 * in_XMM5_Dd + fVar16 * fVar7;
  fVar19 = *(float *)((longlong)unaff_RBX + 0x364);
  fVar16 = *(float *)(unaff_RBX + 0x6c);
  fVar2 = *(float *)(unaff_RBX + 0x6d);
  *(float *)(unaff_RBP + -1) = fVar18 * fVar8 + fVar17 * in_XMM5_Da + fVar1 * fVar4;
  *(float *)(unaff_RBP + 3) = fVar18 * fVar9 + fVar17 * in_XMM5_Db + fVar1 * fVar5;
  *(float *)(unaff_RBP + 7) = fVar18 * fVar10 + fVar17 * in_XMM5_Dc + fVar1 * fVar6;
  *(float *)(unaff_RBP + 0xb) = fVar18 * fVar11 + fVar17 * in_XMM5_Dd + fVar1 * fVar7;
  fVar17 = *(float *)(in_R9 + 0x34);
  fVar18 = *(float *)(in_R9 + 0x38);
  fVar1 = *(float *)(in_R9 + 0x3c);
  *(float *)(unaff_RBP + 0xf) =
       fVar19 * fVar8 + fVar16 * in_XMM5_Da + fVar2 * fVar4 + *(float *)(in_R9 + 0x30);
  *(float *)(unaff_RBP + 0x13) = fVar19 * fVar9 + fVar16 * in_XMM5_Db + fVar2 * fVar5 + fVar17;
  *(float *)(unaff_RBP + 0x17) = fVar19 * fVar10 + fVar16 * in_XMM5_Dc + fVar2 * fVar6 + fVar18;
  *(float *)(unaff_RBP + 0x1b) = fVar19 * fVar11 + fVar16 * in_XMM5_Dd + fVar2 * fVar7 + fVar1;
  if ((in_RAX != 0) && (fVar19 = *(float *)(unaff_RBX + 0xd), fVar19 != 3.4028235e+38)) {
    if ((void *)*unaff_RBX == &UNK_180a169b8) {
      lVar15 = (longlong)unaff_RBX + 0x214;
    }
    else {
      lVar15 = (**(code **)((void *)*unaff_RBX + 0x198))();
      fVar19 = *(float *)(unaff_RBX + 0xd);
      in_RAX = *(ulonglong *)(unaff_RSI + 0x28);
    }
    fVar18 = *(float *)(in_RAX + 0x124) - *(float *)(unaff_RBP + 0x13);
    fVar17 = *(float *)(in_RAX + 0x120) - *(float *)(unaff_RBP + 0xf);
    fVar16 = *(float *)(in_RAX + 0x128) - *(float *)(unaff_RBP + 0x17);
    if (fVar19 * fVar19 <
        (fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16) -
        *(float *)(lVar15 + 0x30) * *(float *)(lVar15 + 0x30)) {
      return in_RAX & 0xffffffffffffff00;
    }
  }
  iVar13 = (int)((longlong)(unaff_RBX[8] - unaff_RBX[7]) >> 4);
  lVar15 = (longlong)iVar13;
  if (iVar13 < 1) {
    uVar14 = (ulonglong)unaff_R14B;
  }
  else {
    do {
      lVar3 = *(longlong *)(unaff_RDI + unaff_RBX[7]);
      if ((lVar3 != 0) && ((*(uint *)(unaff_RDI + 8 + unaff_RBX[7]) & unaff_R13D) != 0)) {
        if (((*(byte *)(unaff_RSI + 0x1bd8) & 0x20) != 0) &&
           ((*(uint *)(lVar3 + 0x100) & 0x400000) != 0)) {
          *(int32_t *)(unaff_RBX + 0x65) = *(int32_t *)(_DAT_180c86870 + 0x224);
        }
        bVar12 = FUN_180077750();
        unaff_R14B = unaff_R14B & bVar12;
      }
      unaff_RDI = unaff_RDI + 0x10;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    uVar14 = (ulonglong)unaff_R14B;
  }
  return uVar14;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18027613a(void)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  uint64_t *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  uint unaff_R13D;
  byte unaff_R14B;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = *(float *)(unaff_RBX + 0xd);
  if (fVar9 != 3.4028235e+38) {
    if ((void *)*unaff_RBX == &UNK_180a169b8) {
      lVar5 = (longlong)unaff_RBX + 0x214;
    }
    else {
      lVar5 = (**(code **)((void *)*unaff_RBX + 0x198))();
      fVar9 = *(float *)(unaff_RBX + 0xd);
      in_RAX = *(ulonglong *)(unaff_RSI + 0x28);
    }
    fVar8 = *(float *)(in_RAX + 0x124) - *(float *)(unaff_RBP + 0x13);
    fVar7 = *(float *)(in_RAX + 0x120) - *(float *)(unaff_RBP + 0xf);
    fVar6 = *(float *)(in_RAX + 0x128) - *(float *)(unaff_RBP + 0x17);
    if (fVar9 * fVar9 <
        (fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) -
        *(float *)(lVar5 + 0x30) * *(float *)(lVar5 + 0x30)) {
      return in_RAX & 0xffffffffffffff00;
    }
  }
  iVar3 = (int)((longlong)(unaff_RBX[8] - unaff_RBX[7]) >> 4);
  lVar5 = (longlong)iVar3;
  if (iVar3 < 1) {
    uVar4 = (ulonglong)unaff_R14B;
  }
  else {
    do {
      lVar1 = *(longlong *)(unaff_RDI + unaff_RBX[7]);
      if ((lVar1 != 0) && ((*(uint *)(unaff_RDI + 8 + unaff_RBX[7]) & unaff_R13D) != 0)) {
        if (((*(byte *)(unaff_RSI + 0x1bd8) & 0x20) != 0) &&
           ((*(uint *)(lVar1 + 0x100) & 0x400000) != 0)) {
          *(int32_t *)(unaff_RBX + 0x65) = *(int32_t *)(_DAT_180c86870 + 0x224);
        }
        bVar2 = FUN_180077750();
        unaff_R14B = unaff_R14B & bVar2;
      }
      unaff_RDI = unaff_RDI + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    uVar4 = (ulonglong)unaff_R14B;
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

byte FUN_1802762d8(void)

{
  longlong lVar1;
  byte bVar2;
  int in_EAX;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar3;
  uint unaff_R13D;
  byte unaff_R14B;
  
  lVar3 = (longlong)in_EAX;
  if (0 < in_EAX) {
    do {
      lVar1 = *(longlong *)(unaff_RDI + *(longlong *)(unaff_RBX + 0x38));
      if ((lVar1 != 0) &&
         ((*(uint *)(unaff_RDI + 8 + *(longlong *)(unaff_RBX + 0x38)) & unaff_R13D) != 0)) {
        if (((*(byte *)(unaff_RSI + 0x1bd8) & 0x20) != 0) &&
           ((*(uint *)(lVar1 + 0x100) & 0x400000) != 0)) {
          *(int32_t *)(unaff_RBX + 0x328) = *(int32_t *)(_DAT_180c86870 + 0x224);
        }
        if ((*(byte *)(lVar1 + 0x100) & 0x20) == 0) {
          bVar2 = FUN_180077750();
          unaff_R14B = unaff_R14B & bVar2;
        }
        else {
          FUN_180075630();
        }
      }
      unaff_RDI = unaff_RDI + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return unaff_R14B;
}



int8_t FUN_180276370(void)

{
  int8_t unaff_R14B;
  
  return unaff_R14B;
}



ulonglong FUN_1802763d0(longlong param_1,longlong param_2,int param_3,uint64_t *param_4)

{
  float fVar1;
  float fVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    if (*(char *)(param_1 + 800) == '\0') {
      FUN_180285cf0(&uStack_48,param_4,param_1 + 0x330);
    }
    else {
      uStack_48 = *param_4;
      uStack_40 = param_4[1];
      uStack_38 = param_4[2];
      uStack_30 = param_4[3];
      uStack_28 = param_4[4];
      uStack_20 = param_4[5];
      uStack_18 = param_4[6];
      uStack_10 = param_4[7];
    }
    fVar1 = *(float *)(param_1 + 0x68);
    lVar4 = (longlong)param_3 * 0xbc + *(longlong *)(param_2 + 0x98);
    fVar7 = 3.4028235e+38;
    if (fVar1 != 3.4028235e+38) {
      fVar2 = *(float *)(lVar4 + 0xb8);
      fVar7 = fVar1 * fVar1;
      if (fVar1 * fVar1 <= fVar2) {
        fVar7 = fVar2;
      }
    }
    *(float *)(lVar4 + 0xb8) = fVar7;
    iVar5 = 0;
    lVar4 = *(longlong *)(param_1 + 0x38);
    uVar3 = *(longlong *)(param_1 + 0x40) - lVar4 >> 4;
    if (uVar3 != 0) {
      lVar6 = 0;
      do {
        if (*(longlong *)(lVar6 + lVar4) != 0) {
          FUN_180077f20(*(longlong *)(lVar6 + lVar4),param_2,param_3,&uStack_48,
                        *(int32_t *)(lVar6 + 8 + lVar4),*(int32_t *)(param_1 + 0x58));
        }
        lVar4 = *(longlong *)(param_1 + 0x38);
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 0x10;
        uVar3 = (ulonglong)iVar5;
      } while (uVar3 < (ulonglong)(*(longlong *)(param_1 + 0x40) - lVar4 >> 4));
    }
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



uint64_t FUN_18027649f(uint64_t param_1,longlong param_2)

{
  longlong unaff_RBX;
  uint unaff_ESI;
  ulonglong uVar1;
  int32_t uStack0000000000000028;
  
  uVar1 = (ulonglong)unaff_ESI;
  do {
    if (*(longlong *)(uVar1 + param_2) != 0) {
      uStack0000000000000028 = *(int32_t *)(unaff_RBX + 0x58);
      FUN_180077f20();
    }
    param_2 = *(longlong *)(unaff_RBX + 0x38);
    unaff_ESI = unaff_ESI + 1;
    uVar1 = uVar1 + 0x10;
  } while ((ulonglong)(longlong)(int)unaff_ESI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x40) - param_2 >> 4));
  return CONCAT71((int7)(int3)(unaff_ESI >> 8),1);
}



int8_t FUN_1802764fd(void)

{
  return 1;
}



// WARNING: Removing unreachable block (ram,0x000180276696)
// WARNING: Removing unreachable block (ram,0x0001802766d5)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180276610(longlong param_1,int32_t param_2)
void FUN_180276610(longlong param_1,int32_t param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plStack_68;
  int8_t auStack_60 [8];
  longlong *plStack_58;
  int32_t uStack_50;
  longlong *plStack_48;
  int16_t uStack_40;
  char cStack_3e;
  
  plVar6 = *(longlong **)(param_1 + 0x38);
  if (plVar6 < *(longlong **)(param_1 + 0x40)) {
    do {
      plVar1 = (longlong *)*plVar6;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plStack_48 = (longlong *)0x0;
      plStack_58 = (longlong *)0x0;
      auStack_60[0] = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      uStack_50 = 0;
      plStack_58 = plVar1;
      FUN_18007f4c0(auStack_60);
      plVar2 = plStack_48;
      if (plStack_48 != (longlong *)0x0) {
        (**(code **)(*plStack_48 + 0x28))(plStack_48);
      }
      plStack_68 = plVar2;
      uStack_40 = 0;
      cStack_3e = '\0';
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
      }
      uVar3 = 0;
      uVar5 = 0;
      if (0 < (int)plVar2[0xc]) {
        do {
          *(int32_t *)(plVar2[0xd] + 0x54 + uVar3) = param_2;
          uVar4 = (int)uVar5 + 1;
          uVar3 = uVar3 + 0x5c;
          uVar5 = (ulonglong)uVar4;
        } while ((int)uVar4 < (int)plVar2[0xc]);
      }
      uStack_40 = CONCAT11(uStack_40._1_1_,1);
      if ((plVar1 != (longlong *)0x0) && (plVar2 != (longlong *)0x0)) {
        if (cStack_3e != '\0') {
          FUN_180075b70();
        }
        FUN_18007f6a0(auStack_60);
        if ((char)uStack_40 != '\0') {
          FUN_180079520(plVar1);
        }
        if (uStack_40._1_1_ != '\0') {
          FUN_180079520(plVar1);
        }
        plStack_68 = (longlong *)0x0;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x38))();
        }
      }
      FUN_18007f6a0(auStack_60);
      if (plStack_48 != (longlong *)0x0) {
        (**(code **)(*plStack_48 + 0x38))();
      }
      if (plStack_68 != (longlong *)0x0) {
        (**(code **)(*plStack_68 + 0x38))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      plVar6 = plVar6 + 2;
    } while (plVar6 < *(longlong **)(param_1 + 0x40));
  }
  return;
}





