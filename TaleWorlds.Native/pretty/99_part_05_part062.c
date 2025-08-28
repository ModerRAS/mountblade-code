#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part062.c - 12 个函数

// 函数: void FUN_1802fe6e7(void)
void FUN_1802fe6e7(void)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  char in_AL;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  uint64_t unaff_R13;
  float fVar3;
  float unaff_XMM14_Da;
  
  if (in_AL != -1) {
    puVar1 = *(uint64_t **)((int64_t)in_AL * 0x100 + 0xf0 + *(int64_t *)(unaff_RDI + 0x18));
    (**(code **)(*(int64_t *)*puVar1 + 0xe0))();
    plVar2 = (int64_t *)*puVar1;
    (**(code **)(*plVar2 + 0xf8))(plVar2,&system_data_02f0);
  }
  if (*(int64_t *)(unaff_RDI + 0xd0) != 0) {
    unaff_R13 = *(uint64_t *)(*(int64_t *)(unaff_RDI + 0xd0) + 0x1000);
  }
  FUN_180431380(unaff_R13);
  if (*(float *)(unaff_RDI + 0x3c) < unaff_XMM14_Da) {
    fVar3 = 0.1;
  }
  else {
    fVar3 = *(float *)(unaff_RDI + 0x3c) + 1.1920929e-07;
  }
  *(float *)(unaff_RDI + 0x34) = fVar3;
  *(int16_t *)(unaff_RDI + 0x40) = 2;
  if ((*(int64_t *)(unaff_RDI + 0x130) != 0) || (*(int64_t *)(unaff_RDI + 0x138) != 0)) {
    (**(code **)(unaff_RDI + 0x138))();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x910) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1802fe73d(void)
void FUN_1802fe73d(void)

