#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part279.c - 9 个函数

// 函数: void FUN_18041cce0(uint *param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
void FUN_18041cce0(uint *param_1,int64_t param_2,int64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  byte bVar2;
  int iVar3;
  uint64_t uVar4;
  byte bVar5;
  byte bVar6;
  uint64_t *puVar7;
  int iVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint uVar11;
  int64_t lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int64_t lVar16;
  uint64_t uVar17;
  int8_t auStack_2f8 [32];
  uint64_t uStack_2d8;
  int64_t lStack_2d0;
  uint auStack_2c8 [32];
  uint64_t auStack_248 [16];
  uint64_t auStack_1c8 [16];
  uint64_t auStack_148 [16];
  uint64_t auStack_c8 [16];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2f8;
  iVar8 = 1 << ((byte)*(int32_t *)((uint64_t)*param_1 * 0x28 + 0x180bf02d0) & 0x1f);
  iVar3 = 1 << ((byte)*(int32_t *)((uint64_t)*param_1 * 0x28 + 0x180bf02d4) & 0x1f);
  uStack_2d8 = CONCAT44(iVar3,iVar8);
  if (param_1[3] != 0) {
    uStack_2d8 = CONCAT44(iVar8,iVar3);
  }
  lStack_2d0 = param_2;
  FUN_18041c120(param_4,auStack_248,&uStack_2d8);
  lVar12 = 0;
  uStack_2d8 = 2;
  lVar16 = 0;
  do {
    uVar9 = (uint64_t)*param_1;
    uVar17 = 0;
    do {
      uVar14 = 0;
      iVar3 = (int)uVar17;
      uVar13 = 0;
      auStack_2c8[uVar17 + lVar16] = 0;
      lVar10 = lVar12 + uVar9 * 10;
      uVar11 = *(uint *)(lVar10 * 4 + 0x180bf02d0);
      if (iVar3 == 0) {
        uVar14 = 0;
        if (uVar11 != 1) {
          uVar15 = param_1[4];
          do {
            bVar2 = *(byte *)((uint64_t)(uVar15 >> 3) + param_3);
            param_1[4] = uVar15 + 1;
            bVar5 = (byte)uVar13;
            uVar13 = uVar13 + 1;
            uVar11 = *(uint *)(lVar10 * 4 + 0x180bf02d0);
            uVar14 = uVar14 | (bVar2 >> ((byte)uVar15 & 7) & 1) << (bVar5 & 0x1f);
            uVar15 = uVar15 + 1;
          } while (uVar13 < uVar11 - 1);
LAB_18041ce43:
          uVar9 = (uint64_t)*param_1;
          auStack_2c8[uVar17 + lVar16] = uVar14;
        }
      }
      else if (uVar11 != 0) {
        uVar15 = param_1[4];
        do {
          bVar2 = *(byte *)((uint64_t)(uVar15 >> 3) + param_3);
          param_1[4] = uVar15 + 1;
          bVar5 = (byte)uVar13;
          uVar13 = uVar13 + 1;
          uVar11 = *(uint *)(lVar10 * 4 + 0x180bf02d0);
          uVar14 = uVar14 | (bVar2 >> ((byte)uVar15 & 7) & 1) << (bVar5 & 0x1f);
          uVar15 = uVar15 + 1;
        } while (uVar13 < uVar11);
        goto LAB_18041ce43;
      }
      uVar14 = 0;
      uVar13 = 0;
      lVar10 = (uint64_t)(iVar3 + 1U) + lVar16;
      auStack_2c8[lVar10] = 0;
      if (iVar3 + 1U == 0) {
        if (uVar11 != 1) {
          uVar11 = param_1[4];
          do {
            bVar5 = (byte)uVar11;
            uVar15 = uVar11 >> 3;
            uVar11 = uVar11 + 1;
            bVar2 = *(byte *)((uint64_t)uVar15 + param_3);
            param_1[4] = uVar11;
            bVar6 = (byte)uVar13;
            uVar13 = uVar13 + 1;
            uVar14 = uVar14 | (bVar2 >> (bVar5 & 7) & 1) << (bVar6 & 0x1f);
            uVar9 = (uint64_t)*param_1;
          } while (uVar13 < *(int *)((lVar12 + uVar9 * 10) * 4 + 0x180bf02d0) - 1U);
LAB_18041cefa:
          auStack_2c8[lVar10] = uVar14;
        }
      }
      else if (uVar11 != 0) {
        uVar11 = param_1[4];
        do {
          bVar5 = (byte)uVar11;
          uVar15 = uVar11 >> 3;
          uVar11 = uVar11 + 1;
          bVar2 = *(byte *)((uint64_t)uVar15 + param_3);
          param_1[4] = uVar11;
          bVar6 = (byte)uVar13;
          uVar13 = uVar13 + 1;
          uVar14 = uVar14 | (bVar2 >> (bVar5 & 7) & 1) << (bVar6 & 0x1f);
          uVar9 = (uint64_t)*param_1;
        } while (uVar13 < *(uint *)((lVar12 + uVar9 * 10) * 4 + 0x180bf02d0));
        goto LAB_18041cefa;
      }
      uVar11 = 0;
      lVar10 = (uint64_t)(iVar3 + 2U) + lVar16;
      iVar8 = *(int *)(lVar12 * 4 + uVar9 * 0x28 + 0x180bf02d0);
      auStack_2c8[lVar10] = 0;
      if (iVar3 + 2U == 0) {
        if (iVar8 != 1) {
          uVar13 = param_1[4];
          uVar14 = uVar11;
          do {
            bVar5 = (byte)uVar13;
            uVar15 = uVar13 >> 3;
            uVar13 = uVar13 + 1;
            bVar2 = *(byte *)((uint64_t)uVar15 + param_3);
            param_1[4] = uVar13;
            uVar9 = (uint64_t)*param_1;
            uVar15 = uVar14 + 1;
            uVar11 = uVar11 | (bVar2 >> (bVar5 & 7) & 1) << ((byte)uVar14 & 0x1f);
            uVar14 = uVar15;
          } while (uVar15 < *(int *)((lVar12 + uVar9 * 10) * 4 + 0x180bf02d0) - 1U);
          auStack_2c8[lVar10] = uVar11;
        }
      }
      else if (iVar8 != 0) {
        uVar13 = param_1[4];
        uVar14 = uVar11;
        do {
          bVar5 = (byte)uVar13;
          uVar15 = uVar13 >> 3;
          uVar13 = uVar13 + 1;
          bVar2 = *(byte *)((uint64_t)uVar15 + param_3);
          param_1[4] = uVar13;
          bVar6 = (byte)uVar11;
          uVar11 = uVar11 + 1;
          uVar14 = uVar14 | (bVar2 >> (bVar5 & 7) & 1) << (bVar6 & 0x1f);
          uVar15 = *param_1;
        } while (uVar11 < *(uint *)((lVar12 + (uint64_t)uVar15 * 10) * 4 + 0x180bf02d0));
        auStack_2c8[lVar10] = uVar14;
        uVar9 = (uint64_t)uVar15;
      }
      uVar13 = 0;
      lVar10 = (uint64_t)(iVar3 + 3U) + lVar16;
      iVar8 = *(int *)(lVar12 * 4 + uVar9 * 0x28 + 0x180bf02d0);
      auStack_2c8[lVar10] = 0;
      uVar11 = uVar13;
      if (iVar3 + 3U == 0) {
        if (iVar8 != 1) {
          uVar14 = param_1[4];
          do {
            bVar5 = (byte)uVar14;
            uVar15 = uVar14 >> 3;
            uVar14 = uVar14 + 1;
            bVar2 = *(byte *)((uint64_t)uVar15 + param_3);
            param_1[4] = uVar14;
            bVar6 = (byte)uVar13;
            uVar13 = uVar13 + 1;
            uVar11 = uVar11 | (bVar2 >> (bVar5 & 7) & 1) << (bVar6 & 0x1f);
            uVar9 = (uint64_t)*param_1;
          } while (uVar13 < *(int *)((lVar12 + uVar9 * 10) * 4 + 0x180bf02d0) - 1U);
LAB_18041d0ba:
          auStack_2c8[lVar10] = uVar11;
        }
      }
      else if (iVar8 != 0) {
        uVar14 = param_1[4];
        do {
          bVar5 = (byte)uVar14;
          uVar15 = uVar14 >> 3;
          uVar14 = uVar14 + 1;
          bVar2 = *(byte *)((uint64_t)uVar15 + param_3);
          param_1[4] = uVar14;
          bVar6 = (byte)uVar13;
          uVar13 = uVar13 + 1;
          uVar11 = uVar11 | (bVar2 >> (bVar5 & 7) & 1) << (bVar6 & 0x1f);
          uVar9 = (uint64_t)*param_1;
        } while (uVar13 < *(uint *)((lVar12 + uVar9 * 10) * 4 + 0x180bf02d0));
        goto LAB_18041d0ba;
      }
      uVar17 = (uint64_t)(iVar3 + 4U);
    } while (iVar3 + 4U < 0x10);
    lVar12 = lVar12 + 1;
    lVar16 = lVar16 + 0x10;
    uStack_2d8 = uStack_2d8 + -1;
  } while (uStack_2d8 != 0);
  lVar16 = 2;
  lVar12 = 2;
  puVar7 = (uint64_t *)(lStack_2d0 + 0x28);
  do {
    lVar10 = lVar16 + -2;
    puVar7[-2] = auStack_c8[auStack_2c8[((uint64_t)param_1[3] ^ 1) * 0x10 + lVar10]];
    puVar7[-5] = auStack_248[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar10]];
    puVar7[-4] = auStack_1c8[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar10]];
    lVar1 = lVar16 + -1;
    puVar7[-3] = auStack_148[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar10]];
    puVar7[2] = auStack_c8[auStack_2c8[((uint64_t)param_1[3] ^ 1) * 0x10 + lVar1]];
    puVar7[-1] = auStack_248[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar1]];
    *puVar7 = auStack_1c8[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar1]];
    lVar10 = lVar16 + 1;
    puVar7[1] = auStack_148[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar1]];
    puVar7[6] = auStack_c8[auStack_2c8[((uint64_t)param_1[3] ^ 1) * 0x10 + lVar16]];
    puVar7[3] = auStack_248[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar16]];
    puVar7[4] = auStack_1c8[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar16]];
    puVar7[5] = auStack_148[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar16]];
    puVar7[10] = auStack_c8[auStack_2c8[((uint64_t)param_1[3] ^ 1) * 0x10 + lVar10]];
    puVar7[7] = auStack_248[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar10]];
    puVar7[8] = auStack_1c8[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar10]];
    lVar1 = lVar16 + 2;
    puVar7[9] = auStack_148[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar10]];
    puVar7[0xe] = auStack_c8[auStack_2c8[((uint64_t)param_1[3] ^ 1) * 0x10 + lVar1]];
    puVar7[0xb] = auStack_248[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar1]];
    puVar7[0xc] = auStack_1c8[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar1]];
    lVar10 = lVar16 + 3;
    puVar7[0xd] = auStack_148[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar1]];
    puVar7[0x12] = auStack_c8[auStack_2c8[((uint64_t)param_1[3] ^ 1) * 0x10 + lVar10]];
    puVar7[0xf] = auStack_248[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar10]];
    puVar7[0x10] = auStack_1c8[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar10]];
    lVar1 = lVar16 + 4;
    puVar7[0x11] = auStack_148[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar10]];
    puVar7[0x16] = auStack_c8[auStack_2c8[((uint64_t)param_1[3] ^ 1) * 0x10 + lVar1]];
    puVar7[0x13] = auStack_248[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar1]];
    puVar7[0x14] = auStack_1c8[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar1]];
    lVar10 = lVar16 + 5;
    lVar16 = lVar16 + 8;
    puVar7[0x15] = auStack_148[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar1]];
    puVar7[0x1a] = auStack_c8[auStack_2c8[((uint64_t)param_1[3] ^ 1) * 0x10 + lVar10]];
    puVar7[0x17] = auStack_248[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar10]];
    puVar7[0x18] = auStack_1c8[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar10]];
    puVar7[0x19] = auStack_148[auStack_2c8[(uint64_t)param_1[3] * 0x10 + lVar10]];
    lVar12 = lVar12 + -1;
    puVar7 = puVar7 + 0x20;
  } while (lVar12 != 0);
  puVar7 = (uint64_t *)(lStack_2d0 + 0x18);
  lVar12 = 0x10;
  do {
    uVar11 = param_1[2];
    if (uVar11 == 1) {
      uVar4 = puVar7[-3];
      puVar7[-3] = *puVar7;
LAB_18041d4b1:
      *puVar7 = uVar4;
    }
    else {
      if (uVar11 == 2) {
        uVar4 = puVar7[-2];
        puVar7[-2] = *puVar7;
        goto LAB_18041d4b1;
      }
      if (uVar11 == 3) {
        uVar4 = puVar7[-1];
        puVar7[-1] = *puVar7;
        goto LAB_18041d4b1;
      }
    }
    puVar7 = puVar7 + 4;
    lVar12 = lVar12 + -1;
    if (lVar12 == 0) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_2f8);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18041d4f0(int64_t param_1,uint64_t *param_2)
