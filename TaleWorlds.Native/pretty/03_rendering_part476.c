#include "TaleWorlds.Native.Split.h"

// 03_rendering_part476.c - 4 个函数

// 函数: void FUN_180521270(longlong param_1,int param_2,longlong *param_3,uint64_t param_4)
void FUN_180521270(longlong param_1,int param_2,longlong *param_3,uint64_t param_4)

{
  int iVar1;
  int32_t uVar2;
  int32_t uVar3;
  longlong lVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  
  *(int *)(param_1 + 0x920) = param_2;
  if ((param_2 == 1) && (*param_3 != 0)) {
    cVar5 = FUN_180488880(param_3 + 3,1,param_3,param_4,0,0xfffffffffffffffe);
    if (cVar5 != '\0') {
      if (*(longlong *)(param_1 + 0x928) != 0) {
        cVar5 = FUN_180488880(param_1 + 0x940);
        if ((cVar5 != '\0') &&
           (fVar7 = *(float *)((longlong)param_3 + 0x1c) - *(float *)(param_1 + 0x944),
           fVar6 = *(float *)(param_3 + 3) - *(float *)(param_1 + 0x940),
           fVar6 * fVar6 + fVar7 * fVar7 <= 1.0)) goto LAB_18052136d;
      }
      *(longlong *)(param_1 + 0x928) = *param_3;
      lVar4 = param_3[4];
      *(longlong *)(param_1 + 0x940) = param_3[3];
      *(longlong *)(param_1 + 0x948) = lVar4;
      uVar2 = *(int32_t *)((longlong)param_3 + 0x2c);
      lVar4 = param_3[6];
      uVar3 = *(int32_t *)((longlong)param_3 + 0x34);
      *(int *)(param_1 + 0x950) = (int)param_3[5];
      *(int32_t *)(param_1 + 0x954) = uVar2;
      *(int *)(param_1 + 0x958) = (int)lVar4;
      *(int32_t *)(param_1 + 0x95c) = uVar3;
      *(longlong *)(param_1 + 0x930) = param_3[1];
      *(longlong *)(param_1 + 0x938) = param_3[2];
      *(longlong *)(param_1 + 0x960) = param_3[7];
      *(int *)(param_1 + 0x968) = (int)param_3[8];
      *(uint64_t *)(param_1 + 0x970) =
           *(uint64_t *)(&system_error_code + (longlong)*(int *)(param_1 + 0x978) * 8);
    }
  }
LAB_18052136d:
  lVar4 = _DAT_180c8ece0;
  if ((*(int *)(param_1 + 0x920) == 1) && (*(int *)(param_1 + 0x18) != 0)) {
    iVar1 = *(int *)(param_1 + 0x18);
    if ((iVar1 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x30))(iVar1);
    }
    (**(code **)(lVar4 + 0x78))(iVar1);
    if ((iVar1 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x18))(iVar1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180521480(longlong param_1)
void FUN_180521480(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  uint uVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  float fStackX_8;
  float fStackX_c;
  int32_t uStack_c0;
  int32_t uStack_bc;
  uint64_t uStack_b8;
  int32_t uStack_b0;
  uint64_t uStack_ac;
  uint64_t uStack_a4;
  int32_t uStack_9c;
  int32_t uStack_98;
  int8_t uStack_94;
  
  lVar14 = *(longlong *)(param_1 + 0x20);
  uVar9 = *(uint *)(param_1 + 0x56c);
  lVar10 = 0;
  uVar16 = 0;
  if ((uVar9 >> 0xb & 1) != 0) {
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x590) + 0x24a8);
    lVar12 = lVar10;
    if (lVar13 != 0) {
      lVar12 = *(longlong *)(lVar13 + 0x1d0);
    }
    cVar11 = (char)*(uint64_t *)(*(longlong *)(param_1 + 0x590) + 0x24b8);
    cVar5 = '\0';
    if (cVar11 == '\0') {
      cVar5 = (char)lVar12;
    }
    if (cVar5 == '\0' && cVar11 == '\0') {
      uStack_b0 = 0;
      uStack_98 = 0x1000000;
      uStack_ac = 0x3f80000000000000;
      uStack_a4 = 0xbe4ccccdbe4ccccd;
      uStack_9c = 0x3ecccccd;
      uStack_94 = 0;
      uStack_c0 = 1;
      uStack_bc = 0xffffffff;
      uStack_b8 = 0x2001;
      FUN_18051ec50(param_1,&uStack_c0);
      uVar9 = *(uint *)(param_1 + 0x56c);
    }
  }
  if (((*(byte *)(lVar14 + 0x40) & 1) != 0) && (0.0 < *(float *)(lVar14 + 0x44))) {
    *(int32_t *)(param_1 + 0x670) = 0xffffffff;
  }
  if (((uVar9 >> 8 & 1) != 0) && (*(int *)(param_1 + 0x564) < 0)) {
    plVar1 = (longlong *)(param_1 + 0x5f0);
    if (*plVar1 == 0) {
      uVar9 = uVar16;
      if (*(char *)(lVar14 + 0xd4) == '\x02') {
        uVar9 = *(uint *)(*(longlong *)(lVar14 + 0xc0) + 0x18);
      }
      if ((uVar9 & 0x40) != 0) {
        lVar13 = *(longlong *)(lVar14 + 0xc0);
        lVar12 = lVar10;
        if (lVar13 != 0) {
          lVar12 = *(longlong *)(lVar13 + 0x10);
        }
        if (((*(float *)(lVar12 + 0x88) <= 0.0 && *(float *)(lVar12 + 0x88) != 0.0) &&
            (0.2 < *(float *)(lVar14 + 0xb8))) && (*(int *)(param_1 + 0x568) == 1)) {
          lVar12 = lVar10;
          if (lVar13 != 0) {
            lVar12 = *(longlong *)(lVar13 + 0x10);
          }
          FUN_180056f10(plVar1,lVar12);
          *(longlong *)(param_1 + 0x5a8) =
               *(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x5b0) * 8) + 100000;
          if ((*(int *)(param_1 + 0x570) != 1) &&
             (((*(byte *)(param_1 + 0x4c8) & 1) != 0 || (0.0 < *(float *)(param_1 + 0x4d0))))) {
                    // WARNING: Subroutine does not return
            FUN_1808fd400();
          }
        }
      }
      if (*plVar1 == 0) {
        if ((((*(byte *)(lVar14 + 0x40) & 1) != 0) && (*(int *)(param_1 + 0x568) == 1)) &&
           (0.0 < (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x5b0) * 8) -
                         *(longlong *)(param_1 + 0x5a8)) * 1e-05)) {
          uVar8 = FUN_18052efb0(param_1);
          FUN_180056f10(plVar1,uVar8);
          if (*plVar1 == 0) {
            uVar9 = *(uint *)(param_1 + 0x748) << 0xd ^ *(uint *)(param_1 + 0x748);
            uVar9 = uVar9 ^ uVar9 >> 0x11;
            uVar9 = uVar9 ^ uVar9 << 5;
            *(uint *)(param_1 + 0x748) = uVar9;
            *(longlong *)(param_1 + 0x5a8) =
                 *(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x5b0) * 8) -
                 (longlong)(-10000.0 - (float)(uVar9 - 1) * 2.3283064e-06);
          }
          else {
            *(longlong *)(param_1 + 0x5a8) =
                 *(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x5b0) * 8) + 100000;
            if ((*(int *)(param_1 + 0x570) != 1) &&
               (((*(byte *)(param_1 + 0x4c8) & 1) != 0 || (0.0 < *(float *)(param_1 + 0x4d0))))) {
                    // WARNING: Subroutine does not return
              FUN_1808fd400();
            }
          }
        }
        goto LAB_1805218a4;
      }
    }
    uVar9 = uVar16;
    if (*(char *)(lVar14 + 0xd4) == '\x02') {
      uVar9 = *(uint *)(*(longlong *)(lVar14 + 0xc0) + 0x18);
    }
    if ((uVar9 & 0x40) != 0) {
      if (*(longlong *)(lVar14 + 0xc0) != 0) {
        lVar10 = *(longlong *)(*(longlong *)(lVar14 + 0xc0) + 0x10);
      }
      if ((*(float *)(lVar10 + 0x88) <= 0.0 && *(float *)(lVar10 + 0x88) != 0.0) &&
         (0.2 < *(float *)(lVar14 + 0xb8))) goto LAB_1805218a4;
    }
    if (*(int *)(param_1 + 0x568) == 1) {
      uVar8 = FUN_18052efb0(param_1);
      FUN_180056f10(plVar1,uVar8);
      if (*(int *)(*(longlong *)(param_1 + 0x590) + 0x2450) ==
          *(int *)(*(longlong *)(param_1 + 0x598) + 0x178)) {
        uStack_b0 = 0;
        uStack_98 = 0x1000000;
        uStack_ac = 0x3f80000000000000;
        uStack_a4 = 0xbe4ccccdbe4ccccd;
        uStack_9c = 0x3ecccccd;
        uStack_94 = 0;
        uStack_c0 = 0;
        uStack_bc = 0xffffffff;
        uStack_b8 = 0x28;
        FUN_18051ec50(param_1,&uStack_c0);
      }
    }
  }
