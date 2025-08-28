#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part123.c - 3 个函数

// 函数: void FUN_18033eb00(uint64_t param_1,int64_t param_2,int64_t param_3)
void FUN_18033eb00(uint64_t param_1,int64_t param_2,int64_t param_3)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int16_t *puVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int64_t lVar11;
  void *puVar12;
  int64_t lVar13;
  int64_t lVar14;
  uint uVar15;
  int *piVar16;
  int8_t auStack_a8 [32];
  void *puStack_88;
  void *puStack_80;
  uint uStack_78;
  uint64_t uStack_70;
  uint uStack_64;
  int64_t lStack_60;
  uint64_t uStack_58;
  char acStack_50 [16];
  uint64_t uStack_40;
  
  uStack_58 = 0xfffffffffffffffe;
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  uStack_64 = 1;
  if (*(int *)(param_3 + 0x408) == 0) {
    uStack_64 = (uint)(*(int *)(param_3 + 0x1a8) != 0);
  }
  iVar9 = *(int *)(param_2 + 0x10);
  iVar8 = iVar9 + 0x25;
  lStack_60 = param_3;
  CoreMemoryPoolProcessor(param_2,iVar8);
  puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar1 = 0x41572f2f;
  puVar1[1] = 0x4e494e52;
  puVar1[2] = 0x203a2047;
  puVar1[3] = 0x73696854;
  puVar1[4] = 0x20736920;
  puVar1[5] = 0x65672061;
  puVar1[6] = 0x6172656e;
  puVar1[7] = 0x20646574;
  puVar1[8] = 0x656c6966;
  *(int16_t *)(puVar1 + 9) = 10;
  *(int *)(param_2 + 0x10) = iVar8;
  iVar9 = iVar9 + 0x4b;
  CoreMemoryPoolProcessor(param_2,iVar9);
  puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar1 = 0x41572f2f;
  puVar1[1] = 0x4e494e52;
  puVar1[2] = 0x203a2047;
  puVar1[3] = 0x6e206f44;
  *(uint64_t *)(puVar1 + 4) = 0x676e61686320746f;
  *(uint64_t *)(puVar1 + 6) = 0x6620736968742065;
  puVar1[8] = 0x2e656c69;
  *(int16_t *)(puVar1 + 9) = 0xa0a;
  *(int8_t *)((int64_t)puVar1 + 0x26) = 0;
  *(int *)(param_2 + 0x10) = iVar9;
  uVar5 = 0;
  piVar16 = (int *)(param_3 + 0x4c0);
  lVar14 = -1;
  lVar13 = -1;
  uVar6 = uVar5;
  do {
    if (*piVar16 != 0) {
      iVar9 = *(int *)(param_2 + 0x10);
      iVar8 = iVar9 + 8;
      CoreMemoryPoolProcessor(param_2,iVar8);
      puVar2 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
      *puVar2 = 0x20656e6966656423;
      *(int8_t *)(puVar2 + 1) = 0;
      *(int *)(param_2 + 0x10) = iVar8;
      if (0 < *piVar16) {
        CoreMemoryPoolProcessor(param_2,iVar8 + *piVar16);
                    // WARNING: Subroutine does not return
        memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
               *(uint64_t *)(piVar16 + -2),(int64_t)(*piVar16 + 1));
      }
      CoreMemoryPoolProcessor(param_2,iVar9 + 9);
      *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
      *(int *)(param_2 + 0x10) = iVar9 + 9;
      CoreMemoryPoolProcessor(param_2,iVar9 + 0x10);
      *(uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) =
           0x65727574786574;
      *(int *)(param_2 + 0x10) = iVar9 + 0x10;
      puStack_88 = &system_data_buffer_ptr;
      uStack_70 = 0;
      puStack_80 = (void *)0x0;
      uStack_78 = 0;
      FUN_180060680(acStack_50,&unknown_var_4576_ptr,uVar6);
      lVar11 = lVar14;
      do {
        lVar7 = lVar11;
        lVar11 = lVar7 + 1;
      } while (acStack_50[lVar7 + 1] != '\0');
      iVar9 = (int)(lVar7 + 1);
      if (0 < iVar9) {
        CoreMemoryPoolProcessor(&puStack_88,uStack_78 + iVar9);
                    // WARNING: Subroutine does not return
        memcpy(puStack_80 + uStack_78,acStack_50,(int64_t)((int)lVar7 + 2));
      }
      lVar11 = lVar14;
      puVar12 = &system_buffer_ptr;
      if (puStack_80 != (void *)0x0) {
        puVar12 = puStack_80;
      }
      do {
        lVar7 = lVar11;
        lVar11 = lVar7 + 1;
      } while (puVar12[lVar11] != '\0');
      if (0 < (int)lVar11) {
        CoreMemoryPoolProcessor(param_2,*(int *)(param_2 + 0x10) + (int)lVar11);
                    // WARNING: Subroutine does not return
        memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),puVar12,
               (int64_t)((int)lVar7 + 2));
      }
      iVar9 = *(int *)(param_2 + 0x10) + 1;
      CoreMemoryPoolProcessor(param_2,iVar9);
      *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 10;
      *(int *)(param_2 + 0x10) = iVar9;
      puStack_88 = &system_data_buffer_ptr;
      if (puStack_80 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      puStack_80 = (void *)0x0;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      puStack_88 = &system_state_ptr;
    }
    uVar15 = (int)uVar6 + 1;
    uVar6 = (uint64_t)uVar15;
    piVar16 = piVar16 + 0x16;
  } while ((int)uVar15 < 0x10);
  iVar9 = *(int *)(param_2 + 0x10) + 1;
  CoreMemoryPoolProcessor(param_2,iVar9);
  lVar7 = lStack_60;
  *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 10;
  *(int *)(param_2 + 0x10) = iVar9;
  lVar3 = *(int64_t *)(lStack_60 + 0x180) - *(int64_t *)(lStack_60 + 0x178);
  lVar11 = lVar3 >> 0x3f;
  uVar6 = uVar5;
  if (lVar3 / 0x98 + lVar11 != lVar11) {
    do {
      iVar10 = iVar9 + 8;
      CoreMemoryPoolProcessor(param_2,iVar10);
      puVar2 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
      *puVar2 = 0x20656e6966656423;
      *(int8_t *)(puVar2 + 1) = 0;
      *(int *)(param_2 + 0x10) = iVar10;
      lVar11 = *(int64_t *)(lVar7 + 0x178);
      iVar8 = *(int *)(lVar11 + 0x10 + uVar6);
      if (0 < iVar8) {
        CoreMemoryPoolProcessor(param_2,iVar10 + iVar8);
                    // WARNING: Subroutine does not return
        memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
               *(uint64_t *)(lVar11 + 8 + uVar6),(int64_t)(*(int *)(lVar11 + 0x10 + uVar6) + 1));
      }
      iVar9 = iVar9 + 9;
      CoreMemoryPoolProcessor(param_2,iVar9);
      *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 10;
      *(int *)(param_2 + 0x10) = iVar9;
      uVar15 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar15;
      uVar6 = uVar6 + 0x98;
    } while ((uint64_t)(int64_t)(int)uVar15 <
             (uint64_t)((*(int64_t *)(lVar7 + 0x180) - *(int64_t *)(lVar7 + 0x178)) / 0x98));
  }
  uVar6 = 0;
  if ((char)uStack_64 != '\0') {
    iVar9 = iVar9 + 0x15;
    CoreMemoryPoolProcessor(param_2,iVar9);
    puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar1 = 0x66656423;
    puVar1[1] = 0x20656e69;
    puVar1[2] = 0x5f534148;
    puVar1[3] = 0x49444f4d;
    puVar1[4] = 0x52454946;
    *(int16_t *)(puVar1 + 5) = 10;
    *(int *)(param_2 + 0x10) = iVar9;
  }
  iVar8 = iVar9 + 0x22;
  CoreMemoryPoolProcessor(param_2,iVar8);
  puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar1 = 0x66656423;
  puVar1[1] = 0x20656e69;
  puVar1[2] = 0x74726556;
  puVar1[3] = 0x735f7865;
  puVar1[4] = 0x65646168;
  puVar1[5] = 0x756f5f72;
  puVar1[6] = 0x74757074;
  puVar1[7] = 0x7079745f;
  *(int16_t *)(puVar1 + 8) = 0x2065;
  *(int8_t *)((int64_t)puVar1 + 0x22) = 0;
  *(int *)(param_2 + 0x10) = iVar8;
  if (0 < *(int *)(lVar7 + 0x50)) {
    CoreMemoryPoolProcessor(param_2,iVar8 + *(int *)(lVar7 + 0x50));
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
           *(uint64_t *)(lVar7 + 0x48),(int64_t)(*(int *)(lVar7 + 0x50) + 1));
  }
  CoreMemoryPoolProcessor(param_2,iVar9 + 0x24);
  puVar4 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar4 = 0xa0a;
  *(int8_t *)(puVar4 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar9 + 0x24;
  FUN_1803437e0(puVar4,param_2,lVar7);
  iVar9 = *(int *)(param_2 + 0x10) + 0x17;
  CoreMemoryPoolProcessor(param_2,iVar9);
  puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar1 = 0x66656423;
  puVar1[1] = 0x20656e69;
  puVar1[2] = 0x6d5f796d;
  puVar1[3] = 0x72657461;
  *(uint64_t *)(puVar1 + 4) = 0x2064695f6c6169;
  *(int *)(param_2 + 0x10) = iVar9;
  switch(*(int32_t *)(lVar7 + 0xdc)) {
  case 1:
    puVar12 = &unknown_var_1384_ptr;
    lVar14 = lVar13;
    break;
  case 2:
    puVar12 = &unknown_var_1360_ptr;
    lVar14 = lVar13;
    break;
  case 3:
    puVar12 = &unknown_var_1336_ptr;
    lVar14 = lVar13;
    break;
  case 4:
    puVar12 = &unknown_var_1312_ptr;
    lVar14 = lVar13;
    break;
  case 5:
    puVar12 = &unknown_var_1512_ptr;
    lVar14 = lVar13;
    break;
  case 6:
    puVar12 = &unknown_var_1488_ptr;
    lVar14 = lVar13;
    break;
  case 7:
    puVar12 = &unknown_var_1456_ptr;
    lVar14 = lVar13;
    break;
  case 8:
    puVar12 = &unknown_var_1616_ptr;
    lVar14 = lVar13;
    break;
  case 9:
    puVar12 = &unknown_var_1408_ptr;
    lVar14 = lVar13;
    break;
  case 10:
    puVar12 = &unknown_var_1568_ptr;
    break;
  case 0xb:
    puVar12 = &unknown_var_1536_ptr;
    break;
  case 0xc:
    puVar12 = &unknown_var_1592_ptr;
    break;
  default:
    FUN_180627020(&unknown_var_1640_ptr);
    iVar9 = *(int *)(param_2 + 0x10);
    goto code_r0x00018033f10d;
  }
  do {
    lVar13 = lVar14;
    lVar14 = lVar13 + 1;
  } while (puVar12[lVar14] != '\0');
  if (0 < (int)lVar14) {
    CoreMemoryPoolProcessor(param_2,iVar9 + (int)lVar14);
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),puVar12,
           (int64_t)((int)lVar13 + 2));
  }
