#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part310.c - 9 个函数

// 函数: void FUN_1804310c4(void)
void FUN_1804310c4(void)

{
  char cVar1;
  uint in_EAX;
  longlong unaff_RBP;
  ulonglong uVar2;
  int unaff_EDI;
  uint64_t *unaff_R15;
  char cStack0000000000000040;
  
  uVar2 = (ulonglong)(in_EAX >> 3);
  do {
    cVar1 = (char)((uint)unaff_EDI >> 0x10);
    cStack0000000000000040 = cVar1;
    (*(code *)*unaff_R15)(unaff_R15[1],&stack0x00000040,1);
    if (cVar1 == -1) {
      cStack0000000000000040 = 0;
      (*(code *)*unaff_R15)(unaff_R15[1],&stack0x00000040,1);
    }
    unaff_EDI = unaff_EDI << 8;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  cStack0000000000000040 = 0xff;
  (*(code *)*unaff_R15)(unaff_R15[1],&stack0x00000040,1);
  cStack0000000000000040 = 0xd9;
  (*(code *)*unaff_R15)(unaff_R15[1],&stack0x00000040,1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x520) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180431155(void)
void FUN_180431155(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x520) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180431180(longlong param_1,longlong param_2,char param_3,uint64_t param_4,int32_t param_5,
             uint64_t param_6,char param_7)

{
  char cVar1;
  longlong *plVar2;
  byte bVar3;
  int32_t *puVar4;
  uint64_t *puVar5;
  longlong *plStackX_10;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  cVar1 = *(char *)(param_1 + 0x208);
  *(char *)((longlong)param_7 + 0x209 + param_1) = cVar1;
  *(char *)(param_1 + 0x208) = *(char *)(param_1 + 0x208) + '\x01';
  uStack_68 = 0x3f800000;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0x3f800000;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0x3f800000;
  if (-1 < param_3) {
    plVar2 = (longlong *)
             **(uint64_t **)
               (param_1 + 8 + (longlong)*(char *)((longlong)param_3 + 0x209 + param_1) * 8);
    puVar4 = (int32_t *)(**(code **)(*plVar2 + 200))(plVar2,&uStack_68);
    uStack_68 = *puVar4;
    uStack_64 = puVar4[1];
    uStack_60 = puVar4[2];
    uStack_5c = puVar4[3];
    uStack_58 = puVar4[4];
    uStack_54 = puVar4[5];
    uStack_50 = puVar4[6];
    uStack_4c = puVar4[7];
    uStack_48 = puVar4[8];
    uStack_44 = puVar4[9];
    uStack_40 = puVar4[10];
    uStack_3c = puVar4[0xb];
    uStack_38 = puVar4[0xc];
    uStack_34 = puVar4[0xd];
    uStack_30 = puVar4[0xe];
    uStack_2c = puVar4[0xf];
  }
  if (param_3 == -1) {
    bVar3 = 0;
  }
  else {
    bVar3 = (byte)~*(byte *)((longlong)param_3 + 0x209 + param_1) >> 7;
  }
  (**(code **)(**(longlong **)(param_1 + 0x250) + 0xb0))
            (*(longlong **)(param_1 + 0x250),&plStackX_10,param_1,param_4,8,0x3d,param_5,param_6,
             bVar3,&uStack_68,&uStack_a8);
  plStackX_10[2] = param_2;
  *(uint *)(plStackX_10 + 3) = *(uint *)(plStackX_10 + 3) | 0x1000;
  puVar5 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x88,8,3);
  plVar2 = plStackX_10;
  if (plStackX_10 != (longlong *)0x0) {
    (**(code **)(*plStackX_10 + 0x28))();
  }
  *puVar5 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
    (**(code **)(*plVar2 + 0x38))();
  }
  puVar5[1] = uStack_a8;
  puVar5[2] = uStack_a0;
  puVar5[3] = uStack_98;
  puVar5[4] = uStack_90;
  *(int32_t *)(puVar5 + 5) = uStack_88;
  *(int32_t *)((longlong)puVar5 + 0x2c) = uStack_84;
  *(int32_t *)(puVar5 + 6) = uStack_80;
  *(int32_t *)((longlong)puVar5 + 0x34) = uStack_7c;
  *(int32_t *)(puVar5 + 7) = uStack_78;
  *(int32_t *)((longlong)puVar5 + 0x3c) = uStack_74;
  *(int32_t *)(puVar5 + 8) = uStack_70;
  *(int32_t *)((longlong)puVar5 + 0x44) = uStack_6c;
  FUN_180084760(&uStack_a8,puVar5 + 9);
  *(uint64_t **)(param_1 + 8 + (longlong)cVar1 * 8) = puVar5;
  if (plStackX_10 != (longlong *)0x0) {
    (**(code **)(*plStackX_10 + 0x38))();
  }
  return puVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180431380(longlong param_1)
void FUN_180431380(longlong param_1)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint64_t *puVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int iVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int32_t uVar13;
  
  uVar9 = 0xfffffffffffffffe;
  puVar10 = (uint64_t *)0x0;
  puVar11 = (uint64_t *)0x0;
  puVar6 = (uint64_t *)0x0;
  puVar12 = (uint64_t *)0x0;
  uVar13 = 3;
  iVar8 = 0;
  puVar2 = (uint64_t *)0x0;
  if ('\0' < *(char *)(param_1 + 0x208)) {
    puVar7 = (uint64_t *)(param_1 + 8);
    puVar4 = puVar2;
    do {
      uVar1 = *(uint64_t *)*puVar7;
      if (puVar11 < puVar6) {
        *puVar11 = uVar1;
        puVar2 = puVar4;
      }
      else {
        lVar3 = (longlong)puVar11 - (longlong)puVar4 >> 3;
        lVar5 = lVar3 * 2;
        if (lVar3 == 0) {
          lVar5 = 1;
        }
        if (lVar5 == 0) {
          puVar2 = (uint64_t *)0x0;
        }
        else {
          puVar2 = (uint64_t *)
                   FUN_18062b420(_DAT_180c8ed18,lVar5 * 8,CONCAT71((int7)((ulonglong)puVar6 >> 8),3)
                                 ,puVar11,uVar9,puVar10,puVar11,puVar12,uVar13);
        }
        if (puVar4 != puVar11) {
                    // WARNING: Subroutine does not return
          memmove(puVar2,puVar4,(longlong)puVar11 - (longlong)puVar4);
        }
        *puVar2 = uVar1;
        if (puVar4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar4);
        }
        puVar6 = puVar2 + lVar5;
        puVar10 = puVar2;
        puVar12 = puVar6;
        puVar11 = puVar2;
      }
      puVar11 = puVar11 + 1;
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 1;
      puVar4 = puVar2;
    } while (iVar8 < *(char *)(param_1 + 0x208));
  }
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}