LAB_1805218a4:
  if (((*(char *)(param_1 + 0x5e8) != '\0') && ((*(byte *)(param_1 + 0x4c8) & 1) == 0)) &&
     (*(float *)(param_1 + 0x4d0) <= 0.0)) {
    *(int8_t *)(param_1 + 0x5e8) = 0;
  }
  cVar5 = func_0x000180522f60(param_1);
  if (cVar5 != '\0') {
    uVar8 = *(uint64_t *)(*(longlong *)(param_1 + 0x5f0) + 0x80);
    fStackX_c = (float)((ulonglong)uVar8 >> 0x20);
    fStackX_8 = (float)uVar8;
    rsqrtss(ZEXT416((uint)(fStackX_8 * fStackX_8)),
            ZEXT416((uint)(fStackX_c * fStackX_c + fStackX_8 * fStackX_8)));
                    // WARNING: Subroutine does not return
    FUN_1808fd400();
  }
  if (((*(longlong *)(param_1 + 0x5f0) != 0) &&
      (iVar6 = *(int *)(*(longlong *)(param_1 + 0x590) + 0x2450), iVar6 != -1)) &&
     (*(int *)((longlong)iVar6 * 0x68 + 0x58 + _DAT_180c96150) == 0x18)) {
    plVar1 = *(longlong **)(param_1 + 0x5f0);
    *(uint64_t *)(param_1 + 0x5f0) = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    *(byte *)(lVar14 + 0x40) = *(byte *)(lVar14 + 0x40) & 0xfc | 4;
    *(int32_t *)(lVar14 + 0x154) = 0xbe4ccccd;
  }
  uVar9 = *(uint *)(param_1 + 0x4c4);
  if (((uVar9 & 4) != 0) && ((*(byte *)(param_1 + 0x56c) & 4) != 0)) {
    if (-1 < *(int *)(param_1 + 0x560)) {
      iVar6 = *(int *)(*(longlong *)
                        ((longlong)*(int *)(param_1 + 0x560) * 0xa60 + 0x3630 +
                        *(longlong *)(param_1 + 0x8d8)) + 0x2450);
      if (iVar6 != -1) {
        uVar16 = *(uint *)((longlong)iVar6 * 0x68 + 0x58 + _DAT_180c96150);
      }
      if (uVar16 == 0x24) goto LAB_180521aeb;
    }
    if (((int)_DAT_180c92514 != 1) && ((int)_DAT_180c92514 != 4)) {
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0x1000000;
      uStack_ac = 0x3f80000000000000;
      uStack_a4 = 0xbe4ccccdbe4ccccd;
      uStack_9c = 0x3ecccccd;
      uStack_94 = 0;
      uStack_c0 = 0;
      uStack_bc = *(int32_t *)(*(longlong *)(param_1 + 0x598) + 0x1a0);
      FUN_18051ec50(param_1,&uStack_c0);
      uVar9 = *(uint *)(param_1 + 0x4c4);
    }
  }
