#include "TaleWorlds.Native.Split.h"

// 03_rendering_part645.c - 13 个函数

// 函数: void FUN_18062de50(longlong param_1)
void FUN_18062de50(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    fclose();
    *(uint64_t *)(param_1 + 8) = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_18062de90(longlong param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar1 = fclose();
    *(uint64_t *)(param_1 + 8) = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  return iVar1 == 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062dee0(longlong param_1,longlong param_2,uint64_t param_3)
void FUN_18062dee0(longlong param_1,longlong param_2,uint64_t param_3)

{
  longlong lVar1;
  uint64_t uVar2;
  void *puVar3;
  int8_t auStack_748 [32];
  int8_t *puStack_728;
  int32_t uStack_720;
  uint64_t uStack_718;
  void *puStack_708;
  int8_t *puStack_700;
  int32_t uStack_6f8;
  int8_t auStack_6f0 [264];
  void *puStack_5e8;
  void *puStack_5e0;
  int32_t uStack_5d8;
  uint8_t auStack_5d0 [264];
  void *apuStack_4c8 [68];
  int8_t auStack_2a8 [64];
  int8_t auStack_268 [560];
  ulonglong uStack_38;
  
  uStack_718 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_748;
  puStack_708 = &UNK_1809feda8;
  puStack_700 = auStack_6f0;
  uStack_6f8 = 0;
  auStack_6f0[0] = 0;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    uStack_6f8 = (int32_t)lVar1;
    strcpy_s(auStack_6f0,0x100,param_2);
  }
  lVar1 = FUN_180624440(apuStack_4c8,&puStack_708);
  puStack_5e8 = &UNK_1809feda8;
  puStack_5e0 = auStack_5d0;
  auStack_5d0[0] = 0;
  uStack_5d8 = *(int32_t *)(lVar1 + 0x10);
  puVar3 = &system_buffer_ptr;
  if (*(void **)(lVar1 + 8) != (void *)0x0) {
    puVar3 = *(void **)(lVar1 + 8);
  }
  strcpy_s(auStack_5d0,0x100,puVar3);
  apuStack_4c8[0] = &UNK_18098bcb0;
  puStack_708 = &UNK_18098bcb0;
  puVar3 = &system_buffer_ptr;
  if (puStack_5e0 != (void *)0x0) {
    puVar3 = puStack_5e0;
  }
  uStack_720 = 0x118;
  puStack_728 = auStack_268;
  MultiByteToWideChar(0xfde9,0,puVar3,0xffffffff);
  uStack_720 = 0x20;
  puStack_728 = auStack_2a8;
  MultiByteToWideChar(0xfde9,0,param_3,0xffffffff);
  uVar2 = _wfopen(auStack_268,auStack_2a8);
  *(uint64_t *)(param_1 + 8) = uVar2;
  puStack_5e8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_748);
}



uint64_t FUN_18062e090(longlong param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  
  uVar1 = _ftelli64(*(uint64_t *)(param_1 + 8));
  _fseeki64(*(uint64_t *)(param_1 + 8),0,2);
  uVar2 = _ftelli64(*(uint64_t *)(param_1 + 8));
  _fseeki64(*(uint64_t *)(param_1 + 8),uVar1,0);
  return uVar2;
}





// 函数: void FUN_18062e0f0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18062e0f0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uVar1 = *(uint64_t *)(param_1 + 8);
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar2 = (uint64_t *)func_0x00018004b9a0();
  __stdio_common_vfprintf(*puVar2,uVar1,param_2,0,&uStackX_18);
  return;
}



