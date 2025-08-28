#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part063_sub002_sub002.c - 1 个函数

// 函数: void FUN_18009b386(void)
void FUN_18009b386(void)

{
  return;
}



uint64_t * FUN_18009b3a0(uint64_t *param_1,longlong param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  longlong lVar10;
  int8_t auStackX_8 [8];
  
  puVar8 = (uint64_t *)param_1[2];
  puVar9 = param_1;
  if (puVar8 != (uint64_t *)0x0) {
    do {
      if (*(int *)(param_2 + 0x10) == 0) {
        puVar7 = (uint64_t *)puVar8[1];
        bVar2 = false;
      }
      else {
        if (*(int *)(puVar8 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar3 = *(byte **)(param_2 + 8);
          lVar10 = puVar8[5] - (longlong)pbVar3;
          do {
            uVar5 = (uint)pbVar3[lVar10];
            iVar6 = *pbVar3 - uVar5;
            if (*pbVar3 != uVar5) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar5 != 0);
          bVar2 = 0 < iVar6;
          if (iVar6 < 1) {
            puVar7 = (uint64_t *)puVar8[1];
            goto LAB_18009b417;
          }
        }
        puVar7 = (uint64_t *)*puVar8;
      }
LAB_18009b417:
      if (bVar2) {
        puVar8 = puVar9;
      }
      puVar9 = puVar8;
      puVar8 = puVar7;
    } while (puVar7 != (uint64_t *)0x0);
    puVar8 = (uint64_t *)0x0;
  }
  if (puVar9 != param_1) {
    if (*(int *)(puVar9 + 6) == 0) {
LAB_18009b467:
      return puVar9 + 8;
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      pbVar3 = (byte *)puVar9[5];
      puVar8 = (uint64_t *)(*(longlong *)(param_2 + 8) - (longlong)pbVar3);
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[(longlong)puVar8];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_18009b467;
    }
  }
  plVar4 = (longlong *)FUN_18009bcb0(param_1,auStackX_8,puVar8,puVar9,param_2);
  return (uint64_t *)(*plVar4 + 0x40);
}



uint64_t *
FUN_18009b3bc(uint64_t param_1,longlong param_2,uint64_t *param_3,uint64_t *param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong unaff_RBX;
  uint64_t *unaff_RSI;
  uint64_t *puVar7;
  longlong lVar8;
  
  do {
    if (*(int *)(param_2 + 0x10) == 0) {
      puVar7 = (uint64_t *)param_3[1];
      bVar2 = false;
    }
    else {
      if (*(int *)(param_3 + 6) == 0) {
        bVar2 = true;
      }
      else {
        pbVar3 = *(byte **)(unaff_RBX + 8);
        lVar8 = param_3[5] - (longlong)pbVar3;
        do {
          uVar5 = (uint)pbVar3[lVar8];
          iVar6 = *pbVar3 - uVar5;
          if (*pbVar3 != uVar5) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar5 != 0);
        bVar2 = 0 < iVar6;
        if (iVar6 < 1) {
          puVar7 = (uint64_t *)param_3[1];
          goto LAB_18009b417;
        }
      }
      puVar7 = (uint64_t *)*param_3;
    }
LAB_18009b417:
    if (bVar2) {
      param_3 = param_4;
    }
    param_4 = param_3;
    param_3 = puVar7;
  } while (puVar7 != (uint64_t *)0x0);
  if (param_4 != unaff_RSI) {
    if (*(int *)(param_4 + 6) == 0) {
LAB_18009b467:
      return param_4 + 8;
    }
    if (*(int *)(unaff_RBX + 0x10) != 0) {
      pbVar3 = (byte *)param_4[5];
      lVar8 = *(longlong *)(unaff_RBX + 8) - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[lVar8];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_18009b467;
    }
  }
  plVar4 = (longlong *)FUN_18009bcb0();
  return (uint64_t *)(*plVar4 + 0x40);
}



longlong FUN_18009b42a(void)

{
  byte bVar1;
  byte *pbVar2;
  longlong *plVar3;
  uint uVar4;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong lVar5;
  longlong in_R9;
  
  if (in_R9 != unaff_RSI) {
    if (*(int *)(in_R9 + 0x30) == 0) {
LAB_18009b467:
      return in_R9 + 0x40;
    }
    if (*(int *)(unaff_RBX + 0x10) != 0) {
      pbVar2 = *(byte **)(in_R9 + 0x28);
      lVar5 = *(longlong *)(unaff_RBX + 8) - (longlong)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar4 = (uint)pbVar2[lVar5];
        if (bVar1 != uVar4) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar4 != 0);
      if ((int)(bVar1 - uVar4) < 1) goto LAB_18009b467;
    }
  }
  plVar3 = (longlong *)FUN_18009bcb0();
  return *plVar3 + 0x40;
}



