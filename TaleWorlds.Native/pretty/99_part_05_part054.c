#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part054.c - 12 个函数

// 函数: void FUN_1802fbc50(int64_t param_1)
void FUN_1802fbc50(int64_t param_1)

{
  uint uVar1;
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
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  bool bVar17;
  float *pfVar18;
  uint *puVar19;
  int64_t lVar20;
  int iVar21;
  uint *puVar22;
  int8_t auStack_128 [32];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  int32_t uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  int32_t uStack_dc;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  uint uStack_9c;
  int8_t auStack_98 [16];
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
  uint uStack_5c;
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_128;
  if ((*(int64_t *)(param_1 + 0x10) == 0) ||
     (*(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x20) == 0)) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  iVar21 = 0;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    lVar20 = 0;
    do {
      puVar22 = (uint *)(lVar20 * 0x100 + *(int64_t *)(param_1 + 0x18));
      if ((char)puVar22[0x28] < '\0') {
        uVar13 = *(uint64_t *)(puVar22 + 0xc);
        uVar14 = *(uint64_t *)(puVar22 + 0xe);
        uVar15 = *(uint64_t *)(puVar22 + 0x10);
        uVar16 = *(uint64_t *)(puVar22 + 0x12);
        do {
          LOCK();
          uVar1 = *puVar22;
          *puVar22 = *puVar22 | 1;
          UNLOCK();
        } while ((uVar1 & 1) != 0);
        uStack_d8._0_4_ = (uint)uVar13;
        uStack_d8._4_4_ = (uint)((uint64_t)uVar13 >> 0x20);
        uStack_d0._0_4_ = (uint)uVar14;
        uStack_d0._4_4_ = (uint)((uint64_t)uVar14 >> 0x20);
        uStack_c8._0_4_ = (uint)uVar15;
        uStack_c8._4_4_ = (uint)((uint64_t)uVar15 >> 0x20);
        uStack_c0._0_4_ = (uint)uVar16;
        uStack_c0._4_4_ = (uint)((uint64_t)uVar16 >> 0x20);
        puVar22[1] = (uint)uStack_d8;
        puVar22[2] = uStack_d8._4_4_;
        puVar22[3] = (uint)uStack_d0;
        puVar22[4] = uStack_d0._4_4_;
        puVar22[5] = (uint)uStack_c8;
        puVar22[6] = uStack_c8._4_4_;
        puVar22[7] = (uint)uStack_c0;
        puVar22[8] = uStack_c0._4_4_;
        uStack_d8 = uVar13;
        uStack_d0 = uVar14;
        uStack_c8 = uVar15;
        uStack_c0 = uVar16;
      }
      else {
        puVar19 = (uint *)((int64_t)(char)puVar22[0x28] * 0x100 + *(int64_t *)(param_1 + 0x18));
        do {
          LOCK();
          uVar1 = *puVar19;
          *puVar19 = *puVar19 | 1;
          UNLOCK();
        } while ((uVar1 & 1) != 0);
        fVar2 = (float)puVar19[1];
        fVar3 = (float)puVar19[2];
        fVar4 = (float)puVar19[3];
        fVar5 = (float)puVar19[4];
        fVar6 = (float)puVar19[5];
        fVar7 = (float)puVar19[6];
        fVar8 = (float)puVar19[7];
        uStack_9c = puVar19[8];
        *puVar19 = 0;
        fStack_b8 = fVar2;
        fStack_b4 = fVar3;
        fStack_b0 = fVar4;
        fStack_ac = fVar5;
        fStack_a8 = fVar6;
        fStack_a4 = fVar7;
        fStack_a0 = fVar8;
        fStack_78 = fVar2;
        fStack_74 = fVar3;
        fStack_70 = fVar4;
        fStack_6c = fVar5;
        fStack_68 = fVar6;
        fStack_64 = fVar7;
        fStack_60 = fVar8;
        uStack_5c = uStack_9c;
        pfVar18 = (float *)FUN_1801c0fb0(&fStack_b8,auStack_98,puVar22 + 0x10);
        fVar9 = (float)puVar22[0xc];
        fVar10 = (float)puVar22[0xd];
        fVar11 = (float)puVar22[0xe];
        fVar12 = (float)puVar22[0xf];
        fStack_108 = fVar6 + *pfVar18;
        fStack_104 = fVar7 + pfVar18[1];
        fStack_100 = fVar8 + pfVar18[2];
        fStack_f4 = fVar4 * fVar12 * 1.0 + fVar2 * fVar10 * 1.0 + (fVar9 * fVar3 - fVar5 * fVar11);
        fStack_f0 = fVar5 * fVar10 * 1.0 + fVar2 * fVar11 * 1.0 + (fVar9 * fVar4 - fVar3 * fVar12);
        fStack_ec = fVar3 * fVar11 * 1.0 + fVar2 * fVar12 * 1.0 + (fVar9 * fVar5 - fVar4 * fVar10);
        fStack_f8 = fVar5 * fVar12 * -1.0 + fVar4 * fVar11 * -1.0 + (fVar9 * fVar2 - fVar3 * fVar10)
        ;
        uStack_dc = 0x7f7fffff;
        uStack_fc = 0x7f7fffff;
        do {
          LOCK();
          uVar1 = *puVar22;
          *puVar22 = *puVar22 | 1;
          UNLOCK();
        } while ((uVar1 & 1) != 0);
        puVar22[1] = (uint)fStack_f8;
        puVar22[2] = (uint)fStack_f4;
        puVar22[3] = (uint)fStack_f0;
        puVar22[4] = (uint)fStack_ec;
        puVar22[5] = (uint)fStack_108;
        puVar22[6] = (uint)fStack_104;
        puVar22[7] = (uint)fStack_100;
        puVar22[8] = 0x7f7fffff;
        fStack_e8 = fStack_108;
        fStack_e4 = fStack_104;
        fStack_e0 = fStack_100;
        fStack_88 = fStack_f8;
        fStack_84 = fStack_f4;
        fStack_80 = fStack_f0;
        fStack_7c = fStack_ec;
      }
      *puVar22 = 0;
      if (bVar17) {
        FUN_1802feba0(param_1,(int64_t)(uint64_t)(uint)((int)puVar22 - *(int *)(param_1 + 0x18))
                              >> 8);
      }
      iVar21 = iVar21 + 1;
      lVar20 = lVar20 + 1;
    } while (iVar21 < *(char *)(param_1 + 0x20));
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_128);
}






