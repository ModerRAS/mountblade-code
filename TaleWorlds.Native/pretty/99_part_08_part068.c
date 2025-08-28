#include "TaleWorlds.Native.Split.h"

// 99_part_08_part068.c - 6 个函数

// 函数: void FUN_1805b6bea(uint64_t param_1,float param_2)
void FUN_1805b6bea(uint64_t param_1,float param_2)

{
  float *in_RAX;
  longlong unaff_RBX;
  
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  *in_RAX = param_2;
  *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x10000;
  return;
}



uint64_t * FUN_1805b6c30(longlong param_1)

{
  uint64_t uVar1;
  longlong lVar2;
  
  if ((*(uint *)(param_1 + 8) >> 0x12 & 1) != 0) {
    return (uint64_t *)(param_1 + 0x78);
  }
  if ((*(uint *)(param_1 + 8) >> 9 & 1) == 0) {
    func_0x0001805d4cd0();
  }
  lVar2 = *(longlong *)(param_1 + 0xe0);
  if (lVar2 != 0) {
    if ((*(uint *)(param_1 + 8) & 0x200) == 0) {
      func_0x0001805d4cd0(param_1);
      lVar2 = *(longlong *)(param_1 + 0xe0);
    }
    uVar1 = *(uint64_t *)(*(longlong *)(lVar2 + 0x20) + 0x204);
    *(uint64_t *)(param_1 + 0x78) = *(uint64_t *)(*(longlong *)(lVar2 + 0x20) + 0x1fc);
    *(uint64_t *)(param_1 + 0x80) = uVar1;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40000;
    return (uint64_t *)(param_1 + 0x78);
  }
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x80) = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40000;
  return (uint64_t *)(param_1 + 0x78);
}



uint64_t * FUN_1805b6cc0(longlong param_1)

{
  uint64_t uVar1;
  longlong lVar2;
  
  if ((*(uint *)(param_1 + 8) >> 0x11 & 1) != 0) {
    return (uint64_t *)(param_1 + 0x88);
  }
  if ((*(uint *)(param_1 + 8) >> 9 & 1) == 0) {
    func_0x0001805d4cd0();
  }
  lVar2 = *(longlong *)(param_1 + 0xe0);
  if (lVar2 != 0) {
    if ((*(uint *)(param_1 + 8) & 0x200) == 0) {
      func_0x0001805d4cd0(param_1);
      lVar2 = *(longlong *)(param_1 + 0xe0);
    }
    uVar1 = *(uint64_t *)(*(longlong *)(lVar2 + 0x20) + 0x2c);
    *(uint64_t *)(param_1 + 0x88) = *(uint64_t *)(*(longlong *)(lVar2 + 0x20) + 0x24);
    *(uint64_t *)(param_1 + 0x90) = uVar1;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x20000;
    return (uint64_t *)(param_1 + 0x88);
  }
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(uint64_t *)(param_1 + 0x90) = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x20000;
  return (uint64_t *)(param_1 + 0x88);
}



float * FUN_1805b6d50(longlong param_1)

{
  uint64_t uVar1;
  longlong lVar2;
  
  if ((*(uint *)(param_1 + 8) & 8) != 0) {
    return (float *)(param_1 + 0x98);
  }
  if ((*(uint *)(param_1 + 8) >> 9 & 1) == 0) {
    func_0x0001805d4cd0();
  }
  lVar2 = *(longlong *)(param_1 + 0xe0);
  if (lVar2 != 0) {
    if ((*(uint *)(param_1 + 8) >> 0x12 & 1) == 0) {
      if ((*(uint *)(param_1 + 8) >> 9 & 1) == 0) {
        func_0x0001805d4cd0(param_1);
        lVar2 = *(longlong *)(param_1 + 0xe0);
      }
      if (lVar2 == 0) {
        *(uint64_t *)(param_1 + 0x78) = 0;
        *(uint64_t *)(param_1 + 0x80) = 0;
      }
      else {
        if ((*(uint *)(param_1 + 8) & 0x200) == 0) {
          func_0x0001805d4cd0(param_1);
          lVar2 = *(longlong *)(param_1 + 0xe0);
        }
        uVar1 = *(uint64_t *)(*(longlong *)(lVar2 + 0x20) + 0x204);
        *(uint64_t *)(param_1 + 0x78) = *(uint64_t *)(*(longlong *)(lVar2 + 0x20) + 0x1fc);
        *(uint64_t *)(param_1 + 0x80) = uVar1;
      }
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40000;
    }
    *(float *)(param_1 + 0x98) =
         SQRT(*(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x78) +
              *(float *)(param_1 + 0x7c) * *(float *)(param_1 + 0x7c) +
              *(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x80));
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
    return (float *)(param_1 + 0x98);
  }
  *(float *)(param_1 + 0x98) = 0.0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  return (float *)(param_1 + 0x98);
}



