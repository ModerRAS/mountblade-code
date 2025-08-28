#include "TaleWorlds.Native.Split.h"

// 99_part_13_part052.c - 2 个函数

// 函数: void FUN_1808ca27a(void)
void FUN_1808ca27a(void)

{
  return;
}



uint64_t FUN_1808ca280(longlong param_1)

{
  int iVar1;
  uint64_t uVar2;
  int aiStackX_8 [8];
  
  uVar2 = FUN_18073c4c0(*(uint64_t *)(param_1 + 0xe8),param_1 + 0x38,0);
  aiStackX_8[0] = (int)uVar2;
  if (aiStackX_8[0] == 0) {
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      uVar2 = FUN_18073fa70(*(longlong *)(param_1 + 0xf8),aiStackX_8,2);
      iVar1 = (int)uVar2;
      if (iVar1 == 0) {
        *(int *)(param_1 + 0x13c) = aiStackX_8[0];
        return 0;
      }
      if ((iVar1 != 0x1e) && (iVar1 != 3)) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1808ca2f0(longlong param_1,longlong param_2,uint64_t param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint auStackX_8 [2];
  int32_t uStackX_20;
  int iStackX_24;
  
  iStackX_24 = *(int *)(*(longlong *)(param_1 + 0x1a0) + 0x1c);
  plVar1 = (longlong *)
           FUN_1808caec0(param_1 + 0x118,
                         *(longlong *)(*(longlong *)(param_1 + 0x218) + 0xd8) +
                         (longlong)iStackX_24 * 0x14,0);
  if (plVar1 == (longlong *)0x0) {
    uStackX_20 = 0;
  }
  else {
    auStackX_8[0] = 0;
    (**(code **)(*plVar1 + 0x48))(plVar1,auStackX_8,0);
    lVar2 = ((ulonglong)auStackX_8[0] - *(longlong *)(param_1 + 0x30)) + param_2;
    uStackX_20 = (int)lVar2;
    if (lVar2 < 0) {
      uStackX_20 = 0;
    }
    (**(code **)(*plVar1 + 0x88))(plVar1,param_2,param_3);
  }
  FUN_1808cd010(param_3,*(longlong *)(param_1 + 0x218) + 0x10,&uStackX_20);
  return 0;
}



uint64_t FUN_1808ca3e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint64_t uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)0x0;
  lVar1 = *(longlong *)(param_1 + 0x120);
  plVar4 = (longlong *)(lVar1 + -0x20);
  if (lVar1 == 0) {
    plVar4 = plVar5;
  }
  plVar2 = plVar5;
  if (plVar4 != (longlong *)0x0) {
    plVar2 = plVar4 + 4;
  }
  while( true ) {
    if (plVar2 == (longlong *)(param_1 + 0x120)) {
      *(int8_t *)(param_1 + 0x1dd) = 1;
      return 0;
    }
    plVar4 = plVar2 + -4;
    if (plVar2 == (longlong *)0x0) {
      plVar4 = plVar5;
    }
    *(int32_t *)(plVar4 + 9) = 5;
    uVar3 = (**(code **)(*plVar4 + 0x90))();
    if ((int)uVar3 != 0) break;
    plVar4 = (longlong *)(*plVar2 + -0x20);
    if (*plVar2 == 0) {
      plVar4 = plVar5;
    }
    plVar2 = plVar5;
    if (plVar4 != (longlong *)0x0) {
      plVar2 = plVar4 + 4;
    }
  }
  return uVar3;
}






// 函数: void FUN_1808ca4a0(longlong param_1)
void FUN_1808ca4a0(longlong param_1)

{
  uint uVar1;
  
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    uVar1 = FUN_18073dd60();
    if (0x1e < uVar1) {
      return;
    }
    if ((0x40000009U >> (uVar1 & 0x1f) & 1) == 0) {
      return;
    }
  }
  *(int32_t *)(param_1 + 0x138) = 2;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x110) = 0;
  *(uint64_t *)(param_1 + 0x118) = 0;
  return;
}