// 函数: void FUN_1802fbc9d(void)
void FUN_1802fbc9d(void)

{
  uint uVar1;
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
  float *pfVar16;
  uint *puVar17;
  int64_t unaff_RBX;
  char unaff_BPL;
  uint64_t uVar18;
  int unaff_EDI;
  uint *puVar19;
  uint unaff_R14D;
  float fStack0000000000000050;
  uint uStack0000000000000054;
  uint uStack0000000000000058;
  uint uStack000000000000005c;
  uint uStack0000000000000060;
  uint uStack0000000000000064;
  uint uStack0000000000000068;
  uint uStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  uint uStack000000000000008c;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float fStack00000000000000b8;
  float fStack00000000000000bc;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  uint uStack00000000000000cc;
  uint64_t in_stack_000000d0;
  
  uVar18 = (uint64_t)unaff_R14D;
  do {
    puVar19 = (uint *)(uVar18 * 0x100 + *(int64_t *)(unaff_RBX + 0x18));
    if ((char)puVar19[0x28] < '\0') {
      do {
        LOCK();
        uVar1 = *puVar19;
        *puVar19 = *puVar19 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      fStack0000000000000050 = (float)*(uint64_t *)(puVar19 + 0xc);
      uStack0000000000000054 = (uint)((uint64_t)*(uint64_t *)(puVar19 + 0xc) >> 0x20);
      uStack0000000000000058 = (uint)*(uint64_t *)(puVar19 + 0xe);
      uStack000000000000005c = (uint)((uint64_t)*(uint64_t *)(puVar19 + 0xe) >> 0x20);
      uStack0000000000000060 = (uint)*(uint64_t *)(puVar19 + 0x10);
      uStack0000000000000064 = (uint)((uint64_t)*(uint64_t *)(puVar19 + 0x10) >> 0x20);
      uStack0000000000000068 = (uint)*(uint64_t *)(puVar19 + 0x12);
      uStack000000000000006c = (uint)((uint64_t)*(uint64_t *)(puVar19 + 0x12) >> 0x20);
      puVar19[1] = (uint)fStack0000000000000050;
      puVar19[2] = uStack0000000000000054;
      puVar19[3] = uStack0000000000000058;
      puVar19[4] = uStack000000000000005c;
      puVar19[5] = uStack0000000000000060;
      puVar19[6] = uStack0000000000000064;
      puVar19[7] = uStack0000000000000068;
      puVar19[8] = uStack000000000000006c;
    }
    else {
      puVar17 = (uint *)((int64_t)(char)puVar19[0x28] * 0x100 + *(int64_t *)(unaff_RBX + 0x18));
      do {
        LOCK();
        uVar1 = *puVar17;
        *puVar17 = *puVar17 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      fVar5 = (float)puVar17[1];
      fVar6 = (float)puVar17[2];
      fVar7 = (float)puVar17[3];
      fVar8 = (float)puVar17[4];
      fVar9 = (float)puVar17[5];
      fVar10 = (float)puVar17[6];
      fVar11 = (float)puVar17[7];
      uStack000000000000008c = puVar17[8];
      *puVar17 = unaff_R14D;
      fStack0000000000000070 = fVar5;
      fStack0000000000000074 = fVar6;
      fStack0000000000000078 = fVar7;
      fStack000000000000007c = fVar8;
      fStack0000000000000080 = fVar9;
      fStack0000000000000084 = fVar10;
      fStack0000000000000088 = fVar11;
      fStack00000000000000b0 = fVar5;
      fStack00000000000000b4 = fVar6;
      fStack00000000000000b8 = fVar7;
      fStack00000000000000bc = fVar8;
      fStack00000000000000c0 = fVar9;
      fStack00000000000000c4 = fVar10;
      fStack00000000000000c8 = fVar11;
      uStack00000000000000cc = uStack000000000000008c;
      pfVar16 = (float *)FUN_1801c0fb0(&stack0x00000070,&stack0x00000090,puVar19 + 0x10);
      fVar12 = (float)puVar19[0xc];
      fVar13 = (float)puVar19[0xd];
      fVar14 = (float)puVar19[0xe];
      fVar15 = (float)puVar19[0xf];
      fVar2 = *pfVar16;
      fVar3 = pfVar16[1];
      fVar4 = pfVar16[2];
      fStack00000000000000a4 =
           fVar7 * fVar15 * 1.0 + fVar5 * fVar13 * 1.0 + (fVar12 * fVar6 - fVar8 * fVar14);
      fStack00000000000000a8 =
           fVar8 * fVar13 * 1.0 + fVar5 * fVar14 * 1.0 + (fVar12 * fVar7 - fVar6 * fVar15);
      fStack00000000000000ac =
           fVar6 * fVar14 * 1.0 + fVar5 * fVar15 * 1.0 + (fVar12 * fVar8 - fVar7 * fVar13);
      fStack0000000000000050 =
           fVar8 * fVar15 * -1.0 + fVar7 * fVar14 * -1.0 + (fVar12 * fVar5 - fVar6 * fVar13);
      do {
        LOCK();
        uVar1 = *puVar19;
        *puVar19 = *puVar19 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      puVar19[1] = (uint)fStack0000000000000050;
      puVar19[2] = (uint)fStack00000000000000a4;
      puVar19[3] = (uint)fStack00000000000000a8;
      puVar19[4] = (uint)fStack00000000000000ac;
      puVar19[5] = (uint)(fVar9 + fVar2);
      puVar19[6] = (uint)(fVar10 + fVar3);
      puVar19[7] = (uint)(fVar11 + fVar4);
      puVar19[8] = 0x7f7fffff;
      fStack00000000000000a0 = fStack0000000000000050;
    }
    *puVar19 = unaff_R14D;
    if (unaff_BPL != '\0') {
      FUN_1802feba0(fStack0000000000000050,
                    (int64_t)(uint64_t)(uint)((int)puVar19 - *(int *)(unaff_RBX + 0x18)) >> 8);
    }
    unaff_EDI = unaff_EDI + 1;
    uVar18 = uVar18 + 1;
  } while (unaff_EDI < *(char *)(unaff_RBX + 0x20));
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000d0 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1802fbeb0(void)
void FUN_1802fbeb0(void)

{
  uint64_t in_stack_000000d0;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000d0 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fbee0(int64_t param_1,char param_2,int64_t *param_3)
void FUN_1802fbee0(int64_t param_1,char param_2,int64_t *param_3)

{
  short *psVar1;
  uint uVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  
  uVar6 = (**(code **)(*param_3 + 0x158))(param_3);
  uVar8 = 0xfffffffffffffffe;
  if (param_3 != (int64_t *)0x0) {
    (**(code **)(*param_3 + 0x28))(param_3);
  }
  iVar5 = (**(code **)(*param_3 + 0x98))(param_3);
  if (iVar5 == 0) {
    cVar4 = func_0x000180282950();
    if (cVar4 != '\0') {
      uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,200,8,3,uVar8);
      plVar7 = (int64_t *)FUN_18030b420(uVar8,param_3,0);
      if (plVar7 != (int64_t *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7);
      }
      (**(code **)(*param_3 + 0x38))(param_3);
      param_3 = plVar7;
    }
  }
  else {
    (**(code **)(*param_3 + 0x98))(param_3);
  }
  lVar3 = *(int64_t *)(param_1 + 0x18);
  (**(code **)(*param_3 + 0x148))(param_3,uVar6);
  (**(code **)(*param_3 + 0x1e0))(param_3,*(uint64_t *)(param_1 + 0x10));
  FUN_1802f9110((int64_t)param_2 * 0x100 + lVar3,param_3,param_1);
  *(ushort *)(param_1 + 0xa8) = *(ushort *)(param_1 + 0xa8) | 0x40;
  if (*(int64_t *)(param_1 + 0x10) != 0) {
    uVar2 = *(uint *)(*(int64_t *)(param_1 + 0x10) + 0x2ac);
    (**(code **)(*param_3 + 0xe0))
              (param_3,CONCAT31((uint3)(uVar2 >> 0x1e),~(byte)(uVar2 >> 0x16)) & 0xffffff01);
    (**(code **)(*param_3 + 0x128))(param_3,&stack0x00000010);
    lVar3 = *(int64_t *)(param_1 + 0x10);
    psVar1 = (short *)(lVar3 + 0x2b0);
    *psVar1 = *psVar1 + 1;
    if (*(int64_t *)(lVar3 + 0x168) != 0) {
      func_0x0001802eeba0();
    }
    if (*(float *)(param_1 + 0x3c) < 0.0) {
      *(int32_t *)(param_1 + 0x34) = 0x3dcccccd;
    }
    else {
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x3c) + 1.1920929e-07;
    }
  }
                    // WARNING: Could not recover jumptable at 0x0001802fc0e2. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_3 + 0x38))(param_3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fbf30(int64_t param_1,char param_2,int64_t *param_3,uint64_t param_4)
void FUN_1802fbf30(int64_t param_1,char param_2,int64_t *param_3,uint64_t param_4)

{
  short *psVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int64_t *plVar6;
  int32_t auStackX_10 [2];
  int64_t *plStackX_18;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  plStackX_18 = param_3;
  if (param_3 != (int64_t *)0x0) {
    (**(code **)(*param_3 + 0x28))(param_3);
  }
  iVar4 = (**(code **)(*param_3 + 0x98))(param_3);
  if (iVar4 == 0) {
    cVar3 = func_0x000180282950();
    if (cVar3 != '\0') {
      uVar7 = CoreMemoryPoolReallocator(system_memory_pool_ptr,200,8,3,uVar7);
      plVar6 = (int64_t *)FUN_18030b420(uVar7,param_3,0);
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6);
      }
      plStackX_18 = plVar6;
      (**(code **)(*param_3 + 0x38))(param_3);
      param_3 = plVar6;
    }
  }
  else {
    (**(code **)(*param_3 + 0x98))(param_3);
  }
  lVar2 = *(int64_t *)(param_1 + 0x18);
  (**(code **)(*param_3 + 0x148))(param_3,param_4);
  (**(code **)(*param_3 + 0x1e0))(param_3,*(uint64_t *)(param_1 + 0x10));
  FUN_1802f9110((int64_t)param_2 * 0x100 + lVar2,param_3,param_1);
  *(ushort *)(param_1 + 0xa8) = *(ushort *)(param_1 + 0xa8) | 0x40;
  if (*(int64_t *)(param_1 + 0x10) != 0) {
    uVar5 = *(uint *)(*(int64_t *)(param_1 + 0x10) + 0x2ac);
    (**(code **)(*param_3 + 0xe0))
              (param_3,CONCAT31((uint3)(uVar5 >> 0x1e),~(byte)(uVar5 >> 0x16)) & 0xffffff01);
    uVar5 = *(uint *)(*(int64_t *)(param_1 + 0x10) + 0x2c4) >> 2;
    auStackX_10[0] = 0x31;
    if ((uVar5 & 1) != 0) {
      auStackX_10[0] = 1;
    }
    if (((uVar5 & 1) == 0) && ((*(byte *)(*(int64_t *)(param_1 + 0x10) + 0x148) & 0x18) != 0)) {
      auStackX_10[0] = 0x21;
    }
    (**(code **)(*param_3 + 0x128))(param_3,auStackX_10);
    lVar2 = *(int64_t *)(param_1 + 0x10);
    psVar1 = (short *)(lVar2 + 0x2b0);
    *psVar1 = *psVar1 + 1;
    if (*(int64_t *)(lVar2 + 0x168) != 0) {
      func_0x0001802eeba0();
    }
    if (*(float *)(param_1 + 0x3c) < 0.0) {
      *(int32_t *)(param_1 + 0x34) = 0x3dcccccd;
    }
    else {
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x3c) + 1.1920929e-07;
    }
  }
                    // WARNING: Could not recover jumptable at 0x0001802fc0e2. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_3 + 0x38))(param_3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fc0f0(int64_t param_1,int64_t *param_2,uint64_t param_3,int8_t param_4)
void FUN_1802fc0f0(int64_t param_1,int64_t *param_2,uint64_t param_3,int8_t param_4)

{
  short *psVar1;
  uint uVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  
  plStackX_8 = param_2;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2,param_2,param_3,param_4,0xfffffffffffffffe);
  }
  iVar5 = (**(code **)(*param_2 + 0x98))(param_2);
  plVar7 = param_2;
  if (iVar5 == 0) {
    cVar4 = func_0x000180282950(param_2);
    if (cVar4 != '\0') {
      uVar6 = CoreMemoryPoolReallocator(system_memory_pool_ptr,200,8,3);
      plVar7 = (int64_t *)FUN_18030b420(uVar6,param_2,1);
      plStackX_18 = plVar7;
      if (plVar7 != (int64_t *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7);
      }
      plVar7[5] = *(int64_t *)(param_1 + 0x10);
      if ((int64_t *)plVar7[9] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)plVar7[9] + 0x1e0))();
      }
      plStackX_10 = plVar7;
      (**(code **)(*plVar7 + 0x28))(plVar7);
      plStackX_8 = plVar7;
      plStackX_10 = param_2;
      (**(code **)(*param_2 + 0x38))(param_2);
      (**(code **)(*plVar7 + 0x38))(plVar7);
    }
  }
  (**(code **)(*plVar7 + 0x1e0))(plVar7,*(uint64_t *)(param_1 + 0x10));
  FUN_1800b88d0(param_1 + 0x1a8,&plStackX_8);
  plVar7 = plStackX_8;
  cVar4 = (**(code **)(*plStackX_8 + 0xa0))(plStackX_8);
  if (cVar4 != '\0') {
    FUN_1800b88d0(param_1 + 0x1c8,&plStackX_8);
    plVar7 = plStackX_8;
  }
  if (*(int64_t *)(param_1 + 0x10) != 0) {
    uVar2 = *(uint *)(*(int64_t *)(param_1 + 0x10) + 0x2ac);
    (**(code **)(*plVar7 + 0xe0))
              (plVar7,CONCAT31((uint3)(uVar2 >> 0x1e),~(byte)(uVar2 >> 0x16)) & 0xffffff01);
    lVar3 = *(int64_t *)(param_1 + 0x10);
    psVar1 = (short *)(lVar3 + 0x2b0);
    *psVar1 = *psVar1 + 1;
    if (*(int64_t *)(lVar3 + 0x168) != 0) {
      func_0x0001802eeba0();
    }
  }
  *(ushort *)(param_1 + 0xa8) = *(ushort *)(param_1 + 0xa8) | 0x40;
  if (*(float *)(param_1 + 0x3c) < 0.0) {
    *(int32_t *)(param_1 + 0x34) = 0x3dcccccd;
  }
  else {
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x3c) + 1.1920929e-07;
  }
  uStack_28 = (int32_t)param_1;
  uStack_24 = (int32_t)((uint64_t)param_1 >> 0x20);
  *(int32_t *)(plVar7 + 2) = 1;
  *(int32_t *)((int64_t)plVar7 + 0x14) = uStack_2c;
  *(int32_t *)(plVar7 + 3) = uStack_28;
  *(int32_t *)((int64_t)plVar7 + 0x1c) = uStack_24;
  plVar7[4] = 0;
  if ((*(int64_t *)(param_1 + 0x10) != 0) &&
     (*(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x20) != 0)) {
    FUN_1802548a0(plVar7);
  }
                    // WARNING: Could not recover jumptable at 0x0001802fc2cf. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar7 + 0x38))(plVar7);
  return;
}