longlong FUN_1805b6e50(longlong param_1)

{
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    FUN_1805d3770();
    return param_1 + 0x9c;
  }
  return param_1 + 0x9c;
}



uint64_t * FUN_1805b6ec0(uint64_t *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  
  if ((*(uint *)(param_1 + 1) & 0x20000000) != 0) {
    return param_1 + 0x15;
  }
  lVar1 = *(longlong *)*param_1;
  *(int8_t *)(param_1 + 0x15) = 0;
  if ((*(uint *)(lVar1 + 0x56c) & 0x4000) != 0) {
    lVar8 = 0;
    do {
      if (*(char *)(param_1 + 0x15) != '\0') break;
      lVar9 = *(longlong *)(lVar1 + 0x8f8) + lVar8;
      if (0 < *(int *)(lVar9 + 0x38)) {
        lVar2 = *(longlong *)(lVar9 + 0xd8);
        uVar3 = *(ulonglong *)((longlong)*(int *)(lVar9 + 0xf8) * 0xa0 + 0x50 + lVar2);
        uVar10 = (uint)uVar3;
        if (((((uVar3 >> 9 & 1) == 0) || (0 < *(short *)(lVar9 + 0x10))) &&
            ((cVar5 = func_0x000180534fb0(lVar9 + 8), cVar5 == '\0' ||
             (0 < *(short *)(lVar9 + 0x10))))) && ((uVar10 & 0x103) != 0x100)) {
          lVar7 = 0;
          iVar4 = (int)((*(longlong *)(lVar9 + 0xe0) - lVar2) / 0xa0);
          if (0 < iVar4) {
            pbVar6 = (byte *)(lVar2 + 0x50);
            do {
              if ((*pbVar6 & 0x40) != 0) {
                *(int8_t *)(param_1 + 0x15) = 1;
                break;
              }
              lVar7 = lVar7 + 1;
              pbVar6 = pbVar6 + 0xa0;
            } while (lVar7 < iVar4);
          }
        }
      }
      lVar8 = lVar8 + 0x1f8;
    } while (lVar8 < 0x9d8);
  }
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x20000000;
  return param_1 + 0x15;
}



longlong FUN_1805b6ed9(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  longlong *in_RAX;
  byte *pbVar6;
  longlong lVar7;
  longlong unaff_RBX;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  
  lVar1 = *in_RAX;
  *(int8_t *)(param_1 + 0xa8) = 0;
  if ((*(uint *)(lVar1 + 0x56c) & 0x4000) != 0) {
    lVar8 = 0;
    do {
      if (*(char *)(unaff_RBX + 0xa8) != '\0') break;
      lVar9 = *(longlong *)(lVar1 + 0x8f8) + lVar8;
      if (0 < *(int *)(lVar9 + 0x38)) {
        lVar2 = *(longlong *)(lVar9 + 0xd8);
        uVar3 = *(ulonglong *)((longlong)*(int *)(lVar9 + 0xf8) * 0xa0 + 0x50 + lVar2);
        uVar10 = (uint)uVar3;
        if (((((uVar3 >> 9 & 1) == 0) || (0 < *(short *)(lVar9 + 0x10))) &&
            ((cVar5 = func_0x000180534fb0(lVar9 + 8), cVar5 == '\0' ||
             (0 < *(short *)(lVar9 + 0x10))))) && ((uVar10 & 0x103) != 0x100)) {
          lVar7 = 0;
          iVar4 = (int)((*(longlong *)(lVar9 + 0xe0) - lVar2) / 0xa0);
          if (0 < iVar4) {
            pbVar6 = (byte *)(lVar2 + 0x50);
            do {
              if ((*pbVar6 & 0x40) != 0) {
                *(int8_t *)(unaff_RBX + 0xa8) = 1;
                break;
              }
              lVar7 = lVar7 + 1;
              pbVar6 = pbVar6 + 0xa0;
            } while (lVar7 < iVar4);
          }
        }
      }
      lVar8 = lVar8 + 0x1f8;
    } while (lVar8 < 0x9d8);
  }
  *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x20000000;
  return unaff_RBX + 0xa8;
}