// 函数: void FUN_180431510(longlong *param_1,longlong param_2)
void FUN_180431510(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  
  plVar1 = (longlong *)param_1[1];
  plVar2 = (longlong *)*param_1;
  iVar4 = 0;
  uVar5 = (longlong)plVar1 - (longlong)plVar2 >> 3;
  plVar3 = plVar2;
  if (uVar5 != 0) {
    while (*plVar3 != param_2) {
      iVar4 = iVar4 + 1;
      plVar3 = plVar3 + 1;
      if (uVar5 <= (ulonglong)(longlong)iVar4) {
        return;
      }
    }
    if (-1 < iVar4) {
      plVar3 = plVar2 + iVar4 + 1;
      if (plVar3 < plVar1) {
                    // WARNING: Subroutine does not return
        memmove(plVar2 + iVar4,plVar3,(longlong)plVar1 - (longlong)plVar3);
      }
      param_1[1] = (longlong)(plVar1 + -1);
      FUN_180431510(param_2,param_1);
    }
  }
  return;
}





// 函数: void FUN_1804315b0(longlong *param_1)
void FUN_1804315b0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  plVar3 = (longlong *)*param_1;
  plVar5 = (longlong *)param_1[1];
  if (plVar3 != plVar5) {
    do {
      uVar6 = (longlong)plVar5 - (longlong)plVar3 >> 3;
      plVar3 = (longlong *)*param_1;
      lVar1 = plVar3[uVar6 - 1];
      iVar2 = 0;
      plVar4 = plVar3;
      if (uVar6 != 0) {
        do {
          if (*plVar4 == lVar1) {
            if (-1 < iVar2) {
              plVar4 = plVar3 + iVar2 + 1;
              if (plVar4 < plVar5) {
                    // WARNING: Subroutine does not return
                memmove(plVar3 + iVar2,plVar4,(longlong)plVar5 - (longlong)plVar4);
              }
              param_1[1] = (longlong)(plVar5 + -1);
              FUN_180431510(lVar1,param_1,plVar5,plVar5,uVar7);
            }
            break;
          }
          iVar2 = iVar2 + 1;
          plVar4 = plVar4 + 1;
        } while ((ulonglong)(longlong)iVar2 < uVar6);
      }
      plVar3 = (longlong *)*param_1;
      plVar5 = (longlong *)param_1[1];
    } while (plVar3 != plVar5);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180431680(longlong param_1)
void FUN_180431680(longlong param_1)

{
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x140,0,0x1050);
}





