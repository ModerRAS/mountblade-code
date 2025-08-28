#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part001.c - 18 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_06.c - 500 个函数


// 函数: void FUN_1803a39da(uint64_t param_1,uint64_t param_2)
void FUN_1803a39da(uint64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  puVar1 = (uint64_t *)FUN_18062b1e0(param_1,param_2,(int)param_2 + -0x68,3);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(int16_t *)(puVar1 + 2) = 0;
  *(int8_t *)((longlong)puVar1 + 0x12) = 3;
  *(uint64_t *)((longlong)puVar1 + 0x54) = 0;
  *(int8_t *)((longlong)puVar1 + 0x66) = 0;
  *(uint64_t *)((longlong)puVar1 + 0x14) = 0;
  *(uint64_t *)((longlong)puVar1 + 0x1c) = 0;
  *(uint64_t *)((longlong)puVar1 + 0x24) = 0;
  *(uint64_t *)((longlong)puVar1 + 0x2c) = 0;
  *(uint64_t *)((longlong)puVar1 + 0x34) = 0;
  *(uint64_t *)((longlong)puVar1 + 0x3c) = 0;
  *(uint64_t *)((longlong)puVar1 + 0x44) = 0;
  *(uint64_t *)((longlong)puVar1 + 0x4c) = 0;
  *(uint64_t **)(unaff_RDI + 0x790 + unaff_RSI * 8) = puVar1;
  *(int16_t *)(puVar1 + 0xc) = 1;
  *(int32_t *)((longlong)puVar1 + 0x5c) = 0x80008;
  *(int32_t *)((longlong)puVar1 + 0x62) = 0x1020001;
  *(int32_t *)((longlong)puVar1 + 0x54) = 0xb;
  FUN_1802a1bc0(puVar1);
  puVar1 = *(uint64_t **)(unaff_RDI + 0x790 + unaff_RSI * 8);
  if (puVar1 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    memset(*puVar1,0,
           (longlong)
           (int)((uint)*(ushort *)((longlong)puVar1 + 0x5e) *
                (uint)*(ushort *)((longlong)puVar1 + 0x5c)));
  }
  return;
}






// 函数: void FUN_1803a3a83(void)
void FUN_1803a3a83(void)

{
                    // WARNING: Subroutine does not return
  memset();
}






// 函数: void FUN_1803a3b75(void)
void FUN_1803a3b75(void)

{
  return;
}






// 函数: void FUN_1803a3b84(void)
void FUN_1803a3b84(void)

{
  return;
}






// 函数: void FUN_1803a3b90(longlong param_1,longlong *param_2)
void FUN_1803a3b90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  
  plStackX_8 = (longlong *)*param_2;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  plVar1 = plStackX_8;
  pplStackX_18 = &plStackX_8;
  plStackX_10 = plStackX_8;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
  }
  plStackX_10 = *(longlong **)(param_1 + 0x138);
  *(longlong **)(param_1 + 0x138) = plVar1;
  if (plStackX_10 != (longlong *)0x0) {
    (**(code **)(*plStackX_10 + 0x38))();
  }
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}






// 函数: void FUN_1803a3c20(longlong param_1,longlong param_2,longlong param_3,int32_t param_4,
void FUN_1803a3c20(longlong param_1,longlong param_2,longlong param_3,int32_t param_4,
                  int32_t param_5)

{
  longlong *plVar1;
  uint64_t *puVar2;
  longlong *plStackX_10;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_1803a4b20(param_3);
  puVar2 = (uint64_t *)
           (**(code **)(**(longlong **)(param_2 + 0x318) + 0x68))
                     (*(longlong **)(param_2 + 0x318),&plStackX_10,param_3,
                      *(int32_t *)(*(longlong *)(param_1 + 0x10) + 0x1c),param_4,param_5,uVar3);
  uVar3 = *puVar2;
  *puVar2 = 0;
  plVar1 = *(longlong **)(param_3 + 0x58);
  *(uint64_t *)(param_3 + 0x58) = uVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if (plStackX_10 != (longlong *)0x0) {
    (**(code **)(*plStackX_10 + 0x38))();
  }
  return;
}






