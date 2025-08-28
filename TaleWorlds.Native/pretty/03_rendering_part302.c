#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part302.c - 6 个函数

// 函数: void FUN_18042b2e0(longlong param_1,ushort param_2)
void FUN_18042b2e0(longlong param_1,ushort param_2)

{
  int8_t *puVar1;
  int iVar2;
  int8_t *puVar3;
  int iVar4;
  
  if (-1 < *(short *)(param_1 + 0x830 + (ulonglong)param_2 * 4)) {
    FUN_18042b2e0();
  }
  if (*(int *)(param_1 + 0x4858) < *(int *)(param_1 + 0x4850)) {
    iVar4 = *(int *)(param_1 + 0x4854);
    puVar3 = (int8_t *)
             ((longlong)(*(int *)(param_1 + 0x4858) + iVar4) + *(longlong *)(param_1 + 8));
    puVar1 = (int8_t *)
             (*(longlong *)(param_1 + 0x4830) +
             (ulonglong)*(byte *)(param_1 + 0x833 + (ulonglong)param_2 * 4) * 4);
    if (0x7f < (byte)puVar1[3]) {
      *puVar3 = puVar1[2];
      puVar3[1] = puVar1[1];
      puVar3[2] = *puVar1;
      puVar3[3] = puVar1[3];
      iVar4 = *(int *)(param_1 + 0x4854);
    }
    *(int *)(param_1 + 0x4854) = iVar4 + 4;
    if (*(int *)(param_1 + 0x484c) <= iVar4 + 4) {
      *(int32_t *)(param_1 + 0x4854) = *(int32_t *)(param_1 + 0x4844);
      *(int *)(param_1 + 0x4858) = *(int *)(param_1 + 0x4858) + *(int *)(param_1 + 0x483c);
      if (*(int *)(param_1 + 0x4850) <= *(int *)(param_1 + 0x4858)) {
        iVar4 = *(int *)(param_1 + 0x4838);
        do {
          if (iVar4 < 1) {
            return;
          }
          iVar2 = *(int *)(param_1 + 0x485c) << ((byte)iVar4 & 0x1f);
          *(int *)(param_1 + 0x483c) = iVar2;
          iVar2 = *(int *)(param_1 + 0x4848) + (iVar2 >> 1);
          iVar4 = iVar4 + -1;
          *(int *)(param_1 + 0x4858) = iVar2;
          *(int *)(param_1 + 0x4838) = iVar4;
        } while (*(int *)(param_1 + 0x4850) <= iVar2);
      }
    }
  }
  return;
}



uint64_t FUN_18042b3f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int8_t *puVar6;
  byte *pbVar7;
  byte bVar8;
  byte bVar9;
  int8_t uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  uint uStackX_8;
  uint uStackX_18;
  ulonglong uStack_58;
  
  pbVar5 = *(byte **)(param_1 + 0xb8);
  if (*(byte **)(param_1 + 0xc0) <= pbVar5) {
    if (*(int *)(param_1 + 0x30) == 0) {
      bVar8 = 0;
      goto LAB_18042b448;
    }
    FUN_18041ee20();
    pbVar5 = *(byte **)(param_1 + 0xb8);
  }
  bVar8 = *pbVar5;
  *(byte **)(param_1 + 0xb8) = pbVar5 + 1;
  if (0xc < bVar8) {
    return 0;
  }
