#include "TaleWorlds.Native.Split.h"

// 03_rendering_part385.c - 4 个函数

// 函数: void FUN_18047c460(int64_t param_1)
void FUN_18047c460(int64_t param_1)

{
  free(*(uint64_t *)(param_1 + 8));
  return;
}



int64_t * FUN_18047c480(int64_t *param_1,int64_t *param_2,int64_t param_3)

{
  uint64_t uVar1;
  int64_t lStack_18;
  
  uVar1 = param_1[1];
  if ((param_3 < 0) && (uVar1 < (uint64_t)-param_3)) {
    lStack_18 = (~(uVar1 + param_3) >> 5) * -4 + -4;
  }
  else {
    lStack_18 = (uVar1 + param_3 >> 5) * 4;
  }
  lStack_18 = *param_1 + lStack_18;
  *param_2 = lStack_18;
  param_2[1] = (uint64_t)((int)uVar1 + (int)param_3 & 0x1f);
  return param_2;
}



uint64_t FUN_18047c500(int64_t *param_1,uint64_t param_2,int64_t *param_3,int64_t *param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  uint *puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint *puVar7;
  uint *puVar8;
  uint64_t uStack_30;
  uint64_t uStack_20;
  uint *puStack_18;
  uint64_t uStack_10;
  
  puVar8 = (uint *)*param_1;
  uVar2 = param_1[3];
  uStack_30 = 0;
  puVar4 = puVar8;
  if (uVar2 != 0) {
    uVar6 = (*param_3 - (int64_t)puVar8 >> 2) * 0x20 + param_3[1];
    if (((int64_t)uVar6 < 0) && (uVar6 != 0)) {
      lVar5 = -((~uVar6 >> 5) * 4 + 4);
    }
    else {
      lVar5 = (uVar6 >> 5) * 4;
    }
    puVar4 = (uint *)((int64_t)puVar8 + lVar5);
    uStack_30 = (uint64_t)((uint)uVar6 & 0x1f);
  }
  uStack_20 = 0;
  puStack_18 = puVar8;
  if (uVar2 != 0) {
    uVar6 = (*param_4 - (int64_t)puVar8 >> 2) * 0x20 + param_4[1];
    if (((int64_t)uVar6 < 0) && (uVar6 != 0)) {
      lVar5 = -((~uVar6 >> 5) * 4 + 4);
    }
    else {
      lVar5 = (uVar6 >> 5) * 4;
    }
    puStack_18 = (uint *)((int64_t)puVar8 + lVar5);
    uStack_20 = (uint64_t)((uint)uVar6 & 0x1f);
  }
  lVar5 = ((int64_t)puVar4 - (int64_t)puVar8 >> 2) * 0x20 + uStack_30;
  if ((puVar4 != puStack_18) || (uStack_30 != uStack_20)) {
    if (((int64_t)uVar2 < 0) && (uVar2 != 0)) {
      lVar1 = -((~uVar2 >> 5) * 4 + 4);
    }
    else {
      lVar1 = (uVar2 >> 5) * 4;
    }
    uStack_10 = uStack_20;
    puVar7 = puStack_18;
    while ((puVar7 != (uint *)((int64_t)puVar8 + lVar1) || (uStack_20 != ((uint)uVar2 & 0x1f)))) {
      if ((*puVar7 & 1 << ((byte)uStack_20 & 0x1f)) == 0) {
        uVar3 = *puVar4 & ~(1 << ((uint)uStack_30 & 0x1f));
      }
      else {
        uVar3 = *puVar4 | 1 << ((uint)uStack_30 & 0x1f);
      }
      *puVar4 = uVar3;
      if (uStack_30 < 0x1f) {
        uStack_30 = uStack_30 + 1;
      }
      else {
        uStack_30 = 0;
        puVar4 = puVar4 + 1;
      }
      if (uStack_20 < 0x1f) {
        uStack_20 = uStack_20 + 1;
      }
      else {
        uStack_20 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    FUN_18047b220(param_1,((int64_t)puVar4 - *param_1 >> 2) * 0x20 + uStack_30);
    puVar8 = (uint *)*param_1;
  }
  uStack_10 = 0;
  puStack_18 = puVar8;
  FUN_18047c480(&puStack_18,param_2,lVar5);
  return param_2;
}



uint64_t FUN_18047c710(int64_t *param_1,uint64_t param_2)

{
  (**(code **)(*param_1 + 0x20))();
  return param_2;
}



uint64_t FUN_18047c750(uint *param_1,int64_t *param_2,uint64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  code *pcVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int32_t auStackX_8 [2];
  uint *puStack_28;
  uint *puStack_18;
  int32_t *puStack_10;
  
  uVar6 = (*param_2 - *(int64_t *)param_1 >> 2) * 0x20 + param_2[1];
  if (param_3 != 0) {
    if (0x7fffffffffffffffU - *(int64_t *)(param_1 + 6) < param_3) {
      FUN_18047b310();
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    auStackX_8[0] = 0;
    puStack_10 = auStackX_8;
    puStack_18 = param_1;
    FUN_18047d990(param_1,param_3 + 0x1f + *(int64_t *)(param_1 + 6) >> 5,&puStack_18);
    uVar5 = *(uint64_t *)(param_1 + 6);
    if (uVar5 == 0) {
      *(uint64_t *)(param_1 + 6) = param_3;
    }
    else {
      lVar2 = *(int64_t *)param_1;
      if (((int64_t)uVar5 < 0) && (uVar5 != 0)) {
        lVar1 = -((~uVar5 >> 5) * 4 + 4);
      }
      else {
        lVar1 = (uVar5 >> 5) * 4;
      }
      puStack_18 = (uint *)(lVar2 + lVar1);
      uVar4 = (uint64_t)((uint)uVar5 & 0x1f);
      uVar5 = uVar5 + param_3;
      *(uint64_t *)(param_1 + 6) = uVar5;
      if (((int64_t)uVar5 < 0) && (uVar5 != 0)) {
        lVar1 = -((~uVar5 >> 5) * 4 + 4);
      }
      else {
        lVar1 = (uVar5 >> 5) * 4;
      }
      puStack_28 = (uint *)(lVar2 + lVar1);
      uVar5 = (uint64_t)((uint)uVar5 & 0x1f);
      if (((int64_t)uVar6 < 0) && (uVar6 != 0)) {
        lVar1 = -((~uVar6 >> 5) * 4 + 4);
      }
      else {
        lVar1 = (uVar6 >> 5) * 4;
      }
      while (((uint *)(lVar2 + lVar1) != puStack_18 || (((uint)uVar6 & 0x1f) != uVar4))) {
        if (uVar4 == 0) {
          uVar4 = 0x1f;
          puStack_18 = puStack_18 + -1;
        }
        else {
          uVar4 = uVar4 - 1;
        }
        if (uVar5 == 0) {
          uVar5 = 0x1f;
          puStack_28 = puStack_28 + -1;
        }
        else {
          uVar5 = uVar5 - 1;
        }
        if ((*puStack_18 & 1 << ((byte)uVar4 & 0x1f)) == 0) {
          *puStack_28 = *puStack_28 & ~(1 << ((uint)uVar5 & 0x1f));
        }
        else {
          *puStack_28 = *puStack_28 | 1 << ((uint)uVar5 & 0x1f);
        }
      }
    }
  }
  return uVar6;
}



uint64_t FUN_18047c9d0(int64_t *param_1)

{
  char *pcVar1;
  int64_t lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  char *pcVar9;
  
  uVar8 = 0;
  iVar5 = *(int *)((int64_t)param_1 + 0x7c);
  do {
    if (iVar5 == -1) {
      return uVar8;
    }
    if (iVar5 == 0x7c) {
      return uVar8;
    }
    if (iVar5 == 0x29) {
      if (*(int *)((int64_t)param_1 + 0x1c) != 0) {
        return uVar8;
      }
      if ((*(uint *)(param_1 + 0x10) & 0x10000000) == 0) {
        FUN_18047b390(0x29,5);
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return uVar8;
      }
LAB_18047cd13:
      if (iVar5 == 0x7d) {
        if ((*(uint *)(param_1 + 0x10) & 0x10000000) == 0) {
          FUN_18047b390(0x7d,6);
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return uVar8;
        }
      }
      else if ((iVar5 == 0x5d) && ((*(uint *)(param_1 + 0x10) & 0x10000000) == 0)) {
        FUN_18047b390(0x5d,4);
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return uVar8;
      }
      FUN_18047df40(param_1 + 8);
LAB_18047cd48:
      func_0x00018047c980(param_1);
LAB_18047cd50:
      FUN_18047dd90(param_1);
    }
    else {
      if (iVar5 == 0x2e) {
        FUN_18047ce10(param_1 + 8);
        pcVar9 = (char *)*param_1;
        if (pcVar9 != (char *)param_1[2]) {
          if (((*pcVar9 == '\\') && (pcVar1 = pcVar9 + 1, pcVar1 != (char *)param_1[2])) &&
             ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
              (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))) {
            pcVar9 = pcVar1;
          }
          *param_1 = (int64_t)(pcVar9 + 1);
        }
        FUN_18047b3a0(param_1);
        goto LAB_18047cd50;
      }
      if (iVar5 == 0x5c) {
        pcVar9 = (char *)*param_1;
        if (pcVar9 != (char *)param_1[2]) {
          if (((*pcVar9 == '\\') && (pcVar1 = pcVar9 + 1, pcVar1 != (char *)param_1[2])) &&
             ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
              (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))) {
            pcVar9 = pcVar1;
          }
          *param_1 = (int64_t)(pcVar9 + 1);
        }
        FUN_18047b3a0(param_1);
        if ((*(byte *)(param_1 + 0x10) & 0x80) == 0) {
LAB_18047cb3b:
          FUN_18047dc00(param_1);
          goto LAB_18047cd50;
        }
        if ((char)param_1[0xf] == 'b') {
          FUN_18047ce10(param_1 + 8);
          func_0x00018047c980(param_1);
        }
        else {
          if ((char)param_1[0xf] != 'B') goto LAB_18047cb3b;
          FUN_18047ce10(param_1 + 8);
          *(uint *)(param_1[9] + 0xc) = *(uint *)(param_1[9] + 0xc) ^ 1;
          func_0x00018047c980(param_1);
        }
      }
      else {
        if (iVar5 == 0x5b) {
          func_0x00018047c980(param_1);
          FUN_18047f6d0(param_1 + 8);
          iVar5 = *(int *)((int64_t)param_1 + 0x7c);
          if (iVar5 == 0x5e) {
            *(uint *)(param_1[9] + 0xc) = *(uint *)(param_1[9] + 0xc) ^ 1;
            func_0x00018047c980(param_1);
            iVar5 = *(int *)((int64_t)param_1 + 0x7c);
          }
          if (((*(uint *)(param_1 + 0x10) & 0x20000000) != 0) && (iVar5 == 0x5d)) {
            FUN_18047f770(param_1 + 8);
            func_0x00018047c980(param_1);
          }
          FUN_18047ecf0(param_1);
          if (*(int *)((int64_t)param_1 + 0x7c) != 0x5d) {
            FUN_18047b390();
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return uVar8;
          }
          goto LAB_18047cd48;
        }
        if (iVar5 != 0x28) {
          if (iVar5 == 0x5e) {
            FUN_18047ce10(param_1 + 8,2);
            func_0x00018047c980(param_1);
          }
          else {
            if (iVar5 != 0x24) {
              if (((iVar5 - 0x2aU < 2) || (iVar5 == 0x3f)) || (iVar5 == 0x7b)) {
                FUN_18047b390(iVar5,10);
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return uVar8;
              }
              goto LAB_18047cd13;
            }
            FUN_18047ce10(param_1 + 8,3);
            func_0x00018047c980(param_1);
          }
          goto LAB_18047cd58;
        }
        func_0x00018047c980(param_1);
        *(int *)((int64_t)param_1 + 0x1c) = *(int *)((int64_t)param_1 + 0x1c) + 1;
        if (((*(uint *)(param_1 + 0x10) >> 0x1b & 1) == 0) &&
           (*(int *)((int64_t)param_1 + 0x7c) == 0x29)) {
          FUN_18047b390();
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return uVar8;
        }
        if (((*(uint *)(param_1 + 0x10) & 0x20) == 0) ||
           (*(int *)((int64_t)param_1 + 0x7c) != 0x3f)) {
          if ((*(uint *)(param_1 + 0xe) & 0x200) != 0) goto LAB_18047cc41;
          *(int *)(param_1 + 3) = (int)param_1[3] + 1;
          lVar6 = FUN_18047b990(param_1 + 8,(int)param_1[3]);
          FUN_18047b5a0(param_1);
          FUN_18047b8d0(param_1 + 8,lVar6);
          FUN_18047c050(param_1 + 4,(int)param_1[3] + 1);
          lVar2 = param_1[4];
          uVar7 = (uint64_t)(*(uint *)(lVar6 + 0x20) >> 5);
          *(uint *)(lVar2 + uVar7 * 4) =
               *(uint *)(lVar2 + uVar7 * 4) | 1 << (*(uint *)(lVar6 + 0x20) & 0x1f);
LAB_18047cca1:
          *(int *)((int64_t)param_1 + 0x1c) = *(int *)((int64_t)param_1 + 0x1c) + -1;
          bVar4 = true;
        }
        else {
          func_0x00018047c980(param_1);
          iVar5 = *(int *)((int64_t)param_1 + 0x7c);
          func_0x00018047c980(param_1);
          if (iVar5 == 0x3a) {
LAB_18047cc41:
            FUN_18047f630(param_1);
            goto LAB_18047cca1;
          }
          if (iVar5 == 0x21) {
            FUN_18047f680(param_1,1);
            *(int *)((int64_t)param_1 + 0x1c) = *(int *)((int64_t)param_1 + 0x1c) + -1;
            bVar4 = false;
          }
          else {
            if (iVar5 != 0x3d) {
              FUN_18047b390();
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return uVar8;
            }
            FUN_18047f680(param_1,0);
            *(int *)((int64_t)param_1 + 0x1c) = *(int *)((int64_t)param_1 + 0x1c) + -1;
            bVar4 = false;
          }
        }
        if (*(int *)((int64_t)param_1 + 0x7c) != 0x29) {
          FUN_18047b390();
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return uVar8;
        }
        func_0x00018047c980(param_1);
        if (bVar4) goto LAB_18047cd50;
      }
    }
LAB_18047cd58:
    iVar5 = *(int *)((int64_t)param_1 + 0x7c);
    uVar8 = 1;
  } while( true );
}



uint64_t * FUN_18047ce10(int64_t param_1,int32_t param_2)

{
  uint64_t *puVar1;
  int64_t lVar2;
  
  puVar1 = (uint64_t *)FUN_1808fc418(0x20);
  *puVar1 = &processed_var_6184_ptr;
  *(int32_t *)(puVar1 + 1) = param_2;
  *(int32_t *)((int64_t)puVar1 + 0xc) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[3] = *(uint64_t *)(param_1 + 8);
  lVar2 = *(int64_t *)(param_1 + 8);
  if (*(int64_t *)(lVar2 + 0x10) != 0) {
    puVar1[2] = *(int64_t *)(lVar2 + 0x10);
    *(uint64_t **)(*(int64_t *)(*(int64_t *)(param_1 + 8) + 0x10) + 0x18) = puVar1;
    lVar2 = *(int64_t *)(param_1 + 8);
  }
  *(uint64_t **)(lVar2 + 0x10) = puVar1;
  *(uint64_t **)(param_1 + 8) = puVar1;
  return puVar1;
}



int8_t FUN_18047cea0(int64_t *param_1,int64_t param_2)

{
  uint *puVar1;
  uint uVar2;
  char *pcVar3;
  int64_t lVar4;
  int64_t lVar5;
  code *pcVar6;
  int8_t uVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  int64_t *plVar11;
  int64_t lVar12;
  int iVar13;
  uint64_t uVar14;
  int32_t uVar15;
  bool bVar16;
  bool bVar17;
  int8_t auStackX_8 [8];
  int8_t auStackX_20 [8];
  int64_t lStack_58;
  uint64_t uStack_50;
  int64_t lStack_40;
  
  iVar13 = (int)param_1[0x1c];
  if (0 < iVar13) {
    iVar13 = iVar13 + -1;
    *(int *)(param_1 + 0x1c) = iVar13;
    if (iVar13 < 1) {
      __Xregex_error_std__YAXW4error_type_regex_constants_1__Z(0xc);
      pcVar6 = (code *)swi(3);
      uVar7 = (*pcVar6)();
      return uVar7;
    }
  }
  if ((0 < *(int *)((int64_t)param_1 + 0xdc)) &&
     (iVar10 = *(int *)((int64_t)param_1 + 0xdc) + -1, *(int *)((int64_t)param_1 + 0xdc) = iVar10,
     iVar10 < 1)) {
    __Xregex_error_std__YAXW4error_type_regex_constants_1__Z(0xb);
    pcVar6 = (code *)swi(3);
    uVar7 = (*pcVar6)();
    return uVar7;
  }
  bVar17 = false;
  bVar16 = false;
  if (param_2 == 0) {
LAB_18047d315:
    if (0 < iVar13) {
      *(int *)(param_1 + 0x1c) = iVar13 + 1;
    }
    return bVar16 == false;
  }
code_r0x00018047cf30:
  iVar13 = *(int *)(param_2 + 8);
  switch(iVar13) {
  case 1:
  case 8:
  case 9:
  case 0x11:
  case 0x14:
    break;
  case 2:
    if (((*(uint *)((int64_t)param_1 + 0xbc) >> 8 & 1) == 0) && (*param_1 == param_1[0x13])) {
      bVar16 = (bool)((byte)*(uint *)((int64_t)param_1 + 0xbc) & 1);
      bVar17 = bVar16;
    }
    else {
      bVar16 = *(char *)(*param_1 + -1) != '\n';
      bVar17 = bVar16;
    }
    break;
  case 3:
    if ((char *)*param_1 == (char *)param_1[0x14]) {
      bVar16 = (bool)((byte)(*(uint *)((int64_t)param_1 + 0xbc) >> 1) & 1);
      bVar17 = bVar16;
    }
    else {
      bVar16 = *(char *)*param_1 != '\n';
      bVar17 = bVar16;
    }
    break;
  case 4:
    bVar8 = func_0x00018047e820(param_1);
    bVar16 = bVar8 == ((byte)*(int32_t *)(param_2 + 0xc) & 1);
    bVar17 = bVar16;
    break;
  case 5:
    pcVar3 = (char *)*param_1;
    if (((pcVar3 == (char *)param_1[0x14]) || (*pcVar3 == '\n')) || (*pcVar3 == '\r')) {
code_r0x00018047d30c:
      bVar16 = true;
code_r0x00018047d30f:
      iVar13 = (int)param_1[0x1c];
      goto LAB_18047d315;
    }
    *param_1 = (int64_t)(pcVar3 + 1);
    break;
  case 6:
    plVar11 = (int64_t *)
              FUN_18047d3a0(auStackX_8,*param_1,param_1[0x14],*(int64_t *)(param_2 + 0x28),
                            (uint64_t)*(uint *)(param_2 + 0x24) + *(int64_t *)(param_2 + 0x28),
                            param_1[0x1a],(int)param_1[0x17]);
    if (*plVar11 == *param_1) goto code_r0x00018047d30c;
    *param_1 = *plVar11;
    break;
  case 7:
    if ((*param_1 == param_1[0x14]) || (cVar9 = FUN_18047e580(param_1,param_2), cVar9 == '\0'))
    goto code_r0x00018047d30c;
    bVar16 = false;
    bVar17 = bVar16;
    goto code_r0x00018047d2f9;
  case 10:
  case 0xb:
    lVar12 = *param_1;
    plVar11 = param_1 + 1;
    FUN_18047db80(&lStack_58,plVar11);
    lStack_40 = param_1[4];
    cVar9 = FUN_18047cea0(param_1,*(uint64_t *)(param_2 + 0x20));
    if ((bool)cVar9 == (iVar13 == 0xb)) {
      *param_1 = lVar12;
      if (plVar11 != &lStack_58) {
        FUN_18047ff70(plVar11,lStack_58,uStack_50);
        param_1[4] = lStack_40;
      }
      bVar17 = true;
      bVar16 = true;
    }
    else {
      *param_1 = lVar12;
    }
    FUN_180257d60(&lStack_58);
    break;
  case 0xc:
    goto code_r0x00018047d2f2;
  case 0xd:
    *(int64_t *)(param_1[5] + (uint64_t)*(uint *)(param_2 + 0x20) * 0x10) = *param_1;
    uVar14 = param_1[4];
    if (*(uint *)(param_2 + 0x20) < uVar14) {
      do {
        uVar14 = uVar14 - 1;
        puVar1 = (uint *)(param_1[1] + (uVar14 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((uint)uVar14 & 0x1f));
      } while (*(uint *)(param_2 + 0x20) < uVar14);
    }
    break;
  case 0xe:
    lVar12 = *(int64_t *)(param_2 + 0x20);
    if ((*(char *)((int64_t)param_1 + 0xc1) != '\0') || (*(int *)(lVar12 + 0x20) != 0)) {
      puVar1 = (uint *)(param_1[1] + (uint64_t)(*(uint *)(lVar12 + 0x20) >> 5) * 4);
      *puVar1 = *puVar1 | 1 << (*(uint *)(lVar12 + 0x20) & 0x1f);
      *(int64_t *)(param_1[5] + 8 + (uint64_t)*(uint *)(lVar12 + 0x20) * 0x10) = *param_1;
    }
    break;
  case 0xf:
    uVar2 = *(uint *)(param_2 + 0x20);
    if ((*(uint *)(param_1[1] + (uint64_t)(uVar2 >> 5) * 4) >> ((byte)uVar2 & 0x1f) & 1) != 0) {
      lVar12 = *param_1;
      lVar4 = *(int64_t *)(param_1[5] + (uint64_t)uVar2 * 0x10);
      lVar5 = *(int64_t *)(param_1[5] + 8 + (uint64_t)uVar2 * 0x10);
      if (lVar4 != lVar5) {
        plVar11 = (int64_t *)
                  FUN_18047e8a0(auStackX_20,*param_1,param_1[0x14],lVar4,lVar5,param_1[0x1a],
                                (int)param_1[0x17]);
        lVar12 = *plVar11;
        if (lVar12 == *param_1) goto code_r0x00018047d30c;
      }
      *param_1 = lVar12;
    }
    break;
  case 0x10:
    cVar9 = FUN_18047e070(param_1,param_2);
    bVar16 = bVar17;
    if (cVar9 == '\0') {
      bVar16 = true;
      bVar17 = bVar16;
    }
    goto code_r0x00018047d2f2;
  case 0x12:
    uVar2 = CONCAT31((uint3)(*(uint *)(param_2 + 0xc) >> 9),(char)(*(uint *)(param_2 + 0xc) >> 1));
    uVar15 = 0;
code_r0x00018047d259:
    cVar9 = FUN_18047e2f0(param_1,param_2,uVar2 & 0xffffff01,uVar15);
    bVar16 = bVar17;
    if (cVar9 == '\0') {
      bVar16 = true;
      bVar17 = true;
    }
    goto code_r0x00018047d2f2;
  case 0x13:
    param_2 = *(int64_t *)(param_2 + 0x20);
    if (*(int *)(param_2 + 0x34) == 0) {
      uVar2 = CONCAT31((uint3)(*(uint *)(param_2 + 0xc) >> 9),(char)(*(uint *)(param_2 + 0xc) >> 1))
      ;
      uVar15 = *(int32_t *)((uint64_t)*(uint *)(param_2 + 0x30) * 0x10 + param_1[0x10]);
      goto code_r0x00018047d259;
    }
    goto code_r0x00018047d2f2;
  case 0x15:
    if ((((*(uint *)((int64_t)param_1 + 0xbc) & 0x2020) == 0) || (param_1[0x13] != *param_1)) &&
       (((char)param_1[0x1b] == '\0' || (*param_1 == param_1[0x14])))) {
      if (((char)param_1[0x18] == '\0') || (cVar9 = FUN_18047e750(param_1), cVar9 != '\0')) {
        FUN_18047db00(param_1 + 8,param_1);
        *(int8_t *)(param_1 + 0x18) = 1;
      }
    }
    else {
      bVar16 = true;
      bVar17 = true;
    }
code_r0x00018047d2f2:
    param_2 = 0;
    break;
  default:
    __Xregex_error_std__YAXW4error_type_regex_constants_1__Z(0xd);
    pcVar6 = (code *)swi(3);
    uVar7 = (*pcVar6)();
    return uVar7;
  }
  if (bVar16 != false) goto code_r0x00018047d30f;
code_r0x00018047d2f9:
  if ((param_2 == 0) || (param_2 = *(int64_t *)(param_2 + 0x10), param_2 == 0))
  goto code_r0x00018047d30f;
  goto code_r0x00018047cf30;
}



uint64_t *
FUN_18047d3a0(uint64_t *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
             int64_t param_6,uint param_7)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  *param_1 = param_3;
  pcVar4 = param_2;
  if ((param_7 >> 8 & 1) == 0) {
    if ((param_7 >> 0xb & 1) == 0) {
      pcVar3 = param_2;
      if (param_2 != param_3) {
        do {
          bVar5 = param_4 == param_5;
          pcVar3 = pcVar4;
          if (bVar5) goto LAB_18047d4d0;
          cVar2 = *param_4;
          pcVar3 = pcVar4 + 1;
          param_4 = param_4 + 1;
          if (*pcVar4 != cVar2) goto LAB_18047d4d4;
          pcVar4 = pcVar3;
        } while (pcVar3 != param_3);
      }
      bVar5 = param_4 == param_5;
LAB_18047d4d0:
      if (bVar5) {
        param_2 = pcVar3;
      }
      goto LAB_18047d4d4;
    }
    if (param_2 != param_3) {
      do {
        bVar5 = param_4 == param_5;
        if (bVar5) goto LAB_18047d438;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        cVar1 = *param_4;
        param_4 = param_4 + 1;
        cVar2 = FUN_18047c260(param_6,cVar2);
        cVar1 = FUN_18047c260(param_6,cVar1);
        if (cVar2 != cVar1) goto LAB_18047d4d4;
      } while (pcVar4 != param_3);
      if (param_4 == param_5) {
        param_2 = pcVar4;
      }
      goto LAB_18047d4d4;
    }
  }
  else if (param_2 != param_3) {
    do {
      bVar5 = param_4 == param_5;
      if (bVar5) goto LAB_18047d438;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      cVar1 = *param_4;
      param_4 = param_4 + 1;
      cVar1 = _tolower___ctype_D_std__QEBADD_Z(*(uint64_t *)(param_6 + 8),cVar1);
      cVar2 = _tolower___ctype_D_std__QEBADD_Z(*(uint64_t *)(param_6 + 8),cVar2);
      if (cVar2 != cVar1) goto LAB_18047d4d4;
    } while (pcVar4 != param_3);
  }
  bVar5 = param_4 == param_5;
LAB_18047d438:
  if (bVar5) {
    param_2 = pcVar4;
  }
LAB_18047d4d4:
  *param_1 = param_2;
  return param_1;
}



uint64_t * FUN_18047d500(uint64_t *param_1,char *param_2,char *param_3,uint *param_4)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  if (param_4 != (uint *)0x0) {
    do {
      uVar5 = 0;
      if (param_4[3] != 0) {
        uVar1 = *param_4;
        do {
          uVar6 = 0;
          pcVar3 = param_2;
          if (uVar1 != 0) {
            pcVar2 = param_2;
            do {
              pcVar3 = pcVar2 + 1;
              if (*pcVar2 != *(char *)(uVar5 + *(int64_t *)(param_4 + 4) + uVar6)) break;
              uVar6 = uVar6 + 1;
              pcVar2 = pcVar3;
            } while (uVar6 < uVar1);
          }
          if (pcVar3 == param_3) {
            *param_1 = param_3;
            return param_1;
          }
          uVar4 = (int)uVar5 + uVar1;
          uVar5 = (uint64_t)uVar4;
        } while (uVar4 < param_4[3]);
      }
      param_4 = *(uint **)(param_4 + 6);
    } while (param_4 != (uint *)0x0);
  }
  *param_1 = param_2;
  return param_1;
}