// 函数: void FUN_1803a3cf0(longlong param_1)
void FUN_1803a3cf0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x878) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x878) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a3d60(longlong param_1,longlong param_2,int32_t *param_3,int32_t param_4,
void FUN_1803a3d60(longlong param_1,longlong param_2,int32_t *param_3,int32_t param_4,
                  int32_t param_5,uint64_t param_6,longlong *param_7,int param_8)

{
  ulonglong *puVar1;
  int iVar2;
  int32_t uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piVar7;
  int32_t *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint *puVar11;
  ulonglong *puVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uStackX_8;
  
  uVar6 = 0;
  iVar2 = *(int *)(param_2 + 0x10);
  *(int32_t *)(param_1 + 0x24) = *param_3;
  *(int32_t *)(param_1 + 0x28) = param_3[1];
  *(int32_t *)(param_1 + 0x2c) = param_3[2];
  if (0 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x78)) {
    puVar8 = (int32_t *)(param_1 + 0x30);
    uVar19 = uVar6;
    do {
      uVar10 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar10;
      *puVar8 = *(int32_t *)((longlong)param_3 + (-0x24 - param_1) + (longlong)puVar8);
      puVar8 = puVar8 + 1;
    } while ((int)uVar10 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x78));
  }
  *(int32_t *)(param_1 + 0x860) = param_3[0x13];
  *(int32_t *)(param_1 + 0x864) = param_3[0x14];
  *(int32_t *)(param_1 + 0x868) = param_3[0x15];
  *(int32_t *)(param_1 + 0x86c) = param_3[0x16];
  iVar14 = (1 << ((byte)*(int32_t *)(param_1 + 0x28) & 0x1f)) + 1;
  *(int32_t *)(param_1 + 0x74) = param_3[0x17];
  *(int32_t *)(param_1 + 0x78) = param_3[0x18];
  uVar3 = param_3[0x19];
  *(int *)(param_1 + 0x70) = iVar14;
  *(int32_t *)(param_1 + 0x7c) = uVar3;
  if (*(longlong *)(param_1 + 0x870) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puVar1 = (ulonglong *)(param_1 + 0x878);
  *(uint64_t *)(param_1 + 0x870) = 0;
  if (*puVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar16 = (longlong)(iVar14 * iVar14);
  *puVar1 = 0;
  uVar19 = uVar6;
  if (lVar16 != 0) {
    uVar19 = FUN_18062b420(_DAT_180c8ed18,lVar16 * 8,0x23);
  }
  *puVar1 = uVar19;
  if (param_8 == 0x3252475a) {
    uVar19 = uVar6;
    if (lVar16 != 0) {
      uVar19 = FUN_18062b420(_DAT_180c8ed18,lVar16 * 4,0x23);
    }
    *(ulonglong *)(param_1 + 0x870) = uVar19;
    iVar15 = *(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x70);
    iVar14 = *(int *)param_7[1];
    piVar7 = (int *)param_7[1] + 1;
    param_7[1] = (longlong)piVar7;
    if (iVar14 == iVar15) {
                    // WARNING: Subroutine does not return
      memcpy(*(uint64_t *)(param_1 + 0x870),piVar7,(longlong)(iVar15 * 4));
    }
    if (0 < iVar2) {
      FUN_180626f80(&unknown_var_8216_ptr,param_4,param_5);
    }
    if (0 < iVar15) {
      puVar8 = *(int32_t **)(param_1 + 0x870);
      for (lVar16 = (longlong)iVar15; lVar16 != 0; lVar16 = lVar16 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
    }
  }
  uVar10 = *(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x70);
  if ((param_8 + 0xcdadb8a6U & 0xfcffffff) == 0) {
    uStackX_8 = 0;
    lVar16 = (longlong)(int)uVar10;
    uVar19 = uVar6;
    do {
      puVar11 = (uint *)param_7[1];
      uVar5 = *puVar11;
      param_7[1] = (longlong)(puVar11 + 1);
      uVar20 = puVar11[1];
      uVar17 = (ulonglong)(int)uVar20;
      puVar11 = puVar11 + 2;
      param_7[1] = (longlong)puVar11;
      if (uVar5 == (uint)uVar19) {
        if (uVar20 == uVar10) {
          if (lVar16 != 0) {
            uVar6 = FUN_18062b420(_DAT_180c8ed18,lVar16,CONCAT71((int7)(uVar19 >> 8),3));
            puVar11 = (uint *)param_7[1];
          }
                    // WARNING: Subroutine does not return
          memcpy(uVar6,puVar11,lVar16);
        }
        FUN_180626f80(&unknown_var_8176_ptr,param_4,param_5);
      }
      else {
        uVar5 = (uint)uVar19;
        if ((ulonglong)((param_7[2] - (longlong)puVar11) + *param_7) <= uVar17) {
          FUN_180639bf0(param_7,(longlong)puVar11 + (uVar17 - *param_7));
          puVar11 = (uint *)param_7[1];
          uVar5 = uStackX_8;
        }
        uStackX_8 = uVar5;
        param_7[1] = (longlong)puVar11 + uVar17;
      }
      uStackX_8 = uStackX_8 + 1;
      uVar19 = (ulonglong)uStackX_8;
    } while ((int)uStackX_8 < 4);
    uVar19 = uVar6;
    if ((0 < (int)uVar10) && (1 < uVar10)) {
      puVar18 = (ulonglong *)*puVar1;
      puVar12 = (ulonglong *)(_DAT_180c8aa00 + 0x38);
      uVar17 = *puVar12;
      if (((puVar1 < puVar18) || (puVar18 + (int)(uVar10 - 1) < puVar1)) &&
         ((puVar12 < puVar18 || (uVar19 = 0, puVar18 + (int)(uVar10 - 1) < puVar12)))) {
        uVar5 = uVar10 & 0x80000001;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
        }
        do {
          uVar20 = (int)uVar6 + 2;
          uVar6 = (ulonglong)uVar20;
        } while ((int)uVar20 < (int)(uVar10 - uVar5));
        for (uVar9 = (ulonglong)((longlong)((int)((uVar10 - uVar5) + 1) / 2) << 4) >> 3;
            uVar19 = uVar6, uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar18 = uVar17;
          puVar18 = puVar18 + 1;
        }
      }
    }
    lVar4 = _DAT_180c8aa00;
    for (lVar13 = (longlong)(int)uVar19; lVar13 < lVar16; lVar13 = lVar13 + 1) {
      *(uint64_t *)(*puVar1 + lVar13 * 8) = *(uint64_t *)(lVar4 + 0x38);
    }
    iVar2 = *(int *)(param_1 + 0x70);
    if (((param_8 + 0xccadb8a6U & 0xfcffffff) == 0) && (param_8 != 0x3652475a)) {
      uVar6 = (ulonglong)*(int *)param_7[1];
      piVar7 = (int *)param_7[1] + 1;
      param_7[1] = (longlong)piVar7;
      if ((ulonglong)((param_7[2] - (longlong)piVar7) + *param_7) <= uVar6) {
        FUN_180639bf0(param_7,(uVar6 - *param_7) + (longlong)piVar7);
        piVar7 = (int *)param_7[1];
      }
      param_7[1] = (longlong)piVar7 + uVar6;
    }
    else if (param_8 == 0x3252475a) {
      lVar16 = *param_7;
      iVar14 = *(int *)param_7[1];
      lVar13 = (longlong)iVar14;
      piVar7 = (int *)param_7[1] + 1;
      param_7[1] = (longlong)piVar7;
      uVar6 = (param_7[2] - (longlong)piVar7) + lVar16;
      uVar19 = lVar13 * 4;
      if (iVar14 == iVar2 * iVar2) {
        if (uVar6 <= uVar19) {
          FUN_180639bf0(param_7,(uVar19 - lVar16) + (longlong)piVar7);
          piVar7 = (int *)param_7[1];
        }
        param_7[1] = (longlong)(piVar7 + lVar13);
      }
      else {
        if (uVar6 <= uVar19) {
          FUN_180639bf0(param_7,(uVar19 - lVar16) + (longlong)piVar7);
          piVar7 = (int *)param_7[1];
        }
        param_7[1] = (longlong)(piVar7 + lVar13);
        if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x31) != '\0') {
          FUN_180626f80(&unknown_var_8128_ptr,param_4,param_5);
          *(int8_t *)(*(longlong *)(param_1 + 0x10) + 0x31) = 0;
        }
      }
      goto LAB_1803a429d;
    }
  }
  if (((param_8 + 0xccadb8a6U & 0xfcffffff) == 0) && (param_8 != 0x3652475a)) {
    FUN_1803a1df0(param_1);
    return;
  }
  if (param_8 != 0x3252475a) {
    return;
  }