code_r0x00018033f10d:
  CoreMemoryPoolProcessor(param_2,iVar9 + 2);
  puVar4 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar4 = 0xa0a;
  *(int8_t *)(puVar4 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar9 + 2;
  iVar8 = iVar9 + 0x29;
  CoreMemoryPoolProcessor(param_2,iVar8);
  puVar2 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar2 = 0x20656e6966656423;
  puVar2[1] = 0x657869705f726550;
  *(int32_t *)(puVar2 + 2) = 0x6f6d5f6c;
  *(int32_t *)((int64_t)puVar2 + 0x14) = 0x69666964;
  *(int32_t *)(puVar2 + 3) = 0x656c6261;
  *(int32_t *)((int64_t)puVar2 + 0x1c) = 0x7261765f;
  puVar2[4] = 0x2073656c626169;
  *(int *)(param_2 + 0x10) = iVar8;
  if (0 < *(int *)(lVar7 + 0xf98)) {
    CoreMemoryPoolProcessor(param_2,iVar8 + *(int *)(lVar7 + 0xf98));
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
           *(uint64_t *)(lVar7 + 0xf90),(int64_t)(*(int *)(lVar7 + 0xf98) + 1));
  }
  CoreMemoryPoolProcessor(param_2,iVar9 + 0x2b);
  puVar4 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar4 = 0xa0a;
  *(int8_t *)(puVar4 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar9 + 0x2b;
  iVar8 = iVar9 + 0x51;
  CoreMemoryPoolProcessor(param_2,iVar8);
  puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar1 = 0x66656423;
  puVar1[1] = 0x20656e69;
  puVar1[2] = 0x5f726550;
  puVar1[3] = 0x65786970;
  puVar1[4] = 0x75615f6c;
  puVar1[5] = 0x696c6978;
  puVar1[6] = 0x5f797261;
  puVar1[7] = 0x69726176;
  puVar1[8] = 0x656c6261;
  *(int16_t *)(puVar1 + 9) = 0x2073;
  *(int8_t *)((int64_t)puVar1 + 0x26) = 0;
  *(int *)(param_2 + 0x10) = iVar8;
  if (*(int *)(lVar7 + 0x1030) < 1) {
    CoreMemoryPoolProcessor(param_2,iVar9 + 0x53);
    puVar4 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar4 = 0xa0a;
    *(int8_t *)(puVar4 + 1) = 0;
    *(int *)(param_2 + 0x10) = iVar9 + 0x53;
    CoreMemoryPoolProcessor(param_2,iVar9 + 0x79);
    puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar1 = 0x636e6923;
    puVar1[1] = 0x6564756c;
    puVar1[2] = 0x2e2e2220;
    puVar1[3] = 0x6168732f;
    puVar1[4] = 0x5f726564;
    puVar1[5] = 0x666e6f63;
    puVar1[6] = 0x72756769;
    puVar1[7] = 0x6f697461;
    puVar1[8] = 0x22682e6e;
    *(int16_t *)(puVar1 + 9) = 0xa20;
    *(int8_t *)((int64_t)puVar1 + 0x26) = 0;
    *(int *)(param_2 + 0x10) = iVar9 + 0x79;
    CoreMemoryPoolProcessor(param_2,iVar9 + 0x95);
    puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar1 = 0x636e6923;
    puVar1[1] = 0x6564756c;
    puVar1[2] = 0x65642220;
    puVar1[3] = 0x696e6966;
    *(uint64_t *)(puVar1 + 4) = 0x73722e736e6f6974;
    puVar1[6] = 0xa202268;
    *(int8_t *)(puVar1 + 7) = 0;
    *(int *)(param_2 + 0x10) = iVar9 + 0x95;
    CoreMemoryPoolProcessor(param_2,iVar9 + 0xc0);
    puVar2 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar2 = 0x6564756c636e6923;
    puVar2[1] = 0x616c75646f6d2220;
    *(int32_t *)(puVar2 + 2) = 0x74735f72;
    *(int32_t *)((int64_t)puVar2 + 0x14) = 0x74637572;
    *(int32_t *)(puVar2 + 3) = 0x6665645f;
    *(int32_t *)((int64_t)puVar2 + 0x1c) = 0x74696e69;
    puVar2[4] = 0x6873722e736e6f69;
    *(int32_t *)(puVar2 + 5) = 0xa2022;
    *(int *)(param_2 + 0x10) = iVar9 + 0xc0;
    CoreMemoryPoolProcessor(param_2,iVar9 + 0xe1);
    puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar1 = 0x636e6923;
    puVar1[1] = 0x6564756c;
    puVar1[2] = 0x68732220;
    puVar1[3] = 0x64657261;
    puVar1[4] = 0x6e75665f;
    puVar1[5] = 0x6f697463;
    puVar1[6] = 0x722e736e;
    puVar1[7] = 0x20226873;
    *(int16_t *)(puVar1 + 8) = 10;
    *(int *)(param_2 + 0x10) = iVar9 + 0xe1;
    CoreMemoryPoolProcessor(param_2,iVar9 + 0xff);
    puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar1 = 0x636e6923;
    puVar1[1] = 0x6564756c;
    puVar1[2] = 0x6f6d2220;
    puVar1[3] = 0x6e6f6974;
    *(uint64_t *)(puVar1 + 4) = 0x2e726f746365765f;
    puVar1[6] = 0x22687372;
    *(int16_t *)(puVar1 + 7) = 0xa20;
    *(int8_t *)((int64_t)puVar1 + 0x1e) = 0;
    *(int *)(param_2 + 0x10) = iVar9 + 0xff;
    iVar9 = iVar9 + 0x126;
    CoreMemoryPoolProcessor(param_2,iVar9);
    puVar2 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar2 = 0x6564756c636e6923;
    puVar2[1] = 0x6172656e65672220;
    puVar2[2] = 0x696665645f646574;
    puVar2[3] = 0x2e736e6f6974696e;
    puVar2[4] = 0xa0a2022687372;
    *(int *)(param_2 + 0x10) = iVar9;
    uVar5 = uVar6;
    if ((*(int64_t *)(lVar7 + 0x28) - *(int64_t *)(lVar7 + 0x20)) / 0x98 != 0) {
      do {
        iVar10 = iVar9 + 10;
        CoreMemoryPoolProcessor(param_2,iVar10);
        puVar2 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
        *puVar2 = 0x6564756c636e6923;
        *(int16_t *)(puVar2 + 1) = 0x2220;
        *(int8_t *)((int64_t)puVar2 + 10) = 0;
        *(int *)(param_2 + 0x10) = iVar10;
        lVar14 = *(int64_t *)(lVar7 + 0x20);
        iVar8 = *(int *)(lVar14 + 0x10 + uVar5);
        if (0 < iVar8) {
          CoreMemoryPoolProcessor(param_2,iVar10 + iVar8);
                    // WARNING: Subroutine does not return
          memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
                 *(uint64_t *)(lVar14 + 8 + uVar5),(int64_t)(*(int *)(lVar14 + 0x10 + uVar5) + 1)
                );
        }
        iVar9 = iVar9 + 0xe;
        CoreMemoryPoolProcessor(param_2,iVar9);
        puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
        *puVar1 = 0xa0a2022;
        *(int8_t *)(puVar1 + 1) = 0;
        *(int *)(param_2 + 0x10) = iVar9;
        uVar15 = (int)uVar6 + 1;
        uVar6 = (uint64_t)uVar15;
        uVar5 = uVar5 + 0x98;
      } while ((uint64_t)(int64_t)(int)uVar15 <
               (uint64_t)((*(int64_t *)(lVar7 + 0x28) - *(int64_t *)(lVar7 + 0x20)) / 0x98));
    }
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_a8);
  }
  CoreMemoryPoolProcessor(param_2,iVar8 + *(int *)(lVar7 + 0x1030));
                    // WARNING: Subroutine does not return
  memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
         *(uint64_t *)(lVar7 + 0x1028),(int64_t)(*(int *)(lVar7 + 0x1030) + 1));
}