// 函数: void FUN_180431730(longlong param_1)
void FUN_180431730(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1 + 0x18;
  *(int32_t *)(param_1 + 0x10) = 0;
  *(longlong *)(param_1 + 8) = lVar1;
  FUN_180435120(lVar1);
  lVar2 = 4;
  do {
    FUN_180435120(lVar1);
    lVar1 = lVar1 + 0x48;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(uint64_t *)(param_1 + 0x1194) = 0;
  *(uint64_t *)(param_1 + 0x119c) = 0;
  *(int32_t *)(param_1 + 0x11a4) = 0;
  *(int8_t *)(param_1 + 0x11a8) = 0;
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x140,0,0x1050);
}



int FUN_1804317d0(longlong param_1,longlong param_2,uint64_t param_3,float param_4,
                 int32_t param_5,float param_6,float param_7,float param_8,byte param_9,
                 char param_10,char param_11,int8_t param_12,int32_t param_13)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  float afStackX_8 [2];
  uint64_t uVar12;
  longlong lStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  int8_t uStack_108;
  float fStack_104;
  int8_t uStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  longlong *plStack_f0;
  float fStack_e8;
  
  uVar12 = 0xfffffffffffffffe;
  iVar7 = -1;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar9 = *(int *)(param_1 + 0x10) + -1;
    if (param_9 < *(byte *)(param_1 + 0x40 + (longlong)iVar9 * 0x48)) {
      return -2;
    }
    if ((param_4 == 1.0) && (-1 < iVar9)) {
      pfVar10 = (float *)(param_1 + 0x44 + (longlong)iVar9 * 0x48);
      do {
        lVar4 = *(longlong *)(pfVar10 + -0xb);
        if (((((lVar4 == param_2) && (fVar3 = pfVar10[-2], fVar3 == param_6)) &&
             (fVar1 = *pfVar10, fVar1 == param_8)) &&
            ((fVar2 = pfVar10[-7], fVar2 == 0.0 || (fVar2 == 1.0)))) &&
           ((param_11 != '\0' || (pfVar10[-9] <= 0.02 && pfVar10[-9] != 0.02)))) {
          if (1e-05 <= param_8) {
            afStackX_8[0] = param_7 / param_8;
          }
          else {
            afStackX_8[0] = param_7;
          }
          if (afStackX_8[0] < 0.0001) {
            afStackX_8[0] = 0.0001;
          }
          fVar6 = afStackX_8[0];
          if (iVar9 != *(int *)(param_1 + 0x10) + -1) {
            fStack_120 = pfVar10[-9];
            fStack_11c = pfVar10[-8];
            fStack_114 = pfVar10[-6];
            fStack_110 = pfVar10[-5];
            fStack_10c = pfVar10[-4];
            uStack_108 = *(int8_t *)(pfVar10 + -3);
            uStack_100 = *(int8_t *)(pfVar10 + -1);
            fStack_f8 = pfVar10[1];
            fStack_f4 = pfVar10[2];
            plVar5 = *(longlong **)(pfVar10 + 3);
            lStack_128 = lVar4;
            fStack_118 = fVar2;
            fStack_104 = fVar3;
            fStack_fc = fVar1;
            plStack_f0 = plVar5;
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x28))(plVar5);
            }
            fStack_e8 = pfVar10[5];
            iVar7 = *(int *)(param_1 + 0x10);
            iVar11 = iVar9;
            if (iVar9 < iVar7 + -1) {
              do {
                iVar8 = iVar11 + 1;
                FUN_180431c90(param_1 + ((longlong)iVar11 * 9 + 3) * 8,
                              param_1 + ((longlong)iVar8 * 9 + 3) * 8);
                iVar7 = *(int *)(param_1 + 0x10);
                iVar11 = iVar8;
              } while (iVar8 < iVar7 + -1);
            }
            FUN_180431c90(param_1 + ((longlong)(iVar7 + -1) * 9 + 3) * 8,&lStack_128);
            if (param_10 != '\0') {
              FUN_180432170(param_1,0,afStackX_8,param_12);
            }
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x38))(plVar5);
            }
          }
          *(int32_t *)(param_1 + -0x28 + (longlong)*(int *)(param_1 + 0x10) * 0x48) = param_5;
          *(int32_t *)(param_1 + (longlong)*(int *)(param_1 + 0x10) * 0x48) = param_5;
          *(int32_t *)(param_1 + 0x10 + (longlong)*(int *)(param_1 + 0x10) * 0x48) = param_5;
          FUN_1804351d0(param_1 + ((longlong)(*(int *)(param_1 + 0x10) + -1) * 9 + 3) * 8,param_4,
                        fVar6,param_12);
          iVar7 = 0x65;
        }
        pfVar10 = pfVar10 + -0x12;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
      if (iVar7 != -1) {
        return iVar7;
      }
    }
  }
  iVar7 = FUN_180431d50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10,param_12,param_13,uVar12);
  if ((param_10 != '\0') && (param_7 == 0.0)) {
    if (1 < *(int *)(param_1 + 0x10)) {
      FUN_180431c90(param_1 + 0x18,param_1 + ((longlong)(*(int *)(param_1 + 0x10) + -1) * 9 + 3) * 8
                   );
      *(int32_t *)(param_1 + 0x10) = 1;
      *(longlong *)(param_1 + 8) = param_1 + 0x18;
    }
    *(float *)(param_1 + 0x24) = param_4;
    *(int32_t *)(param_1 + 0x1194) = 0x3f800000;
    *(int32_t *)(param_1 + 0x11a4) = 0x3f800000;
    iVar7 = 0;
  }
  return iVar7;
}





