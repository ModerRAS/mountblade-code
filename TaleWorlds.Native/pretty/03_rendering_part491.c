#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part491.c - 12 个函数

// 函数: void FUN_18052c860(int64_t param_1,int param_2,int64_t param_3)
void FUN_18052c860(int64_t param_1,int param_2,int64_t param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int64_t lVar5;
  char cVar6;
  int64_t lVar7;
  uint *puVar8;
  int8_t auStack_158 [32];
  int64_t *plStack_138;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  int64_t *aplStack_110 [2];
  int32_t uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  int32_t uStack_ec;
  uint64_t uStack_e8;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  int8_t auStack_b8 [16];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  uint64_t uStack_68;
  
  uStack_e8 = 0xfffffffffffffffe;
  uStack_68 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  if (*(int *)(param_3 + 0x30) < 1) goto LAB_18052cb17;
  fStack_f8 = *(float *)(param_1 + 0x550);
  fStack_f4 = *(float *)(param_1 + 0x554);
  fStack_f0 = *(float *)(param_1 + 0x558);
  uStack_ec = *(int32_t *)(param_1 + 0x55c);
  fStack_128 = *(float *)(param_1 + 0x530);
  fStack_124 = *(float *)(param_1 + 0x534);
  fStack_120 = *(float *)(param_1 + 0x538);
  uStack_11c = *(int32_t *)(param_1 + 0x53c);
  if (-1 < param_2) {
    if ((*(uint *)(param_1 + 0x56c) >> 0xb & 1) == 0) {
      if ((*(uint *)(param_1 + 0x56c) & 1) == 0) goto LAB_18052cac2;
      if (param_2 != 0) {
        if (param_2 != 3) goto LAB_18052cb17;
        lVar7 = *(int64_t *)(param_1 + 0x6d8);
        lVar5 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar7 + 0x8a8) + 0x260) + 0x210);
        goto LAB_18052c95b;
      }
      lVar7 = *(int64_t *)(param_1 + 0x6d8);
      cVar6 = *(char *)(*(int64_t *)(*(int64_t *)(*(int64_t *)(lVar7 + 0x8a8) + 0x260) + 0x210) +
                       0xe7);
    }
    else {
      lVar7 = *(int64_t *)(param_1 + 0x6d8);
      lVar5 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar7 + 0x8a8) + 0x260) + 0x210);
      if (param_2 == 0) {
        cVar6 = *(char *)(lVar5 + 0xe7);
      }
      else {
LAB_18052c95b:
        cVar6 = *(char *)(lVar5 + 0xe8);
      }
    }
    if (-1 < cVar6) {
      lVar7 = *(int64_t *)(lVar7 + 0x8a8);
      puVar8 = (uint *)((int64_t)cVar6 * 0x100 +
                       *(int64_t *)(*(int64_t *)(param_1 + 0x658) + 0x18));
      do {
        LOCK();
        uVar1 = *puVar8;
        *puVar8 = *puVar8 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      uStack_d8 = puVar8[1];
      uStack_d4 = puVar8[2];
      uStack_d0 = puVar8[3];
      uStack_cc = puVar8[4];
      fVar2 = (float)puVar8[5];
      fVar3 = (float)puVar8[6];
      fVar4 = (float)puVar8[7];
      uStack_bc = puVar8[8];
      *puVar8 = 0;
      fStack_c8 = fVar2;
      fStack_c4 = fVar3;
      fStack_c0 = fVar4;
      uStack_88 = uStack_d8;
      uStack_84 = uStack_d4;
      uStack_80 = uStack_d0;
      uStack_7c = uStack_cc;
      fStack_78 = fVar2;
      fStack_74 = fVar3;
      fStack_70 = fVar4;
      uStack_6c = uStack_bc;
      FUN_18063b5f0(auStack_b8,&uStack_d8);
      fStack_f0 = fVar4 * *(float *)(lVar7 + 0x98) + *(float *)(lVar7 + 0xa8);
      fStack_f4 = fVar2 * *(float *)(lVar7 + 0x74) + fVar3 * *(float *)(lVar7 + 0x84) +
                  *(float *)(lVar7 + 0xa4);
      fStack_f8 = fVar2 * *(float *)(lVar7 + 0x70) + fVar3 * *(float *)(lVar7 + 0x80) +
                  *(float *)(lVar7 + 0xa0);
      fStack_120 = fStack_a0 * *(float *)(lVar7 + 0x98);
      fStack_124 = fStack_a8 * *(float *)(lVar7 + 0x74) + fStack_a4 * *(float *)(lVar7 + 0x84);
      fStack_128 = fStack_a8 * *(float *)(lVar7 + 0x70) + fStack_a4 * *(float *)(lVar7 + 0x80);
      uStack_fc = 0x7f7fffff;
      uStack_ec = 0x7f7fffff;
      uStack_11c = 0x7f7fffff;
    }
  }
