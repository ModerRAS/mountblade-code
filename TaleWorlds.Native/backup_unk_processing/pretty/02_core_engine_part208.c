#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part208.c - 8 个函数

// 函数: void FUN_18018b590(longlong param_1)
void FUN_18018b590(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *puVar4;
  longlong lVar5;
  longlong *plVar6;
  uint64_t uVar7;
  void *puVar8;
  int aiStackX_8 [2];
  longlong lStack_30;
  int *piStack_28;
  code *pcStack_20;
  code *pcStack_18;
  
  lVar3 = *(longlong *)(param_1 + 0xb0);
  puVar4 = *(void **)(*(longlong *)(lVar3 + 0xa8) + 0x70);
  puVar8 = &system_buffer_ptr;
  if (puVar4 != (void *)0x0) {
    puVar8 = puVar4;
  }
  (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x10))((longlong *)(lVar3 + 0x10),puVar8);
  lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0xa8) + 0x20);
  if (*(longlong *)(lVar3 + 0xb0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(lVar3 + 0xb0) = 0;
  aiStackX_8[0] = *(int *)(lVar5 + 0x24);
  *(int *)(lVar3 + 0xb8) = aiStackX_8[0];
  iVar1 = *(int *)(lVar5 + 0x28);
  *(int *)(lVar3 + 0xbc) = iVar1;
  iVar2 = *(int *)(lVar5 + 0x2c);
  *(int *)(lVar3 + 0xc0) = iVar2;
  *(float *)(lVar3 + 0xc4) = 1.0 / (float)aiStackX_8[0];
  *(float *)(lVar3 + 200) = 1.0 / (float)iVar1;
  *(float *)(lVar3 + 0xcc) = 1.0 / (float)iVar2;
  aiStackX_8[0] = iVar2 * iVar1 * aiStackX_8[0];
  if (aiStackX_8[0] * 3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_18062b420(_DAT_180c8ed18,(longlong)(aiStackX_8[0] * 3) * 4,3);
  }
  *(uint64_t *)(lVar3 + 0xb0) = uVar7;
  plVar6 = *(longlong **)(*(longlong *)(lVar3 + 0xa8) + 0x88);
  piStack_28 = aiStackX_8;
  pcStack_20 = (code *)&UNK_18018c0a0;
  pcStack_18 = FUN_18018c050;
  lStack_30 = lVar3;
  (**(code **)(*plVar6 + 0x60))
            (plVar6,&system_data_e0d0,*(longlong *)(lVar3 + 0xa8) + 0xc,0,&lStack_30);
  if (pcStack_20 != (code *)0x0) {
    (*pcStack_20)(&lStack_30,0,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18018b740(longlong param_1)
void FUN_18018b740(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  void *puVar3;
  longlong alStack_30 [3];
  
  plVar2 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0xd0,8,3);
  *plVar2 = (longlong)&UNK_180a21690;
  *plVar2 = (longlong)&UNK_180a21720;
  *(int32_t *)(plVar2 + 1) = 0;
  *plVar2 = (longlong)&UNK_180a0ad90;
  plVar1 = plVar2 + 2;
  *plVar1 = (longlong)&UNK_18098bcb0;
  plVar2[3] = 0;
  *(int32_t *)(plVar2 + 4) = 0;
  *plVar1 = (longlong)&UNK_1809fcc28;
  plVar2[3] = (longlong)(plVar2 + 5);
  *(int32_t *)(plVar2 + 4) = 0;
  *(int8_t *)(plVar2 + 5) = 0;
  plVar2[0x16] = 0;
  plVar2[0x15] = param_1;
  if (param_1 != 0) {
    puVar3 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x70) != (void *)0x0) {
      puVar3 = *(void **)(param_1 + 0x70);
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,puVar3);
  }
  plVar2[0x17] = 0;
  *(int32_t *)(plVar2 + 0x18) = 0;
  *(int32_t *)((longlong)plVar2 + 0xc4) = 0x7f7fffff;
  *(int32_t *)(plVar2 + 0x19) = 0x7f7fffff;
  *(int32_t *)((longlong)plVar2 + 0xcc) = 0x7f7fffff;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar1 = *(longlong **)(param_1 + 0xb0);
  *(longlong **)(param_1 + 0xb0) = plVar2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0xb0);
  FUN_18018be60(_DAT_180c8a9e8,alStack_30);
  (**(code **)(*plVar1 + 0x28))(plVar1);
  plVar2 = *(longlong **)(alStack_30[0] + 0x10);
  *(longlong **)(alStack_30[0] + 0x10) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18018b8c0(longlong param_1)
void FUN_18018b8c0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0xa8);
  lVar1 = *(longlong *)(_DAT_180c8a9e8 + 8);
  plVar5 = (longlong *)
           (lVar1 + ((*(ulonglong *)(lVar4 + 0x14) ^ *(ulonglong *)(lVar4 + 0xc)) %
                    (ulonglong)*(uint *)(_DAT_180c8a9e8 + 0x10)) * 8);
  plVar6 = (longlong *)*plVar5;
  do {
    if (plVar6 == (longlong *)0x0) {
LAB_18018b92f:
      lVar4 = *(longlong *)(_DAT_180c8a9e8 + 0x10);
      plVar5 = (longlong *)(lVar1 + lVar4 * 8);
      plVar6 = (longlong *)*plVar5;
LAB_18018b93a:
      if (plVar6 == *(longlong **)(lVar1 + lVar4 * 8)) {
        return;
      }
      lVar4 = plVar6[3];
      plVar2 = plVar5;
      while (lVar4 == 0) {
        plVar2 = plVar2 + 1;
        lVar4 = *plVar2;
      }
      plVar2 = (longlong *)*plVar5;
      plVar3 = (longlong *)plVar2[3];
      if (plVar2 == plVar6) {
        *plVar5 = (longlong)plVar3;
      }
      else {
        for (; plVar3 != plVar6; plVar3 = (longlong *)plVar3[3]) {
          plVar2 = plVar3;
        }
        plVar2[3] = plVar3[3];
      }
      if ((longlong *)plVar6[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar6[2] + 0x38))();
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar6);
    }
    if ((*(longlong *)(lVar4 + 0xc) == *plVar6) && (*(longlong *)(lVar4 + 0x14) == plVar6[1])) {
      if (plVar6 != (longlong *)0x0) {
        lVar4 = *(longlong *)(_DAT_180c8a9e8 + 0x10);
        goto LAB_18018b93a;
      }
      goto LAB_18018b92f;
    }
    plVar6 = (longlong *)plVar6[3];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18018b9e0(longlong param_1,longlong param_2)