uint64_t FUN_1808ca4f0(longlong param_1,longlong *param_2,ulonglong param_3,byte param_4)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  uint64_t uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  
  plVar7 = (longlong *)0x0;
  plVar6 = (longlong *)(*(longlong *)(param_1 + 8) + -0x20);
  if (*(longlong *)(param_1 + 8) == 0) {
    plVar6 = plVar7;
  }
  plVar1 = plVar7;
  if (plVar6 != (longlong *)0x0) {
    plVar1 = plVar6 + 4;
  }
  do {
    if (plVar1 == (longlong *)(param_1 + 8)) {
      return 0;
    }
    pbVar2 = (byte *)((longlong)plVar1 + 0x2c);
    if (plVar1 == (longlong *)0x0) {
      pbVar2 = (byte *)0x4c;
    }
    if ((*pbVar2 & 1) == param_4) {
      plVar6 = plVar1 + -4;
      if (plVar1 == (longlong *)0x0) {
        plVar6 = plVar7;
      }
      plVar3 = (longlong *)(**(code **)*plVar6)(plVar6);
      (**(code **)(*plVar3 + 0x30))(plVar3,&lStack_48);
      lStack_38 = lStack_48;
      lStack_30 = lStack_40;
      if ((lStack_48 == *param_2) && (lStack_40 == param_2[1])) {
        puVar4 = (ulonglong *)(plVar1 + 2);
        if (plVar1 == (longlong *)0x0) {
          puVar4 = (ulonglong *)0x30;
        }
        if (param_3 <= *puVar4) {
          *(int32_t *)(plVar6 + 9) = 5;
          uVar5 = (**(code **)(*plVar6 + 0x90))(plVar6);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
        }
      }
    }
    plVar6 = (longlong *)(*plVar1 + -0x20);
    if (*plVar1 == 0) {
      plVar6 = plVar7;
    }
    plVar1 = plVar7;
    if (plVar6 != (longlong *)0x0) {
      plVar1 = plVar6 + 4;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808ca620(longlong *param_1)

{
  int iVar1;
  uint64_t uVar2;
  longlong lVar3;
  uint uVar4;
  int32_t *puVar5;
  
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar4) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
    }
    *param_1 = 0;
    uVar4 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    puVar5 = (int32_t *)(*param_1 + (longlong)iVar1 * 4);
    lVar3 = (longlong)-iVar1;
    if (iVar1 < 0) {
      for (; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      uVar4 = *(uint *)((longlong)param_1 + 0xc);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  if (((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 1) ||
     (uVar2 = FUN_180861ef0(param_1,0), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808ca6f0(longlong param_1)

{
  uint64_t uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)0x0;
  plVar2 = (longlong *)(*(longlong *)(param_1 + 8) + -0x20);
  if (*(longlong *)(param_1 + 8) == 0) {
    plVar2 = plVar4;
  }
  plVar3 = plVar4;
  if (plVar2 != (longlong *)0x0) {
    plVar3 = plVar2 + 4;
  }
  if (plVar3 == (longlong *)(param_1 + 8)) {
    uVar1 = 0;
  }
  else {
    plVar2 = plVar3 + -4;
    if (plVar3 == (longlong *)0x0) {
      plVar2 = plVar4;
    }
    if (plVar3 != (longlong *)(param_1 + 8)) {
      *(longlong *)plVar3[1] = *plVar3;
      *(longlong *)(*plVar3 + 8) = plVar3[1];
      plVar3[1] = (longlong)plVar3;
      *plVar3 = (longlong)plVar3;
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar2,&UNK_1809882d0,0xf41,1);
    }
    uVar1 = 0x1c;
  }
  return uVar1;
}



uint64_t FUN_1808ca7e0(longlong param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint64_t uVar3;
  longlong lVar4;
  longlong lVar5;
  float afStackX_8 [2];
  ulonglong uStackX_18;
  
  *param_3 = 0;
  uVar1 = *(ulonglong *)(param_1 + 0x30);
  if ((uVar1 != 0) && (param_2 < uVar1)) {
    return 0;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x38);
  uStackX_18 = uVar2;
  if ((uVar1 != 0) && (uStackX_18 = uVar1, uVar1 <= uVar2)) {
    uStackX_18 = uVar2;
  }
  afStackX_8[0] = 1.0;
  uVar3 = FUN_18073ca90(*(uint64_t *)(param_1 + 0xf0),afStackX_8);
  if ((int)uVar3 == 0) {
    lVar4 = (longlong)((float)(longlong)(param_2 - uStackX_18) * afStackX_8[0]) +
            *(longlong *)(param_1 + 0x1c0);
    lVar5 = 0;
    if (0 < lVar4) {
      lVar5 = lVar4;
    }
    uVar3 = 0;
    *param_3 = lVar5;
  }
  return uVar3;
}



uint64_t FUN_1808ca8a0(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint64_t uVar3;
  longlong lVar4;
  longlong lVar5;
  float afStackX_8 [2];
  ulonglong uStackX_10;
  
  *param_3 = 0;
  uVar1 = *(ulonglong *)(param_1 + 0x30);
  uVar2 = *(ulonglong *)(param_1 + 0x38);
  uStackX_10 = uVar2;
  if ((uVar1 != 0) && (uStackX_10 = uVar1, uVar1 <= uVar2)) {
    uStackX_10 = uVar2;
  }
  lVar5 = *(longlong *)(param_1 + 0x1c0);
  afStackX_8[0] = 1.0;
  uVar3 = FUN_18073ca90(*(uint64_t *)(param_1 + 0xf0),afStackX_8);
  if ((int)uVar3 == 0) {
    lVar4 = (longlong)((float)(param_2 - lVar5) / afStackX_8[0]) + uStackX_10;
    lVar5 = 0;
    if (0 < lVar4) {
      lVar5 = lVar4;
    }
    uVar3 = 0;
    *param_3 = lVar5;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808ca940(uint64_t param_1,uint64_t param_2,longlong *param_3)

{
  int iVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  puVar2 = (uint64_t *)
           FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x28,&UNK_1809882d0,0x6a6,0,0,1);
  if (puVar2 == (uint64_t *)0x0) {
    uVar3 = 0x26;
  }
  else {
    *puVar2 = param_1;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(int32_t *)(puVar2 + 3) = 0;
    *(int32_t *)((longlong)puVar2 + 0x1c) = 0xffffffff;
    puVar2[4] = param_2;
    iVar1 = FUN_1808cdee0(puVar2);
    if (iVar1 != 0) {
      FUN_1808ca620(puVar2 + 1);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar2,&UNK_18095b500,0xc6,1);
    }
    *param_3 = (longlong)puVar2;
    uVar3 = 0;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808caa20(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lStack_18;
  longlong lStack_10;
  
  plVar1 = (longlong *)(param_1 + 8);
  plVar5 = (longlong *)0x0;
  plVar4 = (longlong *)(*(longlong *)(param_1 + 8) + -0x20);
  if (*(longlong *)(param_1 + 8) == 0) {
    plVar4 = plVar5;
  }
  plVar2 = plVar5;
  if (plVar4 != (longlong *)0x0) {
    plVar2 = plVar4 + 4;
  }
  while( true ) {
    if (plVar2 == plVar1) {
      return 0;
    }
    plVar4 = plVar2 + -4;
    if (plVar2 == (longlong *)0x0) {
      plVar4 = plVar5;
    }
    plVar3 = (longlong *)(**(code **)*plVar4)(plVar4);
    (**(code **)(*plVar3 + 0x30))(plVar3,&lStack_18);
    if ((lStack_18 == *param_2) && (lStack_10 == param_2[1])) break;
    if (plVar2 == plVar1) {
      return 0x1c;
    }
    plVar4 = (longlong *)(*plVar2 + -0x20);
    if (*plVar2 == 0) {
      plVar4 = plVar5;
    }
    plVar2 = plVar5;
    if (plVar4 != (longlong *)0x0) {
      plVar2 = plVar4 + 4;
    }
  }
  if (plVar2 == plVar1) {
    return 0x1c;
  }
  *(longlong *)plVar2[1] = *plVar2;
  *(longlong *)(*plVar2 + 8) = plVar2[1];
  plVar2[1] = (longlong)plVar2;
  *plVar2 = (longlong)plVar2;
  (**(code **)(*plVar4 + 0x28))(plVar4,0);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar4,&UNK_1809882d0,0xec9,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808cab70(uint64_t param_1,longlong *param_2)

{
  if (param_2 == (longlong *)0x0) {
    return 0x1c;
  }
  (**(code **)(*param_2 + 0x28))(param_2,0);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2,&UNK_1809882d0,0xed7,1);
}



uint64_t FUN_1808cabf0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  iVar9 = *(int *)((longlong)param_1 + 0x24);
  if (iVar9 == -1) {
    return 0x1c;
  }
  iVar1 = (int)param_1[1];
  if (iVar9 == iVar1) {
    iVar9 = iVar9 * 2;
    if (iVar9 < 4) {
      iVar9 = 4;
    }
    if (((iVar9 <= iVar1) || ((int)param_1[3] != iVar1)) || ((int)param_1[4] != -1)) {
      return 0x1c;
    }
    uVar7 = (int)*(uint *)((longlong)param_1 + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((longlong)param_1 + 0x1c) ^ uVar7) - uVar7) < iVar9) &&
       (uVar4 = FUN_180859470(param_1 + 2,iVar9), (int)uVar4 != 0)) {
      return uVar4;
    }
    uVar4 = FUN_1807703c0(param_1,iVar9);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar10 = 0;
    uVar5 = uVar10;
    if (0 < iVar9) {
      do {
        *(int32_t *)(*param_1 + uVar5 * 4) = 0xffffffff;
        uVar5 = uVar5 + 1;
      } while ((longlong)uVar5 < (longlong)iVar9);
    }
    lVar3 = param_1[3];
    uVar5 = uVar10;
    uVar11 = uVar10;
    if (0 < (int)lVar3) {
      do {
        if ((int)param_1[1] == 0) {
          return 0x1c;
        }
        lVar2 = param_1[2];
        lVar6 = (longlong)
                (int)((*(uint *)(uVar5 + 0xc + lVar2) ^ *(uint *)(uVar5 + 8 + lVar2) ^
                       *(uint *)(uVar5 + 4 + lVar2) ^ *(uint *)(uVar5 + lVar2)) &
                     (int)param_1[1] - 1U);
        piVar8 = (int *)(*param_1 + lVar6 * 4);
        iVar9 = *(int *)(*param_1 + lVar6 * 4);
        while (iVar9 != -1) {
          piVar8 = (int *)(lVar2 + 0x10 + (longlong)iVar9 * 0x1c);
          iVar9 = *piVar8;
        }
        *piVar8 = (int)uVar10;
        uVar11 = uVar11 + 1;
        uVar10 = (ulonglong)((int)uVar10 + 1);
        *(int32_t *)(param_1[2] + 0x10 + uVar5) = 0xffffffff;
        uVar5 = uVar5 + 0x1c;
      } while ((longlong)uVar11 < (longlong)(int)lVar3);
    }
  }
  return 0;
}



uint64_t FUN_1808cac16(void)

{
  longlong lVar1;
  longlong lVar2;
  int in_EAX;
  uint64_t uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int *piVar7;
  longlong *unaff_RBX;
  int unaff_EDI;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (unaff_EDI == in_EAX) {
    iVar8 = unaff_EDI * 2;
    if (iVar8 < 4) {
      iVar8 = 4;
    }
    if (((iVar8 <= in_EAX) || ((int)unaff_RBX[3] != in_EAX)) || ((int)unaff_RBX[4] != -1)) {
      return 0x1c;
    }
    uVar6 = (int)*(uint *)((longlong)unaff_RBX + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((longlong)unaff_RBX + 0x1c) ^ uVar6) - uVar6) < iVar8) &&
       (uVar3 = FUN_180859470(unaff_RBX + 2,iVar8), (int)uVar3 != 0)) {
      return uVar3;
    }
    uVar3 = FUN_1807703c0();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar9 = 0;
    uVar4 = uVar9;
    if (0 < iVar8) {
      do {
        *(int32_t *)(*unaff_RBX + uVar4 * 4) = 0xffffffff;
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)iVar8);
    }
    lVar2 = unaff_RBX[3];
    uVar4 = uVar9;
    uVar10 = uVar9;
    if (0 < (int)lVar2) {
      do {
        if ((int)unaff_RBX[1] == 0) {
          return 0x1c;
        }
        lVar1 = unaff_RBX[2];
        lVar5 = (longlong)
                (int)((*(uint *)(uVar4 + 0xc + lVar1) ^ *(uint *)(uVar4 + 8 + lVar1) ^
                       *(uint *)(uVar4 + 4 + lVar1) ^ *(uint *)(uVar4 + lVar1)) &
                     (int)unaff_RBX[1] - 1U);
        piVar7 = (int *)(*unaff_RBX + lVar5 * 4);
        iVar8 = *(int *)(*unaff_RBX + lVar5 * 4);
        while (iVar8 != -1) {
          piVar7 = (int *)(lVar1 + 0x10 + (longlong)iVar8 * 0x1c);
          iVar8 = *piVar7;
        }
        *piVar7 = (int)uVar9;
        uVar10 = uVar10 + 1;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        *(int32_t *)(unaff_RBX[2] + 0x10 + uVar4) = 0xffffffff;
        uVar4 = uVar4 + 0x1c;
      } while ((longlong)uVar10 < (longlong)(int)lVar2);
    }
  }
  return 0;
}



