#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part040_sub002_sub002.c - 1 个函数

// 函数: void FUN_18028b0d2(uint64_t param_1,int param_2,int param_3,longlong *param_4)
void FUN_18028b0d2(uint64_t param_1,int param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *unaff_RDI;
  int in_R10D;
  int in_R11D;
  int32_t in_register_0000009c;
  int iStackX_c;
  
  param_2 = param_3 + -1 + param_2;
  if ((in_R10D < param_2) || (param_2 < 0)) {
    param_2 = in_R10D;
  }
  *(int *)(param_4 + 1) = param_2;
  param_2 = param_2 - in_R11D;
  iStackX_c = 0;
  lVar1 = 0;
  if ((((-1 < in_R11D) && (lVar1 = 0, -1 < param_2)) &&
      (iStackX_c = 0, lVar1 = 0, in_R11D <= in_R10D)) && (lVar1 = 0, param_2 <= in_R10D - in_R11D))
  {
    lVar1 = CONCAT44(in_register_0000009c,in_R11D) + *param_4;
    iStackX_c = param_2;
  }
  *unaff_RDI = lVar1;
  *(int32_t *)(unaff_RDI + 1) = 0;
  *(int *)((longlong)unaff_RDI + 0xc) = iStackX_c;
  return;
}



int32_t * FUN_18028b2f0(int32_t *param_1,longlong *param_2,uint param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int32_t uStack_18;
  int32_t uStack_14;
  int iStack_c;
  
  uVar7 = *(uint *)((longlong)param_2 + 0xc);
  uVar11 = (ulonglong)uVar7;
  uVar5 = 0;
  if ((int)uVar7 < 0) {
    uVar5 = uVar11;
  }
  *(int *)(param_2 + 1) = (int)uVar5;
  if ((int)uVar5 < (int)uVar7) {
    uVar12 = (ulonglong)uVar7;
    do {
      iVar9 = (int)uVar5;
      bVar3 = func_0x00018028afe0();
      while (0x1b < bVar3) {
        iVar8 = (int)param_2[1];
        iVar10 = (int)uVar11;
        uVar12 = uVar11 & 0xffffffff;
        if ((iVar8 < iVar10) && (*(char *)((longlong)iVar8 + *param_2) == '\x1e')) {
          uVar7 = iVar8 + 1;
          uVar5 = (ulonglong)uVar7;
          if ((iVar10 < (int)uVar7) || ((int)uVar7 < 0)) {
            uVar5 = uVar11 & 0xffffffff;
          }
          iVar8 = (int)uVar5;
          *(int *)(param_2 + 1) = iVar8;
          if (iVar8 < iVar10) {
            if (iVar8 < iVar10) goto LAB_18028b387;
            bVar3 = 0;
            while (((iVar8 = (int)uVar5, (bVar3 & 0xf) != 0xf && ((bVar3 & 0xf0) != 0xf0)) &&
                   (iVar8 < iVar10))) {
LAB_18028b387:
              bVar3 = *(byte *)((longlong)iVar8 + *param_2);
              *(uint *)(param_2 + 1) = iVar8 + 1U;
              uVar5 = (ulonglong)(iVar8 + 1U);
            }
          }
        }
        else {
          func_0x00018028b140(param_2);
          uVar11 = (ulonglong)*(uint *)((longlong)param_2 + 0xc);
          uVar12 = (ulonglong)*(uint *)((longlong)param_2 + 0xc);
          uVar5 = (ulonglong)*(uint *)(param_2 + 1);
        }
        bVar3 = func_0x00018028afe0();
      }
      uVar7 = (uint)uVar12;
      iVar8 = (int)uVar5;
      if (iVar8 < (int)uVar7) {
        uVar5 = (ulonglong)(iVar8 + 1U);
        bVar3 = *(byte *)((longlong)iVar8 + *param_2);
        *(uint *)(param_2 + 1) = iVar8 + 1U;
      }
      else {
        bVar3 = 0;
        uVar5 = uVar5 & 0xffffffff;
      }
      uVar4 = (uint)bVar3;
      if (bVar3 == 0xc) {
        iVar10 = (int)uVar5;
        if (iVar10 < (int)uVar7) {
          uVar5 = (ulonglong)(iVar10 + 1U);
          bVar3 = *(byte *)((longlong)iVar10 + *param_2);
          *(uint *)(param_2 + 1) = iVar10 + 1U;
        }
        else {
          bVar3 = 0;
        }
        uVar4 = bVar3 | 0x100;
      }
      if (uVar4 == param_3) {
        iVar8 = iVar8 - iVar9;
        uStack_18 = 0;
        uVar1 = 0;
        uStack_14 = 0;
        uVar2 = 0;
        iStack_c = 0;
        iVar10 = 0;
        if (((iVar9 < 0) || (uStack_18 = uVar1, uStack_14 = uVar2, iStack_c = iVar10, iVar8 < 0)) ||
           (((int)uVar7 < iVar9 || ((int)(uVar7 - iVar9) < iVar8)))) goto LAB_18028b460;
        lVar6 = (longlong)iVar9 + *param_2;
        iStack_c = iVar8;
        goto LAB_18028b456;
      }
    } while ((int)uVar5 < (int)uVar7);
  }
  uStack_18 = 0;
  uStack_14 = 0;
  iStack_c = 0;
  if (-1 < (int)uVar7) {
    lVar6 = *param_2;
    iStack_c = 0;
LAB_18028b456:
    uStack_18 = (int32_t)lVar6;
    uStack_14 = (int32_t)((ulonglong)lVar6 >> 0x20);
  }
LAB_18028b460:
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  param_1[2] = 0;
  param_1[3] = iStack_c;
  return param_1;
}