uint64_t * FUN_18009b4a0(uint64_t *param_1,longlong param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  longlong lVar10;
  int8_t auStackX_8 [8];
  
  puVar8 = (uint64_t *)param_1[2];
  puVar9 = param_1;
  if (puVar8 != (uint64_t *)0x0) {
    do {
      if (*(int *)(param_2 + 0x10) == 0) {
        puVar7 = (uint64_t *)puVar8[1];
        bVar2 = false;
      }
      else {
        if (*(int *)(puVar8 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar3 = *(byte **)(param_2 + 8);
          lVar10 = puVar8[5] - (longlong)pbVar3;
          do {
            uVar5 = (uint)pbVar3[lVar10];
            iVar6 = *pbVar3 - uVar5;
            if (*pbVar3 != uVar5) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar5 != 0);
          bVar2 = 0 < iVar6;
          if (iVar6 < 1) {
            puVar7 = (uint64_t *)puVar8[1];
            goto LAB_18009b517;
          }
        }
        puVar7 = (uint64_t *)*puVar8;
      }
LAB_18009b517:
      if (bVar2) {
        puVar8 = puVar9;
      }
      puVar9 = puVar8;
      puVar8 = puVar7;
    } while (puVar7 != (uint64_t *)0x0);
    puVar8 = (uint64_t *)0x0;
  }
  if (puVar9 != param_1) {
    if (*(int *)(puVar9 + 6) == 0) {
LAB_18009b567:
      return puVar9 + 8;
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      pbVar3 = (byte *)puVar9[5];
      puVar8 = (uint64_t *)(*(longlong *)(param_2 + 8) - (longlong)pbVar3);
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[(longlong)puVar8];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_18009b567;
    }
  }
  plVar4 = (longlong *)FUN_18009bf40(param_1,auStackX_8,puVar8,puVar9,param_2);
  return (uint64_t *)(*plVar4 + 0x40);
}



uint64_t *
FUN_18009b4bc(uint64_t param_1,longlong param_2,uint64_t *param_3,uint64_t *param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong unaff_RBX;
  uint64_t *unaff_RSI;
  uint64_t *puVar7;
  longlong lVar8;
  
  do {
    if (*(int *)(param_2 + 0x10) == 0) {
      puVar7 = (uint64_t *)param_3[1];
      bVar2 = false;
    }
    else {
      if (*(int *)(param_3 + 6) == 0) {
        bVar2 = true;
      }
      else {
        pbVar3 = *(byte **)(unaff_RBX + 8);
        lVar8 = param_3[5] - (longlong)pbVar3;
        do {
          uVar5 = (uint)pbVar3[lVar8];
          iVar6 = *pbVar3 - uVar5;
          if (*pbVar3 != uVar5) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar5 != 0);
        bVar2 = 0 < iVar6;
        if (iVar6 < 1) {
          puVar7 = (uint64_t *)param_3[1];
          goto LAB_18009b517;
        }
      }
      puVar7 = (uint64_t *)*param_3;
    }
LAB_18009b517:
    if (bVar2) {
      param_3 = param_4;
    }
    param_4 = param_3;
    param_3 = puVar7;
  } while (puVar7 != (uint64_t *)0x0);
  if (param_4 != unaff_RSI) {
    if (*(int *)(param_4 + 6) == 0) {
LAB_18009b567:
      return param_4 + 8;
    }
    if (*(int *)(unaff_RBX + 0x10) != 0) {
      pbVar3 = (byte *)param_4[5];
      lVar8 = *(longlong *)(unaff_RBX + 8) - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[lVar8];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_18009b567;
    }
  }
  plVar4 = (longlong *)FUN_18009bf40();
  return (uint64_t *)(*plVar4 + 0x40);
}



longlong FUN_18009b52a(void)

{
  byte bVar1;
  byte *pbVar2;
  longlong *plVar3;
  uint uVar4;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong lVar5;
  longlong in_R9;
  
  if (in_R9 != unaff_RSI) {
    if (*(int *)(in_R9 + 0x30) == 0) {
LAB_18009b567:
      return in_R9 + 0x40;
    }
    if (*(int *)(unaff_RBX + 0x10) != 0) {
      pbVar2 = *(byte **)(in_R9 + 0x28);
      lVar5 = *(longlong *)(unaff_RBX + 8) - (longlong)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar4 = (uint)pbVar2[lVar5];
        if (bVar1 != uVar4) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar4 != 0);
      if ((int)(bVar1 - uVar4) < 1) goto LAB_18009b567;
    }
  }
  plVar3 = (longlong *)FUN_18009bf40();
  return *plVar3 + 0x40;
}



