#include "TaleWorlds.Native.Split.h"

// 99_part_11_part058_sub002_sub002.c - 1 个函数

// 函数: void FUN_1807bb920(void)
void FUN_1807bb920(void)

{
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}



uint64_t FUN_1807bbce0(int64_t param_1,int32_t param_2)

{
  *(int32_t *)(param_1 + 0x3bf8) = param_2;
  func_0x0001807b9040();
  return 0;
}



uint64_t FUN_1807bbd00(int64_t param_1,uint64_t param_2,uint param_3)

{
  int32_t uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x3bc0);
  if (param_3 != uVar2) {
    if (param_3 < uVar2) {
      uVar1 = *(int32_t *)(param_1 + 0x3bf8);
      FUN_1807ba360(param_1,0);
      uVar2 = *(uint *)(param_1 + 0x3bc0);
      *(int32_t *)(param_1 + 0x3bf8) = uVar1;
    }
    while (uVar2 < param_3) {
      FUN_1807be3c0(param_1,1,0);
      uVar2 = *(uint *)(param_1 + 0x3bc0);
    }
  }
  return 0;
}



uint64_t FUN_1807bbd1d(int64_t param_1)

{
  int32_t uVar1;
  uint uVar2;
  int64_t unaff_RBX;
  uint unaff_EDI;
  
  uVar1 = *(int32_t *)(param_1 + 0x3bf8);
  FUN_1807ba360(param_1,0);
  uVar2 = *(uint *)(unaff_RBX + 0x3bc0);
  *(int32_t *)(unaff_RBX + 0x3bf8) = uVar1;
  while (uVar2 < unaff_EDI) {
    FUN_1807be3c0();
    uVar2 = *(uint *)(unaff_RBX + 0x3bc0);
  }
  return 0;
}



uint64_t FUN_1807bbd44(void)

{
  uint in_EAX;
  int64_t unaff_RBX;
  uint unaff_EDI;
  
  if (in_EAX < unaff_EDI) {
    do {
      FUN_1807be3c0();
    } while (*(uint *)(unaff_RBX + 0x3bc0) < unaff_EDI);
  }
  return 0;
}



uint64_t FUN_1807bbd80(int64_t param_1)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  short *psVar4;
  int64_t lVar5;
  ushort *puVar6;
  short *psVar7;
  int16_t *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  int32_t uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  
  *(int8_t *)(param_1 + 0x304) = 0;
  bVar3 = false;
  *(int32_t *)(param_1 + 0x308) = 0x3200;
  *(int8_t *)(param_1 + 0x298) = 1;
  iVar9 = 0;
  *(uint64_t *)(param_1 + 600) = 0;
  *(uint64_t *)(param_1 + 0x260) = 0;
  *(uint64_t *)(param_1 + 0x288) = 0;
  *(uint64_t *)(param_1 + 0x290) = 0;
  *(int32_t *)(param_1 + 0x268) = 0xc2c00000;
  *(uint64_t *)(param_1 + 0x26c) = 0;
  *(int32_t *)(param_1 + 0x274) = 0;
  *(int32_t *)(param_1 + 0x278) = 0xc2c00000;
  *(uint64_t *)(param_1 + 0x27c) = 0;
  *(int32_t *)(param_1 + 0x284) = 0xc2c00000;
  *(uint64_t *)(param_1 + 0x2c0) = 0;
  *(uint64_t *)(param_1 + 0x2c8) = 0x3f800000;
  *(int8_t *)(param_1 + 0x2d0) = 0;
  *(uint64_t *)(param_1 + 0x29c) = 0;
  *(uint64_t *)(param_1 + 0x2a4) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x2ac) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x2b4) = 0;
  *(int32_t *)(param_1 + 700) = 0;
  uVar10 = *(uint *)(param_1 + 0x2ec);
  uVar12 = (uint64_t)uVar10;
  if (0 < (int)uVar10) {
    puVar6 = *(ushort **)(param_1 + 0x2f0);
    uVar13 = (uint64_t)uVar10;
    lVar5 = param_1;
    iVar14 = iVar9;
    do {
      fVar15 = 1.0;
      if (puVar6[2] != 1) goto LAB_1807bbf64;
      uVar2 = *puVar6;
      if (uVar2 < 0x8c) {
        lVar5 = (uint64_t)*(uint *)(&unknown_var_5432_ptr + (uint64_t)(byte)(&unknown_var_5444_ptr)[uVar2] * 4)
                + 0x180000000;
        switch(uVar2) {
        case 0:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 0x81:
        case 0x87:
        case 0x8a:
        case 0x8b:
          goto LAB_1807bbf64;
        }
      }
      uVar2 = puVar6[1];
      if (0x8b < uVar2) goto LAB_1807bbf47;
      lVar5 = (uint64_t)*(uint *)(&unknown_var_5584_ptr + (uint64_t)(byte)(&unknown_var_5616_ptr)[uVar2] * 4) +
              0x180000000;
      switch(uVar2) {
      case 0:
      case 1:
        fVar15 = 1.0;
        goto LAB_1807bbf47;
      case 2:
        uVar18 = (uint)*(byte *)(param_1 + 0x2e8);
        break;
      case 3:
        uVar18 = (uint)*(byte *)(param_1 + 0x2e0);
        break;
      default:
        goto LAB_1807bbf47;
      case 0x81:
        uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x368);
        break;
      case 0x87:
        uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x36c);
        break;
      case 0x8a:
        uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x370);
        break;
      case 0x8b:
        uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x374);
      }
      fVar15 = (float)(int)uVar18 * 0.0078125;
LAB_1807bbf47:
      if (puVar6[3] != 1) {
        iVar14 = iVar14 + (int)((float)*(int *)(puVar6 + 4) * fVar15);
      }
      bVar3 = true;
LAB_1807bbf64:
      puVar6 = puVar6 + 6;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    if (bVar3) {
      fVar15 = (float)powf(lVar5,(float)iVar14 * -1.5258789e-06 * 0.05);
      *(float *)(param_1 + 0x2f8) = 1.0 - fVar15;
    }
  }
  bVar3 = false;
  if (0 < (int)uVar10) {
    puVar8 = *(int16_t **)(param_1 + 0x2f0);
    uVar13 = uVar12;
    iVar14 = iVar9;
    do {
      fVar15 = 1.0;
      if (puVar8[2] != 3) goto LAB_1807bc0a4;
      switch(*puVar8) {
      case 0:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 0x81:
      case 0x87:
      case 0x8a:
      case 0x8b:
        goto LAB_1807bc0a4;
      }
      switch(puVar8[1]) {
      case 0:
      case 1:
        fVar15 = 1.0;
        goto LAB_1807bc087;
      case 2:
        uVar18 = (uint)*(byte *)(param_1 + 0x2e8);
        break;
      case 3:
        uVar18 = (uint)*(byte *)(param_1 + 0x2e0);
        break;
      default:
        goto LAB_1807bc087;
      case 0x81:
        uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x368);
        break;
      case 0x87:
        uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x36c);
        break;
      case 0x8a:
        uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x370);
        break;
      case 0x8b:
        uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x374);
      }
      fVar15 = (float)(int)uVar18 * 0.0078125;
LAB_1807bc087:
      if (puVar8[3] != 1) {
        iVar14 = iVar14 + (int)((float)*(int *)(puVar8 + 4) * fVar15);
      }
      bVar3 = true;
LAB_1807bc0a4:
      puVar8 = puVar8 + 6;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    if (bVar3) {
      *(float *)(param_1 + 0x2fc) = (float)iVar14 * 1.5258789e-05;
    }
  }
  fVar15 = -96.0;
  bVar3 = false;
  if (0 < (int)uVar10) {
    puVar8 = *(int16_t **)(param_1 + 0x2f0);
    uVar13 = uVar12;
    iVar14 = iVar9;
    do {
      fVar19 = 1.0;
      if (puVar8[2] != 4) goto LAB_1807bc1c4;
      switch(*puVar8) {
      case 0:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 0x81:
      case 0x87:
      case 0x8a:
      case 0x8b:
        goto LAB_1807bc1c4;
      }
      switch(puVar8[1]) {
      case 0:
      case 1:
        fVar19 = 1.0;
        goto LAB_1807bc1a7;
      case 2:
        uVar18 = (uint)*(byte *)(param_1 + 0x2e8);
        break;
      case 3:
        uVar18 = (uint)*(byte *)(param_1 + 0x2e0);
        break;
      default:
        goto LAB_1807bc1a7;
      case 0x81:
        uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x368);
        break;
      case 0x87:
        uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x36c);
        break;
      case 0x8a:
        uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x370);
        break;
      case 0x8b:
        uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x374);
      }
      fVar19 = (float)(int)uVar18 * 0.0078125;
LAB_1807bc1a7:
      if (puVar8[3] != 1) {
        iVar14 = iVar14 + (int)((float)*(int *)(puVar8 + 4) * fVar19);
      }
      bVar3 = true;
LAB_1807bc1c4:
      puVar8 = puVar8 + 6;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    if (bVar3) {
      fVar19 = -96.0;
      if (iVar14 != 0x8000000) {
        fVar19 = -96.0 - (float)iVar14 * -1.4648438e-06;
      }
      *(float *)(param_1 + 0x300) = fVar19;
    }
  }
  bVar3 = false;
  if (0 < (int)uVar10) {
    puVar8 = *(int16_t **)(param_1 + 0x2f0);
    uVar13 = uVar12;
    do {
      if (puVar8[2] == 0x104) {
        switch(*puVar8) {
        case 0:
          break;
        case 1:
        case 4:
        case 5:
          goto LAB_1807bc31f;
        case 2:
          break;
        case 3:
        }
        switch(puVar8[1]) {
        case 0:
        case 1:
          break;
        case 2:
          break;
        case 3:
          break;
        case 0x81:
          break;
        case 0x87:
          break;
        case 0x8a:
          break;
        case 0x8b:
        }
        bVar3 = true;
      }
LAB_1807bc31f:
      puVar8 = puVar8 + 6;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    if (bVar3) {
      fVar19 = (float)powf();
      *(float *)(param_1 + 0x260) = fVar19 * 440.0;
    }
  }
  bVar3 = false;
  fVar19 = 0.0;
  if (0 < (int)uVar10) {
    puVar8 = *(int16_t **)(param_1 + 0x2f0);
    uVar13 = uVar12;
    iVar14 = iVar9;
    do {
      fVar20 = 1.0;
      fVar16 = 1.0;
      if (puVar8[2] != 0x105) goto LAB_1807bc48b;
      switch(*puVar8) {
      case 0:
        fVar20 = 1.0;
        break;
      case 1:
      case 4:
      case 5:
        goto LAB_1807bc48b;
      case 2:
        bVar1 = *(byte *)(param_1 + 0x2e8);
        goto code_r0x0001807bc3d6;
      case 3:
        bVar1 = *(byte *)(param_1 + 0x2e0);
code_r0x0001807bc3d6:
        fVar20 = (float)bVar1 * 0.0078125;
      }
      switch(puVar8[1]) {
      case 0:
      case 1:
        fVar16 = 1.0;
        goto LAB_1807bc46a;
      case 2:
        uVar18 = (uint)*(byte *)(param_1 + 0x2e8);
        break;
      case 3:
        uVar18 = (uint)*(byte *)(param_1 + 0x2e0);
        break;
      default:
        goto LAB_1807bc46a;
      case 0x81:
        uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x368);
        break;
      case 0x87:
        uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x36c);
        break;
      case 0x8a:
        uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x370);
        break;
      case 0x8b:
        uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x374);
      }
      fVar16 = (float)(int)uVar18 * 0.0078125;
LAB_1807bc46a:
      if (puVar8[3] != 1) {
        iVar14 = iVar14 + (int)((float)*(int *)(puVar8 + 4) * fVar16 * fVar20);
      }
      bVar3 = true;
LAB_1807bc48b:
      puVar8 = puVar8 + 6;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    if (bVar3) {
      if (iVar14 == -0x80000000) {
        uVar17 = 0;
      }
      else {
        fVar16 = (float)iVar14 * 1.0850695e-07 + 85.333336;
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        if (128.0 <= fVar16) {
          fVar16 = 127.0;
        }
        uVar17 = *(int32_t *)((int64_t)(int)fVar16 * 4 + 0x180be5230);
      }
      *(int32_t *)(param_1 + 600) = uVar17;
    }
  }
  if (0 < (int)uVar10) {
    psVar7 = *(short **)(param_1 + 0x2f0);
    psVar4 = psVar7;
    iVar14 = iVar9;
    do {
      if ((*psVar4 == 0) && (psVar4[2] == 0x206)) {
        bVar3 = false;
        uVar13 = uVar12;
        iVar14 = iVar9;
        if (0 < (int)uVar10) goto LAB_1807bc540;
        break;
      }
      iVar14 = iVar14 + 1;
      psVar4 = psVar4 + 6;
    } while (iVar14 < (int)uVar10);
  }
  goto LAB_1807bc667;
LAB_1807bc6b4:
  do {
    fVar20 = 1.0;
    fVar16 = 1.0;
    if (psVar7[2] != 0x207) goto LAB_1807bc7af;
    switch(*psVar7) {
    case 0:
      fVar20 = 1.0;
      break;
    case 1:
    case 4:
    case 5:
      goto LAB_1807bc7af;
    case 2:
      bVar1 = *(byte *)(param_1 + 0x2e8);
      goto code_r0x0001807bc6fa;
    case 3:
      bVar1 = *(byte *)(param_1 + 0x2e0);
code_r0x0001807bc6fa:
      fVar20 = (float)bVar1 * 0.0078125;
    }
    switch(psVar7[1]) {
    case 0:
    case 1:
      fVar16 = 1.0;
      goto LAB_1807bc78e;
    case 2:
      uVar10 = (uint)*(byte *)(param_1 + 0x2e8);
      break;
    case 3:
      uVar10 = (uint)*(byte *)(param_1 + 0x2e0);
      break;
    default:
      goto LAB_1807bc78e;
    case 0x81:
      uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x368);
      break;
    case 0x87:
      uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x36c);
      break;
    case 0x8a:
      uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x370);
      break;
    case 0x8b:
      uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x374);
    }
    fVar16 = (float)(int)uVar10 * 0.0078125;
