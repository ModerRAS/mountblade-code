#include "SystemDataAdvancedHandler_definition.h"
#define SystemInitializer System_Initializer2  // 系统初始化器
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 05_networking_part070_sub001.c - 13 个函数
#include "TaleWorlds.Native.Split.h"
// 05_networking_part070.c - 13 个函数
// 函数: void function_879232(void)
void function_879232(void)
{
  uint *puVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int64_t unaff_RBP;
  uint64_t uVar15;
  int64_t *unaff_RSI;
  uint uVar16;
  uint64_t uVar17;
  int64_t *unaff_RDI;
  int unaff_R12D;
  uint uVar18;
  int32_t *puVar19;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t *unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t uVar20;
  int local_buffer_70;
  do {
    uVar20 = SystemInitializer(&system_ptr_ea98);
    if (network_system_config == -1) {
      network_system_config = unaff_R12D;
      uVar20 = SystemCore_StateController(&system_ptr_ea98);
    }
    do {
      if ((int)unaff_RDI[0x14] != network_system_config) {
        for (uVar13 = unaff_RDI[0x10];
            (uVar14 = unaff_RDI[0x10], uVar14 <= uVar13 &&
            (uVar13 < uVar14 + (int64_t)(int)unaff_RDI[0x11] * 0x18)); uVar13 = uVar13 + 0x18) {
          lVar11 = (**(code **)(*unaff_R15 + 0x128))(uVar20,uVar13,CONCAT71((int7)(uVar14 >> 8),1));
          if (lVar11 != 0) {
            *(int32_t *)(lVar11 + 0xb0) = 0xffffffff;
          }
          uVar20 = extraout_XMM0_Da_00;
        }
      }
      if ((unaff_RDI == unaff_RSI) || (unaff_RDI = (int64_t *)*unaff_RDI, unaff_RDI == unaff_RSI))
      {
        lVar11 = *(int64_t *)(unaff_RBP + -0x41);
        do {
          local_buffer_70 = local_buffer_70 + 1;
          if ((local_buffer_70 < 0) || (*(int *)(lVar11 + 0xd8) <= local_buffer_70)) {
            uVar18 = *(uint *)(unaff_RBP + -0x61);
            uVar13 = 0;
            if (((uVar18 < 0x55) && (iVar8 = function_868f00(function_8780d0,lVar11), iVar8 != 0)) ||
               (((uVar18 < 0x56 && (iVar8 = function_877970(lVar11), iVar8 != 0)) ||
                ((uVar18 < 0x57 && (iVar8 = function_868f00(function_876d70,lVar11), iVar8 != 0))))))
            goto LAB_180879203;
            uVar20 = 0;
            uVar14 = uVar13;
            if (uVar18 < 0x58) goto LAB_180878cc1;
            goto LAB_180878d26;
          }
          lVar12 = *(int64_t *)(*(int64_t *)(lVar11 + 0xd0) + (int64_t)local_buffer_70 * 8);
          for (uVar13 = *(uint64_t *)(lVar12 + 0x48);
              (uVar14 = *(uint64_t *)(lVar12 + 0x48), uVar14 <= uVar13 &&
              (uVar13 < uVar14 + (int64_t)*(int *)(lVar12 + 0x50) * 0x18)); uVar13 = uVar13 + 0x18)
          {
            lVar10 = (**(code **)(*unaff_R15 + 0x128))
                               (uVar20,uVar13,CONCAT71((int7)(uVar14 >> 8),1));
            if (lVar10 != 0) {
              *(int32_t *)(lVar10 + 0xb0) = 0xffffffff;
            }
            uVar20 = extraout_XMM0_Da;
          }
          unaff_RSI = (int64_t *)(lVar12 + 0x68);
          unaff_RDI = *(int64_t **)(lVar12 + 0x68);
        } while (unaff_RDI == unaff_RSI);
        unaff_R12D = 0;
        unaff_R14 = 0x48;
        unaff_R13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8);
      }
    } while (network_system_config <= *(int *)(unaff_R14 + unaff_R13));
  } while( true );
LAB_180878cc1:
  iVar8 = (int)uVar14;
  uVar14 = uVar13;
  if ((iVar8 < 0) || (*(int *)(lVar11 + 0x158) <= iVar8)) goto LAB_180878cf5;
  iVar9 = function_879270(*(uint64_t *)(*(int64_t *)(lVar11 + 0x150) + (int64_t)iVar8 * 8));
  if (iVar9 != 0) goto LAB_180879203;
  uVar14 = (uint64_t)(iVar8 + 1);
  goto LAB_180878cc1;
