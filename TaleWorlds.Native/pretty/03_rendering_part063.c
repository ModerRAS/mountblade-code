#include "TaleWorlds.Native.Split.h"

// 03_rendering_part063.c - 10 个函数

// 函数: void FUN_18029fab0(longlong param_1,int32_t param_2,longlong param_3,uint param_4,
void FUN_18029fab0(longlong param_1,int32_t param_2,longlong param_3,uint param_4,
                  uint64_t param_5,int32_t param_6)

{
  longlong *plVar1;
  code *pcVar2;
  
  FUN_18029fc10(param_1,param_3,param_5,param_6);
  if ((param_4 & 1) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x38);
    *(int32_t *)(param_3 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
    (*pcVar2)(plVar1,param_2,1,param_3 + 0x10);
  }
  if ((param_4 & 4) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x1f0);
    *(int32_t *)(param_3 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
    (*pcVar2)(plVar1,param_2,1,param_3 + 0x10);
  }
  if ((param_4 & 2) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x210);
    *(int32_t *)(param_3 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
    (*pcVar2)(plVar1,param_2,1,param_3 + 0x10);
  }
  if ((param_4 & 0x10) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x80);
    *(int32_t *)(param_3 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
    (*pcVar2)(plVar1,param_2,1,param_3 + 0x10);
  }
  if ((param_4 & 0x20) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x238);
    *(int32_t *)(param_3 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
    (*pcVar2)(plVar1,param_2,1,param_3 + 0x10);
  }
  return;
}





// 函数: void FUN_18029fb10(longlong param_1,ulonglong param_2,uint64_t param_3,uint param_4)
void FUN_18029fb10(longlong param_1,ulonglong param_2,uint64_t param_3,uint param_4)

{
  ulonglong uVar1;
  uint64_t auStackX_18 [2];
  
  uVar1 = param_2 & 0xffffffff;
  auStackX_18[0] = param_3;
  if ((param_4 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 200))
              (*(longlong **)(param_1 + 0x8400),param_2,1,auStackX_18);
  }
  if ((param_4 & 2) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x1f8))
              (*(longlong **)(param_1 + 0x8400),uVar1,1,auStackX_18);
  }
  if ((param_4 & 4) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x1d8))
              (*(longlong **)(param_1 + 0x8400),uVar1,1,auStackX_18);
  }
  if ((param_4 & 8) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0xf8))
              (*(longlong **)(param_1 + 0x8400),uVar1,1,auStackX_18);
  }
  if ((param_4 & 0x10) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x40))
              (*(longlong **)(param_1 + 0x8400),uVar1,1,auStackX_18);
  }
  if ((param_4 & 0x20) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x218))
              (*(longlong **)(param_1 + 0x8400),uVar1,1,auStackX_18);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029fc10(longlong param_1,longlong param_2,uint64_t param_3,int32_t param_4)
void FUN_18029fc10(longlong param_1,longlong param_2,uint64_t param_3,int32_t param_4)

{
  int iVar1;
  uint64_t auStack_18 [2];
  
  *(int32_t *)(param_2 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x70))
                    (*(longlong **)(param_1 + 0x8400),*(uint64_t *)(param_2 + 0x10),0,4,0,
                     auStack_18);
  if (iVar1 < 0) {
    FUN_180220810(iVar1,&UNK_180a17358);
  }
                    // WARNING: Subroutine does not return
  memcpy(auStack_18[0],param_3,param_4);
}



uint64_t * FUN_18029fcf0(uint64_t *param_1,longlong param_2)

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
            goto LAB_18029fd67;
          }
        }
        puVar7 = (uint64_t *)*puVar8;
      }
LAB_18029fd67:
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
LAB_18029fdb7:
      return puVar9 + 0x27;
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
      if ((int)(bVar1 - uVar5) < 1) goto LAB_18029fdb7;
    }
  }
  plVar4 = (longlong *)FUN_18029fdf0(param_1,auStackX_8,puVar8,puVar9,param_2);
  return (uint64_t *)(*plVar4 + 0x138);
}