uint64_t FUN_1808cad36(void)

{
  return 0x1c;
}



uint64_t FUN_1808cad80(longlong param_1,int32_t *param_2,uint64_t *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint64_t uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int32_t uVar7;
  longlong *plVar8;
  int aiStackX_8 [2];
  longlong *aplStackX_18 [2];
  
  plVar8 = (longlong *)0x0;
  plVar1 = (longlong *)(param_1 + 8);
  *param_3 = 0;
  uVar7 = 0;
  plVar5 = (longlong *)(*plVar1 + -0x20);
  if (*plVar1 == 0) {
    plVar5 = plVar8;
  }
  plVar2 = plVar8;
  plVar3 = plVar8;
  plVar6 = plVar8;
  if (plVar5 != (longlong *)0x0) {
    plVar2 = plVar5 + 4;
  }
  while (aplStackX_18[0] = plVar3, plVar2 != plVar1) {
    aiStackX_8[0] = 0;
    aplStackX_18[0] = (longlong *)0x0;
    plVar5 = plVar2 + -4;
    if (plVar2 == (longlong *)0x0) {
      plVar5 = plVar8;
    }
    uVar4 = (**(code **)(*plVar5 + 0x78))(plVar5,aiStackX_8,aplStackX_18);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    if (aiStackX_8[0] == 2) {
      *param_2 = 2;
      return 0;
    }
    if (aiStackX_8[0] == 1) {
      plVar6 = (longlong *)0x1;
    }
    uVar7 = SUB84(plVar6,0);
    if ((plVar3 != (longlong *)0x0) && (aplStackX_18[0] <= plVar3)) {
      aplStackX_18[0] = plVar3;
    }
    if (plVar2 == plVar1) break;
    plVar5 = (longlong *)(*plVar2 + -0x20);
    if (*plVar2 == 0) {
      plVar5 = plVar8;
    }
    plVar2 = plVar8;
    plVar3 = aplStackX_18[0];
    if (plVar5 != (longlong *)0x0) {
      plVar2 = plVar5 + 4;
    }
  }
  *param_3 = aplStackX_18[0];
  *param_2 = uVar7;
  return 0;
}