longlong * FUN_18009b5a0(longlong *param_1,longlong param_2,uint64_t param_3,ulonglong param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lStackX_8;
  int8_t auStack_18 [16];
  
  plVar5 = param_1;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[2];
    do {
      if (*(int *)(param_2 + 0x10) == 0) {
        plVar8 = (longlong *)plVar4[1];
        bVar2 = false;
      }
      else {
        if ((int)plVar4[6] == 0) {
          bVar2 = true;
        }
        else {
          pbVar3 = *(byte **)(param_2 + 8);
          param_4 = plVar4[5] - (longlong)pbVar3;
          do {
            uVar6 = (uint)pbVar3[param_4];
            iVar7 = *pbVar3 - uVar6;
            if (*pbVar3 != uVar6) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar6 != 0);
          bVar2 = 0 < iVar7;
          if (iVar7 < 1) {
            plVar8 = (longlong *)plVar4[1];
            goto LAB_18009b617;
          }
        }
        plVar8 = (longlong *)*plVar4;
      }
LAB_18009b617:
      if (bVar2) {
        plVar4 = plVar5;
      }
      plVar5 = plVar4;
      plVar4 = plVar8;
    } while (plVar8 != (longlong *)0x0);
  }
  if (plVar5 != param_1) {
    if ((int)plVar5[6] == 0) {
LAB_18009b658:
      return plVar5 + 8;
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      pbVar3 = (byte *)plVar5[5];
      lVar9 = *(longlong *)(param_2 + 8) - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar6 = (uint)pbVar3[lVar9];
        if (bVar1 != uVar6) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18009b658;
    }
  }
  plVar4 = (longlong *)*param_1;
  if ((plVar5 == plVar4) || (plVar5 == param_1)) {
    if ((param_1[4] != 0) && (*(int *)(param_2 + 0x10) != 0)) {
      plVar5 = plVar4;
      if ((int)plVar4[6] != 0) {
        pbVar3 = *(byte **)(param_2 + 8);
        param_4 = plVar4[5] - (longlong)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar6 = (uint)pbVar3[param_4];
          if (bVar1 != uVar6) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18009b758;
      }
LAB_18009b737:
      param_4 = param_4 & 0xffffffffffffff00;
      plVar4 = plVar5;
LAB_18009b73a:
      if (plVar4 != (longlong *)0x0) {
        FUN_18009cde0(param_1,&lStackX_8,plVar4,param_4,param_2);
        goto LAB_18009b76b;
      }
    }
  }
  else {
    plVar4 = (longlong *)func_0x00018066bd70(plVar5);
    if (*(int *)(param_2 + 0x10) != 0) {
      if ((int)plVar5[6] != 0) {
        pbVar3 = *(byte **)(param_2 + 8);
        lVar9 = plVar5[5] - (longlong)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar6 = (uint)pbVar3[lVar9];
          if (bVar1 != uVar6) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18009b758;
      }
      if ((int)plVar4[6] != 0) {
        pbVar3 = (byte *)plVar4[5];
        param_4 = *(longlong *)(param_2 + 8) - (longlong)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar6 = (uint)pbVar3[param_4];
          if (bVar1 != uVar6) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar6 != 0);
        if (0 < (int)(bVar1 - uVar6)) {
          if (*plVar5 == 0) goto LAB_18009b737;
          param_4 = CONCAT71((int7)(param_4 >> 8),1);
          goto LAB_18009b73a;
        }
      }
    }
  }
LAB_18009b758:
  plVar5 = (longlong *)FUN_18009cc10(param_1,auStack_18,plVar4,param_2);
  lStackX_8 = *plVar5;
LAB_18009b76b:
  return (longlong *)(lStackX_8 + 0x40);
}



longlong * FUN_18009b780(longlong *param_1,longlong param_2,uint64_t param_3,ulonglong param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lStackX_8;
  int8_t auStack_18 [16];
  
  plVar5 = param_1;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[2];
    do {
      if (*(int *)(param_2 + 0x10) == 0) {
        plVar8 = (longlong *)plVar4[1];
        bVar2 = false;
      }
      else {
        if ((int)plVar4[6] == 0) {
          bVar2 = true;
        }
        else {
          pbVar3 = *(byte **)(param_2 + 8);
          param_4 = plVar4[5] - (longlong)pbVar3;
          do {
            uVar6 = (uint)pbVar3[param_4];
            iVar7 = *pbVar3 - uVar6;
            if (*pbVar3 != uVar6) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar6 != 0);
          bVar2 = 0 < iVar7;
          if (iVar7 < 1) {
            plVar8 = (longlong *)plVar4[1];
            goto LAB_18009b7f7;
          }
        }
        plVar8 = (longlong *)*plVar4;
      }
LAB_18009b7f7:
      if (bVar2) {
        plVar4 = plVar5;
      }
      plVar5 = plVar4;
      plVar4 = plVar8;
    } while (plVar8 != (longlong *)0x0);
  }
  if (plVar5 != param_1) {
    if ((int)plVar5[6] == 0) {
LAB_18009b838:
      return plVar5 + 8;
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      pbVar3 = (byte *)plVar5[5];
      lVar9 = *(longlong *)(param_2 + 8) - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar6 = (uint)pbVar3[lVar9];
        if (bVar1 != uVar6) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18009b838;
    }
  }
  plVar4 = (longlong *)*param_1;
  if ((plVar5 == plVar4) || (plVar5 == param_1)) {
    if ((param_1[4] != 0) && (*(int *)(param_2 + 0x10) != 0)) {
      plVar5 = plVar4;
      if ((int)plVar4[6] != 0) {
        pbVar3 = *(byte **)(param_2 + 8);
        param_4 = plVar4[5] - (longlong)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar6 = (uint)pbVar3[param_4];
          if (bVar1 != uVar6) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18009b938;
      }
LAB_18009b917:
      param_4 = param_4 & 0xffffffffffffff00;
      plVar4 = plVar5;
LAB_18009b91a:
      if (plVar4 != (longlong *)0x0) {
        FUN_18009cb10(param_1,&lStackX_8,plVar4,param_4,param_2);
        goto LAB_18009b94b;
      }
    }
  }
  else {
    plVar4 = (longlong *)func_0x00018066bd70(plVar5);
    if (*(int *)(param_2 + 0x10) != 0) {
      if ((int)plVar5[6] != 0) {
        pbVar3 = *(byte **)(param_2 + 8);
        lVar9 = plVar5[5] - (longlong)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar6 = (uint)pbVar3[lVar9];
          if (bVar1 != uVar6) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18009b938;
      }
      if ((int)plVar4[6] != 0) {
        pbVar3 = (byte *)plVar4[5];
        param_4 = *(longlong *)(param_2 + 8) - (longlong)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar6 = (uint)pbVar3[param_4];
          if (bVar1 != uVar6) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar6 != 0);
        if (0 < (int)(bVar1 - uVar6)) {
          if (*plVar5 == 0) goto LAB_18009b917;
          param_4 = CONCAT71((int7)(param_4 >> 8),1);
          goto LAB_18009b91a;
        }
      }
    }
  }