uint64_t *
FUN_18029fd0c(uint64_t param_1,longlong param_2,uint64_t *param_3,uint64_t *param_4)

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
          goto LAB_18029fd67;
        }
      }
      puVar7 = (uint64_t *)*param_3;
    }
LAB_18029fd67:
    if (bVar2) {
      param_3 = param_4;
    }
    param_4 = param_3;
    param_3 = puVar7;
  } while (puVar7 != (uint64_t *)0x0);
  if (param_4 != unaff_RSI) {
    if (*(int *)(param_4 + 6) == 0) {
LAB_18029fdb7:
      return param_4 + 0x27;
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
      if ((int)(bVar1 - uVar5) < 1) goto LAB_18029fdb7;
    }
  }
  plVar4 = (longlong *)FUN_18029fdf0();
  return (uint64_t *)(*plVar4 + 0x138);
}



longlong FUN_18029fd7a(void)

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
LAB_18029fdb7:
      return in_R9 + 0x138;
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
      if ((int)(bVar1 - uVar4) < 1) goto LAB_18029fdb7;
    }
  }
  plVar3 = (longlong *)FUN_18029fdf0();
  return *plVar3 + 0x138;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18029fdf0(longlong *param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
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
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18029ff14;
      }
LAB_18029fef7:
      uVar9 = (ulonglong)plVar8 & 0xffffffffffffff00;
LAB_18029fefa:
      if (plVar5 != (longlong *)0x0) {
        FUN_1802a00a0(param_1,param_2,plVar5,uVar9,param_5);
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
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18029ff14;
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
          if (*param_4 == 0) goto LAB_18029fef7;
          uVar9 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
          plVar5 = plVar3;
          goto LAB_18029fefa;
        }
      }
    }
  }
LAB_18029ff14:
  bVar2 = true;
  plVar5 = (longlong *)param_1[2];
  plVar8 = param_1;
  while (plVar5 != (longlong *)0x0) {
    plVar8 = plVar5;
    if ((int)plVar5[6] == 0) {
      bVar2 = false;
LAB_18029ff32:
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
      if (!bVar2) goto LAB_18029ff32;
      plVar5 = (longlong *)plVar5[1];
    }
  }
  plVar5 = plVar8;
  if (bVar2) {
    if (plVar8 != (longlong *)param_1[1]) {
      plVar5 = (longlong *)func_0x00018066b9a0(plVar8);
      goto LAB_18029ff52;
    }
  }
  else {
LAB_18029ff52:
    if (*(int *)(param_5 + 0x10) == 0) {
LAB_1802a0071:
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
      if ((int)(bVar1 - uVar6) < 1) goto LAB_1802a0071;
    }
  }
  if (plVar8 != param_1) {
    if ((int)plVar8[6] == 0) {
LAB_18029ffc7:
      uVar10 = 1;
      goto LAB_1802a0010;
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
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18029ffc7;
    }
  }
  uVar10 = 0;
LAB_1802a0010:
  lVar7 = FUN_18062b420(_DAT_180c8ed18,0x158,(char)param_1[5]);
  FUN_180068ff0(lVar7 + 0x20,param_5);
  *(uint64_t *)(lVar7 + 0x138) = 0;
  *(uint64_t *)(lVar7 + 0x140) = 0;
  *(uint64_t *)(lVar7 + 0x148) = 0;
  *(uint64_t *)(lVar7 + 0x150) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,plVar8,param_1,uVar10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803001a0(longlong param_1)