LAB_180878cf5:
  iVar8 = (int)uVar14;
  if ((iVar8 < 0) || (*(int *)(lVar11 + 0x168) <= iVar8)) goto LAB_180878d26;
  iVar9 = function_879270(*(uint64_t *)(*(int64_t *)(lVar11 + 0x160) + (int64_t)iVar8 * 8));
  if (iVar9 != 0) goto LAB_180879203;
  uVar14 = (uint64_t)(iVar8 + 1);
  goto LAB_180878cf5;
LAB_180878d26:
  uVar14 = uVar13;
  if (uVar18 < 0x59) {
    while ((iVar8 = (int)uVar14, -1 < iVar8 && (iVar8 < *(int *)(lVar11 + 0x88)))) {
      lVar12 = *(int64_t *)(*(int64_t *)(lVar11 + 0x80) + (int64_t)iVar8 * 8);
      if (*(int *)(lVar12 + 0x60) == 0x1e) {
        *(int8_t *)(lVar12 + 0x40) = 1;
      }
      uVar14 = (uint64_t)(iVar8 + 1);
    }
  }
  if ((0x5a < uVar18) ||
     ((((iVar8 = function_868e40(RenderingSystem_TextureHandler0,lVar11), iVar8 == 0 &&
        (iVar8 = function_868de0(RenderingSystem_TextureHandler0,lVar11), iVar8 == 0)) &&
       (iVar8 = function_868fc0(RenderingSystem_TextureHandler0,lVar11), iVar8 == 0)) &&
      (iVar8 = function_868ea0(RenderingSystem_TextureHandler0,lVar11), iVar8 == 0)))) {
    if (uVar18 < 0x61) {
      uVar14 = uVar13;
      uVar15 = uVar13;
      uVar17 = uVar13;
      if (0 < *(int *)(lVar11 + 0x1a8)) {
        do {
          cVar7 = function_8c84b0(*(uint64_t *)(uVar14 + *(int64_t *)(lVar11 + 0x1a0)));
          if (cVar7 == '\0') {
            puVar1 = (uint *)(*(int64_t *)(*(int64_t *)(lVar11 + 0x1a0) + uVar14) + 0xf8);
            *puVar1 = *puVar1 | 1;
            uVar15 = (uint64_t)((int)uVar15 + 1);
          }
          uVar20 = (int32_t)uVar15;
          uVar16 = (int)uVar17 + 1;
          uVar14 = uVar14 + 8;
          uVar17 = (uint64_t)uVar16;
        } while ((int)uVar16 < *(int *)(lVar11 + 0x1a8));
      }
      *(int32_t *)(lVar11 + 0x2f4) = uVar20;
    }
    if ((uVar18 < 100) && (uVar14 = uVar13, uVar15 = uVar13, 0 < *(int *)(lVar11 + 0x1a8))) {
      do {
        lVar12 = *(int64_t *)(uVar15 + *(int64_t *)(lVar11 + 0x1a0));
        if (((*(int *)(lVar12 + 0x60) != 0) ||
            ((*(int *)(lVar12 + 100) != 0 || (*(int *)(lVar12 + 0x68) != 0)))) ||
           (*(int *)(lVar12 + 0x6c) != 0)) {
          *(uint *)(lVar12 + 0xf8) = *(uint *)(lVar12 + 0xf8) | 2;
        }
        uVar16 = (int)uVar14 + 1;
        uVar14 = (uint64_t)uVar16;
        uVar15 = uVar15 + 8;
      } while ((int)uVar16 < *(int *)(lVar11 + 0x1a8));
    }
    if ((0x6a < uVar18) || (iVar8 = function_8df350(lVar11), iVar8 == 0)) {
      if (uVar18 < 0x6c) {
        iVar8 = function_8698b0(function_879510,*(uint64_t *)(unaff_RBP + -0x49),lVar11);
        if (iVar8 != 0) goto LAB_180879203;
      }
      if (((((0x6d < uVar18) || (iVar8 = function_8df2b0(lVar11), iVar8 == 0)) &&
           ((0x6e < uVar18 || (iVar8 = function_8deff0(lVar11), iVar8 == 0)))) &&
          (((0x71 < uVar18 || (iVar8 = function_8df570(lVar11), iVar8 == 0)) &&
           ((0x73 < uVar18 || (iVar8 = function_868f00(function_876d90,lVar11), iVar8 == 0)))))) &&
         ((0x74 < uVar18 || (iVar8 = function_868f00(&processed_var_6608_ptr,lVar11), iVar8 == 0)))) {
        if (uVar18 < 99) {
          iVar8 = function_868d20(RenderingSystem_TextureHandler,lVar11);
          if ((((iVar8 != 0) || (iVar8 = function_869080(RenderingSystem_TextureHandler,lVar11), iVar8 != 0)) ||
              (iVar8 = function_869020(RenderingSystem_TextureHandler,lVar11), iVar8 != 0)) ||
             (iVar8 = function_868f60(RenderingSystem_TextureHandler,lVar11), uVar14 = uVar13, iVar8 != 0))
          goto LAB_180879203;
          while ((iVar8 = (int)uVar14, -1 < iVar8 && (iVar8 < *(int *)(lVar11 + 0x108)))) {
            uVar2 = *(uint64_t *)(*(int64_t *)(lVar11 + 0x100) + (int64_t)iVar8 * 8);
            function_8b0660(uVar2,5);
            function_8b0660(uVar2,6);
            function_8b0660(uVar2,7);
            uVar14 = (uint64_t)(iVar8 + 1);
          }
        }
        if (((0x85 < uVar18) || (iVar8 = function_868d80(function_877f00,lVar11), iVar8 == 0)) &&
           ((0x75 < uVar18 || (iVar8 = function_868d80(function_877810,lVar11), iVar8 == 0)))) {
          if (uVar18 < 0x82) {
            while ((iVar8 = (int)uVar13, -1 < iVar8 && (iVar8 < *(int *)(lVar11 + 0x1c8)))) {
              lVar11 = *(int64_t *)(*(int64_t *)(lVar11 + 0x1c0) + (int64_t)iVar8 * 8);
              puVar19 = *(int32_t **)(lVar11 + 0x48);
              *(int64_t *)(unaff_RBP + -0x51) = lVar11;
              while( true ) {
                puVar3 = *(int32_t **)(lVar11 + 0x48);
                *(int32_t **)(unaff_RBP + -0x59) = puVar19;
                if ((puVar19 < puVar3) ||
                   (puVar3 + (int64_t)*(int *)(lVar11 + 0x50) * 7 <= puVar19)) break;
                uVar20 = *puVar19;
                uVar4 = puVar19[1];
                uVar5 = puVar19[2];
                uVar6 = puVar19[3];
                lVar12 = *unaff_R15;
                *(int32_t *)(unaff_RBP + -0x79) = uVar20;
                *(int32_t *)(unaff_RBP + -0x75) = uVar4;
                *(int32_t *)(unaff_RBP + -0x71) = uVar5;
                *(int32_t *)(unaff_RBP + -0x6d) = uVar6;
                lVar12 = (**(code **)(lVar12 + 0x128))
                                   (uVar20,unaff_RBP + -0x79,
                                    CONCAT71((int7)((uint64_t)puVar19 >> 8),1));
                *(int64_t *)(unaff_RBP + -0x49) = lVar12;
                if (lVar12 == 0) {
// WARNING: Subroutine does not return
                  SystemDataValidator(unaff_RBP + -0x39,0x27,&processed_var_8960_ptr,
                                *(int32_t *)(unaff_RBP + -0x79),
                                *(int16_t *)(unaff_RBP + -0x75));
                }
                function_8b06c0(lVar12 + 200,*(int64_t *)(unaff_RBP + -0x51) + 0x38,puVar19[4],
                              puVar19[5],*(int8_t *)(puVar19 + 6));
                puVar19 = (int32_t *)(*(int64_t *)(unaff_RBP + -0x59) + 0x1c);
              }
              function_874670((uint64_t *)(lVar11 + 0x48),puVar3,puVar19);
              lVar11 = *(int64_t *)(unaff_RBP + -0x41);
              uVar13 = (uint64_t)(iVar8 + 1);
            }
            uVar18 = *(uint *)(unaff_RBP + -0x61);
          }
          iVar8 = 0;
          if (((0x88 < uVar18) || (iVar9 = function_868d80(function_876eb0,lVar11), iVar9 == 0)) &&
             (uVar18 < 0x8d)) {
            for (; (-1 < iVar8 && (iVar8 < *(int *)(lVar11 + 0x1b8))); iVar8 = iVar8 + 1) {
              lVar12 = *(int64_t *)(*(int64_t *)(lVar11 + 0x1b0) + (int64_t)iVar8 * 8);
              if (*(int *)(lVar12 + 0x68) != 0) {
                puVar1 = (uint *)(lVar12 + 0x34);
                *puVar1 = *puVar1 | 0x20;
              }
            }
          }
        }
      }
    }
  }
