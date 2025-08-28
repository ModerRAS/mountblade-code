#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part672.c - 10 个函数

// 函数: void FUN_18064eafa(void)
void FUN_18064eafa(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00018064e5ea)
// WARNING: Removing unreachable block (ram,0x00018064e5ef)
// WARNING: Removing unreachable block (ram,0x00018064e61e)
// WARNING: Removing unreachable block (ram,0x00018064e624)
// WARNING: Removing unreachable block (ram,0x00018064e645)

uint64_t * FUN_18064eb10(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  byte *pbVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t lVar5;
  
  if (((0x7fffffffffffffff < param_2) || (param_3 == 0)) ||
     (uVar4 = param_3 - 1, (param_3 & uVar4) != 0)) {
    return (uint64_t *)0x0;
  }
  if (param_2 < 0x401) {
    lVar5 = *(int64_t *)(param_1 + 8 + (param_2 + 7 & 0xfffffffffffffff8));
    puVar3 = *(uint64_t **)(lVar5 + 0x10);
    if ((puVar3 != (uint64_t *)0x0) && ((uVar4 & (int64_t)puVar3 + param_4) == 0)) {
      *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
      *(uint64_t *)(lVar5 + 0x10) = *puVar3;
      return puVar3;
    }
  }
  if (((param_4 == 0) && (param_3 <= param_2)) && ((param_2 < 0x4001 && ((param_2 & uVar4) == 0))))
  {
    if (param_2 < 0x401) {
      lVar5 = *(int64_t *)(param_1 + 8 + (param_2 + 7 & 0xfffffffffffffff8));
      puVar3 = *(uint64_t **)(lVar5 + 0x10);
      if (puVar3 != (uint64_t *)0x0) {
        *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
        *(uint64_t *)(lVar5 + 0x10) = *puVar3;
        return puVar3;
      }
    }
    puVar3 = (uint64_t *)FUN_18064ddd0(param_1,param_2);
    return puVar3;
  }
  puVar3 = (uint64_t *)FUN_18064e5a0(param_1,(param_2 - 1) + param_3,0);
  if (puVar3 == (uint64_t *)0x0) {
    return (uint64_t *)0x0;
  }
  uVar4 = param_3 - ((int64_t)puVar3 + param_4 & uVar4);
  if (uVar4 != param_3) {
    puVar2 = (uint64_t *)(uVar4 + (int64_t)puVar3);
    if (puVar2 != puVar3) {
      lVar5 = ((uint64_t)puVar3 & 0xffffffffffc00000) + 0x80 +
              ((int64_t)puVar3 - ((uint64_t)puVar3 & 0xffffffffffc00000) >> 0x10) * 0x50;
      pbVar1 = (byte *)((lVar5 - (uint64_t)*(uint *)(lVar5 + 4)) + 0xe);
      *pbVar1 = *pbVar1 | 2;
    }
    return puVar2;
  }
  return puVar3;
}



int8_t *
FUN_18064ec60(uint64_t param_1,int8_t *param_2,uint64_t param_3,uint64_t param_4,
             int64_t param_5)

{
  uint64_t uVar1;
  int8_t *puVar2;
  int8_t *puVar3;
  
  if (param_4 < 9) {
    param_2 = (int8_t *)FUN_18064ea20();
  }
  else if (param_2 == (int8_t *)0x0) {
    param_2 = (int8_t *)FUN_18064eb10(param_1,param_3,param_4,param_5);
  }
  else {
    uVar1 = CoreEngineSystemCleanup(param_2);
    if (((uVar1 < param_3) || (param_3 < uVar1 - (uVar1 >> 1))) ||
       ((uint64_t)(param_2 + param_5) % param_4 != 0)) {
      puVar2 = (int8_t *)FUN_18064eb10(param_1,param_3,param_4);
      if (puVar2 != (int8_t *)0x0) {
        if (uVar1 < param_3) {
          param_3 = uVar1;
        }
        puVar3 = param_2;
        if (system_counter_f000 == '\0') {
                    // WARNING: Subroutine does not return
          memcpy(puVar2,param_2,param_3);
        }
        for (; param_3 != 0; param_3 = param_3 - 1) {
          *puVar2 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar2 = puVar2 + 1;
        }
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(param_2);
      }
      param_2 = (int8_t *)0x0;
    }
  }
  return param_2;
}





// 函数: void FUN_18064ecae(void)
void FUN_18064ecae(void)

