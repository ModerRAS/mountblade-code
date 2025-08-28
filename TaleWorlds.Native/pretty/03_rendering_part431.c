#include "TaleWorlds.Native.Split.h"

// 03_rendering_part431.c - 24 个函数

// 函数: void FUN_180501cb0(longlong *param_1,longlong param_2)
void FUN_180501cb0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  undefined4 uStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  undefined4 uStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_68 = (undefined4)*param_1;
  uStack_64 = *(undefined4 *)((longlong)param_1 + 4);
  lVar10 = *param_1;
  lVar9 = *param_1;
  uStack_60 = *(uint *)(param_1 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0xc);
  uVar3 = *(uint *)(param_2 + 8);
  while( true ) {
    if (uStack_60 == uVar3) {
      return;
    }
    uVar12 = (ulonglong)(uStack_60 + (uStack_60 >> 4) * -0x10);
    lVar4 = *(longlong *)(lVar9 + 8 + (ulonglong)(uStack_60 >> 4) * 8);
    lStack_f8 = *(longlong *)(lVar4 + uVar12 * 0x50);
    *(undefined8 *)(lVar4 + uVar12 * 0x50) = 0;
    lStack_f0 = *(longlong *)(lVar4 + 8 + uVar12 * 0x50);
    *(undefined8 *)(lVar4 + 8 + uVar12 * 0x50) = 0;
    lStack_e8 = *(longlong *)(lVar4 + 0x10 + uVar12 * 0x50);
    *(undefined8 *)(lVar4 + 0x10 + uVar12 * 0x50) = 0;
    uStack_e0 = *(undefined4 *)(lVar4 + 0x18 + uVar12 * 0x50);
    *(undefined4 *)(lVar4 + 0x18 + uVar12 * 0x50) = *(undefined4 *)(lVar4 + 0x18 + uVar12 * 0x50);
    plVar13 = (longlong *)(lVar4 + 0x20 + uVar12 * 0x50);
    lStack_d8 = *plVar13;
    lStack_d0 = plVar13[1];
    puVar1 = (undefined8 *)(lVar4 + 0x30 + uVar12 * 0x50);
    uStack_c8 = *puVar1;
    uStack_c0 = puVar1[1];
    plVar13 = (longlong *)(lVar4 + 0x40 + uVar12 * 0x50);
    lStack_b8 = *plVar13;
    lStack_b0 = plVar13[1];
    uVar14 = uStack_60;
    uVar8 = uStack_60;
    while( true ) {
      uVar8 = uVar8 - 1;
      lVar4 = *(longlong *)
               (*(longlong *)(lVar9 + 8 + (ulonglong)(uVar8 >> 4) * 8) +
               (ulonglong)(uVar8 & 0xf) * 0x50);
      fVar2 = *(float *)(lVar4 + 0xca4);
      if (*(float *)(lStack_f8 + 0xca4) == fVar2) {
        bVar7 = *(float *)(lStack_f8 + 0xc90) < *(float *)(lVar4 + 0xc90);
      }
      else {
        bVar7 = *(float *)(lStack_f8 + 0xca4) < fVar2;
      }
      uStack_58 = uStack_68;
      uStack_54 = uStack_64;
      uStack_50 = uStack_60;
      uStack_4c = uStack_5c;
      if (!bVar7) break;
      plVar15 = (longlong *)
                (*(longlong *)(lVar9 + 8 + (ulonglong)(uVar8 >> 4) * 8) +
                (ulonglong)(uVar8 & 0xf) * 0x50);
      plVar13 = (longlong *)
                (*(longlong *)(lVar10 + 8 + (ulonglong)(uVar14 >> 4) * 8) +
                (ulonglong)(uVar14 + (uVar14 >> 4) * -0x10) * 0x50);
      if (plVar13 != plVar15) {
        plVar13[1] = *plVar13;
        lVar4 = *plVar13;
        *plVar13 = 0;
        lVar5 = plVar13[1];
        plVar13[1] = 0;
        lVar6 = plVar13[2];
        plVar13[2] = 0;
        lVar11 = plVar13[3];
        *(int *)(plVar13 + 3) = (int)plVar13[3];
        lStack_a8 = *plVar13;
        *plVar13 = lVar4;
        lStack_a0 = plVar13[1];
        plVar13[1] = lVar5;
        lStack_98 = plVar13[2];
        plVar13[2] = lVar6;
        uStack_90 = (undefined4)plVar13[3];
        *(int *)(plVar13 + 3) = (int)lVar11;
        if (lStack_a8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lStack_a8);
        }
        lVar4 = *plVar13;
        *plVar13 = *plVar15;
        *plVar15 = lVar4;
        lVar4 = plVar13[1];
        plVar13[1] = plVar15[1];
        plVar15[1] = lVar4;
        lVar4 = plVar13[2];
        plVar13[2] = plVar15[2];
        plVar15[2] = lVar4;
        lVar4 = plVar13[3];
        *(int *)(plVar13 + 3) = (int)plVar15[3];
        *(int *)(plVar15 + 3) = (int)lVar4;
        lStack_a8 = 0;
      }
      lVar4 = plVar15[5];
      plVar13[4] = plVar15[4];
      plVar13[5] = lVar4;
      lVar4 = plVar15[7];
      plVar13[6] = plVar15[6];
      plVar13[7] = lVar4;
      lVar4 = plVar15[9];
      plVar13[8] = plVar15[8];
      plVar13[9] = lVar4;
      uVar14 = uVar14 - 1;
    }
    plVar13 = (longlong *)
              (*(longlong *)(lVar10 + 8 + (ulonglong)(uVar14 >> 4) * 8) +
              (ulonglong)(uVar14 + (uVar14 >> 4) * -0x10) * 0x50);
    if (plVar13 != &lStack_f8) {
      plVar13[1] = *plVar13;
      lVar4 = *plVar13;
      *plVar13 = 0;
      lVar5 = plVar13[1];
      plVar13[1] = 0;
      lVar6 = plVar13[2];
      plVar13[2] = 0;
      lVar11 = plVar13[3];
      *(int *)(plVar13 + 3) = (int)plVar13[3];
      lStack_88 = *plVar13;
      *plVar13 = lVar4;
      lStack_80 = plVar13[1];
      plVar13[1] = lVar5;
      lStack_78 = plVar13[2];
      plVar13[2] = lVar6;
      uStack_70 = (undefined4)plVar13[3];
      *(int *)(plVar13 + 3) = (int)lVar11;
      if (lStack_88 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lStack_88);
      }
      lVar4 = *plVar13;
      *plVar13 = lStack_f8;
      lVar5 = plVar13[1];
      plVar13[1] = lStack_f0;
      lVar6 = plVar13[2];
      plVar13[2] = lStack_e8;
      lVar11 = plVar13[3];
      *(undefined4 *)(plVar13 + 3) = uStack_e0;
      lStack_88 = 0;
      lStack_f8 = lVar4;
      lStack_f0 = lVar5;
      lStack_e8 = lVar6;
      uStack_e0 = (int)lVar11;
    }
    plVar13[4] = lStack_d8;
    plVar13[5] = lStack_d0;
    uStack_c8._4_4_ = (undefined4)((ulonglong)uStack_c8 >> 0x20);
    uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
    *(undefined4 *)(plVar13 + 6) = (undefined4)uStack_c8;
    *(undefined4 *)((longlong)plVar13 + 0x34) = uStack_c8._4_4_;
    *(undefined4 *)(plVar13 + 7) = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)plVar13 + 0x3c) = uStack_c0._4_4_;
    plVar13[8] = lStack_b8;
    plVar13[9] = lStack_b0;
    if (lStack_f8 != 0) break;
    uStack_60 = uStack_60 + 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180502080(longlong param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x20)) {
    LOCK();
    puVar1 = (ulonglong *)(param_1 + 0x10);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar4 < *(ulonglong *)(param_1 + 0x20)) &&
       (lVar6 = uVar4 * 0x2048 + *(longlong *)(param_1 + 0x18), lVar6 != 0)) {
      return lVar6;
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x28);
LAB_1805020b7:
  do {
    lVar9 = lVar6;
    if (lVar9 == 0) {
LAB_180502156:
      lVar6 = FUN_18062b420(_DAT_180c8ed18,0x2048,10);
      if (lVar6 == 0) {
        return 0;
      }
      *(undefined8 *)(lVar6 + 0x2000) = 0;
      *(undefined8 *)(lVar6 + 0x2008) = 0;
      *(undefined4 *)(lVar6 + 0x2030) = 0;
      *(undefined8 *)(lVar6 + 0x2038) = 0;
      *(undefined2 *)(lVar6 + 0x2040) = 0x100;
      return lVar6;
    }
    puVar2 = (uint *)(lVar9 + 0x2030);
    uVar5 = *puVar2;
    if ((uVar5 & 0x7fffffff) == 0) {
LAB_180502137:
      lVar6 = *(longlong *)(param_1 + 0x28);
      goto LAB_1805020b7;
    }
    LOCK();
    uVar3 = *puVar2;
    if (uVar5 == uVar3) {
      *puVar2 = uVar5 + 1;
    }
    UNLOCK();
    if (uVar5 != uVar3) goto LAB_180502137;
    LOCK();
    lVar6 = *(longlong *)(param_1 + 0x28);
    bVar10 = lVar9 == lVar6;
    if (bVar10) {
      *(longlong *)(param_1 + 0x28) = *(longlong *)(lVar9 + 0x2038);
      lVar6 = lVar9;
    }
    UNLOCK();
    if (bVar10) {
      LOCK();
      *puVar2 = *puVar2 - 2;
      UNLOCK();
      if (lVar9 != 0) {
        return lVar9;
      }
      goto LAB_180502156;
    }
    LOCK();
    uVar5 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (uVar5 == 0x80000001) {
      lVar8 = *(longlong *)(param_1 + 0x28);
      do {
        *(longlong *)(lVar9 + 0x2038) = lVar8;
        *puVar2 = 1;
        LOCK();
        lVar7 = *(longlong *)(param_1 + 0x28);
        bVar10 = lVar8 == lVar7;
        if (bVar10) {
          *(longlong *)(param_1 + 0x28) = lVar9;
          lVar7 = lVar8;
        }
        UNLOCK();
        if (bVar10) break;
        LOCK();
        uVar5 = *puVar2;
        *puVar2 = *puVar2 + 0x7fffffff;
        UNLOCK();
        lVar8 = lVar7;
      } while (uVar5 == 1);
    }
  } while( true );
}