{
  int64_t in_RAX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  float fVar1;
  float unaff_XMM14_Da;
  
  FUN_180431380(*(uint64_t *)(in_RAX + 0x1000));
  if (*(float *)(unaff_RDI + 0x3c) < unaff_XMM14_Da) {
    fVar1 = 0.1;
  }
  else {
    fVar1 = *(float *)(unaff_RDI + 0x3c) + 1.1920929e-07;
  }
  *(float *)(unaff_RDI + 0x34) = fVar1;
  *(int16_t *)(unaff_RDI + 0x40) = 2;
  if ((*(int64_t *)(unaff_RDI + 0x130) != 0) || (*(int64_t *)(unaff_RDI + 0x138) != 0)) {
    (**(code **)(unaff_RDI + 0x138))();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x910) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1802fe768(float param_1)
void FUN_1802fe768(float param_1)

{
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  
  *(float *)(unaff_RDI + 0x34) = param_1 + 1.1920929e-07;
  *(int16_t *)(unaff_RDI + 0x40) = 2;
  if ((*(int64_t *)(unaff_RDI + 0x130) != 0) || (*(int64_t *)(unaff_RDI + 0x138) != 0)) {
    (**(code **)(unaff_RDI + 0x138))();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x910) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fe7c0(int64_t param_1,char param_2)
void FUN_1802fe7c0(int64_t param_1,char param_2)

{
  short *psVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  float fVar5;
  
  lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x20);
  if (param_2 == '\0') {
    FUN_1802fb960(param_1,*(int64_t *)(param_1 + 0x10) + 0x70,1);
  }
  if (((byte)*(ushort *)(param_1 + 0xa8) >> 2 & 1) != 0) {
    lVar2 = *(int64_t *)(param_1 + 0x10);
    *(ushort *)(param_1 + 0xa8) = *(ushort *)(param_1 + 0xa8) & 0xfffb;
    psVar1 = (short *)(lVar2 + 0x2b0);
    *psVar1 = *psVar1 + 1;
    if (*(int64_t *)(lVar2 + 0x168) != 0) {
      func_0x0001802eeba0();
    }
  }
  if (((*(int64_t *)(param_1 + 0xd0) != 0) &&
      (*(int64_t *)(*(int64_t *)(param_1 + 0xd0) + 0x1000) != 0)) &&
     (*(int *)(system_system_data_memory + 0xaf0) != 0)) {
    (**(code **)(**(int64_t **)(lVar3 + 0x318) + 0xe0))();
    *(uint64_t *)(*(int64_t *)(param_1 + 0xd0) + 0x1000) = 0;
  }
  cVar4 = '\0';
  if ('\0' < *(char *)(param_1 + 0x20)) {
    do {
      lVar3 = (int64_t)cVar4;
      cVar4 = cVar4 + '\x01';
      *(uint64_t *)(lVar3 * 0x100 + 0xf0 + *(int64_t *)(param_1 + 0x18)) = 0;
    } while (cVar4 < *(char *)(param_1 + 0x20));
  }
  if (*(float *)(param_1 + 0x3c) < 0.0) {
    fVar5 = 0.1;
  }
  else {
    fVar5 = *(float *)(param_1 + 0x3c) + 1.1920929e-07;
  }
  *(float *)(param_1 + 0x34) = fVar5;
  if ((*(int64_t *)(param_1 + 0x10) != 0) &&
     (lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x20), lVar3 != 0)) {
    FUN_1801b6ae0(lVar3,param_1);
  }
  *(int16_t *)(param_1 + 0x40) = 0;
  if ((*(int64_t *)(param_1 + 0x130) != 0) || (*(int64_t *)(param_1 + 0x138) != 0)) {
    (**(code **)(param_1 + 0x138))(*(int64_t *)(param_1 + 0x130),param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fe910(int64_t param_1,float *param_2)
void FUN_1802fe910(int64_t param_1,float *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  float fVar4;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int32_t uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  int32_t uStack_3c;
  uint64_t uStack_38;
  uint64_t uStack_30;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  uint uStack_1c;
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)&fStack_58;
  iVar3 = 0;
  param_2[0] = 1e+08;
  param_2[1] = 1e+08;
  param_2[2] = 1e+08;
  param_2[3] = 3.4028235e+38;
  param_2[0xc] = 0.0;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  param_2[10] = 0.0;
  param_2[0xb] = 3.4028235e+38;
  param_2[4] = -1e+08;
  param_2[5] = -1e+08;
  param_2[6] = -1e+08;
  param_2[7] = 3.4028235e+38;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    do {
      puVar2 = (uint *)((int64_t)iVar3 * 0x100 + *(int64_t *)(param_1 + 0x18));
      do {
        LOCK();
        uVar1 = *puVar2;
        *puVar2 = *puVar2 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      uStack_38 = *(uint64_t *)(puVar2 + 1);
      uStack_30 = *(uint64_t *)(puVar2 + 3);
      fStack_28 = (float)puVar2[5];
      fStack_24 = (float)puVar2[6];
      fStack_20 = (float)puVar2[7];
      uStack_1c = puVar2[8];
      *puVar2 = 0;
      fStack_58 = fStack_28;
      if (*param_2 < fStack_28) {
        fStack_58 = *param_2;
      }
      fStack_54 = fStack_24;
      if (param_2[1] < fStack_24) {
        fStack_54 = param_2[1];
      }
      fStack_50 = fStack_20;
      if (param_2[2] < fStack_20) {
        fStack_50 = param_2[2];
      }
      *(uint64_t *)param_2 = CONCAT44(fStack_54,fStack_58);
      *(uint64_t *)(param_2 + 2) = CONCAT44(uStack_4c,fStack_50);
      fStack_48 = fStack_28;
      if (fStack_28 < param_2[4]) {
        fStack_48 = param_2[4];
      }
      fStack_44 = fStack_24;
      if (fStack_24 < param_2[5]) {
        fStack_44 = param_2[5];
      }
      fStack_40 = fStack_20;
      if (fStack_20 < param_2[6]) {
        fStack_40 = param_2[6];
      }
      iVar3 = iVar3 + 1;
      *(uint64_t *)(param_2 + 4) = CONCAT44(fStack_44,fStack_48);
      *(uint64_t *)(param_2 + 6) = CONCAT44(uStack_3c,fStack_40);
    } while (iVar3 < *(char *)(param_1 + 0x20));
  }
  fVar4 = *(float *)(*(int64_t *)(param_1 + 0x208) + 0x1ac);
  fVar4 = fVar4 + fVar4;
  if ((ushort)(*(short *)(param_1 + 0x40) - 2U) < 3) {
    fVar4 = fVar4 + fVar4;
  }
  *param_2 = *param_2 - fVar4;
  param_2[1] = param_2[1] - fVar4;
  param_2[2] = param_2[2] - fVar4;
  param_2[5] = fVar4 + param_2[5];
  param_2[4] = fVar4 + param_2[4];
  param_2[6] = fVar4 + param_2[6];
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)&fStack_58);
}