LAB_18009b938:
  plVar5 = (longlong *)FUN_18009c940(param_1,auStack_18,plVar4,param_2);
  lStackX_8 = *plVar5;
LAB_18009b94b:
  return (longlong *)(lStackX_8 + 0x40);
}



uint64_t * FUN_18009b960(uint64_t *param_1,longlong param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  longlong lVar10;
  int8_t auStackX_8 [8];
  
  puVar8 = (uint64_t *)param_1[2];
  puVar9 = param_1;
  if (puVar8 != (uint64_t *)0x0) {
    do {
      if (*(int *)(param_2 + 0x10) == 0) {
        puVar7 = (uint64_t *)puVar8[1];
        bVar2 = false;
      }
      else {
        if (*(int *)(puVar8 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar3 = *(byte **)(param_2 + 8);
          lVar10 = puVar8[5] - (longlong)pbVar3;
          do {
            uVar5 = (uint)pbVar3[lVar10];
            iVar6 = *pbVar3 - uVar5;
            if (*pbVar3 != uVar5) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar5 != 0);
          bVar2 = 0 < iVar6;
          if (iVar6 < 1) {
            puVar7 = (uint64_t *)puVar8[1];
            goto LAB_18009b9d7;
          }
        }
        puVar7 = (uint64_t *)*puVar8;
      }
LAB_18009b9d7:
      if (bVar2) {
        puVar8 = puVar9;
      }
      puVar9 = puVar8;
      puVar8 = puVar7;
    } while (puVar7 != (uint64_t *)0x0);
    puVar8 = (uint64_t *)0x0;
  }
  if (puVar9 != param_1) {
    if (*(int *)(puVar9 + 6) == 0) {
LAB_18009ba27:
      return puVar9 + 8;
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      pbVar3 = (byte *)puVar9[5];
      puVar8 = (uint64_t *)(*(longlong *)(param_2 + 8) - (longlong)pbVar3);
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[(longlong)puVar8];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_18009ba27;
    }
  }
  plVar4 = (longlong *)FUN_18009c090(param_1,auStackX_8,puVar8,puVar9,param_2);
  return (uint64_t *)(*plVar4 + 0x40);
}



uint64_t *
FUN_18009b97c(uint64_t param_1,longlong param_2,uint64_t *param_3,uint64_t *param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong unaff_RBX;
  uint64_t *unaff_RSI;
  uint64_t *puVar7;
  longlong lVar8;
  
  do {
    if (*(int *)(param_2 + 0x10) == 0) {
      puVar7 = (uint64_t *)param_3[1];
      bVar2 = false;
    }
    else {
      if (*(int *)(param_3 + 6) == 0) {
        bVar2 = true;
      }
      else {
        pbVar3 = *(byte **)(unaff_RBX + 8);
        lVar8 = param_3[5] - (longlong)pbVar3;
        do {
          uVar5 = (uint)pbVar3[lVar8];
          iVar6 = *pbVar3 - uVar5;
          if (*pbVar3 != uVar5) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar5 != 0);
        bVar2 = 0 < iVar6;
        if (iVar6 < 1) {
          puVar7 = (uint64_t *)param_3[1];
          goto LAB_18009b9d7;
        }
      }
      puVar7 = (uint64_t *)*param_3;
    }
LAB_18009b9d7:
    if (bVar2) {
      param_3 = param_4;
    }
    param_4 = param_3;
    param_3 = puVar7;
  } while (puVar7 != (uint64_t *)0x0);
  if (param_4 != unaff_RSI) {
    if (*(int *)(param_4 + 6) == 0) {
LAB_18009ba27:
      return param_4 + 8;
    }
    if (*(int *)(unaff_RBX + 0x10) != 0) {
      pbVar3 = (byte *)param_4[5];
      lVar8 = *(longlong *)(unaff_RBX + 8) - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[lVar8];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_18009ba27;
    }
  }
  plVar4 = (longlong *)FUN_18009c090();
  return (uint64_t *)(*plVar4 + 0x40);
}



longlong FUN_18009b9ea(void)

{
  byte bVar1;
  byte *pbVar2;
  longlong *plVar3;
  uint uVar4;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong lVar5;
  longlong in_R9;
  
  if (in_R9 != unaff_RSI) {
    if (*(int *)(in_R9 + 0x30) == 0) {
LAB_18009ba27:
      return in_R9 + 0x40;
    }
    if (*(int *)(unaff_RBX + 0x10) != 0) {
      pbVar2 = *(byte **)(in_R9 + 0x28);
      lVar5 = *(longlong *)(unaff_RBX + 8) - (longlong)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar4 = (uint)pbVar2[lVar5];
        if (bVar1 != uVar4) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar4 != 0);
      if ((int)(bVar1 - uVar4) < 1) goto LAB_18009ba27;
    }
  }
  plVar3 = (longlong *)FUN_18009c090();
  return *plVar3 + 0x40;
}



