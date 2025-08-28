#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part179_sub002_sub002.c - 1 个函数

// 函数: void FUN_180770230(longlong param_1)
void FUN_180770230(longlong param_1)

{
  int32_t auStackX_8 [2];
  longlong alStackX_10 [3];
  
  auStackX_8[0] = *(int32_t *)(param_1 + 0x270);
  alStackX_10[0] = param_1;
  FUN_1807700b0(*(longlong *)(param_1 + 0xa8) + 0x127a8,auStackX_8,alStackX_10);
  return;
}



uint64_t FUN_180770270(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint64_t uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((((int)param_1[1] < param_2) && ((int)param_1[3] == (int)param_1[1])) &&
     ((int)param_1[4] == -1)) {
    uVar6 = (int)*(uint *)((longlong)param_1 + 0x1c) >> 0x1f;
    if (((param_2 <= (int)((*(uint *)((longlong)param_1 + 0x1c) ^ uVar6) - uVar6)) ||
        (uVar3 = FUN_180748010(param_1 + 2,param_2), (int)uVar3 == 0)) &&
       (uVar3 = FUN_1807703c0(param_1,param_2), (int)uVar3 == 0)) {
      uVar8 = 0;
      uVar4 = uVar8;
      if (0 < param_2) {
        do {
          *(int32_t *)(*param_1 + uVar4 * 4) = 0xffffffff;
          uVar4 = uVar4 + 1;
        } while ((longlong)uVar4 < (longlong)param_2);
      }
      lVar2 = param_1[3];
      uVar4 = uVar8;
      uVar9 = uVar8;
      if (0 < (int)lVar2) {
        do {
          if ((int)param_1[1] == 0) goto LAB_180770376;
          lVar5 = (longlong)(int)(*(uint *)(uVar4 + param_1[2]) & (int)param_1[1] - 1U);
          piVar7 = (int *)(*param_1 + lVar5 * 4);
          iVar1 = *(int *)(*param_1 + lVar5 * 4);
          while (iVar1 != -1) {
            piVar7 = (int *)(param_1[2] + 4 + (longlong)iVar1 * 0x10);
            iVar1 = *piVar7;
          }
          *piVar7 = (int)uVar8;
          uVar9 = uVar9 + 1;
          uVar8 = (ulonglong)((int)uVar8 + 1);
          *(int32_t *)(uVar4 + 4 + param_1[2]) = 0xffffffff;
          uVar4 = uVar4 + 0x10;
        } while ((longlong)uVar9 < (longlong)(int)lVar2);
      }
      return 0;
    }
  }
  else {
LAB_180770376:
    uVar3 = 0x1c;
  }
  return uVar3;
}



uint64_t FUN_1807703c0(longlong param_1,int param_2)

{
  uint64_t uVar1;
  uint uVar2;
  
  uVar2 = (int)*(uint *)(param_1 + 0xc) >> 0x1f;
  if (((int)((*(uint *)(param_1 + 0xc) ^ uVar2) - uVar2) < param_2) &&
     (uVar1 = FUN_180747e10(param_1,param_2), (int)uVar1 != 0)) {
    return uVar1;
  }
  *(int *)(param_1 + 8) = param_2;
  return 0;
}



uint64_t * FUN_180770400(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180958ba0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x200);
  }
  return param_1;
}



uint64_t FUN_180770430(longlong param_1,uint64_t *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char acStackX_8 [8];
  char acStackX_18 [16];
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar3 = 0;
    do {
      if (*(char *)(lVar3 + *(longlong *)(param_1 + 0x20)) == '\0') {
        acStackX_8[0] = '\0';
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar3 * 8);
        (**(code **)(*plVar1 + 0x30))(plVar1,acStackX_8);
        if (acStackX_8[0] != '\0') {
          acStackX_18[0] = '\0';
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar3 * 8);
          (**(code **)(*plVar1 + 0x40))(plVar1,acStackX_18);
          if (acStackX_18[0] != '\0') {
            *(int8_t *)((longlong)iVar2 + *(longlong *)(param_1 + 0x20)) = 1;
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
            *param_2 = *(uint64_t *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 8);
            return 0;
          }
        }
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  return 2;
}



uint64_t FUN_1807704e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  char acStackX_8 [8];
  char acStackX_18 [8];
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar2 = 0;
    do {
      if (*(char *)(lVar2 + *(longlong *)(param_1 + 0x20)) == '\0') {
        acStackX_8[0] = '\0';
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar2 * 8);
        (**(code **)(*plVar1 + 0x30))(plVar1,acStackX_8);
        if (acStackX_8[0] != '\0') {
          acStackX_18[0] = '\0';
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar2 * 8);
          (**(code **)(*plVar1 + 0x40))(plVar1,acStackX_18);
          if (acStackX_18[0] != '\0') {
            return 0;
          }
        }
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xc));
  }
  return 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180770580(longlong param_1)

{
  longlong *plVar1;
  uint64_t uVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0xc)) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x18));
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x18))();
          (**(code **)(**(longlong **)(lVar4 + *(longlong *)(param_1 + 0x18)) + 0x10))();
        }
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar3 < *(int *)(param_1 + 0xc));
    }
    *(uint64_t *)(param_1 + 0x18) = 0;
    *(int32_t *)(param_1 + 0xc) = 0;
  }
  uVar2 = FUN_180742070(param_1 + 0x30);
  if ((int)uVar2 == 0) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x28),
                    &UNK_180958fb0,0x161,1);
    }
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180770590(longlong param_1)