{
  uint64_t uVar1;
  int8_t *puVar2;
  uint64_t unaff_RBX;
  uint64_t unaff_RSI;
  int8_t *unaff_R14;
  int64_t in_stack_00000060;
  
  uVar1 = CoreEngineSystemCleanup();
  if ((((unaff_RBX <= uVar1) && (uVar1 - (uVar1 >> 1) <= unaff_RBX)) &&
      ((uint64_t)(unaff_R14 + in_stack_00000060) % unaff_RSI == 0)) ||
     (puVar2 = (int8_t *)FUN_18064eb10(), puVar2 == (int8_t *)0x0)) {
    return;
  }
  if (uVar1 < unaff_RBX) {
    unaff_RBX = uVar1;
  }
  if (system_counter_f000 == '\0') {
                    // WARNING: Subroutine does not return
    memcpy(puVar2);
  }
  for (; unaff_RBX != 0; unaff_RBX = unaff_RBX - 1) {
    *puVar2 = *unaff_R14;
    unaff_R14 = unaff_R14 + 1;
    puVar2 = puVar2 + 1;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_18064ed3a(void)
void FUN_18064ed3a(void)

{
  return;
}





// 函数: void FUN_18064ed50(uint *param_1)
void FUN_18064ed50(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  int64_t lStack_38;
  
  uVar13 = param_1[6];
  uVar6 = param_1[1];
  uVar3 = param_1[4];
  uVar4 = param_1[5];
  uVar5 = param_1[7];
  uVar2 = param_1[8];
  uVar8 = param_1[0xc];
  uVar10 = param_1[0xd];
  uVar11 = param_1[0xe];
  uVar12 = param_1[0xf];
  uStack_54 = param_1[2];
  uStack_60 = param_1[3];
  uStack_64 = param_1[9];
  uStack_5c = param_1[10];
  uStack_58 = param_1[0xb];
  lStack_38 = 10;
  uVar7 = *param_1;
  do {
    uVar8 = uVar3 + uVar7 ^ uVar8;
    uVar9 = uVar8 << 0x10 | uVar8 >> 0x10;
    uVar2 = uVar9 + uVar2;
    uVar8 = uVar3 ^ uVar2;
    uVar8 = uVar8 << 0xc | uVar8 >> 0x14;
    uVar7 = uVar3 + uVar7 + uVar8;
    uVar9 = uVar7 ^ uVar9;
    uVar14 = uVar9 << 8 | uVar9 >> 0x18;
    uVar2 = uVar14 + uVar2;
    uVar8 = uVar2 ^ uVar8;
    uVar3 = uVar8 << 7 | uVar8 >> 0x19;
    uVar10 = uVar4 + uVar6 ^ uVar10;
    uVar10 = uVar10 << 0x10 | uVar10 >> 0x10;
    uStack_64 = uStack_64 + uVar10;
    uVar8 = uVar4 ^ uStack_64;
    uVar8 = uVar8 << 0xc | uVar8 >> 0x14;
    uVar6 = uVar4 + uVar6 + uVar8;
    uVar10 = uVar6 ^ uVar10;
    uVar11 = uStack_54 + uVar13 ^ uVar11;
    uVar9 = uVar10 << 8 | uVar10 >> 0x18;
    uVar10 = uVar11 << 0x10 | uVar11 >> 0x10;
    uStack_64 = uStack_64 + uVar9;
    uStack_5c = uStack_5c + uVar10;
    uVar4 = uVar13 ^ uStack_5c;
    uVar8 = uStack_64 ^ uVar8;
    uVar4 = uVar4 << 0xc | uVar4 >> 0x14;
    uVar11 = uVar8 << 7 | uVar8 >> 0x19;
    uStack_54 = uVar4 + uStack_54 + uVar13;
    uVar10 = uVar10 ^ uStack_54;
    uVar10 = uVar10 << 8 | uVar10 >> 0x18;
    uStack_5c = uVar10 + uStack_5c;
    uVar12 = uStack_60 + uVar5 ^ uVar12;
    uVar4 = uStack_5c ^ uVar4;
    uVar12 = uVar12 << 0x10 | uVar12 >> 0x10;
    uStack_58 = uStack_58 + uVar12;
    uVar8 = uVar4 << 7 | uVar4 >> 0x19;
    uVar13 = uVar5 ^ uStack_58;
    uVar13 = uVar13 << 0xc | uVar13 >> 0x14;
    uStack_60 = uVar13 + uStack_60 + uVar5;
    uVar12 = uVar12 ^ uStack_60;
    uVar4 = uVar12 << 8 | uVar12 >> 0x18;
    uStack_58 = uVar4 + uStack_58;
    uVar13 = uStack_58 ^ uVar13;
    uVar7 = uVar11 + uVar7;
    uVar5 = uVar13 << 7 | uVar13 >> 0x19;
    uVar4 = uVar7 ^ uVar4;
    uVar13 = uVar4 << 0x10 | uVar4 >> 0x10;
    uStack_5c = uVar13 + uStack_5c;
    uVar11 = uVar11 ^ uStack_5c;
    uVar4 = uVar11 << 0xc | uVar11 >> 0x14;
    uVar7 = uVar7 + uVar4;
    uVar13 = uVar13 ^ uVar7;
    uVar12 = uVar13 << 8 | uVar13 >> 0x18;
    uStack_5c = uVar12 + uStack_5c;
    uStack_60 = uStack_60 + uVar3;
    uVar4 = uStack_5c ^ uVar4;
    uVar6 = uVar8 + uVar6;
    uVar4 = uVar4 << 7 | uVar4 >> 0x19;
    uVar14 = uVar6 ^ uVar14;
    uVar11 = uVar14 << 0x10 | uVar14 >> 0x10;
    uStack_58 = uStack_58 + uVar11;
    uVar8 = uStack_58 ^ uVar8;
    uVar13 = uVar8 << 0xc | uVar8 >> 0x14;
    uVar6 = uVar6 + uVar13;
    uVar11 = uVar11 ^ uVar6;
    uVar8 = uVar11 << 8 | uVar11 >> 0x18;
    uStack_58 = uStack_58 + uVar8;
    uStack_54 = uVar5 + uStack_54;
    uVar13 = uStack_58 ^ uVar13;
    uVar9 = uStack_54 ^ uVar9;
    uVar13 = uVar13 << 7 | uVar13 >> 0x19;
    uVar9 = uVar9 << 0x10 | uVar9 >> 0x10;
    uVar2 = uVar2 + uVar9;
    uVar5 = uVar5 ^ uVar2;
    uVar5 = uVar5 << 0xc | uVar5 >> 0x14;
    uStack_54 = uVar5 + uStack_54;
    uVar10 = uStack_60 ^ uVar10;
    uVar9 = uStack_54 ^ uVar9;
    uVar11 = uVar10 << 0x10 | uVar10 >> 0x10;
    uVar10 = uVar9 << 8 | uVar9 >> 0x18;
    uVar2 = uVar10 + uVar2;
    uStack_64 = uStack_64 + uVar11;
    uVar5 = uVar5 ^ uVar2;
    uVar5 = uVar5 << 7 | uVar5 >> 0x19;
    uVar3 = uStack_64 ^ uVar3;
    uVar3 = uVar3 << 0xc | uVar3 >> 0x14;
    uStack_60 = uStack_60 + uVar3;
    uVar11 = uStack_60 ^ uVar11;
    uVar11 = uVar11 << 8 | uVar11 >> 0x18;
    uStack_64 = uVar11 + uStack_64;
    uVar3 = uStack_64 ^ uVar3;
    uVar3 = uVar3 << 7 | uVar3 >> 0x19;
    lStack_38 = lStack_38 + -1;
  } while (lStack_38 != 0);
  param_1[0x10] = *param_1 + uVar7;
  param_1[0x11] = param_1[1] + uVar6;
  param_1[0x12] = param_1[2] + uStack_54;
  param_1[0x13] = param_1[3] + uStack_60;
  param_1[0x14] = param_1[4] + uVar3;
  param_1[0x15] = param_1[5] + uVar4;
  param_1[0x16] = uVar13 + param_1[6];
  param_1[0x17] = param_1[7] + uVar5;
  param_1[0x18] = param_1[8] + uVar2;
  param_1[0x19] = uStack_64 + param_1[9];
  param_1[0x1a] = uStack_5c + param_1[10];
  param_1[0x1b] = uStack_58 + param_1[0xb];
  param_1[0x1c] = param_1[0xc] + uVar8;
  param_1[0x1d] = param_1[0xd] + uVar10;
  param_1[0x1e] = param_1[0xe] + uVar11;
  param_1[0x1f] = param_1[0xf] + uVar12;
  param_1[0x20] = 0x10;
  puVar1 = param_1 + 0xc;
  *puVar1 = *puVar1 + 1;
  if (*puVar1 == 0) {
    puVar1 = param_1 + 0xd;
    *puVar1 = *puVar1 + 1;
    if (*puVar1 == 0) {
      param_1[0xe] = param_1[0xe] + 1;
    }
  }
  return;
}





// 函数: void FUN_18064f090(int64_t param_1)
void FUN_18064f090(int64_t param_1)

{
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x10,0,0x74);
}





// 函数: void FUN_18064f210(uint64_t param_1)
void FUN_18064f210(uint64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t auStackX_8 [4];
  
  QueryPerformanceCounter(auStackX_8);
  param_1 = auStackX_8[0] ^ 0x18064f210 ^ param_1;
  for (lVar2 = (uint64_t)(((uint)(param_1 >> 0x11) ^ (uint)param_1) & 0xf) + 1; lVar2 != 0;
      lVar2 = lVar2 + -1) {
    if (param_1 == 0) {
      param_1 = 0x11;
    }
    uVar1 = (param_1 >> 0x1e ^ param_1) * -0x40a7b892e31b1a47;
    param_1 = (uVar1 >> 0x1b ^ uVar1) * -0x6b2fb644ecceee15;
    param_1 = param_1 >> 0x1f ^ param_1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064f2b0(uint64_t param_1)
void FUN_18064f2b0(uint64_t param_1)

{
  int iVar1;
  uint64_t uVar2;
  int8_t auStack_58 [32];
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  uint uStack_1c;
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_58;
  iVar1 = BCryptGenRandom(0,&uStack_38,0x20);
  if (iVar1 < 0) {
    FUN_180650340(&unknown_var_9024_ptr);
    uVar2 = FUN_18064f210(0);
    if (uVar2 == 0) {
      uVar2 = 0x11;
    }
    uVar2 = (uVar2 >> 0x1e ^ uVar2) * -0x40a7b892e31b1a47;
    uVar2 = (uVar2 >> 0x1b ^ uVar2) * -0x6b2fb644ecceee15;
    uVar2 = uVar2 >> 0x1f ^ uVar2;
    uStack_38 = (int32_t)uVar2;
    if (uVar2 == 0) {
      uVar2 = 0x11;
    }
    uVar2 = (uVar2 >> 0x1e ^ uVar2) * -0x40a7b892e31b1a47;
    uVar2 = (uVar2 >> 0x1b ^ uVar2) * -0x6b2fb644ecceee15;
    uVar2 = uVar2 >> 0x1f ^ uVar2;
    uStack_34 = (int32_t)uVar2;
    if (uVar2 == 0) {
      uVar2 = 0x11;
    }
    uVar2 = (uVar2 >> 0x1e ^ uVar2) * -0x40a7b892e31b1a47;
    uVar2 = (uVar2 >> 0x1b ^ uVar2) * -0x6b2fb644ecceee15;
    uVar2 = uVar2 >> 0x1f ^ uVar2;
    uStack_30 = (int32_t)uVar2;
    if (uVar2 == 0) {
      uVar2 = 0x11;
    }
    uVar2 = (uVar2 >> 0x1e ^ uVar2) * -0x40a7b892e31b1a47;
    uVar2 = (uVar2 >> 0x1b ^ uVar2) * -0x6b2fb644ecceee15;
    uVar2 = uVar2 >> 0x1f ^ uVar2;
    uStack_2c = (int32_t)uVar2;
    if (uVar2 == 0) {
      uVar2 = 0x11;
    }
    uVar2 = (uVar2 >> 0x1e ^ uVar2) * -0x40a7b892e31b1a47;
    uVar2 = (uVar2 >> 0x1b ^ uVar2) * -0x6b2fb644ecceee15;
    uVar2 = uVar2 >> 0x1f ^ uVar2;
    uStack_28 = (int32_t)uVar2;
    if (uVar2 == 0) {
      uVar2 = 0x11;
    }
    uVar2 = (uVar2 >> 0x1e ^ uVar2) * -0x40a7b892e31b1a47;
    uVar2 = (uVar2 >> 0x1b ^ uVar2) * -0x6b2fb644ecceee15;
    uVar2 = uVar2 >> 0x1f ^ uVar2;
    uStack_24 = (int32_t)uVar2;
    if (uVar2 == 0) {
      uVar2 = 0x11;
    }
    uVar2 = (uVar2 >> 0x1e ^ uVar2) * -0x40a7b892e31b1a47;
    uVar2 = (uVar2 >> 0x1b ^ uVar2) * -0x6b2fb644ecceee15;
    uVar2 = uVar2 >> 0x1f ^ uVar2;
    uStack_20 = (int32_t)uVar2;
    if (uVar2 == 0) {
      uVar2 = 0x11;
    }
    uVar2 = (uVar2 >> 0x1e ^ uVar2) * -0x40a7b892e31b1a47;
    uVar2 = (uVar2 >> 0x1b ^ uVar2) * -0x6b2fb644ecceee15;
    uStack_1c = (uint)(uVar2 >> 0x1f) ^ (uint)uVar2;
  }
  FUN_18064f090(param_1,&uStack_38,param_1);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_58);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064f4b0(void)
void FUN_18064f4b0(void)

{
  int32_t uVar1;
  int32_t uVar2;
  
  if (render_system_control_config == 0) {
    render_system_control_config = &ExceptionList;
    render_system_control_config = FUN_18064f210(FUN_18064f4b0);
    FUN_18064f2b0(0x180bf4b40);
    if (render_system_control_config < 1) {
      FUN_18064ed50(0x180bf4b40);
      render_system_control_config = 0x10;
    }
    uVar1 = *(int32_t *)((int64_t)(0x10 - render_system_control_config) * 4 + 0x180bf4b80);
    *(int32_t *)((int64_t)(0x10 - render_system_control_config) * 4 + 0x180bf4b80) = 0;
    render_system_control_config = render_system_control_config + -1;
    if (render_system_control_config < 1) {
      FUN_18064ed50(0x180bf4b40);
      render_system_control_config = 0x10;
    }
    uVar2 = *(int32_t *)((int64_t)(0x10 - render_system_control_config) * 4 + 0x180bf4b80);
    *(int32_t *)((int64_t)(0x10 - render_system_control_config) * 4 + 0x180bf4b80) = 0;
    render_system_control_config = render_system_control_config + -1;
    render_system_control_config = CONCAT44(uVar1,uVar2);
    if (render_system_control_config < 1) {
      FUN_18064ed50(0x180bf4b40);
      render_system_control_config = 0x10;
    }
    uVar1 = *(int32_t *)((int64_t)(0x10 - render_system_control_config) * 4 + 0x180bf4b80);
    *(int32_t *)((int64_t)(0x10 - render_system_control_config) * 4 + 0x180bf4b80) = 0;
    render_system_control_config = render_system_control_config + -1;
    if (render_system_control_config < 1) {
      FUN_18064ed50(0x180bf4b40);
      render_system_control_config = 0x10;
    }
    uVar2 = *(int32_t *)((int64_t)(0x10 - render_system_control_config) * 4 + 0x180bf4b80);
    *(int32_t *)((int64_t)(0x10 - render_system_control_config) * 4 + 0x180bf4b80) = 0;
    render_system_control_config = render_system_control_config + -1;
    render_system_control_config = CONCAT44(uVar1,uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064f4d2(void)
void FUN_18064f4d2(void)

{
  int32_t uVar1;
  int32_t uVar2;
  uint64_t in_RAX;
  
  render_system_control_config = in_RAX;
  render_system_control_config = FUN_18064f210();
  FUN_18064f2b0(0x180bf4b40);
  if (render_system_control_config < 1) {
    FUN_18064ed50(0x180bf4b40);
    render_system_control_config = 0x10;
  }
  uVar1 = *(int32_t *)((int64_t)(0x10 - render_system_control_config) * 4 + 0x180bf4b80);
  *(int32_t *)((int64_t)(0x10 - render_system_control_config) * 4 + 0x180bf4b80) = 0;
  render_system_control_config = render_system_control_config + -1;
  if (render_system_control_config < 1) {
    FUN_18064ed50(0x180bf4b40);
    render_system_control_config = 0x10;
  }
  uVar2 = *(int32_t *)((int64_t)(0x10 - render_system_control_config) * 4 + 0x180bf4b80);
  *(int32_t *)((int64_t)(0x10 - render_system_control_config) * 4 + 0x180bf4b80) = 0;
  render_system_control_config = render_system_control_config + -1;
  render_system_control_config = CONCAT44(uVar1,uVar2);
  if (render_system_control_config < 1) {
    FUN_18064ed50(0x180bf4b40);
    render_system_control_config = 0x10;
  }
  uVar1 = *(int32_t *)((int64_t)(0x10 - render_system_control_config) * 4 + 0x180bf4b80);
  *(int32_t *)((int64_t)(0x10 - render_system_control_config) * 4 + 0x180bf4b80) = 0;
  render_system_control_config = render_system_control_config + -1;
  if (render_system_control_config < 1) {
    FUN_18064ed50(0x180bf4b40);
    render_system_control_config = 0x10;
  }
  uVar2 = *(int32_t *)((int64_t)(0x10 - render_system_control_config) * 4 + 0x180bf4b80);
  *(int32_t *)((int64_t)(0x10 - render_system_control_config) * 4 + 0x180bf4b80) = 0;
  render_system_control_config = render_system_control_config + -1;
  render_system_control_config = CONCAT44(uVar1,uVar2);
  return;
}





// 函数: void FUN_18064f637(void)
void FUN_18064f637(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18064f640(void)

{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t lVar8;
  void *puVar9;
  int64_t *plVar10;
  uint64_t *puVar11;
  
  lVar8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8);
  puVar11 = (uint64_t *)(lVar8 + 0x10);
  if ((void *)*puVar11 != &unknown_var_7056_ptr) {
    return CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
  }
  if ((render_system_control_config == (void **)0x0) || (render_system_control_config == &ExceptionList)) {
    FUN_18064f4b0();
    uVar2 = render_system_control_config;
    *puVar11 = 0x180bf4000;
    uVar6 = FlsSetValue(uVar2);
    return uVar6 & 0xffffffffffffff00;
  }
  plVar5 = (int64_t *)FUN_180648ea0(0x1208);
  if (plVar5 == (int64_t *)0x0) {
    plVar5 = (int64_t *)FUN_180648ea0(0x1208);
    if (plVar5 == (int64_t *)0x0) {
      uVar6 = FUN_1806503d0(0xc,&unknown_var_9064_ptr,0x1208);
      return uVar6 & 0xffffffffffffff00;
    }
  }
  plVar1 = plVar5 + 0x17e;
  if (system_counter_f000 != '\0') {
    puVar9 = &unknown_var_128_ptr;
    plVar10 = plVar1;
    for (lVar8 = 0x618; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(void *)plVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      plVar10 = (int64_t *)((int64_t)plVar10 + 1);
    }
    puVar9 = &unknown_var_7056_ptr;
    plVar10 = plVar5;
    for (lVar8 = 0xbf0; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(void *)plVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      plVar10 = (int64_t *)((int64_t)plVar10 + 1);
    }
    plVar10 = plVar5 + 0x168;
    plVar5[0x164] = (int64_t)&ExceptionList;
    FUN_18064f2b0(plVar10);
    iVar7 = (int)plVar5[0x178];
    if (iVar7 < 1) {
      FUN_18064ed50(plVar10);
      iVar7 = 0x10;
      *(int32_t *)(plVar5 + 0x178) = 0x10;
    }
    uVar2 = *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80);
    *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80) = 0;
    iVar7 = (int)plVar5[0x178] + -1;
    *(int *)(plVar5 + 0x178) = iVar7;
    if (iVar7 < 1) {
      FUN_18064ed50(plVar10);
      iVar7 = 0x10;
      *(int32_t *)(plVar5 + 0x178) = 0x10;
    }
    uVar3 = *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80);
    *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80) = 0;
    *(int *)(plVar5 + 0x178) = (int)plVar5[0x178] + -1;
    plVar5[0x165] = CONCAT44(uVar2,uVar3) | 1;
    iVar7 = (int)plVar5[0x178];
    if (iVar7 < 1) {
      FUN_18064ed50(plVar10);
      iVar7 = 0x10;
      *(int32_t *)(plVar5 + 0x178) = 0x10;
    }
    uVar2 = *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80);
    *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80) = 0;
    iVar7 = (int)plVar5[0x178] + -1;
    *(int *)(plVar5 + 0x178) = iVar7;
    if (iVar7 < 1) {
      FUN_18064ed50(plVar10);
      iVar7 = 0x10;
      *(int32_t *)(plVar5 + 0x178) = 0x10;
    }
    uVar3 = *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80);
    *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80) = 0;
    *(int *)(plVar5 + 0x178) = (int)plVar5[0x178] + -1;
    plVar5[0x166] = CONCAT44(uVar2,uVar3);
    iVar7 = (int)plVar5[0x178];
    if (iVar7 < 1) {
      FUN_18064ed50(plVar10);
      iVar7 = 0x10;
      *(int32_t *)(plVar5 + 0x178) = 0x10;
    }
    uVar2 = *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80);
    *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80) = 0;
    iVar7 = (int)plVar5[0x178] + -1;
    *(int *)(plVar5 + 0x178) = iVar7;
    if (iVar7 < 1) {
      FUN_18064ed50(plVar10);
      iVar7 = 0x10;
      *(int32_t *)(plVar5 + 0x178) = 0x10;
    }
    *puVar11 = plVar5;
    uVar3 = *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80);
    *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80) = 0;
    *(int *)(plVar5 + 0x178) = (int)plVar5[0x178] + -1;
    uVar4 = render_system_control_config;
    plVar5[0x167] = CONCAT44(uVar2,uVar3);
    *plVar5 = (int64_t)plVar1;
    plVar5[0x180] = (int64_t)plVar5;
    plVar5[0x181] = (int64_t)plVar5;
    plVar5[0x1f6] = (int64_t)(plVar5 + 0x1f7);
    plVar5[0x1f8] = (int64_t)(plVar5 + 0x1f9);
    uVar6 = FlsSetValue(uVar4,plVar5);
    plVar5[0x1f5] = (int64_t)(plVar5 + 0x1f9);
    return uVar6 & 0xffffffffffffff00;
  }
                    // WARNING: Subroutine does not return
  memcpy(plVar1,&unknown_var_128_ptr,0x618);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18064f683(void)