// 函数: void FUN_1802fc2e0(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802fc2e0(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1802fc0f0(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001802fc30f. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
    return;
  }
  return;
}






// 函数: void FUN_1802fc320(int64_t param_1)
void FUN_1802fc320(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  
  plVar4 = (int64_t *)(param_1 + 0x1a8);
  iVar3 = 0;
  if (*(int64_t *)(param_1 + 0x1b0) - *plVar4 >> 3 != 0) {
    lVar5 = 0;
    do {
      (**(code **)(**(int64_t **)(lVar5 + *plVar4) + 0x1e0))(*(int64_t **)(lVar5 + *plVar4),0);
      lVar5 = lVar5 + 8;
      iVar3 = iVar3 + 1;
    } while ((uint64_t)(int64_t)iVar3 < (uint64_t)(*(int64_t *)(param_1 + 0x1b0) - *plVar4 >> 3)
            );
  }
  FUN_1800b8500(plVar4);
  FUN_1800b8500(param_1 + 0x1c8);
  iVar3 = 0;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      lVar1 = *(int64_t *)(param_1 + 0x18);
      iVar7 = 0;
      plVar4 = *(int64_t **)(lVar5 + 0xb8 + lVar1);
      plVar2 = *(int64_t **)(lVar5 + 0xb0 + lVar1);
      if (0 < (int)((int64_t)plVar4 - (int64_t)plVar2 >> 3)) {
        lVar6 = 0;
        do {
          plVar4 = *(int64_t **)(lVar6 + *(int64_t *)(lVar5 + 0xb0 + lVar1));
          (**(code **)(*plVar4 + 0x1e0))(plVar4,0);
          plVar4 = *(int64_t **)(lVar5 + 0xb8 + lVar1);
          lVar6 = lVar6 + 8;
          plVar2 = *(int64_t **)(lVar5 + 0xb0 + lVar1);
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)((int64_t)plVar4 - (int64_t)plVar2 >> 3));
      }
      if (plVar2 != plVar4) {
        do {
          if ((int64_t *)*plVar2 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar2 + 0x38))();
          }
          plVar2 = plVar2 + 1;
        } while (plVar2 != plVar4);
        plVar2 = *(int64_t **)(lVar5 + 0xb0 + lVar1);
      }
      *(int64_t **)(lVar5 + 0xb8 + lVar1) = plVar2;
      plVar4 = *(int64_t **)(lVar5 + 0xd8 + lVar1);
      plVar2 = *(int64_t **)(lVar5 + 0xd0 + lVar1);
      if (plVar2 != plVar4) {
        do {
          if ((int64_t *)*plVar2 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar2 + 0x38))();
          }
          plVar2 = plVar2 + 1;
        } while (plVar2 != plVar4);
        plVar2 = *(int64_t **)(lVar5 + 0xd0 + lVar1);
      }
      *(int64_t **)(lVar5 + 0xd8 + lVar1) = plVar2;
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x100;
    } while (iVar3 < *(char *)(param_1 + 0x20));
  }
  FUN_1802fc520(param_1,0);
  if (*(float *)(param_1 + 0x3c) < 0.0) {
    *(int32_t *)(param_1 + 0x34) = 0x3dcccccd;
    return;
  }
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x3c) + 1.1920929e-07;
  return;
}






