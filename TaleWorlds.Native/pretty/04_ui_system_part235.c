#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part235.c - 4 个函数

// 函数: void FUN_1808014e0(int64_t param_1,int8_t param_2)
void FUN_1808014e0(int64_t param_1,int8_t param_2)

{
  int64_t lVar1;
  int iVar2;
  
  iVar2 = FUN_180750240();
  if (iVar2 == 0) {
    if ((*(int64_t *)(param_1 + 0xd8) != 0) &&
       (iVar2 = FUN_1807902d0(*(int64_t *)(param_1 + 0xd8),param_1), iVar2 != 0)) {
      return;
    }
    if (*(int64_t *)(param_1 + 0x168) != 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x168),
                    &unknown_var_7216_ptr,0x3e,1);
    }
    lVar1 = *(int64_t *)(param_1 + 0x170);
    if ((lVar1 != 0) && (lVar1 != param_1 + 0x178)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_7216_ptr,0x44,1);
    }
    *(uint64_t *)(param_1 + 0x160) = 0;
    FUN_1807f7cb0(param_1,param_2);
  }
  return;
}



uint64_t FUN_1808015c0(int64_t param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (4 < iVar1 - 1U) {
    return 0;
  }
  if (*(int64_t *)(param_1 + 0x170) == 0) {
    return 0;
  }
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      iVar1 = 0x10;
      goto LAB_180801617;
    }
    if (iVar1 == 3) {
      iVar1 = 0x18;
      goto LAB_180801617;
    }
    if ((iVar1 == 4) || (iVar1 == 5)) {
      iVar1 = 0x20;
      goto LAB_180801617;
    }
  }
  iVar1 = 8;
LAB_180801617:
  if (*(uint *)(param_1 + 0x180) == 0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  memcpy((uint64_t)*(uint *)(param_1 + 0x180) + *(int64_t *)(param_1 + 0x160),
         *(int64_t *)(param_1 + 0x170),*(int *)(param_1 + 0x68) * iVar1);
}



uint64_t FUN_180801660(int64_t param_1)

{
  int iVar1;
  uint uVar2;
  int64_t lVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (4 < iVar1 - 1U) {
    return 0;
  }
  lVar3 = *(int64_t *)(param_1 + 0x170);
  if (lVar3 == 0) {
    return 0;
  }
  lVar6 = 0x20;
  if (iVar1 == 1) {
    iVar4 = 8;
  }
  else if (iVar1 == 2) {
    iVar4 = 0x10;
  }
  else if (iVar1 == 3) {
    iVar4 = 0x18;
  }
  else if ((iVar1 == 4) || (iVar1 == 5)) {
    iVar4 = 0x20;
  }
  else {
    iVar4 = 8;
  }
  iVar4 = *(int *)(param_1 + 0x68) * iVar4;
  uVar5 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x4c);
  if (iVar1 == 1) {
    lVar6 = 8;
  }
  else if (iVar1 == 2) {
    lVar6 = 0x10;
  }
  else if (iVar1 == 3) {
    lVar6 = 0x18;
  }
  else if ((iVar1 != 4) && (iVar1 != 5)) goto LAB_18080177e;
  uVar5 = (uint)((uint64_t)uVar5 * lVar6 >> 3);
LAB_18080177e:
  uVar2 = *(uint *)(param_1 + 0x2c);
  uVar5 = uVar5 * *(int *)(param_1 + 0x68);
  if ((uVar2 & 4) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lVar3,*(int64_t *)(param_1 + 0x160) + (uint64_t)uVar5,iVar4);
  }
  if ((uVar2 & 2) == 0) {
    if (((uVar2 & 1) != 0) && (*(uint *)(param_1 + 0x180) != 0)) {
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_1 + 0x180) + *(int64_t *)(param_1 + 0x160),lVar3,iVar4);
    }
    return 0;
  }
  if (*(uint *)(param_1 + 0x180) == 0) {
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(param_1 + 0x170),*(int64_t *)(param_1 + 0x160) + (uint64_t)uVar5,iVar4)
    ;
  }
                    // WARNING: Subroutine does not return
  memcpy((uint64_t)*(uint *)(param_1 + 0x180) + *(int64_t *)(param_1 + 0x160),lVar3,iVar4);
}



