#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part333.c - 17 个函数

// 函数: void FUN_1804429f0(longlong param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804429f0(longlong param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint64_t uVar6;
  longlong lStack_40;
  longlong lStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  
  uVar6 = 0xfffffffffffffffe;
  lStack_40 = 0;
  lStack_38 = 0;
  uVar2 = 0;
  uStack_30 = 0;
  uStack_28 = 3;
  uVar4 = uVar2;
  uVar5 = uVar2;
  if (*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(uVar5 + *(longlong *)(param_1 + 0xf0));
      (**(code **)(*plVar1 + 0x170))(plVar1,&lStack_40,0xffffffff,param_4,uVar6);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3));
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FUN_1802fdc90(*(longlong *)(param_1 + 0x260),&lStack_40,0xffffffff);
  }
  uVar4 = uVar2;
  if (lStack_38 - lStack_40 >> 3 != 0) {
    do {
      *(int32_t *)(*(longlong *)(uVar4 + lStack_40) + 0x2dc) = param_2;
      uVar3 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar3;
      uVar4 = uVar4 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(lStack_38 - lStack_40 >> 3));
  }
  if (lStack_40 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180442b30(longlong param_1,longlong param_2,float *param_3)
void FUN_180442b30(longlong param_1,longlong param_2,float *param_3)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int iVar6;
  longlong lVar7;
  uint64_t *puVar8;
  longlong lVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  bool bVar12;
  int8_t auStack_108 [32];
  uint64_t uStack_e8;
  void *apuStack_d8 [20];
  ulonglong uStack_38;
  
  uStack_e8 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_108;
  puVar11 = *(uint64_t **)(param_1 + 0x200);
  puVar1 = *(uint64_t **)(param_1 + 0x208);
  while( true ) {
    if (puVar11 == puVar1) goto LAB_180442cde;
    lVar7 = (**(code **)(*(longlong *)*puVar11 + 0x10))((longlong *)*puVar11,apuStack_d8);
    if (*(int *)(lVar7 + 0x10) == 0xf) {
      iVar6 = strcmp(*(uint64_t *)(lVar7 + 8),&unknown_var_5704_ptr);
      bVar12 = iVar6 == 0;
    }
    else {
      bVar12 = false;
    }
    apuStack_d8[0] = &system_state_ptr;
    if (bVar12) break;
    puVar11 = puVar11 + 1;
  }
  lVar7 = **(longlong **)(param_1 + 0x200);
  lVar9 = 2;
  puVar11 = (uint64_t *)(param_2 + 0x10);
  puVar1 = (uint64_t *)(lVar7 + 0x70);
  do {
    puVar10 = puVar1;
    puVar8 = puVar11;
    uVar5 = puVar10[1];
    *puVar8 = *puVar10;
    puVar8[1] = uVar5;
    uVar5 = puVar10[3];
    puVar8[2] = puVar10[2];
    puVar8[3] = uVar5;
    uVar5 = puVar10[5];
    puVar8[4] = puVar10[4];
    puVar8[5] = uVar5;
    uVar5 = puVar10[7];
    puVar8[6] = puVar10[6];
    puVar8[7] = uVar5;
    uVar5 = puVar10[9];
    puVar8[8] = puVar10[8];
    puVar8[9] = uVar5;
    uVar5 = puVar10[0xb];
    puVar8[10] = puVar10[10];
    puVar8[0xb] = uVar5;
    uVar5 = puVar10[0xd];
    puVar8[0xc] = puVar10[0xc];
    puVar8[0xd] = uVar5;
    uVar5 = puVar10[0xf];
    puVar8[0xe] = puVar10[0xe];
    puVar8[0xf] = uVar5;
    lVar9 = lVar9 + -1;
    puVar11 = puVar8 + 0x10;
    puVar1 = puVar10 + 0x10;
  } while (lVar9 != 0);
  uVar5 = puVar10[0x11];
  puVar8[0x10] = puVar10[0x10];
  puVar8[0x11] = uVar5;
  uVar5 = puVar10[0x13];
  puVar8[0x12] = puVar10[0x12];
  puVar8[0x13] = uVar5;
  uVar5 = puVar10[0x15];
  puVar8[0x14] = puVar10[0x14];
  puVar8[0x15] = uVar5;
  uVar5 = puVar10[0x17];
  puVar8[0x16] = puVar10[0x16];
  puVar8[0x17] = uVar5;
  uVar5 = *(uint64_t *)(param_1 + 0x78);
  *(uint64_t *)(param_2 + 0xd0) = *(uint64_t *)(param_1 + 0x70);
  *(uint64_t *)(param_2 + 0xd8) = uVar5;
  uVar5 = *(uint64_t *)(param_1 + 0x88);
  *(uint64_t *)(param_2 + 0xe0) = *(uint64_t *)(param_1 + 0x80);
  *(uint64_t *)(param_2 + 0xe8) = uVar5;
  uVar2 = *(int32_t *)(param_1 + 0x94);
  uVar3 = *(int32_t *)(param_1 + 0x98);
  uVar4 = *(int32_t *)(param_1 + 0x9c);
  *(int32_t *)(param_2 + 0xf0) = *(int32_t *)(param_1 + 0x90);
  *(int32_t *)(param_2 + 0xf4) = uVar2;
  *(int32_t *)(param_2 + 0xf8) = uVar3;
  *(int32_t *)(param_2 + 0xfc) = uVar4;
  uVar2 = *(int32_t *)(param_1 + 0xa4);
  uVar3 = *(int32_t *)(param_1 + 0xa8);
  uVar4 = *(int32_t *)(param_1 + 0xac);
  *(int32_t *)(param_2 + 0x100) = *(int32_t *)(param_1 + 0xa0);
  *(int32_t *)(param_2 + 0x104) = uVar2;
  *(int32_t *)(param_2 + 0x108) = uVar3;
  *(int32_t *)(param_2 + 0x10c) = uVar4;
  FUN_1802864f0(param_2 + 0x10);
  *param_3 = (float)*(double *)(lVar7 + 0x1f8);
  param_3[1] = (float)*(double *)(lVar7 + 0x200);
  param_3[2] = (float)*(double *)(lVar7 + 0x208);
  param_3[3] = 1.0;
LAB_180442cde:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_108);
}





