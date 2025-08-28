#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_11_part053.c - 1 个函数

// 函数: void FUN_1807b2310(void)
void FUN_1807b2310(void)

{
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}



uint64_t FUN_1807b5170(int64_t param_1)

{
  byte bVar1;
  int iVar2;
  
  FUN_18080d060();
  iVar2 = *(int *)(param_1 + 0xbfc);
  do {
    bVar1 = *(byte *)((int64_t)iVar2 + 0x290 + param_1);
    if ((int)(uint)bVar1 < *(int *)(param_1 + 0x8f4)) goto LAB_1807b51bc;
    iVar2 = iVar2 + 1;
    *(int *)(param_1 + 0xbfc) = iVar2;
  } while ((iVar2 < *(int *)(param_1 + 0x8ec)) && (iVar2 < 0xff));
  if (*(int *)(param_1 + 0x8f4) <= (int)(uint)bVar1) {
    *(int16_t *)(param_1 + 0xbe8) = 0x100;
    return 0x13;
  }
LAB_1807b51bc:
  *(uint64_t *)(param_1 + 0x4420) =
       *(uint64_t *)(*(int64_t *)(param_1 + 0x278) + 8 + (uint64_t)bVar1 * 0x10);
  FUN_1807b6100(param_1);
  return 0;
}



uint64_t
FUN_1807b52b0(uint64_t param_1,uint *param_2,int64_t param_3,int param_4,int64_t param_5,
             uint param_6,uint param_7,int param_8,uint param_9,uint param_10,byte param_11)

{
  uint *puVar1;
  int64_t lVar2;
  uint uVar3;
  int64_t lVar4;
  uint uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int iVar8;
  
  uVar7 = (uint64_t)(int)param_2[1];
  lVar6 = (int64_t)(int)param_7;
  if ((int)param_2[1] < param_4) {
    if (*param_2 == (uint)*(ushort *)(uVar7 * 3 + 1 + param_5)) {
      do {
        if (param_4 <= (int)uVar7) break;
        while( true ) {
          while( true ) {
            iVar8 = (int)uVar7;
            lVar4 = (int64_t)iVar8;
            lVar2 = param_5 + lVar4 * 2;
            uVar5 = (uint)*(char *)(lVar4 * 3 + param_5);
            if ((((param_6 & 2) == 0) || (iVar8 < (int)param_10)) ||
               (*(char *)(param_3 + 0xbc) != '\0')) break;
            if (param_10 == param_9) {
              param_2[3] = uVar5;
              return 0;
            }
            param_2[1] = param_9;
            uVar7 = (uint64_t)param_9;
            *param_2 = *(ushort *)((int64_t)(int)param_9 * 3 + 1 + param_5) - 1;
          }
          if (((param_6 & 4) == 0) || (iVar8 < param_8)) break;
          lVar2 = param_5 + lVar6 * 2;
          if (param_8 <= (int)param_7) {
            param_2[3] = (int)*(char *)(lVar6 + lVar2);
            return 0;
          }
          param_2[1] = param_7;
          uVar7 = (uint64_t)param_7;
          *param_2 = *(ushort *)(lVar6 + 1 + lVar2) - 1;
        }
        if (iVar8 == param_4 + -1) {
          param_2[3] = uVar5;
          *(int8_t *)(param_2 + 5) = 1;
          return 0;
        }
        iVar8 = (uint)*(ushort *)(lVar4 + 4 + lVar2) - (uint)*(ushort *)(lVar4 * 3 + 1 + param_5);
        if (iVar8 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = (int)(*(char *)(lVar4 + 3 + lVar2) * 0x10000 + uVar5 * -0x10000) / iVar8;
        }
        param_2[4] = uVar3;
        uVar3 = param_2[1] + 1;
        uVar7 = (uint64_t)uVar3;
        param_2[2] = uVar5 * 0x10000;
        param_2[1] = uVar3;
      } while (*param_2 == (uint)*(ushort *)((int64_t)(int)uVar3 * 3 + 1 + param_5));
    }
    else {
      puVar1 = param_2 + 2;
      *puVar1 = *puVar1 + param_2[4];
      if (((int)*puVar1 < 0) && (param_6 == 2)) {
        param_2[2] = 0;
      }
    }
  }
  *param_2 = *param_2 + 1;
  param_2[3] = (int)*(short *)((int64_t)param_2 + 10);
  *(byte *)(param_3 + 0x3c) = *(byte *)(param_3 + 0x3c) | param_11;
  return 0;
}



