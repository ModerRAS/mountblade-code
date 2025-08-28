#include "TaleWorlds.Native.Split.h"

// 03_rendering_part624.c - 25 个函数

// 函数: void FUN_1806147b0(longlong param_1,uint64_t *param_2)
void FUN_1806147b0(longlong param_1,uint64_t *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  int8_t auStack_1c8 [44];
  int32_t uStack_19c;
  int32_t uStack_18c;
  int32_t uStack_17c;
  uint64_t uStack_178;
  uint64_t uStack_170;
  int32_t uStack_168;
  int32_t uStack_164;
  int32_t uStack_160;
  int32_t uStack_15c;
  int32_t uStack_158;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  uint uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  int32_t uStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  int32_t uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  int32_t uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  int32_t uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  uint uStack_9c;
  ulonglong uStack_98;
  
  uStack_98 = _DAT_180bf00a8 ^ (ulonglong)auStack_1c8;
  uStack_158 = *(int32_t *)(param_2 + 4);
  uStack_178 = *param_2;
  uStack_170 = param_2[1];
  uStack_168 = *(int32_t *)(param_2 + 2);
  uStack_164 = *(int32_t *)((longlong)param_2 + 0x14);
  uStack_160 = *(int32_t *)(param_2 + 3);
  uStack_15c = *(int32_t *)((longlong)param_2 + 0x1c);
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8);
  puVar6 = *(uint **)(*(longlong *)(param_1 + 0x658) + 0x18);
  do {
    LOCK();
    uVar1 = *puVar6;
    *puVar6 = *puVar6 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  uStack_148 = puVar6[1];
  uStack_144 = puVar6[2];
  uStack_140 = puVar6[3];
  uStack_13c = puVar6[4];
  fVar7 = (float)puVar6[5];
  fVar8 = (float)puVar6[6];
  fVar9 = (float)puVar6[7];
  uStack_12c = puVar6[8];
  *puVar6 = 0;
  fStack_138 = fVar7;
  fStack_134 = fVar8;
  fStack_130 = fVar9;
  uStack_b8 = uStack_148;
  uStack_b4 = uStack_144;
  uStack_b0 = uStack_140;
  uStack_ac = uStack_13c;
  fStack_a8 = fVar7;
  fStack_a4 = fVar8;
  fStack_a0 = fVar9;
  uStack_9c = uStack_12c;
  FUN_18063b5f0(&fStack_128,&uStack_148);
  fVar2 = *(float *)(lVar10 + 0x80);
  fVar3 = *(float *)(lVar10 + 0x70);
  fVar4 = *(float *)(lVar10 + 0x84);
  fVar5 = *(float *)(lVar10 + 0x74);
  fStack_e0 = *(float *)(lVar10 + 0x98);
  uStack_13c = 0x7f7fffff;
  uStack_19c = 0x7f7fffff;
  uStack_18c = 0x7f7fffff;
  uStack_17c = 0x7f7fffff;
  fStack_c8 = fVar3 * fVar7 + fVar2 * fVar8 + *(float *)(lVar10 + 0xa0);
  fStack_c0 = fStack_e0 * fVar9 + *(float *)(lVar10 + 0xa8);
  fStack_d0 = fStack_e0 * fStack_100;
  fStack_c4 = fVar5 * fVar7 + fVar4 * fVar8 + *(float *)(lVar10 + 0xa4);
  fStack_d8 = fVar3 * fStack_108 + fVar2 * fStack_104;
  fStack_d4 = fVar5 * fStack_108 + fVar4 * fStack_104;
  fStack_f0 = fStack_e0 * fStack_120;
  fStack_e8 = fVar3 * fStack_118 + fVar2 * fStack_114;
  fStack_e0 = fStack_e0 * fStack_110;
  fStack_f8 = fVar3 * fStack_128 + fVar2 * fStack_124;
  uStack_bc = 0x7f7fffff;
  fStack_f4 = fVar5 * fStack_128 + fVar4 * fStack_124;
  fStack_e4 = fVar5 * fStack_118 + fVar4 * fStack_114;
  uStack_ec = 0x7f7fffff;
  uStack_dc = 0x7f7fffff;
  uStack_cc = 0x7f7fffff;
  func_0x000180285a90(&fStack_f8,0x3f800000);
  FUN_1805067a0(&uStack_178,&fStack_f8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_98 ^ (ulonglong)auStack_1c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180614b20(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_180614b20(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = param_1[1];
  lVar6 = *param_1;
  lVar7 = (lVar5 - lVar6) / 0x70;
  if (lVar7 == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = lVar7 * 2;
    if (lVar7 == 0) {
      lVar1 = 0;
      goto LAB_180614ba5;
    }
  }
  lVar1 = FUN_18062b420(_DAT_180c8ed18,lVar7 * 0x70,(char)param_1[3],param_4,0xfffffffffffffffe);
  lVar5 = param_1[1];
  lVar6 = *param_1;
LAB_180614ba5:
  lVar3 = lVar1;
  if (lVar6 != lVar5) {
    lVar6 = lVar6 - lVar1;
    puVar4 = (uint64_t *)(lVar1 + 0x50);
    do {
      FUN_18063e690(lVar3,(longlong)puVar4 + lVar6 + -0x50);
      puVar4[-1] = &UNK_18098bcb0;
      *puVar4 = 0;
      *(int32_t *)(puVar4 + 1) = 0;
      puVar4[-1] = &UNK_180a3c3e0;
      puVar4[2] = 0;
      *puVar4 = 0;
      *(int32_t *)(puVar4 + 1) = 0;
      *(int32_t *)(puVar4 + 1) = *(int32_t *)(lVar6 + 8 + (longlong)puVar4);
      *puVar4 = *(uint64_t *)(lVar6 + (longlong)puVar4);
      *(int32_t *)((longlong)puVar4 + 0x14) = *(int32_t *)(lVar6 + 0x14 + (longlong)puVar4);
      *(int32_t *)(puVar4 + 2) = *(int32_t *)(lVar6 + 0x10 + (longlong)puVar4);
      *(int32_t *)(lVar6 + 8 + (longlong)puVar4) = 0;
      *(uint64_t *)(lVar6 + (longlong)puVar4) = 0;
      *(uint64_t *)(lVar6 + 0x10 + (longlong)puVar4) = 0;
      *(int8_t *)(puVar4 + 3) = *(int8_t *)(lVar6 + 0x18 + (longlong)puVar4);
      lVar3 = lVar3 + 0x70;
      lVar2 = (longlong)puVar4 + lVar6 + 0x20;
      puVar4 = puVar4 + 0xe;
    } while (lVar2 != lVar5);
  }
  FUN_18063e690(lVar3,param_2);
  FUN_180627ae0(lVar3 + 0x48,param_2 + 0x48);
  *(int8_t *)(lVar3 + 0x68) = *(int8_t *)(param_2 + 0x68);
  lVar5 = param_1[1];
  lVar6 = *param_1;
  if (lVar6 != lVar5) {
    do {
      FUN_180502300(lVar6);
      lVar6 = lVar6 + 0x70;
    } while (lVar6 != lVar5);
    lVar6 = *param_1;
  }
  if (lVar6 == 0) {
    *param_1 = lVar1;
    param_1[1] = lVar3 + 0x70;
    param_1[2] = lVar7 * 0x70 + lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180614d50(uint64_t param_1,int32_t *param_2)
void FUN_180614d50(uint64_t param_1,int32_t *param_2)

{
  int8_t auStack_238 [32];
  int8_t auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  *param_2 = 0;
  if (_DAT_180c95dc8 == 0) {
    FUN_180626eb0(auStack_218,0x200,&UNK_180a3be00,&UNK_180a3b410);
    FUN_18061c7a0(auStack_218);
  }
  else {
    FUN_18055f260(_DAT_180c95dc8,param_2,param_1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180614e00(uint64_t param_1,int32_t *param_2)
void FUN_180614e00(uint64_t param_1,int32_t *param_2)

{
  int8_t auStack_238 [32];
  int8_t auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  *param_2 = 0;
  if (_DAT_180c95dc8 == 0) {
    FUN_180626eb0(auStack_218,0x200,&UNK_180a3be00,&UNK_180a3b4d0);
    FUN_18061c7a0(auStack_218);
  }
  else {
    FUN_180646500(_DAT_180c95dc8,param_2,param_1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180614eb0(uint64_t param_1,uint64_t *param_2)
void FUN_180614eb0(uint64_t param_1,uint64_t *param_2)

{
  int8_t auStack_238 [32];
  int8_t auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  *param_2 = 0;
  if (_DAT_180c95dc8 == 0) {
    FUN_180626eb0(auStack_218,0x200,&UNK_180a3be00,&UNK_180a3b470);
    FUN_18061c7a0(auStack_218);
  }
  else {
    FUN_180646610(_DAT_180c95dc8,param_2,param_1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180614f60(ulonglong *param_1,ulonglong *param_2)
void FUN_180614f60(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  int8_t auStack_268 [32];
  ulonglong uStack_248;
  void *puStack_240;
  longlong alStack_238 [2];
  int8_t auStack_228 [512];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_268;
  *param_2 = 0;
  if (_DAT_180c95dc8 == 0) {
    FUN_180626eb0(auStack_228,0x200,&UNK_180a3be00,&UNK_180a3b2f0);
    FUN_18061c7a0(auStack_228);
  }
  else {
    alStack_238[0] = 0;
    cVar3 = FUN_180646140(_DAT_180c95dc8,alStack_238,(int)param_1[2]);
    if (cVar3 != '\0') {
      uVar2 = *param_1;
      uVar1 = uVar2 + alStack_238[0];
      if ((((uVar1 <= param_1[1]) && (uVar1 < uVar2)) || (uVar1 < uVar2)) || (param_1[1] < uVar1)) {
        puStack_240 = &UNK_18098c860;
        uStack_248 = uVar1;
        FUN_180627340(&UNK_180a3ba00,&UNK_180a3d320);
        FUN_180626f80(&UNK_180a3baf0,*param_1,param_1[1]);
      }
      *param_2 = uVar1;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_268);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180615080(uint64_t param_1,int32_t *param_2)
void FUN_180615080(uint64_t param_1,int32_t *param_2)

{
  int8_t auStack_238 [32];
  int8_t auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  *param_2 = 0;
  if (_DAT_180c95dc8 == 0) {
    FUN_180626eb0(auStack_218,0x200,&UNK_180a3be00,&UNK_180a3b290);
    FUN_18061c7a0(auStack_218);
  }
  else {
    FUN_180646700(_DAT_180c95dc8,param_2,param_1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180615130(char *param_1)
void FUN_180615130(char *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int32_t uVar4;
  int iVar5;
  longlong lVar6;
  int8_t auStack_888 [32];
  void *puStack_868;
  int8_t *puStack_860;
  int32_t uStack_858;
  ulonglong uStack_850;
  int8_t auStack_848 [8];
  uint64_t uStack_840;
  char acStack_838 [2048];
  ulonglong uStack_38;
  
  uStack_840 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_888;
  if (_DAT_180c95dc8 == 0) {
    FUN_180626eb0(acStack_838,0x200,&UNK_180a3be00,&UNK_180a3b3b0);
    FUN_18061c7a0(acStack_838);
  }
  else {
    cVar2 = FUN_180646890(_DAT_180c95dc8,acStack_838,0x800,auStack_848);
    *param_1 = cVar2;
    if (cVar2 != '\0') {
      puStack_868 = &UNK_180a3c3e0;
      uStack_850 = 0;
      puStack_860 = (int8_t *)0x0;
      uStack_858 = 0;
      lVar1 = -1;
      do {
        lVar6 = lVar1;
        lVar1 = lVar6 + 1;
      } while (acStack_838[lVar6 + 1] != '\0');
      if ((int)(lVar6 + 1) != 0) {
        iVar5 = (int)lVar6 + 2;
        iVar3 = iVar5;
        if (iVar5 < 0x10) {
          iVar3 = 0x10;
        }
        puStack_860 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar3,0x13);
        *puStack_860 = 0;
        uVar4 = FUN_18064e990(puStack_860);
        uStack_850 = CONCAT44(uStack_850._4_4_,uVar4);
                    // WARNING: Subroutine does not return
        memcpy(puStack_860,acStack_838,iVar5);
      }
      uStack_858 = 0;
      (**(code **)(*_DAT_180c8f008 + 0x70))(_DAT_180c8f008,&puStack_868);
      puStack_868 = &UNK_180a3c3e0;
      if (puStack_860 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_860 = (int8_t *)0x0;
      uStack_850 = uStack_850 & 0xffffffff00000000;
      puStack_868 = &UNK_18098bcb0;
      goto LAB_1806152c2;
    }
  }
  *param_1 = '\0';
LAB_1806152c2:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_888);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806152f0(longlong *param_1,int param_2,int32_t param_3,char *param_4)
void FUN_1806152f0(longlong *param_1,int param_2,int32_t param_3,char *param_4)

{
  char cVar1;
  int8_t auStack_268 [32];
  int32_t auStack_248 [4];
  int8_t auStack_238 [512];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_268;
  if (_DAT_180c95dc8 == 0) {
    FUN_180626eb0(auStack_238,0x200,&UNK_180a3be00,&UNK_180a3b350);
    FUN_18061c7a0(auStack_238);
  }
  else {
    auStack_248[0] = 0;
    cVar1 = FUN_180646890(_DAT_180c95dc8,(longlong)param_2 + *param_1,param_3,auStack_248);
    *param_4 = cVar1;
    if (cVar1 != '\0') goto LAB_180615392;
  }
  *param_4 = '\0';
LAB_180615392:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_268);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806153b0(int param_1,int *param_2)
void FUN_1806153b0(int param_1,int *param_2)

{
  int8_t auStack_248 [32];
  int iStack_228;
  void *puStack_220;
  int8_t auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_248;
  if ((param_1 < *param_2) || (param_2[1] < param_1)) {
    puStack_220 = &UNK_18098c830;
    iStack_228 = param_1;
    FUN_180627340(&UNK_180a35a20,&UNK_180a3b6a0,*param_2,param_2[1]);
    FUN_180626f80(&UNK_180a359a0,*param_2,param_2[1]);
  }
  if (_DAT_180c95dd0 == 0) {
    FUN_180626eb0(auStack_218,0x200,&UNK_180a3be00,&UNK_180a3b630);
    FUN_18061c7a0(auStack_218);
  }
  else {
    FUN_180645c10(_DAT_180c95dd0,param_1,param_2);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_248);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806154a0(uint param_1,uint *param_2)
void FUN_1806154a0(uint param_1,uint *param_2)

{
  int8_t auStack_248 [32];
  uint uStack_228;
  void *puStack_220;
  int8_t auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_248;
  if ((param_1 < *param_2) || (param_2[1] < param_1)) {
    puStack_220 = &UNK_18098c830;
    uStack_228 = param_1;
    FUN_180627340(&UNK_180a3baa0,&UNK_180a3b728,*param_2,param_2[1]);
    FUN_180626f80(&UNK_180a3bb90,*param_2,param_2[1]);
  }
  if (_DAT_180c95dd0 == 0) {
    FUN_180626eb0(auStack_218,0x200,&UNK_180a3be00,&UNK_180a3b6d0);
    FUN_18061c7a0(auStack_218);
  }
  else {
    FUN_180645ce0(_DAT_180c95dd0,param_1,param_2);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_248);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180615590(longlong param_1,longlong *param_2)
void FUN_180615590(longlong param_1,longlong *param_2)

{
  int8_t auStack_248 [32];
  longlong lStack_228;
  void *puStack_220;
  int8_t auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_248;
  if ((param_1 < *param_2) || (param_2[1] < param_1)) {
    puStack_220 = &UNK_18098c830;
    lStack_228 = param_1;
    FUN_180627340(&UNK_180a3bb40,&UNK_180a3b588,*param_2,param_2[1]);
    FUN_180626f80(&UNK_180a3ba50,*param_2,param_2[1]);
  }
  if (_DAT_180c95dd0 == 0) {
    FUN_180626eb0(auStack_218,0x200,&UNK_180a3be00,&UNK_180a3b530);
    FUN_18061c7a0(auStack_218);
  }
  else {
    FUN_180645da0(_DAT_180c95dd0,param_1,param_2);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_248);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180615680(ulonglong param_1,ulonglong *param_2)
void FUN_180615680(ulonglong param_1,ulonglong *param_2)

{
  int8_t auStack_248 [32];
  ulonglong uStack_228;
  void *puStack_220;
  int8_t auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_248;
  if ((param_1 < *param_2) || (param_2[1] < param_1)) {
    puStack_220 = &UNK_18098c830;
    uStack_228 = param_1;
    FUN_180627340(&UNK_180a3ba00,&UNK_180a3b608,*param_2,param_2[1]);
    FUN_180626f80(&UNK_180a3baf0,*param_2,param_2[1]);
  }
  if (_DAT_180c95dd0 == 0) {
    FUN_180626eb0(auStack_218,0x200,&UNK_180a3be00,&UNK_180a3b5b0);
    FUN_18061c7a0(auStack_218);
  }
  else {
    FUN_180645ea0(_DAT_180c95dd0,param_1,param_2);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_248);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180615770(float param_1,float *param_2)
void FUN_180615770(float param_1,float *param_2)

{
  int8_t auStack_258 [32];
  double dStack_238;
  void *puStack_230;
  int8_t auStack_228 [512];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_258;
  if ((param_2[1] + param_2[2] * 0.5 < param_1) || (param_1 < *param_2 - param_2[2] * 0.5)) {
    puStack_230 = &UNK_18098c830;
    dStack_238 = (double)param_1;
    FUN_180627340(&UNK_180a35aa0,&UNK_180a3b898,(double)*param_2,(double)param_2[1]);
    FUN_180626f80(&UNK_180a35af0,(double)*param_2,(double)param_2[1]);
  }
  if (_DAT_180c95dd0 == 0) {
    FUN_180626eb0(auStack_228,0x200,&UNK_180a3be00,&UNK_180a3b840);
    FUN_18061c7a0(auStack_228);
  }
  else {
    FUN_180645fa0(_DAT_180c95dd0,param_1,param_2);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_258);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806158b0(uint64_t param_1)
void FUN_1806158b0(uint64_t param_1)

{
  longlong lVar1;
  int32_t uVar2;
  int8_t auStack_238 [32];
  int8_t auStack_218 [512];
  ulonglong uStack_18;
  
  lVar1 = _DAT_180c95dd0;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  if (_DAT_180c95dd0 == 0) {
    FUN_180626eb0(auStack_218,0x200,&UNK_180a3be00,&UNK_180a3b920);
    FUN_18061c7a0(auStack_218);
  }
  else {
    uVar2 = strnlen(param_1,0x400);
    FUN_180646010(lVar1,param_1,uVar2);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180615960(longlong *param_1,int param_2,int32_t param_3)
void FUN_180615960(longlong *param_1,int param_2,int32_t param_3)

{
  int8_t auStack_248 [32];
  int8_t auStack_228 [512];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_248;
  if (_DAT_180c95dd0 == 0) {
    FUN_180626eb0(auStack_228,0x200,&UNK_180a3be00,&UNK_180a3b8c0);
    FUN_18061c7a0(auStack_228);
  }
  else {
    FUN_180646010(_DAT_180c95dd0,(longlong)param_2 + *param_1,param_3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_248);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180615a00(void)
void FUN_180615a00(void)

{
  int8_t auStack_248 [32];
  int8_t auStack_228 [16];
  int8_t auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_248;
  if (_DAT_180c92514 == 1) {
    if (_DAT_180c8ed58 == 0) {
      QueryPerformanceCounter(auStack_228);
    }
  }
  else {
    FUN_180626eb0(auStack_218,0x200,&UNK_180a3be00,&UNK_180a3b7a0);
    FUN_18061c7a0(auStack_218);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_248);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180615ac0(int8_t param_1)
void FUN_180615ac0(int8_t param_1)

{
  int iVar1;
  uint64_t uVar2;
  int8_t auStack_238 [32];
  int8_t auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  iVar1 = _Mtx_lock(0x180c95d70);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  if (_DAT_180c92514 == 1) {
    uVar2 = FUN_18056cd20(_DAT_180c92590,param_1);
    FUN_180645c10(uVar2,1,&UNK_1809faff8);
    _DAT_180c95dd0 = uVar2;
  }
  else {
    FUN_180626eb0(auStack_218,0x200,&UNK_180a3be00,&UNK_180a3b750);
    FUN_18061c7a0(auStack_218);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180615b90(int8_t param_1)
void FUN_180615b90(int8_t param_1)

{
  int iVar1;
  int8_t auStack_238 [32];
  int8_t auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  _DAT_180c95dd0 = 0;
  if (_DAT_180c92514 == 1) {
    FUN_18056cd80(_DAT_180c92590,param_1);
  }
  else {
    FUN_180626eb0(auStack_218,0x200,&UNK_180a3be00,&UNK_180a3b800);
    FUN_18061c7a0(auStack_218);
  }
  iVar1 = _Mtx_unlock(0x180c95d70);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180615c40(void)
void FUN_180615c40(void)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(0x180c95d70);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  iVar1 = _Mtx_lock(0x180c95528);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  FUN_180645c10(0x180c95578,1,&UNK_1809f8df0);
  _DAT_180c95dd0 = 0x180c95578;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180615ca0(int32_t param_1,int param_2,int8_t param_3)
void FUN_180615ca0(int32_t param_1,int param_2,int8_t param_3)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  
  uVar3 = 0;
  _DAT_180c95dd0 = 0;
  if (param_2 != -1) {
    cVar1 = FUN_18061ca90(param_2);
    if (cVar1 == '\0') goto LAB_180615d04;
  }
  if (-1 < param_2) {
    uVar3 = (**(code **)(_DAT_180c925a0 + 0x20))(&DAT_180c925a0,param_2);
  }
  FUN_18055cad0(&DAT_180c925a0,param_1,uVar3,param_3);
LAB_180615d04:
  iVar2 = _Mtx_unlock(0x180c95d70);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180615d40(int32_t param_1)
void FUN_180615d40(int32_t param_1)

{
  uint64_t uVar1;
  
  (**(code **)(_DAT_180c925a0 + 0x20))(&DAT_180c925a0,param_1);
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x59e0,8,3);
                    // WARNING: Subroutine does not return
  memset(uVar1,0,0x59e0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180615df0(void)
void FUN_180615df0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int8_t auStack_78 [32];
  uint64_t uStack_58;
  void *puStack_50;
  int8_t *puStack_48;
  int32_t uStack_40;
  int8_t auStack_38 [16];
  char acStack_28 [16];
  ulonglong uStack_18;
  
  uStack_58 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  lVar2 = inet_ntoa();
  if (lVar2 == 0) {
    acStack_28[0] = '\0';
  }
  else {
    strncpy(acStack_28,lVar2,0xf);
  }
  puStack_50 = &UNK_1809fdc18;
  puStack_48 = auStack_38;
  auStack_38[0] = 0;
  lVar2 = -1;
  do {
    lVar3 = lVar2 + 1;
    lVar1 = lVar2 + 1;
    lVar2 = lVar3;
  } while (acStack_28[lVar1] != '\0');
  uStack_40 = (int32_t)lVar3;
  strcpy_s(auStack_38,0x10,acStack_28);
  (**(code **)(*_DAT_180c8f008 + 0x70))(_DAT_180c8f008,&puStack_50);
  puStack_50 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_78);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180615ed0(int16_t param_1)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  ulonglong uVar4;
  void *puVar5;
  longlong lVar6;
  int iVar7;
  int iStack_34;
  
  FUN_180632aa0(*(uint64_t *)(_DAT_180c8ed08 + 0x10));
  _DAT_180c92cb8 = 0x180c95be8;
  _DAT_180c92cc0 = FUN_1805f6f30;
  _DAT_180c92ca0 = FUN_1805f6f50;
  _DAT_180c92cb0 = FUN_1805f7180;
  _DAT_180c92cd0 = FUN_1805f7330;
  _DAT_180c92c98 = 0x180c95be8;
  _DAT_180c92ca8 = 0x180c95be8;
  _DAT_180c92cc8 = 0x180c95be8;
  uVar4 = (**(code **)(_DAT_180c925c8 + 0x30))(&DAT_180c925c8);
  if ((char)uVar4 != '\0') {
    return uVar4;
  }
  if (_DAT_180bf5bd0 == 0) {
    _DAT_180c92d2c = 0;
    uRam0000000180c92d18 = 2;
    uRam0000000180c92d28 = param_1;
    uRam0000000180c92d1a = htons(param_1);
    uRam0000000180c92d1c = 0;
  }
  else {
    puVar5 = &DAT_18098bc73;
    if (_DAT_180bf5bc8 != (void *)0x0) {
      puVar5 = _DAT_180bf5bc8;
    }
    FUN_180645b70(0x180c92d18,puVar5);
  }
  bVar2 = FUN_18056f700(&DAT_180c925a0,0x180c92d18);
  if (bVar2 != 0) {
    iVar7 = 0x3fe;
    do {
      piVar3 = piRam0000000180c95ba0;
      if (piRam0000000180c95ba0 < piRam0000000180c95ba8) {
        piVar1 = piRam0000000180c95ba0 + 4;
        *piRam0000000180c95ba0 = iVar7;
        piRam0000000180c95ba0 = piVar1;
        piVar3[1] = iStack_34;
        piVar3[2] = 0;
        piVar3[3] = 0;
      }
      else {
        lVar6 = (longlong)piRam0000000180c95ba0 - (longlong)piRam0000000180c95b98 >> 4;
        if (lVar6 == 0) {
          lVar6 = 1;
LAB_18055cd27:
          piVar3 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar6 << 4,uRam0000000180c95bb0);
        }
        else {
          lVar6 = lVar6 * 2;
          if (lVar6 != 0) goto LAB_18055cd27;
          piVar3 = (int *)0x0;
        }
        if (piRam0000000180c95b98 != piRam0000000180c95ba0) {
                    // WARNING: Subroutine does not return
          memmove(piVar3,piRam0000000180c95b98,
                  (longlong)piRam0000000180c95ba0 - (longlong)piRam0000000180c95b98);
        }
        *piVar3 = iVar7;
        piVar3[1] = iStack_34;
        piVar3[2] = 0;
        piVar3[3] = 0;
        if (piRam0000000180c95b98 != (int *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        piRam0000000180c95ba8 = piVar3 + lVar6 * 4;
        piRam0000000180c95b98 = piVar3;
        piRam0000000180c95ba0 = piVar3 + 4;
      }
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  return (ulonglong)bVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180615f80(uint64_t param_1,int16_t param_2,int32_t param_3,int16_t param_4)
void FUN_180615f80(uint64_t param_1,int16_t param_2,int32_t param_3,int16_t param_4)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong alStack_28 [2];
  
  FUN_180632aa0(*(uint64_t *)(_DAT_180c8ed08 + 0x10));
  puVar2 = _DAT_180c92590;
  if (_DAT_180c92590 != (uint64_t *)0x0) {
    lVar4 = __RTCastToVoid(_DAT_180c92590);
    (**(code **)*puVar2)(puVar2,0);
    if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar4);
    }
  }
  _DAT_180c92590 = (uint64_t *)0x0;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x4c538,8,3);
  lVar4 = FUN_18056ca30(uVar1,param_4,param_3);
  _DAT_180c92590 = (uint64_t *)lVar4;
  FUN_180645b70(lVar4 + 0x10,param_1,param_2);
  cVar3 = FUN_18056f700(lVar4,0);
  if (cVar3 != '\0') {
    func_0x0001805f6d90(&DAT_180c95bf0);
    lVar5 = _DAT_180c8ed58;
    if (_DAT_180c8ed58 == 0) {
      QueryPerformanceCounter(alStack_28);
      lVar5 = alStack_28[0];
    }
    *(double *)(lVar4 + 0x700) = (double)(lVar5 - _DAT_180c8ed48) * _DAT_180c8ed50;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180615f86(uint64_t param_1,int16_t param_2,int32_t param_3,int16_t param_4)
void FUN_180615f86(uint64_t param_1,int16_t param_2,int32_t param_3,int16_t param_4)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lStackX_20;
  
  FUN_180632aa0(*(uint64_t *)(_DAT_180c8ed08 + 0x10));
  puVar2 = _DAT_180c92590;
  if (_DAT_180c92590 != (uint64_t *)0x0) {
    lVar4 = __RTCastToVoid(_DAT_180c92590);
    (**(code **)*puVar2)(puVar2,0);
    if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar4);
    }
  }
  _DAT_180c92590 = (uint64_t *)0x0;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x4c538,8,3);
  lVar4 = FUN_18056ca30(uVar1,param_4,param_3);
  _DAT_180c92590 = (uint64_t *)lVar4;
  FUN_180645b70(lVar4 + 0x10,param_1,param_2);
  cVar3 = FUN_18056f700(lVar4,0);
  if (cVar3 != '\0') {
    func_0x0001805f6d90(&DAT_180c95bf0);
    lVar5 = _DAT_180c8ed58;
    if (_DAT_180c8ed58 == 0) {
      QueryPerformanceCounter(&lStackX_20);
      lVar5 = lStackX_20;
    }
    *(double *)(lVar4 + 0x700) = (double)(lVar5 - _DAT_180c8ed48) * _DAT_180c8ed50;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



