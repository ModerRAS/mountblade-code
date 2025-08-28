#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part338.c - 5 个函数

// 函数: void FUN_1804498f0(uint64_t param_1,int64_t param_2)
void FUN_1804498f0(uint64_t param_1,int64_t param_2)

{
  if (param_2 != 0) {
    FUN_18022f410(param_2);
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_180449930(int32_t *param_1,int64_t param_2)

{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  uVar2 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16,0xfffffffffffffffe);
  plVar3 = (int64_t *)FUN_180275090(uVar2);
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  if (param_2 != 0) {
    (**(code **)(plVar3[0x3e] + 0x10))(plVar3 + 0x3e,param_2);
  }
  if (plVar3 == (int64_t *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  uStack_20 = SUB84(plVar3,0);
  uStack_1c = (int32_t)((uint64_t)plVar3 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar1;
  param_1[3] = uStack_14;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  return param_1;
}



int32_t * FUN_180449a00(int32_t *param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int32_t uVar2;
  int64_t *plStackX_8;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_c;
  
  FUN_1802759e0(param_2,&plStackX_8);
  plVar1 = plStackX_8;
  if (plStackX_8 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uStack_18 = SUB84(plVar1,0);
  uStack_14 = (int32_t)((uint64_t)plVar1 >> 0x20);
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  param_1[2] = uVar2;
  param_1[3] = uStack_c;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000180449b85)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180449a80(uint64_t *param_1,uint64_t param_2,float param_3,int8_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  int32_t extraout_XMM0_Da;
  int64_t *plStackX_8;
  int64_t *plStack_48;
  int32_t uStack_40;
  int32_t uStack_3c;
  void *puStack_38;
  int64_t lStack_30;
  uint uStack_28;
  
  uVar2 = 0;
  CoreMemoryPoolValidator(&puStack_38);
  uVar4 = uVar2;
  if (uStack_28 != 0) {
    do {
      if ((byte)(*(char *)(uVar2 + lStack_30) + 0xbfU) < 0x1a) {
        *(char *)(uVar2 + lStack_30) = *(char *)(uVar2 + lStack_30) + ' ';
      }
      uVar3 = (int)uVar4 + 1;
      uVar2 = uVar2 + 1;
      uVar4 = (uint64_t)uVar3;
    } while (uVar3 < uStack_28);
  }
  uVar1 = FUN_1800b6de0(system_resource_state,&puStack_38,param_4);
  FUN_180193fc0(extraout_XMM0_Da,&plStackX_8,uVar1,(int)param_3);
  plStack_48 = plStackX_8;
  if (plStackX_8 == (int64_t *)0x0) {
    plStack_48 = (int64_t *)0x0;
    uStack_40 = 0xffffffff;
    puStack_38 = &system_data_buffer_ptr;
    if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  else {
    uStack_40 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plStack_48 + 0x28))(plStack_48);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    puStack_38 = &system_data_buffer_ptr;
    if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  *param_1 = plStack_48;
  param_1[1] = CONCAT44(uStack_3c,uStack_40);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180449c00(int64_t param_1)

{
  uint uVar1;
  int64_t lVar2;
  byte bVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t *puVar8;
  int iVar9;
  int iVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar10;
  
  lVar6 = system_message_buffer;
  lVar5 = *(int64_t *)(param_1 + 0x40);
  lVar12 = 0;
  iVar11 = 0;
  iVar4 = (int)(lVar5 - *(int64_t *)(param_1 + 0x38) >> 4);
  lVar14 = (int64_t)iVar4;
  lVar10 = lVar12;
  lVar13 = lVar12;
  iVar9 = iVar11;
  if (0 < iVar4) {
    do {
      lVar5 = *(int64_t *)(lVar13 + *(int64_t *)(param_1 + 0x38));
      lVar2 = *(int64_t *)(lVar5 + 0x1b8);
      bVar3 = *(byte *)(lVar2 + 0x38c);
      if (bVar3 == 9) {
        uVar1 = *(uint *)(lVar2 + 0x388);
        if ((uVar1 >> 0x1e & 1) == 0) {
          if ((uVar1 >> 0x1c & 1) == 0) {
            uVar7 = uVar1 & 0x1000000;
            if ((int)uVar1 < 0) {
              if ((uVar1 >> 0x1b & 1) == 0) {
                bVar3 = (uVar7 != 0) + 0xc;
              }
              else {
                bVar3 = (uVar7 != 0) + 0xe;
              }
            }
            else if ((uVar1 >> 0x19 & 1) == 0) {
              bVar3 = uVar7 != 0;
            }
            else if ((uVar1 >> 0x1b & 1) == 0) {
              bVar3 = (uVar7 != 0) + 2;
            }
            else {
              bVar3 = (uVar7 != 0) + 7;
            }
          }
          else {
            bVar3 = 4;
          }
        }
        else {
          bVar3 = 9;
        }
        *(byte *)(lVar2 + 0x38c) = bVar3;
      }
      lVar2 = *(int64_t *)((uint64_t)bVar3 * 0x1c0 + 0x228 + lVar6);
      if ((*(byte *)(lVar5 + 0xfd) & 0x20) == 0) {
        lVar5 = func_0x000180085de0(*(uint64_t *)(lVar5 + 0x1b0));
      }
      lVar10 = lVar10 + *(int *)(lVar5 + 0x200) * lVar2;
      iVar9 = (int)lVar10;
      lVar14 = lVar14 + -1;
      lVar13 = lVar13 + 0x10;
    } while (lVar14 != 0);
    lVar5 = *(int64_t *)(param_1 + 0x40);
  }
  puVar8 = *(uint64_t **)(param_1 + 0x38);
  iVar4 = (int)(lVar5 - (int64_t)puVar8 >> 4);
  lVar5 = (int64_t)iVar4;
  if (0 < iVar4) {
    do {
      lVar6 = FUN_180075af0(*puVar8);
      lVar12 = lVar12 + lVar6;
      iVar11 = (int)lVar12;
      puVar8 = puVar8 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return iVar11 + iVar9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180449c12(int64_t param_1,int64_t param_2)

{
  uint uVar1;
  int64_t lVar2;
  byte bVar3;
  int iVar4;
  int64_t lVar5;
  uint uVar6;
  uint64_t *puVar7;
  int iVar8;
  int iVar10;
  uint64_t unaff_RSI;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t lVar13;
  uint64_t uVar9;
  
  lVar12 = system_message_buffer;
  iVar10 = (int)unaff_RSI;
  uVar9 = unaff_RSI & 0xffffffff;
  iVar4 = (int)(param_2 - *(int64_t *)(param_1 + 0x38) >> 4);
  lVar13 = (int64_t)iVar4;
  iVar8 = iVar10;
  if (0 < iVar4) {
    uVar11 = unaff_RSI & 0xffffffff;
    do {
      lVar5 = *(int64_t *)(uVar11 + *(int64_t *)(param_1 + 0x38));
      lVar2 = *(int64_t *)(lVar5 + 0x1b8);
      bVar3 = *(byte *)(lVar2 + 0x38c);
      if (bVar3 == 9) {
        uVar1 = *(uint *)(lVar2 + 0x388);
        if ((uVar1 >> 0x1e & 1) == 0) {
          if ((uVar1 >> 0x1c & 1) == 0) {
            uVar6 = uVar1 & 0x1000000;
            if ((int)uVar1 < 0) {
              if ((uVar1 >> 0x1b & 1) == 0) {
                bVar3 = (uVar6 != 0) + 0xc;
              }
              else {
                bVar3 = (uVar6 != 0) + 0xe;
              }
            }
            else if ((uVar1 >> 0x19 & 1) == 0) {
              bVar3 = uVar6 != 0;
            }
            else if ((uVar1 >> 0x1b & 1) == 0) {
              bVar3 = (uVar6 != 0) + 2;
            }
            else {
              bVar3 = (uVar6 != 0) + 7;
            }
          }
          else {
            bVar3 = 4;
          }
        }
        else {
          bVar3 = 9;
        }
        *(byte *)(lVar2 + 0x38c) = bVar3;
      }
      lVar2 = *(int64_t *)((uint64_t)bVar3 * 0x1c0 + 0x228 + lVar12);
      if ((*(byte *)(lVar5 + 0xfd) & 0x20) == 0) {
        lVar5 = func_0x000180085de0(*(uint64_t *)(lVar5 + 0x1b0));
      }
      uVar11 = uVar11 + 0x10;
      uVar9 = uVar9 + *(int *)(lVar5 + 0x200) * lVar2;
      iVar8 = (int)uVar9;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    param_2 = *(int64_t *)(param_1 + 0x40);
  }
  puVar7 = *(uint64_t **)(param_1 + 0x38);
  iVar4 = (int)(param_2 - (int64_t)puVar7 >> 4);
  lVar12 = (int64_t)iVar4;
  if (0 < iVar4) {
    do {
      lVar13 = FUN_180075af0(*puVar7);
      unaff_RSI = unaff_RSI + lVar13;
      iVar10 = (int)unaff_RSI;
      puVar7 = puVar7 + 2;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return iVar10 + iVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180449c37(void)

{
  uint uVar1;
  int64_t lVar2;
  byte bVar3;
  int iVar4;
  int64_t lVar5;
  uint uVar6;
  uint64_t *puVar7;
  int64_t unaff_RBP;
  uint unaff_ESI;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t unaff_R14;
  int64_t unaff_R15;
  
  lVar9 = system_message_buffer;
  uVar8 = (uint64_t)unaff_ESI;
  do {
    lVar5 = *(int64_t *)(uVar8 + *(int64_t *)(unaff_R14 + 0x38));
    lVar2 = *(int64_t *)(lVar5 + 0x1b8);
    bVar3 = *(byte *)(lVar2 + 0x38c);
    if (bVar3 == 9) {
      uVar1 = *(uint *)(lVar2 + 0x388);
      if ((uVar1 >> 0x1e & 1) == 0) {
        if ((uVar1 >> 0x1c & 1) == 0) {
          uVar6 = uVar1 & 0x1000000;
          if ((int)uVar1 < 0) {
            if ((uVar1 >> 0x1b & 1) == 0) {
              bVar3 = (uVar6 != 0) + 0xc;
            }
            else {
              bVar3 = (uVar6 != 0) + 0xe;
            }
          }
          else if ((uVar1 >> 0x19 & 1) == 0) {
            bVar3 = uVar6 != 0;
          }
          else if ((uVar1 >> 0x1b & 1) == 0) {
            bVar3 = (uVar6 != 0) + 2;
          }
          else {
            bVar3 = (uVar6 != 0) + 7;
          }
        }
        else {
          bVar3 = 4;
        }
      }
      else {
        bVar3 = 9;
      }
      *(byte *)(lVar2 + 0x38c) = bVar3;
    }
    lVar2 = *(int64_t *)((uint64_t)bVar3 * 0x1c0 + 0x228 + lVar9);
    if ((*(byte *)(lVar5 + 0xfd) & 0x20) == 0) {
      lVar5 = func_0x000180085de0(*(uint64_t *)(lVar5 + 0x1b0));
    }
    uVar8 = uVar8 + 0x10;
    unaff_RBP = unaff_RBP + *(int *)(lVar5 + 0x200) * lVar2;
    unaff_R15 = unaff_R15 + -1;
  } while (unaff_R15 != 0);
  puVar7 = *(uint64_t **)(unaff_R14 + 0x38);
  iVar4 = (int)(*(int64_t *)(unaff_R14 + 0x40) - (int64_t)puVar7 >> 4);
  lVar9 = (int64_t)iVar4;
  if (0 < iVar4) {
    do {
      iVar4 = FUN_180075af0(*puVar7);
      unaff_ESI = unaff_ESI + iVar4;
      puVar7 = puVar7 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return unaff_ESI + (int)unaff_RBP;
}



int FUN_180449d23(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  uint64_t *puVar2;
  int unaff_EBP;
  int unaff_ESI;
  int64_t lVar3;
  int64_t unaff_R14;
  
  puVar2 = *(uint64_t **)(unaff_R14 + 0x38);
  iVar1 = (int)(param_2 - (int64_t)puVar2 >> 4);
  lVar3 = (int64_t)iVar1;
  if (0 < iVar1) {
    do {
      iVar1 = FUN_180075af0(*puVar2);
      unaff_ESI = unaff_ESI + iVar1;
      puVar2 = puVar2 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return unaff_ESI + unaff_EBP;
}



int FUN_180449d40(void)

{
  int iVar1;
  uint64_t *unaff_RBX;
  int unaff_EBP;
  int unaff_ESI;
  int64_t unaff_RDI;
  
  do {
    iVar1 = FUN_180075af0(*unaff_RBX);
    unaff_ESI = unaff_ESI + iVar1;
    unaff_RBX = unaff_RBX + 2;
    unaff_RDI = unaff_RDI + -1;
  } while (unaff_RDI != 0);
  return unaff_ESI + unaff_EBP;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180449d70(int64_t param_1,int64_t param_2)
void FUN_180449d70(int64_t param_1,int64_t param_2)

{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  void *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  int8_t auStack_178 [32];
  void *puStack_158;
  int8_t *puStack_150;
  int32_t uStack_148;
  uint64_t uStack_140;
  int64_t lStack_138;
  int64_t lStack_130;
  uint64_t *puStack_128;
  uint64_t *puStack_120;
  uint64_t *puStack_118;
  int32_t uStack_110;
  uint64_t uStack_108;
  int64_t lStack_100;
  int64_t lStack_f8;
  uint64_t uStack_f0;
  void *puStack_e8;
  void *puStack_e0;
  int iStack_d8;
  uint8_t auStack_d0 [136];
  uint64_t uStack_48;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  puStack_128 = (uint64_t *)0x0;
  puStack_120 = (uint64_t *)0x0;
  puVar6 = (uint64_t *)0x0;
  puStack_118 = (uint64_t *)0x0;
  uStack_110 = 3;
  iVar2 = (int)(*(int64_t *)(param_1 + 0x40) - *(int64_t *)(param_1 + 0x38) >> 4);
  lStack_130 = (int64_t)iVar2;
  puVar8 = (uint64_t *)0x0;
  puVar4 = (uint64_t *)0x0;
  lStack_100 = param_1;
  lStack_f8 = param_2;
  if (0 < iVar2) {
    lStack_138 = 0;
    puVar7 = puVar4;
    puVar11 = puVar6;
    do {
      lVar9 = lStack_138;
      lVar10 = *(int64_t *)(lStack_138 + *(int64_t *)(param_1 + 0x38));
      puStack_e8 = &unknown_var_3432_ptr;
      puStack_e0 = auStack_d0;
      iStack_d8 = 0;
      auStack_d0[0] = 0;
      if (lStack_f8 != 0) {
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (*(char *)(lStack_f8 + lVar3) != '\0');
        iStack_d8 = (int)lVar3;
        strcpy_s(auStack_d0,0x80,lStack_f8);
      }
      puStack_158 = &system_data_buffer_ptr;
      uStack_140 = 0;
      puStack_150 = (int8_t *)0x0;
      uStack_148 = 0;
      CoreMemoryPoolProcessor(&puStack_158,iStack_d8);
      if (0 < iStack_d8) {
        puVar5 = &system_buffer_ptr;
        if (puStack_e0 != (void *)0x0) {
          puVar5 = puStack_e0;
        }
                    // WARNING: Subroutine does not return
        memcpy(puStack_150,puVar5,(int64_t)(iStack_d8 + 1));
      }
      if ((puStack_e0 != (void *)0x0) && (uStack_148 = 0, puStack_150 != (int8_t *)0x0)) {
        *puStack_150 = 0;
      }
      cVar1 = FUN_180063510(lVar10 + 0x218,&puStack_158);
      puStack_158 = &system_data_buffer_ptr;
      if (puStack_150 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      puStack_150 = (int8_t *)0x0;
      uStack_140 = uStack_140 & 0xffffffff00000000;
      puStack_158 = &system_state_ptr;
      puStack_e8 = &system_state_ptr;
      puVar4 = puVar7;
      if (cVar1 != '\0') {
        uStack_108 = *(uint64_t *)(lVar9 + *(int64_t *)(param_1 + 0x38));
        if (puVar8 < puVar11) {
          *puVar8 = uStack_108;
          lStack_138 = lVar9;
        }
        else {
          lVar10 = (int64_t)puVar8 - (int64_t)puVar7 >> 3;
          if (lVar10 == 0) {
            lVar10 = 1;
LAB_180449f87:
            puVar4 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 8,3);
          }
          else {
            lVar10 = lVar10 * 2;
            puVar4 = puVar6;
            if (lVar10 != 0) goto LAB_180449f87;
          }
          if (puVar7 != puVar8) {
                    // WARNING: Subroutine does not return
            memmove(puVar4,puVar7,(int64_t)puVar8 - (int64_t)puVar7);
          }
          *puVar4 = uStack_108;
          if (puVar7 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer(puVar7);
          }
          puVar11 = puVar4 + lVar10;
          param_1 = lStack_100;
          puStack_128 = puVar4;
          puStack_118 = puVar11;
          puVar8 = puVar4;
        }
        puVar8 = puVar8 + 1;
        lVar9 = lStack_138;
        puStack_120 = puVar8;
      }
      lStack_138 = lVar9 + 0x10;
      lStack_130 = lStack_130 + -1;
      puVar7 = puVar4;
    } while (lStack_130 != 0);
  }
  iVar2 = (int)((int64_t)puVar8 - (int64_t)puVar4 >> 3);
  if (0 < iVar2) {
    do {
      FUN_1802828a0(param_1,puVar4[(int64_t)puVar6]);
      puVar6 = (uint64_t *)((int64_t)puVar6 + 1);
    } while ((int64_t)puVar6 < (int64_t)iVar2);
  }
  if (puVar4 == (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_178);
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18044a080(int64_t param_1,int64_t param_2)
void FUN_18044a080(int64_t param_1,int64_t param_2)

{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  void *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  int8_t auStack_178 [32];
  void *puStack_158;
  int8_t *puStack_150;
  int32_t uStack_148;
  uint64_t uStack_140;
  int64_t lStack_138;
  int64_t lStack_130;
  uint64_t *puStack_128;
  uint64_t *puStack_120;
  uint64_t *puStack_118;
  int32_t uStack_110;
  uint64_t uStack_108;
  int64_t lStack_100;
  int64_t lStack_f8;
  uint64_t uStack_f0;
  void *puStack_e8;
  void *puStack_e0;
  int iStack_d8;
  uint8_t auStack_d0 [136];
  uint64_t uStack_48;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  puStack_128 = (uint64_t *)0x0;
  puStack_120 = (uint64_t *)0x0;
  puVar6 = (uint64_t *)0x0;
  puStack_118 = (uint64_t *)0x0;
  uStack_110 = 3;
  iVar2 = (int)(*(int64_t *)(param_1 + 0x40) - *(int64_t *)(param_1 + 0x38) >> 4);
  lStack_130 = (int64_t)iVar2;
  puVar8 = (uint64_t *)0x0;
  puVar4 = (uint64_t *)0x0;
  lStack_100 = param_1;
  lStack_f8 = param_2;
  if (0 < iVar2) {
    lStack_138 = 0;
    puVar7 = puVar4;
    puVar11 = puVar6;
    do {
      lVar9 = lStack_138;
      lVar10 = *(int64_t *)(lStack_138 + *(int64_t *)(param_1 + 0x38));
      puStack_e8 = &unknown_var_3432_ptr;
      puStack_e0 = auStack_d0;
      iStack_d8 = 0;
      auStack_d0[0] = 0;
      if (lStack_f8 != 0) {
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (*(char *)(lStack_f8 + lVar3) != '\0');
        iStack_d8 = (int)lVar3;
        strcpy_s(auStack_d0,0x80,lStack_f8);
      }
      puStack_158 = &system_data_buffer_ptr;
      uStack_140 = 0;
      puStack_150 = (int8_t *)0x0;
      uStack_148 = 0;
      CoreMemoryPoolProcessor(&puStack_158,iStack_d8);
      if (0 < iStack_d8) {
        puVar5 = &system_buffer_ptr;
        if (puStack_e0 != (void *)0x0) {
          puVar5 = puStack_e0;
        }
                    // WARNING: Subroutine does not return
        memcpy(puStack_150,puVar5,(int64_t)(iStack_d8 + 1));
      }
      if ((puStack_e0 != (void *)0x0) && (uStack_148 = 0, puStack_150 != (int8_t *)0x0)) {
        *puStack_150 = 0;
      }
      cVar1 = FUN_180063510(lVar10 + 0x218,&puStack_158);
      puStack_158 = &system_data_buffer_ptr;
      if (puStack_150 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      puStack_150 = (int8_t *)0x0;
      uStack_140 = uStack_140 & 0xffffffff00000000;
      puStack_158 = &system_state_ptr;
      puStack_e8 = &system_state_ptr;
      puVar4 = puVar7;
      if (cVar1 == '\0') {
        uStack_108 = *(uint64_t *)(lVar9 + *(int64_t *)(param_1 + 0x38));
        if (puVar8 < puVar11) {
          *puVar8 = uStack_108;
          lStack_138 = lVar9;
        }
        else {
          lVar10 = (int64_t)puVar8 - (int64_t)puVar7 >> 3;
          if (lVar10 == 0) {
            lVar10 = 1;
LAB_18044a297:
            puVar4 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 8,3);
          }
          else {
            lVar10 = lVar10 * 2;
            puVar4 = puVar6;
            if (lVar10 != 0) goto LAB_18044a297;
          }
          if (puVar7 != puVar8) {
                    // WARNING: Subroutine does not return
            memmove(puVar4,puVar7,(int64_t)puVar8 - (int64_t)puVar7);
          }
          *puVar4 = uStack_108;
          if (puVar7 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer(puVar7);
          }
          puVar11 = puVar4 + lVar10;
          param_1 = lStack_100;
          puStack_128 = puVar4;
          puStack_118 = puVar11;
          puVar8 = puVar4;
        }
        puVar8 = puVar8 + 1;
        lVar9 = lStack_138;
        puStack_120 = puVar8;
      }
      lStack_138 = lVar9 + 0x10;
      lStack_130 = lStack_130 + -1;
      puVar7 = puVar4;
    } while (lStack_130 != 0);
  }
  iVar2 = (int)((int64_t)puVar8 - (int64_t)puVar4 >> 3);
  if (0 < iVar2) {
    do {
      FUN_1802828a0(param_1,puVar4[(int64_t)puVar6]);
      puVar6 = (uint64_t *)((int64_t)puVar6 + 1);
    } while ((int64_t)puVar6 < (int64_t)iVar2);
  }
  if (puVar4 == (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_178);
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18044a3a0(int64_t param_1,int64_t param_2)
void FUN_18044a3a0(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  void *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  int8_t auStack_138 [32];
  void *puStack_118;
  int8_t *puStack_110;
  int32_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  void *puStack_e8;
  void *puStack_e0;
  int iStack_d8;
  uint8_t auStack_d0 [136];
  uint64_t uStack_48;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  lVar5 = 0;
  iVar2 = (int)(*(int64_t *)(param_1 + 0x40) - *(int64_t *)(param_1 + 0x38) >> 4);
  lVar6 = (int64_t)iVar2;
  if (0 < iVar2) {
    do {
      lVar1 = *(int64_t *)(lVar5 + *(int64_t *)(param_1 + 0x38));
      puStack_e8 = &unknown_var_3432_ptr;
      puStack_e0 = auStack_d0;
      iStack_d8 = 0;
      auStack_d0[0] = 0;
      if (param_2 != 0) {
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (*(char *)(param_2 + lVar3) != '\0');
        iStack_d8 = (int)lVar3;
        strcpy_s(auStack_d0,0x80,param_2);
      }
      puStack_118 = &system_data_buffer_ptr;
      uStack_100 = 0;
      puStack_110 = (int8_t *)0x0;
      uStack_108 = 0;
      CoreMemoryPoolProcessor(&puStack_118,iStack_d8);
      if (0 < iStack_d8) {
        puVar4 = &system_buffer_ptr;
        if (puStack_e0 != (void *)0x0) {
          puVar4 = puStack_e0;
        }
                    // WARNING: Subroutine does not return
        memcpy(puStack_110,puVar4,(int64_t)(iStack_d8 + 1));
      }
      if ((puStack_e0 != (void *)0x0) && (uStack_108 = 0, puStack_110 != (int8_t *)0x0)) {
        *puStack_110 = 0;
      }
      FUN_180063510(lVar1 + 0x218,&puStack_118);
      puStack_118 = &system_data_buffer_ptr;
      if (puStack_110 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      puStack_110 = (int8_t *)0x0;
      uStack_100 = uStack_100 & 0xffffffff00000000;
      puStack_118 = &system_state_ptr;
      puStack_e8 = &system_state_ptr;
      lVar5 = lVar5 + 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18044a590(uint64_t *param_1,uint64_t param_2,int8_t param_3,char param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint uVar4;
  uint64_t uVar6;
  int32_t uVar7;
  int64_t *plStackX_8;
  int64_t *plStack_50;
  int32_t uStack_48;
  int32_t uStack_44;
  void *puStack_38;
  int64_t lStack_30;
  uint uStack_28;
  int32_t uStack_1c;
  uint64_t uVar5;
  
  uVar5 = 0;
  uVar7 = CoreMemoryPoolValidator(&puStack_38);
  uVar6 = uVar5;
  if (uStack_28 != 0) {
    do {
      if ((byte)(*(char *)(lStack_30 + uVar6) + 0xbfU) < 0x1a) {
        *(char *)(lStack_30 + uVar6) = *(char *)(lStack_30 + uVar6) + ' ';
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
      uVar6 = uVar6 + 1;
    } while (uVar4 < uStack_28);
  }
  FUN_1800c48e0(uVar7,&plStackX_8,&puStack_38,param_3);
  plVar3 = plStackX_8;
  if (param_4 == '\0') {
    if (plStackX_8 == (int64_t *)0x0) {
      uVar2 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16);
      plVar3 = (int64_t *)FUN_180275090(uVar2);
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      if (plStackX_8 != (int64_t *)0x0) {
        lVar1 = *plStackX_8;
        plStackX_8 = plVar3;
        (**(code **)(lVar1 + 0x38))();
        plVar3 = plStackX_8;
      }
      plStackX_8 = plVar3;
      plVar3 = plStackX_8;
      uVar6 = (uint64_t)uStack_28;
      if (lStack_30 != 0) {
        CoreMemoryPoolProcessor(plStackX_8 + 0x3e,uVar6);
      }
      if (uStack_28 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(plVar3[0x3f],lStack_30,uVar6);
      }
      *(int32_t *)(plVar3 + 0x40) = 0;
      if (plVar3[0x3f] != 0) {
        *(int8_t *)(uVar6 + plVar3[0x3f]) = 0;
      }
      *(int32_t *)((int64_t)plVar3 + 0x20c) = uStack_1c;
LAB_18044a707:
      if (plStackX_8 == (int64_t *)0x0) goto LAB_18044a759;
    }
    plStack_50 = plStackX_8;
    uStack_48 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plStack_50 + 0x28))(plStack_50);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    puStack_38 = &system_data_buffer_ptr;
    if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  else {
    if (plStackX_8 != (int64_t *)0x0) {
      if (((plStackX_8[8] - plStackX_8[7] & 0xfffffffffffffff0U) == 0) &&
         (plStackX_8 = (int64_t *)0x0, plVar3 != (int64_t *)0x0)) {
        (**(code **)(*plVar3 + 0x38))();
      }
      goto LAB_18044a707;
    }
LAB_18044a759:
    plStack_50 = (int64_t *)0x0;
    uStack_48 = 0xffffffff;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    puStack_38 = &system_data_buffer_ptr;
    if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  *param_1 = plStack_50;
  param_1[1] = CONCAT44(uStack_44,uStack_48);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00018044aa06)
// WARNING: Removing unreachable block (ram,0x00018044aa0e)
// WARNING: Removing unreachable block (ram,0x00018044aa1c)
// WARNING: Removing unreachable block (ram,0x00018044aa20)
// WARNING: Removing unreachable block (ram,0x00018044aa32)
// WARNING: Removing unreachable block (ram,0x00018044aa36)
// WARNING: Removing unreachable block (ram,0x00018044aa42)
// WARNING: Removing unreachable block (ram,0x00018044a910)
// WARNING: Removing unreachable block (ram,0x00018044aa63)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18044a810(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4)
void FUN_18044a810(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  int32_t uVar2;
  int64_t lVar3;
  int32_t *puVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  void *puStack_78;
  int32_t *puStack_70;
  int32_t uStack_68;
  uint64_t uStack_60;
  void *puStack_58;
  int64_t lStack_50;
  uint uStack_48;
  
  uVar5 = 0;
  CoreMemoryPoolValidator(&puStack_58,param_1,param_3,param_4,0,0xfffffffffffffffe);
  uVar7 = uVar5;
  if (uStack_48 != 0) {
    do {
      cVar1 = *(char *)(lStack_50 + uVar5);
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        *(char *)(lStack_50 + uVar5) = cVar1 + ' ';
      }
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 1;
      uVar7 = (uint64_t)uVar6;
    } while (uVar6 < uStack_48);
  }
  lVar3 = FUN_1800b6de0(system_resource_state,&puStack_58,0);
  if (lVar3 == 0) {
    SystemCore_ResourceManager0(&unknown_var_104_ptr,param_1);
  }
  else {
    if ((0 < *(int *)(render_system_data_memory + 0x700)) &&
       (*(int64_t *)(lVar3 + 0x40) - (int64_t)*(int64_t **)(lVar3 + 0x38) >> 4 != 0)) {
      lVar3 = *(int64_t *)(**(int64_t **)(lVar3 + 0x38) + 0x1b8);
      puStack_78 = &system_data_buffer_ptr;
      uStack_60 = 0;
      puStack_70 = (int32_t *)0x0;
      uStack_68 = 0;
      puVar4 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x11,&unknown_var_3251_ptr);
      *(int8_t *)puVar4 = 0;
      puStack_70 = puVar4;
      uVar2 = CoreMemoryPoolCleaner(puVar4);
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar2);
      *puVar4 = 0x5f657375;
      puVar4[1] = 0x6f6c6f63;
      puVar4[2] = 0x70616d72;
      puVar4[3] = 0x676e6970;
      *(int8_t *)(puVar4 + 4) = 0;
      uStack_68 = 0x10;
      FUN_180240430(*(uint64_t *)(lVar3 + 0x1e0),&puStack_78,0);
      puStack_78 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(puVar4);
    }
    if ((param_2 != -1) && (*(int *)(lVar3 + 0x58) < param_2)) {
      SystemCore_ResourceManager0(&unknown_var_288_ptr,param_1,*(int *)(lVar3 + 0x58),param_2);
    }
  }
  puStack_58 = &system_data_buffer_ptr;
  if (lStack_50 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}





