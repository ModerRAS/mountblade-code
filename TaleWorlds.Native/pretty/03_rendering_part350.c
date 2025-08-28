#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part350.c - 19 个函数
// 函数: void UISystem_578be(uint64_t param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4)
void UISystem_578be(uint64_t param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4)
{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint *in_RAX;
  uint local_buffer_28;
  uint local_buffer_2c;
  uint64_t local_buffer_30;
  uint64_t local_buffer_38;
  int32_t local_buffer_40;
  int32_t local_buffer_44;
  int32_t local_buffer_48;
  int32_t local_buffer_4c;
  int32_t local_buffer_50;
  int32_t local_buffer_54;
  int32_t local_buffer_58;
  int32_t local_buffer_5c;
  int32_t local_buffer_60;
  int32_t local_buffer_64;
  int32_t local_buffer_68;
  int32_t local_buffer_6c;
  uint local_buffer_70;
  uint local_buffer_74;
  uint local_buffer_78;
  uint local_buffer_7c;
  uint64_t local_buffer_80;
  uint64_t local_buffer_88;
  uint64_t local_buffer_90;
  do {
    LOCK();
    uVar1 = *in_RAX;
    *in_RAX = *in_RAX | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  local_buffer_70 = in_RAX[1];
  local_buffer_74 = in_RAX[2];
  local_buffer_28 = in_RAX[3];
  local_buffer_2c = in_RAX[4];
  uVar2 = *(uint64_t *)(in_RAX + 5);
  uVar3 = *(uint64_t *)(in_RAX + 7);
  *in_RAX = 0;
  local_buffer_30 = uVar2;
  local_buffer_38 = uVar3;
  local_buffer_78 = local_buffer_28;
  local_buffer_7c = local_buffer_2c;
  local_buffer_80 = uVar2;
  local_buffer_88 = uVar3;
  SystemSecurityManager(&local_buffer_00000040,&local_buffer_00000020,param_3,param_4,local_buffer_70);
  *param_3 = local_buffer_40;
  param_3[1] = local_buffer_44;
  param_3[2] = local_buffer_48;
  param_3[3] = local_buffer_4c;
  param_3[4] = local_buffer_50;
  param_3[5] = local_buffer_54;
  param_3[6] = local_buffer_58;
  param_3[7] = local_buffer_5c;
  param_3[8] = local_buffer_60;
  param_3[9] = local_buffer_64;
  param_3[10] = local_buffer_68;
  param_3[0xb] = local_buffer_6c;
  *(uint64_t *)(param_3 + 0xc) = uVar2;
  *(uint64_t *)(param_3 + 0xe) = uVar3;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_90 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UISystem_57947(void)
void UISystem_57947(void)
{
  return;
}
// 函数: void UISystem_57980(int64_t param_1,int8_t param_2,int64_t *param_3)
void UISystem_57980(int64_t param_1,int8_t param_2,int64_t *param_3)
{
  uint64_t uVar1;
  if (param_1 != 0) {
    uVar1 = (**(code **)(*param_3 + 0x158))(param_3);
    DataStructure_fbf30(param_1,param_2,param_3,uVar1);
  }
  return;
}
uint64_t * UISystem_579d0(uint64_t *param_1,int64_t param_2,char param_3,int param_4)
{
  int64_t *plVar1;
  int32_t local_var_c;
  if ((param_2 != 0) &&
     (plVar1 = *(int64_t **)
                (*(int64_t *)((int64_t)param_3 * 0x100 + 0xb0 + *(int64_t *)(param_2 + 0x18)) +
                (int64_t)param_4 * 8), plVar1 != (int64_t *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *param_1 = 0;
  param_1[1] = CONCAT44(local_var_c,0xffffffff);
  return param_1;
}
// 函数: void UISystem_579ed(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
void UISystem_579ed(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
                  uint64_t param_5)
{
  int64_t *plVar1;
  int64_t in_RAX;
  uint64_t *unaff_RDI;
  plVar1 = *(int64_t **)(*(int64_t *)(param_3 + 0xb0 + in_RAX) + param_2 * 8);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *unaff_RDI = 0;
  unaff_RDI[1] = CONCAT44(param_5._4_4_,0xffffffff);
  return;
}
// 函数: void UISystem_57a1a(void)
void UISystem_57a1a(void)
{
  uint64_t *unaff_RDI;
  uint64_t local_var_28;
  *unaff_RDI = 0;
  unaff_RDI[1] = CONCAT44(local_var_28._4_4_,0xffffffff);
  return;
}
// 函数: void UISystem_57be0(int64_t param_1,uint64_t param_2,int32_t param_3,int8_t param_4)
void UISystem_57be0(int64_t param_1,uint64_t param_2,int32_t param_3,int8_t param_4)
{
  int64_t lVar1;
  if (param_1 != 0) {
    if (*(int64_t *)(param_1 + 0x10) != 0) {
      DataStructure_ebcb0(*(int64_t *)(param_1 + 0x10),param_3,param_4);
      if ((*(float *)(param_1 + 0x3c) < 0.0) ||
         (*(float *)(param_1 + 0x34) <= *(float *)(param_1 + 0x3c))) {
        param_1 = *(int64_t *)(param_1 + 0x28);
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
        lVar1 = *(int64_t *)(param_1 + 0x10);
      }
      else {
        lVar1 = *(int64_t *)(param_1 + 0x28);
        if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0xa8) & 1) == 0)) {
          SystemCore_FileSystem(lVar1,*(int64_t *)(lVar1 + 0x10) + 0x70,0xbf800000);
        }
        if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
          return;
        }
        lVar1 = *(int64_t *)(param_1 + 0x10);
      }
// WARNING: Subroutine does not return
      SystemCore_MemoryManager0(param_1,lVar1 + 0x70,0xbf800000);
    }
    DataStructure_fa820(param_1,param_3,param_2);
    RenderingSystem_005b0(param_1);
  }
  return;
}
// 函数: void UISystem_57c60(int64_t param_1,char param_2,char param_3,uint64_t *param_4)
void UISystem_57c60(int64_t param_1,char param_2,char param_3,uint64_t *param_4)
{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  if (param_1 != 0) {
    if (param_3 != '\0') {
      param_2 = *(char *)((int64_t)param_2 + 0xc0 + *(int64_t *)(param_1 + 0x208));
    }
    lVar4 = (int64_t)param_2 * 0x1b0;
    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x208) + 0x140);
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
  SystemDataInitializer(&processed_var_640_ptr);
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
// 函数: void UISystem_57d00(int64_t param_1,char param_2,char param_3,uint64_t *param_4)
void UISystem_57d00(int64_t param_1,char param_2,char param_3,uint64_t *param_4)
{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  if (param_1 != 0) {
    if (param_3 != '\0') {
      param_2 = *(char *)((int64_t)param_2 + 0xc0 + *(int64_t *)(param_1 + 0x208));
    }
    lVar4 = (int64_t)param_2 * 0x1b0;
    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x208) + 0x140);
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
  SystemDataInitializer(&system_state_ptr);
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
// 函数: void UISystem_57db0(uint64_t param_1)
void UISystem_57db0(uint64_t param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *aplStackX_8 [4];
  plVar2 = (int64_t *)DataStructure_fc690(param_1,aplStackX_8,3,0,0xfffffffffffffffe);
  lVar1 = *plVar2;
  if (aplStackX_8[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_8[0] + 0x38))();
  }
  if (lVar1 != 0) {
    *(int8_t *)(lVar1 + 0x44) = 1;
  }
  return;
}
// 函数: void UISystem_57e60(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void UISystem_57e60(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  char cVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *aplStackX_10 [2];
  int64_t **pplStackX_20;
  cVar1 = DataStructure_fc790();
  if (param_2 != (int64_t *)0x0) {
    if (cVar1 == -1) {
      plVar2 = (int64_t *)
               DataStructure_f4600(*(uint64_t *)(param_1 + 0x1a8),*(uint64_t *)(param_1 + 0x1b0),
                             param_2);
      if (plVar2 != *(int64_t **)(param_1 + 0x1b0)) {
        param_2 = (int64_t *)*plVar2;
        (**(code **)(*param_2 + 0x1e0))(param_2,0);
        if ((*(int64_t *)(param_1 + 0x10) != 0) &&
           (*(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x20) != 0)) {
          DataStructure_549d0(param_2);
        }
        *(int32_t *)(param_2 + 2) = 4;
        *(int32_t *)((int64_t)param_2 + 0x14) = 1;
        *(int32_t *)(param_2 + 3) = 0;
        *(int32_t *)((int64_t)param_2 + 0x1c) = 0;
        param_2[4] = 0;
        GenericFunction_1800ba050(param_1 + 0x1a8,plVar2);
      }
      lVar3 = DataStructure_f4600(*(uint64_t *)(param_1 + 0x1c8),*(uint64_t *)(param_1 + 0x1d0),
                            param_2);
      if (lVar3 != *(int64_t *)(param_1 + 0x1d0)) {
        GenericFunction_1800ba050(param_1 + 0x1c8,lVar3);
      }
    }
    else {
      lVar3 = *(int64_t *)(param_1 + 0x18);
      pplStackX_20 = aplStackX_10;
      aplStackX_10[0] = param_2;
      (**(code **)(*param_2 + 0x28))(param_2,param_2,cVar1,param_4,0xfffffffffffffffe);
      DataStructure_f9710((int64_t)cVar1 * 0x100 + lVar3,aplStackX_10,param_1);
    }
    if (0.0 <= *(float *)(param_1 + 0x3c)) {
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x3c) + 1.1920929e-07;
      return;
    }
    *(int32_t *)(param_1 + 0x34) = 0x3dcccccd;
  }
  return;
}
// 函数: void UISystem_57ea0(void)
void UISystem_57ea0(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void UISystem_57ef3(void)
void UISystem_57ef3(void)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t unaff_RBP;
  int64_t lVar3;
  int64_t lVar4;
  int64_t unaff_R13;
  lVar2 = 0x40;
  lVar3 = 0x40;
  lVar4 = unaff_RBP + 0x20;
  do {
    SystemFunction_000180074f10(lVar4);
    lVar4 = lVar4 + 0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar4 = unaff_RBP + 0x840;
  do {
    SystemFunction_000180074f10(lVar4);
    lVar4 = lVar4 + 0x10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  plVar1 = *(int64_t **)(unaff_R13 + 0x210);
  *(int8_t *)(unaff_RBP + 0x1060) = 0;
  *(uint64_t *)(unaff_RBP + 0x830) = 0;
  (**(code **)(*plVar1 + 0x38))();
// WARNING: Subroutine does not return
  memset(unaff_RBP + 0x20,0,0x1050);
}
// 函数: void UISystem_57fb0(void)
void UISystem_57fb0(void)
{
  int32_t *puVar1;
  int32_t *puVar2;
  int64_t *plVar3;
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
  uint64_t uVar18;
  uint64_t uVar19;
  int32_t *unaff_RBP;
  int32_t unaff_ESI;
  int64_t lVar20;
  char unaff_R12B;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int32_t *unaff_R15;
  int32_t local_var_30;
  int32_t local_buffer_40;
  int32_t local_buffer_44;
  int32_t local_buffer_48;
  int32_t local_buffer_4c;
  int32_t local_buffer_50;
  int32_t local_buffer_54;
  int32_t local_buffer_58;
  int32_t local_buffer_5c;
  int32_t local_buffer_60;
  int32_t local_buffer_64;
  int32_t local_buffer_68;
  int32_t local_buffer_6c;
  int32_t local_buffer_70;
  int32_t local_buffer_74;
  int32_t local_buffer_78;
  int32_t local_buffer_7c;
  uVar18 = *(uint64_t *)(unaff_RBP + 0x20c);
  uVar19 = *(uint64_t *)(unaff_RBP + 0x208);
  do {
    uVar18 = uVar18 | 1L << ((int64_t)in_AL & 0x3fU);
    uVar19 = uVar19 | uVar18;
    *(uint64_t *)(unaff_RBP + 0x20c) = uVar18;
    *(uint64_t *)(unaff_RBP + 0x208) = uVar19;
    in_AL = *(char *)((int64_t)in_AL + 0x100U + unaff_R14);
  } while (-1 < in_AL);
  plVar3 = *(int64_t **)(unaff_R13 + 0x210);
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
  *(char *)((int64_t)unaff_RBP + -0x1e) = (char)unaff_ESI;
  local_buffer_40 = 0x3f800000;
  local_buffer_44 = 0;
  local_buffer_48 = 0;
  local_buffer_4c = 0;
  local_buffer_50 = 0;
  local_buffer_54 = 0;
  local_buffer_58 = 0;
  local_buffer_5c = 0x3f800000;
  local_buffer_60 = 0x3f800000;
  local_buffer_64 = 0;
  local_buffer_68 = 0;
  local_buffer_6c = 0;
  local_buffer_70 = 0;
  local_buffer_74 = 0;
  local_buffer_78 = 0;
  local_buffer_7c = 0x3f800000;
  *(int16_t *)(unaff_RBP + -0x20) = 0xffff;
  unaff_RBP[-0x1f] = unaff_ESI;
  *(short *)(unaff_RBP + -0x1e) = (short)unaff_ESI;
  (**(code **)(*plVar3 + 0x50))
            (plVar3,local_var_30,unaff_RBP + 8,unaff_RBP + -0x1c,&local_buffer_00000040);
  SystemFunction_000180435370(unaff_RBP + 8);
  cVar15 = (**(code **)(**(int64_t **)(unaff_R13 + 0x210) + 0x38))();
  if (cVar15 != '\0') {
    cVar15 = *(char *)(unaff_RBP + 0x418);
    bVar16 = 0;
    if ('\0' < cVar15) {
      do {
        if ((*(uint64_t *)(unaff_RBP + 0x20c) >> ((uint64_t)bVar16 & 0x3f) & 1) != 0) {
          lVar20 = (int64_t)(char)bVar16 * 0x1b0;
          puVar1 = (int32_t *)(*(int64_t *)(unaff_R14 + 0x140) + 0x80 + lVar20);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          puVar2 = unaff_RBP + (int64_t)(char)bVar16 * 4 + 0x310;
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          cVar15 = *(char *)(unaff_RBP + 0x418);
          *(uint64_t *)(unaff_RBP + 0x208) =
               *(uint64_t *)(unaff_RBP + 0x208) |
               *(uint64_t *)(*(int64_t *)(unaff_R14 + 0x140) + 0xe8 + lVar20);
        }
        bVar16 = bVar16 + 1;
      } while ((char)bVar16 < cVar15);
    }
  }
  uVar17 = CoreSystem_AuthenticationHandler0(unaff_RBP + 8,unaff_R12B);
  SystemSecurityManager(unaff_RBP + -4,uVar17);
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
  puVar1 = unaff_RBP + (int64_t)unaff_R12B * 4 + 0x108;
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
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x41c) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UISystem_58085(void)
void UISystem_58085(void)
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
  int64_t lVar17;
  char unaff_R12B;
  int64_t unaff_R14;
  int32_t *unaff_R15;
  cVar16 = *(char *)(unaff_RBP + 0x418);
  bVar14 = 0;
  if ('\0' < cVar16) {
    do {
      if ((*(uint64_t *)(unaff_RBP + 0x20c) >> ((uint64_t)bVar14 & 0x3f) & 1) != 0) {
        lVar17 = (int64_t)(char)bVar14 * 0x1b0;
        puVar1 = (int32_t *)(*(int64_t *)(unaff_R14 + 0x140) + 0x80 + lVar17);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar2 = unaff_RBP + (int64_t)(char)bVar14 * 4 + 0x310;
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        cVar16 = *(char *)(unaff_RBP + 0x418);
        *(uint64_t *)(unaff_RBP + 0x208) =
             *(uint64_t *)(unaff_RBP + 0x208) |
             *(uint64_t *)(*(int64_t *)(unaff_R14 + 0x140) + 0xe8 + lVar17);
      }
      bVar14 = bVar14 + 1;
    } while ((char)bVar14 < cVar16);
  }
  uVar15 = CoreSystem_AuthenticationHandler0(unaff_RBP + 8,unaff_R12B);
  SystemSecurityManager(unaff_RBP + -4,uVar15);
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
  puVar1 = unaff_RBP + (int64_t)unaff_R12B * 4 + 0x108;
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
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x41c) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UISystem_5814f(void)
void UISystem_5814f(void)
{
  int64_t unaff_RBP;
  uint64_t *in_R9;
  *in_R9 = 0x3f800000;
  in_R9[1] = 0;
  in_R9[2] = 0x3f80000000000000;
  in_R9[3] = 0;
  *(int32_t *)(in_R9 + 4) = 0;
  *(int32_t *)((int64_t)in_R9 + 0x24) = 0;
  *(int32_t *)(in_R9 + 5) = 0x3f800000;
  *(int32_t *)((int64_t)in_R9 + 0x2c) = 0;
  *(int32_t *)(in_R9 + 6) = 0;
  *(int32_t *)((int64_t)in_R9 + 0x34) = 0;
  *(int32_t *)(in_R9 + 7) = 0;
  *(int32_t *)((int64_t)in_R9 + 0x3c) = 0x3f800000;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1070) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t UISystem_581a0(int64_t param_1)
{
  int32_t uVar1;
  int64_t lVar2;
  void *puVar3;
  void *plocal_var_30;
  int64_t lStack_28;
  int32_t local_var_20;
  uint64_t local_var_18;
  plocal_var_30 = &system_data_buffer_ptr;
  local_var_18 = 0;
  lStack_28 = 0;
  local_var_20 = 0;
  if ((param_1 != 0) && (*(int64_t **)(param_1 + 0x210) != (int64_t *)0x0)) {
    lVar2 = (**(code **)(**(int64_t **)(param_1 + 0x210) + 0xb0))();
    if (lVar2 != 0) {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar2 + 0x18) != (void *)0x0) {
        puVar3 = *(void **)(lVar2 + 0x18);
      }
      (**(code **)(plocal_var_30 + 0x10))(&plocal_var_30,puVar3);
    }
  }
  uVar1 = (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&plocal_var_30);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar1;
}
int32_t UISystem_58280(int64_t param_1)
{
  int64_t lVar1;
  if ((param_1 != 0) && (*(int64_t **)(param_1 + 0x210) != (int64_t *)0x0)) {
    lVar1 = (**(code **)(**(int64_t **)(param_1 + 0x210) + 0xb0))();
    if (lVar1 != 0) {
      return *(int32_t *)(lVar1 + 0x68);
    }
  }
  return 0xffffffff;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_582c0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void UISystem_582c0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plStack_50;
  int64_t *plStack_48;
  uint64_t local_var_40;
  int32_t local_var_38;
  plStack_50 = (int64_t *)0x0;
  plStack_48 = (int64_t *)0x0;
  local_var_40 = 0;
  local_var_38 = 3;
  DataStructure_fdc90(0,&plStack_50,0xffffffff,param_4,0xfffffffffffffffe);
  plVar6 = plStack_50;
  if (plStack_50 != plStack_48) {
    do {
      plVar1 = (int64_t *)*plVar6;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plVar5 = *(int64_t **)(param_2 + 0x18);
      if (plVar5 < *(int64_t **)(param_2 + 0x20)) {
        *(int64_t **)(param_2 + 0x18) = plVar5 + 1;
        *plVar5 = (int64_t)plVar1;
      }
      else {
        plVar3 = *(int64_t **)(param_2 + 0x10);
        lVar4 = (int64_t)plVar5 - (int64_t)plVar3 >> 3;
        if (lVar4 == 0) {
          lVar4 = 1;
LAB_180458382:
          plVar2 = (int64_t *)
                   CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 8,*(int8_t *)(param_2 + 0x28));
          plVar5 = *(int64_t **)(param_2 + 0x18);
          plVar3 = *(int64_t **)(param_2 + 0x10);
          plVar7 = plVar2;
        }
        else {
          lVar4 = lVar4 * 2;
          plVar2 = (int64_t *)0x0;
          plVar7 = (int64_t *)0x0;
          if (lVar4 != 0) goto LAB_180458382;
        }
        for (; plVar3 != plVar5; plVar3 = plVar3 + 1) {
          *plVar2 = *plVar3;
          *plVar3 = 0;
          plVar2 = plVar2 + 1;
        }
        *plVar2 = (int64_t)plVar1;
        plVar1 = *(int64_t **)(param_2 + 0x18);
        plVar5 = *(int64_t **)(param_2 + 0x10);
        if (plVar5 != plVar1) {
          do {
            if ((int64_t *)*plVar5 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*plVar5 + 0x38))();
            }
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar1);
          plVar5 = *(int64_t **)(param_2 + 0x10);
        }
        if (plVar5 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(plVar5);
        }
        *(int64_t **)(param_2 + 0x10) = plVar7;
        *(int64_t **)(param_2 + 0x18) = plVar2 + 1;
        *(int64_t **)(param_2 + 0x20) = plVar7 + lVar4;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plStack_48);
  }
  if (plStack_50 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_58460(int64_t param_1,int64_t param_2)
void UISystem_58460(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int8_t stack_array_8b8 [32];
  int64_t *plStack_898;
  uint64_t local_var_888;
  void *plocal_var_878;
  int8_t *plocal_var_870;
  int32_t local_var_868;
  int8_t stack_array_860 [1032];
  void *plocal_var_458;
  int8_t *plocal_var_450;
  int32_t local_var_448;
  int8_t stack_array_440 [1032];
  uint64_t local_var_38;
  local_var_888 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_8b8;
  plocal_var_458 = &memory_allocator_336_ptr;
  plocal_var_450 = stack_array_440;
  local_var_448 = 0;
  stack_array_440[0] = 0;
  lVar2 = -1;
  lVar1 = lVar2;
  if (param_1 != 0) {
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_1 + lVar1) != '\0');
    local_var_448 = (int32_t)lVar1;
    strcpy_s(stack_array_440,0x400,param_1);
  }
  GenericFunction_1800b3970();
  if (plStack_898 != (int64_t *)0x0) {
    plocal_var_878 = &memory_allocator_336_ptr;
    plocal_var_870 = stack_array_860;
    local_var_868 = 0;
    stack_array_860[0] = 0;
    if (param_2 != 0) {
      do {
        lVar2 = lVar2 + 1;
      } while (*(char *)(param_2 + lVar2) != '\0');
      local_var_868 = (int32_t)lVar2;
      strcpy_s(stack_array_860,0x400,param_2);
    }
    UISystem_0b330(plStack_898,&plocal_var_878,1);
    plocal_var_878 = &system_state_ptr;
  }
  if (plStack_898 != (int64_t *)0x0) {
    (**(code **)(*plStack_898 + 0x38))();
  }
  plocal_var_458 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_8b8);
}
int32_t UISystem_585e0(uint64_t param_1)
{
  int64_t lVar1;
  int64_t *plStackX_18;
  void *plocal_var_30;
  int64_t lStack_28;
  int32_t local_var_18;
  CoreMemoryPoolValidator(&plocal_var_30,param_1);
  GenericFunction_180157390();
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_28 = 0;
  local_var_18 = 0;
  plocal_var_30 = &system_state_ptr;
  lVar1 = plStackX_18[10];
  if (plStackX_18 != (int64_t *)0x0) {
    (**(code **)(*plStackX_18 + 0x38))();
  }
  return (int)lVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t
UISystem_58680(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  int32_t uVar2;
  void *plocal_var_30;
  int64_t lStack_28;
  pcVar1 = *(code **)(*render_system_data_config + 0xd0);
  CoreMemoryPoolValidator(&plocal_var_30,param_1,param_3,param_4,0xfffffffffffffffe);
  uVar2 = (*pcVar1)(render_system_data_config,&plocal_var_30);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_58740(int32_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
void UISystem_58740(int32_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *aplStackX_10 [3];
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  if (*(char *)(render_system_data_config + 0x210) == '\0') {
    RenderingSystem_MaterialHandler(render_system_data_config,aplStackX_10,param_1,param_4,0xfffffffffffffffe);
    if (aplStackX_10[0] != (int64_t *)0x0) {
      local_var_18 = *param_2;
      local_var_14 = param_2[1];
      local_var_10 = param_2[2];
      local_var_c = param_2[3];
      (**(code **)(*aplStackX_10[0] + 0xf0))(aplStackX_10[0],&local_var_18);
    }
    if (aplStackX_10[0] != (int64_t *)0x0) {
      (**(code **)(*aplStackX_10[0] + 0x38))();
    }
  }
  return;
}
int32_t UISystem_587b0(uint64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  int64_t *aplStackX_18 [2];
  GenericFunction_180157b70(param_1,aplStackX_18,param_1 & 0xffffffff,param_2,1);
  lVar1 = aplStackX_18[0][10];
  if (aplStackX_18[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_18[0] + 0x38))();
  }
  return (int)lVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t
UISystem_58800(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  char cVar1;
  uint64_t uVar2;
  int64_t *aplStackX_10 [3];
  RenderingSystem_MaterialHandler(render_system_data_config,aplStackX_10,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_10[0] != (int64_t *)0x0) {
    cVar1 = (**(code **)(*aplStackX_10[0] + 0xd8))();
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_180458841;
    }
  }
  uVar2 = 0;
LAB_180458841:
  if (aplStackX_10[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_58860(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void UISystem_58860(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *aplStackX_10 [3];
  RenderingSystem_MaterialHandler(render_system_data_config,aplStackX_10,param_1,param_4,0xfffffffffffffffe);
  if (aplStackX_10[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address