uint64_t * FUN_18009ba60(uint64_t *param_1,longlong param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  longlong lVar10;
  int8_t auStackX_8 [8];
  
  puVar8 = (uint64_t *)param_1[2];
  puVar9 = param_1;
  if (puVar8 != (uint64_t *)0x0) {
    do {
      if (*(int *)(param_2 + 0x10) == 0) {
        puVar7 = (uint64_t *)puVar8[1];
        bVar2 = false;
      }
      else {
        if (*(int *)(puVar8 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar3 = *(byte **)(param_2 + 8);
          lVar10 = puVar8[5] - (longlong)pbVar3;
          do {
            uVar5 = (uint)pbVar3[lVar10];
            iVar6 = *pbVar3 - uVar5;
            if (*pbVar3 != uVar5) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar5 != 0);
          bVar2 = 0 < iVar6;
          if (iVar6 < 1) {
            puVar7 = (uint64_t *)puVar8[1];
            goto LAB_18009bad7;
          }
        }
        puVar7 = (uint64_t *)*puVar8;
      }
LAB_18009bad7:
      if (bVar2) {
        puVar8 = puVar9;
      }
      puVar9 = puVar8;
      puVar8 = puVar7;
    } while (puVar7 != (uint64_t *)0x0);
    puVar8 = (uint64_t *)0x0;
  }
  if (puVar9 != param_1) {
    if (*(int *)(puVar9 + 6) == 0) {
LAB_18009bb27:
      return puVar9 + 8;
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      pbVar3 = (byte *)puVar9[5];
      puVar8 = (uint64_t *)(*(longlong *)(param_2 + 8) - (longlong)pbVar3);
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[(longlong)puVar8];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_18009bb27;
    }
  }
  plVar4 = (longlong *)FUN_18009c320(param_1,auStackX_8,puVar8,puVar9,param_2);
  return (uint64_t *)(*plVar4 + 0x40);
}



uint64_t *
FUN_18009ba7c(uint64_t param_1,longlong param_2,uint64_t *param_3,uint64_t *param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong unaff_RBX;
  uint64_t *unaff_RSI;
  uint64_t *puVar7;
  longlong lVar8;
  
  do {
    if (*(int *)(param_2 + 0x10) == 0) {
      puVar7 = (uint64_t *)param_3[1];
      bVar2 = false;
    }
    else {
      if (*(int *)(param_3 + 6) == 0) {
        bVar2 = true;
      }
      else {
        pbVar3 = *(byte **)(unaff_RBX + 8);
        lVar8 = param_3[5] - (longlong)pbVar3;
        do {
          uVar5 = (uint)pbVar3[lVar8];
          iVar6 = *pbVar3 - uVar5;
          if (*pbVar3 != uVar5) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar5 != 0);
        bVar2 = 0 < iVar6;
        if (iVar6 < 1) {
          puVar7 = (uint64_t *)param_3[1];
          goto LAB_18009bad7;
        }
      }
      puVar7 = (uint64_t *)*param_3;
    }
LAB_18009bad7:
    if (bVar2) {
      param_3 = param_4;
    }
    param_4 = param_3;
    param_3 = puVar7;
  } while (puVar7 != (uint64_t *)0x0);
  if (param_4 != unaff_RSI) {
    if (*(int *)(param_4 + 6) == 0) {
LAB_18009bb27:
      return param_4 + 8;
    }
    if (*(int *)(unaff_RBX + 0x10) != 0) {
      pbVar3 = (byte *)param_4[5];
      lVar8 = *(longlong *)(unaff_RBX + 8) - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[lVar8];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_18009bb27;
    }
  }
  plVar4 = (longlong *)FUN_18009c320();
  return (uint64_t *)(*plVar4 + 0x40);
}



longlong FUN_18009baea(void)

{
  byte bVar1;
  byte *pbVar2;
  longlong *plVar3;
  uint uVar4;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong lVar5;
  longlong in_R9;
  
  if (in_R9 != unaff_RSI) {
    if (*(int *)(in_R9 + 0x30) == 0) {
LAB_18009bb27:
      return in_R9 + 0x40;
    }
    if (*(int *)(unaff_RBX + 0x10) != 0) {
      pbVar2 = *(byte **)(in_R9 + 0x28);
      lVar5 = *(longlong *)(unaff_RBX + 8) - (longlong)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar4 = (uint)pbVar2[lVar5];
        if (bVar1 != uVar4) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar4 != 0);
      if ((int)(bVar1 - uVar4) < 1) goto LAB_18009bb27;
    }
  }
  plVar3 = (longlong *)FUN_18009c320();
  return *plVar3 + 0x40;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_18009bb60(uint64_t param_1,longlong *param_2,uint64_t param_3,int32_t param_4)

{
  uint64_t uVar1;
  int32_t uVar2;
  int32_t *puVar3;
  void *puStack_48;
  int32_t *puStack_40;
  int32_t uStack_38;
  uint64_t uStack_30;
  
  uVar1 = _DAT_180c8a998;
  puStack_48 = &unknown_var_3456_ptr;
  uStack_30 = 0;
  puStack_40 = (int32_t *)0x0;
  uStack_38 = 0;
  puVar3 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x1d,0x13,param_4,0,0xfffffffffffffffe);
  *(int8_t *)puVar3 = 0;
  puStack_40 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  *puVar3 = 0x6f736552;
  puVar3[1] = 0x65637275;
  puVar3[2] = 0x66754220;
  puVar3[3] = 0x73726566;
  *(uint64_t *)(puVar3 + 4) = 0x6f6f70206e6f6e28;
  puVar3[6] = 0x2964656c;
  *(int8_t *)(puVar3 + 7) = 0;
  uStack_38 = 0x1c;
  uStack_30._0_4_ = uVar2;
  FUN_1802037e0(0,param_4,&puStack_48);
  puStack_48 = &unknown_var_3456_ptr;
  if (puStack_40 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_40 = (int32_t *)0x0;
  uStack_30 = (ulonglong)uStack_30._4_4_ << 0x20;
  puStack_48 = &unknown_var_720_ptr;
  FUN_180082aa0(uVar1,param_2);
  *(uint64_t *)(*param_2 + 0x10) = param_3;
  *(int32_t *)(*param_2 + 0x18) = param_4;
  *(int32_t *)(*param_2 + 0x1c) = param_4;
  *(int8_t *)(*param_2 + 0x20) = 1;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18009bcb0(longlong *param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             longlong param_5)

{
  byte bVar1;
  bool bVar2;
  longlong *plVar3;
  byte *pbVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint64_t uVar10;
  
  plVar5 = (longlong *)*param_1;
  if ((param_4 == plVar5) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (*(int *)(param_5 + 0x10) != 0)) {
      plVar8 = param_4;
      if (*(int *)(plVar5 + 6) != 0) {
        pbVar4 = *(byte **)(param_5 + 8);
        plVar8 = (longlong *)(plVar5[5] - (longlong)pbVar4);
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[(longlong)plVar8];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18009bdd4;
      }
LAB_18009bdb7:
      uVar9 = (ulonglong)plVar8 & 0xffffffffffffff00;
LAB_18009bdba:
      if (plVar5 != (longlong *)0x0) {
        FUN_18009c860(param_1,param_2,plVar5,uVar9,param_5);
        return param_2;
      }
    }
  }
  else {
    plVar3 = (longlong *)func_0x00018066bd70(param_4);
    if (*(int *)(param_5 + 0x10) != 0) {
      if ((int)param_4[6] != 0) {
        pbVar4 = *(byte **)(param_5 + 8);
        lVar7 = param_4[5] - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18009bdd4;
      }
      if ((int)plVar3[6] != 0) {
        pbVar4 = (byte *)plVar3[5];
        plVar8 = (longlong *)(*(longlong *)(param_5 + 8) - (longlong)pbVar4);
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[(longlong)plVar8];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if (0 < (int)(bVar1 - uVar6)) {
          plVar5 = param_4;
          if (*param_4 == 0) goto LAB_18009bdb7;
          uVar9 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
          plVar5 = plVar3;
          goto LAB_18009bdba;
        }
      }
    }
  }
LAB_18009bdd4:
  bVar2 = true;
  plVar5 = (longlong *)param_1[2];
  plVar8 = param_1;
  while (plVar5 != (longlong *)0x0) {
    plVar8 = plVar5;
    if ((int)plVar5[6] == 0) {
      bVar2 = false;
LAB_18009bdf2:
      plVar5 = (longlong *)*plVar5;
    }
    else {
      if (*(int *)(param_5 + 0x10) == 0) {
        bVar2 = true;
      }
      else {
        pbVar4 = (byte *)plVar5[5];
        lVar7 = *(longlong *)(param_5 + 8) - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar6);
      }
      if (!bVar2) goto LAB_18009bdf2;
      plVar5 = (longlong *)plVar5[1];
    }
  }
  plVar5 = plVar8;
  if (bVar2) {
    if (plVar8 != (longlong *)param_1[1]) {
      plVar5 = (longlong *)func_0x00018066b9a0(plVar8);
      goto LAB_18009be12;
    }
  }
  else {
LAB_18009be12:
    if (*(int *)(param_5 + 0x10) == 0) {
LAB_18009bf1a:
      *param_2 = plVar5;
      return param_2;
    }
    if ((int)plVar5[6] != 0) {
      pbVar4 = *(byte **)(param_5 + 8);
      lVar7 = plVar5[5] - (longlong)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar7];
        if (bVar1 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18009bf1a;
    }
  }
  if (plVar8 != param_1) {
    if ((int)plVar8[6] == 0) {
LAB_18009be87:
      uVar10 = 1;
      goto LAB_18009bed0;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar4 = (byte *)plVar8[5];
      lVar7 = *(longlong *)(param_5 + 8) - (longlong)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar7];
        if (bVar1 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18009be87;
    }
  }
  uVar10 = 0;
LAB_18009bed0:
  lVar7 = FUN_18062b420(_DAT_180c8ed18,0x48,(char)param_1[5]);
  FUN_180627ae0(lVar7 + 0x20,param_5);
  *(int32_t *)(lVar7 + 0x40) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,plVar8,param_1,uVar10);
}