longlong FUN_1805b6ef8(void)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  char cVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  
  lVar7 = 0;
  do {
    if (*(char *)(unaff_RBX + 0xa8) != '\0') break;
    lVar8 = *(longlong *)(unaff_RBP + 0x8f8) + lVar7;
    if (0 < *(int *)(lVar8 + 0x38)) {
      lVar1 = *(longlong *)(lVar8 + 0xd8);
      uVar2 = *(ulonglong *)((longlong)*(int *)(lVar8 + 0xf8) * 0xa0 + 0x50 + lVar1);
      uVar9 = (uint)uVar2;
      if (((((uVar2 >> 9 & 1) == 0) || (0 < *(short *)(lVar8 + 0x10))) &&
          ((cVar4 = func_0x000180534fb0(lVar8 + 8), cVar4 == '\0' || (0 < *(short *)(lVar8 + 0x10)))
          )) && ((uVar9 & 0x103) != 0x100)) {
        lVar6 = 0;
        iVar3 = (int)((*(longlong *)(lVar8 + 0xe0) - lVar1) / 0xa0);
        if (0 < iVar3) {
          pbVar5 = (byte *)(lVar1 + 0x50);
          do {
            if ((*pbVar5 & 0x40) != 0) {
              *(int8_t *)(unaff_RBX + 0xa8) = 1;
              break;
            }
            lVar6 = lVar6 + 1;
            pbVar5 = pbVar5 + 0xa0;
          } while (lVar6 < iVar3);
        }
      }
    }
    lVar7 = lVar7 + 0x1f8;
  } while (lVar7 < 0x9d8);
  *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x20000000;
  return unaff_RBX + 0xa8;
}



longlong FUN_1805b6fef(void)

{
  longlong unaff_RBX;
  
  *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x20000000;
  return unaff_RBX + 0xa8;
}



longlong FUN_1805b7008(longlong param_1)

{
  return param_1 + 0xa8;
}



uint64_t * FUN_1805b7080(uint64_t *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  int aiStackX_8 [2];
  int32_t auStackX_10 [2];
  int32_t auStackX_18 [2];
  int8_t auStackX_20 [8];
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((uVar1 >> 0x17 & 1) != 0) {
    return param_1 + 0x17;
  }
  *(int8_t *)(param_1 + 0x17) = 0;
  if ((uVar1 & 0x20) == 0) {
    plVar4 = *(longlong **)(*(longlong *)(*(longlong *)*param_1 + 0x8f8) + 0x9e8);
    param_1[0x14] = plVar4;
    *(uint *)(param_1 + 1) = uVar1 | 0x20;
  }
  else {
    plVar4 = (longlong *)param_1[0x14];
  }
  if ((plVar4 != (longlong *)0x0) &&
     (uVar2 = *(ulonglong *)((longlong)(int)plVar4[0x1e] * 0xa0 + 0x50 + plVar4[0x1a]),
     (uVar2 >> 0x13 & 1) != 0)) {
    if ((uVar2 >> 8 & 1) == 0) {
      if ((*plVar4 != 0) && (0 < *(short *)(*plVar4 + 8))) goto LAB_1805b71a6;
    }
    else if (*(short *)((longlong)plVar4 + 10) != 0) {
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x800000;
      return param_1 + 0x17;
    }
    lVar3 = *(longlong *)*param_1;
    if ((*(longlong **)(lVar3 + 0x628) == plVar4) && (*(int *)(lVar3 + 0x644) == -1)) {
      aiStackX_8[0] = *(int *)(lVar3 + 0x638);
    }
    else {
      auStackX_10[0] = 0xffffffff;
      aiStackX_8[0] = -1;
      auStackX_18[0] = 0xffffffff;
      FUN_18050e440(lVar3,plVar4,aiStackX_8,auStackX_18,auStackX_10,auStackX_20,0xffffffff);
    }
    if (0 < aiStackX_8[0]) {
      *(int8_t *)(param_1 + 0x17) = 1;
    }
  }
LAB_1805b71a6:
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x800000;
  return param_1 + 0x17;
}



longlong FUN_1805b7230(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) & 0x4000) == 0) {
    FUN_1805d53a0();
    return param_1 + 0xbb;
  }
  return param_1 + 0xbb;
}



longlong FUN_1805b73c0(longlong param_1)

{
  if ((*(byte *)(param_1 + 8) & 0x80) == 0) {
    FUN_1805d4440();
    return param_1 + 0xcc;
  }
  return param_1 + 0xcc;
}



longlong FUN_1805b73f0(longlong param_1)

{
  if ((*(byte *)(param_1 + 8) & 0x80) == 0) {
    FUN_1805d4440();
    return param_1 + 0xcd;
  }
  return param_1 + 0xcd;
}



