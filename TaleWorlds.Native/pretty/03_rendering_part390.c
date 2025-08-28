#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part390.c - 6 个函数

// 函数: void FUN_180482450(int64_t *param_1,char *param_2)
void FUN_180482450(int64_t *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  char *pcVar6;
  int64_t *plVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint uVar10;
  int8_t auStack_118 [48];
  uint uStack_e8;
  int64_t lStack_e0;
  char *pcStack_d8;
  int32_t uStack_d0;
  int32_t uStack_cc;
  int32_t uStack_c8;
  int32_t uStack_c4;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  char *pcStack_98;
  char cStack_90;
  uint8_t uStack_8f;
  char acStack_88 [8];
  uint64_t uStack_80;
  uint64_t uStack_78;
  char acStack_60 [8];
  char acStack_58 [8];
  int8_t auStack_50 [32];
  uint64_t uStack_30;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  uVar10 = 0;
  uStack_e8 = 0;
  lVar8 = *param_1;
  pcStack_98 = param_2;
  if (*(char *)(lVar8 + 0x30) == '\0') {
    if (*(int64_t *)(lVar8 + 0x28) != -1) {
      closesocket();
      *(uint64_t *)(*param_1 + 0x28) = 0xffffffffffffffff;
    }
    uStack_d0 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_cc = 2;
    uStack_c8 = 1;
    uStack_c4 = 6;
    lStack_e0 = 0;
    puVar4 = (uint64_t *)FUN_180481f90(&cStack_90,*(int16_t *)(*param_1 + 0x20));
    if (0xf < (uint64_t)puVar4[3]) {
      puVar4 = (uint64_t *)*puVar4;
    }
    plVar7 = (int64_t *)*param_1;
    if (0xf < (uint64_t)plVar7[3]) {
      plVar7 = (int64_t *)*plVar7;
    }
    iVar2 = getaddrinfo(plVar7,puVar4,&uStack_d0,&lStack_e0);
    if (0xf < uStack_78) {
      uVar9 = uStack_78 + 1;
      lVar5 = CONCAT71(uStack_8f,cStack_90);
      lVar8 = lVar5;
      if (0xfff < uVar9) {
        uVar9 = uStack_78 + 0x28;
        lVar8 = *(int64_t *)(lVar5 + -8);
        if (0x1f < (lVar5 - lVar8) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar8,uVar9);
    }
    uStack_80 = 0;
    uStack_78 = 0xf;
    cStack_90 = '\0';
    lVar8 = lStack_e0;
    if (iVar2 == 0) {
      for (; lVar8 != 0; lVar8 = *(int64_t *)(lVar8 + 0x28)) {
        lVar5 = socket(*(int32_t *)(lVar8 + 4),*(int32_t *)(lVar8 + 8),
                       *(int32_t *)(lVar8 + 0xc));
        if (lVar5 != -1) {
          iVar2 = connect(lVar5,*(uint64_t *)(lVar8 + 0x20),*(int32_t *)(lVar8 + 0x10));
          if (iVar2 != -1) {
            pcVar6 = (char *)FUN_180482c20(acStack_60,lVar5);
            uStack_e8 = uVar10 | 2;
            if (*pcVar6 == '\0') {
              pcVar6 = (char *)FUN_180482c20(&cStack_90,lVar5);
              uStack_e8 = 6;
              if (*pcVar6 != '\0') goto LAB_18048265d;
              bVar1 = true;
            }
            else {
LAB_18048265d:
              bVar1 = false;
            }
            uVar10 = uStack_e8;
            if (((uStack_e8 & 4) != 0) &&
               (uVar10 = uStack_e8 & 0xfffffffb, uStack_e8 = uVar10, cStack_90 != '\0')) {
              pcStack_d8 = acStack_88;
              SystemResourceAllocator(&uStack_80);
            }
            if (((uVar10 & 2) != 0) &&
               (uVar10 = uVar10 & 0xfffffffd, uStack_e8 = uVar10, acStack_60[0] != '\0')) {
              pcStack_d8 = acStack_58;
              SystemResourceAllocator(auStack_50);
            }
            if (bVar1) {
              *(int64_t *)(*param_1 + 0x28) = lVar5;
              *param_2 = '\0';
              goto LAB_180482706;
            }
          }
          closesocket(lVar5);
        }
      }
      uVar3 = WSAGetLastError();
      FUN_1804820a0(param_2,uVar3);
LAB_180482706:
      uStack_e8 = uVar10 | 1;
    }
    else {
      uVar3 = WSAGetLastError();
      FUN_1804820a0(param_2,uVar3);
      uStack_e8 = 1;
    }
    if (lStack_e0 != 0) {
      freeaddrinfo();
    }
  }
  else {
    *param_2 = *(char *)(lVar8 + 0x30);
    pcStack_d8 = param_2 + 8;
    *(int32_t *)pcStack_d8 = *(int32_t *)(lVar8 + 0x38);
    FUN_18018b350(param_2 + 0x10,lVar8 + 0x40);
    uStack_e8 = 1;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_118);
}



int8_t * FUN_180482750(int64_t *param_1,int8_t *param_2,int64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (*(int64_t *)(*param_1 + 0x28) == -1) {
    FUN_1804820a0(param_2,0x2749);
  }
  else {
    if (param_4 != 0) {
      do {
        uVar2 = param_4;
        if (0x7fffffff < param_4) {
          uVar2 = 0x7fffffff;
        }
        iVar1 = send(*(uint64_t *)(*param_1 + 0x28),param_3,uVar2,0,uVar3,uVar4);
        if (iVar1 == -1) {
          uVar3 = WSAGetLastError();
          FUN_1804820a0(param_2,uVar3);
          return param_2;
        }
        param_3 = param_3 + iVar1;
        param_4 = param_4 - (int64_t)iVar1;
      } while (param_4 != 0);
    }
    *param_2 = 0;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180482840(int64_t *param_1,char *param_2,uint64_t param_3,uint64_t param_4,
void FUN_180482840(int64_t *param_1,char *param_2,uint64_t param_3,uint64_t param_4,
                  int64_t *param_5)

{
  char cVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int32_t uVar9;
  int8_t auStack_108 [32];
  uint uStack_e8;
  char *pcStack_e0;
  uint64_t uStack_d8;
  char *pcStack_d0;
  char acStack_c8 [8];
  int32_t auStack_c0 [2];
  int8_t auStack_b8 [32];
  char acStack_98 [8];
  int32_t auStack_90 [2];
  int8_t auStack_88 [32];
  char acStack_68 [8];
  char acStack_60 [8];
  int8_t auStack_58 [32];
  uint64_t uStack_38;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_108;
  uStack_e8 = 0;
  pcStack_d0 = param_2;
  if (*(int64_t *)(*param_1 + 0x28) == -1) {
    FUN_1804820a0(param_2,0x2749);
    uStack_e8 = 1;
  }
  else {
    iVar5 = recv(*(int64_t *)(*param_1 + 0x28),param_3,0x4000,0);
    if (iVar5 < 1) {
      uVar9 = FUN_180482290(acStack_98);
      if (*(int64_t *)(*param_1 + 0x28) != -1) {
        uVar9 = closesocket();
        *(uint64_t *)(*param_1 + 0x28) = 0xffffffffffffffff;
      }
      *param_5 = 0;
      if (iVar5 == 0) {
        pcVar6 = (char *)FUN_18047aa30(uVar9,acStack_68);
        uVar7 = 2;
      }
      else {
        acStack_c8[0] = acStack_98[0];
        if (acStack_98[0] != '\0') {
          pcStack_e0 = (char *)auStack_c0;
          auStack_c0[0] = auStack_90[0];
          FUN_18018b350(auStack_b8,auStack_88);
        }
        pcVar6 = acStack_c8;
        uVar7 = 4;
      }
      cVar1 = *pcVar6;
      *param_2 = cVar1;
      if (cVar1 != '\0') {
        pcStack_e0 = param_2 + 8;
        *(int32_t *)pcStack_e0 = *(int32_t *)(pcVar6 + 8);
        param_2[0x20] = '\0';
        param_2[0x21] = '\0';
        param_2[0x22] = '\0';
        param_2[0x23] = '\0';
        param_2[0x24] = '\0';
        param_2[0x25] = '\0';
        param_2[0x26] = '\0';
        param_2[0x27] = '\0';
        param_2[0x28] = '\0';
        param_2[0x29] = '\0';
        param_2[0x2a] = '\0';
        param_2[0x2b] = '\0';
        param_2[0x2c] = '\0';
        param_2[0x2d] = '\0';
        param_2[0x2e] = '\0';
        param_2[0x2f] = '\0';
        uVar9 = *(int32_t *)(pcVar6 + 0x14);
        uVar2 = *(int32_t *)(pcVar6 + 0x18);
        uVar3 = *(int32_t *)(pcVar6 + 0x1c);
        *(int32_t *)(param_2 + 0x10) = *(int32_t *)(pcVar6 + 0x10);
        *(int32_t *)(param_2 + 0x14) = uVar9;
        *(int32_t *)(param_2 + 0x18) = uVar2;
        *(int32_t *)(param_2 + 0x1c) = uVar3;
        uVar4 = *(uint64_t *)(pcVar6 + 0x28);
        *(uint64_t *)(param_2 + 0x20) = *(uint64_t *)(pcVar6 + 0x20);
        *(uint64_t *)(param_2 + 0x28) = uVar4;
        pcVar6[0x20] = '\0';
        pcVar6[0x21] = '\0';
        pcVar6[0x22] = '\0';
        pcVar6[0x23] = '\0';
        pcVar6[0x24] = '\0';
        pcVar6[0x25] = '\0';
        pcVar6[0x26] = '\0';
        pcVar6[0x27] = '\0';
        pcVar6[0x28] = '\x0f';
        pcVar6[0x29] = '\0';
        pcVar6[0x2a] = '\0';
        pcVar6[0x2b] = '\0';
        pcVar6[0x2c] = '\0';
        pcVar6[0x2d] = '\0';
        pcVar6[0x2e] = '\0';
        pcVar6[0x2f] = '\0';
        pcVar6[0x10] = '\0';
      }
      uVar8 = uVar7 | 1;
      uStack_e8 = uVar8;
      if ((uVar7 & 4) != 0) {
        uVar8 = uVar7 & 0xfffffffb | 1;
        uStack_e8 = uVar8;
        if (acStack_c8[0] != '\0') {
          pcStack_e0 = (char *)auStack_c0;
          SystemResourceAllocator(auStack_b8);
        }
      }
      if (((uVar8 & 2) != 0) && (uStack_e8 = uVar8 & 0xfffffffd, acStack_68[0] != '\0')) {
        pcStack_e0 = acStack_60;
        SystemResourceAllocator(auStack_58);
      }
      if (acStack_98[0] != '\0') {
        pcStack_e0 = (char *)auStack_90;
        SystemResourceAllocator(auStack_88);
      }
    }
    else {
      *param_5 = (int64_t)iVar5;
      *param_2 = '\0';
      uStack_e8 = 1;
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_108);
}





// 函数: void FUN_180482a50(int64_t *param_1)
void FUN_180482a50(int64_t *param_1)

{
  int64_t lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x30) == '\0') {
      WSACleanup();
    }
    if (*(char *)(lVar1 + 0x30) != '\0') {
      SystemResourceAllocator(lVar1 + 0x40);
    }
    SystemResourceAllocator(lVar1);
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
    free(lVar1,0x60);
    return;
  }
  return;
}



int8_t *
FUN_180482ac0(int8_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(uint64_t *)(param_1 + 0x18) = 0xf;
  *param_1 = 0;
  FUN_1803f45e0(param_1,param_2[2] + 1,param_3,param_4,1,0xfffffffffffffffe);
  puVar1 = param_2 + 2;
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  FUN_1803f5400(param_1,param_2,*puVar1);
  FUN_18009f020(param_1,0x3a);
  return param_1;
}



uint64_t * FUN_180482b40(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  
  uVar1 = param_3[2];
  uVar2 = param_2[2];
  if ((param_2[3] - uVar2 < uVar1) && (uVar2 <= param_3[3] - uVar1)) {
    puVar4 = param_2;
    if (0xf < (uint64_t)param_2[3]) {
      puVar4 = (uint64_t *)*param_2;
    }
    puVar4 = (uint64_t *)FUN_180482cc0(param_3,param_2,puVar4);
    param_1[2] = 0;
    param_1[3] = 0;
    uVar3 = puVar4[1];
    *param_1 = *puVar4;
    param_1[1] = uVar3;
    uVar3 = puVar4[3];
    param_1[2] = puVar4[2];
    param_1[3] = uVar3;
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(int8_t *)puVar4 = 0;
  }
  else {
    if (0xf < (uint64_t)param_3[3]) {
      param_3 = (uint64_t *)*param_3;
    }
    puVar4 = (uint64_t *)FUN_1803f5400(param_2,param_3,uVar1,uVar2,0,0xfffffffffffffffe);
    param_1[2] = 0;
    param_1[3] = 0;
    uVar3 = puVar4[1];
    *param_1 = *puVar4;
    param_1[1] = uVar3;
    uVar3 = puVar4[3];
    param_1[2] = puVar4[2];
    param_1[3] = uVar3;
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(int8_t *)puVar4 = 0;
  }
  return param_1;
}



int8_t *
FUN_180482c20(int8_t *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)

{
  int iVar1;
  int32_t uVar2;
  int32_t auStack_20 [2];
  uint64_t uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  auStack_20[0] = 0x40000;
  iVar1 = setsockopt(param_2,0xffff,param_4,auStack_20,4);
  if (iVar1 == -1) {
    uVar2 = WSAGetLastError();
    FUN_1804820a0(param_1,uVar2);
  }
  else {
    *param_1 = 0;
  }
  return param_1;
}





// 函数: void FUN_180482cc0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180482cc0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  code *pcVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  
  uVar2 = param_1[3];
  lVar3 = param_1[2];
  if (param_4 <= uVar2 - lVar3) {
    param_1[2] = param_4 + lVar3;
    if (0xf < uVar2) {
      param_1 = (uint64_t *)*param_1;
    }
                    // WARNING: Subroutine does not return
    memmove((int64_t)param_1 + param_4,param_1,lVar3 + 1);
  }
  if (param_4 <= 0x7fffffffffffffffU - lVar3) {
    uVar6 = param_4 + lVar3 | 0xf;
    uVar7 = 0x7fffffffffffffff;
    if (((uVar6 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) &&
       (uVar1 = (uVar2 >> 1) + uVar2, uVar7 = uVar6, uVar6 < uVar1)) {
      uVar7 = uVar1;
    }
    uVar5 = FUN_180067110(uVar7 + 1);
    param_1[2] = param_4 + lVar3;
    param_1[3] = uVar7;
    if (0xf < uVar2) {
                    // WARNING: Subroutine does not return
      memcpy(uVar5,param_3,param_4);
    }
                    // WARNING: Subroutine does not return
    memcpy(uVar5,param_3,param_4);
  }
  FUN_1800670f0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}





// 函数: void FUN_180482d79(void)
void FUN_180482d79(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RDI;
  int64_t in_R9;
  uint64_t unaff_R14;
  
  uVar3 = in_R9 + unaff_RBP | 0xf;
  if (((uVar3 <= unaff_RDI) && (unaff_R14 <= unaff_RDI - (unaff_R14 >> 1))) &&
     (uVar1 = (unaff_R14 >> 1) + unaff_R14, unaff_RDI = uVar3, uVar3 < uVar1)) {
    unaff_RDI = uVar1;
  }
  uVar2 = FUN_180067110(unaff_RDI + 1);
  *(int64_t *)(unaff_RBX + 0x10) = in_R9 + unaff_RBP;
  *(uint64_t *)(unaff_RBX + 0x18) = unaff_RDI;
  if (0xf < unaff_R14) {
                    // WARNING: Subroutine does not return
    memcpy(uVar2);
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar2);
}





// 函数: void FUN_180482e47(void)
void FUN_180482e47(void)

{
  return;
}



int8_t FUN_180482e70(char *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  char *pcVar1;
  char cVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  code *pcVar5;
  bool bVar6;
  int8_t uVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  char *pcStackX_18;
  
  pcVar1 = param_1 + 0x10;
  if ((*(uint64_t *)(param_1 + 0x10) & 3) == 0) {
    FUN_1803f45e0(param_2,(*(uint64_t *)(param_1 + 0x10) >> 2) * 3);
    pcStackX_18 = param_1;
    if (0xf < *(uint64_t *)(param_1 + 0x18)) {
      pcStackX_18 = *(char **)param_1;
    }
    while (cVar2 = *pcStackX_18, cVar2 != '\0') {
      if ((byte)(cVar2 + 0xbfU) < 0x1a) {
        uVar11 = (int)cVar2 - 0x41;
      }
      else if ((byte)(cVar2 + 0x9fU) < 0x1a) {
        uVar11 = (int)cVar2 - 0x47;
      }
      else if ((byte)(cVar2 - 0x30U) < 10) {
        uVar11 = (int)cVar2 + 4;
      }
      else if (cVar2 == '+') {
        uVar11 = 0x3e;
      }
      else {
        uVar11 = (cVar2 != '/') + 0x3f;
      }
      cVar2 = pcStackX_18[1];
      if ((byte)(cVar2 + 0xbfU) < 0x1a) {
        uVar14 = (uint64_t)((int)cVar2 - 0x41);
      }
      else if ((byte)(cVar2 + 0x9fU) < 0x1a) {
        uVar14 = (uint64_t)((int)cVar2 - 0x47);
      }
      else if ((byte)(cVar2 - 0x30U) < 10) {
        uVar14 = (uint64_t)((int)cVar2 + 4);
      }
      else if (cVar2 == '+') {
        uVar14 = 0x3e;
      }
      else {
        uVar14 = (uint64_t)((cVar2 != '/') + 0x3f);
      }
      cVar2 = pcStackX_18[2];
      if ((byte)(cVar2 + 0xbfU) < 0x1a) {
        uVar15 = (uint64_t)((int)cVar2 - 0x41);
      }
      else if ((byte)(cVar2 + 0x9fU) < 0x1a) {
        uVar15 = (uint64_t)((int)cVar2 - 0x47);
      }
      else if ((byte)(cVar2 - 0x30U) < 10) {
        uVar15 = (uint64_t)((int)cVar2 + 4);
      }
      else if (cVar2 == '+') {
        uVar15 = 0x3e;
      }
      else {
        uVar15 = (uint64_t)((cVar2 != '/') + 0x3f);
      }
      cVar2 = pcStackX_18[3];
      if ((byte)(cVar2 + 0xbfU) < 0x1a) {
        uVar13 = (int)cVar2 - 0x41;
      }
      else if ((byte)(cVar2 + 0x9fU) < 0x1a) {
        uVar13 = (int)cVar2 - 0x47;
      }
      else if ((byte)(cVar2 - 0x30U) < 10) {
        uVar13 = (int)cVar2 + 4;
      }
      else if (cVar2 == '+') {
        uVar13 = 0x3e;
      }
      else {
        uVar13 = (cVar2 != '/') + 0x3f;
      }
      uVar12 = (uint)uVar15;
      if (((uVar13 | uVar12 | (uint)uVar14 | uVar11) & 0x40) != 0) {
        if (0xf < *(uint64_t *)(param_1 + 0x18)) {
          param_1 = *(char **)param_1;
        }
        if ((pcStackX_18 + (4 - (int64_t)param_1) != *(char **)pcVar1) ||
           ((((uint)uVar14 | uVar11) & 0x40) != 0)) goto LAB_1804833e4;
        FUN_18009f020(param_2,(byte)(uVar14 >> 4) | (char)uVar11 << 2);
        if (uVar12 < 0x40) {
          FUN_18009f020(param_2,(byte)(uVar12 >> 2) | (char)uVar14 << 4);
          return pcStackX_18[3] == '=';
        }
        if ((pcStackX_18[3] != '=') || (pcStackX_18[2] != '=')) goto LAB_1804833e4;
        break;
      }
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      if (uVar4 <= uVar3) {
        if (uVar3 != 0x7fffffffffffffff) {
          uVar14 = uVar3 + 1 | 0xf;
          if (uVar14 < 0x8000000000000000) {
            if (0x7fffffffffffffff - (uVar4 >> 1) < uVar4) {
              uVar14 = 0x7fffffffffffffff;
            }
            else {
              uVar15 = (uVar4 >> 1) + uVar4;
              if (uVar14 < uVar15) {
                uVar14 = uVar15;
              }
            }
          }
          else {
            uVar14 = 0x7fffffffffffffff;
          }
          lVar8 = FUN_180067110(uVar14 + 1);
          param_2[3] = uVar14;
          param_2[2] = uVar3 + 1;
          if (0xf < uVar4) {
                    // WARNING: Subroutine does not return
            memcpy(lVar8,*param_2,uVar3,param_4,lVar8 + uVar3);
          }
                    // WARNING: Subroutine does not return
          memcpy(lVar8,param_2,uVar3,param_4,lVar8 + uVar3);
        }
LAB_1804833fb:
        FUN_1800670f0();
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
      param_2[2] = uVar3 + 1;
      puVar9 = param_2;
      if (0xf < uVar4) {
        puVar9 = (uint64_t *)*param_2;
      }
      *(byte *)((int64_t)puVar9 + uVar3) = (byte)(uVar14 >> 4) | (char)uVar11 << 2;
      *(int8_t *)((int64_t)puVar9 + uVar3 + 1) = 0;
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      if (uVar4 <= uVar3) {
        if (uVar3 != 0x7fffffffffffffff) {
          uVar14 = uVar3 + 1 | 0xf;
          if (uVar14 < 0x8000000000000000) {
            if (0x7fffffffffffffff - (uVar4 >> 1) < uVar4) {
              uVar14 = 0x7fffffffffffffff;
            }
            else {
              uVar15 = uVar4 + (uVar4 >> 1);
              if (uVar14 < uVar15) {
                uVar14 = uVar15;
              }
            }
          }
          else {
            uVar14 = 0x7fffffffffffffff;
          }
          uVar10 = FUN_180067110(uVar14 + 1);
          param_2[3] = uVar14;
          param_2[2] = uVar3 + 1;
          if (0xf < uVar4) {
                    // WARNING: Subroutine does not return
            memcpy(uVar10,*param_2,uVar3);
          }
                    // WARNING: Subroutine does not return
          memcpy(uVar10,param_2,uVar3);
        }
        goto LAB_1804833fb;
      }
      param_2[2] = uVar3 + 1;
      puVar9 = param_2;
      if (0xf < uVar4) {
        puVar9 = (uint64_t *)*param_2;
      }
      *(byte *)((int64_t)puVar9 + uVar3) = (byte)(uVar15 >> 2) | (char)uVar14 << 4;
      *(int8_t *)((int64_t)puVar9 + uVar3 + 1) = 0;
      uVar14 = param_2[3];
      uVar3 = param_2[2];
      if (uVar14 <= uVar3) {
        if (uVar3 != 0x7fffffffffffffff) {
          uVar15 = uVar3 + 1 | 0xf;
          if (uVar15 < 0x8000000000000000) {
            if (0x7fffffffffffffff - (uVar14 >> 1) < uVar14) {
              uVar15 = 0x7fffffffffffffff;
            }
            else {
              uVar4 = uVar14 + (uVar14 >> 1);
              if (uVar15 < uVar4) {
                uVar15 = uVar4;
              }
            }
          }
          else {
            uVar15 = 0x7fffffffffffffff;
          }
          uVar10 = FUN_180067110(uVar15 + 1);
          param_2[2] = uVar3 + 1;
          param_2[3] = uVar15;
          if (0xf < uVar14) {
                    // WARNING: Subroutine does not return
            memcpy(uVar10,*param_2,uVar3);
          }
                    // WARNING: Subroutine does not return
          memcpy(uVar10,param_2,uVar3);
        }
        goto LAB_1804833fb;
      }
      param_2[2] = uVar3 + 1;
      puVar9 = param_2;
      if (0xf < uVar14) {
        puVar9 = (uint64_t *)*param_2;
      }
      pcStackX_18 = pcStackX_18 + 4;
      *(byte *)((int64_t)puVar9 + uVar3) = (char)uVar15 << 6 | (byte)uVar13;
      *(int8_t *)((int64_t)puVar9 + uVar3 + 1) = 0;
    }
    bVar6 = true;
  }
  else {
LAB_1804833e4:
    bVar6 = false;
  }
  return bVar6;
}



char FUN_180483410(uint64_t *param_1,float param_2,uint64_t param_3,int64_t param_4)

{
  uint64_t *puVar1;
  byte bVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  byte bVar6;
  char cVar7;
  int64_t *plVar8;
  uint uVar9;
  int iVar10;
  int64_t lVar11;
  char cVar12;
  float fVar13;
  int aiStackX_8 [2];
  char cStackX_10;
  uint64_t uStackX_18;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_88;
  uint64_t uStack_80;
  
  cVar12 = '\0';
  iVar10 = *(int *)((int64_t)param_1 + 0xc) + -1;
  if ((int)(param_2 - (float)*(int *)(param_1 + 1)) < iVar10) {
    iVar10 = (int)(param_2 - (float)*(int *)(param_1 + 1));
  }
  cStackX_10 = *(char *)(param_1 + 2);
  cVar7 = '\0';
  if ('\0' < cStackX_10) {
    lVar11 = 0;
    uStackX_18 = param_3;
    do {
      if ((param_3 >> ((uint64_t)(uint)(int)cVar7 & 0x3f) & 1) != 0) {
        plVar8 = (int64_t *)(*(int64_t *)*param_1 + lVar11);
        iVar4 = (*(char *)(param_1 + 2) * iVar10 + (int)cVar7) * (int)(char)*(byte *)(param_1 + 4);
        bVar6 = (byte)iVar4 & 0xf;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xf;
          bVar6 = bVar6 - 0x10;
        }
        bVar2 = *(byte *)((int64_t)plVar8 + 0x12);
        uVar9 = *(uint *)(param_1[3] + (int64_t)(iVar4 >> 4) * 2) >> (bVar6 & 0x1f) & 0xffff &
                (uint)(ushort)((1 << (*(byte *)(param_1 + 4) & 0x1f)) - 1);
        lVar5 = (int64_t)cVar12;
        aiStackX_8[0] = ((bVar2 + 1) * 3 + (uint)*(byte *)((int64_t)plVar8 + 0x13)) * uVar9;
        if ((int)(*(ushort *)(plVar8 + 2) - 2) < (int)uVar9) {
          FUN_18040f060(plVar8,*plVar8,aiStackX_8,&uStack_88,bVar2);
          fVar13 = 0.0;
          puVar1 = (uint64_t *)(param_4 + lVar5 * 0x30);
          *puVar1 = uStack_88;
          puVar1[1] = uStack_80;
          puVar1 = (uint64_t *)(param_4 + 0x10 + lVar5 * 0x30);
          *puVar1 = uStack_88;
          puVar1[1] = uStack_80;
        }
        else {
          FUN_18040f060(plVar8,*plVar8,aiStackX_8,&uStack_a8,bVar2);
          bVar6 = (byte)aiStackX_8[0] & 0xf;
          iVar4 = aiStackX_8[0] + (uint)*(byte *)((int64_t)plVar8 + 0x13);
          if (aiStackX_8[0] < 0) {
            aiStackX_8[0] = aiStackX_8[0] + 0xf;
            bVar6 = bVar6 - 0x10;
          }
          fVar13 = (float)(ushort)((ushort)(*(uint *)(*plVar8 + (int64_t)(aiStackX_8[0] >> 4) * 2)
                                           >> (bVar6 & 0x1f)) &
                                  (1 << (*(byte *)((int64_t)plVar8 + 0x13) & 0x1f)) - 1U);
          aiStackX_8[0] = iVar4;
          FUN_18040f060(plVar8,*plVar8,aiStackX_8,&uStack_88,
                        *(int8_t *)((int64_t)plVar8 + 0x12));
          bVar6 = (byte)aiStackX_8[0] & 0xf;
          if (aiStackX_8[0] < 0) {
            aiStackX_8[0] = aiStackX_8[0] + 0xf;
            bVar6 = bVar6 - 0x10;
          }
          lVar3 = *plVar8;
          puVar1 = (uint64_t *)(param_4 + lVar5 * 0x30);
          *puVar1 = uStack_a8;
          puVar1[1] = uStack_a0;
          puVar1 = (uint64_t *)(param_4 + 0x10 + lVar5 * 0x30);
          *puVar1 = uStack_88;
          puVar1[1] = uStack_80;
          fVar13 = (param_2 - fVar13) /
                   ((float)(ushort)((ushort)(*(uint *)(lVar3 + (int64_t)(aiStackX_8[0] >> 4) * 2)
                                            >> (bVar6 & 0x1f)) &
                                   (1 << (*(byte *)((int64_t)plVar8 + 0x13) & 0x1f)) - 1U) - fVar13
                   );
        }
        *(float *)(param_4 + 0x24 + lVar5 * 0x30) = fVar13;
        cVar12 = cVar12 + '\x01';
        *(char *)(param_4 + 0x20 + lVar5 * 0x30) = cVar7;
        param_3 = uStackX_18;
      }
      cVar7 = cVar7 + '\x01';
      lVar11 = lVar11 + 0x4a;
    } while (cVar7 < cStackX_10);
  }
  return cVar12;
}



char FUN_18048346e(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,uint64_t param_10,uint64_t param_11)

{
  uint64_t *puVar1;
  byte bVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  byte bVar6;
  char unaff_BL;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t *plVar7;
  uint64_t unaff_RDI;
  uint uVar8;
  int64_t in_R11;
  uint64_t *unaff_R12;
  int unaff_R13D;
  uint64_t unaff_R14;
  int64_t lVar9;
  char unaff_R15B;
  float fVar10;
  uint64_t unaff_XMM6_Qa;
  uint64_t unaff_XMM6_Qb;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  int iStack00000000000000e0;
  char in_stack_000000e8;
  uint64_t in_stack_000000f0;
  
  *(uint64_t *)(in_R11 + -0x38) = unaff_R14;
  lVar9 = 0;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM7_Dd;
  *(uint64_t *)(in_R11 + 0x20) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x30) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x48) = unaff_XMM6_Qa;
  *(uint64_t *)(in_R11 + -0x40) = unaff_XMM6_Qb;
  do {
    if ((param_3 >> ((uint64_t)(uint)(int)unaff_BL & 0x3f) & 1) != 0) {
      plVar7 = (int64_t *)(*(int64_t *)*unaff_R12 + lVar9);
      iVar4 = (*(char *)(unaff_R12 + 2) * unaff_R13D + (int)unaff_BL) *
              (int)(char)*(byte *)(unaff_R12 + 4);
      bVar6 = (byte)iVar4 & 0xf;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xf;
        bVar6 = bVar6 - 0x10;
      }
      bVar2 = *(byte *)((int64_t)plVar7 + 0x12);
      uVar8 = *(uint *)(unaff_R12[3] + (int64_t)(iVar4 >> 4) * 2) >> (bVar6 & 0x1f) & 0xffff &
              (uint)(ushort)((1 << (*(byte *)(unaff_R12 + 4) & 0x1f)) - 1);
      lVar5 = (int64_t)unaff_R15B;
      iStack00000000000000e0 = ((bVar2 + 1) * 3 + (uint)*(byte *)((int64_t)plVar7 + 0x13)) * uVar8;
      if ((int)(*(ushort *)(plVar7 + 2) - 2) < (int)uVar8) {
        FUN_18040f060(plVar7,*plVar7,&stack0x000000e0,&param_10,bVar2);
        fVar10 = 0.0;
        puVar1 = (uint64_t *)(unaff_RBP + lVar5 * 0x30);
        *puVar1 = param_10;
        puVar1[1] = param_11;
        puVar1 = (uint64_t *)(unaff_RBP + 0x10 + lVar5 * 0x30);
        *puVar1 = param_10;
        puVar1[1] = param_11;
      }
      else {
        FUN_18040f060(plVar7,*plVar7,&stack0x000000e0,&param_6,bVar2);
        bVar6 = (byte)iStack00000000000000e0 & 0xf;
        iVar4 = iStack00000000000000e0 + (uint)*(byte *)((int64_t)plVar7 + 0x13);
        if (iStack00000000000000e0 < 0) {
          iStack00000000000000e0 = iStack00000000000000e0 + 0xf;
          bVar6 = bVar6 - 0x10;
        }
        fVar10 = (float)(ushort)((ushort)(*(uint *)(*plVar7 +
                                                   (int64_t)(iStack00000000000000e0 >> 4) * 2) >>
                                         (bVar6 & 0x1f)) &
                                (1 << (*(byte *)((int64_t)plVar7 + 0x13) & 0x1f)) - 1U);
        iStack00000000000000e0 = iVar4;
        FUN_18040f060(plVar7,*plVar7,&stack0x000000e0,&param_10,
                      *(int8_t *)((int64_t)plVar7 + 0x12));
        bVar6 = (byte)iStack00000000000000e0 & 0xf;
        if (iStack00000000000000e0 < 0) {
          iStack00000000000000e0 = iStack00000000000000e0 + 0xf;
          bVar6 = bVar6 - 0x10;
        }
        lVar3 = *plVar7;
        puVar1 = (uint64_t *)(unaff_RBP + lVar5 * 0x30);
        *puVar1 = param_6;
        puVar1[1] = param_7;
        puVar1 = (uint64_t *)(unaff_RBP + 0x10 + lVar5 * 0x30);
        *puVar1 = param_10;
        puVar1[1] = param_11;
        fVar10 = (unaff_XMM8_Da - fVar10) /
                 ((float)(ushort)((ushort)(*(uint *)(lVar3 + (int64_t)(iStack00000000000000e0 >> 4)
                                                             * 2) >> (bVar6 & 0x1f)) &
                                 (1 << (*(byte *)((int64_t)plVar7 + 0x13) & 0x1f)) - 1U) - fVar10);
      }
      *(float *)(unaff_RBP + 0x24 + lVar5 * 0x30) = fVar10;
      unaff_R15B = unaff_R15B + '\x01';
      *(char *)(unaff_RBP + 0x20 + lVar5 * 0x30) = unaff_BL;
      param_3 = in_stack_000000f0;
    }
    unaff_BL = unaff_BL + '\x01';
    lVar9 = lVar9 + 0x4a;
  } while (unaff_BL < in_stack_000000e8);
  return unaff_R15B;
}



int8_t FUN_1804836a1(void)

{
  int8_t unaff_R15B;
  
  return unaff_R15B;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



