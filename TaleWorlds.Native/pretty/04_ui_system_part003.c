#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part003.c - 23 个函数

// 函数: void FUN_1806501d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
void FUN_1806501d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                  uint64_t param_5)

{
  uint64_t *puVar1;
  char *pcVar2;
  int8_t auStack_278 [32];
  uint64_t uStack_258;
  uint64_t uStack_250;
  int8_t auStack_248 [512];
  uint64_t uStack_48;
  
  if (param_4 != 0) {
    uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_278;
    pcVar2 = (char *)(*(int64_t *)
                       ((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) + 8);
    if (*pcVar2 == '\0') {
      *pcVar2 = '\x01';
      puVar1 = (uint64_t *)func_0x00018004b9a0();
      uStack_250 = param_5;
      uStack_258 = 0;
      __stdio_common_vsprintf(*puVar1 | 2,auStack_248,0x1ff,param_4);
      *pcVar2 = '\0';
      FUN_1806500f0(param_1,param_2,param_3,auStack_248);
    }
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_278);
  }
  return;
}





// 函数: void FUN_180650219(int64_t param_1)
void FUN_180650219(int64_t param_1)

{
  int64_t in_RAX;
  uint64_t *puVar1;
  char *pcVar2;
  uint64_t in_stack_00000230;
  
  pcVar2 = (char *)(*(int64_t *)(in_RAX + param_1 * 8) + 8);
  if (*pcVar2 == '\0') {
    *pcVar2 = '\x01';
    puVar1 = (uint64_t *)func_0x00018004b9a0();
    __stdio_common_vsprintf(*puVar1 | 2,&stack0x00000030,0x1ff);
    *pcVar2 = '\0';
    FUN_1806500f0();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000230 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1806502a2(void)
void FUN_1806502a2(void)

{
  return;
}





// 函数: void FUN_1806502b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1806502b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uStackX_20;
  
  uStackX_20 = param_4;
  FUN_1806501d0(param_1,param_2,0,param_3,&uStackX_20);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806502e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1806502e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  if (ui_system_control_config == 0) {
    FUN_180650490(&system_ptr_bdb0);
  }
  if (ui_system_control_config != 0) {
    FUN_1806501d0(0,0,&unknown_var_9496_ptr,param_1,&uStackX_10);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180650340(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180650340(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  bool bVar1;
  int64_t lVar2;
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  if (ui_system_control_config == 0) {
    FUN_180650490(&system_ptr_bd80);
  }
  if (ui_system_control_config == 0) {
    if (ui_system_control_config == 0) {
      FUN_180650490(&system_ptr_bdb0);
    }
    if (ui_system_control_config == 0) {
      return;
    }
  }
  LOCK();
  lVar2 = ui_system_config + 1;
  UNLOCK();
  bVar1 = ui_system_config <= ui_system_control_config;
  ui_system_config = lVar2;
  if (bVar1) {
    FUN_1806501d0(0,0,&unknown_var_9448_ptr,param_1,&uStackX_10);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806503d0(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1806503d0(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  bool bVar1;
  uint64_t uVar2;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  if (ui_system_control_config == 0) {
    FUN_180650490(&system_ptr_bd80);
  }
  if (ui_system_control_config == 0) {
    if (ui_system_control_config == 0) {
      FUN_180650490(&system_ptr_bdb0);
    }
    if (ui_system_control_config == 0) goto LAB_180650464;
  }
  LOCK();
  uVar2 = ui_system_config + 1;
  UNLOCK();
  bVar1 = ui_system_config <= ui_system_control_config;
  ui_system_config = uVar2;
  if (bVar1) {
    FUN_1806501d0(0,0,&unknown_var_9424_ptr,param_2,&uStackX_18);
  }
LAB_180650464:
  if (ui_system_config != (code *)0x0) {
    (*ui_system_config)(param_1,ui_system_config);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180650490(int *param_1)
void FUN_180650490(int *param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int8_t auStack_e8 [32];
  char *apcStack_c8 [2];
  char acStack_b8 [80];
  char acStack_68 [80];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_e8;
  acStack_b8[0] = '\0';
  strncpy(acStack_b8,&unknown_var_9648_ptr,0x40);
  acStack_b8[0x40] = 0;
  strncat(acStack_b8,*(uint64_t *)(param_1 + 4),0x40);
  acStack_b8[0x40] = 0;
  acStack_68[0] = '\0';
  uVar3 = GetEnvironmentVariableA(acStack_b8,acStack_68,0x41);
  if ((uint64_t)uVar3 - 1 < 0x40) {
    uVar7 = 0xffffffffffffffff;
    do {
      uVar6 = uVar7 + 1;
      lVar5 = uVar7 + 1;
      uVar7 = uVar6;
    } while (acStack_68[lVar5] != '\0');
    if (0x40 < uVar6) {
      uVar6 = 0x40;
    }
    uVar7 = 0;
    if (uVar6 != 0) {
      do {
        cVar2 = toupper((int)acStack_68[uVar7]);
        acStack_b8[uVar7] = cVar2;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
    if (0x40 < uVar6) {
      FUN_1808fcdc8();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    acStack_b8[uVar6] = '\0';
    if ((acStack_b8[0] == '\0') || (lVar5 = strstr(&unknown_var_9664_ptr,acStack_b8), lVar5 != 0)) {
      *param_1 = 1;
    }
    else {
      lVar5 = strstr(&unknown_var_9568_ptr,acStack_b8);
      if (lVar5 == 0) {
        apcStack_c8[0] = acStack_b8;
        iVar4 = strtol(acStack_b8,apcStack_c8,10);
        if (param_1[2] == 8) {
          cVar2 = *apcStack_c8[0];
          if (cVar2 == 'K') {
            apcStack_c8[0] = apcStack_c8[0] + 1;
          }
          else if (cVar2 == 'M') {
            iVar4 = iVar4 << 10;
            apcStack_c8[0] = apcStack_c8[0] + 1;
          }
          else if (cVar2 == 'G') {
            iVar4 = iVar4 << 0x14;
            apcStack_c8[0] = apcStack_c8[0] + 1;
          }
          else {
            iVar4 = (int)((int64_t)iVar4 + 0x3ffU >> 10);
          }
          if (*apcStack_c8[0] == 'B') {
            apcStack_c8[0] = apcStack_c8[0] + 1;
          }
        }
        if (*apcStack_c8[0] != '\0') {
          FUN_180650340(&system_pattern2_ptr,*(uint64_t *)(param_1 + 4),acStack_b8);
          param_1[1] = 1;
          goto FUN_1806505b5;
        }
        *param_1 = iVar4;
      }
      else {
        *param_1 = 0;
      }
    }
    param_1[1] = 2;
  }
  else if (system_ptr_66d8 == '\0') {
    param_1[1] = 1;
  }
FUN_1806505b5:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_e8);
}





// 函数: void FUN_180650513(void)
void FUN_180650513(void)

{
  char cVar1;
  code *pcVar2;
  int8_t uVar3;
  int iVar4;
  int64_t lVar5;
  char *pcVar6;
  uint64_t uVar7;
  int64_t unaff_RBP;
  int *unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar8;
  
  uVar7 = 0xffffffffffffffff;
  do {
    uVar7 = uVar7 + 1;
  } while (*(char *)(unaff_RBP + -9 + uVar7) != '\0');
  if (0x40 < uVar7) {
    uVar7 = unaff_RDI;
  }
  uVar8 = 0;
  if (uVar7 != 0) {
    do {
      uVar3 = toupper((int)*(char *)(unaff_RBP + -9 + uVar8));
      *(int8_t *)(unaff_RBP + -0x59 + uVar8) = uVar3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  if (0x40 < uVar7) {
    FUN_1808fcdc8();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(int8_t *)(unaff_RBP + -0x59 + uVar7) = 0;
  if (*(char *)(unaff_RBP + -0x59) == '\0') {
LAB_180650673:
    *unaff_RSI = 1;
  }
  else {
    lVar5 = strstr(&unknown_var_9664_ptr,unaff_RBP + -0x59);
    if (lVar5 != 0) goto LAB_180650673;
    lVar5 = strstr(&unknown_var_9568_ptr,unaff_RBP + -0x59);
    if (lVar5 == 0) {
      *(int64_t *)(unaff_RBP + -0x69) = unaff_RBP + -0x59;
      iVar4 = strtol(unaff_RBP + -0x59,unaff_RBP + -0x69,10);
      pcVar6 = *(char **)(unaff_RBP + -0x69);
      if (unaff_RSI[2] == 8) {
        cVar1 = *pcVar6;
        if (cVar1 == 'K') {
          pcVar6 = pcVar6 + 1;
          *(char **)(unaff_RBP + -0x69) = pcVar6;
        }
        else if (cVar1 == 'M') {
          iVar4 = iVar4 << 10;
          pcVar6 = pcVar6 + 1;
          *(char **)(unaff_RBP + -0x69) = pcVar6;
        }
        else if (cVar1 == 'G') {
          iVar4 = iVar4 << 0x14;
          pcVar6 = pcVar6 + 1;
          *(char **)(unaff_RBP + -0x69) = pcVar6;
        }
        else {
          iVar4 = (int)((int64_t)iVar4 + 0x3ffU >> 10);
        }
        if (*pcVar6 == 'B') {
          pcVar6 = pcVar6 + 1;
          *(char **)(unaff_RBP + -0x69) = pcVar6;
        }
      }
      if (*pcVar6 != '\0') {
        FUN_180650340(&system_pattern2_ptr,*(uint64_t *)(unaff_RSI + 4),unaff_RBP + -0x59);
        unaff_RSI[1] = 1;
        goto LAB_1806505ad;
      }
      *unaff_RSI = iVar4;
    }
    else {
      *unaff_RSI = 0;
    }
  }
  unaff_RSI[1] = 2;
LAB_1806505ad:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x47) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1806505b5(void)
void FUN_1806505b5(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x47) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1806505d6(void)
void FUN_1806505d6(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t unaff_RBP;
  int *unaff_RSI;
  
  *(int64_t *)(unaff_RBP + -0x69) = unaff_RBP + -0x59;
  iVar2 = strtol(unaff_RBP + -0x59,unaff_RBP + -0x69,10);
  pcVar3 = *(char **)(unaff_RBP + -0x69);
  if (unaff_RSI[2] == 8) {
    cVar1 = *pcVar3;
    if (cVar1 == 'K') {
      pcVar3 = pcVar3 + 1;
      *(char **)(unaff_RBP + -0x69) = pcVar3;
    }
    else if (cVar1 == 'M') {
      iVar2 = iVar2 << 10;
      pcVar3 = pcVar3 + 1;
      *(char **)(unaff_RBP + -0x69) = pcVar3;
    }
    else if (cVar1 == 'G') {
      iVar2 = iVar2 << 0x14;
      pcVar3 = pcVar3 + 1;
      *(char **)(unaff_RBP + -0x69) = pcVar3;
    }
    else {
      iVar2 = (int)((int64_t)iVar2 + 0x3ffU >> 10);
    }
    if (*pcVar3 == 'B') {
      pcVar3 = pcVar3 + 1;
      *(char **)(unaff_RBP + -0x69) = pcVar3;
    }
  }
  if (*pcVar3 == '\0') {
    *unaff_RSI = iVar2;
    unaff_RSI[1] = 2;
  }
  else {
    FUN_180650340(&system_pattern2_ptr,*(uint64_t *)(unaff_RSI + 4),unaff_RBP + -0x59);
    unaff_RSI[1] = 1;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x47) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18065067e(void)
void FUN_18065067e(void)

{
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  
  if (system_ptr_66d8 == '\0') {
    *(int32_t *)(unaff_RSI + 4) = 1;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x47) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180650697(void)
void FUN_180650697(void)

{
  code *pcVar1;
  
  FUN_1808fcdc8();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



bool FUN_1806506a0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar1 = param_3[4];
  fVar2 = param_2[6];
  fVar3 = param_4[6];
  fVar4 = param_3[5];
  fVar5 = param_4[5];
  fVar6 = param_3[6];
  fVar18 = fVar4 * fVar3 - fVar6 * fVar5;
  fVar7 = param_4[4];
  fVar19 = fVar7 * fVar6 - fVar1 * fVar3;
  fVar20 = fVar1 * fVar5 - fVar7 * fVar4;
  fVar13 = fVar19 * param_2[5] + fVar18 * param_2[4] + fVar20 * fVar2;
  if (fVar13 != 0.0) {
    fVar17 = param_2[5] * param_2[1] + param_2[4] * *param_2 + fVar2 * param_2[2];
    fVar14 = 1.0 / fVar13;
    fVar8 = param_2[4];
    fVar15 = fVar4 * param_3[1] + fVar1 * *param_3 + fVar6 * param_3[2];
    fVar16 = fVar5 * param_4[1] + fVar7 * *param_4 + fVar3 * param_4[2];
    fVar1 = param_2[5];
    fVar9 = param_2[6];
    fVar10 = param_3[4];
    fVar11 = param_2[4];
    fVar12 = param_3[4];
    *param_1 = ((fVar2 * fVar5 - param_2[5] * fVar3) * fVar15 + fVar17 * fVar18 +
               (param_2[5] * fVar6 - param_2[6] * fVar4) * fVar16) * fVar14;
    param_1[1] = ((fVar8 * fVar3 - fVar9 * fVar7) * fVar15 + fVar17 * fVar19 +
                 (fVar9 * fVar10 - fVar11 * fVar6) * fVar16) * fVar14;
    param_1[2] = ((fVar1 * fVar7 - fVar11 * fVar5) * fVar15 + fVar17 * fVar20 +
                 (fVar11 * fVar4 - fVar1 * fVar12) * fVar16) * fVar14;
    param_1[3] = 3.4028235e+38;
  }
  return fVar13 != 0.0;
}



int8_t FUN_180650782(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_R8;
  float *in_R9;
  float in_XMM1_Da;
  float in_XMM4_Da;
  float fVar7;
  float in_XMM5_Da;
  float fVar8;
  float unaff_XMM6_Da;
  float fVar9;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  
  fVar9 = in_XMM5_Da * param_2[1] + in_XMM4_Da * *param_2 + in_XMM1_Da * param_2[2];
  param_3 = 1.0 / param_3;
  fVar1 = param_2[4];
  fVar7 = unaff_XMM12_Da * in_R8[1] + param_4 * *in_R8 + unaff_XMM14_Da * in_R8[2];
  fVar8 = unaff_XMM13_Da * in_R9[1] + unaff_XMM15_Da * *in_R9 + unaff_XMM11_Da * in_R9[2];
  fVar2 = param_2[5];
  fVar3 = param_2[6];
  fVar4 = in_R8[4];
  fVar5 = param_2[4];
  fVar6 = in_R8[4];
  *param_1 = ((unaff_XMM6_Da * unaff_XMM13_Da - param_2[5] * unaff_XMM11_Da) * fVar7 +
              fVar9 * unaff_XMM8_Da +
             (param_2[5] * unaff_XMM14_Da - param_2[6] * unaff_XMM12_Da) * fVar8) * param_3;
  param_1[1] = ((fVar1 * unaff_XMM11_Da - fVar3 * unaff_XMM15_Da) * fVar7 + fVar9 * unaff_XMM9_Da +
               (fVar3 * fVar4 - fVar5 * unaff_XMM14_Da) * fVar8) * param_3;
  param_1[2] = ((fVar2 * unaff_XMM15_Da - fVar5 * unaff_XMM13_Da) * fVar7 + fVar9 * unaff_XMM10_Da +
               (fVar5 * unaff_XMM12_Da - fVar2 * fVar6) * fVar8) * param_3;
  param_1[3] = 3.4028235e+38;
  return 1;
}





// 函数: void FUN_180650908(void)
void FUN_180650908(void)

{
  return;
}





// 函数: void FUN_180650950(int64_t param_1,int64_t param_2)
void FUN_180650950(int64_t param_1,int64_t param_2)

{
  char cVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  void *puVar4;
  char *pcVar5;
  
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar4 = *(void **)(param_1 + 8);
  }
  uVar2 = strrchr(puVar4,0x5c);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar4 = *(void **)(param_1 + 8);
  }
  uVar3 = strrchr(puVar4,0x5c);
  if (uVar2 == 0) {
    if (uVar3 == 0) {
      pcVar5 = "";
      if (*(char **)(param_1 + 8) != (char *)0x0) {
        pcVar5 = *(char **)(param_1 + 8);
      }
      param_2 = param_2 - (int64_t)pcVar5;
      do {
        cVar1 = *pcVar5;
        pcVar5[param_2] = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
    else {
      pcVar5 = (char *)(uVar3 + 1);
      param_2 = param_2 - (int64_t)pcVar5;
      do {
        cVar1 = *pcVar5;
        pcVar5[param_2] = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
  }
  else if (uVar3 == 0) {
    pcVar5 = (char *)(uVar2 + 1);
    param_2 = param_2 - (int64_t)pcVar5;
    do {
      cVar1 = *pcVar5;
      pcVar5[param_2] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  else if (uVar3 < uVar2) {
    pcVar5 = (char *)(uVar2 + 1);
    param_2 = param_2 - (int64_t)pcVar5;
    do {
      cVar1 = *pcVar5;
      pcVar5[param_2] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  else {
    pcVar5 = (char *)(uVar3 + 1);
    param_2 = param_2 - (int64_t)pcVar5;
    do {
      cVar1 = *pcVar5;
      pcVar5[param_2] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180650a70(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180650a70(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180651560(param_1,ui_system_config,param_3,param_4,0xfffffffffffffffe);
  return;
}



int64_t FUN_180650aa0(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  SystemCore_ConfigurationHandler0();
  SystemCore_ConfigurationHandler0(param_1 + 0x20,param_2 + 0x20);
  *(int8_t *)(param_1 + 0x40) = *(int8_t *)(param_2 + 0x40);
  *(int32_t *)(param_1 + 0x44) = *(int32_t *)(param_2 + 0x44);
  *(uint64_t *)(param_1 + 0x48) = *(uint64_t *)(param_2 + 0x48);
  *(int32_t *)(param_1 + 0x50) = *(int32_t *)(param_2 + 0x50);
  SystemCore_ConfigurationHandler0(param_1 + 0x58,param_2 + 0x58);
  SystemCore_ConfigurationHandler0(param_1 + 0x78,param_2 + 0x78);
  uVar1 = *(uint64_t *)(param_2 + 0xa0);
  *(uint64_t *)(param_1 + 0x98) = *(uint64_t *)(param_2 + 0x98);
  *(uint64_t *)(param_1 + 0xa0) = uVar1;
  *(int32_t *)(param_1 + 0xa8) = *(int32_t *)(param_2 + 0xa8);
  *(int32_t *)(param_1 + 0xac) = *(int32_t *)(param_2 + 0xac);
  return param_1;
}



uint64_t FUN_180650b30(int64_t param_1,int64_t param_2,int64_t param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int *piVar6;
  uint uVar7;
  uint64_t uVar8;
  uint uVar9;
  uint *puVar10;
  
  lVar5 = *(int *)(param_3 + 0x3c) + param_2;
  *(int32_t *)(param_1 + 0x50) = *(int32_t *)(lVar5 + 0x50);
  *(int32_t *)(param_1 + 0x44) = *(int32_t *)(lVar5 + 8);
  if ((*(ushort *)(lVar5 + 0x16) & 0x200) != 0) {
    *(int8_t *)(param_1 + 0x40) = 1;
  }
  uVar8 = (uint64_t)*(uint *)(lVar5 + 0xbc);
  uVar4 = uVar8 * 0x2492492492492493;
  uVar7 = (uint)((uVar8 - uVar8 / 7 >> 1) + uVar8 / 7 >> 4);
  if (uVar7 == 0) {
LAB_180650c04:
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    uVar9 = 0;
    if (uVar7 != 0) {
      piVar6 = (int *)((uint64_t)*(uint *)(lVar5 + 0xb8) + 0xc + param_2);
      do {
        if ((piVar6[1] != 0) && (*piVar6 == 2)) {
          puVar10 = (uint *)((uint64_t)(uint)piVar6[2] + param_2);
          if (*puVar10 != 0x53445352) goto LAB_180650c04;
          *(uint *)(param_1 + 0xac) = puVar10[5];
          (**(code **)(*(int64_t *)(param_1 + 0x78) + 0x10))
                    ((int64_t *)(param_1 + 0x78),puVar10 + 6);
          uVar4 = (uint64_t)*puVar10;
          *(uint *)(param_1 + 0xa8) = *puVar10;
          uVar1 = puVar10[2];
          uVar2 = puVar10[3];
          uVar3 = puVar10[4];
          *(uint *)(param_1 + 0x98) = puVar10[1];
          *(uint *)(param_1 + 0x9c) = uVar1;
          *(uint *)(param_1 + 0xa0) = uVar2;
          *(uint *)(param_1 + 0xa4) = uVar3;
        }
        uVar9 = uVar9 + 1;
        piVar6 = piVar6 + 7;
      } while (uVar9 < uVar7);
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180650c20(int64_t param_1)
void FUN_180650c20(int64_t param_1)

{
  short *psVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  void *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int8_t auStack_228 [32];
  short **ppsStack_208;
  short *psStack_1f8;
  uint64_t uStack_1f0;
  int8_t auStack_1e8 [16];
  int64_t alStack_1d8 [4];
  int8_t auStack_1b8 [8];
  int64_t lStack_1b0;
  uint uStack_1a8;
  int32_t uStack_19c;
  short *psStack_190;
  int8_t auStack_128 [272];
  uint64_t uStack_18;
  
  uStack_1f0 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_228;
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar4 = *(void **)(param_1 + 8);
  }
  psVar1 = (short *)LoadLibraryA(puVar4);
  if (psVar1 != (short *)0x0) {
    puVar5 = (uint64_t *)&system_ptr_6790;
    puVar2 = ui_system_config;
    psStack_1f8 = psVar1;
    if (ui_system_config != (uint64_t *)0x0) {
      do {
        if ((short *)puVar2[4] < psVar1) {
          puVar3 = (uint64_t *)*puVar2;
        }
        else {
          puVar3 = (uint64_t *)puVar2[1];
          puVar5 = puVar2;
        }
        puVar2 = puVar3;
      } while (puVar3 != (uint64_t *)0x0);
      if ((puVar5 != (uint64_t *)&system_ptr_6790) && ((short *)puVar5[4] <= psVar1))
      goto LAB_180650dc8;
    }
    FUN_180650950(param_1,auStack_128);
    FUN_18063ccc0(alStack_1d8);
    psStack_190 = psVar1;
    (**(code **)(alStack_1d8[0] + 0x10))(alStack_1d8,auStack_128);
    uStack_1a8 = *(uint *)(param_1 + 0x10);
    uVar6 = (uint64_t)uStack_1a8;
    if (*(int64_t *)(param_1 + 8) != 0) {
      CoreEngineDataBufferProcessor(auStack_1b8,uVar6);
    }
    if (uStack_1a8 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(lStack_1b0,*(uint64_t *)(param_1 + 8),uVar6);
    }
    if (lStack_1b0 != 0) {
      *(int8_t *)(uVar6 + lStack_1b0) = 0;
    }
    uStack_19c = *(int32_t *)(param_1 + 0x1c);
    if (*psStack_190 == 0x5a4d) {
      FUN_180650b30(alStack_1d8,psStack_190,psStack_190);
    }
    puVar5 = (uint64_t *)&system_ptr_6790;
    puVar2 = ui_system_config;
    while (puVar2 != (uint64_t *)0x0) {
      if ((short *)puVar2[4] < psVar1) {
        puVar2 = (uint64_t *)*puVar2;
      }
      else {
        puVar5 = puVar2;
        puVar2 = (uint64_t *)puVar2[1];
      }
    }
    if ((puVar5 == (uint64_t *)&system_ptr_6790) || (psVar1 < (short *)puVar5[4])) {
      ppsStack_208 = &psStack_1f8;
      puVar5 = (uint64_t *)FUN_1806515e0(puVar5,auStack_1e8);
      puVar5 = (uint64_t *)*puVar5;
    }
    FUN_180650aa0(puVar5 + 5,alStack_1d8);
    FUN_18063cfe0(alStack_1d8);
  }
LAB_180650dc8:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_228);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180650e00(void)
void FUN_180650e00(void)

{
  int iVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int8_t auStack_3c8 [128];
  uint64_t uStack_348;
  uint64_t uStack_340;
  int8_t auStack_324 [748];
  uint64_t uStack_38;
  
  uStack_348 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_3c8;
  uStack_340 = 0x180c96740;
  iVar1 = _Mtx_lock(0x180c96740);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  uVar3 = GetModuleHandleA(0);
  uVar2 = GetProcessId(uVar3);
  lVar4 = CreateToolhelp32Snapshot(0x18,uVar2);
  while( true ) {
    if (lVar4 != -1) {
                    // WARNING: Subroutine does not return
      memset(auStack_324,0,0x234);
    }
    iVar1 = GetLastError();
    if (iVar1 != 0x18) break;
    lVar4 = CreateToolhelp32Snapshot(0x18,uVar2);
  }
  iVar1 = _Mtx_unlock(0x180c96740);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_3c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180651540(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180651540(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180651560(param_1,ui_system_config,param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180651560(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180651560(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_180651560(&system_ptr_6790,*param_2,param_3,param_4,0xfffffffffffffffe);
    FUN_18063cfe0(param_2 + 5);
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1806515e0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t *param_5)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int32_t uVar6;
  bool bVar7;
  
  if ((param_4 == ui_system_config) || (param_4 == (int64_t *)&system_ptr_6790)) {
    if ((ui_system_config != 0) && (param_4 = ui_system_config, (uint64_t)ui_system_config[4] < *param_5)
       ) goto LAB_18065166c;
  }
  else {
    plVar1 = (int64_t *)func_0x00018066bd70(param_4);
    if (((uint64_t)param_4[4] < *param_5) && (*param_5 < (uint64_t)plVar1[4])) {
      if (*param_4 != 0) {
        param_4 = plVar1;
      }
LAB_18065166c:
      if (param_4 != (int64_t *)0x0) {
        FUN_180651770();
        return param_2;
      }
    }
  }
  puVar5 = (uint64_t *)&system_ptr_6790;
  bVar7 = true;
  if (ui_system_config != (uint64_t *)0x0) {
    puVar2 = ui_system_config;
    do {
      puVar5 = puVar2;
      bVar7 = *param_5 < (uint64_t)puVar5[4];
      if (bVar7) {
        puVar2 = (uint64_t *)puVar5[1];
      }
      else {
        puVar2 = (uint64_t *)*puVar5;
      }
    } while (puVar2 != (uint64_t *)0x0);
  }
  puVar2 = puVar5;
  if (bVar7) {
    if (puVar5 == ui_system_config) {
      uVar3 = *param_5;
      goto LAB_1806516e0;
    }
    puVar2 = (uint64_t *)func_0x00018066b9a0(puVar5);
  }
  uVar3 = *param_5;
  if (uVar3 <= (uint64_t)puVar2[4]) {
    *param_2 = puVar2;
    return param_2;
  }
LAB_1806516e0:
  if ((puVar5 == (uint64_t *)&system_ptr_6790) || (uVar3 < (uint64_t)puVar5[4])) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xd8,system_ptr_67b8);
  *(uint64_t *)(lVar4 + 0x20) = *param_5;
  FUN_18063ccc0(lVar4 + 0x28);
                    // WARNING: Subroutine does not return
  SystemNetworkHandler(lVar4,puVar5,&system_ptr_6790,uVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180651770(uint64_t param_1,uint64_t param_2,void *param_3,uint64_t param_4,
void FUN_180651770(uint64_t param_1,uint64_t param_2,void *param_3,uint64_t param_4,
                  uint64_t *param_5)

{
  int64_t lVar1;
  int32_t uVar2;
  
  if ((((char)param_4 == '\0') && (param_3 != &system_ptr_6790)) &&
     (*(uint64_t *)(param_3 + 0x20) <= *param_5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xd8,system_ptr_67b8,param_4,0xfffffffffffffffe);
  *(uint64_t *)(lVar1 + 0x20) = *param_5;
  FUN_18063ccc0(lVar1 + 0x28);
                    // WARNING: Subroutine does not return
  SystemNetworkHandler(lVar1,param_3,&system_ptr_6790,uVar2);
}





// 函数: void FUN_180651830(int64_t param_1)
void FUN_180651830(int64_t param_1)

{
  *(uint64_t *)(param_1 + 0x80) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x88) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(int32_t *)(param_1 + 0x98) = 0;
  *(uint64_t *)(param_1 + 0x80) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x60) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x68) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x68) = 0;
  *(int32_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x60) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x28) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x28) = &system_state_ptr;
  *(uint64_t *)(param_1 + 8) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 8) = &system_state_ptr;
  return;
}



uint64_t * FUN_180651860(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_9792_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x160);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pass_managed_library_callback_method_pointers(uint64_t param_1)

{
                    // 0x651890  36  pass_managed_library_callback_method_pointers
                    // WARNING: Could not recover jumptable at 0x00018065189d. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*system_cache_buffer + 0x40))(system_cache_buffer,param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pass_controller_methods(uint64_t param_1)

{
                    // 0x6518b0  34  pass_controller_methods
  ui_system_data_config = param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pass_managed_initialize_method_pointer(uint64_t param_1)

{
                    // 0x6518c0  35  pass_managed_initialize_method_pointer
  ui_system_data_config = param_1;
  return;
}



uint64_t FUN_1806518d0(uint64_t param_1,uint64_t param_2)

{
  FUN_180651910();
  if ((param_2 & 1) != 0) {
    free(param_1,400);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180651910(uint64_t *param_1)
void FUN_180651910(uint64_t *param_1)

{
  *param_1 = &unknown_var_9808_ptr;
  system_cache_buffer = 0;
  if (param_1[0x2d] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[1] = &unknown_var_9792_ptr;
  return;
}