longlong FUN_1805b7420(longlong param_1)

{
  if ((*(byte *)(param_1 + 8) & 0x80) == 0) {
    FUN_1805d4440();
    return param_1 + 0xce;
  }
  return param_1 + 0xce;
}



longlong FUN_1805b7450(longlong param_1)

{
  if ((*(byte *)(param_1 + 8) & 0x80) == 0) {
    FUN_1805d4440();
    return param_1 + 0xd0;
  }
  return param_1 + 0xd0;
}



longlong FUN_1805b7480(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) & 0x100) == 0) {
    FUN_1805d4b40();
    return param_1 + 0xd8;
  }
  return param_1 + 0xd8;
}



uint64_t FUN_1805b74c0(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) & 0x200) == 0) {
    func_0x0001805d4cd0();
    return *(uint64_t *)(param_1 + 0xe0);
  }
  return *(uint64_t *)(param_1 + 0xe0);
}



uint64_t FUN_1805b7500(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) & 0x200) == 0) {
    func_0x0001805d4cd0();
    return *(uint64_t *)(param_1 + 0xe8);
  }
  return *(uint64_t *)(param_1 + 0xe8);
}



longlong FUN_1805b7540(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) & 0x200) == 0) {
    func_0x0001805d4cd0();
    return param_1 + 0xf8;
  }
  return param_1 + 0xf8;
}



int32_t * FUN_1805b7580(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  int32_t uVar3;
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((uVar2 >> 10 & 1) != 0) {
    return (int32_t *)((longlong)param_1 + 0xfc);
  }
  lVar1 = *param_1;
  if ((*(longlong *)(lVar1 + 0x20f0) == 0) ||
     ((1 < *(int *)(lVar1 + 0x14a8) - 5U &&
      (((*(byte *)(lVar1 + 0x209c) & 1) == 0 || ((*(byte *)(lVar1 + 0x2098) & 1) == 0)))))) {
    if ((uVar2 >> 9 & 1) == 0) {
      func_0x0001805d4cd0(param_1);
      uVar2 = *(uint *)(param_1 + 1);
    }
    lVar1 = param_1[0x1c];
    if (lVar1 != 0) {
      if ((uVar2 >> 9 & 1) == 0) {
        func_0x0001805d4cd0(param_1);
        lVar1 = param_1[0x1c];
        uVar2 = *(uint *)(param_1 + 1);
      }
      if ((*(uint *)(lVar1 + 0x56c) & 0x4000) == 0) {
        uVar3 = 0;
      }
      else {
        if ((uVar2 >> 9 & 1) == 0) {
          func_0x0001805d4cd0(param_1);
          lVar1 = param_1[0x1c];
        }
        uVar3 = *(int32_t *)(lVar1 + 0x7dc);
      }
      goto LAB_1805b7630;
    }
  }
  uVar3 = 0xbf800000;
LAB_1805b7630:
  *(int32_t *)((longlong)param_1 + 0xfc) = uVar3;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x400;
  return (int32_t *)((longlong)param_1 + 0xfc);
}



longlong * FUN_1805b7660(longlong *param_1)

{
  longlong lVar1;
  int32_t uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 1);
  if ((uVar3 >> 0xb & 1) != 0) {
    return param_1 + 0x20;
  }
  lVar1 = *param_1;
  if ((*(longlong *)(lVar1 + 0x20f0) == 0) ||
     ((1 < *(int *)(lVar1 + 0x14a8) - 5U &&
      (((*(byte *)(lVar1 + 0x209c) & 1) == 0 || ((*(byte *)(lVar1 + 0x2098) & 1) == 0)))))) {
    if ((uVar3 >> 9 & 1) == 0) {
      func_0x0001805d4cd0();
      uVar3 = *(uint *)(param_1 + 1);
    }
    lVar1 = param_1[0x1c];
    if (lVar1 != 0) {
      if ((uVar3 >> 9 & 1) == 0) {
        func_0x0001805d4cd0(param_1);
        lVar1 = param_1[0x1c];
      }
      uVar2 = *(int32_t *)(lVar1 + 0x1fc);
      goto LAB_1805b76db;
    }
  }
  uVar2 = 0;
LAB_1805b76db:
  *(int32_t *)(param_1 + 0x20) = uVar2;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x800;
  return param_1 + 0x20;
}



longlong FUN_1805b7700(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) & 0x1000) == 0) {
    FUN_1805d4df0();
    return param_1 + 0x108;
  }
  return param_1 + 0x108;
}