// 函数: void FUN_18033f560(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
void FUN_18033f560(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  int16_t *puVar3;
  void *puVar4;
  int64_t lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  void *puStack_30;
  int64_t lStack_28;
  
  puVar4 = &rendering_resource_ptr;
  if (*(char *)(param_3 + 0xd8) != '\0') {
    puVar4 = &rendering_raycast_ptr;
  }
  CoreMemoryPoolValidator(&puStack_30,puVar4,param_3,param_4,0xfffffffffffffffe);
  iVar8 = *(int *)(param_2 + 0x10);
  CoreMemoryPoolProcessor(param_2,iVar8 + 0x12);
  puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar1 = 0x20666923;
  puVar1[1] = 0x54524556;
  puVar1[2] = 0x535f5845;
  puVar1[3] = 0x45444148;
  *(int16_t *)(puVar1 + 4) = 0xa52;
  *(int8_t *)((int64_t)puVar1 + 0x12) = 0;
  *(int *)(param_2 + 0x10) = iVar8 + 0x12;
  CoreMemoryPoolProcessor(param_2,iVar8 + 0x45);
  puVar2 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar2 = 0x735f786574726556;
  puVar2[1] = 0x756f5f7265646168;
  *(int32_t *)(puVar2 + 2) = 0x74757074;
  *(int32_t *)((int64_t)puVar2 + 0x14) = 0x7079745f;
  *(int32_t *)(puVar2 + 3) = 0x616d2065;
  *(int32_t *)((int64_t)puVar2 + 0x1c) = 0x765f6e69;
  *(int32_t *)(puVar2 + 4) = 0x47522873;
  *(int32_t *)((int64_t)puVar2 + 0x24) = 0x53565f4c;
  *(int32_t *)(puVar2 + 5) = 0x504e495f;
  *(int32_t *)((int64_t)puVar2 + 0x2c) = 0x49205455;
  *(int32_t *)(puVar2 + 6) = 0xa296e;
  *(int *)(param_2 + 0x10) = iVar8 + 0x45;
  CoreMemoryPoolProcessor(param_2,iVar8 + 0x47);
  puVar3 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar3 = 0xa7b;
  *(int8_t *)(puVar3 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar8 + 0x47;
  CoreMemoryPoolProcessor(param_2,iVar8 + 0x7b);
  puVar2 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar2 = 0x4c414954494e4909;
  puVar2[1] = 0x5054554f5f455a49;
  *(int32_t *)(puVar2 + 2) = 0x56285455;
  *(int32_t *)((int64_t)puVar2 + 0x14) = 0x65747265;
  *(int32_t *)(puVar2 + 3) = 0x68735f78;
  *(int32_t *)((int64_t)puVar2 + 0x1c) = 0x72656461;
  *(int32_t *)(puVar2 + 4) = 0x74756f5f;
  *(int32_t *)((int64_t)puVar2 + 0x24) = 0x5f747570;
  *(int32_t *)(puVar2 + 5) = 0x65707974;
  *(int32_t *)((int64_t)puVar2 + 0x2c) = 0x754f202c;
  *(int32_t *)(puVar2 + 6) = 0xa3b2974;
  *(int8_t *)((int64_t)puVar2 + 0x34) = 0;
  *(int *)(param_2 + 0x10) = iVar8 + 0x7b;
  CoreMemoryPoolProcessor(param_2,iVar8 + 0xd1);
  puVar2 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar2 = 0x7265765f72655009;
  puVar2[1] = 0x69646f6d5f786574;
  puVar2[2] = 0x765f656c62616966;
  puVar2[3] = 0x73656c6261697261;
  puVar2[4] = 0x69646f6d5f767020;
  puVar2[5] = 0x3d20656c62616966;
  *(int32_t *)(puVar2 + 6) = 0x65502820;
  *(int32_t *)((int64_t)puVar2 + 0x34) = 0x65765f72;
  *(int32_t *)(puVar2 + 7) = 0x78657472;
  *(int32_t *)((int64_t)puVar2 + 0x3c) = 0x646f6d5f;
  *(int32_t *)(puVar2 + 8) = 0x61696669;
  *(int32_t *)((int64_t)puVar2 + 0x44) = 0x5f656c62;
  *(int32_t *)(puVar2 + 9) = 0x69726176;
  *(int32_t *)((int64_t)puVar2 + 0x4c) = 0x656c6261;
  *(int32_t *)(puVar2 + 10) = 0x3b302973;
  *(int16_t *)((int64_t)puVar2 + 0x54) = 0xa0a;
  *(int8_t *)((int64_t)puVar2 + 0x56) = 0;
  *(int *)(param_2 + 0x10) = iVar8 + 0xd1;
  if (*(int *)(param_3 + 0x1a8) != 0) {
    iVar7 = iVar8 + 0xd2;
    CoreMemoryPoolProcessor(param_2,iVar7);
    *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
    *(int *)(param_2 + 0x10) = iVar7;
    if (0 < *(int *)(param_3 + 0x1a8)) {
      CoreMemoryPoolProcessor(param_2,iVar7 + *(int *)(param_3 + 0x1a8));
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
             *(uint64_t *)(param_3 + 0x1a0),(int64_t)(*(int *)(param_3 + 0x1a8) + 1));
    }
    CoreMemoryPoolProcessor(param_2,iVar8 + 0xd8);
    puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar1 = 0x296e4928;
    *(int16_t *)(puVar1 + 1) = 0xa3b;
    *(int8_t *)((int64_t)puVar1 + 6) = 0;
    *(int *)(param_2 + 0x10) = iVar8 + 0xd8;
  }
  piVar6 = (int *)(param_3 + 0x240);
  lVar5 = 3;
  do {
    iVar8 = *(int *)(param_2 + 0x10);
    if (*piVar6 != 0) {
      iVar7 = iVar8 + 1;
      CoreMemoryPoolProcessor(param_2,iVar7);
      *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
      *(int *)(param_2 + 0x10) = iVar7;
      if (0 < *piVar6) {
        CoreMemoryPoolProcessor(param_2,iVar7 + *piVar6);
                    // WARNING: Subroutine does not return
        memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
               *(uint64_t *)(piVar6 + -2),(int64_t)(*piVar6 + 1));
      }
      iVar8 = iVar8 + 0x1d;
      CoreMemoryPoolProcessor(param_2,iVar8);
      puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
      *puVar1 = 0x206e4928;
      puVar1[1] = 0x7670202c;
      puVar1[2] = 0x646f6d5f;
      puVar1[3] = 0x61696669;
      *(uint64_t *)(puVar1 + 4) = 0x74754f202c656c62;
      puVar1[6] = 0xa3b2920;
      *(int8_t *)(puVar1 + 7) = 0;
      *(int *)(param_2 + 0x10) = iVar8;
    }
    piVar6 = piVar6 + 0x26;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if (*(int *)(param_3 + 0x408) != 0) {
    iVar8 = *(int *)(param_2 + 0x10);
    iVar7 = iVar8 + 1;
    CoreMemoryPoolProcessor(param_2,iVar7);
    *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
    *(int *)(param_2 + 0x10) = iVar7;
    if (0 < *(int *)(param_3 + 0x408)) {
      CoreMemoryPoolProcessor(param_2,iVar7 + *(int *)(param_3 + 0x408));
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
             *(uint64_t *)(param_3 + 0x400),(int64_t)(*(int *)(param_3 + 0x408) + 1));
    }
    iVar8 = iVar8 + 0x1c;
    CoreMemoryPoolProcessor(param_2,iVar8);
    puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar1 = 0x206e4928;
    puVar1[1] = 0x7670202c;
    puVar1[2] = 0x646f6d5f;
    puVar1[3] = 0x61696669;
    *(uint64_t *)(puVar1 + 4) = 0x74754f202c656c62;
    puVar1[6] = 0xa3b29;
    *(int *)(param_2 + 0x10) = iVar8;
  }
  CoreMemoryPoolProcessor(param_2,iVar8 + 0x21);
  puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar1 = 0x64666923;
  puVar1[1] = 0x53206665;
  puVar1[2] = 0x45545359;
  puVar1[3] = 0x48535f4d;
  puVar1[4] = 0x565f574f;
  puVar1[5] = 0x45545245;
  puVar1[6] = 0x4f435f58;
  puVar1[7] = 0x53524f4c;
  *(int16_t *)(puVar1 + 8) = 10;
  *(int *)(param_2 + 0x10) = iVar8 + 0x21;
  CoreMemoryPoolProcessor(param_2,iVar8 + 0x43);
  puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar1 = 0x5f737609;
  puVar1[1] = 0x7074756f;
  puVar1[2] = 0x765f7475;
  puVar1[3] = 0x65747265;
  puVar1[4] = 0x6f635f78;
  puVar1[5] = 0x28726f6c;
  puVar1[6] = 0x2c74754f;
  puVar1[7] = 0x296e4920;
  *(int16_t *)(puVar1 + 8) = 0xa3b;
  *(int8_t *)((int64_t)puVar1 + 0x22) = 0;
  *(int *)(param_2 + 0x10) = iVar8 + 0x43;
  CoreMemoryPoolProcessor(param_2,iVar8 + 0x4a);
  *(uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) =
       0xa6669646e6523;
  *(int *)(param_2 + 0x10) = iVar8 + 0x4a;
  CoreMemoryPoolProcessor(param_2,iVar8 + 0x57);
  puVar2 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar2 = 0x206e727574657209;
  *(int32_t *)(puVar2 + 1) = 0x3b74754f;
  *(int16_t *)((int64_t)puVar2 + 0xc) = 10;
  *(int *)(param_2 + 0x10) = iVar8 + 0x57;
  CoreMemoryPoolProcessor(param_2,iVar8 + 0x5a);
  *(int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 0xa0a7d;
  *(int *)(param_2 + 0x10) = iVar8 + 0x5a;
  CoreMemoryPoolProcessor(param_2,iVar8 + 0x61);
  *(uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) =
       0xa6669646e6523;
  *(int *)(param_2 + 0x10) = iVar8 + 0x61;
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18033fa60(uint64_t param_1,int64_t param_2,uint64_t param_3)
void FUN_18033fa60(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  int32_t *puVar1;
  void *puVar2;
  uint uVar3;
  int iVar4;
  int64_t lVar5;
  int8_t auStack_e8 [32];
  int32_t uStack_c8;
  void *puStack_c0;
  void *puStack_b8;
  uint uStack_b0;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  int64_t lStack_98;
  void *puStack_88;
  void *puStack_80;
  int iStack_78;
  int32_t uStack_70;
  uint64_t uStack_68;
  void *puStack_60;
  int8_t *puStack_58;
  int32_t uStack_50;
  int8_t auStack_48 [16];
  uint64_t uStack_38;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_e8;
  uStack_c8 = 0;
  FUN_18033dd20(param_1,&puStack_88);
  puStack_60 = &system_config_ptr;
  puStack_58 = auStack_48;
  auStack_48[0] = 0;
  uStack_50 = 6;
  strcpy_s(auStack_48,0x10,&unknown_var_2588_ptr);
  uStack_c8 = 2;
  FUN_1806279c0(&puStack_c0,&puStack_60);
  uStack_c8 = 0;
  puStack_60 = &system_state_ptr;
  uVar3 = uStack_b0 + 0x10;
  CoreMemoryPoolProcessor(&puStack_c0,uVar3);
  puVar1 = (int32_t *)(puStack_b8 + uStack_b0);
  *puVar1 = 0x64616853;
  puVar1[1] = 0x2f737265;
  puVar1[2] = 0x72756f53;
  puVar1[3] = 0x2f736563;
  *(int8_t *)(puVar1 + 4) = 0;
  uStack_b0 = uVar3;
  FUN_180627be0(param_2,param_3);
  if (0 < *(int *)(param_2 + 0x10)) {
    CoreMemoryPoolProcessor(&puStack_c0,uStack_b0 + *(int *)(param_2 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy(puStack_b8 + uStack_b0,*(uint64_t *)(param_2 + 8),
           (int64_t)(*(int *)(param_2 + 0x10) + 1));
  }
  iVar4 = uStack_b0 + 3;
  CoreMemoryPoolProcessor(&puStack_c0,iVar4);
  *(int32_t *)(puStack_b8 + uStack_b0) = 0x73722e;
  uStack_a0 = 0;
  lStack_98 = 0;
  puVar2 = &system_buffer_ptr;
  if (puStack_b8 != (void *)0x0) {
    puVar2 = puStack_b8;
  }
  uStack_b0 = iVar4;
  FUN_18062dee0(&uStack_a0,puVar2,&system_data_c7ec);
  lVar5 = lStack_98;
  puVar2 = &system_buffer_ptr;
  if (puStack_80 != (void *)0x0) {
    puVar2 = puStack_80;
  }
  fwrite(puVar2,(int64_t)iStack_78,1,lStack_98);
  if (lVar5 != 0) {
    fclose(lVar5);
    lStack_98 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    fclose(lVar5);
    lStack_98 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  puStack_c0 = &system_data_buffer_ptr;
  if (puStack_b8 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  puStack_b8 = (void *)0x0;
  uStack_a8 = 0;
  puStack_c0 = &system_state_ptr;
  puStack_88 = &system_data_buffer_ptr;
  if (puStack_80 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  puStack_80 = (void *)0x0;
  uStack_70 = 0;
  puStack_88 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



