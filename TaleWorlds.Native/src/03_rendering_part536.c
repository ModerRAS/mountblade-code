#include "TaleWorlds.Native.Split.h"

// 03_rendering_part536.c - 13 个函数

// 函数: void FUN_18055d8f1(void)
void FUN_18055d8f1(void)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong unaff_RBX;
  undefined4 unaff_EBP;
  longlong unaff_RSI;
  int unaff_R12D;
  
  if (*(char *)(unaff_RBX + 0x670) != '\0') {
    FUN_18055fb60(unaff_RBX + 0x5f8,unaff_EBP);
    FUN_18055f960(unaff_RSI * 0x20 + *(longlong *)(unaff_RBX + 0x5f8));
    uVar2 = unaff_R12D >> 0x1f & 0xf;
    uVar1 = unaff_R12D + uVar2;
    lVar3 = (longlong)((int)uVar1 >> 4);
    *(ushort *)(*(longlong *)(unaff_RBX + 0x618) + lVar3 * 8 + 4) =
         *(ushort *)(*(longlong *)(unaff_RBX + 0x618) + 4 + lVar3 * 8) |
         (ushort)(1 << ((uVar1 & 0xf) - uVar2 & 0x1f));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18055d960(longlong param_1,int param_2,undefined8 param_3,undefined4 *param_4,
                       undefined8 param_5,char param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  ulonglong uStackX_8;
  
  FUN_18055d4d0(param_1,param_2 * 0x10 + 0x10);
  uStackX_8 = (ulonglong)_DAT_180c95d68;
  puVar11 = (undefined4 *)
            (((longlong)(param_2 * 0x10) + 2) * 0xd08 + *(longlong *)(param_1 + 0x758));
  iVar5 = FUN_18055f6f0(&UNK_1809f8ab8,*param_4);
  iVar6 = FUN_18055f6f0(&UNK_1809f8ab8,param_4[1]);
  iVar7 = FUN_18055f6f0(&UNK_1809f8ac8,param_4[2]);
  iVar8 = FUN_18055f6f0(&UNK_1809f8ab8,*puVar11);
  iVar9 = FUN_18055f6f0(&UNK_1809f8ab8,puVar11[1]);
  uVar10 = FUN_18055f6f0(&UNK_1809f8ac8,puVar11[2]);
  if ((((param_6 == '\0') && (iVar5 == iVar8)) && (iVar6 == iVar9)) && (iVar7 == (int)uVar10)) {
    return uVar10 & 0xffffffffffffff00;
  }
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(ulonglong *)(puVar11 + 0x340) = uStackX_8;
  *puVar11 = uVar1;
  puVar11[1] = uVar2;
  puVar11[2] = uVar3;
  puVar11[3] = uVar4;
  *(undefined8 *)(puVar11 + 0x1c9) = 0;
                    // WARNING: Subroutine does not return
  memset(*(undefined8 *)(puVar11 + 0x1be),0,(longlong)((int)puVar11[0x1bc] >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18055db10(longlong param_1,int param_2,int param_3,undefined4 param_4,
                       undefined8 param_5,char param_6)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  ulonglong uStackX_8;
  
  FUN_18055d4d0(param_1,param_2 * 0x10 + 0x10);
  uStackX_8 = (ulonglong)_DAT_180c95d68;
  puVar3 = (undefined4 *)
           ((longlong)(param_3 + param_2 * 0x10) * 0xd08 + *(longlong *)(param_1 + 0x758));
  iVar1 = FUN_18055f6f0(param_5,param_4);
  uVar2 = FUN_18055f6f0(param_5,*puVar3);
  if ((param_6 == '\0') && (iVar1 == (int)uVar2)) {
    return uVar2 & 0xffffffffffffff00;
  }
  *puVar3 = param_4;
  *(ulonglong *)(puVar3 + 0x340) = uStackX_8;
  *(undefined8 *)(puVar3 + 0x1c9) = 0;
                    // WARNING: Subroutine does not return
  memset(*(undefined8 *)(puVar3 + 0x1be),0,(longlong)((int)puVar3[0x1bc] >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18055dc20(longlong param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  ulonglong uStackX_8;
  
  FUN_18055d4d0(param_1,param_2 * 0x10 + 0x10);
  uStackX_8 = (ulonglong)_DAT_180c95d68;
  piVar1 = (int *)((longlong)(param_3 + param_2 * 0x10) * 0xd08 + *(longlong *)(param_1 + 0x758));
  if (*piVar1 == param_4) {
    return uStackX_8 & 0xffffffffffffff00;
  }
  *(ulonglong *)(piVar1 + 0x340) = uStackX_8;
  *piVar1 = param_4;
  piVar1[0x1c9] = 0;
  piVar1[0x1ca] = 0;
                    // WARNING: Subroutine does not return
  memset(*(undefined8 *)(piVar1 + 0x1be),0,(longlong)(piVar1[0x1bc] >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055dcf0(longlong param_1,int param_2,int param_3,undefined8 param_4,char param_5,
void FUN_18055dcf0(longlong param_1,int param_2,int param_3,undefined8 param_4,char param_5,
                  char param_6)

{
  char cVar1;
  longlong lVar2;
  undefined8 uStackX_8;
  
  FUN_18055d4d0(param_1,param_2 * 0x10 + 0x10);
  uStackX_8 = (ulonglong)_DAT_180c95d68;
  lVar2 = (longlong)(param_3 + param_2 * 0x10) * 0xd08 + *(longlong *)(param_1 + 0x758);
  if (param_5 == '\0') {
    if ((param_6 != '\0') || (cVar1 = FUN_1805b2d20(lVar2 + 0xa0,param_4,0), cVar1 == '\0')) {
      func_0x0001805b2e70(lVar2 + 0xa0,param_4);
      *(ulonglong *)(lVar2 + 0xd00) = uStackX_8;
      goto LAB_18055dd95;
    }
LAB_18055dd9a:
    cVar1 = FUN_1805b2d20(lVar2 + 0x10,param_4,0);
    if (cVar1 != '\0') goto LAB_18055ddcb;
  }
  else {
LAB_18055dd95:
    if (param_6 == '\0') goto LAB_18055dd9a;
  }
  func_0x0001805b2e70(lVar2 + 0x10,param_4);
  *(ulonglong *)(lVar2 + 0xd00) = uStackX_8;
LAB_18055ddcb:
  *(undefined8 *)(lVar2 + 0xcf4) = 0;
                    // WARNING: Subroutine does not return
  memset(*(undefined8 *)(lVar2 + 0xcc8),0,(longlong)(*(int *)(lVar2 + 0xcc0) >> 3));
}



longlong FUN_18055de80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 4) = 2;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  FUN_1805fa620(param_1 + 0x50);
  FUN_18055f5c0(param_1 + 0x4bf8);
  *(undefined8 *)(param_1 + 0x5808) = 0;
  *(undefined8 *)(param_1 + 0x5810) = 0;
  *(undefined8 *)(param_1 + 0x5818) = 0;
  *(undefined4 *)(param_1 + 0x5820) = 3;
  *(undefined8 *)(param_1 + 0x5828) = 0;
  *(undefined8 *)(param_1 + 0x5830) = 0;
  *(undefined8 *)(param_1 + 0x5838) = 0;
  *(undefined4 *)(param_1 + 0x5840) = 3;
  *(undefined8 *)(param_1 + 0x5848) = 0;
  *(undefined8 *)(param_1 + 0x5850) = 0;
  *(undefined8 *)(param_1 + 0x5858) = 0;
  *(undefined4 *)(param_1 + 0x5860) = 3;
  *(undefined8 *)(param_1 + 0x5868) = 0;
  *(undefined8 *)(param_1 + 0x5870) = 0;
  *(undefined8 *)(param_1 + 0x5878) = 0;
  *(undefined4 *)(param_1 + 0x5880) = 3;
  FUN_18055be50(param_1 + 0x5888);
  *(undefined8 *)(param_1 + 0x58e8) = 0;
  *(undefined8 *)(param_1 + 0x58e0) = 0;
  *(undefined4 *)(param_1 + 0x58f4) = 1;
  *(undefined4 *)(param_1 + 0x58f0) = 10;
  *(undefined8 *)(param_1 + 0x5920) = 0;
  *(undefined8 *)(param_1 + 0x5928) = 0;
  *(undefined8 *)(param_1 + 0x5900) = 0;
  *(undefined8 *)(param_1 + 0x5908) = 0;
  *(undefined8 *)(param_1 + 0x5920) = 0;
  *(undefined4 *)(param_1 + 0x5930) = 0;
  *(undefined8 *)(param_1 + 0x5934) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x5940) = 0;
  *(undefined8 *)(param_1 + 0x5948) = 0;
  *(undefined8 *)(param_1 + 0x5950) = 0;
  *(undefined4 *)(param_1 + 0x5958) = 3;
  *(undefined8 *)(param_1 + 0x5960) = 0;
  *(undefined8 *)(param_1 + 0x5968) = 0;
  *(undefined8 *)(param_1 + 0x5970) = 0;
  *(undefined4 *)(param_1 + 0x5978) = 3;
  *(undefined2 *)(param_1 + 0x5984) = 0;
  *(undefined1 *)(param_1 + 0x5986) = 0;
  *(undefined2 *)(param_1 + 0x5988) = 0;
  *(undefined1 *)(param_1 + 0x598a) = 0;
  _Mtx_init_in_situ(param_1 + 0x5990,2,param_3,param_4,uVar1);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055e020(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18055e020(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_18056f480();
  *param_1 = &UNK_180a35a70;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6bc) = 2;
  *(undefined8 *)((longlong)param_1 + 0x6c4) = 2;
  *(undefined8 *)((longlong)param_1 + 0x6cc) = 2;
  *(undefined4 *)((longlong)param_1 + 0x6d4) = 3;
  param_1[0xdb] = 2;
  *(undefined4 *)(param_1 + 0xdc) = 3;
  *(undefined8 *)((longlong)param_1 + 0x6e4) = 2;
  *(undefined4 *)((longlong)param_1 + 0x6ec) = 1;
  *(undefined4 *)(param_1 + 0xde) = 1;
  puVar1 = param_1 + 0xdf;
  lVar2 = 4;
  do {
    func_0x00018013d940(puVar1);
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  *(undefined4 *)(param_1 + 0xea) = 3;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  *(undefined4 *)(param_1 + 0xee) = 3;
  *(undefined4 *)((longlong)param_1 + 0x78c) = 0;
  *(undefined2 *)(param_1 + 0xf1) = 0;
  param_1[0xef] = 2;
  puVar1 = param_1 + 0x4f1;
  lVar2 = 0x3ff;
  do {
    LOCK();
    *(undefined2 *)puVar1 = 0xffff;
    UNLOCK();
    puVar1 = (undefined8 *)((longlong)puVar1 + 2);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  _Mtx_init_in_situ(param_1 + 0x5f1,2,0,param_4,uVar3);
  param_1[0x6ae] = 0;
  *(undefined4 *)(param_1 + 0x6ad) = 0;
  param_1[0x6af] = 0;
  param_1[0x6ac] = 0;
  param_1[0x6af] = _DAT_180c966e8;
  param_1[0x6b3] = 0;
  param_1[0x6ae] = param_1 + 0x5fb;
  *(undefined4 *)(param_1 + 0x6ad) = 0x2c40;
  *(undefined4 *)(param_1 + 0x6b4) = 0;
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x5fb,0,0x588);
}



undefined8 FUN_18055e300(undefined8 param_1,ulonglong param_2)

{
  FUN_18055e380();
  if ((param_2 & 1) != 0) {
    free(param_1,0x3648);
  }
  return param_1;
}





// 函数: void FUN_18055e340(longlong *param_1)
void FUN_18055e340(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  while( true ) {
    if (lVar2 == lVar1) {
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    if (*(longlong *)(lVar2 + 0xcb8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 *)(lVar2 + 0xcb8) = 0;
    if (*(longlong *)(lVar2 + 0x6e8) != 0) break;
    *(undefined8 *)(lVar2 + 0x6e8) = 0;
    lVar2 = lVar2 + 0xd08;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18055e360(longlong *param_1)
void FUN_18055e360(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  while( true ) {
    if (lVar2 == lVar1) {
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    if (*(longlong *)(lVar2 + 0xcb8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 *)(lVar2 + 0xcb8) = 0;
    if (*(longlong *)(lVar2 + 0x6e8) != 0) break;
    *(undefined8 *)(lVar2 + 0x6e8) = 0;
    lVar2 = lVar2 + 0xd08;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055e380(longlong *param_1)
void FUN_18055e380(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar7;
  ulonglong uVar6;
  
  *param_1 = (longlong)&UNK_180a35a70;
  plVar2 = param_1 + 0x4f1;
  lVar5 = 0x3ff;
  lVar3 = 0x3ff;
  do {
    LOCK();
    *(undefined2 *)plVar2 = 0xffff;
    UNLOCK();
    plVar2 = (longlong *)((longlong)plVar2 + 2);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  cVar1 = (**(code **)(param_1[5] + 0x30))(param_1 + 5);
  if (cVar1 != '\0') {
    (**(code **)(param_1[5] + 0x18))(param_1 + 5);
  }
  (**(code **)(*param_1 + 8))(param_1);
  plVar2 = param_1 + 0xf2;
  uVar6 = 0;
  do {
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      if ((*(int *)(lVar3 + 0x4c) != 0) && (_DAT_180c8f008 != 0)) {
        (**(code **)(_DAT_180c8f008 + 0x18))();
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
    *plVar2 = 0;
    plVar2 = plVar2 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  plVar2 = param_1 + 0xe7;
  lVar3 = *plVar2;
  uVar7 = uVar6;
  if (param_1[0xe8] - lVar3 >> 3 != 0) {
    do {
      lVar3 = *(longlong *)(uVar7 + lVar3);
      if (lVar3 != 0) {
        FUN_18055e8d0(lVar3);
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar3);
      }
      *(undefined8 *)(uVar7 + *plVar2) = 0;
      uVar4 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar4;
      lVar3 = *plVar2;
      uVar7 = uVar7 + 8;
    } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(param_1[0xe8] - lVar3 >> 3));
  }
  if (param_1[0x6bf] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x6bb] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180368c20();
  if (param_1[0x6ac] == 0) {
    param_1[0x6ac] = 0;
    _Mtx_destroy_in_situ();
    FUN_18055e7a0();
    if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = (longlong)&UNK_180a36778;
    cVar1 = (**(code **)(param_1[5] + 0x30))(param_1 + 5);
    if (cVar1 != '\0') {
      (**(code **)(param_1[5] + 0x18))(param_1 + 5);
    }
    (**(code **)(*param_1 + 8))(param_1);
    FUN_18056fd20(param_1 + 0xc3);
    if (param_1[0xba] == 0) {
      param_1[0xba] = 0;
      param_1[5] = (longlong)&UNK_180a36730;
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



undefined8 FUN_18055e560(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong alStackX_10 [3];
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x738);
    iVar2 = 0;
    uVar3 = *(longlong *)(param_1 + 0x740) - (longlong)plVar1 >> 3;
    if (uVar3 != 0) {
      do {
        if (*plVar1 == param_2) {
          if (iVar2 == -1) {
            return 0;
          }
          alStackX_10[0] = param_2;
          FUN_18005ea90(param_1 + 0x35d8,alStackX_10);
          return 1;
        }
        iVar2 = iVar2 + 1;
        plVar1 = plVar1 + 1;
      } while ((ulonglong)(longlong)iVar2 < uVar3);
    }
  }
  return 0;
}



ulonglong FUN_18055e5e0(longlong param_1,undefined8 param_2)

{
  short sVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint7 uVar4;
  char cVar5;
  uint auStackX_20 [2];
  int iStack_18;
  undefined4 auStack_14 [3];
  
  iStack_18 = -1;
  auStack_14[0] = 0xffffffff;
  auStackX_20[0] = 0xff;
  plVar2 = (longlong *)FUN_18055f260(param_2,auStackX_20,&UNK_1809f8dc0);
  if ((((((char)plVar2 != '\0') && (cVar5 = (char)auStackX_20[0], (auStackX_20[0] & 0xfc) == 0)) &&
       (cVar5 != '\x02')) &&
      ((plVar2 = (longlong *)FUN_18055f260(param_2,&iStack_18,&UNK_1809f8dd0), (char)plVar2 != '\0'
       && (plVar3 = (longlong *)(longlong)iStack_18, plVar2 = plVar3, -1 < iStack_18)))) &&
     ((plVar2 = *(longlong **)(param_1 + 0x790 + (longlong)plVar3 * 8), plVar2 != (longlong *)0x0 &&
      (((int)plVar2[2] == 1 && (*plVar2 != 0)))))) {
    if (cVar5 == '\x01') {
      plVar2 = (longlong *)
               ((ulonglong)
                (byte)((ushort)*(undefined2 *)(param_1 + 0x2788 + (longlong)plVar3 * 2) >> 0xf) ^ 1)
      ;
    }
    else {
      plVar2 = (longlong *)FUN_18055f260(param_2,auStack_14,&UNK_1809f8de0);
      if (((char)plVar2 == '\0') || ((cVar5 != '\0' && (cVar5 != '\x03')))) goto LAB_18055e6d5;
      sVar1 = *(short *)(param_1 + 0x2788 + (longlong)plVar3 * 2);
      uVar4 = (uint7)(byte)((ushort)sVar1 >> 8);
      if ((sVar1 < 0) || (sVar1 != (short)auStack_14[0])) {
        plVar2 = (longlong *)((ulonglong)uVar4 << 8);
      }
      else {
        plVar2 = (longlong *)CONCAT71(uVar4,1);
      }
    }
    if ((char)plVar2 != '\0') {
      return CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
    }
  }
LAB_18055e6d5:
  return (ulonglong)plVar2 & 0xffffffffffffff00;
}





// 函数: void FUN_18055e6f0(ulonglong *param_1)
void FUN_18055e6f0(ulonglong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[4];
  if (plVar1 < (longlong *)param_1[5]) {
    do {
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      plVar1 = plVar1 + 1;
    } while (plVar1 < (longlong *)param_1[5]);
  }
  plVar1 = (longlong *)*param_1;
  if (plVar1 < (longlong *)param_1[1]) {
    do {
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      plVar1 = plVar1 + 1;
    } while (plVar1 < (longlong *)param_1[1]);
  }
  if (param_1[4] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_18055e7a0(longlong *param_1)
void FUN_18055e7a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  while( true ) {
    if (lVar2 == lVar1) {
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    if (*(longlong *)(lVar2 + 0xcb8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 *)(lVar2 + 0xcb8) = 0;
    if (*(longlong *)(lVar2 + 0x6e8) != 0) break;
    *(undefined8 *)(lVar2 + 0x6e8) = 0;
    lVar2 = lVar2 + 0xd08;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18055e830(longlong *param_1)
void FUN_18055e830(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  if (lVar2 == lVar1) {
    param_1[1] = lVar2;
  }
  else {
    do {
      if (*(longlong *)(lVar2 + 0xcb8) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)(lVar2 + 0xcb8) = 0;
      if (*(longlong *)(lVar2 + 0x6e8) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)(lVar2 + 0x6e8) = 0;
      lVar2 = lVar2 + 0xd08;
    } while (lVar2 != lVar1);
    param_1[1] = *param_1;
  }
  return;
}



longlong FUN_18055e8d0(longlong param_1)

{
  _Mtx_destroy_in_situ();
  if (*(longlong *)(param_1 + 0x5960) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(longlong *)(param_1 + 0x5940) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(longlong *)(param_1 + 0x5890) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_18055e6f0(param_1 + 0x5848);
  FUN_18055e6f0(param_1 + 0x5808);
  FUN_18055f380(param_1 + 0x4bf8);
  FUN_1805fa720(param_1 + 0x50);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055e9a0(longlong *param_1,ulonglong param_2)
void FUN_18055e9a0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar13 = param_1[1];
  if ((ulonglong)((param_1[2] - lVar13) / 0xd08) < param_2) {
    lVar10 = *param_1;
    lVar12 = (lVar13 - lVar10) / 0xd08;
    uVar11 = lVar12 * 2;
    if (lVar12 == 0) {
      uVar11 = 1;
    }
    if (uVar11 < lVar12 + param_2) {
      uVar11 = lVar12 + param_2;
    }
    if (uVar11 == 0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,uVar11 * 0xd08,(char)param_1[3]);
      lVar13 = param_1[1];
      lVar10 = *param_1;
    }
    puVar9 = puVar8;
    if (lVar10 != lVar13) {
      lVar12 = lVar10 + 0xa0;
      do {
        uVar4 = *(undefined4 *)(lVar12 + -0x9c);
        uVar5 = *(undefined4 *)(lVar12 + -0x98);
        uVar6 = *(undefined4 *)(lVar12 + -0x94);
        *puVar9 = *(undefined4 *)(lVar12 + -0xa0);
        puVar9[1] = uVar4;
        puVar9[2] = uVar5;
        puVar9[3] = uVar6;
        *puVar9 = *(undefined4 *)(lVar12 + -0xa0);
        *puVar9 = *(undefined4 *)(lVar12 + -0xa0);
        *puVar9 = *(undefined4 *)(lVar12 + -0xa0);
        func_0x00018055f040((longlong)puVar8 + ((lVar12 + -0x90) - lVar10),lVar12 + -0x90);
        func_0x00018055f040((longlong)puVar8 + (lVar12 - lVar10),lVar12);
        uVar7 = *(undefined8 *)(lVar12 + 0x98);
        puVar2 = (undefined8 *)((longlong)puVar8 + lVar12 + (0x90 - lVar10));
        *puVar2 = *(undefined8 *)(lVar12 + 0x90);
        puVar2[1] = uVar7;
        uVar4 = *(undefined4 *)(lVar12 + 0xa4);
        uVar5 = *(undefined4 *)(lVar12 + 0xa8);
        uVar6 = *(undefined4 *)(lVar12 + 0xac);
        puVar3 = (undefined4 *)((longlong)puVar8 + lVar12 + (0xa0 - lVar10));
        *puVar3 = *(undefined4 *)(lVar12 + 0xa0);
        puVar3[1] = uVar4;
        puVar3[2] = uVar5;
        puVar3[3] = uVar6;
        uVar4 = *(undefined4 *)(lVar12 + 0xb4);
        uVar5 = *(undefined4 *)(lVar12 + 0xb8);
        uVar6 = *(undefined4 *)(lVar12 + 0xbc);
        puVar3 = (undefined4 *)((longlong)puVar8 + lVar12 + (0xb0 - lVar10));
        *puVar3 = *(undefined4 *)(lVar12 + 0xb0);
        puVar3[1] = uVar4;
        puVar3[2] = uVar5;
        puVar3[3] = uVar6;
        FUN_18055f1d0((longlong)puVar8 + ((lVar12 + 0xc0) - lVar10),lVar12 + 0xc0);
        FUN_18055f1d0((longlong)puVar8 + ((lVar12 + 0x690) - lVar10),lVar12 + 0x690);
        *(undefined8 *)((longlong)puVar8 + lVar12 + (0xc60 - lVar10)) =
             *(undefined8 *)(lVar12 + 0xc60);
        puVar9 = puVar9 + 0x342;
        lVar1 = lVar12 + 0xc68;
        lVar12 = lVar12 + 0xd08;
      } while (lVar1 != lVar13);
    }
    FUN_18055ed70(puVar9,param_2);
    lVar13 = param_1[1];
    lVar10 = *param_1;
    if (lVar10 != lVar13) {
      do {
        if (*(longlong *)(lVar10 + 0xcb8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 *)(lVar10 + 0xcb8) = 0;
        if (*(longlong *)(lVar10 + 0x6e8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 *)(lVar10 + 0x6e8) = 0;
        lVar10 = lVar10 + 0xd08;
      } while (lVar10 != lVar13);
      lVar10 = *param_1;
    }
    if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar10);
    }
    *param_1 = (longlong)puVar8;
    param_1[1] = (longlong)(puVar9 + param_2 * 0x342);
    param_1[2] = (longlong)(puVar8 + uVar11 * 0x342);
  }
  else {
    FUN_18055ed70(lVar13,param_2,-(param_1[2] - lVar13 >> 0x3f),0x13a524387ac82261,
                  0xfffffffffffffffe);
    param_1[1] = param_1[1] + param_2 * 0xd08;
  }
  return;
}





// 函数: void FUN_18055ec20(int param_1,int param_2,longlong *param_3)
void FUN_18055ec20(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  
  param_3 = (longlong *)*param_3;
  for (lVar1 = (longlong)param_1; lVar1 < param_2; lVar1 = lVar1 + 1) {
    FUN_1805b5b60(*(undefined8 *)(*(longlong *)(*param_3 + 0x738) + lVar1 * 8),
                  *(undefined4 *)param_3[1],*(undefined8 *)param_3[2],*param_3 + 0x6b8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18055ec90(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 == 3) {
    return 0x180c0b020;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (undefined8 *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055ed70(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_18055ed70(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x40) = 0xbe4ccccd;
    *(undefined4 *)(param_1 + 0x44) = 0xbe4ccccd;
    *(undefined8 *)(param_1 + 0x48) = 0x3ecccccd;
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined1 *)(param_1 + 0x58) = 1;
    *(undefined8 *)(param_1 + 0x5c) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x88) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x90) = 0xff;
    *(undefined8 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
    *(undefined8 *)(param_1 + 100) = 0;
    *(undefined8 *)(param_1 + 0x6c) = 0;
    *(undefined8 *)(param_1 + 0x74) = 0;
    *(undefined8 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
    *(undefined8 *)(param_1 + 0xa0) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xd0) = 0xbe4ccccd;
    *(undefined4 *)(param_1 + 0xd4) = 0xbe4ccccd;
    *(undefined8 *)(param_1 + 0xd8) = 0x3ecccccd;
    *(undefined2 *)(param_1 + 0xe0) = 0x100;
    *(undefined1 *)(param_1 + 0xe8) = 1;
    *(undefined8 *)(param_1 + 0xec) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x118) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x120) = 0xff;
    *(undefined8 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xf4) = 0;
    *(undefined8 *)(param_1 + 0xfc) = 0;
    *(undefined8 *)(param_1 + 0x104) = 0;
    *(undefined8 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 300) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x130) = 0xffffffffffffffff;
    *(undefined2 *)(param_1 + 0x158) = 0xff;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined4 *)(param_1 + 0x15c) = 0;
    *(undefined8 *)(param_1 + 0x6f8) = 0;
    *(undefined4 *)(param_1 + 0x6f0) = 0;
    *(undefined8 *)(param_1 + 0x700) = 0;
    *(undefined8 *)(param_1 + 0x6e8) = 0;
    *(undefined8 *)(param_1 + 0x700) = _DAT_180c966e8;
    *(undefined8 *)(param_1 + 0x720) = 0;
    *(longlong *)(param_1 + 0x6f8) = param_1 + 0x160;
    *(undefined4 *)(param_1 + 0x6f0) = 0x2c40;
    *(undefined4 *)(param_1 + 0x728) = 0;
                    // WARNING: Subroutine does not return
    memset(param_1 + 0x160,0,0x588,param_4,0xfffffffffffffffe);
  }
  return;
}





// 函数: void FUN_18055f100(longlong param_1,longlong param_2)
void FUN_18055f100(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_2 + 0x5a0);
  *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(param_2 + 0x5a8);
  *(undefined8 *)(param_1 + 0x5b0) = *(undefined8 *)(param_2 + 0x5b0);
  *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(param_2 + 0x5b8);
  *(undefined4 *)(param_1 + 0x5c0) = *(undefined4 *)(param_2 + 0x5c0);
  FUN_18055f4e0(param_1,*(undefined4 *)(param_2 + 0x590));
  iVar1 = *(int *)(param_2 + 0x590) >> 3;
  if (iVar1 != 0) {
    if (*(longlong *)(param_1 + 0x598) != 0) {
      if (*(longlong *)(param_2 + 0x598) != 0) {
                    // WARNING: Subroutine does not return
        memcpy();
      }
                    // WARNING: Subroutine does not return
      memset();
    }
    puVar2 = (undefined4 *)_errno(0,*(longlong *)(param_2 + 0x598),(longlong)iVar1);
    *puVar2 = 0x16;
    _invalid_parameter_noinfo();
  }
  *(undefined4 *)(param_1 + 0x5c4) = *(undefined4 *)(param_2 + 0x5c4);
  *(undefined4 *)(param_1 + 0x5c8) = *(undefined4 *)(param_2 + 0x5c8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