void FUN_18018b9e0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  int32_t *puVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int8_t auStack_488 [32];
  uint64_t uStack_468;
  void *puStack_458;
  byte *pbStack_450;
  int iStack_448;
  byte abStack_440 [1032];
  ulonglong uStack_38;
  
  uStack_468 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_488;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  iVar8 = 0;
  puStack_458 = &UNK_18098bb30;
  pbStack_450 = abStack_440;
  iStack_448 = 0;
  abStack_440[0] = 0;
  uVar3 = **(uint **)(param_2 + 8);
  puVar1 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar1;
  if (uVar3 != 0) {
    FUN_180045f60(&puStack_458,puVar1,uVar3);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar3;
  }
  plVar9 = (longlong *)0x180bf6740;
  do {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)(*plVar9 + lVar4) != '\0');
    iVar7 = (int)lVar4;
    if (iStack_448 == iVar7) {
      if (iStack_448 != 0) {
        pbVar5 = pbStack_450;
        do {
          pbVar2 = pbVar5 + (*plVar9 - (longlong)pbStack_450);
          iVar7 = (uint)*pbVar5 - (uint)*pbVar2;
          if (iVar7 != 0) break;
          pbVar5 = pbVar5 + 1;
        } while (*pbVar2 != 0);
      }
LAB_18018baee:
      if (iVar7 == 0) {
        *(int32_t *)(param_1 + 8) = *(int32_t *)((longlong)iVar8 * 0x10 + 0x180bf6748);
        goto LAB_18018baff;
      }
    }
    else if (iStack_448 == 0) goto LAB_18018baee;
    iVar8 = iVar8 + 1;
    plVar9 = plVar9 + 2;
    if (0x180bf674f < (longlong)plVar9) {
LAB_18018baff:
      puStack_458 = &UNK_18098bcb0;
      *(int32_t *)(param_1 + 0x24) = **(int32_t **)(param_2 + 8);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
      *(int32_t *)(param_1 + 0x28) = **(int32_t **)(param_2 + 8);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
      *(int32_t *)(param_1 + 0x2c) = **(int32_t **)(param_2 + 8);
      puVar6 = (int32_t *)(*(longlong *)(param_2 + 8) + 4);
      *(int32_t **)(param_2 + 8) = puVar6;
      if (*(int *)(param_1 + 8) == 0) {
        *(int32_t *)(param_1 + 0x20) = *puVar6;
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
        *(int32_t *)(param_1 + 0x1c) = **(int32_t **)(param_2 + 8);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
        *(int32_t *)(param_1 + 0xc) = **(int32_t **)(param_2 + 8);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
        *(int32_t *)(param_1 + 0x10) = **(int32_t **)(param_2 + 8);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
        *(int32_t *)(param_1 + 0x14) = **(int32_t **)(param_2 + 8);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
        *(int32_t *)(param_1 + 0x18) = **(int32_t **)(param_2 + 8);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
      }
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_488);
    }
  } while( true );
}