longlong * FUN_1808caec0(longlong param_1,longlong *param_2,byte param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lStack_28;
  longlong lStack_20;
  longlong lStack_18;
  longlong lStack_10;
  
  plVar4 = (longlong *)0x0;
  plVar2 = (longlong *)(param_1 + 8);
  plVar1 = (longlong *)*plVar2;
  plVar3 = plVar4;
  if ((plVar1 != plVar2) && (plVar1 != (longlong *)0x0)) {
    plVar3 = plVar1 + -4;
  }
  plVar1 = plVar3 + 4;
  if (plVar3 == (longlong *)0x0) {
    plVar1 = plVar4;
  }
  plVar3 = plVar2;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  if (plVar3 != plVar2) {
    plVar2 = plVar3 + 1;
    if (plVar3 == (longlong *)0x0) {
      plVar2 = (longlong *)0x28;
    }
    plVar1 = (longlong *)(*plVar2 + -0x20);
    if (*plVar2 == 0) {
      plVar1 = plVar4;
    }
    plVar2 = (longlong *)(plVar1[5] + -0x20);
    if (plVar1[5] == 0) {
      plVar2 = plVar4;
    }
    while ((plVar2 != plVar1 && (plVar2 != (longlong *)0x0))) {
      if ((*(byte *)((longlong)plVar2 + 0x4c) & 1) == param_3) {
        plVar3 = (longlong *)(**(code **)*plVar2)(plVar2);
        (**(code **)(*plVar3 + 0x30))(plVar3,&lStack_28);
        lStack_18 = lStack_28;
        lStack_10 = lStack_20;
        if ((lStack_28 == *param_2) && (lStack_20 == param_2[1])) {
          return plVar2;
        }
      }
      plVar3 = plVar2 + 5;
      plVar2 = (longlong *)(*plVar3 + -0x20);
      if (*plVar3 == 0) {
        plVar2 = plVar4;
      }
    }
  }
  return (longlong *)0x0;
}