// 函数: void FUN_180431c60(longlong param_1)
void FUN_180431c60(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
  }
  return;
}



uint64_t * FUN_180431c90(uint64_t *param_1,uint64_t *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  *(int32_t *)(param_1 + 1) = *(int32_t *)(param_2 + 1);
  *(int32_t *)((longlong)param_1 + 0xc) = *(int32_t *)((longlong)param_2 + 0xc);
  *(int32_t *)(param_1 + 2) = *(int32_t *)(param_2 + 2);
  *(int32_t *)((longlong)param_1 + 0x14) = *(int32_t *)((longlong)param_2 + 0x14);
  *(int32_t *)(param_1 + 3) = *(int32_t *)(param_2 + 3);
  *(int32_t *)((longlong)param_1 + 0x1c) = *(int32_t *)((longlong)param_2 + 0x1c);
  *(int8_t *)(param_1 + 4) = *(int8_t *)(param_2 + 4);
  *(int32_t *)((longlong)param_1 + 0x24) = *(int32_t *)((longlong)param_2 + 0x24);
  *(int8_t *)(param_1 + 5) = *(int8_t *)(param_2 + 5);
  *(int32_t *)((longlong)param_1 + 0x2c) = *(int32_t *)((longlong)param_2 + 0x2c);
  *(int32_t *)(param_1 + 6) = *(int32_t *)(param_2 + 6);
  *(int32_t *)((longlong)param_1 + 0x34) = *(int32_t *)((longlong)param_2 + 0x34);
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[7];
  param_1[7] = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(int32_t *)(param_1 + 8) = *(int32_t *)(param_2 + 8);
  return param_1;
}



