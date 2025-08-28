#include "TaleWorlds.Native.Split.h"

// 03_rendering_part440.c - 8 个函数

// 函数: void FUN_18050aea0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18050aea0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  int iVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x658);
  iVar2 = _Mtx_lock(lVar1 + 0x58);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if (*(longlong *)(lVar1 + 0x28) != 0) {
    iVar2 = _Mtx_lock(*(longlong *)(lVar1 + 0x28) + 0x58);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
  if ((*(byte *)(lVar1 + 0xa8) & 1) == 0) {
    FUN_1802fac00(lVar1,*(longlong *)(lVar1 + 0x10) + 0x70,0xbf800000,param_4,uVar3);
  }
  if (*(longlong *)(lVar1 + 0x28) != 0) {
    iVar2 = _Mtx_unlock(*(longlong *)(lVar1 + 0x28) + 0x58);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
  iVar2 = _Mtx_unlock(lVar1 + 0x58);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050af60(longlong param_1,int param_2)
void FUN_18050af60(longlong param_1,int param_2)

{
  int32_t uVar1;
  longlong lVar2;
  longlong *plVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  int8_t auStackX_10 [16];
  uint64_t uStackX_20;
  
  if (param_2 == 3) {
    lVar2 = *(longlong *)(param_1 + 0x8f8);
    plVar3 = *(longlong **)(lVar2 + 0x9e8);
    uVar1 = *(int32_t *)(lVar2 + 0x9e0);
    lVar9 = (longlong)*(int *)((longlong)(int)plVar3[0x1e] * 0xa0 + 100 + plVar3[0x1a]) * 0x170 +
            _DAT_180c95ff0;
    iVar6 = *(int *)(param_1 + 0x638);
    if (*(longlong *)(param_1 + 0x280) == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x280) + 0x50);
    }
    if ((_DAT_180c92514 == 1) || (_DAT_180c92514 == 4)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
                0x48) < _DAT_180d49e60) {
      FUN_1808fcb90(&system_ptr_9e60);
      if (_DAT_180d49e60 == -1) {
        _Mtx_init_in_situ(0x180d49e70,2);
        FUN_1808fc820(FUN_180943020);
        FUN_1808fcb30(&system_ptr_9e60);
      }
    }
    uStackX_20 = 0x180d49e70;
    iVar5 = _Mtx_lock(0x180d49e70);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
    FUN_1805109d0(param_1);
    if ((*(uint *)((longlong)(int)plVar3[0x1e] * 0xa0 + 0x50 + plVar3[0x1a]) >> 8 & 1) == 0) {
      if (bVar8) {
        if (*(int *)(param_1 + 0x570) == 2) {
          *(longlong *)(*(longlong *)(param_1 + 0x8d8) + 0x87b700) =
               *(longlong *)
                (&system_error_code + (longlong)*(int *)(*(longlong *)(param_1 + 0x8d8) + 0x87b708) * 8)
               + 50000;
        }
      }
      else {
        if (iVar7 != -1) {
          FUN_180537de0(lVar2,uVar1,0);
        }
        if ((*plVar3 != 0) && (0 < *(short *)(*plVar3 + 8))) {
          FUN_1805373f0(lVar2,uVar1,1);
        }
        if ((*(ulonglong *)((longlong)(int)plVar3[0x1e] * 0xa0 + 0x50 + plVar3[0x1a]) & 0x1000) != 0
           ) {
          FUN_18050e990(param_1,1,auStackX_10);
        }
      }
    }
    else {
      if (!bVar8) {
        if (iVar7 != -1) {
          FUN_180537de0(lVar2,uVar1,0);
        }
        sVar4 = func_0x000180535060(plVar3);
        if (0 < sVar4) {
          FUN_18050e990(param_1,1,auStackX_10);
        }
      }
      if ((iVar6 == 0) && (!bVar8)) {
        FUN_18050b440(param_1,0,0xffffffff,1,0);
        FUN_18050b440(param_1,1,0xffffffff,1,0);
      }
      FUN_1805b1d30(param_1 + 0x138,lVar9);
      *(uint64_t *)(param_1 + 0x280) = 0;
      *(uint64_t *)(param_1 + 0x290) = 0;
    }
    iVar6 = _Mtx_unlock(0x180d49e70);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
  }
  else {
    FUN_1805a2d30(param_1 + 0x28);
  }
  return;
}