LAB_180521aeb:
  lVar10 = _DAT_180c96150;
  iVar6 = (int)_DAT_180c92514;
  if ((((((uVar9 & 1) != 0) && (*(int *)(param_1 + 0x568) == 1)) &&
       (0.0 < (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x6c0) * 8) -
                     *(longlong *)(param_1 + 0x6b8)) * 1e-05)) && ((iVar6 != 1 && (iVar6 != 4)))) &&
     (-1 < *(int *)(param_1 + 0x564))) {
    lVar12 = (longlong)*(int *)(param_1 + 0x564) * 0xa60;
    lVar13 = *(longlong *)(param_1 + 0x8d8);
    if (((*(int *)(lVar12 + 0x3600 + lVar13) == *(int *)(param_1 + 0x10)) &&
        (lVar4 = *(longlong *)(lVar12 + 0x30c0 + lVar13), fVar2 = *(float *)(lVar4 + 0x20),
        fVar3 = *(float *)(lVar4 + 0x1c), fVar3 * fVar3 + fVar2 * fVar2 < 0.25)) &&
       ((iVar15 = *(int *)(*(longlong *)(lVar12 + 0x3630 + lVar13) + 0x2450), iVar15 == -1 ||
        (*(int *)((longlong)iVar15 * 0x68 + 0x58 + _DAT_180c96150) != 0x2e)))) {
                    // WARNING: Subroutine does not return
      FUN_1808fd400();
    }
  }
  if ((((((uVar9 & 2) != 0) && (*(int *)(param_1 + 0x564) == -1)) &&
       (*(int *)(param_1 + 0x568) == 1)) &&
      ((0.0 < (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x6c0) * 8) -
                     *(longlong *)(param_1 + 0x6b8)) * 1e-05 &&
       ((*(byte *)(lVar14 + 0x40) & 1) != 0)))) && ((iVar6 != 1 && (iVar6 != 4)))) {
    if (*(int *)(param_1 + 0x570) == 2) {
      iVar6 = *(int *)(param_1 + 0x4c0);
    }
    else {
      iVar6 = FUN_18050b240(param_1);
    }
    if (-1 < iVar6) {
      lVar14 = *(longlong *)(param_1 + 0x8d8);
      lVar13 = lVar14 + 0x30a0 + (longlong)iVar6 * 0xa60;
      if ((((*(int *)(*(longlong *)(param_1 + 0x590) + 0x2450) == -1) &&
           (*(int *)(lVar13 + 0x560) == -1)) &&
          (((*(byte *)(lVar13 + 0x56c) & 1) != 0 &&
           ((*(int *)(lVar13 + 0x568) == 1 && (*(int *)(lVar13 + 0x720) == 0)))))) &&
         ((iVar15 = *(int *)(*(longlong *)(lVar13 + 0x590) + 0x2450), iVar15 == -1 ||
          (*(int *)((longlong)iVar15 * 0x68 + 0x58 + lVar10) != 0x2e)))) {
        iVar15 = *(int *)(lVar14 + 0x52ed94);
        iVar7 = func_0x0001804e1880(lVar14 + 0x30a0);
        while( true ) {
          if (iVar15 <= iVar7) {
            FUN_18052e130(lVar13,*(int32_t *)(param_1 + 0x10),1);
                    // WARNING: Subroutine does not return
            FUN_1808fd400();
          }
          if (*(int *)((longlong)iVar7 * 0xa60 + 0x3604 + lVar14) == iVar6) break;
          iVar7 = (int)*(short *)(lVar14 + 0x52dda0 + (longlong)iVar7 * 2);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180522280(longlong param_1,float param_2,longlong param_3)
void FUN_180522280(longlong param_1,float param_2,longlong param_3)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  char cVar6;
  int8_t uVar7;
  int32_t uVar8;
  int iVar9;
  int iVar10;
  uint64_t *puVar11;
  longlong lVar12;
  longlong lVar13;
  byte bVar14;
  uint uVar15;
  uint64_t uVar16;
  float fVar17;
  float fVar18;
  int32_t in_stack_ffffffffffffff68;
  uint3 uVar19;
  uint64_t uStack_80;
  uint64_t *puStack_78;
  int32_t uStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int8_t uStack_54;
  
  lVar13 = *(longlong *)(param_1 + 0x20);
  uVar15 = *(uint *)(lVar13 + 8);
  if ((uVar15 >> 0x1a & 1) != 0) {
    *(uint *)(param_1 + 0x4c4) = *(uint *)(param_1 + 0x4c4) & 0xfffffff7;
    uVar15 = *(uint *)(lVar13 + 8);
  }
  if ((uVar15 >> 0x1b & 1) != 0) {
    *(uint *)(param_1 + 0x4c4) = *(uint *)(param_1 + 0x4c4) & 0xffff7fff;
    uVar15 = *(uint *)(lVar13 + 8);
  }
  if ((uVar15 >> 0x1c & 1) != 0) {
    *(uint *)(param_1 + 0x4c4) = *(uint *)(param_1 + 0x4c4) & 0xfff8ffff;
  }
  iVar10 = 0;
  iVar9 = 0;
  if (((*(uint *)(param_1 + 0x56c) & 0x800) != 0) &&
     (lVar12 = *(longlong *)(param_1 + 0x590), lVar12 != 0)) {
    in_stack_ffffffffffffff68 = *(int32_t *)(param_3 + 200);
    fVar18 = *(float *)(*(longlong *)(param_1 + 0x6d8) + 0x8c0);
    fVar17 = (float)func_0x000180598bb0(*(uint *)(param_3 + 0x24) >> 0xb & 0xffffff01,
                                        *(int8_t *)(param_3 + 0x9b),param_3 + 0xf8,
                                        *(int32_t *)(lVar13 + 0x84),in_stack_ffffffffffffff68);
    fVar1 = *(float *)(lVar13 + 0x54);
    *(float *)(lVar12 + 0x3484) = fVar17 / fVar18;
    *(float *)(lVar12 + 0x3488) = fVar1 / fVar18;
    if (((*(uint *)(lVar13 + 8) >> 0x18 & 1) == 0) ||
       ((((*(uint *)(param_1 + 0x56c) & 0x800) == 0 ||
         (lVar12 = *(longlong *)(param_1 + 0x590), lVar12 == 0)) ||
        (*(char *)(lVar12 + 0x34bc) == '\0')))) {
      if ((*(uint *)(lVar13 + 8) >> 0x19 & 1) != 0) {
        uVar15 = *(uint *)(param_1 + 0x56c) & 0x800;
        if (((((uVar15 == 0) || (*(longlong *)(param_1 + 0x590) == 0)) ||
             (*(char *)(*(longlong *)(param_1 + 0x590) + 0x34bc) == '\0')) &&
            ((lVar12 = *(longlong *)(param_1 + 0x590), lVar12 != 0 && (uVar15 != 0)))) &&
           ((*(char *)(lVar12 + 0x34bc) != '\x01' &&
            ((*(int *)(param_1 + 0x564) < 0 && ((*(byte *)(lVar12 + 0x3424) & 0x10) == 0)))))) {
          if ((*(uint *)(param_1 + 0x56c) >> 0xe & 1) != 0) {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9e8);
            if (lVar2 != 0) {
              iVar10 = *(int *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 100 +
                               *(longlong *)(lVar2 + 0xd0));
            }
            if (*(char *)((longlong)iVar10 * 0x170 + _DAT_180c95ff0 + 0x134) != '\0')
            goto LAB_18052247d;
          }
          *(int8_t *)(lVar12 + 0x34bc) = 1;
        }
      }
    }
    else {
      *(int8_t *)(lVar12 + 0x34bc) = 0;
    }
  }
LAB_18052247d:
  uVar15 = *(uint *)(lVar13 + 8);
  if ((uVar15 >> 10 & 1) != 0) {
    *(int32_t *)(param_1 + 0x208) = 0xffffffff;
    uVar15 = *(uint *)(lVar13 + 8);
  }
  if ((uVar15 >> 0xf & 1) != 0) {
    FUN_18052c030(param_1,5);
  }
  if (*(longlong *)(param_1 + 0x590) == 0) {
    return;
  }
  if ((*(uint *)(lVar13 + 8) >> 0xc & 1) == 0) {
    if ((*(uint *)(lVar13 + 8) >> 0xb & 1) != 0) {
      uVar16 = 0;
      goto LAB_1805224d2;
    }
  }
  else {
    uVar16 = 1;
LAB_1805224d2:
    FUN_18052dae0(param_1,uVar16);
  }
  if ((*(uint *)(lVar13 + 8) >> 0xd & 1) == 0) {
    if (((*(uint *)(param_1 + 0x56c) & 0x800) == 0) &&
       (0.0 < (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x5c0) * 8) -
                     *(longlong *)(param_1 + 0x5b8)) * 1e-05)) {
      *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 0x590) + 0x2590) + 0xc) = 0;
    }
  }
  else {
    iVar10 = *(int *)(param_1 + 0x560);
    if ((iVar10 < 0) || (iVar10 < 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((*(float *)(lVar13 + 0x20) <= 0.0 && *(float *)(lVar13 + 0x20) != 0.0) ||
       (*(float *)(lVar13 + 0x1c) * *(float *)(lVar13 + 0x1c) +
        *(float *)(lVar13 + 0x20) * *(float *)(lVar13 + 0x20) < 1.0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (((bVar3) && (bVar4)) &&
       (*(int *)((longlong)iVar10 * 0xa60 + 0x3610 + *(longlong *)(param_1 + 0x8d8)) == 2)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8)
                   + 0x48) < _DAT_180d49ef0) &&
         (FUN_1808fcb90(&system_ptr_9ef0), _DAT_180d49ef0 == -1)) {
        uStack_80 = &unknown_var_3456_ptr;
        uStack_68 = 0;
        puStack_78 = (uint64_t *)0x0;
        uStack_70 = 0;
        puVar11 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
        *(int8_t *)puVar11 = 0;
        puStack_78 = puVar11;
        uVar8 = FUN_18064e990(puVar11);
        uStack_68 = CONCAT44(uStack_68._4_4_,uVar8);
        *puVar11 = 0x6c61526573726f48;
        *(int16_t *)(puVar11 + 1) = 0x796c;
        *(int8_t *)((longlong)puVar11 + 10) = 0;
        uStack_70 = 10;
        _DAT_180d49ef4 = FUN_180571e20(&system_ptr_60c0,&uStack_80);
        uStack_80 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar11);
      }
      FUN_180508510((longlong)*(int *)(param_1 + 0x560) * 0xa60 +
                    *(longlong *)(param_1 + 0x8d8) + 0x30a0,_DAT_180d49ef4,0,0);
      uVar15 = *(uint *)(param_1 + 0x748) << 0xd ^ *(uint *)(param_1 + 0x748);
      uVar15 = uVar15 >> 0x11 ^ uVar15;
      uVar15 = uVar15 << 5 ^ uVar15;
      *(uint *)(param_1 + 0x748) = uVar15;
      if ((float)(uVar15 - 1) * 2.3283064e-10 < 0.25) {
        FUN_180508510(param_1,_DAT_180d49ef4,0,0);
      }
    }
    lVar12 = *(longlong *)(param_1 + 0x590);
    if (*(int *)(lVar12 + 0x2450) != -1) {
      iVar9 = *(int *)((longlong)*(int *)(lVar12 + 0x2450) * 0x68 + 0x58 + _DAT_180c96150);
    }
    if (iVar9 != 0x26) {
      if (bVar4) {
        uVar15 = *(uint *)(*(longlong *)(param_1 + 0x598) + 0x19c);
      }
      else {
        uVar15 = *(uint *)(*(longlong *)(param_1 + 0x598) + 0x180);
      }
      if (-1 < *(int *)(*(longlong *)
                         ((longlong)*(int *)(lVar12 + 0xac) * 0xe0 + 0x78 + _DAT_180c95fb0) +
                       (longlong)(int)uVar15 * 8)) {
        puStack_78 = (uint64_t *)0x0;
        uStack_70 = 0;
        uStack_58 = 0x1000000;
        uStack_6c = 0;
        uStack_68 = 0xbe4ccccd3f800000;
        uStack_60 = 0xbe4ccccd;
        uStack_5c = 0x3ecccccd;
        uStack_54 = 0;
        uStack_80 = (void *)((ulonglong)uVar15 << 0x20);
        FUN_18051ec50(param_1,&uStack_80);
        lVar12 = *(longlong *)(param_1 + 0x590);
      }
    }
    iVar10 = *(int *)(*(longlong *)(lVar12 + 0x2590) + 8);
    iVar9 = FUN_18065cf70(*(longlong *)(lVar12 + 0x2590),
                          *(float *)(param_3 + 0x138) * 0.02 + *(float *)(lVar13 + 0x54) * 0.4);
    iVar10 = iVar10 + -2;
    if (iVar9 < iVar10) {
      iVar9 = iVar10;
    }
    *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x590) + 0x2590) + 0xc) = iVar9;
    *(longlong *)(param_1 + 0x5b8) =
         *(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x5c0) * 8) + 200000;
  }
  if ((*(uint *)(param_3 + 0x24) & 0x800) != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x730) != 0) {
    uVar19 = (uint3)((uint)in_stack_ffffffffffffff68 >> 8);
    if (-0.5 < *(float *)(lVar13 + 0x134)) {
      if (0.5 <= *(float *)(lVar13 + 0x134)) {
        iVar10 = FUN_180557aa0(*(uint64_t *)(param_1 + 0x598),
                               *(int32_t *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x590) + 0x2590) + 0x10),0,0,
                               (uint)uVar19 << 8);
        puStack_78 = (uint64_t *)0x0;
        uStack_70 = 0;
        uStack_58 = 0x1000000;
        uStack_6c = 0;
        uStack_68 = 0xbe4ccccd3f800000;
        uStack_60 = 0xbe4ccccd;
        uStack_5c = 0x3ecccccd;
        uStack_54 = 0;
        uStack_80 = (void *)CONCAT44(iVar10,1);
        if (iVar10 != -1) {
          cVar6 = FUN_18051ec50(param_1,&uStack_80);
          if (cVar6 == '\0') {
            return;
          }
          lVar13 = *(longlong *)(param_1 + 0x730);
          fVar18 = *(float *)(lVar13 + 0x88) * 0.97 + 0.006;
          goto LAB_180522cbb;
        }
      }
    }
    else {
      iVar10 = FUN_180557aa0(*(uint64_t *)(param_1 + 0x598),
                             *(int32_t *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x590) + 0x2590) + 0x10),1,0,
                             (uint)uVar19 << 8);
      puStack_78 = (uint64_t *)0x0;
      uStack_70 = 0;
      uStack_58 = 0x1000000;
      uStack_6c = 0;
      uStack_68 = 0xbe4ccccd3f800000;
      uStack_60 = 0xbe4ccccd;
      uStack_5c = 0x3ecccccd;
      uStack_54 = 0;
      uStack_80 = (void *)CONCAT44(iVar10,1);
      if (iVar10 != -1) {
        cVar6 = FUN_18051ec50(param_1,&uStack_80);
        if (cVar6 == '\0') {
          return;
        }
        lVar13 = *(longlong *)(param_1 + 0x730);
        fVar18 = *(float *)(lVar13 + 0x88) * 0.97 - 0.006;
        goto LAB_180522cbb;
      }
    }
  }
  if ((_DAT_180c92514 == 1) || (_DAT_180c92514 == 4)) goto LAB_180522bf0;
  if ((*(float *)(lVar13 + 0x138) != 0.0) ||
     ((((*(float *)(lVar13 + 0x38) != 0.0 || (*(float *)(lVar13 + 0x20) < -0.06)) ||
       (0.06 <= *(float *)(lVar13 + 0x20))) ||
      ((*(float *)(lVar13 + 0x1c) < -0.06 || (0.06 <= *(float *)(lVar13 + 0x1c))))))) {
    lVar12 = *(longlong *)(param_1 + 0x6e0);
    uVar15 = *(int *)(lVar12 + 0x1390) << 0xd ^ *(uint *)(lVar12 + 0x1390);
    uVar15 = uVar15 >> 0x11 ^ uVar15;
    uVar15 = uVar15 << 5 ^ uVar15;
    *(uint *)(lVar12 + 0x1390) = uVar15;
    *(longlong *)(param_1 + 0x5d8) =
         *(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x5e0) * 8) -
         (longlong)(-800000.0 - (float)(uVar15 - 1) * 9.313226e-05);
    uVar5 = 0xffffffff;