int FUN_180431d50(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                 int32_t param_5,int32_t param_6,float param_7,float param_8,
                 int8_t param_9,char param_10,int8_t param_11,float param_12)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  fVar6 = param_12;
  iVar5 = 2;
  if (param_12 == 1.0) {
    iVar5 = 4;
  }
  if (1e-05 <= param_8) {
    param_7 = param_7 / param_8;
  }
  param_12 = param_7;
  if (param_10 != '\0') {
    FUN_180432170(fVar6,0,&param_12,param_11);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (iVar5 <= iVar1) {
    do {
      iVar3 = 0;
      fVar6 = 10.0;
      iVar4 = -1;
      if (iVar1 < 1) {
LAB_180431e48:
        FUN_180432e00(param_1,iVar4,param_3);
      }
      else {
        pfVar2 = (float *)(param_1 + 0x24);
        do {
          if ((pfVar2[1] == 0.0) && (*pfVar2 < fVar6)) {
            fVar6 = *pfVar2;
            iVar4 = iVar3;
          }
          iVar3 = iVar3 + 1;
          pfVar2 = pfVar2 + 0x12;
        } while (iVar3 < iVar1);
        if (0.0 < fVar6) goto LAB_180431e48;
      }
      FUN_180431fb0(param_1,iVar4);
      iVar1 = *(int *)(param_1 + 0x10);
    } while (iVar5 <= iVar1);
    iVar4 = 1;
  }
  FUN_180435120(param_1 + ((longlong)iVar1 * 9 + 3) * 8);
  *(uint64_t *)(param_1 + 0x18 + (longlong)*(int *)(param_1 + 0x10) * 0x48) = param_2;
  *(int32_t *)(param_1 + 0x20 + (longlong)*(int *)(param_1 + 0x10) * 0x48) = param_5;
  *(int32_t *)(param_1 + ((longlong)*(int *)(param_1 + 0x10) + 1) * 0x48) = param_5;
  *(int32_t *)(param_1 + 0x58 + (longlong)*(int *)(param_1 + 0x10) * 0x48) = param_5;
  *(int32_t *)(param_1 + 0x24 + (longlong)*(int *)(param_1 + 0x10) * 0x48) = 0;
  *(int32_t *)(param_1 + 0x3c + (longlong)*(int *)(param_1 + 0x10) * 0x48) = param_6;
  *(int8_t *)(param_1 + 0x40 + (longlong)*(int *)(param_1 + 0x10) * 0x48) = param_9;
  *(float *)(param_1 + 0x44 + (longlong)*(int *)(param_1 + 0x10) * 0x48) = param_8;
  FUN_1804351d0(param_1 + ((longlong)*(int *)(param_1 + 0x10) * 9 + 3) * 8,param_4,param_7,param_11)
  ;
  iVar5 = *(int *)(param_1 + 0x10);
  iVar1 = iVar5 + 1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 < 1) {
    *(longlong *)(param_1 + 8) = param_1 + 0x18;
    FUN_180435120();
  }
  else {
    *(longlong *)(param_1 + 8) = param_1 + ((longlong)iVar5 * 9 + 3) * 8;
  }
  return iVar4 * 2 + 100;
}