LAB_1807bc78e:
    if (psVar7[3] != 1) {
      iVar11 = iVar11 + (int)((float)*(int *)(psVar7 + 4) * fVar16 * fVar20);
    }
    bVar3 = true;
LAB_1807bc7af:
    psVar7 = psVar7 + 6;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (bVar3) {
    uVar17 = func_0x0001807b9550(param_1,iVar11);
    *(int32_t *)(param_1 + 0x270) = uVar17;
    uVar12 = (uint64_t)*(uint *)(param_1 + 0x2ec);
  }
  goto LAB_1807bc7df;
LAB_1807bc830:
  do {
    fVar20 = 1.0;
    fVar16 = 1.0;
    if (psVar7[2] != 0x209) goto LAB_1807bc92b;
    switch(*psVar7) {
    case 0:
      fVar20 = 1.0;
      break;
    case 1:
    case 4:
    case 5:
      goto LAB_1807bc92b;
    case 2:
      bVar1 = *(byte *)(param_1 + 0x2e8);
      goto code_r0x0001807bc876;
    case 3:
      bVar1 = *(byte *)(param_1 + 0x2e0);
code_r0x0001807bc876:
      fVar20 = (float)bVar1 * 0.0078125;
    }
    switch(psVar7[1]) {
    case 0:
    case 1:
      fVar16 = 1.0;
      goto LAB_1807bc90a;
    case 2:
      uVar10 = (uint)*(byte *)(param_1 + 0x2e8);
      break;
    case 3:
      uVar10 = (uint)*(byte *)(param_1 + 0x2e0);
      break;
    default:
      goto LAB_1807bc90a;
    case 0x81:
      uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x368);
      break;
    case 0x87:
      uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x36c);
      break;
    case 0x8a:
      uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x370);
      break;
    case 0x8b:
      uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x374);
    }
    fVar16 = (float)(int)uVar10 * 0.0078125;
LAB_1807bc90a:
    if (psVar7[3] != 1) {
      iVar11 = iVar11 + (int)((float)*(int *)(psVar7 + 4) * fVar16 * fVar20);
    }
    bVar3 = true;
LAB_1807bc92b:
    psVar7 = psVar7 + 6;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (bVar3) {
    uVar17 = func_0x0001807b9550(param_1,iVar11);
    *(int32_t *)(param_1 + 0x27c) = uVar17;
    uVar12 = (uint64_t)*(uint *)(param_1 + 0x2ec);
  }
  goto LAB_1807bc95b;
LAB_1807bcc20:
  do {
    fVar15 = 1.0;
    if (psVar7[2] != 0x30a) goto LAB_1807bccf7;
    switch(*psVar7) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 0x81:
    case 0x87:
    case 0x8a:
    case 0x8b:
      goto LAB_1807bccf7;
    }
    switch(psVar7[1]) {
    case 0:
    case 1:
      fVar15 = 1.0;
      goto LAB_1807bccd9;
    case 2:
      uVar10 = (uint)*(byte *)(param_1 + 0x2e8);
      break;
    case 3:
      uVar10 = (uint)*(byte *)(param_1 + 0x2e0);
      break;
    default:
      goto LAB_1807bccd9;
    case 0x81:
      uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x368);
      break;
    case 0x87:
      uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x36c);
      break;
    case 0x8a:
      uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x370);
      break;
    case 0x8b:
      uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x374);
    }
    fVar15 = (float)(int)uVar10 * 0.0078125;
LAB_1807bccd9:
    if (psVar7[3] != 1) {
      iVar14 = iVar14 + (int)((float)*(int *)(psVar7 + 4) * fVar15);
    }
    bVar3 = true;
LAB_1807bccf7:
    psVar7 = psVar7 + 6;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (bVar3) {
    uVar17 = func_0x0001807b9550(param_1,iVar14);
    *(int32_t *)(param_1 + 0x29c) = uVar17;
    uVar12 = (uint64_t)*(uint *)(param_1 + 0x2ec);
  }
  goto LAB_1807bcd22;
LAB_1807bcd70:
  do {
    fVar15 = 1.0;
    if (psVar7[2] != 0x30b) goto LAB_1807bce44;
    switch(*psVar7) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 0x81:
    case 0x87:
    case 0x8a:
    case 0x8b:
      goto LAB_1807bce44;
    }
    switch(psVar7[1]) {
    case 0:
    case 1:
      fVar15 = 1.0;
      goto LAB_1807bce27;
    case 2:
      uVar10 = (uint)*(byte *)(param_1 + 0x2e8);
      break;
    case 3:
      uVar10 = (uint)*(byte *)(param_1 + 0x2e0);
      break;
    default:
      goto LAB_1807bce27;
    case 0x81:
      uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x368);
      break;
    case 0x87:
      uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x36c);
      break;
    case 0x8a:
      uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x370);
      break;
    case 0x8b:
      uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x374);
    }
    fVar15 = (float)(int)uVar10 * 0.0078125;
LAB_1807bce27:
    if (psVar7[3] != 1) {
      iVar11 = iVar11 + (int)((float)*(int *)(psVar7 + 4) * fVar15);
    }
    bVar3 = true;
LAB_1807bce44:
    psVar7 = psVar7 + 6;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (bVar3) {
    uVar17 = func_0x0001807b9550(param_1,iVar11);
    *(int32_t *)(param_1 + 0x2a8) = uVar17;
    uVar12 = (uint64_t)*(uint *)(param_1 + 0x2ec);
  }
  goto LAB_1807bce74;
LAB_1807bcec0:
  do {
    fVar15 = 1.0;
    if (psVar7[2] != 0x30d) goto LAB_1807bcf94;
    switch(*psVar7) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 0x81:
    case 0x87:
    case 0x8a:
    case 0x8b:
      goto LAB_1807bcf94;
    }
    switch(psVar7[1]) {
    case 0:
    case 1:
      fVar15 = 1.0;
      goto LAB_1807bcf77;
    case 2:
      uVar18 = (uint)*(byte *)(param_1 + 0x2e8);
      break;
    case 3:
      uVar18 = (uint)*(byte *)(param_1 + 0x2e0);
      break;
    default:
      goto LAB_1807bcf77;
    case 0x81:
      uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x368);
      break;
    case 0x87:
      uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x36c);
      break;
    case 0x8a:
      uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x370);
      break;
    case 0x8b:
      uVar18 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x374);
    }
    fVar15 = (float)(int)uVar18 * 0.0078125;
LAB_1807bcf77:
    if (psVar7[3] != 1) {
      iVar14 = iVar14 + (int)((float)*(int *)(psVar7 + 4) * fVar15);
    }
    bVar3 = true;
LAB_1807bcf94:
    psVar7 = psVar7 + 6;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (bVar3) {
    uVar17 = func_0x0001807b9550(param_1,iVar14);
    *(int32_t *)(param_1 + 0x2b4) = uVar17;
    uVar10 = *(uint *)(param_1 + 0x2ec);
    uVar12 = (uint64_t)uVar10;
  }
  goto LAB_1807bcfc4;
LAB_1807bc540:
  do {
    fVar20 = 1.0;
    fVar16 = 1.0;
    if (psVar7[2] != 0x206) goto LAB_1807bc63b;
    switch(*psVar7) {
    case 0:
      fVar20 = 1.0;
      break;
    case 1:
    case 4:
    case 5:
      goto LAB_1807bc63b;
    case 2:
      bVar1 = *(byte *)(param_1 + 0x2e8);
      goto code_r0x0001807bc586;
    case 3:
      bVar1 = *(byte *)(param_1 + 0x2e0);
code_r0x0001807bc586:
      fVar20 = (float)bVar1 * 0.0078125;
    }
    switch(psVar7[1]) {
    case 0:
    case 1:
      fVar16 = 1.0;
      goto LAB_1807bc61a;
    case 2:
      uVar10 = (uint)*(byte *)(param_1 + 0x2e8);
      break;
    case 3:
      uVar10 = (uint)*(byte *)(param_1 + 0x2e0);
      break;
    default:
      goto LAB_1807bc61a;
    case 0x81:
      uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x368);
      break;
    case 0x87:
      uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x36c);
      break;
    case 0x8a:
      uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x370);
      break;
    case 0x8b:
      uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x374);
    }
    fVar16 = (float)(int)uVar10 * 0.0078125;
LAB_1807bc61a:
    if (psVar7[3] != 1) {
      iVar14 = iVar14 + (int)((float)*(int *)(psVar7 + 4) * fVar16 * fVar20);
    }
    bVar3 = true;
LAB_1807bc63b:
    psVar7 = psVar7 + 6;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (bVar3) {
    uVar17 = func_0x0001807b9550(param_1,iVar14);
    *(int32_t *)(param_1 + 0x264) = uVar17;
    uVar12 = (uint64_t)*(uint *)(param_1 + 0x2ec);
  }
LAB_1807bc667:
  iVar14 = (int)uVar12;
  if (0 < iVar14) {
    psVar7 = *(short **)(param_1 + 0x2f0);
    psVar4 = psVar7;
    iVar11 = iVar9;
    do {
      if ((*psVar4 == 0) && (psVar4[2] == 0x207)) {
        bVar3 = false;
        uVar13 = uVar12;
        iVar11 = iVar9;
        if (0 < iVar14) goto LAB_1807bc6b4;
        break;
      }
      iVar11 = iVar11 + 1;
      psVar4 = psVar4 + 6;
    } while (iVar11 < iVar14);
  }
LAB_1807bc7df:
  iVar14 = (int)uVar12;
  if (0 < iVar14) {
    psVar7 = *(short **)(param_1 + 0x2f0);
    psVar4 = psVar7;
    iVar11 = iVar9;
    do {
      if ((*psVar4 == 0) && (psVar4[2] == 0x209)) {
        bVar3 = false;
        uVar13 = uVar12;
        iVar11 = iVar9;
        if (0 < iVar14) goto LAB_1807bc830;
        break;
      }
      iVar11 = iVar11 + 1;
      psVar4 = psVar4 + 6;
    } while (iVar11 < iVar14);
  }
LAB_1807bc95b:
  bVar3 = false;
  iVar14 = (int)uVar12;
  if (0 < iVar14) {
    puVar8 = *(int16_t **)(param_1 + 0x2f0);
    uVar13 = uVar12;
    iVar11 = iVar9;
    do {
      fVar20 = 1.0;
      fVar16 = 1.0;
      if (puVar8[2] != 0x20a) goto LAB_1807bca7b;
      switch(*puVar8) {
      case 0:
        fVar20 = 1.0;
        break;
      case 1:
      case 4:
      case 5:
        goto LAB_1807bca7b;
      case 2:
        bVar1 = *(byte *)(param_1 + 0x2e8);
        goto code_r0x0001807bc9c6;
      case 3:
        bVar1 = *(byte *)(param_1 + 0x2e0);
code_r0x0001807bc9c6:
        fVar20 = (float)bVar1 * 0.0078125;
      }
      switch(puVar8[1]) {
      case 0:
      case 1:
        fVar16 = 1.0;
        goto LAB_1807bca5a;
      case 2:
        uVar10 = (uint)*(byte *)(param_1 + 0x2e8);
        break;
      case 3:
        uVar10 = (uint)*(byte *)(param_1 + 0x2e0);
        break;
      default:
        goto LAB_1807bca5a;
      case 0x81:
        uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x368);
        break;
      case 0x87:
        uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x36c);
        break;
      case 0x8a:
        uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x370);
        break;
      case 0x8b:
        uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x374);
      }
      fVar16 = (float)(int)uVar10 * 0.0078125;
LAB_1807bca5a:
      if (puVar8[3] != 1) {
        iVar11 = iVar11 + (int)((float)*(int *)(puVar8 + 4) * fVar16 * fVar20);
      }
      bVar3 = true;
LAB_1807bca7b:
      puVar8 = puVar8 + 6;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    if (bVar3) {
      if (iVar11 != 0x8000000) {
        fVar15 = -96.0 - (float)iVar11 * -1.4648438e-06;
      }
      *(float *)(param_1 + 0x290) = fVar15;
    }
  }
  bVar3 = false;
  if (0 < iVar14) {
    psVar7 = *(short **)(param_1 + 0x2f0);
    psVar4 = psVar7;
    uVar13 = uVar12;
    iVar11 = iVar9;
    do {
      fVar15 = 1.0;
      if (psVar4[2] != 3) goto LAB_1807bcbb6;
      switch(*psVar4) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 6:
      case 0x81:
      case 0x87:
      case 0x8a:
      case 0x8b:
        goto LAB_1807bcbb6;
      }
      switch(psVar4[1]) {
      case 0:
      case 1:
        fVar15 = 1.0;
        goto LAB_1807bcb99;
      case 2:
        uVar10 = (uint)*(byte *)(param_1 + 0x2e8);
        break;
      case 3:
        uVar10 = (uint)*(byte *)(param_1 + 0x2e0);
        break;
      default:
        goto LAB_1807bcb99;
      case 0x81:
        uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x368);
        break;
      case 0x87:
        uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x36c);
        break;
      case 0x8a:
        uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x370);
        break;
      case 0x8b:
        uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x374);
      }
      fVar15 = (float)(int)uVar10 * 0.0078125;