LAB_1803a429d:
  FUN_1803a1590(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a42d0(longlong param_1,longlong param_2,int32_t *param_3,int32_t param_4,
void FUN_1803a42d0(longlong param_1,longlong param_2,int32_t *param_3,int32_t param_4,
                  int32_t param_5)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint64_t *puVar6;
  int32_t *puVar7;
  uint uVar8;
  longlong lVar9;
  void *puVar10;
  int8_t auStack_1c8 [32];
  int32_t uStack_1a8;
  int iStack_198;
  int iStack_194;
  int aiStack_190 [6];
  longlong lStack_178;
  int8_t auStack_168 [288];
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1c8;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar5 = 0;
  *(int32_t *)(param_1 + 0x24) = *param_3;
  iVar3 = param_3[1];
  *(int *)(param_1 + 0x28) = iVar3;
  *(int32_t *)(param_1 + 0x2c) = param_3[2];
  if (0 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x78)) {
    puVar7 = (int32_t *)(param_1 + 0x30);
    uVar4 = uVar5;
    do {
      uVar8 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar8;
      *puVar7 = *(int32_t *)((longlong)param_3 + (-0x24 - param_1) + (longlong)puVar7);
      puVar7 = puVar7 + 1;
    } while ((int)uVar8 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x78));
    iVar3 = *(int *)(param_1 + 0x28);
  }
  if (iVar3 < 2) {
    iVar3 = 2;
  }
  else if (10 < iVar3) {
    iVar3 = 10;
  }
  *(int *)(param_1 + 0x28) = iVar3;
  *(int32_t *)(param_1 + 0x860) = param_3[0x13];
  *(int32_t *)(param_1 + 0x864) = param_3[0x14];
  *(int32_t *)(param_1 + 0x868) = param_3[0x15];
  *(int32_t *)(param_1 + 0x86c) = param_3[0x16];
  *(int32_t *)(param_1 + 0x74) = param_3[0x17];
  *(int32_t *)(param_1 + 0x78) = param_3[0x18];
  *(int32_t *)(param_1 + 0x7c) = param_3[0x19];
  iVar3 = (1 << ((byte)*(int32_t *)(param_1 + 0x28) & 0x1f)) + 1;
  *(int *)(param_1 + 0x70) = iVar3;
  lVar9 = (longlong)(iVar3 * iVar3);
  uVar4 = uVar5;
  iStack_198 = iVar1;
  lStack_178 = param_2;
  if (iVar3 * iVar3 != 0) {
    uVar4 = FUN_18062b420(_DAT_180c8ed18,lVar9 * 4,3);
  }
  *(ulonglong *)(param_1 + 0x870) = uVar4;
  if (lVar9 != 0) {
    uVar5 = FUN_18062b420(_DAT_180c8ed18,lVar9 * 8,3);
  }
  uVar2 = _DAT_180c8ed18;
  *(ulonglong *)(param_1 + 0x878) = uVar5;
  puVar6 = (uint64_t *)FUN_18062b1e0(uVar2,0x18,8,3);
  uStack_1a8 = param_5;
  *puVar6 = 0;
  puVar6[1] = 0;
  iVar3 = *(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x70);
  puVar10 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar10 = *(void **)(param_2 + 8);
  }
  FUN_180060680(auStack_168,&unknown_var_8104_ptr,puVar10,param_4);
  FUN_18062dee0(puVar6,auStack_168,&unknown_var_4880_ptr);
  if (0 < iVar1) {
    if (puVar6[1] == 0) {
      FUN_180626f80(&unknown_var_8344_ptr,param_4,param_5);
    }
    else {
      fread(&iStack_194,4,1);
      if ((iStack_194 == 0x33525453) && (fread(aiStack_190,4,1,puVar6[1]), aiStack_190[0] == iVar3))
      {
        fread(*(uint64_t *)(param_1 + 0x870),4,(longlong)iVar3,puVar6[1]);
      }
      if (puVar6[1] != 0) {
        fclose();
        puVar6[1] = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
      }
    }
  }
  if (puVar6[1] != 0) {
    fclose();
    puVar6[1] = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar6);
}



