#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part058.c - 9 个函数

// 函数: void FUN_1803e11f0(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803e11f0(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  longlong lVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  longlong lVar5;
  longlong lVar6;
  void *puStack_40;
  longlong lStack_38;
  int32_t uStack_28;
  
  uVar3 = (**(code **)(*param_1 + 0x90))(param_1,&puStack_40,param_3,param_4,0xfffffffffffffffe);
  FUN_180639ec0(param_2,uVar3);
  puStack_40 = &unknown_var_3456_ptr;
  if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_38 = 0;
  uStack_28 = 0;
  puStack_40 = &unknown_var_720_ptr;
  lVar5 = param_1[0x18];
  puVar4 = (int32_t *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = (int)lVar5;
  param_2[1] = param_2[1] + 4;
  FUN_180639fd0(param_2,(longlong)param_1 + 0xd4);
  uVar1 = *(int32_t *)((longlong)param_1 + 0xe4);
  puVar4 = (int32_t *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  lVar5 = param_1[6];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = (int)lVar5;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)((longlong)param_1 + 0xf4);
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  lVar5 = param_1[0x1e];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = (int)lVar5;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  lVar5 = param_1[0x1d];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = (int)lVar5;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)((longlong)param_1 + 0xec);
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  FUN_180639ec0(param_2,param_1 + 0x81);
  FUN_180639ec0(param_2,param_1 + 0x23);
  FUN_180639ec0(param_2,param_1 + 0x27);
  FUN_180639f50(param_2,param_1 + 0x2b);
  uVar1 = *(int32_t *)((longlong)param_1 + 0x16c);
  puVar4 = (int32_t *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  lVar5 = param_1[0x2d];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = (int)lVar5;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  param_1 = param_1 + 8;
  lVar5 = 4;
  do {
    lVar6 = 4;
    do {
      lVar2 = *param_1;
      if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = (int)lVar2;
      param_2[1] = param_2[1] + 4;
      puVar4 = (int32_t *)param_2[1];
      param_1 = (longlong *)((longlong)param_1 + 4);
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e1550(longlong param_1,longlong param_2,uint64_t param_3,longlong *param_4)
void FUN_1803e1550(longlong param_1,longlong param_2,uint64_t param_3,longlong *param_4)

{
  int32_t *puVar1;
  byte bVar2;
  int32_t uVar3;
  longlong lVar4;
  uint64_t uVar5;
  longlong *plVar6;
  int8_t uVar7;
  uint64_t *puVar8;
  longlong *plVar9;
  byte bVar10;
  int32_t *puVar11;
  uint uVar12;
  void *puVar13;
  uint *puVar14;
  int32_t *puVar15;
  longlong *unaff_RSI;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plStackX_18;
  longlong *plStackX_20;
  
  *(int32_t *)(param_1 + 0xc0) = **(int32_t **)(param_2 + 8);
  lVar17 = *(longlong *)(param_2 + 8);
  *(int32_t *)(param_1 + 0xd4) = *(int32_t *)(lVar17 + 4);
  *(int32_t *)(param_1 + 0xd8) = *(int32_t *)(lVar17 + 8);
  *(int32_t *)(param_1 + 0xdc) = *(int32_t *)(lVar17 + 0xc);
  uVar3 = *(int32_t *)(lVar17 + 0x10);
  *(int32_t **)(param_2 + 8) = (int32_t *)(lVar17 + 0x14);
  *(int32_t *)(param_1 + 0xe0) = uVar3;
  *(int32_t *)(param_1 + 0xe4) = *(int32_t *)(lVar17 + 0x14);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0x30) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xf4) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xf0) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xe8) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xec) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  uVar12 = **(uint **)(param_2 + 8);
  puVar14 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar14;
  if (uVar12 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x408) + 0x18))
              ((longlong *)(param_1 + 0x408),puVar14,uVar12);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar12;
    puVar14 = *(uint **)(param_2 + 8);
  }
  uVar12 = *puVar14;
  puVar14 = puVar14 + 1;
  *(uint **)(param_2 + 8) = puVar14;
  if (uVar12 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x118) + 0x18))
              ((longlong *)(param_1 + 0x118),puVar14,uVar12);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar12;
    puVar14 = *(uint **)(param_2 + 8);
  }
  uVar12 = *puVar14;
  puVar14 = puVar14 + 1;
  *(uint **)(param_2 + 8) = puVar14;
  if (uVar12 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x138) + 0x18))
              ((longlong *)(param_1 + 0x138),puVar14,uVar12);
    puVar14 = (uint *)((ulonglong)uVar12 + *(longlong *)(param_2 + 8));
  }
  lVar17 = 4;
  *(uint *)(param_1 + 0x158) = *puVar14;
  *(uint *)(param_1 + 0x15c) = puVar14[1];
  *(uint *)(param_1 + 0x160) = puVar14[2];
  *(uint *)(param_1 + 0x164) = puVar14[3];
  *(uint **)(param_2 + 8) = puVar14 + 4;
  *(uint *)(param_1 + 0x16c) = puVar14[4];
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0x168) = **(int32_t **)(param_2 + 8);
  puVar11 = (int32_t *)(*(longlong *)(param_2 + 8) + 4);
  puVar15 = (int32_t *)(param_1 + 0x44);
  do {
    puVar15[-1] = *puVar11;
    *puVar15 = puVar11[1];
    puVar15[1] = puVar11[2];
    puVar1 = puVar11 + 3;
    puVar11 = puVar11 + 4;
    puVar15[2] = *puVar1;
    lVar17 = lVar17 + -1;
    puVar15 = puVar15 + 4;
  } while (lVar17 != 0);
  *(int32_t **)(param_2 + 8) = puVar11;
  if (*(int *)(param_1 + 0x418) < 1) {
    unaff_RSI = *(longlong **)(param_1 + 0x400);
    *(uint64_t *)(param_1 + 0x400) = 0;
    plVar18 = (longlong *)0x0;
  }
  else {
    plVar18 = (longlong *)(param_1 + 0x408);
    param_4 = (longlong *)CONCAT71((int7)((ulonglong)param_4 >> 8),1);
    puVar8 = (uint64_t *)
             FUN_1800b08e0(system_resource_state,&stack0x00000010,plVar18,param_4,0,0xfffffffffffffffe);
    uVar5 = *puVar8;
    *puVar8 = 0;
    plVar9 = *(longlong **)(param_1 + 0x400);
    *(uint64_t *)(param_1 + 0x400) = uVar5;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x38))();
    }
  }
  if (unaff_RSI != (longlong *)0x0) {
    (**(code **)(*unaff_RSI + 0x38))();
  }
  if (*(int *)(param_1 + 0x128) < 1) {
    plStackX_20 = *(longlong **)(param_1 + 0x108);
    *(uint64_t *)(param_1 + 0x108) = 0;
  }
  else {
    plVar18 = (longlong *)(param_1 + 0x118);
    puVar8 = (uint64_t *)FUN_1800b33d0(system_resource_state,&plStackX_18);
    uVar5 = *puVar8;
    *puVar8 = 0;
    plVar9 = *(longlong **)(param_1 + 0x108);
    *(uint64_t *)(param_1 + 0x108) = uVar5;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x38))();
    }
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
    if (*(longlong *)(param_1 + 0x108) == 0) goto LAB_1803e0d25;
    puVar8 = (uint64_t *)FUN_1800763c0(*(longlong *)(param_1 + 0x108),&plStackX_20);
    uVar5 = *puVar8;
    *puVar8 = 0;
    plVar9 = *(longlong **)(param_1 + 0x108);
    *(uint64_t *)(param_1 + 0x108) = uVar5;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x38))();
    }
  }
  if (plStackX_20 != (longlong *)0x0) {
    (**(code **)(*plStackX_20 + 0x38))();
  }