// WARNING: Removing unreachable block (ram,0x00018062e30a)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062e140(longlong param_1,uint64_t *param_2)
void FUN_18062e140(longlong param_1,uint64_t *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint64_t *puVar5;
  char *pcVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int8_t auStack_98 [32];
  int8_t uStack_78;
  void *puStack_68;
  uint64_t *puStack_60;
  int32_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  char acStack_40 [16];
  ulonglong uStack_30;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  pcVar1 = (char *)param_2[1];
  iVar8 = 1;
  uVar7 = (longlong)*param_2 - (longlong)pcVar1;
  if ((char *)*param_2 < pcVar1) {
    uVar7 = 0;
  }
  pcVar6 = pcVar1;
  if (uVar7 != 0) {
    do {
      iVar2 = iVar8 + 1;
      if (*pcVar6 != '\n') {
        iVar2 = iVar8;
      }
      iVar8 = iVar2;
      pcVar6 = pcVar6 + 1;
    } while ((ulonglong)((longlong)pcVar6 - (longlong)pcVar1) < uVar7);
  }


// 函数: void FUN_18062f5e0(longlong param_1,int32_t param_2,char *param_3)
void FUN_18062f5e0(longlong param_1,int32_t param_2,char *param_3)

{
  char cVar1;
  uint64_t *puVar2;
  char *pcVar3;
  
  puVar2 = (uint64_t *)FUN_1804c1300(param_1 + 0x60,0x60);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  *(int32_t *)(puVar2 + 5) = param_2;
  puVar2[6] = 0;
  puVar2[8] = 0;
  if (param_3 != (char *)0x0) {
    cVar1 = *param_3;
    pcVar3 = param_3;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    *puVar2 = param_3;
    puVar2[2] = (longlong)pcVar3 - (longlong)param_3;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062f640(longlong param_1,longlong param_2,char *param_3)
void FUN_18062f640(longlong param_1,longlong param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  int8_t *puVar4;
  char *pcVar5;
  char *pcVar6;
  int8_t *puVar7;
  int8_t auStack_a8 [48];
  char acStack_78 [64];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  FUN_1800634b0(acStack_78,0x40,&UNK_180a063a0);
  param_1 = param_1 + 0x60;
  pcVar6 = acStack_78;
  while (acStack_78[0] != '\0') {
    pcVar6 = pcVar6 + 1;
    acStack_78[0] = *pcVar6;
  }
  pcVar6 = pcVar6 + (1 - (longlong)acStack_78);
  pcVar2 = (char *)FUN_1804c1300(param_1,pcVar6);
  if (pcVar6 != (char *)0x0) {
    pcVar5 = pcVar2;
    do {
      *pcVar5 = pcVar5[(longlong)(acStack_78 + -(longlong)pcVar2)];
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + -1;
    } while (pcVar6 != (char *)0x0);
  }
  lVar3 = FUN_1800a02a0(param_2,param_3);
  if (lVar3 == 0) {
    cVar1 = *param_3;
    pcVar6 = param_3;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    pcVar6 = pcVar6 + (1 - (longlong)param_3);
    puVar4 = (int8_t *)FUN_1804c1300(param_1,pcVar6);
    if (pcVar6 != (char *)0x0) {
      puVar7 = puVar4;
      do {
        *puVar7 = puVar7[(longlong)param_3 - (longlong)puVar4];
        puVar7 = puVar7 + 1;
        pcVar6 = pcVar6 + -1;
      } while (pcVar6 != (char *)0x0);
    }
    lVar3 = FUN_1804c1980(param_1,puVar4,pcVar2);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(uint64_t *)(lVar3 + 0x28) = 0;
      *(longlong *)(param_2 + 0x40) = lVar3;
      *(longlong *)(param_2 + 0x48) = lVar3;
      *(longlong *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
    else {
      *(uint64_t *)(lVar3 + 0x28) = *(uint64_t *)(param_2 + 0x48);
      *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x30) = lVar3;
      *(longlong *)(param_2 + 0x48) = lVar3;
      *(longlong *)(lVar3 + 0x20) = param_2;
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
    *(longlong *)(lVar3 + 0x18) = (longlong)pcVar6 - (longlong)pcVar2;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_a8);
}





// 函数: void FUN_18062f7c0(longlong param_1,longlong param_2,uint64_t param_3,char param_4)
void FUN_18062f7c0(longlong param_1,longlong param_2,uint64_t param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  uint64_t *puVar4;
  char *pcVar5;
  void *puVar6;
  
  if (param_4 == '\0') {
    lVar2 = FUN_1800a02a0(param_2,param_3);
    if (lVar2 != 0) {
      lVar2 = FUN_1800a02a0(param_2,param_3);
      puVar6 = &UNK_180a06420;
      pcVar3 = "false";
      do {
        pcVar3 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      goto LAB_18062f968;
    }
    pcVar3 = (char *)FUN_180632a40(param_1 + 0x60);
    puVar4 = (uint64_t *)FUN_1804c1300(param_1 + 0x60,0x38);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[4] = 0;
    if (pcVar3 != (char *)0x0) {
      cVar1 = *pcVar3;
      pcVar5 = pcVar3;
      while (cVar1 != '\0') {
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
      }
      *puVar4 = pcVar3;
      puVar4[2] = (longlong)pcVar5 - (longlong)pcVar3;
    }
    puVar6 = &UNK_180a06420;
    pcVar3 = "false";
    do {
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
  }
  else {
    lVar2 = FUN_1800a02a0(param_2,param_3);
    if (lVar2 != 0) {
      lVar2 = FUN_1800a02a0(param_2,param_3);
      puVar6 = &UNK_180a06418;
      pcVar3 = "true";
      do {
        pcVar3 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
LAB_18062f968:
      *(longlong *)(lVar2 + 0x18) = (longlong)pcVar3 - (longlong)puVar6;
      *(void **)(lVar2 + 8) = puVar6;
      return;
    }
    pcVar3 = (char *)FUN_180632a40(param_1 + 0x60);
    puVar4 = (uint64_t *)FUN_1804c1300(param_1 + 0x60,0x38);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[4] = 0;
    if (pcVar3 != (char *)0x0) {
      cVar1 = *pcVar3;
      pcVar5 = pcVar3;
      while (cVar1 != '\0') {
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
      }
      *puVar4 = pcVar3;
      puVar4[2] = (longlong)pcVar5 - (longlong)pcVar3;
    }
    puVar6 = &UNK_180a06418;
    pcVar3 = "true";
    do {
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
  }
  puVar4[1] = puVar6;
  puVar4[3] = (longlong)pcVar3 - (longlong)puVar6;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    puVar4[5] = *(uint64_t *)(param_2 + 0x48);
    *(uint64_t **)(*(longlong *)(param_2 + 0x48) + 0x30) = puVar4;
    *(uint64_t **)(param_2 + 0x48) = puVar4;
    puVar4[4] = param_2;
    puVar4[6] = 0;
    return;
  }
  puVar4[5] = 0;
  *(uint64_t **)(param_2 + 0x40) = puVar4;
  *(uint64_t **)(param_2 + 0x48) = puVar4;
  puVar4[4] = param_2;
  puVar4[6] = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062f990(longlong param_1,longlong param_2,char *param_3,float param_4)
void FUN_18062f990(longlong param_1,longlong param_2,char *param_3,float param_4)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  int8_t *puVar4;
  char *pcVar5;
  char *pcVar6;
  int8_t *puVar7;
  int8_t auStack_168 [48];
  char acStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  if (ABS(param_4) < 0.001) {
    param_4 = 0.0;
  }
  FUN_1800634b0(acStack_138,0x100,&UNK_1809fdfc0,(double)param_4);
  param_1 = param_1 + 0x60;
  pcVar6 = acStack_138;
  while (acStack_138[0] != '\0') {
    pcVar6 = pcVar6 + 1;
    acStack_138[0] = *pcVar6;
  }
  pcVar6 = pcVar6 + (1 - (longlong)acStack_138);
  pcVar2 = (char *)FUN_1804c1300(param_1,pcVar6);
  if (pcVar6 != (char *)0x0) {
    pcVar5 = pcVar2;
    do {
      *pcVar5 = pcVar5[(longlong)(acStack_138 + -(longlong)pcVar2)];
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + -1;
    } while (pcVar6 != (char *)0x0);
  }
  lVar3 = FUN_1800a02a0(param_2,param_3);
  if (lVar3 == 0) {
    cVar1 = *param_3;
    pcVar6 = param_3;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    pcVar6 = pcVar6 + (1 - (longlong)param_3);
    puVar4 = (int8_t *)FUN_1804c1300(param_1,pcVar6);
    if (pcVar6 != (char *)0x0) {
      puVar7 = puVar4;
      do {
        *puVar7 = puVar7[(longlong)param_3 - (longlong)puVar4];
        puVar7 = puVar7 + 1;
        pcVar6 = pcVar6 + -1;
      } while (pcVar6 != (char *)0x0);
    }
    lVar3 = FUN_1804c1980(param_1,puVar4,pcVar2);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(uint64_t *)(lVar3 + 0x28) = 0;
      *(longlong *)(param_2 + 0x40) = lVar3;
      *(longlong *)(param_2 + 0x48) = lVar3;
      *(longlong *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
    else {
      *(uint64_t *)(lVar3 + 0x28) = *(uint64_t *)(param_2 + 0x48);
      *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x30) = lVar3;
      *(longlong *)(param_2 + 0x48) = lVar3;
      *(longlong *)(lVar3 + 0x20) = param_2;
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
    *(longlong *)(lVar3 + 0x18) = (longlong)pcVar6 - (longlong)pcVar2;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062fb40(longlong param_1,longlong param_2,char *param_3,float *param_4)
void FUN_18062fb40(longlong param_1,longlong param_2,char *param_3,float *param_4)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  int8_t *puVar4;
  char *pcVar5;
  char *pcVar6;
  int8_t *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int8_t auStack_178 [32];
  double dStack_158;
  double dStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  char acStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  fStack_148 = *param_4;
  fStack_144 = param_4[1];
  fStack_140 = param_4[2];
  fStack_13c = param_4[3];
  fVar10 = fStack_148;
  if (ABS(fStack_148) < 0.001) {
    fVar10 = 0.0;
  }
  fVar9 = fStack_144;
  if (ABS(fStack_144) < 0.001) {
    fVar9 = 0.0;
  }
  fVar8 = fStack_140;
  if (ABS(fStack_140) < 0.001) {
    fVar8 = 0.0;
  }
  dStack_150 = (double)fVar8;
  dStack_158 = (double)fVar9;
  FUN_1800634b0(acStack_138,0x100,&UNK_180a3cb70,(double)fVar10);
  param_1 = param_1 + 0x60;
  pcVar6 = acStack_138;
  while (acStack_138[0] != '\0') {
    pcVar6 = pcVar6 + 1;
    acStack_138[0] = *pcVar6;
  }
  pcVar6 = pcVar6 + (1 - (longlong)acStack_138);
  pcVar2 = (char *)FUN_1804c1300(param_1,pcVar6);
  if (pcVar6 != (char *)0x0) {
    pcVar5 = pcVar2;
    do {
      *pcVar5 = pcVar5[(longlong)(acStack_138 + -(longlong)pcVar2)];
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + -1;
    } while (pcVar6 != (char *)0x0);
  }
  lVar3 = FUN_1800a02a0(param_2,param_3);
  if (lVar3 == 0) {
    cVar1 = *param_3;
    pcVar6 = param_3;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    pcVar6 = pcVar6 + (1 - (longlong)param_3);
    puVar4 = (int8_t *)FUN_1804c1300(param_1,pcVar6);
    if (pcVar6 != (char *)0x0) {
      puVar7 = puVar4;
      do {
        *puVar7 = puVar7[(longlong)param_3 - (longlong)puVar4];
        puVar7 = puVar7 + 1;
        pcVar6 = pcVar6 + -1;
      } while (pcVar6 != (char *)0x0);
    }
    lVar3 = FUN_1804c1980(param_1,puVar4,pcVar2);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(uint64_t *)(lVar3 + 0x28) = 0;
      *(longlong *)(param_2 + 0x40) = lVar3;
      *(longlong *)(param_2 + 0x48) = lVar3;
      *(longlong *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
    else {
      *(uint64_t *)(lVar3 + 0x28) = *(uint64_t *)(param_2 + 0x48);
      *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x30) = lVar3;
      *(longlong *)(param_2 + 0x48) = lVar3;
      *(longlong *)(lVar3 + 0x20) = param_2;
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
    *(longlong *)(lVar3 + 0x18) = (longlong)pcVar6 - (longlong)pcVar2;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062fd40(longlong param_1,longlong param_2,uint64_t param_3,int8_t (*param_4) [16])
void FUN_18062fd40(longlong param_1,longlong param_2,uint64_t param_3,int8_t (*param_4) [16])

{
  int8_t auVar1 [16];
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  int8_t *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int8_t *puVar9;
  int8_t auStack_148 [32];
  uint uStack_128;
  uint uStack_120;
  uint uStack_118;
  uint uStack_110;
  uint uStack_108;
  uint uStack_100;
  uint uStack_f8;
  uint uStack_f0;
  uint uStack_e8;
  uint uStack_e0;
  uint64_t uStack_d8;
  void *puStack_c8;
  char *pcStack_c0;
  int32_t uStack_b8;
  char acStack_b0 [72];
  int8_t auStack_68 [40];
  ulonglong uStack_40;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_148;
  puStack_c8 = &UNK_1809fcc58;
  pcStack_c0 = acStack_b0;
  uStack_b8 = 0;
  acStack_b0[0] = '\0';
  auVar1 = *param_4;
  uStack_e8 = auVar1._14_2_ & 0xff;
  uStack_f0 = auVar1._12_4_ >> 8 & 0xff;
  uStack_f8 = auVar1._12_4_ & 0xff;
  uStack_100 = auVar1._11_4_ & 0xff;
  uStack_108 = auVar1._10_4_ & 0xff;
  uStack_110 = auVar1._9_4_ & 0xff;
  uStack_128 = auVar1._4_4_ & 0xffff;
  uStack_e0 = (uint)auVar1[0xf];
  uStack_118 = (uint)auVar1[8];
  uStack_120 = (uint)auVar1._6_2_;
  FUN_180626eb0(auStack_68,0x28,&UNK_180a3d070);
  (**(code **)(puStack_c8 + 0x18))(&puStack_c8,auStack_68,0x26);
  param_1 = param_1 + 0x60;
  pcVar8 = "";
  if (pcStack_c0 != (char *)0x0) {
    pcVar8 = pcStack_c0;
  }
  cVar2 = *pcVar8;
  pcVar7 = pcVar8;
  while (cVar2 != '\0') {
    pcVar7 = pcVar7 + 1;
    cVar2 = *pcVar7;
  }
  pcVar7 = pcVar7 + (1 - (longlong)pcVar8);
  pcVar3 = (char *)FUN_1804c1300(param_1,pcVar7);
  if (pcVar7 != (char *)0x0) {
    pcVar6 = pcVar3;
    do {
      *pcVar6 = pcVar6[(longlong)pcVar8 - (longlong)pcVar3];
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + -1;
    } while (pcVar7 != (char *)0x0);
  }
  lVar4 = FUN_1800a02a0(param_2,&UNK_180a0696c);
  if (lVar4 == 0) {
    pcVar8 = "value";
    do {
      pcVar7 = pcVar8;
      pcVar8 = pcVar7 + 1;
    } while (*pcVar8 != '\0');
    pcVar7 = pcVar7 + -0x180a0696a;
    puVar5 = (int8_t *)FUN_1804c1300(param_1,pcVar7);
    if (pcVar7 != (char *)0x0) {
      puVar9 = puVar5;
      do {
        *puVar9 = puVar9[(longlong)&UNK_180a0696c - (longlong)puVar5];
        puVar9 = puVar9 + 1;
        pcVar7 = pcVar7 + -1;
      } while (pcVar7 != (char *)0x0);
    }
    lVar4 = FUN_1804c1980(param_1,puVar5,pcVar3);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(uint64_t *)(lVar4 + 0x28) = 0;
      *(longlong *)(param_2 + 0x40) = lVar4;
      *(longlong *)(param_2 + 0x48) = lVar4;
      *(longlong *)(lVar4 + 0x20) = param_2;
      *(uint64_t *)(lVar4 + 0x30) = 0;
    }
    else {
      *(uint64_t *)(lVar4 + 0x28) = *(uint64_t *)(param_2 + 0x48);
      *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x30) = lVar4;
      *(longlong *)(param_2 + 0x48) = lVar4;
      *(longlong *)(lVar4 + 0x20) = param_2;
      *(uint64_t *)(lVar4 + 0x30) = 0;
    }
  }
  else {
    lVar4 = FUN_1800a02a0(param_2,&UNK_180a0696c);
    cVar2 = *pcVar3;
    pcVar8 = pcVar3;
    while (cVar2 != '\0') {
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar8;
    }
    *(char **)(lVar4 + 8) = pcVar3;
    *(longlong *)(lVar4 + 0x18) = (longlong)pcVar8 - (longlong)pcVar3;
  }
  puStack_c8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180630010(longlong param_1,longlong param_2,char *param_3,float *param_4)
void FUN_180630010(longlong param_1,longlong param_2,char *param_3,float *param_4)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  int8_t *puVar4;
  char *pcVar5;
  char *pcVar6;
  int8_t *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int8_t auStack_198 [32];
  double dStack_178;
  double dStack_170;
  double dStack_168;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  char acStack_148 [256];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  fStack_158 = *param_4;
  fStack_154 = param_4[1];
  fStack_150 = param_4[2];
  fStack_14c = param_4[3];
  fVar11 = fStack_158;
  if (ABS(fStack_158) < 0.001) {
    fVar11 = 0.0;
  }
  fVar9 = fStack_154;
  if (ABS(fStack_154) < 0.001) {
    fVar9 = 0.0;
  }
  fVar10 = fStack_150;
  if (ABS(fStack_150) < 0.001) {
    fVar10 = 0.0;
  }
  fVar8 = fStack_14c;
  if (ABS(fStack_14c) < 0.001) {
    fVar8 = 0.0;
  }
  dStack_168 = (double)fVar8;
  dStack_170 = (double)fVar10;
  dStack_178 = (double)fVar9;
  FUN_1800634b0(acStack_148,0x100,&UNK_180a3cb58,(double)fVar11);
  param_1 = param_1 + 0x60;
  pcVar6 = acStack_148;
  while (acStack_148[0] != '\0') {
    pcVar6 = pcVar6 + 1;
    acStack_148[0] = *pcVar6;
  }
  pcVar6 = pcVar6 + (1 - (longlong)acStack_148);
  pcVar2 = (char *)FUN_1804c1300(param_1,pcVar6);
  if (pcVar6 != (char *)0x0) {
    pcVar5 = pcVar2;
    do {
      *pcVar5 = pcVar5[(longlong)(acStack_148 + -(longlong)pcVar2)];
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + -1;
    } while (pcVar6 != (char *)0x0);
  }
  lVar3 = FUN_1800a02a0(param_2,param_3);
  if (lVar3 == 0) {
    cVar1 = *param_3;
    pcVar6 = param_3;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    pcVar6 = pcVar6 + (1 - (longlong)param_3);
    puVar4 = (int8_t *)FUN_1804c1300(param_1,pcVar6);
    if (pcVar6 != (char *)0x0) {
      puVar7 = puVar4;
      do {
        *puVar7 = puVar7[(longlong)param_3 - (longlong)puVar4];
        puVar7 = puVar7 + 1;
        pcVar6 = pcVar6 + -1;
      } while (pcVar6 != (char *)0x0);
    }
    lVar3 = FUN_1804c1980(param_1,puVar4,pcVar2);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(uint64_t *)(lVar3 + 0x28) = 0;
      *(longlong *)(param_2 + 0x40) = lVar3;
      *(longlong *)(param_2 + 0x48) = lVar3;
      *(longlong *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
    else {
      *(uint64_t *)(lVar3 + 0x28) = *(uint64_t *)(param_2 + 0x48);
      *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x30) = lVar3;
      *(longlong *)(param_2 + 0x48) = lVar3;
      *(longlong *)(lVar3 + 0x20) = param_2;
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
    *(longlong *)(lVar3 + 0x18) = (longlong)pcVar6 - (longlong)pcVar2;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_198);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180630240(longlong param_1,longlong param_2,char *param_3,float *param_4)
void FUN_180630240(longlong param_1,longlong param_2,char *param_3,float *param_4)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  int8_t *puVar4;
  char *pcVar5;
  char *pcVar6;
  int8_t *puVar7;
  int8_t auStack_278 [32];
  double dStack_258;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  char acStack_1d8 [256];
  ulonglong uStack_d8;
  
  uStack_d8 = _DAT_180bf00a8 ^ (ulonglong)auStack_278;
  dStack_1e8 = (double)param_4[0xf];
  dStack_1f0 = (double)param_4[0xe];
  dStack_1f8 = (double)param_4[0xd];
  dStack_200 = (double)param_4[0xc];
  dStack_208 = (double)param_4[0xb];
  dStack_210 = (double)param_4[10];
  dStack_218 = (double)param_4[9];
  dStack_220 = (double)param_4[8];
  dStack_228 = (double)param_4[7];
  dStack_230 = (double)param_4[6];
  dStack_238 = (double)param_4[5];
  dStack_240 = (double)param_4[4];
  dStack_248 = (double)param_4[3];
  dStack_250 = (double)param_4[2];
  dStack_258 = (double)param_4[1];
  FUN_1800634b0(acStack_1d8,0x100,&UNK_180a3cb00,(double)*param_4);
  param_1 = param_1 + 0x60;
  pcVar6 = acStack_1d8;
  while (acStack_1d8[0] != '\0') {
    pcVar6 = pcVar6 + 1;
    acStack_1d8[0] = *pcVar6;
  }
  pcVar6 = pcVar6 + (1 - (longlong)acStack_1d8);
  pcVar2 = (char *)FUN_1804c1300(param_1,pcVar6);
  if (pcVar6 != (char *)0x0) {
    pcVar5 = pcVar2;
    do {
      *pcVar5 = pcVar5[(longlong)(acStack_1d8 + -(longlong)pcVar2)];
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + -1;
    } while (pcVar6 != (char *)0x0);
  }
  lVar3 = FUN_1800a02a0(param_2,param_3);
  if (lVar3 == 0) {
    cVar1 = *param_3;
    pcVar6 = param_3;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    pcVar6 = pcVar6 + (1 - (longlong)param_3);
    puVar4 = (int8_t *)FUN_1804c1300(param_1,pcVar6);
    if (pcVar6 != (char *)0x0) {
      puVar7 = puVar4;
      do {
        *puVar7 = puVar7[(longlong)param_3 - (longlong)puVar4];
        puVar7 = puVar7 + 1;
        pcVar6 = pcVar6 + -1;
      } while (pcVar6 != (char *)0x0);
    }
    lVar3 = FUN_1804c1980(param_1,puVar4,pcVar2);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(uint64_t *)(lVar3 + 0x28) = 0;
      *(longlong *)(param_2 + 0x40) = lVar3;
      *(longlong *)(param_2 + 0x48) = lVar3;
      *(longlong *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
    else {
      *(uint64_t *)(lVar3 + 0x28) = *(uint64_t *)(param_2 + 0x48);
      *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x30) = lVar3;
      *(longlong *)(param_2 + 0x48) = lVar3;
      *(longlong *)(lVar3 + 0x20) = param_2;
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
    *(longlong *)(lVar3 + 0x18) = (longlong)pcVar6 - (longlong)pcVar2;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (ulonglong)auStack_278);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180630560(longlong param_1,longlong param_2,char *param_3,float *param_4)
void FUN_180630560(longlong param_1,longlong param_2,char *param_3,float *param_4)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  int8_t *puVar4;
  char *pcVar5;
  char *pcVar6;
  int8_t *puVar7;
  int8_t auStack_1c8 [32];
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  char acStack_168 [256];
  ulonglong uStack_68;
  
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_1c8;
  dStack_170 = (double)param_4[10];
  dStack_178 = (double)param_4[9];
  dStack_180 = (double)param_4[8];
  dStack_188 = (double)param_4[6];
  dStack_190 = (double)param_4[5];
  dStack_198 = (double)param_4[4];
  dStack_1a0 = (double)param_4[2];
  dStack_1a8 = (double)param_4[1];
  FUN_1800634b0(acStack_168,0x100,&UNK_180a3cad8,(double)*param_4);
  param_1 = param_1 + 0x60;
  pcVar6 = acStack_168;
  while (acStack_168[0] != '\0') {
    pcVar6 = pcVar6 + 1;
    acStack_168[0] = *pcVar6;
  }
  pcVar6 = pcVar6 + (1 - (longlong)acStack_168);
  pcVar2 = (char *)FUN_1804c1300(param_1,pcVar6);
  if (pcVar6 != (char *)0x0) {
    pcVar5 = pcVar2;
    do {
      *pcVar5 = pcVar5[(longlong)(acStack_168 + -(longlong)pcVar2)];
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + -1;
    } while (pcVar6 != (char *)0x0);
  }
  lVar3 = FUN_1800a02a0(param_2,param_3);
  if (lVar3 == 0) {
    cVar1 = *param_3;
    pcVar6 = param_3;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    pcVar6 = pcVar6 + (1 - (longlong)param_3);
    puVar4 = (int8_t *)FUN_1804c1300(param_1,pcVar6);
    if (pcVar6 != (char *)0x0) {
      puVar7 = puVar4;
      do {
        *puVar7 = puVar7[(longlong)param_3 - (longlong)puVar4];
        puVar7 = puVar7 + 1;
        pcVar6 = pcVar6 + -1;
      } while (pcVar6 != (char *)0x0);
    }
    lVar3 = FUN_1804c1980(param_1,puVar4,pcVar2);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(uint64_t *)(lVar3 + 0x28) = 0;
      *(longlong *)(param_2 + 0x40) = lVar3;
      *(longlong *)(param_2 + 0x48) = lVar3;
      *(longlong *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
    else {
      *(uint64_t *)(lVar3 + 0x28) = *(uint64_t *)(param_2 + 0x48);
      *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x30) = lVar3;
      *(longlong *)(param_2 + 0x48) = lVar3;
      *(longlong *)(lVar3 + 0x20) = param_2;
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
    *(longlong *)(lVar3 + 0x18) = (longlong)pcVar6 - (longlong)pcVar2;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_1c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