void FUN_18041d4f0(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  void *puVar6;
  uint uVar7;
  int8_t auStack_f8 [32];
  uint64_t uStack_d8;
  int64_t lStack_d0;
  uint64_t uStack_c0;
  int8_t auStack_b8 [76];
  byte bStack_6c;
  int iStack_68;
  uint64_t uStack_38;
  
  uStack_c0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  cVar2 = FUN_18041dfa0(param_1,(int64_t)param_2 + 0x14);
  if (cVar2 != '\0') {
    uStack_d8 = 0;
    lStack_d0 = 0;
    puVar6 = &system_buffer_ptr;
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      puVar6 = *(void **)(param_1 + 8);
    }
    iVar3 = FUN_18062dee0(&uStack_d8,puVar6,&unknown_var_4880_ptr);
    lVar1 = lStack_d0;
    if (iVar3 == 0) {
      uVar5 = _ftelli64(lStack_d0);
      _fseeki64(lVar1,0,2);
      iVar3 = _ftelli64(lVar1);
      _fseeki64(lVar1,uVar5,0);
      _fseeki64(lVar1,4);
      fread(auStack_b8,0x7c,1,lVar1);
      iVar4 = 0x80;
      if (((bStack_6c & 4) != 0) && (iStack_68 == 0x30315844)) {
        _fseeki64(lVar1,0x14,1);
        iVar4 = 0x94;
      }
      uVar7 = iVar3 - iVar4;
      cVar2 = FUN_1802a1bc0(param_2);
      if (cVar2 != '\0') {
        if (param_2[1] == (uint64_t)uVar7) {
          fread(*param_2,(uint64_t)uVar7,1,lVar1);
        }
        else {
          puVar6 = &system_buffer_ptr;
          if (*(void **)(param_1 + 8) != (void *)0x0) {
            puVar6 = *(void **)(param_1 + 8);
          }
          SystemDataInitializer(&unknown_var_9736_ptr,puVar6,param_2[1],uVar7);
        }
      }
    }
    if (lVar1 != 0) {
      fclose(lVar1);
      lStack_d0 = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_f8);
}



