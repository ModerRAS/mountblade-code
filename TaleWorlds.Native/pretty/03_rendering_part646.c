#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part646.c - 7 个函数

// 函数: void FUN_1806307a0(int64_t param_1,int64_t param_2,char *param_3,uint64_t *param_4)
void FUN_1806307a0(int64_t param_1,int64_t param_2,char *param_3,uint64_t *param_4)

{
  char cVar1;
  uint64_t uVar2;
  double dVar3;
  char *pcVar4;
  int64_t lVar5;
  int8_t *puVar6;
  char *pcVar7;
  char *pcVar8;
  int8_t *puVar9;
  int8_t auStack_178 [32];
  double dStack_158;
  uint64_t uStack_148;
  char acStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  uVar2 = *param_4;
  uStack_148._0_4_ = (float)uVar2;
  if (ABS((float)uStack_148) < 0.001) {
    uStack_148._0_4_ = 0.0;
  }
  uStack_148._4_4_ = (float)((uint64_t)uVar2 >> 0x20);
  if (ABS(uStack_148._4_4_) < 0.001) {
    uStack_148._4_4_ = 0.0;
  }
  dVar3 = (double)(float)uStack_148;
  dStack_158 = (double)uStack_148._4_4_;
  uStack_148 = uVar2;
  FUN_1800634b0(acStack_138,0x100,&unknown_var_5352_ptr,dVar3);
  param_1 = param_1 + 0x60;
  pcVar8 = acStack_138;
  while (acStack_138[0] != '\0') {
    pcVar8 = pcVar8 + 1;
    acStack_138[0] = *pcVar8;
  }
  pcVar8 = pcVar8 + (1 - (int64_t)acStack_138);
  pcVar4 = (char *)FUN_1804c1300(param_1,pcVar8);
  if (pcVar8 != (char *)0x0) {
    pcVar7 = pcVar4;
    do {
      *pcVar7 = pcVar7[(int64_t)(acStack_138 + -(int64_t)pcVar4)];
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + -1;
    } while (pcVar8 != (char *)0x0);
  }
  lVar5 = FUN_1800a02a0(param_2,param_3);
  if (lVar5 == 0) {
    cVar1 = *param_3;
    pcVar8 = param_3;
    while (cVar1 != '\0') {
      pcVar8 = pcVar8 + 1;
      cVar1 = *pcVar8;
    }
    pcVar8 = pcVar8 + (1 - (int64_t)param_3);
    puVar6 = (int8_t *)FUN_1804c1300(param_1,pcVar8);
    if (pcVar8 != (char *)0x0) {
      puVar9 = puVar6;
      do {
        *puVar9 = puVar9[(int64_t)param_3 - (int64_t)puVar6];
        puVar9 = puVar9 + 1;
        pcVar8 = pcVar8 + -1;
      } while (pcVar8 != (char *)0x0);
    }
    lVar5 = FUN_1804c1980(param_1,puVar6,pcVar4);
    if (*(int64_t *)(param_2 + 0x40) == 0) {
      *(uint64_t *)(lVar5 + 0x28) = 0;
      *(int64_t *)(param_2 + 0x40) = lVar5;
      *(int64_t *)(param_2 + 0x48) = lVar5;
      *(int64_t *)(lVar5 + 0x20) = param_2;
      *(uint64_t *)(lVar5 + 0x30) = 0;
    }
    else {
      *(uint64_t *)(lVar5 + 0x28) = *(uint64_t *)(param_2 + 0x48);
      *(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x30) = lVar5;
      *(int64_t *)(param_2 + 0x48) = lVar5;
      *(int64_t *)(lVar5 + 0x20) = param_2;
      *(uint64_t *)(lVar5 + 0x30) = 0;
    }
  }
  else {
    lVar5 = FUN_1800a02a0(param_2,param_3);
    cVar1 = *pcVar4;
    pcVar8 = pcVar4;
    while (cVar1 != '\0') {
      pcVar8 = pcVar8 + 1;
      cVar1 = *pcVar8;
    }
    *(char **)(lVar5 + 8) = pcVar4;
    *(int64_t *)(lVar5 + 0x18) = (int64_t)pcVar8 - (int64_t)pcVar4;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180630980(int64_t param_1,int64_t param_2,uint64_t param_3,int32_t *param_4)
void FUN_180630980(int64_t param_1,int64_t param_2,uint64_t param_3,int32_t *param_4)

{
  char cVar1;
  char *pcVar2;
  int64_t lVar3;
  int8_t *puVar4;
  char *pcVar5;
  char *pcVar6;
  int8_t *puVar7;
  int8_t auStack_168 [32];
  int32_t uStack_148;
  char acStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  uStack_148 = param_4[1];
  FUN_1800634b0(acStack_138,0x100,&unknown_var_5344_ptr,*param_4);
  param_1 = param_1 + 0x60;
  pcVar5 = acStack_138;
  while (acStack_138[0] != '\0') {
    pcVar5 = pcVar5 + 1;
    acStack_138[0] = *pcVar5;
  }
  pcVar5 = pcVar5 + (1 - (int64_t)acStack_138);
  pcVar2 = (char *)FUN_1804c1300(param_1,pcVar5);
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar2;
    do {
      *pcVar6 = pcVar6[(int64_t)(acStack_138 + -(int64_t)pcVar2)];
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + -1;
    } while (pcVar5 != (char *)0x0);
  }
  lVar3 = FUN_1800a02a0(param_2,&unknown_var_3692_ptr);
  if (lVar3 == 0) {
    pcVar5 = "value";
    do {
      pcVar6 = pcVar5;
      pcVar5 = pcVar6 + 1;
    } while (*pcVar5 != '\0');
    pcVar6 = pcVar6 + -0x180a0696a;
    puVar4 = (int8_t *)FUN_1804c1300(param_1,pcVar6);
    if (pcVar6 != (char *)0x0) {
      puVar7 = puVar4;
      do {
        *puVar7 = puVar7[(int64_t)&unknown_var_3692_ptr - (int64_t)puVar4];
        puVar7 = puVar7 + 1;
        pcVar6 = pcVar6 + -1;
      } while (pcVar6 != (char *)0x0);
    }
    lVar3 = FUN_1804c1980(param_1,puVar4,pcVar2);
    if (*(int64_t *)(param_2 + 0x40) == 0) {
      *(uint64_t *)(lVar3 + 0x28) = 0;
      *(int64_t *)(param_2 + 0x40) = lVar3;
      *(int64_t *)(param_2 + 0x48) = lVar3;
      *(int64_t *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
    else {
      *(uint64_t *)(lVar3 + 0x28) = *(uint64_t *)(param_2 + 0x48);
      *(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x30) = lVar3;
      *(int64_t *)(param_2 + 0x48) = lVar3;
      *(int64_t *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
  }
  else {
    lVar3 = FUN_1800a02a0(param_2,&unknown_var_3692_ptr);
    cVar1 = *pcVar2;
    pcVar5 = pcVar2;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    *(char **)(lVar3 + 8) = pcVar2;
    *(int64_t *)(lVar3 + 0x18) = (int64_t)pcVar5 - (int64_t)pcVar2;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_168);
}





// 函数: void FUN_180630b20(int64_t param_1,int64_t param_2,char *param_3,char *param_4)
void FUN_180630b20(int64_t param_1,int64_t param_2,char *param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  int64_t lVar3;
  int8_t *puVar4;
  char *pcVar5;
  char *pcVar6;
  int8_t *puVar7;
  
  param_1 = param_1 + 0x60;
  cVar1 = *param_4;
  pcVar6 = param_4;
  while (cVar1 != '\0') {
    pcVar6 = pcVar6 + 1;
    cVar1 = *pcVar6;
  }
  pcVar6 = pcVar6 + (1 - (int64_t)param_4);
  pcVar2 = (char *)FUN_1804c1300(param_1,pcVar6);
  if (pcVar6 != (char *)0x0) {
    pcVar5 = pcVar2;
    do {
      *pcVar5 = pcVar5[(int64_t)param_4 - (int64_t)pcVar2];
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + -1;
    } while (pcVar6 != (char *)0x0);
  }
  lVar3 = FUN_1800a02a0(param_2,param_3);
  if (lVar3 == 0) {
    pcVar6 = param_3;
    if (*param_3 != (char)lVar3) {
      do {
        pcVar6 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
    }
    pcVar6 = pcVar6 + (1 - (int64_t)param_3);
    puVar4 = (int8_t *)FUN_1804c1300(param_1,pcVar6);
    if (pcVar6 != (char *)0x0) {
      puVar7 = puVar4;
      do {
        *puVar7 = puVar7[(int64_t)param_3 - (int64_t)puVar4];
        puVar7 = puVar7 + 1;
        pcVar6 = pcVar6 + -1;
      } while (pcVar6 != (char *)0x0);
    }
    lVar3 = FUN_1804c1980(param_1,puVar4,pcVar2);
    if (*(int64_t *)(param_2 + 0x40) == 0) {
      *(uint64_t *)(lVar3 + 0x28) = 0;
      *(int64_t *)(param_2 + 0x40) = lVar3;
      *(int64_t *)(param_2 + 0x48) = lVar3;
      *(int64_t *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
    else {
      *(uint64_t *)(lVar3 + 0x28) = *(uint64_t *)(param_2 + 0x48);
      *(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x30) = lVar3;
      *(int64_t *)(param_2 + 0x48) = lVar3;
      *(int64_t *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
  }
  else {
    lVar3 = FUN_1800a02a0(param_2,param_3);
    cVar1 = *pcVar2;
    pcVar6 = pcVar2;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    *(char **)(lVar3 + 8) = pcVar2;
    *(int64_t *)(lVar3 + 0x18) = (int64_t)pcVar6 - (int64_t)pcVar2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180630c80(int64_t param_1,int64_t param_2,char *param_3)
void FUN_180630c80(int64_t param_1,int64_t param_2,char *param_3)

{
  char cVar1;
  int8_t *puVar2;
  int64_t lVar3;
  int8_t *puVar4;
  char *pcVar5;
  int8_t *puVar6;
  int8_t auStack_a8 [48];
  char acStack_78 [64];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  FUN_1800634b0(acStack_78,0x40,&unknown_var_4576_ptr);
  param_1 = param_1 + 0x60;
  pcVar5 = acStack_78;
  cVar1 = acStack_78[0];
  while (cVar1 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  pcVar5 = pcVar5 + (1 - (int64_t)acStack_78);
  puVar2 = (int8_t *)FUN_1804c1300(param_1,pcVar5);
  if (pcVar5 != (char *)0x0) {
    puVar4 = puVar2;
    do {
      *puVar4 = puVar4[(int64_t)(acStack_78 + -(int64_t)puVar2)];
      puVar4 = puVar4 + 1;
      pcVar5 = pcVar5 + -1;
    } while (pcVar5 != (char *)0x0);
  }
  lVar3 = FUN_1800a02a0(param_2,param_3);
  if (lVar3 == 0) {
    cVar1 = *param_3;
    pcVar5 = param_3;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    pcVar5 = pcVar5 + (1 - (int64_t)param_3);
    puVar4 = (int8_t *)FUN_1804c1300(param_1,pcVar5);
    if (pcVar5 != (char *)0x0) {
      puVar6 = puVar4;
      do {
        *puVar6 = puVar6[(int64_t)param_3 - (int64_t)puVar4];
        puVar6 = puVar6 + 1;
        pcVar5 = pcVar5 + -1;
      } while (pcVar5 != (char *)0x0);
    }
    lVar3 = FUN_1804c1980(param_1,puVar4,puVar2);
    if (*(int64_t *)(param_2 + 0x40) == 0) {
      *(uint64_t *)(lVar3 + 0x28) = 0;
      *(int64_t *)(param_2 + 0x40) = lVar3;
      *(int64_t *)(param_2 + 0x48) = lVar3;
      *(int64_t *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
    else {
      *(uint64_t *)(lVar3 + 0x28) = *(uint64_t *)(param_2 + 0x48);
      *(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x30) = lVar3;
      *(int64_t *)(param_2 + 0x48) = lVar3;
      *(int64_t *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
  }
  else {
    lVar3 = FUN_1800a02a0(param_2,param_3);
    pcVar5 = acStack_78;
    while (acStack_78[0] != '\0') {
      pcVar5 = pcVar5 + 1;
      acStack_78[0] = *pcVar5;
    }
    *(char **)(lVar3 + 8) = acStack_78;
    *(int64_t *)(lVar3 + 0x18) = (int64_t)pcVar5 - (int64_t)acStack_78;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180630e10(int64_t param_1,int64_t param_2,char *param_3)
void FUN_180630e10(int64_t param_1,int64_t param_2,char *param_3)

{
  char cVar1;
  int8_t *puVar2;
  int64_t lVar3;
  int8_t *puVar4;
  char *pcVar5;
  int8_t *puVar6;
  int8_t auStack_a8 [48];
  char acStack_78 [64];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  FUN_1800634b0(acStack_78,0x40,&unknown_var_2212_ptr);
  param_1 = param_1 + 0x60;
  pcVar5 = acStack_78;
  cVar1 = acStack_78[0];
  while (cVar1 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  pcVar5 = pcVar5 + (1 - (int64_t)acStack_78);
  puVar2 = (int8_t *)FUN_1804c1300(param_1,pcVar5);
  if (pcVar5 != (char *)0x0) {
    puVar4 = puVar2;
    do {
      *puVar4 = puVar4[(int64_t)(acStack_78 + -(int64_t)puVar2)];
      puVar4 = puVar4 + 1;
      pcVar5 = pcVar5 + -1;
    } while (pcVar5 != (char *)0x0);
  }
  lVar3 = FUN_1800a02a0(param_2,param_3);
  if (lVar3 == 0) {
    cVar1 = *param_3;
    pcVar5 = param_3;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    pcVar5 = pcVar5 + (1 - (int64_t)param_3);
    puVar4 = (int8_t *)FUN_1804c1300(param_1,pcVar5);
    if (pcVar5 != (char *)0x0) {
      puVar6 = puVar4;
      do {
        *puVar6 = puVar6[(int64_t)param_3 - (int64_t)puVar4];
        puVar6 = puVar6 + 1;
        pcVar5 = pcVar5 + -1;
      } while (pcVar5 != (char *)0x0);
    }
    lVar3 = FUN_1804c1980(param_1,puVar4,puVar2);
    if (*(int64_t *)(param_2 + 0x40) == 0) {
      *(uint64_t *)(lVar3 + 0x28) = 0;
      *(int64_t *)(param_2 + 0x40) = lVar3;
      *(int64_t *)(param_2 + 0x48) = lVar3;
      *(int64_t *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
    else {
      *(uint64_t *)(lVar3 + 0x28) = *(uint64_t *)(param_2 + 0x48);
      *(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x30) = lVar3;
      *(int64_t *)(param_2 + 0x48) = lVar3;
      *(int64_t *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
  }
  else {
    lVar3 = FUN_1800a02a0(param_2,param_3);
    pcVar5 = acStack_78;
    while (acStack_78[0] != '\0') {
      pcVar5 = pcVar5 + 1;
      acStack_78[0] = *pcVar5;
    }
    *(char **)(lVar3 + 8) = acStack_78;
    *(int64_t *)(lVar3 + 0x18) = (int64_t)pcVar5 - (int64_t)acStack_78;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_a8);
}



int64_t FUN_180630fb0(uint64_t param_1,uint64_t param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = FUN_1800a02a0();
  if (lVar1 != 0) {
    lVar2 = 0x180d48d24;
    if (*(int64_t *)(lVar1 + 8) != 0) {
      lVar2 = *(int64_t *)(lVar1 + 8);
    }
    (**(code **)(*param_3 + 0x10))(param_3,lVar2);
    return lVar2;
  }
  return 0;
}



uint64_t FUN_180630fcd(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  uint64_t uVar1;
  bool in_ZF;
  
  uVar1 = 0x180d48d24;
  if (!in_ZF) {
    uVar1 = param_1;
  }
  (**(code **)(param_3 + 0x10))();
  return uVar1;
}





// 函数: void FUN_180630ff5(void)
void FUN_180630ff5(void)

{
  return;
}



// WARNING: Type propagation algorithm not settling

int64_t FUN_180631000(uint64_t param_1,uint64_t param_2,int8_t *param_3)

{
  char cVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  void *puStack_30;
  char *pcStack_28;
  uint uStack_20;
  
  uVar9 = 0xfffffffffffffffe;
  lVar2 = FUN_1800a02a0();
  uVar5 = 0;
  if (lVar2 == 0) {
    return 0;
  }
  lVar6 = 0x180d48d24;
  if (*(int64_t *)(lVar2 + 8) != 0) {
    lVar6 = *(int64_t *)(lVar2 + 8);
  }
  FUN_180627910(&puStack_30,lVar6);
  uVar3 = uVar5;
  uVar4 = uVar5;
  if (uStack_20 != 0) {
    do {
      cVar1 = pcStack_28[uVar4];
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        pcStack_28[uVar4] = cVar1 + ' ';
      }
      uVar8 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar8;
      uVar4 = uVar4 + 1;
    } while (uVar8 < uStack_20);
  }
  if (pcStack_28 != (char *)0x0) {
    cVar1 = *pcStack_28;
    uVar3 = uVar5;
    uVar4 = uVar5;
    uVar7 = uVar5;
    while (uStack_20 = (uint)uVar4, cVar1 != '\0') {
      if (' ' < pcStack_28[uVar3]) {
        if (uVar7 != uVar3) {
          pcStack_28[uVar7] = pcStack_28[uVar3];
        }
        uVar4 = (uint64_t)(uStack_20 + 1);
        uVar7 = uVar7 + 1;
      }
      uVar3 = uVar3 + 1;
      cVar1 = pcStack_28[uVar3];
    }
    pcStack_28[(int)uStack_20] = '\0';
  }
  if (uStack_20 == 4) {
    do {
      uVar3 = uVar5 + 1;
      if (pcStack_28[uVar5] != (&unknown_var_2328_ptr)[uVar5]) goto LAB_1806311d1;
      uVar5 = uVar3;
    } while (uVar3 != 5);
    *param_3 = 1;
    goto LAB_18063123e;
  }
  if (uStack_20 == 3) {
    do {
      uVar3 = uVar5 + 1;
      if (pcStack_28[uVar5] != (&unknown_var_2664_ptr)[uVar5]) goto LAB_1806311d1;
      uVar5 = uVar3;
    } while (uVar3 != 4);
    *param_3 = 1;
    goto LAB_18063123e;
  }
  if (uStack_20 == 1) {
    if ((*pcStack_28 == '1') && (pcStack_28[1] == '\0')) {
      *param_3 = 1;
      goto LAB_18063123e;
    }
LAB_180631224:
    if (*pcStack_28 != '0') goto LAB_1806311d1;
    cVar1 = pcStack_28[1];
joined_r0x0001806311cf:
    if (cVar1 != '\0') {
LAB_1806311d1:
      FUN_180627340(&unknown_var_5416_ptr,param_2,lVar6,&unknown_var_5512_ptr,uVar9);
      puStack_30 = &system_data_buffer_ptr;
      if (pcStack_28 != (char *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      return 0;
    }
  }
  else {
    if (uStack_20 != 5) {
      if (uStack_20 != 2) {
        if (uStack_20 != 1) goto LAB_1806311d1;
        goto LAB_180631224;
      }
      if ((*pcStack_28 != 'n') || (pcStack_28[1] != 'o')) goto LAB_1806311d1;
      cVar1 = pcStack_28[2];
      goto joined_r0x0001806311cf;
    }
    do {
      uVar3 = uVar5 + 1;
      if (pcStack_28[uVar5] != (&unknown_var_2336_ptr)[uVar5]) goto LAB_1806311d1;
      uVar5 = uVar3;
    } while (uVar3 != 6);
  }
  *param_3 = 0;
LAB_18063123e:
  puStack_30 = &system_data_buffer_ptr;
  if (pcStack_28 != (char *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return lVar6;
}



int64_t FUN_180631290(void)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = FUN_1800a02a0();
  if (lVar1 != 0) {
    lVar2 = 0x180d48d24;
    if (*(int64_t *)(lVar1 + 8) != 0) {
      lVar2 = *(int64_t *)(lVar1 + 8);
    }
    return lVar2;
  }
  return 0;
}



char * FUN_180631330(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  void *puVar3;
  char *pcVar4;
  
  lVar1 = FUN_1800a02a0();
  pcVar4 = (char *)0x0;
  if (lVar1 != 0) {
    pcVar4 = (char *)0x180d48d24;
    if (*(char **)(lVar1 + 8) != (char *)0x0) {
      pcVar4 = *(char **)(lVar1 + 8);
    }
  }
  if ((param_3 != 0) && (pcVar4 != (char *)0x0)) {
    uVar2 = 0xffffffffffffffff;
    do {
      uVar2 = uVar2 + 1;
    } while (pcVar4[uVar2] != '\0');
    if (((uVar2 < 3) || (*pcVar4 != '0')) ||
       (puVar3 = &unknown_var_5412_ptr, (pcVar4[1] + 0xa8U & 0xdf) != 0)) {
      puVar3 = &unknown_var_2208_ptr;
    }
    FUN_18010cbc0(pcVar4,puVar3,param_3);
  }
  return pcVar4;
}



int64_t FUN_1806313c0(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = FUN_1800a02a0();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = 0x180d48d24;
    if (*(int64_t *)(lVar1 + 8) != 0) {
      lVar2 = *(int64_t *)(lVar1 + 8);
    }
  }
  if ((param_3 != 0) && (lVar2 != 0)) {
    FUN_18010cbc0(lVar2,&system_data_6430,param_3);
  }
  return lVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180631420(uint64_t param_1,uint64_t param_2,int64_t *param_3)
void FUN_180631420(uint64_t param_1,uint64_t param_2,int64_t *param_3)

{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  void *puVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int8_t auStack_408 [32];
  uint64_t uStack_3e8;
  uint64_t uStack_3d8;
  int64_t alStack_3d0 [2];
  uint64_t uStack_3c0;
  uint64_t uStack_3b8;
  void *puStack_3b0;
  void *puStack_3a8;
  int32_t uStack_398;
  uint64_t uStack_390;
  void *puStack_388;
  int8_t *puStack_380;
  int32_t uStack_378;
  int8_t auStack_370 [264];
  void *apuStack_268 [68];
  uint64_t uStack_48;
  
  uStack_390 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_408;
  uStack_3d8 = param_1;
  uStack_3b8 = param_2;
  FUN_180627340(&unknown_var_5480_ptr,param_1);
  lVar5 = 0;
  puStack_388 = &unknown_var_2008_ptr;
  puStack_380 = auStack_370;
  auStack_370[0] = 0;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(lVar3 + param_1) != '\0');
  uStack_378 = (int32_t)lVar3;
  strcpy_s(auStack_370,0x100,param_1);
  uVar4 = FUN_180624440(apuStack_268,&puStack_388);
  FUN_1806279c0(&puStack_3b0,uVar4);
  apuStack_268[0] = &system_state_ptr;
  puStack_388 = &system_state_ptr;
  alStack_3d0[0] = -1;
  puVar8 = &system_buffer_ptr;
  if (puStack_3a8 != (void *)0x0) {
    puVar8 = puStack_3a8;
  }
  FUN_18063ba00(alStack_3d0,puVar8,5,0x104);
  lVar3 = alStack_3d0[0];
  iVar2 = GetFileSizeEx(alStack_3d0[0],&uStack_3c0);
  uVar12 = uStack_3c0;
  if (iVar2 == 0) {
    uVar12 = 0xffffffffffffffff;
  }
  uVar10 = uVar12 + 1;
  lVar6 = param_3[1];
  lVar7 = *param_3;
  uVar9 = lVar6 - lVar7;
  if (uVar9 < uVar10) {
    uVar10 = (lVar7 - lVar6) + uVar10;
    if ((uint64_t)(param_3[2] - lVar6) < uVar10) {
      uVar11 = uVar9 * 2;
      if (uVar9 == 0) {
        uVar11 = 1;
      }
      if (uVar11 < uVar9 + uVar10) {
        uVar11 = uVar9 + uVar10;
      }
      if (uVar11 != 0) {
        lVar5 = FUN_18062b420(system_memory_pool_ptr,uVar11,(char)param_3[3]);
        lVar6 = param_3[1];
        lVar7 = *param_3;
      }
      if (lVar7 != lVar6) {
                    // WARNING: Subroutine does not return
        memmove(lVar5,lVar7,lVar6 - lVar7);
      }
      if (uVar10 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar5,0,uVar10);
      }
      if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      *param_3 = lVar5;
      param_3[1] = lVar5;
      param_3[2] = lVar5 + uVar11;
      lVar7 = lVar5;
      param_1 = uStack_3d8;
      goto LAB_18063163c;
    }
    if (uVar10 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar6,0,uVar10);
    }
  }
  else {
    lVar6 = uVar10 + lVar7;
  }
  param_3[1] = lVar6;
LAB_18063163c:
  uVar10 = 0;
  if (uVar12 != 0) {
    while( true ) {
      uVar9 = 0x1000000;
      if (uVar12 - uVar10 < 0x1000000) {
        uVar9 = uVar12 - uVar10 & 0xffffffff;
      }
      uStack_3d8 = uStack_3d8 & 0xffffffff00000000;
      uStack_3e8 = 0;
      iVar2 = ReadFile(lVar3,uVar10 + lVar7,uVar9,&uStack_3d8);
      if (iVar2 == 0) break;
      if (((int)uStack_3d8 == 0) || (uVar10 = uVar10 + (uStack_3d8 & 0xffffffff), uVar12 <= uVar10))
      break;
    }
  }
  if (lVar3 != -1) {
    LOCK();
    SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
    UNLOCK();
    CloseHandle(alStack_3d0[0]);
    lVar3 = -1;
    alStack_3d0[0] = -1;
  }
  *(int8_t *)(uVar12 + *param_3) = 0;
  FUN_1804bff30(uStack_3b8,*param_3);
  cVar1 = system_data_5fea;


