#include "TaleWorlds.Native.Split.h"

// 03_rendering_part666_sub001.c - 8 个函数

#include "TaleWorlds.Native.Split.h"

// 03_rendering_part666.c - 8 个函数


// 函数: void FUN_18064b57c(void)
void FUN_18064b57c(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18064b590(longlong param_1,longlong param_2,ulonglong param_3,uint64_t param_4)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lStackX_8;
  longlong lStackX_10;
  longlong lStackX_18;
  int8_t auStackX_20 [8];
  
  puVar2 = (ulonglong *)0x0;
  if ((*(int *)(param_1 + 0x68) != 1) && (*(longlong *)(param_1 + 0x70) != 0)) {
    puVar2 = (ulonglong *)func_0x00018064ade0(param_3,param_4);
  }
  uVar3 = 1;
  if (param_3 != 0) {
    uVar3 = param_3;
  }
  lVar6 = param_2 * 0x50 + param_1;
  *(int32_t *)(lVar6 + 0x84) = 0;
  piVar1 = (int *)(lVar6 + 0x80);
  *piVar1 = (int)uVar3;
  if (1 < uVar3) {
    param_2 = uVar3 + param_2;
    *(int32_t *)(param_1 + 0x30 + param_2 * 0x50) = 0;
    *(int *)(param_1 + 0x34 + param_2 * 0x50) = (int)uVar3 * 0x50 + -0x50;
    *(int32_t *)(param_1 + 0x4c + param_2 * 0x50) = 0;
  }
  lVar5 = uVar3 << 0x10;
  lVar4 = (longlong)piVar1 + (-0x80 - ((ulonglong)piVar1 & 0xffffffffffc00000));
  uVar3 = lVar4 * 0x6666666666666667;
  lVar4 = (lVar4 / 0x50) * 0x10000 + ((ulonglong)piVar1 & 0xffffffffffc00000);
  if (*(char *)(param_1 + 0xb) != '\0') {
    if (_DAT_180bfbeec == 0) {
      uVar3 = FUN_180650490(&DAT_180bfbee8);
    }
    if (_DAT_180bfbee8 == 0) {
      uVar3 = FUN_18064b230(param_1,0,lVar4,lVar5);
    }
    else if (((lVar5 != 0) &&
             (uVar3 = FUN_18064b110(param_1,1,lVar4,lVar5,auStackX_20,&lStackX_8), uVar3 != 0)) &&
            (lStackX_8 != 0)) {
      *(ulonglong *)(param_1 + 0x18) =
           *(ulonglong *)(param_1 + 0x18) | *(ulonglong *)(param_1 + 0x20) & uVar3;
      QueryPerformanceCounter(&lStackX_10);
      if (_DAT_180d4a090 == 0) {
        QueryPerformanceFrequency(&lStackX_18);
        _DAT_180d4a090 = lStackX_18 / 1000;
        if (_DAT_180d4a090 == 0) {
          _DAT_180d4a090 = 1;
        }
      }
      lVar4 = lStackX_10 / _DAT_180d4a090;
      uVar3 = FUN_18064ff90(0xf,lStackX_10 % _DAT_180d4a090);
      *(longlong *)(param_1 + 0x10) = (int)uVar3 + lVar4;
    }
  }
  if (puVar2 != (ulonglong *)0x0) {
    *(uint64_t *)(lVar6 + 0xc0) = 0;
    *(ulonglong *)(lVar6 + 0xb8) = *puVar2;
    *puVar2 = (ulonglong)piVar1;
    uVar3 = *(ulonglong *)(lVar6 + 0xb8);
    if (uVar3 == 0) {
      puVar2[1] = (ulonglong)piVar1;
    }
    else {
      *(int **)(uVar3 + 0x40) = piVar1;
    }
  }
  *(int32_t *)(lVar6 + 0x9c) = 0;
  return uVar3;
}






// 函数: void FUN_18064b7c0(int32_t *param_1)
void FUN_18064b7c0(int32_t *param_1)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)func_0x00018064ade0(*param_1);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(uint64_t *)(*(longlong *)(param_1 + 0x10) + 0x38) = *(uint64_t *)(param_1 + 0xe);
  }
  if (param_1 == (int32_t *)*puVar1) {
    *puVar1 = *(uint64_t *)(param_1 + 0xe);
  }
  if (*(longlong *)(param_1 + 0xe) != 0) {
    *(uint64_t *)(*(longlong *)(param_1 + 0xe) + 0x40) = *(uint64_t *)(param_1 + 0x10);
  }
  if (param_1 == (int32_t *)puVar1[1]) {
    puVar1[1] = *(uint64_t *)(param_1 + 0x10);
  }
  param_1[7] = 1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(uint64_t *)(param_1 + 0xe) = 0;
  return;
}



