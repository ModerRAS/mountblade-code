#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part294.c - 3 个函数

// 函数: void FUN_180424710(uint64_t param_1)
void FUN_180424710(uint64_t param_1)

{
  int8_t auStack_e8 [32];
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_e8;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
                    // WARNING: Subroutine does not return
  memset(param_1,0,0x400);
}



uint FUN_180424980(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = *(uint *)(param_1 + 0x14);
  uVar5 = (int)uVar3 >> 1 & 0x5555U | (uVar3 & 0x5555) * 2;
  uVar5 = uVar5 >> 2 & 0x3333 | (uVar5 & 0x3333) << 2;
  iVar6 = 10;
  uVar5 = uVar5 >> 4 & 0xf0f | (uVar5 & 0xf0f) << 4;
  uVar5 = (uVar5 & 0xff) << 8 | uVar5 >> 8;
  piVar4 = (int *)(param_2 + 0x448);
  if (*piVar4 <= (int)uVar5) {
    do {
      iVar7 = iVar6;
      iVar6 = iVar7 + 1;
      piVar4 = piVar4 + 1;
    } while (*piVar4 <= (int)uVar5);
    if (iVar6 == 0x10) {
      return iVar7 - 0x10;
    }
  }
  uVar1 = *(ushort *)(param_2 + 0x400 + (longlong)iVar6 * 2);
  uVar2 = *(ushort *)(param_2 + 0x464 + (longlong)iVar6 * 2);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - iVar6;
  *(uint *)(param_1 + 0x14) = uVar3 >> ((byte)iVar6 & 0x1f);
  return (uint)*(ushort *)
                (param_2 + 0x5a4 +
                (longlong)
                (int)((uint)uVar2 + (((int)uVar5 >> (0x10 - (byte)iVar6 & 0x1f)) - (uint)uVar1)) * 2
                );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180424a70(longlong param_1,uint64_t param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  *(uint64_t *)(param_1 + 0x18) = param_2;
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = (int)param_2 - *(int *)(param_1 + 0x20);
    for (iVar3 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20); iVar3 < iVar2 + param_3;
        iVar3 = iVar3 * 2) {
    }
    lVar1 = FUN_18062b680(system_memory_pool_ptr,*(uint64_t *)(param_1 + 0x20),(longlong)iVar3,
                          CONCAT71((uint7)(uint3)((uint)param_3 >> 8),0x22));
    if (lVar1 != 0) {
      *(longlong *)(param_1 + 0x20) = lVar1;
      *(longlong *)(param_1 + 0x18) = iVar2 + lVar1;
      *(longlong *)(param_1 + 0x28) = lVar1 + iVar3;
      return 1;
    }
  }
  return 0;
}



uint64_t FUN_180424b10(uint64_t *param_1)