// WARNING: Switch with 1 destination removed at 0x00018041d6f1 : 99 cases all go to same
// destination

uint64_t FUN_18041d6b0(int64_t param_1,int *param_2,int32_t *param_3)

{
  uint uVar1;
  uint64_t in_RAX;
  uint64_t uVar2;
  int iVar3;
  int32_t uVar4;
  
  uVar4 = 2;
  if (param_2 == (int *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x4c);
    uVar2 = (uint64_t)uVar1;
    if ((uVar1 & 0x40) != 0) {
      uVar1 = *(uint *)(param_1 + 0x54);
      uVar2 = (uint64_t)uVar1;
      if (uVar1 == 8) {
        if ((((*(int *)(param_1 + 0x58) == 0) && (*(int *)(param_1 + 0x5c) == 0)) &&
            (*(int *)(param_1 + 0x60) == 0)) && (*(int *)(param_1 + 100) == 0xff)) {
          iVar3 = 0x3d;
          goto LAB_18041db1d;
        }
        goto LAB_18041d9a7;
      }
      if (uVar1 == 0x10) {
        uVar1 = *(uint *)(param_1 + 0x58);
        uVar2 = (uint64_t)uVar1;
        if (uVar1 == 0x7c00) {
          if (((*(int *)(param_1 + 0x5c) != 0x3e0) || (*(int *)(param_1 + 0x60) != 0x1f)) ||
             (*(int *)(param_1 + 100) != 0x8000)) goto LAB_18041d9a7;
          iVar3 = 0x56;
        }
        else {
          if (((uVar1 != 0xf800) || (*(int *)(param_1 + 0x5c) != 0x7e0)) ||
             ((*(int *)(param_1 + 0x60) != 0x1f || (*(int *)(param_1 + 100) != 0))))
          goto LAB_18041d9a7;
          iVar3 = 0x55;
        }
        goto LAB_18041db1d;
      }
      if (uVar1 != 0x20) goto LAB_18041d9a7;
      uVar1 = *(uint *)(param_1 + 0x58);
      uVar2 = (uint64_t)uVar1;
      if (uVar1 == 0xff) {
        uVar2 = (uint64_t)*(uint *)(param_1 + 0x5c);
        if (*(uint *)(param_1 + 0x5c) == 0xff00) {
          if ((*(int *)(param_1 + 0x60) == 0xff0000) && (*(int *)(param_1 + 100) == -0x1000000)) {
            iVar3 = 0x1c;
          }
          else {
            if ((*(int *)(param_1 + 0x60) != 0xff0000) || (*(int *)(param_1 + 100) != 0))
            goto LAB_18041d9a7;
            iVar3 = 0x1c;
          }
          goto LAB_18041db1d;
        }
        goto LAB_18041d9a7;
      }
      if (uVar1 == 0xff0000) {
        uVar2 = (uint64_t)*(uint *)(param_1 + 0x5c);
        if (*(uint *)(param_1 + 0x5c) == 0xff00) {
          if ((*(int *)(param_1 + 0x60) == 0xff) && (*(int *)(param_1 + 100) == -0x1000000)) {
            iVar3 = 0x57;
          }
          else {
            if ((*(int *)(param_1 + 0x60) != 0xff) || (*(int *)(param_1 + 100) != 0))
            goto LAB_18041d9a7;
            iVar3 = 0x58;
          }
          goto LAB_18041db1d;
        }
        goto LAB_18041d9a7;
      }
      if (uVar1 == 0x3ff) {
        if (((*(int *)(param_1 + 0x5c) == 0xffc00) && (*(int *)(param_1 + 0x60) == 0x3ff00000)) &&
           (*(int *)(param_1 + 100) == -0x40000000)) {
          iVar3 = 0x18;
          goto LAB_18041db1d;
        }
        goto LAB_18041d9a7;
      }
      if (uVar1 == 0xffff) {
        if (((*(int *)(param_1 + 0x5c) == -0x10000) && (*(int *)(param_1 + 0x60) == 0)) &&
           (*(int *)(param_1 + 100) == 0)) {
          iVar3 = 0x23;
          goto LAB_18041db1d;
        }
        goto LAB_18041d9a7;
      }
      if (((uVar1 != 0xffffffff) || (*(int *)(param_1 + 0x5c) != 0)) ||
         ((*(int *)(param_1 + 0x60) != 0 || (*(int *)(param_1 + 100) != 0)))) goto LAB_18041d9a7;
code_r0x00018041d86b:
      iVar3 = 0x29;
      goto LAB_18041db1d;
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      uVar1 = *(uint *)(param_1 + 0x54);
      uVar2 = (uint64_t)uVar1;
      if (uVar1 == 8) {
        if (((*(int *)(param_1 + 0x58) == 0xff) && (*(int *)(param_1 + 0x5c) == 0)) &&
           ((*(int *)(param_1 + 0x60) == 0 && (*(int *)(param_1 + 100) == 0)))) {
          iVar3 = 0x3d;
          goto LAB_18041db1d;
        }
      }
      else if (uVar1 == 0x10) {
        uVar1 = *(uint *)(param_1 + 0x58);
        uVar2 = (uint64_t)uVar1;
        if (uVar1 == 0xffff) {
          if (((*(int *)(param_1 + 0x5c) != 0) || (*(int *)(param_1 + 0x60) != 0)) ||
             (*(int *)(param_1 + 100) != 0)) goto LAB_18041d9a7;
          iVar3 = 0x38;
        }
        else {
          if ((((uVar1 != 0xff) || (*(int *)(param_1 + 0x5c) != 0)) ||
              (*(int *)(param_1 + 0x60) != 0)) || (*(int *)(param_1 + 100) != 0xff00))
          goto LAB_18041d9a7;
          iVar3 = 0x31;
        }
        goto LAB_18041db1d;
      }
      goto LAB_18041d9a7;
    }
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) == 0) goto LAB_18041d9a7;
      iVar3 = *(int *)(param_1 + 0x50);
      if (iVar3 == 0x31545844) {
        iVar3 = 0x47;
        goto LAB_18041db1d;
      }
      if (iVar3 == 0x33545844) {
        iVar3 = 0x4a;
        goto LAB_18041db1d;
      }
      if (iVar3 == 0x35545844) {
        iVar3 = 0x4d;
        goto LAB_18041db1d;
      }
      if (iVar3 == 0x32545844) {
        iVar3 = 0x4a;
        goto LAB_18041db1d;
      }
      if (iVar3 == 0x34545844) {
        iVar3 = 0x4d;
        goto LAB_18041db1d;
      }
      if (iVar3 == 0x31495441) {
        iVar3 = 0x50;
        goto LAB_18041db1d;
      }
      if (iVar3 == 0x55344342) {
        iVar3 = 0x50;
        goto LAB_18041db1d;
      }
      if (iVar3 == 0x53344342) {
        iVar3 = 0x51;
        goto LAB_18041db1d;
      }
      if (iVar3 == 0x32495441) {
        iVar3 = 0x53;
        goto LAB_18041db1d;
      }
      if (iVar3 == 0x55354342) {
        iVar3 = 0x53;
        goto LAB_18041db1d;
      }
      if (iVar3 == 0x53354342) {
        iVar3 = 0x54;
        goto LAB_18041db1d;
      }
      if (iVar3 == 0x47424752) {
        iVar3 = 0x44;
        goto LAB_18041db1d;
      }
      if (iVar3 == 0x42475247) {
        iVar3 = 0x45;
        goto LAB_18041db1d;
      }
      uVar2 = 0;
      switch(iVar3 + -0x24) {
      case 0:
        iVar3 = 0xb;
        break;
      default:
        goto LAB_18041d9a7;
      case 0x4a:
        iVar3 = 0xd;
        break;
      case 0x4b:
        iVar3 = 0x36;
        break;
      case 0x4c:
        iVar3 = 0x22;
        break;
      case 0x4d:
        iVar3 = 10;
        break;
      case 0x4e:
        goto code_r0x00018041d86b;
      case 0x4f:
        iVar3 = 0x10;
        break;
      case 0x50:
        iVar3 = 2;
      }
      goto LAB_18041db1d;
    }
    iVar3 = 0x41;
    if (*(int *)(param_1 + 0x54) != 8) {
      iVar3 = 0;
    }
  }
  else {
    if (param_2[3] == 0) {
LAB_18041d6f3:
      return in_RAX & 0xffffffffffffff00;
    }
    iVar3 = *param_2;
    in_RAX = (uint64_t)(iVar3 - 1U);
    if (0x62 < iVar3 - 1U) goto LAB_18041d6f3;
    uVar2 = 0;
  }
  if (iVar3 == 0) {
LAB_18041d9a7:
    if (*(int *)(param_1 + 0x54) == 0x18) {
      uVar1 = *(uint *)(param_1 + 0x58);
      uVar2 = (uint64_t)uVar1;
      if (uVar1 == 0xff) {
        if (((*(int *)(param_1 + 0x5c) == 0xff00) && (*(int *)(param_1 + 0x60) == 0xff0000)) &&
           (*(int *)(param_1 + 100) == 0)) {
          *param_3 = 0x28;
          return 1;
        }
      }
      else if ((((uVar1 == 0xff0000) && (*(int *)(param_1 + 0x5c) == 0xff00)) &&
               (*(int *)(param_1 + 0x60) == 0xff)) && (*(int *)(param_1 + 100) == 0)) {
        *param_3 = 0x29;
      }
    }
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
LAB_18041db1d:
  switch(iVar3) {
  case 2:
    *param_3 = 0x21;
    return 1;
  case 3:
    *param_3 = 0x2a;
    return 1;
  default:
    uVar4 = 0;
code_r0x00018041dd89:
    *param_3 = uVar4;
    return 1;
  case 7:
    *param_3 = 0x2e;
    return 1;
  case 10:
    *param_3 = 0x1e;
    return 1;
  case 0xb:
    *param_3 = 9;
    return 1;
  case 0x10:
    *param_3 = 0x32;
    return 1;
  case 0x11:
    *param_3 = 0x33;
    return 1;
  case 0x14:
    *param_3 = 0x2f;
    return 1;
  case 0x1a:
    *param_3 = 0x26;
    return 1;
  case 0x1b:
    *param_3 = 0x36;
    return 1;
  case 0x1c:
    *param_3 = 7;
    return 1;
  case 0x1e:
    *param_3 = 8;
    return 1;
  case 0x22:
    *param_3 = 4;
    return 1;
  case 0x23:
    *param_3 = 3;
    return 1;
  case 0x24:
    *param_3 = 0x30;
    return 1;
  case 0x28:
    *param_3 = 0x1a;
    return 1;
  case 0x29:
    *param_3 = 0x1f;
    return 1;
  case 0x2a:
    *param_3 = 5;
    return 1;
  case 0x2c:
    *param_3 = 0x18;
    return 1;
  case 0x2d:
    *param_3 = 0x17;
    return 1;
  case 0x35:
  case 0x38:
    *param_3 = 0xc;
    return 1;
  case 0x36:
    *param_3 = 0xd;
    return 1;
  case 0x37:
    *param_3 = 0x19;
    return 1;
  case 0x39:
    *param_3 = 0x2c;
    return 1;
  case 0x3d:
    *param_3 = 0xb;
    return 1;
  case 0x3e:
    *param_3 = 0x2b;
    return 1;
  case 0x41:
    *param_3 = 6;
    return 1;
  case 0x47:
    *param_3 = 0xe;
    return 1;
  case 0x4a:
    *param_3 = 0x10;
    return 1;
  case 0x4d:
    *param_3 = 0x12;
    return 1;
  case 0x50:
    *param_3 = 0x13;
    return 1;
  case 0x53:
    *param_3 = 0x14;
    return 1;
  case 0x57:
    *param_3 = 1;
    return 1;
  case 0x58:
    goto code_r0x00018041dd89;
  case 0x62:
    *param_3 = 0x16;
    return 1;
  }
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18041dfa0(int64_t param_1,int64_t param_2)
void FUN_18041dfa0(int64_t param_1,int64_t param_2)

{
  int iVar1;
  uint uVar2;
  uint64_t *puVar3;
  int8_t uVar4;
  uint uVar5;
  void *puVar6;
  byte bVar7;
  uint64_t *puVar8;
  int8_t auStack_f8 [32];
  int iStack_d8;
  int32_t uStack_d4;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  int32_t uStack_c0;
  int8_t auStack_b8 [4];
  uint uStack_b4;
  int16_t uStack_b0;
  int16_t uStack_ac;
  int8_t uStack_a0;
  int iStack_70;
  uint uStack_6c;
  int iStack_68;
  uint uStack_4c;
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
  puVar8 = (uint64_t *)0x0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar6 = &system_buffer_ptr;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar6 = *(void **)(param_1 + 8);
  }
  iVar1 = FUN_18062dee0(puVar3,puVar6,&unknown_var_4880_ptr);
  if (((iVar1 == 0) && (uVar2 = FUN_18062e090(puVar3), 0x7f < uVar2)) &&
     (fread(&iStack_d8,4,1,puVar3[1]), iStack_d8 == 0x20534444)) {
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    fread(auStack_b8,0x7c,1,puVar3[1]);
    if (iStack_70 == 0x20) {
      if (((uStack_6c & 4) == 0) || (iStack_68 != 0x30315844)) {
        bVar7 = (byte)(uStack_b4 >> 0x17) & 1 | 2;
      }
      else {
        if (uVar2 < 0x94) goto LAB_18041e1bb;
        puVar8 = &uStack_d0;
        fread(&uStack_d0,0x14,1,puVar3[1]);
        if (uStack_d0._4_4_ == 2) {
          bVar7 = 1;
        }
        else if (uStack_d0._4_4_ == 3) {
          bVar7 = 2;
        }
        else {
          if (uStack_d0._4_4_ != 4) goto LAB_18041e1bb;
          bVar7 = 3;
        }
      }
      FUN_18041d6b0(auStack_b8,puVar8,&uStack_d4);
      uVar4 = 1;
      if ((uStack_b4 & 0x20000) != 0) {
        uVar4 = uStack_a0;
      }
      *(int8_t *)(param_2 + 0x51) = uVar4;
      uVar5 = -(uint)((uStack_4c & 0x200) != 0) & 0x2000;
      uVar2 = uVar5 | 0x8000;
      if ((uStack_6c & 3) == 0) {
        uVar2 = uVar5;
      }
      if (puVar8 == (uint64_t *)0x0) {
        if ((uStack_4c & 0x200) == 0) {
          *(int16_t *)(param_2 + 0x4e) = 1;
        }
        else {
          *(int16_t *)(param_2 + 0x4e) = 6;
        }
      }
      else {
        *(int16_t *)(param_2 + 0x4e) = uStack_c8._4_2_;
      }
      FUN_18062de90(puVar3);
      FUN_180048a50(puVar3);
      *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) | uVar2;
      *(int16_t *)(param_2 + 0x48) = uStack_ac;
      *(int16_t *)(param_2 + 0x4a) = uStack_b0;
      *(int32_t *)(param_2 + 0x40) = uStack_d4;
      *(byte *)(param_2 + 0x50) = bVar7;
      *(int16_t *)(param_2 + 0x4c) = 1;
    }
  }