// 函数: void FUN_1802fc326(int64_t param_1)
void FUN_1802fc326(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  
  plVar4 = (int64_t *)(param_1 + 0x1a8);
  iVar3 = 0;
  if (*(int64_t *)(param_1 + 0x1b0) - *plVar4 >> 3 != 0) {
    lVar5 = 0;
    do {
      (**(code **)(**(int64_t **)(lVar5 + *plVar4) + 0x1e0))(*(int64_t **)(lVar5 + *plVar4),0);
      lVar5 = lVar5 + 8;
      iVar3 = iVar3 + 1;
    } while ((uint64_t)(int64_t)iVar3 < (uint64_t)(*(int64_t *)(param_1 + 0x1b0) - *plVar4 >> 3)
            );
  }
  FUN_1800b8500(plVar4);
  FUN_1800b8500(param_1 + 0x1c8);
  iVar3 = 0;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      lVar1 = *(int64_t *)(param_1 + 0x18);
      iVar7 = 0;
      plVar4 = *(int64_t **)(lVar5 + 0xb8 + lVar1);
      plVar2 = *(int64_t **)(lVar5 + 0xb0 + lVar1);
      if (0 < (int)((int64_t)plVar4 - (int64_t)plVar2 >> 3)) {
        lVar6 = 0;
        do {
          plVar4 = *(int64_t **)(lVar6 + *(int64_t *)(lVar5 + 0xb0 + lVar1));
          (**(code **)(*plVar4 + 0x1e0))(plVar4,0);
          plVar4 = *(int64_t **)(lVar5 + 0xb8 + lVar1);
          lVar6 = lVar6 + 8;
          plVar2 = *(int64_t **)(lVar5 + 0xb0 + lVar1);
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)((int64_t)plVar4 - (int64_t)plVar2 >> 3));
      }
      if (plVar2 != plVar4) {
        do {
          if ((int64_t *)*plVar2 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar2 + 0x38))();
          }
          plVar2 = plVar2 + 1;
        } while (plVar2 != plVar4);
        plVar2 = *(int64_t **)(lVar5 + 0xb0 + lVar1);
      }
      *(int64_t **)(lVar5 + 0xb8 + lVar1) = plVar2;
      plVar4 = *(int64_t **)(lVar5 + 0xd8 + lVar1);
      plVar2 = *(int64_t **)(lVar5 + 0xd0 + lVar1);
      if (plVar2 != plVar4) {
        do {
          if ((int64_t *)*plVar2 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar2 + 0x38))();
          }
          plVar2 = plVar2 + 1;
        } while (plVar2 != plVar4);
        plVar2 = *(int64_t **)(lVar5 + 0xd0 + lVar1);
      }
      *(int64_t **)(lVar5 + 0xd8 + lVar1) = plVar2;
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x100;
    } while (iVar3 < *(char *)(param_1 + 0x20));
  }
  FUN_1802fc520(param_1,0);
  if (*(float *)(param_1 + 0x3c) < 0.0) {
    *(int32_t *)(param_1 + 0x34) = 0x3dcccccd;
    return;
  }
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x3c) + 1.1920929e-07;
  return;
}