longlong FUN_1805b7740(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) & 0x10000000) == 0) {
    FUN_1805d5680();
    return param_1 + 0x118;
  }
  return param_1 + 0x118;
}






// 函数: void FUN_1805b77f0(longlong param_1,char param_2)
void FUN_1805b77f0(longlong param_1,char param_2)

{
  void *puVar1;
  uint uVar2;
  void *puVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x1c30) != param_2) {
    puVar3 = &unknown_var_6416_ptr;
    puVar1 = &unknown_var_6416_ptr;
    if (param_2 != '\0') {
      puVar1 = &unknown_var_6344_ptr;
    }
    if (*(char *)(param_1 + 0x1c30) != '\0') {
      puVar3 = &unknown_var_6344_ptr;
    }
    func_0x000180508000(param_1,&unknown_var_3272_ptr,&unknown_var_3232_ptr,puVar3,puVar1);
    *(char *)(param_1 + 0x1c30) = param_2;
    if (param_2 == '\0') {
      *(int32_t *)(param_1 + 0x1c0c) = 0xffffffff;
      *(int32_t *)(param_1 + 0x1c14) = 0xffffffff;
      *(int32_t *)(param_1 + 0x1c1c) = 0xffffffff;
      *(int32_t *)(param_1 + 0x1c24) = 0xffffffff;
      *(int32_t *)(param_1 + 0x1c2c) = 0;
      *(int32_t *)(param_1 + 0x200c) = 0;
      *(int8_t *)(param_1 + 0x1c48) = 0;
      *(uint64_t *)(param_1 + 0x1c38) =
           *(uint64_t *)(&system_error_code + (longlong)*(int *)(param_1 + 0x1c40) * 8);
    }
    else if ((*(char *)(param_1 + 0x1c48) == '\0') &&
            (0.0 < (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x1c40) * 8)
                          - *(longlong *)(param_1 + 0x1c38)) * 1e-05)) {
      if ((*(uint *)(param_1 + 0x209c) >> 0xb & 1) == 0) {
        FUN_180508220();
      }
      *(int32_t *)(param_1 + 0x1c0c) = 0xffffffff;
      *(int32_t *)(param_1 + 0x1c14) = 0xffffffff;
      *(int32_t *)(param_1 + 0x1c1c) = 0xffffffff;
      *(int32_t *)(param_1 + 0x1c24) = 0xffffffff;
      *(int32_t *)(param_1 + 0x1c2c) = 0;
      *(int32_t *)(param_1 + 0x200c) = 0;
      *(int8_t *)(param_1 + 0x1c48) = 0;
      *(uint64_t *)(param_1 + 0x1c38) =
           *(uint64_t *)(&system_error_code + (longlong)*(int *)(param_1 + 0x1c40) * 8);
      puVar3 = &system_error_code;
      puVar1 = &unknown_var_6416_ptr;
      if (*(char *)(param_1 + 0x13bc) != '\0') {
        puVar1 = &unknown_var_6344_ptr;
      }
      lVar4 = param_1;
      func_0x000180508000(param_1,&unknown_var_6496_ptr,&unknown_var_6352_ptr,puVar1,
                          (double)*(float *)(param_1 + 0x13b8),
                          (double)((float)(*(longlong *)
                                            (&system_error_code +
                                            (longlong)*(int *)(param_1 + 0x13b0) * 8) -
                                          *(longlong *)(param_1 + 0x13a8)) * 1e-05));
      if (*(char *)(param_1 + 0x13bc) == '\0') {
        *(int8_t *)(param_1 + 0x13bc) = 1;
        uVar2 = *(uint *)(param_1 + 0x1390) << 0xd ^ *(uint *)(param_1 + 0x1390);
        uVar2 = uVar2 >> 0x11 ^ uVar2;
        uVar2 = uVar2 << 5 ^ uVar2;
        *(uint *)(lVar4 + 0x1390) = uVar2;
        *(float *)(lVar4 + 0x13b8) = (float)(uVar2 - 1) * 1.3969839e-10 + 0.4;
        *(uint64_t *)(lVar4 + 0x13a8) =
             *(uint64_t *)(puVar3 + (longlong)*(int *)(lVar4 + 0x13b0) * 8);
      }
      return;
    }
  }
  return;
}






// 函数: void FUN_1805b7813(int32_t param_1,void *param_2)
void FUN_1805b7813(int32_t param_1,void *param_2)