// 函数: void FUN_1802feaf0(int64_t param_1,short param_2)
void FUN_1802feaf0(int64_t param_1,short param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  float fVar3;
  
  if (*(float *)(param_1 + 0x3c) < 0.0) {
    fVar3 = 0.1;
  }
  else {
    fVar3 = *(float *)(param_1 + 0x3c) + 1.1920929e-07;
  }
  *(float *)(param_1 + 0x34) = fVar3;
  lVar2 = *(int64_t *)(param_1 + 0x10);
  if ((lVar2 != 0) && (*(int64_t *)(lVar2 + 0x20) != 0)) {
    if (param_2 == 1) {
      plVar1 = *(int64_t **)(param_1 + 0x210);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        lVar2 = *(int64_t *)(param_1 + 0x10);
      }
      FUN_1801b69d0(*(uint64_t *)(lVar2 + 0x20),param_1);
    }
    else if (param_2 == 0) {
      FUN_1801b6ae0(*(int64_t *)(lVar2 + 0x20),param_1);
    }
  }
  *(short *)(param_1 + 0x40) = param_2;
  if ((*(int64_t *)(param_1 + 0x130) != 0) || (*(int64_t *)(param_1 + 0x138) != 0)) {
    (**(code **)(param_1 + 0x138))(*(int64_t *)(param_1 + 0x130),param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802feba0(int64_t param_1,char param_2)
void FUN_1802feba0(int64_t param_1,char param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int8_t auStack_118 [32];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  pfVar6 = (float *)((int64_t)param_2 * 0x100 + *(int64_t *)(param_1 + 0x18));
  iVar4 = FUN_1802fb220();
  uVar5 = (uint)(iVar4 + param_2) >> 0xd;
  pfVar8 = (float *)(*(int64_t *)
                      ((int64_t)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc30 +
                      (uint64_t)uVar5 * 8) + (uint64_t)(iVar4 + param_2 + uVar5 * -0x2000) * 0x40)
  ;
  do {
    LOCK();
    fVar1 = *pfVar6;
    *pfVar6 = (float)((uint)*pfVar6 | 1);
    UNLOCK();
  } while (((uint)fVar1 & 1) != 0);
  fStack_f8 = pfVar6[1];
  fStack_f4 = pfVar6[2];
  fStack_f0 = pfVar6[3];
  fStack_ec = pfVar6[4];
  fStack_e8 = pfVar6[5];
  fStack_e4 = pfVar6[6];
  fStack_e0 = pfVar6[7];
  fStack_dc = pfVar6[8];
  fVar7 = 0.0;
  *pfVar6 = 0.0;
  fStack_78 = fStack_f8;
  fStack_74 = fStack_f4;
  fStack_70 = fStack_f0;
  fStack_6c = fStack_ec;
  fStack_68 = fStack_e8;
  fStack_64 = fStack_e4;
  fStack_60 = fStack_e0;
  fStack_5c = fStack_dc;
  FUN_18063b5f0(&fStack_d8,&fStack_f8);
  fVar1 = pfVar6[0x18];
  fVar2 = pfVar6[0x19];
  fVar3 = pfVar6[0x1a];
  fVar9 = pfVar6[0x1c];
  fVar10 = pfVar6[0x20];
  fVar11 = pfVar6[0x1d];
  fStack_a8 = fVar2 * fStack_c8 + fVar1 * fStack_d8 + fVar3 * fStack_b8;
  fStack_a4 = fVar2 * fStack_c4 + fVar1 * fStack_d4 + fVar3 * fStack_b4;
  fStack_a0 = fVar2 * fStack_c0 + fVar1 * fStack_d0 + fVar3 * fStack_b0;
  fStack_9c = fVar2 * fStack_bc + fVar1 * fStack_cc + fVar3 * fStack_ac;
  fVar1 = pfVar6[0x1e];
  fVar2 = pfVar6[0x21];
  fStack_98 = fVar9 * fStack_d8 + fVar11 * fStack_c8 + fVar1 * fStack_b8;
  fStack_94 = fVar9 * fStack_d4 + fVar11 * fStack_c4 + fVar1 * fStack_b4;
  fStack_90 = fVar9 * fStack_d0 + fVar11 * fStack_c0 + fVar1 * fStack_b0;
  fStack_8c = fVar9 * fStack_cc + fVar11 * fStack_bc + fVar1 * fStack_ac;
  fVar1 = pfVar6[0x22];
  *pfVar8 = fStack_a8;
  pfVar8[1] = fStack_a4;
  pfVar8[2] = fStack_a0;
  pfVar8[3] = fStack_9c;
  pfVar8[4] = fStack_98;
  pfVar8[5] = fStack_94;
  pfVar8[6] = fStack_90;
  pfVar8[7] = fStack_8c;
  fStack_88 = fVar10 * fStack_d8 + fVar2 * fStack_c8 + fVar1 * fStack_b8;
  fStack_84 = fVar10 * fStack_d4 + fVar2 * fStack_c4 + fVar1 * fStack_b4;
  fStack_80 = fVar10 * fStack_d0 + fVar2 * fStack_c0 + fVar1 * fStack_b0;
  fStack_7c = fVar10 * fStack_cc + fVar2 * fStack_bc + fVar1 * fStack_ac;
  pfVar8[8] = fStack_88;
  pfVar8[9] = fStack_84;
  pfVar8[10] = fStack_80;
  pfVar8[0xb] = fStack_7c;
  do {
    LOCK();
    fVar1 = *pfVar6;
    *pfVar6 = (float)((uint)*pfVar6 | 1);
    UNLOCK();
  } while (((uint)fVar1 & 1) != 0);
  uStack_58 = *(uint64_t *)(pfVar6 + 1);
  uStack_50 = *(uint64_t *)(pfVar6 + 3);
  uStack_48 = *(uint64_t *)(pfVar6 + 5);
  uStack_40 = *(uint64_t *)(pfVar6 + 7);
  *pfVar6 = fVar7;
  *(uint64_t *)(pfVar8 + 0xc) = uStack_48;
  *(uint64_t *)(pfVar8 + 0xe) = uStack_40;
  fVar9 = -pfVar6[0x25];
  fVar10 = -pfVar6[0x24];
  fVar1 = pfVar8[7];
  fVar11 = -pfVar6[0x26];
  fVar2 = pfVar8[3];
  fVar3 = pfVar8[0xb];
  pfVar8[3] = fVar7;
  pfVar8[7] = fVar7;
  pfVar8[0xb] = fVar7;
  pfVar8[0xc] = pfVar8[4] * fVar9 + *pfVar8 * fVar10 + pfVar8[8] * fVar11 + pfVar8[0xc];
  pfVar8[0xd] = pfVar8[5] * fVar9 + pfVar8[1] * fVar10 + pfVar8[9] * fVar11 + pfVar8[0xd];
  pfVar8[0xe] = pfVar8[6] * fVar9 + pfVar8[2] * fVar10 + pfVar8[10] * fVar11 + pfVar8[0xe];
  pfVar8[0xf] = fVar1 * fVar9 + fVar2 * fVar10 + fVar3 * fVar11 + pfVar8[0xf];
  pfVar8[0xf] = 1.0;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_118);
}






// 函数: void FUN_1802fedf0(uint64_t param_1,uint64_t *param_2,uint64_t *param_3)
void FUN_1802fedf0(uint64_t param_1,uint64_t *param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  int64_t lVar2;
  
  FUN_1802feaf0(param_1,1);
  lVar2 = FUN_1803009f0(param_1);
  uVar1 = param_2[1];
  *(uint64_t *)(lVar2 + 0x1008) = *param_2;
  *(uint64_t *)(lVar2 + 0x1010) = uVar1;
  uVar1 = param_3[1];
  *(uint64_t *)(lVar2 + 0x1018) = *param_3;
  *(uint64_t *)(lVar2 + 0x1020) = uVar1;
  return;
}






// 函数: void FUN_1802fee60(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802fee60(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock(param_1 + 0x58);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  if (*(int64_t *)(param_1 + 0x28) != 0) {
    iVar1 = _Mtx_lock(*(int64_t *)(param_1 + 0x28) + 0x58);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
  }
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    FUN_1802fac00(param_1,*(int64_t *)(param_1 + 0x10) + 0x70,0xbf800000,param_4,uVar2);
  }
  if (*(int64_t *)(param_1 + 0x28) != 0) {
    iVar1 = _Mtx_unlock(*(int64_t *)(param_1 + 0x28) + 0x58);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
  }
  iVar1 = _Mtx_unlock(param_1 + 0x58);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}