{
  longlong *plVar1;
  uint64_t uVar2;
  longlong unaff_RBX;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar4 + *(longlong *)(unaff_RBX + 0x18));
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
        (**(code **)(**(longlong **)(lVar4 + *(longlong *)(unaff_RBX + 0x18)) + 0x10))();
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(unaff_RBX + 0xc));
  }
  *(uint64_t *)(unaff_RBX + 0x18) = 0;
  *(int32_t *)(unaff_RBX + 0xc) = 0;
  uVar2 = FUN_180742070(unaff_RBX + 0x30);
  if ((int)uVar2 == 0) {
    if (*(longlong *)(unaff_RBX + 0x28) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(unaff_RBX + 0x28),
                    &UNK_180958fb0,0x161,1);
    }
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18077059c(void)

{
  longlong *plVar1;
  uint64_t uVar2;
  longlong unaff_RBX;
  int unaff_ESI;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    plVar1 = *(longlong **)(lVar3 + *(longlong *)(unaff_RBX + 0x18));
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x18))();
      (**(code **)(**(longlong **)(lVar3 + *(longlong *)(unaff_RBX + 0x18)) + 0x10))();
    }
    unaff_ESI = unaff_ESI + 1;
    lVar3 = lVar3 + 8;
  } while (unaff_ESI < *(int *)(unaff_RBX + 0xc));
  *(uint64_t *)(unaff_RBX + 0x18) = 0;
  *(int32_t *)(unaff_RBX + 0xc) = 0;
  uVar2 = FUN_180742070(unaff_RBX + 0x30);
  if ((int)uVar2 == 0) {
    if (*(longlong *)(unaff_RBX + 0x28) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(unaff_RBX + 0x28),
                    &UNK_180958fb0,0x161,1);
    }
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807705d4(void)

{
  uint64_t uVar1;
  longlong unaff_RBX;
  
  *(uint64_t *)(unaff_RBX + 0x18) = 0;
  *(int32_t *)(unaff_RBX + 0xc) = 0;
  uVar1 = FUN_180742070(unaff_RBX + 0x30);
  if ((int)uVar1 == 0) {
    if (*(longlong *)(unaff_RBX + 0x28) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(unaff_RBX + 0x28),
                    &UNK_180958fb0,0x161,1);
    }
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807705e8(void)

{
  uint64_t uVar1;
  longlong unaff_RBX;
  
  uVar1 = FUN_180742070(unaff_RBX + 0x30);
  if ((int)uVar1 == 0) {
    if (*(longlong *)(unaff_RBX + 0x28) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(unaff_RBX + 0x28),
                    &UNK_180958fb0,0x161,1);
    }
    uVar1 = 0;
  }
  return uVar1;
}



longlong * FUN_1807706d0(longlong *param_1,int param_2,uint64_t *param_3,uint param_4,int param_5)