LAB_1803e0d25:
  if (*(int *)(param_1 + 0x148) < 1) {
    plVar18 = *(longlong **)(param_1 + 0x110);
    *(uint64_t *)(param_1 + 0x110) = 0;
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 0x38))();
    }
  }
  else {
    puVar13 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x140) != (void *)0x0) {
      puVar13 = *(void **)(param_1 + 0x140);
    }
    plVar9 = (longlong *)FUN_1802abc50(system_resource_state + 0x1d0,puVar13);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9);
    }
    plVar6 = *(longlong **)(param_1 + 0x110);
    *(longlong **)(param_1 + 0x110) = plVar9;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x38))();
    }
    if ((*(longlong *)(param_1 + 0x110) != 0) &&
       (lVar17 = *(longlong *)(param_1 + 0x108), lVar17 != 0)) {
      if (*(longlong *)(param_1 + 0x110) != *(longlong *)(lVar17 + 0x1b8)) {
        if (*(char *)(lVar17 + 0xb1) != '\0') {
          plStackX_18 = plVar18;
          plStackX_20 = param_4;
                    // WARNING: Subroutine does not return
          FUN_1808fd200();
        }
        FUN_180080810(lVar17 + 0x1b8);
        lVar4 = *(longlong *)(lVar17 + 0x1b8);
        if (lVar4 != 0) {
          lVar16 = 0;
          bVar2 = *(byte *)(lVar17 + 0xfd);
          bVar10 = (byte)((uint)*(int32_t *)(*(longlong *)(lVar4 + 0x1e0) + 0x1588) >> 0x1b) << 7
          ;
          *(byte *)(lVar17 + 0xfd) = bVar10 | bVar2 & 0x7f;
          uVar12 = *(uint *)(lVar4 + 0x138) & 0x3000;
          if (uVar12 == 0x1000) {
            *(int8_t *)(lVar17 + 0xf7) = 1;
          }
          else {
            uVar7 = 0;
            if (uVar12 == 0x2000) {
              uVar7 = 2;
            }
            *(int8_t *)(lVar17 + 0xf7) = uVar7;
          }
          bVar10 = bVar10 | bVar2 & 0x77;
          *(byte *)(lVar17 + 0xfd) = bVar10;
          plVar18 = (longlong *)(lVar4 + 0xb8);
          do {
            if (0xf < lVar16) break;
            if ((*plVar18 != 0) && (*(int *)(*plVar18 + 0x36c) != 0)) {
              bVar10 = bVar10 | 8;
              *(byte *)(lVar17 + 0xfd) = bVar10;
            }
            lVar16 = lVar16 + 1;
            plVar18 = plVar18 + 1;
          } while ((bVar10 & 8) == 0);
          FUN_1800781e0(lVar17);
        }
      }
      return;
    }
  }
  return;
}