int FUN_180431d6f(float param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)

{
  int iVar1;
  longlong in_RAX;
  float *pfVar2;
  int iVar3;
  uint64_t in_RCX;
  int iVar4;
  uint64_t unaff_RBP;
  int iVar5;
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  uint64_t unaff_R15;
  bool in_ZF;
  float fVar6;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t in_stack_000000a0;
  int32_t in_stack_000000a8;
  float in_stack_000000b0;
  float in_stack_000000b8;
  int8_t in_stack_000000c0;
  char in_stack_000000c8;
  int8_t in_stack_000000d0;
  float fStack00000000000000d8;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  iVar5 = 2;
  *(uint64_t *)(in_RAX + 0x18) = unaff_R15;
  *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x28) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x24) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x20) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x1c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM10_Dd;
  if (in_ZF) {
    iVar5 = 4;
  }
  if (1e-05 <= in_stack_000000b8) {
    in_stack_000000b0 = in_stack_000000b0 / in_stack_000000b8;
  }
  fStack00000000000000d8 = in_stack_000000b0;
  if (in_stack_000000c8 != '\0') {
    param_1 = (float)FUN_180432170(in_RCX,0,&stack0x000000d8,in_stack_000000d0);
  }
  iVar1 = *(int *)(unaff_RDI + 0x10);
  iVar4 = 0;
  if (iVar5 <= iVar1) {
    do {
      iVar3 = 0;
      fVar6 = 10.0;
      iVar4 = -1;
      if (iVar1 < 1) {
LAB_180431e48:
        param_1 = (float)FUN_180432e00(param_1,iVar4,param_3);
      }
      else {
        pfVar2 = (float *)(unaff_RDI + 0x24);
        do {
          if ((pfVar2[1] == 0.0) && (param_1 = *pfVar2, param_1 < fVar6)) {
            fVar6 = param_1;
            iVar4 = iVar3;
          }
          iVar3 = iVar3 + 1;
          pfVar2 = pfVar2 + 0x12;
        } while (iVar3 < iVar1);
        if (0.0 < fVar6) goto LAB_180431e48;
      }
      param_1 = (float)FUN_180431fb0(param_1,iVar4);
      iVar1 = *(int *)(unaff_RDI + 0x10);
    } while (iVar5 <= iVar1);
    iVar4 = 1;
  }
  FUN_180435120(unaff_RDI + ((longlong)iVar1 * 9 + 3) * 8);
  *(uint64_t *)(unaff_RDI + 0x18 + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) = param_2;
  *(int32_t *)(unaff_RDI + 0x20 + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) =
       in_stack_000000a0;
  *(int32_t *)(unaff_RDI + ((longlong)*(int *)(unaff_RDI + 0x10) + 1) * 0x48) = in_stack_000000a0
  ;
  *(int32_t *)(unaff_RDI + 0x58 + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) =
       in_stack_000000a0;
  *(int32_t *)(unaff_RDI + 0x24 + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) = 0;
  *(int32_t *)(unaff_RDI + 0x3c + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) =
       in_stack_000000a8;
  *(int8_t *)(unaff_RDI + 0x40 + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) =
       in_stack_000000c0;
  *(float *)(unaff_RDI + 0x44 + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) = in_stack_000000b8;
  FUN_1804351d0(unaff_RDI + ((longlong)*(int *)(unaff_RDI + 0x10) * 9 + 3) * 8,param_4,
                in_stack_000000b0,in_stack_000000d0);
  iVar5 = *(int *)(unaff_RDI + 0x10);
  iVar1 = iVar5 + 1;
  *(int *)(unaff_RDI + 0x10) = iVar1;
  if (iVar1 < 1) {
    *(longlong *)(unaff_RDI + 8) = unaff_RDI + 0x18;
    FUN_180435120();
  }
  else {
    *(longlong *)(unaff_RDI + 8) = unaff_RDI + ((longlong)iVar5 * 9 + 3) * 8;
  }
  return iVar4 * 2 + 100;
}