LAB_18041e1bb:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_f8);
}





// 函数: void FUN_18041e0fd(void)
void FUN_18041e0fd(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int8_t unaff_BL;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  ushort unaff_R15W;
  int32_t uStackX_24;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000040;
  int16_t uStack0000000000000048;
  int16_t uStack000000000000004c;
  byte in_stack_00000058;
  uint64_t in_stack_00000088;
  uint64_t in_stack_000000a8;
  uint64_t in_stack_000000c0;
  
  FUN_18041d6b0(&stack0x00000040);
  uVar1 = unaff_R15W;
  if ((in_stack_00000040._4_4_ & 0x20000) != 0) {
    uVar1 = (ushort)in_stack_00000058;
  }
  *(char *)(unaff_RDI + 0x51) = (char)uVar1;
  uVar3 = -(uint)((in_stack_000000a8._4_4_ & 0x200) != 0) & 0x2000;
  uVar2 = uVar3 | 0x8000;
  if ((in_stack_00000088._4_4_ & 3) == 0) {
    uVar2 = uVar3;
  }
  if (unaff_R14 == 0) {
    if ((in_stack_000000a8._4_4_ & 0x200) == 0) {
      *(ushort *)(unaff_RDI + 0x4e) = unaff_R15W;
    }
    else {
      *(int16_t *)(unaff_RDI + 0x4e) = 6;
    }
  }
  else {
    *(int16_t *)(unaff_RDI + 0x4e) = in_stack_00000030._4_2_;
  }
  FUN_18062de90();
  FUN_180048a50();
  *(uint *)(unaff_RDI + 0x44) = *(uint *)(unaff_RDI + 0x44) | uVar2;
  *(int16_t *)(unaff_RDI + 0x48) = uStack000000000000004c;
  *(int16_t *)(unaff_RDI + 0x4a) = uStack0000000000000048;
  *(int32_t *)(unaff_RDI + 0x40) = uStackX_24;
  *(int8_t *)(unaff_RDI + 0x50) = unaff_BL;
  *(ushort *)(unaff_RDI + 0x4c) = unaff_R15W;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000c0 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18041e1b9(void)
void FUN_18041e1b9(void)

{
  uint64_t in_stack_000000c0;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000c0 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18041e290(int64_t param_1)
void FUN_18041e290(int64_t param_1)

{
  uint64_t uVar1;
  int64_t *plVar2;
  uint64_t *in_stack_00000030;
  
  uVar1 = system_memory_pool_ptr;
  *in_stack_00000030 = 8;
  *(int32_t *)(in_stack_00000030 + 1) = 0;
  plVar2 = (int64_t *)CoreEngineMemoryPoolAllocator(uVar1,0x4888,0x22);
  *plVar2 = param_1;
  FUN_180423e30(plVar2);
  *(int32_t *)(plVar2 + 0x909) = 0;
  *(int32_t *)((int64_t)plVar2 + 0x484c) = 0xffffffff;
  *(int8_t *)(plVar2 + 0x905) = 0xff;
  FUN_1804214d0(plVar2);
  *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 200);
  *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 0xd0);
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(plVar2);
}