LAB_18052cac2:
  FUN_1800c03c0(fStack_f8,aplStack_110);
  uStack_118 = 0x3e4ccccd;
  uStack_114 = 0x3e4ccccd;
  plStack_138 = aplStack_110[0];
  FUN_1801a43d0(*(uint64_t *)(param_1 + 0x660),&fStack_f8,&fStack_128,&uStack_118);
  if (aplStack_110[0] != (int64_t *)0x0) {
    (**(code **)(*aplStack_110[0] + 0x38))();
  }
LAB_18052cb17:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18052cb50(int64_t param_1,int64_t param_2)
void FUN_18052cb50(int64_t param_1,int64_t param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  byte bVar6;
  float *pfVar7;
  uint uVar8;
  int64_t lVar9;
  int64_t *plVar10;
  uint *puVar11;
  int64_t lVar12;
  int64_t lVar13;
  int8_t auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int8_t auStack_138 [32];
  int64_t **pplStack_118;
  int32_t uStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  int32_t uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  int64_t *plStack_d8;
  int64_t *plStack_d0;
  int64_t *plStack_c8;
  int32_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint uStack_8c;
  int8_t auStack_88 [16];
  uint64_t uStack_78;
  uint64_t uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  uint64_t uStack_58;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  if ((*(int *)(param_2 + 8) != -1) && (*(int *)(param_2 + 0xc) != -1)) {
    uVar8 = *(uint *)(param_1 + 0x748) << 0xd ^ *(uint *)(param_1 + 0x748);
    uVar8 = uVar8 ^ uVar8 >> 0x11;
    uVar8 = uVar8 ^ uVar8 << 5;
    *(uint *)(param_1 + 0x748) = uVar8;
    if ((0.5 < (float)(uVar8 - 1) * 2.3283064e-10) && (*(int *)(param_1 + 0x5a0) < 9)) {
      cVar1 = *(char *)(*(int64_t *)(param_1 + 0x590) + 0x25ef);
      uVar8 = uVar8 << 0xd ^ uVar8;
      uVar8 = uVar8 ^ uVar8 >> 0x11;
      uVar8 = uVar8 ^ uVar8 << 5;
      *(uint *)(param_1 + 0x748) = uVar8;
      lVar9 = (int64_t)
              *(char *)((int64_t)(int)((uVar8 - 1) % (uint)(int)cVar1) + 0x25e9 +
                       *(int64_t *)(param_1 + 0x590));
      lVar13 = lVar9 * 0x1b0;
      lVar12 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x658) + 0x208) + 0x140);
      if (0.0 < *(float *)(lVar13 + 0x158 + lVar12)) {
        uVar8 = uVar8 << 0xd ^ uVar8;
        uVar8 = uVar8 ^ uVar8 >> 0x11;
        uVar8 = uVar8 ^ uVar8 << 5;
        fVar20 = (float)(uVar8 - 1) * 2.3283064e-10;
        uVar8 = uVar8 << 0xd ^ uVar8;
        uVar8 = uVar8 ^ uVar8 >> 0x11;
        uVar8 = uVar8 ^ uVar8 << 5;
        fVar19 = (float)(uVar8 - 1);
        uVar8 = uVar8 << 0xd ^ uVar8;
        uVar8 = uVar8 ^ uVar8 >> 0x11;
        uVar8 = uVar8 ^ uVar8 << 5;
        fVar18 = (float)(uVar8 - 1);
        uVar8 = uVar8 << 0xd ^ uVar8;
        uVar8 = uVar8 ^ uVar8 >> 0x11;
        uVar8 = uVar8 ^ uVar8 << 5;
        *(uint *)(param_1 + 0x748) = uVar8;
        fVar17 = (float)(uVar8 - 1);
        fVar15 = (fVar18 * fVar18 + fVar19 * fVar19) * 5.421011e-20 +
                 fVar17 * fVar17 * 2.1684045e-21;
        auVar14 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
        fVar16 = auVar14._0_4_;
        fVar16 = fVar16 * 0.5 * (3.0 - fVar15 * fVar16 * fVar16);
        fStack_e8 = fVar19 * fVar16 * 2.3283064e-10;
        fStack_e4 = fVar18 * fVar16 * 2.3283064e-10;
        fStack_e0 = fVar17 * fVar16 * 4.656613e-11;
        fStack_f8 = *(float *)(lVar13 + 0x148 + lVar12);
        fStack_f8 = (*(float *)(lVar13 + 0x138 + lVar12) - fStack_f8) * fVar20 + fStack_f8;
        fStack_f4 = *(float *)(lVar13 + 0x14c + lVar12);
        fStack_f4 = (*(float *)(lVar13 + 0x13c + lVar12) - fStack_f4) * fVar20 + fStack_f4;
        fStack_f0 = *(float *)(lVar13 + 0x150 + lVar12);
        fStack_f0 = (*(float *)(lVar13 + 0x140 + lVar12) - fStack_f0) * fVar20 + fStack_f0;
        lVar12 = *(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8);
        puVar11 = (uint *)(lVar9 * 0x100 + *(int64_t *)(*(int64_t *)(param_1 + 0x658) + 0x18));
        do {
          LOCK();
          uVar8 = *puVar11;
          *puVar11 = *puVar11 | 1;
          UNLOCK();
        } while ((uVar8 & 1) != 0);
        uStack_a8 = *(uint64_t *)(puVar11 + 1);
        uStack_a0 = *(uint64_t *)(puVar11 + 3);
        fVar16 = (float)puVar11[5];
        fVar15 = (float)puVar11[6];
        fVar17 = (float)puVar11[7];
        uStack_8c = puVar11[8];
        *puVar11 = 0;
        fStack_98 = fVar16;
        fStack_94 = fVar15;
        fStack_90 = fVar17;
        uStack_78 = uStack_a8;
        uStack_70 = uStack_a0;
        fStack_68 = fVar16;
        fStack_64 = fVar15;
        fStack_60 = fVar17;
        uStack_5c = uStack_8c;
        pfVar7 = (float *)FUN_1801c0fb0(&uStack_a8,auStack_88,&fStack_f8);
        fStack_100 = (fVar17 + pfVar7[2]) * *(float *)(lVar12 + 0x98) + *(float *)(lVar12 + 0xa8);
        fStack_104 = (fVar15 + pfVar7[1]) * *(float *)(lVar12 + 0x84) +
                     (fVar16 + *pfVar7) * *(float *)(lVar12 + 0x74) + *(float *)(lVar12 + 0xa4);
        fStack_108 = (fVar15 + pfVar7[1]) * *(float *)(lVar12 + 0x80) +
                     (fVar16 + *pfVar7) * *(float *)(lVar12 + 0x70) + *(float *)(lVar12 + 0xa0);
        uStack_fc = 0x7f7fffff;
        uStack_c0 = 3;
        plStack_d8 = (int64_t *)FUN_18062b420(system_memory_pool_ptr,8,3);
        plStack_d0 = plStack_d8 + 1;
        *plStack_d8 = 0;
        plStack_c8 = plStack_d0;
        FUN_180056f10(plStack_d8,*(uint64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8));
        iVar2 = *(int *)(param_2 + 0xc);
        iVar3 = *(int *)(param_2 + 8);
        uVar8 = *(uint *)(param_1 + 0x748) << 0xd ^ *(uint *)(param_1 + 0x748);
        uVar8 = uVar8 ^ uVar8 >> 0x11;
        uVar8 = uVar8 ^ uVar8 << 5;
        *(uint *)(param_1 + 0x748) = uVar8;
        uStack_110 = 0x3eb33333;
        pplStack_118 = &plStack_d8;
        bVar6 = FUN_18019fc10(*(uint64_t *)(param_1 + 0x660),&fStack_108,&fStack_e8,
                              iVar3 + (uVar8 - 1) % ((iVar2 - iVar3) + 1U));
        plVar5 = plStack_d0;
        plVar4 = plStack_d8;
        *(int *)(param_1 + 0x5a0) = *(int *)(param_1 + 0x5a0) + (uint)bVar6;
        for (plVar10 = plStack_d8; plVar10 != plVar5; plVar10 = plVar10 + 1) {
          if ((int64_t *)*plVar10 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar10 + 0x38))();
          }
        }
        if (plVar4 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar4);
        }
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (uint64_t)auStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18052d020(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void FUN_18052d020(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  int64_t *param_5,int param_6,uint64_t param_7)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t ***ppplStackX_8;
  int64_t **pplStack_68;
  int64_t **pplStack_60;
  int64_t alStack_58 [2];
  int64_t ***ppplStack_48;
  int64_t ***ppplStack_40;
  int64_t ***ppplStack_38;
  
  alStack_58[1] = 0xfffffffffffffffe;
  lVar3 = *(int64_t *)(param_1 + 0x8f8);
  ppplStackX_8 = &pplStack_68;
  pplStack_68 = (int64_t **)*param_5;
  if ((int64_t ***)pplStack_68 != (int64_t ***)0x0) {
    (*(code *)(*pplStack_68)[5])();
  }
  ppplStack_48 = &pplStack_68;
  lVar3 = (int64_t)param_6 * 0x1f8 + lVar3;
  ppplStackX_8 = (int64_t ***)pplStack_68;
  if ((int64_t ***)pplStack_68 != (int64_t ***)0x0) {
    (*(code *)(*pplStack_68)[5])();
  }
  ppplStack_40 = (int64_t ***)&ppplStackX_8;
  uVar1 = FUN_18062b1e0(system_memory_pool_ptr,0x1f8,8,3);
  lVar2 = FUN_18058f390(uVar1);
  ppplStack_38 = &pplStack_60;
  pplStack_60 = (int64_t **)ppplStackX_8;
  alStack_58[0] = lVar2;
  if (ppplStackX_8 != (int64_t ***)0x0) {
    (*(code *)(*ppplStackX_8)[5])();
  }
  FUN_18058e430(lVar2,param_2,param_3,param_4,&unknown_var_5760_ptr,0,0,&pplStack_60,0,0xffffffff,0);
  FUN_18005ea90(lVar3 + 0x18,alStack_58);
  uVar1 = *(uint64_t *)(lVar3 + 0x100);
  ppplStack_38 = &pplStack_60;
  pplStack_60 = (int64_t **)ppplStackX_8;
  if (ppplStackX_8 != (int64_t ***)0x0) {
    (*(code *)(*ppplStackX_8)[5])();
  }
  FUN_1805e82f0(uVar1,lVar2 + 0x100,
                (int64_t)*(int *)(lVar2 + 0xf0) * 0xa0 + *(int64_t *)(lVar2 + 0xd0),&pplStack_60,
                param_7);
  if (ppplStackX_8 != (int64_t ***)0x0) {
    (*(code *)(*ppplStackX_8)[7])();
  }
  if ((int64_t ***)pplStack_68 != (int64_t ***)0x0) {
    (*(code *)(*pplStack_68)[7])();
  }
  FUN_180544ac0(*(uint64_t *)(param_1 + 0x6d8));
  if ((int64_t *)*param_5 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_5 + 0x38))();
  }
  return;
}