uint64_t FUN_180431dff(float param_1,uint64_t param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  longlong unaff_RDI;
  uint64_t unaff_R15;
  float fVar4;
  float unaff_XMM6_Da;
  int32_t unaff_XMM9_Da;
  int32_t in_stack_000000a0;
  int32_t in_stack_000000a8;
  int8_t in_stack_000000c0;
  
  do {
    iVar2 = 0;
    fVar4 = 10.0;
    iVar3 = -1;
    if (param_3 < 1) {
LAB_180431e48:
      param_1 = (float)FUN_180432e00(param_1,iVar3);
    }
    else {
      pfVar1 = (float *)(unaff_RDI + 0x24);
      do {
        if ((unaff_XMM6_Da == pfVar1[1]) && (param_1 = *pfVar1, param_1 < fVar4)) {
          fVar4 = param_1;
          iVar3 = iVar2;
        }
        iVar2 = iVar2 + 1;
        pfVar1 = pfVar1 + 0x12;
      } while (iVar2 < param_3);
      if (unaff_XMM6_Da < fVar4) goto LAB_180431e48;
    }
    param_1 = (float)FUN_180431fb0(param_1,iVar3);
    param_3 = *(int *)(unaff_RDI + 0x10);
    if (param_3 < unaff_ESI) {
      FUN_180435120(unaff_RDI + ((longlong)param_3 * 9 + 3) * 8);
      *(uint64_t *)(unaff_RDI + 0x18 + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) = unaff_R15;
      *(int32_t *)(unaff_RDI + 0x20 + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) =
           in_stack_000000a0;
      *(int32_t *)(unaff_RDI + ((longlong)*(int *)(unaff_RDI + 0x10) + 1) * 0x48) =
           in_stack_000000a0;
      *(int32_t *)(unaff_RDI + 0x58 + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) =
           in_stack_000000a0;
      *(int32_t *)(unaff_RDI + 0x24 + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) = 0;
      *(int32_t *)(unaff_RDI + 0x3c + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) =
           in_stack_000000a8;
      *(int8_t *)(unaff_RDI + 0x40 + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) =
           in_stack_000000c0;
      *(int32_t *)(unaff_RDI + 0x44 + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) =
           unaff_XMM9_Da;
      FUN_1804351d0(unaff_RDI + ((longlong)*(int *)(unaff_RDI + 0x10) * 9 + 3) * 8);
      iVar3 = *(int *)(unaff_RDI + 0x10);
      iVar2 = iVar3 + 1;
      *(int *)(unaff_RDI + 0x10) = iVar2;
      if (iVar2 < 1) {
        *(longlong *)(unaff_RDI + 8) = unaff_RDI + 0x18;
        FUN_180435120();
      }
      else {
        *(longlong *)(unaff_RDI + 8) = unaff_RDI + ((longlong)iVar3 * 9 + 3) * 8;
      }
      return 0x66;
    }
  } while( true );
}