{
  longlong *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint64_t *puVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  int *piVar17;
  uint uStack_c4;
  longlong *plStack_c0;
  int iStack_b8;
  int iStack_b4;
  int32_t uStack_b0;
  int iStack_ac;
  uint uStack_a8;
  longlong lStack_a0;
  uint uStack_98;
  int iStack_94;
  int iStack_90;
  int8_t uStack_8c;
  longlong lStack_88;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint *puStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uVar18;
  
  plVar12 = (longlong *)0x0;
  iStack_b8 = 2;
  plVar14 = (longlong *)0x0;
  uStack_c4 = 0;
  iStack_b4 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  if (param_3[0x19] == 0) {
    return (longlong *)0x35;
  }
  lStack_88 = *param_1;
  bVar16 = lStack_88 != 0;
  if (bVar16) {
    func_0x000180743c20(lStack_88,4);
  }
  iVar7 = 0;
  if (0 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    bVar5 = true;
    plVar10 = (longlong *)0x1c;
    if (*(uint *)((longlong)param_1 + 0xc) == param_4) {
      plVar10 = plVar12;
    }
    goto LAB_180770c67;
  }
  param_1[0x77] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  if (param_2 == 0) {
    puVar8 = (uint64_t *)func_0x0001807e63a0();
  }
  else {
    puVar8 = (uint64_t *)func_0x0001807e59b0();
  }
  uStack_78 = *puVar8;
  uStack_70 = puVar8[1];
  uStack_68 = puVar8[2];
  uStack_60 = puVar8[3];
  puStack_58 = (uint *)puVar8[4];
  uStack_50 = *(int32_t *)(puVar8 + 5);
  uStack_4c = *(int32_t *)((longlong)puVar8 + 0x2c);
  uStack_48 = *(int32_t *)(puVar8 + 6);
  uStack_44 = *(int32_t *)((longlong)puVar8 + 0x34);
  uStack_40 = *(int32_t *)(puVar8 + 7);
  uStack_3c = *(int32_t *)((longlong)puVar8 + 0x3c);
  piVar17 = &iStack_b8;
  uVar6 = (*(code *)param_3[0x19])(0,param_5,&iStack_b4,&uStack_c4,piVar17,&uStack_b0,param_1[0x77])
  ;
  uVar18 = (int32_t)((ulonglong)piVar17 >> 0x20);
  plVar10 = (longlong *)(ulonglong)uVar6;
  plVar15 = plVar12;
  if (uVar6 == 0) {
    plVar15 = plVar14;
    if (uStack_c4 < 2) {
      uVar6 = func_0x000180746360(*param_1,&uStack_c4,0);
      plVar10 = (longlong *)(ulonglong)uVar6;
      if (uVar6 != 0) goto LAB_180770cd4;
    }
    else if (uStack_c4 == 0xffffffff) {
      uStack_c4 = 0;
    }
    uVar6 = uStack_c4 + 8;
    if (iStack_b8 == 1) {
      lVar9 = 8;
LAB_18077086b:
      uVar6 = (uint)((ulonglong)uVar6 * lVar9 >> 3);
    }
    else {
      if (iStack_b8 == 2) {
        lVar9 = 0x10;
        goto LAB_18077086b;
      }
      if (iStack_b8 == 3) {
        lVar9 = 0x18;
        goto LAB_18077086b;
      }
      if ((iStack_b8 == 4) || (iStack_b8 == 5)) {
        lVar9 = 0x20;
        goto LAB_18077086b;
      }
    }
    iVar13 = *(int *)((longlong)param_3 + 100) + 0x10;
    if (*(int *)((longlong)param_3 + 100) == 0) {
      iVar13 = iVar7;
    }
    if ((int)uStack_68 != 0) {
      iVar7 = (int)uStack_68 + 0x10;
    }
    if (uStack_c4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uVar6 * param_5 + 0x1f & 0xffffffe0) + 0x2f;
    }
    plVar1 = param_1 + 6;
    uVar11 = CONCAT44(uVar18,uStack_b0);
    iStack_ac = iVar7;
    uVar6 = FUN_180742460(plVar1,0,(param_4 + 0xf & 0xfffffff0) + 0x450 +
                                   ((iVar13 + 0xfU & 0xfffffff0) + (iVar7 + 0xfU & 0xfffffff0) +
                                    (iStack_b4 + 0xfU & 0xfffffff0) + 0x40 + (uVar6 & 0xfffffff0)) *
                                   param_4 + (param_4 * 8 + 0xf & 0xfffffff0),2,uVar11);
    plVar10 = (longlong *)(ulonglong)uVar6;
    if (uVar6 == 0) {
      iVar7 = 0;
      uVar11 = uVar11 & 0xffffffff00000000;
      lVar9 = FUN_180742050(plVar1,param_4 * 8,&system_buffer_ptr,0,uVar11);
      param_1[3] = lVar9;
      if (lVar9 != 0) {
        uVar11 = uVar11 & 0xffffffff00000000;
        lVar9 = FUN_180742050(plVar1,param_4,&system_buffer_ptr,0,uVar11);
        param_1[4] = lVar9;
        plVar12 = plVar14;
        if (lVar9 != 0) {
          plVar12 = (longlong *)param_1[3];
          uStack_a8 = param_4;
          if (0 < (int)param_4) {
            lStack_a0 = 0;
            do {
              puStack_58 = &uStack_98;
              uStack_98 = uStack_c4;
              iStack_94 = param_5;
              iStack_90 = iStack_b8;
              uStack_8c = 0;
              uVar11 = uVar11 & 0xffffffff00000000;
              lVar9 = FUN_180742050(param_1 + 6,iStack_ac,&system_buffer_ptr,0,uVar11);
              if (lVar9 == 0) goto FUN_180770ccf;
              plVar14 = (longlong *)(lVar9 + 0xfU & 0xfffffffffffffff0);
              if (param_2 == 0) {
                func_0x000180758fe0();
                *plVar14 = (longlong)&UNK_180958f68;
              }
              else {
                FUN_1807e4c10(plVar14);
                *plVar14 = (longlong)&UNK_180958f10;
                func_0x000180768c10(plVar14 + 0x66);
                *(int32_t *)(plVar14 + 0x6d) = 1;
                plVar14[0x66] = (longlong)&UNK_180958ec0;
                *(int32_t *)(plVar14 + 0xa4) = 0;
                plVar14[0xa5] = 0;
              }
              uVar11 = uVar11 & 0xffffffffffffff00;
              plStack_c0 = plVar14;
              uVar6 = FUN_180742e00(*param_1,&uStack_78,0,&plStack_c0,uVar11);
              plVar14 = plStack_c0;
              plVar10 = (longlong *)(ulonglong)uVar6;
              plVar15 = plVar12;
              if (uVar6 != 0) goto LAB_180770cd4;
              if (iVar13 != 0) {
                uVar11 = uVar11 & 0xffffffff00000000;
                lVar9 = FUN_180742050(param_1 + 6,iVar13,&system_buffer_ptr,0,uVar11);
                plVar14[99] = lVar9;
                if (lVar9 == 0) goto FUN_180770ccf;
                *(int32_t *)(lVar9 + 0x28) = *(int32_t *)(lVar9 + 0x90);
                *(uint64_t *)(lVar9 + 0x120) = 0;
                *(uint64_t *)(lVar9 + 0x128) = 0;
                *(uint64_t *)(lVar9 + 0x130) = 0;
                *(uint64_t *)(lVar9 + 0x148) = 0;
                *(uint64_t *)(lVar9 + 0x138) = 0;
                *(uint64_t *)(lVar9 + 0x168) = 0;
                *(int32_t *)(lVar9 + 0x18) = 0;
                *(uint64_t *)(lVar9 + 8) = 0;
                lVar9 = plVar14[99];
                plVar14[0x4f] = 0;
                plVar14[100] = 0;
                uVar4 = param_3[1];
                *(uint64_t *)(lVar9 + 0x30) = *param_3;
                *(uint64_t *)(lVar9 + 0x38) = uVar4;
                uVar4 = param_3[3];
                *(uint64_t *)(lVar9 + 0x40) = param_3[2];
                *(uint64_t *)(lVar9 + 0x48) = uVar4;
                uVar4 = param_3[5];
                *(uint64_t *)(lVar9 + 0x50) = param_3[4];
                *(uint64_t *)(lVar9 + 0x58) = uVar4;
                uVar4 = param_3[7];
                *(uint64_t *)(lVar9 + 0x60) = param_3[6];
                *(uint64_t *)(lVar9 + 0x68) = uVar4;
                uVar4 = param_3[9];
                *(uint64_t *)(lVar9 + 0x70) = param_3[8];
                *(uint64_t *)(lVar9 + 0x78) = uVar4;
                uVar4 = param_3[0xb];
                *(uint64_t *)(lVar9 + 0x80) = param_3[10];
                *(uint64_t *)(lVar9 + 0x88) = uVar4;
                uVar4 = param_3[0xd];
                *(uint64_t *)(lVar9 + 0x90) = param_3[0xc];
                *(uint64_t *)(lVar9 + 0x98) = uVar4;
                uVar4 = param_3[0xf];
                *(uint64_t *)(lVar9 + 0xa0) = param_3[0xe];
                *(uint64_t *)(lVar9 + 0xa8) = uVar4;
                uVar4 = param_3[0x11];
                *(uint64_t *)(lVar9 + 0xb0) = param_3[0x10];
                *(uint64_t *)(lVar9 + 0xb8) = uVar4;
                uVar4 = param_3[0x13];
                *(uint64_t *)(lVar9 + 0xc0) = param_3[0x12];
                *(uint64_t *)(lVar9 + 200) = uVar4;
                uVar4 = param_3[0x15];
                *(uint64_t *)(lVar9 + 0xd0) = param_3[0x14];
                *(uint64_t *)(lVar9 + 0xd8) = uVar4;
                uVar4 = param_3[0x17];
                *(uint64_t *)(lVar9 + 0xe0) = param_3[0x16];
                *(uint64_t *)(lVar9 + 0xe8) = uVar4;
                uVar18 = *(int32_t *)((longlong)param_3 + 0xc4);
                uVar2 = *(int32_t *)(param_3 + 0x19);
                uVar3 = *(int32_t *)((longlong)param_3 + 0xcc);
                *(int32_t *)(lVar9 + 0xf0) = *(int32_t *)(param_3 + 0x18);
                *(int32_t *)(lVar9 + 0xf4) = uVar18;
                *(int32_t *)(lVar9 + 0xf8) = uVar2;
                *(int32_t *)(lVar9 + 0xfc) = uVar3;
                uVar4 = param_3[0x1b];
                *(uint64_t *)(lVar9 + 0x100) = param_3[0x1a];
                *(uint64_t *)(lVar9 + 0x108) = uVar4;
                *(int *)(plVar14[99] + 0xa4) = param_2;
                *(void **)(plVar14[99] + 0x88) = &UNK_180770640;
                *(longlong **)(plVar14[99] + 8) = plVar14 + 0x5c;
                *(longlong **)(plVar14[99] + 0x170) = plVar14 + 0x66;
                *(int32_t *)(plVar14[99] + 0x110) = 0;
                *(longlong *)(plVar14[99] + 0x20) = *param_1;
                *(longlong *)(plVar14[99] + 0x10) = *param_1 + 0x118e8;
              }
              plStack_c0[0x49] = (longlong)param_1;
              *(int *)(plStack_c0 + 0x4a) = iVar7;
              *(int *)((longlong)plStack_c0 + 0x254) = param_2;
              (**(code **)(*plStack_c0 + 0x28))(plStack_c0,1);
              LOCK();
              *(uint *)((longlong)plStack_c0 + 100) = *(uint *)((longlong)plStack_c0 + 100) | 0x200;
              UNLOCK();
              iVar7 = iVar7 + 1;
              *(int8_t *)(lStack_a0 + param_1[4]) = 0;
              *(longlong **)(param_1[3] + lStack_a0 * 8) = plStack_c0;
              lStack_a0 = lStack_a0 + 1;
            } while (iVar7 < (int)param_4);
          }
          bVar5 = false;
          *(int *)(param_1 + 1) = param_2;
          *(uint *)((longlong)param_1 + 0xc) = param_4;
          plVar10 = (longlong *)0x0;
          goto LAB_180770c67;
        }
      }
FUN_180770ccf:
      plVar10 = (longlong *)0x26;
      plVar15 = plVar12;
    }
  }
