#include "TaleWorlds.Native.Split.h"

// 03_rendering_part206.c - 12 个函数

// 函数: void FUN_180389000(longlong *param_1)
void FUN_180389000(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  uVar5 = uVar3;
  if (param_1[1] - *param_1 >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(uVar5 + *param_1);
      *(uint64_t *)(uVar5 + *param_1) = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
      uVar5 = uVar5 + 8;
    } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



longlong * FUN_180389090(longlong *param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  byte *pbVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  
  iVar10 = 0;
  lVar4 = *param_1;
  uVar8 = param_1[1] - lVar4 >> 3;
  if (uVar8 != 0) {
    iVar2 = *(int *)(param_3 + 0x10);
    lVar11 = 0;
    do {
      iVar3 = *(int *)(*(longlong *)(lVar11 + lVar4) + 0x88);
      iVar7 = iVar2;
      if (iVar3 == iVar2) {
        if (iVar3 != 0) {
          pbVar6 = *(byte **)(*(longlong *)(lVar11 + lVar4) + 0x80);
          lVar9 = *(longlong *)(param_3 + 8) - (longlong)pbVar6;
          do {
            pbVar1 = pbVar6 + lVar9;
            iVar7 = (uint)*pbVar6 - (uint)*pbVar1;
            if (iVar7 != 0) break;
            pbVar6 = pbVar6 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18038911f:
        if (iVar7 == 0) {
          plVar5 = *(longlong **)(lVar4 + (longlong)iVar10 * 8);
          *param_2 = (longlong)plVar5;
          if (plVar5 == (longlong *)0x0) {
            return param_2;
          }
          (**(code **)(*plVar5 + 0x28))();
          return param_2;
        }
      }
      else if (iVar3 == 0) goto LAB_18038911f;
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + 8;
    } while ((ulonglong)(longlong)iVar10 < uVar8);
  }
  *param_2 = 0;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180389170(longlong *param_1,longlong param_2)
void FUN_180389170(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  uint64_t uVar2;
  longlong *plVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  longlong *plVar9;
  uint64_t *puVar10;
  char *pcVar11;
  char *pcVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  int32_t uStack_80;
  int32_t uStack_7c;
  uint64_t *puStack_70;
  uint64_t *puStack_68;
  uint64_t *puStack_60;
  int32_t uStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t **ppuStack_48;
  void *puStack_40;
  code *pcStack_38;
  
  uVar14 = 0xfffffffffffffffe;
  puStack_70 = (uint64_t *)0x0;
  puStack_68 = (uint64_t *)0x0;
  puStack_60 = (uint64_t *)0x0;
  uStack_58 = 3;
  pcVar11 = "path";
  do {
    pcVar12 = pcVar11;
    pcVar11 = pcVar12 + 1;
  } while (*pcVar11 != '\0');
  pcVar12 = pcVar12 + -0x180a1022b;
  for (pcVar11 = *(char **)(param_2 + 0x30); pcVar1 = (char *)0x0, pcVar11 != (char *)0x0;
      pcVar11 = *(char **)(pcVar11 + 0x58)) {
    pcVar6 = *(char **)pcVar11;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = (char *)0x180d48d24;
      pcVar7 = (char *)0x0;
    }
    else {
      pcVar7 = *(char **)(pcVar11 + 0x10);
    }
    if (pcVar7 == pcVar12) {
      pcVar7 = pcVar7 + (longlong)pcVar6;
      pcVar1 = pcVar11;
      if (pcVar7 <= pcVar6) break;
      lVar8 = (longlong)&UNK_180a1022c - (longlong)pcVar6;
      while (*pcVar6 == pcVar6[lVar8]) {
        pcVar6 = pcVar6 + 1;
        if (pcVar7 <= pcVar6) goto joined_r0x000180389222;
      }
    }
  }
joined_r0x000180389222:
  do {
    if (pcVar1 == (char *)0x0) {
      ppuStack_48 = &puStack_70;
      puStack_40 = &UNK_180389710;
      pcStack_38 = FUN_1803896b0;
      uStack_80 = SUB84(param_1,0);
      uStack_7c = (int32_t)((ulonglong)param_1 >> 0x20);
      uStack_50 = uStack_80;
      uStack_4c = uStack_7c;
      FUN_18015b810(&uStack_50,0,(longlong)puStack_68 - (longlong)puStack_70 >> 3,1,
                    0xffffffffffffffff,&uStack_50,uVar14);
      if (puStack_70 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    puVar4 = (uint64_t *)0x0;
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,600,8,CONCAT71((int7)((ulonglong)pcVar12 >> 8),3));
    plVar3 = (longlong *)FUN_180464ff0(uVar2,param_1[4]);
    if (puStack_68 < puStack_60) {
      *puStack_68 = pcVar1;
      puVar4 = puStack_68;
    }
    else {
      lVar8 = (longlong)puStack_68 - (longlong)puStack_70 >> 3;
      if (lVar8 == 0) {
        lVar8 = 1;
LAB_180389297:
        puVar4 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 8,(int8_t)uStack_58);
      }
      else {
        lVar8 = lVar8 * 2;
        if (lVar8 != 0) goto LAB_180389297;
      }
      if (puStack_70 != puStack_68) {
                    // WARNING: Subroutine does not return
        memmove(puVar4,puStack_70,(longlong)puStack_68 - (longlong)puStack_70);
      }
      *puVar4 = pcVar1;
      if (puStack_70 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_60 = puVar4 + lVar8;
      puStack_70 = puVar4;
    }
    puStack_68 = puVar4 + 1;
    puVar4 = (uint64_t *)0x0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    puVar10 = (uint64_t *)param_1[1];
    if (puVar10 < (uint64_t *)param_1[2]) {
      param_1[1] = (longlong)(puVar10 + 1);
      *puVar10 = plVar3;
    }
    else {
      puVar5 = (uint64_t *)*param_1;
      lVar8 = (longlong)puVar10 - (longlong)puVar5 >> 3;
      if (lVar8 == 0) {
        lVar8 = 1;
LAB_180389368:
        puVar4 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 8,(char)param_1[3]);
        puVar10 = (uint64_t *)param_1[1];
        puVar5 = (uint64_t *)*param_1;
        puVar13 = puVar4;
      }
      else {
        lVar8 = lVar8 * 2;
        puVar13 = puVar4;
        if (lVar8 != 0) goto LAB_180389368;
      }
      for (; puVar5 != puVar10; puVar5 = puVar5 + 1) {
        *puVar4 = *puVar5;
        *puVar5 = 0;
        puVar4 = puVar4 + 1;
      }
      *puVar4 = plVar3;
      plVar3 = (longlong *)param_1[1];
      plVar9 = (longlong *)*param_1;
      if (plVar9 != plVar3) {
        do {
          if ((longlong *)*plVar9 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar9 + 0x38))();
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar3);
        plVar9 = (longlong *)*param_1;
      }
      if (plVar9 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar9);
      }
      *param_1 = (longlong)puVar13;
      param_1[1] = (longlong)(puVar4 + 1);
      param_1[2] = (longlong)(puVar13 + lVar8);
    }
    pcVar11 = "path";
    do {
      pcVar12 = pcVar11;
      pcVar11 = pcVar12 + 1;
    } while (*pcVar11 != '\0');
    pcVar12 = pcVar12 + -0x180a1022b;
    for (pcVar11 = *(char **)(pcVar1 + 0x58); pcVar1 = (char *)0x0, pcVar11 != (char *)0x0;
        pcVar11 = *(char **)(pcVar11 + 0x58)) {
      pcVar6 = *(char **)pcVar11;
      if (pcVar6 == (char *)0x0) {
        pcVar7 = (char *)0x0;
        pcVar6 = (char *)0x180d48d24;
      }
      else {
        pcVar7 = *(char **)(pcVar11 + 0x10);
      }
      if (pcVar7 == pcVar12) {
        pcVar7 = pcVar7 + (longlong)pcVar6;
        pcVar1 = pcVar11;
        if (pcVar7 <= pcVar6) break;
        lVar8 = (longlong)&UNK_180a1022c - (longlong)pcVar6;
        while (*pcVar6 == pcVar6[lVar8]) {
          pcVar6 = pcVar6 + 1;
          if (pcVar7 <= pcVar6) goto joined_r0x000180389222;
        }
      }
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180389520(longlong *param_1,longlong *param_2,longlong param_3)
void FUN_180389520(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  char *pcVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  lVar5 = *param_1;
  iVar9 = 0;
  if (param_1[1] - lVar5 >> 3 != 0) {
    lVar10 = 0;
    do {
      lVar5 = *(longlong *)(lVar10 + lVar5);
      uVar1 = *(uint *)(param_3 + 0x10);
      if (uVar1 <= *(uint *)(lVar5 + 0x88)) {
        uVar4 = 0;
        if (uVar1 != 0) {
          pcVar2 = *(char **)(param_3 + 8);
          lVar8 = *(longlong *)(lVar5 + 0x80) - (longlong)pcVar2;
          do {
            if (pcVar2[lVar8] != *pcVar2) goto LAB_18038965b;
            uVar4 = uVar4 + 1;
            pcVar2 = pcVar2 + 1;
          } while (uVar4 < uVar1);
        }
        plVar7 = (longlong *)param_2[1];
        if (plVar7 < (longlong *)param_2[2]) {
          param_2[1] = (longlong)(plVar7 + 1);
          *plVar7 = lVar5;
        }
        else {
          plVar6 = (longlong *)*param_2;
          lVar8 = (longlong)plVar7 - (longlong)plVar6 >> 3;
          if (lVar8 == 0) {
            lVar8 = 1;
LAB_1803895f5:
            plVar3 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 8,(char)param_2[3]);
            plVar6 = (longlong *)*param_2;
            plVar7 = (longlong *)param_2[1];
          }
          else {
            lVar8 = lVar8 * 2;
            if (lVar8 != 0) goto LAB_1803895f5;
            plVar3 = (longlong *)0x0;
          }
          if (plVar6 != plVar7) {
                    // WARNING: Subroutine does not return
            memmove(plVar3,plVar6,(longlong)plVar7 - (longlong)plVar6);
          }
          *plVar3 = lVar5;
          if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *param_2 = (longlong)plVar3;
          param_2[2] = (longlong)(plVar3 + lVar8);
          param_2[1] = (longlong)(plVar3 + 1);
        }
      }
LAB_18038965b:
      lVar5 = *param_1;
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + 8;
    } while ((ulonglong)(longlong)iVar9 < (ulonglong)(param_1[1] - lVar5 >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180389551(uint64_t param_1,longlong param_2,uint64_t param_3,longlong param_4)
void FUN_180389551(uint64_t param_1,longlong param_2,uint64_t param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  char *pcVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *unaff_RDI;
  longlong lVar8;
  int unaff_R12D;
  longlong *unaff_R13;
  longlong lVar9;
  longlong in_stack_00000060;
  
  lVar9 = 0;
  do {
    lVar2 = *(longlong *)(lVar9 + param_2);
    uVar1 = *(uint *)(param_4 + 0x10);
    if (uVar1 <= *(uint *)(lVar2 + 0x88)) {
      uVar5 = 0;
      if (uVar1 != 0) {
        pcVar3 = *(char **)(param_4 + 8);
        lVar8 = *(longlong *)(lVar2 + 0x80) - (longlong)pcVar3;
        do {
          if (pcVar3[lVar8] != *pcVar3) goto LAB_18038965b;
          uVar5 = uVar5 + 1;
          pcVar3 = pcVar3 + 1;
        } while (uVar5 < uVar1);
      }
      plVar7 = (longlong *)unaff_RDI[1];
      if (plVar7 < (longlong *)unaff_RDI[2]) {
        unaff_RDI[1] = (longlong)(plVar7 + 1);
        *plVar7 = lVar2;
      }
      else {
        plVar6 = (longlong *)*unaff_RDI;
        lVar8 = (longlong)plVar7 - (longlong)plVar6 >> 3;
        if (lVar8 == 0) {
          lVar8 = 1;
LAB_1803895f5:
          plVar4 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 8,(char)unaff_RDI[3]);
          plVar6 = (longlong *)*unaff_RDI;
          plVar7 = (longlong *)unaff_RDI[1];
        }
        else {
          lVar8 = lVar8 * 2;
          if (lVar8 != 0) goto LAB_1803895f5;
          plVar4 = (longlong *)0x0;
        }
        if (plVar6 != plVar7) {
                    // WARNING: Subroutine does not return
          memmove(plVar4,plVar6,(longlong)plVar7 - (longlong)plVar6);
        }
        *plVar4 = lVar2;
        if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *unaff_RDI = (longlong)plVar4;
        unaff_RDI[2] = (longlong)(plVar4 + lVar8);
        unaff_RDI[1] = (longlong)(plVar4 + 1);
      }
    }
LAB_18038965b:
    param_2 = *unaff_R13;
    unaff_R12D = unaff_R12D + 1;
    lVar9 = lVar9 + 8;
    param_4 = in_stack_00000060;
    if ((ulonglong)(unaff_R13[1] - param_2 >> 3) <= (ulonglong)(longlong)unaff_R12D) {
      return;
    }
  } while( true );
}





// 函数: void FUN_18038969b(void)
void FUN_18038969b(void)

{
  return;
}





// 函数: void FUN_1803896b0(int param_1,int param_2,uint64_t *param_3)
void FUN_1803896b0(int param_1,int param_2,uint64_t *param_3)

{
  longlong lVar1;
  
  for (lVar1 = (longlong)param_1; lVar1 < param_2; lVar1 = lVar1 + 1) {
    FUN_180466800(*(uint64_t *)(*(longlong *)*param_3 + lVar1 * 8),
                  *(uint64_t *)(*(longlong *)param_3[1] + lVar1 * 8));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180389750(longlong *param_1)
void FUN_180389750(longlong *param_1)

{
  longlong *plVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  
  lVar3 = _DAT_180c82868;
  plVar1 = (longlong *)*param_1;
  if ((plVar1 != (longlong *)0x0) && (_DAT_180c82868 != 0)) {
    pplStackX_18 = &plStackX_10;
    plStackX_10 = plVar1;
    (**(code **)(*plVar1 + 0x28))();
    FUN_18005e6a0(lVar3,&plStackX_10,0);
  }
  puVar2 = (uint64_t *)param_1[1];
  if (puVar2 != (uint64_t *)0x0) {
    lVar3 = __RTCastToVoid(puVar2);
    (**(code **)*puVar2)(puVar2,0);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
  }
  param_1[1] = 0;
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180389800(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180389800(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  uint64_t uVar4;
  
  lVar3 = _DAT_180c82868;
  uVar4 = 0xfffffffffffffffe;
  plVar1 = (longlong *)*param_1;
  if ((plVar1 != (longlong *)0x0) && (_DAT_180c82868 != 0)) {
    pplStackX_10 = &plStackX_8;
    plStackX_8 = plVar1;
    (**(code **)(*plVar1 + 0x28))();
    FUN_18005e6a0(lVar3,&plStackX_8,0);
  }
  puVar2 = (uint64_t *)param_1[1];
  if (puVar2 != (uint64_t *)0x0) {
    lVar3 = __RTCastToVoid(puVar2);
    (**(code **)*puVar2)(puVar2,0,(uint64_t *)*puVar2,param_4,uVar4);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
  }
  param_1[1] = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803898a0(longlong *param_1)
void FUN_1803898a0(longlong *param_1)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  longlong lVar3;
  longlong *plVar4;
  int8_t auStack_108 [32];
  longlong *plStack_e8;
  void **ppuStack_e0;
  uint64_t uStack_d8;
  void *apuStack_c8 [19];
  char cStack_2a;
  char cStack_27;
  ulonglong uStack_18;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  FUN_180623de0(apuStack_c8);
  if (cStack_27 == '\0') {
    if (cStack_2a == '\0') {
      uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x408,8,0x1d);
      lVar3 = FUN_1804707c0(uVar2);
      param_1[1] = lVar3;
    }
    else {
      puVar1 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x2c8,8,0x1d);
      plStack_e8 = puVar1;
      FUN_180490d10(puVar1);
      *puVar1 = &UNK_180a2af60;
      uVar2 = FUN_18062b420(_DAT_180c8ed18,0xc00000,0x1d);
      puVar1[0x43] = uVar2;
      uVar2 = FUN_18062b420(_DAT_180c8ed18,0x80,0x1d);
      puVar1[0x44] = uVar2;
      param_1[1] = (longlong)puVar1;
    }
  }
  else {
    puVar1 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x2c0,8,0x1d);
    plStack_e8 = puVar1;
    FUN_18048dd80(puVar1);
    *puVar1 = &UNK_180a2aea0;
    uVar2 = FUN_18062b420(_DAT_180c8ed18,0xc00000,0x1d);
    puVar1[0x42] = uVar2;
    uVar2 = FUN_18062b420(_DAT_180c8ed18,0x80,0x1d);
    puVar1[0x43] = uVar2;
    param_1[1] = (longlong)puVar1;
  }
  plVar4 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x210,0x10,3);
  ppuStack_e0 = (void **)plVar4;
  FUN_180049830(plVar4);
  *plVar4 = (longlong)&UNK_180a21cc8;
  FUN_180094c20(plVar4 + 0x18);
  plVar4[0x40] = (longlong)param_1;
  LOCK();
  *(int8_t *)(plVar4 + 2) = 1;
  UNLOCK();
  plStack_e8 = plVar4;
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plStack_e8 = (longlong *)*param_1;
  *param_1 = (longlong)plVar4;
  if (plStack_e8 != (longlong *)0x0) {
    (**(code **)(*plStack_e8 + 0x38))();
  }
  ppuStack_e0 = apuStack_c8;
  apuStack_c8[0] = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_108);
}



uint64_t FUN_180389a90(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_1 + 8);
  plStackX_10 = param_2;
  if (plVar1 != (longlong *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 8);
    pplStackX_18 = &plStackX_8;
    plStackX_8 = (longlong *)*param_2;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    uVar3 = (*pcVar2)(plVar1,&plStackX_8,param_3,param_4,uVar3);
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x38))();
    }
    return uVar3;
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180389b20(longlong param_1,longlong param_2)
void FUN_180389b20(longlong param_1,longlong param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  longlong *plVar28;
  int32_t uVar29;
  int iVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong *plVar39;
  longlong *plVar40;
  longlong lVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  int iStack_118;
  longlong lStack_100;
  longlong *plStack_f0;
  longlong *plStack_e8;
  uint64_t uStack_e0;
  int32_t uStack_d8;
  uint64_t uStack_d0;
  longlong lStack_c8;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  int32_t uStack_78;
  
  uStack_d0 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 8) != 0) {
    plStack_f0 = (longlong *)0x0;
    plStack_e8 = (longlong *)0x0;
    uStack_e0 = 0;
    uStack_d8 = 3;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),&plStack_f0);
    iVar30 = (int)(((longlong)plStack_e8 - (longlong)plStack_f0) / 0x48);
    iStack_118 = 0;
    lVar37 = (longlong)iVar30;
    plVar40 = plStack_f0;
    plVar28 = plStack_e8;
    if (0 < iVar30) {
      lStack_100 = 0;
      plVar39 = plStack_f0;
      do {
        lVar31 = (longlong)iStack_118;
        lVar10 = *(longlong *)(*(longlong *)(lStack_100 + (longlong)plVar39) + 0xb8);
        iVar30 = (int)((*(longlong *)(lVar10 + 0x48) - *(longlong *)(lVar10 + 0x40)) / 0x88);
        lVar38 = (longlong)iVar30;
        plVar40 = plVar39;
        if (0 < iVar30) {
          lVar41 = 0x68;
          do {
            iVar30 = (int)((*(longlong *)(lVar41 + 8 + *(longlong *)(lVar10 + 0x40)) -
                           *(longlong *)(lVar41 + *(longlong *)(lVar10 + 0x40))) / 0x18);
            lVar35 = (longlong)iVar30;
            if (0 < iVar30) {
              lVar34 = param_2 + 0x11a50;
              lVar36 = 0;
              do {
                uVar29 = _DAT_180bf6618;
                lVar32 = *(longlong *)(*(longlong *)(lVar10 + 0x40) + lVar41);
                lVar33 = (longlong)*(int *)(lVar32 + 4 + lVar36);
                lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0x40) + -0x40 + lVar41);
                pfVar1 = (float *)(plVar39 + lVar31 * 9 + 1);
                fVar12 = *pfVar1;
                fVar13 = pfVar1[1];
                fVar14 = pfVar1[2];
                fVar15 = pfVar1[3];
                pfVar1 = (float *)(plVar39 + lVar31 * 9 + 3);
                fVar16 = *pfVar1;
                fVar17 = pfVar1[1];
                fVar18 = pfVar1[2];
                fVar19 = pfVar1[3];
                pfVar1 = (float *)(plVar39 + lVar31 * 9 + 5);
                fVar20 = *pfVar1;
                fVar21 = pfVar1[1];
                fVar22 = pfVar1[2];
                fVar23 = pfVar1[3];
                pfVar1 = (float *)(plVar39 + lVar31 * 9 + 7);
                fVar24 = *pfVar1;
                fVar25 = pfVar1[1];
                fVar26 = pfVar1[2];
                fVar27 = pfVar1[3];
                fVar2 = *(float *)(lVar11 + 4 + lVar33 * 0x10);
                fVar3 = *(float *)(lVar11 + 8 + lVar33 * 0x10);
                fVar4 = *(float *)(lVar11 + lVar33 * 0x10);
                lVar33 = (longlong)*(int *)(lVar32 + 8 + lVar36);
                fVar5 = *(float *)(lVar11 + 4 + lVar33 * 0x10);
                fVar6 = *(float *)(lVar11 + 8 + lVar33 * 0x10);
                fVar7 = *(float *)(lVar11 + lVar33 * 0x10);
                lVar32 = (longlong)*(int *)(lVar32 + 0xc + lVar36);
                fVar45 = *(float *)(lVar11 + 4 + lVar32 * 0x10);
                fVar8 = *(float *)(lVar11 + 8 + lVar32 * 0x10);
                fVar9 = *(float *)(lVar11 + lVar32 * 0x10);
                fVar42 = fVar9 * fVar12 + fVar45 * fVar16 + fVar8 * fVar20 + fVar24;
                fVar43 = fVar9 * fVar13 + fVar45 * fVar17 + fVar8 * fVar21 + fVar25;
                fVar44 = fVar9 * fVar14 + fVar45 * fVar18 + fVar8 * fVar22 + fVar26;
                fVar45 = fVar9 * fVar15 + fVar45 * fVar19 + fVar8 * fVar23 + fVar27;
                if (*(char *)(param_2 + 0x11aa0) != '\0') {
                  lStack_c8 = lVar34;
                  iVar30 = _Mtx_lock(lVar34);
                  if (iVar30 != 0) {
                    __Throw_C_error_std__YAXH_Z(iVar30);
                  }
                  uStack_78 = uVar29;
                  fStack_b8 = fVar4 * fVar12 + fVar2 * fVar16 + fVar3 * fVar20 + fVar24;
                  fStack_b4 = fVar4 * fVar13 + fVar2 * fVar17 + fVar3 * fVar21 + fVar25;
                  fStack_b0 = fVar4 * fVar14 + fVar2 * fVar18 + fVar3 * fVar22 + fVar26;
                  fStack_ac = fVar4 * fVar15 + fVar2 * fVar19 + fVar3 * fVar23 + fVar27;
                  fStack_a8 = fVar7 * fVar12 + fVar5 * fVar16 + fVar6 * fVar20 + fVar24;
                  fStack_a4 = fVar7 * fVar13 + fVar5 * fVar17 + fVar6 * fVar21 + fVar25;
                  fStack_a0 = fVar7 * fVar14 + fVar5 * fVar18 + fVar6 * fVar22 + fVar26;
                  fStack_9c = fVar7 * fVar15 + fVar5 * fVar19 + fVar6 * fVar23 + fVar27;
                  fStack_98 = fVar42;
                  fStack_94 = fVar43;
                  fStack_90 = fVar44;
                  fStack_8c = fVar45;
                  fStack_88 = fVar42;
                  fStack_84 = fVar43;
                  fStack_80 = fVar44;
                  fStack_7c = fVar45;
                  FUN_1806370a0(param_2 + 0x11b88,&fStack_b8);
                  iVar30 = _Mtx_unlock(lVar34);
                  if (iVar30 != 0) {
                    __Throw_C_error_std__YAXH_Z(iVar30);
                  }
                }
                lVar36 = lVar36 + 0x18;
                lVar35 = lVar35 + -1;
              } while (lVar35 != 0);
            }
            lVar41 = lVar41 + 0x88;
            lVar38 = lVar38 + -1;
            plVar40 = plStack_f0;
          } while (lVar38 != 0);
        }
        iStack_118 = iStack_118 + 1;
        lStack_100 = lStack_100 + 0x48;
        lVar37 = lVar37 + -1;
        plVar39 = plVar40;
        plVar40 = plStack_f0;
        plVar28 = plStack_e8;
      } while (lVar37 != 0);
    }
    for (; plVar39 = plStack_e8, plVar40 != plStack_e8; plVar40 = plVar40 + 9) {
      plStack_e8 = plVar28;
      if ((longlong *)*plVar40 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar40 + 0x38))();
      }
      plVar28 = plStack_e8;
      plStack_e8 = plVar39;
    }
    if (plStack_f0 != (longlong *)0x0) {
      plStack_e8 = plVar28;
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}





