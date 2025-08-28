#include "TaleWorlds.Native.Split.h"

// 99_part_08_part067.c - 8 个函数

// 函数: void FUN_1805b5b60(longlong param_1,float param_2,longlong param_3,uint64_t param_4,
void FUN_1805b5b60(longlong param_1,float param_2,longlong param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  int8_t auStack_708 [80];
  char cStack_6b8;
  int32_t uStack_6b0;
  int32_t uStack_6ac;
  int32_t uStack_6a8;
  int32_t uStack_6a4;
  uint64_t uStack_6a0;
  longlong *plStack_698;
  int iStack_690;
  int iStack_68c;
  int iStack_688;
  int iStack_680;
  int iStack_67c;
  uint64_t uStack_678;
  float fStack_670;
  uint64_t uStack_648;
  uint64_t uStack_640;
  int8_t auStack_638 [1416];
  uint64_t uStack_b0;
  int32_t uStack_a8;
  int8_t *puStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_78;
  int32_t uStack_70;
  int aiStack_68 [4];
  ulonglong uStack_58;
  
  uStack_640 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_708;
  uStack_648 = param_6;
  uStack_6a0 = param_4;
  if ((*(char *)(param_1 + 0x31) != '\0') ||
     ((*(int *)(param_1 + 0x18) == 0 && (*(short *)(param_1 + 0x14) == 0)))) goto LAB_1805b613c;
  if (*(longlong *)(param_1 + 0x58f8) == 0) {
LAB_1805b5bf8:
    iVar4 = -1;
  }
  else {
    *(int32_t *)(*(longlong *)(param_1 + 0x58f8) + 0x20) = 0;
    if (*(longlong *)(param_1 + 0x58f8) == 0) goto LAB_1805b5bf8;
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x58f8) + 0x18);
  }
  if (((param_3 == 0) || (iVar4 < 0)) || (*(int *)(param_3 + 0x3608 + (longlong)iVar4 * 0xa60) != 1)
     ) {
    uStack_6b0 = *(int32_t *)(param_1 + 0x5900);
    uStack_6ac = *(int32_t *)(param_1 + 0x5904);
    uStack_6a8 = *(int32_t *)(param_1 + 0x5908);
    uStack_6a4 = *(int32_t *)(param_1 + 0x590c);
    cStack_6b8 = '\0';
  }
  else {
    lVar2 = *(longlong *)(param_3 + 0x30c0 + (longlong)iVar4 * 0xa60);
    uStack_6b0 = *(int32_t *)(lVar2 + 0xc);
    uStack_6ac = *(int32_t *)(lVar2 + 0x10);
    uStack_6a8 = *(int32_t *)(lVar2 + 0x14);
    uStack_6a4 = *(int32_t *)(lVar2 + 0x18);
    cStack_6b8 = '\x01';
  }
  FUN_1805f7460(&uStack_6b0);
  dVar8 = *(double *)(param_1 + 0x58b0) - (double)param_2;
  *(double *)(param_1 + 0x58b0) = dVar8;
  if (dVar8 < -0.06666666666666667) {
    *(uint64_t *)(param_1 + 0x58b0) = 0xbfb1111111111111;
  }
  *(uint64_t *)(param_1 + 0x4b98) = *(uint64_t *)(param_1 + 0x58b8);
  *(int32_t *)(param_1 + 0x4ba0) = 0x348;
  if (*(double *)(param_1 + 0x58b0) <= 0.0) {
LAB_1805b5eef:
    *(int32_t *)(param_1 + 0x34) = 0;
    if (cStack_6b8 == '\0') {
      dVar8 = 0.03333333333333333;
    }
    else {
      dVar8 = *(double *)(*(longlong *)(param_1 + 0x5888) + 0x28) *
              *(double *)(*(longlong *)(param_1 + 0x5888) + 8);
    }
    if (0.0 < *(double *)(param_1 + 0x58b0)) {
      *(double *)(param_1 + 0x58b0) = dVar8;
    }
    else {
      *(double *)(param_1 + 0x58b0) = *(double *)(param_1 + 0x58b0) + dVar8;
    }
    uStack_b0 = 0;
    uStack_98 = _DAT_180c966e8;
    uStack_78 = 0;
    puStack_a0 = auStack_638;
    uStack_a8 = 0x2c40;
    uStack_70 = 0;
                    // WARNING: Subroutine does not return
    memset(auStack_638,0,0x588);
  }
  if (((param_3 != 0) && (*(int *)(param_3 + 0x87b7a8) == 2)) &&
     (*(longlong *)(param_1 + 0x58f8) != 0)) {
    uStack_678 = 0;
    plStack_698 = (longlong *)0x0;
    FUN_1804ff330(param_3 + 0x98d230,&uStack_6b0,0x40a00000,&plStack_698);
    if (plStack_698 != (longlong *)0x0) {
      lVar2 = *(longlong *)(param_1 + 0x5960);
      lVar6 = *(longlong *)(param_1 + 0x5968) - lVar2;
      plVar5 = plStack_698;
      iVar4 = iStack_68c;
      iVar3 = iStack_690;
LAB_1805b5d50:
      iVar1 = *(int *)(*plVar5 + 0x10);
      if ((ulonglong)(longlong)iVar1 < (ulonglong)(lVar6 >> 3)) {
        aiStack_68[0] = 9;
        aiStack_68[1] = 0;
        aiStack_68[2] = 1;
        if ((*(ushort *)(lVar2 + 4 + (longlong)iVar1 * 8) & 0x203) != 0) {
          if ((ulonglong)(longlong)(iVar1 * 0x10 + 0x10) <=
              (ulonglong)(*(longlong *)(param_1 + 0x5948) - *(longlong *)(param_1 + 0x5940) >> 5)) {
            lVar2 = 0;
            do {
              if (*(char *)((longlong)(aiStack_68[lVar2] + iVar1 * 0x10) * 0x20 + 8 +
                           *(longlong *)(param_1 + 0x5940)) == '\0') goto LAB_1805b5eef;
              lVar2 = lVar2 + 1;
            } while (lVar2 < 3);
          }
        }
      }
      plVar5 = (longlong *)plVar5[3];
      while (plVar5 == (longlong *)0x0) {
        if (iVar3 == iStack_680) {
          if (iVar4 == iStack_67c) break;
          iVar4 = iVar4 + 1;
          iVar3 = iStack_688;
          iStack_68c = iVar4;
        }
        else {
          iVar3 = iVar3 + 1;
        }
        iStack_690 = iVar3;
        plVar5 = *(longlong **)
                  ((longlong)(iStack_68c * *(int *)(param_3 + 0x98d238) + iVar3) * 9 +
                  *(longlong *)(param_3 + 0x98d248));
      }
      do {
        if ((plVar5 == (longlong *)0x0) ||
           (fVar7 = uStack_678._4_4_ - *(float *)((longlong)plVar5 + 0xc),
           ((float)uStack_678 - *(float *)(plVar5 + 1)) *
           ((float)uStack_678 - *(float *)(plVar5 + 1)) + fVar7 * fVar7 <= fStack_670))
        goto LAB_1805b5ece;
        plVar5 = (longlong *)plVar5[3];
        while (plVar5 == (longlong *)0x0) {
          if (iVar3 == iStack_680) {
            if (iVar4 == iStack_67c) break;
            iVar4 = iVar4 + 1;
            iVar3 = iStack_688;
            iStack_68c = iVar4;
          }
          else {
            iVar3 = iVar3 + 1;
          }
          iStack_690 = iVar3;
          plVar5 = *(longlong **)
                    ((longlong)(iStack_68c * *(int *)(param_3 + 0x98d238) + iVar3) * 9 +
                    *(longlong *)(param_3 + 0x98d248));
        }
      } while( true );
    }
  }