{
  int8_t uVar1;
  ushort uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  int8_t *puVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int8_t *puVar12;
  uint uVar13;
  int iVar14;
  
  puVar12 = (int8_t *)param_1[3];
  while( true ) {
    while( true ) {
      iVar10 = *(int *)(param_1 + 2);
      uVar4 = *(uint *)((longlong)param_1 + 0x14);
      if (iVar10 < 0x10) {
        do {
          pbVar3 = (byte *)*param_1;
          if (pbVar3 < (byte *)param_1[1]) {
            bVar6 = *pbVar3;
            *param_1 = pbVar3 + 1;
          }
          else {
            bVar6 = 0;
          }
          bVar7 = (byte)iVar10;
          iVar10 = iVar10 + 8;
          uVar4 = (uint)bVar6 << (bVar7 & 0x1f) | uVar4;
          *(int *)(param_1 + 2) = iVar10;
          *(uint *)((longlong)param_1 + 0x14) = uVar4;
        } while (iVar10 < 0x19);
      }
      uVar2 = *(ushort *)((longlong)param_1 + (ulonglong)(uVar4 & 0x1ff) * 2 + 0x34);
      if (uVar2 == 0) {
        uVar4 = FUN_180424980(param_1,(longlong)param_1 + 0x34);
      }
      else {
        *(uint *)((longlong)param_1 + 0x14) = uVar4 >> ((byte)(uVar2 >> 9) & 0x1f);
        uVar4 = uVar2 & 0x1ff;
        *(uint *)(param_1 + 2) = iVar10 - (uint)(uVar2 >> 9);
      }
      if (0xff < (int)uVar4) break;
      if ((int)uVar4 < 0) {
        return 0;
      }
      if ((int8_t *)param_1[5] <= puVar12) {
        iVar10 = FUN_180424a70(param_1,puVar12,1);
        if (iVar10 == 0) {
          return 0;
        }
        puVar12 = (int8_t *)param_1[3];
      }
      *puVar12 = (char)uVar4;
      puVar12 = puVar12 + 1;
    }
    if (uVar4 == 0x100) {
      param_1[3] = puVar12;
      return 1;
    }
    iVar10 = *(int *)(param_1 + 2);
    uVar5 = *(uint *)((longlong)param_1 + 0x14);
    iVar14 = *(int *)(&unknown_var_9772_ptr + (longlong)(int)uVar4 * 4);
    uVar4 = *(uint *)(&unknown_var_9900_ptr + (longlong)(int)uVar4 * 4);
    if (iVar14 != 0) {
      if (iVar10 < iVar14) {
        do {
          pbVar3 = (byte *)*param_1;
          if (pbVar3 < (byte *)param_1[1]) {
            bVar6 = *pbVar3;
            *param_1 = pbVar3 + 1;
          }
          else {
            bVar6 = 0;
          }
          bVar7 = (byte)iVar10;
          iVar10 = iVar10 + 8;
          uVar5 = (uint)bVar6 << (bVar7 & 0x1f) | uVar5;
          *(int *)(param_1 + 2) = iVar10;
          *(uint *)((longlong)param_1 + 0x14) = uVar5;
        } while (iVar10 < 0x19);
      }
      iVar10 = iVar10 - iVar14;
      *(int *)(param_1 + 2) = iVar10;
      uVar13 = uVar5 >> ((byte)iVar14 & 0x1f);
      *(uint *)((longlong)param_1 + 0x14) = uVar13;
      uVar4 = uVar4 + ((1 << ((byte)iVar14 & 0x1f)) - 1U & uVar5);
      uVar5 = uVar13;
    }
    if (iVar10 < 0x10) {
      do {
        pbVar3 = (byte *)*param_1;
        if (pbVar3 < (byte *)param_1[1]) {
          bVar6 = *pbVar3;
          *param_1 = pbVar3 + 1;
        }
        else {
          bVar6 = 0;
        }
        bVar7 = (byte)iVar10;
        iVar10 = iVar10 + 8;
        uVar5 = (uint)bVar6 << (bVar7 & 0x1f) | uVar5;
        *(int *)(param_1 + 2) = iVar10;
        *(uint *)((longlong)param_1 + 0x14) = uVar5;
      } while (iVar10 < 0x19);
    }
    uVar2 = *(ushort *)((longlong)param_1 + (ulonglong)(uVar5 & 0x1ff) * 2 + 0x818);
    if (uVar2 == 0) {
      uVar5 = FUN_180424980(param_1,param_1 + 0x103);
    }
    else {
      *(uint *)((longlong)param_1 + 0x14) = uVar5 >> ((byte)(uVar2 >> 9) & 0x1f);
      uVar5 = uVar2 & 0x1ff;
      *(uint *)(param_1 + 2) = iVar10 - (uint)(uVar2 >> 9);
    }
    if ((int)uVar5 < 0) break;
    iVar10 = *(int *)(&unknown_var_1376_ptr + (longlong)(int)uVar5 * 4);
    iVar14 = *(int *)(&unknown_var_672_ptr + (longlong)(int)uVar5 * 4);
    if (iVar10 != 0) {
      iVar11 = *(int *)(param_1 + 2);
      uVar5 = *(uint *)((longlong)param_1 + 0x14);
      if (iVar11 < iVar10) {
        do {
          pbVar3 = (byte *)*param_1;
          if (pbVar3 < (byte *)param_1[1]) {
            bVar6 = *pbVar3;
            *param_1 = pbVar3 + 1;
          }
          else {
            bVar6 = 0;
          }
          bVar7 = (byte)iVar11;
          iVar11 = iVar11 + 8;
          uVar5 = (uint)bVar6 << (bVar7 & 0x1f) | uVar5;
          *(int *)(param_1 + 2) = iVar11;
          *(uint *)((longlong)param_1 + 0x14) = uVar5;
        } while (iVar11 < 0x19);
      }
      *(int *)(param_1 + 2) = iVar11 - iVar10;
      *(uint *)((longlong)param_1 + 0x14) = uVar5 >> ((byte)iVar10 & 0x1f);
      iVar14 = iVar14 + ((1 << ((byte)iVar10 & 0x1f)) - 1U & uVar5);
    }
    if ((longlong)puVar12 - param_1[4] < (longlong)iVar14) {
      return 0;
    }
    if ((int8_t *)param_1[5] < puVar12 + (int)uVar4) {
      iVar10 = FUN_180424a70(param_1,puVar12,uVar4);
      if (iVar10 == 0) {
        return 0;
      }
      puVar12 = (int8_t *)param_1[3];
    }
    puVar8 = puVar12 + -(longlong)iVar14;
    if (iVar14 == 1) {
      if (uVar4 != 0) {
        uVar1 = *puVar8;
        puVar8 = puVar12;
        for (uVar9 = (ulonglong)uVar4; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar8 = uVar1;
          puVar8 = puVar8 + 1;
        }
        puVar12 = puVar12 + uVar4;
      }
    }
    else {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar12 = uVar1;
        puVar12 = puVar12 + 1;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180424e10(uint64_t *param_1)
void FUN_180424e10(uint64_t *param_1)

{
  int iVar1;
  ushort uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int8_t uVar12;
  uint uVar13;
  int iVar14;
  int8_t auStack_a38 [32];
  ushort auStack_a18 [1016];
  byte abStack_228 [31];
  int8_t auStack_209 [465];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_a38;
  iVar8 = *(int *)(param_1 + 2);
  uVar4 = *(uint *)((longlong)param_1 + 0x14);
  if (iVar8 < 5) {
    do {
      pbVar3 = (byte *)*param_1;
      if (pbVar3 < (byte *)param_1[1]) {
        bVar7 = *pbVar3;
        *param_1 = pbVar3 + 1;
      }
      else {
        bVar7 = 0;
      }
      bVar6 = (byte)iVar8;
      iVar8 = iVar8 + 8;
      uVar4 = (uint)bVar7 << (bVar6 & 0x1f) | uVar4;
      *(int *)(param_1 + 2) = iVar8;
      *(uint *)((longlong)param_1 + 0x14) = uVar4;
    } while (iVar8 < 0x19);
  }
  iVar8 = iVar8 + -5;
  uVar13 = uVar4 >> 5;
  *(uint *)((longlong)param_1 + 0x14) = uVar13;
  *(int *)(param_1 + 2) = iVar8;
  uVar4 = (uVar4 & 0x1f) + 0x101;
  if (iVar8 < 5) {
    do {
      pbVar3 = (byte *)*param_1;
      if (pbVar3 < (byte *)param_1[1]) {
        uVar5 = (uint)*pbVar3;
        *param_1 = pbVar3 + 1;
      }
      else {
        uVar5 = 0;
      }
      bVar7 = (byte)iVar8;
      iVar8 = iVar8 + 8;
      uVar13 = uVar5 << (bVar7 & 0x1f) | uVar13;
      *(int *)(param_1 + 2) = iVar8;
      *(uint *)((longlong)param_1 + 0x14) = uVar13;
    } while (iVar8 < 0x19);
  }
  iVar8 = iVar8 + -5;
  uVar5 = uVar13 >> 5;
  iVar14 = (uVar13 & 0x1f) + 1;
  *(uint *)((longlong)param_1 + 0x14) = uVar5;
  *(int *)(param_1 + 2) = iVar8;
  if (iVar8 < 4) {
    do {
      pbVar3 = (byte *)*param_1;
      if (pbVar3 < (byte *)param_1[1]) {
        bVar7 = *pbVar3;
        *param_1 = pbVar3 + 1;
      }
      else {
        bVar7 = 0;
      }
      bVar6 = (byte)iVar8;
      iVar8 = iVar8 + 8;
      uVar5 = (uint)bVar7 << (bVar6 & 0x1f) | uVar5;
      *(int *)(param_1 + 2) = iVar8;
      *(uint *)((longlong)param_1 + 0x14) = uVar5;
    } while (iVar8 < 0x19);
  }
  abStack_228[0] = 0;
  abStack_228[1] = 0;
  abStack_228[2] = 0;
  abStack_228[3] = 0;
  abStack_228[4] = 0;
  abStack_228[5] = 0;
  abStack_228[6] = 0;
  abStack_228[7] = 0;
  uVar9 = uVar5 >> 4;
  iVar1 = iVar14 + uVar4;
  iVar8 = iVar8 + -4;
  *(uint *)((longlong)param_1 + 0x14) = uVar9;
  *(int *)(param_1 + 2) = iVar8;
  iVar10 = 0;
  abStack_228[8] = 0;
  abStack_228[9] = 0;
  abStack_228[10] = 0;
  abStack_228[0xb] = 0;
  abStack_228[0xc] = 0;
  abStack_228[0xd] = 0;
  abStack_228[0xe] = 0;
  abStack_228[0xf] = 0;
  uVar13 = (uVar5 & 0xf) + 4;
  abStack_228[0x10] = 0;
  abStack_228[0x11] = 0;
  abStack_228[0x12] = 0;
  if (uVar13 != 0) {
    lVar11 = 0;
    do {
      uVar5 = uVar9;
      if (iVar8 < 3) {
        do {
          pbVar3 = (byte *)*param_1;
          if (pbVar3 < (byte *)param_1[1]) {
            bVar7 = *pbVar3;
            *param_1 = pbVar3 + 1;
          }
          else {
            bVar7 = 0;
          }
          bVar6 = (byte)iVar8;
          iVar8 = iVar8 + 8;
          uVar9 = (uint)bVar7 << (bVar6 & 0x1f) | uVar9;
          *(int *)(param_1 + 2) = iVar8;
          *(uint *)((longlong)param_1 + 0x14) = uVar9;
          uVar5 = uVar9;
        } while (iVar8 < 0x19);
      }
      bVar7 = (&unknown_var_6288_ptr)[lVar11];
      iVar8 = iVar8 + -3;
      *(int *)(param_1 + 2) = iVar8;
      uVar9 = uVar5 >> 3;
      lVar11 = lVar11 + 1;
      *(uint *)((longlong)param_1 + 0x14) = uVar9;
      abStack_228[bVar7] = (byte)uVar5 & 7;
    } while (lVar11 < (longlong)(ulonglong)uVar13);
  }
  iVar8 = FUN_180424710(auStack_a18,abStack_228,0x13);
  if (iVar8 != 0) {
    do {
      iVar8 = *(int *)(param_1 + 2);
      uVar13 = *(uint *)((longlong)param_1 + 0x14);
      if (iVar8 < 0x10) {
        do {
          pbVar3 = (byte *)*param_1;
          if (pbVar3 < (byte *)param_1[1]) {
            bVar7 = *pbVar3;
            *param_1 = pbVar3 + 1;
          }
          else {
            bVar7 = 0;
          }
          bVar6 = (byte)iVar8;
          iVar8 = iVar8 + 8;
          uVar13 = uVar13 | (uint)bVar7 << (bVar6 & 0x1f);
          *(int *)(param_1 + 2) = iVar8;
          *(uint *)((longlong)param_1 + 0x14) = uVar13;
        } while (iVar8 < 0x19);
      }
      uVar2 = auStack_a18[uVar13 & 0x1ff];
      if (uVar2 == 0) {
        uVar13 = FUN_180424980(param_1);
      }
      else {
        *(uint *)((longlong)param_1 + 0x14) = uVar13 >> ((byte)(uVar2 >> 9) & 0x1f);
        uVar13 = uVar2 & 0x1ff;
        *(uint *)(param_1 + 2) = iVar8 - (uint)(uVar2 >> 9);
      }
      if (0x12 < uVar13) goto LAB_180425272;
      if (0xf < (int)uVar13) {
        iVar8 = *(int *)(param_1 + 2);
        uVar12 = 0;
        if (uVar13 == 0x10) {
          if (iVar8 < 2) {
            uVar4 = *(uint *)((longlong)param_1 + 0x14);
            do {
              pbVar3 = (byte *)*param_1;
              if (pbVar3 < (byte *)param_1[1]) {
                uVar13 = (uint)*pbVar3;
                *param_1 = pbVar3 + 1;
              }
              else {
                uVar13 = 0;
              }
              bVar7 = (byte)iVar8;
              iVar8 = iVar8 + 8;
              uVar4 = uVar13 << (bVar7 & 0x1f) | uVar4;
              *(int *)(param_1 + 2) = iVar8;
              *(uint *)((longlong)param_1 + 0x14) = uVar4;
            } while (iVar8 < 0x19);
          }
          else {
            uVar4 = *(uint *)((longlong)param_1 + 0x14);
          }
          iVar14 = (uVar4 & 3) + 3;
          *(uint *)((longlong)param_1 + 0x14) = uVar4 >> 2;
          *(int *)(param_1 + 2) = iVar8 + -2;
          if (iVar10 == 0) goto LAB_180425272;
          uVar12 = auStack_209[iVar10];
        }
        else {
          if (uVar13 == 0x11) {
            if (iVar8 < 3) {
              uVar4 = *(uint *)((longlong)param_1 + 0x14);
              do {
                pbVar3 = (byte *)*param_1;
                if (pbVar3 < (byte *)param_1[1]) {
                  uVar13 = (uint)*pbVar3;
                  *param_1 = pbVar3 + 1;
                }
                else {
                  uVar13 = 0;
                }
                bVar7 = (byte)iVar8;
                iVar8 = iVar8 + 8;
                uVar4 = uVar13 << (bVar7 & 0x1f) | uVar4;
                *(int *)(param_1 + 2) = iVar8;
                *(uint *)((longlong)param_1 + 0x14) = uVar4;
              } while (iVar8 < 0x19);
            }
            else {
              uVar4 = *(uint *)((longlong)param_1 + 0x14);
            }
            *(uint *)((longlong)param_1 + 0x14) = uVar4 >> 3;
            iVar14 = (uVar4 & 7) + 3;
            iVar8 = iVar8 + -3;
          }
          else {
            if (iVar8 < 7) {
              uVar4 = *(uint *)((longlong)param_1 + 0x14);
              do {
                pbVar3 = (byte *)*param_1;
                if (pbVar3 < (byte *)param_1[1]) {
                  uVar13 = (uint)*pbVar3;
                  *param_1 = pbVar3 + 1;
                }
                else {
                  uVar13 = 0;
                }
                bVar7 = (byte)iVar8;
                iVar8 = iVar8 + 8;
                uVar4 = uVar13 << (bVar7 & 0x1f) | uVar4;
                *(int *)(param_1 + 2) = iVar8;
                *(uint *)((longlong)param_1 + 0x14) = uVar4;
              } while (iVar8 < 0x19);
            }
            else {
              uVar4 = *(uint *)((longlong)param_1 + 0x14);
            }
            *(uint *)((longlong)param_1 + 0x14) = uVar4 >> 7;
            iVar14 = (uVar4 & 0x7f) + 0xb;
            iVar8 = iVar8 + -7;
          }
          *(int *)(param_1 + 2) = iVar8;
        }
        if (iVar14 <= iVar1 - iVar10) {
                    // WARNING: Subroutine does not return
          memset(auStack_209 + (longlong)iVar10 + 1,uVar12,iVar14);
        }
        goto LAB_180425272;
      }
      auStack_209[(longlong)iVar10 + 1] = (char)uVar13;
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar1);
    if ((iVar10 == iVar1) &&
       (iVar8 = FUN_180424710((longlong)param_1 + 0x34,auStack_209 + 1,uVar4), iVar8 != 0)) {
      FUN_180424710(param_1 + 0x103,auStack_209 + (ulonglong)uVar4 + 1,iVar14);
    }
  }
LAB_180425272:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_a38);
}





// 函数: void FUN_180424e35(longlong param_1)
void FUN_180424e35(longlong param_1)

{
  int iVar1;
  ushort uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint64_t *unaff_RBX;
  int iVar10;
  longlong lVar11;
  int8_t uVar12;
  uint uVar13;
  int iVar14;
  ushort auStackX_20 [4];
  ulonglong in_stack_00000a00;
  
  iVar8 = *(int *)(param_1 + 0x10);
  uVar4 = *(uint *)((longlong)unaff_RBX + 0x14);
  if (iVar8 < 5) {
    do {
      pbVar3 = (byte *)*unaff_RBX;
      if (pbVar3 < (byte *)unaff_RBX[1]) {
        bVar7 = *pbVar3;
        *unaff_RBX = pbVar3 + 1;
      }
      else {
        bVar7 = 0;
      }
      bVar6 = (byte)iVar8;
      iVar8 = iVar8 + 8;
      uVar4 = (uint)bVar7 << (bVar6 & 0x1f) | uVar4;
      *(int *)(unaff_RBX + 2) = iVar8;
      *(uint *)((longlong)unaff_RBX + 0x14) = uVar4;
    } while (iVar8 < 0x19);
  }
  iVar8 = iVar8 + -5;
  uVar13 = uVar4 >> 5;
  *(uint *)((longlong)unaff_RBX + 0x14) = uVar13;
  *(int *)(unaff_RBX + 2) = iVar8;
  uVar4 = (uVar4 & 0x1f) + 0x101;
  if (iVar8 < 5) {
    do {
      pbVar3 = (byte *)*unaff_RBX;
      if (pbVar3 < (byte *)unaff_RBX[1]) {
        uVar5 = (uint)*pbVar3;
        *unaff_RBX = pbVar3 + 1;
      }
      else {
        uVar5 = 0;
      }
      bVar7 = (byte)iVar8;
      iVar8 = iVar8 + 8;
      uVar13 = uVar5 << (bVar7 & 0x1f) | uVar13;
      *(int *)(unaff_RBX + 2) = iVar8;
      *(uint *)((longlong)unaff_RBX + 0x14) = uVar13;
    } while (iVar8 < 0x19);
  }
  iVar8 = iVar8 + -5;
  uVar5 = uVar13 >> 5;
  iVar14 = (uVar13 & 0x1f) + 1;
  *(uint *)((longlong)unaff_RBX + 0x14) = uVar5;
  *(int *)(unaff_RBX + 2) = iVar8;
  if (iVar8 < 4) {
    do {
      pbVar3 = (byte *)*unaff_RBX;
      if (pbVar3 < (byte *)unaff_RBX[1]) {
        bVar7 = *pbVar3;
        *unaff_RBX = pbVar3 + 1;
      }
      else {
        bVar7 = 0;
      }
      bVar6 = (byte)iVar8;
      iVar8 = iVar8 + 8;
      uVar5 = (uint)bVar7 << (bVar6 & 0x1f) | uVar5;
      *(int *)(unaff_RBX + 2) = iVar8;
      *(uint *)((longlong)unaff_RBX + 0x14) = uVar5;
    } while (iVar8 < 0x19);
  }
  uVar9 = uVar5 >> 4;
  iVar1 = iVar14 + uVar4;
  iVar8 = iVar8 + -4;
  *(uint *)((longlong)unaff_RBX + 0x14) = uVar9;
  *(int *)(unaff_RBX + 2) = iVar8;
  iVar10 = 0;
  uVar13 = (uVar5 & 0xf) + 4;
  if (uVar13 != 0) {
    lVar11 = 0;
    do {
      uVar5 = uVar9;
      if (iVar8 < 3) {
        do {
          pbVar3 = (byte *)*unaff_RBX;
          if (pbVar3 < (byte *)unaff_RBX[1]) {
            bVar7 = *pbVar3;
            *unaff_RBX = pbVar3 + 1;
          }
          else {
            bVar7 = 0;
          }
          bVar6 = (byte)iVar8;
          iVar8 = iVar8 + 8;
          uVar9 = (uint)bVar7 << (bVar6 & 0x1f) | uVar9;
          *(int *)(unaff_RBX + 2) = iVar8;
          *(uint *)((longlong)unaff_RBX + 0x14) = uVar9;
          uVar5 = uVar9;
        } while (iVar8 < 0x19);
      }
      bVar7 = (&unknown_var_6288_ptr)[lVar11];
      iVar8 = iVar8 + -3;
      *(int *)(unaff_RBX + 2) = iVar8;
      uVar9 = uVar5 >> 3;
      lVar11 = lVar11 + 1;
      *(uint *)((longlong)unaff_RBX + 0x14) = uVar9;
      (&stack0x00000810)[bVar7] = (byte)uVar5 & 7;
    } while (lVar11 < (longlong)(ulonglong)uVar13);
  }
  iVar8 = FUN_180424710(auStackX_20,&stack0x00000810,0x13);
  if (iVar8 != 0) {
    do {
      iVar8 = *(int *)(unaff_RBX + 2);
      uVar13 = *(uint *)((longlong)unaff_RBX + 0x14);
      if (iVar8 < 0x10) {
        do {
          pbVar3 = (byte *)*unaff_RBX;
          if (pbVar3 < (byte *)unaff_RBX[1]) {
            bVar7 = *pbVar3;
            *unaff_RBX = pbVar3 + 1;
          }
          else {
            bVar7 = 0;
          }
          bVar6 = (byte)iVar8;
          iVar8 = iVar8 + 8;
          uVar13 = uVar13 | (uint)bVar7 << (bVar6 & 0x1f);
          *(int *)(unaff_RBX + 2) = iVar8;
          *(uint *)((longlong)unaff_RBX + 0x14) = uVar13;
        } while (iVar8 < 0x19);
      }
      uVar2 = auStackX_20[uVar13 & 0x1ff];
      if (uVar2 == 0) {
        uVar13 = FUN_180424980();
      }
      else {
        *(uint *)((longlong)unaff_RBX + 0x14) = uVar13 >> ((byte)(uVar2 >> 9) & 0x1f);
        uVar13 = uVar2 & 0x1ff;
        *(uint *)(unaff_RBX + 2) = iVar8 - (uint)(uVar2 >> 9);
      }
      if (0x12 < uVar13) goto LAB_180425272;
      if (0xf < (int)uVar13) {
        iVar8 = *(int *)(unaff_RBX + 2);
        uVar12 = 0;
        if (uVar13 == 0x10) {
          if (iVar8 < 2) {
            uVar4 = *(uint *)((longlong)unaff_RBX + 0x14);
            do {
              pbVar3 = (byte *)*unaff_RBX;
              if (pbVar3 < (byte *)unaff_RBX[1]) {
                uVar13 = (uint)*pbVar3;
                *unaff_RBX = pbVar3 + 1;
              }
              else {
                uVar13 = 0;
              }
              bVar7 = (byte)iVar8;
              iVar8 = iVar8 + 8;
              uVar4 = uVar13 << (bVar7 & 0x1f) | uVar4;
              *(int *)(unaff_RBX + 2) = iVar8;
              *(uint *)((longlong)unaff_RBX + 0x14) = uVar4;
            } while (iVar8 < 0x19);
          }
          else {
            uVar4 = *(uint *)((longlong)unaff_RBX + 0x14);
          }
          iVar14 = (uVar4 & 3) + 3;
          *(uint *)((longlong)unaff_RBX + 0x14) = uVar4 >> 2;
          *(int *)(unaff_RBX + 2) = iVar8 + -2;
          if (iVar10 == 0) goto LAB_180425272;
          uVar12 = (&stack0x0000082f)[iVar10];
        }
        else {
          if (uVar13 == 0x11) {
            if (iVar8 < 3) {
              uVar4 = *(uint *)((longlong)unaff_RBX + 0x14);
              do {
                pbVar3 = (byte *)*unaff_RBX;
                if (pbVar3 < (byte *)unaff_RBX[1]) {
                  uVar13 = (uint)*pbVar3;
                  *unaff_RBX = pbVar3 + 1;
                }
                else {
                  uVar13 = 0;
                }
                bVar7 = (byte)iVar8;
                iVar8 = iVar8 + 8;
                uVar4 = uVar13 << (bVar7 & 0x1f) | uVar4;
                *(int *)(unaff_RBX + 2) = iVar8;
                *(uint *)((longlong)unaff_RBX + 0x14) = uVar4;
              } while (iVar8 < 0x19);
            }
            else {
              uVar4 = *(uint *)((longlong)unaff_RBX + 0x14);
            }
            *(uint *)((longlong)unaff_RBX + 0x14) = uVar4 >> 3;
            iVar14 = (uVar4 & 7) + 3;
            iVar8 = iVar8 + -3;
          }
          else {
            if (iVar8 < 7) {
              uVar4 = *(uint *)((longlong)unaff_RBX + 0x14);
              do {
                pbVar3 = (byte *)*unaff_RBX;
                if (pbVar3 < (byte *)unaff_RBX[1]) {
                  uVar13 = (uint)*pbVar3;
                  *unaff_RBX = pbVar3 + 1;
                }
                else {
                  uVar13 = 0;
                }
                bVar7 = (byte)iVar8;
                iVar8 = iVar8 + 8;
                uVar4 = uVar13 << (bVar7 & 0x1f) | uVar4;
                *(int *)(unaff_RBX + 2) = iVar8;
                *(uint *)((longlong)unaff_RBX + 0x14) = uVar4;
              } while (iVar8 < 0x19);
            }
            else {
              uVar4 = *(uint *)((longlong)unaff_RBX + 0x14);
            }
            *(uint *)((longlong)unaff_RBX + 0x14) = uVar4 >> 7;
            iVar14 = (uVar4 & 0x7f) + 0xb;
            iVar8 = iVar8 + -7;
          }
          *(int *)(unaff_RBX + 2) = iVar8;
        }
        if (iVar14 <= iVar1 - iVar10) {
                    // WARNING: Subroutine does not return
          memset(&stack0x00000830 + iVar10,uVar12,iVar14);
        }
        goto LAB_180425272;
      }
      (&stack0x00000830)[iVar10] = (char)uVar13;
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar1);
    if ((iVar10 == iVar1) &&
       (iVar8 = FUN_180424710((longlong)unaff_RBX + 0x34,&stack0x00000830,uVar4), iVar8 != 0)) {
      FUN_180424710(unaff_RBX + 0x103,&stack0x00000830 + uVar4,iVar14);
    }
  }
LAB_180425272:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000a00 ^ (ulonglong)&stack0x00000000);
}





