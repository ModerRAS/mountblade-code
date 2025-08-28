#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part178.c - 4 个函数
// 函数: void function_76f970(int64_t *param_1)
void function_76f970(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int8_t *apstack_special_x_8 [4];
  lVar2 = *param_1;
  lVar1 = lVar2 + 600;
  *(uint64_t *)(lVar2 + 0x268) = 0;
  *(int64_t *)(lVar2 + 0x260) = lVar1;
  *(int64_t *)lVar1 = lVar1;
  iVar4 = *(int *)(*(int64_t *)(lVar2 + 0xa8) + 0x127a0);
  iVar3 = iVar4 + 1;
  if (0x7ffffffe < iVar4) {
    iVar3 = 0;
  }
  *(int *)(*(int64_t *)(lVar2 + 0xa8) + 0x127a0) = iVar3;
  *(int *)(lVar2 + 0x270) = iVar4;
  *(uint64_t *)(lVar2 + 0x230) = 0;
  *(int32_t *)(lVar2 + 0x238) = 0;
  *(uint64_t *)(lVar2 + 0x220) = 0;
  *(uint64_t *)(lVar2 + 0x228) = 0;
  *(uint64_t *)(lVar2 + 0x240) = 0;
  *(int32_t *)(lVar2 + 0x250) = 0;
  *(int32_t *)(lVar2 + 0x274) = 0x3f800000;
  iVar4 = function_743700(*(uint64_t *)(lVar2 + 0xa8),apstack_special_x_8,0x10,1);
  if (iVar4 == 0) {
    *apstack_special_x_8[0] = 8;
    *(int64_t *)(apstack_special_x_8[0] + 8) = lVar2;
    SystemFunction_000180743b40(*(uint64_t *)(lVar2 + 0xa8),apstack_special_x_8[0],1);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_76fa40(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = *param_1;
  lVar2 = *(int64_t *)(lVar1 + 0x218);
  if (lVar2 != 0) {
    RenderingSystem_MaterialHandler(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&rendering_buffer_2192_ptr,0xb8);
    *(uint64_t *)(lVar1 + 0x218) = 0;
  }
  return 0;
}
uint64_t
function_76faa0(int64_t *param_1,int64_t param_2,uint64_t param_3,int param_4,uint64_t param_5,
             int32_t *param_6)
{
  int64_t lVar1;
  uint64_t uVar2;
  lVar1 = *param_1;
  if (param_2 == 0) {
    return 0;
  }
  *param_6 = *(int32_t *)(lVar1 + 0x234);
  param_4 = *(int *)(lVar1 + 0x234) * param_4;
  if (*(int *)(lVar1 + 0x238) < param_4) {
    return 0x1c;
  }
  if (*(int64_t *)(lVar1 + 8) == *(int64_t *)(lVar1 + 0x240)) {
    uVar2 = *(uint64_t *)(lVar1 + 0x220);
  }
  else {
    uVar2 = *(uint64_t *)(lVar1 + 0x228);
    *(uint64_t *)(lVar1 + 0x228) = *(uint64_t *)(lVar1 + 0x220);
    *(int8_t *)(lVar1 + 0x248) = *(int8_t *)(lVar1 + 0x249);
    *(uint64_t *)(lVar1 + 0x220) = uVar2;
    *(int8_t *)(lVar1 + 0x249) = 0;
    *(int64_t *)(lVar1 + 0x240) = *(int64_t *)(lVar1 + 8);
  }
// WARNING: Subroutine does not return
  memcpy(param_3,uVar2,(int64_t)param_4 << 2);
}
uint64_t function_76fb80(int64_t *param_1,int param_2,int32_t *param_3,int64_t param_4)
{
  int32_t uVar1;
  int64_t lVar2;
  lVar2 = *param_1;
  if (param_2 == 0) {
    *param_3 = *(int32_t *)(lVar2 + 0x270);
    if (param_4 == 0) {
      return 0;
    }
    uVar1 = *(int32_t *)(lVar2 + 0x270);
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    *param_3 = *(int32_t *)(lVar2 + 0x250);
    if (param_4 == 0) {
      return 0;
    }
    uVar1 = *(int32_t *)(lVar2 + 0x250);
  }
// WARNING: Subroutine does not return
  SystemValidationProcessor(param_4,0x20,&processed_var_4576_ptr,uVar1);
}
uint64_t function_76fc40(int64_t param_1)
{
  int iVar1;
  iVar1 = SystemStatusChecker(param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = UISystem_ComponentManager(param_1 + 0x20);
    if (iVar1 == 0) {
      *(int32_t *)(param_1 + 0x30) = 0xffffffff;
      *(int32_t *)(param_1 + 0x34) = 0;
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_76fc90(int64_t param_1,int param_2)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int *piVar8;
  int aiStackX_10 [6];
  if (param_2 == 1) {
    if ((*(int *)(param_1 + 0x230) != *(int *)(param_1 + 0x250)) || (*(int *)(param_1 + 0x238) == 0)
       ) {
      *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x250);
      uVar4 = SystemFunction_00018074a590(*(uint64_t *)(param_1 + 0xa8));
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = SystemFunction_000180746360(*(uint64_t *)(param_1 + 0xa8),aiStackX_10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      aiStackX_10[0] = aiStackX_10[0] * *(int *)(param_1 + 0x234);
      *(int *)(param_1 + 0x238) = aiStackX_10[0];
      if (*(int64_t *)(param_1 + 0x218) != 0) {
        RenderingSystem_MaterialHandler(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x218),
                      &rendering_buffer_2192_ptr,0x174);
        aiStackX_10[0] = *(int *)(param_1 + 0x238);
      }
      lVar5 = function_741d80(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),aiStackX_10[0] * 8,0x10,
                            &rendering_buffer_2192_ptr,0x177,0);
      *(int64_t *)(param_1 + 0x218) = lVar5;
      if (lVar5 != 0) {
        *(int64_t *)(param_1 + 0x220) = lVar5;
        *(int16_t *)(param_1 + 0x248) = 0;
        *(int64_t *)(param_1 + 0x228) = lVar5 + (int64_t)*(int *)(param_1 + 0x238) * 4;
        return 0;
      }
      return 0x26;
    }
  }
  else if (param_2 == 0x80) {
    puVar1 = (uint64_t *)(param_1 + 600);
    puVar2 = (uint64_t *)*puVar1;
    while (puVar2 != puVar1) {
      if (puVar2[2] == 0) {
        return 0x1c;
      }
      uVar4 = function_771050();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      puVar2 = (uint64_t *)*puVar1;
    }
    lVar5 = *(int64_t *)(param_1 + 0xa8);
    if (*(int *)(lVar5 + 0x127cc) == 0) {
      uVar4 = 0;
    }
    else if (*(int *)(lVar5 + 0x127b0) == 0) {
      uVar4 = 0x1c;
    }
    else {
      uVar4 = 0;
      lVar6 = (int64_t)(int)(*(int *)(lVar5 + 0x127b0) - 1U & *(uint *)(param_1 + 0x270));
      piVar8 = (int *)(*(int64_t *)(lVar5 + 0x127a8) + lVar6 * 4);
      iVar3 = *(int *)(*(int64_t *)(lVar5 + 0x127a8) + lVar6 * 4);
      if (iVar3 != -1) {
        lVar6 = *(int64_t *)(lVar5 + 0x127b8);
        do {
          if (*(uint *)(lVar6 + (int64_t)iVar3 * 0x10) == *(uint *)(param_1 + 0x270)) {
            iVar3 = *piVar8;
            lVar7 = (int64_t)iVar3;
            *(uint64_t *)(lVar6 + 8 + lVar7 * 0x10) = 0;
            *piVar8 = *(int *)(lVar6 + 4 + lVar7 * 0x10);
            *(int32_t *)(lVar6 + 4 + lVar7 * 0x10) = *(int32_t *)(lVar5 + 0x127c8);
            *(int *)(lVar5 + 0x127cc) = *(int *)(lVar5 + 0x127cc) + -1;
            *(int *)(lVar5 + 0x127c8) = iVar3;
            uVar4 = 0;
            break;
          }
          piVar8 = (int *)(lVar6 + 4 + (int64_t)iVar3 * 0x10);
          iVar3 = *piVar8;
        } while (iVar3 != -1);
      }
    }
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *(int32_t *)(param_1 + 0x270) = 0xffffffff;
  }
  return 0;
}
// 函数: void function_76ff30(void)
void function_76ff30(void)
{
// WARNING: Subroutine does not return
  memset(0x180c0cb24,0,0x5c);
}
uint64_t function_770070(uint64_t *param_1,uint64_t param_2)
{
  uint64_t uVar1;
  *param_1 = param_2;
  *(int32_t *)(param_1 + 1) = 0;
  if (*(int *)(param_1 + 3) == 0) {
    uVar1 = function_770270(param_1 + 2,0x40);
    return uVar1;
  }
  return 0x1c;
}
uint64_t function_7700b0(int64_t *param_1,uint *param_2,uint64_t *param_3)
{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int iVar7;
  int64_t lVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  iVar2 = *(int *)((int64_t)param_1 + 0x24);
  if (iVar2 == -1) {
    return 0x1c;
  }
  if (iVar2 == (int)param_1[1]) {
    iVar3 = iVar2 * 2;
    if (iVar2 * 2 < 4) {
      iVar3 = 4;
    }
    uVar4 = function_770270(param_1,iVar3);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  if ((int)param_1[1] == 0) {
label_770229:
    uVar4 = 0x1c;
  }
  else {
    uVar1 = *param_2;
    lVar8 = (int64_t)(int)((int)param_1[1] - 1U & uVar1);
    piVar12 = (int *)(*param_1 + lVar8 * 4);
    iVar2 = *(int *)(*param_1 + lVar8 * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(param_1[2] + (int64_t)iVar2 * 0x10) == uVar1) goto label_770229;
        piVar12 = (int *)(param_1[2] + 4 + (int64_t)iVar2 * 0x10);
        iVar2 = *piVar12;
      } while (iVar2 != -1);
    }
    iVar2 = (int)param_1[4];
    if (iVar2 == -1) {
      uVar4 = *param_3;
      iVar2 = (int)param_1[3];
      iVar13 = iVar2 + 1;
      uVar10 = (int)*(uint *)((int64_t)param_1 + 0x1c) >> 0x1f;
      iVar3 = (*(uint *)((int64_t)param_1 + 0x1c) ^ uVar10) - uVar10;
      if (iVar3 < iVar13) {
        iVar7 = (int)((float)iVar3 * 1.5);
        iVar3 = iVar13;
        if (iVar13 <= iVar7) {
          iVar3 = iVar7;
        }
        iVar11 = 4;
        if ((3 < iVar3) && (iVar11 = iVar7, iVar7 < iVar13)) {
          iVar11 = iVar13;
        }
        uVar5 = UltraHighFreq_StateController1(param_1 + 2,iVar11);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      puVar6 = (uint64_t *)((int64_t)(int)param_1[3] * 0x10 + param_1[2]);
      *puVar6 = CONCAT44(0xffffffff,uVar1);
      puVar6[1] = uVar4;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
    else {
      puVar9 = (uint *)((int64_t)iVar2 * 0x10 + param_1[2]);
      *(uint *)(param_1 + 4) = puVar9[1];
      puVar9[1] = 0xffffffff;
      *puVar9 = *param_2;
      *(uint64_t *)(puVar9 + 2) = *param_3;
    }
    *piVar12 = iVar2;
    *(int *)((int64_t)param_1 + 0x24) = *(int *)((int64_t)param_1 + 0x24) + 1;
    uVar4 = 0;
  }
  return uVar4;
}
uint64_t function_770102(void)
{
  uint uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int iVar6;
  int64_t lVar7;
  uint *puVar8;
  uint uVar9;
  int64_t *unaff_RBX;
  int unaff_EBP;
  int *piVar10;
  int iVar11;
  uint64_t *unaff_R12;
  uint *unaff_R15;
  uint64_t local_var_28;
  if (in_EAX == 0) {
label_770229:
    uVar4 = 0x1c;
  }
  else {
    uVar1 = *unaff_R15;
    lVar7 = (int64_t)(int)(in_EAX - 1U & uVar1);
    piVar10 = (int *)(*unaff_RBX + lVar7 * 4);
    iVar2 = *(int *)(*unaff_RBX + lVar7 * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(unaff_RBX[2] + (int64_t)iVar2 * 0x10) == uVar1) goto label_770229;
        piVar10 = (int *)(unaff_RBX[2] + 4 + (int64_t)iVar2 * 0x10);
        iVar2 = *piVar10;
      } while (iVar2 != -1);
    }
    iVar2 = (int)unaff_RBX[4];
    if (iVar2 == -1) {
      local_var_28 = *unaff_R12;
      iVar2 = (int)unaff_RBX[3];
      iVar11 = iVar2 + 1;
      uVar9 = (int)*(uint *)((int64_t)unaff_RBX + 0x1c) >> 0x1f;
      iVar3 = (*(uint *)((int64_t)unaff_RBX + 0x1c) ^ uVar9) - uVar9;
      if (iVar3 < iVar11) {
        iVar6 = (int)((float)iVar3 * 1.5);
        iVar3 = iVar11;
        if (iVar11 <= iVar6) {
          iVar3 = iVar6;
        }
        if ((unaff_EBP <= iVar3) && (unaff_EBP = iVar6, iVar6 < iVar11)) {
          unaff_EBP = iVar11;
        }
        uVar4 = UltraHighFreq_StateController1(unaff_RBX + 2,unaff_EBP);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
      puVar5 = (uint64_t *)((int64_t)(int)unaff_RBX[3] * 0x10 + unaff_RBX[2]);
      *puVar5 = CONCAT44(0xffffffff,uVar1);
      puVar5[1] = local_var_28;
      *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + 1;
    }
    else {
      puVar8 = (uint *)((int64_t)iVar2 * 0x10 + unaff_RBX[2]);
      *(uint *)(unaff_RBX + 4) = puVar8[1];
      puVar8[1] = 0xffffffff;
      *puVar8 = *unaff_R15;
      *(uint64_t *)(puVar8 + 2) = *unaff_R12;
    }
    *piVar10 = iVar2;
    *(int *)((int64_t)unaff_RBX + 0x24) = *(int *)((int64_t)unaff_RBX + 0x24) + 1;
    uVar4 = 0;
  }
  return uVar4;
}
uint64_t function_77014d(uint64_t param_1,int32_t param_2)
{
  int iVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int iVar4;
  int32_t *puVar5;
  uint uVar6;
  int64_t unaff_RBX;
  int unaff_EBP;
  int *unaff_RDI;
  int iVar7;
  uint64_t *unaff_R12;
  int iVar8;
  int32_t *unaff_R15;
  uint64_t local_var_28;
  iVar8 = *(int *)(unaff_RBX + 0x20);
  if (iVar8 == -1) {
    local_var_28 = *unaff_R12;
    iVar8 = *(int *)(unaff_RBX + 0x18);
    iVar7 = iVar8 + 1;
    uVar6 = (int)*(uint *)(unaff_RBX + 0x1c) >> 0x1f;
    iVar1 = (*(uint *)(unaff_RBX + 0x1c) ^ uVar6) - uVar6;
    if (iVar1 < iVar7) {
      iVar4 = (int)((float)iVar1 * 1.5);
      iVar1 = iVar7;
      if (iVar7 <= iVar4) {
        iVar1 = iVar4;
      }
      if ((unaff_EBP <= iVar1) && (unaff_EBP = iVar4, iVar4 < iVar7)) {
        unaff_EBP = iVar7;
      }
      uVar2 = UltraHighFreq_StateController1(unaff_RBX + 0x10,unaff_EBP);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    puVar3 = (uint64_t *)
             ((int64_t)*(int *)(unaff_RBX + 0x18) * 0x10 + *(int64_t *)(unaff_RBX + 0x10));
    *puVar3 = CONCAT44(0xffffffff,param_2);
    puVar3[1] = local_var_28;
    *(int *)(unaff_RBX + 0x18) = *(int *)(unaff_RBX + 0x18) + 1;
  }
  else {
    puVar5 = (int32_t *)((int64_t)iVar8 * 0x10 + *(int64_t *)(unaff_RBX + 0x10));
    *(int32_t *)(unaff_RBX + 0x20) = puVar5[1];
    puVar5[1] = 0xffffffff;
    *puVar5 = *unaff_R15;
    *(uint64_t *)(puVar5 + 2) = *unaff_R12;
  }
  *unaff_RDI = iVar8;
  *(int *)(unaff_RBX + 0x24) = *(int *)(unaff_RBX + 0x24) + 1;
  return 0;
}
// 函数: void function_770215(void)
void function_770215(void)
{
  return;
}
// 函数: void function_77021a(void)
void function_77021a(void)
{
  return;
}
uint64_t function_770229(void)
{
  return 0x1c;
}