// 函数: void FUN_18052d200(int64_t param_1,uint param_2)
void FUN_18052d200(int64_t param_1,uint param_2)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  
  if (((*(uint *)(param_1 + 0x56c) & 0x800) != 0) &&
     (lVar1 = *(int64_t *)(param_1 + 0x590), lVar1 != 0)) {
    bVar5 = *(byte *)(lVar1 + 0x3424) | 8;
    if ((param_2 & 1) == 0) {
      bVar5 = *(byte *)(lVar1 + 0x3424) & 0xf7;
    }
    bVar4 = bVar5 | 0x20;
    if ((param_2 >> 2 & 1) == 0) {
      bVar4 = bVar5 & 0xdf;
    }
    bVar5 = bVar4 | 0x10;
    if ((param_2 >> 1 & 1) == 0) {
      bVar5 = bVar4 & 0xef;
    }
    *(byte *)(lVar1 + 0x3424) = bVar5;
    func_0x0001805a7480(param_1 + 0x28);
    lVar1 = *(int64_t *)(param_1 + 0x20);
    uVar2 = *(uint *)(lVar1 + 8) | 4;
    if ((param_2 & 1) == 0) {
      uVar2 = *(uint *)(lVar1 + 8) & 0xfffffffb;
    }
    uVar3 = uVar2 | 8;
    if ((param_2 >> 2 & 1) == 0) {
      uVar3 = uVar2 & 0xfffffff7;
    }
    if ((param_2 >> 1 & 1) != 0) {
      *(uint *)(lVar1 + 8) = uVar3 | 0x10;
      return;
    }
    *(uint *)(lVar1 + 8) = uVar3 & 0xffffffef;
  }
  return;
}