uint64_t FUN_180801692(int param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  int64_t unaff_RBX;
  int iVar2;
  uint uVar3;
  int64_t lVar4;
  int in_R11D;
  
  lVar4 = 0x20;
  if (param_2 == 1) {
    iVar2 = 8;
  }
  else if (param_2 == 2) {
    iVar2 = 0x10;
  }
  else if (param_2 == 3) {
    iVar2 = 0x18;
  }
  else if ((param_2 == 4) || (param_2 == 5)) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = 8;
  }
  iVar2 = in_R11D * iVar2;
  uVar3 = *(int *)(unaff_RBX + 0x50) + *(int *)(unaff_RBX + 0x4c);
  if (param_1 == 1) {
    lVar4 = 8;
  }
  else if (param_1 == 2) {
    lVar4 = 0x10;
  }
  else if (param_1 == 3) {
    lVar4 = 0x18;
  }
  else if ((param_1 != 4) && (param_1 != 5)) goto LAB_18080177e;
  uVar3 = (uint)((uint64_t)uVar3 * lVar4 >> 3);
LAB_18080177e:
  uVar1 = *(uint *)(unaff_RBX + 0x2c);
  if ((uVar1 & 4) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(param_4,*(int64_t *)(unaff_RBX + 0x160) + (uint64_t)(uVar3 * in_R11D),iVar2);
  }
  if ((uVar1 & 2) != 0) {
    if (*(uint *)(unaff_RBX + 0x180) != 0) {
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(unaff_RBX + 0x180) + *(int64_t *)(unaff_RBX + 0x160),param_4,
             iVar2);
    }
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(unaff_RBX + 0x170),
           *(int64_t *)(unaff_RBX + 0x160) + (uint64_t)(uVar3 * in_R11D),iVar2);
  }
  if (((uVar1 & 1) != 0) && (*(uint *)(unaff_RBX + 0x180) != 0)) {
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(unaff_RBX + 0x180) + *(int64_t *)(unaff_RBX + 0x160),param_4,iVar2)
    ;
  }
  return 0;
}



uint64_t FUN_1808019f8(void)

{
  return 0;
}



uint64_t
FUN_180801a10(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
             int32_t param_5)