// 函数: void FUN_1802fef20(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
void FUN_1802fef20(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
                  uint64_t param_5)

{
  void *puVar1;
  uint64_t *puVar2;
  char *pcVar3;
  uint64_t *puVar4;
  char *pcVar5;
  int64_t lVar6;
  int64_t lVar7;
  char cVar8;
  void *puVar9;
  int64_t lVar10;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  
  puVar2 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  *(int32_t *)(puVar2 + 5) = 1;
  puVar2[6] = 0;
  puVar2[8] = 0;
  pcVar3 = "skeleton";
  do {
    pcVar5 = pcVar3;
    pcVar3 = pcVar5 + 1;
  } while (*pcVar3 != '\0');
  *puVar2 = &system_param2_ptr;
  puVar2[2] = pcVar5 + -0x180a19cb7;
  if (param_4 == 0) {
    puVar1 = *(void **)(*(int64_t *)(param_1 + 0x208) + 0x18);
    puVar9 = &system_buffer_ptr;
    if (puVar1 != (void *)0x0) {
      puVar9 = puVar1;
    }
    FUN_180630b20(param_2,puVar2,&unknown_var_2344_ptr,puVar9);
  }
  if ((ushort)(*(short *)(param_1 + 0x40) - 2U) < 3) {
    FUN_180630b20(param_2,puVar2,&unknown_var_2328_ptr,&unknown_var_2328_ptr);
  }
  if (param_4 == 0) {
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 3;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 3;
    if (*(int64_t *)(param_1 + 0x1b0) - *(int64_t *)(param_1 + 0x1a8) >> 3 != 0) {
      FUN_1803c1870((int64_t *)(param_1 + 0x1a8),&uStack_50,&uStack_70,param_2,puVar2,param_5);
    }
  }
  else {
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 3;
    if (*(int64_t *)(param_1 + 0x1b0) - *(int64_t *)(param_1 + 0x1a8) >> 3 != 0) {
      FUN_1803c1870((int64_t *)(param_1 + 0x1a8),param_4 + 0x1a8,&uStack_70,param_2,puVar2,param_5)
      ;
    }
  }
  puVar4 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[4] = 0;
  *(int32_t *)(puVar4 + 5) = 1;
  puVar4[6] = 0;
  puVar4[8] = 0;
  pcVar3 = "bones";
  do {
    pcVar5 = pcVar3;
    pcVar3 = pcVar5 + 1;
  } while (*pcVar3 != '\0');
  *puVar4 = &unknown_var_2316_ptr;
  puVar4[2] = pcVar5 + -0x180a19c8b;
  cVar8 = '\0';
  if ('\0' < *(char *)(param_1 + 0x20)) {
    do {
      lVar10 = 0;
      lVar7 = (int64_t)cVar8;
      if (param_4 == 0) {
        lVar6 = *(int64_t *)(param_1 + 0x208);
      }
      else {
        lVar10 = lVar7 * 0x100 + *(int64_t *)(param_4 + 0x18);
        lVar6 = *(int64_t *)(param_4 + 0x208);
      }
      FUN_1802f98b0(lVar7 * 0x100 + *(int64_t *)(param_1 + 0x18),param_2,puVar4,lVar10,
                    lVar7 * 0x1b0 + *(int64_t *)(lVar6 + 0x140),param_5,cVar8);
      cVar8 = cVar8 + '\x01';
    } while (cVar8 < *(char *)(param_1 + 0x20));
  }
  if ((puVar4[6] != 0) || (puVar4[8] != 0)) {
    if (puVar2[6] == 0) {
      puVar4[10] = 0;
      puVar2[6] = puVar4;
      puVar2[7] = puVar4;
      puVar4[4] = puVar2;
      puVar4[0xb] = 0;
    }
    else {
      puVar4[10] = puVar2[7];
      *(uint64_t **)(puVar2[7] + 0x58) = puVar4;
      puVar2[7] = puVar4;
      puVar4[4] = puVar2;
      puVar4[0xb] = 0;
    }
  }
  if ((puVar2[6] != 0) || (puVar2[8] != 0)) {
    if (*(int64_t *)(param_3 + 0x30) == 0) {
      puVar2[10] = 0;
      *(uint64_t **)(param_3 + 0x30) = puVar2;
    }
    else {
      puVar2[10] = *(uint64_t *)(param_3 + 0x38);
      *(uint64_t **)(*(int64_t *)(param_3 + 0x38) + 0x58) = puVar2;
    }
    *(uint64_t **)(param_3 + 0x38) = puVar2;
    puVar2[4] = param_3;
    puVar2[0xb] = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802ff220(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802ff220(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char *pcVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  char *pcVar4;
  int64_t lVar5;
  void *puVar6;
  int64_t lVar7;
  void *puVar8;
  char *pcVar9;
  int64_t *plStackX_8;
  void *puStack_50;
  void *puStack_48;
  int iStack_40;
  uint64_t uStack_38;
  
  puStack_50 = &system_data_buffer_ptr;
  uStack_38 = 0;
  puStack_48 = (void *)0x0;
  iStack_40 = 0;
  lVar7 = *(int64_t *)(param_1 + 0x208);
  pcVar9 = "skeleton_model";
  do {
    pcVar4 = pcVar9;
    pcVar9 = pcVar4 + 1;
  } while (*pcVar9 != '\0');
  for (puVar3 = *(uint64_t **)(param_2 + 0x40); puVar3 != (uint64_t *)0x0;
      puVar3 = (uint64_t *)puVar3[6]) {
    pcVar9 = (char *)*puVar3;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x180d48d24;
      pcVar1 = (char *)0x0;
    }
    else {
      pcVar1 = (char *)puVar3[2];
    }
    if (pcVar1 == pcVar4 + -0x180a19ca7) {
      pcVar1 = pcVar1 + (int64_t)pcVar9;
      if (pcVar1 <= pcVar9) {
LAB_1802ff2f4:
        lVar7 = 0x180d48d24;
        if (puVar3[1] != 0) {
          lVar7 = puVar3[1];
        }
        FUN_180627c50(&puStack_50,lVar7);
        plVar2 = (int64_t *)FUN_1800b3970();
        lVar7 = *plVar2;
        if (plStackX_8 != (int64_t *)0x0) {
          (**(code **)(*plStackX_8 + 0x38))();
        }
        if (lVar7 == 0) {
          puVar6 = *(void **)(*(int64_t *)(param_1 + 0x10) + 0x290);
          puVar8 = &system_buffer_ptr;
          if (puVar6 != (void *)0x0) {
            puVar8 = puVar6;
          }
          puVar6 = &system_buffer_ptr;
          if (puStack_48 != (void *)0x0) {
            puVar6 = puStack_48;
          }
          FUN_180626f80(&unknown_var_2480_ptr,puVar6,puVar8);
        }
        break;
      }
      lVar5 = (int64_t)&unknown_var_2344_ptr - (int64_t)pcVar9;
      while (*pcVar9 == pcVar9[lVar5]) {
        pcVar9 = pcVar9 + 1;
        if (pcVar1 <= pcVar9) goto LAB_1802ff2f4;
      }
    }
  }
  if (lVar7 != *(int64_t *)(param_1 + 0x208)) {
    if (*(int64_t *)(param_1 + 0x10) != 0) {
      FUN_1802ed990(*(int64_t *)(param_1 + 0x10),1);
    }
    puVar3 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3);
    *puVar3 = &unknown_var_1864_ptr;
    *puVar3 = &unknown_var_1608_ptr;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *puVar3 = &unknown_var_1912_ptr;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xb] = 0;
    FUN_1802f8a10(puVar3,lVar7);
    FUN_1802fa090(param_1,lVar7,puVar3);
  }
  pcVar9 = "enable_ragdoll";
  do {
    pcVar4 = pcVar9;
    pcVar9 = pcVar4 + 1;
  } while (*pcVar9 != '\0');
  for (puVar3 = *(uint64_t **)(param_2 + 0x40); puVar3 != (uint64_t *)0x0;
      puVar3 = (uint64_t *)puVar3[6]) {
    pcVar9 = (char *)*puVar3;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x180d48d24;
      pcVar1 = (char *)0x0;
    }
    else {
      pcVar1 = (char *)puVar3[2];
    }
    if (pcVar1 == pcVar4 + -0x180a19c97) {
      pcVar1 = pcVar1 + (int64_t)pcVar9;
      if (pcVar1 <= pcVar9) {
LAB_1802ff464:
        lVar7 = 0x180d48d24;
        if (puVar3[1] != 0) {
          lVar7 = puVar3[1];
        }
        (**(code **)(puStack_50 + 0x10))(&puStack_50,lVar7);
        pcVar9 = (char *)0x0;
        if (iStack_40 == 4) goto LAB_1802ff491;
        break;
      }
      lVar7 = (int64_t)&unknown_var_2328_ptr - (int64_t)pcVar9;
      while (*pcVar9 == pcVar9[lVar7]) {
        pcVar9 = pcVar9 + 1;
        if (pcVar1 <= pcVar9) goto LAB_1802ff464;
      }
    }
  }
  goto LAB_1802ff4b0;
  while (pcVar9 = pcVar4 + 1, pcVar4 + 1 != (char *)0x5) {
LAB_1802ff491:
    pcVar4 = pcVar9;
    if (pcVar4[(int64_t)puStack_48] != pcVar4[0x180a06418]) goto LAB_1802ff4b0;
  }
  FUN_1802feaf0(param_1,(int)pcVar4 + -3);