// 函数: void FUN_18052d23a(uint64_t param_1,byte param_2,int64_t param_3)
void FUN_18052d23a(uint64_t param_1,byte param_2,int64_t param_3)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte in_AL;
  byte bVar5;
  uint unaff_EBP;
  int64_t unaff_RSI;
  
  bVar5 = param_2 | 8;
  if ((unaff_EBP & 1) == 0) {
    bVar5 = in_AL & 0xf7;
  }
  bVar4 = bVar5 | 0x20;
  if ((unaff_EBP >> 2 & 1) == 0) {
    bVar4 = bVar5 & 0xdf;
  }
  bVar5 = bVar4 | 0x10;
  if ((unaff_EBP >> 1 & 1) == 0) {
    bVar5 = bVar4 & 0xef;
  }
  *(byte *)(param_3 + 0x3424) = bVar5;
  func_0x0001805a7480(unaff_RSI + 0x28);
  lVar1 = *(int64_t *)(unaff_RSI + 0x20);
  uVar2 = *(uint *)(lVar1 + 8) | 4;
  if ((unaff_EBP & 1) == 0) {
    uVar2 = *(uint *)(lVar1 + 8) & 0xfffffffb;
  }
  uVar3 = uVar2 | 8;
  if ((unaff_EBP >> 2 & 1) == 0) {
    uVar3 = uVar2 & 0xfffffff7;
  }
  if ((unaff_EBP >> 1 & 1) != 0) {
    *(uint *)(lVar1 + 8) = uVar3 | 0x10;
    return;
  }
  *(uint *)(lVar1 + 8) = uVar3 & 0xffffffef;
  return;
}





// 函数: void FUN_18052d2c5(uint param_1,int64_t param_2)
void FUN_18052d2c5(uint param_1,int64_t param_2)