{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t lVar8;
  void *puVar9;
  int64_t *plVar10;
  uint64_t *unaff_R14;
  int8_t *unaff_R15;
  bool in_ZF;
  
  if ((in_ZF) || (render_system_control_config == &ExceptionList)) {
    FUN_18064f4b0();
    uVar2 = render_system_control_config;
    *unaff_R14 = 0x180bf4000;
    uVar6 = FlsSetValue(uVar2);
    return uVar6 & 0xffffffffffffff00;
  }
  plVar5 = (int64_t *)FUN_180648ea0(0x1208);
  if (plVar5 == (int64_t *)0x0) {
    plVar5 = (int64_t *)FUN_180648ea0(0x1208);
    if (plVar5 == (int64_t *)0x0) {
      uVar6 = FUN_1806503d0(0xc,&unknown_var_9064_ptr,0x1208);
      return uVar6 & 0xffffffffffffff00;
    }
  }
  plVar1 = plVar5 + 0x17e;
  if (system_counter_f000 != '\0') {
    puVar9 = &unknown_var_128_ptr;
    plVar10 = plVar1;
    for (lVar8 = 0x618; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(void *)plVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      plVar10 = (int64_t *)((int64_t)plVar10 + 1);
    }
    plVar10 = plVar5;
    for (lVar8 = 0xbf0; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(int8_t *)plVar10 = *unaff_R15;
      unaff_R15 = unaff_R15 + 1;
      plVar10 = (int64_t *)((int64_t)plVar10 + 1);
    }
    plVar10 = plVar5 + 0x168;
    plVar5[0x164] = (int64_t)&ExceptionList;
    FUN_18064f2b0(plVar10);
    iVar7 = (int)plVar5[0x178];
    if (iVar7 < 1) {
      FUN_18064ed50(plVar10);
      iVar7 = 0x10;
      *(int32_t *)(plVar5 + 0x178) = 0x10;
    }
    uVar2 = *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80);
    *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80) = 0;
    iVar7 = (int)plVar5[0x178] + -1;
    *(int *)(plVar5 + 0x178) = iVar7;
    if (iVar7 < 1) {
      FUN_18064ed50(plVar10);
      iVar7 = 0x10;
      *(int32_t *)(plVar5 + 0x178) = 0x10;
    }
    uVar3 = *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80);
    *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80) = 0;
    *(int *)(plVar5 + 0x178) = (int)plVar5[0x178] + -1;
    plVar5[0x165] = CONCAT44(uVar2,uVar3) | 1;
    iVar7 = (int)plVar5[0x178];
    if (iVar7 < 1) {
      FUN_18064ed50(plVar10);
      iVar7 = 0x10;
      *(int32_t *)(plVar5 + 0x178) = 0x10;
    }
    uVar2 = *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80);
    *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80) = 0;
    iVar7 = (int)plVar5[0x178] + -1;
    *(int *)(plVar5 + 0x178) = iVar7;
    if (iVar7 < 1) {
      FUN_18064ed50(plVar10);
      iVar7 = 0x10;
      *(int32_t *)(plVar5 + 0x178) = 0x10;
    }
    uVar3 = *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80);
    *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80) = 0;
    *(int *)(plVar5 + 0x178) = (int)plVar5[0x178] + -1;
    plVar5[0x166] = CONCAT44(uVar2,uVar3);
    iVar7 = (int)plVar5[0x178];
    if (iVar7 < 1) {
      FUN_18064ed50(plVar10);
      iVar7 = 0x10;
      *(int32_t *)(plVar5 + 0x178) = 0x10;
    }
    uVar2 = *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80);
    *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80) = 0;
    iVar7 = (int)plVar5[0x178] + -1;
    *(int *)(plVar5 + 0x178) = iVar7;
    if (iVar7 < 1) {
      FUN_18064ed50(plVar10);
      iVar7 = 0x10;
      *(int32_t *)(plVar5 + 0x178) = 0x10;
    }
    *unaff_R14 = plVar5;
    uVar3 = *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80);
    *(int32_t *)((int64_t)plVar5 + (int64_t)(0x10 - iVar7) * 4 + 0xb80) = 0;
    *(int *)(plVar5 + 0x178) = (int)plVar5[0x178] + -1;
    uVar4 = render_system_control_config;
    plVar5[0x167] = CONCAT44(uVar2,uVar3);
    *plVar5 = (int64_t)plVar1;
    plVar5[0x180] = (int64_t)plVar5;
    plVar5[0x181] = (int64_t)plVar5;
    plVar5[0x1f6] = (int64_t)(plVar5 + 0x1f7);
    plVar5[0x1f8] = (int64_t)(plVar5 + 0x1f9);
    uVar6 = FlsSetValue(uVar4,plVar5);
    plVar5[0x1f5] = (int64_t)(plVar5 + 0x1f9);
    return uVar6 & 0xffffffffffffff00;
  }
                    // WARNING: Subroutine does not return
  memcpy(plVar1,&unknown_var_128_ptr,0x618);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18064f6ed(void)