// 函数: void FUN_18041e966(void)
void FUN_18041e966(void)

{
  int in_EAX;
  uint unaff_EBX;
  int64_t lVar1;
  int unaff_EBP;
  int32_t unaff_0000002c;
  int unaff_ESI;
  int32_t unaff_00000034;
  int32_t *unaff_RDI;
  int32_t *puVar2;
  int64_t in_R9;
  int64_t lVar3;
  int64_t lVar4;
  int32_t *puVar5;
  int64_t lVar6;
  int iVar7;
  float fVar8;
  int64_t in_stack_00000040;
  int32_t *in_stack_00000048;
  int64_t lStack0000000000000050;
  uint64_t uStack00000000000000f0;
  int iStack0000000000000110;
  int in_stack_00000118;
  
  lVar3 = CONCAT44(unaff_00000034,unaff_ESI) * 4;
  uStack00000000000000f0 = (uint64_t)unaff_EBX;
  lVar4 = (int64_t)in_EAX;
  puVar5 = unaff_RDI;
  lVar6 = in_R9;
  lStack0000000000000050 = lVar3;
  iStack0000000000000110 = unaff_EBP;
  do {
    iVar7 = unaff_EBP;
    if (0 < lVar4) {
      lVar1 = CONCAT44(unaff_0000002c,unaff_EBP);
      puVar2 = puVar5;
      do {
        fVar8 = (float)powf(*puVar2,0x3ee8ba2e);
        puVar2 = puVar2 + 1;
        fVar8 = fVar8 * 255.0 + 0.5;
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        if (255.0 <= fVar8) {
          fVar8 = 255.0;
        }
        *(char *)(lVar6 + lVar1) = (char)(int)fVar8;
        lVar1 = lVar1 + 1;
        unaff_RDI = in_stack_00000048;
        in_R9 = in_stack_00000040;
        lVar3 = lStack0000000000000050;
        iVar7 = in_EAX;
      } while (lVar1 < lVar4);
    }
    if (iVar7 < unaff_ESI) {
      fVar8 = (float)unaff_RDI[iStack0000000000000110 + iVar7] * 255.0 + 0.5;
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      if (255.0 <= fVar8) {
        fVar8 = 255.0;
      }
      *(char *)((iStack0000000000000110 + iVar7) + in_R9) = (char)(int)fVar8;
    }
    iStack0000000000000110 = iStack0000000000000110 + unaff_ESI;
    puVar5 = (int32_t *)((int64_t)puVar5 + lVar3);
    lVar6 = lVar6 + CONCAT44(unaff_00000034,unaff_ESI);
    uStack00000000000000f0 = uStack00000000000000f0 - 1;
    in_EAX = in_stack_00000118;
  } while (uStack00000000000000f0 != 0);
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(unaff_RDI);
}





// 函数: void FUN_18041eaaa(void)
void FUN_18041eaaa(void)

{
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18041eb10(uint64_t param_1,int param_2,int param_3,int param_4)
void FUN_18041eb10(uint64_t param_1,int param_2,int param_3,int param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t auStack_878 [32];
  int8_t auStack_858 [2048];
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_878;
  uVar2 = (int64_t)param_4 * (int64_t)param_2;
  if (0 < param_3 >> 1) {
    uVar1 = (uint64_t)(uint)(param_3 >> 1);
    do {
      if (uVar2 != 0) {
        uVar1 = 0x800;
        if (uVar2 < 0x800) {
          uVar1 = uVar2;
        }
                    // WARNING: Subroutine does not return
        memcpy(auStack_858,param_1,uVar1);
      }
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_878);
}