{
  uint64_t uVar1;
  
  if (*(int64_t *)(param_1 + 0x160) != 0) {
    FUN_1808015c0();
  }
  uVar1 = thunk_FUN_180752300(param_1,param_2,param_3,param_4,param_5);
  if ((int)uVar1 == 0) {
    if (*(int64_t *)(param_1 + 0x160) != 0) {
      FUN_180801660(param_1);
    }
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_180801a90(int64_t param_1)

{
  int iVar1;
  uint uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int iVar5;
  uint uVar6;
  int64_t lVar7;
  
  uVar4 = thunk_FUN_1807524e0();
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (4 < iVar1 - 1U) {
    return 0;
  }
  lVar3 = *(int64_t *)(param_1 + 0x170);
  if (lVar3 == 0) {
    return 0;
  }
  lVar7 = 0x20;
  if (iVar1 == 1) {
    iVar5 = 8;
  }
  else if (iVar1 == 2) {
    iVar5 = 0x10;
  }
  else if (iVar1 == 3) {
    iVar5 = 0x18;
  }
  else if ((iVar1 == 4) || (iVar1 == 5)) {
    iVar5 = 0x20;
  }
  else {
    iVar5 = 8;
  }
  iVar5 = *(int *)(param_1 + 0x68) * iVar5;
  uVar6 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x4c);
  if (iVar1 == 1) {
    lVar7 = 8;
  }
  else if (iVar1 == 2) {
    lVar7 = 0x10;
  }
  else if (iVar1 == 3) {
    lVar7 = 0x18;
  }
  else if ((iVar1 != 4) && (iVar1 != 5)) goto LAB_18080177e;
  uVar6 = (uint)((uint64_t)uVar6 * lVar7 >> 3);
LAB_18080177e:
  uVar2 = *(uint *)(param_1 + 0x2c);
  uVar6 = uVar6 * *(int *)(param_1 + 0x68);
  if ((uVar2 & 4) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lVar3,*(int64_t *)(param_1 + 0x160) + (uint64_t)uVar6,iVar5);
  }
  if ((uVar2 & 2) == 0) {
    if (((uVar2 & 1) != 0) && (*(uint *)(param_1 + 0x180) != 0)) {
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_1 + 0x180) + *(int64_t *)(param_1 + 0x160),lVar3,iVar5);
    }
    return 0;
  }
  if (*(uint *)(param_1 + 0x180) == 0) {
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(param_1 + 0x170),*(int64_t *)(param_1 + 0x160) + (uint64_t)uVar6,iVar5)
    ;
  }
                    // WARNING: Subroutine does not return
  memcpy((uint64_t)*(uint *)(param_1 + 0x180) + *(int64_t *)(param_1 + 0x160),lVar3,iVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180801cc0(void)

{
  FUN_180803120(ui_system_config);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180801ce0(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  int8_t *puVar3;
  int64_t *plVar4;
  
  lVar2 = param_1 + 0x470;
  if (param_1 == 0) {
    lVar2 = 0x478;
  }
  FUN_180788f70(lVar2);
  plVar4 = (int64_t *)(param_1 + 0x448);
  if (param_1 == 0) {
    plVar4 = (int64_t *)0x450;
  }
  if ((int64_t *)*plVar4 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*plVar4 + 0x10))();
    *plVar4 = 0;
    ui_system_config = 0;
  }
  plVar4 = (int64_t *)(param_1 + 0x4a0);
  if (param_1 == 0) {
    plVar4 = (int64_t *)0x4a8;
  }
  if (*plVar4 != 0) {
    uVar1 = FUN_180768380(*plVar4,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *plVar4 = 0;
  }
  plVar4 = (int64_t *)(param_1 + 0x430);
  if (param_1 == 0) {
    plVar4 = (int64_t *)0x438;
  }
  if (*plVar4 != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar4,&unknown_var_7392_ptr,0x1f0,1);
  }
  plVar4 = (int64_t *)(param_1 + 0x438);
  if (param_1 == 0) {
    plVar4 = (int64_t *)0x440;
  }
  if (*plVar4 != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar4,&unknown_var_7392_ptr,0x1f1,1);
  }
  plVar4 = (int64_t *)(param_1 + 0x440);
  if (param_1 == 0) {
    plVar4 = (int64_t *)0x448;
  }
  if (*plVar4 == 0) {
    plVar4 = (int64_t *)(param_1 + 0x450);
    if (param_1 == 0) {
      plVar4 = (int64_t *)0x458;
    }
    if (*plVar4 == 0) {
      plVar4 = (int64_t *)(param_1 + 0x40);
      if (param_1 == 0) {
        plVar4 = (int64_t *)0x48;
      }
      lVar2 = *(int64_t *)(*plVar4 + 0x11630);
      if (lVar2 == 0) {
        *(int32_t *)(*plVar4 + 0x11628) = 0;
        puVar3 = (int8_t *)(param_1 + 0x308);
        if (param_1 == 0) {
          puVar3 = (int8_t *)0x310;
        }
        *puVar3 = 0;
        return 0;
      }
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_7392_ptr,500,1);
    }
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar4,&unknown_var_7392_ptr,499,1);
  }
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar4,&unknown_var_7392_ptr,0x1f2,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180801ef0(int64_t param_1)
void FUN_180801ef0(int64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  uint uStack_288;
  int aiStack_284 [5];
  int64_t alStack_270 [71];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)&uStack_288;
  if ((*(char *)(param_1 + 0x310) == '\0') && (ui_system_config == 0)) {
    plVar4 = alStack_270;
    alStack_270[0] = 0;
    aiStack_284[0] = 0;
    uStack_288 = 0;
    iVar1 = RegOpenKeyExA(0xffffffff80000002,&unknown_var_7376_ptr,0,9,plVar4);
    if (iVar1 == 0) {
      plVar4 = (int64_t *)aiStack_284;
      iVar1 = RegQueryInfoKeyA(alStack_270[0],0,0,0,plVar4,&uStack_288,0,0,0,0,0,0);
      if (iVar1 != 0) goto LAB_180802354;
    }
    uStack_288 = uStack_288 + 1;
    if (aiStack_284[0] != 0) {
      lVar2 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),aiStack_284[0] * 0x3c,
                            &unknown_var_7392_ptr,0x6f,(uint64_t)plVar4 & 0xffffffff00000000);
      *(int64_t *)(param_1 + 0x438) = lVar2;
      if (lVar2 == 0) goto LAB_180802354;
    }
    *(int32_t *)(param_1 + 0x46c) = 0;
    if (aiStack_284[0] != 0) {
      uVar3 = (uint64_t)uStack_288 + 0xf;
      if (uVar3 <= uStack_288) {
        uVar3 = 0xffffffffffffff0;
      }
                    // WARNING: Subroutine does not return
      SystemCore_MemoryManager0(uVar3 & 0xfffffffffffffff0);
    }
    if ((alStack_270[0] == 0) || (iVar1 = RegCloseKey(), iVar1 == 0)) {
      *(int8_t *)(param_1 + 0x310) = 1;
    }
  }