LAB_180522bb9:
    puStack_78 = (uint64_t *)0x0;
    uStack_70 = 0;
    uStack_58 = 0x1000000;
    uStack_6c = 0;
    uStack_68 = 0xbe4ccccd3f800000;
    uStack_60 = 0xbe4ccccd;
    uStack_5c = 0x3ecccccd;
    uStack_54 = 0;
    uStack_80 = (void *)(uVar5 << 0x20);
    FUN_18051ec50(param_1,&uStack_80);
  }
  else if (*(int *)(*(longlong *)(param_1 + 0x590) + 0x2450) == -1) {
    if (0.0 < (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x5e0) * 8) -
                     *(longlong *)(param_1 + 0x5d8)) * 1e-05) {
      bVar14 = (byte)((uint)*(int *)(param_1 + 0x560) >> 0x1f) ^ 1;
      if (bVar14 == 0) {
LAB_180522aae:
        cVar6 = '\x01';
      }
      else {
        lVar12 = (longlong)*(int *)(param_1 + 0x560) * 0xa60;
        if ((((*(uint *)(lVar12 + 0x360c + *(longlong *)(param_1 + 0x8d8)) & 0x800) != 0) &&
            (lVar12 = *(longlong *)(lVar12 + 0x37c8 + *(longlong *)(param_1 + 0x8d8)), lVar12 != 0))
           && (*(char *)(lVar12 + 0x601) == '\0')) goto LAB_180522aae;
        cVar6 = '\0';
      }
      if ((cVar6 == '\0') || (bVar14 == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      uVar15 = FUN_180557aa0(*(uint64_t *)(param_1 + 0x598),1,0xffffffff,cVar6,uVar7);
      uVar5 = (ulonglong)uVar15;
      goto LAB_180522bb9;
    }
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x6e0);
    uVar15 = *(int *)(lVar12 + 0x1390) << 0xd ^ *(uint *)(lVar12 + 0x1390);
    uVar15 = uVar15 >> 0x11 ^ uVar15;
    uVar15 = uVar15 << 5 ^ uVar15;
    *(uint *)(lVar12 + 0x1390) = uVar15;
    *(longlong *)(param_1 + 0x5d8) =
         *(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x5e0) * 8) -
         (longlong)(-300000.0 - (float)(uVar15 - 1) * 4.656613e-05);
  }