LAB_1805b613c:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_708);
LAB_1805b5ece:
  lVar2 = *(longlong *)(param_1 + 0x5960);
  if (plVar5 == (longlong *)0x0) goto LAB_1805b613c;
  goto LAB_1805b5d50;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1805b6170(longlong param_1,uint64_t param_2)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  uint64_t uVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  uint auStackX_18 [4];
  
  iVar6 = 0;
  auStackX_18[0] = 0;
  cVar2 = FUN_18055f260(param_2,auStackX_18,&unknown_var_6336_ptr);
  bVar7 = cVar2 != '\0';
  plVar3 = (longlong *)FUN_180569670(param_2);
  uVar1 = auStackX_18[0];
  if ((int)auStackX_18[0] < 1) {
    return (ulonglong)bVar7;
  }
  do {
    if (bVar7 == false) goto FUN_1805b62b8;
    auStackX_18[0] = 0;
    uVar4 = FUN_18055f260(param_2,auStackX_18,&unknown_var_6288_ptr);
    bVar7 = (char)uVar4 != '\0';
    plVar3 = (longlong *)CONCAT71((int7)((ulonglong)uVar4 >> 8),bVar7);
    if (auStackX_18[0] == 0) {
      if (!bVar7) {
FUN_1805b62b8:
        return (ulonglong)plVar3 & 0xffffffffffffff00;
      }
      auStackX_18[0] = 0xffff;
      plVar3 = (longlong *)FUN_18055f260(param_2,auStackX_18,&unknown_var_6464_ptr);
      if ((char)plVar3 == '\0') goto FUN_1805b62b8;
      plVar3 = (longlong *)(ulonglong)auStackX_18[0];
      bVar7 = true;
      if ((ushort)auStackX_18[0] < 4) {
        lVar5 = (ulonglong)(auStackX_18[0] & 0xffff) * 0x10;
        plVar3 = (longlong *)(&system_data_2c98 + lVar5);
        if ((*plVar3 != 0) || (*(longlong *)(&system_data_2ca0 + lVar5) != 0)) {
          plVar3 = (longlong *)(**(code **)(&system_data_2ca0 + lVar5))(*plVar3,param_1,param_2);
          goto LAB_1805b6290;
        }
      }
      else {
        bVar7 = false;
      }
    }
    else {
      if (!bVar7) goto FUN_1805b62b8;
      _DAT_180c95dc8 = param_2;
      plVar3 = (longlong *)
               (**(code **)(_DAT_180c8ece0 + 0x140))
                         (*(int32_t *)(*(longlong *)(param_1 + 0x58f8) + 0x4c));
      _DAT_180c95dc8 = 0;
LAB_1805b6290:
      bVar7 = (char)plVar3 != '\0';
    }
    iVar6 = iVar6 + 1;
    if ((int)uVar1 <= iVar6) {
      return (ulonglong)bVar7;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1805b61be(void)

{
  longlong *in_RAX;
  uint64_t uVar1;
  longlong lVar2;
  byte unaff_BL;
  int unaff_EBP;
  int unaff_EDI;
  longlong unaff_R14;
  longlong unaff_R15;
  bool bVar3;
  uint uStack0000000000000060;
  
  do {
    if (unaff_BL == 0) goto FUN_1805b62b8;
    uStack0000000000000060 = (int)unaff_R15;
    uVar1 = FUN_18055f260();
    bVar3 = (char)uVar1 != '\0';
    in_RAX = (longlong *)CONCAT71((int7)((ulonglong)uVar1 >> 8),bVar3);
    if (uStack0000000000000060 == (int)unaff_R15) {
      if (!bVar3) {
FUN_1805b62b8:
        return (ulonglong)in_RAX & 0xffffffffffffff00;
      }
      uStack0000000000000060 = 0xffff;
      in_RAX = (longlong *)FUN_18055f260();
      if ((char)in_RAX == '\0') goto FUN_1805b62b8;
      in_RAX = (longlong *)(ulonglong)uStack0000000000000060;
      unaff_BL = true;
      if ((ushort)uStack0000000000000060 < 4) {
        lVar2 = (ulonglong)(uStack0000000000000060 & 0xffff) * 0x10;
        in_RAX = (longlong *)(&system_data_2c98 + lVar2);
        if ((*in_RAX != 0) || (*(longlong *)(&system_data_2ca0 + lVar2) != unaff_R15)) {
          in_RAX = (longlong *)(**(code **)(&system_data_2ca0 + lVar2))();
          goto LAB_1805b6290;
        }
      }
      else {
        unaff_BL = false;
      }
    }
    else {
      if (!bVar3) goto FUN_1805b62b8;
      in_RAX = (longlong *)
               (**(code **)(_DAT_180c8ece0 + 0x140))
                         (*(int32_t *)(*(longlong *)(unaff_R14 + 0x58f8) + 0x4c));
      _DAT_180c95dc8 = unaff_R15;
LAB_1805b6290:
      unaff_BL = (char)in_RAX != '\0';
    }
    unaff_EDI = unaff_EDI + 1;
    if (unaff_EBP <= unaff_EDI) {
      return (ulonglong)unaff_BL;
    }
  } while( true );
}



int8_t FUN_1805b62b8(void)

{
  return 0;
}



int8_t FUN_1805b62bc(void)

{
  int8_t unaff_BL;
  
  return unaff_BL;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805b62d0(ulonglong *param_1)
void FUN_1805b62d0(ulonglong *param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int iVar6;
  longlong lVar7;
  
  uVar3 = param_1[4];
  iVar6 = 0;
  if ((longlong)(param_1[5] - uVar3) >> 3 == 0) {
    param_1[5] = uVar3;
    return;
  }
  lVar7 = 0;
  do {
    puVar5 = (uint64_t *)param_1[1];
    if (puVar5 < (uint64_t *)param_1[2]) {
      param_1[1] = (ulonglong)(puVar5 + 1);
      *puVar5 = *(uint64_t *)(lVar7 + uVar3);
    }
    else {
      puVar4 = (uint64_t *)*param_1;
      lVar1 = (longlong)puVar5 - (longlong)puVar4 >> 3;
      if (lVar1 == 0) {
        lVar1 = 1;
LAB_1805b6357:
        puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 8,(char)param_1[3]);
        puVar4 = (uint64_t *)*param_1;
        puVar5 = (uint64_t *)param_1[1];
      }
      else {
        lVar1 = lVar1 * 2;
        if (lVar1 != 0) goto LAB_1805b6357;
        puVar2 = (uint64_t *)0x0;
      }
      if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
        memmove(puVar2,puVar4,(longlong)puVar5 - (longlong)puVar4);
      }
      *puVar2 = *(uint64_t *)(lVar7 + uVar3);
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *param_1 = (ulonglong)puVar2;
      param_1[2] = (ulonglong)(puVar2 + lVar1);
      param_1[1] = (ulonglong)(puVar2 + 1);
    }
    uVar3 = param_1[4];
    iVar6 = iVar6 + 1;
    lVar7 = lVar7 + 8;
    if ((ulonglong)((longlong)(param_1[5] - uVar3) >> 3) <= (ulonglong)(longlong)iVar6) {
      param_1[5] = uVar3;
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805b62f6(uint64_t param_1,ulonglong param_2)
void FUN_1805b62f6(uint64_t param_1,ulonglong param_2)

{
  longlong lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  ulonglong *unaff_RBX;
  uint64_t *puVar4;
  int unaff_R12D;
  longlong lVar5;
  
  lVar5 = 0;
  do {
    puVar4 = (uint64_t *)unaff_RBX[1];
    if (puVar4 < (uint64_t *)unaff_RBX[2]) {
      unaff_RBX[1] = (ulonglong)(puVar4 + 1);
      *puVar4 = *(uint64_t *)(lVar5 + param_2);
    }
    else {
      puVar3 = (uint64_t *)*unaff_RBX;
      lVar1 = (longlong)puVar4 - (longlong)puVar3 >> 3;
      if (lVar1 == 0) {
        lVar1 = 1;
LAB_1805b6357:
        puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 8,(char)unaff_RBX[3]);
        puVar3 = (uint64_t *)*unaff_RBX;
        puVar4 = (uint64_t *)unaff_RBX[1];
      }
      else {
        lVar1 = lVar1 * 2;
        if (lVar1 != 0) goto LAB_1805b6357;
        puVar2 = (uint64_t *)0x0;
      }
      if (puVar3 != puVar4) {
                    // WARNING: Subroutine does not return
        memmove(puVar2,puVar3,(longlong)puVar4 - (longlong)puVar3);
      }
      *puVar2 = *(uint64_t *)(lVar5 + param_2);
      if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *unaff_RBX = (ulonglong)puVar2;
      unaff_RBX[2] = (ulonglong)(puVar2 + lVar1);
      unaff_RBX[1] = (ulonglong)(puVar2 + 1);
    }
    param_2 = unaff_RBX[4];
    unaff_R12D = unaff_R12D + 1;
    lVar5 = lVar5 + 8;
    if ((ulonglong)((longlong)(unaff_RBX[5] - param_2) >> 3) <= (ulonglong)(longlong)unaff_R12D) {
      unaff_RBX[5] = param_2;
      return;
    }
  } while( true );
}






// 函数: void FUN_1805b6402(longlong param_1,uint64_t param_2)
void FUN_1805b6402(longlong param_1,uint64_t param_2)

{
  *(uint64_t *)(param_1 + 0x28) = param_2;
  return;
}



float FUN_1805b6410(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  int8_t auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = param_2[1] - param_1[1];
  fVar6 = *param_2 - *param_1;
  fVar4 = fVar5 * fVar5 + fVar6 * fVar6;
  auVar2 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
  fVar1 = auVar2._0_4_;
  fVar3 = fVar1 * 0.5 * (3.0 - fVar4 * fVar1 * fVar1);
  fVar1 = 0.0;
  fVar5 = (param_3[1] - param_1[1]) * fVar5 * fVar3 + fVar6 * fVar3 * (*param_3 - *param_1);
  if (0.0 <= fVar5) {
    if (fVar3 * fVar4 < fVar5) {
      return 1.0;
    }
    fVar1 = fVar5 / (fVar3 * fVar4);
  }
  return fVar1;
}



ulonglong FUN_1805b65d0(float *param_1,char param_2,longlong param_3,longlong param_4,
                       int32_t param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  char cVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  float fVar7;
  ulonglong uVar8;
  
  if (param_2 == '\0') {
    cVar4 = func_0x0001805b64f0(param_1,param_3,param_4,param_5);
    if (cVar4 == '\0') {
      fVar7 = param_1[9];
      if (1e+08 < fVar7) {
        param_1[9] = 20.0;
        return 0x41a00000;
      }
      goto FUN_1805b6708;
    }
  }
  lVar1 = *(longlong *)(param_3 + 0x20);
  lVar2 = *(longlong *)(param_4 + 0x20);
  puVar6 = (uint64_t *)(lVar1 + 0xc);
  puVar5 = (uint64_t *)(lVar2 + 0xc);
  *param_1 = (float)(*(longlong *)
                      (&system_error_code +
                      (longlong)*(int *)(*(longlong *)(param_3 + 0x8d8) + 0x87b790) * 8) -
                    *(longlong *)(*(longlong *)(param_3 + 0x8d8) + 0x87b788)) * 1e-05;
  uVar3 = *(uint64_t *)(lVar1 + 0x14);
  *(uint64_t *)(param_1 + 1) = *puVar6;
  *(uint64_t *)(param_1 + 3) = uVar3;
  uVar3 = *(uint64_t *)(lVar2 + 0x14);
  *(uint64_t *)(param_1 + 5) = *puVar5;
  *(uint64_t *)(param_1 + 7) = uVar3;
  uVar8 = FUN_180392600(*(longlong *)(*(longlong *)(param_3 + 0x8d8) + 0x18) + 0x2a68,
                        *(uint64_t *)(param_3 + 0x9d8),*(uint64_t *)(param_4 + 0x9d8),puVar6,
                        puVar5,*(int32_t *)(*(longlong *)(param_3 + 0x20) + 0x1d0),0x41a00000);
  if ((float)uVar8 < 1e+30) {
    param_1[9] = (float)uVar8;
    param_1[10] = 1.4013e-45;
    return uVar8;
  }
  fVar7 = 20.0;
  param_1[9] = 20.0;
  param_1[10] = 2.8026e-45;
FUN_1805b6708:
  return (ulonglong)(uint)fVar7;
}



uint64_t FUN_1805b664c(longlong param_1,uint64_t *param_2,longlong param_3,uint64_t *param_4)

{
  float *unaff_RBX;
  longlong unaff_RDI;
  longlong in_R11;
  uint64_t uVar1;
  int32_t uStack0000000000000028;
  int32_t uStack0000000000000030;
  
  uStack0000000000000030 = 0x41a00000;
  *unaff_RBX = (float)(*(longlong *)(param_3 + (longlong)*(int *)(param_1 + 0x87b790) * 8) -
                      *(longlong *)(param_1 + 0x87b788)) * 1e-05;
  uVar1 = param_4[1];
  *(uint64_t *)(unaff_RBX + 1) = *param_4;
  *(uint64_t *)(unaff_RBX + 3) = uVar1;
  uVar1 = param_2[1];
  *(uint64_t *)(unaff_RBX + 5) = *param_2;
  *(uint64_t *)(unaff_RBX + 7) = uVar1;
  uStack0000000000000028 = *(int32_t *)(*(longlong *)(in_R11 + 0x20) + 0x1d0);
  uVar1 = FUN_180392600(*(longlong *)(*(longlong *)(in_R11 + 0x8d8) + 0x18) + 0x2a68,
                        *(uint64_t *)(in_R11 + 0x9d8),*(uint64_t *)(unaff_RDI + 0x9d8),param_4,
                        param_2);
  if ((float)uVar1 < 1e+30) {
    unaff_RBX[9] = (float)uVar1;
    unaff_RBX[10] = 1.4013e-45;
    return uVar1;
  }
  unaff_RBX[9] = 20.0;
  unaff_RBX[10] = 2.8026e-45;
  return 0x41a00000;
}






// 函数: void FUN_1805b66f2(void)
void FUN_1805b66f2(void)

{
  longlong unaff_RBX;
  
  *(int32_t *)(unaff_RBX + 0x24) = 0x41a00000;
  *(int32_t *)(unaff_RBX + 0x28) = 2;
  return;
}






// 函数: void FUN_1805b6708(void)
void FUN_1805b6708(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1805b6780(longlong param_1,uint64_t param_2)

{
  uint64_t uVar1;
  
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 0x20) = param_2;
  *(uint64_t *)(param_1 + 0x3c) = 0;
  *(uint64_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x60) = 0;
  *(uint64_t *)(param_1 + 0x68) = 0;
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x50) = 0;
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(uint64_t *)(param_1 + 0x80) = *(uint64_t *)(param_1 + 0x60);
  *(int32_t *)(param_1 + 0x88) = 0;
  *(uint64_t *)(param_1 + 0xa0) = 0;
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(uint64_t *)(param_1 + 0xbc) = 0;
  *(uint64_t *)(param_1 + 0xc4) = 0;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(uint64_t *)(param_1 + 0xe8) = 0;
  *(int32_t *)(param_1 + 0x100) = 1;
  uVar1 = _DAT_180c8ed38;
  *(uint64_t *)(param_1 + 0xf8) = _DAT_180c8ed38;
  *(int32_t *)(param_1 + 0x110) = 1;
  *(uint64_t *)(param_1 + 0x108) = uVar1;
  *(uint64_t *)(param_1 + 0x1118) = 0;
  *(uint64_t *)(param_1 + 0x1120) = 0;
  *(uint64_t *)(param_1 + 0x1128) = 0;
  *(int32_t *)(param_1 + 0x1130) = 3;
  *(int8_t *)(param_1 + 0x113c) = 1;
  *(int32_t *)(param_1 + 0x1138) = 0;
  *(uint64_t *)(param_1 + 0x1148) = 0;
  *(uint64_t *)(param_1 + 0x1168) = 0;
  *(uint64_t *)(param_1 + 0x1170) = 0;
  *(uint64_t *)(param_1 + 0x1180) = 0;
  *(uint64_t *)(param_1 + 0x118c) = 0;
  *(uint64_t *)(param_1 + 0x1194) = 0;
  *(uint64_t *)(param_1 + 0x11b4) = 0;
  *(int32_t *)(param_1 + 0x11c8) = 1;
  *(uint64_t *)(param_1 + 0x11c0) = uVar1;
  *(int8_t *)(param_1 + 0x10) = 0;
  return param_1;
}






// 函数: void FUN_1805b68c0(longlong param_1)
void FUN_1805b68c0(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(char *)(param_1 + 0x113c) == '\0') {
    *(uint64_t *)(param_1 + 0x1120) = *(uint64_t *)(param_1 + 0x1118);
    *(int8_t *)(param_1 + 0x113c) = 1;
  }
  *(int32_t *)(param_1 + 0x1138) = 0;
  puVar2 = *(uint64_t **)(param_1 + 0x1118);
  if (puVar2 != (uint64_t *)0x0) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



longlong FUN_1805b6920(longlong param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1805d3210();
    return param_1 + 0x58;
  }
  return param_1 + 0x58;
}



longlong FUN_1805b6950(longlong param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1805d3210();
    return param_1 + 0x60;
  }
  return param_1 + 0x60;
}