int8_t FUN_1803a49f0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = param_3[1];
  fVar2 = param_2[1];
  fVar3 = param_3[2];
  fVar4 = param_2[2];
  fVar7 = (*param_3 - *param_2) * param_1[4] + (fVar1 - fVar2) * param_1[5] +
          (fVar3 - fVar4) * param_1[6];
  fVar6 = (param_1[1] - param_2[1]) * param_1[5] + (*param_1 - *param_2) * param_1[4] +
          (param_1[2] - param_2[2]) * param_1[6];
  if (1e-05 <= ABS(fVar7)) {
    fVar6 = fVar6 / fVar7;
    fVar7 = param_2[1];
    fVar5 = param_2[2];
    *param_4 = (*param_3 - *param_2) * fVar6 + *param_2;
    param_4[1] = (fVar1 - fVar2) * fVar6 + fVar7;
    param_4[2] = (fVar3 - fVar4) * fVar6 + fVar5;
    param_4[3] = 3.4028235e+38;
    if ((0.0 <= fVar6) && (fVar6 <= 1.0)) {
      return 1;
    }
  }
  else if (fVar6 == 0.0) {
    return 1;
  }
  return 0;
}






// 函数: void FUN_1803a4b20(longlong param_1)
void FUN_1803a4b20(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x318) + 0x90))();
    plVar1 = *(longlong **)(param_1 + 0x58);
    *(uint64_t *)(param_1 + 0x58) = 0;
    if (plVar1 != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001803a4b70. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*plVar1 + 0x38))();
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a4b80(longlong *param_1,longlong param_2,int32_t param_3,int param_4,
void FUN_1803a4b80(longlong *param_1,longlong param_2,int32_t param_3,int param_4,
                  int32_t param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (*param_1 != 0) {
    return;
  }
  lVar3 = 0;
  iVar4 = param_4 * param_4;
  *(int32_t *)(param_1 + 2) = param_5;
  param_1[5] = param_2;
  *(int32_t *)(param_1 + 1) = param_3;
  *(int *)((longlong)param_1 + 0xc) = param_4;
  lVar1 = (longlong)iVar4 * 4;
  lVar2 = lVar3;
  if (iVar4 != 0) {
    lVar2 = FUN_18062b420(_DAT_180c8ed18,lVar1,0x23);
  }
  *param_1 = lVar2;
  if (iVar4 != 0) {
    lVar3 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar4,0x23);
    lVar2 = *param_1;
  }
  param_1[4] = lVar3;
                    // WARNING: Subroutine does not return
  memset(lVar2,0,lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a4ba1(int32_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4)
void FUN_1803a4ba1(int32_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4)

{
  longlong lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  longlong in_RCX;
  int unaff_EDI;
  int iVar4;
  uint64_t *unaff_R14;
  
  uVar3 = 0;
  iVar4 = unaff_EDI * unaff_EDI;
  *(int32_t *)(in_RCX + 0x10) = param_1;
  *(uint64_t *)(in_RCX + 0x28) = param_2;
  *(int32_t *)(in_RCX + 8) = param_3;
  *(int32_t *)(in_RCX + 0xc) = param_4;
  lVar1 = (longlong)iVar4 * 4;
  uVar2 = uVar3;
  if (iVar4 != 0) {
    uVar2 = FUN_18062b420(_DAT_180c8ed18,lVar1,0x23);
  }
  *unaff_R14 = uVar2;
  if (iVar4 != 0) {
    uVar3 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar4,0x23);
    uVar2 = *unaff_R14;
  }
  unaff_R14[4] = uVar3;
                    // WARNING: Subroutine does not return
  memset(uVar2,0,lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a4bab(int32_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4)
void FUN_1803a4bab(int32_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong in_RCX;
  uint unaff_EBX;
  int32_t unaff_0000001c;
  int unaff_EDI;
  ulonglong *unaff_R14;
  
  *(int32_t *)(in_RCX + 0x10) = param_1;
  *(uint64_t *)(in_RCX + 0x28) = param_2;
  *(int32_t *)(in_RCX + 8) = param_3;
  *(int32_t *)(in_RCX + 0xc) = param_4;
  lVar1 = (longlong)unaff_EDI * 4;
  if (unaff_EDI == 0) {
    uVar2 = (ulonglong)unaff_EBX;
  }
  else {
    uVar2 = FUN_18062b420(_DAT_180c8ed18,lVar1,0x23);
  }
  *unaff_R14 = uVar2;
  if (unaff_EDI == 0) {
    uVar3 = CONCAT44(unaff_0000001c,unaff_EBX);
  }
  else {
    uVar3 = FUN_18062b420(_DAT_180c8ed18,(longlong)unaff_EDI,0x23);
    uVar2 = *unaff_R14;
  }
  unaff_R14[4] = uVar3;
                    // WARNING: Subroutine does not return
  memset(uVar2,0,lVar1);
}






// 函数: void FUN_1803a4c2d(void)
void FUN_1803a4c2d(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int unaff_EBX;
  longlong unaff_RSI;
  uint unaff_EDI;
  longlong *plVar4;
  longlong *unaff_R14;
  
  if (0xf < unaff_EDI) {
    plVar4 = (longlong *)*unaff_R14;
    if ((unaff_R14 < plVar4) ||
       ((longlong *)((longlong)(int)(unaff_EDI - 1) + (longlong)plVar4) < unaff_R14)) {
      uVar2 = unaff_EDI & 0x8000000f;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
      }
      do {
        unaff_EBX = unaff_EBX + 0x10;
      } while (unaff_EBX < (int)(unaff_EDI - uVar2));
      iVar1 = (unaff_EDI - uVar2) + 0xf;
      for (lVar3 = (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0xfU)) >> 4) << 4; lVar3 != 0;
          lVar3 = lVar3 + -1) {
        *(int8_t *)plVar4 = 0xff;
        plVar4 = (longlong *)((longlong)plVar4 + 1);
      }
    }
  }
  for (lVar3 = (longlong)unaff_EBX; lVar3 < unaff_RSI; lVar3 = lVar3 + 1) {
    *(int8_t *)(lVar3 + *unaff_R14) = 0xff;
  }
  return;
}