// 函数: void FUN_18047d5a0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18047d5a0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int32_t *puVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  int32_t *puVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  
  uVar15 = 0xfffffffffffffffe;
  puVar11 = (uint64_t *)param_1[1];
  lVar8 = *param_1;
  uVar14 = (int64_t)puVar11 - lVar8 >> 4;
  uVar7 = param_1[2] - lVar8 >> 4;
  if (uVar7 < param_2) {
    if (0xfffffffffffffff < param_2) {
      FUN_180189990();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar13 = param_2;
    if ((uVar7 <= 0xfffffffffffffff - (uVar7 >> 1)) &&
       (uVar13 = (uVar7 >> 1) + uVar7, uVar13 < param_2)) {
      uVar13 = param_2;
    }
    lVar8 = uVar13 << 4;
    if (0xfffffffffffffff < uVar13) {
      lVar8 = -1;
    }
    puVar5 = (int32_t *)FUN_180067110(lVar8);
    puVar11 = (uint64_t *)(puVar5 + uVar14 * 4);
    for (lVar8 = param_2 - uVar14; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11 = puVar11 + 2;
    }
    puVar12 = (int32_t *)param_1[1];
    puVar9 = puVar5;
    for (puVar6 = (int32_t *)*param_1; puVar6 != puVar12; puVar6 = puVar6 + 4) {
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      *puVar9 = *puVar6;
      puVar9[1] = uVar2;
      puVar9[2] = uVar3;
      puVar9[3] = uVar4;
      puVar9 = puVar9 + 4;
    }
    lVar8 = *param_1;
    if (lVar8 != 0) {
      uVar7 = param_1[2] - lVar8 & 0xfffffffffffffff0;
      lVar10 = lVar8;
      if (0xfff < uVar7) {
        lVar10 = *(int64_t *)(lVar8 + -8);
        if (0x1f < (lVar8 - lVar10) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn
                    (lVar8 - lVar10,uVar7 + 0x27,lVar10,param_4,0,puVar6,uVar15);
        }
      }
      free(lVar10);
    }
    *param_1 = (int64_t)puVar5;
    puVar12 = puVar5 + param_2 * 4;
    param_1[2] = (int64_t)(puVar5 + uVar13 * 4);
  }
  else {
    if (uVar14 < param_2) {
      for (lVar8 = param_2 - uVar14; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11 = puVar11 + 2;
      }
      param_1[1] = (int64_t)puVar11;
      return;
    }
    if (param_2 == uVar14) {
      return;
    }
    puVar12 = (int32_t *)(param_2 * 0x10 + lVar8);
  }
  param_1[1] = (int64_t)puVar12;
  return;
}