{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int iVar6;
  int64_t lVar7;
  int64_t *unaff_RBX;
  void *puVar8;
  int64_t *plVar9;
  uint64_t *unaff_R14;
  int8_t *unaff_R15;
  
  plVar1 = unaff_RBX + 0x17e;
  if (system_counter_f000 != '\0') {
    puVar8 = &unknown_var_128_ptr;
    plVar9 = plVar1;
    for (lVar7 = 0x618; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(void *)plVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      plVar9 = (int64_t *)((int64_t)plVar9 + 1);
    }
    plVar9 = unaff_RBX;
    for (lVar7 = 0xbf0; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(int8_t *)plVar9 = *unaff_R15;
      unaff_R15 = unaff_R15 + 1;
      plVar9 = (int64_t *)((int64_t)plVar9 + 1);
    }
    plVar9 = unaff_RBX + 0x168;
    unaff_RBX[0x164] = (int64_t)&ExceptionList;
    FUN_18064f2b0(plVar9);
    iVar6 = (int)unaff_RBX[0x178];
    if (iVar6 < 1) {
      FUN_18064ed50(plVar9);
      iVar6 = 0x10;
      *(int32_t *)(unaff_RBX + 0x178) = 0x10;
    }
    uVar2 = *(int32_t *)((int64_t)unaff_RBX + (int64_t)(0x10 - iVar6) * 4 + 0xb80);
    *(int32_t *)((int64_t)unaff_RBX + (int64_t)(0x10 - iVar6) * 4 + 0xb80) = 0;
    iVar6 = (int)unaff_RBX[0x178] + -1;
    *(int *)(unaff_RBX + 0x178) = iVar6;
    if (iVar6 < 1) {
      FUN_18064ed50(plVar9);
      iVar6 = 0x10;
      *(int32_t *)(unaff_RBX + 0x178) = 0x10;
    }
    uVar3 = *(int32_t *)((int64_t)unaff_RBX + (int64_t)(0x10 - iVar6) * 4 + 0xb80);
    *(int32_t *)((int64_t)unaff_RBX + (int64_t)(0x10 - iVar6) * 4 + 0xb80) = 0;
    *(int *)(unaff_RBX + 0x178) = (int)unaff_RBX[0x178] + -1;
    unaff_RBX[0x165] = CONCAT44(uVar2,uVar3) | 1;
    iVar6 = (int)unaff_RBX[0x178];
    if (iVar6 < 1) {
      FUN_18064ed50(plVar9);
      iVar6 = 0x10;
      *(int32_t *)(unaff_RBX + 0x178) = 0x10;
    }
    uVar2 = *(int32_t *)((int64_t)unaff_RBX + (int64_t)(0x10 - iVar6) * 4 + 0xb80);
    *(int32_t *)((int64_t)unaff_RBX + (int64_t)(0x10 - iVar6) * 4 + 0xb80) = 0;
    iVar6 = (int)unaff_RBX[0x178] + -1;
    *(int *)(unaff_RBX + 0x178) = iVar6;
    if (iVar6 < 1) {
      FUN_18064ed50(plVar9);
      iVar6 = 0x10;
      *(int32_t *)(unaff_RBX + 0x178) = 0x10;
    }
    uVar3 = *(int32_t *)((int64_t)unaff_RBX + (int64_t)(0x10 - iVar6) * 4 + 0xb80);
    *(int32_t *)((int64_t)unaff_RBX + (int64_t)(0x10 - iVar6) * 4 + 0xb80) = 0;
    *(int *)(unaff_RBX + 0x178) = (int)unaff_RBX[0x178] + -1;
    unaff_RBX[0x166] = CONCAT44(uVar2,uVar3);
    iVar6 = (int)unaff_RBX[0x178];
    if (iVar6 < 1) {
      FUN_18064ed50(plVar9);
      iVar6 = 0x10;
      *(int32_t *)(unaff_RBX + 0x178) = 0x10;
    }
    uVar2 = *(int32_t *)((int64_t)unaff_RBX + (int64_t)(0x10 - iVar6) * 4 + 0xb80);
    *(int32_t *)((int64_t)unaff_RBX + (int64_t)(0x10 - iVar6) * 4 + 0xb80) = 0;
    iVar6 = (int)unaff_RBX[0x178] + -1;
    *(int *)(unaff_RBX + 0x178) = iVar6;
    if (iVar6 < 1) {
      FUN_18064ed50(plVar9);
      iVar6 = 0x10;
      *(int32_t *)(unaff_RBX + 0x178) = 0x10;
    }
    *unaff_R14 = unaff_RBX;
    uVar3 = *(int32_t *)((int64_t)unaff_RBX + (int64_t)(0x10 - iVar6) * 4 + 0xb80);
    *(int32_t *)((int64_t)unaff_RBX + (int64_t)(0x10 - iVar6) * 4 + 0xb80) = 0;
    *(int *)(unaff_RBX + 0x178) = (int)unaff_RBX[0x178] + -1;
    uVar4 = render_system_control_config;
    unaff_RBX[0x167] = CONCAT44(uVar2,uVar3);
    *unaff_RBX = (int64_t)plVar1;
    unaff_RBX[0x180] = (int64_t)unaff_RBX;
    unaff_RBX[0x181] = (int64_t)unaff_RBX;
    unaff_RBX[0x1f6] = (int64_t)(unaff_RBX + 0x1f7);
    unaff_RBX[0x1f8] = (int64_t)(unaff_RBX + 0x1f9);
    uVar5 = FlsSetValue(uVar4);
    unaff_RBX[0x1f5] = (int64_t)(unaff_RBX + 0x1f9);
    return uVar5 & 0xffffffffffffff00;
  }
                    // WARNING: Subroutine does not return
  memcpy(plVar1,&unknown_var_128_ptr,0x618);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_18064f93b(void)

{
  int32_t uVar1;
  uint64_t *unaff_R14;
  
  FUN_18064f4b0();
  uVar1 = render_system_control_config;
  *unaff_R14 = 0x180bf4000;
  FlsSetValue(uVar1);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