uint64_t *
FUN_18009bf40(longlong *param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             longlong param_5)

{
  byte bVar1;
  longlong *plVar2;
  byte *pbVar3;
  uint64_t *puVar4;
  uint uVar5;
  longlong lVar6;
  uint64_t uVar7;
  int8_t auStack_18 [16];
  
  plVar2 = (longlong *)*param_1;
  if ((param_4 == plVar2) || (param_4 == param_1)) {
    if ((param_1[4] == 0) || (*(int *)(param_5 + 0x10) == 0)) goto LAB_18009c054;
    param_4 = plVar2;
    if (*(int *)(plVar2 + 6) != 0) {
      pbVar3 = *(byte **)(param_5 + 8);
      lVar6 = plVar2[5] - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[lVar6];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_18009c054;
    }
LAB_18009c037:
    uVar7 = 0;
  }
  else {
    plVar2 = (longlong *)func_0x00018066bd70(param_4);
    if (*(int *)(param_5 + 0x10) == 0) goto LAB_18009c054;
    if ((int)param_4[6] != 0) {
      pbVar3 = *(byte **)(param_5 + 8);
      lVar6 = param_4[5] - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[lVar6];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_18009c054;
    }
    if ((int)plVar2[6] == 0) goto LAB_18009c054;
    pbVar3 = (byte *)plVar2[5];
    lVar6 = *(longlong *)(param_5 + 8) - (longlong)pbVar3;
    do {
      bVar1 = *pbVar3;
      uVar5 = (uint)pbVar3[lVar6];
      if (bVar1 != uVar5) break;
      pbVar3 = pbVar3 + 1;
    } while (uVar5 != 0);
    if ((int)(bVar1 - uVar5) < 1) goto LAB_18009c054;
    if (*param_4 == 0) goto LAB_18009c037;
    uVar7 = 1;
    param_4 = plVar2;
  }
  if (param_4 != (longlong *)0x0) {
    FUN_18009cb10(param_1,param_2,param_4,uVar7,param_5);
    return param_2;
  }
LAB_18009c054:
  puVar4 = (uint64_t *)FUN_18009c940(param_1,auStack_18);
  *param_2 = *puVar4;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18009c090(longlong *param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             longlong param_5)

{
  byte bVar1;
  bool bVar2;
  longlong *plVar3;
  byte *pbVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint64_t uVar10;
  
  plVar5 = (longlong *)*param_1;
  if ((param_4 == plVar5) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (*(int *)(param_5 + 0x10) != 0)) {
      plVar8 = param_4;
      if (*(int *)(plVar5 + 6) != 0) {
        pbVar4 = *(byte **)(param_5 + 8);
        plVar8 = (longlong *)(plVar5[5] - (longlong)pbVar4);
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[(longlong)plVar8];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18009c1b4;
      }
LAB_18009c197:
      uVar9 = (ulonglong)plVar8 & 0xffffffffffffff00;
LAB_18009c19a:
      if (plVar5 != (longlong *)0x0) {
        FUN_18009cee0(param_1,param_2,plVar5,uVar9,param_5);
        return param_2;
      }
    }
  }
  else {
    plVar3 = (longlong *)func_0x00018066bd70(param_4);
    if (*(int *)(param_5 + 0x10) != 0) {
      if ((int)param_4[6] != 0) {
        pbVar4 = *(byte **)(param_5 + 8);
        lVar7 = param_4[5] - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18009c1b4;
      }
      if ((int)plVar3[6] != 0) {
        pbVar4 = (byte *)plVar3[5];
        plVar8 = (longlong *)(*(longlong *)(param_5 + 8) - (longlong)pbVar4);
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[(longlong)plVar8];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if (0 < (int)(bVar1 - uVar6)) {
          plVar5 = param_4;
          if (*param_4 == 0) goto LAB_18009c197;
          uVar9 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
          plVar5 = plVar3;
          goto LAB_18009c19a;
        }
      }
    }
  }
LAB_18009c1b4:
  bVar2 = true;
  plVar5 = (longlong *)param_1[2];
  plVar8 = param_1;
  while (plVar5 != (longlong *)0x0) {
    plVar8 = plVar5;
    if ((int)plVar5[6] == 0) {
      bVar2 = false;
LAB_18009c1d2:
      plVar5 = (longlong *)*plVar5;
    }
    else {
      if (*(int *)(param_5 + 0x10) == 0) {
        bVar2 = true;
      }
      else {
        pbVar4 = (byte *)plVar5[5];
        lVar7 = *(longlong *)(param_5 + 8) - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar6);
      }
      if (!bVar2) goto LAB_18009c1d2;
      plVar5 = (longlong *)plVar5[1];
    }
  }
  plVar5 = plVar8;
  if (bVar2) {
    if (plVar8 != (longlong *)param_1[1]) {
      plVar5 = (longlong *)func_0x00018066b9a0(plVar8);
      goto LAB_18009c1f2;
    }
  }
  else {
LAB_18009c1f2:
    if (*(int *)(param_5 + 0x10) == 0) {
LAB_18009c2f7:
      *param_2 = plVar5;
      return param_2;
    }
    if ((int)plVar5[6] != 0) {
      pbVar4 = *(byte **)(param_5 + 8);
      lVar7 = plVar5[5] - (longlong)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar7];
        if (bVar1 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18009c2f7;
    }
  }
  if (plVar8 != param_1) {
    if ((int)plVar8[6] == 0) {
LAB_18009c267:
      uVar10 = 1;
      goto LAB_18009c2b0;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar4 = (byte *)plVar8[5];
      lVar7 = *(longlong *)(param_5 + 8) - (longlong)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar7];
        if (bVar1 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18009c267;
    }
  }
  uVar10 = 0;