void FUN_1803001a0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar3 = 0;
    uVar4 = uVar3;
    if ('\0' < *(char *)(param_1 + 0x20)) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x18) + uVar4;
        if (*(char *)(lVar1 + 0xa1) != '\0') {
          if (*(longlong *)(lVar1 + 0xa8) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(uint64_t *)(lVar1 + 0xa8) = 0;
        }
        *(uint64_t *)(lVar1 + 0xf0) = 0;
        FUN_180057830();
        FUN_180057830();
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
        uVar4 = uVar4 + 0x100;
      } while ((int)uVar2 < (int)*(char *)(param_1 + 0x20));
      lVar1 = *(longlong *)(param_1 + 0x18);
    }
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)(param_1 + 0x18) = 0;
    *(int8_t *)(param_1 + 0x20) = 0;
  }
  if (*(float *)(param_1 + 0x3c) < 0.0) {
    *(int32_t *)(param_1 + 0x34) = 0x3dcccccd;
    return;
  }
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x3c) + 1.1920929e-07;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180300290(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
void FUN_180300290(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)

{
  uint *puVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  uint uVar4;
  longlong *plVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int8_t auStack_1a8 [32];
  int iStack_188;
  uint64_t uStack_180;
  int32_t uStack_178;
  int32_t uStack_174;
  int32_t uStack_170;
  int32_t uStack_16c;
  int32_t uStack_168;
  int32_t uStack_164;
  int32_t uStack_160;
  int32_t uStack_15c;
  int32_t uStack_158;
  int32_t uStack_154;
  int32_t uStack_150;
  int32_t uStack_14c;
  uint64_t uStack_148;
  uint64_t uStack_140;
  int32_t uStack_138;
  int8_t uStack_134;
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  int32_t uStack_104;
  int32_t uStack_100;
  int32_t uStack_fc;
  int32_t uStack_f8;
  int32_t uStack_f4;
  int32_t uStack_f0;
  int32_t uStack_ec;
  int32_t uStack_e8;
  int8_t uStack_e4;
  int32_t uStack_d8;
  int32_t uStack_d4;
  int32_t uStack_d0;
  int32_t uStack_cc;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  uint64_t uStack_78;
  uint64_t uStack_70;
  ulonglong uStack_68;
  
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_1a8;
  iVar11 = 0;
  uStack_128 = 0x3f800000;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0x3f800000;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0x3f800000;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0x3f800000;
  uStack_e4 = 0;
  uStack_180 = param_3;
  uStack_e8 = param_4;
  if (*(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3 != 0) {
    lVar12 = 0;
    do {
      plVar5 = *(longlong **)(lVar12 + *(longlong *)(param_1 + 0x1a8));
      (**(code **)(*plVar5 + 0x168))(plVar5,param_2,param_3,&uStack_128);
      lVar12 = lVar12 + 8;
      iVar11 = iVar11 + 1;
    } while ((ulonglong)(longlong)iVar11 <
             (ulonglong)(*(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3));
  }
  uStack_178 = 0x3f800000;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_164 = 0x3f800000;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_150 = 0x3f800000;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_140 = 0x3f80000000000000;
  uStack_134 = 0;
  iStack_188 = 0;
  uStack_138 = param_4;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    lVar12 = 0;
    do {
      uVar8 = uStack_180;
      lVar9 = *(longlong *)(param_1 + 0x18);
      iVar11 = 0;
      if (*(longlong *)(lVar12 + 0xb8 + lVar9) - *(longlong *)(lVar12 + 0xb0 + lVar9) >> 3 != 0) {
        lVar10 = (longlong)iStack_188 * 0x100;
        lVar13 = 0;
        do {
          do {
            LOCK();
            puVar1 = (uint *)(lVar10 + lVar9);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 | 1;
            UNLOCK();
          } while ((uVar4 & 1) != 0);
          puVar2 = (int32_t *)(lVar10 + 4 + lVar9);
          uStack_d8 = *puVar2;
          uStack_d4 = puVar2[1];
          uStack_d0 = puVar2[2];
          uStack_cc = puVar2[3];
          puVar3 = (uint64_t *)(lVar10 + 0x14 + lVar9);
          uVar6 = *puVar3;
          uVar7 = puVar3[1];
          *(int32_t *)(lVar10 + lVar9) = 0;
          uStack_c8 = uVar6;
          uStack_c0 = uVar7;
          uStack_88 = uStack_d8;
          uStack_84 = uStack_d4;
          uStack_80 = uStack_d0;
          uStack_7c = uStack_cc;
          uStack_78 = uVar6;
          uStack_70 = uVar7;
          FUN_18063b5f0(&uStack_b8,&uStack_d8);
          uStack_178 = uStack_b8;
          uStack_174 = uStack_b4;
          uStack_170 = uStack_b0;
          uStack_16c = uStack_ac;
          uStack_168 = uStack_a8;
          uStack_164 = uStack_a4;
          uStack_160 = uStack_a0;
          uStack_15c = uStack_9c;
          uStack_158 = uStack_98;
          uStack_154 = uStack_94;
          uStack_150 = uStack_90;
          uStack_14c = uStack_8c;
          plVar5 = *(longlong **)
                    (lVar13 + *(longlong *)(lVar12 + 0xb0 + *(longlong *)(param_1 + 0x18)));
          uStack_148 = uVar6;
          uStack_140 = uVar7;
          (**(code **)(*plVar5 + 0x168))(plVar5,param_2,uVar8,&uStack_178);
          lVar9 = *(longlong *)(param_1 + 0x18);
          iVar11 = iVar11 + 1;
          lVar13 = lVar13 + 8;
        } while ((ulonglong)(longlong)iVar11 <
                 (ulonglong)
                 (*(longlong *)(lVar12 + 0xb8 + lVar9) - *(longlong *)(lVar12 + 0xb0 + lVar9) >> 3))
        ;
      }
      iStack_188 = iStack_188 + 1;
      lVar12 = lVar12 + 0x100;
    } while (iStack_188 < *(char *)(param_1 + 0x20));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_1a8);
}





// 函数: void FUN_1803003aa(void)
void FUN_1803003aa(void)

{
  uint *puVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  uint uVar4;
  longlong *plVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  longlong lVar12;
  longlong lVar13;
  int32_t *unaff_RBP;
  longlong lVar14;
  longlong unaff_RDI;
  int iVar15;
  int unaff_R14D;
  longlong lVar16;
  int iStackX_20;
  uint64_t in_stack_00000028;
  int32_t uStack0000000000000030;
  int32_t uStack0000000000000034;
  int32_t uStack0000000000000038;
  int32_t uStack000000000000003c;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  
  lVar14 = 0;
  do {
    lVar12 = *(longlong *)(unaff_RDI + 0x18);
    iVar15 = 0;
    if (*(longlong *)(lVar14 + 0xb8 + lVar12) - *(longlong *)(lVar14 + 0xb0 + lVar12) >> 3 != 0) {
      lVar13 = (longlong)unaff_R14D * 0x100;
      lVar16 = 0;
      do {
        do {
          LOCK();
          puVar1 = (uint *)(lVar13 + lVar12);
          uVar4 = *puVar1;
          *puVar1 = *puVar1 | 1;
          UNLOCK();
        } while ((uVar4 & 1) != 0);
        puVar2 = (int32_t *)(lVar13 + 4 + lVar12);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        puVar3 = (uint64_t *)(lVar13 + 0x14 + lVar12);
        uVar10 = *puVar3;
        uVar11 = puVar3[1];
        unaff_RBP[8] = uVar6;
        unaff_RBP[9] = uVar7;
        unaff_RBP[10] = uVar8;
        unaff_RBP[0xb] = uVar9;
        *(uint64_t *)(unaff_RBP + 0xc) = uVar10;
        *(uint64_t *)(unaff_RBP + 0xe) = uVar11;
        *(int32_t *)(lVar13 + lVar12) = 0;
        unaff_RBP[-0xc] = uVar6;
        unaff_RBP[-0xb] = uVar7;
        unaff_RBP[-10] = uVar8;
        unaff_RBP[-9] = uVar9;
        *(uint64_t *)(unaff_RBP + -8) = uVar10;
        *(uint64_t *)(unaff_RBP + -6) = uVar11;
        FUN_18063b5f0(unaff_RBP + -4,unaff_RBP + -0xc);
        uStack0000000000000030 = unaff_RBP[-4];
        uStack0000000000000034 = unaff_RBP[-3];
        uStack0000000000000038 = unaff_RBP[-2];
        uStack000000000000003c = unaff_RBP[-1];
        uStack0000000000000040 = *unaff_RBP;
        uStack0000000000000044 = unaff_RBP[1];
        uStack0000000000000048 = unaff_RBP[2];
        uStack000000000000004c = unaff_RBP[3];
        uStack0000000000000050 = unaff_RBP[4];
        uStack0000000000000054 = unaff_RBP[5];
        uStack0000000000000058 = unaff_RBP[6];
        uStack000000000000005c = unaff_RBP[7];
        plVar5 = *(longlong **)
                  (lVar16 + *(longlong *)(lVar14 + 0xb0 + *(longlong *)(unaff_RDI + 0x18)));
        in_stack_00000060 = uVar10;
        in_stack_00000068 = uVar11;
        (**(code **)(*plVar5 + 0x168))
                  (plVar5,uStack0000000000000040,in_stack_00000028,&stack0x00000030);
        lVar12 = *(longlong *)(unaff_RDI + 0x18);
        iVar15 = iVar15 + 1;
        lVar16 = lVar16 + 8;
        unaff_R14D = iStackX_20;
      } while ((ulonglong)(longlong)iVar15 <
               (ulonglong)
               (*(longlong *)(lVar14 + 0xb8 + lVar12) - *(longlong *)(lVar14 + 0xb0 + lVar12) >> 3))
      ;
    }
    unaff_R14D = unaff_R14D + 1;
    lVar14 = lVar14 + 0x100;
    iStackX_20 = unaff_R14D;
  } while (unaff_R14D < *(char *)(unaff_RDI + 0x20));
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x10) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1803004ce(void)
void FUN_1803004ce(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x40) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1803004f0(longlong param_1,char param_2,longlong *param_3)
void FUN_1803004f0(longlong param_1,char param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  uint64_t *puVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_2 * 0x100 + *(longlong *)(param_1 + 0x18);
  plVar1 = *(longlong **)(lVar5 + 0xb8);
  plVar4 = *(longlong **)(lVar5 + 0xb0);
  if (plVar4 != plVar1) {
    do {
      if ((longlong *)*plVar4 == param_3) break;
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
    if (plVar4 != plVar1) {
      (**(code **)(*param_3 + 0x1e0))(param_3,0);
      cVar2 = (**(code **)(*param_3 + 0xa0))(param_3);
      if (cVar2 != '\0') {
        for (puVar3 = *(uint64_t **)(lVar5 + 0xd0);
            (puVar3 != *(uint64_t **)(lVar5 + 0xd8) && ((longlong *)*puVar3 != param_3));
            puVar3 = puVar3 + 1) {
        }
        FUN_1800ba050();
      }
      FUN_1800ba050(lVar5 + 0xb0,plVar4);
    }
  }
  return;
}





// 函数: void FUN_1803005b0(longlong param_1)
void FUN_1803005b0(longlong param_1)

{
  longlong lVar1;
  
  if ((*(float *)(param_1 + 0x3c) < 0.0) ||
     (*(float *)(param_1 + 0x34) <= *(float *)(param_1 + 0x3c))) {
    param_1 = *(longlong *)(param_1 + 0x28);
    if (param_1 == 0) {
      return;
    }
    if (*(float *)(param_1 + 0x3c) < 0.0) {
      return;
    }
    if (*(float *)(param_1 + 0x34) <= *(float *)(param_1 + 0x3c)) {
      return;
    }
    if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
      return;
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0xa8) & 1) == 0)) {
      FUN_1802fac00(lVar1,*(longlong *)(lVar1 + 0x10) + 0x70,0xbf800000);
    }
    if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
      return;
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd200(param_1,lVar1 + 0x70,0xbf800000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180300650(longlong param_1,longlong param_2)
void FUN_180300650(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  if (*(longlong *)(param_1 + 0x28) == param_2) {
    return;
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8);
  if ((*(int *)(lVar1 + 0x48) < _DAT_180d49678) &&
     (FUN_1808fcb90(&system_ptr_9678,param_2,(ulonglong)__tls_index,lVar1,0xfffffffffffffffe),
     _DAT_180d49678 == -1)) {
    _Mtx_init_in_situ(0x180d49680,2);
    FUN_1808fc820(FUN_180941da0);
    FUN_1808fcb30(&system_ptr_9678);
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    if (param_2 == 0) goto LAB_18030083c;
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20);
    iVar2 = _Mtx_lock(0x180d49680);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    plVar8 = *(longlong **)(lVar1 + 0x29f8);
    if (plVar8 < *(longlong **)(lVar1 + 0x2a00)) {
      *(longlong **)(lVar1 + 0x29f8) = plVar8 + 1;
      *plVar8 = param_1;
      goto LAB_180300827;
    }
    plVar6 = *(longlong **)(lVar1 + 0x29f0);
    lVar4 = (longlong)plVar8 - (longlong)plVar6 >> 3;
    if (lVar4 == 0) {
      lVar4 = 1;
LAB_1803007a9:
      plVar5 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar4 * 8,*(int8_t *)(lVar1 + 0x2a08));
      plVar8 = *(longlong **)(lVar1 + 0x29f8);
      plVar6 = *(longlong **)(lVar1 + 0x29f0);
    }
    else {
      lVar4 = lVar4 * 2;
      if (lVar4 != 0) goto LAB_1803007a9;
      plVar5 = (longlong *)0x0;
    }
    if (plVar6 != plVar8) {
                    // WARNING: Subroutine does not return
      memmove(plVar5,plVar6,(longlong)plVar8 - (longlong)plVar6);
    }
    *plVar5 = param_1;
    if (*(longlong *)(lVar1 + 0x29f0) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(longlong **)(lVar1 + 0x29f0) = plVar5;
    *(longlong **)(lVar1 + 0x29f8) = plVar5 + 1;
    *(longlong **)(lVar1 + 0x2a00) = plVar5 + lVar4;
  }
  else {
    if (param_2 != 0) goto LAB_18030083c;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
    iVar2 = _Mtx_lock(0x180d49680);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    lVar4 = *(longlong *)(lVar1 + 0x29f0);
    uVar3 = 0;
    iVar2 = (int)(*(longlong *)(lVar1 + 0x29f8) - lVar4 >> 3);
    if (0 < iVar2) {
      uVar7 = uVar3;
      do {
        if (*(longlong *)(lVar4 + uVar3 * 8) == param_1) {
          *(uint64_t *)(lVar4 + (longlong)(int)uVar7 * 8) =
               *(uint64_t *)(lVar4 + -8 + (longlong)iVar2 * 8);
          *(longlong *)(lVar1 + 0x29f8) = *(longlong *)(lVar1 + 0x29f8) + -8;
          break;
        }
        uVar7 = (ulonglong)((int)uVar7 + 1);
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < (longlong)iVar2);
    }
  }
LAB_180300827:
  iVar2 = _Mtx_unlock(0x180d49680);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
LAB_18030083c:
  *(longlong *)(param_1 + 0x28) = param_2;
  if (param_2 != 0) {
    if (*(float *)(param_2 + 0x3c) < 0.0) {
      *(int32_t *)(param_2 + 0x34) = 0x3dcccccd;
    }
    else {
      *(float *)(param_2 + 0x34) = *(float *)(param_2 + 0x3c) + 1.1920929e-07;
    }
    *(int8_t *)(*(longlong *)(param_1 + 0x28) + 0xaa) = 1;
  }
  if (*(float *)(param_1 + 0x3c) < 0.0) {
    *(int32_t *)(param_1 + 0x34) = 0x3dcccccd;
  }
  else {
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x3c) + 1.1920929e-07;
  }
  return;
}



ulonglong FUN_1803008f0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  iVar1 = (int)(*(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3);
  uVar4 = uVar3;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1a8) + uVar3 * 8) + 0x98))();
      if (iVar2 == param_2) {
        uVar4 = (ulonglong)((int)uVar4 + 1);
      }
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)iVar1);
  }
  return uVar4;
}



uint FUN_180300926(void)

{
  int iVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint unaff_EDI;
  int unaff_R14D;
  
  uVar2 = (ulonglong)unaff_EDI;
  do {
    iVar1 = (**(code **)(**(longlong **)(*(longlong *)(unaff_RBP + 0x1a8) + uVar2 * 8) + 0x98))();
    if (iVar1 == unaff_R14D) {
      unaff_EDI = unaff_EDI + 1;
    }
    uVar2 = uVar2 + 1;
  } while ((longlong)uVar2 < unaff_RSI);
  return unaff_EDI;
}



int32_t FUN_180300958(void)

{
  int32_t unaff_EDI;
  
  return unaff_EDI;
}