LAB_180770cd4:
  bVar5 = true;
  plVar12 = plVar15;
LAB_180770c67:
  if ((bVar16) && (lStack_88 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lStack_88,4);
  }
  if (((bVar5) && (plVar12 != (longlong *)0x0)) && (0 < (int)uStack_a8)) {
    uVar11 = (ulonglong)uStack_a8;
    do {
      if ((longlong *)*plVar12 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar12 + 0x10))();
      }
      plVar12 = plVar12 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return plVar10;
}



ulonglong FUN_18077073a(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  bool bVar7;
  int in_EAX;
  uint uVar8;
  int iVar9;
  uint64_t *puVar10;
  longlong lVar11;
  longlong lVar12;
  int32_t uVar13;
  ulonglong uVar14;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  ulonglong unaff_R12;
  int iVar18;
  longlong unaff_R13;
  longlong *unaff_R14;
  int unaff_R15D;
  
  *(char *)(unaff_RBP + -0x71) = (char)unaff_R12;
  *(longlong *)(unaff_RBP + -0x31) = param_1;
  if (param_1 != 0) {
    func_0x000180743c20(param_1,4);
    in_EAX = *(int *)(unaff_RBP + 0x67);
    *(int8_t *)(unaff_RBP + -0x71) = 1;
  }
  uVar16 = (uint)unaff_R12;
  if (0 < *(int *)((longlong)unaff_RSI + 0xc)) {
    bVar7 = true;
    uVar14 = 0x1c;
    if (*(int *)((longlong)unaff_RSI + 0xc) == unaff_R15D) {
      uVar14 = unaff_R12 & 0xffffffff;
    }
    goto LAB_180770c67;
  }
  unaff_RSI[0x77] = unaff_R12;
  *(uint *)(unaff_RSI + 2) = uVar16;
  if (in_EAX == 0) {
    puVar10 = (uint64_t *)func_0x0001807e63a0();
  }
  else {
    puVar10 = (uint64_t *)func_0x0001807e59b0();
  }
  uVar6 = puVar10[1];
  iVar17 = *(int *)(unaff_RBP + 0x7f);
  *(uint64_t *)(unaff_RBP + -0x21) = *puVar10;
  *(uint64_t *)(unaff_RBP + -0x19) = uVar6;
  uVar6 = puVar10[3];
  *(uint64_t *)(unaff_RBP + -0x11) = puVar10[2];
  *(uint64_t *)(unaff_RBP + -9) = uVar6;
  uVar13 = *(int32_t *)((longlong)puVar10 + 0x24);
  uVar3 = *(int32_t *)(puVar10 + 5);
  uVar4 = *(int32_t *)((longlong)puVar10 + 0x2c);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(puVar10 + 4);
  *(int32_t *)(unaff_RBP + 3) = uVar13;
  *(int32_t *)(unaff_RBP + 7) = uVar3;
  *(int32_t *)(unaff_RBP + 0xb) = uVar4;
  uVar13 = *(int32_t *)((longlong)puVar10 + 0x34);
  uVar3 = *(int32_t *)(puVar10 + 7);
  uVar4 = *(int32_t *)((longlong)puVar10 + 0x3c);
  lVar11 = unaff_RBP + -0x61;
  *(int32_t *)(unaff_RBP + 0xf) = *(int32_t *)(puVar10 + 6);
  *(int32_t *)(unaff_RBP + 0x13) = uVar13;
  *(int32_t *)(unaff_RBP + 0x17) = uVar3;
  *(int32_t *)(unaff_RBP + 0x1b) = uVar4;
  uVar8 = (**(code **)(unaff_R13 + 200))(0,iVar17,unaff_RBP + -0x5d,unaff_RBP + -0x6d,lVar11);
  uVar13 = (int32_t)((ulonglong)lVar11 >> 0x20);
  uVar14 = (ulonglong)uVar8;
  if (uVar8 == 0) {
    uVar8 = *(uint *)(unaff_RBP + -0x6d);
    if (uVar8 < 2) {
      uVar16 = func_0x000180746360(*unaff_RSI,unaff_RBP + -0x6d,0);
      uVar14 = (ulonglong)uVar16;
      if (uVar16 != 0) goto LAB_180770cd4;
      uVar8 = *(uint *)(unaff_RBP + -0x6d);
    }
    else if (uVar8 == 0xffffffff) {
      *(uint *)(unaff_RBP + -0x6d) = uVar16;
      uVar8 = uVar16;
    }
    iVar18 = *(int *)(unaff_RBP + -0x61);
    uVar16 = uVar8 + 8;
    if (iVar18 == 1) {
      lVar11 = 8;
LAB_18077086b:
      uVar16 = (uint)((ulonglong)uVar16 * lVar11 >> 3);
    }
    else {
      if (iVar18 == 2) {
        lVar11 = 0x10;
        goto LAB_18077086b;
      }
      if (iVar18 == 3) {
        lVar11 = 0x18;
        goto LAB_18077086b;
      }
      if ((iVar18 == 4) || (iVar18 == 5)) {
        lVar11 = 0x20;
        goto LAB_18077086b;
      }
    }
    iVar9 = (int)unaff_R14;
    iVar18 = *(int *)(unaff_R13 + 100) + 0x10;
    if (*(int *)(unaff_R13 + 100) == 0) {
      iVar18 = iVar9;
    }
    if (*(int *)(unaff_RBP + -0x11) != 0) {
      iVar9 = *(int *)(unaff_RBP + -0x11) + 0x10;
    }
    *(int *)(unaff_RBP + -0x55) = iVar9;
    if (uVar8 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = (uVar16 * iVar17 + 0x1f & 0xffffffe0) + 0x2f;
    }
    plVar1 = unaff_RSI + 6;
    uVar15 = CONCAT44(uVar13,*(int32_t *)(unaff_RBP + -0x59));
    uVar16 = FUN_180742460(plVar1,0,(unaff_R15D + 0xfU & 0xfffffff0) + 0x450 +
                                    ((iVar18 + 0xfU & 0xfffffff0) + (iVar9 + 0xfU & 0xfffffff0) +
                                     (*(int *)(unaff_RBP + -0x5d) + 0xfU & 0xfffffff0) + 0x40 +
                                    (uVar16 & 0xfffffff0)) * unaff_R15D +
                                    (unaff_R15D * 8 + 0xfU & 0xfffffff0),2,uVar15);
    uVar14 = (ulonglong)uVar16;
    if (uVar16 == 0) {
      iVar17 = 0;
      uVar15 = uVar15 & 0xffffffff00000000;
      lVar11 = FUN_180742050(plVar1,unaff_R15D * 8,&system_buffer_ptr,0,uVar15);
      unaff_RSI[3] = lVar11;
      if (lVar11 != 0) {
        uVar15 = uVar15 & 0xffffffff00000000;
        lVar11 = FUN_180742050(plVar1,unaff_R15D,&system_buffer_ptr,0,uVar15);
        unaff_RSI[4] = lVar11;
        if (lVar11 != 0) {
          unaff_R14 = (longlong *)unaff_RSI[3];
          *(int *)(unaff_RBP + -0x51) = unaff_R15D;
          if (0 < unaff_R15D) {
            *(uint64_t *)(unaff_RBP + -0x49) = 0;
            do {
              *(longlong *)(unaff_RBP + -1) = unaff_RBP + -0x41;
              *(int32_t *)(unaff_RBP + -0x41) = *(int32_t *)(unaff_RBP + -0x6d);
              *(int32_t *)(unaff_RBP + -0x3d) = *(int32_t *)(unaff_RBP + 0x7f);
              *(int32_t *)(unaff_RBP + -0x39) = *(int32_t *)(unaff_RBP + -0x61);
              *(int8_t *)(unaff_RBP + -0x35) = 0;
              uVar15 = uVar15 & 0xffffffff00000000;
              lVar11 = FUN_180742050(unaff_RSI + 6,*(int32_t *)(unaff_RBP + -0x55),&system_buffer_ptr
                                     ,0,uVar15);
              if (lVar11 == 0) goto FUN_180770ccf;
              puVar10 = (uint64_t *)(lVar11 + 0xfU & 0xfffffffffffffff0);
              if (*(int *)(unaff_RBP + 0x67) == 0) {
                func_0x000180758fe0();
                *puVar10 = &UNK_180958f68;
              }
              else {
                FUN_1807e4c10(puVar10);
                *puVar10 = &UNK_180958f10;
                func_0x000180768c10(puVar10 + 0x66);
                *(int32_t *)(puVar10 + 0x6d) = 1;
                puVar10[0x66] = &UNK_180958ec0;
                *(int32_t *)(puVar10 + 0xa4) = 0;
                puVar10[0xa5] = 0;
              }
              lVar11 = *unaff_RSI;
              *(uint64_t **)(unaff_RBP + -0x69) = puVar10;
              uVar15 = uVar15 & 0xffffffffffffff00;
              uVar16 = FUN_180742e00(lVar11,unaff_RBP + -0x21,0,unaff_RBP + -0x69,uVar15);
              uVar14 = (ulonglong)uVar16;
              if (uVar16 != 0) goto LAB_180770cd4;
              if (iVar18 == 0) {
                uVar13 = *(int32_t *)(unaff_RBP + 0x67);
              }
              else {
                lVar11 = *(longlong *)(unaff_RBP + -0x69);
                uVar15 = uVar15 & 0xffffffff00000000;
                lVar12 = FUN_180742050(unaff_RSI + 6,iVar18,&system_buffer_ptr,0,uVar15);
                *(longlong *)(lVar11 + 0x318) = lVar12;
                if (lVar12 == 0) goto FUN_180770ccf;
                *(int32_t *)(lVar12 + 0x28) = *(int32_t *)(lVar12 + 0x90);
                *(uint64_t *)(lVar12 + 0x120) = 0;
                *(uint64_t *)(lVar12 + 0x128) = 0;
                *(uint64_t *)(lVar12 + 0x130) = 0;
                *(uint64_t *)(lVar12 + 0x148) = 0;
                *(uint64_t *)(lVar12 + 0x138) = 0;
                *(uint64_t *)(lVar12 + 0x168) = 0;
                *(int32_t *)(lVar12 + 0x18) = 0;
                *(uint64_t *)(lVar12 + 8) = 0;
                lVar12 = *(longlong *)(lVar11 + 0x318);
                puVar10 = *(uint64_t **)(unaff_RBP + 0x6f);
                *(uint64_t *)(lVar11 + 0x278) = 0;
                *(uint64_t *)(lVar11 + 800) = 0;
                uVar13 = *(int32_t *)(unaff_RBP + 0x67);
                uVar6 = puVar10[1];
                *(uint64_t *)(lVar12 + 0x30) = *puVar10;
                *(uint64_t *)(lVar12 + 0x38) = uVar6;
                uVar6 = puVar10[3];
                *(uint64_t *)(lVar12 + 0x40) = puVar10[2];
                *(uint64_t *)(lVar12 + 0x48) = uVar6;
                uVar6 = puVar10[5];
                *(uint64_t *)(lVar12 + 0x50) = puVar10[4];
                *(uint64_t *)(lVar12 + 0x58) = uVar6;
                uVar6 = puVar10[7];
                *(uint64_t *)(lVar12 + 0x60) = puVar10[6];
                *(uint64_t *)(lVar12 + 0x68) = uVar6;
                uVar6 = puVar10[9];
                *(uint64_t *)(lVar12 + 0x70) = puVar10[8];
                *(uint64_t *)(lVar12 + 0x78) = uVar6;
                uVar6 = puVar10[0xb];
                *(uint64_t *)(lVar12 + 0x80) = puVar10[10];
                *(uint64_t *)(lVar12 + 0x88) = uVar6;
                uVar6 = puVar10[0xd];
                *(uint64_t *)(lVar12 + 0x90) = puVar10[0xc];
                *(uint64_t *)(lVar12 + 0x98) = uVar6;
                uVar6 = puVar10[0xf];
                *(uint64_t *)(lVar12 + 0xa0) = puVar10[0xe];
                *(uint64_t *)(lVar12 + 0xa8) = uVar6;
                uVar6 = puVar10[0x11];
                *(uint64_t *)(lVar12 + 0xb0) = puVar10[0x10];
                *(uint64_t *)(lVar12 + 0xb8) = uVar6;
                uVar6 = puVar10[0x13];
                *(uint64_t *)(lVar12 + 0xc0) = puVar10[0x12];
                *(uint64_t *)(lVar12 + 200) = uVar6;
                uVar6 = puVar10[0x15];
                *(uint64_t *)(lVar12 + 0xd0) = puVar10[0x14];
                *(uint64_t *)(lVar12 + 0xd8) = uVar6;
                uVar6 = puVar10[0x17];
                *(uint64_t *)(lVar12 + 0xe0) = puVar10[0x16];
                *(uint64_t *)(lVar12 + 0xe8) = uVar6;
                uVar3 = *(int32_t *)((longlong)puVar10 + 0xc4);
                uVar4 = *(int32_t *)(puVar10 + 0x19);
                uVar5 = *(int32_t *)((longlong)puVar10 + 0xcc);
                *(int32_t *)(lVar12 + 0xf0) = *(int32_t *)(puVar10 + 0x18);
                *(int32_t *)(lVar12 + 0xf4) = uVar3;
                *(int32_t *)(lVar12 + 0xf8) = uVar4;
                *(int32_t *)(lVar12 + 0xfc) = uVar5;
                uVar6 = puVar10[0x1b];
                *(uint64_t *)(lVar12 + 0x100) = puVar10[0x1a];
                *(uint64_t *)(lVar12 + 0x108) = uVar6;
                *(int32_t *)(*(longlong *)(lVar11 + 0x318) + 0xa4) = uVar13;
                *(void **)(*(longlong *)(lVar11 + 0x318) + 0x88) = &UNK_180770640;
                *(longlong *)(*(longlong *)(lVar11 + 0x318) + 8) = lVar11 + 0x2e0;
                *(longlong *)(*(longlong *)(lVar11 + 0x318) + 0x170) = lVar11 + 0x330;
                *(int32_t *)(*(longlong *)(lVar11 + 0x318) + 0x110) = 0;
                *(longlong *)(*(longlong *)(lVar11 + 0x318) + 0x20) = *unaff_RSI;
                *(longlong *)(*(longlong *)(lVar11 + 0x318) + 0x10) = *unaff_RSI + 0x118e8;
              }
              *(longlong **)(*(longlong *)(unaff_RBP + -0x69) + 0x248) = unaff_RSI;
              *(int *)(*(longlong *)(unaff_RBP + -0x69) + 0x250) = iVar17;
              *(int32_t *)(*(longlong *)(unaff_RBP + -0x69) + 0x254) = uVar13;
              (**(code **)(**(longlong **)(unaff_RBP + -0x69) + 0x28))
                        (*(longlong **)(unaff_RBP + -0x69),1);
              LOCK();
              puVar2 = (uint *)(*(longlong *)(unaff_RBP + -0x69) + 100);
              *puVar2 = *puVar2 | 0x200;
              UNLOCK();
              lVar11 = *(longlong *)(unaff_RBP + -0x49);
              iVar17 = iVar17 + 1;
              *(int8_t *)(lVar11 + unaff_RSI[4]) = 0;
              *(uint64_t *)(unaff_RSI[3] + lVar11 * 8) = *(uint64_t *)(unaff_RBP + -0x69);
              *(longlong *)(unaff_RBP + -0x49) = lVar11 + 1;
            } while (iVar17 < unaff_R15D);
          }
          uVar14 = 0;
          bVar7 = false;
          *(int32_t *)(unaff_RSI + 1) = *(int32_t *)(unaff_RBP + 0x67);
          *(int *)((longlong)unaff_RSI + 0xc) = unaff_R15D;
          goto LAB_180770c67;
        }
      }
FUN_180770ccf:
      uVar14 = 0x26;
    }
  }
LAB_180770cd4:
  bVar7 = true;
LAB_180770c67:
  if ((*(char *)(unaff_RBP + -0x71) != '\0') && (*(longlong *)(unaff_RBP + -0x31) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(*(longlong *)(unaff_RBP + -0x31),4);
  }
  if (((bVar7) && (unaff_R14 != (longlong *)0x0)) && (0 < (int)*(uint *)(unaff_RBP + -0x51))) {
    uVar15 = (ulonglong)*(uint *)(unaff_RBP + -0x51);
    do {
      if ((longlong *)*unaff_R14 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*unaff_R14 + 0x10))();
      }
      unaff_R14 = unaff_R14 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  return uVar14;
}



uint64_t FUN_180770ccf(void)

{
  longlong unaff_RBP;
  ulonglong uVar1;
  longlong *unaff_R14;
  
  if ((*(char *)(unaff_RBP + -0x71) != '\0') && (*(longlong *)(unaff_RBP + -0x31) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(*(longlong *)(unaff_RBP + -0x31),4);
  }
  if ((unaff_R14 != (longlong *)0x0) && (0 < (int)*(uint *)(unaff_RBP + -0x51))) {
    uVar1 = (ulonglong)*(uint *)(unaff_RBP + -0x51);
    do {
      if ((longlong *)*unaff_R14 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*unaff_R14 + 0x10))();
      }
      unaff_R14 = unaff_R14 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return 0x26;
}



uint64_t FUN_180770ce0(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  uint64_t uVar4;
  int iVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  *(int32_t *)(lVar1 + 0x22c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x218) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x220) = 0x3f800000;
  *(int32_t *)(lVar1 + 600) = 0xffffffff;
  *(int8_t *)(lVar1 + 0x25c) = 0;
  *(int32_t *)(lVar1 + 0x228) = 0xffffffff;
  LOCK();
  *(uint *)(lVar1 + 100) = *(uint *)(lVar1 + 100) | 0x10;
  UNLOCK();
  lVar3 = *(longlong *)(lVar1 + 0xe8);
  iVar5 = 0;
  if (0 < *(int *)(lVar3 + 0x60)) {
    lVar6 = 0;
    do {
      piVar2 = *(int **)(lVar6 + *(longlong *)(lVar3 + 0x68));
      if (*piVar2 == 1) {
        uVar4 = func_0x000180762af0(lVar1,iVar5,piVar2[0xe]);
LAB_180770d72:
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
      else if (*piVar2 == 0) {
        uVar4 = func_0x000180762a70(lVar1,iVar5,piVar2[0xe]);
        goto LAB_180770d72;
      }
      lVar3 = *(longlong *)(lVar1 + 0xe8);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar5 < *(int *)(lVar3 + 0x60));
  }
  return 0;
}



int32_t FUN_180770df0(longlong *param_1,int param_2,int32_t *param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_3 == (int32_t *)0x0) {
    return 0x1f;
  }
  if (param_2 == 1) {
    lVar1 = *param_1;
    *param_3 = *(int32_t *)(lVar1 + 0x220);
    if (param_4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18076b390(param_4,0x20,&UNK_180958d90,(double)*(float *)(lVar1 + 0x220));
    }
  }
  return 0;
}



uint64_t FUN_180770e50(longlong *param_1,int param_2,int32_t param_3)

{
  longlong lVar1;
  uint64_t uVar2;
  int8_t *puStackX_8;
  
  if (param_2 == 0) {
    lVar1 = *param_1;
    uVar2 = FUN_180743700(*(uint64_t *)(lVar1 + 0xa8),&puStackX_8,0x18,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *puStackX_8 = 9;
    *(longlong *)(puStackX_8 + 8) = lVar1;
    *(int32_t *)(puStackX_8 + 0x10) = param_3;
    uVar2 = func_0x000180743b40(*(uint64_t *)(lVar1 + 0xa8),puStackX_8,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(int32_t *)(lVar1 + 0x228) = param_3;
  }
  return 0;
}



int32_t FUN_180770ed0(longlong *param_1,int param_2,int32_t *param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_3 == (int32_t *)0x0) {
    return 0x1f;
  }
  if (param_2 == 0) {
    lVar1 = *param_1;
    *param_3 = *(int32_t *)(lVar1 + 0x228);
    if (param_4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18076b390(param_4,0x20,&UNK_1809fd0a0,*(int32_t *)(lVar1 + 0x228));
    }
  }
  return 0;
}



uint64_t FUN_180770fa0(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  
  if (param_2 == 0x80) {
    lVar1 = *param_1;
    if (*(longlong *)(lVar1 + 0x238) != 0) {
      uVar2 = func_0x000180770390(*(longlong *)(lVar1 + 0x238),lVar1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      *(uint64_t *)(lVar1 + 0x238) = 0;
    }
  }
  return 0;
}



uint64_t FUN_180770fe0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  
  lVar2 = 0;
  if (param_2 != -1) {
    lVar2 = func_0x00018076fee0(*(longlong *)(param_1 + 0xa8) + 0x12798);
  }
  lVar1 = *(longlong *)(param_1 + 0x238);
  if (lVar2 != lVar1) {
    if ((lVar1 != 0) && (uVar3 = func_0x000180770390(lVar1,param_1), (int)uVar3 != 0)) {
      return uVar3;
    }
    if ((lVar2 != 0) && (uVar3 = func_0x00018076fc10(lVar2,param_1), (int)uVar3 != 0)) {
      return uVar3;
    }
    *(longlong *)(param_1 + 0x238) = lVar2;
  }
  return 0;
}



uint64_t FUN_180771050(longlong param_1)

{
  uint64_t uVar1;
  
  if (*(longlong *)(param_1 + 0x238) == 0) {
    return 0x1c;
  }
  uVar1 = func_0x000180770390(*(longlong *)(param_1 + 0x238),param_1);
  if ((int)uVar1 == 0) {
    *(uint64_t *)(param_1 + 0x238) = 0;
  }
  return uVar1;
}