LAB_18042b448:
  uVar18 = 1;
  uStackX_18 = 1;
  uStackX_8 = 0;
  uVar12 = 1 << (bVar8 & 0x1f);
  iVar19 = 0;
  iVar2 = bVar8 + 1;
  uVar15 = 0xffffffff;
  iVar11 = 0;
  uVar3 = (1 << ((byte)iVar2 & 0x1f)) - 1;
  if (0 < 1 << (bVar8 & 0x1f)) {
    puVar6 = (int8_t *)(param_2 + 0x832);
    do {
      *puVar6 = (char)iVar11;
      puVar6[1] = (char)iVar11;
      iVar11 = iVar11 + 1;
      *(int16_t *)(puVar6 + -2) = 0xffff;
      puVar6 = puVar6 + 4;
    } while (iVar11 < (int)uVar12);
  }
  uVar14 = (ulonglong)(int)(uVar12 + 2);
  uVar13 = 0;
  iVar11 = iVar2;
  uVar20 = uVar3;
  uStack_58 = uVar14;
  while( true ) {
    while( true ) {
      for (; iVar19 < iVar11; iVar19 = iVar19 + 8) {
        if (uVar13 == 0) {
          pbVar5 = *(byte **)(param_1 + 0xb8);
          if (pbVar5 < *(byte **)(param_1 + 0xc0)) {
            uVar13 = (uint)*pbVar5;
            *(byte **)(param_1 + 0xb8) = pbVar5 + 1;
          }
          else if (*(int *)(param_1 + 0x30) == 0) {
            uVar13 = 0;
          }
          else {
            FUN_18041ee20(param_1);
            uVar13 = (uint)**(byte **)(param_1 + 0xb8);
            *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
          }
          if ((char)uVar13 == '\0') {
            return *(uint64_t *)(param_2 + 8);
          }
        }
        pbVar5 = *(byte **)(param_1 + 0xb8);
        uVar13 = uVar13 - 1;
        if (pbVar5 < *(byte **)(param_1 + 0xc0)) {
          bVar8 = *pbVar5;
          *(byte **)(param_1 + 0xb8) = pbVar5 + 1;
        }
        else if (*(int *)(param_1 + 0x30) == 0) {
          bVar8 = 0;
        }
        else {
          puVar6 = (int8_t *)(param_1 + 0x38);
          iVar4 = (**(code **)(param_1 + 0x10))
                            (*(uint64_t *)(param_1 + 0x28),puVar6,*(int32_t *)(param_1 + 0x34))
          ;
          *(int8_t **)(param_1 + 0xb8) = puVar6;
          if (iVar4 == 0) {
            *(int32_t *)(param_1 + 0x30) = 0;
            *(longlong *)(param_1 + 0xc0) = param_1 + 0x39;
            *puVar6 = 0;
          }
          else {
            *(longlong *)(param_1 + 0xc0) = param_1 + 0x38 + (longlong)iVar4;
          }
          bVar8 = **(byte **)(param_1 + 0xb8);
          *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
        }
        uVar18 = (ulonglong)uStackX_18;
        bVar9 = (byte)iVar19;
        uStackX_8 = uStackX_8 | (uint)bVar8 << (bVar9 & 0x1f);
      }
      uVar16 = (int)uStackX_8 >> ((byte)iVar11 & 0x1f);
      uVar17 = uStackX_8 & uVar20;
      iVar19 = iVar19 - iVar11;
      uStackX_8 = uVar16;
      if (uVar17 != uVar12) break;
      uVar18 = 0;
      uVar14 = (ulonglong)(uVar12 + 2);
      uVar15 = 0xffffffff;
      uStackX_18 = 0;
      uStack_58 = (longlong)(int)uVar12 + 2;
      iVar11 = iVar2;
      uVar20 = uVar3;
    }
    if (uVar17 == uVar12 + 1) {
      if ((int)uVar13 < 0) {
        *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 0xc0);
      }
      else if ((*(longlong *)(param_1 + 0x10) == 0) ||
              ((int)uVar13 <= *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xb8))) {
        *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + (longlong)(int)uVar13;
      }
      else {
        *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 0xc0);
        (**(code **)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28));
      }
      while( true ) {
        pbVar5 = *(byte **)(param_1 + 0xb8);
        if (pbVar5 < *(byte **)(param_1 + 0xc0)) {
          bVar8 = *pbVar5;
          pbVar7 = pbVar5 + 1;
          *(byte **)(param_1 + 0xb8) = pbVar7;
          pbVar5 = pbVar7;
        }
        else {
          if (*(int *)(param_1 + 0x30) == 0) {
            bVar8 = 0;
          }
          else {
            puVar6 = (int8_t *)(param_1 + 0x38);
            iVar2 = (**(code **)(param_1 + 0x10))
                              (*(uint64_t *)(param_1 + 0x28),puVar6,
                               *(int32_t *)(param_1 + 0x34));
            *(int8_t **)(param_1 + 0xb8) = puVar6;
            if (iVar2 == 0) {
              *(int32_t *)(param_1 + 0x30) = 0;
              *(longlong *)(param_1 + 0xc0) = param_1 + 0x39;
              *puVar6 = 0;
            }
            else {
              *(longlong *)(param_1 + 0xc0) = param_1 + 0x38 + (longlong)iVar2;
            }
            bVar8 = **(byte **)(param_1 + 0xb8);
            pbVar5 = *(byte **)(param_1 + 0xb8) + 1;
            *(byte **)(param_1 + 0xb8) = pbVar5;
          }
          pbVar7 = (byte *)((ulonglong)pbVar5 & 0xffffffff);
        }
        if (bVar8 == 0) break;
        if ((*(longlong *)(param_1 + 0x10) == 0) ||
           ((int)(uint)bVar8 <= *(int *)(param_1 + 0xc0) - (int)pbVar7)) {
          *(byte **)(param_1 + 0xb8) = pbVar5 + bVar8;
        }
        else {
          *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 0xc0);
          (**(code **)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28));
        }
      }
      return *(uint64_t *)(param_2 + 8);
    }
    uVar16 = (uint)uVar14;
    if (((int)uVar16 < (int)uVar17) || ((int)uVar18 != 0)) break;
    if ((int)uVar15 < 0) {
      if (uVar17 == uVar16) {
        return 0;
      }
    }
    else {
      lVar1 = param_2 + uStack_58 * 4;
      uVar16 = uVar16 + 1;
      uVar14 = (ulonglong)uVar16;
      uStack_58 = uStack_58 + 1;
      if (0x1000 < (int)uVar16) {
        return 0;
      }
      *(short *)(lVar1 + 0x830) = (short)uVar15;
      uVar10 = *(int8_t *)(param_2 + 0x832 + (longlong)(int)uVar15 * 4);
      *(int8_t *)(lVar1 + 0x832) = uVar10;
      if (uVar17 != uVar16) {
        uVar10 = *(int8_t *)(param_2 + 0x832 + (longlong)(int)uVar17 * 4);
      }
      *(int8_t *)(lVar1 + 0x833) = uVar10;
    }
    uVar15 = uVar17;
    FUN_18042b2e0(param_2,uVar17 & 0xffff);
    if (((uVar20 & (uint)uVar14) == 0) && ((int)(uint)uVar14 < 0x1000)) {
      iVar11 = iVar11 + 1;
      uVar20 = (1 << ((byte)iVar11 & 0x1f)) - 1;
    }
  }
  return 0;
}