int FUN_180431e76(uint64_t param_1,uint64_t param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  longlong unaff_RDI;
  uint64_t unaff_R15;
  int32_t unaff_XMM9_Da;
  int32_t in_stack_000000a0;
  int32_t in_stack_000000a8;
  int8_t in_stack_000000c0;
  
  FUN_180435120(unaff_RDI + ((longlong)param_3 * 9 + 3) * 8);
  *(uint64_t *)(unaff_RDI + 0x18 + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) = unaff_R15;
  *(int32_t *)(unaff_RDI + 0x20 + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) =
       in_stack_000000a0;
  *(int32_t *)(unaff_RDI + ((longlong)*(int *)(unaff_RDI + 0x10) + 1) * 0x48) = in_stack_000000a0
  ;
  *(int32_t *)(unaff_RDI + 0x58 + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) =
       in_stack_000000a0;
  *(int32_t *)(unaff_RDI + 0x24 + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) = 0;
  *(int32_t *)(unaff_RDI + 0x3c + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) =
       in_stack_000000a8;
  *(int8_t *)(unaff_RDI + 0x40 + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) =
       in_stack_000000c0;
  *(int32_t *)(unaff_RDI + 0x44 + (longlong)*(int *)(unaff_RDI + 0x10) * 0x48) = unaff_XMM9_Da;
  FUN_1804351d0(unaff_RDI + ((longlong)*(int *)(unaff_RDI + 0x10) * 9 + 3) * 8);
  iVar1 = *(int *)(unaff_RDI + 0x10);
  iVar2 = iVar1 + 1;
  *(int *)(unaff_RDI + 0x10) = iVar2;
  if (iVar2 < 1) {
    *(longlong *)(unaff_RDI + 8) = unaff_RDI + 0x18;
    FUN_180435120();
  }
  else {
    *(longlong *)(unaff_RDI + 8) = unaff_RDI + ((longlong)iVar1 * 9 + 3) * 8;
  }
  return unaff_EBX * 2 + 100;
}



int FUN_180431f79(longlong param_1)

{
  int unaff_EBX;
  longlong unaff_RDI;
  
  *(longlong *)(unaff_RDI + 8) = unaff_RDI + (param_1 * 9 + 3) * 8;
  return unaff_EBX * 2 + 100;
}





// 函数: void FUN_180431fb0(longlong param_1,int param_2)
void FUN_180431fb0(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int32_t *puVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (param_2 < iVar1) {
    iVar6 = iVar1 + -1;
    lVar4 = (longlong)param_2;
    if (lVar4 < iVar6) {
      puVar5 = (int32_t *)(param_1 + 0x6c + lVar4 * 0x48);
      lVar4 = iVar6 - lVar4;
      do {
        *(uint64_t *)(puVar5 + -0x15) = *(uint64_t *)(puVar5 + -3);
        puVar5[-0x13] = puVar5[-1];
        puVar5[-0x12] = *puVar5;
        puVar5[-0x11] = puVar5[1];
        puVar5[-0x10] = puVar5[2];
        puVar5[-0xf] = puVar5[3];
        puVar5[-0xe] = puVar5[4];
        *(int8_t *)(puVar5 + -0xd) = *(int8_t *)(puVar5 + 5);
        puVar5[-0xc] = puVar5[6];
        *(int8_t *)(puVar5 + -0xb) = *(int8_t *)(puVar5 + 7);
        puVar5[-10] = puVar5[8];
        puVar5[-9] = puVar5[9];
        puVar5[-8] = puVar5[10];
        plVar2 = *(longlong **)(puVar5 + 0xb);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        plVar3 = *(longlong **)(puVar5 + -7);
        *(longlong **)(puVar5 + -7) = plVar2;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x38))();
        }
        puVar5[-5] = puVar5[0xd];
        puVar5 = puVar5 + 0x12;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    *(int *)(param_1 + 0x10) = iVar6;
    if (iVar6 < 1) {
      *(longlong *)(param_1 + 8) = param_1 + 0x18;
      FUN_180435120();
    }
    else {
      *(longlong *)(param_1 + 8) = param_1 + 0x18 + (longlong)(iVar1 + -2) * 0x48;
    }
  }
  return;
}