uint * FUN_18064b830(uint *param_1,uint64_t param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint *puVar3;
  ulonglong uVar4;
  
  uVar2 = (ulonglong)param_1 & 0xffffffffffc00000;
  lVar1 = *(longlong *)(uVar2 + 0x70);
  if (*(int *)(uVar2 + 0x68) != 1) {
    uVar4 = (ulonglong)*param_1;
    puVar3 = param_1 + uVar4 * 0x14;
    if (((puVar3 < (uint *)(uVar2 + 0x80 + *(longlong *)(uVar2 + 0x78) * 0x50)) && (puVar3[7] == 0))
       && (uVar4 = uVar4 + *puVar3, lVar1 != 0)) {
      FUN_18064b7c0(puVar3,param_2);
    }
    if ((((uint *)(uVar2 + 0x80) < param_1) &&
        (puVar3 = (uint *)((longlong)param_1 + (-0x50 - (ulonglong)param_1[-0x13])), puVar3[7] == 0)
        ) && (uVar4 = uVar4 + *puVar3, param_1 = puVar3, lVar1 != 0)) {
      FUN_18064b7c0(puVar3,param_2);
    }
    FUN_18064b590(uVar2,(longlong)((ulonglong)((uint)param_1 & 0x3fffff) - 0x80) / 0x50,uVar4,
                  param_2);
    return param_1;
  }
  param_1[7] = 0;
  return param_1;
}



longlong FUN_18064b8c4(void)

{
  longlong in_RAX;
  longlong unaff_RBX;
  longlong lVar1;
  longlong unaff_R15;
  
  lVar1 = (unaff_RBX + -0x50) - in_RAX;
  if ((*(int *)(lVar1 + 0x1c) == 0) && (unaff_RBX = lVar1, unaff_R15 != 0)) {
    FUN_18064b7c0(lVar1);
  }
  FUN_18064b590();
  return unaff_RBX;
}






// 函数: void FUN_18064b8f3(void)
void FUN_18064b8f3(void)

{
  FUN_18064b590();
  return;
}