// 函数: void FUN_1803a4c91(longlong param_1)
void FUN_1803a4c91(longlong param_1)

{
  longlong unaff_RSI;
  longlong *unaff_R14;
  
  do {
    *(int8_t *)(param_1 + *unaff_R14) = 0xff;
    param_1 = param_1 + 1;
  } while (param_1 < unaff_RSI);
  return;
}






// 函数: void FUN_1803a4ca5(void)
void FUN_1803a4ca5(void)

{
  return;
}






// 函数: void FUN_1803a4cc0(longlong param_1,int *param_2,float *param_3,float *param_4,float *param_5,
void FUN_1803a4cc0(longlong param_1,int *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,uint64_t *param_7,uint64_t *param_8,uint64_t *param_9)

{
  int iVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  float fVar13;
  
  iVar4 = *param_2;
  iVar5 = param_2[1];
  fVar13 = param_3[1];
  fVar2 = *param_3;
  iVar1 = iVar4 + 1;
  *param_4 = (float)iVar4 * *(float *)(param_1 + 0x10);
  param_4[1] = (float)param_2[1] * *(float *)(param_1 + 0x10);
  iVar12 = *param_2 * *(int *)(param_1 + 0xc) + param_2[1];
  lVar11 = **(longlong **)(param_1 + 0x60);
  if (1.0 - fVar2 <= fVar13) {
    fVar13 = (float)(**(code **)(lVar11 + 0x10))(*(longlong **)(param_1 + 0x60),iVar5,iVar4);
    param_4[2] = fVar13;
    *param_5 = (float)(*param_2 + 1) * *(float *)(param_1 + 0x10);
    param_5[1] = (float)(param_2[1] + 1) * *(float *)(param_1 + 0x10);
    iVar4 = *param_2;
    iVar6 = *(int *)(param_1 + 0xc);
    iVar7 = param_2[1];
    fVar13 = (float)(**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))
                              (*(longlong **)(param_1 + 0x60),iVar5 + 1,iVar1);
    param_5[2] = fVar13;
    *param_6 = (float)(*param_2 + 1) * *(float *)(param_1 + 0x10);
    param_6[1] = (float)param_2[1] * *(float *)(param_1 + 0x10);
    iVar8 = *param_2;
    iVar9 = *(int *)(param_1 + 0xc);
    iVar10 = param_2[1];
    fVar13 = (float)(**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))
                              (*(longlong **)(param_1 + 0x60),iVar5,iVar1);
    param_6[2] = fVar13;
    if (param_7 != (uint64_t *)0x0) {
      *param_7 = *(uint64_t *)
                  (*(longlong *)(param_1 + 0x38) +
                  (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar12) * 8);
    }
    if (param_8 != (uint64_t *)0x0) {
      *param_8 = *(uint64_t *)
                  (*(longlong *)(param_1 + 0x38) +
                  (ulonglong)
                  *(byte *)(*(longlong *)(param_1 + 0x20) + 1 +
                           (longlong)((iVar4 + 1) * iVar6 + iVar7)) * 8);
    }
    if (param_9 == (uint64_t *)0x0) {
      return;
    }
    bVar3 = *(byte *)(*(longlong *)(param_1 + 0x20) + (longlong)((iVar8 + 1) * iVar9 + iVar10));
  }
  else {
    fVar13 = (float)(**(code **)(lVar11 + 0x10))();
    param_4[2] = fVar13;
    *param_5 = (float)*param_2 * *(float *)(param_1 + 0x10);
    param_5[1] = (float)(param_2[1] + 1) * *(float *)(param_1 + 0x10);
    iVar6 = *(int *)(param_1 + 0xc);
    iVar7 = *param_2;
    iVar8 = param_2[1];
    fVar13 = (float)(**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))
                              (*(longlong **)(param_1 + 0x60),iVar5 + 1,iVar4);
    param_5[2] = fVar13;
    *param_6 = (float)(*param_2 + 1) * *(float *)(param_1 + 0x10);
    param_6[1] = (float)(param_2[1] + 1) * *(float *)(param_1 + 0x10);
    iVar4 = *param_2;
    iVar9 = *(int *)(param_1 + 0xc);
    iVar10 = param_2[1];
    fVar13 = (float)(**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))
                              (*(longlong **)(param_1 + 0x60),iVar5 + 1,iVar1);
    param_6[2] = fVar13;
    if (param_7 != (uint64_t *)0x0) {
      *param_7 = *(uint64_t *)
                  (*(longlong *)(param_1 + 0x38) +
                  (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar12) * 8);
    }
    if (param_8 != (uint64_t *)0x0) {
      *param_8 = *(uint64_t *)
                  (*(longlong *)(param_1 + 0x38) +
                  (ulonglong)
                  *(byte *)(*(longlong *)(param_1 + 0x20) + 1 + (longlong)(iVar6 * iVar7 + iVar8)) *
                  8);
    }
    if (param_9 == (uint64_t *)0x0) {
      return;
    }
    bVar3 = *(byte *)(*(longlong *)(param_1 + 0x20) + 1 + (longlong)((iVar4 + 1) * iVar9 + iVar10));
  }
  *param_9 = *(uint64_t *)(*(longlong *)(param_1 + 0x38) + (ulonglong)bVar3 * 8);
  return;
}