LAB_1802ff4b0:
  FUN_1802ff540(param_1,param_2,param_3,param_4);
  if (*(int64_t *)(param_1 + 0x18) != 0) {
    FUN_1802ff780(param_1,param_2,param_3,param_4);
  }
  FUN_1802fbc50(param_1);
  puStack_50 = &system_data_buffer_ptr;
  if (puStack_48 == (void *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}






// 函数: void FUN_1802ff540(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802ff540(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char *pcVar4;
  char *pcVar5;
  int64_t lVar6;
  int64_t *plVar7;
  void *puVar8;
  int64_t lVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  uint uVar12;
  uint64_t *puVar13;
  void *puVar14;
  char *pcVar15;
  int64_t lVar17;
  uint64_t in_stack_ffffffffffffffa0;
  int64_t *plStack_58;
  uint64_t uStack_50;
  int64_t **pplStack_48;
  int64_t *plStack_38;
  int64_t *plStack_30;
  uint64_t uStack_28;
  int32_t uStack_20;
  char *pcVar16;
  
  uStack_50 = 0xfffffffffffffffe;
  pcVar15 = "components";
  do {
    pcVar16 = pcVar15;
    pcVar15 = pcVar16 + 1;
  } while (*pcVar15 != '\0');
  puVar13 = *(uint64_t **)(param_2 + 0x30);
  if (puVar13 != (uint64_t *)0x0) {
    pcVar15 = (char *)0x0;
    do {
      pcVar4 = (char *)*puVar13;
      if (pcVar4 == (char *)0x0) {
        pcVar4 = (char *)0x180d48d24;
        pcVar5 = pcVar15;
      }
      else {
        pcVar5 = (char *)puVar13[2];
      }
      if (pcVar5 == pcVar16 + -0x180a19c77) {
        pcVar5 = pcVar5 + (int64_t)pcVar4;
        if (pcVar5 <= pcVar4) {
LAB_1802ff5d0:
          lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x268);
          if (lVar6 == 0) {
            plStack_38 = (int64_t *)0x0;
            plStack_30 = (int64_t *)0x0;
            uStack_28 = 0;
            uStack_20 = 3;
            FUN_1803be9f0(param_4,&plStack_38,0,puVar13,param_3,
                          in_stack_ffffffffffffffa0 & 0xffffffffffffff00);
            plVar3 = plStack_30;
            plVar2 = plStack_38;
            uVar11 = (int64_t)plStack_30 - (int64_t)plStack_38 >> 3;
            plVar7 = plVar2;
            if (uVar11 != 0) {
              pplStack_48 = &plStack_58;
              plVar10 = plStack_38;
              do {
                plStack_58 = (int64_t *)*plVar10;
                if (plStack_58 != (int64_t *)0x0) {
                  (**(code **)(*plStack_58 + 0x28))();
                }
                FUN_1802fc0f0(param_1,plStack_58);
                if (plStack_58 != (int64_t *)0x0) {
                  (**(code **)(*plStack_58 + 0x38))();
                }
                uVar12 = (int)pcVar15 + 1;
                pcVar15 = (char *)(uint64_t)uVar12;
                plVar10 = plVar10 + 1;
              } while ((uint64_t)(int64_t)(int)uVar12 < uVar11);
            }
            for (; plVar7 != plVar3; plVar7 = plVar7 + 1) {
              if ((int64_t *)*plVar7 != (int64_t *)0x0) {
                (**(code **)(*(int64_t *)*plVar7 + 0x38))();
              }
            }
            if (plVar2 == (int64_t *)0x0) {
              return;
            }
                    // WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager(plVar2);
          }
          plVar7 = (int64_t *)(*(int64_t *)(lVar6 + 0x260) + 0x1a8);
          lVar9 = *(int64_t *)(param_1 + 0x1b0) - *(int64_t *)(param_1 + 0x1a8) >> 3;
          lVar17 = *(int64_t *)(*(int64_t *)(lVar6 + 0x260) + 0x1b0) - *plVar7 >> 3;
          if (lVar17 == lVar9) {
            FUN_1803bf690((int64_t *)(param_1 + 0x1a8),plVar7,puVar13,param_3,0,0);
            return;
          }
          puVar14 = &system_buffer_ptr;
          if (*(void **)(lVar6 + 0x290) != (void *)0x0) {
            puVar14 = *(void **)(lVar6 + 0x290);
          }
          puVar1 = *(void **)(*(int64_t *)(param_1 + 0x10) + 0x290);
          puVar8 = &system_buffer_ptr;
          if (puVar1 != (void *)0x0) {
            puVar8 = puVar1;
          }
          FUN_180627020(&unknown_var_2384_ptr,puVar8,lVar9,puVar14,lVar17);
          if (*(int64_t *)(param_1 + 0x10) == 0) {
            return;
          }
          FUN_1802ed990(*(int64_t *)(param_1 + 0x10),1);
          return;
        }
        lVar6 = (int64_t)&unknown_var_2296_ptr - (int64_t)pcVar4;
        while (*pcVar4 == pcVar4[lVar6]) {
          pcVar4 = pcVar4 + 1;
          if (pcVar5 <= pcVar4) goto LAB_1802ff5d0;
        }
      }
      puVar13 = (uint64_t *)puVar13[0xb];
    } while (puVar13 != (uint64_t *)0x0);
  }
  return;
}