{
  char in_CL;
  uint uVar1;
  longlong unaff_RBX;
  void *puVar2;
  char in_R10B;
  longlong lVar3;
  void *puVar4;
  
  puVar2 = &unknown_var_6416_ptr;
  if (in_R10B != '\0') {
    puVar2 = param_2;
  }
  puVar4 = &unknown_var_6416_ptr;
  if (in_CL != '\0') {
    puVar4 = param_2;
  }
  func_0x000180508000(param_1,&unknown_var_3272_ptr,&unknown_var_3232_ptr,puVar4,puVar2);
  *(char *)(unaff_RBX + 0x1c30) = in_R10B;
  if (in_R10B == '\0') {
    *(int32_t *)(unaff_RBX + 0x1c0c) = 0xffffffff;
    *(int32_t *)(unaff_RBX + 0x1c14) = 0xffffffff;
    *(int32_t *)(unaff_RBX + 0x1c1c) = 0xffffffff;
    *(int32_t *)(unaff_RBX + 0x1c24) = 0xffffffff;
    *(int32_t *)(unaff_RBX + 0x1c2c) = 0;
    *(int32_t *)(unaff_RBX + 0x200c) = 0;
    *(int8_t *)(unaff_RBX + 0x1c48) = 0;
    *(uint64_t *)(unaff_RBX + 0x1c38) =
         *(uint64_t *)(&system_error_code + (longlong)*(int *)(unaff_RBX + 0x1c40) * 8);
  }
  else if ((*(char *)(unaff_RBX + 0x1c48) == '\0') &&
          (0.0 < (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(unaff_RBX + 0x1c40) * 8)
                        - *(longlong *)(unaff_RBX + 0x1c38)) * 1e-05)) {
    if ((*(uint *)(unaff_RBX + 0x209c) >> 0xb & 1) == 0) {
      FUN_180508220();
    }
    *(int32_t *)(unaff_RBX + 0x1c0c) = 0xffffffff;
    *(int32_t *)(unaff_RBX + 0x1c14) = 0xffffffff;
    *(int32_t *)(unaff_RBX + 0x1c1c) = 0xffffffff;
    *(int32_t *)(unaff_RBX + 0x1c24) = 0xffffffff;
    *(int32_t *)(unaff_RBX + 0x1c2c) = 0;
    *(int32_t *)(unaff_RBX + 0x200c) = 0;
    *(int8_t *)(unaff_RBX + 0x1c48) = 0;
    *(uint64_t *)(unaff_RBX + 0x1c38) =
         *(uint64_t *)(&system_error_code + (longlong)*(int *)(unaff_RBX + 0x1c40) * 8);
    puVar4 = &system_error_code;
    puVar2 = &unknown_var_6416_ptr;
    if (*(char *)(unaff_RBX + 0x13bc) != '\0') {
      puVar2 = &unknown_var_6344_ptr;
    }
    lVar3 = unaff_RBX;
    func_0x000180508000((float)(*(longlong *)
                                 (&system_error_code + (longlong)*(int *)(unaff_RBX + 0x13b0) * 8) -
                               *(longlong *)(unaff_RBX + 0x13a8)) * 1e-05,&unknown_var_6496_ptr,
                        &unknown_var_6352_ptr,puVar2,(double)*(float *)(unaff_RBX + 0x13b8));
    if (*(char *)(unaff_RBX + 0x13bc) == '\0') {
      *(int8_t *)(unaff_RBX + 0x13bc) = 1;
      uVar1 = *(uint *)(unaff_RBX + 0x1390) << 0xd ^ *(uint *)(unaff_RBX + 0x1390);
      uVar1 = uVar1 >> 0x11 ^ uVar1;
      uVar1 = uVar1 << 5 ^ uVar1;
      *(uint *)(lVar3 + 0x1390) = uVar1;
      *(float *)(lVar3 + 0x13b8) = (float)(uVar1 - 1) * 1.3969839e-10 + 0.4;
      *(uint64_t *)(lVar3 + 0x13a8) =
           *(uint64_t *)(puVar4 + (longlong)*(int *)(lVar3 + 0x13b0) * 8);
    }
    return;
  }
  return;
}






// 函数: void FUN_1805b7910(void)
void FUN_1805b7910(void)

{
  longlong unaff_RBX;
  
  *(int32_t *)(unaff_RBX + 0x1c0c) = 0xffffffff;
  *(int32_t *)(unaff_RBX + 0x1c14) = 0xffffffff;
  *(int32_t *)(unaff_RBX + 0x1c1c) = 0xffffffff;
  *(int32_t *)(unaff_RBX + 0x1c24) = 0xffffffff;
  *(int32_t *)(unaff_RBX + 0x1c2c) = 0;
  *(int32_t *)(unaff_RBX + 0x200c) = 0;
  *(int8_t *)(unaff_RBX + 0x1c48) = 0;
  *(uint64_t *)(unaff_RBX + 0x1c38) =
       *(uint64_t *)(&system_error_code + (longlong)*(int *)(unaff_RBX + 0x1c40) * 8);
  return;
}






