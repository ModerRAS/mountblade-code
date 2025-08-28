#include "TaleWorlds.Native.Split.h"

// 99_part_07_part040_sub001.c - 22 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_07_part040.c - 22 个函数


// 函数: void FUN_1804c01f0(uint64_t *param_1,ulonglong param_2)
void FUN_1804c01f0(uint64_t *param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  ulonglong uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  puVar7 = (uint64_t *)param_1[1];
  if ((ulonglong)((param_1[2] - (longlong)puVar7) / 0x50) < param_2) {
    puVar5 = (uint64_t *)*param_1;
    lVar8 = ((longlong)puVar7 - (longlong)puVar5) / 0x50;
    uVar4 = lVar8 * 2;
    if (lVar8 == 0) {
      uVar4 = 1;
    }
    if (uVar4 < lVar8 + param_2) {
      uVar4 = lVar8 + param_2;
    }
    puVar2 = (uint64_t *)0x0;
    if (uVar4 != 0) {
      puVar2 = (uint64_t *)
               FUN_18062b420(_DAT_180c8ed18,uVar4 * 0x50,*(int8_t *)(param_1 + 3),
                             0x6666666666666667,0xfffffffffffffffe);
      puVar7 = (uint64_t *)param_1[1];
      puVar5 = (uint64_t *)*param_1;
    }
    puVar6 = puVar2;
    if (puVar5 != puVar7) {
      lVar8 = (longlong)puVar5 - (longlong)puVar2;
      puVar5 = puVar2 + 7;
      do {
        *puVar6 = &unknown_var_720_ptr;
        puVar5[-6] = 0;
        *(int32_t *)(puVar5 + -5) = 0;
        *puVar6 = &unknown_var_3456_ptr;
        puVar5[-4] = 0;
        puVar5[-6] = 0;
        *(int32_t *)(puVar5 + -5) = 0;
        *(int32_t *)(puVar5 + -5) = *(int32_t *)(lVar8 + -0x28 + (longlong)puVar5);
        puVar5[-6] = *(uint64_t *)(lVar8 + -0x30 + (longlong)puVar5);
        *(int32_t *)((longlong)puVar5 + -0x1c) =
             *(int32_t *)(lVar8 + -0x1c + (longlong)puVar5);
        *(int32_t *)(puVar5 + -4) = *(int32_t *)(lVar8 + -0x20 + (longlong)puVar5);
        *(int32_t *)(lVar8 + -0x28 + (longlong)puVar5) = 0;
        *(uint64_t *)(lVar8 + -0x30 + (longlong)puVar5) = 0;
        *(uint64_t *)(lVar8 + -0x20 + (longlong)puVar5) = 0;
        puVar5[-3] = *(uint64_t *)(lVar8 + -0x18 + (longlong)puVar5);
        *(uint64_t *)(lVar8 + -0x18 + (longlong)puVar5) = 0;
        puVar5[-2] = *(uint64_t *)(lVar8 + -0x10 + (longlong)puVar5);
        *(uint64_t *)(lVar8 + -0x10 + (longlong)puVar5) = 0;
        puVar5[-1] = &unknown_var_720_ptr;
        *puVar5 = 0;
        *(int32_t *)(puVar5 + 1) = 0;
        puVar5[-1] = &unknown_var_3456_ptr;
        puVar5[2] = 0;
        *puVar5 = 0;
        *(int32_t *)(puVar5 + 1) = 0;
        *(int32_t *)(puVar5 + 1) = *(int32_t *)(lVar8 + 8 + (longlong)puVar5);
        *puVar5 = *(uint64_t *)(lVar8 + (longlong)puVar5);
        *(int32_t *)((longlong)puVar5 + 0x14) = *(int32_t *)(lVar8 + 0x14 + (longlong)puVar5);
        *(int32_t *)(puVar5 + 2) = *(int32_t *)(lVar8 + 0x10 + (longlong)puVar5);
        *(int32_t *)(lVar8 + 8 + (longlong)puVar5) = 0;
        *(uint64_t *)(lVar8 + (longlong)puVar5) = 0;
        *(uint64_t *)(lVar8 + 0x10 + (longlong)puVar5) = 0;
        puVar6 = puVar6 + 10;
        puVar3 = (uint64_t *)((longlong)puVar5 + lVar8 + 0x18);
        puVar5 = puVar5 + 10;
      } while (puVar3 != puVar7);
    }
    if (param_2 != 0) {
      puVar7 = puVar6 + 7;
      uVar9 = param_2;
      do {
        puVar7[-7] = &unknown_var_720_ptr;
        puVar7[-6] = 0;
        *(int32_t *)(puVar7 + -5) = 0;
        puVar7[-7] = &unknown_var_3456_ptr;
        puVar7[-4] = 0;
        puVar7[-6] = 0;
        *(int32_t *)(puVar7 + -5) = 0;
        puVar7[-3] = 0;
        puVar7[-2] = 0;
        puVar7[-1] = &unknown_var_720_ptr;
        *puVar7 = 0;
        *(int32_t *)(puVar7 + 1) = 0;
        puVar7[-1] = &unknown_var_3456_ptr;
        puVar7[2] = 0;
        *puVar7 = 0;
        *(int32_t *)(puVar7 + 1) = 0;
        plVar1 = (longlong *)puVar7[-2];
        puVar7[-2] = 0;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x38))();
        }
        puVar7 = puVar7 + 10;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    puVar7 = (uint64_t *)param_1[1];
    puVar5 = (uint64_t *)*param_1;
    if (puVar5 != puVar7) {
      do {
        puVar5[6] = &unknown_var_3456_ptr;
        if (puVar5[7] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puVar5[7] = 0;
        *(int32_t *)(puVar5 + 9) = 0;
        puVar5[6] = &unknown_var_720_ptr;
        if ((longlong *)puVar5[5] != (longlong *)0x0) {
          (**(code **)(*(longlong *)puVar5[5] + 0x38))();
        }
        if ((longlong *)puVar5[4] != (longlong *)0x0) {
          (**(code **)(*(longlong *)puVar5[4] + 0x38))();
        }
        *puVar5 = &unknown_var_3456_ptr;
        if (puVar5[1] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puVar5[1] = 0;
        *(int32_t *)(puVar5 + 3) = 0;
        *puVar5 = &unknown_var_720_ptr;
        puVar5 = puVar5 + 10;
      } while (puVar5 != puVar7);
      puVar5 = (uint64_t *)*param_1;
    }
    if (puVar5 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar5);
    }
    *param_1 = puVar2;
    param_1[1] = puVar6 + param_2 * 10;
    param_1[2] = puVar2 + uVar4 * 10;
  }
  else {
    if (param_2 != 0) {
      puVar5 = puVar7 + 7;
      uVar4 = param_2;
      do {
        *puVar7 = &unknown_var_720_ptr;
        puVar5[-6] = 0;
        *(int32_t *)(puVar5 + -5) = 0;
        *puVar7 = &unknown_var_3456_ptr;
        puVar5[-4] = 0;
        puVar5[-6] = 0;
        *(int32_t *)(puVar5 + -5) = 0;
        puVar5[-3] = 0;
        puVar5[-2] = 0;
        puVar5[-1] = &unknown_var_720_ptr;
        *puVar5 = 0;
        *(int32_t *)(puVar5 + 1) = 0;
        puVar5[-1] = &unknown_var_3456_ptr;
        puVar5[2] = 0;
        *puVar5 = 0;
        *(int32_t *)(puVar5 + 1) = 0;
        plVar1 = (longlong *)puVar5[-2];
        puVar5[-2] = 0;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x38))();
        }
        puVar7 = puVar7 + 10;
        puVar5 = puVar5 + 10;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      puVar7 = (uint64_t *)param_1[1];
    }
    param_1[1] = puVar7 + param_2 * 10;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1804c0610(longlong *param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             uint *param_5)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint64_t uVar5;
  bool bVar6;
  
  plVar2 = (longlong *)*param_1;
  if ((param_4 == plVar2) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = plVar2, *(uint *)(plVar2 + 4) < *param_5)) {
LAB_1804c066f:
      uVar5 = 0;
      goto LAB_1804c0672;
    }
  }
  else {
    plVar2 = (longlong *)func_0x00018066bd70(param_4);
    if ((*(uint *)(param_4 + 4) < *param_5) && (*param_5 < *(uint *)(plVar2 + 4))) {
      if (*param_4 == 0) goto LAB_1804c066f;
      uVar5 = 1;
      param_4 = plVar2;
LAB_1804c0672:
      if (param_4 != (longlong *)0x0) {
        FUN_1804c0bc0(param_1,param_2,param_4,uVar5,param_5);
        return param_2;
      }
    }
  }
  bVar6 = true;
  plVar2 = param_1;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
    do {
      plVar2 = plVar3;
      bVar6 = *param_5 < *(uint *)(plVar2 + 4);
      if (bVar6) {
        plVar3 = (longlong *)plVar2[1];
      }
      else {
        plVar3 = (longlong *)*plVar2;
      }
    } while (plVar3 != (longlong *)0x0);
  }
  plVar3 = plVar2;
  if (bVar6) {
    if (plVar2 == (longlong *)param_1[1]) {
      uVar1 = *param_5;
      goto FUN_1804c06ea;
    }
    plVar3 = (longlong *)func_0x00018066b9a0(plVar2);
  }
  uVar1 = *param_5;
  if (uVar1 <= *(uint *)(plVar3 + 4)) {
    *param_2 = plVar3;
    return param_2;
  }