longlong * FUN_18028b4c0(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int8_t uVar2;
  int8_t uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  int iStack_c;
  
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  iVar5 = 0;
  if (iVar1 < 0) {
    iVar5 = iVar1;
  }
  *(int *)(param_2 + 1) = iVar5;
  lVar6 = (longlong)iVar5;
  if (lVar6 < iVar1) {
    iVar5 = iVar5 + 1;
    uVar2 = *(int8_t *)(lVar6 + *param_2);
    lVar6 = lVar6 + 1;
  }
  else {
    uVar2 = 0;
  }
  if (lVar6 < iVar1) {
    iVar5 = iVar5 + 1;
    uVar3 = *(int8_t *)(lVar6 + *param_2);
  }
  else {
    uVar3 = 0;
  }
  if (iVar5 < iVar1) {
    lVar6 = (longlong)iVar5;
    iVar5 = iVar5 + 1;
    uVar7 = (ulonglong)*(byte *)(lVar6 + *param_2);
  }
  else {
    uVar7 = 0;
  }
  iVar8 = (int)uVar7;
  iVar5 = iVar8 * param_3 + iVar5;
  if ((iVar1 < iVar5) || (iVar5 < 0)) {
    iVar5 = iVar1;
  }
  uVar12 = 0;
  *(int *)(param_2 + 1) = iVar5;
  uVar11 = uVar7;
  if ((char)uVar7 != '\0') {
    do {
      if (iVar5 < iVar1) {
        lVar6 = (longlong)iVar5;
        iVar5 = iVar5 + 1;
        bVar4 = *(byte *)(lVar6 + *param_2);
      }
      else {
        bVar4 = 0;
      }
      uVar12 = uVar12 << 8 | (uint)bVar4;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    *(int *)(param_2 + 1) = iVar5;
  }
  uVar9 = 0;
  if (iVar8 != 0) {
    do {
      if (iVar5 < iVar1) {
        lVar6 = (longlong)iVar5;
        iVar5 = iVar5 + 1;
        bVar4 = *(byte *)(lVar6 + *param_2);
      }
      else {
        bVar4 = 0;
      }
      uVar9 = uVar9 << 8 | (uint)bVar4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    *(int *)(param_2 + 1) = iVar5;
  }
  iStack_c = 0;
  iVar10 = uVar9 - uVar12;
  iVar5 = uVar12 + 2 + (CONCAT11(uVar2,uVar3) + 1) * iVar8;
  lVar6 = 0;
  if ((((-1 < iVar5) && (lVar6 = 0, -1 < iVar10)) && (iStack_c = 0, lVar6 = 0, iVar5 <= iVar1)) &&
     (lVar6 = 0, iVar10 <= iVar1 - iVar5)) {
    lVar6 = (longlong)iVar5 + *param_2;
    iStack_c = iVar10;
  }
  *param_1 = lVar6;
  *(int32_t *)(param_1 + 1) = 0;
  *(int *)((longlong)param_1 + 0xc) = iStack_c;
  return param_1;
}



int FUN_18028b630(longlong param_1,uint param_2,char *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = (uint)*(byte *)((ulonglong)param_2 + 4 + param_1) * 0x100 +
          (uint)*(byte *)((ulonglong)param_2 + 5 + param_1);
  if (iVar4 != 0) {
    do {
      uVar1 = iVar3 * 0x10 + param_2 + 0xc;
      uVar2 = (ulonglong)uVar1;
      if (((((uint)*(byte *)((ulonglong)uVar1 + param_1) == (int)*param_3) &&
           ((uint)*(byte *)(uVar2 + 1 + param_1) == (int)param_3[1])) &&
          ((uint)*(byte *)(uVar2 + 2 + param_1) == (int)param_3[2])) &&
         ((uint)*(byte *)(uVar2 + 3 + param_1) == (int)param_3[3])) {
        return (((uint)*(byte *)(uVar2 + 8 + param_1) * 0x100 + (uint)*(byte *)(uVar2 + 9 + param_1)
                ) * 0x100 + (uint)*(byte *)(uVar2 + 10 + param_1)) * 0x100 +
               (uint)*(byte *)(uVar2 + 0xb + param_1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return 0;
}



int32_t * FUN_18028b820(int32_t *param_1,longlong *param_2,uint64_t param_3)

{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  longlong lVar6;
  longlong lVar7;
  int aiStackX_8 [2];
  uint64_t uStackX_20;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int8_t auStack_38 [16];
  
  lVar7 = 0;
  aiStackX_8[0] = 0;
  uStackX_20 = 0;
  puVar4 = (uint64_t *)FUN_18028b2f0(&uStack_48,param_3,0x12);
  uStack_48 = *puVar4;
  uStack_40._0_4_ = *(int *)(puVar4 + 1);
  uStack_40._4_4_ = *(int *)((longlong)puVar4 + 0xc);
  lVar6 = lVar7;
  do {
    if ((int)uStack_40._4_4_ <= (int)uStack_40) break;
    uVar1 = func_0x00018028b140(&uStack_48);
    *(int32_t *)((longlong)&uStackX_20 + lVar6 * 4) = uVar1;
    lVar6 = lVar6 + 1;
  } while (lVar6 < 2);
  iVar3 = uStackX_20._4_4_;
  if ((uStackX_20._4_4_ != 0) && ((uint)uStackX_20 != 0)) {
    uStack_40._4_4_ = 0;
    uStack_48 = 0;
    if ((-1 < uStackX_20) &&
       (((uStack_48 = 0, -1 < (int)(uint)uStackX_20 &&
         (uStack_40._4_4_ = 0, uStack_48 = 0, uStackX_20._4_4_ <= *(int *)((longlong)param_2 + 0xc))
         ) && (uStack_48 = 0,
              (int)(uint)uStackX_20 <= *(int *)((longlong)param_2 + 0xc) - uStackX_20._4_4_)))) {
      uStack_48 = (longlong)uStackX_20._4_4_ + *param_2;
      uStack_40._4_4_ = (uint)uStackX_20;
    }
    uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
    puVar4 = (uint64_t *)FUN_18028b2f0(auStack_38,&uStack_48,0x13);
    uStack_48 = *puVar4;
    uStack_40._0_4_ = *(int *)(puVar4 + 1);
    uStack_40._4_4_ = *(int *)((longlong)puVar4 + 0xc);
    do {
      if ((int)uStack_40._4_4_ <= (int)uStack_40) break;
      iVar2 = func_0x00018028b140(&uStack_48);
      aiStackX_8[lVar7] = iVar2;
      lVar7 = lVar7 + 1;
    } while (lVar7 < 1);
    if (aiStackX_8[0] != 0) {
      iVar3 = aiStackX_8[0] + iVar3;
      if ((*(int *)((longlong)param_2 + 0xc) < iVar3) || (iVar3 < 0)) {
        iVar3 = *(int *)((longlong)param_2 + 0xc);
      }
      *(int *)(param_2 + 1) = iVar3;
      puVar5 = (int32_t *)FUN_18028b000(auStack_38,param_2);
      uStack_48._0_4_ = *puVar5;
      uStack_48._4_4_ = puVar5[1];
      uStack_40._0_4_ = puVar5[2];
      uStack_40._4_4_ = puVar5[3];
      goto LAB_18028b946;
    }
  }
  uStack_48._0_4_ = 0;
  uStack_48._4_4_ = 0;
  uStack_40._0_4_ = 0;
  uStack_40._4_4_ = 0;
LAB_18028b946:
  *param_1 = (int32_t)uStack_48;
  param_1[1] = uStack_48._4_4_;
  param_1[2] = (int)uStack_40;
  param_1[3] = uStack_40._4_4_;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00018028bb17)

uint64_t FUN_18028b960(longlong param_1,longlong param_2,int32_t param_3)

{
  byte bVar1;
  byte bVar2;
  uint64_t uVar3;
  int8_t auVar4 [16];
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int32_t uVar9;
  uint uVar10;
  longlong *plVar11;
  uint64_t *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int aiStackX_8 [4];
  int32_t uStackX_18;
  int aiStackX_20 [2];
  int aiStack_98 [4];
  uint64_t uStack_88;
  uint uStack_80;
  uint uStack_7c;
  uint64_t uStack_78;
  int32_t uStack_70;
  int32_t uStack_6c;
  longlong lStack_68;
  uint64_t uStack_60;
  int8_t auStack_58 [24];
  
  *(longlong *)(param_1 + 8) = param_2;
  *(int32_t *)(param_1 + 0x10) = param_3;
  uVar13 = 0;
  uStack_78._0_4_ = 0;
  uStack_78._4_4_ = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x48) = 0;
  uStackX_18 = param_3;
  uVar5 = FUN_18028b630(param_2,param_3,&unknown_var_624_ptr);
  iVar6 = FUN_18028b630(param_2,param_3,&unknown_var_648_ptr);
  *(int *)(param_1 + 0x18) = iVar6;
  iVar7 = FUN_18028b630(param_2,param_3,&unknown_var_6872_ptr);
  *(int *)(param_1 + 0x1c) = iVar7;
  aiStackX_8[2] = FUN_18028b630(param_2,param_3,&unknown_var_656_ptr);
  *(int *)(param_1 + 0x20) = aiStackX_8[2];
  iVar8 = FUN_18028b630(param_2,param_3,&unknown_var_632_ptr);
  *(int *)(param_1 + 0x24) = iVar8;
  aiStackX_8[0] = FUN_18028b630(param_2,uStackX_18,&unknown_var_640_ptr);
  *(int *)(param_1 + 0x28) = aiStackX_8[0];
  uVar9 = FUN_18028b630(param_2,uStackX_18,&unknown_var_680_ptr);
  *(int32_t *)(param_1 + 0x2c) = uVar9;
  uVar9 = FUN_18028b630(param_2,uStackX_18,&unknown_var_688_ptr);
  *(int32_t *)(param_1 + 0x30) = uVar9;
  if (uVar5 == 0) {
    return 0;
  }
  if (iVar7 == 0) {
    return 0;
  }
  if (iVar8 == 0) {
    return 0;
  }
  if (aiStackX_8[0] == 0) {
    return 0;
  }
  if (aiStackX_8[2] != 0) {
    if (iVar6 == 0) {
      return 0;
    }
    goto LAB_18028bd64;
  }
  aiStackX_8[2] = 0;
  aiStackX_8[0] = 2;
  aiStackX_20[0] = 0;
  aiStack_98[0] = 0;
  uVar10 = FUN_18028b630(param_2,uStackX_18,&unknown_var_664_ptr);
  if (uVar10 == 0) {
    return 0;
  }
  *(uint64_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0x88) = 0;
  uStack_78 = (ulonglong)uVar10 + param_2;
  uStack_6c = 0x20000000;
  *(uint64_t *)(param_1 + 0x90) = 0;
  *(uint64_t *)(param_1 + 0x98) = 0;
  uStack_70 = 0;
  auVar4._8_4_ = 0;
  auVar4._0_8_ = uStack_78;
  auVar4._12_4_ = 0x20000000;
  uStack_7c = 0x20000000;
  *(int8_t (*) [16])(param_1 + 0x40) = auVar4;
  if (*(byte *)(uStack_78 + 2) < 0x20000001) {
    uStack_7c = (uint)*(byte *)(uStack_78 + 2);
  }
  uStack_80 = uStack_7c;
  uStack_88 = uStack_78;
  uStack_7c = 0x20000000;
  FUN_18028b000(&lStack_68,&uStack_88);
  plVar11 = (longlong *)FUN_18028b000(&lStack_68,&uStack_88);
  lStack_68 = *plVar11;
  uStack_60 = plVar11[1];
  puVar12 = (uint64_t *)FUN_18028b4c0(&uStack_78,&lStack_68,0);
  uStack_78._0_4_ = (int32_t)*puVar12;
  uStack_78._4_4_ = (int32_t)((ulonglong)*puVar12 >> 0x20);
  uStack_70 = (int32_t)puVar12[1];
  uStack_6c = (int32_t)((ulonglong)puVar12[1] >> 0x20);
  FUN_18028b000(&lStack_68,&uStack_88);
  puVar12 = (uint64_t *)FUN_18028b000(&lStack_68,&uStack_88);
  uVar3 = puVar12[1];
  *(uint64_t *)(param_1 + 0x60) = *puVar12;
  *(uint64_t *)(param_1 + 0x68) = uVar3;
  plVar11 = (longlong *)FUN_18028b2f0(&lStack_68,&uStack_78,0x11);
  lStack_68 = *plVar11;
  uStack_60 = plVar11[1];
  uVar14 = uVar13;
  do {
    if (uStack_60._4_4_ <= (int)uStack_60) break;
    iVar6 = func_0x00018028b140(&lStack_68);
    aiStackX_8[uVar14 + 2] = iVar6;
    uVar14 = uVar14 + 1;
  } while ((longlong)uVar14 < 1);
  plVar11 = (longlong *)FUN_18028b2f0(&lStack_68,&uStack_78,0x106);
  lStack_68 = *plVar11;
  uStack_60 = plVar11[1];
  uVar14 = uVar13;
  do {
    if (uStack_60._4_4_ <= (int)uStack_60) break;
    iVar6 = func_0x00018028b140(&lStack_68);
    aiStackX_8[uVar14] = iVar6;
    uVar14 = uVar14 + 1;
  } while ((longlong)uVar14 < 1);
  plVar11 = (longlong *)FUN_18028b2f0(&lStack_68,&uStack_78,0x124);
  lStack_68 = *plVar11;
  uStack_60 = plVar11[1];
  uVar14 = uVar13;
  do {
    if (uStack_60._4_4_ <= (int)uStack_60) break;
    iVar6 = func_0x00018028b140(&lStack_68);
    aiStackX_20[uVar14] = iVar6;
    uVar14 = uVar14 + 1;
  } while ((longlong)uVar14 < 1);
  plVar11 = (longlong *)FUN_18028b2f0(&lStack_68,&uStack_78,0x125);
  lStack_68 = *plVar11;
  uStack_60 = plVar11[1];
  uVar14 = uVar13;
  do {
    if (uStack_60._4_4_ <= (int)uStack_60) break;
    iVar6 = func_0x00018028b140(&lStack_68);
    aiStack_98[uVar14] = iVar6;
    uVar14 = uVar14 + 1;
  } while ((longlong)uVar14 < 1);
  lStack_68 = CONCAT44(uStack_78._4_4_,(int32_t)uStack_78);
  uStack_60 = CONCAT44(uStack_6c,uStack_70);
  uStack_78._0_4_ = (int32_t)uStack_88;
  uStack_78._4_4_ = uStack_88._4_4_;
  uStack_70 = uStack_80;
  uStack_6c = uStack_7c;
  puVar12 = (uint64_t *)FUN_18028b820(auStack_58,&uStack_78,&lStack_68);
  iVar7 = aiStack_98[0];
  iVar6 = aiStackX_8[2];
  uVar3 = puVar12[1];
  *(uint64_t *)(param_1 + 0x70) = *puVar12;
  *(uint64_t *)(param_1 + 0x78) = uVar3;
  if (aiStackX_8[0] != 2) {
    return 0;
  }
  if (aiStackX_8[2] == 0) {
    return 0;
  }
  uVar10 = uStack_7c;
  if (aiStackX_20[0] != 0) {
    lVar15 = (longlong)aiStack_98[0];
    if (aiStack_98[0] == 0) {
      return 0;
    }
    if ((int)uStack_7c < aiStackX_20[0]) {
LAB_18028bce1:
      uStack_80 = uVar10;
    }
    else {
      uStack_80 = aiStackX_20[0];
      if (aiStackX_20[0] < 0) goto LAB_18028bce1;
    }
    puVar12 = (uint64_t *)FUN_18028b000(auStack_58,&uStack_88);
    uVar3 = puVar12[1];
    *(uint64_t *)(param_1 + 0x80) = *puVar12;
    *(uint64_t *)(param_1 + 0x88) = uVar3;
    lStack_68 = 0;
    uStack_60 = 0;
    if (((-1 < iVar7) && (-1 < (int)(uStack_7c - iVar7))) && (iVar7 <= (int)uStack_7c)) {
      uStack_60 = (ulonglong)(uStack_7c - iVar7) << 0x20;
      lStack_68 = lVar15 + uStack_88;
    }
    *(longlong *)(param_1 + 0x90) = lStack_68;
    *(longlong *)(param_1 + 0x98) = uStack_60;
    uVar10 = uStack_7c;
  }
  if ((int)uVar10 < iVar6) {
LAB_18028bd4c:
    uStack_80 = uVar10;
  }
  else {
    uStack_80 = iVar6;
    if (iVar6 < 0) goto LAB_18028bd4c;
  }
  puVar12 = (uint64_t *)FUN_18028b000(auStack_58,&uStack_88);
  uVar3 = puVar12[1];
  *(uint64_t *)(param_1 + 0x50) = *puVar12;
  *(uint64_t *)(param_1 + 0x58) = uVar3;
LAB_18028bd64:
  uVar10 = FUN_18028b630(param_2,uStackX_18,&unknown_var_672_ptr);
  if (uVar10 == 0) {
    iVar6 = 0xffff;
  }
  else {
    iVar6 = (uint)*(byte *)((ulonglong)uVar10 + 4 + param_2) * 0x100 +
            (uint)*(byte *)((ulonglong)uVar10 + 5 + param_2);
  }
  *(int *)(param_1 + 0x14) = iVar6;
  bVar1 = *(byte *)((ulonglong)uVar5 + 2 + param_2);
  bVar2 = *(byte *)((ulonglong)uVar5 + 3 + param_2);
  *(int32_t *)(param_1 + 0x34) = 0;
  iVar6 = (uint)bVar1 * 0x100 + (uint)bVar2;
  if (iVar6 != 0) {
    do {
      uVar10 = uVar5 + 4 + (int)uVar13 * 8;
      uVar14 = (ulonglong)uVar10;
      iVar7 = (uint)*(byte *)((ulonglong)uVar10 + param_2) * 0x100 +
              (uint)*(byte *)((ulonglong)uVar10 + 1 + param_2);
      if ((iVar7 == 0) ||
         ((iVar7 == 3 &&
          ((iVar7 = (uint)*(byte *)(uVar14 + 3 + param_2) +
                    (uint)*(byte *)(uVar14 + 2 + param_2) * 0x100, iVar7 == 1 || (iVar7 == 10))))))
      {
        *(uint *)(param_1 + 0x34) =
             (uint)*(byte *)(uVar14 + 7 + param_2) +
             ((uint)*(byte *)(uVar14 + 6 + param_2) +
             ((uint)*(byte *)(uVar14 + 5 + param_2) + (uint)*(byte *)(uVar14 + 4 + param_2) * 0x100)
             * 0x100) * 0x100 + uVar5;
      }
      uVar10 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar10;
    } while ((int)uVar10 < iVar6);
    if (*(int *)(param_1 + 0x34) != 0) {
      *(uint *)(param_1 + 0x38) =
           (uint)*(byte *)((longlong)*(int *)(param_1 + 0x1c) + 0x33 + param_2) +
           (uint)*(byte *)((longlong)*(int *)(param_1 + 0x1c) + 0x32 + param_2) * 0x100;
      return 1;
    }
  }
  return 0;
}



uint FUN_18028be60(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ushort uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  short sVar10;
  ushort uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ushort uVar15;
  
  uVar13 = (ulonglong)*(uint *)(param_1 + 0x34);
  lVar3 = *(longlong *)(param_1 + 8);
  sVar10 = (ushort)*(byte *)(uVar13 + lVar3) * 0x100 + (ushort)*(byte *)(uVar13 + 1 + lVar3);
  if (sVar10 == 0) {
    if ((int)param_2 <
        (int)((uint)*(byte *)(uVar13 + 2 + lVar3) * 0x100 + (*(byte *)(uVar13 + 3 + lVar3) - 6))) {
      return (uint)*(byte *)(uVar13 + (longlong)(int)param_2 + 6 + lVar3);
    }
  }
  else if (sVar10 == 6) {
    uVar4 = (uint)*(byte *)(uVar13 + 6 + lVar3) * 0x100 + (uint)*(byte *)(uVar13 + 7 + lVar3);
    if ((uVar4 <= param_2) &&
       (param_2 < (uint)*(byte *)(uVar13 + 9 + lVar3) +
                  (uint)*(byte *)(uVar13 + 8 + lVar3) * 0x100 + uVar4)) {
      lVar2 = (param_2 - uVar4) * 2 + uVar13;
      return (uint)*(byte *)(lVar2 + 0xb + lVar3) + (uint)*(byte *)(lVar2 + 10 + lVar3) * 0x100;
    }
  }
  else if (sVar10 != 2) {
    if (sVar10 == 4) {
      uVar15 = (ushort)((ushort)*(byte *)(uVar13 + 6 + lVar3) * 0x100 +
                       (ushort)*(byte *)(uVar13 + 7 + lVar3)) >> 1;
      uVar4 = *(uint *)(param_1 + 0x34) + 0xe;
      uVar11 = (ushort)((ushort)*(byte *)(uVar13 + 9 + lVar3) +
                       (ushort)*(byte *)(uVar13 + 8 + lVar3) * 0x100) >> 1;
      sVar10 = (ushort)*(byte *)(uVar13 + 0xb + lVar3) +
               (ushort)*(byte *)(uVar13 + 10 + lVar3) * 0x100;
      uVar5 = (ushort)((ushort)*(byte *)(uVar13 + 0xc + lVar3) * 0x100 +
                      (ushort)*(byte *)(uVar13 + 0xd + lVar3)) >> 1;
      if ((int)param_2 < 0x10000) {
        uVar8 = uVar4;
        if ((int)((uint)*(byte *)((ulonglong)uVar4 + lVar3 + (ulonglong)uVar5 * 2) * 0x100 +
                 (uint)*(byte *)((ulonglong)uVar4 + lVar3 + 1 + (ulonglong)uVar5 * 2)) <=
            (int)param_2) {
          uVar8 = uVar4 + (uint)uVar5 * 2;
        }
        uVar8 = uVar8 - 2;
        for (; sVar10 != 0; sVar10 = sVar10 + -1) {
          uVar11 = uVar11 >> 1;
          if ((int)((uint)*(byte *)((ulonglong)uVar8 + lVar3 + (ulonglong)uVar11 * 2) * 0x100 +
                   (uint)*(byte *)((ulonglong)uVar8 + lVar3 + 1 + (ulonglong)uVar11 * 2)) <
              (int)param_2) {
            uVar8 = uVar8 + (uint)uVar11 * 2;
          }
        }
        uVar12 = (ulonglong)(((uVar8 - uVar4) + 2 >> 1 & 0xffff) * 2);
        lVar2 = ((uint)uVar15 + (uint)uVar15) + uVar12 + uVar13;
        iVar7 = (uint)*(byte *)(lVar2 + 0x10 + lVar3) * 0x100 +
                (uint)*(byte *)(lVar2 + 0x11 + lVar3);
        if (iVar7 <= (int)param_2) {
          uVar4 = ((uint)uVar15 + (uint)uVar15 * 2) * 2;
          lVar2 = uVar4 + uVar12 + uVar13;
          uVar11 = (ushort)*(byte *)(lVar2 + 0x10 + lVar3) * 0x100 +
                   (ushort)*(byte *)(lVar2 + 0x11 + lVar3);
          if (uVar11 == 0) {
            lVar2 = (uint)uVar15 * 4 + uVar12 + uVar13;
            return (uint)(ushort)((ushort)*(byte *)(lVar2 + 0x10 + lVar3) * 0x100 +
                                  (ushort)*(byte *)(lVar2 + 0x11 + lVar3) + (short)param_2);
          }
          lVar2 = (ulonglong)uVar11 + (longlong)(int)((param_2 - iVar7) * 2) + (ulonglong)uVar4 +
                  uVar12 + uVar13;
          return (uint)*(byte *)(lVar2 + 0x11 + lVar3) +
                 (uint)*(byte *)(lVar2 + 0x10 + lVar3) * 0x100;
        }
      }
    }
    else if ((ushort)(sVar10 - 0xcU) < 2) {
      iVar7 = 0;
      iVar9 = (((uint)*(byte *)(uVar13 + 0xd + lVar3) +
               (uint)*(byte *)(uVar13 + 0xc + lVar3) * 0x100) * 0x100 +
              (uint)*(byte *)(uVar13 + 0xe + lVar3)) * 0x100 + (uint)*(byte *)(uVar13 + 0xf + lVar3)
      ;
      if (0 < iVar9) {
        lVar2 = uVar13 + lVar3;
        lVar14 = uVar13 + lVar3;
        do {
          iVar1 = (iVar9 - iVar7 >> 1) + iVar7;
          lVar6 = (longlong)(iVar1 * 0xc);
          uVar4 = (uint)*(byte *)(lVar6 + 0x11 + lVar2) * 0x10000 +
                  (uint)*(byte *)(lVar6 + 0x12 + lVar2) * 0x100 +
                  (uint)*(byte *)(lVar6 + 0x10 + lVar2) * 0x1000000 +
                  (uint)*(byte *)(lVar6 + 0x13 + lVar2);
          if (uVar4 <= param_2) {
            if (param_2 <=
                (uint)*(byte *)(lVar14 + 0x15 + lVar6) * 0x10000 +
                (uint)*(byte *)(lVar14 + 0x16 + lVar6) * 0x100 +
                (uint)*(byte *)(lVar14 + 0x14 + lVar6) * 0x1000000 +
                (uint)*(byte *)(lVar14 + 0x17 + lVar6)) {
              lVar3 = lVar6 + uVar13 + lVar3;
              uVar8 = (uint)*(byte *)(lVar3 + 0x19) * 0x10000 +
                      (uint)*(byte *)(lVar3 + 0x1a) * 0x100 +
                      (uint)*(byte *)(lVar3 + 0x18) * 0x1000000 + (uint)*(byte *)(lVar3 + 0x1b);
              if (sVar10 != 0xc) {
                return uVar8;
              }
              return param_2 + (uVar8 - uVar4);
            }
            iVar7 = iVar1 + 1;
            iVar1 = iVar9;
          }
          iVar9 = iVar1;
        } while (iVar7 < iVar9);
      }
    }
  }
  return 0;
}



int FUN_18028c2f0(longlong param_1,int param_2,int param_3,int param_4,int16_t param_5,
                 int16_t param_6,int param_7,int param_8,int param_9,int param_10)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    if (param_3 != 0) {
      lVar1 = (longlong)param_2 * 0xe;
      param_2 = param_2 + 1;
      *(short *)(lVar1 + param_1) = (short)(param_7 + param_9 >> 1);
      *(int8_t *)(lVar1 + 0xc + param_1) = 3;
      *(int16_t *)(lVar1 + 4 + param_1) = (int16_t)param_9;
      *(int16_t *)(lVar1 + 6 + param_1) = (int16_t)param_10;
      *(short *)(lVar1 + 2 + param_1) = (short)(param_8 + param_10 >> 1);
    }
    lVar1 = (longlong)param_2 * 0xe;
    *(int16_t *)(lVar1 + param_1) = param_5;
    *(int16_t *)(lVar1 + 2 + param_1) = param_6;
    *(short *)(lVar1 + 4 + param_1) = (short)param_7;
    *(int8_t *)(lVar1 + 0xc + param_1) = 3;
    *(short *)(lVar1 + 6 + param_1) = (short)param_8;
    return param_2 + 1;
  }
  lVar1 = (longlong)param_2 * 0xe;
  *(int16_t *)(lVar1 + param_1) = param_5;
  *(int16_t *)(lVar1 + 2 + param_1) = param_6;
  if (param_3 != 0) {
    *(int16_t *)(lVar1 + 4 + param_1) = (int16_t)param_9;
    *(int16_t *)(lVar1 + 6 + param_1) = (int16_t)param_10;
    *(int8_t *)(lVar1 + 0xc + param_1) = 3;
    return param_2 + 1;
  }
  *(int8_t *)(lVar1 + 0xc + param_1) = 2;
  *(int32_t *)(lVar1 + 4 + param_1) = 0;
  return param_2 + 1;
}



int FUN_18028c308(longlong param_1,uint64_t param_2,int param_3,int param_4,uint64_t param_5,
                 int16_t param_6,int16_t param_7,int param_8,uint64_t param_9,int param_10,
                 int param_11)

{
  longlong lVar1;
  ulonglong in_R10;
  longlong in_R11;
  
  if (param_3 != 0) {
    lVar1 = in_R10 * 0xe;
    in_R10 = (ulonglong)((int)in_R10 + 1);
    *(short *)(lVar1 + param_1) = (short)(param_8 + param_10 >> 1);
    *(int8_t *)(lVar1 + 0xc + param_1) = 3;
    *(short *)(lVar1 + 4 + in_R11) = (short)param_10;
    *(short *)(lVar1 + 6 + in_R11) = (short)param_11;
    *(short *)(lVar1 + 2 + in_R11) = (short)(param_4 + param_11 >> 1);
  }
  lVar1 = (longlong)(int)in_R10 * 0xe;
  *(int16_t *)(lVar1 + in_R11) = param_6;
  *(int16_t *)(lVar1 + 2 + in_R11) = param_7;
  *(short *)(lVar1 + 4 + in_R11) = (short)param_8;
  *(int8_t *)(lVar1 + 0xc + in_R11) = 3;
  *(short *)(lVar1 + 6 + in_R11) = (short)param_4;
  return (int)in_R10 + 1;
}



int FUN_18028c387(uint64_t param_1,uint64_t param_2,int param_3,uint64_t param_4,
                 uint64_t param_5,int16_t param_6,int16_t param_7,uint64_t param_8,
                 uint64_t param_9,int16_t param_10,int16_t param_11)

{
  longlong lVar1;
  longlong in_R10;
  longlong in_R11;
  
  lVar1 = in_R10 * 0xe;
  *(int16_t *)(lVar1 + in_R11) = param_6;
  *(int16_t *)(lVar1 + 2 + in_R11) = param_7;
  if (param_3 != 0) {
    *(int16_t *)(lVar1 + 4 + in_R11) = param_10;
    *(int16_t *)(lVar1 + 6 + in_R11) = param_11;
    *(int8_t *)(lVar1 + 0xc + in_R11) = 3;
    return (int)in_R10 + 1;
  }
  *(int8_t *)(lVar1 + 0xc + in_R11) = 2;
  *(int32_t *)(lVar1 + 4 + in_R11) = 0;
  return (int)in_R10 + 1;
}



// WARNING: Removing unreachable block (ram,0x00018028d014)
// WARNING: Removing unreachable block (ram,0x00018028d020)
// WARNING: Removing unreachable block (ram,0x00018028d026)
// WARNING: Removing unreachable block (ram,0x00018028cf69)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18028c3e0(longlong param_1,uint64_t param_2,ulonglong *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  int32_t uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte bVar15;
  short sVar16;
  ulonglong uVar17;
  byte *pbVar18;
  short *psVar19;
  byte *pbVar20;
  int32_t uVar21;
  ulonglong uVar22;
  byte bVar23;
  int32_t uVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  byte *pbVar28;
  longlong lVar29;
  int16_t uVar30;
  int16_t *puVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  int32_t uVar35;
  ulonglong uVar36;
  longlong lVar37;
  int32_t uVar38;
  uint uVar39;
  ulonglong uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  longlong lStackX_8;
  uint uStack_108;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  byte *pbStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  
  lVar29 = *(longlong *)(param_1 + 8);
  uVar22 = 0;
  iVar7 = func_0x00018028c210();
  *param_3 = 0;
  if (iVar7 < 0) {
LAB_18028d060:
    uVar13 = 0;
  }
  else {
    lVar33 = (longlong)iVar7;
    sVar16 = (ushort)*(byte *)(lVar33 + lVar29) * 0x100 + (ushort)*(byte *)(lVar33 + 1 + lVar29);
    uVar21 = 0;
    if (sVar16 < 1) {
      uVar13 = uVar22;
      if (sVar16 == -1) {
        pbVar18 = (byte *)(lVar29 + 10 + lVar33);
        while( true ) {
          bVar15 = pbVar18[1];
          fVar43 = 0.0;
          pbVar28 = pbVar18 + 2;
          fVar44 = 0.0;
          pbVar1 = pbVar18 + 3;
          pbVar20 = pbVar18 + 4;
          lStackX_8 = 0;
          if ((bVar15 & 2) != 0) {
            if ((bVar15 & 1) == 0) {
              iVar7 = (int)(char)*pbVar20;
              iVar10 = (int)(char)pbVar18[5];
              pbVar20 = pbVar18 + 6;
            }
            else {
              iVar7 = (int)(short)((ushort)pbVar18[5] + (ushort)*pbVar20 * 0x100);
              iVar10 = (int)(short)((ushort)pbVar18[7] + (ushort)pbVar18[6] * 0x100);
              pbVar20 = pbVar18 + 8;
            }
            fVar44 = (float)iVar10;
            fVar43 = (float)iVar7;
          }
          pbVar18 = pbVar20;
          if ((bVar15 & 8) == 0) {
            if ((bVar15 & 0x40) == 0) {
              if ((char)bVar15 < '\0') {
                pbVar20 = pbVar18 + 4;
                pbVar2 = pbVar18 + 5;
                fStack_e0 = (float)(int)(short)((ushort)pbVar18[1] + (ushort)*pbVar18 * 0x100) *
                            6.1035156e-05;
                pbVar3 = pbVar18 + 6;
                pbVar4 = pbVar18 + 7;
                fStack_dc = (float)(int)(short)((ushort)pbVar18[3] + (ushort)pbVar18[2] * 0x100) *
                            6.1035156e-05;
                pbVar18 = pbVar18 + 8;
                fStack_d8 = (float)(int)(short)((ushort)*pbVar2 + (ushort)*pbVar20 * 0x100) *
                            6.1035156e-05;
                fStack_d4 = (float)(int)(short)((ushort)*pbVar4 + (ushort)*pbVar3 * 0x100) *
                            6.1035156e-05;
              }
              else {
                fStack_d4 = 1.0;
                fStack_d8 = 0.0;
                fStack_dc = 0.0;
                fStack_e0 = 1.0;
              }
            }
            else {
              pbVar20 = pbVar18 + 1;
              fStack_d8 = 0.0;
              bVar5 = *pbVar18;
              fStack_dc = 0.0;
              pbVar2 = pbVar18 + 2;
              pbVar3 = pbVar18 + 3;
              pbVar18 = pbVar18 + 4;
              fStack_e0 = (float)(int)(short)((ushort)*pbVar20 + (ushort)bVar5 * 0x100) *
                          6.1035156e-05;
              fStack_d4 = (float)(int)(short)((ushort)*pbVar3 + (ushort)*pbVar2 * 0x100) *
                          6.1035156e-05;
            }
          }
          else {
            pbVar20 = pbVar18 + 1;
            fStack_d8 = 0.0;
            bVar5 = *pbVar18;
            fStack_dc = 0.0;
            pbVar18 = pbVar18 + 2;
            fStack_e0 = (float)(int)(short)((ushort)*pbVar20 + (ushort)bVar5 * 0x100) *
                        6.1035156e-05;
            fStack_d4 = fStack_e0;
          }
          fVar45 = SQRT(fStack_dc * fStack_dc + fStack_e0 * fStack_e0);
          fVar46 = SQRT(fStack_d4 * fStack_d4 + fStack_d8 * fStack_d8);
          if (*(int *)(param_1 + 0x4c) == 0) {
            iVar7 = FUN_18028c3e0();
          }
          else {
            iVar7 = FUN_18028e390(param_1,(uint)*pbVar28 * 0x100 + (uint)*pbVar1,&lStackX_8);
          }
          if (0 < iVar7) break;
          if ((bVar15 & 0x20) == 0) {
            *param_3 = 0;
            return 0;
          }
        }
        lVar29 = (longlong)iVar7;
        if (3 < lVar29) {
          lVar33 = (lVar29 - 4U >> 2) + 1;
          uVar13 = lVar33 * 4;
          do {
            fVar41 = (float)(int)*(short *)(lStackX_8 + 2 + uVar22);
            sVar16 = *(short *)(lStackX_8 + uVar22);
            *(short *)(lStackX_8 + uVar22) =
                 (short)(int)(((float)(int)sVar16 * fStack_e0 + fVar41 * fStack_d8 + fVar43) *
                             fVar45);
            *(short *)(lStackX_8 + 2 + uVar22) =
                 (short)(int)(((float)(int)sVar16 * fStack_dc + fVar41 * fStack_d4 + fVar44) *
                             fVar46);
            fVar41 = (float)(int)*(short *)(lStackX_8 + 6 + uVar22);
            fVar42 = (float)(int)*(short *)(lStackX_8 + 4 + uVar22);
            *(short *)(lStackX_8 + 4 + uVar22) =
                 (short)(int)((fVar42 * fStack_e0 + fVar41 * fStack_d8 + fVar43) * fVar45);
            *(short *)(lStackX_8 + 6 + uVar22) =
                 (short)(int)((fVar42 * fStack_dc + fVar41 * fStack_d4 + fVar44) * fVar46);
            fVar41 = (float)(int)*(short *)(lStackX_8 + 0x10 + uVar22);
            fVar42 = (float)(int)*(short *)(lStackX_8 + 0xe + uVar22);
            *(short *)(lStackX_8 + 0xe + uVar22) =
                 (short)(int)((fVar42 * fStack_e0 + fVar41 * fStack_d8 + fVar43) * fVar45);
            *(short *)(lStackX_8 + 0x10 + uVar22) =
                 (short)(int)((fVar42 * fStack_dc + fVar41 * fStack_d4 + fVar44) * fVar46);
            fVar41 = (float)(int)*(short *)(lStackX_8 + 0x14 + uVar22);
            fVar42 = (float)(int)*(short *)(lStackX_8 + 0x12 + uVar22);
            *(short *)(lStackX_8 + 0x12 + uVar22) =
                 (short)(int)((fVar42 * fStack_e0 + fVar41 * fStack_d8 + fVar43) * fVar45);
            *(short *)(lStackX_8 + 0x14 + uVar22) =
                 (short)(int)((fVar42 * fStack_dc + fVar41 * fStack_d4 + fVar44) * fVar46);
            fVar41 = (float)(int)*(short *)(uVar22 + 0x1e + lStackX_8);
            fVar42 = (float)(int)*(short *)(uVar22 + 0x1c + lStackX_8);
            *(short *)(uVar22 + 0x1c + lStackX_8) =
                 (short)(int)((fVar42 * fStack_e0 + fVar41 * fStack_d8 + fVar43) * fVar45);
            *(short *)(uVar22 + 0x1e + lStackX_8) =
                 (short)(int)((fVar42 * fStack_dc + fVar41 * fStack_d4 + fVar44) * fVar46);
            fVar41 = (float)(int)*(short *)(uVar22 + 0x22 + lStackX_8);
            fVar42 = (float)(int)*(short *)(uVar22 + 0x20 + lStackX_8);
            *(short *)(uVar22 + 0x20 + lStackX_8) =
                 (short)(int)((fVar42 * fStack_e0 + fVar41 * fStack_d8 + fVar43) * fVar45);
            *(short *)(uVar22 + 0x22 + lStackX_8) =
                 (short)(int)((fVar42 * fStack_dc + fVar41 * fStack_d4 + fVar44) * fVar46);
            fVar41 = (float)(int)*(short *)(uVar22 + 0x2c + lStackX_8);
            fVar42 = (float)(int)*(short *)(uVar22 + 0x2a + lStackX_8);
            *(short *)(uVar22 + 0x2a + lStackX_8) =
                 (short)(int)((fVar42 * fStack_e0 + fVar41 * fStack_d8 + fVar43) * fVar45);
            *(short *)(uVar22 + 0x2c + lStackX_8) =
                 (short)(int)((fVar42 * fStack_dc + fVar41 * fStack_d4 + fVar44) * fVar46);
            fVar41 = (float)(int)*(short *)(uVar22 + 0x30 + lStackX_8);
            fVar42 = (float)(int)*(short *)(uVar22 + 0x2e + lStackX_8);
            *(short *)(uVar22 + 0x2e + lStackX_8) =
                 (short)(int)((fVar42 * fStack_e0 + fVar41 * fStack_d8 + fVar43) * fVar45);
            *(short *)(uVar22 + 0x30 + lStackX_8) =
                 (short)(int)((fVar42 * fStack_dc + fVar41 * fStack_d4 + fVar44) * fVar46);
            uVar22 = uVar22 + 0x38;
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
        }
        if ((longlong)uVar13 < lVar29) {
          lVar33 = uVar13 * 0xe;
          lVar37 = lVar29 - uVar13;
          do {
            fVar41 = (float)(int)*(short *)(lVar33 + 2 + lStackX_8);
            sVar16 = *(short *)(lVar33 + lStackX_8);
            *(short *)(lVar33 + lStackX_8) =
                 (short)(int)(((float)(int)sVar16 * fStack_e0 + fVar41 * fStack_d8 + fVar43) *
                             fVar45);
            *(short *)(lVar33 + 2 + lStackX_8) =
                 (short)(int)(((float)(int)sVar16 * fStack_dc + fVar41 * fStack_d4 + fVar44) *
                             fVar46);
            fVar41 = (float)(int)*(short *)(lVar33 + 6 + lStackX_8);
            fVar42 = (float)(int)*(short *)(lVar33 + 4 + lStackX_8);
            *(short *)(lVar33 + 4 + lStackX_8) =
                 (short)(int)((fVar42 * fStack_e0 + fVar41 * fStack_d8 + fVar43) * fVar45);
            *(short *)(lVar33 + 6 + lStackX_8) =
                 (short)(int)((fVar42 * fStack_dc + fVar41 * fStack_d4 + fVar44) * fVar46);
            lVar33 = lVar33 + 0xe;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
        }
        if (SYSTEM_DATA_MANAGER_A != 0) {
          *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
        }
        lVar33 = func_0x000180120ce0((longlong)iVar7 * 0xe,SYSTEM_DATA_MANAGER_B);
        if (lVar33 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(lVar33,lStackX_8,lVar29 * 0xe);
        }
        if (lStackX_8 != 0) {
          if (SYSTEM_DATA_MANAGER_A != 0) {
            *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
          }
                    // WARNING: Subroutine does not return
          FUN_180059ba0(lStackX_8,SYSTEM_DATA_MANAGER_B);
        }
        goto LAB_18028d060;
      }
    }
    else {
      pbStack_e8 = (byte *)(lVar29 + 10 + lVar33);
      bVar23 = 0;
      lVar37 = (longlong)(sVar16 * 2);
      bVar15 = pbStack_e8[lVar37 + -2];
      bVar5 = pbStack_e8[lVar37 + -1];
      pbVar18 = (byte *)(lVar29 + 0xc +
                        (ulonglong)*(byte *)(lVar37 + lVar33 + 0xb + lVar29) +
                        (ulonglong)*(byte *)(lVar37 + lVar33 + 10 + lVar29) * 0x100 + lVar37 +
                        lVar33);
      uVar39 = bVar5 + 1 + (uint)bVar15 * 0x100;
      uVar13 = (ulonglong)uVar39;
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      }
      uVar11 = func_0x000180120ce0((longlong)(int)(bVar5 + 1 + (uint)bVar15 * 0x100 + sVar16 * 2) *
                                   0xe);
      if (uVar11 == 0) goto LAB_18028d060;
      uVar12 = 0;
      bVar15 = 0;
      uVar38 = 0;
      uStack_f4 = 0;
      if (uVar13 != 0) {
        pbVar28 = (byte *)(lVar37 * 0xe + 0xc + uVar11);
        uVar14 = uVar13;
        do {
          if (bVar15 == 0) {
            bVar23 = *pbVar18;
            if ((bVar23 & 8) != 0) {
              bVar15 = pbVar18[1];
            }
            pbVar18 = pbVar18 + (ulonglong)((bVar23 & 8) != 0) + 1;
          }
          else {
            bVar15 = bVar15 - 1;
          }
          *pbVar28 = bVar23;
          pbVar28 = pbVar28 + 0xe;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (uVar13 != 0) {
        puVar31 = (int16_t *)(lVar37 * 0xe + uVar11);
        uVar14 = uVar12;
        uVar34 = uVar13;
        do {
          if ((*(byte *)(puVar31 + 6) & 2) == 0) {
            if ((*(byte *)(puVar31 + 6) & 0x10) == 0) {
              uVar14 = (ulonglong)
                       (uint)((int)uVar14 +
                             (int)(short)((ushort)*pbVar18 * 0x100 + (ushort)pbVar18[1]));
              pbVar18 = pbVar18 + 2;
            }
          }
          else {
            bVar15 = *pbVar18;
            pbVar18 = pbVar18 + 1;
            uVar9 = (uint)bVar15;
            if ((*(byte *)(puVar31 + 6) & 0x10) == 0) {
              uVar9 = -(uint)bVar15;
            }
            uVar14 = (ulonglong)((int)uVar14 + uVar9);
          }
          *puVar31 = (short)uVar14;
          puVar31 = puVar31 + 7;
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
      }
      if (uVar13 != 0) {
        puVar31 = (int16_t *)(uVar11 + 2 + lVar37 * 0xe);
        uVar14 = uVar12;
        uVar34 = uVar13;
        do {
          if ((*(byte *)(puVar31 + 5) & 4) == 0) {
            if ((*(byte *)(puVar31 + 5) & 0x20) == 0) {
              uVar14 = (ulonglong)
                       (uint)((int)uVar14 +
                             (int)(short)((ushort)*pbVar18 * 0x100 + (ushort)pbVar18[1]));
              pbVar18 = pbVar18 + 2;
            }
          }
          else {
            bVar15 = *pbVar18;
            pbVar18 = pbVar18 + 1;
            uVar9 = (uint)bVar15;
            if ((*(byte *)(puVar31 + 5) & 0x20) == 0) {
              uVar9 = -(uint)bVar15;
            }
            uVar14 = (ulonglong)((int)uVar14 + uVar9);
          }
          *puVar31 = (short)uVar14;
          puVar31 = puVar31 + 7;
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
      }
      uStack_fc = 0;
      uStack_100 = 0;
      uVar8 = 0;
      uStack_108 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uVar14 = uVar12;
      uVar34 = uVar22;
      uVar35 = uVar8;
      uVar24 = uVar8;
      if (uVar13 != 0) {
        psVar19 = (short *)(lVar37 * 0xe + uVar11);
        uVar13 = uVar12;
        uVar25 = uVar12;
        uVar32 = uVar12;
        uVar36 = uVar12;
        uVar40 = uVar12;
        do {
          iVar7 = (int)uVar14;
          sVar16 = *psVar19;
          uVar26 = (uint)sVar16;
          uVar17 = (ulonglong)uVar26;
          bVar15 = *(byte *)(psVar19 + 6);
          sVar6 = psVar19[1];
          uVar27 = (uint)sVar6;
          lStackX_8 = CONCAT71(lStackX_8._1_7_,bVar15);
          uVar9 = (uint)uVar12;
          if (uStack_f4 == uVar9) {
            if (uVar40 != 0) {
              iVar7 = FUN_18028c2f0(uVar11,uVar14,uVar22,uVar34,(int)uVar25,(int)uVar36,uStack_f8,
                                    uStack_fc,(int)uVar13,(int)uVar32);
              uVar32 = (ulonglong)uStack_f0;
              uVar13 = (ulonglong)uStack_100;
              bVar15 = (byte)lStackX_8;
              uVar9 = uStack_108;
            }
            uVar34 = (ulonglong)(~(uint)bVar15 & 1);
            if ((~(uint)bVar15 & 1) == 0) {
              uVar36 = (ulonglong)uVar27;
            }
            else {
              uVar17 = (ulonglong)(uint)(int)psVar19[7];
              uVar36 = (ulonglong)(uint)(int)psVar19[8];
              uStack_fc = uVar27;
              uStack_f8 = uVar26;
              if ((*(byte *)(psVar19 + 0xd) & 1) == 0) {
                uVar17 = (ulonglong)(uint)((int)((int)psVar19[7] + uVar26) >> 1);
                uVar36 = (ulonglong)(uint)((int)((int)psVar19[8] + uVar27) >> 1);
              }
              else {
                uStack_108 = uVar9 + 1;
                uVar40 = uVar40 + 1;
                psVar19 = psVar19 + 7;
              }
            }
            puVar31 = (int16_t *)((longlong)iVar7 * 0xe + uVar11);
            *(int8_t *)(puVar31 + 6) = 1;
            *puVar31 = (short)uVar17;
            puVar31[1] = (short)uVar36;
            *(int32_t *)(puVar31 + 2) = 0;
            uStack_f4 = (uint)*pbStack_e8 * 0x100 + pbStack_e8[1] + 1;
            pbStack_e8 = pbStack_e8 + 2;
            uVar25 = uVar17;
LAB_18028c839:
            uVar14 = (ulonglong)(iVar7 + 1);
            uVar22 = 0;
            uVar17 = uVar13;
          }
          else {
            uVar30 = (int16_t)uVar32;
            iVar10 = (int)uVar22;
            if ((bVar15 & 1) != 0) {
              lVar29 = (longlong)iVar7 * 0xe;
              if (iVar10 == 0) {
                uVar13 = 0;
                uVar30 = 0;
              }
              *(char *)(lVar29 + 0xc + uVar11) = (iVar10 != 0) + '\x02';
              *(short *)(lVar29 + uVar11) = sVar16;
              *(short *)(lVar29 + 2 + uVar11) = sVar6;
              *(short *)(lVar29 + 4 + uVar11) = (short)uVar13;
              uVar13 = (ulonglong)uStack_100;
              *(int16_t *)(lVar29 + 6 + uVar11) = uVar30;
              goto LAB_18028c839;
            }
            if (iVar10 != 0) {
              uVar14 = (ulonglong)(iVar7 + 1);
              puVar31 = (int16_t *)((longlong)iVar7 * 0xe + uVar11);
              *puVar31 = (short)((int)((int)uVar13 + uVar26) >> 1);
              puVar31[1] = (short)((int)((int)uVar32 + uVar27) >> 1);
              *(int8_t *)(puVar31 + 6) = 3;
              puVar31[2] = (short)uVar13;
              puVar31[3] = uVar30;
              uVar9 = uStack_108;
            }
            uStack_108 = uVar9;
            uVar32 = (ulonglong)uVar27;
            uVar22 = 1;
            uStack_100 = uVar26;
            uStack_f0 = uVar27;
          }
          uVar24 = (int32_t)uVar25;
          uVar35 = (int32_t)uVar36;
          uVar38 = (int32_t)uVar17;
          uVar8 = (int32_t)uVar32;
          uVar21 = (int32_t)uVar22;
          uStack_108 = uStack_108 + 1;
          uVar12 = (ulonglong)uStack_108;
          uVar40 = uVar40 + 1;
          psVar19 = psVar19 + 7;
          uVar13 = uVar17;
        } while ((longlong)uVar40 < (longlong)(ulonglong)uVar39);
      }
      uVar39 = FUN_18028c2f0(uVar11,uVar14,uVar21,uVar34,uVar24,uVar35,uStack_f8,uStack_fc,uVar38,
                             uVar8);
      uVar22 = uVar11;
      uVar13 = (ulonglong)uVar39;
    }
    *param_3 = uVar22;
  }
  return uVar13;
}