LAB_180879203:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x11) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_879270(int64_t param_1,int64_t *param_2)
void function_879270(int64_t param_1,int64_t *param_2)
{
  int32_t *puVar1;
  int64_t lVar2;
  int32_t *puVar3;
  int8_t stack_array_d8 [32];
  uint local_var_b8;
  uint local_var_b0;
  uint local_var_a8;
  uint local_var_a0;
  uint local_var_98;
  uint local_var_90;
  uint local_var_88;
  uint local_var_80;
  uint local_var_78;
  uint local_var_70;
  int8_t stack_array_68 [40];
  uint64_t local_var_40;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_d8;
  puVar3 = *(int32_t **)(param_1 + 0xd8);
  while( true ) {
    puVar1 = *(int32_t **)(param_1 + 0xd8);
    if ((puVar3 < puVar1) || (puVar1 + (int64_t)*(int *)(param_1 + 0xe0) * 5 <= puVar3))
    goto LAB_180879390;
    lVar2 = (**(code **)(*param_2 + 0x128))
                      (param_2,puVar3,CONCAT71((int7)((uint64_t)puVar1 >> 8),1));
    if (lVar2 == 0) {
      local_var_70 = (uint)*(byte *)((int64_t)puVar3 + 0xf);
      local_var_78 = (uint)*(byte *)((int64_t)puVar3 + 0xe);
      local_var_80 = (uint)*(byte *)((int64_t)puVar3 + 0xd);
      local_var_88 = (uint)*(byte *)(puVar3 + 3);
      local_var_90 = (uint)*(byte *)((int64_t)puVar3 + 0xb);
      local_var_98 = (uint)*(byte *)((int64_t)puVar3 + 10);
      local_var_a0 = (uint)*(byte *)((int64_t)puVar3 + 9);
      local_var_a8 = (uint)*(byte *)(puVar3 + 2);
      local_var_b0 = (uint)*(ushort *)((int64_t)puVar3 + 6);
      local_var_b8 = (uint)*(ushort *)(puVar3 + 1);
// WARNING: Subroutine does not return
      SystemDataValidator(stack_array_68,0x27,&processed_var_8960_ptr,*puVar3);
    }
    if (*(int *)(lVar2 + 0xb0) == -1) break;
    puVar3 = puVar3 + 5;
  }
  *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 1;
LAB_180879390:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_d8);
}
uint64_t function_8793e0(int64_t param_1,int64_t *param_2)
{
  int64_t lVar1;
  int32_t uVar2;
  int64_t lVar3;
  int iVar4;
  iVar4 = *(int *)(param_1 + 0x98) + -1;
  uVar2 = *(int32_t *)(param_1 + 0x50);
  if (-1 < iVar4) {
    lVar3 = (int64_t)iVar4 << 4;
    do {
      lVar1 = (**(code **)(*param_2 + 0x140))(param_2,*(int64_t *)(param_1 + 0x90) + lVar3,1);
      if (lVar1 != 0) {
        if (*(short *)(lVar1 + 0xc) == 7) {
          *(int32_t *)(lVar1 + 0x44) = uVar2;
        }
        else {
          uVar2 = *(int32_t *)(lVar1 + 0x44);
        }
      }
      lVar3 = lVar3 + -0x10;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = *(int *)(param_1 + 0x88) + -1;
  if (-1 < iVar4) {
    lVar3 = (int64_t)iVar4 << 4;
    do {
      lVar1 = (**(code **)(*param_2 + 0x140))(param_2,*(int64_t *)(param_1 + 0x80) + lVar3,1);
      if (lVar1 != 0) {
        if (*(short *)(lVar1 + 0xc) == 7) {
          *(int32_t *)(lVar1 + 0x44) = uVar2;
        }
        else {
          uVar2 = *(int32_t *)(lVar1 + 0x44);
        }
      }
      lVar3 = lVar3 + -0x10;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return 0;
}
uint64_t RenderingSystem_TextureHandler(uint64_t param_1)
{
  function_8b0660(param_1,5);
  function_8b0660(param_1,6);
  function_8b0660(param_1,7);
  return 0;
}
uint64_t function_879510(int64_t param_1,int64_t *param_2,int64_t param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int iVar5;
  int8_t stack_special_x_8;
  uVar4 = *(uint64_t *)(param_1 + 0x58);
  do {
    if ((uVar4 < *(uint64_t *)(param_1 + 0x58)) ||
       ((int64_t)*(int *)(param_1 + 0x60) * 0x10 + *(uint64_t *)(param_1 + 0x58) <= uVar4)) {
      return 0;
    }
    lVar2 = (**(code **)(*param_2 + 0x158))(param_2,uVar4,1,uVar4);
    if (lVar2 != 0) {
      iVar5 = 0;
      if (0 < *(int *)(lVar2 + 0x40)) {
        lVar1 = *(int64_t *)(lVar2 + 0x38);
        do {
          if ((*(int64_t *)(lVar1 + (int64_t)iVar5 * 0x10) == *(int64_t *)(param_1 + 0x10)) &&
             (*(int64_t *)(lVar1 + 8 + (int64_t)iVar5 * 0x10) == *(int64_t *)(param_1 + 0x18)))
          goto LAB_1808795e2;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(lVar2 + 0x40));
      }
      uVar3 = function_86da90((int64_t *)(lVar2 + 0x38),(int64_t *)(param_1 + 0x10),stack_special_x_8);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (param_3 != 0) {
        uVar3 = function_8c53d0(param_3,lVar2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = function_8c52b0(param_3,lVar2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
    }
LAB_1808795e2:
    uVar4 = uVar4 + 0x10;
  } while( true );
}
uint64_t SystemStateProcessor(int64_t *param_1,uint *param_2,int8_t *param_3)
{
  uint64_t *puVar1;
  int8_t uVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t uVar8;
  int iVar9;
  int64_t lVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int64_t lVar7;
  uVar6 = function_855ce0();
  if ((int)uVar6 == 0) {
    if ((int)param_1[1] == 0) {
      return 0x1c;
    }
    lVar10 = (int64_t)
             (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) & (int)param_1[1] - 1U);
    piVar13 = (int *)(*param_1 + lVar10 * 4);
    iVar4 = *(int *)(*param_1 + lVar10 * 4);
    if (iVar4 != -1) {
      lVar10 = param_1[2];
      do {
        lVar7 = (int64_t)iVar4;
        if ((*(int64_t *)(lVar10 + lVar7 * 0x18) == *(int64_t *)param_2) &&
           (*(int64_t *)(lVar10 + 8 + lVar7 * 0x18) == *(int64_t *)(param_2 + 2))) {
          *(int8_t *)(lVar10 + 0x14 + lVar7 * 0x18) = *param_3;
          return 0;
        }
        iVar4 = *(int *)(lVar10 + 0x10 + lVar7 * 0x18);
        piVar13 = (int *)(lVar10 + 0x10 + lVar7 * 0x18);
      } while (iVar4 != -1);
    }
    iVar4 = (int)param_1[4];
    lVar10 = (int64_t)iVar4;
    if (iVar4 == -1) {
      iVar4 = (int)param_1[3];
      uVar11 = (int)*(uint *)((int64_t)param_1 + 0x1c) >> 0x1f;
      uVar6 = *(uint64_t *)param_2;
      uVar3 = *(uint64_t *)(param_2 + 2);
      uVar2 = *param_3;
      iVar5 = (*(uint *)((int64_t)param_1 + 0x1c) ^ uVar11) - uVar11;
      iVar9 = iVar4 + 1;
      if (iVar5 < iVar9) {
        iVar12 = (int)((float)iVar5 * 1.5);
        iVar5 = iVar9;
        if (iVar9 <= iVar12) {
          iVar5 = iVar12;
        }
        if (iVar5 < 2) {
          iVar12 = 2;
        }
        else if (iVar12 < iVar9) {
          iVar12 = iVar9;
        }
        uVar8 = SystemCore_8595A0(param_1 + 2,iVar12);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
      }
      lVar7 = (int64_t)(int)param_1[3];
      lVar10 = param_1[2];
      puVar1 = (uint64_t *)(lVar10 + lVar7 * 0x18);
      *puVar1 = uVar6;
      puVar1[1] = uVar3;
      *(int32_t *)(lVar10 + 0x10 + lVar7 * 0x18) = 0xffffffff;
      *(int8_t *)(lVar10 + 0x14 + lVar7 * 0x18) = uVar2;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
    else {
      lVar7 = param_1[2];
      *(int32_t *)(param_1 + 4) = *(int32_t *)(lVar7 + 0x10 + lVar10 * 0x18);
      *(int32_t *)(lVar7 + 0x10 + lVar10 * 0x18) = 0xffffffff;
      uVar6 = *(uint64_t *)(param_2 + 2);
      puVar1 = (uint64_t *)(lVar7 + lVar10 * 0x18);
      *puVar1 = *(uint64_t *)param_2;
      puVar1[1] = uVar6;
      *(int8_t *)(lVar7 + 0x14 + lVar10 * 0x18) = *param_3;
    }
    *piVar13 = iVar4;
    *(int *)((int64_t)param_1 + 0x24) = *(int *)((int64_t)param_1 + 0x24) + 1;
    uVar6 = 0;
  }
  return uVar6;
}
uint64_t function_879647(uint param_1)
{
  int64_t *plVar1;
  int8_t uVar2;
  int64_t lVar3;
  uint in_EAX;
  int iVar4;
  int iVar5;
  uint64_t uVar7;
  int64_t lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int64_t *unaff_RBX;
  int64_t lVar12;
  int64_t *unaff_RSI;
  int *piVar13;
  int8_t *unaff_R15;
  int64_t lVar6;
  piVar13 = (int *)(*unaff_RSI + (int64_t)(int)(param_1 & in_EAX) * 4);
  iVar4 = *(int *)(*unaff_RSI + (int64_t)(int)(param_1 & in_EAX) * 4);
  if (iVar4 != -1) {
    lVar12 = unaff_RSI[2];
    do {
      lVar6 = (int64_t)iVar4;
      if ((*(int64_t *)(lVar12 + lVar6 * 0x18) == *unaff_RBX) &&
         (*(int64_t *)(lVar12 + 8 + lVar6 * 0x18) == unaff_RBX[1])) {
        *(int8_t *)(lVar12 + 0x14 + lVar6 * 0x18) = *unaff_R15;
        return 0;
      }
      iVar4 = *(int *)(lVar12 + 0x10 + lVar6 * 0x18);
      piVar13 = (int *)(lVar12 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != -1);
  }
  iVar4 = (int)unaff_RSI[4];
  lVar12 = (int64_t)iVar4;
  if (iVar4 == -1) {
    iVar4 = (int)unaff_RSI[3];
    uVar10 = (int)*(uint *)((int64_t)unaff_RSI + 0x1c) >> 0x1f;
    lVar12 = *unaff_RBX;
    lVar6 = unaff_RBX[1];
    uVar2 = *unaff_R15;
    iVar5 = (*(uint *)((int64_t)unaff_RSI + 0x1c) ^ uVar10) - uVar10;
    iVar9 = iVar4 + 1;
    if (iVar5 < iVar9) {
      iVar11 = (int)((float)iVar5 * 1.5);
      iVar5 = iVar9;
      if (iVar9 <= iVar11) {
        iVar5 = iVar11;
      }
      if (iVar5 < 2) {
        iVar11 = 2;
      }
      else if (iVar11 < iVar9) {
        iVar11 = iVar9;
      }
      uVar7 = SystemCore_8595A0(unaff_RSI + 2,iVar11);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
    }
    lVar8 = (int64_t)(int)unaff_RSI[3];
    lVar3 = unaff_RSI[2];
    plVar1 = (int64_t *)(lVar3 + lVar8 * 0x18);
    *plVar1 = lVar12;
    plVar1[1] = lVar6;
    *(int32_t *)(lVar3 + 0x10 + lVar8 * 0x18) = 0xffffffff;
    *(int8_t *)(lVar3 + 0x14 + lVar8 * 0x18) = uVar2;
    *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + 1;
  }
  else {
    lVar6 = unaff_RSI[2];
    *(int32_t *)(unaff_RSI + 4) = *(int32_t *)(lVar6 + 0x10 + lVar12 * 0x18);
    *(int32_t *)(lVar6 + 0x10 + lVar12 * 0x18) = 0xffffffff;
    lVar3 = unaff_RBX[1];
    plVar1 = (int64_t *)(lVar6 + lVar12 * 0x18);
    *plVar1 = *unaff_RBX;
    plVar1[1] = lVar3;
    *(int8_t *)(lVar6 + 0x14 + lVar12 * 0x18) = *unaff_R15;
  }
  *piVar13 = iVar4;
  *(int *)((int64_t)unaff_RSI + 0x24) = *(int *)((int64_t)unaff_RSI + 0x24) + 1;
  return 0;
}
uint64_t function_87969a(void)
{
  uint64_t *puVar1;
  int8_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint64_t *unaff_RBX;
  int iVar11;
  int64_t lVar12;
  int64_t unaff_RSI;
  int *unaff_RDI;
  int8_t *unaff_R15;
  iVar11 = *(int *)(unaff_RSI + 0x20);
  lVar12 = (int64_t)iVar11;
  if (iVar11 == -1) {
    iVar11 = *(int *)(unaff_RSI + 0x18);
    uVar9 = (int)*(uint *)(unaff_RSI + 0x1c) >> 0x1f;
    uVar3 = *unaff_RBX;
    uVar4 = unaff_RBX[1];
    uVar2 = *unaff_R15;
    iVar5 = (*(uint *)(unaff_RSI + 0x1c) ^ uVar9) - uVar9;
    iVar8 = iVar11 + 1;
    if (iVar5 < iVar8) {
      iVar10 = (int)((float)iVar5 * 1.5);
      iVar5 = iVar8;
      if (iVar8 <= iVar10) {
        iVar5 = iVar10;
      }
      if (iVar5 < 2) {
        iVar10 = 2;
      }
      else if (iVar10 < iVar8) {
        iVar10 = iVar8;
      }
      uVar6 = SystemCore_8595A0(unaff_RSI + 0x10,iVar10);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    lVar7 = (int64_t)*(int *)(unaff_RSI + 0x18);
    lVar12 = *(int64_t *)(unaff_RSI + 0x10);
    puVar1 = (uint64_t *)(lVar12 + lVar7 * 0x18);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    *(int32_t *)(lVar12 + 0x10 + lVar7 * 0x18) = 0xffffffff;
    *(int8_t *)(lVar12 + 0x14 + lVar7 * 0x18) = uVar2;
    *(int *)(unaff_RSI + 0x18) = *(int *)(unaff_RSI + 0x18) + 1;
  }
  else {
    lVar7 = *(int64_t *)(unaff_RSI + 0x10);
    *(int32_t *)(unaff_RSI + 0x20) = *(int32_t *)(lVar7 + 0x10 + lVar12 * 0x18);
    *(int32_t *)(lVar7 + 0x10 + lVar12 * 0x18) = 0xffffffff;
    uVar3 = unaff_RBX[1];
    puVar1 = (uint64_t *)(lVar7 + lVar12 * 0x18);
    *puVar1 = *unaff_RBX;
    puVar1[1] = uVar3;
    *(int8_t *)(lVar7 + 0x14 + lVar12 * 0x18) = *unaff_R15;
  }
  *unaff_RDI = iVar11;
  *(int *)(unaff_RSI + 0x24) = *(int *)(unaff_RSI + 0x24) + 1;
  return 0;
}
uint64_t function_8796f6(int64_t param_1,int64_t param_2)
{
  int8_t *unaff_R15;
  *(int8_t *)(param_2 + 0x14 + param_1 * 8) = *unaff_R15;
  return 0;
}
uint64_t function_87970e(int param_1,int param_2)
{
  int32_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int8_t unaff_BL;
  int32_t unaff_EBP;
  int64_t unaff_RSI;
  int32_t *unaff_RDI;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  uVar3 = SystemCore_8595A0(unaff_RSI + 0x10,param_2);
  if ((int)uVar3 == 0) {
    lVar4 = (int64_t)*(int *)(unaff_RSI + 0x18);
    lVar2 = *(int64_t *)(unaff_RSI + 0x10);
    puVar1 = (int32_t *)(lVar2 + lVar4 * 0x18);
    *puVar1 = unaff_XMM6_Da;
    puVar1[1] = unaff_XMM6_Db;
    puVar1[2] = unaff_XMM6_Dc;
    puVar1[3] = unaff_XMM6_Dd;
    *(int32_t *)(lVar2 + 0x10 + lVar4 * 0x18) = 0xffffffff;
    *(int8_t *)(lVar2 + 0x14 + lVar4 * 0x18) = unaff_BL;
    *(int *)(unaff_RSI + 0x18) = *(int *)(unaff_RSI + 0x18) + 1;
    *unaff_RDI = unaff_EBP;
    *(int *)(unaff_RSI + 0x24) = *(int *)(unaff_RSI + 0x24) + 1;
    uVar3 = 0;
  }
  return uVar3;
}
// 函数: void function_879789(void)
void function_879789(void)
{
  return;
}
int function_8797a0(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *(int32_t *)(param_1 + 0x10);
  local_var_14 = *(int32_t *)(param_1 + 0x14);
  local_var_10 = *(int32_t *)(param_1 + 0x18);
  local_var_c = *(int32_t *)(param_1 + 0x1c);
  uVar1 = *(int32_t *)(param_1 + 0x24);
  uVar2 = *(int32_t *)(param_1 + 0x20);
  iVar3 = RenderingSystem_ShaderCompiler(param_2,param_3,&local_var_18);
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemFunction_00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemFunction_00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int function_879880(int64_t param_1,int64_t param_2,int param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *(int32_t *)(param_1 + 0x10);
  local_var_14 = *(int32_t *)(param_1 + 0x14);
  local_var_10 = *(int32_t *)(param_1 + 0x18);
  local_var_c = *(int32_t *)(param_1 + 0x1c);
  uVar1 = *(int32_t *)(param_1 + 0x24);
  uVar2 = *(int32_t *)(param_1 + 0x20);
  iVar3 = SystemDataProcessor(param_2,param_3,&processed_var_5688_ptr);
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = RenderingSystem_ShaderCompiler(iVar3 + param_2,param_3 - iVar3,&local_var_18);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemFunction_00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemFunction_00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}
int64_t function_879970(int64_t *param_1,uint *param_2,char param_3)
{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  lVar1 = param_1[5];
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemMemoryAllocator(lVar1);
  }
  if (((*(int *)((int64_t)param_1 + 0x24) != 0) && ((int)param_1[1] != 0)) &&
     (iVar4 = *(int *)(*param_1 +
                      (int64_t)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) & (int)param_1[1] - 1U
                           ) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + param_1[2]);
      if ((*plVar3 == *(int64_t *)param_2) && (plVar3[1] == *(int64_t *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_180879a06;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_180879a06:
  if (bVar2) {
// WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  return lVar5;
}
uint64_t function_879a60(int64_t param_1,int64_t param_2,uint64_t param_3)
{
  uint64_t uVar1;
  if (param_2 == 0) {
    return 0x1f;
  }
  uVar1 = SystemFunction_00018088e470(*(uint64_t *)(param_1 + 0x98));
  if ((int)uVar1 == 0) {
    uVar1 = function_739890(*(uint64_t *)(param_1 + 0x78),param_3);
  }
  return uVar1;
}
// 函数: void function_879ad0(int64_t *param_1)
void function_879ad0(int64_t *param_1)
{
  uint64_t uVar1;
  uVar1 = SystemCoreProcessor();
// WARNING: Could not recover jumptable at 0x000180879aef. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1b8))(param_1,uVar1,1);
  return;
}
// 函数: void function_879b00(int64_t *param_1)
void function_879b00(int64_t *param_1)
{
  uint64_t uVar1;
  uVar1 = SystemCoreProcessor();
// WARNING: Could not recover jumptable at 0x000180879b1f. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x228))(param_1,uVar1,1);
  return;
}
// 函数: void function_879b30(int64_t *param_1)
void function_879b30(int64_t *param_1)
{
  uint64_t uVar1;
  uVar1 = SystemCoreProcessor();
// WARNING: Could not recover jumptable at 0x000180879b4f. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1d8))(param_1,uVar1,1);
  return;
}
// 函数: void function_879b60(int64_t *param_1)
void function_879b60(int64_t *param_1)
{
  uint64_t uVar1;
  uVar1 = SystemCoreProcessor();
// WARNING: Could not recover jumptable at 0x000180879b7f. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1b0))(param_1,uVar1,1);
  return;
}
// 函数: void function_879b90(int64_t *param_1)
void function_879b90(int64_t *param_1)
{
  uint64_t uVar1;
  uVar1 = SystemCoreProcessor();
// WARNING: Could not recover jumptable at 0x000180879baf. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x180))(param_1,uVar1,1);
  return;
}
// 函数: void function_879bc0(int64_t *param_1)
void function_879bc0(int64_t *param_1)
{
  uint64_t uVar1;
  uVar1 = SystemCoreProcessor();
// WARNING: Could not recover jumptable at 0x000180879bdf. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1e8))(param_1,uVar1,1);
  return;
}
// 函数: void function_879bf0(int64_t *param_1)
void function_879bf0(int64_t *param_1)
{
  uint64_t uVar1;
  uVar1 = SystemCoreProcessor();
// WARNING: Could not recover jumptable at 0x000180879c0f. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1a8))(param_1,uVar1,1);
  return;
}
// 函数: void function_879c20(int64_t *param_1)
void function_879c20(int64_t *param_1)
{
  uint64_t uVar1;
  uVar1 = SystemCoreProcessor();
// WARNING: Could not recover jumptable at 0x000180879c3f. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1e0))(param_1,uVar1,1);
  return;
}
// 函数: void function_879c50(int64_t *param_1)
void function_879c50(int64_t *param_1)
{
  uint64_t uVar1;
  uVar1 = SystemCoreProcessor();
// WARNING: Could not recover jumptable at 0x000180879c6f. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,1);
  return;
}