FUN_1804c06ea:
  if ((plVar2 == param_1) || (uVar1 < *(uint *)(plVar2 + 4))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0x30,(char)param_1[5]);
  *(uint *)(lVar4 + 0x20) = *param_5;
  *(uint64_t *)(lVar4 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,plVar2,param_1,uVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1804c06ea(void)
void FUN_1804c06ea(void)

{
  longlong lVar1;
  int32_t *unaff_RSI;
  longlong unaff_RDI;
  
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x30,*(int8_t *)(unaff_RDI + 0x28));
  *(int32_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(uint64_t *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1804c0701(void)
void FUN_1804c0701(void)

{
  longlong lVar1;
  int32_t *unaff_RSI;
  longlong unaff_RDI;
  
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x30,*(int8_t *)(unaff_RDI + 0x28));
  *(int32_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(uint64_t *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1804c0705(void)
void FUN_1804c0705(void)

{
  longlong lVar1;
  int32_t *unaff_RSI;
  longlong unaff_RDI;
  
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x30,*(int8_t *)(unaff_RDI + 0x28));
  *(int32_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(uint64_t *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}







// 函数: void FUN_1804c0748(void)
void FUN_1804c0748(void)

{
  uint64_t unaff_RBX;
  uint64_t *unaff_R14;
  
  *unaff_R14 = unaff_RBX;
  return;
}



longlong * FUN_1804c0770(longlong param_1,uint64_t param_2,longlong *param_3)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  longlong *plVar4;
  char *pcVar5;
  byte *pbVar6;
  byte bVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbStack_28;
  uint64_t uStack_20;
  
  pcVar3 = (char *)*param_3;
  if (*pcVar3 != '!') {
    if (*pcVar3 != '?') {
      plVar4 = (longlong *)FUN_1804c1300(param_1 + 0x60,0x60);
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[4] = 0;
      *(int32_t *)(plVar4 + 5) = 1;
      plVar4[6] = 0;
      plVar4[8] = 0;
      pbVar6 = (byte *)*param_3;
      cVar2 = (&unknown_var_9984_ptr)[*pbVar6];
      pbVar8 = pbVar6;
      while (cVar2 != '\0') {
        pbVar1 = pbVar8 + 1;
        pbVar8 = pbVar8 + 1;
        cVar2 = (&unknown_var_9984_ptr)[*pbVar1];
      }
      *param_3 = (longlong)pbVar8;
      if (pbVar8 == pbVar6) {
        pbStack_28 = pbVar8;
        uStack_20 = param_2;
        FUN_18062e140(&unknown_var_7904_ptr,&pbStack_28);
        pbVar8 = (byte *)*param_3;
      }
      *plVar4 = (longlong)pbVar6;
      plVar4[2] = (longlong)pbVar8 - (longlong)pbVar6;
      pbVar6 = (byte *)*param_3;
      cVar2 = (&unknown_var_496_ptr)[*pbVar6];
      while (cVar2 != '\0') {
        pbVar8 = pbVar6 + 1;
        pbVar6 = pbVar6 + 1;
        cVar2 = (&unknown_var_496_ptr)[*pbVar8];
      }
      *param_3 = (longlong)pbVar6;
      FUN_1804c1510(param_1,param_2,param_3,plVar4);
      pbVar6 = (byte *)*param_3;
      if (*pbVar6 == 0x3e) {
        *param_3 = (longlong)(pbVar6 + 1);
        FUN_1804c17a0(param_1,param_2,param_3,plVar4);
      }
      else if (*pbVar6 == 0x2f) {
        pbStack_28 = pbVar6 + 1;
        *param_3 = (longlong)pbStack_28;
        if (*pbStack_28 != 0x3e) {
          uStack_20 = param_2;
          FUN_18062e140(&unknown_var_7952_ptr,&pbStack_28);
          pbStack_28 = (byte *)*param_3;
        }
        *param_3 = (longlong)(pbStack_28 + 1);
      }
      else {
        pbStack_28 = pbVar6;
        uStack_20 = param_2;
        FUN_18062e140(&unknown_var_7952_ptr,&pbStack_28);
      }
      if (*plVar4 == 0) {
        uRam0000000180d48d24 = 0;
      }
      else {
        *(int8_t *)(*plVar4 + plVar4[2]) = 0;
      }
      return plVar4;
    }
    pbStack_28 = (byte *)(pcVar3 + 1);
    *param_3 = (longlong)pbStack_28;
    bVar7 = *pbStack_28;
    if (((((bVar7 + 0xa8 & 0xdf) == 0) && ((pcVar3[2] + 0xb3U & 0xdf) == 0)) &&
        ((pcVar3[3] + 0xb4U & 0xdf) == 0)) && ((&unknown_var_496_ptr)[(byte)pcVar3[4]] != '\0')) {
      pbStack_28 = (byte *)(pcVar3 + 5);
      while( true ) {
        *param_3 = (longlong)pbStack_28;
        if ((*pbStack_28 == 0x3f) && (pbStack_28[1] == 0x3e)) break;
        if (*pbStack_28 == 0) {
          uStack_20 = param_2;
          FUN_18062e140(&unknown_var_7928_ptr,&pbStack_28);
          pbStack_28 = (byte *)*param_3;
        }
        pbStack_28 = pbStack_28 + 1;
      }
      *param_3 = (longlong)(pbStack_28 + 2);
      return (longlong *)0x0;
    }
    while ((bVar7 != 0x3f || (pbStack_28[1] != 0x3e))) {
      if (bVar7 == 0) {
        uStack_20 = param_2;
        FUN_18062e140(&unknown_var_7928_ptr,&pbStack_28);
        pbStack_28 = (byte *)*param_3;
      }
      pbStack_28 = pbStack_28 + 1;
      *param_3 = (longlong)pbStack_28;
      bVar7 = *pbStack_28;
    }
    *param_3 = (longlong)(pbStack_28 + 2);
    return (longlong *)0x0;
  }
  cVar2 = pcVar3[1];
  pcVar5 = pcVar3 + 1;
  if (cVar2 == '-') {
    if (pcVar3[2] == '-') {
      pbStack_28 = (byte *)(pcVar3 + 3);
      while( true ) {
        *param_3 = (longlong)pbStack_28;
        if (((*pbStack_28 == 0x2d) && (pbStack_28[1] == 0x2d)) && (pbStack_28[2] == 0x3e)) break;
        if (*pbStack_28 == 0) {
          FUN_18062e140(&unknown_var_7928_ptr,&stack0xffffffffffffffe8);
          pbStack_28 = (byte *)*param_3;
        }
        pbStack_28 = pbStack_28 + 1;
      }
LAB_1804c091f:
      *param_3 = (longlong)(pbStack_28 + 3);
      return (longlong *)0x0;
    }
  }
  else if (cVar2 == 'D') {
    if (((((pcVar3[2] == 'O') && (pcVar3[3] == 'C')) &&
         ((pcVar3[4] == 'T' && ((pcVar3[5] == 'Y' && (pcVar3[6] == 'P')))))) && (pcVar3[7] == 'E'))
       && ((&unknown_var_496_ptr)[(byte)pcVar3[8]] != '\0')) {
      pbVar6 = (byte *)(pcVar3 + 9);
      *param_3 = (longlong)pbVar6;
      bVar7 = *pbVar6;
      do {
        if (bVar7 == 0x3e) {
          *param_3 = (longlong)(pbVar6 + 1);
          return (longlong *)0x0;
        }
        if (bVar7 == 0) {
          FUN_18062e140(&unknown_var_7928_ptr,&stack0xffffffffffffffe8);
          pbVar6 = (byte *)*param_3;
LAB_1804c0a21:
          pbVar6 = pbVar6 + 1;
          *param_3 = (longlong)pbVar6;
        }
        else {
          if (bVar7 != 0x5b) goto LAB_1804c0a21;
          pbVar6 = pbVar6 + 1;
          iVar9 = 1;
          *param_3 = (longlong)pbVar6;
          do {
            bVar7 = *pbVar6;
            if (bVar7 == 0) {
              pbStack_28 = pbVar6;
              uStack_20 = param_2;
              FUN_18062e140(&unknown_var_7928_ptr,&pbStack_28);
              pbVar6 = (byte *)*param_3;
            }
            else if (bVar7 == 0x5b) {
              iVar9 = iVar9 + 1;
            }
            else if (bVar7 == 0x5d) {
              iVar9 = iVar9 + -1;
            }
            pbVar6 = pbVar6 + 1;
            *param_3 = (longlong)pbVar6;
          } while (0 < iVar9);
        }
        bVar7 = *pbVar6;
      } while( true );
    }
  }
  else if ((((cVar2 == '[') && (pcVar3[2] == 'C')) && (pcVar3[3] == 'D')) &&
          (((pcVar3[4] == 'A' && (pcVar3[5] == 'T')) && ((pcVar3[6] == 'A' && (pcVar3[7] == '[')))))
          ) {
    pbStack_28 = (byte *)(pcVar3 + 8);
    while( true ) {
      *param_3 = (longlong)pbStack_28;
      if (((*pbStack_28 == 0x5d) && (pbStack_28[1] == 0x5d)) && (pbStack_28[2] == 0x3e)) break;
      if (*pbStack_28 == 0) {
        uStack_20 = param_2;
        FUN_18062e140(&unknown_var_7928_ptr,&pbStack_28);
        pbStack_28 = (byte *)*param_3;
      }
      pbStack_28 = pbStack_28 + 1;
    }
    goto LAB_1804c091f;
  }
  *param_3 = (longlong)pcVar5;
  cVar2 = *pcVar5;
  while (cVar2 != '>') {
    if (cVar2 == '\0') {
      FUN_18062e140(&unknown_var_7928_ptr,&stack0xffffffffffffffe8);
      pcVar5 = (char *)*param_3;
    }
    pcVar5 = pcVar5 + 1;
    *param_3 = (longlong)pcVar5;
    cVar2 = *pcVar5;
  }
  *param_3 = (longlong)(pcVar5 + 1);
  return (longlong *)0x0;
}



uint64_t
FUN_1804c099f(char param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5,char *param_6)

{
  char cVar1;
  char *in_RAX;
  int iVar2;
  uint64_t unaff_RSI;
  uint64_t *unaff_RDI;
  
  do {
    if (param_1 == '\0') {
      param_6 = in_RAX;
      FUN_18062e140(&unknown_var_7928_ptr,&param_6);
      in_RAX = (char *)*unaff_RDI;
LAB_1804c0a21:
      in_RAX = in_RAX + 1;
      *unaff_RDI = in_RAX;
    }
    else {
      if (param_1 != '[') goto LAB_1804c0a21;
      in_RAX = in_RAX + 1;
      iVar2 = 1;
      *unaff_RDI = in_RAX;
      do {
        cVar1 = *in_RAX;
        if (cVar1 == '\0') {
          param_5 = unaff_RSI;
          FUN_18062e140(&unknown_var_7928_ptr,&stack0x00000020,param_3,param_4,in_RAX);
          in_RAX = (char *)*unaff_RDI;
        }
        else if (cVar1 == '[') {
          iVar2 = iVar2 + 1;
        }
        else if (cVar1 == ']') {
          iVar2 = iVar2 + -1;
        }
        in_RAX = in_RAX + 1;
        *unaff_RDI = in_RAX;
      } while (0 < iVar2);
    }
    param_1 = *in_RAX;
    if (param_1 == '>') {
      *unaff_RDI = in_RAX + 1;
      return 0;
    }
  } while( true );
}



uint64_t FUN_1804c0a38(void)

{
  longlong in_RAX;
  longlong *unaff_RDI;
  
  *unaff_RDI = in_RAX + 1;
  return 0;
}



uint64_t *
FUN_1804c0af0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_720_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0xa8,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1804c0b30(int *param_1)
void FUN_1804c0b30(int *param_1)

{
  uint64_t uVar1;
  
  if (param_1[1] < 1) {
    if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  uVar1 = FUN_18062b420(_DAT_180c8ed18,(longlong)param_1[1] * 0xa8,(char)param_1[8]);
  if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0xa8);
  }
  *(uint64_t *)(param_1 + 2) = uVar1;
  return;
}







// 函数: void FUN_1804c0b54(void)
void FUN_1804c0b54(void)

{
  uint64_t uVar1;
  int *unaff_RBX;
  
  uVar1 = FUN_18062b420();
  if (*(longlong *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(longlong *)(unaff_RBX + 2),(longlong)*unaff_RBX * 0xa8);
  }
  *(uint64_t *)(unaff_RBX + 2) = uVar1;
  return;
}







// 函数: void FUN_1804c0b99(longlong param_1)
void FUN_1804c0b99(longlong param_1)

{
  longlong unaff_RBX;
  
  if (*(longlong *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(unaff_RBX + 8) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1804c0bc0(longlong param_1,uint64_t param_2,longlong param_3,char param_4,uint *param_5)
void FUN_1804c0bc0(longlong param_1,uint64_t param_2,longlong param_3,char param_4,uint *param_5)

{
  longlong lVar1;
  int32_t uVar2;
  
  if (((param_4 == '\0') && (param_3 != param_1)) && (*(uint *)(param_3 + 0x20) <= *param_5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x30,*(int8_t *)(param_1 + 0x28));
  *(uint *)(lVar1 + 0x20) = *param_5;
  *(uint64_t *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1,param_3,param_1,uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1804c0c60(longlong param_1,longlong param_2)
void FUN_1804c0c60(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint64_t uVar2;
  
  uVar1 = param_2 * 8 + 8;
  if (uVar1 < 0x19) {
    uVar2 = *(uint64_t *)(param_1 + 0x60);
  }
  else {
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,uVar1,8,*(int8_t *)(param_1 + 0x50));
  }
                    // WARNING: Subroutine does not return
  memset(uVar2,0,param_2 * 8);
}







// 函数: void FUN_1804c0cc0(longlong param_1,ulonglong param_2)
void FUN_1804c0cc0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  
  lVar1 = FUN_1804c0c60();
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    puVar4 = *(uint64_t **)(param_1 + 8);
    uVar3 = 0;
  }
  else {
    do {
      puVar4 = *(uint64_t **)(param_1 + 8);
      piVar2 = (int *)puVar4[uVar5];
      if (piVar2 != (int *)0x0) {
        do {
          uVar3 = (ulonglong)(longlong)*piVar2 % (param_2 & 0xffffffff);
          *(uint64_t *)(*(longlong *)(param_1 + 8) + uVar5 * 8) = *(uint64_t *)(piVar2 + 2);
          *(uint64_t *)(piVar2 + 2) = *(uint64_t *)(lVar1 + uVar3 * 8);
          *(int **)(lVar1 + uVar3 * 8) = piVar2;
          puVar4 = *(uint64_t **)(param_1 + 8);
          piVar2 = (int *)puVar4[uVar5];
        } while (piVar2 != (int *)0x0);
      }
      uVar3 = *(ulonglong *)(param_1 + 0x10);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if ((1 < uVar3) && (puVar4 != *(uint64_t **)(param_1 + 0x60))) {
    if ((puVar4 < *(uint64_t **)(param_1 + 0x58)) || (*(uint64_t **)(param_1 + 0x40) <= puVar4))
    {
      if (puVar4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar4);
      }
    }
    else {
      *puVar4 = *(uint64_t *)(param_1 + 0x30);
      *(uint64_t **)(param_1 + 0x30) = puVar4;
    }
  }
  *(ulonglong *)(param_1 + 0x10) = param_2;
  *(longlong *)(param_1 + 8) = lVar1;
  return;
}



longlong * FUN_1804c0d90(longlong param_1,uint64_t param_2,uint64_t *param_3)

{
  byte *pbVar1;
  char cVar2;
  longlong *plVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbStack_28;
  uint64_t uStack_20;
  
  plVar3 = (longlong *)FUN_1804c1300(param_1 + 0x60,0x60);
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[4] = 0;
  *(int32_t *)(plVar3 + 5) = 1;
  plVar3[6] = 0;
  plVar3[8] = 0;
  pbVar4 = (byte *)*param_3;
  cVar2 = (&unknown_var_9984_ptr)[*pbVar4];
  pbVar5 = pbVar4;
  while (cVar2 != '\0') {
    pbVar1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    cVar2 = (&unknown_var_9984_ptr)[*pbVar1];
  }
  *param_3 = pbVar5;
  if (pbVar5 == pbVar4) {
    pbStack_28 = pbVar5;
    uStack_20 = param_2;
    FUN_18062e140(&unknown_var_7904_ptr,&pbStack_28);
    pbVar5 = (byte *)*param_3;
  }
  *plVar3 = (longlong)pbVar4;
  plVar3[2] = (longlong)pbVar5 - (longlong)pbVar4;
  pbVar4 = (byte *)*param_3;
  cVar2 = (&unknown_var_496_ptr)[*pbVar4];
  while (cVar2 != '\0') {
    pbVar5 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    cVar2 = (&unknown_var_496_ptr)[*pbVar5];
  }
  *param_3 = pbVar4;
  FUN_1804c1510(param_1,param_2,param_3,plVar3);
  pbVar4 = (byte *)*param_3;
  if (*pbVar4 == 0x3e) {
    *param_3 = pbVar4 + 1;
    FUN_1804c17a0(param_1,param_2,param_3,plVar3);
  }
  else if (*pbVar4 == 0x2f) {
    pbStack_28 = pbVar4 + 1;
    *param_3 = pbStack_28;
    if (*pbStack_28 != 0x3e) {
      uStack_20 = param_2;
      FUN_18062e140(&unknown_var_7952_ptr,&pbStack_28);
      pbStack_28 = (byte *)*param_3;
    }
    *param_3 = pbStack_28 + 1;
  }
  else {
    pbStack_28 = pbVar4;
    uStack_20 = param_2;
    FUN_18062e140(&unknown_var_7952_ptr,&pbStack_28);
  }
  if (*plVar3 == 0) {
    uRam0000000180d48d24 = 0;
  }
  else {
    *(int8_t *)(*plVar3 + plVar3[2]) = 0;
  }
  return plVar3;
}







// 函数: void FUN_1804c0f80(int param_1,int param_2,longlong *param_3)
void FUN_1804c0f80(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (longlong)param_1;
  if (lVar2 < param_2) {
    lVar3 = lVar2 * 0x58;
    lVar2 = param_2 - lVar2;
    do {
      lVar1 = *(longlong *)(*param_3 + 0x398);
      if (*(longlong *)(lVar3 + 0x20 + lVar1) != 0) {
        FUN_1804b2270(*param_3,lVar1 + 0x28 + lVar3);
      }
      lVar3 = lVar3 + 0x58;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}







// 函数: void FUN_1804c0f98(void)
void FUN_1804c0f98(void)

{
  longlong lVar1;
  longlong in_RAX;
  longlong lVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar3;
  
  lVar2 = in_RAX * 0x58;
  lVar3 = unaff_RDI - in_RAX;
  do {
    lVar1 = *(longlong *)(*unaff_RSI + 0x398);
    if (*(longlong *)(lVar2 + 0x20 + lVar1) != 0) {
      FUN_1804b2270(*unaff_RSI,lVar1 + 0x28 + lVar2);
    }
    lVar2 = lVar2 + 0x58;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}







// 函数: void FUN_1804c0fdf(void)
void FUN_1804c0fdf(void)

{
  return;
}







// 函数: void FUN_1804c1030(int param_1,int param_2,longlong *param_3)
void FUN_1804c1030(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = (longlong)param_1;
  if (lVar2 < param_2) {
    lVar6 = lVar2 * 400;
    lVar2 = param_2 - lVar2;
    do {
      lVar1 = *param_3;
      lVar4 = *(longlong *)(lVar1 + 0x388) + lVar6;
      uVar3 = 0;
      plVar5 = (longlong *)(lVar4 + 0x40);
      do {
        if (*plVar5 != 0) {
          FUN_1804b2270(lVar1,(longlong)(int)uVar3 * 0x30 + 0x70 + lVar4);
        }
        uVar3 = uVar3 + 1;
        plVar5 = plVar5 + 1;
      } while (uVar3 < 6);
      lVar6 = lVar6 + 400;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}







// 函数: void FUN_1804c104a(void)
void FUN_1804c104a(void)

{
  longlong lVar1;
  longlong in_RAX;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *unaff_R12;
  longlong lVar5;
  longlong unaff_R15;
  longlong lVar6;
  
  lVar5 = in_RAX * 400;
  lVar6 = unaff_R15 - in_RAX;
  do {
    lVar1 = *unaff_R12;
    lVar3 = *(longlong *)(lVar1 + 0x388) + lVar5;
    uVar2 = 0;
    plVar4 = (longlong *)(lVar3 + 0x40);
    do {
      if (*plVar4 != 0) {
        FUN_1804b2270(lVar1,(longlong)(int)uVar2 * 0x30 + 0x70 + lVar3);
      }
      uVar2 = uVar2 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar2 < 6);
    lVar5 = lVar5 + 400;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}







// 函数: void FUN_1804c10d7(void)
void FUN_1804c10d7(void)

{
  return;
}







// 函数: void FUN_1804c1120(int param_1,int param_2,longlong *param_3)
void FUN_1804c1120(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = (longlong)param_1;
  if (lVar2 < param_2) {
    lVar6 = lVar2 * 400;
    lVar2 = param_2 - lVar2;
    do {
      lVar1 = *param_3;
      lVar4 = *(longlong *)(lVar1 + 0x378) + lVar6;
      uVar3 = 0;
      plVar5 = (longlong *)(lVar4 + 0x40);
      do {
        if (*plVar5 != 0) {
          FUN_1804b2270(lVar1,(longlong)(int)uVar3 * 0x30 + 0x70 + lVar4);
        }
        uVar3 = uVar3 + 1;
        plVar5 = plVar5 + 1;
      } while (uVar3 < 6);
      lVar6 = lVar6 + 400;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}







// 函数: void FUN_1804c113a(void)
void FUN_1804c113a(void)

{
  longlong lVar1;
  longlong in_RAX;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *unaff_R12;
  longlong lVar5;
  longlong unaff_R15;
  longlong lVar6;
  
  lVar5 = in_RAX * 400;
  lVar6 = unaff_R15 - in_RAX;
  do {
    lVar1 = *unaff_R12;
    lVar3 = *(longlong *)(lVar1 + 0x378) + lVar5;
    uVar2 = 0;
    plVar4 = (longlong *)(lVar3 + 0x40);
    do {
      if (*plVar4 != 0) {
        FUN_1804b2270(lVar1,(longlong)(int)uVar2 * 0x30 + 0x70 + lVar3);
      }
      uVar2 = uVar2 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar2 < 6);
    lVar5 = lVar5 + 400;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}







// 函数: void FUN_1804c11c7(void)
void FUN_1804c11c7(void)

{
  return;
}







// 函数: void FUN_1804c1210(uint64_t *param_1)
void FUN_1804c1210(uint64_t *param_1)

{
  uint64_t auStack_30 [2];
  void *puStack_20;
  void *puStack_18;
  
  auStack_30[0] = *param_1;
  puStack_20 = &unknown_var_5584_ptr;
  puStack_18 = &unknown_var_5568_ptr;
  FUN_18005c650(auStack_30);
  return;
}