ulonglong FUN_18050b240(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  int8_t auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStackX_8;
  float fStackX_c;
  
  lVar2 = *(longlong *)(param_1 + 0x8d8);
  uVar5 = 0;
  uVar9 = 0xffffffff;
  fVar15 = 0.0;
  uVar1 = *(uint *)(lVar2 + 0x52ed94);
  if (0 < (longlong)(int)uVar1) {
    piVar4 = (int *)(lVar2 + 0x30b0);
    uVar8 = uVar5;
    do {
      if (-1 < *piVar4) goto LAB_18050b299;
      uVar8 = (ulonglong)((int)uVar8 + 1);
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 0x298;
    } while ((longlong)uVar5 < (longlong)(int)uVar1);
  }
  uVar8 = (ulonglong)uVar1;
LAB_18050b299:
  uVar5 = 0xffffffff;
  if ((int)uVar8 < (int)uVar1) {
    do {
      lVar6 = (longlong)(int)uVar8 * 0xa60;
      if (((((*(byte *)(lVar6 + 0x360c + lVar2) & 1) != 0) &&
           (*(int *)(lVar6 + 0x3600 + lVar2) == -1)) && (*(int *)(lVar6 + 0x3608 + lVar2) == 1)) &&
         (*(int *)(lVar6 + 0x37c0 + lVar2) == 0)) {
        lVar3 = *(longlong *)(param_1 + 0x20);
        lVar6 = *(longlong *)(lVar6 + 0x30c0 + lVar2);
        fVar13 = *(float *)(lVar6 + 0xc) - *(float *)(lVar3 + 0xc);
        fVar14 = *(float *)(lVar6 + 0x10) - *(float *)(lVar3 + 0x10);
        fVar10 = *(float *)(lVar6 + 0x14) - *(float *)(lVar3 + 0x14);
        fVar12 = fVar14 * fVar14 + fVar13 * fVar13 + fVar10 * fVar10;
        auVar11 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
        fVar10 = auVar11._0_4_;
        fVar16 = fVar10 * 0.5 * (3.0 - fVar12 * fVar10 * fVar10);
        fStackX_8 = (float)*(uint64_t *)(param_1 + 0x49c);
        fStackX_c = (float)((ulonglong)*(uint64_t *)(param_1 + 0x49c) >> 0x20);
        fVar10 = 1.0;
        if (1.0 < fVar16 * fVar12) {
          fVar10 = 1.0 / (fVar16 * fVar12);
        }
        fVar12 = fStackX_c * fVar14 * fVar16 + fStackX_8 * fVar13 * fVar16 + 1.0;
        fVar10 = fVar10 * fVar12 * fVar12;
        if (fVar15 < fVar10) {
          uVar9 = uVar8;
          fVar15 = fVar10;
        }
      }
      uVar7 = (uint)*(short *)(lVar2 + 0x52dda0 + (longlong)(int)uVar8 * 2);
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < (int)uVar1);
    uVar5 = 0xffffffff;
    if (0.5 < fVar15) {
      uVar5 = uVar9;
    }
  }
  return uVar5;
}



int FUN_18050b2a2(uint64_t param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  int in_R10D;
  int in_R11D;
  float fVar3;
  int8_t auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_XMM8_Da;
  float fVar8;
  float fStack0000000000000060;
  float fStack0000000000000064;
  
  do {
    lVar2 = (longlong)param_2 * 0xa60;
    if (((((*(byte *)(lVar2 + 0x360c + param_3) & 1) != 0) &&
         (*(int *)(lVar2 + 0x3600 + param_3) == in_R10D)) &&
        (*(int *)(lVar2 + 0x3608 + param_3) == 1)) && (*(int *)(lVar2 + 0x37c0 + param_3) == 0)) {
      lVar1 = *(longlong *)(unaff_RSI + 0x20);
      lVar2 = *(longlong *)(lVar2 + 0x30c0 + param_3);
      fVar6 = *(float *)(lVar2 + 0xc) - *(float *)(lVar1 + 0xc);
      fVar7 = *(float *)(lVar2 + 0x10) - *(float *)(lVar1 + 0x10);
      fVar3 = *(float *)(lVar2 + 0x14) - *(float *)(lVar1 + 0x14);
      fVar5 = fVar7 * fVar7 + fVar6 * fVar6 + fVar3 * fVar3;
      auVar4 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar3 = auVar4._0_4_;
      fVar8 = fVar3 * 0.5 * (3.0 - fVar5 * fVar3 * fVar3);
      fStack0000000000000060 = (float)*(uint64_t *)(unaff_RSI + 0x49c);
      fStack0000000000000064 = (float)((ulonglong)*(uint64_t *)(unaff_RSI + 0x49c) >> 0x20);
      fVar3 = 1.0;
      if (1.0 < fVar8 * fVar5) {
        fVar3 = 1.0 / (fVar8 * fVar5);
      }
      fVar5 = fStack0000000000000064 * fVar7 * fVar8 + fStack0000000000000060 * fVar6 * fVar8 + 1.0;
      fVar3 = fVar3 * fVar5 * fVar5;
      if (unaff_XMM8_Da < fVar3) {
        unaff_XMM8_Da = fVar3;
        unaff_EBX = param_2;
      }
    }
    param_2 = (int)*(short *)(param_3 + 0x52dda0 + (longlong)param_2 * 2);
  } while (param_2 < in_R11D);
  if (0.5 < unaff_XMM8_Da) {
    in_R10D = unaff_EBX;
  }
  return in_R10D;
}