LAB_1807bcb99:
      if (psVar4[3] != 1) {
        iVar11 = iVar11 + (int)((float)*(int *)(psVar4 + 4) * fVar15);
      }
      bVar3 = true;
LAB_1807bcbb6:
      psVar4 = psVar4 + 6;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    if (bVar3) {
      *(int8_t *)(param_1 + 0x2d0) = 1;
      *(float *)(param_1 + 0x2cc) = (float)iVar11 * 1.5258789e-05;
      psVar4 = psVar7;
      iVar11 = iVar9;
      if (0 < iVar14) {
        do {
          if ((*psVar4 == 0) && (psVar4[2] == 0x30a)) {
            bVar3 = false;
            uVar13 = uVar12;
            iVar14 = iVar9;
            goto LAB_1807bcc20;
          }
          iVar11 = iVar11 + 1;
          psVar4 = psVar4 + 6;
        } while (iVar11 < iVar14);
      }
LAB_1807bcd22:
      iVar14 = (int)uVar12;
      if (0 < iVar14) {
        psVar7 = *(short **)(param_1 + 0x2f0);
        psVar4 = psVar7;
        iVar11 = iVar9;
        do {
          if ((*psVar4 == 0) && (psVar4[2] == 0x30b)) {
            bVar3 = false;
            uVar13 = uVar12;
            iVar11 = iVar9;
            if (0 < iVar14) goto LAB_1807bcd70;
            break;
          }
          iVar11 = iVar11 + 1;
          psVar4 = psVar4 + 6;
        } while (iVar11 < iVar14);
      }
LAB_1807bce74:
      uVar10 = (uint)uVar12;
      if (0 < (int)uVar10) {
        psVar7 = *(short **)(param_1 + 0x2f0);
        psVar4 = psVar7;
        iVar14 = iVar9;
        do {
          if ((*psVar4 == 0) && (psVar4[2] == 0x30d)) {
            bVar3 = false;
            uVar13 = uVar12;
            iVar14 = iVar9;
            if (0 < (int)uVar10) goto LAB_1807bcec0;
            break;
          }
          iVar14 = iVar14 + 1;
          psVar4 = psVar4 + 6;
        } while (iVar14 < (int)uVar10);
      }
LAB_1807bcfc4:
      bVar3 = false;
      if (0 < (int)uVar12) {
        puVar8 = *(int16_t **)(param_1 + 0x2f0);
        uVar12 = (uint64_t)uVar10;
        do {
          fVar15 = 1.0;
          if (puVar8[2] != 0x30e) goto LAB_1807bd0b3;
          switch(*puVar8) {
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 0x81:
          case 0x87:
          case 0x8a:
          case 0x8b:
            goto LAB_1807bd0b3;
          }
          switch(puVar8[1]) {
          case 0:
          case 1:
            fVar15 = 1.0;
            goto LAB_1807bd097;
          case 2:
            uVar10 = (uint)*(byte *)(param_1 + 0x2e8);
            break;
          case 3:
            uVar10 = (uint)*(byte *)(param_1 + 0x2e0);
            break;
          default:
            goto LAB_1807bd097;
          case 0x81:
            uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x368);
            break;
          case 0x87:
            uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x36c);
            break;
          case 0x8a:
            uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x370);
            break;
          case 0x8b:
            uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x374);
          }
          fVar15 = (float)(int)uVar10 * 0.0078125;
LAB_1807bd097:
          if (puVar8[3] != 1) {
            iVar9 = iVar9 + (int)((float)*(int *)(puVar8 + 4) * fVar15);
          }
          bVar3 = true;
LAB_1807bd0b3:
          puVar8 = puVar8 + 6;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        if (bVar3) {
          if (iVar9 != 0x8000000) {
            fVar19 = (float)iVar9 * 1.525879e-08;
          }
          *(float *)(param_1 + 0x2c8) = fVar19;
        }
      }
    }
  }
  if (*(float *)(param_1 + 0x27c) <= 50.0 && *(float *)(param_1 + 0x27c) != 50.0) {
    *(int32_t *)(param_1 + 0x27c) = 0x42480000;
  }
  return 0;
}



uint64_t FUN_1807bbda6(int64_t param_1,uint64_t param_2,char param_3)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  int64_t in_RAX;
  short *psVar4;
  ushort *puVar5;
  short *psVar6;
  int16_t *puVar7;
  int64_t unaff_RBX;
  int iVar8;
  uint64_t unaff_RBP;
  uint uVar9;
  uint64_t unaff_RSI;
  int iVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int iVar13;
  uint64_t unaff_R14;
  float fVar14;
  float fVar15;
  int32_t uVar16;
  int8_t auVar17 [16];
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint uVar18;
  float fVar19;
  float fVar20;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBP;
  iVar8 = 0;
  *(uint64_t *)(param_1 + 600) = 0;
  *(uint64_t *)(param_1 + 0x260) = 0;
  *(uint64_t *)(param_1 + 0x288) = 0;
  *(uint64_t *)(param_1 + 0x290) = 0;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  *(uint64_t *)(in_RAX + 0x20) = unaff_R14;
  *(int32_t *)(param_1 + 0x268) = 0xc2c00000;
  *(uint64_t *)(param_1 + 0x26c) = 0;
  *(int32_t *)(param_1 + 0x274) = 0;
  *(int32_t *)(param_1 + 0x278) = 0xc2c00000;
  *(uint64_t *)(param_1 + 0x27c) = 0;
  *(int32_t *)(param_1 + 0x284) = 0xc2c00000;
  *(uint64_t *)(param_1 + 0x2c0) = 0;
  *(uint64_t *)(param_1 + 0x2c8) = 0x3f800000;
  *(int8_t *)(param_1 + 0x2d0) = 0;
  *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x28) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x24) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x20) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x1c) = unaff_XMM7_Dd;
  *(uint64_t *)(param_1 + 0x29c) = 0;
  *(uint64_t *)(param_1 + 0x2a4) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x2ac) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x2b4) = 0;
  *(int32_t *)(param_1 + 700) = 0;
  uVar9 = *(uint *)(param_1 + 0x2ec);
  uVar11 = (uint64_t)uVar9;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM11_Dd;
  if (0 < (int)uVar9) {
    puVar5 = *(ushort **)(param_1 + 0x2f0);
    uVar12 = (uint64_t)uVar9;
    iVar13 = iVar8;
    do {
      fVar14 = 1.0;
      if (puVar5[2] != 1) goto LAB_1807bbf64;
      uVar2 = *puVar5;
      if (uVar2 < 0x8c) {
        param_1 = (uint64_t)
                  *(uint *)(&unknown_var_5432_ptr + (uint64_t)(byte)(&unknown_var_5444_ptr)[uVar2] * 4) +
                  0x180000000;
        switch(uVar2) {
        case 0:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 0x81:
        case 0x87:
        case 0x8a:
        case 0x8b:
          goto LAB_1807bbf64;
        }
      }
      uVar2 = puVar5[1];
      if (0x8b < uVar2) goto LAB_1807bbf47;
      param_1 = (uint64_t)*(uint *)(&unknown_var_5584_ptr + (uint64_t)(byte)(&unknown_var_5616_ptr)[uVar2] * 4)
                + 0x180000000;
      switch(uVar2) {
      case 0:
      case 1:
        fVar14 = 1.0;
        goto LAB_1807bbf47;
      case 2:
        uVar18 = (uint)*(byte *)(unaff_RBX + 0x2e8);
        break;
      case 3:
        uVar18 = (uint)*(byte *)(unaff_RBX + 0x2e0);
        break;
      default:
        goto LAB_1807bbf47;
      case 0x81:
        uVar18 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x368);
        break;
      case 0x87:
        uVar18 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x36c);
        break;
      case 0x8a:
        uVar18 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x370);
        break;
      case 0x8b:
        uVar18 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x374);
      }
      fVar14 = (float)(int)uVar18 * 0.0078125;
LAB_1807bbf47:
      if (puVar5[3] != 1) {
        iVar13 = iVar13 + (int)((float)*(int *)(puVar5 + 4) * fVar14);
      }
      param_3 = '\x01';
LAB_1807bbf64:
      puVar5 = puVar5 + 6;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (param_3 != '\0') {
      fVar14 = (float)powf(param_1,(float)iVar13 * -1.5258789e-06 * 0.05);
      *(float *)(unaff_RBX + 0x2f8) = 1.0 - fVar14;
    }
  }
  bVar3 = false;
  if (0 < (int)uVar9) {
    puVar7 = *(int16_t **)(unaff_RBX + 0x2f0);
    uVar12 = uVar11;
    iVar13 = iVar8;
    do {
      fVar14 = 1.0;
      if (puVar7[2] != 3) goto LAB_1807bc0a4;
      switch(*puVar7) {
      case 0:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 0x81:
      case 0x87:
      case 0x8a:
      case 0x8b:
        goto LAB_1807bc0a4;
      }
      switch(puVar7[1]) {
      case 0:
      case 1:
        fVar14 = 1.0;
        goto LAB_1807bc087;
      case 2:
        uVar18 = (uint)*(byte *)(unaff_RBX + 0x2e8);
        break;
      case 3:
        uVar18 = (uint)*(byte *)(unaff_RBX + 0x2e0);
        break;
      default:
        goto LAB_1807bc087;
      case 0x81:
        uVar18 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x368);
        break;
      case 0x87:
        uVar18 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x36c);
        break;
      case 0x8a:
        uVar18 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x370);
        break;
      case 0x8b:
        uVar18 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x374);
      }
      fVar14 = (float)(int)uVar18 * 0.0078125;
LAB_1807bc087:
      if (puVar7[3] != 1) {
        iVar13 = iVar13 + (int)((float)*(int *)(puVar7 + 4) * fVar14);
      }
      bVar3 = true;
LAB_1807bc0a4:
      puVar7 = puVar7 + 6;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (bVar3) {
      *(float *)(unaff_RBX + 0x2fc) = (float)iVar13 * 1.5258789e-05;
    }
  }
  fVar14 = -96.0;
  bVar3 = false;
  if (0 < (int)uVar9) {
    puVar7 = *(int16_t **)(unaff_RBX + 0x2f0);
    uVar12 = uVar11;
    iVar13 = iVar8;
    do {
      fVar19 = 1.0;
      if (puVar7[2] != 4) goto LAB_1807bc1c4;
      switch(*puVar7) {
      case 0:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 0x81:
      case 0x87:
      case 0x8a:
      case 0x8b:
        goto LAB_1807bc1c4;
      }
      switch(puVar7[1]) {
      case 0:
      case 1:
        fVar19 = 1.0;
        goto LAB_1807bc1a7;
      case 2:
        uVar18 = (uint)*(byte *)(unaff_RBX + 0x2e8);
        break;
      case 3:
        uVar18 = (uint)*(byte *)(unaff_RBX + 0x2e0);
        break;
      default:
        goto LAB_1807bc1a7;
      case 0x81:
        uVar18 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x368);
        break;
      case 0x87:
        uVar18 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x36c);
        break;
      case 0x8a:
        uVar18 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x370);
        break;
      case 0x8b:
        uVar18 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x374);
      }
      fVar19 = (float)(int)uVar18 * 0.0078125;
LAB_1807bc1a7:
      if (puVar7[3] != 1) {
        iVar13 = iVar13 + (int)((float)*(int *)(puVar7 + 4) * fVar19);
      }
      bVar3 = true;
LAB_1807bc1c4:
      puVar7 = puVar7 + 6;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (bVar3) {
      fVar19 = -96.0;
      if (iVar13 != 0x8000000) {
        fVar19 = -96.0 - (float)iVar13 * -1.4648438e-06;
      }
      *(float *)(unaff_RBX + 0x300) = fVar19;
    }
  }
  bVar3 = false;
  if (0 < (int)uVar9) {
    puVar7 = *(int16_t **)(unaff_RBX + 0x2f0);
    uVar12 = uVar11;
    do {
      if (puVar7[2] == 0x104) {
        switch(*puVar7) {
        case 0:
          break;
        case 1:
        case 4:
        case 5:
          goto LAB_1807bc31f;
        case 2:
          break;
        case 3:
        }
        switch(puVar7[1]) {
        case 0:
        case 1:
          break;
        case 2:
          break;
        case 3:
          break;
        case 0x81:
          break;
        case 0x87:
          break;
        case 0x8a:
          break;
        case 0x8b:
        }
        bVar3 = true;
      }
LAB_1807bc31f:
      puVar7 = puVar7 + 6;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (bVar3) {
      fVar19 = (float)powf();
      *(float *)(unaff_RBX + 0x260) = fVar19 * 440.0;
    }
  }
  bVar3 = false;
  fVar19 = 0.0;
  if (0 < (int)uVar9) {
    puVar7 = *(int16_t **)(unaff_RBX + 0x2f0);
    uVar12 = uVar11;
    iVar13 = iVar8;
    do {
      fVar20 = 1.0;
      fVar15 = 1.0;
      if (puVar7[2] != 0x105) goto LAB_1807bc48b;
      switch(*puVar7) {
      case 0:
        fVar20 = 1.0;
        break;
      case 1:
      case 4:
      case 5:
        goto LAB_1807bc48b;
      case 2:
        bVar1 = *(byte *)(unaff_RBX + 0x2e8);
        goto code_r0x0001807bc3d6;
      case 3:
        bVar1 = *(byte *)(unaff_RBX + 0x2e0);
code_r0x0001807bc3d6:
        fVar20 = (float)bVar1 * 0.0078125;
      }
      switch(puVar7[1]) {
      case 0:
      case 1:
        fVar15 = 1.0;
        goto LAB_1807bc46a;
      case 2:
        uVar18 = (uint)*(byte *)(unaff_RBX + 0x2e8);
        break;
      case 3:
        uVar18 = (uint)*(byte *)(unaff_RBX + 0x2e0);
        break;
      default:
        goto LAB_1807bc46a;
      case 0x81:
        uVar18 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x368);
        break;
      case 0x87:
        uVar18 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x36c);
        break;
      case 0x8a:
        uVar18 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x370);
        break;
      case 0x8b:
        uVar18 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x374);
      }
      fVar15 = (float)(int)uVar18 * 0.0078125;