LAB_180522bf0:
  if (((*(float *)(lVar13 + 0x38) <= 0.0) || (*(float *)(lVar13 + 0x4c) <= param_2 * 0.3)) ||
     (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x590) + 0x2590) + 0x10) != 5)) {
LAB_180522c59:
    iVar10 = -1;
    puStack_78 = (uint64_t *)0x2000;
  }
  else {
    iVar10 = *(int *)(*(longlong *)(param_1 + 0x598) + 400);
    if ((iVar10 == -1) ||
       (*(int *)(*(longlong *)
                  ((longlong)*(int *)(*(longlong *)(param_1 + 0x590) + 0xac) * 0xe0 + 0x78 +
                  _DAT_180c95fb0) + (longlong)iVar10 * 8) < 0)) goto LAB_180522c59;
    puStack_78 = (uint64_t *)0x0;
  }
  uStack_70 = 0;
  uStack_58 = 0x1000000;
  uStack_6c = 0;
  uStack_68 = 0xbe4ccccd3f800000;
  uStack_60 = 0xbe4ccccd;
  uStack_5c = 0x3ecccccd;
  uStack_54 = 0;
  uStack_80 = (void *)CONCAT44(iVar10,1);
  FUN_18051ec50(param_1,&uStack_80);
  lVar13 = *(longlong *)(param_1 + 0x730);
  if (lVar13 == 0) {
    return;
  }
  fVar18 = *(float *)(lVar13 + 0x88) * 0.97;