// 函数: void FUN_1803e1720(longlong param_1,longlong param_2)
void FUN_1803e1720(longlong param_1,longlong param_2)

{
  uint64_t *puVar1;
  ulonglong *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int8_t auStackX_8 [16];
  int8_t auStackX_18 [8];
  int8_t auStackX_20 [8];
  int8_t auStack_48 [16];
  
  puVar1 = (uint64_t *)(param_1 + 0x1a0);
  puVar2 = (ulonglong *)(param_2 + 0x3580);
  lVar8 = 6;
  if ((*(byte *)(param_1 + 0xc0) & 0x80) != 0) {
    lVar8 = 1;
  }
  lVar6 = 0;
  lVar7 = 0x28;
  do {
    puVar5 = *(uint64_t **)(param_1 + 0x1b0);
    puVar3 = puVar1;
    if (puVar5 != (uint64_t *)0x0) {
      do {
        if ((ulonglong)puVar5[4] < *puVar2) {
          puVar5 = (uint64_t *)*puVar5;
        }
        else {
          puVar3 = puVar5;
          puVar5 = (uint64_t *)puVar5[1];
        }
      } while (puVar5 != (uint64_t *)0x0);
    }
    if ((puVar3 == puVar1) || (*puVar2 < (ulonglong)puVar3[4])) {
      puVar3 = (uint64_t *)FUN_180387860(puVar1,auStackX_8);
      puVar3 = (uint64_t *)*puVar3;
    }
    if (*(longlong *)(lVar7 + (longlong)puVar3) == 0) {
      uVar4 = FUN_1803d0570(*(uint64_t *)(*puVar2 + 0x660),0x40);
      puVar5 = *(uint64_t **)(param_1 + 0x1b0);
      puVar3 = puVar1;
      if (puVar5 != (uint64_t *)0x0) {
        do {
          if ((ulonglong)puVar5[4] < *puVar2) {
            puVar5 = (uint64_t *)*puVar5;
          }
          else {
            puVar3 = puVar5;
            puVar5 = (uint64_t *)puVar5[1];
          }
        } while (puVar5 != (uint64_t *)0x0);
      }
      if ((puVar3 == puVar1) || (*puVar2 < (ulonglong)puVar3[4])) {
        puVar3 = (uint64_t *)FUN_180387860(puVar1,auStackX_18);
        puVar3 = (uint64_t *)*puVar3;
      }
      *(uint64_t *)(lVar7 + (longlong)puVar3) = uVar4;
      puVar5 = *(uint64_t **)(param_1 + 0x1b0);
      puVar3 = puVar1;
      if (puVar5 != (uint64_t *)0x0) {
        do {
          if ((ulonglong)puVar5[4] < *puVar2) {
            puVar5 = (uint64_t *)*puVar5;
          }
          else {
            puVar3 = puVar5;
            puVar5 = (uint64_t *)puVar5[1];
          }
        } while (puVar5 != (uint64_t *)0x0);
      }
      if ((puVar3 == puVar1) || (*puVar2 < (ulonglong)puVar3[4])) {
        puVar3 = (uint64_t *)FUN_180387860(puVar1,auStackX_20);
        puVar3 = (uint64_t *)*puVar3;
      }
      if (*(longlong *)(lVar7 + (longlong)puVar3) == 0) {
        *(int32_t *)(param_1 + 200) = 0;
        return;
      }
      puVar5 = *(uint64_t **)(param_1 + 0x1b0);
      puVar3 = puVar1;
      if (puVar5 != (uint64_t *)0x0) {
        do {
          if ((ulonglong)puVar5[4] < *puVar2) {
            puVar5 = (uint64_t *)*puVar5;
          }
          else {
            puVar3 = puVar5;
            puVar5 = (uint64_t *)puVar5[1];
          }
        } while (puVar5 != (uint64_t *)0x0);
      }
      if ((puVar3 == puVar1) || (*puVar2 < (ulonglong)puVar3[4])) {
        puVar3 = (uint64_t *)FUN_180387860(puVar1,auStack_48);
        puVar3 = (uint64_t *)*puVar3;
      }
      *(int8_t *)(*(longlong *)(lVar7 + (longlong)puVar3) + 0x2d) = 1;
    }
    lVar6 = lVar6 + 1;
    lVar7 = lVar7 + 8;
    if (lVar8 <= lVar6) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1803e1930(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803e1930(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1803e1c20(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e1950(longlong *param_1,longlong *param_2,float *param_3,float *param_4)
void FUN_1803e1950(longlong *param_1,longlong *param_2,float *param_3,float *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar10 = (int)param_1[4];
  iVar9 = (int)(((*param_3 - *(float *)(param_1 + 1)) - 1e-06) / *(float *)(param_1 + 3));
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  else if (iVar10 <= iVar9) {
    iVar9 = iVar10 + -1;
  }
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  iVar8 = (int)(((param_3[1] - *(float *)((longlong)param_1 + 0xc)) - 1e-06) /
               *(float *)((longlong)param_1 + 0x1c));
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  else if (iVar1 <= iVar8) {
    iVar8 = iVar1 + -1;
  }
  iVar11 = (int)(((*param_4 - *(float *)(param_1 + 1)) - 1e-06) / *(float *)(param_1 + 3));
  if (iVar11 < 0) {
    iVar11 = 0;
  }
  else if (iVar10 <= iVar11) {
    iVar11 = iVar10 + -1;
  }
  iVar10 = (int)(((param_4[1] - *(float *)((longlong)param_1 + 0xc)) - 1e-06) /
                *(float *)((longlong)param_1 + 0x1c));
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  else if (iVar1 <= iVar10) {
    iVar10 = iVar1 + -1;
  }
  uVar6 = (ulonglong)(((iVar11 - iVar9) + 1) * ((iVar10 - iVar8) + 1));
  lVar4 = *param_2;
  if ((ulonglong)(param_2[2] - lVar4 >> 3) < uVar6) {
    if (uVar6 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_18062b420(system_memory_pool_ptr,uVar6 * 8,(char)param_2[3]);
      lVar4 = *param_2;
    }
    if (lVar4 != param_2[1]) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar4,param_2[1] - lVar4);
    }
    if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_2[2] = lVar2 + uVar6 * 8;
    *param_2 = lVar2;
    param_2[1] = lVar2;
  }
  do {
    iVar1 = iVar8;
    if (iVar11 < iVar9) {
      return;
    }
    for (; iVar1 <= iVar10; iVar1 = iVar1 + 1) {
      plVar7 = (longlong *)param_2[1];
      lVar4 = *param_1 + (longlong)(iVar9 * *(int *)((longlong)param_1 + 0x24) + iVar1) * 0x28;
      if (plVar7 < (longlong *)param_2[2]) {
        param_2[1] = (longlong)(plVar7 + 1);
        *plVar7 = lVar4;
      }
      else {
        plVar5 = (longlong *)*param_2;
        lVar2 = (longlong)plVar7 - (longlong)plVar5 >> 3;
        if (lVar2 == 0) {
          lVar2 = 1;
LAB_1803e1b66:
          plVar3 = (longlong *)FUN_18062b420(system_memory_pool_ptr,lVar2 * 8,(char)param_2[3]);
          plVar5 = (longlong *)*param_2;
          plVar7 = (longlong *)param_2[1];
        }
        else {
          lVar2 = lVar2 * 2;
          if (lVar2 != 0) goto LAB_1803e1b66;
          plVar3 = (longlong *)0x0;
        }
        if (plVar5 != plVar7) {
                    // WARNING: Subroutine does not return
          memmove(plVar3,plVar5,(longlong)plVar7 - (longlong)plVar5);
        }
        *plVar3 = lVar4;
        if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        param_2[2] = (longlong)(plVar3 + lVar2);
        *param_2 = (longlong)plVar3;
        param_2[1] = (longlong)(plVar3 + 1);
      }
    }
    iVar9 = iVar9 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e1a51(int param_1,uint64_t param_2,int param_3)
void FUN_1803e1a51(int param_1,uint64_t param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *unaff_RBX;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *in_R10;
  int unaff_R12D;
  int unaff_R13D;
  int unaff_R14D;
  int iStackX_20;
  longlong *in_stack_00000070;
  int in_stack_00000078;
  
  uVar6 = (ulonglong)((param_1 + 1) * ((unaff_R13D - param_3) + 1));
  lVar4 = *unaff_RBX;
  if ((ulonglong)(unaff_RBX[2] - lVar4 >> 3) < uVar6) {
    if (uVar6 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_18062b420(system_memory_pool_ptr,uVar6 * 8,(char)unaff_RBX[3]);
      lVar4 = *unaff_RBX;
    }
    if (lVar4 != unaff_RBX[1]) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar4,unaff_RBX[1] - lVar4);
    }
    if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    unaff_RBX[2] = lVar2 + uVar6 * 8;
    *unaff_RBX = lVar2;
    unaff_RBX[1] = lVar2;
    in_R10 = in_stack_00000070;
    param_3 = in_stack_00000078;
  }
  iVar1 = param_3;
  if (unaff_R12D <= unaff_R14D) {
    do {
      for (; param_3 <= unaff_R13D; param_3 = param_3 + 1) {
        plVar7 = (longlong *)unaff_RBX[1];
        lVar4 = *in_R10 + (longlong)(unaff_R12D * *(int *)((longlong)in_R10 + 0x24) + param_3) *
                          0x28;
        if (plVar7 < (longlong *)unaff_RBX[2]) {
          unaff_RBX[1] = (longlong)(plVar7 + 1);
          *plVar7 = lVar4;
        }
        else {
          plVar5 = (longlong *)*unaff_RBX;
          lVar2 = (longlong)plVar7 - (longlong)plVar5 >> 3;
          if (lVar2 == 0) {
            lVar2 = 1;
LAB_1803e1b66:
            plVar3 = (longlong *)FUN_18062b420(system_memory_pool_ptr,lVar2 * 8,(char)unaff_RBX[3]);
            plVar5 = (longlong *)*unaff_RBX;
            plVar7 = (longlong *)unaff_RBX[1];
          }
          else {
            lVar2 = lVar2 * 2;
            if (lVar2 != 0) goto LAB_1803e1b66;
            plVar3 = (longlong *)0x0;
          }
          if (plVar5 != plVar7) {
                    // WARNING: Subroutine does not return
            memmove(plVar3,plVar5,(longlong)plVar7 - (longlong)plVar5);
          }
          *plVar3 = lVar4;
          if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          unaff_RBX[2] = (longlong)(plVar3 + lVar2);
          *unaff_RBX = (longlong)plVar3;
          unaff_RBX[1] = (longlong)(plVar3 + 1);
          in_R10 = in_stack_00000070;
        }
        iVar1 = in_stack_00000078;
      }
      unaff_R12D = unaff_R12D + 1;
      param_3 = iVar1;
    } while (unaff_R12D <= iStackX_20);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e1afb(uint64_t param_1,uint64_t param_2,int param_3)
void FUN_1803e1afb(uint64_t param_1,uint64_t param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int in_EAX;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *unaff_RBX;
  longlong *plVar6;
  longlong *in_R10;
  int unaff_R12D;
  int unaff_R13D;
  int iStackX_20;
  longlong *in_stack_00000070;
  int in_stack_00000078;
  
  iVar2 = param_3;
  do {
    while (unaff_R13D < param_3) {
      unaff_R12D = unaff_R12D + 1;
      param_3 = iVar2;
      if (in_EAX < unaff_R12D) {
        return;
      }
    }
    plVar6 = (longlong *)unaff_RBX[1];
    lVar1 = *in_R10 + (longlong)(unaff_R12D * *(int *)((longlong)in_R10 + 0x24) + param_3) * 0x28;
    if (plVar6 < (longlong *)unaff_RBX[2]) {
      unaff_RBX[1] = (longlong)(plVar6 + 1);
      *plVar6 = lVar1;
    }
    else {
      plVar5 = (longlong *)*unaff_RBX;
      lVar3 = (longlong)plVar6 - (longlong)plVar5 >> 3;
      if (lVar3 == 0) {
        lVar3 = 1;
LAB_1803e1b66:
        plVar4 = (longlong *)FUN_18062b420(system_memory_pool_ptr,lVar3 * 8,(char)unaff_RBX[3]);
        plVar5 = (longlong *)*unaff_RBX;
        plVar6 = (longlong *)unaff_RBX[1];
      }
      else {
        lVar3 = lVar3 * 2;
        if (lVar3 != 0) goto LAB_1803e1b66;
        plVar4 = (longlong *)0x0;
      }
      if (plVar5 != plVar6) {
                    // WARNING: Subroutine does not return
        memmove(plVar4,plVar5,(longlong)plVar6 - (longlong)plVar5);
      }
      *plVar4 = lVar1;
      if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      unaff_RBX[2] = (longlong)(plVar4 + lVar3);
      *unaff_RBX = (longlong)plVar4;
      unaff_RBX[1] = (longlong)(plVar4 + 1);
      in_R10 = in_stack_00000070;
    }
    param_3 = param_3 + 1;
    iVar2 = in_stack_00000078;
    in_EAX = iStackX_20;
  } while( true );
}






// 函数: void FUN_1803e1bf7(void)
void FUN_1803e1bf7(void)

{
  return;
}






// 函数: void FUN_1803e1c20(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803e1c20(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_1803e1c20(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    if ((longlong *)param_2[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[4] + 0x38))();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