// 函数: void FUN_1802fc3ac(int32_t param_1)
void FUN_1802fc3ac(int32_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int unaff_R12D;
  int64_t unaff_R13;
  int64_t lVar5;
  int iVar6;
  
  lVar4 = 0;
  do {
    lVar1 = *(int64_t *)(unaff_R13 + 0x18);
    iVar6 = 0;
    plVar3 = *(int64_t **)(lVar4 + 0xb8 + lVar1);
    plVar2 = *(int64_t **)(lVar4 + 0xb0 + lVar1);
    if (0 < (int)((int64_t)plVar3 - (int64_t)plVar2 >> 3)) {
      lVar5 = 0;
      do {
        plVar3 = *(int64_t **)(lVar5 + *(int64_t *)(lVar4 + 0xb0 + lVar1));
        param_1 = (**(code **)(*plVar3 + 0x1e0))(plVar3,0);
        plVar3 = *(int64_t **)(lVar4 + 0xb8 + lVar1);
        lVar5 = lVar5 + 8;
        plVar2 = *(int64_t **)(lVar4 + 0xb0 + lVar1);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)((int64_t)plVar3 - (int64_t)plVar2 >> 3));
    }
    if (plVar2 != plVar3) {
      do {
        if ((int64_t *)*plVar2 != (int64_t *)0x0) {
          param_1 = (**(code **)(*(int64_t *)*plVar2 + 0x38))();
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != plVar3);
      plVar2 = *(int64_t **)(lVar4 + 0xb0 + lVar1);
    }
    *(int64_t **)(lVar4 + 0xb8 + lVar1) = plVar2;
    plVar3 = *(int64_t **)(lVar4 + 0xd8 + lVar1);
    plVar2 = *(int64_t **)(lVar4 + 0xd0 + lVar1);
    if (plVar2 != plVar3) {
      do {
        if ((int64_t *)*plVar2 != (int64_t *)0x0) {
          param_1 = (**(code **)(*(int64_t *)*plVar2 + 0x38))();
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != plVar3);
      plVar2 = *(int64_t **)(lVar4 + 0xd0 + lVar1);
    }
    *(int64_t **)(lVar4 + 0xd8 + lVar1) = plVar2;
    unaff_R12D = unaff_R12D + 1;
    lVar4 = lVar4 + 0x100;
  } while (unaff_R12D < *(char *)(unaff_R13 + 0x20));
  FUN_1802fc520(param_1,0);
  if (0.0 <= *(float *)(unaff_R13 + 0x3c)) {
    *(float *)(unaff_R13 + 0x34) = *(float *)(unaff_R13 + 0x3c) + 1.1920929e-07;
    return;
  }
  *(int32_t *)(unaff_R13 + 0x34) = 0x3dcccccd;
  return;
}






// 函数: void FUN_1802fc4be(int32_t param_1)
void FUN_1802fc4be(int32_t param_1)

{
  int64_t unaff_R13;
  
  FUN_1802fc520(param_1,0);
  if (0.0 <= *(float *)(unaff_R13 + 0x3c)) {
    *(float *)(unaff_R13 + 0x34) = *(float *)(unaff_R13 + 0x3c) + 1.1920929e-07;
    return;
  }
  *(int32_t *)(unaff_R13 + 0x34) = 0x3dcccccd;
  return;
}






// 函数: void FUN_1802fc4ea(uint64_t param_1,float param_2)
void FUN_1802fc4ea(uint64_t param_1,float param_2)

{
  int64_t unaff_R13;
  
  *(float *)(unaff_R13 + 0x34) = param_2 + 1.1920929e-07;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