LAB_180802354:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)&uStack_288);
}





// 函数: void FUN_180802390(void)
void FUN_180802390(void)

{
                    // WARNING: Subroutine does not return
  memset(&system_data_6ce0,0,0xf0);
}



uint64_t
FUN_1808024a0(int64_t param_1,int param_2,int64_t param_3,int param_4,uint64_t *param_5,
             int32_t *param_6,uint64_t param_7,int32_t *param_8)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  
  lVar4 = (int64_t)param_2;
  if ((param_3 != 0) && (0 < param_4)) {
    plVar3 = (int64_t *)(param_1 + 0x430);
    if (param_1 == 0) {
      plVar3 = (int64_t *)0x438;
    }
    func_0x00018076b450(param_3,lVar4 * 0x3c + *plVar3,param_4);
  }
  if (param_5 != (uint64_t *)0x0) {
    plVar3 = (int64_t *)(param_1 + 0x430);
    if (param_1 == 0) {
      plVar3 = (int64_t *)0x438;
    }
    puVar1 = (uint64_t *)(*plVar3 + 0x2c + lVar4 * 0x3c);
    uVar2 = puVar1[1];
    *param_5 = *puVar1;
    param_5[1] = uVar2;
  }
  if (param_6 != (int32_t *)0x0) {
    plVar3 = (int64_t *)(param_1 + 0x430);
    if (param_1 == 0) {
      plVar3 = (int64_t *)0x438;
    }
    *param_6 = *(int32_t *)(*plVar3 + 0x28 + lVar4 * 0x3c);
  }
  if (param_8 != (int32_t *)0x0) {
    plVar3 = (int64_t *)(param_1 + 0x430);
    if (param_1 == 0) {
      plVar3 = (int64_t *)0x438;
    }
    *param_8 = *(int32_t *)(*plVar3 + 0x24 + lVar4 * 0x3c);
  }
  return 0;
}