uint64_t FUN_1807b5470(int64_t param_1,int64_t param_2,int64_t param_3,int param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  ushort uVar16;
  uint64_t uVar17;
  int64_t lVar18;
  uint uVar19;
  
  uVar17 = (uint64_t)*(int *)(param_2 + 0x98);
  if (*(int *)(param_2 + 0x98) < (int)(uint)*(byte *)(param_3 + 0x4b0)) {
    lVar15 = param_3 + 0x4b2;
    if (*(uint *)(param_2 + 0x94) == (uint)*(ushort *)(uVar17 * 3 + 1 + lVar15)) {
      do {
        while( true ) {
          bVar3 = *(byte *)(param_3 + 0x4af);
          uVar16 = *(ushort *)(param_1 + 0xbe6) & 8;
          iVar5 = (int)uVar17;
          lVar18 = (int64_t)iVar5;
          lVar1 = lVar15 + lVar18 * 2;
          lVar2 = param_3 + 0x4b4 + lVar18 * 2;
          lVar14 = lVar18 + lVar2;
          if ((uVar16 == 0) && ((bVar3 & 0x10) == 0)) {
            uVar11 = (uint)*(char *)(lVar1 + lVar18);
            if ((uVar11 & 1) == 0) {
              lVar13 = *(int64_t *)(param_2 + 0x28);
              uVar19 = *(int *)((int64_t)param_4 * 4 + 0x180be7840) * 0x20ab;
              uVar6 = (uint)(*(int *)((int64_t)(param_4 + ((int)uVar11 >> 1)) * 4 + 0x180be7840) *
                            0x20ab) / *(uint *)(lVar13 + 8);
              uVar7 = uVar19 / *(uint *)(lVar13 + 8);
            }
            else {
              lVar13 = (int64_t)(((int)uVar11 >> 1) + param_4);
              uVar7 = *(uint *)(*(int64_t *)(param_2 + 0x28) + 8);
              uVar19 = *(int *)((int64_t)param_4 * 4 + 0x180be7840) * 0x20ab;
              uVar6 = (int)((uint)(*(int *)(lVar13 * 4 + 0x180be7840) * 0x20ab) / uVar7 +
                           (uint)(*(int *)(lVar13 * 4 + 0x180be7844) * 0x20ab) / uVar7) / 2;
              uVar7 = uVar19 / uVar7;
              lVar13 = *(int64_t *)(param_2 + 0x28);
            }
            uVar8 = (uint)*(char *)(lVar14 + 1);
            iVar12 = uVar7 - uVar6;
            iVar9 = (int)uVar8 >> 1;
            if ((uVar8 & 1) == 0) {
              uVar6 = (uint)(*(int *)((int64_t)(param_4 + iVar9) * 4 + 0x180be7840) * 0x20ab) /
                      *(uint *)(lVar13 + 8);
              uVar7 = *(uint *)(lVar13 + 8);
            }
            else {
              uVar7 = *(uint *)(lVar13 + 8);
              lVar14 = (int64_t)(iVar9 + param_4);
              uVar6 = (int)((uint)(*(int *)(lVar14 * 4 + 0x180be7840) * 0x20ab) / uVar7 +
                           (uint)(*(int *)(lVar14 * 4 + 0x180be7844) * 0x20ab) / uVar7) / 2;
            }
            iVar9 = uVar19 / uVar7 - uVar6;
          }
          else {
            uVar11 = (uint)*(char *)(lVar1 + lVar18);
            iVar12 = uVar11 << 5;
            iVar9 = (int)*(char *)(lVar14 + 1) << 5;
          }
          cVar10 = (char)uVar11;
          if ((((bVar3 & 2) == 0) || (iVar5 < (int)(uint)*(byte *)(param_3 + 0x506))) ||
             (*(char *)(param_2 + 0xbc) != '\0')) break;
          bVar4 = *(byte *)(param_3 + 0x505);
          if (*(byte *)(param_3 + 0x506) == bVar4) {
            if ((uVar16 == 0) && ((bVar3 & 0x10) == 0)) {
LAB_1807b57c3:
              if ((uVar11 & 1) == 0) {
                uVar11 = *(uint *)(*(int64_t *)(param_2 + 0x28) + 8);
                iVar5 = (uint)(*(int *)((int64_t)param_4 * 4 + 0x180be7840) * 0x20ab) / uVar11 -
                        (uint)(*(int *)((int64_t)(((int)cVar10 >> 1) + param_4) * 4 + 0x180be7840)
                              * 0x20ab) / uVar11;
              }
              else {
                lVar15 = (int64_t)(((int)*(char *)(lVar15 + (int64_t)iVar5 * 3) >> 1) + param_4);
                uVar11 = *(uint *)(*(int64_t *)(param_2 + 0x28) + 8);
                iVar5 = (uint)(*(int *)((int64_t)param_4 * 4 + 0x180be7840) * 0x20ab) / uVar11 -
                        (int)((uint)(*(int *)(lVar15 * 4 + 0x180be7840) * 0x20ab) / uVar11 +
                             (uint)(*(int *)(lVar15 * 4 + 0x180be7844) * 0x20ab) / uVar11) / 2;
              }
            }
            else {
              iVar5 = (int)cVar10 << 5;
            }
            goto LAB_1807b54e9;
          }
LAB_1807b56df:
          uVar17 = (uint64_t)bVar4;
          *(uint *)(param_2 + 0x98) = (uint)bVar4;
          *(uint *)(param_2 + 0x94) = *(ushort *)(uVar17 * 3 + 1 + lVar15) - 1;
        }
        if (((bVar3 & 4) != 0) && ((int)(uint)*(byte *)(param_3 + 0x504) <= iVar5)) {
          bVar4 = *(byte *)(param_3 + 0x503);
          if (bVar4 < *(byte *)(param_3 + 0x504)) goto LAB_1807b56df;
          if ((uVar16 == 0) && ((bVar3 & 0x10) == 0)) goto LAB_1807b57c3;
          iVar5 = (int)*(char *)(lVar15 + (uint64_t)bVar4 * 3) << 5;
          goto LAB_1807b54e9;
        }
        if (iVar5 == *(byte *)(param_3 + 0x4b0) - 1) {
          if ((uVar16 == 0) && ((bVar3 & 0x10) == 0)) {
            if ((uVar11 & 1) != 0) {
              lVar15 = (int64_t)(((int)*(char *)(lVar15 + lVar18 * 3) >> 1) + param_4);
              uVar11 = *(uint *)(*(int64_t *)(param_2 + 0x28) + 8);
              *(uint *)(param_2 + 0xa0) =
                   (uint)(*(int *)((int64_t)param_4 * 4 + 0x180be7840) * 0x20ab) / uVar11 -
                   (int)((uint)(*(int *)(lVar15 * 4 + 0x180be7840) * 0x20ab) / uVar11 +
                        (uint)(*(int *)(lVar15 * 4 + 0x180be7844) * 0x20ab) / uVar11) / 2;
              *(int8_t *)(param_2 + 0xa8) = 1;
              return 0;
            }
            uVar11 = *(uint *)(*(int64_t *)(param_2 + 0x28) + 8);
            *(uint *)(param_2 + 0xa0) =
                 (uint)(*(int *)((int64_t)param_4 * 4 + 0x180be7840) * 0x20ab) / uVar11 -
                 (uint)(*(int *)((int64_t)(((int)cVar10 >> 1) + param_4) * 4 + 0x180be7840) *
                       0x20ab) / uVar11;
            *(int8_t *)(param_2 + 0xa8) = 1;
            return 0;
          }
          *(int *)(param_2 + 0xa0) = (int)cVar10 << 5;
          *(int8_t *)(param_2 + 0xa8) = 1;
          return 0;
        }
        iVar5 = (uint)*(ushort *)(lVar18 + 2 + lVar2) - (uint)*(ushort *)(lVar1 + 1 + lVar18);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (iVar9 * 0x10000 + iVar12 * -0x10000) / iVar5;
        }
        *(int *)(param_2 + 0xa4) = iVar5;
        *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
        uVar17 = (uint64_t)*(int *)(param_2 + 0x98);
        *(int *)(param_2 + 0x9c) = iVar12 * 0x10000;
      } while (*(uint *)(param_2 + 0x94) == (uint)*(ushort *)(uVar17 * 3 + 1 + lVar15));
    }
    else {
      *(int *)(param_2 + 0x9c) = *(int *)(param_2 + 0x9c) + *(int *)(param_2 + 0xa4);
    }
  }
  if ((*(byte *)(param_3 + 0x4af) & 0x10) == 0) {
    *(byte *)(param_2 + 0x3c) = *(byte *)(param_2 + 0x3c) | 1;
  }
  iVar5 = (int)*(short *)(param_2 + 0x9e);
  *(int *)(param_2 + 0x94) = *(int *)(param_2 + 0x94) + 1;