// 函数: void FUN_18042b850(int *param_1,int param_2,int param_3,int param_4,int param_5)
void FUN_18042b850(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  int8_t *puVar3;
  
  iVar1 = param_1[7];
  if (param_3 < param_5) {
    do {
      if ((longlong)param_2 < (longlong)param_4) {
        lVar2 = (longlong)param_2;
        do {
          puVar3 = (int8_t *)(param_3 + lVar2 + *(longlong *)(param_1 + 2));
          lVar2 = lVar2 + 4;
          *puVar3 = *(int8_t *)((longlong)param_1 + (longlong)iVar1 * 4 + 0x32);
          puVar3[1] = *(int8_t *)((longlong)param_1 + (longlong)iVar1 * 4 + 0x31);
          puVar3[2] = (char)param_1[(longlong)iVar1 + 0xc];
          puVar3[3] = 0;
        } while (lVar2 < param_4);
      }
      param_3 = param_3 + *param_1 * 4;
    } while (param_3 < param_5);
  }
  return;
}





// 函数: void FUN_18042b866(uint64_t param_1,int param_2,int param_3,int param_4)
void FUN_18042b866(uint64_t param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  int8_t *puVar2;
  int unaff_ESI;
  longlong in_R10;
  int *in_R11;
  
  do {
    if ((longlong)param_2 < (longlong)param_4) {
      lVar1 = (longlong)param_2;
      do {
        puVar2 = (int8_t *)(param_3 + lVar1 + *(longlong *)(in_R11 + 2));
        lVar1 = lVar1 + 4;
        *puVar2 = *(int8_t *)(in_R10 + 0x32);
        puVar2[1] = *(int8_t *)(in_R10 + 0x31);
        puVar2[2] = *(int8_t *)(in_R10 + 0x30);
        puVar2[3] = 0;
      } while (lVar1 < param_4);
    }
    param_3 = param_3 + *in_R11 * 4;
  } while (param_3 < unaff_ESI);
  return;
}