// 函数: void FUN_180389eb0(longlong *param_1)
void FUN_180389eb0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 9) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180389ed0(longlong param_1)
void FUN_180389ed0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  longlong lVar19;
  int8_t auStack_1c8 [12];
  int32_t uStack_1bc;
  int32_t uStack_1ac;
  int32_t uStack_19c;
  int32_t uStack_18c;
  int8_t auStack_188 [64];
  uint64_t auStack_148 [24];
  int8_t auStack_88 [128];
  
  lVar1 = *(longlong *)(param_1 + 0x200);
  lVar19 = 2;
  puVar15 = auStack_148;
  puVar16 = (uint64_t *)(param_1 + 0xc0);
  do {
    puVar18 = puVar16;
    puVar17 = puVar15;
    uVar11 = puVar18[1];
    uVar12 = puVar18[2];
    uVar13 = puVar18[3];
    *puVar17 = *puVar18;
    puVar17[1] = uVar11;
    uVar11 = puVar18[4];
    uVar14 = puVar18[5];
    puVar17[2] = uVar12;
    puVar17[3] = uVar13;
    uVar12 = puVar18[6];
    uVar13 = puVar18[7];
    puVar17[4] = uVar11;
    puVar17[5] = uVar14;
    uVar11 = puVar18[8];
    uVar14 = puVar18[9];
    puVar17[6] = uVar12;
    puVar17[7] = uVar13;
    uVar12 = puVar18[10];
    uVar13 = puVar18[0xb];
    puVar17[8] = uVar11;
    puVar17[9] = uVar14;
    uVar11 = puVar18[0xc];
    uVar14 = puVar18[0xd];
    puVar17[10] = uVar12;
    puVar17[0xb] = uVar13;
    uVar12 = puVar18[0xe];
    uVar13 = puVar18[0xf];
    puVar17[0xc] = uVar11;
    puVar17[0xd] = uVar14;
    puVar17[0xe] = uVar12;
    puVar17[0xf] = uVar13;
    lVar19 = lVar19 + -1;
    puVar15 = puVar17 + 0x10;
    puVar16 = puVar18 + 0x10;
  } while (lVar19 != 0);
  uVar11 = puVar18[0x11];
  uVar12 = puVar18[0x12];
  uVar13 = puVar18[0x13];
  puVar17[0x10] = puVar18[0x10];
  puVar17[0x11] = uVar11;
  uVar3 = *(int32_t *)(puVar18 + 0x14);
  uVar4 = *(int32_t *)((longlong)puVar18 + 0xa4);
  uVar5 = *(int32_t *)(puVar18 + 0x15);
  uVar6 = *(int32_t *)((longlong)puVar18 + 0xac);
  puVar17[0x12] = uVar12;
  puVar17[0x13] = uVar13;
  uVar7 = *(int32_t *)(puVar18 + 0x16);
  uVar8 = *(int32_t *)((longlong)puVar18 + 0xb4);
  uVar9 = *(int32_t *)(puVar18 + 0x17);
  uVar10 = *(int32_t *)((longlong)puVar18 + 0xbc);
  *(int32_t *)(puVar17 + 0x14) = uVar3;
  *(int32_t *)((longlong)puVar17 + 0xa4) = uVar4;
  *(int32_t *)(puVar17 + 0x15) = uVar5;
  *(int32_t *)((longlong)puVar17 + 0xac) = uVar6;
  *(int32_t *)(puVar17 + 0x16) = uVar7;
  *(int32_t *)((longlong)puVar17 + 0xb4) = uVar8;
  *(int32_t *)(puVar17 + 0x17) = uVar9;
  *(int32_t *)((longlong)puVar17 + 0xbc) = uVar10;
  plVar2 = *(longlong **)(lVar1 + 8);
  if (plVar2 != (longlong *)0x0) {
    FUN_180287b30(auStack_88,auStack_1c8);
    uStack_18c = 0x3f800000;
    uStack_1bc = 0;
    uStack_1ac = 0;
    uStack_19c = 0;
    FUN_180286010(auStack_148,auStack_188,1);
    (**(code **)(*plVar2 + 0x68))(plVar2,auStack_1c8,auStack_188,0);
    plVar2 = *(longlong **)(lVar1 + 8);
    (**(code **)(*plVar2 + 0x48))(plVar2,auStack_148,0);
  }
  return;
}