int32_t FUN_18050b41d(void)

{
  int32_t in_R10D;
  
  return in_R10D;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050b440(longlong param_1,int param_2,uint param_3,int param_4,char param_5)
void FUN_18050b440(longlong param_1,int param_2,uint param_3,int param_4,char param_5)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte bVar10;
  byte bVar11;
  longlong lVar12;
  uint in_stack_ffffffffffffff58;
  int32_t uVar13;
  byte bStack_78;
  char cStack_77;
  int iStack_74;
  int aiStack_70 [2];
  int32_t uStack_68;
  int iStack_64;
  uint64_t uStack_60;
  int32_t uStack_58;
  uint64_t uStack_54;
  uint64_t uStack_4c;
  int32_t uStack_44;
  int32_t uStack_40;
  int8_t uStack_3c;
  
  if (_DAT_180c92514 == 1) {
    if (param_3 == 0xffffffff) {
      *(uint *)(param_1 + 0x4c4) = *(uint *)(param_1 + 0x4c4) | (param_2 + 1) * 0x100;
      return;
    }
    if (param_3 == 0) {
      *(uint *)(param_1 + 0x4c4) = *(uint *)(param_1 + 0x4c4) | 0x10;
      return;
    }
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x4c4) = *(uint *)(param_1 + 0x4c4) | 0x20;
      return;
    }
    if (param_3 != 2) {
      uVar4 = 0x80;
      if (param_3 != 3) {
        uVar4 = 0;
      }
      *(uint *)(param_1 + 0x4c4) = *(uint *)(param_1 + 0x4c4) | uVar4;
      return;
    }
    *(uint *)(param_1 + 0x4c4) = *(uint *)(param_1 + 0x4c4) | 0x40;
    return;
  }
  lVar9 = *(longlong *)(param_1 + 0x8f8);
  uVar4 = *(uint *)(lVar9 + 0x9e0 + (longlong)param_2 * 4);
  uVar8 = (ulonglong)(int)uVar4;
  if (uVar4 < 5) {
    cVar2 = FUN_18058f970(uVar8 * 0x1f8 + 8 + lVar9);
    uVar8 = (ulonglong)uVar4;
    if (cVar2 == '\0') {
      uVar8 = 6;
    }
  }
  uVar7 = (uint)uVar8;
  lVar6 = 0;
  bVar11 = (byte)((uint)*(int32_t *)(param_1 + 0x564) >> 0x1f) ^ 1;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x590) + 0x2498);
  uVar4 = 0;
  if (iVar5 != -1) {
    uVar4 = *(uint *)((longlong)iVar5 * 0x68 + 0x58 + _DAT_180c96150);
  }
  if (param_3 == uVar7) {
    return;
  }
  if ((param_3 != 0xffffffff) &&
     (iVar5 = FUN_180537650(lVar9,param_3,bVar11,*(int32_t *)(param_1 + 0x56c)), iVar5 != param_2
     )) {
    return;
  }
  if (((param_4 == 0) && (uVar4 < 0x20)) && ((0x80130000U >> (uVar4 & 0x1f) & 1) != 0)) {
    return;
  }
  lVar9 = *(longlong *)(param_1 + 0x8f8);
  cVar2 = '\0';
  if (*(char *)(lVar9 + 0xa24) != -1) {
    return;
  }
  if (param_3 < 5) {
    bStack_78 = 1;
    lVar6 = lVar9 + 8 + (longlong)(int)param_3 * 0x1f8;
    if (*(int *)(lVar6 + 0x30) < 1) {
      return;
    }
    if (((*(uint *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar6 + 0xd0)) >>
          9 & 1) != 0) && (*(short *)(lVar6 + 8) < 1)) {
      return;
    }
    in_stack_ffffffffffffff58 = *(uint *)(param_1 + 0x56c);
    cVar3 = FUN_1805377e0(lVar9,param_3,param_2,bVar11,in_stack_ffffffffffffff58);
    if (cVar3 == '\0') {
      return;
    }
  }
  else {
    bStack_78 = 0;
  }
  if (((param_5 == '\0') && (param_2 == 1)) &&
     ((uVar7 != 0xffffffff &&
      ((param_3 == 0xffffffff && (cVar2 = FUN_180531480(param_1,uVar8 & 0xffffffff), cVar2 != '\0'))
      )))) {
    FUN_18050c740(param_1,*(int32_t *)(*(longlong *)(param_1 + 0x8f8) + 0x9e4),8,0);
  }
  cStack_77 = '\x01';
  if (((param_3 != 0xffffffff) || (cVar2 == '\0')) && (1 < param_4 - 1U)) {
    iStack_74 = -1;
    aiStack_70[0] = -1;
    in_stack_ffffffffffffff58 = param_3;
    FUN_18052eb50(param_1,&iStack_74,aiStack_70,bStack_78,param_3,param_2);
    if (iStack_74 != -1) {
      uStack_54 = 0x3f80000000000000;
      uStack_4c = 0xbe4ccccdbe4ccccd;
      uStack_60 = 0;
      uStack_44 = 0x3ecccccd;
      uStack_58 = 0;
      uStack_40 = 0x1000000;
      uStack_3c = 0;
      uStack_68 = 1;
      iStack_64 = iStack_74;
      cStack_77 = FUN_18051ec50(param_1,&uStack_68);
      if (cStack_77 == '\0') {
        if (param_4 != 3) {
          return;
        }
      }
      else if (aiStack_70[0] != -1) {
        in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffff00;
        FUN_1804f83f0(*(uint64_t *)(param_1 + 0x8d8),aiStack_70[0],param_1 + 0x550,0,
                      in_stack_ffffffffffffff58,*(int32_t *)(param_1 + 0x10),0xffffffff,0,0,0);
      }
    }
  }
  if (bStack_78 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x8f8);
    lVar12 = *(longlong *)(lVar9 + 0x9e8 + (longlong)(1 - param_2) * 8);
    if (((*(byte *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar6 + 0xd0)) >>
          4 & 1) != 0) ||
       ((lVar12 != 0 &&
        ((*(byte *)((longlong)*(int *)(lVar12 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar12 + 0xd0))
          >> 4 & 1) != 0)))) {
      uVar4 = param_3;
      if (param_2 != 0) {
        uVar4 = *(uint *)(lVar9 + 0x9e0);
      }
      if (param_2 == 1) {
        lVar12 = lVar6;
      }
      FUN_180531300(param_1,uVar4,bVar11,CONCAT71((int7)((ulonglong)lVar9 >> 8),lVar12 != 0),
                    in_stack_ffffffffffffff58 & 0xffffff00,1 - param_2,param_5);
    }
  }
  if (param_2 == 1) {
    if (param_4 != 3) {
      uVar7 = param_3;
    }
    *(uint *)(*(longlong *)(param_1 + 0x8f8) + 0xa20) = uVar7;
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x8f8) + 0x9e0);
    if ((int)uVar4 < 0) goto LAB_18050b9f8;
    uVar13 = 0;
    bVar10 = 0;
  }
  else {
    if ((bStack_78 != 0) &&
       ((*(byte *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar6 + 0xd0)) >>
         4 & 1) == 0)) {
      lVar9 = *(longlong *)(param_1 + 0x8f8);
      iVar5 = *(int *)(lVar9 + 0xa20);
      if (-1 < iVar5) {
        lVar6 = *(longlong *)((longlong)iVar5 * 0x1f8 + 0xd8 + lVar9);
        lVar9 = (longlong)*(int *)((longlong)iVar5 * 0x1f8 + 0xf8 + lVar9) * 0xa0;
        bVar10 = *(byte *)((longlong)*(int *)(lVar9 + 100 + lVar6) * 0x170 + 0x140 + _DAT_180c95ff0)
        ;
        if ((*(int *)(lVar9 + 0x5c + lVar6) == 0xf) &&
           ((*(uint *)(param_1 + 0x56c) & 0x1000000) != 0)) {
          bVar10 = bVar10 & 0xfd;
        }
        if (bVar11 == 0) {
          bVar1 = bVar10 & 1;
        }
        else {
          bVar1 = bVar10 & 2;
        }
        if ((bVar1 == 0) && ((bVar10 & 4) == 0)) {
          FUN_18050bb10(param_1,1,iVar5,1,param_5);
        }
      }
    }
    if ((int)param_3 < 0) goto LAB_18050b9f8;
    uVar13 = 1;
    bVar10 = (byte)((uint)*(int32_t *)(*(longlong *)(param_1 + 0x8f8) + 0x9e4) >> 0x1f);
    bStack_78 = bVar10 ^ 1;
    uVar4 = param_3;
  }
  FUN_180531300(param_1,uVar4,bVar11,bStack_78,bVar10,uVar13,param_5);