float * FUN_1803a4fa0(longlong param_1,float *param_2,int *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int8_t auVar9 [16];
  float fVar10;
  float fVar11;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = param_3[1];
  if (iVar2 < 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar1 + -2;
    if (iVar2 < iVar1 + -1) {
      iVar5 = iVar2;
    }
  }
  iVar2 = *param_3;
  iVar4 = 0;
  if ((-1 < iVar2) && (iVar4 = iVar1 + -2, iVar2 < iVar1 + -1)) {
    iVar4 = iVar2;
  }
  fVar6 = (float)(**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))
                           (*(longlong **)(param_1 + 0x60),iVar5,iVar4);
  fVar7 = (float)(**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))
                           (*(longlong **)(param_1 + 0x60),iVar5 + 1,iVar4 + 1);
  plVar3 = *(longlong **)(param_1 + 0x60);
  if (param_4[1] < *param_4 || param_4[1] == *param_4) {
    fVar8 = (float)(**(code **)(*plVar3 + 0x10))(plVar3,iVar5,iVar4 + 1);
    fVar10 = *(float *)(param_1 + 0x10);
    fVar11 = (fVar6 - fVar8) * fVar10;
    fVar6 = -((fVar7 - fVar8) * fVar10);
  }
  else {
    fVar8 = (float)(**(code **)(*plVar3 + 0x10))(plVar3,iVar5 + 1,iVar4);
    fVar10 = *(float *)(param_1 + 0x10);
    fVar6 = (fVar6 - fVar8) * fVar10;
    fVar11 = -((fVar7 - fVar8) * fVar10);
  }
  *param_2 = fVar11;
  param_2[1] = fVar6;
  fVar10 = fVar10 * fVar10;
  param_2[2] = fVar10;
  fVar6 = param_2[1];
  fVar7 = *param_2;
  fVar8 = fVar7 * fVar7 + fVar6 * fVar6 + fVar10 * fVar10;
  auVar9 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
  fVar11 = auVar9._0_4_;
  fVar8 = fVar11 * 0.5 * (3.0 - fVar8 * fVar11 * fVar11);
  param_2[1] = fVar6 * fVar8;
  param_2[2] = fVar10 * fVar8;
  *param_2 = fVar7 * fVar8;
  return param_2;
}