LAB_18009c2b0:
  lVar7 = FUN_18062b420(_DAT_180c8ed18,0x48,(char)param_1[5]);
  FUN_180627ae0(lVar7 + 0x20,param_5);
  *(int8_t *)(lVar7 + 0x40) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,plVar8,param_1,uVar10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18009c320(longlong *param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             longlong param_5)

{
  byte bVar1;
  bool bVar2;
  longlong *plVar3;
  byte *pbVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint64_t uVar10;
  
  plVar5 = (longlong *)*param_1;
  if ((param_4 == plVar5) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (*(int *)(param_5 + 0x10) != 0)) {
      plVar8 = param_4;
      if (*(int *)(plVar5 + 6) != 0) {
        pbVar4 = *(byte **)(param_5 + 8);
        plVar8 = (longlong *)(plVar5[5] - (longlong)pbVar4);
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[(longlong)plVar8];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18009c444;
      }
LAB_18009c427:
      uVar9 = (ulonglong)plVar8 & 0xffffffffffffff00;
LAB_18009c42a:
      if (plVar5 != (longlong *)0x0) {
        FUN_18009cfc0(param_1,param_2,plVar5,uVar9,param_5);
        return param_2;
      }
    }
  }
  else {
    plVar3 = (longlong *)func_0x00018066bd70(param_4);
    if (*(int *)(param_5 + 0x10) != 0) {
      if ((int)param_4[6] != 0) {
        pbVar4 = *(byte **)(param_5 + 8);
        lVar7 = param_4[5] - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18009c444;
      }
      if ((int)plVar3[6] != 0) {
        pbVar4 = (byte *)plVar3[5];
        plVar8 = (longlong *)(*(longlong *)(param_5 + 8) - (longlong)pbVar4);
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[(longlong)plVar8];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if (0 < (int)(bVar1 - uVar6)) {
          plVar5 = param_4;
          if (*param_4 == 0) goto LAB_18009c427;
          uVar9 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
          plVar5 = plVar3;
          goto LAB_18009c42a;
        }
      }
    }
  }