LAB_18050b9f8:
  lVar9 = *(longlong *)(param_1 + 0x8f8);
  iVar5 = *(int *)(lVar9 + 0x9e0 + (longlong)param_2 * 4);
  lVar6 = lVar9;
  if (-1 < iVar5) {
    lVar12 = (longlong)iVar5 * 0x1f8;
    cVar2 = FUN_18058f970(lVar9 + 8 + lVar12);
    if (((cVar2 != '\0') &&
        ((*(uint *)((longlong)*(int *)(lVar12 + 0xf8 + lVar9) * 0xa0 + 0x58 +
                   *(longlong *)(lVar12 + 0xd8 + lVar9)) & 0x3000) != 0)) && (_DAT_180c92514 != 1))
    {
      FUN_18050c740(param_1,iVar5,8);
      lVar6 = *(longlong *)(param_1 + 0x8f8);
    }
  }
  *(char *)(lVar6 + 0xa25) = (char)param_2;
  *(char *)(lVar6 + 0xa26) = (char)param_3;
  *(bool *)(lVar6 + 0xa27) = param_4 == 3;
  *(bool *)(lVar6 + 0xa28) = param_4 == 1;
  *(char *)(lVar6 + 0xa29) = param_5;
  if ((cStack_77 == '\0') || (param_4 - 1U < 2)) {
    FUN_180536cd0(*(uint64_t *)(param_1 + 0x8f8));
    FUN_18050c1c0(param_1);
  }
  else {
    *(int8_t *)(*(longlong *)(param_1 + 0x8f8) + 0xa24) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050b572(int32_t param_1)
void FUN_18050b572(int32_t param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong in_RAX;
  ulonglong uVar5;
  longlong unaff_RBX;
  uint uVar6;
  longlong lVar7;
  uint unaff_ESI;
  uint uVar8;
  ulonglong unaff_RDI;
  longlong lVar9;
  byte bVar10;
  char unaff_R12B;
  int unaff_R13D;
  longlong unaff_R14;
  longlong lVar11;
  int iVar12;
  ulonglong unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  byte bStack0000000000000050;
  char cStack0000000000000051;
  int iStack0000000000000054;
  int in_stack_00000058;
  int32_t uStack0000000000000060;
  int iStack0000000000000064;
  int in_stack_000000e8;
  byte in_stack_000000f0;
  
  uVar6 = (uint)unaff_R14;
  if (*(int *)(in_RAX + 0x2498) != -1) {
    uVar6 = *(uint *)((longlong)*(int *)(in_RAX + 0x2498) * 0x68 + 0x58 + _DAT_180c96150);
  }
  uVar8 = (uint)unaff_RDI;
  if (uVar8 == unaff_ESI) {
    return;
  }
  iVar12 = (int)unaff_R15;
  if ((uVar8 != 0xffffffff) &&
     (iVar4 = FUN_180537650(param_1,unaff_RDI & 0xffffffff,unaff_R12B,
                            *(int32_t *)(unaff_RBX + 0x56c)), param_1 = extraout_XMM0_Da,
     iVar4 != iVar12)) {
    return;
  }
  if (((unaff_R13D == 0) && (uVar6 < 0x20)) && ((0x80130000U >> (uVar6 & 0x1f) & 1) != 0)) {
    return;
  }
  lVar9 = *(longlong *)(unaff_RBX + 0x8f8);
  cVar3 = '\0';
  if (*(char *)(lVar9 + 0xa24) != -1) {
    return;
  }
  bVar10 = (byte)unaff_R14;
  lVar7 = unaff_R14;
  bStack0000000000000050 = bVar10;
  if (uVar8 < 5) {
    bStack0000000000000050 = 1;
    lVar7 = lVar9 + 8 + unaff_RDI * 0x1f8;
    if (*(int *)(lVar7 + 0x30) <= (int)(uint)unaff_R14) {
      return;
    }
    if (((*(uint *)((longlong)*(int *)(lVar7 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar7 + 0xd0)) >>
          9 & 1) != 0) && (*(short *)(lVar7 + 8) <= (short)unaff_R14)) {
      return;
    }
    cVar2 = FUN_1805377e0(lVar9,unaff_RDI & 0xffffffff,unaff_R15 & 0xffffffff,unaff_R12B,
                          *(int32_t *)(unaff_RBX + 0x56c));
    param_1 = extraout_XMM0_Da_00;
    if (cVar2 == '\0') {
      return;
    }
  }
  if (((in_stack_000000f0 == bVar10) && (iVar12 == 1)) &&
     ((unaff_ESI != 0xffffffff &&
      ((uVar8 == 0xffffffff &&
       (cVar3 = FUN_180531480(param_1,unaff_ESI), param_1 = extraout_XMM0_Da_01, cVar3 != '\0'))))))
  {
    param_1 = FUN_18050c740(extraout_XMM0_Da_01,
                            *(int32_t *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e4),8,0);
  }
  cStack0000000000000051 = '\x01';
  if (((uVar8 != 0xffffffff) || (cVar3 == '\0')) && (1 < in_stack_000000e8 - 1U)) {
    iStack0000000000000054 = -1;
    in_stack_00000058 = -1;
    param_1 = FUN_18052eb50(param_1,(longlong)&stack0x00000050 + 4,&stack0x00000058,
                            bStack0000000000000050);
    if (iStack0000000000000054 != -1) {
      uStack0000000000000060 = 1;
      iStack0000000000000064 = iStack0000000000000054;
      cStack0000000000000051 = FUN_18051ec50(0x3ecccccd,&stack0x00000060);
      param_1 = extraout_XMM0_Da_02;
      if (cStack0000000000000051 == '\0') {
        if (in_stack_000000e8 != 3) {
          return;
        }
      }
      else if (in_stack_00000058 != -1) {
        param_1 = FUN_1804f83f0(*(uint64_t *)(unaff_RBX + 0x8d8),in_stack_00000058,
                                unaff_RBX + 0x550,0,bVar10);
      }
    }
  }
  if (bStack0000000000000050 != 0) {
    lVar9 = *(longlong *)(unaff_RBX + 0x8f8);
    lVar11 = *(longlong *)(lVar9 + 0x9e8 + (longlong)(1 - iVar12) * 8);
    if (((*(byte *)((longlong)*(int *)(lVar7 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar7 + 0xd0)) >>
          4 & 1) != 0) ||
       ((lVar11 != 0 &&
        ((*(byte *)((longlong)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar11 + 0xd0))
          >> 4 & 1) != 0)))) {
      uVar5 = unaff_RDI & 0xffffffff;
      if (iVar12 != 0) {
        uVar5 = (ulonglong)*(uint *)(lVar9 + 0x9e0);
      }
      if (iVar12 == 1) {
        lVar11 = lVar7;
      }
      param_1 = FUN_180531300(param_1,uVar5,unaff_R12B,
                              CONCAT71((int7)((ulonglong)lVar9 >> 8),lVar11 != 0),bVar10);
    }
  }
  if (iVar12 == 1) {
    if (in_stack_000000e8 != 3) {
      unaff_ESI = uVar8;
    }
    *(uint *)(*(longlong *)(unaff_RBX + 0x8f8) + 0xa20) = unaff_ESI;
    uVar6 = *(uint *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e0);
    uVar5 = (ulonglong)uVar6;
    if ((int)uVar6 < 0) goto LAB_18050b9f8;
  }
  else {
    if ((bStack0000000000000050 != 0) &&
       ((*(byte *)((longlong)*(int *)(lVar7 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar7 + 0xd0)) >>
         4 & 1) == 0)) {
      lVar9 = *(longlong *)(unaff_RBX + 0x8f8);
      iVar12 = *(int *)(lVar9 + 0xa20);
      if (-1 < iVar12) {
        lVar7 = *(longlong *)((longlong)iVar12 * 0x1f8 + 0xd8 + lVar9);
        lVar9 = (longlong)*(int *)((longlong)iVar12 * 0x1f8 + 0xf8 + lVar9) * 0xa0;
        bVar10 = *(byte *)((longlong)*(int *)(lVar9 + 100 + lVar7) * 0x170 + 0x140 + _DAT_180c95ff0)
        ;
        if ((*(int *)(lVar9 + 0x5c + lVar7) == 0xf) &&
           ((*(uint *)(unaff_RBX + 0x56c) & 0x1000000) != 0)) {
          bVar10 = bVar10 & 0xfd;
        }
        if (unaff_R12B == '\0') {
          bVar1 = bVar10 & 1;
        }
        else {
          bVar1 = bVar10 & 2;
        }
        if ((bVar1 == 0) && ((bVar10 & 4) == 0)) {
          param_1 = FUN_18050bb10(param_1,1,iVar12,1,in_stack_000000f0);
        }
      }
    }
    if ((int)uVar8 < 0) goto LAB_18050b9f8;
    uVar5 = unaff_RDI & 0xffffffff;
    bVar10 = (byte)((uint)*(int32_t *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e4) >> 0x1f);
    bStack0000000000000050 = bVar10 ^ 1;
  }
  FUN_180531300(param_1,uVar5,unaff_R12B,bStack0000000000000050,bVar10);
LAB_18050b9f8:
  lVar9 = *(longlong *)(unaff_RBX + 0x8f8);
  iVar12 = *(int *)(lVar9 + 0x9e0 + unaff_R15 * 4);
  lVar7 = lVar9;
  if (-1 < iVar12) {
    lVar11 = (longlong)iVar12 * 0x1f8;
    cVar3 = FUN_18058f970(lVar9 + 8 + lVar11);
    if (((cVar3 != '\0') &&
        ((*(uint *)((longlong)*(int *)(lVar11 + 0xf8 + lVar9) * 0xa0 + 0x58 +
                   *(longlong *)(lVar11 + 0xd8 + lVar9)) & 0x3000) != 0)) && (_DAT_180c92514 != 1))
    {
      FUN_18050c740(extraout_XMM0_Da_03,iVar12,8);
      lVar7 = *(longlong *)(unaff_RBX + 0x8f8);
    }
  }
  *(char *)(lVar7 + 0xa25) = (char)unaff_R15;
  *(char *)(lVar7 + 0xa26) = (char)unaff_RDI;
  *(bool *)(lVar7 + 0xa27) = in_stack_000000e8 == 3;
  *(bool *)(lVar7 + 0xa28) = in_stack_000000e8 == 1;
  *(byte *)(lVar7 + 0xa29) = in_stack_000000f0;
  if ((cStack0000000000000051 == '\0') || (in_stack_000000e8 - 1U < 2)) {
    FUN_180536cd0(*(uint64_t *)(unaff_RBX + 0x8f8));
    FUN_18050c1c0();
  }
  else {
    *(int8_t *)(*(longlong *)(unaff_RBX + 0x8f8) + 0xa24) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050b6b8(int32_t param_1)
void FUN_18050b6b8(int32_t param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  char unaff_R12B;
  char unaff_R13B;
  byte unaff_R14B;
  longlong lVar7;
  int iVar8;
  longlong unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  byte bStack0000000000000050;
  char cStack0000000000000051;
  int iStack0000000000000054;
  int in_stack_00000058;
  int32_t uStack0000000000000060;
  int iStack0000000000000064;
  int in_stack_000000e8;
  int8_t in_stack_000000f0;
  
  cStack0000000000000051 = '\x01';
  iVar8 = (int)unaff_R15;
  if (((unaff_EDI != -1) || (unaff_R13B == '\0')) && (1 < in_stack_000000e8 - 1U)) {
    iStack0000000000000054 = -1;
    in_stack_00000058 = -1;
    param_1 = FUN_18052eb50(param_1,(longlong)&stack0x00000050 + 4,&stack0x00000058,
                            bStack0000000000000050);
    if (iStack0000000000000054 != -1) {
      uStack0000000000000060 = 1;
      iStack0000000000000064 = iStack0000000000000054;
      cStack0000000000000051 = FUN_18051ec50(0x3ecccccd,&stack0x00000060);
      param_1 = extraout_XMM0_Da;
      if (cStack0000000000000051 == '\0') {
        if (in_stack_000000e8 != 3) {
          return;
        }
      }
      else if (in_stack_00000058 != -1) {
        param_1 = FUN_1804f83f0(*(uint64_t *)(unaff_RBX + 0x8d8),in_stack_00000058,
                                unaff_RBX + 0x550,0,unaff_R14B);
      }
    }
  }
  if (bStack0000000000000050 != 0) {
    lVar5 = *(longlong *)(unaff_RBX + 0x8f8);
    lVar4 = *(longlong *)(lVar5 + 0x9e8 + (longlong)(1 - iVar8) * 8);
    if (((*(byte *)((longlong)*(int *)(unaff_RBP + 0xf0) * 0xa0 + 0x50 +
                   *(longlong *)(unaff_RBP + 0xd0)) >> 4 & 1) != 0) ||
       ((lVar4 != 0 &&
        ((*(byte *)((longlong)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar4 + 0xd0)) >>
          4 & 1) != 0)))) {
      iVar3 = unaff_EDI;
      if (iVar8 != 0) {
        iVar3 = *(int *)(lVar5 + 0x9e0);
      }
      if (iVar8 == 1) {
        lVar4 = unaff_RBP;
      }
      param_1 = FUN_180531300(param_1,iVar3,unaff_R12B,
                              CONCAT71((int7)((ulonglong)lVar5 >> 8),lVar4 != 0),unaff_R14B);
    }
  }
  if (iVar8 == 1) {
    if (in_stack_000000e8 != 3) {
      unaff_ESI = unaff_EDI;
    }
    *(int *)(*(longlong *)(unaff_RBX + 0x8f8) + 0xa20) = unaff_ESI;
    iVar8 = *(int *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e0);
    if (iVar8 < 0) goto LAB_18050b9f8;
  }
  else {
    if ((bStack0000000000000050 != 0) &&
       ((*(byte *)((longlong)*(int *)(unaff_RBP + 0xf0) * 0xa0 + 0x50 +
                  *(longlong *)(unaff_RBP + 0xd0)) >> 4 & 1) == 0)) {
      lVar5 = *(longlong *)(unaff_RBX + 0x8f8);
      iVar8 = *(int *)(lVar5 + 0xa20);
      if (-1 < iVar8) {
        lVar4 = *(longlong *)((longlong)iVar8 * 0x1f8 + 0xd8 + lVar5);
        lVar5 = (longlong)*(int *)((longlong)iVar8 * 0x1f8 + 0xf8 + lVar5) * 0xa0;
        bVar6 = *(byte *)((longlong)*(int *)(lVar5 + 100 + lVar4) * 0x170 + 0x140 + _DAT_180c95ff0);
        if ((*(int *)(lVar5 + 0x5c + lVar4) == 0xf) &&
           ((*(uint *)(unaff_RBX + 0x56c) & 0x1000000) != 0)) {
          bVar6 = bVar6 & 0xfd;
        }
        if (unaff_R12B == '\0') {
          bVar1 = bVar6 & 1;
        }
        else {
          bVar1 = bVar6 & 2;
        }
        if ((bVar1 == 0) && ((bVar6 & 4) == 0)) {
          param_1 = FUN_18050bb10(param_1,1,iVar8,1,in_stack_000000f0);
        }
      }
    }
    if (unaff_EDI < 0) goto LAB_18050b9f8;
    unaff_R14B = (byte)((uint)*(int32_t *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e4) >> 0x1f);
    bStack0000000000000050 = unaff_R14B ^ 1;
    iVar8 = unaff_EDI;
  }
  FUN_180531300(param_1,iVar8,unaff_R12B,bStack0000000000000050,unaff_R14B);
LAB_18050b9f8:
  lVar5 = *(longlong *)(unaff_RBX + 0x8f8);
  iVar8 = *(int *)(lVar5 + 0x9e0 + unaff_R15 * 4);
  lVar4 = lVar5;
  if (-1 < iVar8) {
    lVar7 = (longlong)iVar8 * 0x1f8;
    cVar2 = FUN_18058f970(lVar5 + 8 + lVar7);
    if (((cVar2 != '\0') &&
        ((*(uint *)((longlong)*(int *)(lVar7 + 0xf8 + lVar5) * 0xa0 + 0x58 +
                   *(longlong *)(lVar7 + 0xd8 + lVar5)) & 0x3000) != 0)) && (_DAT_180c92514 != 1)) {
      FUN_18050c740(extraout_XMM0_Da_00,iVar8,8);
      lVar4 = *(longlong *)(unaff_RBX + 0x8f8);
    }
  }
  *(char *)(lVar4 + 0xa25) = (char)unaff_R15;
  *(char *)(lVar4 + 0xa26) = (char)unaff_EDI;
  *(bool *)(lVar4 + 0xa27) = in_stack_000000e8 == 3;
  *(bool *)(lVar4 + 0xa28) = in_stack_000000e8 == 1;
  *(int8_t *)(lVar4 + 0xa29) = in_stack_000000f0;
  if ((cStack0000000000000051 == '\0') || (in_stack_000000e8 - 1U < 2)) {
    FUN_180536cd0(*(uint64_t *)(unaff_RBX + 0x8f8));
    FUN_18050c1c0();
  }
  else {
    *(int8_t *)(*(longlong *)(unaff_RBX + 0x8f8) + 0xa24) = 0;
  }
  return;
}





// 函数: void FUN_18050badd(void)
void FUN_18050badd(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050bb10(longlong param_1,int param_2,int param_3,int8_t param_4,int8_t param_5)
void FUN_18050bb10(longlong param_1,int param_2,int param_3,int8_t param_4,int8_t param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x8f8);
  iVar1 = *(int *)(lVar3 + 0x9e0 + (longlong)param_2 * 4);
  if (iVar1 != param_3) {
    if ((((_DAT_180c92514 != 1) && (_DAT_180c92514 != 4)) &&
        (lVar2 = *(longlong *)(lVar3 + 0x9e8 + (longlong)param_2 * 8), lVar2 != 0)) &&
       ((*(uint *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x58 + *(longlong *)(lVar2 + 0xd0)) &
        0x3000) != 0)) {
      FUN_18050c740(param_1,iVar1,8);
      lVar3 = *(longlong *)(param_1 + 0x8f8);
    }
    FUN_180536e20(lVar3,param_2,param_3,param_4,param_5);
    FUN_18050c1c0(param_1);
  }
  return;
}





// 函数: void FUN_18050bbd0(longlong param_1,int param_2,int32_t param_3,int8_t param_4)
void FUN_18050bbd0(longlong param_1,int param_2,int32_t param_3,int8_t param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (-1 < param_2) {
    iVar2 = FUN_180537650(*(uint64_t *)(param_1 + 0x8f8),param_2,
                          *(uint *)(param_1 + 0x564) >> 0x1f ^ 1,*(int32_t *)(param_1 + 0x56c));
    if (iVar2 < 0) {
      lVar4 = *(longlong *)(param_1 + 0x8f8);
      lVar3 = (longlong)param_2 * 0x1f8;
      cVar1 = FUN_18058f970(lVar4 + 8 + lVar3);
      if ((cVar1 != '\0') &&
         (lVar3 = (longlong)*(int *)(lVar3 + 0xf8 + lVar4) * 0xa0 +
                  *(longlong *)(lVar3 + 0xd8 + lVar4), (*(uint *)(lVar3 + 0x50) & 0x103) != 0x100))
      {
        FUN_180531050(param_1,*(uint *)(lVar3 + 0x58) >> 0x13 & 1,param_2);
        lVar4 = *(longlong *)(param_1 + 0x8f8);
      }
      iVar2 = FUN_180537650(lVar4,param_2,*(uint *)(param_1 + 0x564) >> 0x1f ^ 1,
                            *(int32_t *)(param_1 + 0x56c));
      if (iVar2 < 0) {
        return;
      }
    }
    if (*(int *)(*(longlong *)(param_1 + 0x8f8) + 0x9e0 + (longlong)iVar2 * 4) != param_2) {
      FUN_18050b440(param_1,iVar2,param_2,param_3,param_4);
    }
  }
  return;
}