longlong FUN_1805b6980(longlong param_1)

{
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    FUN_1805d3550();
    return param_1 + 100;
  }
  return param_1 + 100;
}



float * FUN_1805b69b0(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((uVar2 & 4) != 0) {
    return (float *)(param_1 + 0xd);
  }
  if ((uVar2 >> 9 & 1) == 0) {
    func_0x0001805d4cd0();
    uVar2 = *(uint *)(param_1 + 1);
  }
  if ((param_1[0x1c] == 0) &&
     ((lVar1 = *param_1, *(longlong *)(lVar1 + 0x20f0) == 0 ||
      (((*(int *)(lVar1 + 0x14a8) != 5 && (*(int *)(lVar1 + 0x14a8) != 6)) &&
       (((*(byte *)(lVar1 + 0x209c) & 1) == 0 || ((*(byte *)(lVar1 + 0x2098) & 1) == 0)))))))) {
    *(float *)(param_1 + 0xd) = 0.0;
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 4;
    return (float *)(param_1 + 0xd);
  }
  if (((uVar2 & 1) == 0) && (FUN_1805d3210(param_1), (*(uint *)(param_1 + 1) & 1) == 0)) {
    FUN_1805d3210(param_1);
  }
  *(float *)(param_1 + 0xd) = *(float *)(param_1 + 10) - *(float *)(param_1 + 8);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 4;
  return (float *)(param_1 + 0xd);
}