// 函数: void FUN_18042b8c3(void)
void FUN_18042b8c3(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18042b8d0(longlong param_1,int *param_2)

{
  int8_t *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  byte bVar13;
  byte *pbVar14;
  int *piVar15;
  ulonglong uVar16;
  longlong lVar17;
  
  if ((*(longlong *)(param_2 + 2) == 0) && (iVar4 = FUN_18042b010(), iVar4 == 0)) {
    return 0;
  }
  iVar4 = *param_2;
  iVar5 = param_2[1];
  if (iVar4 < 0) {
    return 0;
  }
  if (iVar5 < 0) {
    return 0;
  }
  if ((iVar5 != 0) && ((int)(0x7fffffff / (longlong)iVar5) < iVar4)) {
    return 0;
  }
  if (iVar4 * iVar5 < 0) {
    return 0;
  }
  if (0x1fffffff < iVar4 * iVar5) {
    return 0;
  }
  lVar17 = *(longlong *)(param_2 + 2);
  lVar8 = 0;
  if (((-1 < iVar4) &&
      ((((iVar4 == 0 || (3 < (int)(0x7fffffff / (longlong)iVar4))) && (-1 < iVar4 * 4)) &&
       (-1 < iVar5)))) && ((iVar5 == 0 || (iVar4 * 4 <= (int)(0x7fffffff / (longlong)iVar5))))) {
    lVar8 = FUN_18062b420(system_memory_pool_ptr,(longlong)(iVar4 * iVar5 * 4));
  }
  *(longlong *)(param_2 + 2) = lVar8;
  if (lVar8 == 0) {
    return 0;
  }
  uVar12 = param_2[10] >> 2 & 7;
  if (uVar12 == 0) {
    iVar6 = 0;
    iVar4 = *param_2 * 4;
    iVar5 = *param_2 * param_2[1] * 4;
    iVar7 = 0;
  }
  else {
    if (uVar12 == 1) {
      if (lVar17 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar8,lVar17,(longlong)(*param_2 * param_2[1] * 4));
      }
      param_2[4] = 0;
      param_2[5] = 0;
      goto LAB_18042bac0;
    }
    if (uVar12 != 2) {
      if (((uVar12 == 3) && (*(longlong *)(param_2 + 4) != 0)) &&
         (param_2[0x1212] < param_2[0x1214])) {
        lVar17 = (longlong)(param_2[0x1211] + param_2[0x1212]);
                    // WARNING: Subroutine does not return
        memcpy(*(longlong *)(param_2 + 2) + lVar17,*(longlong *)(param_2 + 4) + lVar17,
               (longlong)(param_2[0x1213] - param_2[0x1211]));
      }
      goto LAB_18042bac0;
    }
    if (lVar17 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(lVar8,lVar17,(longlong)(*param_2 * param_2[1] * 4));
    }
    iVar5 = param_2[0x1214];
    iVar4 = param_2[0x1213];
    iVar6 = param_2[0x1212];
    iVar7 = param_2[0x1211];
  }
  FUN_18042b850(param_2,iVar7,iVar6,iVar4,iVar5);
LAB_18042bac0:
  do {
    pcVar9 = *(char **)(param_1 + 0xb8);
    if (*(char **)(param_1 + 0xc0) <= pcVar9) {
      if (*(int *)(param_1 + 0x30) == 0) {
        return 0;
      }
      FUN_18041ee20(param_1);
      pcVar9 = *(char **)(param_1 + 0xb8);
    }
    cVar3 = *pcVar9;
    pbVar10 = (byte *)(pcVar9 + 1);
    *(byte **)(param_1 + 0xb8) = pbVar10;
    if (cVar3 != '!') {
      if (cVar3 == ',') {
        uVar12 = 0xffffffff;
        iVar4 = FUN_18041f0a0(param_1);
        iVar5 = FUN_18041f0a0(param_1);
        iVar6 = FUN_18041f0a0(param_1);
        iVar7 = FUN_18041f0a0(param_1);
        if ((iVar6 + iVar4 <= *param_2) && (iVar7 + iVar5 <= param_2[1])) {
          iVar2 = *param_2 * 4;
          param_2[0x1217] = iVar2;
          iVar4 = iVar4 * 4;
          param_2[0x1211] = iVar4;
          iVar5 = iVar2 * iVar5;
          param_2[0x1213] = iVar4 + iVar6 * 4;
          param_2[0x1215] = iVar4;
          param_2[0x1212] = iVar5;
          param_2[0x1216] = iVar5;
          param_2[0x1214] = iVar2 * iVar7 + iVar5;
          pbVar10 = *(byte **)(param_1 + 0xb8);
          if (pbVar10 < *(byte **)(param_1 + 0xc0)) {
            bVar13 = *pbVar10;
            *(byte **)(param_1 + 0xb8) = pbVar10 + 1;
          }
          else if (*(int *)(param_1 + 0x30) == 0) {
            bVar13 = 0;
          }
          else {
            FUN_18041ee20(param_1);
            bVar13 = **(byte **)(param_1 + 0xb8);
            *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
          }
          param_2[0x1210] = (uint)bVar13;
          iVar4 = param_2[0x1217] * 8;
          if ((bVar13 & 0x40) == 0) {
            iVar4 = param_2[0x1217];
          }
          param_2[0x120f] = iVar4;
          param_2[0x120e] = -(uint)((bVar13 & 0x40) != 0) & 3;
          if ((char)(byte)param_2[0x1210] < '\0') {
            if ((*(byte *)(param_2 + 10) & 1) == 0) {
              iVar4 = -1;
            }
            else {
              iVar4 = param_2[9];
            }
            piVar15 = param_2 + 0x10c;
            FUN_18042aec0(param_1,piVar15,2 << ((byte)param_2[0x1210] & 7),iVar4);
          }
          else {
            if ((*(byte *)(param_2 + 6) & 0x80) == 0) {
              return 0;
            }
            iVar4 = param_2[9];
            uVar12 = 0xffffffff;
            if ((-1 < iVar4) && ((*(byte *)(param_2 + 10) & 1) != 0)) {
              uVar12 = (uint)*(byte *)((longlong)param_2 + (longlong)iVar4 * 4 + 0x33);
              *(int8_t *)((longlong)param_2 + (longlong)iVar4 * 4 + 0x33) = 0;
            }
            piVar15 = param_2 + 0xc;
          }
          *(int **)(param_2 + 0x120c) = piVar15;
          lVar17 = FUN_18042b3f0(param_1,param_2);
          if (lVar17 != 0) {
            if (uVar12 != 0xffffffff) {
              *(char *)((longlong)param_2 + (longlong)param_2[9] * 4 + 0x33) = (char)uVar12;
              return lVar17;
            }
            return lVar17;
          }
        }
      }
      else if (cVar3 == ';') {
        return param_1;
      }
      return 0;
    }
    pbVar14 = *(byte **)(param_1 + 0xc0);
    if (pbVar10 < pbVar14) {
LAB_18042bb29:
      bVar13 = *pbVar10;
      pbVar11 = pbVar10 + 1;
      *(byte **)(param_1 + 0xb8) = pbVar11;
      if (bVar13 == 0xf9) {
        if (pbVar11 < pbVar14) {
          bVar13 = *pbVar11;
          pbVar11 = pbVar10 + 2;
          *(byte **)(param_1 + 0xb8) = pbVar11;
        }
        else if (*(int *)(param_1 + 0x30) == 0) {
          bVar13 = 0;
        }
        else {
          FUN_18041ee20(param_1);
          pbVar14 = *(byte **)(param_1 + 0xc0);
          bVar13 = **(byte **)(param_1 + 0xb8);
          pbVar11 = *(byte **)(param_1 + 0xb8) + 1;
          *(byte **)(param_1 + 0xb8) = pbVar11;
        }
        if (bVar13 != 4) {
          func_0x00018041ee90(param_1);
          goto LAB_18042bac0;
        }
        if (pbVar11 < pbVar14) {
          bVar13 = *pbVar11;
          *(byte **)(param_1 + 0xb8) = pbVar11 + 1;
        }
        else if (*(int *)(param_1 + 0x30) == 0) {
          bVar13 = 0;
        }
        else {
          FUN_18041ee20(param_1);
          bVar13 = **(byte **)(param_1 + 0xb8);
          *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
        }
        param_2[10] = (uint)bVar13;
        iVar4 = FUN_18041f0a0();
        param_2[0xb] = iVar4;
        pbVar10 = *(byte **)(param_1 + 0xb8);
        if (pbVar10 < *(byte **)(param_1 + 0xc0)) {
          bVar13 = *pbVar10;
          *(byte **)(param_1 + 0xb8) = pbVar10 + 1;
        }
        else if (*(int *)(param_1 + 0x30) == 0) {
          bVar13 = 0;
        }
        else {
          FUN_18041ee20(param_1);
          bVar13 = **(byte **)(param_1 + 0xb8);
          *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
        }
        param_2[9] = (uint)bVar13;
      }
    }
    else if (*(int *)(param_1 + 0x30) != 0) {
      FUN_18041ee20(param_1);
      pbVar10 = *(byte **)(param_1 + 0xb8);
      pbVar14 = *(byte **)(param_1 + 0xc0);
      goto LAB_18042bb29;
    }
    while( true ) {
      pbVar10 = *(byte **)(param_1 + 0xb8);
      pbVar14 = *(byte **)(param_1 + 0xc0);
      if (pbVar10 < pbVar14) {
        uVar16 = (ulonglong)*pbVar10;
        pbVar10 = pbVar10 + 1;
        *(byte **)(param_1 + 0xb8) = pbVar10;
      }
      else if (*(int *)(param_1 + 0x30) == 0) {
        uVar16 = 0;
      }
      else {
        puVar1 = (int8_t *)(param_1 + 0x38);
        iVar4 = (**(code **)(param_1 + 0x10))
                          (*(uint64_t *)(param_1 + 0x28),puVar1,*(int32_t *)(param_1 + 0x34));
        *(int8_t **)(param_1 + 0xb8) = puVar1;
        if (iVar4 == 0) {
          *(int32_t *)(param_1 + 0x30) = 0;
          *(longlong *)(param_1 + 0xc0) = param_1 + 0x39;
          *puVar1 = 0;
          pbVar14 = *(byte **)(param_1 + 0xc0);
        }
        else {
          pbVar14 = (byte *)(param_1 + 0x38 + (longlong)iVar4);
          *(byte **)(param_1 + 0xc0) = pbVar14;
        }
        uVar16 = (ulonglong)**(byte **)(param_1 + 0xb8);
        pbVar10 = *(byte **)(param_1 + 0xb8) + 1;
        *(byte **)(param_1 + 0xb8) = pbVar10;
      }
      if ((char)uVar16 == '\0') break;
      if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_18042bcf2:
        *(byte **)(param_1 + 0xb8) = pbVar10 + uVar16;
      }
      else {
        iVar4 = (int)pbVar14 - (int)pbVar10;
        if ((int)uVar16 <= iVar4) goto LAB_18042bcf2;
        *(byte **)(param_1 + 0xb8) = pbVar14;
        (**(code **)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28),(int)uVar16 - iVar4);
      }
    }
  } while( true );
}