// 函数: void FUN_1805b796a(void)
void FUN_1805b796a(void)

{
  return;
}



uint64_t * FUN_1805b7970(longlong *param_1,uint64_t *param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((*(uint *)(param_1 + 2) & 0x20) == 0) {
    lVar9 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
    param_1[0x15] = lVar9;
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x20;
  }
  else {
    lVar9 = param_1[0x15];
  }
  uVar1 = *(int32_t *)(lVar9 + 0xa4);
  lVar8 = (longlong)*(int *)(lVar9 + 0xf0) * 0xa0;
  iVar3 = *(int *)(lVar8 + 0x70 + *(longlong *)(lVar9 + 0xd0));
  uVar5 = *(uint64_t *)(lVar8 + 0x50 + *(longlong *)(lVar9 + 0xd0));
  uVar6 = FUN_1805a0690(*param_1 + 0x28,9,lVar9,
                        *(uint64_t *)(*(longlong *)(*param_1 + 0x8f8) + 0x9f0),0,
                        *(int *)(lVar9 + 0xf0));
  uVar7 = *(uint *)(param_1 + 2);
  uVar4 = *(int32_t *)(*(longlong *)(*param_1 + 0x8f8) + 0x9e0);
  if ((uVar7 >> 0xc & 1) == 0) {
    FUN_1805d4df0(param_1 + 1);
    uVar7 = *(uint *)(param_1 + 2);
  }
  uVar2 = *(int32_t *)((longlong)param_1 + 0x10c);
  if ((uVar7 >> 0xc & 1) == 0) {
    FUN_1805d4df0(param_1 + 1);
  }
  *(int *)(param_2 + 3) = (int)param_1[0x22];
  *(int32_t *)(param_2 + 2) = uVar1;
  *(float *)((longlong)param_2 + 0x14) = (float)iVar3;
  *(int32_t *)((longlong)param_2 + 0x1c) = uVar2;
  *param_2 = uVar5;
  param_2[1] = uVar6;
  *(int32_t *)(param_2 + 4) = uVar4;
  return param_2;
}



int8_t FUN_1805b7ac0(longlong *param_1)

