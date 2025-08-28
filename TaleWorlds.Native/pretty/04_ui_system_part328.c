#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part328.c - 17 个函数
// 函数: void NetworkProtocol_4b760(int64_t param_1,int64_t param_2)
void NetworkProtocol_4b760(int64_t param_1,int64_t param_2)
{
  int iVar1;
  int64_t lVar2;
  int8_t stack_array_68 [32];
  byte abStack_48 [8];
  int8_t stack_array_40 [40];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_68;
  if (1.1920929e-07 < *(float *)(param_2 + 0x94)) {
    *(int8_t *)(param_1 + 8) = 1;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_68);
  }
  lVar2 = (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x288))
                    (*(int64_t **)(param_1 + 0x10),param_2 + 0xd8,1);
  if (lVar2 == 0) {
// WARNING: Subroutine does not return
    SystemStateProcessor(param_2 + 0xd8,stack_array_40);
  }
  abStack_48[0] = 0;
  iVar1 = NetworkProtocol_479d0(lVar2,*(uint64_t *)(param_1 + 0x10),abStack_48);
  if (iVar1 == 0) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | abStack_48[0];
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_68);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4b830(int64_t param_1,int64_t param_2)
void NetworkProtocol_4b830(int64_t param_1,int64_t param_2)
{
  int32_t *puVar1;
  int64_t *plVar2;
  int32_t *puVar3;
  int8_t stack_array_a8 [32];
  uint local_var_88;
  uint local_var_80;
  uint local_var_78;
  uint local_var_70;
  uint local_var_68;
  uint local_var_60;
  uint local_var_58;
  uint local_var_50;
  uint local_var_48;
  uint local_var_40;
  int8_t stack_array_38 [40];
  uint64_t local_var_10;
  local_var_10 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_a8;
  *(bool *)(param_1 + 8) = *(int *)(param_2 + 0xb0) != -1;
  puVar3 = *(int32_t **)(param_2 + 0xd8);
  while (((puVar1 = *(int32_t **)(param_2 + 0xd8), puVar1 <= puVar3 &&
          (puVar3 < puVar1 + (int64_t)*(int *)(param_2 + 0xe0) * 5)) &&
         (*(char *)(param_1 + 8) != '\0'))) {
    plVar2 = (int64_t *)
             (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x128))
                       (*(int64_t **)(param_1 + 0x10),puVar3,
                        CONCAT71((int7)((uint64_t)puVar1 >> 8),1));
    if (plVar2 == (int64_t *)0x0) {
      local_var_40 = (uint)*(byte *)((int64_t)puVar3 + 0xf);
      local_var_48 = (uint)*(byte *)((int64_t)puVar3 + 0xe);
      local_var_50 = (uint)*(byte *)((int64_t)puVar3 + 0xd);
      local_var_58 = (uint)*(byte *)(puVar3 + 3);
      local_var_60 = (uint)*(byte *)((int64_t)puVar3 + 0xb);
      local_var_68 = (uint)*(byte *)((int64_t)puVar3 + 10);
      local_var_70 = (uint)*(byte *)((int64_t)puVar3 + 9);
      local_var_78 = (uint)*(byte *)(puVar3 + 2);
      local_var_80 = (uint)*(ushort *)((int64_t)puVar3 + 6);
      local_var_88 = (uint)*(ushort *)(puVar3 + 1);
// WARNING: Subroutine does not return
      SystemValidationProcessor(stack_array_38,0x27,&processed_var_8960_ptr,*puVar3);
    }
    (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
    puVar3 = puVar3 + 5;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_10 ^ (uint64_t)stack_array_a8);
}
// 函数: void NetworkProtocol_4b92d(void)
void NetworkProtocol_4b92d(void)
{
// WARNING: Subroutine does not return
  SystemValidationProcessor();
}
// 函数: void NetworkProtocol_4b955(void)
void NetworkProtocol_4b955(void)
{
  uint64_t local_var_98;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_98 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4b990(int64_t *param_1,int64_t param_2,int64_t *param_3)
void NetworkProtocol_4b990(int64_t *param_1,int64_t param_2,int64_t *param_3)
{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  int32_t uVar11;
  char cVar12;
  int iVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t *plVar16;
  int32_t *puVar17;
  int32_t *puVar18;
  int8_t stack_array_c8 [32];
  uint local_var_a8;
  uint local_var_a0;
  uint local_var_98;
  uint local_var_90;
  uint local_var_88;
  uint local_var_80;
  uint local_var_78;
  uint local_var_70;
  uint local_var_68;
  uint local_var_60;
  int8_t stack_array_58 [40];
  uint64_t local_var_30;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  (**(code **)(*param_1 + 0x48))();
  cVar12 = (**(code **)(*param_1 + 0x50))(param_1);
  if (cVar12 != '\0') {
    for (puVar18 = *(int32_t **)(param_2 + 0x80);
        (*(int32_t **)(param_2 + 0x80) <= puVar18 &&
        (puVar18 < *(int32_t **)(param_2 + 0x80) + (int64_t)*(int *)(param_2 + 0x88) * 4));
        puVar18 = puVar18 + 4) {
      lVar14 = (**(code **)(*param_3 + 0x270))(param_3,puVar18,1);
      if (lVar14 == 0) {
        bVar2 = *(byte *)((int64_t)puVar18 + 0xf);
        bVar3 = *(byte *)((int64_t)puVar18 + 0xe);
        bVar4 = *(byte *)((int64_t)puVar18 + 0xd);
        bVar5 = *(byte *)(puVar18 + 3);
        bVar1 = *(byte *)((int64_t)puVar18 + 0xb);
        bVar6 = *(byte *)((int64_t)puVar18 + 10);
        bVar7 = *(byte *)((int64_t)puVar18 + 9);
        bVar8 = *(byte *)(puVar18 + 2);
        uVar9 = *(ushort *)((int64_t)puVar18 + 6);
        uVar10 = *(ushort *)(puVar18 + 1);
        uVar11 = *puVar18;
LAB_18084bb6f:
        local_var_60 = (uint)bVar2;
        local_var_68 = (uint)bVar3;
        local_var_70 = (uint)bVar4;
        local_var_78 = (uint)bVar5;
        local_var_80 = (uint)bVar1;
        local_var_88 = (uint)bVar6;
        local_var_90 = (uint)bVar7;
        local_var_a8 = (uint)uVar10;
        local_var_a0 = (uint)uVar9;
        local_var_98 = (uint)bVar8;
// WARNING: Subroutine does not return
        SystemValidationProcessor(stack_array_58,0x27,&processed_var_8960_ptr,uVar11);
      }
      lVar15 = (**(code **)(*param_3 + 0x278))(param_3,lVar14 + 0x38,1);
      if (lVar15 == 0) {
// WARNING: Subroutine does not return
        SystemStateProcessor(lVar14 + 0x38,stack_array_58);
      }
      for (puVar17 = *(int32_t **)(lVar14 + 0x58);
          (*(int32_t **)(lVar14 + 0x58) <= puVar17 &&
          (puVar17 < *(int32_t **)(lVar14 + 0x58) + (int64_t)*(int *)(lVar14 + 0x60) * 4));
          puVar17 = puVar17 + 4) {
        plVar16 = (int64_t *)(**(code **)(*param_3 + 0x128))(param_3,puVar17,1);
        if (plVar16 == (int64_t *)0x0) {
          bVar1 = *(byte *)((int64_t)puVar17 + 0xb);
          bVar2 = *(byte *)((int64_t)puVar17 + 0xf);
          bVar3 = *(byte *)((int64_t)puVar17 + 0xe);
          bVar4 = *(byte *)((int64_t)puVar17 + 0xd);
          bVar5 = *(byte *)(puVar17 + 3);
          bVar6 = *(byte *)((int64_t)puVar17 + 10);
          bVar7 = *(byte *)((int64_t)puVar17 + 9);
          bVar8 = *(byte *)(puVar17 + 2);
          uVar9 = *(ushort *)((int64_t)puVar17 + 6);
          uVar10 = *(ushort *)(puVar17 + 1);
          uVar11 = *puVar17;
          goto LAB_18084bb6f;
        }
        iVar13 = (**(code **)(*plVar16 + 0x28))(plVar16,param_1);
        if ((iVar13 != 0) || (cVar12 = (**(code **)(*param_1 + 0x50))(param_1), cVar12 == '\0'))
        goto LAB_18084bb9a;
      }
    }
  }
LAB_18084bb9a:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4bbd0(int64_t param_1,int64_t param_2)
void NetworkProtocol_4bbd0(int64_t param_1,int64_t param_2)
{
  int iVar1;
  int64_t *plVar2;
  int32_t *puVar3;
  int8_t stack_array_b8 [32];
  uint local_var_98;
  uint local_var_90;
  uint local_var_88;
  uint local_var_80;
  uint local_var_78;
  uint local_var_70;
  uint local_var_68;
  uint local_var_60;
  uint local_var_58;
  uint local_var_50;
  int8_t stack_array_48 [40];
  uint64_t local_var_20;
  local_var_20 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  if (*(float *)(param_2 + 0x94) <= 1.1920929e-07) {
    for (puVar3 = *(int32_t **)(param_2 + 0xd8);
        (*(int32_t **)(param_2 + 0xd8) <= puVar3 &&
        (puVar3 < *(int32_t **)(param_2 + 0xd8) + (int64_t)*(int *)(param_2 + 0xe0) * 5));
        puVar3 = puVar3 + 5) {
      plVar2 = (int64_t *)
               (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x128))
                         (*(int64_t **)(param_1 + 0x10),puVar3,1);
      if (plVar2 == (int64_t *)0x0) {
        local_var_50 = (uint)*(byte *)((int64_t)puVar3 + 0xf);
        local_var_58 = (uint)*(byte *)((int64_t)puVar3 + 0xe);
        local_var_60 = (uint)*(byte *)((int64_t)puVar3 + 0xd);
        local_var_68 = (uint)*(byte *)(puVar3 + 3);
        local_var_70 = (uint)*(byte *)((int64_t)puVar3 + 0xb);
        local_var_78 = (uint)*(byte *)((int64_t)puVar3 + 10);
        local_var_80 = (uint)*(byte *)((int64_t)puVar3 + 9);
        local_var_88 = (uint)*(byte *)(puVar3 + 2);
        local_var_90 = (uint)*(ushort *)((int64_t)puVar3 + 6);
        local_var_98 = (uint)*(ushort *)(puVar3 + 1);
// WARNING: Subroutine does not return
        SystemValidationProcessor(stack_array_48,0x27,&processed_var_8960_ptr,*puVar3);
      }
      iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
      if (iVar1 != 0) break;
    }
  }
  else {
    *(int8_t *)(param_1 + 8) = 1;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_20 ^ (uint64_t)stack_array_b8);
}
// 函数: void NetworkProtocol_4bc0e(uint64_t param_1,int64_t param_2)
void NetworkProtocol_4bc0e(uint64_t param_1,int64_t param_2)
{
  int iVar1;
  int64_t *plVar2;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int32_t *puVar3;
  uint64_t local_var_98;
  for (puVar3 = *(int32_t **)(param_2 + 0xd8);
      (*(int32_t **)(unaff_RBX + 0xd8) <= puVar3 &&
      (puVar3 < *(int32_t **)(unaff_RBX + 0xd8) + (int64_t)*(int *)(unaff_RBX + 0xe0) * 5));
      puVar3 = puVar3 + 5) {
    plVar2 = (int64_t *)
             (**(code **)(**(int64_t **)(unaff_RDI + 0x10) + 0x128))
                       (*(int64_t **)(unaff_RDI + 0x10),puVar3,1);
    if (plVar2 == (int64_t *)0x0) {
// WARNING: Subroutine does not return
      SystemValidationProcessor(&local_buffer_00000070,0x27,&processed_var_8960_ptr,*puVar3,*(int16_t *)(puVar3 + 1));
    }
    iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (iVar1 != 0) break;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_98 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_4bcd6(void)
void NetworkProtocol_4bcd6(void)
{
  int64_t unaff_R14;
  uint local_buffer_28;
  local_buffer_28 = (uint)*(ushort *)(unaff_R14 + 6);
// WARNING: Subroutine does not return
  SystemValidationProcessor();
}
// 函数: void NetworkProtocol_4bd18(void)
void NetworkProtocol_4bd18(void)
{
  uint64_t local_var_98;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_98 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_4bd22(void)
void NetworkProtocol_4bd22(void)
{
  uint64_t local_var_98;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_98 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4be00(int64_t *param_1,int64_t param_2,int64_t *param_3)
void NetworkProtocol_4be00(int64_t *param_1,int64_t param_2,int64_t *param_3)
{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  int8_t stack_array_c8 [32];
  uint local_var_a8;
  uint local_var_a0;
  uint local_var_98;
  uint local_var_90;
  uint local_var_88;
  uint local_var_80;
  uint local_var_78;
  uint local_var_70;
  uint local_var_68;
  uint local_var_60;
  int8_t stack_array_58 [40];
  uint64_t local_var_30;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  (**(code **)(*param_1 + 0x40))();
  cVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  if (cVar1 != '\0') {
    lVar3 = (**(code **)(*param_3 + 0x2f0))(param_3,param_2 + 0x30,1);
    if (lVar3 == 0) {
// WARNING: Subroutine does not return
      SystemStateProcessor(param_2 + 0x30,stack_array_58);
    }
    for (uVar5 = *(uint64_t *)(lVar3 + 0x38);
        (*(uint64_t *)(lVar3 + 0x38) <= uVar5 &&
        (uVar5 < *(uint64_t *)(lVar3 + 0x38) + (int64_t)*(int *)(lVar3 + 0x40) * 0x18));
        uVar5 = uVar5 + 0x18) {
      plVar4 = (int64_t *)(**(code **)(*param_3 + 0x128))(param_3,uVar5,1);
      if (plVar4 == (int64_t *)0x0) {
// WARNING: Subroutine does not return
        SystemStateProcessor(uVar5,stack_array_58);
      }
      iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4,param_1);
      if ((iVar2 != 0) || (cVar1 = (**(code **)(*param_1 + 0x50))(param_1), cVar1 == '\0'))
      goto LAB_18084bff4;
    }
    cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
    if (cVar1 != '\0') {
      for (puVar6 = *(int32_t **)(lVar3 + 0x48);
          (*(int32_t **)(lVar3 + 0x48) <= puVar6 &&
          (puVar6 < *(int32_t **)(lVar3 + 0x48) + (int64_t)*(int *)(lVar3 + 0x50) * 6));
          puVar6 = puVar6 + 6) {
        plVar4 = (int64_t *)(**(code **)(*param_3 + 0x128))(param_3,puVar6,1);
        if (plVar4 == (int64_t *)0x0) {
          local_var_60 = (uint)*(byte *)((int64_t)puVar6 + 0xf);
          local_var_68 = (uint)*(byte *)((int64_t)puVar6 + 0xe);
          local_var_70 = (uint)*(byte *)((int64_t)puVar6 + 0xd);
          local_var_78 = (uint)*(byte *)(puVar6 + 3);
          local_var_80 = (uint)*(byte *)((int64_t)puVar6 + 0xb);
          local_var_88 = (uint)*(byte *)((int64_t)puVar6 + 10);
          local_var_90 = (uint)*(byte *)((int64_t)puVar6 + 9);
          local_var_98 = (uint)*(byte *)(puVar6 + 2);
          local_var_a0 = (uint)*(ushort *)((int64_t)puVar6 + 6);
          local_var_a8 = (uint)*(ushort *)(puVar6 + 1);
// WARNING: Subroutine does not return
          SystemValidationProcessor(stack_array_58,0x27,&processed_var_8960_ptr,*puVar6);
        }
        iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4,param_1);
        if ((iVar2 != 0) || (cVar1 = (**(code **)(*param_1 + 0x50))(param_1), cVar1 == '\0')) break;
      }
    }
  }
LAB_18084bff4:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_c8);
}
// 函数: void NetworkProtocol_4bfc9(void)
void NetworkProtocol_4bfc9(void)
{
// WARNING: Subroutine does not return
  SystemValidationProcessor();
}
// 函数: void NetworkProtocol_4bff2(void)
void NetworkProtocol_4bff2(void)
{
  uint64_t local_var_98;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_98 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void thunk_NetworkProtocol_48e50(char *param_1,uint64_t *param_2)
{
  char *pcVar1;
  char cVar2;
  int8_t uVar3;
  int16_t uVar4;
  int iVar5;
  char *pcVar6;
  int8_t *puVar7;
  int8_t *puVar8;
  int64_t lVar9;
  int8_t *puVar10;
  int8_t stack_array_b8 [32];
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  int32_t local_var_8c;
  int8_t *aplocal_var_88 [5];
  int8_t local_var_60;
  int8_t stack_array_5f [8];
  int8_t local_var_57;
  int8_t stack_array_56 [4];
  int8_t local_var_52;
  int8_t stack_array_51 [4];
  int8_t local_var_4d;
  int8_t stack_array_4c [4];
  int8_t local_var_48;
  int8_t stack_array_47 [10];
  int8_t stack_array_3d [5];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  if (param_2 != (uint64_t *)0x0) {
    if ((((param_1 == (char *)0x0) || (iVar5 = Function_055df91e(), iVar5 != 0x26)) ||
        (*param_1 != '{')) || (param_1[0x25] != '}')) {
NetworkProtocol_48ff1:
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      Function_30e71e27(&local_var_60,param_1,0x27);
      local_var_57 = 0;
      aplocal_var_88[0] = stack_array_5f;
      lVar9 = 0;
      local_var_52 = 0;
      aplocal_var_88[1] = stack_array_56;
      local_var_4d = 0;
      aplocal_var_88[2] = stack_array_51;
      aplocal_var_88[3] = stack_array_4c;
      aplocal_var_88[4] = stack_array_47;
      local_var_48 = 0;
      stack_array_3d[2] = 0;
      do {
        pcVar6 = aplocal_var_88[lVar9];
        cVar2 = *pcVar6;
        while (cVar2 != '\0') {
          if (((9 < (byte)(cVar2 - 0x30U)) && (5 < (byte)(cVar2 + 0xbfU))) &&
             (5 < (byte)(cVar2 + 0x9fU))) goto NetworkProtocol_48ff1;
          pcVar1 = pcVar6 + 1;
          pcVar6 = pcVar6 + 1;
          cVar2 = *pcVar1;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < 5);
      local_var_98 = Function_2dfde275(stack_array_5f);
      uVar4 = Function_2dfde275(stack_array_56);
      local_var_94 = CONCAT22(local_var_94._2_2_,uVar4);
      uVar4 = Function_2dfde275(stack_array_51);
      local_var_94 = CONCAT22(uVar4,(int16_t)local_var_94);
      uVar4 = Function_2dfde275(stack_array_4c);
      puVar8 = (int8_t *)((int64_t)&local_var_8c + 3);
      local_var_90 = CONCAT31(CONCAT21(local_var_90._2_2_,(char)uVar4),(char)((ushort)uVar4 >> 8));
      puVar7 = stack_array_3d;
      iVar5 = 5;
      puVar10 = stack_array_3d;
      do {
        uVar3 = Function_2dfde275(puVar10);
        puVar10 = puVar10 + -2;
        *puVar8 = uVar3;
        iVar5 = iVar5 + -1;
        *puVar7 = 0;
        puVar8 = puVar8 + -1;
        puVar7 = puVar7 + -2;
      } while (-1 < iVar5);
      *(int32_t *)param_2 = local_var_98;
      *(int32_t *)((int64_t)param_2 + 4) = local_var_94;
      *(int32_t *)(param_2 + 1) = local_var_90;
      *(int32_t *)((int64_t)param_2 + 0xc) = local_var_8c;
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_b8);
}
uint64_t * NetworkProtocol_4c050(uint64_t *param_1,uint64_t param_2,byte param_3)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  NetworkProtocol_b0200();
  *param_1 = &ui_system_data_1408_ptr;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = &ui_system_data_1456_ptr;
  *(int32_t *)(param_1 + 10) = 0;
  *(int32_t *)((int64_t)param_1 + 0x54) = 0xffffffff;
  puVar2 = (uint64_t *)SystemDataFlowProcessor();
  uVar1 = puVar2[1];
  param_1[0xb] = *puVar2;
  param_1[0xc] = uVar1;
  *param_1 = &ui_system_data_1472_ptr;
  param_1[9] = &ui_system_data_1520_ptr;
  param_1[0xd] = 0;
  *(int16_t *)((int64_t)param_1 + 0x74) = 0;
  *(int32_t *)(param_1 + 0xe) = 0x3f800000;
  param_1[0xf] = 0xffffffffffffffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(uint *)((int64_t)param_1 + 0xc4) = (uint)param_3;
  *(int32_t *)((int64_t)param_1 + 0xd4) = 0;
  *(int32_t *)(param_1 + 0x19) = 0xffffffff;
  *(uint64_t *)((int64_t)param_1 + 0xcc) = 0x7fffffff;
  return param_1;
}
// WARNING: Removing unreachable block (ram,0x00018084c49f)
// WARNING: Removing unreachable block (ram,0x00018084c4b4)
// WARNING: Removing unreachable block (ram,0x00018084c4ea)
// WARNING: Removing unreachable block (ram,0x00018084c4f2)
// WARNING: Removing unreachable block (ram,0x00018084c4fa)
// WARNING: Removing unreachable block (ram,0x00018084c500)
// WARNING: Removing unreachable block (ram,0x00018084c55b)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint MemoryManager_Allocator(int64_t *param_1)
{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  uint uVar5;
  uVar5 = *(uint *)((int64_t)param_1 + 0xc);
  uVar2 = uVar5 ^ (int)uVar5 >> 0x1f;
  if ((int)(uVar2 - ((int)uVar5 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return uVar2;
    }
    if ((0 < (int)uVar5) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar5 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    puVar4 = (int32_t *)(*param_1 + (int64_t)iVar1 * 4);
    if (iVar1 < 0) {
      uVar3 = (uint64_t)(uint)-iVar1;
      do {
        if (puVar4 != (int32_t *)0x0) {
          *puVar4 = 0;
        }
        puVar4 = puVar4 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
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
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = 0;
  *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  return 0;
}
// WARNING: Removing unreachable block (ram,0x00018074803f)
// WARNING: Removing unreachable block (ram,0x000180748050)
// WARNING: Removing unreachable block (ram,0x000180748086)
// WARNING: Removing unreachable block (ram,0x00018074808e)
// WARNING: Removing unreachable block (ram,0x0001807480eb)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint UltraHighFreq_InputHandler1(int64_t *param_1)
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
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
// WARNING: Subroutine does not return
    memset((int64_t)iVar1 * 0x10 + *param_1,0,(int64_t)-iVar1 << 4);
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
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = 0;
  *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_4c2d0(uint64_t *param_1)
void NetworkProtocol_4c2d0(uint64_t *param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  *param_1 = &ui_system_data_1472_ptr;
  param_1[9] = &ui_system_data_1520_ptr;
  if (param_1[0xd] != 0) {
    NetworkProtocol_8c8a0();
  }
  MemoryManager_Allocator(param_1 + 0x16);
  MemoryManager_Allocator(param_1 + 0x14);
  UltraHighFreq_InputHandler1(param_1 + 0x12);
  UltraHighFreq_InputHandler1(param_1 + 0x10);
  UltraHighFreq_InputHandler1(param_1 + 7);
  *param_1 = &processed_var_936_ptr;
  plVar1 = param_1 + 4;
  plVar2 = (int64_t *)*plVar1;
  if ((plVar2 == plVar1) && ((int64_t *)param_1[5] == plVar1)) {
    Function_1c5dac80(plVar1);
    *param_1 = &ui_system_data_1544_ptr;
    *(int32_t *)(param_1 + 1) = 0xdeadf00d;
    return;
  }
  plVar3 = (int64_t *)0x0;
  if (plVar2 != plVar1) {
    plVar3 = plVar2;
  }
  *(int32_t *)((int64_t)plVar3 + 0x44) = 0xffffffff;
  UltraHighFreq_InputHandler1(plVar3 + 4);
  UltraHighFreq_InputHandler1(plVar3 + 2);
  *(int64_t *)plVar3[1] = *plVar3;
  *(int64_t *)(*plVar3 + 8) = plVar3[1];
  plVar3[1] = (int64_t)plVar3;
  *plVar3 = (int64_t)plVar3;
  *(int64_t **)plVar3[1] = plVar3;
  *(int64_t *)(*plVar3 + 8) = plVar3[1];
  plVar3[1] = (int64_t)plVar3;
  *plVar3 = (int64_t)plVar3;
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar3,&processed_var_976_ptr,0x30,1);
}
uint64_t NetworkProtocol_4c350(uint64_t param_1,uint64_t param_2)
{
  NetworkProtocol_4c2d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0xd8);
  }
  return param_1;
}
int64_t NetworkProtocol_4c390(int64_t param_1,uint64_t param_2)
{
  UltraHighFreq_InputHandler1(param_1 + 0x38);
  NetworkProtocol_b02a0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x48);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_4c470(int64_t *param_1,int param_2)
{
  int iVar1;
  int64_t lVar2;
  int32_t *puVar3;
  int64_t lVar4;
  int32_t *puVar5;
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar3 = (int32_t *)0x0;
  if (param_2 != 0) {
    if (param_2 * 4 - 1U < 0x3fffffff) {
      puVar3 = (int32_t *)
               SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 4,&processed_var_8432_ptr,0xf4
                             ,0,0,1);
      if (puVar3 != (int32_t *)0x0) {
        iVar1 = (int)param_1[1];
        lVar4 = (int64_t)iVar1;
        if ((iVar1 != 0) && (lVar2 = *param_1, 0 < iVar1)) {
          puVar5 = puVar3;
          do {
            *puVar5 = *(int32_t *)((lVar2 - (int64_t)puVar3) + (int64_t)puVar5);
            puVar5 = puVar5 + 1;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        goto LAB_18084c510;
      }
    }
    return 0x26;
  }
LAB_18084c510:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = (int64_t)puVar3;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_4c494(uint64_t param_1,int param_2)
{
  int iVar1;
  int64_t lVar2;
  int32_t *puVar3;
  int64_t lVar4;
  int32_t *puVar5;
  int64_t *unaff_RBX;
  int unaff_EDI;
  puVar3 = (int32_t *)0x0;
  if (unaff_EDI == 0) {
LAB_18084c510:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = (int64_t)puVar3;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 4 - 1U < 0x3fffffff) {
    puVar3 = (int32_t *)
             SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 4,&processed_var_8432_ptr,0xf4,0
                          );
    if (puVar3 != (int32_t *)0x0) {
      iVar1 = (int)unaff_RBX[1];
      lVar4 = (int64_t)iVar1;
      if ((iVar1 != 0) && (lVar2 = *unaff_RBX, 0 < iVar1)) {
        puVar5 = puVar3;
        do {
          *puVar5 = *(int32_t *)((lVar2 - (int64_t)puVar3) + (int64_t)puVar5);
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      goto LAB_18084c510;
    }
  }
  return 0x26;
}
uint64_t NetworkProtocol_4c55b(void)
{
  return 0x26;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_EventDispatcher(int64_t *param_1)
void UISystem_EventDispatcher(int64_t *param_1)
{
  int iVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint uVar8;
  uVar8 = *(uint *)((int64_t)param_1 + 0xc);
  if ((int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return;
    }
    if ((0 < (int)uVar8) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
    uVar8 = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    lVar7 = (int64_t)-iVar1;
    if (iVar1 < 0) {
      lVar6 = *param_1 + 0x14 + (int64_t)iVar1 * 0x18;
      do {
        puVar5 = (int32_t *)SystemDataFlowProcessor();
        uVar2 = puVar5[1];
        uVar3 = puVar5[2];
        uVar4 = puVar5[3];
        *(int32_t *)(lVar6 + -0x14) = *puVar5;
        *(int32_t *)(lVar6 + -0x10) = uVar2;
        *(int32_t *)(lVar6 + -0xc) = uVar3;
        *(int32_t *)(lVar6 + -8) = uVar4;
        *(uint64_t *)(lVar6 + -4) = 0;
        lVar7 = lVar7 + -1;
        lVar6 = lVar6 + 0x18;
      } while (lVar7 != 0);
      uVar8 = *(uint *)((int64_t)param_1 + 0xc);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  if (0 < (int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f))) {
    RenderingSystem_TextureManager(param_1,0);
  }
  return;
}
// 函数: void NetworkProtocol_4c612(int32_t param_1,int param_2,uint param_3)
void NetworkProtocol_4c612(int32_t param_1,int param_2,uint param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t in_RAX;
  int32_t *puVar4;
  int64_t in_RCX;
  int64_t lVar5;
  uint64_t unaff_RBP;
  int64_t lVar6;
  int64_t unaff_RDI;
  lVar6 = (int64_t)param_2;
  if (0 < param_2) {
    lVar5 = in_RAX + 0x14 + in_RCX * 8;
    do {
      puVar4 = (int32_t *)SystemDataFlowProcessor();
      param_1 = *puVar4;
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
      *(int32_t *)(lVar5 + -0x14) = param_1;
      *(int32_t *)(lVar5 + -0x10) = uVar1;
      *(int32_t *)(lVar5 + -0xc) = uVar2;
      *(int32_t *)(lVar5 + -8) = uVar3;
      *(uint64_t *)(lVar5 + -4) = unaff_RBP;
      lVar6 = lVar6 + -1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 != 0);
    param_3 = *(uint *)(unaff_RDI + 0xc);
  }
  *(int *)(unaff_RDI + 8) = (int)unaff_RBP;
  if (0 < (int)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f))) {
    RenderingSystem_TextureManager(param_1,0);
  }
  return;
}
// 函数: void NetworkProtocol_4c61e(int64_t param_1)
void NetworkProtocol_4c61e(int64_t param_1)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t in_RAX;
  int32_t *puVar5;
  uint uVar6;
  int64_t lVar7;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  lVar7 = in_RAX + 0x14 + param_1 * 8;
  do {
    puVar5 = (int32_t *)SystemDataFlowProcessor();
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *(int32_t *)(lVar7 + -0x14) = uVar1;
    *(int32_t *)(lVar7 + -0x10) = uVar2;
    *(int32_t *)(lVar7 + -0xc) = uVar3;
    *(int32_t *)(lVar7 + -8) = uVar4;
    *(uint64_t *)(lVar7 + -4) = unaff_RBP;
    unaff_RSI = unaff_RSI + -1;
    lVar7 = lVar7 + 0x18;
  } while (unaff_RSI != 0);
  *(int *)(unaff_RDI + 8) = (int)unaff_RBP;
  uVar6 = (int)*(uint *)(unaff_RDI + 0xc) >> 0x1f;
  if (0 < (int)((*(uint *)(unaff_RDI + 0xc) ^ uVar6) - uVar6)) {
    RenderingSystem_TextureManager(uVar1,0);
  }
  return;
}