// 函数: void FUN_180442d10(longlong param_1,uint64_t *param_2,uint64_t *param_3)
void FUN_180442d10(longlong param_1,uint64_t *param_2,uint64_t *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t uVar4;
  int iVar5;
  uint64_t *puVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int8_t auStack_58 [64];
  
  lVar1 = *(longlong *)(param_1 + 0x200);
  iVar7 = 0;
  uVar8 = *(longlong *)(param_1 + 0x208) - lVar1 >> 3;
  if (uVar8 != 0) {
    lVar9 = 0;
    do {
      lVar2 = *(longlong *)(lVar9 + lVar1);
      lVar3 = *(longlong *)(lVar2 + 0x10);
      if (*(int *)(lVar3 + 0x18) == 0xb) {
        iVar5 = strcmp(*(uint64_t *)(lVar3 + 0x10),&unknown_var_6192_ptr);
        if (iVar5 == 0) {
          puVar6 = (uint64_t *)FUN_180347100(lVar2,auStack_58,param_2);
          uVar4 = puVar6[1];
          *param_3 = *puVar6;
          param_3[1] = uVar4;
          uVar4 = puVar6[3];
          param_3[2] = puVar6[2];
          param_3[3] = uVar4;
          uVar4 = puVar6[5];
          param_3[4] = puVar6[4];
          param_3[5] = uVar4;
          uVar10 = *(int32_t *)(puVar6 + 6);
          uVar11 = *(int32_t *)((longlong)puVar6 + 0x34);
          uVar12 = *(int32_t *)(puVar6 + 7);
          uVar13 = *(int32_t *)((longlong)puVar6 + 0x3c);
          goto LAB_180442da7;
        }
      }
      iVar7 = iVar7 + 1;
      lVar9 = lVar9 + 8;
    } while ((ulonglong)(longlong)iVar7 < uVar8);
  }
  uVar4 = param_2[1];
  *param_3 = *param_2;
  param_3[1] = uVar4;
  uVar4 = param_2[3];
  param_3[2] = param_2[2];
  param_3[3] = uVar4;
  uVar4 = param_2[5];
  param_3[4] = param_2[4];
  param_3[5] = uVar4;
  uVar10 = *(int32_t *)(param_2 + 6);
  uVar11 = *(int32_t *)((longlong)param_2 + 0x34);
  uVar12 = *(int32_t *)(param_2 + 7);
  uVar13 = *(int32_t *)((longlong)param_2 + 0x3c);
LAB_180442da7:
  *(int32_t *)(param_3 + 6) = uVar10;
  *(int32_t *)((longlong)param_3 + 0x34) = uVar11;
  *(int32_t *)(param_3 + 7) = uVar12;
  *(int32_t *)((longlong)param_3 + 0x3c) = uVar13;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180442e00(uint64_t param_1)
void FUN_180442e00(uint64_t param_1)

{
  int32_t uVar1;
  int32_t *puVar2;
  int8_t auStack_168 [48];
  void *puStack_138;
  int32_t *puStack_130;
  int32_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  ulonglong uStack_68;
  
  uStack_118 = 0xfffffffffffffffe;
  uStack_68 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_168;
  puStack_138 = &system_data_buffer_ptr;
  uStack_120 = 0;
  puStack_130 = (int32_t *)0x0;
  uStack_128 = 0;
  puVar2 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x16,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_130 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_120 = CONCAT44(uStack_120._4_4_,uVar1);
  *puVar2 = 0x6a617274;
  puVar2[1] = 0x6f746365;
  puVar2[2] = 0x765f7972;
  puVar2[3] = 0x61757369;
  puVar2[4] = 0x657a696c;
  *(int16_t *)(puVar2 + 5) = 0x72;
  uStack_128 = 0x15;
  FUN_1802f17b0(param_1,&puStack_138);
  puStack_138 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}





// 函数: void FUN_180443000(longlong param_1,int32_t param_2,int32_t param_3)
void FUN_180443000(longlong param_1,int32_t param_2,int32_t param_3)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x260);
  if ((lVar1 != 0) && (plVar2 = *(longlong **)(lVar1 + 0x210), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x98))(plVar2,param_3,param_2);
    if (*(float *)(lVar1 + 0x3c) < 0.0) {
      fVar3 = 0.1;
    }
    else {
      fVar3 = *(float *)(lVar1 + 0x3c) + 1.1920929e-07;
    }
    *(float *)(lVar1 + 0x34) = fVar3;
    FUN_1802fac00(lVar1,param_1 + 0x70,0xbf800000);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180443080(longlong param_1,longlong *param_2,int8_t param_3)