// 函数: void FUN_18047d750(int64_t *param_1,uint64_t param_2)
void FUN_18047d750(int64_t *param_1,uint64_t param_2)

{
  int32_t *puVar1;
  code *pcVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  int32_t *puVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  
  puVar9 = (uint64_t *)param_1[1];
  lVar8 = *param_1;
  lVar11 = ((int64_t)puVar9 - lVar8) / 6 + ((int64_t)puVar9 - lVar8 >> 0x3f);
  uVar14 = (lVar11 >> 2) - (lVar11 >> 0x3f);
  uVar12 = (param_1[2] - lVar8) / 0x18;
  if (param_2 <= uVar12) {
    if (uVar14 < param_2) {
      for (lVar8 = param_2 - uVar14; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar9 = 0;
        puVar9[1] = 0;
        *(int8_t *)(puVar9 + 2) = 0;
        puVar9 = puVar9 + 3;
      }
      param_1[1] = (int64_t)puVar9;
      return;
    }
    if (param_2 != uVar14) {
      param_1[1] = lVar8 + param_2 * 0x18;
    }
    return;
  }
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    uVar13 = param_2;
    if ((uVar12 <= 0xaaaaaaaaaaaaaaa - (uVar12 >> 1)) &&
       (uVar13 = (uVar12 >> 1) + uVar12, uVar13 < param_2)) {
      uVar13 = param_2;
    }
    lVar8 = uVar13 * 0x18;
    if (0xaaaaaaaaaaaaaaa < uVar13) {
      lVar8 = -1;
    }
    puVar6 = (int32_t *)FUN_180067110(lVar8);
    puVar9 = (uint64_t *)(puVar6 + uVar14 * 6);
    for (lVar8 = param_2 - uVar14; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar9 = 0;
      puVar9[1] = 0;
      *(int8_t *)(puVar9 + 2) = 0;
      puVar9 = puVar9 + 3;
    }
    puVar1 = (int32_t *)param_1[1];
    puVar10 = puVar6;
    for (puVar7 = (int32_t *)*param_1; puVar7 != puVar1; puVar7 = puVar7 + 6) {
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      *puVar10 = *puVar7;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      *(uint64_t *)(puVar10 + 4) = *(uint64_t *)(puVar7 + 4);
      puVar10 = puVar10 + 6;
    }
    lVar8 = *param_1;
    if (lVar8 != 0) {
      uVar12 = ((param_1[2] - lVar8) / 0x18) * 0x18;
      lVar11 = lVar8;
      if (0xfff < uVar12) {
        lVar11 = *(int64_t *)(lVar8 + -8);
        if (0x1f < (lVar8 - lVar11) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn(lVar11,uVar12 + 0x27);
        }
      }
      free(lVar11);
    }
    *param_1 = (int64_t)puVar6;
    param_1[1] = (int64_t)(puVar6 + param_2 * 6);
    param_1[2] = (int64_t)(puVar6 + uVar13 * 6);
    return;
  }
  FUN_180189990();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}