LAB_180522cbb:
  *(float *)(lVar13 + 0x88) = fVar18;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180522cf0(longlong param_1)
void FUN_180522cf0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int32_t uVar3;
  uint uVar4;
  int8_t uVar5;
  float extraout_XMM0_Da;
  float fVar6;
  int32_t uStack_38;
  int32_t uStack_34;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int8_t uStack_c;
  
  lVar1 = *(longlong *)(param_1 + 0x590);
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == 0) goto LAB_180522ef8;
  uVar4 = *(uint *)(lVar2 + 8);
  if ((uVar4 >> 0x11 & 1) == 0) {
    if ((uVar4 >> 0x12 & 1) == 0) {
      if ((uVar4 >> 0x13 & 1) == 0) {
        if ((uVar4 >> 0x10 & 1) == 0) goto LAB_180522e20;
        if (((*(uint *)(param_1 + 0x56c) & 0x800) == 0) || (*(char *)(lVar1 + 0x34bc) == '\0')) {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
        fVar6 = *(float *)(lVar2 + 0x1c);
        uVar3 = func_0x00018052dcc0(*(int32_t *)(lVar2 + 0x20));
        uStack_34 = FUN_180557b40(*(uint64_t *)(param_1 + 0x598),uVar3,1,0xffffffff,0,uVar5,
                                  1.0 < fVar6 * fVar6 + extraout_XMM0_Da * extraout_XMM0_Da);
        uStack_30 = 0;
      }
      else {
        uStack_34 = 0xffffffff;
        uStack_30 = 0x2021;
      }
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0x3f800000;
      uStack_1c = 0xbe4ccccd;
      uStack_18 = 0xbe4ccccd;
      uStack_10 = 0x1000000;
      uStack_14 = 0x3ecccccd;
      uStack_c = 0;
      uStack_38 = 0;
      FUN_18051ec50(param_1,&uStack_38);
    }
    else {
      FUN_180524930(param_1,0,0);
    }
  }
  else {
    FUN_180524930(param_1,CONCAT71((int7)((ulonglong)lVar1 >> 8),1),0);
  }
LAB_180522e20:
  uVar4 = *(uint *)(lVar2 + 8);
  if ((uVar4 >> 0x14 & 1) != 0) {
    func_0x00018057a770(*(uint64_t *)(param_1 + 0x590),
                        *(float *)(lVar2 + 0x24) * *(float *)(lVar2 + 0x24) +
                        *(float *)(lVar2 + 0x28) * *(float *)(lVar2 + 0x28) +
                        *(float *)(lVar2 + 0x2c) * *(float *)(lVar2 + 0x2c));
    uVar4 = *(uint *)(lVar2 + 8);
  }
  if ((((uVar4 & 0x20400000) != 0) && (_DAT_180c92514 != 1)) && (_DAT_180c92514 != 4)) {
    lVar1 = *(longlong *)(param_1 + 0x598);
    uStack_24 = 0;
    uStack_20 = 0x3f800000;
    uStack_1c = 0xbe4ccccd;
    uStack_18 = 0xbe4ccccd;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_10 = 0x1000000;
    uStack_14 = 0x3ecccccd;
    uStack_c = 0;
    uStack_38 = 0;
    if ((*(byte *)(lVar2 + 0x40) & 1) == 0) {
      uStack_34 = *(int32_t *)(lVar1 + 0x198);
    }
    else if ((uVar4 >> 0x1d & 1) == 0) {
      uStack_34 = *(int32_t *)(lVar1 + 0x194);
    }
    else {
      uStack_34 = *(int32_t *)(lVar1 + 0x1a4);
    }
    FUN_18051ec50(param_1,&uStack_38);
  }
  if ((*(uint *)(lVar2 + 8) >> 0x17 & 1) != 0) {
    FUN_18052c030(param_1,6);
  }
LAB_180522ef8:
  if (((*(uint *)(lVar2 + 8) >> 0x15 & 1) != 0) &&
     ((float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x238) * 8) -
             *(longlong *)(param_1 + 0x230)) * -1e-05 < 0.5)) {
    *(longlong *)(param_1 + 0x230) =
         *(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x238) * 8) + 50000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