// 函数: void FUN_18018bbd0(longlong param_1,longlong *param_2)
void FUN_18018bbd0(longlong param_1,longlong *param_2)

{
  int32_t uVar1;
  int *piVar2;
  int iVar3;
  int32_t *puVar4;
  
  puVar4 = (int32_t *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  iVar3 = 0;
  piVar2 = (int *)0x180bf6748;
  *puVar4 = 0;
  param_2[1] = param_2[1] + 4;
  do {
    if (*piVar2 == *(int *)(param_1 + 8)) {
      FUN_180639de0(param_2,*(uint64_t *)((longlong)iVar3 * 0x10 + 0x180bf6740));
      break;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 4;
  } while ((longlong)piVar2 < 0x180bf6758);
  puVar4 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x24);
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x28);
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x2c);
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar1;
  puVar4 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar4;
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = *(int32_t *)(param_1 + 0x20);
    if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
      FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + 4;
    puVar4 = (int32_t *)param_2[1];
    uVar1 = *(int32_t *)(param_1 + 0x1c);
    if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
      FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + 4;
    puVar4 = (int32_t *)param_2[1];
    uVar1 = *(int32_t *)(param_1 + 0xc);
    if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
      FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + 4;
    puVar4 = (int32_t *)param_2[1];
    uVar1 = *(int32_t *)(param_1 + 0x10);
    if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
      FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + 4;
    puVar4 = (int32_t *)param_2[1];
    uVar1 = *(int32_t *)(param_1 + 0x14);
    if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
      FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + 4;
    puVar4 = (int32_t *)param_2[1];
    uVar1 = *(int32_t *)(param_1 + 0x18);
    if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
      FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + 4;
  }
  return;
}





// 函数: void FUN_18018bd0d(int32_t *param_1)
void FUN_18018bd0d(int32_t *param_1)

{
  int32_t uVar1;
  longlong in_RAX;
  int32_t *puVar2;
  longlong *unaff_RBX;
  longlong unaff_RDI;
  
  uVar1 = *(int32_t *)(unaff_RDI + 0x20);
  if ((ulonglong)((in_RAX - (longlong)param_1) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    param_1 = (int32_t *)unaff_RBX[1];
  }
  *param_1 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0x1c);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0xc);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0x10);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0x14);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0x18);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  return;
}





// 函数: void FUN_18018bd5f(void)
void FUN_18018bd5f(void)

{
  int32_t uVar1;
  int32_t *puVar2;
  longlong *unaff_RBX;
  int32_t unaff_ESI;
  longlong unaff_RDI;
  
  FUN_180639bf0();
  *(int32_t *)unaff_RBX[1] = unaff_ESI;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0xc);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0x10);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0x14);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0x18);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18018be60(longlong param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             ulonglong param_5)