uint64_t FUN_18042bed0(longlong param_1,char *param_2)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  
  cVar1 = *param_2;
  while( true ) {
    if (cVar1 == '\0') {
      *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 200);
      *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 0xd0);
      return 1;
    }
    pbVar2 = *(byte **)(param_1 + 0xb8);
    if (pbVar2 < *(byte **)(param_1 + 0xc0)) {
      uVar3 = (uint)*pbVar2;
      *(byte **)(param_1 + 0xb8) = pbVar2 + 1;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
      uVar3 = 0;
    }
    else {
      FUN_18041ee20(param_1);
      uVar3 = (uint)**(byte **)(param_1 + 0xb8);
      *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
    }
    if (uVar3 != (int)*param_2) break;
    param_2 = param_2 + 1;
    cVar1 = *param_2;
  }
  return 0;
}





// 函数: void FUN_18042bf80(longlong param_1)
void FUN_18042bf80(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_18042bed0(param_1,&unknown_var_9768_ptr);
  *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 200);
  *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 0xd0);
  if (iVar1 == 0) {
    FUN_18042bed0(param_1,&unknown_var_9784_ptr);
    *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 200);
    *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 0xd0);
  }
  return;
}



longlong FUN_18042bff0(longlong param_1,longlong param_2)

{
  int8_t *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  ulonglong uVar7;
  char cVar8;
  ulonglong uVar6;
  
  pcVar4 = *(char **)(param_1 + 0xb8);
  uVar6 = 0;
  uVar7 = uVar6;
  if (pcVar4 < *(char **)(param_1 + 0xc0)) {
    cVar8 = *pcVar4;
    *(char **)(param_1 + 0xb8) = pcVar4 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    cVar8 = '\0';
  }
  else {
    FUN_18041ee20();
    cVar8 = **(char **)(param_1 + 0xb8);
    *(char **)(param_1 + 0xb8) = *(char **)(param_1 + 0xb8) + 1;
  }
LAB_18042c060:
  uVar5 = (uint)uVar6;
  if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_18042c07e:
    if (*(ulonglong *)(param_1 + 0xc0) <= *(ulonglong *)(param_1 + 0xb8)) goto LAB_18042c1a9;
  }
  else {
    iVar2 = (**(code **)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x30) != 0) goto LAB_18042c07e;
      goto LAB_18042c1a9;
    }
  }
  if (cVar8 == '\n') goto LAB_18042c1a9;
  *(char *)(uVar7 + param_2) = cVar8;
  uVar5 = uVar5 + 1;
  uVar6 = (ulonglong)uVar5;
  uVar7 = uVar7 + 1;
  if (uVar7 != 0x3ff) {
    pcVar4 = *(char **)(param_1 + 0xb8);
    if (pcVar4 < *(char **)(param_1 + 0xc0)) {
      cVar8 = *pcVar4;
      *(char **)(param_1 + 0xb8) = pcVar4 + 1;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
      cVar8 = '\0';
    }
    else {
      puVar1 = (int8_t *)(param_1 + 0x38);
      iVar2 = (**(code **)(param_1 + 0x10))
                        (*(uint64_t *)(param_1 + 0x28),puVar1,*(int32_t *)(param_1 + 0x34));
      *(int8_t **)(param_1 + 0xb8) = puVar1;
      if (iVar2 == 0) {
        *(int32_t *)(param_1 + 0x30) = 0;
        *(longlong *)(param_1 + 0xc0) = param_1 + 0x39;
        *puVar1 = 0;
      }
      else {
        *(longlong *)(param_1 + 0xc0) = param_1 + 0x38 + (longlong)iVar2;
      }
      cVar8 = **(char **)(param_1 + 0xb8);
      *(char **)(param_1 + 0xb8) = *(char **)(param_1 + 0xb8) + 1;
    }
    goto LAB_18042c060;
  }