LAB_1807bc46a:
      if (puVar7[3] != 1) {
        iVar13 = iVar13 + (int)((float)*(int *)(puVar7 + 4) * fVar15 * fVar20);
      }
      bVar3 = true;
LAB_1807bc48b:
      puVar7 = puVar7 + 6;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (bVar3) {
      if (iVar13 == -0x80000000) {
        uVar16 = 0;
      }
      else {
        fVar15 = (float)iVar13 * 1.0850695e-07 + 85.333336;
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        if (128.0 <= fVar15) {
          fVar15 = 127.0;
        }
        uVar16 = *(int32_t *)((int64_t)(int)fVar15 * 4 + 0x180be5230);
      }
      *(int32_t *)(unaff_RBX + 600) = uVar16;
    }
  }
  if (0 < (int)uVar9) {
    psVar6 = *(short **)(unaff_RBX + 0x2f0);
    psVar4 = psVar6;
    iVar13 = iVar8;
    do {
      if ((*psVar4 == 0) && (psVar4[2] == 0x206)) {
        bVar3 = false;
        uVar12 = uVar11;
        if (0 < (int)uVar9) goto LAB_1807bc540;
        break;
      }
      iVar13 = iVar13 + 1;
      psVar4 = psVar4 + 6;
    } while (iVar13 < (int)uVar9);
  }
  goto LAB_1807bc667;
LAB_1807bc6b4:
  do {
    if (psVar6[2] == 0x207) {
      switch(*psVar6) {
      case 0:
        break;
      case 1:
      case 4:
      case 5:
        goto LAB_1807bc7af;
      case 2:
        break;
      case 3:
      }
      switch(psVar6[1]) {
      case 0:
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 0x81:
        break;
      case 0x87:
        break;
      case 0x8a:
        break;
      case 0x8b:
      }
      bVar3 = true;
    }
LAB_1807bc7af:
    psVar6 = psVar6 + 6;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (bVar3) {
    uVar16 = func_0x0001807b9550();
    *(int32_t *)(unaff_RBX + 0x270) = uVar16;
    uVar11 = (uint64_t)*(uint *)(unaff_RBX + 0x2ec);
  }
  goto LAB_1807bc7df;
LAB_1807bc830:
  do {
    if (psVar6[2] == 0x209) {
      switch(*psVar6) {
      case 0:
        break;
      case 1:
      case 4:
      case 5:
        goto LAB_1807bc92b;
      case 2:
        break;
      case 3:
      }
      switch(psVar6[1]) {
      case 0:
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 0x81:
        break;
      case 0x87:
        break;
      case 0x8a:
        break;
      case 0x8b:
      }
      bVar3 = true;
    }
LAB_1807bc92b:
    psVar6 = psVar6 + 6;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (bVar3) {
    uVar16 = func_0x0001807b9550();
    *(int32_t *)(unaff_RBX + 0x27c) = uVar16;
    uVar11 = (uint64_t)*(uint *)(unaff_RBX + 0x2ec);
  }
  goto LAB_1807bc95b;
LAB_1807bcc20:
  do {
    fVar14 = 1.0;
    if (psVar6[2] != 0x30a) goto LAB_1807bccf7;
    switch(*psVar6) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 0x81:
    case 0x87:
    case 0x8a:
    case 0x8b:
      goto LAB_1807bccf7;
    }
    switch(psVar6[1]) {
    case 0:
    case 1:
      fVar14 = 1.0;
      goto LAB_1807bccd9;
    case 2:
      uVar9 = (uint)*(byte *)(unaff_RBX + 0x2e8);
      break;
    case 3:
      uVar9 = (uint)*(byte *)(unaff_RBX + 0x2e0);
      break;
    default:
      goto LAB_1807bccd9;
    case 0x81:
      uVar9 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x368);
      break;
    case 0x87:
      uVar9 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x36c);
      break;
    case 0x8a:
      uVar9 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x370);
      break;
    case 0x8b:
      uVar9 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x374);
    }
    fVar14 = (float)(int)uVar9 * 0.0078125;
LAB_1807bccd9:
    if (psVar6[3] != 1) {
      auVar17 = ZEXT416((uint)((float)*(int *)(psVar6 + 4) * fVar14));
      iVar13 = iVar13 + (int)((float)*(int *)(psVar6 + 4) * fVar14);
    }
    bVar3 = true;
LAB_1807bccf7:
    psVar6 = psVar6 + 6;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (bVar3) {
    auVar17._0_8_ = func_0x0001807b9550(auVar17._0_8_,iVar13);
    auVar17._8_8_ = extraout_XMM0_Qb;
    *(int *)(unaff_RBX + 0x29c) = (int)auVar17._0_8_;
    uVar11 = (uint64_t)*(uint *)(unaff_RBX + 0x2ec);
  }
  goto LAB_1807bcd22;
LAB_1807bcd70:
  do {
    fVar14 = 1.0;
    if (psVar6[2] != 0x30b) goto LAB_1807bce44;
    switch(*psVar6) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 0x81:
    case 0x87:
    case 0x8a:
    case 0x8b:
      goto LAB_1807bce44;
    }
    switch(psVar6[1]) {
    case 0:
    case 1:
      fVar14 = 1.0;
      goto LAB_1807bce27;
    case 2:
      uVar9 = (uint)*(byte *)(unaff_RBX + 0x2e8);
      break;
    case 3:
      uVar9 = (uint)*(byte *)(unaff_RBX + 0x2e0);
      break;
    default:
      goto LAB_1807bce27;
    case 0x81:
      uVar9 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x368);
      break;
    case 0x87:
      uVar9 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x36c);
      break;
    case 0x8a:
      uVar9 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x370);
      break;
    case 0x8b:
      uVar9 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x374);
    }
    fVar14 = (float)(int)uVar9 * 0.0078125;
LAB_1807bce27:
    if (psVar6[3] != 1) {
      auVar17 = ZEXT416((uint)((float)*(int *)(psVar6 + 4) * fVar14));
      iVar10 = iVar10 + (int)((float)*(int *)(psVar6 + 4) * fVar14);
    }
    bVar3 = true;
LAB_1807bce44:
    psVar6 = psVar6 + 6;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (bVar3) {
    auVar17._0_8_ = func_0x0001807b9550(auVar17._0_8_,iVar10);
    auVar17._8_8_ = extraout_XMM0_Qb_00;
    *(int *)(unaff_RBX + 0x2a8) = (int)auVar17._0_8_;
    uVar11 = (uint64_t)*(uint *)(unaff_RBX + 0x2ec);
  }
  goto LAB_1807bce74;
LAB_1807bcec0:
  do {
    fVar14 = 1.0;
    if (psVar6[2] != 0x30d) goto LAB_1807bcf94;
    switch(*psVar6) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 0x81:
    case 0x87:
    case 0x8a:
    case 0x8b:
      goto LAB_1807bcf94;
    }
    switch(psVar6[1]) {
    case 0:
    case 1:
      fVar14 = 1.0;
      goto LAB_1807bcf77;
    case 2:
      uVar18 = (uint)*(byte *)(unaff_RBX + 0x2e8);
      break;
    case 3:
      uVar18 = (uint)*(byte *)(unaff_RBX + 0x2e0);
      break;
    default:
      goto LAB_1807bcf77;
    case 0x81:
      uVar18 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x368);
      break;
    case 0x87:
      uVar18 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x36c);
      break;
    case 0x8a:
      uVar18 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x370);
      break;
    case 0x8b:
      uVar18 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x374);
    }
    fVar14 = (float)(int)uVar18 * 0.0078125;
LAB_1807bcf77:
    if (psVar6[3] != 1) {
      auVar17 = ZEXT416((uint)((float)*(int *)(psVar6 + 4) * fVar14));
      iVar13 = iVar13 + (int)((float)*(int *)(psVar6 + 4) * fVar14);
    }
    bVar3 = true;
LAB_1807bcf94:
    psVar6 = psVar6 + 6;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (bVar3) {
    uVar16 = func_0x0001807b9550(auVar17._0_8_,iVar13);
    *(int32_t *)(unaff_RBX + 0x2b4) = uVar16;
    uVar9 = *(uint *)(unaff_RBX + 0x2ec);
    uVar11 = (uint64_t)uVar9;
  }
  goto LAB_1807bcfc4;
LAB_1807bc540:
  do {
    if (psVar6[2] == 0x206) {
      switch(*psVar6) {
      case 0:
        break;
      case 1:
      case 4:
      case 5:
        goto LAB_1807bc63b;
      case 2:
        break;
      case 3:
      }
      switch(psVar6[1]) {
      case 0:
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 0x81:
        break;
      case 0x87:
        break;
      case 0x8a:
        break;
      case 0x8b:
      }
      bVar3 = true;
    }
LAB_1807bc63b:
    psVar6 = psVar6 + 6;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (bVar3) {
    uVar16 = func_0x0001807b9550();
    *(int32_t *)(unaff_RBX + 0x264) = uVar16;
    uVar11 = (uint64_t)*(uint *)(unaff_RBX + 0x2ec);
  }
LAB_1807bc667:
  iVar13 = (int)uVar11;
  if (0 < iVar13) {
    psVar6 = *(short **)(unaff_RBX + 0x2f0);
    psVar4 = psVar6;
    iVar10 = iVar8;
    do {
      if ((*psVar4 == 0) && (psVar4[2] == 0x207)) {
        bVar3 = false;
        uVar12 = uVar11;
        if (0 < iVar13) goto LAB_1807bc6b4;
        break;
      }
      iVar10 = iVar10 + 1;
      psVar4 = psVar4 + 6;
    } while (iVar10 < iVar13);
  }
LAB_1807bc7df:
  iVar13 = (int)uVar11;
  if (0 < iVar13) {
    psVar6 = *(short **)(unaff_RBX + 0x2f0);
    psVar4 = psVar6;
    iVar10 = iVar8;
    do {
      if ((*psVar4 == 0) && (psVar4[2] == 0x209)) {
        bVar3 = false;
        uVar12 = uVar11;
        if (0 < iVar13) goto LAB_1807bc830;
        break;
      }
      iVar10 = iVar10 + 1;
      psVar4 = psVar4 + 6;
    } while (iVar10 < iVar13);
  }
LAB_1807bc95b:
  bVar3 = false;
  iVar13 = (int)uVar11;
  if (0 < iVar13) {
    puVar7 = *(int16_t **)(unaff_RBX + 0x2f0);
    uVar12 = uVar11;
    iVar10 = iVar8;
    do {
      fVar20 = 1.0;
      fVar15 = 1.0;
      if (puVar7[2] != 0x20a) goto LAB_1807bca7b;
      switch(*puVar7) {
      case 0:
        fVar20 = 1.0;
        break;
      case 1:
      case 4:
      case 5:
        goto LAB_1807bca7b;
      case 2:
        bVar1 = *(byte *)(unaff_RBX + 0x2e8);
        goto code_r0x0001807bc9c6;
      case 3:
        bVar1 = *(byte *)(unaff_RBX + 0x2e0);
code_r0x0001807bc9c6:
        fVar20 = (float)bVar1 * 0.0078125;
      }
      switch(puVar7[1]) {
      case 0:
      case 1:
        fVar15 = 1.0;
        goto LAB_1807bca5a;
      case 2:
        uVar9 = (uint)*(byte *)(unaff_RBX + 0x2e8);
        break;
      case 3:
        uVar9 = (uint)*(byte *)(unaff_RBX + 0x2e0);
        break;
      default:
        goto LAB_1807bca5a;
      case 0x81:
        uVar9 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x368);
        break;
      case 0x87:
        uVar9 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x36c);
        break;
      case 0x8a:
        uVar9 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x370);
        break;
      case 0x8b:
        uVar9 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x374);
      }
      fVar15 = (float)(int)uVar9 * 0.0078125;
LAB_1807bca5a:
      if (puVar7[3] != 1) {
        iVar10 = iVar10 + (int)((float)*(int *)(puVar7 + 4) * fVar15 * fVar20);
      }
      bVar3 = true;
LAB_1807bca7b:
      puVar7 = puVar7 + 6;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (bVar3) {
      if (iVar10 != 0x8000000) {
        fVar14 = -96.0 - (float)iVar10 * -1.4648438e-06;
      }
      *(float *)(unaff_RBX + 0x290) = fVar14;
    }
  }
  bVar3 = false;
  if (0 < iVar13) {
    psVar6 = *(short **)(unaff_RBX + 0x2f0);
    psVar4 = psVar6;
    uVar12 = uVar11;
    iVar10 = iVar8;
    do {
      fVar14 = 1.0;
      if (psVar4[2] != 3) goto LAB_1807bcbb6;
      switch(*psVar4) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 6:
      case 0x81:
      case 0x87:
      case 0x8a:
      case 0x8b:
        goto LAB_1807bcbb6;
      }
      switch(psVar4[1]) {
      case 0:
      case 1:
        fVar14 = 1.0;
        goto LAB_1807bcb99;
      case 2:
        uVar9 = (uint)*(byte *)(unaff_RBX + 0x2e8);
        break;
      case 3:
        uVar9 = (uint)*(byte *)(unaff_RBX + 0x2e0);
        break;
      default:
        goto LAB_1807bcb99;
      case 0x81:
        uVar9 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x368);
        break;
      case 0x87:
        uVar9 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x36c);
        break;
      case 0x8a:
        uVar9 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x370);
        break;
      case 0x8b:
        uVar9 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x374);
      }
      fVar14 = (float)(int)uVar9 * 0.0078125;