// 函数: void FUN_18047d990(int64_t *param_1,uint64_t param_2,int64_t param_3)
void FUN_18047d990(int64_t *param_1,uint64_t param_2,int64_t param_3)

{
  int32_t *puVar1;
  code *pcVar2;
  int64_t lVar3;
  int64_t lVar4;
  int32_t *puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int8_t auStackX_8 [8];
  uint64_t uStackX_10;
  
  puVar5 = (int32_t *)param_1[1];
  lVar3 = *param_1;
  uVar6 = (int64_t)puVar5 - lVar3 >> 2;
  uVar7 = param_1[2] - lVar3 >> 2;
  if (param_2 <= uVar7) {
    if (uVar6 < param_2) {
      puVar1 = *(int32_t **)(param_3 + 8);
      for (lVar3 = param_2 - uVar6; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar1;
        puVar5 = puVar5 + 1;
      }
      param_1[1] = (int64_t)puVar5;
      return;
    }
    if (param_2 != uVar6) {
      param_1[1] = lVar3 + param_2 * 4;
    }
    return;
  }
  if (param_2 < 0x4000000000000000) {
    uStackX_10 = param_2;
    if ((uVar7 <= 0x3fffffffffffffff - (uVar7 >> 1)) &&
       (uStackX_10 = (uVar7 >> 1) + uVar7, uStackX_10 < param_2)) {
      uStackX_10 = param_2;
    }
    lVar3 = uStackX_10 * 4;
    if (0x3fffffffffffffff < uStackX_10) {
      lVar3 = -1;
    }
    lVar3 = FUN_180067110(lVar3);
    puVar5 = (int32_t *)(lVar3 + uVar6 * 4);
    puVar1 = *(int32_t **)(param_3 + 8);
    for (lVar4 = param_2 - uVar6; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar1;
      puVar5 = puVar5 + 1;
    }
    func_0x00018018a000(auStackX_8,*param_1,param_1[1]);
                    // WARNING: Subroutine does not return
    memmove(lVar3);
  }
  FUN_180189990();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



uint64_t * FUN_18047db00(uint64_t *param_1,uint64_t *param_2)

{
  *param_1 = *param_2;
  if (param_1 + 1 != param_2 + 1) {
    FUN_18047ff70(param_1 + 1,param_2[1],param_2[2]);
    param_1[4] = param_2[4];
  }
  if (param_1 + 5 != param_2 + 5) {
    FUN_18047fdf0(param_1 + 5,param_2[5],param_2[6]);
  }
  return param_1;
}



uint64_t *
FUN_18047db80(uint64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  char cVar2;
  int8_t auStackX_10 [8];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  cVar2 = FUN_18047b330(param_1,param_2[1] - *param_2 >> 2,param_3,param_4,0xfffffffffffffffe);
  if (cVar2 != '\0') {
    uVar1 = *param_1;
    func_0x00018018a000(auStackX_10,*param_2);
                    // WARNING: Subroutine does not return
    memmove(uVar1);
  }
  return param_1;
}