{
  *(uint *)(param_2 + 8) = param_1 | 0x10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18052d2f0(int64_t param_1)
void FUN_18052d2f0(int64_t param_1)

{
  float fVar1;
  byte bVar2;
  int32_t uVar3;
  int64_t lVar4;
  byte bVar5;
  int8_t uVar6;
  uint uVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  
  if (system_status_flag - 2U < 2) {
    *(int32_t *)(param_1 + 0x4c4) = 0;
  }
  if (((*(int64_t *)(param_1 + 0x590) != 0) && (*(int64_t *)(param_1 + 0x6d8) != 0)) &&
     (*(char *)(*(int64_t *)(param_1 + 0x6d8) + 0x8be) != '\0')) {
    lVar4 = *(int64_t *)(param_1 + 0x20);
    uVar3 = *(int32_t *)(param_1 + 0x10);
    FUN_18055dc20(&system_data_25a0,uVar3,6,*(int32_t *)(lVar4 + 0x130),&unknown_var_6616_ptr);
    uVar7 = *(uint *)(param_1 + 0x56c);
    if ((uVar7 >> 0xb & 1) != 0) {
      bVar2 = *(byte *)(*(int64_t *)(param_1 + 0x590) + 0x3424);
      bVar8 = bVar2 >> 3 & 1;
      bVar5 = bVar8 | 4;
      if ((bVar2 & 0x20) == 0) {
        bVar5 = bVar8;
      }
      bVar8 = bVar5 | 2;
      if ((bVar2 & 0x10) == 0) {
        bVar8 = bVar5;
      }
      FUN_18055dc20(&system_data_25a0,uVar3,7,bVar8,&unknown_var_6600_ptr);
      uVar7 = *(uint *)(param_1 + 0x56c);
    }
    if (((uVar7 >> 0xe & 1) != 0) && (*(int *)(param_1 + 0x568) == 1)) {
      FUN_18055dc20(&system_data_25a0,uVar3,0xf,*(int32_t *)(param_1 + 0x208),&unknown_var_6536_ptr);
      uVar6 = func_0x000180525320(param_1);
      FUN_18055dc20(&system_data_25a0,uVar3,8,uVar6,&unknown_var_6488_ptr);
    }
    FUN_18055db10(&system_data_25a0,uVar3,0xc,*(int32_t *)(lVar4 + 0x38),&unknown_var_6520_ptr,0);
    FUN_18055db10(&system_data_25a0,uVar3,0xd,*(int32_t *)(lVar4 + 0x3c),&unknown_var_6504_ptr,0);
    FUN_18055db10(&system_data_25a0,uVar3,0xe,*(int32_t *)(lVar4 + 0x134),&unknown_var_6568_ptr,0);
    if (*(int *)(param_1 + 0x564) < 0) {
      FUN_18055d960(&system_data_25a0,uVar3);
    }
    if ((*(uint *)(param_1 + 0x56c) & 0x800) != 0) {
      FUN_18055db10(&system_data_25a0,uVar3,10,*(int32_t *)(param_1 + 0x4ac),&unknown_var_6648_ptr,0);
      FUN_18055db10(&system_data_25a0,uVar3,0xb,*(int32_t *)(param_1 + 0x4a4),&unknown_var_6664_ptr,0);
      FUN_18055db10(&system_data_25a0,uVar3,4,0,&unknown_var_6552_ptr,0);
      FUN_18055db10(&system_data_25a0,uVar3,5,0,&unknown_var_6584_ptr,0);
      return;
    }
    FUN_18055db10(&system_data_25a0,uVar3,3,*(int32_t *)(lVar4 + 0x34),&unknown_var_6632_ptr,0);
    fVar1 = *(float *)(lVar4 + 0x20);
    fVar9 = -26.7;
    if ((-26.7 <= fVar1) && (fVar9 = fVar1, 80.06089 <= fVar1)) {
      fVar9 = 80.06089;
    }
    fVar1 = *(float *)(lVar4 + 0x1c);
    fVar10 = -12.25;
    if ((-12.25 <= fVar1) && (fVar10 = fVar1, 12.226074 <= fVar1)) {
      fVar10 = 12.226074;
    }
    FUN_18055db10(&system_data_25a0,uVar3,4,fVar9,&unknown_var_6552_ptr,0);
    FUN_18055db10(&system_data_25a0,uVar3,5,fVar10,&unknown_var_6584_ptr,0);
  }
  return;
}





// 函数: void FUN_18052d33c(int64_t param_1)
void FUN_18052d33c(int64_t param_1)

{
  float fVar1;
  byte bVar2;
  int32_t uVar3;
  int64_t lVar4;
  byte bVar5;
  int8_t uVar6;
  uint uVar7;
  byte bVar8;
  int64_t unaff_RBX;
  float fVar9;
  float fVar10;
  
  lVar4 = *(int64_t *)(param_1 + 0x20);
  uVar3 = *(int32_t *)(param_1 + 0x10);
  FUN_18055dc20(&system_data_25a0,uVar3,6,*(int32_t *)(lVar4 + 0x130),&unknown_var_6616_ptr);
  uVar7 = *(uint *)(unaff_RBX + 0x56c);
  if ((uVar7 >> 0xb & 1) != 0) {
    bVar2 = *(byte *)(*(int64_t *)(unaff_RBX + 0x590) + 0x3424);
    bVar8 = bVar2 >> 3 & 1;
    bVar5 = bVar8 | 4;
    if ((bVar2 & 0x20) == 0) {
      bVar5 = bVar8;
    }
    bVar8 = bVar5 | 2;
    if ((bVar2 & 0x10) == 0) {
      bVar8 = bVar5;
    }
    FUN_18055dc20(&system_data_25a0,uVar3,7,bVar8,&unknown_var_6600_ptr);
    uVar7 = *(uint *)(unaff_RBX + 0x56c);
  }
  if (((uVar7 >> 0xe & 1) != 0) && (*(int *)(unaff_RBX + 0x568) == 1)) {
    FUN_18055dc20(&system_data_25a0,uVar3,0xf,*(int32_t *)(unaff_RBX + 0x208),&unknown_var_6536_ptr);
    uVar6 = func_0x000180525320();
    FUN_18055dc20(&system_data_25a0,uVar3,8,uVar6,&unknown_var_6488_ptr);
  }
  FUN_18055db10(&system_data_25a0,uVar3,0xc,*(int32_t *)(lVar4 + 0x38),&unknown_var_6520_ptr);
  FUN_18055db10(&system_data_25a0,uVar3,0xd,*(int32_t *)(lVar4 + 0x3c),&unknown_var_6504_ptr);
  FUN_18055db10(&system_data_25a0,uVar3,0xe,*(int32_t *)(lVar4 + 0x134),&unknown_var_6568_ptr);
  if (*(int *)(unaff_RBX + 0x564) < 0) {
    FUN_18055d960(&system_data_25a0,uVar3);
  }
  if ((*(uint *)(unaff_RBX + 0x56c) & 0x800) != 0) {
    FUN_18055db10(&system_data_25a0,uVar3,10,*(int32_t *)(unaff_RBX + 0x4ac),&unknown_var_6648_ptr);
    FUN_18055db10(&system_data_25a0,uVar3,0xb,*(int32_t *)(unaff_RBX + 0x4a4),&unknown_var_6664_ptr);
    FUN_18055db10(&system_data_25a0,uVar3,4,0,&unknown_var_6552_ptr);
    FUN_18055db10(&system_data_25a0,uVar3,5,0,&unknown_var_6584_ptr);
    return;
  }
  FUN_18055db10(&system_data_25a0,uVar3,3,*(int32_t *)(lVar4 + 0x34),&unknown_var_6632_ptr);
  fVar1 = *(float *)(lVar4 + 0x20);
  fVar9 = -26.7;
  if ((-26.7 <= fVar1) && (fVar9 = fVar1, 80.06089 <= fVar1)) {
    fVar9 = 80.06089;
  }
  fVar1 = *(float *)(lVar4 + 0x1c);
  fVar10 = -12.25;
  if ((-12.25 <= fVar1) && (fVar10 = fVar1, 12.226074 <= fVar1)) {
    fVar10 = 12.226074;
  }
  FUN_18055db10(&system_data_25a0,uVar3,4,fVar9,&unknown_var_6552_ptr);
  FUN_18055db10(&system_data_25a0,uVar3,5,fVar10,&unknown_var_6584_ptr);
  return;
}





// 函数: void FUN_18052d5ac(uint64_t param_1,uint64_t param_2)
void FUN_18052d5ac(uint64_t param_1,uint64_t param_2)

{
  float fVar1;
  int64_t unaff_RSI;
  int32_t unaff_EDI;
  float fVar2;
  float fVar3;
  
  FUN_18055db10(param_1,param_2,3,*(int32_t *)(unaff_RSI + 0x34),&unknown_var_6632_ptr);
  fVar1 = *(float *)(unaff_RSI + 0x20);
  fVar2 = -26.7;
  if ((-26.7 <= fVar1) && (fVar2 = fVar1, 80.06089 <= fVar1)) {
    fVar2 = 80.06089;
  }
  fVar1 = *(float *)(unaff_RSI + 0x1c);
  fVar3 = -12.25;
  if ((-12.25 <= fVar1) && (fVar3 = fVar1, 12.226074 <= fVar1)) {
    fVar3 = 12.226074;
  }
  FUN_18055db10(&system_data_25a0,unaff_EDI,4,fVar2,&unknown_var_6552_ptr);
  FUN_18055db10(&system_data_25a0,unaff_EDI,5,fVar3,&unknown_var_6584_ptr);
  return;
}





// 函数: void FUN_18052d663(void)
void FUN_18052d663(void)

{
  return;
}





// 函数: void FUN_18052d670(int64_t param_1,int32_t *param_2)
void FUN_18052d670(int64_t param_1,int32_t *param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  byte bVar3;
  int64_t lVar4;
  byte bVar5;
  
  if ((*(uint *)(param_1 + 0x56c) & 0x800) == 0) {
    FUN_18057c8c0(*(uint64_t *)(param_1 + 0x590),param_2,*(uint64_t *)(param_1 + 0x598));
  }
  else {
    FUN_180572c50(*(uint64_t *)(param_1 + 0x590),param_2,*(uint64_t *)(param_1 + 0x598),
                  *(int64_t *)(param_1 + 0x20) + 0x1b0);
    bVar3 = *(byte *)(*(int64_t *)(param_1 + 0x590) + 0x3424);
    bVar5 = bVar3 | 4;
    if (*(int *)(param_1 + 0x570) != 2) {
      bVar5 = bVar3 & 0xfb;
    }
    *(byte *)(*(int64_t *)(param_1 + 0x590) + 0x3424) = bVar5;
  }
  FUN_180530ca0(param_1,0);
  if (*(char *)(param_1 + 0x984) != '\0') {
    lVar4 = *(int64_t *)(param_1 + 0x738);
    uVar1 = param_2[4];
    uVar2 = param_2[3];
    *(int32_t *)(lVar4 + 0x94) = *param_2;
    *(uint64_t *)(lVar4 + 0x60) = 0;
    *(uint64_t *)(lVar4 + 0x68) = 0;
    *(uint64_t *)(lVar4 + 0x78) = 0;
    *(uint64_t *)(lVar4 + 0x88) = 0;
    *(int32_t *)(lVar4 + 0x90) = 0;
    *(int32_t *)(lVar4 + 0x48) = uVar2;
    *(int32_t *)(lVar4 + 0x44) = uVar1;
    *(uint64_t *)(lVar4 + 0x70) = 0xffffffffffffffff;
    *(int32_t *)(lVar4 + 0x80) = 0xffffffff;
    *(int8_t *)(lVar4 + 0x84) = 0xff;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18052d760(int64_t param_1,char param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = render_system_memory;
  plVar1 = *(int64_t **)(param_1 + 0x590);
  if ((((int)plVar1[0x493] != -1) &&
      ((byte)(*(char *)((int64_t)(int)plVar1[0x493] * 0x68 + 0x60 + render_system_memory) - 5U) < 2)) &&
     (*(int *)(param_1 + 0x1fc) == 7)) {
    if (param_2 == '\0') {
      return 1;
    }
    if (*(float *)(param_1 + 0x3a0) <= 1.0 && *(float *)(param_1 + 0x3a0) != 1.0) {
      fVar4 = (float)(**(code **)(*plVar1 + 0xa0))(plVar1,1);
      if (fVar5 <= fVar4) {
        return 1;
      }
      if (system_status_flag - 2U < 2) {
        fVar7 = (float)(**(code **)(**(int64_t **)(param_1 + 0x590) + 0xf8))
                                 (*(int64_t **)(param_1 + 0x590),1);
        fVar6 = *(float *)(param_1 + 0x210);
        if (0.13333334 <= fVar6) {
          fVar6 = 0.13333334;
        }
        fVar6 = fVar7 - fVar6;
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        if (fVar5 <= (1.0 - fVar6 / fVar7) * (1.0 - fVar4) + fVar4) {
          return 1;
        }
      }
    }
    else {
      if (*(float *)(param_1 + 0x1e8) <= 0.0) {
        return 1;
      }
      fVar6 = *(float *)(param_1 + 0x164) - *(float *)(param_1 + 0x138);
      fVar4 = *(float *)(param_1 + 0x16c) - *(float *)(param_1 + 0x140);
      fVar7 = *(float *)(param_1 + 0x168) - *(float *)(param_1 + 0x13c);
      lVar2 = *(int64_t *)(param_1 + 0x8f8);
      fVar5 = *(float *)(param_1 + 0x210);
      if (0.13333334 <= fVar5) {
        fVar5 = 0.13333334;
      }
      fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4);
      fVar4 = render_system_memory;
      if (((0 < *(int *)(lVar2 + 0x230)) &&
          ((uVar3 = *(uint64_t *)
                     ((int64_t)*(int *)(lVar2 + 0x2f0) * 0xa0 + 0x50 + *(int64_t *)(lVar2 + 0x2d0)
                     ), (uVar3 >> 9 & 1) == 0 || (0 < *(short *)(lVar2 + 0x208))))) &&
         ((uVar3 >> 0x1c & 1) != 0)) {
        fVar4 = render_system_memory;
      }
      if (fVar6 - (fVar5 / *(float *)(param_1 + 0x1e8)) * fVar6 <= fVar4) {
        return 1;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18052d960(int64_t param_1)

{
  int iVar1;
  int64_t *plVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  
  fVar3 = render_system_memory;
  plVar2 = *(int64_t **)(param_1 + 0x590);
  iVar1 = (int)plVar2[0x493];
  if ((iVar1 != -1) && (*(int *)((int64_t)iVar1 * 0x68 + 0x58 + render_system_memory) == 0x13)) {
    if (*(int64_t *)(param_1 + 0x280) == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = *(int *)(*(int64_t *)(param_1 + 0x280) + 0x1c);
    }
    if (iVar1 == iVar5) {
      (**(code **)(*plVar2 + 0xa0))(plVar2,1);
      fVar4 = render_system_memory;
      if (fVar3 <= extraout_XMM0_Da) {
        (**(code **)(**(int64_t **)(param_1 + 0x590) + 0xa0))(*(int64_t **)(param_1 + 0x590),1);
        if (extraout_XMM0_Da_00 < fVar4) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18052da10(int64_t param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = FUN_18052d960();
  if (cVar2 == '\0') {
    iVar1 = *(int *)(*(int64_t *)(param_1 + 0x590) + 0x2498);
    if (((iVar1 == -1) ||
        (1 < (byte)(*(char *)((int64_t)iVar1 * 0x68 + 0x60 + render_system_memory) - 5U))) ||
       (*(int *)(param_1 + 0x1fc) != 7)) {
      return 0;
    }
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18052dae0(int64_t param_1,char param_2)
void FUN_18052dae0(int64_t param_1,char param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  float fVar5;
  int32_t uStack_38;
  int iStack_34;
  uint64_t uStack_30;
  uint64_t uStack_28;
  float fStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int8_t uStack_c;
  
  iVar2 = *(int *)(*(int64_t *)(param_1 + 0x590) + 0x2450);
  iVar3 = 0;
  if (iVar2 != -1) {
    iVar3 = *(int *)((int64_t)iVar2 * 0x68 + 0x58 + render_system_memory);
  }
  if ((iVar3 == 0x27) != (bool)param_2) {
    if (param_2 != '\0') {
      fVar5 = *(float *)(*(int64_t *)(param_1 + 0x20) + 0x84) * 0.8;
      pfVar1 = (float *)(*(int64_t *)(param_1 + 0x20) + 0x20);
      if (fVar5 < *pfVar1 || fVar5 == *pfVar1) {
        iStack_34 = *(int *)(*(int64_t *)(param_1 + 0x598) + 0x18c);
      }
      else {
        iStack_34 = *(int *)(*(int64_t *)(param_1 + 0x598) + 0x188);
      }
      if (-1 < *(int *)(*(int64_t *)
                         ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x590) + 0xac) * 0xe0 + 0x78 +
                         render_system_memory) + (int64_t)iStack_34 * 8)) {
        uStack_14 = 0x3ecccccd;
        uStack_30 = 0;
        uStack_28 = 0;
        uStack_10 = 0x1000000;
        uStack_1c = 0xbe4ccccd;
        uStack_18 = 0xbe4ccccd;
        uStack_c = 0;
        uStack_38 = 0;
        fStack_20 = 1.0 - (1.0 - *(float *)(param_1 + 0x40c)) * 0.33;
        FUN_18051ec50(param_1,&uStack_38);
        if ((*(int64_t *)(param_1 + 0x6d8) != 0) &&
           (*(char *)(*(int64_t *)(param_1 + 0x6d8) + 0x8be) != '\0')) {
          uStack_30 = 0x18052c05f;
          iVar2 = FUN_180530280();
          lVar4 = ((int64_t)*(int *)(param_1 + 0x740) * 0xb + 9) * 0x40 +
                  *(int64_t *)(render_system_memory + (int64_t)iVar2 * 8);
          uStack_30 = 0x18052c08a;
          FUN_18052cb50(param_1,lVar4);
          uStack_30 = 0x18052c09a;
          FUN_18052c860(param_1,0xffffffff,lVar4);
          uStack_30 = 0x18052c0a5;
          FUN_18052c460(param_1,lVar4);
          uStack_30 = 0x18052c0b0;
          FUN_18052c0c0(param_1,lVar4);
        }
        return;
      }
    }
    if ((iVar2 == *(int *)(*(int64_t *)(param_1 + 0x598) + 0x188)) ||
       (iVar2 == *(int *)(*(int64_t *)(param_1 + 0x598) + 0x18c))) {
      uStack_10 = 0x1000000;
      uStack_14 = 0x3ecccccd;
      uStack_28 = 0;
      fStack_20 = 1.0;
      uStack_1c = 0xbe4ccccd;
      uStack_18 = 0xbe4ccccd;
      uStack_c = 0;
      uStack_38 = 0;
      iStack_34 = 0xffffffff;
      uStack_30 = 0x4a;
      FUN_18051ec50(param_1,&uStack_38);
    }
  }
  return;
}