LAB_1807bcb99:
      if (psVar4[3] != 1) {
        iVar10 = iVar10 + (int)((float)*(int *)(psVar4 + 4) * fVar14);
      }
      bVar3 = true;
LAB_1807bcbb6:
      psVar4 = psVar4 + 6;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (bVar3) {
      *(int8_t *)(unaff_RBX + 0x2d0) = 1;
      auVar17 = ZEXT416((uint)((float)iVar10 * 1.5258789e-05));
      *(float *)(unaff_RBX + 0x2cc) = (float)iVar10 * 1.5258789e-05;
      psVar4 = psVar6;
      iVar10 = iVar8;
      if (0 < iVar13) {
        do {
          if ((*psVar4 == 0) && (psVar4[2] == 0x30a)) {
            bVar3 = false;
            uVar12 = uVar11;
            iVar13 = iVar8;
            goto LAB_1807bcc20;
          }
          iVar10 = iVar10 + 1;
          psVar4 = psVar4 + 6;
        } while (iVar10 < iVar13);
      }
LAB_1807bcd22:
      iVar13 = (int)uVar11;
      if (0 < iVar13) {
        psVar6 = *(short **)(unaff_RBX + 0x2f0);
        psVar4 = psVar6;
        iVar10 = iVar8;
        do {
          if ((*psVar4 == 0) && (psVar4[2] == 0x30b)) {
            bVar3 = false;
            uVar12 = uVar11;
            iVar10 = iVar8;
            if (0 < iVar13) goto LAB_1807bcd70;
            break;
          }
          iVar10 = iVar10 + 1;
          psVar4 = psVar4 + 6;
        } while (iVar10 < iVar13);
      }
LAB_1807bce74:
      uVar9 = (uint)uVar11;
      if (0 < (int)uVar9) {
        psVar6 = *(short **)(unaff_RBX + 0x2f0);
        psVar4 = psVar6;
        iVar13 = iVar8;
        do {
          if ((*psVar4 == 0) && (psVar4[2] == 0x30d)) {
            bVar3 = false;
            uVar12 = uVar11;
            iVar13 = iVar8;
            if (0 < (int)uVar9) goto LAB_1807bcec0;
            break;
          }
          iVar13 = iVar13 + 1;
          psVar4 = psVar4 + 6;
        } while (iVar13 < (int)uVar9);
      }
LAB_1807bcfc4:
      bVar3 = false;
      if (0 < (int)uVar11) {
        puVar7 = *(int16_t **)(unaff_RBX + 0x2f0);
        uVar11 = (uint64_t)uVar9;
        do {
          fVar14 = 1.0;
          if (puVar7[2] != 0x30e) goto LAB_1807bd0b3;
          switch(*puVar7) {
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 0x81:
          case 0x87:
          case 0x8a:
          case 0x8b:
            goto LAB_1807bd0b3;
          }
          switch(puVar7[1]) {
          case 0:
          case 1:
            fVar14 = 1.0;
            goto LAB_1807bd097;
          case 2:
            uVar9 = (uint)*(byte *)(unaff_RBX + 0x2e8);
            break;
          case 3:
            uVar9 = (uint)*(byte *)(unaff_RBX + 0x2e0);
            break;
          default:
            goto LAB_1807bd097;
          case 0x81:
            uVar9 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x368);
            break;
          case 0x87:
            uVar9 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x36c);
            break;
          case 0x8a:
            uVar9 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x370);
            break;
          case 0x8b:
            uVar9 = *(uint *)(*(int64_t *)(unaff_RBX + 0x318) + 0x374);
          }
          fVar14 = (float)(int)uVar9 * 0.0078125;
LAB_1807bd097:
          if (puVar7[3] != 1) {
            iVar8 = iVar8 + (int)((float)*(int *)(puVar7 + 4) * fVar14);
          }
          bVar3 = true;
LAB_1807bd0b3:
          puVar7 = puVar7 + 6;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        if (bVar3) {
          if (iVar8 != 0x8000000) {
            fVar19 = (float)iVar8 * 1.525879e-08;
          }
          *(float *)(unaff_RBX + 0x2c8) = fVar19;
        }
      }
    }
  }
  if (*(float *)(unaff_RBX + 0x27c) <= 50.0 && *(float *)(unaff_RBX + 0x27c) != 50.0) {
    *(int32_t *)(unaff_RBX + 0x27c) = 0x42480000;
  }
  return 0;
}



uint64_t FUN_1807bbe6d(int64_t param_1,uint64_t param_2,char param_3)