LAB_18042c140:
  do {
    if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_18042c16a:
      pcVar3 = *(char **)(param_1 + 0xb8);
      pcVar4 = *(char **)(param_1 + 0xc0);
      if (pcVar4 <= pcVar3) goto LAB_18042c1a9;
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
      if (iVar2 != 0) {
        if (*(int *)(param_1 + 0x30) != 0) goto LAB_18042c16a;
        goto LAB_18042c1a9;
      }
      pcVar3 = *(char **)(param_1 + 0xb8);
      pcVar4 = *(char **)(param_1 + 0xc0);
    }
    if (pcVar4 <= pcVar3) {
      if (*(int *)(param_1 + 0x30) == 0) goto LAB_18042c140;
      FUN_18041ee20(param_1);
      pcVar3 = *(char **)(param_1 + 0xb8);
    }
    cVar8 = *pcVar3;
    *(char **)(param_1 + 0xb8) = pcVar3 + 1;
    if (cVar8 == '\n') {
LAB_18042c1a9:
      *(int8_t *)((int)uVar5 + param_2) = 0;
      return param_2;
    }
  } while( true );
}





// 函数: void FUN_18042c1d0(float *param_1,byte *param_2,int param_3)
void FUN_18042c1d0(float *param_1,byte *param_2,int param_3)

{
  double dVar1;
  float fVar2;
  
  if (param_2[3] == 0) {
    if (param_3 != 1) {
      if (param_3 != 2) {
        if (param_3 != 3) {
          if (param_3 != 4) {
            return;
          }
          param_1[3] = 1.0;
        }
        param_1[1] = 0.0;
        param_1[2] = 0.0;
        *param_1 = 0.0;
        return;
      }
      param_1[1] = 1.0;
    }
    *param_1 = 0.0;
  }
  else {
    dVar1 = (double)ldexp(0x3ff0000000000000,param_2[3] - 0x88);
    fVar2 = (float)dVar1;
    if (param_3 < 3) {
      *param_1 = (float)((uint)param_2[2] + (uint)param_2[1] + (uint)*param_2) * fVar2 * 0.33333334;
    }
    else {
      *param_1 = (float)*param_2 * fVar2;
      param_1[1] = (float)param_2[1] * fVar2;
      param_1[2] = (float)param_2[2] * fVar2;
    }
    if (param_3 == 2) {
      param_1[1] = 1.0;
      return;
    }
    if (param_3 == 4) {
      param_1[3] = 1.0;
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