{
  uint64_t *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t *puVar6;
  uint64_t uVar7;
  longlong *plVar8;
  
  uVar3 = param_5 % (ulonglong)*(uint *)(param_1 + 0x10);
  puVar1 = (uint64_t *)(*(longlong *)(param_1 + 8) + uVar3 * 8);
  plVar8 = (longlong *)*puVar1;
  do {
    if (plVar8 == (longlong *)0x0) {
LAB_18018bee2:
      FUN_18066c220(param_1 + 0x20,&param_5,(ulonglong)*(uint *)(param_1 + 0x10),
                    *(int32_t *)(param_1 + 0x18),1);
      puVar6 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x20,*(int8_t *)(param_1 + 0x2c));
      uVar4 = *(int32_t *)((longlong)param_4 + 4);
      lVar2 = param_4[1];
      uVar5 = *(int32_t *)((longlong)param_4 + 0xc);
      *puVar6 = (int)*param_4;
      puVar6[1] = uVar4;
      puVar6[2] = (int)lVar2;
      puVar6[3] = uVar5;
      *(uint64_t *)(puVar6 + 4) = 0;
      *(uint64_t *)(puVar6 + 6) = 0;
      if ((char)param_5 == '\0') {
        *(uint64_t *)(puVar6 + 6) = *(uint64_t *)(*(longlong *)(param_1 + 8) + uVar3 * 8);
        *(int32_t **)(*(longlong *)(param_1 + 8) + uVar3 * 8) = puVar6;
        *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
        lVar2 = *(longlong *)(param_1 + 8);
        *param_2 = puVar6;
        param_2[1] = lVar2 + uVar3 * 8;
        *(int8_t *)(param_2 + 2) = 1;
        return param_2;
      }
      uVar7 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)param_5._4_4_ * 8 + 8,8,
                            *(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
      memset(uVar7,0,(ulonglong)param_5._4_4_ * 8);
    }
    if ((*param_4 == *plVar8) && (param_4[1] == plVar8[1])) {
      if (plVar8 != (longlong *)0x0) {
        *param_2 = plVar8;
        param_2[1] = puVar1;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      goto LAB_18018bee2;
    }
    plVar8 = (longlong *)plVar8[3];
  } while( true );
}





// 函数: void FUN_18018c050(longlong param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)
void FUN_18018c050(longlong param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)

{
                    // WARNING: Subroutine does not return
  memcpy(*(uint64_t *)(*param_4 + 0xb0),*(uint64_t *)(param_1 + 8),
         (longlong)(*(int *)param_4[1] * 0xc));
}



longlong * FUN_18018c160(longlong *param_1,uint64_t *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  int32_t uVar8;
  longlong *plStackX_8;
  uint64_t *puStackX_10;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  int32_t uStack_28;
  int32_t uStack_20;
  
  plStackX_8 = &lStack_40;
  lStack_40 = 0;
  lStack_30 = 0;
  uStack_28 = 3;
  lStack_38 = 0;
  uStack_20 = 0;
  puStackX_10 = param_2;
  plVar7 = (longlong *)FUN_18018ca20();
  if (plVar7 != &lStack_40) {
    plVar7[1] = *plVar7;
    lVar1 = *plVar7;
    *plVar7 = 0;
    lVar2 = plVar7[1];
    plVar7[1] = 0;
    lVar3 = plVar7[2];
    plVar7[2] = 0;
    lVar5 = plVar7[3];
    *(int *)(plVar7 + 3) = (int)plVar7[3];
    lVar4 = *plVar7;
    *plVar7 = lVar1;
    plVar7[1] = lVar2;
    plVar7[2] = lVar3;
    *(int *)(plVar7 + 3) = (int)lVar5;
    if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar1 = *plVar7;
    *plVar7 = lStack_40;
    lVar2 = plVar7[1];
    plVar7[1] = lStack_38;
    lVar3 = plVar7[2];
    plVar7[2] = lStack_30;
    lVar4 = plVar7[3];
    *(int32_t *)(plVar7 + 3) = uStack_28;
    lStack_40 = lVar1;
    lStack_38 = lVar2;
    lStack_30 = lVar3;
    uStack_28 = (int)lVar4;
  }
  *(int32_t *)(plVar7 + 4) = uStack_20;
  plStackX_8 = &lStack_40;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180058080(param_1,&plStackX_8,param_2);
  plVar7 = plStackX_8;
  cVar6 = FUN_180371c60(plStackX_8 + 8,param_2);
  if (cVar6 == '\0') {
    FUN_180058080(param_1,&plStackX_8,param_2);
    plVar7 = plStackX_8;
    if (plStackX_8 != param_1) {
      param_1[4] = param_1[4] + -1;
      func_0x00018066bd70(plStackX_8);
      uVar8 = FUN_18066ba00(plVar7,param_1);
      FUN_180058830(uVar8,plVar7);
    }
    *param_2 = &UNK_180a3c3e0;
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
    plVar7 = (longlong *)0x0;
  }
  else {
    *param_2 = &UNK_180a3c3e0;
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
    plVar7 = plVar7 + 8;
  }
  *param_2 = &UNK_18098bcb0;
  return plVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



