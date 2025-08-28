n//  的语义化别名
#define SystemCore_PerformanceMonitor
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: RenderingTextureManager */
#define RenderingTextureManager RenderingTextureManager
// 04_ui_system_part402.c - 16 个函数
// 函数: void NetworkProtocol_8c46a(void)
void NetworkProtocol_8c46a(void)
{
  int in_EAX;
  int64_t unaff_R14;
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                *(uint64_t *)(unaff_R14 + 0xc4ec50 + (int64_t)(in_EAX << 5) * 8),&processed_var_6880_ptr,
                0xec,1);
}
uint64_t NetworkProtocol_8c4ba(void)
{
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_R14;
  *(uint64_t *)(unaff_RSI + 0xc4eb24 + unaff_R14) = unaff_RBP;
  *(int *)(unaff_RSI + 0xc4eb20 + unaff_R14) = (int)unaff_RBP;
  *(int *)(unaff_RSI + 0xc4eb2c + unaff_R14) = (int)unaff_RBP;
  return 0;
}
uint64_t NetworkProtocol_8c4ea(void)
{
  return 0x1c;
}
uint64_t NetworkProtocol_8c620(uint *param_1)
{
  int *piVar1;
  int64_t lVar2;
  uint uVar3;
  int64_t lVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint uVar8;
  if (param_1 != (uint *)0x0) {
    uVar3 = *param_1;
    if (uVar3 == 0) {
      return 0;
    }
    uVar6 = (uint64_t)(uVar3 >> 5 & 7);
    lVar2 = uVar6 * 0x28;
    if ((*(int *)(uVar6 * 0x28 + 0x180c4eb24) != 0) &&
       (lVar4 = *(int64_t *)((uint64_t)(uVar3 & 0xff) * 8 + 0x180c4ec50), lVar4 != 0)) {
      uVar6 = (uint64_t)(uVar3 >> 8 & 0x1fff);
      if (*(uint **)(lVar4 + uVar6 * 8) == param_1) {
        uVar5 = (uVar3 >> 0x15) + 1;
        uVar8 = 1;
        if (uVar5 < 0x800) {
          uVar8 = uVar5;
        }
        uVar7 = NetworkProtocol_8c1b0(lVar2 + 0x180c4eb10,lVar4 + uVar6 * 8,uVar3 & 0x1f,uVar6,uVar8);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        piVar1 = (int *)(lVar2 + 0x180c4eb24);
        *piVar1 = *piVar1 + -1;
        *param_1 = 0;
        return 0;
      }
    }
  }
  return 0x1c;
}
uint64_t SystemSecurityProcessor(int64_t *param_1,int64_t param_2)
{
  uint64_t uVar1;
  if (*param_1 != 0) {
    return 0x1c;
  }
  if ((param_2 != 0) && (*(int64_t *)(param_2 + 0x98) != 0)) {
    uVar1 = NetworkProtocol_8dcf0();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *param_1 = param_2;
  }
  return 0;
}
uint64_t NetworkProtocol_8c790(int64_t *param_1)
{
  uint64_t uVar1;
  if (*param_1 != 0) {
    uVar1 = NetworkProtocol_8e6d0(*(uint64_t *)(*param_1 + 0x98));
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *param_1 = 0;
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_8c7c0(int64_t param_1,int64_t param_2,uint64_t *param_3)
{
  int32_t *puVar1;
  uint64_t uVar2;
  if (*(int64_t *)(param_2 + 0x68) != 0) {
    return 0x1c;
  }
  puVar1 = (int32_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x38,&processed_var_7008_ptr,0x24,0,0,1);
  if (puVar1 == (int32_t *)0x0) {
    uVar2 = 0x26;
  }
  else {
    *puVar1 = 0;
    *(uint64_t *)(puVar1 + 2) = 0;
    *(uint64_t *)(puVar1 + 9) = 0x3f800000;
    *(int8_t *)(puVar1 + 0xb) = 0;
    *(uint64_t *)(puVar1 + 0xc) = 0xffffffffffffffff;
    *(uint64_t *)(puVar1 + 6) = 0;
    puVar1[8] = 0;
    *(int32_t **)(param_2 + 0x68) = puVar1;
    *(int64_t *)(puVar1 + 4) = param_2;
    uVar2 = NetworkProtocol_8c060(*(int32_t *)(param_1 + 0x18),puVar1);
    if ((int)uVar2 == 0) {
      *param_3 = puVar1;
    }
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t NetworkProtocol_8c8a0(int *param_1)
{
  int iVar1;
  uint64_t stack_special_x_8;
  uint64_t stack_special_x_10;
  if (param_1 == (int *)0x0) {
    return 0x1c;
  }
  stack_special_x_8 = 0;
  if (*param_1 != 0) {
    iVar1 = Function_810b7364(*param_1,&stack_special_x_10);
    if (iVar1 != 0) goto LAB_18088c94a;
    iVar1 = SystemSecurityProcessor(&stack_special_x_8,stack_special_x_10);
    if (iVar1 != 0) goto LAB_18088c94a;
  }
  iVar1 = NetworkProtocol_8c620(param_1);
  if (iVar1 == 0) {
    if (*(int64_t *)(param_1 + 2) != 0) {
      *(uint64_t *)(*(int64_t *)(param_1 + 2) + 0x48) = 0;
    }
    if (*(int64_t *)(param_1 + 4) != 0) {
      *(uint64_t *)(*(int64_t *)(param_1 + 4) + 0x68) = 0;
    }
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&processed_var_7008_ptr,0x4d,1);
  }
LAB_18088c94a:
// WARNING: Subroutine does not return
  NetworkProtocol_8c790(&stack_special_x_8);
}
uint64_t NetworkProtocol_8c970(int64_t param_1,int32_t *param_2,int32_t *param_3)
{
  int32_t uVar1;
  if (param_2 != (int32_t *)0x0) {
    *param_2 = *(int32_t *)(param_1 + 0x24);
  }
  if (param_3 != (int32_t *)0x0) {
    uVar1 = 0x3f800000;
    if (*(int64_t *)(param_1 + 8) != 0) {
      uVar1 = Function_333e70fc();
    }
    *param_3 = uVar1;
  }
  return 0;
}
// 函数: void NetworkProtocol_8c9b0(int *param_1,int64_t param_2)
void NetworkProtocol_8c9b0(int *param_1,int64_t param_2)
{
  uint64_t stack_special_x_8;
  uint64_t stack_special_x_10;
  stack_special_x_10 = 0;
  if (*param_1 != 0) {
    stack_special_x_8 = 0;
    Function_810b7364(*param_1,&stack_special_x_8);
    SystemSecurityProcessor(&stack_special_x_10,stack_special_x_8);
  }
  *(int64_t *)(param_1 + 2) = param_2;
  if (param_2 == 0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
// WARNING: Subroutine does not return
  NetworkProtocol_8c790(&stack_special_x_10);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_8ca20(int64_t param_1,int64_t param_2,uint64_t *param_3)
{
  int32_t *puVar1;
  uint64_t uVar2;
  if (*(int64_t *)(param_2 + 0x48) != 0) {
    return 0x1c;
  }
  puVar1 = (int32_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&processed_var_7136_ptr,0x1d,0,0,1);
  if (puVar1 == (int32_t *)0x0) {
    uVar2 = 0x26;
  }
  else {
    *puVar1 = 0;
    *(uint64_t *)(puVar1 + 2) = 0;
    puVar1[6] = 0x3f800000;
    *(int32_t **)(param_2 + 0x48) = puVar1;
    *(int64_t *)(puVar1 + 4) = param_2;
    uVar2 = NetworkProtocol_8c060(*(int32_t *)(param_1 + 0x18),puVar1);
    if ((int)uVar2 == 0) {
      *param_3 = puVar1;
    }
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t NetworkProtocol_8cae0(int *param_1)
{
  int iVar1;
  uint64_t stack_special_x_8;
  uint64_t stack_special_x_10;
  if (param_1 == (int *)0x0) {
    return 0x1c;
  }
  stack_special_x_8 = 0;
  if (*param_1 != 0) {
    iVar1 = Function_810b7364(*param_1,&stack_special_x_10);
    if (iVar1 != 0) goto LAB_18088cb8a;
    iVar1 = SystemSecurityProcessor(&stack_special_x_8,stack_special_x_10);
    if (iVar1 != 0) goto LAB_18088cb8a;
  }
  iVar1 = NetworkProtocol_8c620(param_1);
  if (iVar1 == 0) {
    if (*(int64_t *)(param_1 + 2) != 0) {
      *(uint64_t *)(*(int64_t *)(param_1 + 2) + 0x60) = 0;
    }
    if (*(int64_t *)(param_1 + 4) != 0) {
      *(uint64_t *)(*(int64_t *)(param_1 + 4) + 0x48) = 0;
    }
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&processed_var_7136_ptr,0x44,1);
  }
LAB_18088cb8a:
// WARNING: Subroutine does not return
  NetworkProtocol_8c790(&stack_special_x_8);
}
uint64_t NetworkProtocol_8cbb0(int64_t param_1,int32_t *param_2,int32_t *param_3)
{
  int32_t uVar1;
  if (param_2 != (int32_t *)0x0) {
    *param_2 = *(int32_t *)(param_1 + 0x18);
  }
  if (param_3 != (int32_t *)0x0) {
    uVar1 = 0x3f800000;
    if (*(int64_t *)(param_1 + 8) != 0) {
      uVar1 = Function_61a96c95();
    }
    *param_3 = uVar1;
  }
  return 0;
}
int64_t NetworkProtocol_8cbf0(int64_t param_1)
{
  Function_9ac7c927();
  *(uint64_t *)(param_1 + 0x150) = 0;
  *(uint64_t *)(param_1 + 0x158) = 0;
  *(uint64_t *)(param_1 + 0x160) = 0;
  *(uint64_t *)(param_1 + 0x168) = 0;
  *(uint64_t *)(param_1 + 0x170) = 0;
  *(uint64_t *)(param_1 + 0x17c) = 0;
  *(int32_t *)(param_1 + 0x184) = 0;
  *(int8_t *)(param_1 + 0x188) = 0;
  *(int8_t *)(param_1 + 0x189) = 0;
  *(int8_t *)(param_1 + 0x18a) = 0;
  *(uint64_t *)(param_1 + 0x18c) = 0;
  *(uint64_t *)(param_1 + 0x194) = 0;
  *(int32_t *)(param_1 + 0x19c) = 0;
  Function_89780b1a(param_1 + 0x1a0);
  *(uint64_t *)(param_1 + 0x1e0) = 0;
  *(uint64_t *)(param_1 + 0x1e8) = 0;
  *(uint64_t *)(param_1 + 0x1f0) = 0;
  *(uint64_t *)(param_1 + 0x1f8) = 0;
  *(uint64_t *)(param_1 + 0x200) = 0;
  *(uint64_t *)(param_1 + 0x208) = 0;
  *(uint64_t *)(param_1 + 0x210) = 0;
  *(uint64_t *)(param_1 + 0x218) = 0;
  *(uint64_t *)(param_1 + 0x220) = 0;
  *(uint64_t *)(param_1 + 0x228) = 0;
  *(uint64_t *)(param_1 + 0x230) = 0;
  SystemCore_PerformanceMonitor(param_1 + 0x178);
  return param_1;
}
// WARNING: Removing unreachable block (ram,0x000180747e3f)
// WARNING: Removing unreachable block (ram,0x000180747e54)
// WARNING: Removing unreachable block (ram,0x000180747e8a)
// WARNING: Removing unreachable block (ram,0x000180747e92)
// WARNING: Removing unreachable block (ram,0x000180747eef)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint NetworkProtocol_8ccd0(int64_t *param_1)
{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uVar3 = *(uint *)((int64_t)param_1 + 0xc);
  uVar2 = uVar3 ^ (int)uVar3 >> 0x1f;
  if ((int)(uVar2 - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return uVar2;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
// WARNING: Subroutine does not return
    memset(*param_1 + (int64_t)iVar1 * 4,0,(int64_t)-iVar1 << 2);
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar3 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  if ((int)uVar3 < 1) {
    return uVar3;
  }
  if (0 < (int)param_1[1]) {
    return 0x1c;
  }
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = 0;
  *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  return 0;
}
// WARNING: Removing unreachable block (ram,0x00018088e7b3)
// WARNING: Removing unreachable block (ram,0x00018088e7c7)
// WARNING: Removing unreachable block (ram,0x00018088e801)
// WARNING: Removing unreachable block (ram,0x00018088e809)
// WARNING: Removing unreachable block (ram,0x00018088e811)
// WARNING: Removing unreachable block (ram,0x00018088e820)
// WARNING: Removing unreachable block (ram,0x00018088e892)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint NetworkProtocol_8cd80(int64_t *param_1)
{
  int iVar1;
  uint uVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint uVar5;
  uVar5 = *(uint *)((int64_t)param_1 + 0xc);
  uVar2 = uVar5 ^ (int)uVar5 >> 0x1f;
  if ((int)(uVar2 - ((int)uVar5 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return uVar2;
    }
    if ((0 < (int)uVar5) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar5 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    puVar3 = (uint64_t *)((int64_t)iVar1 * 0x30 + *param_1);
    lVar4 = (int64_t)-iVar1;
    if (0 < lVar4) {
      do {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3 = puVar3 + 6;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      uVar5 = *(uint *)((int64_t)param_1 + 0xc);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar5 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  if ((int)uVar5 < 1) {
    return uVar5;
  }
  if (0 < (int)param_1[1]) {
    return 0x1c;
  }
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = 0;
  *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  return 0;
}
// 函数: void NetworkProtocol_8ce50(uint64_t *param_1)
void NetworkProtocol_8ce50(uint64_t *param_1)
{
  int iVar1;
  if (param_1[0x44] != 0) {
    iVar1 = SystemCore_DataHandler(param_1[0x44],0);
    if (iVar1 != 0) goto LAB_18088ce9f;
    param_1[0x44] = 0;
  }
  if (param_1[0x45] != 0) {
    iVar1 = SystemCore_688f0();
    if (iVar1 == 0) {
      param_1[0x45] = 0;
    }
  }
LAB_18088ce9f:
  NetworkProtocol_8cd80(param_1 + 0x42);
  SystemAnalyzer(param_1 + 0x3f);
  SystemAnalyzer(param_1 + 0x3d);
  *param_1 = &processed_var_8408_ptr;
  return;
}
uint64_t NetworkProtocol_8cee0(int64_t param_1,uint64_t param_2,char param_3)
{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  uint uVar4;
  if ((param_3 != '\0') && (*(int64_t *)(param_1 + 0x208) != 0)) {
    return 0x46;
  }
  uVar2 = NetworkProtocol_97d90(param_2);
  if ((int)uVar2 == 0) {
    uVar4 = (int)*(uint *)(param_1 + 0x204) >> 0x1f;
    iVar3 = *(int *)(param_1 + 0x200) + 1;
    iVar1 = (*(uint *)(param_1 + 0x204) ^ uVar4) - uVar4;
    if (iVar1 < iVar3) {
      iVar1 = (int)((float)iVar1 * 1.5);
      if (iVar3 <= iVar1) {
        iVar3 = iVar1;
      }
      if (iVar3 < 8) {
        iVar3 = 8;
      }
      uVar2 = RenderingTextureManager0((int64_t *)(param_1 + 0x1f8),iVar3);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    *(uint64_t *)(*(int64_t *)(param_1 + 0x1f8) + (int64_t)*(int *)(param_1 + 0x200) * 8) =
         param_2;
    *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + 1;
    if (param_3 != '\0') {
      *(uint64_t *)(param_1 + 0x208) = param_2;
    }
    uVar2 = 0;
  }
  return uVar2;
}
uint64_t NetworkProtocol_8cf2e(void)
{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  uint uVar4;
  char unaff_BPL;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t local_var_38;
  uVar4 = (int)*(uint *)(unaff_RSI + 0x204) >> 0x1f;
  iVar3 = *(int *)(unaff_RSI + 0x200) + 1;
  iVar1 = (*(uint *)(unaff_RSI + 0x204) ^ uVar4) - uVar4;
  if (iVar1 < iVar3) {
    iVar1 = (int)((float)iVar1 * 1.5);
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    if (iVar3 < 8) {
      iVar3 = 8;
    }
    uVar2 = RenderingTextureManager0((int64_t *)(unaff_RSI + 0x1f8),iVar3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  *(uint64_t *)(*(int64_t *)(unaff_RSI + 0x1f8) + (int64_t)*(int *)(unaff_RSI + 0x200) * 8) =
       local_var_38;
  *(int *)(unaff_RSI + 0x200) = *(int *)(unaff_RSI + 0x200) + 1;
  if (unaff_BPL != '\0') {
    *(uint64_t *)(unaff_RSI + 0x208) = unaff_RDI;
  }
  return 0;
}
// 函数: void NetworkProtocol_8cfa3(void)
void NetworkProtocol_8cfa3(void)
{
  return;
}
int NetworkProtocol_8cfc0(int64_t param_1)
{
  uint64_t *puVar1;
  int iVar2;
  puVar1 = (uint64_t *)((int64_t)*(int *)(param_1 + 0x17c) * 8 + 0x180c4f450);
  RenderingSystem_TextureManager(puVar1);
  SystemCore_72cd0(param_1 + 0x1a0);
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  NetworkProtocol_76180(*(uint64_t *)(param_1 + 0x158),1,0);
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + -1;
  iVar2 = Function_70e0dce9(*(uint64_t *)(param_1 + 0x158));
  if (iVar2 == 0) {
    iVar2 = NetworkProtocol_8d0c0(param_1);
    if (iVar2 == 0) {
      iVar2 = NetworkProtocol_8af30(*(uint64_t *)(param_1 + 0x158),param_1 + 0x1a0,1);
    }
  }
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  NetworkProtocol_76180(*(uint64_t *)(param_1 + 0x158),2);
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + -1;
  LOCK();
  *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
  UNLOCK();
  SystemCore_72cf0(param_1 + 0x1a0,0x5f);
  *puVar1 = 0;
  return iVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_8d0c0(int64_t param_1)
void NetworkProtocol_8d0c0(int64_t param_1)
{
  int iVar1;
  int *piVar2;
  int8_t stack_array_138 [48];
  int aiStack_108 [2];
  uint64_t local_var_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_138;
  SystemMemoryAllocator(**(uint64_t **)(param_1 + 0x1e0));
  local_var_f8 = 0;
  local_var_f0 = 0;
  local_var_e8 = 0;
  local_var_e0 = 0;
  local_var_100 = 0;
  SystemSecurityProcessor(&local_var_100,*(uint64_t *)(param_1 + 0x158));
  aiStack_108[0] = 0;
  NetworkProtocol_e66f0(*(uint64_t *)(param_1 + 0x1e0),&local_var_f8,aiStack_108);
  piVar2 = (int *)Function_361d47ec(*(uint64_t *)(param_1 + 0x158));
  iVar1 = SystemFunction_0001808e64e0(*(uint64_t *)(param_1 + 0x1e0));
  piVar2[2] = iVar1;
  *piVar2 = (int)((float)aiStack_108[0] * 0.9 + (float)*piVar2 * 0.1);
  iVar1 = piVar2[1];
  if (piVar2[1] < aiStack_108[0]) {
    iVar1 = aiStack_108[0];
  }
  piVar2[1] = iVar1;
// WARNING: Subroutine does not return
  NetworkProtocol_8c790(&local_var_100);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_8d2be(void)
void NetworkProtocol_8d2be(void)
{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  int64_t unaff_RDI;
  int unaff_R13D;
  int64_t local_var_60;
  int iStack0000000000000068;
  int iStack000000000000006c;
  iVar3 = unaff_R13D;
  do {
    iVar2 = NetworkProtocol_96140(*(uint64_t *)(*(int64_t *)(unaff_RDI + 0x1e8) + (int64_t)iVar3 * 8));
    if (iVar2 != 0) break;
    if ((*(uint *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x1e8) + (int64_t)iVar3 * 8) + 0x6c) >>
         0x1b & 1) != 0) {
      iVar2 = iStack0000000000000068 + 1;
      iVar3 = iStack000000000000006c;
      if (iStack000000000000006c < 0) {
        iVar3 = -iStack000000000000006c;
      }
      if (iVar3 < iVar2) {
        iVar3 = iStack000000000000006c;
        if (iStack000000000000006c < 0) {
          iVar3 = -iStack000000000000006c;
        }
        iVar4 = (int)((float)iVar3 * 1.5);
        iVar3 = iVar2;
        if (iVar2 <= iVar4) {
          iVar3 = iVar4;
        }
        if (iVar3 < 0x10) {
          iVar4 = 0x10;
        }
        else if (iVar4 < iVar2) {
          iVar4 = iVar2;
        }
        iVar2 = SystemCore_Initializer(&local_buffer_00000060,iVar4);
        if (iVar2 != 0) break;
      }
      *(int *)(local_var_60 + (int64_t)iStack0000000000000068 * 4) = unaff_ESI;
      iStack0000000000000068 = iStack0000000000000068 + 1;
      iVar2 = unaff_R13D;
    }
    iVar3 = unaff_ESI + 1;
    unaff_ESI = iVar3;
  } while (iVar3 < *(int *)(unaff_RDI + 0x1f0));
  *(int *)(unaff_RDI + 0x180) = *(int *)(unaff_RDI + 0x180) + -1;
  if (iVar2 != 0) {
    NetworkProtocol_8ccd0(&local_buffer_00000060);
// WARNING: Subroutine does not return
    NetworkProtocol_8c790(&local_buffer_00000030);
  }
  if (iStack0000000000000068 + -1 < 0) {
    NetworkProtocol_8ccd0(&local_buffer_00000060);
// WARNING: Subroutine does not return
    NetworkProtocol_8c790(&local_buffer_00000030);
  }
  uVar1 = *(uint64_t *)
           (*(int64_t *)(unaff_RDI + 0x1e8) +
           (int64_t)*(int *)(local_var_60 + (int64_t)(iStack0000000000000068 + -1) * 4) * 8);
  NetworkProtocol_94fb0(uVar1);
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar1,&processed_var_7392_ptr,0x2ca,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_8d388(void)
void NetworkProtocol_8d388(void)
{
  uint64_t uVar1;
  int unaff_EBX;
  int64_t unaff_RDI;
  int64_t local_var_60;
  int local_var_68;
  *(int *)(unaff_RDI + 0x180) = *(int *)(unaff_RDI + 0x180) + -1;
  if (unaff_EBX != 0) {
    NetworkProtocol_8ccd0(&local_buffer_00000060);
// WARNING: Subroutine does not return
    NetworkProtocol_8c790(&local_buffer_00000030);
  }
  if (-1 < local_var_68 + -1) {
    uVar1 = *(uint64_t *)
             (*(int64_t *)(unaff_RDI + 0x1e8) +
             (int64_t)*(int *)(local_var_60 + (int64_t)(local_var_68 + -1) * 4) * 8);
    NetworkProtocol_94fb0(uVar1);
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar1,&processed_var_7392_ptr,0x2ca,1);
  }
  NetworkProtocol_8ccd0(&local_buffer_00000060);
// WARNING: Subroutine does not return
  NetworkProtocol_8c790(&local_buffer_00000030);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_8d510(int64_t param_1)
void NetworkProtocol_8d510(int64_t param_1)
{
  uint64_t *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int8_t stack_array_158 [32];
  int8_t *plocal_var_138;
  int8_t stack_array_128 [256];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  uVar3 = *(uint *)(*(int64_t *)(param_1 + 0x158) + 0x24);
  while (((uVar3 >> 1 & 1) == 0 && (*(char *)(param_1 + 0x189) == '\0'))) {
    UIComponent_EventHandler(5);
    uVar3 = *(uint *)(*(int64_t *)(param_1 + 0x158) + 0x24);
  }
  cVar2 = *(char *)(param_1 + 0x189);
  do {
    if (cVar2 != '\0') {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_158);
    }
    *(int8_t *)(param_1 + 0x18a) = 1;
    SystemCore_68940(*(uint64_t *)(param_1 + 0x170));
    if (*(char *)(param_1 + 0x189) == '\0') {
      puVar1 = (uint64_t *)((int64_t)*(int *)(param_1 + 0x17c) * 8 + 0x180c4f450);
      RenderingSystem_TextureManager(puVar1);
      SystemCore_72cd0(param_1 + 0x1a0);
      *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
      NetworkProtocol_76180(*(uint64_t *)(param_1 + 0x158),1);
      *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + -1;
      iVar4 = Function_70e0dce9(*(uint64_t *)(param_1 + 0x158));
      if ((iVar4 == 0) && (iVar4 = NetworkProtocol_8d0c0(param_1), iVar4 == 0)) {
        iVar4 = NetworkProtocol_8af30(*(uint64_t *)(param_1 + 0x158),param_1 + 0x1a0);
      }
      *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
      NetworkProtocol_76180(*(uint64_t *)(param_1 + 0x158),2);
      *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + -1;
      LOCK();
      *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
      UNLOCK();
      SystemCore_72cf0(param_1 + 0x1a0,0x5f);
      *puVar1 = 0;
      LOCK();
      *(int *)(param_1 + 0x198) = iVar4;
      UNLOCK();
      if ((iVar4 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
        stack_array_128[0] = 0;
        plocal_var_138 = stack_array_128;
// WARNING: Subroutine does not return
        RenderingSystem_ShaderProcessor(iVar4,0xb,0,&system_config_ptr);
      }
    }
    cVar2 = *(char *)(param_1 + 0x189);
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_8d575(void)
void NetworkProtocol_8d575(void)
{
  uint64_t *puVar1;
  int iVar2;
  int64_t unaff_RDI;
  int8_t local_var_30;
  uint64_t local_var_130;
  do {
    *(int8_t *)(unaff_RDI + 0x18a) = 1;
    SystemCore_68940(*(uint64_t *)(unaff_RDI + 0x170));
    if (*(char *)(unaff_RDI + 0x189) == '\0') {
      puVar1 = (uint64_t *)((int64_t)*(int *)(unaff_RDI + 0x17c) * 8 + 0x180c4f450);
      RenderingSystem_TextureManager(puVar1);
      SystemCore_72cd0(unaff_RDI + 0x1a0);
      *(int *)(unaff_RDI + 0x180) = *(int *)(unaff_RDI + 0x180) + 1;
      NetworkProtocol_76180(*(uint64_t *)(unaff_RDI + 0x158),1);
      *(int *)(unaff_RDI + 0x180) = *(int *)(unaff_RDI + 0x180) + -1;
      iVar2 = Function_70e0dce9(*(uint64_t *)(unaff_RDI + 0x158));
      if (iVar2 == 0) {
        iVar2 = NetworkProtocol_8d0c0();
        if (iVar2 == 0) {
          iVar2 = NetworkProtocol_8af30(*(uint64_t *)(unaff_RDI + 0x158),unaff_RDI + 0x1a0);
        }
      }
      *(int *)(unaff_RDI + 0x180) = *(int *)(unaff_RDI + 0x180) + 1;
      NetworkProtocol_76180(*(uint64_t *)(unaff_RDI + 0x158),2);
      *(int *)(unaff_RDI + 0x180) = *(int *)(unaff_RDI + 0x180) + -1;
      LOCK();
      *(int *)(unaff_RDI + 0x19c) = *(int *)(unaff_RDI + 0x19c) + 1;
      UNLOCK();
      SystemCore_72cf0(unaff_RDI + 0x1a0,0x5f);
      *puVar1 = 0;
      LOCK();
      *(int *)(unaff_RDI + 0x198) = iVar2;
      UNLOCK();
      if ((iVar2 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
        local_var_30 = 0;
// WARNING: Subroutine does not return
        RenderingSystem_ShaderProcessor(iVar2,0xb,0,&system_config_ptr,&local_buffer_00000030);
      }
    }
    if (*(char *)(unaff_RDI + 0x189) != '\0') {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_130 ^ (uint64_t)&local_buffer_00000000);
    }
  } while( true );
}
// 函数: void NetworkProtocol_8d6fc(void)
void NetworkProtocol_8d6fc(void)
{
  uint64_t local_var_130;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_130 ^ (uint64_t)&local_buffer_00000000);
}
uint64_t SystemResourceHandler(int64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  int64_t lStackX_8;
  if ((*(int *)(param_1 + 0x180) != 0) || (*(int *)(param_1 + 0x184) != 0)) {
    lStackX_8 = 0;
    RenderingSystem_TextureManager(&lStackX_8);
    if (lStackX_8 == *(int64_t *)((int64_t)*(int *)(param_1 + 0x17c) * 8 + 0x180c4f450)) {
      uVar1 = NetworkProtocol_8dd60(param_1,param_2);
      if ((int)uVar1 == 0) {
        return 0;
      }
      return uVar1;
    }
  }
  *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 0xfU & 0xfffffff0;
  uVar1 = Function_02e8d123(*(uint64_t *)(param_1 + 0x1e0));
  if ((int)uVar1 == 0) {
    return 0;
  }
  return uVar1;
}
uint64_t RenderingSystem_TextureManager(int64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  int64_t lStackX_8;
  if (*(int *)(param_1 + 0x200) == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x180) != 0) || (*(int *)(param_1 + 0x184) != 0)) {
    lStackX_8 = 0;
    RenderingSystem_TextureManager(&lStackX_8);
    if (lStackX_8 == *(int64_t *)((int64_t)*(int *)(param_1 + 0x17c) * 8 + 0x180c4f450)) {
      uVar1 = NetworkProtocol_8dd60(param_1,param_2);
      goto LAB_18088d83c;
    }
  }
  *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 0xfU & 0xfffffff0;
  uVar1 = Function_02e8d123(*(uint64_t *)(param_1 + 0x1e0));
LAB_18088d83c:
  if ((int)uVar1 == 0) {
    return 0;
  }
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_8d850(int64_t param_1)
void NetworkProtocol_8d850(int64_t param_1)
{
  uint64_t uVar1;
  int iVar2;
  *(int8_t *)(param_1 + 0x189) = 1;
  iVar2 = SystemCore_48e20(*(uint64_t *)(*(int64_t *)(param_1 + 0x158) + 0x78),0,0,0);
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x188) != '\0') {
      iVar2 = SystemConfigManager(*(uint64_t *)(param_1 + 0x170));
      if (iVar2 != 0) {
        return;
      }
      iVar2 = SystemCore_67ad0(param_1);
      if (iVar2 != 0) {
        return;
      }
      iVar2 = SystemCore_688f0(*(uint64_t *)(param_1 + 0x170));
      if (iVar2 != 0) {
        return;
      }
      *(uint64_t *)(param_1 + 0x170) = 0;
    }
    iVar2 = SystemCore_DataHandler(*(uint64_t *)(param_1 + 0x160),0);
    if (iVar2 == 0) {
      *(uint64_t *)(param_1 + 0x160) = 0;
      iVar2 = SystemCore_DataHandler(*(uint64_t *)(param_1 + 0x168),0);
      if (iVar2 == 0) {
        uVar1 = *(uint64_t *)(param_1 + 0x1e0);
        *(uint64_t *)(param_1 + 0x168) = 0;
        *(uint64_t *)(param_1 + 0x158) = 0;
        NetworkProtocol_e6410(uVar1);
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar1,&processed_var_7392_ptr,0x83,1);
      }
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_8d880(void)
void NetworkProtocol_8d880(void)
{
  uint64_t uVar1;
  int iVar2;
  int64_t unaff_RDI;
  if (*(char *)(unaff_RDI + 0x188) != '\0') {
    iVar2 = SystemConfigManager(*(uint64_t *)(unaff_RDI + 0x170));
    if (iVar2 != 0) {
      return;
    }
    iVar2 = SystemCore_67ad0();
    if (iVar2 != 0) {
      return;
    }
    iVar2 = SystemCore_688f0(*(uint64_t *)(unaff_RDI + 0x170));
    if (iVar2 != 0) {
      return;
    }
    *(uint64_t *)(unaff_RDI + 0x170) = 0;
  }
  iVar2 = SystemCore_DataHandler(*(uint64_t *)(unaff_RDI + 0x160),0);
  if (iVar2 == 0) {
    *(uint64_t *)(unaff_RDI + 0x160) = 0;
    iVar2 = SystemCore_DataHandler(*(uint64_t *)(unaff_RDI + 0x168),0);
    if (iVar2 == 0) {
      uVar1 = *(uint64_t *)(unaff_RDI + 0x1e0);
      *(uint64_t *)(unaff_RDI + 0x168) = 0;
      *(uint64_t *)(unaff_RDI + 0x158) = 0;
      NetworkProtocol_e6410(uVar1);
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar1,&processed_var_7392_ptr,0x83,1);
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_8d902(void)
void NetworkProtocol_8d902(void)
{
  uint64_t uVar1;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  uVar1 = *(uint64_t *)(unaff_RDI + 0x1e0);
  *(uint64_t *)(unaff_RDI + 0x168) = unaff_RSI;
  *(uint64_t *)(unaff_RDI + 0x158) = unaff_RSI;
  NetworkProtocol_e6410(uVar1);
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar1,&processed_var_7392_ptr,0x83,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_8d90e(void)
void NetworkProtocol_8d90e(void)
{
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  *(uint64_t *)(unaff_RDI + 0x168) = unaff_RSI;
  *(uint64_t *)(unaff_RDI + 0x158) = unaff_RSI;
  NetworkProtocol_e6410();
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_8d9d0(void)
void NetworkProtocol_8d9d0(void)
{
  uint64_t uVar1;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  if ((int)unaff_RSI < *(int *)(unaff_RDI + 0x1f0)) {
    uVar1 = *(uint64_t *)(unaff_RSI + *(int64_t *)(unaff_RDI + 0x1e8));
    NetworkProtocol_94fb0(uVar1);
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar1,&processed_var_7392_ptr,0x1e7,1);
  }
  SystemAnalyzer(unaff_RDI + 0x1e8);
  return;
}
// 函数: void NetworkProtocol_8da44(void)
void NetworkProtocol_8da44(void)
{
  return;
}