int * FUN_18064b940(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  ulonglong uVar10;
  
  piVar7 = (int *)(param_1 + 0x80 + param_2 * 0x50);
  if (((*(longlong *)(param_1 + 0x20) == -1) && (*(longlong *)(param_1 + 0x18) == 0)) ||
     (lVar4 = (longlong)piVar7 + (-0x80 - param_1), lVar1 = lVar4 >> 0x3f,
     lVar4 = lVar4 / 0x50 + lVar1,
     cVar2 = FUN_18064b230(param_1,CONCAT71((int7)((ulonglong)lVar4 >> 8),1),
                           (lVar4 - lVar1) * 0x10000 + param_1,param_3 << 0x10), cVar2 != '\0')) {
    *piVar7 = (int)param_3;
    piVar7[1] = 0;
    iVar9 = (int)(param_3 << 0x10);
    if (0x3ffffff < (ulonglong)(param_3 << 0x10)) {
      iVar9 = 0x4000000;
    }
    piVar7[7] = iVar9;
    uVar10 = *(ulonglong *)(param_1 + 0x78);
    uVar5 = 0;
    if (uVar10 <= param_2) {
      uVar5 = (uVar10 - param_2) - 1;
    }
    piVar8 = piVar7 + 0x14;
    uVar3 = 1;
    if (uVar5 != 0) {
      do {
        iVar9 = (int)uVar3;
        *piVar8 = 0;
        uVar3 = uVar3 + 1;
        piVar8[1] = iVar9 * 0x50;
        piVar8[7] = 1;
        piVar8 = piVar8 + 0x14;
      } while (uVar3 <= uVar5);
      uVar10 = *(ulonglong *)(param_1 + 0x78);
    }
    piVar6 = (int *)(param_1 + 0x30 + (param_2 + param_3) * 0x50);
    if ((piVar6 < (int *)(uVar10 * 0x50 + 0x80 + param_1)) && (piVar8 <= piVar6)) {
      *piVar6 = 0;
      piVar6[7] = 1;
      piVar6[1] = (int)param_3 * 0x50 + -0x50;
    }
    *(byte *)(piVar7 + 2) = *(byte *)(piVar7 + 2) & 0xfe;
    *(byte *)(piVar7 + 2) = *(byte *)(piVar7 + 2) | 2;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 1;
  }
  else {
    piVar7 = (int *)0x0;
  }
  return piVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_18064bae0(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4,
             uint64_t *param_5)

{
  ulonglong *puVar1;
  char cVar2;
  int32_t *puVar3;
  longlong lVar4;
  uint64_t uVar5;
  int8_t uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  char acStackX_8 [8];
  longlong lStackX_10;
  longlong lStackX_18;
  ulonglong uStackX_20;
  int8_t uStack_88;
  char cStack_87;
  int8_t uStack_86;
  longlong *plStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  longlong *plStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf66a8 + 0x147f;
  if ((_DAT_180bf66a8 & _DAT_180bf66a8 - 1) == 0) {
    uStack_58 = ~(_DAT_180bf66a8 - 1) & uStack_58;
  }
  else {
    uStack_58 = uStack_58 - uStack_58 % _DAT_180bf66a8;
  }
  uVar12 = uStack_58 + 0xffff >> 0x10;
  if (param_2 == 0) {
    uVar14 = 0x400000;
  }
  else {
    uVar14 = param_2 + 0xffff + (uStack_58 + 0xffff & 0xffffffffffff0000);
  }
  uVar14 = uVar14 >> 0x10;
  uStack_60 = uVar14;
  if (0x40 < uVar14) {
    uStack_60 = 0x40;
  }
  uVar11 = uVar14 << 0x10;
  lStackX_10 = param_2;
  lStackX_18 = param_3;
  uStackX_20 = param_4;
  uStack_70 = uVar12;
  plStack_68 = param_1;
  if (_DAT_180bfbebc == 0) {
    FUN_180650490(&DAT_180bfbeb8);
  }
  uVar8 = (ulonglong)_DAT_180bfbeb8;
  uVar10 = *(ulonglong *)(param_3 + 0x360);
  if (uVar10 < uVar8) {
LAB_18064bbd7:
    if (param_2 == 0) {
      cStack_87 = '\0';
      goto LAB_18064bbe2;
    }
  }
  else {
    if (_DAT_180bfbdcc == 0) {
      FUN_180650490(&DAT_180bfbdc8);
    }
    if (_DAT_180bfbdc8 == 0) goto LAB_18064bbd7;
  }
  cStack_87 = '\x01';
LAB_18064bbe2:
  acStackX_8[0] = '\0';
  if (param_1 == (longlong *)0x0) {
    uStack_78 = 0;
    uStackX_20 = uStackX_20 & 0xffffffffffffff00;
    uStack_88 = uVar8 <= uVar10;
    plStack_80 = param_1;
    param_1 = (longlong *)
              FUN_18064a5f0(uVar11,&uStack_78,&uStack_88,&uStackX_20,acStackX_8,&plStack_80);
    if (param_1 == (longlong *)0x0) {
      acStackX_8[0] = '\0';
      uStackX_20 = uStackX_20 & 0xffffffffffffff00;
      uStack_86 = 0;
      plStack_80 = param_1;
      if (_DAT_180c8ed78 != 1) {
        FUN_180646f40();
      }
      if ((uVar11 < 0x200000) ||
         (param_1 = (longlong *)FUN_180649ed0(0), cVar2 = cStack_87, param_1 == (longlong *)0x0)) {
        if (_DAT_180bfbf34 == 0) {
          FUN_180650490(&DAT_180bfbf30);
        }
        cVar2 = cStack_87;
        if (_DAT_180bfbf30 != 0) {
          puVar3 = (int32_t *)_errno();
          *puVar3 = 0xc;
          return (longlong *)0x0;
        }
        acStackX_8[0] = '\x01';
        plStack_80 = (longlong *)0x0;
        if (uVar14 == 0) {
          param_1 = (longlong *)0x0;
        }
        else {
          param_1 = (longlong *)FUN_180648fd0(uVar11,cStack_87,&uStack_88);
          uVar6 = (int8_t)uStackX_20;
          if (param_1 != (longlong *)0x0) {
            uVar6 = uStack_88;
          }
          uStackX_20 = CONCAT71(uStackX_20._1_7_,uVar6);
        }
      }
      if (param_1 == (longlong *)0x0) {
        return (longlong *)0x0;
      }
      uStack_78 = -(ulonglong)(cVar2 != '\0');
      uVar12 = uStack_70;
    }
    uVar10 = uStack_78;
    uVar13 = 0xffffffffffffffff;
    uVar8 = uVar12 & 0xffffffffffff;
    if (uVar8 == 0x40) {
      uVar7 = 0xffffffffffffffff;
    }
    else if (uVar8 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (1L << ((byte)uVar12 & 0x3f)) - 1;
    }
    if ((uVar7 & uStack_78) != uVar7) {
      cVar2 = FUN_180649070(param_1,uVar8 << 0x10,acStackX_8);
      if (cVar2 == '\0') {
        return (longlong *)0x0;
      }
      if (uVar8 != 0x40) {
        if (uVar8 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = (1L << ((byte)uVar12 & 0x3f)) - 1;
        }
      }
      uStack_78 = uVar10 | uVar13;
    }
    uVar10 = uStack_78;
    lVar9 = lStackX_18;
    *param_1 = (longlong)plStack_80;
    *(int8_t *)(param_1 + 1) = (int8_t)uStackX_20;
    *(int8_t *)((longlong)param_1 + 9) = uStack_88;
    *(bool *)((longlong)param_1 + 10) = uStack_78 == 0xffffffffffffffff;
    FUN_18064ae40(uVar11 & 0xffffffff,lStackX_18);
    if (param_1 < (longlong *)0x140000000000) {
      uVar11 = (ulonglong)param_1 >> 0x1c;
      if (uVar11 != 0) {
        puVar1 = (ulonglong *)(uVar11 * 8 + 0x180ca8c80);
        uVar11 = *(ulonglong *)(uVar11 * 8 + 0x180ca8c80);
        do {
          LOCK();
          uVar12 = *puVar1;
          bVar15 = uVar11 == uVar12;
          if (bVar15) {
            *puVar1 = uVar11 | 1L << ((uint)((ulonglong)param_1 >> 0x16) & 0x3f);
            uVar12 = uVar11;
          }
          UNLOCK();
          uVar11 = uVar12;
          uVar10 = uStack_78;
          uVar12 = uStack_70;
        } while (!bVar15);
      }
    }
  }
  else {
    uStack_78 = param_1[4];
    lVar9 = lStackX_18;
    uVar10 = uStack_78;
  }
  param_1[5] = 0;
  if (acStackX_8[0] == '\0') {
                    // WARNING: Subroutine does not return
    memset(param_1 + 6,0,(uVar14 + 1) * 0x50);
  }
  if (plStack_68 == (longlong *)0x0) {
    param_1[4] = uVar10;
    if (_DAT_180bfbed4 == 0) {
      FUN_180650490(&DAT_180bfbed0);
    }
    if (((_DAT_180bfbed0 == 0) || ((char)param_1[1] != '\0')) ||
       (*(char *)((longlong)param_1 + 9) != '\0')) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    *(int8_t *)((longlong)param_1 + 0xb) = uVar6;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  param_1[0xc] = uVar12;
  param_1[0xb] = uVar14;
  LOCK();
  param_1[0xe] = (longlong)&ExceptionList;
  UNLOCK();
  param_1[10] = _DAT_180bf4b28 ^ (ulonglong)param_1;
  param_1[0xf] = uStack_60;
  *(uint *)(param_1 + 0xd) = (uint)(lStackX_10 != 0);
  func_0x000180646ff0(*(longlong *)(lVar9 + 0x398) + 0xa0,param_1[0xc] << 0x10);
  uVar12 = uStack_70;
  lVar4 = FUN_18064b940(param_1,0,uStack_70);
  if (lVar4 == 0) {
    return (longlong *)0x0;
  }
  param_1[9] = 0;
  if ((int)param_1[0xd] != 0) {
    uVar5 = FUN_18064b940(param_1,uVar12,uVar14 - uVar12);
    *param_5 = uVar5;
    return param_1;
  }
  FUN_18064b590(param_1,uVar12,param_1[0xf] - uVar12,lVar9);
  return param_1;
}



// WARNING: Possible PIC construction at 0x00018064c06c: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00018064c071)
// WARNING: Removing unreachable block (ram,0x00018064c07a)
// WARNING: Removing unreachable block (ram,0x00018064c085)
// WARNING: Removing unreachable block (ram,0x00018064c08e)
// WARNING: Removing unreachable block (ram,0x00018064c09a)
// WARNING: Removing unreachable block (ram,0x00018064c0b1)
// WARNING: Removing unreachable block (ram,0x00018064c12e)
// WARNING: Removing unreachable block (ram,0x00018064c131)
// WARNING: Removing unreachable block (ram,0x00018064c137)
// WARNING: Removing unreachable block (ram,0x00018064c150)
// WARNING: Removing unreachable block (ram,0x00018064c160)
// WARNING: Removing unreachable block (ram,0x00018064c18d)
// WARNING: Removing unreachable block (ram,0x00018064c1c0)
// WARNING: Removing unreachable block (ram,0x00018064c1ce)
// WARNING: Removing unreachable block (ram,0x00018064c1d2)
// WARNING: Removing unreachable block (ram,0x00018064c192)
// WARNING: Removing unreachable block (ram,0x00018064c1a6)
// WARNING: Removing unreachable block (ram,0x00018064c1ab)
// WARNING: Removing unreachable block (ram,0x00018064c1b3)
// WARNING: Removing unreachable block (ram,0x00018064c1d6)
// WARNING: Removing unreachable block (ram,0x00018064c1e1)
// WARNING: Removing unreachable block (ram,0x00018064c1f1)
// WARNING: Removing unreachable block (ram,0x00018064c1fb)
// WARNING: Removing unreachable block (ram,0x00018064aeb0)
// WARNING: Removing unreachable block (ram,0x00018064aee9)
// WARNING: Removing unreachable block (ram,0x00018064af00)
// WARNING: Removing unreachable block (ram,0x00018064af10)
// WARNING: Removing unreachable block (ram,0x00018064af17)
// WARNING: Removing unreachable block (ram,0x00018064af1f)
// WARNING: Removing unreachable block (ram,0x00018064af40)
// WARNING: Removing unreachable block (ram,0x00018064af6a)
// WARNING: Removing unreachable block (ram,0x00018064af79)
// WARNING: Removing unreachable block (ram,0x00018064af80)
// WARNING: Removing unreachable block (ram,0x00018064af8a)
// WARNING: Removing unreachable block (ram,0x00018064af8e)
// WARNING: Removing unreachable block (ram,0x00018064af9a)
// WARNING: Removing unreachable block (ram,0x00018064afa2)
// WARNING: Removing unreachable block (ram,0x00018064afa7)
// WARNING: Removing unreachable block (ram,0x00018064afad)
// WARNING: Removing unreachable block (ram,0x00018064afb2)
// WARNING: Removing unreachable block (ram,0x00018064afc8)
// WARNING: Removing unreachable block (ram,0x00018064afcd)
// WARNING: Removing unreachable block (ram,0x00018064afd8)
// WARNING: Removing unreachable block (ram,0x00018064afe8)
// WARNING: Removing unreachable block (ram,0x00018064afdd)
// WARNING: Removing unreachable block (ram,0x00018064aff4)
// WARNING: Removing unreachable block (ram,0x00018064b008)
// WARNING: Removing unreachable block (ram,0x00018064b01c)
// WARNING: Removing unreachable block (ram,0x00018064b036)
// WARNING: Removing unreachable block (ram,0x00018064b079)
// WARNING: Removing unreachable block (ram,0x00018064b0a4)
// WARNING: Removing unreachable block (ram,0x00018064b0aa)
// WARNING: Removing unreachable block (ram,0x00018064b0c8)
// WARNING: Removing unreachable block (ram,0x00018064b0db)
// WARNING: Removing unreachable block (ram,0x00018064b086)
// WARNING: Removing unreachable block (ram,0x00018064b05d)
// WARNING: Removing unreachable block (ram,0x00018064b0f2)
// WARNING: Removing unreachable block (ram,0x00018064b021)
// WARNING: Removing unreachable block (ram,0x00018064b0f7)
// WARNING: Removing unreachable block (ram,0x00018064b000)
// WARNING: Removing unreachable block (ram,0x00018064c0c4)




// 函数: void FUN_18064bf60(longlong param_1,uint64_t param_2,longlong param_3)
void FUN_18064bf60(longlong param_1,uint64_t param_2,longlong param_3)

{
  longlong *plVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  
  lVar4 = *(longlong *)(param_1 + 0x78);
  for (puVar8 = (uint *)(param_1 + 0x80); puVar8 < (uint *)(param_1 + 0x80 + lVar4 * 0x50);
      puVar8 = puVar8 + (ulonglong)*puVar8 * 0x14) {
    if ((puVar8[7] == 0) && (*(int *)(param_1 + 0x68) != 1)) {
      uVar12 = (ulonglong)*puVar8;
      if (1 < uVar12) {
        uVar11 = uVar12 - 1;
        if (uVar11 == 0) {
          uVar13 = 0x40;
        }
        else {
          lVar5 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          uVar13 = 0x3f - (ulonglong)(0x3f - (int)lVar5);
          if (uVar13 < 3) goto LAB_18064bfea;
        }
        uVar12 = ((ulonglong)((uint)(uVar11 >> ((char)uVar13 - 2U & 0x3f)) & 3) | uVar13 * 4) - 4;
      }
LAB_18064bfea:
      puVar2 = (uint64_t *)(param_3 + uVar12 * 0x18);
      if (*(longlong *)(puVar8 + 0x10) != 0) {
        *(uint64_t *)(*(longlong *)(puVar8 + 0x10) + 0x38) = *(uint64_t *)(puVar8 + 0xe);
      }
      if (puVar8 == (uint *)*puVar2) {
        *puVar2 = *(uint64_t *)(puVar8 + 0xe);
      }
      if (*(longlong *)(puVar8 + 0xe) != 0) {
        *(uint64_t *)(*(longlong *)(puVar8 + 0xe) + 0x40) = *(uint64_t *)(puVar8 + 0x10);
      }
      if (puVar8 == (uint *)puVar2[1]) {
        puVar2[1] = *(uint64_t *)(puVar8 + 0x10);
      }
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[7] = 1;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x60);
  lVar5 = *(longlong *)(param_3 + 0x398);
  lVar10 = lVar4 * -0x10000;
  plVar9 = (longlong *)(lVar5 + 0xa0);
  if (lVar10 != 0) {
    if (((longlong *)0x180c8ed7f < plVar9) && (plVar9 < &DAT_180c8efc0)) {
      LOCK();
      plVar1 = (longlong *)(lVar5 + 0xb8);
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + lVar10;
      UNLOCK();
      lVar6 = *(longlong *)(lVar5 + 0xb0);
      do {
        if (lVar3 + lVar10 <= lVar6) break;
        LOCK();
        lVar7 = *(longlong *)(lVar5 + 0xb0);
        bVar14 = lVar6 == lVar7;
        if (bVar14) {
          *(longlong *)(lVar5 + 0xb0) = lVar3 + lVar10;
          lVar7 = lVar6;
        }
        UNLOCK();
        lVar6 = lVar7;
      } while (!bVar14);
      if (lVar10 < 1) {
        plVar9 = (longlong *)(lVar5 + 0xa8);
        lVar10 = lVar4 * 0x10000;
      }
      LOCK();
      *plVar9 = *plVar9 + lVar10;
      UNLOCK();
      return;
    }
    *(longlong *)(lVar5 + 0xb8) = *(longlong *)(lVar5 + 0xb8) + lVar10;
    if (*(longlong *)(lVar5 + 0xb0) < *(longlong *)(lVar5 + 0xb8)) {
      *(longlong *)(lVar5 + 0xb0) = *(longlong *)(lVar5 + 0xb8);
    }
    if (0 < lVar10) {
      *plVar9 = *plVar9 + lVar10;
      return;
    }
    *(longlong *)(lVar5 + 0xa8) = *(longlong *)(lVar5 + 0xa8) + lVar4 * 0x10000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18064c137(ulonglong param_1)
void FUN_18064c137(ulonglong param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong unaff_RBX;
  ulonglong *unaff_RSI;
  ulonglong unaff_RDI;
  uint64_t unaff_R15;
  bool bVar11;
  
  do {
    lVar10 = *(longlong *)(unaff_RBX + 0x390);
    if (lVar10 != 0) {
      *(ulonglong *)(unaff_RBX + 0x380) = param_1 - 1;
      *(uint64_t *)(unaff_RBX + 0x390) = *(uint64_t *)(lVar10 + 0x30);
      *(uint64_t *)(lVar10 + 0x30) = unaff_R15;
      lVar6 = *(longlong *)(unaff_RBX + 0x398);
      if (((void *)(lVar6 + 0x1a0) < &DAT_180c8ed80) ||
         ((void *)0x180c8efbf < (void *)(lVar6 + 0x1a0))) {
        *(longlong *)(lVar6 + 0x1b8) = *(longlong *)(lVar6 + 0x1b8) + -1;
        if (*(longlong *)(lVar6 + 0x1b0) < *(longlong *)(lVar6 + 0x1b8)) {
          *(longlong *)(lVar6 + 0x1b0) = *(longlong *)(lVar6 + 0x1b8);
        }
        *(longlong *)(lVar6 + 0x1a8) = *(longlong *)(lVar6 + 0x1a8) + 1;
      }
      else {
        LOCK();
        plVar1 = (longlong *)(lVar6 + 0x1b8);
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        lVar7 = *(longlong *)(lVar6 + 0x1b0);
        do {
          if (lVar3 + -1 <= lVar7) break;
          LOCK();
          lVar8 = *(longlong *)(lVar6 + 0x1b0);
          bVar11 = lVar7 == lVar8;
          if (bVar11) {
            *(longlong *)(lVar6 + 0x1b0) = lVar3 + -1;
            lVar8 = lVar7;
          }
          UNLOCK();
          lVar7 = lVar8;
        } while (!bVar11);
        LOCK();
        *(longlong *)(lVar6 + 0x1a8) = *(longlong *)(lVar6 + 0x1a8) + 1;
        UNLOCK();
      }
      FUN_18064aeb0(lVar10);
    }
    param_1 = *(ulonglong *)(unaff_RBX + 0x380);
  } while (unaff_RDI < param_1);
  LOCK();
  unaff_RSI[0xe] = 0;
  UNLOCK();
  if (unaff_RSI < (ulonglong *)0x140000000000) {
    if ((ulonglong)unaff_RSI >> 0x1c != 0) {
      lVar10 = ((ulonglong)unaff_RSI >> 0x1c) * 8;
      uVar9 = *(ulonglong *)(lVar10 + 0x180ca8c80);
      do {
        puVar2 = (ulonglong *)(lVar10 + 0x180ca8c80);
        LOCK();
        uVar5 = *puVar2;
        bVar11 = uVar9 == uVar5;
        if (bVar11) {
          *puVar2 = uVar9 & ~(1L << ((uint)((ulonglong)unaff_RSI >> 0x16) & 0x3f));
          uVar5 = uVar9;
        }
        UNLOCK();
        uVar9 = uVar5;
      } while (!bVar11);
    }
  }
  FUN_18064ae40((int)unaff_RSI[0xb] * -0x10000);
  uVar9 = unaff_RSI[0xb] << 0x10;
  if ((uVar9 == 0x400000) && (cVar4 = FUN_18064ab80(), cVar4 != '\0')) {
    return;
  }
  uVar5 = unaff_RSI[4];
  if (uVar5 != 0xffffffffffffffff) {
    lVar10 = 0;
    if (uVar5 == 0) goto LAB_18064aff4;
    do {
      lVar6 = lVar10 + 1;
      if ((uVar5 & 1) == 0) {
        lVar6 = lVar10;
      }
      bVar11 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
      lVar10 = lVar6;
    } while (bVar11);
    uVar9 = (uVar9 >> 6) * lVar6;
  }
  if (((uVar9 != 0) && ((char)unaff_RSI[1] == '\0')) && (lVar10 = -uVar9, lVar10 != 0)) {
    LOCK();
    UNLOCK();
    lVar6 = _DAT_180c8edf0;
    do {
      if (_DAT_180c8edf8 + lVar10 <= lVar6) break;
      LOCK();
      bVar11 = lVar6 != _DAT_180c8edf0;
      lVar3 = _DAT_180c8edf8 + lVar10;
      if (bVar11) {
        lVar6 = _DAT_180c8edf0;
        lVar3 = _DAT_180c8edf0;
      }
      _DAT_180c8edf0 = lVar3;
      UNLOCK();
    } while (bVar11);
    if (lVar10 == 0 || 0 < (longlong)uVar9) {
      LOCK();
      _DAT_180c8ede8 = _DAT_180c8ede8 + uVar9;
      UNLOCK();
      _DAT_180c8edf8 = _DAT_180c8edf8 + lVar10;
    }
    else {
      LOCK();
      _DAT_180c8ede0 = _DAT_180c8ede0 + lVar10;
      UNLOCK();
      _DAT_180c8edf8 = _DAT_180c8edf8 + lVar10;
    }
  }
LAB_18064aff4:
  while (_DAT_180c9e900 != 0) {
    _Thrd_yield();
  }
  uVar9 = *unaff_RSI;
  if ((unaff_RSI[0xb] & 0xffffffffffff) != 0) {
    if (uVar9 == 0) {
      func_0x000180648f70();
    }
    else {
      lVar10 = *(longlong *)((uVar9 & 0xff) * 8 + 0x180c9e938);
      if (lVar10 == 0) {
        FUN_1806503d0(0x16,&UNK_180a3d670);
      }
      else if (uVar9 >> 0xe < *(ulonglong *)(lVar10 + 0x10)) {
        if (*(char *)(lVar10 + 0x1d) == '\0') {
          FUN_1806491b0();
          FUN_1806497b0(*(uint64_t *)(lVar10 + 0x30));
        }
        cVar4 = FUN_1806497b0(lVar10 + 0x38);
        if (cVar4 == '\0') {
          FUN_1806503d0(0xb,&UNK_180a3d7a8);
        }
      }
      else {
        FUN_1806503d0(0x16,&UNK_180a3d6c0);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18064c1fb(void)
void FUN_18064c1fb(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *unaff_RSI;
  bool bVar8;
  uint64_t in_stack_00000030;
  uint64_t uStack0000000000000048;
  uint64_t uStack0000000000000050;
  uint64_t in_stack_00000058;
  
  uStack0000000000000048 = in_stack_00000058;
  uStack0000000000000050 = in_stack_00000030;
  LOCK();
  unaff_RSI[0xe] = 0;
  UNLOCK();
  if (unaff_RSI < (ulonglong *)0x140000000000) {
    if ((ulonglong)unaff_RSI >> 0x1c != 0) {
      lVar7 = ((ulonglong)unaff_RSI >> 0x1c) * 8;
      uVar6 = *(ulonglong *)(lVar7 + 0x180ca8c80);
      do {
        puVar1 = (ulonglong *)(lVar7 + 0x180ca8c80);
        LOCK();
        uVar4 = *puVar1;
        bVar8 = uVar6 == uVar4;
        if (bVar8) {
          *puVar1 = uVar6 & ~(1L << (ulonglong)((uint)((ulonglong)unaff_RSI >> 0x16) & 0x3f));
          uVar4 = uVar6;
        }
        UNLOCK();
        uVar6 = uVar4;
      } while (!bVar8);
    }
  }
  FUN_18064ae40((int)unaff_RSI[0xb] * -0x10000);
  uVar6 = unaff_RSI[0xb] << 0x10;
  if ((uVar6 == 0x400000) && (cVar3 = FUN_18064ab80(), cVar3 != '\0')) {
    return;
  }
  uVar4 = unaff_RSI[4];
  if (uVar4 != 0xffffffffffffffff) {
    lVar7 = 0;
    if (uVar4 == 0) goto LAB_18064aff4;
    do {
      lVar5 = lVar7 + 1;
      if ((uVar4 & 1) == 0) {
        lVar5 = lVar7;
      }
      bVar8 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
      lVar7 = lVar5;
    } while (bVar8);
    uVar6 = (uVar6 >> 6) * lVar5;
  }
  if (((uVar6 != 0) && ((char)unaff_RSI[1] == '\0')) && (lVar7 = -uVar6, lVar7 != 0)) {
    LOCK();
    UNLOCK();
    lVar5 = _DAT_180c8edf0;
    do {
      if (_DAT_180c8edf8 + lVar7 <= lVar5) break;
      LOCK();
      bVar8 = lVar5 != _DAT_180c8edf0;
      lVar2 = _DAT_180c8edf8 + lVar7;
      if (bVar8) {
        lVar5 = _DAT_180c8edf0;
        lVar2 = _DAT_180c8edf0;
      }
      _DAT_180c8edf0 = lVar2;
      UNLOCK();
    } while (bVar8);
    if (lVar7 == 0 || 0 < (longlong)uVar6) {
      LOCK();
      _DAT_180c8ede8 = _DAT_180c8ede8 + uVar6;
      UNLOCK();
      _DAT_180c8edf8 = _DAT_180c8edf8 + lVar7;
    }
    else {
      LOCK();
      _DAT_180c8ede0 = _DAT_180c8ede0 + lVar7;
      UNLOCK();
      _DAT_180c8edf8 = _DAT_180c8edf8 + lVar7;
    }
  }
LAB_18064aff4:
  while (_DAT_180c9e900 != 0) {
    _Thrd_yield();
  }
  uVar6 = *unaff_RSI;
  if ((unaff_RSI[0xb] & 0xffffffffffff) != 0) {
    if (uVar6 == 0) {
      func_0x000180648f70();
    }
    else {
      lVar7 = *(longlong *)((uVar6 & 0xff) * 8 + 0x180c9e938);
      if (lVar7 == 0) {
        FUN_1806503d0(0x16,&UNK_180a3d670);
      }
      else if (uVar6 >> 0xe < *(ulonglong *)(lVar7 + 0x10)) {
        if (*(char *)(lVar7 + 0x1d) == '\0') {
          FUN_1806491b0();
          FUN_1806497b0(*(uint64_t *)(lVar7 + 0x30));
        }
        cVar3 = FUN_1806497b0(lVar7 + 0x38);
        if (cVar3 == '\0') {
          FUN_1806503d0(0xb,&UNK_180a3d7a8);
        }
      }
      else {
        FUN_1806503d0(0x16,&UNK_180a3d6c0);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18064c220(uint *param_1,longlong param_2)
void FUN_18064c220(uint *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = (ulonglong)param_1[7];
  uVar3 = (ulonglong)param_1 & 0xffffffffffc00000;
  if (0x3ffffff < uVar2) {
    uVar2 = (ulonglong)*param_1 << 0x10;
  }
  func_0x000180646ff0(*(longlong *)(param_2 + 0x398) + 0xa0,
                      -(*(ushort *)((longlong)param_1 + 10) * uVar2));
  func_0x000180646ff0(*(longlong *)(param_2 + 0x398) + 0x20,0xffffffffffffffff);
  if ((*(char *)(uVar3 + 8) == '\0') && ((param_1[2] & 1) == 0)) {
    if (_DAT_180bfbe74 == 0) {
      FUN_180650490(&DAT_180bfbe70);
    }
    if (_DAT_180bfbe70 != 0) {
      *(byte *)(param_1 + 2) = (byte)param_1[2] | 1;
      uVar1 = *param_1;
      if (_DAT_180bfbdfc == 0) {
        FUN_180650490(&DAT_180bfbdf8);
      }
      if (_DAT_180bfbdf8 == 0) {
        FUN_1806492c0(((longlong)((longlong)param_1 + (-0x80 - uVar3)) / 0x50) * 0x10000 + uVar3,
                      (ulonglong)uVar1 << 0x10);
      }
      else {
        FUN_1806491b0();
      }
    }
  }
  *(byte *)(param_1 + 2) = (byte)param_1[2] & 0xfb;
  *(uint64_t *)((longlong)param_1 + 10) = 0;
  *(uint64_t *)((longlong)param_1 + 0x12) = 0;
  *(int16_t *)((longlong)param_1 + 0x1a) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[7] = 1;
  FUN_18064b830(param_1,param_2);
  *(longlong *)(uVar3 + 0x48) = *(longlong *)(uVar3 + 0x48) + -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




