#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part011_sub001_sub001.c - 11 个函数

#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part011_sub001.c - 12 个函数

#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part011.c - 12 个函数



// 函数: void FUN_180047fc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180047fc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  double dVar1;
  char cVar2;
  double dVar3;
  uint uVar4;
  uint64_t *puVar5;
  longlong lVar6;
  longlong lVar7;
  int32_t *puVar8;
  void *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  char *pcVar14;
  void *puVar15;
  uint uVar16;
  int iVar17;
  void *puStack_c8;
  void *puStack_c0;
  uint uStack_b8;
  uint64_t uStack_b0;
  void *puStack_a8;
  char *pcStack_a0;
  int32_t uStack_98;
  ulonglong uStack_90;
  void *puStack_88;
  char *pcStack_80;
  int32_t uStack_78;
  ulonglong uStack_70;
  
  lVar11 = _DAT_180c86870;
  uVar12 = 0;
  if (system_data_5240 == '\0') {
    return;
  }
  puStack_c8 = &unknown_var_3456_ptr;
  uStack_b0 = 0;
  puStack_c0 = (void *)0x0;
  uStack_b8 = 0;
  uVar16 = *(uint *)(_DAT_180c86870 + 0x180);
  uVar10 = (ulonglong)uVar16;
  if (*(longlong *)(_DAT_180c86870 + 0x178) != 0) {
    FUN_1806277c0(&puStack_c8,uVar10,param_3,param_4,1,0xfffffffffffffffe);
  }
  if (uVar16 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_c0,*(uint64_t *)(lVar11 + 0x178),uVar10);
  }
  if (puStack_c0 != (void *)0x0) {
    puStack_c0[uVar10] = 0;
  }
  uStack_b0 = CONCAT44(*(int32_t *)(lVar11 + 0x18c),(int32_t)uStack_b0);
  uStack_b8 = uVar16;
  FUN_1806277c0(&puStack_c8,5);
  *(int32_t *)(puStack_c0 + uStack_b8) = 0x73676f6c;
  *(int16_t *)((longlong)(puStack_c0 + uStack_b8) + 4) = 0x2f;
  uStack_b8 = 5;
  FUN_1806277c0(&puStack_c8,0x18);
  puVar8 = (int32_t *)(puStack_c0 + uStack_b8);
  *puVar8 = 0x66726570;
  puVar8[1] = 0x616d726f;
  puVar8[2] = 0x5f65636e;
  puVar8[3] = 0x2e676f6c;
  puVar8[4] = 0x747874;
  uStack_b8 = 0x18;
  puVar5 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
  puVar9 = &system_buffer_ptr;
  if (puStack_c0 != (void *)0x0) {
    puVar9 = puStack_c0;
  }
  *puVar5 = 0;
  *(int8_t *)(puVar5 + 2) = 0;
  FUN_18062dee0(puVar5,puVar9,&system_data_c7ec);
  uVar16 = 0;
  uVar10 = uVar12;
  if (_DAT_180bf5250 - _DAT_180bf5248 >> 8 != 0) {
    do {
      lVar13 = _DAT_180bf5248;
      lVar11 = 0;
      puStack_88 = &unknown_var_3456_ptr;
      uStack_70 = 0;
      pcStack_80 = (char *)0x0;
      uStack_78 = 0;
      FUN_1806277c0(&puStack_88,*(int32_t *)(_DAT_180bf5248 + 0x10 + uVar10));
      iVar17 = *(int *)(lVar13 + 0x10 + uVar10);
      if (iVar17 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(pcStack_80,*(uint64_t *)(lVar13 + 8 + uVar10),iVar17 + 1);
      }
      if (*(longlong *)(lVar13 + 8 + uVar10) != 0) {
        uStack_78 = 0;
        if (pcStack_80 != (char *)0x0) {
          *pcStack_80 = '\0';
        }
        uStack_70 = uStack_70 & 0xffffffff;
      }
      cVar2 = *pcStack_80;
      while (cVar2 != '\0') {
        lVar6 = strchr(&system_data_c8e4,(int)pcStack_80[lVar11]);
        if (lVar6 != 0) {
          pcStack_80[lVar11] = '_';
        }
        lVar11 = lVar11 + 1;
        cVar2 = pcStack_80[lVar11];
      }
      pcVar14 = "";
      if (pcStack_80 != (char *)0x0) {
        pcVar14 = pcStack_80;
      }
      FUN_18062e0f0(puVar5,&unknown_var_2600_ptr,pcVar14);
      dVar1 = *(double *)(lVar13 + 0xa0 + uVar10);
      dVar3 = (double)*(uint *)(lVar13 + 0xb0 + uVar10);
      if (dVar3 != 0.0) {
        FUN_18062e0f0(puVar5,&unknown_var_2632_ptr,&unknown_var_2616_ptr,dVar3);
      }
      if (dVar1 != 0.0) {
        FUN_18062e0f0(puVar5,&unknown_var_2632_ptr,&unknown_var_2648_ptr,dVar1);
      }
      dVar1 = *(double *)(lVar13 + 0xb8 + uVar10);
      dVar3 = (double)*(uint *)(lVar13 + 200 + uVar10);
      if (dVar3 != 0.0) {
        FUN_18062e0f0(puVar5,&unknown_var_2632_ptr,&unknown_var_2664_ptr,dVar3);
      }
      if (dVar1 != 0.0) {
        FUN_18062e0f0(puVar5,&unknown_var_2632_ptr,&unknown_var_2688_ptr,dVar1);
      }
      dVar1 = *(double *)(lVar13 + 0x20 + uVar10);
      if (dVar1 != 0.0) {
        FUN_18062e0f0(puVar5,&unknown_var_2632_ptr,&unknown_var_2712_ptr,dVar1);
      }
      dVar1 = *(double *)(lVar13 + 0x28 + uVar10);
      if (dVar1 != 0.0) {
        FUN_18062e0f0(puVar5,&unknown_var_2632_ptr,&unknown_var_2736_ptr,dVar1);
      }
      lVar11 = *(longlong *)(lVar13 + 0x30 + uVar10);
      dVar1 = (double)lVar11;
      if (lVar11 < 0) {
        dVar1 = dVar1 + 1.8446744073709552e+19;
      }
      FUN_18062e0f0(puVar5,&unknown_var_2788_ptr,&unknown_var_2768_ptr,
                    (double)(float)(dVar1 * 9.5367431640625e-07));
      lVar11 = *(longlong *)(lVar13 + 0x38 + uVar10);
      dVar1 = (double)lVar11;
      if (lVar11 < 0) {
        dVar1 = dVar1 + 1.8446744073709552e+19;
      }
      FUN_18062e0f0(puVar5,&unknown_var_2788_ptr,&unknown_var_2800_ptr,
                    (double)(float)(dVar1 * 9.5367431640625e-07));
      lVar11 = *(longlong *)(lVar13 + 0x40 + uVar10);
      dVar1 = (double)lVar11;
      if (lVar11 < 0) {
        dVar1 = dVar1 + 1.8446744073709552e+19;
      }
      FUN_18062e0f0(puVar5,&unknown_var_2788_ptr,&unknown_var_2832_ptr,
                    (double)(float)(dVar1 * 9.5367431640625e-07));
      lVar11 = *(longlong *)(lVar13 + 0x48 + uVar10);
      dVar1 = (double)lVar11;
      if (lVar11 < 0) {
        dVar1 = dVar1 + 1.8446744073709552e+19;
      }
      FUN_18062e0f0(puVar5,&unknown_var_2788_ptr,&unknown_var_2872_ptr,
                    (double)(float)(dVar1 * 9.5367431640625e-07));
      lVar11 = *(longlong *)(lVar13 + 0x50 + uVar10);
      dVar1 = (double)lVar11;
      if (lVar11 < 0) {
        dVar1 = dVar1 + 1.8446744073709552e+19;
      }
      FUN_18062e0f0(puVar5,&unknown_var_2788_ptr,&unknown_var_2912_ptr,
                    (double)(float)(dVar1 * 9.5367431640625e-07));
      lVar11 = *(longlong *)(lVar13 + 0x58 + uVar10);
      dVar1 = (double)lVar11;
      if (lVar11 < 0) {
        dVar1 = dVar1 + 1.8446744073709552e+19;
      }
      FUN_18062e0f0(puVar5,&unknown_var_2788_ptr,&unknown_var_2952_ptr,
                    (double)(float)(dVar1 * 9.5367431640625e-07));
      lVar11 = *(longlong *)(lVar13 + 0x60 + uVar10);
      dVar1 = (double)lVar11;
      if (lVar11 < 0) {
        dVar1 = dVar1 + 1.8446744073709552e+19;
      }
      FUN_18062e0f0(puVar5,&unknown_var_2788_ptr,&unknown_var_2976_ptr,
                    (double)(float)(dVar1 * 9.5367431640625e-07));
      lVar11 = *(longlong *)(lVar13 + 0x68 + uVar10);
      dVar1 = (double)lVar11;
      if (lVar11 < 0) {
        dVar1 = dVar1 + 1.8446744073709552e+19;
      }
      FUN_18062e0f0(puVar5,&unknown_var_2788_ptr,&unknown_var_3016_ptr,
                    (double)(float)(dVar1 * 9.5367431640625e-07));
      lVar11 = *(longlong *)(lVar13 + 0x70 + uVar10);
      dVar1 = (double)lVar11;
      if (lVar11 < 0) {
        dVar1 = dVar1 + 1.8446744073709552e+19;
      }
      FUN_18062e0f0(puVar5,&unknown_var_2788_ptr,&unknown_var_3048_ptr,
                    (double)(float)(dVar1 * 9.5367431640625e-07));
      dVar1 = *(double *)(lVar13 + 0x78 + uVar10);
      if (dVar1 != 0.0) {
        FUN_18062e0f0(puVar5,&unknown_var_2632_ptr,&unknown_var_3080_ptr,dVar1);
      }
      dVar1 = *(double *)(lVar13 + 0x80 + uVar10);
      if (dVar1 != 0.0) {
        FUN_18062e0f0(puVar5,&unknown_var_2632_ptr,&unknown_var_3096_ptr,dVar1);
      }
      lVar13 = uVar10 + 0xd0 + lVar13;
      lVar11 = *(longlong *)(lVar13 + 8);
      uVar4 = (uint)uVar12;
      while (lVar11 != lVar13) {
        lVar6 = 0;
        puStack_a8 = &unknown_var_3456_ptr;
        uStack_90 = 0;
        pcStack_a0 = (char *)0x0;
        uStack_98 = 0;
        FUN_1806277c0(&puStack_a8,*(int32_t *)(lVar11 + 0x50));
        if (*(int *)(lVar11 + 0x50) != 0) {
                    // WARNING: Subroutine does not return
          memcpy(pcStack_a0,*(uint64_t *)(lVar11 + 0x48),*(int *)(lVar11 + 0x50) + 1);
        }
        if (*(longlong *)(lVar11 + 0x48) != 0) {
          uStack_98 = 0;
          if (pcStack_a0 != (char *)0x0) {
            *pcStack_a0 = '\0';
          }
          uStack_90 = uStack_90 & 0xffffffff;
        }
        cVar2 = *pcStack_a0;
        while (cVar2 != '\0') {
          lVar7 = strchr(&system_data_c8e4,(int)pcStack_a0[lVar6]);
          if (lVar7 != 0) {
            pcStack_a0[lVar6] = '_';
          }
          lVar6 = lVar6 + 1;
          cVar2 = pcStack_a0[lVar6];
        }
        pcVar14 = "";
        if (pcStack_a0 != (char *)0x0) {
          pcVar14 = pcStack_a0;
        }
        FUN_18062e0f0(puVar5,&unknown_var_2632_ptr,pcVar14,*(uint64_t *)(lVar11 + 0x60));
        puStack_a8 = &unknown_var_3456_ptr;
        if (pcStack_a0 != (char *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        pcStack_a0 = (char *)0x0;
        uStack_90 = uStack_90 & 0xffffffff00000000;
        puStack_a8 = &unknown_var_720_ptr;
        lVar11 = func_0x00018066bd70(lVar11);
        uVar4 = uVar16;
      }
      FUN_18062e0f0(puVar5,&system_data_cc18);
      puStack_88 = &unknown_var_3456_ptr;
      if (pcStack_80 != (char *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      pcStack_80 = (char *)0x0;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      puStack_88 = &unknown_var_720_ptr;
      uVar16 = uVar4 + 1;
      uVar12 = (ulonglong)uVar16;
      uVar10 = uVar10 + 0x100;
    } while ((ulonglong)(longlong)(int)uVar16 < (ulonglong)(_DAT_180bf5250 - _DAT_180bf5248 >> 8));
  }
  iVar17 = 0;
  FUN_18062e0f0(puVar5,&unknown_var_3112_ptr);
  if ((_DAT_180bf5270 - _DAT_180bf5268) / 0x28 != 0) {
    lVar11 = 0;
    do {
      lVar6 = _DAT_180bf5268;
      lVar13 = 0;
      pcVar14 = *(char **)(_DAT_180bf5268 + 8 + lVar11);
      cVar2 = *pcVar14;
      while (cVar2 != '\0') {
        lVar7 = strchr(&system_data_c8e4,(int)pcVar14[lVar13]);
        if (lVar7 != 0) {
          *(int8_t *)(lVar13 + *(longlong *)(lVar6 + 8 + lVar11)) = 0x5f;
        }
        lVar13 = lVar13 + 1;
        pcVar14 = *(char **)(lVar6 + 8 + lVar11);
        cVar2 = pcVar14[lVar13];
      }
      puVar9 = *(void **)(_DAT_180bf5268 + 8 + lVar11);
      puVar15 = &system_buffer_ptr;
      if (puVar9 != (void *)0x0) {
        puVar15 = puVar9;
      }
      FUN_18062e0f0(puVar5,&unknown_var_2632_ptr,puVar15,*(uint64_t *)(_DAT_180bf5268 + 0x20 + lVar11));
      iVar17 = iVar17 + 1;
      lVar11 = lVar11 + 0x28;
    } while ((ulonglong)(longlong)iVar17 < (ulonglong)((_DAT_180bf5270 - _DAT_180bf5268) / 0x28));
  }
  if (puVar5[1] != 0) {
    fclose();
    puVar5[1] = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
    if (puVar5[1] != 0) {
      fclose();
      puVar5[1] = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}







// 函数: void FUN_180048910(longlong *param_1)
void FUN_180048910(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x100) {
    FUN_180046b10(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}







// 函数: void FUN_180048980(longlong *param_1)
void FUN_180048980(longlong *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 5) {
    *puVar2 = &unknown_var_3456_ptr;
    if (puVar2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar2[1] = 0;
    *(int32_t *)(puVar2 + 3) = 0;
    *puVar2 = &unknown_var_720_ptr;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}







// 函数: void FUN_180048a20(ulonglong *param_1)
void FUN_180048a20(ulonglong *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180048a50(longlong param_1)
void FUN_180048a50(longlong param_1)

{
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 8) != 0) {
      fclose();
      *(uint64_t *)(param_1 + 8) = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_1);
  }
  return;
}



longlong FUN_180048a90(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  FUN_180627ae0();
  *(uint64_t *)(param_1 + 0x20) = *(uint64_t *)(param_2 + 0x20);
  *(uint64_t *)(param_1 + 0x28) = *(uint64_t *)(param_2 + 0x28);
  uVar5 = *(uint64_t *)(param_2 + 0x38);
  *(uint64_t *)(param_1 + 0x30) = *(uint64_t *)(param_2 + 0x30);
  *(uint64_t *)(param_1 + 0x38) = uVar5;
  uVar5 = *(uint64_t *)(param_2 + 0x48);
  *(uint64_t *)(param_1 + 0x40) = *(uint64_t *)(param_2 + 0x40);
  *(uint64_t *)(param_1 + 0x48) = uVar5;
  uVar5 = *(uint64_t *)(param_2 + 0x58);
  *(uint64_t *)(param_1 + 0x50) = *(uint64_t *)(param_2 + 0x50);
  *(uint64_t *)(param_1 + 0x58) = uVar5;
  uVar2 = *(int32_t *)(param_2 + 100);
  uVar3 = *(int32_t *)(param_2 + 0x68);
  uVar4 = *(int32_t *)(param_2 + 0x6c);
  *(int32_t *)(param_1 + 0x60) = *(int32_t *)(param_2 + 0x60);
  *(int32_t *)(param_1 + 100) = uVar2;
  *(int32_t *)(param_1 + 0x68) = uVar3;
  *(int32_t *)(param_1 + 0x6c) = uVar4;
  *(uint64_t *)(param_1 + 0x70) = *(uint64_t *)(param_2 + 0x70);
  *(uint64_t *)(param_1 + 0x78) = *(uint64_t *)(param_2 + 0x78);
  *(uint64_t *)(param_1 + 0x80) = *(uint64_t *)(param_2 + 0x80);
  *(uint64_t *)(param_1 + 0x88) = *(uint64_t *)(param_2 + 0x88);
  *(uint64_t *)(param_1 + 0x90) = *(uint64_t *)(param_2 + 0x90);
  *(int32_t *)(param_1 + 0x98) = *(int32_t *)(param_2 + 0x98);
  *(int32_t *)(param_1 + 0x9c) = *(int32_t *)(param_2 + 0x9c);
  *(uint64_t *)(param_1 + 0xa0) = *(uint64_t *)(param_2 + 0xa0);
  *(uint64_t *)(param_1 + 0xa8) = *(uint64_t *)(param_2 + 0xa8);
  *(int32_t *)(param_1 + 0xb0) = *(int32_t *)(param_2 + 0xb0);
  *(int32_t *)(param_1 + 0xb4) = *(int32_t *)(param_2 + 0xb4);
  *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_2 + 0xb8);
  *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_2 + 0xc0);
  *(int32_t *)(param_1 + 200) = *(int32_t *)(param_2 + 200);
  *(int32_t *)(param_1 + 0xcc) = *(int32_t *)(param_2 + 0xcc);
  puVar1 = (uint64_t *)(param_1 + 0xd0);
  *puVar1 = 0;
  *(uint64_t *)(param_1 + 0xd8) = 0;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(uint64_t *)(param_1 + 0xe8) = 0;
  *(uint64_t *)(param_1 + 0xf0) = 0;
  *(int32_t *)(param_1 + 0xf8) = *(int32_t *)(param_2 + 0xf8);
  *puVar1 = puVar1;
  *(uint64_t **)(param_1 + 0xd8) = puVar1;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(int8_t *)(param_1 + 0xe8) = 0;
  *(uint64_t *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_2 + 0xe0) != 0) {
    puVar9 = (uint64_t *)FUN_180049010(puVar1,*(longlong *)(param_2 + 0xe0),puVar1,param_4,uVar10)
    ;
    *(uint64_t **)(param_1 + 0xe0) = puVar9;
    puVar8 = (uint64_t *)*puVar9;
    puVar7 = puVar9;
    while (puVar6 = puVar8, puVar6 != (uint64_t *)0x0) {
      puVar7 = puVar6;
      puVar8 = (uint64_t *)*puVar6;
    }
    *puVar1 = puVar7;
    puVar1 = (uint64_t *)puVar9[1];
    while (puVar7 = puVar1, puVar7 != (uint64_t *)0x0) {
      puVar9 = puVar7;
      puVar1 = (uint64_t *)puVar7[1];
    }
    *(uint64_t **)(param_1 + 0xd8) = puVar9;
    *(uint64_t *)(param_1 + 0xf0) = *(uint64_t *)(param_2 + 0xf0);
  }
  return param_1;
}



uint64_t FUN_180048c70(uint64_t param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180049470();
  if ((param_2 & 1) != 0) {
    free(param_1,200,param_3,param_4,uVar1);
  }
  return param_1;
}



uint64_t *
FUN_180048cc0(longlong *param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             longlong param_5)

{
  byte bVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte *pbVar5;
  uint uVar6;
  longlong lVar7;
  uint64_t uVar8;
  longlong *plStackX_8;
  
  plVar4 = (longlong *)*param_1;
  if ((param_4 == plVar4) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (*(int *)(param_5 + 0x10) != 0)) {
      param_4 = plVar4;
      if (*(int *)(plVar4 + 6) != 0) {
        pbVar5 = *(byte **)(param_5 + 8);
        lVar7 = plVar4[5] - (longlong)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar7];
          if (bVar1 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_180048dd7;
      }
LAB_180048db7:
      uVar8 = 0;
LAB_180048dba:
      if (param_4 != (longlong *)0x0) {
        FUN_180048ee0(param_1,param_2,param_4,uVar8,param_5);
        return param_2;
      }
    }
  }
  else {
    plVar4 = (longlong *)func_0x00018066bd70(param_4);
    if (*(int *)(param_5 + 0x10) != 0) {
      if ((int)param_4[6] != 0) {
        pbVar5 = *(byte **)(param_5 + 8);
        lVar7 = param_4[5] - (longlong)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar7];
          if (bVar1 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_180048dd7;
      }
      if ((int)plVar4[6] != 0) {
        pbVar5 = (byte *)plVar4[5];
        lVar7 = *(longlong *)(param_5 + 8) - (longlong)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar7];
          if (bVar1 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        if (0 < (int)(bVar1 - uVar6)) {
          if (*param_4 == 0) goto LAB_180048db7;
          uVar8 = 1;
          param_4 = plVar4;
          goto LAB_180048dba;
        }
      }
    }
  }
LAB_180048dd7:
  bVar2 = true;
  plVar4 = (longlong *)param_1[2];
  plVar3 = param_1;
  while (plVar4 != (longlong *)0x0) {
    plVar3 = plVar4;
    if ((int)plVar4[6] == 0) {
      bVar2 = false;
LAB_180048e00:
      plVar4 = (longlong *)*plVar4;
    }
    else {
      if (*(int *)(param_5 + 0x10) == 0) {
        bVar2 = true;
      }
      else {
        pbVar5 = (byte *)plVar4[5];
        lVar7 = *(longlong *)(param_5 + 8) - (longlong)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar7];
          if (bVar1 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar6);
      }
      if (!bVar2) goto LAB_180048e00;
      plVar4 = (longlong *)plVar4[1];
    }
  }
  plVar4 = plVar3;
  if (bVar2) {
    if (plVar3 != (longlong *)param_1[1]) {
      plVar4 = (longlong *)func_0x00018066b9a0(plVar3);
      goto LAB_180048e20;
    }
  }
  else {
LAB_180048e20:
    if (*(int *)(param_5 + 0x10) == 0) goto LAB_180048e74;
    if ((int)plVar4[6] != 0) {
      pbVar5 = *(byte **)(param_5 + 8);
      lVar7 = plVar4[5] - (longlong)pbVar5;
      do {
        bVar1 = *pbVar5;
        uVar6 = (uint)pbVar5[lVar7];
        if (bVar1 != uVar6) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_180048e74;
    }
  }
  FUN_180048ee0(param_1,&plStackX_8,plVar3,0,param_5);
  plVar4 = plStackX_8;
LAB_180048e74:
  *param_2 = plVar4;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180048ee0(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_180048ee0(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  longlong param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint64_t *puVar4;
  longlong lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  uVar6 = 0;
  if (((char)param_4 != '\0') || (param_3 == param_1)) goto LAB_180048f62;
  if (*(int *)(param_3 + 0x30) != 0) {
    if (*(int *)(param_5 + 0x10) == 0) goto LAB_180048f62;
    pbVar2 = *(byte **)(param_3 + 0x28);
    lVar5 = *(longlong *)(param_5 + 8) - (longlong)pbVar2;
    do {
      bVar1 = *pbVar2;
      uVar3 = (uint)pbVar2[lVar5];
      if (bVar1 != uVar3) break;
      pbVar2 = pbVar2 + 1;
    } while (uVar3 != 0);
    if (0 < (int)(bVar1 - uVar3)) goto LAB_180048f62;
  }
  uVar6 = 1;
LAB_180048f62:
  lVar5 = FUN_18062b420(_DAT_180c8ed18,0x68,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  FUN_180627ae0(lVar5 + 0x20,param_5);
  puVar4 = (uint64_t *)(lVar5 + 0x40);
  *(uint64_t *)(lVar5 + 0x50) = 0;
  *(uint64_t *)(lVar5 + 0x58) = 0;
  *(uint64_t *)(lVar5 + 0x60) = 0;
  *puVar4 = &unknown_var_720_ptr;
  *(uint64_t *)(lVar5 + 0x48) = 0;
  *(int32_t *)(lVar5 + 0x50) = 0;
  *puVar4 = &unknown_var_3456_ptr;
  *(uint64_t *)(lVar5 + 0x58) = 0;
  *(uint64_t *)(lVar5 + 0x48) = 0;
  *(int32_t *)(lVar5 + 0x50) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar5,param_3,param_1,uVar6,uVar7,puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180049010(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  puVar3 = (uint64_t *)FUN_180049110();
  if (*param_2 != 0) {
    uVar5 = FUN_180049010(param_1,*param_2,puVar3,param_4,uVar5);
    *puVar3 = uVar5;
  }
  puVar2 = puVar3;
  for (plVar1 = (longlong *)param_2[1]; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[1]) {
    puVar4 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x68,*(int8_t *)(param_1 + 0x28));
    FUN_180627ae0(puVar4 + 4,plVar1 + 4);
    FUN_180627ae0(puVar4 + 8,plVar1 + 8);
    puVar4[0xc] = plVar1[0xc];
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = puVar2;
    *(char *)(puVar4 + 3) = (char)plVar1[3];
    puVar2[1] = puVar4;
    if (*plVar1 != 0) {
      uVar5 = FUN_180049010(param_1,*plVar1,puVar4);
      *puVar4 = uVar5;
    }
    puVar2 = puVar4;
  }
  return puVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180049110(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)
           FUN_18062b420(_DAT_180c8ed18,0x68,*(int8_t *)(param_1 + 0x28),param_4,
                         0xfffffffffffffffe);
  FUN_180627ae0(puVar1 + 4,param_2 + 0x20);
  FUN_180627ae0(puVar1 + 8,param_2 + 0x40);
  puVar1[0xc] = *(uint64_t *)(param_2 + 0x60);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = param_3;
  *(int8_t *)(puVar1 + 3) = *(int8_t *)(param_2 + 0x18);
  return puVar1;
}



uint64_t *
FUN_1800491b0(uint64_t *param_1,longlong *param_2,longlong *param_3,uint64_t *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int32_t uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = param_4;
  if (param_2 != param_3) {
    plVar5 = param_2 + 0x1b;
    do {
      *param_4 = &unknown_var_720_ptr;
      param_4[1] = 0;
      *(int32_t *)(param_4 + 2) = 0;
      *param_4 = &unknown_var_3456_ptr;
      param_4[3] = 0;
      param_4[1] = 0;
      *(int32_t *)(param_4 + 2) = 0;
      *(int *)(param_4 + 2) = (int)plVar5[-0x19];
      param_4[1] = plVar5[-0x1a];
      *(int32_t *)((longlong)param_4 + 0x1c) = *(int32_t *)((longlong)plVar5 + -0xbc);
      *(int *)(param_4 + 3) = (int)plVar5[-0x18];
      *(int32_t *)(plVar5 + -0x19) = 0;
      plVar5[-0x1a] = 0;
      plVar5[-0x18] = 0;
      param_4[4] = plVar5[-0x17];
      param_4[5] = plVar5[-0x16];
      lVar4 = plVar5[-0x14];
      param_4[6] = plVar5[-0x15];
      param_4[7] = lVar4;
      lVar4 = plVar5[-0x12];
      param_4[8] = plVar5[-0x13];
      param_4[9] = lVar4;
      lVar4 = plVar5[-0x10];
      param_4[10] = plVar5[-0x11];
      param_4[0xb] = lVar4;
      lVar4 = plVar5[-0xe];
      param_4[0xc] = plVar5[-0xf];
      param_4[0xd] = lVar4;
      param_4[0xe] = plVar5[-0xd];
      param_4[0xf] = plVar5[-0xc];
      param_4[0x10] = plVar5[-0xb];
      param_4[0x11] = plVar5[-10];
      param_4[0x12] = plVar5[-9];
      *(int *)(param_4 + 0x13) = (int)plVar5[-8];
      *(int32_t *)((longlong)param_4 + 0x9c) = *(int32_t *)((longlong)plVar5 + -0x3c);
      param_4[0x14] = plVar5[-7];
      param_4[0x15] = plVar5[-6];
      *(int *)(param_4 + 0x16) = (int)plVar5[-5];
      *(int32_t *)((longlong)param_4 + 0xb4) = *(int32_t *)((longlong)plVar5 + -0x24);
      param_4[0x17] = plVar5[-4];
      param_4[0x18] = plVar5[-3];
      *(int *)(param_4 + 0x19) = (int)plVar5[-2];
      *(int32_t *)((longlong)param_4 + 0xcc) = *(int32_t *)((longlong)plVar5 + -0xc);
      plVar2 = param_4 + 0x1a;
      *plVar2 = 0;
      param_4[0x1b] = 0;
      param_4[0x1c] = 0;
      param_4[0x1d] = 0;
      param_4[0x1e] = 0;
      *(int *)(param_4 + 0x1f) = (int)plVar5[4];
      *plVar2 = (longlong)plVar2;
      param_4[0x1b] = plVar2;
      param_4[0x1c] = 0;
      *(int8_t *)(param_4 + 0x1d) = 0;
      param_4[0x1e] = 0;
      param_4[0x1e] = plVar5[3];
      plVar5[3] = 0;
      uVar3 = *(int32_t *)(param_4 + 0x1f);
      *(int *)(param_4 + 0x1f) = (int)plVar5[4];
      *(int32_t *)(plVar5 + 4) = uVar3;
      if (param_4[0x1c] == 0) {
        if (plVar5[1] != 0) {
          plVar1 = plVar5 + -1;
          *plVar2 = *plVar1;
          param_4[0x1b] = *plVar5;
          lVar4 = plVar5[1];
          param_4[0x1c] = lVar4;
          *(longlong **)(lVar4 + 0x10) = plVar2;
          *plVar1 = (longlong)plVar1;
          *plVar5 = (longlong)plVar1;
          plVar5[1] = 0;
        }
      }
      else if (plVar5[1] == 0) {
        plVar5[-1] = *plVar2;
        *plVar5 = param_4[0x1b];
        lVar4 = param_4[0x1c];
        plVar5[1] = lVar4;
        *(longlong **)(lVar4 + 0x10) = plVar5 + -1;
        *plVar2 = (longlong)plVar2;
        param_4[0x1b] = plVar2;
        param_4[0x1c] = 0;
      }
      else {
        lVar4 = *plVar2;
        plVar1 = plVar5 + -1;
        *plVar2 = *plVar1;
        *plVar1 = lVar4;
        lVar4 = param_4[0x1b];
        param_4[0x1b] = *plVar5;
        *plVar5 = lVar4;
        lVar4 = param_4[0x1c];
        param_4[0x1c] = plVar5[1];
        plVar5[1] = lVar4;
        *(longlong **)(param_4[0x1c] + 0x10) = plVar2;
        *(longlong **)(plVar5[1] + 0x10) = plVar1;
      }
      param_4 = param_4 + 0x20;
      *param_1 = param_4;
      plVar2 = plVar5 + 5;
      plVar5 = plVar5 + 0x20;
    } while (plVar2 != param_3);
  }
  return param_1;
}







// 函数: void FUN_180049470(uint64_t *param_1)
void FUN_180049470(uint64_t *param_1)

{
  *param_1 = &unknown_var_3280_ptr;
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ(param_1 + 4);
  *param_1 = &unknown_var_1000_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  return;
}



uint64_t FUN_1800494f0(uint64_t param_1,ulonglong param_2)

{
  FUN_180049470();
  if ((param_2 & 1) != 0) {
    free(param_1,0xc0);
  }
  return param_1;
}







// 函数: void FUN_180049550(longlong param_1,int8_t param_2)
void FUN_180049550(longlong param_1,int8_t param_2)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1 + 0x48);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  *(int8_t *)(param_1 + 0x98) = param_2;
  iVar1 = _Mtx_unlock(param_1 + 0x48);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1800495d0(uint64_t param_1,uint64_t *param_2,longlong *param_3)
void FUN_1800495d0(uint64_t param_1,uint64_t *param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int8_t auStack_58 [32];
  longlong lStack_38;
  int iStack_30;
  ulonglong uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_58;
  if (*param_3 < 1) {
    lStack_38 = 0;
    iStack_30 = 0;
  }
  else {
    lVar3 = _Xtime_get_ticks();
    lVar3 = (lVar3 + *param_3 * 10) * 100;
    lStack_38 = lVar3 / 1000000000;
    iStack_30 = (int)lVar3 + (int)lStack_38 * -1000000000;
  }
  iVar1 = _Mtx_current_owns(*param_2);
  if (iVar1 == 0) {
    __Throw_Cpp_error_std__YAXH_Z(4);
  }
  uVar2 = _Cnd_timedwait(param_1,*param_2,&lStack_38);
  if ((uVar2 & 0xfffffffd) != 0) {
    __Throw_C_error_std__YAXH_Z(uVar2);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_58);
}



int8_t FUN_1800496b0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int8_t uVar1;
  int iVar2;
  uint64_t uStackX_8;
  uint64_t uVar3;
  longlong lStack_20;
  char cStack_18;
  
  uVar3 = 0xfffffffffffffffe;
  lStack_20 = param_1 + 0x48;
  cStack_18 = 0;
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  cStack_18 = '\x01';
  if (*(char *)(param_1 + 0x98) == '\x01') {
    uVar1 = 1;
  }
  else {
    uStackX_8 = 1;
    FUN_1800495d0(param_1,&lStack_20,&uStackX_8,param_4,uVar3);
    uVar1 = *(int8_t *)(param_1 + 0x98);
  }
  *(int8_t *)(param_1 + 0x98) = 0;
  if (cStack_18 != '\0') {
    iVar2 = _Mtx_unlock(lStack_20);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
  return uVar1;
}







// 函数: void FUN_180049770(void)
void FUN_180049770(void)

{
  _Cnd_destroy_in_situ();
  return;
}