{
  char cVar1;
  float *pfVar2;
  float fVar3;
  
  if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
    func_0x0001805d4cd0(param_1 + 1);
  }
  if (param_1[0x1d] != 0) {
    if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(param_1 + 1);
    }
    if ((char)param_1[0x20] == '\0') {
      if ((*(byte *)(param_1 + 2) & 1) == 0) {
        FUN_1805d3210(param_1 + 1);
      }
      fVar3 = (float)FUN_1805d7bf0(param_1);
      if (*(float *)(param_1 + 0xd) <= fVar3) {
        pfVar2 = (float *)FUN_1805b6a70(param_1 + 1);
        if ((0.95 < *pfVar2) && (*(int *)(*param_1 + 0x564) < 0)) {
          cVar1 = FUN_18059a920(*param_1 + 0x28);
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}






// 函数: void FUN_1805b7b70(longlong param_1,longlong param_2,uint64_t param_3)
void FUN_1805b7b70(longlong param_1,longlong param_2,uint64_t param_3)

{
  uint64_t uVar1;
  
  if ((*(uint *)(param_1 + 0x10) & 0x20) == 0) {
    uVar1 = *(uint64_t *)(*(longlong *)(**(longlong **)(param_1 + 8) + 0x8f8) + 0x9e8);
    *(uint64_t *)(param_1 + 0xa8) = uVar1;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
  }
  else {
    uVar1 = *(uint64_t *)(param_1 + 0xa8);
  }
  FUN_1805bd630(param_1,param_2,*(int32_t *)(param_2 + 0xf0),uVar1,param_3,1);
  return;
}



int8_t FUN_1805b7d90(longlong param_1)

{
  char cVar1;
  int *piVar2;
  longlong lVar3;
  
  if ((*(uint *)(param_1 + 0x10) & 0x4000) == 0) {
    FUN_1805d53a0(param_1 + 8);
  }
  if ((*(char *)(param_1 + 0xc3) != '\0') && ((*(byte *)(param_1 + 0x1348) & 2) != 0)) {
    return 1;
  }
  if ((*(uint *)(param_1 + 0x10) & 0x200) == 0) {
    func_0x0001805d4cd0(param_1 + 8);
  }
  lVar3 = *(longlong *)(param_1 + 0xf0);
  if (lVar3 != 0) {
    if ((*(uint *)(param_1 + 0x10) & 0x200) == 0) {
      func_0x0001805d4cd0(param_1 + 8);
      lVar3 = *(longlong *)(param_1 + 0xf0);
    }
    if ((*(byte *)((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar3 + 0xd0)) & 1
        ) != 0) {
      if ((*(byte *)(param_1 + 0x10) & 0x80) == 0) {
        FUN_1805d4440(param_1 + 8);
      }
      if (*(float *)(param_1 + 0xd8) != 0.0) {
        piVar2 = (int *)FUN_1805b7660(param_1 + 8);
        if (*piVar2 == 1) {
          return 1;
        }
        piVar2 = (int *)FUN_1805b7660(param_1 + 8);
        if (*piVar2 == 2) {
          return 1;
        }
      }
    }
  }
  cVar1 = FUN_1805caef0(param_1);
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}



uint64_t FUN_1805b7e80(longlong *param_1,float param_2)

{
  ulonglong uVar1;
  bool bVar2;
  char cVar3;
  float *pfVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  
  uVar6 = *(uint *)(param_1 + 2);
  if ((uVar6 & 0x20) == 0) {
    uVar6 = uVar6 | 0x20;
    lVar5 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
    param_1[0x15] = lVar5;
    *(uint *)(param_1 + 2) = uVar6;
  }
  else {
    lVar5 = param_1[0x15];
  }
  if (((lVar5 == 0) || (*(int *)(lVar5 + 0x30) < 1)) ||
     ((uVar1 = *(ulonglong *)
                ((longlong)*(int *)(lVar5 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar5 + 0xd0)),
      (uVar1 >> 9 & 1) != 0 && (*(short *)(lVar5 + 8) < 1)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if (((uVar1 & 1) != 0) && (cVar3 = func_0x0001805d1da0(param_1), cVar3 != '\0')) {
      if ((uVar6 >> 0x19 & 1) == 0) {
        fVar7 = *(float *)(*(longlong *)param_1[1] + 0x7dc);
        *(float *)((longlong)param_1 + 0xb4) = fVar7;
        *(uint *)(param_1 + 2) = uVar6 | 0x2000000;
      }
      else {
        fVar7 = *(float *)((longlong)param_1 + 0xb4);
      }
      if ((fVar7 * 0.8 < param_2) &&
         (pfVar4 = (float *)FUN_1805b6e50(param_1 + 1), *pfVar4 <= 2.0 && *pfVar4 != 2.0)) {
        return 0;
      }
    }
  }
  if (!bVar2) {
    return 1;
  }
  if ((float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x2f0] * 8) - param_1[0x2ef]) *
      1e-05 < 5.0) {
    if ((*(byte *)(param_1 + 2) & 0x10) == 0) {
      FUN_1805d3770(param_1 + 1);
    }
    if (((5.0 < *(float *)((longlong)param_1 + 0xa4)) &&
        (lVar5 = *(longlong *)(*(longlong *)(*param_1 + 0x8f8) + 0x9f0), lVar5 != 0)) &&
       ((*(uint *)((longlong)*(int *)(lVar5 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar5 + 0xd0)) >>
         0x1c & 1) != 0)) {
      return 0;
    }
  }
  return 1;
}



uint64_t FUN_1805b7f9c(longlong param_1)

{
  longlong lVar1;
  longlong in_RAX;
  longlong *unaff_RDI;
  
  if ((float)(*(longlong *)(param_1 + in_RAX * 8) - unaff_RDI[0x2ef]) * 1e-05 < 5.0) {
    if ((*(byte *)(unaff_RDI + 2) & 0x10) == 0) {
      FUN_1805d3770(unaff_RDI + 1);
    }
    if (5.0 < *(float *)((longlong)unaff_RDI + 0xa4)) {
      lVar1 = *(longlong *)(*(longlong *)(*unaff_RDI + 0x8f8) + 0x9f0);
      if ((lVar1 != 0) &&
         ((*(uint *)((longlong)*(int *)(lVar1 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar1 + 0xd0))
           >> 0x1c & 1) != 0)) {
        return 0;
      }
    }
  }
  return 1;
}



int8_t FUN_1805b802e(void)

{
  return 1;
}



int8_t FUN_1805b8032(void)

{
  return 1;
}