uint64_t FUN_1808cafe0(longlong param_1,int *param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  longlong lVar4;
  longlong lVar5;
  float afStackX_8 [2];
  ulonglong uStackX_20;
  
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    return 0x1c;
  }
  uVar2 = func_0x0001808601b0(*(longlong *)(param_1 + 0xf8),0);
  if ((int)uVar2 == 0) {
    if (*param_3 != 0) {
      *param_2 = 0;
      return uVar2;
    }
    uVar2 = FUN_180860210(*(uint64_t *)(param_1 + 0xf8),param_2,param_3);
    if ((int)uVar2 == 0) {
      if (*param_2 == 0) {
        uVar2 = *(uint64_t *)(*(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x2b0) + 0x78);
        afStackX_8[0] = 0.0;
        uStackX_20 = 0;
        uVar3 = FUN_18073ca90(uVar2,afStackX_8);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar2 = FUN_18073c730(uVar2,&uStackX_20,0,0);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        lVar4 = *param_3 - *(longlong *)(param_1 + 0x118);
        uVar1 = *(ulonglong *)(param_1 + 0x38);
        lVar5 = 0;
        if (0 < lVar4) {
          lVar5 = lVar4;
        }
        if (uVar1 < uStackX_20) {
          uVar1 = uStackX_20;
        }
        *param_3 = (longlong)((float)lVar5 / afStackX_8[0] + 0.5) + uVar1;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



uint64_t FUN_1808cb01b(void)

{
  ulonglong uVar1;
  uint64_t in_RAX;
  uint64_t uVar2;
  uint64_t uVar3;
  longlong lVar4;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int *unaff_RSI;
  longlong lVar5;
  bool in_ZF;
  float in_stack_00000040;
  ulonglong in_stack_00000058;
  
  if (!in_ZF) {
    *unaff_RSI = 0;
    return in_RAX;
  }
  uVar2 = FUN_180860210(*(uint64_t *)(unaff_RBP + 0xf8));
  if ((int)uVar2 == 0) {
    if (*unaff_RSI == 0) {
      uVar2 = *(uint64_t *)(*(longlong *)(*(longlong *)(unaff_RBP + 0xf8) + 0x2b0) + 0x78);
      in_stack_00000040 = 0.0;
      in_stack_00000058 = 0;
      uVar3 = FUN_18073ca90(uVar2,&stack0x00000040);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar2 = FUN_18073c730(uVar2,&stack0x00000058,0,0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      lVar4 = *unaff_RBX - *(longlong *)(unaff_RBP + 0x118);
      uVar1 = *(ulonglong *)(unaff_RBP + 0x38);
      lVar5 = 0;
      if (0 < lVar4) {
        lVar5 = lVar4;
      }
      if (uVar1 < in_stack_00000058) {
        uVar1 = in_stack_00000058;
      }
      *unaff_RBX = (longlong)((float)lVar5 / in_stack_00000040 + 0.5) + uVar1;
    }
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1808cb033(void)

{
  ulonglong uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  longlong lVar4;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int *unaff_RSI;
  longlong lVar5;
  float in_stack_00000040;
  ulonglong in_stack_00000058;
  
  uVar2 = FUN_180860210(*(uint64_t *)(unaff_RBP + 0xf8));
  if ((int)uVar2 == 0) {
    if (*unaff_RSI == 0) {
      uVar2 = *(uint64_t *)(*(longlong *)(*(longlong *)(unaff_RBP + 0xf8) + 0x2b0) + 0x78);
      in_stack_00000040 = 0.0;
      in_stack_00000058 = 0;
      uVar3 = FUN_18073ca90(uVar2,&stack0x00000040);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar2 = FUN_18073c730(uVar2,&stack0x00000058,0,0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      lVar4 = *unaff_RBX - *(longlong *)(unaff_RBP + 0x118);
      uVar1 = *(ulonglong *)(unaff_RBP + 0x38);
      lVar5 = 0;
      if (0 < lVar4) {
        lVar5 = lVar4;
      }
      if (uVar1 < in_stack_00000058) {
        uVar1 = in_stack_00000058;
      }
      *unaff_RBX = (longlong)((float)lVar5 / in_stack_00000040 + 0.5) + uVar1;
    }
    uVar2 = 0;
  }
  return uVar2;
}