void FUN_180443080(longlong param_1,longlong *param_2,int8_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  longlong *plVar3;
  longlong *plStackX_8;
  longlong *plStackX_10;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = *(uint64_t *)(param_1 + 0x260);
    uVar2 = FUN_18062b1e0(system_memory_pool_ptr,0x3d0,8,0x16,0xfffffffffffffffe);
    plVar3 = (longlong *)FUN_180275090(uVar2);
    plStackX_10 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plStackX_8 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2);
    FUN_180275cf0(plVar3,0,&plStackX_8,1);
    FUN_1802fbf30(uVar1,param_3,plVar3,&system_data_0300);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804431c0(longlong param_1,char param_2,uint64_t *param_3)
void FUN_1804431c0(longlong param_1,char param_2,uint64_t *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint *puVar5;
  int8_t auStack_c8 [32];
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_c8;
  if (param_1 == 0) {
    *param_3 = 0x3f800000;
    param_3[1] = 0;
    param_3[2] = 0x3f80000000000000;
    param_3[3] = 0;
    *(int32_t *)(param_3 + 4) = 0;
    *(int32_t *)((longlong)param_3 + 0x24) = 0;
    *(int32_t *)(param_3 + 5) = 0x3f800000;
    *(int32_t *)((longlong)param_3 + 0x2c) = 0;
    *(int32_t *)(param_3 + 6) = 0;
    *(int32_t *)((longlong)param_3 + 0x34) = 0;
    *(int32_t *)(param_3 + 7) = 0;
    *(int32_t *)((longlong)param_3 + 0x3c) = 0x3f800000;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x260);
    if (lVar2 == 0) {
      *param_3 = 0x3f800000;
      param_3[1] = 0;
      param_3[2] = 0x3f80000000000000;
      param_3[3] = 0;
      *(int32_t *)(param_3 + 4) = 0;
      *(int32_t *)((longlong)param_3 + 0x24) = 0;
      *(int32_t *)(param_3 + 5) = 0x3f800000;
      *(int32_t *)((longlong)param_3 + 0x2c) = 0;
      *(int32_t *)(param_3 + 6) = 0;
      *(int32_t *)((longlong)param_3 + 0x34) = 0;
      *(int32_t *)(param_3 + 7) = 0;
      *(int32_t *)((longlong)param_3 + 0x3c) = 0x3f800000;
    }
    else {
      if ((*(byte *)(lVar2 + 0xa8) & 1) == 0) {
        FUN_1802fac00(lVar2,*(longlong *)(lVar2 + 0x10) + 0x70,0xbf800000);
      }
      puVar5 = (uint *)((longlong)param_2 * 0x100 + *(longlong *)(lVar2 + 0x18));
      do {
        LOCK();
        uVar1 = *puVar5;
        *puVar5 = *puVar5 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      uStack_a8 = puVar5[1];
      uStack_a4 = puVar5[2];
      uStack_a0 = puVar5[3];
      uStack_9c = puVar5[4];
      uVar3 = *(uint64_t *)(puVar5 + 5);
      uVar4 = *(uint64_t *)(puVar5 + 7);
      *puVar5 = 0;
      uStack_98 = uVar3;
      uStack_90 = uVar4;
      uStack_58 = uStack_a8;
      uStack_54 = uStack_a4;
      uStack_50 = uStack_a0;
      uStack_4c = uStack_9c;
      uStack_48 = uVar3;
      uStack_40 = uVar4;
      FUN_18063b5f0(&uStack_88,&uStack_a8);
      *(int32_t *)param_3 = uStack_88;
      *(int32_t *)((longlong)param_3 + 4) = uStack_84;
      *(int32_t *)(param_3 + 1) = uStack_80;
      *(int32_t *)((longlong)param_3 + 0xc) = uStack_7c;
      *(int32_t *)(param_3 + 2) = uStack_78;
      *(int32_t *)((longlong)param_3 + 0x14) = uStack_74;
      *(int32_t *)(param_3 + 3) = uStack_70;
      *(int32_t *)((longlong)param_3 + 0x1c) = uStack_6c;
      *(int32_t *)(param_3 + 4) = uStack_68;
      *(int32_t *)((longlong)param_3 + 0x24) = uStack_64;
      *(int32_t *)(param_3 + 5) = uStack_60;
      *(int32_t *)((longlong)param_3 + 0x2c) = uStack_5c;
      param_3[6] = uVar3;
      param_3[7] = uVar4;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_c8);
}





// 函数: void FUN_1804431ed(longlong param_1,uint64_t param_2,uint64_t *param_3)
void FUN_1804431ed(longlong param_1,uint64_t param_2,uint64_t *param_3)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint *puVar6;
  int32_t *unaff_RBX;
  char unaff_SIL;
  uint64_t unaff_RDI;
  longlong in_R11;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  uint uStackX_20;
  uint uStackX_24;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  uint uStack0000000000000070;
  uint uStack0000000000000074;
  uint uStack0000000000000078;
  uint uStack000000000000007c;
  uint64_t in_stack_00000080;
  uint64_t in_stack_00000088;
  ulonglong in_stack_00000090;
  
  *(uint64_t *)(in_R11 + -0x18) = unaff_RDI;
  lVar3 = *(longlong *)(param_1 + 0x260);
  if (lVar3 == 0) {
    *param_3 = 0x3f800000;
    param_3[1] = 0;
    param_3[2] = 0x3f80000000000000;
    param_3[3] = 0;
    *(int32_t *)(param_3 + 4) = 0;
    *(int32_t *)((longlong)param_3 + 0x24) = 0;
    *(int32_t *)(param_3 + 5) = 0x3f800000;
    *(int32_t *)((longlong)param_3 + 0x2c) = 0;
    *(int32_t *)(param_3 + 6) = 0;
    *(int32_t *)((longlong)param_3 + 0x34) = 0;
    *(int32_t *)(param_3 + 7) = 0;
    *(int32_t *)((longlong)param_3 + 0x3c) = 0x3f800000;
  }
  else {
    bVar2 = *(byte *)(lVar3 + 0xa8);
    *(int32_t *)(in_R11 + -0x28) = unaff_XMM6_Da;
    *(int32_t *)(in_R11 + -0x24) = unaff_XMM6_Db;
    *(int32_t *)(in_R11 + -0x20) = unaff_XMM6_Dc;
    *(int32_t *)(in_R11 + -0x1c) = unaff_XMM6_Dd;
    if ((bVar2 & 1) == 0) {
      FUN_1802fac00(lVar3,*(longlong *)(lVar3 + 0x10) + 0x70,0xbf800000);
    }
    puVar6 = (uint *)((longlong)unaff_SIL * 0x100 + *(longlong *)(lVar3 + 0x18));
    do {
      LOCK();
      uVar1 = *puVar6;
      *puVar6 = *puVar6 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    uStackX_20 = puVar6[1];
    uStackX_24 = puVar6[2];
    uStack0000000000000078 = puVar6[3];
    uStack000000000000007c = puVar6[4];
    uVar4 = *(uint64_t *)(puVar6 + 5);
    uVar5 = *(uint64_t *)(puVar6 + 7);
    *puVar6 = 0;
    uStack0000000000000070 = uStackX_20;
    uStack0000000000000074 = uStackX_24;
    in_stack_00000080 = uVar4;
    in_stack_00000088 = uVar5;
    FUN_18063b5f0(&stack0x00000040,&uStackX_20);
    *unaff_RBX = uStack0000000000000040;
    unaff_RBX[1] = uStack0000000000000044;
    unaff_RBX[2] = uStack0000000000000048;
    unaff_RBX[3] = uStack000000000000004c;
    unaff_RBX[4] = uStack0000000000000050;
    unaff_RBX[5] = uStack0000000000000054;
    unaff_RBX[6] = uStack0000000000000058;
    unaff_RBX[7] = uStack000000000000005c;
    unaff_RBX[8] = uStack0000000000000060;
    unaff_RBX[9] = uStack0000000000000064;
    unaff_RBX[10] = uStack0000000000000068;
    unaff_RBX[0xb] = uStack000000000000006c;
    *(uint64_t *)(unaff_RBX + 0xc) = uVar4;
    *(uint64_t *)(unaff_RBX + 0xe) = uVar5;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000090 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180443208(int32_t param_1)
void FUN_180443208(int32_t param_1)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint *puVar4;
  int32_t *unaff_RBX;
  char unaff_SIL;
  longlong unaff_RDI;
  longlong in_R11;
  bool in_ZF;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  uint uStackX_20;
  uint uStackX_24;
  uint uStack000000000000002c;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  uint in_stack_00000070;
  uint uStack0000000000000074;
  uint in_stack_00000078;
  uint uStack000000000000007c;
  uint64_t in_stack_00000080;
  uint64_t in_stack_00000088;
  ulonglong in_stack_00000090;
  
  *(int32_t *)(in_R11 + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x1c) = unaff_XMM6_Dd;
  if (in_ZF) {
    FUN_1802fac00(param_1,*(longlong *)(unaff_RDI + 0x10) + 0x70,0xbf800000);
  }
  puVar4 = (uint *)((longlong)unaff_SIL * 0x100 + *(longlong *)(unaff_RDI + 0x18));
  do {
    LOCK();
    uVar1 = *puVar4;
    *puVar4 = *puVar4 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  uStackX_20 = puVar4[1];
  uStackX_24 = puVar4[2];
  in_stack_00000078 = puVar4[3];
  uStack000000000000002c = puVar4[4];
  uVar2 = *(uint64_t *)(puVar4 + 5);
  uVar3 = *(uint64_t *)(puVar4 + 7);
  *puVar4 = 0;
  in_stack_00000070 = uStackX_20;
  uStack0000000000000074 = uStackX_24;
  uStack000000000000007c = uStack000000000000002c;
  in_stack_00000080 = uVar2;
  in_stack_00000088 = uVar3;
  FUN_18063b5f0(&stack0x00000040,&uStackX_20);
  *unaff_RBX = uStack0000000000000040;
  unaff_RBX[1] = uStack0000000000000044;
  unaff_RBX[2] = uStack0000000000000048;
  unaff_RBX[3] = uStack000000000000004c;
  unaff_RBX[4] = uStack0000000000000050;
  unaff_RBX[5] = uStack0000000000000054;
  unaff_RBX[6] = uStack0000000000000058;
  unaff_RBX[7] = uStack000000000000005c;
  unaff_RBX[8] = uStack0000000000000060;
  unaff_RBX[9] = uStack0000000000000064;
  unaff_RBX[10] = uStack0000000000000068;
  unaff_RBX[0xb] = uStack000000000000006c;
  *(uint64_t *)(unaff_RBX + 0xc) = uVar2;
  *(uint64_t *)(unaff_RBX + 0xe) = uVar3;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000090 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180443294(void)
void FUN_180443294(void)

{
  ulonglong in_stack_00000090;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000090 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18044329c(void)
void FUN_18044329c(void)

{
  ulonglong in_stack_00000090;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000090 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1804432b6(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_1804432b6(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  ulonglong in_stack_00000090;
  
  *param_3 = 0x3f800000;
  param_3[1] = 0;
  param_3[2] = 0x3f80000000000000;
  param_3[3] = 0;
  *(int32_t *)(param_3 + 4) = 0;
  *(int32_t *)((longlong)param_3 + 0x24) = 0;
  *(int32_t *)(param_3 + 5) = 0x3f800000;
  *(int32_t *)((longlong)param_3 + 0x2c) = 0;
  *(int32_t *)(param_3 + 6) = 0;
  *(int32_t *)((longlong)param_3 + 0x34) = 0;
  *(int32_t *)(param_3 + 7) = 0;
  *(int32_t *)((longlong)param_3 + 0x3c) = 0x3f800000;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000090 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1804432e7(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_1804432e7(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  ulonglong in_stack_00000090;
  
  *param_3 = 0x3f800000;
  param_3[1] = 0;
  param_3[2] = 0x3f80000000000000;
  param_3[3] = 0;
  *(int32_t *)(param_3 + 4) = 0;
  *(int32_t *)((longlong)param_3 + 0x24) = 0;
  *(int32_t *)(param_3 + 5) = 0x3f800000;
  *(int32_t *)((longlong)param_3 + 0x2c) = 0;
  *(int32_t *)(param_3 + 6) = 0;
  *(int32_t *)((longlong)param_3 + 0x34) = 0;
  *(int32_t *)(param_3 + 7) = 0;
  *(int32_t *)((longlong)param_3 + 0x3c) = 0x3f800000;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000090 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180443320(longlong param_1,uint64_t param_2,uint64_t *param_3)
void FUN_180443320(longlong param_1,uint64_t param_2,uint64_t *param_3)

{
  uint uVar1;
  longlong lVar2;
  void *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  char cVar6;
  void *puVar7;
  uint *puVar8;
  void *puVar9;
  int8_t auStack_f8 [32];
  void *puStack_d8;
  void *puStack_d0;
  int32_t uStack_c0;
  uint64_t uStack_b8;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  ulonglong uStack_38;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_f8;
  FUN_180627910(&puStack_d8);
  if ((param_1 == 0) || (lVar2 = *(longlong *)(param_1 + 0x260), lVar2 == 0)) {
    *param_3 = 0x3f800000;
    param_3[1] = 0;
    param_3[2] = 0x3f80000000000000;
    param_3[3] = 0;
    *(int32_t *)(param_3 + 4) = 0;
    *(int32_t *)((longlong)param_3 + 0x24) = 0;
    *(int32_t *)(param_3 + 5) = 0x3f800000;
    *(int32_t *)((longlong)param_3 + 0x2c) = 0;
    *(int32_t *)(param_3 + 6) = 0;
    *(int32_t *)((longlong)param_3 + 0x34) = 0;
    *(int32_t *)(param_3 + 7) = 0;
    *(int32_t *)((longlong)param_3 + 0x3c) = 0x3f800000;
  }
  else {
    cVar6 = FUN_18040b330(*(uint64_t *)(lVar2 + 0x208),&puStack_d8,1);
    if (cVar6 == -1) {
      puVar9 = &system_buffer_ptr;
      if (puStack_d0 != (void *)0x0) {
        puVar9 = puStack_d0;
      }
      puVar3 = *(void **)(*(longlong *)(lVar2 + 0x10) + 0x290);
      puVar7 = &system_buffer_ptr;
      if (puVar3 != (void *)0x0) {
        puVar7 = puVar3;
      }
      FUN_180626f80(&unknown_var_9728_ptr,puVar7,puVar9);
      *param_3 = 0x3f800000;
      param_3[1] = 0;
      param_3[2] = 0x3f80000000000000;
      param_3[3] = 0;
      *(int32_t *)(param_3 + 4) = 0;
      *(int32_t *)((longlong)param_3 + 0x24) = 0;
      *(int32_t *)(param_3 + 5) = 0x3f800000;
      *(int32_t *)((longlong)param_3 + 0x2c) = 0;
      param_3[6] = 0;
      param_3[7] = 0x3f80000000000000;
    }
    if ((*(byte *)(lVar2 + 0xa8) & 1) == 0) {
      FUN_1802fac00(lVar2,*(longlong *)(lVar2 + 0x10) + 0x70,0xbf800000);
    }
    puVar8 = (uint *)((longlong)cVar6 * 0x100 + *(longlong *)(lVar2 + 0x18));
    do {
      LOCK();
      uVar1 = *puVar8;
      *puVar8 = *puVar8 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    uStack_a8 = puVar8[1];
    uStack_a4 = puVar8[2];
    uStack_a0 = puVar8[3];
    uStack_9c = puVar8[4];
    uVar4 = *(uint64_t *)(puVar8 + 5);
    uVar5 = *(uint64_t *)(puVar8 + 7);
    *puVar8 = 0;
    uStack_98 = uVar4;
    uStack_90 = uVar5;
    uStack_58 = uStack_a8;
    uStack_54 = uStack_a4;
    uStack_50 = uStack_a0;
    uStack_4c = uStack_9c;
    uStack_48 = uVar4;
    uStack_40 = uVar5;
    FUN_18063b5f0(&uStack_88,&uStack_a8);
    *(int32_t *)param_3 = uStack_88;
    *(int32_t *)((longlong)param_3 + 4) = uStack_84;
    *(int32_t *)(param_3 + 1) = uStack_80;
    *(int32_t *)((longlong)param_3 + 0xc) = uStack_7c;
    *(int32_t *)(param_3 + 2) = uStack_78;
    *(int32_t *)((longlong)param_3 + 0x14) = uStack_74;
    *(int32_t *)(param_3 + 3) = uStack_70;
    *(int32_t *)((longlong)param_3 + 0x1c) = uStack_6c;
    param_3[4] = uStack_68;
    param_3[5] = uStack_60;
    param_3[6] = uVar4;
    param_3[7] = uVar5;
  }
  puStack_d8 = &system_data_buffer_ptr;
  if (puStack_d0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_d0 = (void *)0x0;
  uStack_c0 = 0;
  puStack_d8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_f8);
}



ulonglong FUN_180443510(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  ulonglong in_RAX;
  byte *pbVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if (param_1 != 0) {
    iVar7 = 0;
    uVar5 = *(longlong *)(param_1 + 0x208) - *(longlong *)(param_1 + 0x200) >> 3;
    if (uVar5 != 0) {
      lVar8 = 0;
      do {
        lVar6 = *(longlong *)(*(longlong *)(lVar8 + *(longlong *)(param_1 + 0x200)) + 0x10);
        pbVar3 = (byte *)0xffffffffffffffff;
        do {
          pbVar3 = pbVar3 + 1;
        } while (pbVar3[param_2] != 0);
        iVar2 = *(int *)(lVar6 + 0x18);
        iVar4 = (int)pbVar3;
        if (iVar2 == iVar4) {
          if (iVar2 != 0) {
            pbVar3 = *(byte **)(lVar6 + 0x10);
            lVar6 = param_2 - (longlong)pbVar3;
            do {
              pbVar1 = pbVar3 + lVar6;
              iVar4 = (uint)*pbVar3 - (uint)*pbVar1;
              if (iVar4 != 0) break;
              pbVar3 = pbVar3 + 1;
            } while (*pbVar1 != 0);
          }
LAB_18044359d:
          if (iVar4 == 0) {
            return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
          }
        }
        else if (iVar2 == 0) goto LAB_18044359d;
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 8;
        in_RAX = (ulonglong)iVar7;
      } while (in_RAX < uVar5);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}





// 函数: void FUN_180443630(longlong param_1)
void FUN_180443630(longlong param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t auStack_30 [40];
  
  if (param_1 != 0) {
    uVar2 = 0xfffffffffffffffe;
    uVar1 = FUN_180627910(auStack_30);
    FUN_1803543b0(param_1,uVar1,1,0,uVar2);
  }
  return;
}





// 函数: void FUN_180443680(longlong param_1,longlong *param_2,int32_t param_3,uint64_t param_4)
void FUN_180443680(longlong param_1,longlong *param_2,int32_t param_3,uint64_t param_4)

{
  longlong *plStackX_8;
  longlong **pplStackX_10;
  uint64_t uVar1;
  
  if ((param_1 != 0) && (uVar1 = 0xfffffffffffffffe, param_2 != (longlong *)0x0)) {
    pplStackX_10 = &plStackX_8;
    plStackX_8 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2);
    FUN_1802f0080(param_1,&plStackX_8,param_3,param_4,uVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_180443700(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  longlong lVar2;
  void *puStack_30;
  longlong lStack_28;
  
  uVar1 = FUN_180627910(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  lVar2 = FUN_18020bef0(render_system_data_config,uVar1);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return lVar2 != 0;
}





// 函数: void FUN_180443770(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180443770(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plStackX_8;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    plStackX_8 = param_1;
    (**(code **)(*param_1 + 0x28))();
    FUN_1800b87c0(lVar2 + 0x60d10,&plStackX_8);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    *(uint *)((longlong)param_1 + 0x2ac) = *(uint *)((longlong)param_1 + 0x2ac) | 0x10000000;
    iVar1 = (int)param_1[0x57];
    if (((iVar1 != -1) && ((ulonglong)(longlong)iVar1 < *(ulonglong *)(lVar2 + 0x60838))) &&
       ((*(ulonglong *)(*(longlong *)(lVar2 + 0x60830) + (longlong)iVar1 * 0x10) &
        0xffffffff00000000) != 0)) {
      FUN_180398450(lVar2 + 0x607e0,param_1,0xffffffff00000000,param_4,uVar3);
    }
  }
  return;
}