LAB_1807b54e9:
  *(int *)(param_2 + 0xa0) = iVar5;
  return 0;
}



uint64_t FUN_1807b5960(int64_t *param_1,char *param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  byte bVar5;
  char cVar6;
  int32_t uVar7;
  int iVar8;
  byte bVar9;
  
  cVar2 = param_2[2];
  lVar3 = param_1[1];
  bVar9 = cVar2 - 1;
  lVar4 = *param_1;
  if (param_3 != '\0') {
    if (bVar9 < 0x41) {
      *(uint *)((int64_t)param_1 + 0xdc) = (uint)bVar9;
    }
    bVar5 = cVar2 + 0xbe;
    if (bVar5 < 10) {
      if (bVar5 == 0) {
        bVar5 = *(byte *)((int64_t)param_1 + 0x12f);
      }
      else {
        *(byte *)((int64_t)param_1 + 0x12f) = bVar5;
      }
      *(int *)((int64_t)param_1 + 0xdc) = *(int *)((int64_t)param_1 + 0xdc) + (uint)bVar5;
      iVar8 = *(int *)((int64_t)param_1 + 0xdc);
      if (0x40 < iVar8) {
        iVar8 = 0x40;
      }
      *(int *)((int64_t)param_1 + 0xdc) = iVar8;
    }
    bVar5 = cVar2 + 0xb4;
    if (bVar5 < 10) {
      if (bVar5 == 0) {
        bVar5 = *(byte *)((int64_t)param_1 + 0x12f);
      }
      else {
        *(byte *)((int64_t)param_1 + 0x12f) = bVar5;
      }
      piVar1 = (int *)((int64_t)param_1 + 0xdc);
      *piVar1 = *piVar1 - (uint)bVar5;
      uVar7 = *(int32_t *)((int64_t)param_1 + 0xdc);
      if (*piVar1 < 0) {
        uVar7 = 0;
      }
      *(int32_t *)((int64_t)param_1 + 0xdc) = uVar7;
    }
    if ((byte)(cVar2 + 0x7fU) < 0x41) {
      iVar8 = bVar9 - 0x80;
      *(int *)(param_1 + 0x1c) = iVar8;
      *(byte *)(lVar3 + 0x3c) = *(byte *)(lVar3 + 0x3c) | 4;
      *(int *)(lVar3 + 0x48) = iVar8;
    }
  }
  bVar9 = cVar2 + 0xaa;
  if (bVar9 < 10) {
    if (bVar9 != 0) {
      *(byte *)((int64_t)param_1 + 0x12f) = bVar9;
    }
    if (param_3 == '\0') {
      *(int *)((int64_t)param_1 + 0xdc) =
           *(int *)((int64_t)param_1 + 0xdc) + (uint)*(byte *)((int64_t)param_1 + 0x12f);
      iVar8 = *(int *)((int64_t)param_1 + 0xdc);
      if (0x40 < iVar8) {
        iVar8 = 0x40;
      }
      *(int *)((int64_t)param_1 + 0xdc) = iVar8;
    }
  }
  bVar9 = cVar2 + 0xa0;
  if (bVar9 < 10) {
    if (bVar9 != 0) {
      *(byte *)((int64_t)param_1 + 0x12f) = bVar9;
    }
    if (param_3 == '\0') {
      piVar1 = (int *)((int64_t)param_1 + 0xdc);
      *piVar1 = *piVar1 - (uint)*(byte *)((int64_t)param_1 + 0x12f);
      uVar7 = *(int32_t *)((int64_t)param_1 + 0xdc);
      if (*piVar1 < 0) {
        uVar7 = 0;
      }
      *(int32_t *)((int64_t)param_1 + 0xdc) = uVar7;
    }
  }
  bVar9 = cVar2 + 0x96;
  if (bVar9 < 10) {
    if (bVar9 == 0) {
      bVar9 = *(byte *)((int64_t)param_1 + 0xf4);
    }
    else {
      *(byte *)((int64_t)param_1 + 0xf4) = bVar9;
    }
    *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + (uint)bVar9 * 0x10;
  }
  bVar9 = cVar2 + 0x8c;
  if (bVar9 < 10) {
    if (bVar9 == 0) {
      bVar9 = *(byte *)((int64_t)param_1 + 0xf4);
    }
    else {
      *(byte *)((int64_t)param_1 + 0xf4) = bVar9;
    }
    *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + (uint)bVar9 * -0x10;
    if (*(int *)(lVar3 + 0x40) < 1) {
      bVar9 = *(byte *)(lVar3 + 0x3c) | 0x20;
    }
    else {
      bVar9 = *(byte *)(lVar3 + 0x3c) | 1;
    }
    *(byte *)(lVar3 + 0x3c) = bVar9;
  }
  if ((byte)(cVar2 + 0x3eU) < 10) {
    if (*(int *)(lVar4 + 0xbec) == 0) {
      if ((char)(cVar2 + '>') != '\0') {
        cVar6 = (cVar2 + '>') * '\x10';
        if ((*(byte *)(lVar4 + 0xbe6) & 0x20) == 0) {
          *(char *)((int64_t)param_1 + 0xf4) = cVar6;
        }
        else {
          *(char *)((int64_t)param_1 + 0x104) = cVar6;
        }
      }
      *(int32_t *)(param_1 + 0x20) = *(int32_t *)((int64_t)param_1 + 0xd4);
      if (*param_2 != '\0') {
        *(int8_t *)((int64_t)param_1 + 0x105) = 0;
      }
    }
    else {
      func_0x0001807b5200(param_1);
    }
  }
  if ((byte)(cVar2 + 0x34U) < 10) {
    if (*(int *)(lVar4 + 0xbec) == 0) {
      if ((char)(cVar2 + '4') != '\0') {
        *(char *)(param_1 + 0x21) = cVar2 + '4';
        *(int8_t *)((int64_t)param_1 + 0x109) = 8;
      }
      if (*(char *)(lVar3 + 0x3b) != '\0') {
        return 0;
      }
      if ((*(byte *)(lVar4 + 0xbe6) & 0x10) != 0) {
        return 0;
      }
      cVar2 = *(char *)((int64_t)param_1 + 0x109);
    }
    else {
      if (*(char *)(lVar3 + 0x3b) != '\0') {
        return 0;
      }
      cVar2 = *(char *)((int64_t)param_1 + 0x109);
    }
    if (cVar2 == '\x15') {
      func_0x0001807b20e0();
    }
    else {
      func_0x0001807b8df0(param_1);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807b5bc0(int64_t param_1,int64_t *param_2)

{
  ushort uVar1;
  int64_t lVar2;
  
  uVar1 = *(ushort *)*param_2;
  *param_2 = (int64_t)((ushort *)*param_2 + 1);
  lVar2 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),(uint)uVar1 * 2,&processed_var_5648_ptr,0xc0,
                        0,0,1);
  *(int64_t *)(param_1 + 0x4428) = lVar2;
  if (lVar2 == 0) {
    return 0x26;
  }
                    // WARNING: Subroutine does not return
  memcpy(lVar2,*param_2,uVar1);
}