longlong FUN_1805021b0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x38))();
  }
  FUN_180057830();
  return param_1;
}



longlong * FUN_1805021f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    param_1[1] = *param_1;
    lVar1 = *param_1;
    *param_1 = 0;
    lVar2 = param_1[1];
    param_1[1] = 0;
    lVar3 = param_1[2];
    param_1[2] = 0;
    lVar6 = param_1[3];
    *(int *)(param_1 + 3) = (int)param_1[3];
    lVar4 = *param_1;
    *param_1 = lVar1;
    lVar1 = param_1[1];
    param_1[1] = lVar2;
    lVar5 = param_1[2];
    param_1[2] = lVar3;
    lVar7 = param_1[3];
    *(int *)(param_1 + 3) = (int)lVar6;
    if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar4,(int)lVar6,lVar3,lVar2,0xfffffffffffffffe,lVar4,lVar1,lVar5,(int)lVar7);
    }
    lVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = lVar1;
    lVar1 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = lVar1;
    lVar1 = param_1[2];
    param_1[2] = param_2[2];
    param_2[2] = lVar1;
    lVar1 = param_1[3];
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(int *)(param_2 + 3) = (int)lVar1;
  }
  lVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar1;
  lVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar1;
  lVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = lVar1;
  return param_1;
}





