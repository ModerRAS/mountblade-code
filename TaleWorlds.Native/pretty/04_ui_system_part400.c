#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part400.c - 2 个函数
// 函数: void NetworkProtocol_8af30(int64_t param_1,uint64_t param_2,int8_t param_3)
void NetworkProtocol_8af30(int64_t param_1,uint64_t param_2,int8_t param_3)
{
  byte bVar1;
  int iVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int8_t uVar7;
  int8_t stack_array_2b8 [32];
  int64_t *plStack_298;
  int8_t local_var_290;
  int8_t local_var_288;
  int64_t lStack_278;
  int32_t local_var_270;
  uint local_var_26c;
  int aiStack_268 [2];
  int64_t lStack_260;
  int64_t lStack_258;
  uint64_t local_var_250;
  uint64_t local_var_248;
  uint64_t local_var_240;
  uint64_t local_var_238;
  int32_t local_var_230;
  int32_t local_var_22c;
  int32_t stack_array_228 [2];
  uint64_t local_var_220;
  uint64_t stack_array_218 [48];
  uint local_var_98;
  int8_t stack_array_94 [4];
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  uint64_t local_var_84;
  uint64_t local_var_7c;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int64_t lStack_68;
  int64_t lStack_60;
  int64_t lStack_58;
  uint64_t local_var_50;
  int32_t local_var_48;
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2b8;
  if (((((*(uint *)(param_1 + 0x24) >> 1 & 1) == 0) ||
       (iVar2 = NetworkProtocol_673a0(*(uint64_t *)(param_1 + 0x80)), iVar2 != 0)) ||
      (iVar2 = NetworkProtocol_82400(param_1), iVar2 != 0)) ||
     ((*(int64_t *)(param_1 + 0x90) == 0 ||
      (iVar2 = NetworkProtocol_c26e0(*(int64_t *)(param_1 + 0x90),param_2,param_3,
                             *(uint64_t *)(param_1 + 0xad0)), iVar2 != 0)))) goto NetworkProtocol_8b503;
  lVar4 = *(int64_t *)(param_1 + 0xa8);
  if (((*(byte *)(param_1 + 0x24) & 1) == 0) && (*(int64_t *)(lVar4 + 0x48) == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  iVar2 = 0;
  if ((*(char *)(lVar4 + 0x5d) != '\0') || (*(char *)(lVar4 + 100) != '\0')) {
    stack_array_228[0] = 5;
    local_var_220 = Function_f5e8822d(*(uint64_t *)(*(int64_t *)(param_1 + 0x90) + 0x4d0),
                                     *(int32_t *)(*(int64_t *)(param_1 + 0x90) + 0x774));
    lVar4 = *(int64_t *)(param_1 + 0x90);
    iStack_88 = *(int *)(lVar4 + 0x550);
    if (0 < iStack_88) {
      puVar3 = stack_array_218;
      puVar6 = (uint64_t *)(lVar4 + 0x554);
      do {
        uVar5 = puVar6[1];
        iVar2 = iVar2 + 1;
        *puVar3 = *puVar6;
        puVar3[1] = uVar5;
        uVar5 = puVar6[3];
        puVar3[2] = puVar6[2];
        puVar3[3] = uVar5;
        uVar5 = puVar6[5];
        puVar3[4] = puVar6[4];
        puVar3[5] = uVar5;
        puVar3 = puVar3 + 6;
        puVar6 = (uint64_t *)((int64_t)puVar6 + 0x44);
      } while (iVar2 < iStack_88);
    }
    local_var_98 = (uint)(*(char *)(lVar4 + 0x781) != '\0');
    iVar2 = SystemCore_38630(stack_array_94,0,0);
    if (((iVar2 != 0) ||
        (iVar2 = Function_3df55e5d(*(uint64_t *)(param_1 + 0x98),&local_var_270), iVar2 != 0)) ||
       (iVar2 = SystemCore_39890(*(uint64_t *)(param_1 + 0x78),&local_var_240), iVar2 != 0))
    goto NetworkProtocol_8b503;
    local_var_84 = local_var_240;
    local_var_7c = local_var_238;
    lStack_260 = 0;
    local_var_74 = local_var_230;
    local_var_6c = local_var_270;
    local_var_70 = local_var_22c;
    lStack_258 = 0;
    lStack_278 = 0;
    iVar2 = SystemCore_3a0c0(*(uint64_t *)(param_1 + 0x78),&lStack_260,&lStack_258,&lStack_278);
    if (iVar2 != 0) goto NetworkProtocol_8b503;
    lStack_60 = lStack_260 - *(int64_t *)(param_1 + 200);
    lStack_58 = lStack_258 - *(int64_t *)(param_1 + 0xd0);
    lStack_68 = lStack_278 - *(int64_t *)(param_1 + 0xd8);
    *(int64_t *)(param_1 + 0xd8) = lStack_278;
    *(int64_t *)(param_1 + 200) = lStack_260;
    *(int64_t *)(param_1 + 0xd0) = lStack_258;
    iVar2 = SystemCore_3a840(*(uint64_t *)(param_1 + 0x78),aiStack_268,0,0);
    if ((iVar2 != 0) ||
       (iVar2 = SystemCore_39a50(*(uint64_t *)(param_1 + 0x78),&local_var_26c,0), iVar2 != 0))
    goto NetworkProtocol_8b503;
    local_var_50 = 0;
    local_var_48 = 0;
    iStack_90 = (int)(((float)local_var_26c / (float)aiStack_268[0]) * 1e+06);
    iStack_8c = (int)((float)*(int *)(param_1 + 0x2cc) * 1000.0);
    iVar2 = NetworkProtocol_e3830(stack_array_228,&local_var_250);
    if ((iVar2 != 0) ||
       (iVar2 = NetworkProtocol_e30d0(*(uint64_t *)(param_1 + 0xa8),local_var_250), iVar2 != 0))
    goto NetworkProtocol_8b503;
  }
  lVar4 = *(int64_t *)(param_1 + 0xa8);
  if ((*(char *)(lVar4 + 0x5e) != '\0') || (*(char *)(lVar4 + 0x65) != '\0')) {
    Function_afe5536e(stack_array_228);
    iVar2 = NetworkProtocol_e55b0(stack_array_228,param_1,uVar7);
    if ((iVar2 != 0) ||
       (((iVar2 = NetworkProtocol_bc3a0(*(uint64_t *)(param_1 + 0x90),stack_array_228), iVar2 != 0 ||
         (iVar2 = Function_3bb17079(stack_array_228,&local_var_250), iVar2 != 0)) ||
        (iVar2 = NetworkProtocol_e30d0(*(uint64_t *)(param_1 + 0xa8),local_var_250), iVar2 != 0)))) {
      NetworkProtocol_72ef0(&local_var_220);
      goto NetworkProtocol_8b503;
    }
    NetworkProtocol_72ef0(&local_var_220);
    lVar4 = *(int64_t *)(param_1 + 0xa8);
  }
  if ((*(char *)(lVar4 + 0x62) != '\0') || (*(char *)(lVar4 + 0x69) != '\0')) {
    NetworkProtocol_e3be0(stack_array_228);
    iVar2 = NetworkProtocol_e5790(stack_array_228,param_1,uVar7);
    if (((iVar2 != 0) ||
        ((iVar2 = NetworkProtocol_bc650(*(uint64_t *)(param_1 + 0x90),stack_array_228), iVar2 != 0 ||
         (iVar2 = thunk_NetworkProtocol_e3970(stack_array_228,&local_var_250), iVar2 != 0)))) ||
       (iVar2 = NetworkProtocol_e30d0(*(uint64_t *)(param_1 + 0xa8),local_var_250), iVar2 != 0)) {
      NetworkProtocol_74340(stack_array_218);
      goto NetworkProtocol_8b503;
    }
    NetworkProtocol_74340(stack_array_218);
    lVar4 = *(int64_t *)(param_1 + 0xa8);
  }
  if ((*(char *)(lVar4 + 0x60) == '\0') && (*(char *)(lVar4 + 0x67) == '\0')) {
    if (*(int64_t *)(param_1 + 0xb8) != 0) {
      iVar2 = NetworkProtocol_e5eb0();
      if (iVar2 != 0) goto NetworkProtocol_8b503;
      *(uint64_t *)(param_1 + 0xb8) = 0;
    }
  }
  else if (*(int64_t *)(param_1 + 0xb8) == 0) {
    lStack_278 = 0;
    local_var_250 = 0;
    local_var_248 = 0;
    iVar2 = SystemCore_73A200(*(uint64_t *)(param_1 + 0x78),&lStack_278);
    if ((iVar2 != 0) ||
       (plStack_298 = (int64_t *)(param_1 + 0xb8),
       iVar2 = NetworkProtocol_e5d30(*(uint64_t *)(param_1 + 0xa8),&local_var_250,
                             *(uint64_t *)(param_1 + 0x78),lStack_278), iVar2 != 0))
    goto NetworkProtocol_8b503;
  }
  if ((*(char *)(*(int64_t *)(param_1 + 0xa8) + 0x61) == '\0') &&
     (*(char *)(*(int64_t *)(param_1 + 0xa8) + 0x68) == '\0')) {
    if ((*(int64_t *)(param_1 + 0xb0) != 0) &&
       (iVar2 = NetworkProtocol_8e8b0(*(uint64_t *)(param_1 + 0x98)), iVar2 == 0)) {
      puVar3 = *(uint64_t **)(param_1 + 0xb0);
      (**(code **)*puVar3)(puVar3,0);
      plStack_298 = (int64_t *)CONCAT71(plStack_298._1_7_,1);
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar3,&processed_var_5856_ptr,0x17a);
    }
  }
  else if (*(int64_t *)(param_1 + 0xb0) == 0) {
    bVar1 = *(byte *)(param_1 + 0x24);
    local_var_288 = 1;
    local_var_290 = 0;
    plStack_298 = (int64_t *)((uint64_t)plStack_298 & 0xffffffff00000000);
    lVar4 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x38,&processed_var_5856_ptr,0x171);
    if (lVar4 != 0) {
      uVar5 = Function_70129e7c(lVar4,param_1,(bVar1 & 1) << 0x18);
      *(uint64_t *)(param_1 + 0xb0) = uVar5;
      NetworkProtocol_8cee0(*(uint64_t *)(param_1 + 0x98),uVar5,0);
    }
  }
NetworkProtocol_8b503:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_2b8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_8afd0(void)
void NetworkProtocol_8afd0(void)
{
  int iVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int iVar6;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t *local_var_20;
  int64_t *plVar7;
  int64_t local_var_40;
  int32_t local_buffer_48;
  uint local_buffer_4c;
  int local_buffer_50;
  int64_t local_var_58;
  int64_t local_var_60;
  uint64_t local_var_68;
  uint64_t local_var_70;
  uint64_t local_var_78;
  uint64_t local_var_80;
  iVar6 = 0;
  if ((*(char *)(in_RAX + 0x5d) != '\0') || (*(char *)(in_RAX + 100) != '\0')) {
    lVar4 = *(int64_t *)(unaff_RDI + 0x90);
    *(int32_t *)(unaff_RBP + -0x70) = 5;
    uVar2 = Function_f5e8822d(*(uint64_t *)(lVar4 + 0x4d0),*(int32_t *)(lVar4 + 0x774));
    lVar4 = *(int64_t *)(unaff_RDI + 0x90);
    *(uint64_t *)(unaff_RBP + -0x68) = uVar2;
    iVar1 = *(int *)(lVar4 + 0x550);
    *(int *)(unaff_RBP + 0x130) = iVar1;
    if (0 < iVar1) {
      puVar3 = (uint64_t *)(unaff_RBP + -0x60);
      puVar5 = (uint64_t *)(lVar4 + 0x554);
      do {
        uVar2 = puVar5[1];
        iVar6 = iVar6 + 1;
        *puVar3 = *puVar5;
        puVar3[1] = uVar2;
        uVar2 = puVar5[3];
        puVar3[2] = puVar5[2];
        puVar3[3] = uVar2;
        uVar2 = puVar5[5];
        puVar3[4] = puVar5[4];
        puVar3[5] = uVar2;
        puVar3 = puVar3 + 6;
        puVar5 = (uint64_t *)((int64_t)puVar5 + 0x44);
      } while (iVar6 < *(int *)(unaff_RBP + 0x130));
    }
    *(int32_t *)(unaff_RBP + 0x120) = 0;
    *(uint *)(unaff_RBP + 0x120) = (uint)(*(char *)(lVar4 + 0x781) != '\0');
    iVar6 = SystemCore_38630(unaff_RBP + 0x124,0,0);
    if (((iVar6 != 0) ||
        (iVar6 = Function_3df55e5d(*(uint64_t *)(unaff_RDI + 0x98),&local_buffer_00000048), iVar6 != 0
        )) || (iVar6 = SystemCore_39890(*(uint64_t *)(unaff_RDI + 0x78),&local_buffer_00000078), iVar6 != 0
              )) goto LAB_18088b4fb;
    uVar2 = *(uint64_t *)(unaff_RDI + 0x78);
    *(uint64_t *)(unaff_RBP + 0x134) = local_var_78;
    *(uint64_t *)(unaff_RBP + 0x13c) = local_var_80;
    local_var_58 = 0;
    *(int32_t *)(unaff_RBP + 0x144) = *(int32_t *)(unaff_RBP + -0x78);
    *(int32_t *)(unaff_RBP + 0x14c) = local_buffer_48;
    *(int32_t *)(unaff_RBP + 0x148) = *(int32_t *)(unaff_RBP + -0x74);
    local_var_60 = 0;
    local_var_40 = 0;
    iVar6 = SystemCore_3a0c0(uVar2,&local_buffer_00000058,&local_buffer_00000060,&local_buffer_00000040);
    if (iVar6 != 0) goto LAB_18088b4fb;
    *(int64_t *)(unaff_RBP + 0x158) = local_var_58 - *(int64_t *)(unaff_RDI + 200);
    *(int64_t *)(unaff_RBP + 0x160) = local_var_60 - *(int64_t *)(unaff_RDI + 0xd0);
    lVar4 = *(int64_t *)(unaff_RDI + 0xd8);
    *(int64_t *)(unaff_RDI + 0xd8) = local_var_40;
    uVar2 = *(uint64_t *)(unaff_RDI + 0x78);
    *(int64_t *)(unaff_RDI + 200) = local_var_58;
    *(int64_t *)(unaff_RDI + 0xd0) = local_var_60;
    *(int64_t *)(unaff_RBP + 0x150) = local_var_40 - lVar4;
    iVar6 = SystemCore_3a840(uVar2,&local_buffer_00000050,0,0);
    if ((iVar6 != 0) ||
       (iVar6 = SystemCore_39a50(*(uint64_t *)(unaff_RDI + 0x78),(int64_t)&local_buffer_00000048 + 4,0),
       iVar6 != 0)) goto LAB_18088b4fb;
    *(uint64_t *)(unaff_RBP + 0x168) = 0;
    *(int32_t *)(unaff_RBP + 0x170) = 0;
    iVar6 = *(int *)(unaff_RDI + 0x2cc);
    *(int *)(unaff_RBP + 0x128) =
         (int)(((float)local_buffer_4c / (float)local_buffer_50) * 1e+06);
    *(int *)(unaff_RBP + 300) = (int)((float)iVar6 * 1000.0);
    iVar6 = NetworkProtocol_e3830(unaff_RBP + -0x70,&local_buffer_00000068);
    if ((iVar6 != 0) ||
       (iVar6 = NetworkProtocol_e30d0(*(uint64_t *)(unaff_RDI + 0xa8),local_var_68), iVar6 != 0))
    goto LAB_18088b4fb;
  }
  lVar4 = *(int64_t *)(unaff_RDI + 0xa8);
  if ((*(char *)(lVar4 + 0x5e) != '\0') || (*(char *)(lVar4 + 0x65) != '\0')) {
    Function_afe5536e(unaff_RBP + -0x70);
    iVar6 = NetworkProtocol_e55b0(unaff_RBP + -0x70);
    if ((iVar6 != 0) ||
       (((iVar6 = NetworkProtocol_bc3a0(*(uint64_t *)(unaff_RDI + 0x90),unaff_RBP + -0x70), iVar6 != 0 ||
         (iVar6 = Function_3bb17079(unaff_RBP + -0x70,&local_buffer_00000068), iVar6 != 0)) ||
        (iVar6 = NetworkProtocol_e30d0(*(uint64_t *)(unaff_RDI + 0xa8),local_var_68), iVar6 != 0))))
    {
      NetworkProtocol_72ef0(unaff_RBP + -0x68);
      goto LAB_18088b4fb;
    }
    NetworkProtocol_72ef0(unaff_RBP + -0x68);
    lVar4 = *(int64_t *)(unaff_RDI + 0xa8);
  }
  if ((*(char *)(lVar4 + 0x62) != '\0') || (*(char *)(lVar4 + 0x69) != '\0')) {
    NetworkProtocol_e3be0(unaff_RBP + -0x70);
    iVar6 = NetworkProtocol_e5790(unaff_RBP + -0x70);
    if (((iVar6 != 0) ||
        ((iVar6 = NetworkProtocol_bc650(*(uint64_t *)(unaff_RDI + 0x90),unaff_RBP + -0x70), iVar6 != 0 ||
         (iVar6 = thunk_NetworkProtocol_e3970(unaff_RBP + -0x70,&local_buffer_00000068), iVar6 != 0)))) ||
       (iVar6 = NetworkProtocol_e30d0(*(uint64_t *)(unaff_RDI + 0xa8),local_var_68), iVar6 != 0)) {
      NetworkProtocol_74340(unaff_RBP + -0x60);
      goto LAB_18088b4fb;
    }
    NetworkProtocol_74340(unaff_RBP + -0x60);
    lVar4 = *(int64_t *)(unaff_RDI + 0xa8);
  }
  if ((*(char *)(lVar4 + 0x60) == '\0') && (*(char *)(lVar4 + 0x67) == '\0')) {
    if (*(int64_t *)(unaff_RDI + 0xb8) != 0) {
      iVar6 = NetworkProtocol_e5eb0();
      if (iVar6 != 0) goto LAB_18088b4fb;
      *(uint64_t *)(unaff_RDI + 0xb8) = 0;
    }
  }
  else {
    plVar7 = (int64_t *)(unaff_RDI + 0xb8);
    if (*plVar7 == 0) {
      local_var_40 = 0;
      local_var_68 = 0;
      local_var_70 = 0;
      iVar6 = SystemCore_73A200(*(uint64_t *)(unaff_RDI + 0x78),&local_buffer_00000040);
      if ((iVar6 != 0) ||
         (iVar6 = NetworkProtocol_e5d30(*(uint64_t *)(unaff_RDI + 0xa8),&local_buffer_00000068,
                                *(uint64_t *)(unaff_RDI + 0x78),local_var_40,plVar7),
         local_var_20 = plVar7, iVar6 != 0)) goto LAB_18088b4fb;
    }
  }
  if ((*(char *)(*(int64_t *)(unaff_RDI + 0xa8) + 0x61) == '\0') &&
     (*(char *)(*(int64_t *)(unaff_RDI + 0xa8) + 0x68) == '\0')) {
    if ((*(int64_t *)(unaff_RDI + 0xb0) != 0) &&
       (iVar6 = NetworkProtocol_8e8b0(*(uint64_t *)(unaff_RDI + 0x98)), iVar6 == 0)) {
      puVar3 = *(uint64_t **)(unaff_RDI + 0xb0);
      (**(code **)*puVar3)(puVar3,0);
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar3,&processed_var_5856_ptr,0x17a,1);
    }
  }
  else if ((*(int64_t *)(unaff_RDI + 0xb0) == 0) &&
          (lVar4 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x38,&processed_var_5856_ptr,0x171,
                                 (uint64_t)local_var_20 & 0xffffffff00000000), lVar4 != 0)) {
    uVar2 = Function_70129e7c(lVar4);
    *(uint64_t *)(unaff_RDI + 0xb0) = uVar2;
    NetworkProtocol_8cee0(*(uint64_t *)(unaff_RDI + 0x98),uVar2,0);
  }
LAB_18088b4fb:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x180) ^ (uint64_t)&local_buffer_00000000);
}