int32_t * FUN_1805b6a70(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((uVar1 >> 0xf & 1) != 0) {
    return (int32_t *)((longlong)param_1 + 0x6c);
  }
  if ((uVar1 >> 9 & 1) == 0) {
    func_0x0001805d4cd0();
    uVar1 = *(uint *)(param_1 + 1);
  }
  if ((param_1[0x1c] == 0) &&
     ((lVar2 = *param_1, *(longlong *)(lVar2 + 0x20f0) == 0 ||
      ((1 < *(int *)(lVar2 + 0x14a8) - 5U &&
       (((*(byte *)(lVar2 + 0x209c) & 1) == 0 || ((*(byte *)(lVar2 + 0x2098) & 1) == 0)))))))) {
    *(int32_t *)((longlong)param_1 + 0x6c) = 0;
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x8000;
    return (int32_t *)((longlong)param_1 + 0x6c);
  }
  if ((uVar1 & 1) == 0) {
    FUN_1805d3210(param_1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(int32_t *)(*(longlong *)(*(longlong *)*param_1 + 0x20) + 0x34));
}



int32_t * FUN_1805b6b40(longlong param_1)

{
  uint uVar1;
  
  if ((*(uint *)(param_1 + 8) >> 0x10 & 1) != 0) {
    return (int32_t *)(param_1 + 0x70);
  }
  if ((*(uint *)(param_1 + 8) >> 9 & 1) == 0) {
    func_0x0001805d4cd0();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    uVar1 = *(uint *)(param_1 + 8);
    if ((uVar1 & 1) == 0) {
      FUN_1805d3210(param_1);
      uVar1 = *(uint *)(param_1 + 8);
    }
    if ((uVar1 >> 9 & 1) == 0) {
      func_0x0001805d4cd0(param_1);
    }
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x20) + 0x34));
  }
  *(int32_t *)(param_1 + 0x70) = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10000;
  return (int32_t *)(param_1 + 0x70);
}






// 函数: void FUN_1805b6b72(void)
void FUN_1805b6b72(void)

{
  uint in_EAX;
  longlong unaff_RBX;
  
  if ((in_EAX & 1) == 0) {
    FUN_1805d3210();
    in_EAX = *(uint *)(unaff_RBX + 8);
  }
  if ((in_EAX >> 9 & 1) == 0) {
    func_0x0001805d4cd0();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(int32_t *)(*(longlong *)(*(longlong *)(unaff_RBX + 0xe0) + 0x20) + 0x34));
}