{
  bool bVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  ushort *puVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  ushort *puVar4;
  int64_t unaff_RBX;
  ushort uVar5;
  int unaff_EBP;
  uint uVar6;
  uint uVar7;
  uint64_t unaff_RSI;
  int iVar8;
  int iVar9;
  uint64_t uVar10;
  int in_R10D;
  uint64_t uVar11;
  int64_t unaff_R14;
  float fVar12;
  float fVar13;
  int32_t uVar14;
  int8_t auVar15 [16];
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  float fVar16;
  float unaff_XMM6_Da;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM11_Dd;
  iVar8 = (int)unaff_RSI;
  if (0 < iVar8) {
    puVar4 = *(ushort **)(param_1 + 0x2f0);
    uVar10 = unaff_RSI & 0xffffffff;
    do {
      if (puVar4[2] == 1) {
        if (*puVar4 < 0x8c) {
          UNRECOVERED_JUMPTABLE_00 =
               (code *)((uint64_t)
                        *(uint *)(unaff_R14 + 0x7bd138 +
                                 (uint64_t)*(byte *)(unaff_R14 + 0x7bd144 + (uint64_t)*puVar4) * 4
                                 ) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bbebc. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
          return uVar2;
        }
        if (puVar4[1] < 0x8c) {
          UNRECOVERED_JUMPTABLE_00 =
               (code *)((uint64_t)
                        *(uint *)(unaff_R14 + 0x7bd1d0 +
                                 (uint64_t)*(byte *)(unaff_R14 + 0x7bd1f0 + (uint64_t)puVar4[1]) *
                                 4) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bbedd. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
          return uVar2;
        }
        if (puVar4[3] != 1) {
          in_R10D = in_R10D + (int)((float)*(int *)(puVar4 + 4) * unaff_XMM6_Da);
        }
        param_3 = '\x01';
      }
      puVar4 = puVar4 + 6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (param_3 != '\0') {
      fVar12 = (float)powf(param_1,(float)in_R10D * -1.5258789e-06 * 0.05);
      *(float *)(unaff_RBX + 0x2f8) = unaff_XMM6_Da - fVar12;
    }
  }
  bVar1 = false;
  if (0 < iVar8) {
    puVar4 = *(ushort **)(unaff_RBX + 0x2f0);
    uVar10 = unaff_RSI;
    iVar9 = unaff_EBP;
    do {
      if (puVar4[2] == 3) {
        if (*puVar4 < 0x8c) {
          UNRECOVERED_JUMPTABLE_00 =
               (code *)((uint64_t)
                        *(uint *)(unaff_R14 + 0x7bd27c +
                                 (uint64_t)*(byte *)(unaff_R14 + 0x7bd288 + (uint64_t)*puVar4) * 4
                                 ) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bbffc. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
          return uVar2;
        }
        if (puVar4[1] < 0x8c) {
          UNRECOVERED_JUMPTABLE_00 =
               (code *)((uint64_t)
                        *(uint *)(unaff_R14 + 0x7bd314 +
                                 (uint64_t)*(byte *)(unaff_R14 + 0x7bd334 + (uint64_t)puVar4[1]) *
                                 4) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bc01d. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
          return uVar2;
        }
        if (puVar4[3] != 1) {
          iVar9 = iVar9 + (int)((float)*(int *)(puVar4 + 4) * unaff_XMM6_Da);
        }
        bVar1 = true;
      }
      puVar4 = puVar4 + 6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (bVar1) {
      *(float *)(unaff_RBX + 0x2fc) = (float)iVar9 * 1.5258789e-05;
    }
  }
  fVar12 = -96.0;
  bVar1 = false;
  if (0 < iVar8) {
    puVar4 = *(ushort **)(unaff_RBX + 0x2f0);
    uVar10 = unaff_RSI;
    iVar9 = unaff_EBP;
    do {
      if (puVar4[2] == 4) {
        if (*puVar4 < 0x8c) {
          UNRECOVERED_JUMPTABLE_00 =
               (code *)((uint64_t)
                        *(uint *)(unaff_R14 + 0x7bd3c0 +
                                 (uint64_t)*(byte *)(unaff_R14 + 0x7bd3cc + (uint64_t)*puVar4) * 4
                                 ) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bc11c. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
          return uVar2;
        }
        if (puVar4[1] < 0x8c) {
          UNRECOVERED_JUMPTABLE_00 =
               (code *)((uint64_t)
                        *(uint *)(unaff_R14 + 0x7bd458 +
                                 (uint64_t)*(byte *)(unaff_R14 + 0x7bd478 + (uint64_t)puVar4[1]) *
                                 4) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bc13d. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
          return uVar2;
        }
        if (puVar4[3] != 1) {
          iVar9 = iVar9 + (int)((float)*(int *)(puVar4 + 4) * unaff_XMM6_Da);
        }
        bVar1 = true;
      }
      puVar4 = puVar4 + 6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (bVar1) {
      fVar16 = -96.0;
      if (iVar9 != 0x8000000) {
        fVar16 = -96.0 - (float)iVar9 * -1.4648438e-06;
      }
      *(float *)(unaff_RBX + 0x300) = fVar16;
    }
  }
  bVar1 = false;
  if (0 < iVar8) {
    puVar4 = *(ushort **)(unaff_RBX + 0x2f0);
    uVar10 = unaff_RSI;
    do {
      if (puVar4[2] == 0x104) {
        if (*puVar4 < 0x8c) {
          UNRECOVERED_JUMPTABLE_00 =
               (code *)((uint64_t)
                        *(uint *)(unaff_R14 + 0x7bd504 +
                                 (uint64_t)*(byte *)(unaff_R14 + 0x7bd51c + (uint64_t)*puVar4) * 4
                                 ) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bc24f. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
          return uVar2;
        }
        if (puVar4[1] < 0x8c) {
          UNRECOVERED_JUMPTABLE_00 =
               (code *)((uint64_t)
                        *(uint *)(unaff_R14 + 0x7bd5a8 +
                                 (uint64_t)*(byte *)(unaff_R14 + 0x7bd5c8 + (uint64_t)puVar4[1]) *
                                 4) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bc294. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
          return uVar2;
        }
        bVar1 = true;
      }
      puVar4 = puVar4 + 6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (bVar1) {
      fVar16 = (float)powf();
      *(float *)(unaff_RBX + 0x260) = fVar16 * 440.0;
    }
  }
  bVar1 = false;
  fVar16 = 0.0;
  if (0 < iVar8) {
    puVar4 = *(ushort **)(unaff_RBX + 0x2f0);
    uVar10 = unaff_RSI;
    iVar9 = unaff_EBP;
    do {
      if (puVar4[2] == 0x105) {
        if (*puVar4 < 0x8c) {
          UNRECOVERED_JUMPTABLE_00 =
               (code *)((uint64_t)
                        *(uint *)(unaff_R14 + 0x7bd654 +
                                 (uint64_t)*(byte *)(unaff_R14 + 0x7bd66c + (uint64_t)*puVar4) * 4
                                 ) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bc3bf. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
          return uVar2;
        }
        if (puVar4[1] < 0x8c) {
          UNRECOVERED_JUMPTABLE_00 =
               (code *)((uint64_t)
                        *(uint *)(unaff_R14 + 0x7bd6f8 +
                                 (uint64_t)*(byte *)(unaff_R14 + 0x7bd718 + (uint64_t)puVar4[1]) *
                                 4) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bc400. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
          return uVar2;
        }
        if (puVar4[3] != 1) {
          iVar9 = iVar9 + (int)((float)*(int *)(puVar4 + 4) * unaff_XMM6_Da * unaff_XMM6_Da);
        }
        bVar1 = true;
      }
      puVar4 = puVar4 + 6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (bVar1) {
      if (iVar9 == -0x80000000) {
        uVar14 = 0;
      }
      else {
        fVar13 = (float)iVar9 * 1.0850695e-07 + 85.333336;
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        if (128.0 <= fVar13) {
          fVar13 = 127.0;
        }
        uVar14 = *(int32_t *)(unaff_R14 + 0xbe5230 + (int64_t)(int)fVar13 * 4);
      }
      *(int32_t *)(unaff_RBX + 600) = uVar14;
    }
  }
  uVar5 = (ushort)unaff_EBP;
  if (0 < iVar8) {
    puVar4 = *(ushort **)(unaff_RBX + 0x2f0);
    puVar3 = puVar4;
    iVar9 = unaff_EBP;
    do {
      if ((*puVar3 == uVar5) && (puVar3[2] == 0x206)) {
        bVar1 = false;
        uVar10 = unaff_RSI;
        if (0 < iVar8) {
          do {
            if (puVar4[2] == 0x206) {
              if (*puVar4 < 0x8c) {
                UNRECOVERED_JUMPTABLE_00 =
                     (code *)((uint64_t)
                              *(uint *)(unaff_R14 + 0x7bd7a4 +
                                       (uint64_t)
                                       *(byte *)(unaff_R14 + 0x7bd7bc + (uint64_t)*puVar4) * 4) +
                             unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bc56f. Too many branches
                    // WARNING: Treating indirect jump as call
                uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
                return uVar2;
              }
              if (puVar4[1] < 0x8c) {
                UNRECOVERED_JUMPTABLE_00 =
                     (code *)((uint64_t)
                              *(uint *)(unaff_R14 + 0x7bd848 +
                                       (uint64_t)
                                       *(byte *)(unaff_R14 + 0x7bd868 + (uint64_t)puVar4[1]) * 4) +
                             unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bc5b0. Too many branches
                    // WARNING: Treating indirect jump as call
                uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
                return uVar2;
              }
              bVar1 = true;
            }
            puVar4 = puVar4 + 6;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          if (bVar1) {
            uVar14 = func_0x0001807b9550();
            *(int32_t *)(unaff_RBX + 0x264) = uVar14;
            unaff_RSI = (uint64_t)*(uint *)(unaff_RBX + 0x2ec);
          }
        }
        break;
      }
      iVar9 = iVar9 + 1;
      puVar3 = puVar3 + 6;
    } while (iVar9 < iVar8);
  }
  iVar8 = (int)unaff_RSI;
  uVar10 = unaff_RSI & 0xffffffff;
  if (0 < iVar8) {
    puVar4 = *(ushort **)(unaff_RBX + 0x2f0);
    puVar3 = puVar4;
    iVar9 = unaff_EBP;
    do {
      uVar10 = unaff_RSI & 0xffffffff;
      if ((*puVar3 == uVar5) && (puVar3[2] == 0x207)) {
        bVar1 = false;
        if (0 < iVar8) {
          uVar10 = unaff_RSI & 0xffffffff;
          do {
            if (puVar4[2] == 0x207) {
              if (*puVar4 < 0x8c) {
                UNRECOVERED_JUMPTABLE_00 =
                     (code *)((uint64_t)
                              *(uint *)(unaff_R14 + 0x7bd8f4 +
                                       (uint64_t)
                                       *(byte *)(unaff_R14 + 0x7bd90c + (uint64_t)*puVar4) * 4) +
                             unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bc6e3. Too many branches
                    // WARNING: Treating indirect jump as call
                uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
                return uVar2;
              }
              if (puVar4[1] < 0x8c) {
                UNRECOVERED_JUMPTABLE_00 =
                     (code *)((uint64_t)
                              *(uint *)(unaff_R14 + 0x7bd998 +
                                       (uint64_t)
                                       *(byte *)(unaff_R14 + 0x7bd9b8 + (uint64_t)puVar4[1]) * 4) +
                             unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bc724. Too many branches
                    // WARNING: Treating indirect jump as call
                uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
                return uVar2;
              }
              bVar1 = true;
            }
            puVar4 = puVar4 + 6;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          uVar10 = unaff_RSI & 0xffffffff;
          if (bVar1) {
            uVar14 = func_0x0001807b9550();
            *(int32_t *)(unaff_RBX + 0x270) = uVar14;
            uVar10 = (uint64_t)*(uint *)(unaff_RBX + 0x2ec);
            unaff_RSI = uVar10;
          }
        }
        break;
      }
      iVar9 = iVar9 + 1;
      puVar3 = puVar3 + 6;
      uVar10 = unaff_RSI & 0xffffffff;
    } while (iVar9 < iVar8);
  }
  uVar7 = (uint)uVar10;
  if (0 < (int)(uint)uVar10) {
    puVar4 = *(ushort **)(unaff_RBX + 0x2f0);
    puVar3 = puVar4;
    iVar8 = unaff_EBP;
    do {
      uVar6 = (uint)unaff_RSI;
      if ((*puVar3 == uVar5) && (puVar3[2] == 0x209)) {
        bVar1 = false;
        uVar7 = (uint)uVar10;
        if (0 < (int)(uint)uVar10) {
          uVar10 = unaff_RSI & 0xffffffff;
          do {
            if (puVar4[2] == 0x209) {
              if (*puVar4 < 0x8c) {
                UNRECOVERED_JUMPTABLE_00 =
                     (code *)((uint64_t)
                              *(uint *)(unaff_R14 + 0x7bda44 +
                                       (uint64_t)
                                       *(byte *)(unaff_R14 + 0x7bda5c + (uint64_t)*puVar4) * 4) +
                             unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bc85f. Too many branches
                    // WARNING: Treating indirect jump as call
                uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
                return uVar2;
              }
              if (puVar4[1] < 0x8c) {
                UNRECOVERED_JUMPTABLE_00 =
                     (code *)((uint64_t)
                              *(uint *)(unaff_R14 + 0x7bdae8 +
                                       (uint64_t)
                                       *(byte *)(unaff_R14 + 0x7bdb08 + (uint64_t)puVar4[1]) * 4) +
                             unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bc8a0. Too many branches
                    // WARNING: Treating indirect jump as call
                uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
                return uVar2;
              }
              bVar1 = true;
            }
            puVar4 = puVar4 + 6;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          uVar7 = uVar6;
          if (bVar1) {
            uVar14 = func_0x0001807b9550();
            *(int32_t *)(unaff_RBX + 0x27c) = uVar14;
            unaff_RSI = (uint64_t)*(uint *)(unaff_RBX + 0x2ec);
            uVar7 = *(uint *)(unaff_RBX + 0x2ec);
          }
        }
        break;
      }
      iVar8 = iVar8 + 1;
      puVar3 = puVar3 + 6;
      uVar10 = unaff_RSI & 0xffffffff;
      uVar7 = uVar6;
    } while (iVar8 < (int)uVar6);
  }
  bVar1 = false;
  uVar6 = (uint)unaff_RSI;
  if (0 < (int)uVar7) {
    puVar4 = *(ushort **)(unaff_RBX + 0x2f0);
    uVar10 = unaff_RSI & 0xffffffff;
    iVar8 = unaff_EBP;
    do {
      if (puVar4[2] == 0x20a) {
        if (*puVar4 < 0x8c) {
          UNRECOVERED_JUMPTABLE_00 =
               (code *)((uint64_t)
                        *(uint *)(unaff_R14 + 0x7bdb94 +
                                 (uint64_t)*(byte *)(unaff_R14 + 0x7bdbac + (uint64_t)*puVar4) * 4
                                 ) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bc9af. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
          return uVar2;
        }
        if (puVar4[1] < 0x8c) {
          UNRECOVERED_JUMPTABLE_00 =
               (code *)((uint64_t)
                        *(uint *)(unaff_R14 + 0x7bdc38 +
                                 (uint64_t)*(byte *)(unaff_R14 + 0x7bdc58 + (uint64_t)puVar4[1]) *
                                 4) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bc9f0. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
          return uVar2;
        }
        if (puVar4[3] != 1) {
          iVar8 = iVar8 + (int)((float)*(int *)(puVar4 + 4) * unaff_XMM6_Da * unaff_XMM6_Da);
        }
        bVar1 = true;
      }
      puVar4 = puVar4 + 6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    uVar7 = uVar6;
    if (bVar1) {
      if (iVar8 != 0x8000000) {
        fVar12 = -96.0 - (float)iVar8 * -1.4648438e-06;
      }
      *(float *)(unaff_RBX + 0x290) = fVar12;
    }
  }
  bVar1 = false;
  if (0 < (int)uVar7) {
    puVar4 = *(ushort **)(unaff_RBX + 0x2f0);
    uVar10 = unaff_RSI & 0xffffffff;
    uVar11 = unaff_RSI & 0xffffffff;
    puVar3 = puVar4;
    iVar8 = unaff_EBP;
    do {
      if (puVar3[2] == 3) {
        if (*puVar3 < 0x8c) {
          UNRECOVERED_JUMPTABLE_00 =
               (code *)((uint64_t)
                        *(uint *)(unaff_R14 + 0x7bdce4 +
                                 (uint64_t)*(byte *)(unaff_R14 + 0x7bdcf0 + (uint64_t)*puVar3) * 4
                                 ) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcb0e. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
          return uVar2;
        }
        if (puVar3[1] < 0x8c) {
          UNRECOVERED_JUMPTABLE_00 =
               (code *)((uint64_t)
                        *(uint *)(unaff_R14 + 0x7bdd7c +
                                 (uint64_t)*(byte *)(unaff_R14 + 0x7bdd9c + (uint64_t)puVar3[1]) *
                                 4) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcb2f. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
          return uVar2;
        }
        if (puVar3[3] != 1) {
          iVar8 = iVar8 + (int)((float)*(int *)(puVar3 + 4) * unaff_XMM6_Da);
        }
        bVar1 = true;
      }
      puVar3 = puVar3 + 6;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    if (bVar1) {
      *(int8_t *)(unaff_RBX + 0x2d0) = 1;
      auVar15 = ZEXT416((uint)((float)iVar8 * 1.5258789e-05));
      *(float *)(unaff_RBX + 0x2cc) = (float)iVar8 * 1.5258789e-05;
      puVar3 = puVar4;
      iVar8 = unaff_EBP;
      if (0 < (int)uVar6) {
LAB_1807bcc00:
        if ((*puVar3 != uVar5) || (puVar3[2] != 0x30a)) goto LAB_1807bcc0c;
        bVar1 = false;
        iVar8 = unaff_EBP;
        do {
          if (puVar4[2] == 0x30a) {
            if (*puVar4 < 0x8c) {
              UNRECOVERED_JUMPTABLE_00 =
                   (code *)((uint64_t)
                            *(uint *)(unaff_R14 + 0x7bde28 +
                                     (uint64_t)*(byte *)(unaff_R14 + 0x7bde34 + (uint64_t)*puVar4)
                                     * 4) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcc4d. Too many branches
                    // WARNING: Treating indirect jump as call
              uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
              return uVar2;
            }
            if (puVar4[1] < 0x8c) {
              UNRECOVERED_JUMPTABLE_00 =
                   (code *)((uint64_t)
                            *(uint *)(unaff_R14 + 0x7bdec0 +
                                     (uint64_t)
                                     *(byte *)(unaff_R14 + 0x7bdee0 + (uint64_t)puVar4[1]) * 4) +
                           unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcc6f. Too many branches
                    // WARNING: Treating indirect jump as call
              uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
              return uVar2;
            }
            if (puVar4[3] != 1) {
              auVar15 = ZEXT416((uint)((float)*(int *)(puVar4 + 4) * unaff_XMM6_Da));
              iVar8 = iVar8 + (int)((float)*(int *)(puVar4 + 4) * unaff_XMM6_Da);
            }
            bVar1 = true;
          }
          puVar4 = puVar4 + 6;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        if (bVar1) {
          auVar15._0_8_ = func_0x0001807b9550(auVar15._0_8_,iVar8);
          auVar15._8_8_ = extraout_XMM0_Qb;
          *(int *)(unaff_RBX + 0x29c) = (int)auVar15._0_8_;
          unaff_RSI = (uint64_t)*(uint *)(unaff_RBX + 0x2ec);
        }
      }
LAB_1807bcd22:
      iVar8 = (int)unaff_RSI;
      uVar10 = unaff_RSI & 0xffffffff;
      if (0 < iVar8) {
        puVar4 = *(ushort **)(unaff_RBX + 0x2f0);
        puVar3 = puVar4;
        iVar9 = unaff_EBP;
        do {
          uVar10 = unaff_RSI & 0xffffffff;
          if ((*puVar3 == uVar5) && (puVar3[2] == 0x30b)) {
            bVar1 = false;
            if (0 < iVar8) {
              uVar10 = unaff_RSI & 0xffffffff;
              iVar8 = unaff_EBP;
              do {
                if (puVar4[2] == 0x30b) {
                  if (*puVar4 < 0x8c) {
                    UNRECOVERED_JUMPTABLE_00 =
                         (code *)((uint64_t)
                                  *(uint *)(unaff_R14 + 0x7bdf6c +
                                           (uint64_t)
                                           *(byte *)(unaff_R14 + 0x7bdf78 + (uint64_t)*puVar4) * 4)
                                 + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcd9c. Too many branches
                    // WARNING: Treating indirect jump as call
                    uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
                    return uVar2;
                  }
                  if (puVar4[1] < 0x8c) {
                    UNRECOVERED_JUMPTABLE_00 =
                         (code *)((uint64_t)
                                  *(uint *)(unaff_R14 + 0x7be004 +
                                           (uint64_t)
                                           *(byte *)(unaff_R14 + 0x7be024 + (uint64_t)puVar4[1]) *
                                           4) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcdbd. Too many branches
                    // WARNING: Treating indirect jump as call
                    uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
                    return uVar2;
                  }
                  if (puVar4[3] != 1) {
                    auVar15 = ZEXT416((uint)((float)*(int *)(puVar4 + 4) * unaff_XMM6_Da));
                    iVar8 = iVar8 + (int)((float)*(int *)(puVar4 + 4) * unaff_XMM6_Da);
                  }
                  bVar1 = true;
                }
                puVar4 = puVar4 + 6;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
              uVar10 = unaff_RSI & 0xffffffff;
              if (bVar1) {
                auVar15._0_8_ = func_0x0001807b9550(auVar15._0_8_,iVar8);
                auVar15._8_8_ = extraout_XMM0_Qb_00;
                *(int *)(unaff_RBX + 0x2a8) = (int)auVar15._0_8_;
                uVar10 = (uint64_t)*(uint *)(unaff_RBX + 0x2ec);
                unaff_RSI = uVar10;
              }
            }
            break;
          }
          iVar9 = iVar9 + 1;
          puVar3 = puVar3 + 6;
          uVar10 = unaff_RSI & 0xffffffff;
        } while (iVar9 < iVar8);
      }
      uVar7 = (uint)unaff_RSI;
      uVar6 = (uint)uVar10;
      if (0 < (int)(uint)uVar10) {
        puVar4 = *(ushort **)(unaff_RBX + 0x2f0);
        puVar3 = puVar4;
        iVar8 = unaff_EBP;
        do {
          if ((*puVar3 == uVar5) && (puVar3[2] == 0x30d)) {
            bVar1 = false;
            uVar6 = (uint)uVar10;
            if (0 < (int)(uint)uVar10) {
              uVar10 = unaff_RSI & 0xffffffff;
              iVar8 = unaff_EBP;
              do {
                if (puVar4[2] == 0x30d) {
                  if (*puVar4 < 0x8c) {
                    UNRECOVERED_JUMPTABLE_00 =
                         (code *)((uint64_t)
                                  *(uint *)(unaff_R14 + 0x7be0b0 +
                                           (uint64_t)
                                           *(byte *)(unaff_R14 + 0x7be0bc + (uint64_t)*puVar4) * 4)
                                 + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bceec. Too many branches
                    // WARNING: Treating indirect jump as call
                    uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
                    return uVar2;
                  }
                  if (puVar4[1] < 0x8c) {
                    UNRECOVERED_JUMPTABLE_00 =
                         (code *)((uint64_t)
                                  *(uint *)(unaff_R14 + 0x7be148 +
                                           (uint64_t)
                                           *(byte *)(unaff_R14 + 0x7be168 + (uint64_t)puVar4[1]) *
                                           4) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcf0d. Too many branches
                    // WARNING: Treating indirect jump as call
                    uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
                    return uVar2;
                  }
                  if (puVar4[3] != 1) {
                    auVar15 = ZEXT416((uint)((float)*(int *)(puVar4 + 4) * unaff_XMM6_Da));
                    iVar8 = iVar8 + (int)((float)*(int *)(puVar4 + 4) * unaff_XMM6_Da);
                  }
                  bVar1 = true;
                }
                puVar4 = puVar4 + 6;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
              uVar6 = uVar7;
              if (bVar1) {
                uVar14 = func_0x0001807b9550(auVar15._0_8_,iVar8);
                *(int32_t *)(unaff_RBX + 0x2b4) = uVar14;
                uVar7 = *(uint *)(unaff_RBX + 0x2ec);
                uVar6 = uVar7;
              }
            }
            break;
          }
          iVar8 = iVar8 + 1;
          puVar3 = puVar3 + 6;
          uVar10 = unaff_RSI & 0xffffffff;
          uVar6 = uVar7;
        } while (iVar8 < (int)uVar7);
      }
      bVar1 = false;
      if (0 < (int)uVar6) {
        puVar4 = *(ushort **)(unaff_RBX + 0x2f0);
        uVar10 = (uint64_t)uVar7;
        do {
          if (puVar4[2] == 0x30e) {
            if (*puVar4 < 0x8c) {
              UNRECOVERED_JUMPTABLE_00 =
                   (code *)((uint64_t)
                            *(uint *)(unaff_R14 + 0x7be1f4 +
                                     (uint64_t)*(byte *)(unaff_R14 + 0x7be200 + (uint64_t)*puVar4)
                                     * 4) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bd00c. Too many branches
                    // WARNING: Treating indirect jump as call
              uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
              return uVar2;
            }
            if (puVar4[1] < 0x8c) {
              UNRECOVERED_JUMPTABLE_00 =
                   (code *)((uint64_t)
                            *(uint *)(unaff_R14 + 0x7be28c +
                                     (uint64_t)
                                     *(byte *)(unaff_R14 + 0x7be2ac + (uint64_t)puVar4[1]) * 4) +
                           unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bd02d. Too many branches
                    // WARNING: Treating indirect jump as call
              uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
              return uVar2;
            }
            if (puVar4[3] != 1) {
              unaff_EBP = unaff_EBP + (int)((float)*(int *)(puVar4 + 4) * unaff_XMM6_Da);
            }
            bVar1 = true;
          }
          puVar4 = puVar4 + 6;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        if (bVar1) {
          if (unaff_EBP != 0x8000000) {
            fVar16 = (float)unaff_EBP * 1.525879e-08;
          }
          *(float *)(unaff_RBX + 0x2c8) = fVar16;
        }
      }
    }
  }
  if (*(float *)(unaff_RBX + 0x27c) <= 50.0 && *(float *)(unaff_RBX + 0x27c) != 50.0) {
    *(int32_t *)(unaff_RBX + 0x27c) = 0x42480000;
  }
  return 0;
LAB_1807bcc0c:
  iVar8 = iVar8 + 1;
  puVar3 = puVar3 + 6;
  if ((int)uVar6 <= iVar8) goto LAB_1807bcd22;
  goto LAB_1807bcc00;
}



uint64_t FUN_1807bcacb(void)

{
  bool bVar1;
  uint64_t uVar2;
  ushort *puVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  ushort *puVar5;
  int64_t unaff_RBX;
  ushort uVar6;
  int unaff_EBP;
  uint unaff_ESI;
  uint64_t uVar7;
  char in_R9B;
  int in_R10D;
  uint64_t uVar8;
  int64_t unaff_R14;
  int32_t uVar9;
  int8_t auVar10 [16];
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  float unaff_XMM6_Da;
  float unaff_XMM11_Da;
  
  puVar5 = *(ushort **)(unaff_RBX + 0x2f0);
  uVar7 = (uint64_t)unaff_ESI;
  uVar8 = (uint64_t)unaff_ESI;
  puVar3 = puVar5;
  do {
    if (puVar3[2] == 3) {
      if (*puVar3 < 0x8c) {
        UNRECOVERED_JUMPTABLE_00 =
             (code *)((uint64_t)
                      *(uint *)(unaff_R14 + 0x7bdce4 +
                               (uint64_t)*(byte *)(unaff_R14 + 0x7bdcf0 + (uint64_t)*puVar3) * 4)
                     + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcb0e. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
        return uVar2;
      }
      if (puVar3[1] < 0x8c) {
        UNRECOVERED_JUMPTABLE_00 =
             (code *)((uint64_t)
                      *(uint *)(unaff_R14 + 0x7bdd7c +
                               (uint64_t)*(byte *)(unaff_R14 + 0x7bdd9c + (uint64_t)puVar3[1]) * 4
                               ) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcb2f. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
        return uVar2;
      }
      if (puVar3[3] != 1) {
        in_R10D = in_R10D + (int)((float)*(int *)(puVar3 + 4) * unaff_XMM6_Da);
      }
      in_R9B = '\x01';
    }
    puVar3 = puVar3 + 6;
    uVar8 = uVar8 - 1;
  } while (uVar8 != 0);
  if (in_R9B != '\0') {
    *(int8_t *)(unaff_RBX + 0x2d0) = 1;
    auVar10 = ZEXT416((uint)((float)in_R10D * 1.5258789e-05));
    *(float *)(unaff_RBX + 0x2cc) = (float)in_R10D * 1.5258789e-05;
    uVar6 = (ushort)unaff_EBP;
    puVar3 = puVar5;
    iVar4 = unaff_EBP;
    if (0 < (int)unaff_ESI) {
LAB_1807bcc00:
      if ((*puVar3 != uVar6) || (puVar3[2] != 0x30a)) goto LAB_1807bcc0c;
      bVar1 = false;
      iVar4 = unaff_EBP;
      do {
        if (puVar5[2] == 0x30a) {
          if (*puVar5 < 0x8c) {
            UNRECOVERED_JUMPTABLE_00 =
                 (code *)((uint64_t)
                          *(uint *)(unaff_R14 + 0x7bde28 +
                                   (uint64_t)*(byte *)(unaff_R14 + 0x7bde34 + (uint64_t)*puVar5) *
                                   4) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcc4d. Too many branches
                    // WARNING: Treating indirect jump as call
            uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
            return uVar2;
          }
          if (puVar5[1] < 0x8c) {
            UNRECOVERED_JUMPTABLE_00 =
                 (code *)((uint64_t)
                          *(uint *)(unaff_R14 + 0x7bdec0 +
                                   (uint64_t)*(byte *)(unaff_R14 + 0x7bdee0 + (uint64_t)puVar5[1])
                                   * 4) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcc6f. Too many branches
                    // WARNING: Treating indirect jump as call
            uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
            return uVar2;
          }
          if (puVar5[3] != 1) {
            auVar10 = ZEXT416((uint)((float)*(int *)(puVar5 + 4) * unaff_XMM6_Da));
            iVar4 = iVar4 + (int)((float)*(int *)(puVar5 + 4) * unaff_XMM6_Da);
          }
          bVar1 = true;
        }
        puVar5 = puVar5 + 6;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      if (bVar1) {
        auVar10._0_8_ = func_0x0001807b9550(auVar10._0_8_,iVar4);
        auVar10._8_8_ = extraout_XMM0_Qb;
        *(int *)(unaff_RBX + 0x29c) = (int)auVar10._0_8_;
        unaff_ESI = *(uint *)(unaff_RBX + 0x2ec);
      }
    }
LAB_1807bcd22:
    if (0 < (int)unaff_ESI) {
      puVar5 = *(ushort **)(unaff_RBX + 0x2f0);
      puVar3 = puVar5;
      iVar4 = unaff_EBP;
      do {
        if ((*puVar3 == uVar6) && (puVar3[2] == 0x30b)) {
          bVar1 = false;
          if (0 < (int)unaff_ESI) {
            uVar7 = (uint64_t)unaff_ESI;
            iVar4 = unaff_EBP;
            do {
              if (puVar5[2] == 0x30b) {
                if (*puVar5 < 0x8c) {
                  UNRECOVERED_JUMPTABLE_00 =
                       (code *)((uint64_t)
                                *(uint *)(unaff_R14 + 0x7bdf6c +
                                         (uint64_t)
                                         *(byte *)(unaff_R14 + 0x7bdf78 + (uint64_t)*puVar5) * 4) +
                               unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcd9c. Too many branches
                    // WARNING: Treating indirect jump as call
                  uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
                  return uVar2;
                }
                if (puVar5[1] < 0x8c) {
                  UNRECOVERED_JUMPTABLE_00 =
                       (code *)((uint64_t)
                                *(uint *)(unaff_R14 + 0x7be004 +
                                         (uint64_t)
                                         *(byte *)(unaff_R14 + 0x7be024 + (uint64_t)puVar5[1]) * 4)
                               + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcdbd. Too many branches
                    // WARNING: Treating indirect jump as call
                  uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
                  return uVar2;
                }
                if (puVar5[3] != 1) {
                  auVar10 = ZEXT416((uint)((float)*(int *)(puVar5 + 4) * unaff_XMM6_Da));
                  iVar4 = iVar4 + (int)((float)*(int *)(puVar5 + 4) * unaff_XMM6_Da);
                }
                bVar1 = true;
              }
              puVar5 = puVar5 + 6;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
            if (bVar1) {
              auVar10._0_8_ = func_0x0001807b9550(auVar10._0_8_,iVar4);
              auVar10._8_8_ = extraout_XMM0_Qb_00;
              *(int *)(unaff_RBX + 0x2a8) = (int)auVar10._0_8_;
              unaff_ESI = *(uint *)(unaff_RBX + 0x2ec);
            }
          }
          break;
        }
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 6;
      } while (iVar4 < (int)unaff_ESI);
    }
    if (0 < (int)unaff_ESI) {
      puVar5 = *(ushort **)(unaff_RBX + 0x2f0);
      puVar3 = puVar5;
      iVar4 = unaff_EBP;
      do {
        if ((*puVar3 == uVar6) && (puVar3[2] == 0x30d)) {
          bVar1 = false;
          if (0 < (int)unaff_ESI) {
            uVar7 = (uint64_t)unaff_ESI;
            iVar4 = unaff_EBP;
            do {
              if (puVar5[2] == 0x30d) {
                if (*puVar5 < 0x8c) {
                  UNRECOVERED_JUMPTABLE_00 =
                       (code *)((uint64_t)
                                *(uint *)(unaff_R14 + 0x7be0b0 +
                                         (uint64_t)
                                         *(byte *)(unaff_R14 + 0x7be0bc + (uint64_t)*puVar5) * 4) +
                               unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bceec. Too many branches
                    // WARNING: Treating indirect jump as call
                  uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
                  return uVar2;
                }
                if (puVar5[1] < 0x8c) {
                  UNRECOVERED_JUMPTABLE_00 =
                       (code *)((uint64_t)
                                *(uint *)(unaff_R14 + 0x7be148 +
                                         (uint64_t)
                                         *(byte *)(unaff_R14 + 0x7be168 + (uint64_t)puVar5[1]) * 4)
                               + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcf0d. Too many branches
                    // WARNING: Treating indirect jump as call
                  uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
                  return uVar2;
                }
                if (puVar5[3] != 1) {
                  auVar10 = ZEXT416((uint)((float)*(int *)(puVar5 + 4) * unaff_XMM6_Da));
                  iVar4 = iVar4 + (int)((float)*(int *)(puVar5 + 4) * unaff_XMM6_Da);
                }
                bVar1 = true;
              }
              puVar5 = puVar5 + 6;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
            if (bVar1) {
              uVar9 = func_0x0001807b9550(auVar10._0_8_,iVar4);
              *(int32_t *)(unaff_RBX + 0x2b4) = uVar9;
              unaff_ESI = *(uint *)(unaff_RBX + 0x2ec);
            }
          }
          break;
        }
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 6;
      } while (iVar4 < (int)unaff_ESI);
    }
    bVar1 = false;
    if (0 < (int)unaff_ESI) {
      puVar5 = *(ushort **)(unaff_RBX + 0x2f0);
      uVar7 = (uint64_t)unaff_ESI;
      do {
        if (puVar5[2] == 0x30e) {
          if (*puVar5 < 0x8c) {
            UNRECOVERED_JUMPTABLE_00 =
                 (code *)((uint64_t)
                          *(uint *)(unaff_R14 + 0x7be1f4 +
                                   (uint64_t)*(byte *)(unaff_R14 + 0x7be200 + (uint64_t)*puVar5) *
                                   4) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bd00c. Too many branches
                    // WARNING: Treating indirect jump as call
            uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
            return uVar2;
          }
          if (puVar5[1] < 0x8c) {
            UNRECOVERED_JUMPTABLE_00 =
                 (code *)((uint64_t)
                          *(uint *)(unaff_R14 + 0x7be28c +
                                   (uint64_t)*(byte *)(unaff_R14 + 0x7be2ac + (uint64_t)puVar5[1])
                                   * 4) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bd02d. Too many branches
                    // WARNING: Treating indirect jump as call
            uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
            return uVar2;
          }
          if (puVar5[3] != 1) {
            unaff_EBP = unaff_EBP + (int)((float)*(int *)(puVar5 + 4) * unaff_XMM6_Da);
          }
          bVar1 = true;
        }
        puVar5 = puVar5 + 6;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      if (bVar1) {
        if (unaff_EBP != 0x8000000) {
          unaff_XMM11_Da = (float)unaff_EBP * 1.525879e-08;
        }
        *(float *)(unaff_RBX + 0x2c8) = unaff_XMM11_Da;
      }
    }
  }
  if (*(float *)(unaff_RBX + 0x27c) <= 50.0 && *(float *)(unaff_RBX + 0x27c) != 50.0) {
    *(int32_t *)(unaff_RBX + 0x27c) = 0x42480000;
  }
  return 0;
LAB_1807bcc0c:
  iVar4 = iVar4 + 1;
  puVar3 = puVar3 + 6;
  if ((int)unaff_ESI <= iVar4) goto LAB_1807bcd22;
  goto LAB_1807bcc00;
}



uint64_t FUN_1807bcad2(uint64_t param_1,uint64_t param_2,ushort *param_3,char param_4)

{
  bool bVar1;
  uint64_t uVar2;
  ushort *puVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  ushort *puVar5;
  int64_t unaff_RBX;
  ushort uVar6;
  int unaff_EBP;
  uint unaff_ESI;
  uint64_t uVar7;
  int in_R10D;
  uint64_t uVar8;
  int64_t unaff_R14;
  int32_t uVar9;
  int8_t auVar10 [16];
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  float unaff_XMM6_Da;
  float unaff_XMM11_Da;
  
  uVar7 = (uint64_t)unaff_ESI;
  uVar8 = (uint64_t)unaff_ESI;
  puVar3 = param_3;
  do {
    if (puVar3[2] == 3) {
      if (*puVar3 < 0x8c) {
        UNRECOVERED_JUMPTABLE_00 =
             (code *)((uint64_t)
                      *(uint *)(unaff_R14 + 0x7bdce4 +
                               (uint64_t)*(byte *)(unaff_R14 + 0x7bdcf0 + (uint64_t)*puVar3) * 4)
                     + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcb0e. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
        return uVar2;
      }
      if (puVar3[1] < 0x8c) {
        UNRECOVERED_JUMPTABLE_00 =
             (code *)((uint64_t)
                      *(uint *)(unaff_R14 + 0x7bdd7c +
                               (uint64_t)*(byte *)(unaff_R14 + 0x7bdd9c + (uint64_t)puVar3[1]) * 4
                               ) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcb2f. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
        return uVar2;
      }
      if (puVar3[3] != 1) {
        in_R10D = in_R10D + (int)((float)*(int *)(puVar3 + 4) * unaff_XMM6_Da);
      }
      param_4 = '\x01';
    }
    puVar3 = puVar3 + 6;
    uVar8 = uVar8 - 1;
  } while (uVar8 != 0);
  if (param_4 != '\0') {
    *(int8_t *)(unaff_RBX + 0x2d0) = 1;
    auVar10 = ZEXT416((uint)((float)in_R10D * 1.5258789e-05));
    *(float *)(unaff_RBX + 0x2cc) = (float)in_R10D * 1.5258789e-05;
    uVar6 = (ushort)unaff_EBP;
    puVar3 = param_3;
    iVar4 = unaff_EBP;
    if (0 < (int)unaff_ESI) {
LAB_1807bcc00:
      if ((*puVar3 != uVar6) || (puVar3[2] != 0x30a)) goto LAB_1807bcc0c;
      bVar1 = false;
      iVar4 = unaff_EBP;
      do {
        if (param_3[2] == 0x30a) {
          if (*param_3 < 0x8c) {
            UNRECOVERED_JUMPTABLE_00 =
                 (code *)((uint64_t)
                          *(uint *)(unaff_R14 + 0x7bde28 +
                                   (uint64_t)*(byte *)(unaff_R14 + 0x7bde34 + (uint64_t)*param_3)
                                   * 4) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcc4d. Too many branches
                    // WARNING: Treating indirect jump as call
            uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
            return uVar2;
          }
          if (param_3[1] < 0x8c) {
            UNRECOVERED_JUMPTABLE_00 =
                 (code *)((uint64_t)
                          *(uint *)(unaff_R14 + 0x7bdec0 +
                                   (uint64_t)
                                   *(byte *)(unaff_R14 + 0x7bdee0 + (uint64_t)param_3[1]) * 4) +
                         unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcc6f. Too many branches
                    // WARNING: Treating indirect jump as call
            uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
            return uVar2;
          }
          if (param_3[3] != 1) {
            auVar10 = ZEXT416((uint)((float)*(int *)(param_3 + 4) * unaff_XMM6_Da));
            iVar4 = iVar4 + (int)((float)*(int *)(param_3 + 4) * unaff_XMM6_Da);
          }
          bVar1 = true;
        }
        param_3 = param_3 + 6;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      if (bVar1) {
        auVar10._0_8_ = func_0x0001807b9550(auVar10._0_8_,iVar4);
        auVar10._8_8_ = extraout_XMM0_Qb;
        *(int *)(unaff_RBX + 0x29c) = (int)auVar10._0_8_;
        unaff_ESI = *(uint *)(unaff_RBX + 0x2ec);
      }
    }
LAB_1807bcd22:
    if (0 < (int)unaff_ESI) {
      puVar3 = *(ushort **)(unaff_RBX + 0x2f0);
      puVar5 = puVar3;
      iVar4 = unaff_EBP;
      do {
        if ((*puVar5 == uVar6) && (puVar5[2] == 0x30b)) {
          bVar1 = false;
          if (0 < (int)unaff_ESI) {
            uVar7 = (uint64_t)unaff_ESI;
            iVar4 = unaff_EBP;
            do {
              if (puVar3[2] == 0x30b) {
                if (*puVar3 < 0x8c) {
                  UNRECOVERED_JUMPTABLE_00 =
                       (code *)((uint64_t)
                                *(uint *)(unaff_R14 + 0x7bdf6c +
                                         (uint64_t)
                                         *(byte *)(unaff_R14 + 0x7bdf78 + (uint64_t)*puVar3) * 4) +
                               unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcd9c. Too many branches
                    // WARNING: Treating indirect jump as call
                  uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
                  return uVar2;
                }
                if (puVar3[1] < 0x8c) {
                  UNRECOVERED_JUMPTABLE_00 =
                       (code *)((uint64_t)
                                *(uint *)(unaff_R14 + 0x7be004 +
                                         (uint64_t)
                                         *(byte *)(unaff_R14 + 0x7be024 + (uint64_t)puVar3[1]) * 4)
                               + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcdbd. Too many branches
                    // WARNING: Treating indirect jump as call
                  uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
                  return uVar2;
                }
                if (puVar3[3] != 1) {
                  auVar10 = ZEXT416((uint)((float)*(int *)(puVar3 + 4) * unaff_XMM6_Da));
                  iVar4 = iVar4 + (int)((float)*(int *)(puVar3 + 4) * unaff_XMM6_Da);
                }
                bVar1 = true;
              }
              puVar3 = puVar3 + 6;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
            if (bVar1) {
              auVar10._0_8_ = func_0x0001807b9550(auVar10._0_8_,iVar4);
              auVar10._8_8_ = extraout_XMM0_Qb_00;
              *(int *)(unaff_RBX + 0x2a8) = (int)auVar10._0_8_;
              unaff_ESI = *(uint *)(unaff_RBX + 0x2ec);
            }
          }
          break;
        }
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 6;
      } while (iVar4 < (int)unaff_ESI);
    }
    if (0 < (int)unaff_ESI) {
      puVar3 = *(ushort **)(unaff_RBX + 0x2f0);
      puVar5 = puVar3;
      iVar4 = unaff_EBP;
      do {
        if ((*puVar5 == uVar6) && (puVar5[2] == 0x30d)) {
          bVar1 = false;
          if (0 < (int)unaff_ESI) {
            uVar7 = (uint64_t)unaff_ESI;
            iVar4 = unaff_EBP;
            do {
              if (puVar3[2] == 0x30d) {
                if (*puVar3 < 0x8c) {
                  UNRECOVERED_JUMPTABLE_00 =
                       (code *)((uint64_t)
                                *(uint *)(unaff_R14 + 0x7be0b0 +
                                         (uint64_t)
                                         *(byte *)(unaff_R14 + 0x7be0bc + (uint64_t)*puVar3) * 4) +
                               unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bceec. Too many branches
                    // WARNING: Treating indirect jump as call
                  uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
                  return uVar2;
                }
                if (puVar3[1] < 0x8c) {
                  UNRECOVERED_JUMPTABLE_00 =
                       (code *)((uint64_t)
                                *(uint *)(unaff_R14 + 0x7be148 +
                                         (uint64_t)
                                         *(byte *)(unaff_R14 + 0x7be168 + (uint64_t)puVar3[1]) * 4)
                               + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bcf0d. Too many branches
                    // WARNING: Treating indirect jump as call
                  uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
                  return uVar2;
                }
                if (puVar3[3] != 1) {
                  auVar10 = ZEXT416((uint)((float)*(int *)(puVar3 + 4) * unaff_XMM6_Da));
                  iVar4 = iVar4 + (int)((float)*(int *)(puVar3 + 4) * unaff_XMM6_Da);
                }
                bVar1 = true;
              }
              puVar3 = puVar3 + 6;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
            if (bVar1) {
              uVar9 = func_0x0001807b9550(auVar10._0_8_,iVar4);
              *(int32_t *)(unaff_RBX + 0x2b4) = uVar9;
              unaff_ESI = *(uint *)(unaff_RBX + 0x2ec);
            }
          }
          break;
        }
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 6;
      } while (iVar4 < (int)unaff_ESI);
    }
    bVar1 = false;
    if (0 < (int)unaff_ESI) {
      puVar3 = *(ushort **)(unaff_RBX + 0x2f0);
      uVar7 = (uint64_t)unaff_ESI;
      do {
        if (puVar3[2] == 0x30e) {
          if (*puVar3 < 0x8c) {
            UNRECOVERED_JUMPTABLE_00 =
                 (code *)((uint64_t)
                          *(uint *)(unaff_R14 + 0x7be1f4 +
                                   (uint64_t)*(byte *)(unaff_R14 + 0x7be200 + (uint64_t)*puVar3) *
                                   4) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bd00c. Too many branches
                    // WARNING: Treating indirect jump as call
            uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
            return uVar2;
          }
          if (puVar3[1] < 0x8c) {
            UNRECOVERED_JUMPTABLE_00 =
                 (code *)((uint64_t)
                          *(uint *)(unaff_R14 + 0x7be28c +
                                   (uint64_t)*(byte *)(unaff_R14 + 0x7be2ac + (uint64_t)puVar3[1])
                                   * 4) + unaff_R14);
                    // WARNING: Could not recover jumptable at 0x0001807bd02d. Too many branches
                    // WARNING: Treating indirect jump as call
            uVar2 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
            return uVar2;
          }
          if (puVar3[3] != 1) {
            unaff_EBP = unaff_EBP + (int)((float)*(int *)(puVar3 + 4) * unaff_XMM6_Da);
          }
          bVar1 = true;
        }
        puVar3 = puVar3 + 6;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      if (bVar1) {
        if (unaff_EBP != 0x8000000) {
          unaff_XMM11_Da = (float)unaff_EBP * 1.525879e-08;
        }
        *(float *)(unaff_RBX + 0x2c8) = unaff_XMM11_Da;
      }
    }
  }
  if (*(float *)(unaff_RBX + 0x27c) <= 50.0 && *(float *)(unaff_RBX + 0x27c) != 50.0) {
    *(int32_t *)(unaff_RBX + 0x27c) = 0x42480000;
  }
  return 0;
LAB_1807bcc0c:
  iVar4 = iVar4 + 1;
  puVar3 = puVar3 + 6;
  if ((int)unaff_ESI <= iVar4) goto LAB_1807bcd22;
  goto LAB_1807bcc00;
}



uint64_t FUN_1807bd0f2(void)

{
  int64_t unaff_RBX;
  
  if (*(float *)(unaff_RBX + 0x27c) <= 50.0 && *(float *)(unaff_RBX + 0x27c) != 50.0) {
    *(int32_t *)(unaff_RBX + 0x27c) = 0x42480000;
  }
  return 0;
}