longlong FUN_1803a5130(float *param_1,float *param_2,uint64_t *param_3,uint64_t *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStackX_10;
  float fStackX_14;
  
  fVar1 = *param_1;
  iVar5 = (int)((1.0 / fVar1) * *param_2);
  iVar3 = (int)((1.0 / fVar1) * param_2[1]);
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if ((int)param_1[3] <= iVar5) {
    iVar5 = (int)param_1[3] + -1;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if ((int)param_1[4] <= iVar3) {
    iVar3 = (int)param_1[4] + -1;
  }
  lVar4 = (longlong)iVar3 * 0x68 +
          *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 8);
  fVar2 = *(float *)(lVar4 + 0x10);
  fVar9 = 1.0 / fVar2;
  fVar7 = (*param_2 - (float)iVar5 * fVar1) * fVar9;
  if (fVar7 <= 0.0) {
    fVar7 = fVar7 - 0.9999999;
  }
  fVar8 = (float)(int)fVar7;
  fVar7 = (param_2[1] - (float)iVar3 * fVar1) * fVar9;
  if (fVar7 <= 0.0) {
    fVar7 = fVar7 - 0.9999999;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fStackX_10 = (float)*(uint64_t *)param_2;
  fStackX_14 = (float)((ulonglong)*(uint64_t *)param_2 >> 0x20);
  fVar6 = (float)(int)fVar7;
  fVar7 = ((fStackX_10 - (float)iVar5 * fVar1) - fVar2 * fVar8) * fVar9;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *param_3 = CONCAT44((int)fVar6,(int)fVar8);
  fVar9 = ((fStackX_14 - (float)iVar3 * fVar1) - fVar2 * fVar6) * fVar9;
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  *param_4 = CONCAT44(fVar9,fVar7);
  return lVar4;
}