// 函数: void FUN_180502300(longlong *param_1)
void FUN_180502300(longlong *param_1)

{
  param_1[9] = (longlong)&UNK_180a3c3e0;
  if (param_1[10] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[9] = (longlong)&UNK_18098bcb0;
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_180502380(longlong param_1)
void FUN_180502380(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x50);
  for (plVar2 = *(longlong **)(param_1 + 0x48); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_1805023c0(int param_1,int param_2,longlong *param_3)
void FUN_1805023c0(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_1 < param_2) {
    param_3 = (longlong *)*param_3;
    lVar3 = (longlong)param_1 << 3;
    uVar2 = (ulonglong)(uint)(param_2 - param_1);
    do {
      lVar1 = *param_3;
      if (*(char *)(lVar1 + 0x3fe4) == '\0') {
        lVar1 = *(longlong *)(lVar1 + 0x3fc0);
      }
      lVar1 = *(longlong *)(lVar3 + lVar1);
      FUN_1805af580(param_3[1] + 0x52eda0 + (longlong)*(int *)(lVar1 + 0x10) * 0x200,lVar1);
      FUN_18052f590(lVar1,*(undefined4 *)param_3[2],
                    param_3[1] + 0x52eda0 + (longlong)*(int *)(lVar1 + 0x10) * 0x200,param_3[3]);
      lVar3 = lVar3 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}





// 函数: void FUN_1805023d0(int param_1,int param_2)
void FUN_1805023d0(int param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  
  lVar3 = (longlong)param_1 << 3;
  uVar2 = (ulonglong)(uint)(param_2 - param_1);
  do {
    lVar1 = *unaff_RDI;
    if (*(char *)(lVar1 + 0x3fe4) == '\0') {
      lVar1 = *(longlong *)(lVar1 + 0x3fc0);
    }
    lVar1 = *(longlong *)(lVar3 + lVar1);
    FUN_1805af580(unaff_RDI[1] + 0x52eda0 + (longlong)*(int *)(lVar1 + 0x10) * 0x200,lVar1);
    FUN_18052f590(lVar1,*(undefined4 *)unaff_RDI[2],
                  unaff_RDI[1] + 0x52eda0 + (longlong)*(int *)(lVar1 + 0x10) * 0x200,unaff_RDI[3]);
    lVar3 = lVar3 + 8;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}





// 函数: void FUN_18050246d(void)
void FUN_18050246d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180502470(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 == 3) {
    return 0x180c0a390;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (undefined8 *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180502560(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 == 3) {
    return 0x180c0a3d0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (undefined8 *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      uVar2 = puVar1[7];
      puVar3[6] = puVar1[6];
      puVar3[7] = uVar2;
      puVar3[8] = puVar1[8];
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}





// 函数: void FUN_180502660(int param_1,int param_2,longlong *param_3)
void FUN_180502660(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 < param_2) {
    param_3 = (longlong *)*param_3;
    lVar4 = (longlong)param_1 << 3;
    uVar3 = (ulonglong)(uint)(param_2 - param_1);
    uStack_1c = 0x7f7fffff;
    do {
      lVar1 = *param_3;
      lVar2 = lVar1 + 0x86e988;
      if (*(char *)(lVar1 + 0x87296c) == '\0') {
        lVar2 = *(longlong *)(lVar1 + 0x872948);
      }
      lVar1 = param_3[3];
      uStack_28 = *(uint *)(lVar1 + 0x20) ^ 0x80000000;
      uStack_24 = *(uint *)(lVar1 + 0x24) ^ 0x80000000;
      uStack_20 = *(uint *)(lVar1 + 0x28) ^ 0x80000000;
      FUN_1805277e0(*(undefined8 *)(lVar4 + lVar2),*(undefined4 *)param_3[1],
                    *(undefined4 *)param_3[2],lVar1 + 0x30,&uStack_28);
      lVar4 = lVar4 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}





// 函数: void FUN_180502678(int param_1,int param_2)
void FUN_180502678(int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RBX;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 in_XMM0_Da;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  uint uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  lVar4 = (longlong)param_1 << 3;
  uVar3 = (ulonglong)(uint)(param_2 - param_1);
  uStack000000000000003c = in_XMM0_Da;
  do {
    lVar1 = *unaff_RBX;
    lVar2 = lVar1 + 0x86e988;
    if (*(char *)(lVar1 + 0x87296c) == '\0') {
      lVar2 = *(longlong *)(lVar1 + 0x872948);
    }
    lVar1 = unaff_RBX[3];
    uStack0000000000000030 = *(uint *)(lVar1 + 0x20) ^ 0x80000000;
    uStack0000000000000034 = *(uint *)(lVar1 + 0x24) ^ 0x80000000;
    uStack0000000000000038 = *(uint *)(lVar1 + 0x28) ^ 0x80000000;
    FUN_1805277e0(*(undefined8 *)(lVar4 + lVar2),*(undefined4 *)unaff_RBX[1],
                  *(undefined4 *)unaff_RBX[2],lVar1 + 0x30,&stack0x00000030);
    lVar4 = lVar4 + 8;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return;
}





// 函数: void FUN_180502730(void)
void FUN_180502730(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180502740(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar4 = (int)param_3;
  if (iVar4 == 3) {
    return 0x180c0a310;
  }
  if (iVar4 == 4) {
    return *param_1;
  }
  if (iVar4 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(*param_1,param_2,param_3,param_4,0xfffffffffffffffe);
    }
  }
  else {
    if (iVar4 == 1) {
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,DAT_180bf65bc);
      puVar1 = (undefined8 *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (iVar4 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}





// 函数: void FUN_180502820(int param_1,int param_2,longlong *param_3)
void FUN_180502820(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  
  for (lVar1 = (longlong)param_1; lVar1 < param_2; lVar1 = lVar1 + 1) {
    FUN_180582ab0(*(undefined8 *)(*(longlong *)(*param_3 + 0x87b368) + lVar1 * 8),
                  *(undefined4 *)param_3[1]);
  }
  return;
}





// 函数: void FUN_1805028c0(int param_1,int param_2,longlong *param_3)
void FUN_1805028c0(int param_1,int param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 < param_2) {
    lVar2 = (longlong)param_1 << 3;
    uVar3 = (ulonglong)(uint)(param_2 - param_1);
    do {
      lVar5 = *param_3;
      lVar4 = lVar5 + 0x86e988;
      if (*(char *)(lVar5 + 0x87296c) == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x872948);
      }
      lVar5 = *(longlong *)(lVar2 + lVar4);
      if ((((*(int *)(lVar5 + 0x560) == -1) && (*(int *)(lVar5 + 0x570) == 1)) &&
          (*(int *)(lVar5 + 0x568) == 1)) &&
         ((*(int *)(lVar5 + 0x720) == 0 && (cVar1 = func_0x00018052ae60(lVar5), cVar1 == '\0')))) {
        FUN_180520c10(lVar5 + 0x4d8,*(undefined8 *)(lVar5 + 0x6e0));
      }
      lVar2 = lVar2 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}





// 函数: void FUN_1805028cd(int param_1,int param_2,longlong *param_3)
void FUN_1805028cd(int param_1,int param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = (longlong)param_1 << 3;
  uVar3 = (ulonglong)(uint)(param_2 - param_1);
  do {
    lVar5 = *param_3;
    lVar4 = lVar5 + 0x86e988;
    if (*(char *)(lVar5 + 0x87296c) == '\0') {
      lVar4 = *(longlong *)(lVar5 + 0x872948);
    }
    lVar5 = *(longlong *)(lVar2 + lVar4);
    if ((((*(int *)(lVar5 + 0x560) == -1) && (*(int *)(lVar5 + 0x570) == 1)) &&
        (*(int *)(lVar5 + 0x568) == 1)) && (*(int *)(lVar5 + 0x720) == 0)) {
      cVar1 = func_0x00018052ae60(lVar5);
      if (cVar1 == '\0') {
        FUN_180520c10(lVar5 + 0x4d8,*(undefined8 *)(lVar5 + 0x6e0));
      }
    }
    lVar2 = lVar2 + 8;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return;
}





// 函数: void FUN_180502964(void)
void FUN_180502964(void)

{
  return;
}





// 函数: void FUN_1805029b0(int param_1,int param_2,longlong *param_3)
void FUN_1805029b0(int param_1,int param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  if (param_1 < param_2) {
    lVar3 = (longlong)param_1 << 3;
    uVar4 = (ulonglong)(uint)(param_2 - param_1);
    do {
      lVar6 = *param_3;
      lVar2 = lVar6 + 0x86e988;
      if (*(char *)(lVar6 + 0x87296c) == '\0') {
        lVar2 = *(longlong *)(lVar6 + 0x872948);
      }
      lVar6 = *(longlong *)(lVar3 + lVar2);
      puVar5 = (undefined4 *)param_3[1];
      if ((((*(int *)(lVar6 + 0x560) == -1) && (*(int *)(lVar6 + 0x570) == 1)) &&
          (*(int *)(lVar6 + 0x568) == 1)) &&
         ((*(int *)(lVar6 + 0x720) == 0 && (cVar1 = func_0x00018052ae60(lVar6), cVar1 == '\0')))) {
        FUN_1805d0cd0(*(undefined8 *)(lVar6 + 0x6e0),*puVar5);
      }
      lVar3 = lVar3 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}





// 函数: void FUN_1805029bd(int param_1,int param_2,longlong *param_3)
void FUN_1805029bd(int param_1,int param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  lVar3 = (longlong)param_1 << 3;
  uVar4 = (ulonglong)(uint)(param_2 - param_1);
  do {
    lVar6 = *param_3;
    lVar2 = lVar6 + 0x86e988;
    if (*(char *)(lVar6 + 0x87296c) == '\0') {
      lVar2 = *(longlong *)(lVar6 + 0x872948);
    }
    lVar6 = *(longlong *)(lVar3 + lVar2);
    puVar5 = (undefined4 *)param_3[1];
    if ((((*(int *)(lVar6 + 0x560) == -1) && (*(int *)(lVar6 + 0x570) == 1)) &&
        (*(int *)(lVar6 + 0x568) == 1)) && (*(int *)(lVar6 + 0x720) == 0)) {
      cVar1 = func_0x00018052ae60(lVar6);
      if (cVar1 == '\0') {
        FUN_1805d0cd0(*(undefined8 *)(lVar6 + 0x6e0),*puVar5);
      }
    }
    lVar3 = lVar3 + 8;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return;
}





// 函数: void FUN_180502a5f(void)
void FUN_180502a5f(void)

{
  return;
}





// 函数: void FUN_180502aa0(int param_1,int param_2,longlong *param_3)
void FUN_180502aa0(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (param_1 < param_2) {
    lVar3 = (longlong)param_1 << 3;
    uVar4 = (ulonglong)(uint)(param_2 - param_1);
    do {
      lVar1 = *param_3;
      lVar2 = lVar1 + 0x86e988;
      if (*(char *)(lVar1 + 0x87296c) == '\0') {
        lVar2 = *(longlong *)(lVar1 + 0x872948);
      }
      lVar2 = (longlong)*(int *)(*(longlong *)(lVar3 + lVar2) + 0x10);
      lVar5 = lVar1 + 0x52eda0 + lVar2 * 0x200;
      if (*(char *)(lVar5 + 0x199) != '\0') {
        FUN_180593ce0(lVar1 + 0x62ed98 + lVar2 * 0x240,*(undefined4 *)param_3[1],lVar1,lVar5,
                      lVar1 + 0x52eda0,lVar1 + 0x62ed98,0);
      }
      lVar3 = lVar3 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}





// 函数: void FUN_180502aad(int param_1,int param_2,longlong *param_3)
void FUN_180502aad(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lStack0000000000000028;
  undefined8 uStack0000000000000030;
  
  lVar3 = (longlong)param_1 << 3;
  uVar4 = (ulonglong)(uint)(param_2 - param_1);
  do {
    lVar1 = *param_3;
    lVar2 = lVar1 + 0x86e988;
    if (*(char *)(lVar1 + 0x87296c) == '\0') {
      lVar2 = *(longlong *)(lVar1 + 0x872948);
    }
    lVar2 = (longlong)*(int *)(*(longlong *)(lVar3 + lVar2) + 0x10);
    lVar5 = lVar1 + 0x52eda0 + lVar2 * 0x200;
    if (*(char *)(lVar5 + 0x199) != '\0') {
      lStack0000000000000028 = lVar1 + 0x62ed98;
      uStack0000000000000030 = 0;
      FUN_180593ce0(lVar1 + 0x62ed98 + lVar2 * 0x240,*(undefined4 *)param_3[1],lVar1,lVar5,
                    lVar1 + 0x52eda0);
    }
    lVar3 = lVar3 + 8;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return;
}





// 函数: void FUN_180502b6b(void)
void FUN_180502b6b(void)

{
  return;
}





// 函数: void FUN_180502bb0(int param_1,int param_2,longlong *param_3)
void FUN_180502bb0(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_1 < param_2) {
    lVar3 = (longlong)param_1 << 3;
    uVar4 = (ulonglong)(uint)(param_2 - param_1);
    do {
      lVar1 = *param_3;
      lVar2 = lVar1 + 0x86e988;
      if (*(char *)(lVar1 + 0x87296c) == '\0') {
        lVar2 = *(longlong *)(lVar1 + 0x872948);
      }
      lVar2 = (longlong)*(int *)(*(longlong *)(lVar3 + lVar2) + 0x10);
      if (*(char *)(lVar1 + lVar2 * 0x200 + 0x52ef39) != '\0') {
        FUN_180590fc0(lVar1 + 0x62ed98 + lVar2 * 0x240,lVar1,*(undefined4 *)param_3[1]);
      }
      lVar3 = lVar3 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}





// 函数: void FUN_180502bbd(int param_1,int param_2,longlong *param_3)
void FUN_180502bbd(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = (longlong)param_1 << 3;
  uVar4 = (ulonglong)(uint)(param_2 - param_1);
  do {
    lVar1 = *param_3;
    lVar2 = lVar1 + 0x86e988;
    if (*(char *)(lVar1 + 0x87296c) == '\0') {
      lVar2 = *(longlong *)(lVar1 + 0x872948);
    }
    lVar2 = (longlong)*(int *)(*(longlong *)(lVar3 + lVar2) + 0x10);
    if (*(char *)(lVar1 + lVar2 * 0x200 + 0x52ef39) != '\0') {
      FUN_180590fc0(lVar1 + 0x62ed98 + lVar2 * 0x240,lVar1,*(undefined4 *)param_3[1]);
    }
    lVar3 = lVar3 + 8;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return;
}





// 函数: void FUN_180502c4b(void)
void FUN_180502c4b(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180502cf0(int param_1,int param_2,longlong *param_3)
void FUN_180502cf0(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (param_1 < param_2) {
    lVar5 = (longlong)param_1 << 3;
    uVar4 = (ulonglong)(uint)(param_2 - param_1);
    do {
      lVar1 = *param_3;
      lVar2 = lVar1 + 0x86e988;
      if (*(char *)(lVar1 + 0x87296c) == '\0') {
        lVar2 = *(longlong *)(lVar1 + 0x872948);
      }
      lVar1 = *(longlong *)(lVar5 + lVar2);
      lVar2 = *(longlong *)(lVar1 + 0x130);
      if (((*(longlong *)(lVar2 + 0x590) != 0) && (*(int *)(lVar2 + 0x568) == 1)) &&
         ((*(uint *)(lVar2 + 0x56c) & 0x80018) != 0 && (*(uint *)(lVar2 + 0x56c) & 0x4800) == 0x4800
         )) {
        FUN_18059b410(lVar1 + 0x28);
        lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x130) + 0x8f8) + 0x9e8);
        iVar3 = 0;
        if (lVar2 != 0) {
          iVar3 = *(int *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 100 +
                          *(longlong *)(lVar2 + 0xd0));
        }
        FUN_1805b1960(lVar1 + 0x138,(longlong)iVar3 * 0x170 + _DAT_180c95ff0);
        if ((*(int *)(lVar1 + 0x1fc) == 0) && (*(int *)(lVar1 + 0x2a4) == -1)) {
          *(undefined8 *)(lVar1 + 0x280) = 0;
          *(undefined8 *)(lVar1 + 0x290) = 0;
        }
      }
      lVar5 = lVar5 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180502cfe(int param_1,int param_2,longlong *param_3)
void FUN_180502cfe(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1 << 3;
  uVar4 = (ulonglong)(uint)(param_2 - param_1);
  do {
    lVar1 = *param_3;
    lVar2 = lVar1 + 0x86e988;
    if (*(char *)(lVar1 + 0x87296c) == '\0') {
      lVar2 = *(longlong *)(lVar1 + 0x872948);
    }
    lVar1 = *(longlong *)(lVar5 + lVar2);
    lVar2 = *(longlong *)(lVar1 + 0x130);
    if (((*(longlong *)(lVar2 + 0x590) != 0) && (*(int *)(lVar2 + 0x568) == 1)) &&
       ((*(uint *)(lVar2 + 0x56c) & 0x80018) != 0 && (*(uint *)(lVar2 + 0x56c) & 0x4800) == 0x4800))
    {
      FUN_18059b410(lVar1 + 0x28);
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x130) + 0x8f8) + 0x9e8);
      iVar3 = 0;
      if (lVar2 != 0) {
        iVar3 = *(int *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 100 + *(longlong *)(lVar2 + 0xd0)
                        );
      }
      FUN_1805b1960(lVar1 + 0x138,(longlong)iVar3 * 0x170 + _DAT_180c95ff0);
      if ((*(int *)(lVar1 + 0x1fc) == 0) && (*(int *)(lVar1 + 0x2a4) == -1)) {
        *(undefined8 *)(lVar1 + 0x280) = 0;
        *(undefined8 *)(lVar1 + 0x290) = 0;
      }
    }
    lVar5 = lVar5 + 8;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return;
}