int64_t FUN_180802570(int64_t param_1,int32_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  lVar2 = 0;
  lVar3 = param_1 + -8;
  if (param_1 == 0) {
    lVar3 = lVar2;
  }
  lVar1 = FUN_180801ef0(lVar3);
  if (((int)lVar1 == 0) && (lVar1 = lVar2, param_2 != (int32_t *)0x0)) {
    *param_2 = *(int32_t *)(lVar3 + 0x46c);
  }
  return lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808025c0(int64_t param_1,int param_2,uint64_t param_3,int *param_4,int *param_5,
void FUN_1808025c0(int64_t param_1,int param_2,uint64_t param_3,int *param_4,int *param_5,
                  int *param_6,int32_t *param_7,uint param_8,int32_t *param_9,
                  uint64_t param_10,uint64_t param_11)

{
  int64_t *plVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint64_t uVar10;
  int32_t uVar11;
  int64_t lVar12;
  int32_t *puVar13;
  int iVar14;
  uint64_t uVar15;
  int64_t lVar16;
  uint64_t uVar17;
  int iVar18;
  uint64_t uVar19;
  int8_t auStack_118 [32];
  int *piStack_f8;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int32_t uStack_dc;
  uint64_t uStack_d8;
  int32_t *puStack_d0;
  int8_t auStack_c8 [128];
  uint64_t uStack_48;
  uint64_t uVar9;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  puStack_d0 = param_9;
  uStack_d8 = param_11;
  lVar16 = (int64_t)param_2;
  iVar7 = FUN_180801ef0();
  if ((((iVar7 == 0) && (*(int *)(param_1 + 0x46c) != 0)) && (-1 < param_2)) &&
     (param_2 < *(int *)(param_1 + 0x46c))) {
    plVar1 = (int64_t *)(param_1 + 0x438);
    if (*param_5 == 1) {
      iVar7 = *(int *)(*plVar1 + 0x24 + lVar16 * 0x3c);
      if (*param_6 <= iVar7) {
        iVar7 = *param_6;
      }
      *param_6 = iVar7;
    }
    else if ((*param_5 == 0) || (*(int *)(*plVar1 + 0x24 + lVar16 * 0x3c) < *param_6)) {
      iVar14 = 8;
      iVar7 = *(int *)(*plVar1 + 0x24 + lVar16 * 0x3c);
      iVar18 = 8;
      if (iVar7 < 8) {
        iVar18 = iVar7;
      }
      *param_6 = iVar18;
      switch(iVar18) {
      case 1:
        iVar14 = 2;
        break;
      case 2:
        iVar14 = 3;
        break;
      default:
        iVar14 = 1;
        break;
      case 4:
        iVar14 = 4;
        break;
      case 5:
        iVar14 = 5;
        break;
      case 6:
        iVar14 = 6;
        break;
      case 8:
        iVar14 = 7;
        break;
      case 0xc:
        break;
      }
      *param_5 = iVar14;
    }
    lVar16 = lVar16 * 0x3c;
    *param_7 = 5;
    iVar7 = FUN_1807682e0(param_1 + 0x4a8,0);
    if (iVar7 == 0) {
      piVar2 = (int *)(param_1 + 0x450);
      lVar12 = *plVar1 + 0x2c + lVar16;
      piStack_f8 = piVar2;
      iVar7 = CoCreateInstance(lVar12,0,1,lVar12);
      if (iVar7 == -0x7ffbfe10) {
        iVar7 = CoInitializeEx(0,2);
        if (iVar7 < 0) goto FUN_1808027ca;
        lVar12 = *plVar1 + 0x2c + lVar16;
        piStack_f8 = piVar2;
        iVar7 = CoCreateInstance(lVar12,0,1,lVar12);
      }
      if (iVar7 == 0) {
        iVar7 = (**(code **)(**(int64_t **)piVar2 + 0x18))(*(int64_t **)piVar2,uStack_d8);
        if (iVar7 == 0) {
                    // WARNING: Subroutine does not return
          memset(auStack_c8,0,0x7c);
        }
        iVar7 = (**(code **)(**(int64_t **)(param_1 + 0x450) + 0x70))
                          (*(int64_t **)(param_1 + 0x450),(double)*param_4);
        if (iVar7 != 0) {
          *param_4 = *(int *)(*plVar1 + 0x28 + lVar16);
        }
        piStack_f8 = &iStack_e0;
        uVar15 = 0;
        iStack_e8 = 0;
        iStack_e4 = 0;
        uStack_dc = 0;
        iStack_e0 = 0;
        iVar7 = (**(code **)(**(int64_t **)piVar2 + 0x58))(*(int64_t **)piVar2,&iStack_e8);
        if (iVar7 == 0) {
          if (((int)param_8 < iStack_e8) || (iStack_e4 < (int)param_8)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((iStack_e0 < 0) && ((param_8 & param_8 - 1) != 0)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if ((iStack_e0 < 1) || ((int)param_8 % iStack_e0 == 0)) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
          }
          if (((bVar4) && (bVar5)) && (bVar6)) {
            *(uint *)(param_1 + 0x470) = param_8;
          }
          else {
            *(int32_t *)(param_1 + 0x470) = uStack_dc;
            piStack_f8 = (int *)((uint64_t)piStack_f8 & 0xffffffff00000000);
            iVar7 = FUN_1807869c0(param_1 + 0x478,param_8,*puStack_d0,*param_6 << 2);
            if (iVar7 != 0) goto FUN_1808027ca;
          }
          lVar12 = *plVar1;
          iVar7 = *(int *)(lVar12 + 0x20 + lVar16);
          iVar18 = *(int *)(lVar12 + 0x24 + lVar16);
          *(int *)(param_1 + 0x464) = iVar7;
          iVar18 = iVar18 + iVar7;
          uVar11 = 0x20;
          if (*(int *)(lVar12 + 0x24 + lVar16) < 0x20) {
            uVar11 = *(int32_t *)(lVar12 + 0x24 + lVar16);
          }
          *(int32_t *)(param_1 + 0x468) = uVar11;
          iVar7 = (**(code **)(**(int64_t **)piVar2 + 0xb8))();
          piStack_f8 = (int *)((uint64_t)piStack_f8 & 0xffffffff00000000);
          *(bool *)(param_1 + 0x460) = iVar7 == 0;
          lVar12 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar18 * 0x18,
                                 &unknown_var_7392_ptr,400);
          *(int64_t *)(param_1 + 0x440) = lVar12;
          if (lVar12 != 0) {
            piStack_f8 = (int *)((uint64_t)piStack_f8 & 0xffffffff00000000);
            lVar12 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar18 * 0x34,
                                   &unknown_var_7392_ptr,0x196);
            *(int64_t *)(param_1 + 0x448) = lVar12;
            if (lVar12 != 0) {
              piStack_f8 = (int *)((uint64_t)piStack_f8 & 0xffffffff00000000);
              lVar12 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                     *param_6 * *(int *)(param_1 + 0x470) * 4,&unknown_var_7392_ptr,0x19d);
              *(int64_t *)(param_1 + 0x458) = lVar12;
              if (lVar12 != 0) {
                lVar12 = *plVar1;
                puVar13 = *(int32_t **)(param_1 + 0x440);
                uVar9 = uVar15;
                if (0 < *(int *)(lVar12 + 0x20 + lVar16)) {
                  do {
                    puVar13[1] = (int)uVar9;
                    uVar8 = (int)uVar9 + 1;
                    uVar9 = (uint64_t)uVar8;
                    *puVar13 = 1;
                    puVar13 = puVar13 + 6;
                    lVar12 = *plVar1;
                  } while ((int)uVar8 < *(int *)(lVar12 + 0x20 + lVar16));
                }
                uVar9 = uVar15;
                if (0 < *(int *)(lVar12 + 0x24 + lVar16)) {
                  do {
                    puVar13[1] = (int)uVar9;
                    uVar8 = (int)uVar9 + 1;
                    uVar9 = (uint64_t)uVar8;
                    *puVar13 = 0;
                    puVar13 = puVar13 + 6;
                  } while ((int)uVar8 < *(int *)(*plVar1 + 0x24 + lVar16));
                }
                piStack_f8 = (int *)(param_1 + 0x418);
                ui_system_config = param_1;
                *(void **)(param_1 + 0x428) = &unknown_var_6832_ptr;
                *(void **)piStack_f8 = &unknown_var_6880_ptr;
                *(code **)(param_1 + 0x420) = _guard_check_icall;
                *(code **)(param_1 + 0x430) = FUN_180801cc0;
                iVar7 = (**(code **)(**(int64_t **)piVar2 + 0x98))
                                  (*(int64_t **)piVar2,*(uint64_t *)(param_1 + 0x440),iVar18,
                                   *(int32_t *)(param_1 + 0x470));
                if (iVar7 == 0) {
                  piStack_f8 = (int *)((uint64_t)piStack_f8 & 0xffffffff00000000);
                  uVar10 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar18 * 8,
                                         &unknown_var_7392_ptr,0x1b9);
                  *(uint64_t *)(*(int64_t *)(param_1 + 0x48) + 0x11630) = uVar10;
                  if (*(int64_t *)(*(int64_t *)(param_1 + 0x48) + 0x11630) != 0) {
                    *(int32_t *)(*(int64_t *)(param_1 + 0x48) + 0x11628) = 0;
                    uVar9 = uVar15;
                    uVar17 = uVar15;
                    uVar19 = uVar15;
                    if (0 < iVar18) {
                      do {
                        *(int32_t *)(uVar9 + *(int64_t *)(param_1 + 0x448)) =
                             *(int32_t *)(*(int64_t *)(param_1 + 0x440) + 4 + uVar19);
                        *(int32_t *)(uVar9 + 4 + *(int64_t *)(param_1 + 0x448)) =
                             *(int32_t *)(uVar19 + *(int64_t *)(param_1 + 0x440));
                        lVar16 = (int64_t)(int)uVar17 * 0x34;
                        iVar7 = (**(code **)(**(int64_t **)piVar2 + 0x90))
                                          (*(int64_t **)piVar2,
                                           *(int64_t *)(param_1 + 0x448) + lVar16);
                        if (iVar7 != 0) break;
                        if (*(int *)(*(int64_t *)(param_1 + 0x448) + 4 + uVar9) == 0) {
                          *(int64_t *)
                           (*(int64_t *)(*(int64_t *)(param_1 + 0x48) + 0x11630) +
                           (int64_t)*(int *)(*(int64_t *)(param_1 + 0x48) + 0x11628) * 8) =
                               *(int64_t *)(param_1 + 0x448) + 0x14 + lVar16;
                          piVar3 = (int *)(*(int64_t *)(param_1 + 0x48) + 0x11628);
                          *piVar3 = *piVar3 + 1;
                        }
                        uVar15 = uVar15 + 1;
                        uVar9 = uVar9 + 0x34;
                        uVar17 = (uint64_t)((int)uVar17 + 1);
                        uVar19 = uVar19 + 0x18;
                      } while ((int64_t)uVar15 < (int64_t)iVar18);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
FUN_1808027ca:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