LAB_18009c444:
  bVar2 = true;
  plVar5 = (longlong *)param_1[2];
  plVar8 = param_1;
  while (plVar5 != (longlong *)0x0) {
    plVar8 = plVar5;
    if ((int)plVar5[6] == 0) {
      bVar2 = false;
LAB_18009c462:
      plVar5 = (longlong *)*plVar5;
    }
    else {
      if (*(int *)(param_5 + 0x10) == 0) {
        bVar2 = true;
      }
      else {
        pbVar4 = (byte *)plVar5[5];
        lVar7 = *(longlong *)(param_5 + 8) - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar6);
      }
      if (!bVar2) goto LAB_18009c462;
      plVar5 = (longlong *)plVar5[1];
    }
  }
  plVar5 = plVar8;
  if (bVar2) {
    if (plVar8 != (longlong *)param_1[1]) {
      plVar5 = (longlong *)func_0x00018066b9a0(plVar8);
      goto LAB_18009c482;
    }
  }
  else {
LAB_18009c482:
    if (*(int *)(param_5 + 0x10) == 0) {
LAB_18009c58d:
      *param_2 = plVar5;
      return param_2;
    }
    if ((int)plVar5[6] != 0) {
      pbVar4 = *(byte **)(param_5 + 8);
      lVar7 = plVar5[5] - (longlong)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar7];
        if (bVar1 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18009c58d;
    }
  }
  if (plVar8 != param_1) {
    if ((int)plVar8[6] == 0) {
LAB_18009c4f7:
      uVar10 = 1;
      goto LAB_18009c540;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar4 = (byte *)plVar8[5];
      lVar7 = *(longlong *)(param_5 + 8) - (longlong)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar7];
        if (bVar1 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18009c4f7;
    }
  }
  uVar10 = 0;
LAB_18009c540:
  lVar7 = FUN_18062b420(_DAT_180c8ed18,0x1c0,(char)param_1[5]);
  FUN_180627ae0(lVar7 + 0x20,param_5);
  FUN_18009ad10(lVar7 + 0x40);
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,plVar8,param_1,uVar10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18009c5b0(longlong *param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             int *param_5)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t uVar6;
  
  plVar3 = (longlong *)*param_1;
  if ((param_4 == plVar3) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = plVar3, *(int *)(plVar3 + 4) < *param_5)) {
LAB_18009c60f:
      uVar6 = 0;
      goto LAB_18009c612;
    }
  }
  else {
    plVar3 = (longlong *)func_0x00018066bd70(param_4);
    if (((int)param_4[4] < *param_5) && (*param_5 < (int)plVar3[4])) {
      if (*param_4 == 0) goto LAB_18009c60f;
      uVar6 = 1;
      param_4 = plVar3;
LAB_18009c612:
      if (param_4 != (longlong *)0x0) {
        FUN_18009d0a0(param_1,param_2,param_4,uVar6,param_5);
        return param_2;
      }
    }
  }
  bVar1 = true;
  plVar3 = param_1;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[2];
    do {
      plVar3 = plVar4;
      bVar1 = *param_5 < (int)plVar3[4];
      if (*param_5 < (int)plVar3[4]) {
        plVar4 = (longlong *)plVar3[1];
      }
      else {
        plVar4 = (longlong *)*plVar3;
      }
    } while (plVar4 != (longlong *)0x0);
  }
  plVar4 = plVar3;
  if (bVar1) {
    if (plVar3 == (longlong *)param_1[1]) {
      iVar2 = *param_5;
      goto FUN_18009c68a;
    }
    plVar4 = (longlong *)func_0x00018066b9a0(plVar3);
  }
  iVar2 = *param_5;
  if (iVar2 <= (int)plVar4[4]) {
    *param_2 = plVar4;
    return param_2;
  }
FUN_18009c68a:
  if ((plVar3 == param_1) || (iVar2 < (int)plVar3[4])) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  lVar5 = FUN_18062b420(_DAT_180c8ed18,0x28,(char)param_1[5]);
  *(int *)(lVar5 + 0x20) = *param_5;
  *(int32_t *)(lVar5 + 0x24) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar5,plVar3,param_1,uVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





