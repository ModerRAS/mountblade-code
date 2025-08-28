#include "TaleWorlds.Native.Split.h"

// 03_rendering_part504.c - 18 个函数

// 函数: void FUN_180536190(longlong *param_1,undefined8 param_2,undefined8 param_3)
void FUN_180536190(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 auStack_1b8 [32];
  code *pcStack_198;
  char cStack_188;
  uint uStack_184;
  int aiStack_180 [2];
  undefined1 auStack_178 [4];
  undefined1 auStack_174 [4];
  undefined1 auStack_170 [8];
  int iStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_138;
  uint uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong lStack_f8;
  undefined1 auStack_e8 [192];
  undefined4 uStack_28;
  ulonglong uStack_18;
  
  uStack_130 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_1b8;
  if (*param_1 != 0) {
    pcStack_198 = FUN_18004a130;
    FUN_1808fc838(auStack_e8,0x30,4,FUN_1801c2890);
    uStack_28 = 0;
    cVar1 = FUN_18055f260(param_3,aiStack_180,&DAT_180bfbcc0);
    if (cVar1 != '\0') {
      cVar1 = FUN_180646700(param_3,auStack_178,&UNK_1809fa470);
      if (cVar1 != '\0') {
        cVar1 = FUN_180646700(param_3,auStack_174,&UNK_1809fa470);
        if (cVar1 != '\0') {
          cVar1 = FUN_180646700(param_3,auStack_170,&UNK_1809fa480);
          if (cVar1 != '\0') {
            uStack_184 = (uint)(cStack_188 != '\0');
            cVar1 = FUN_18055f260(param_3,&uStack_184,&UNK_1809fa560);
            bVar2 = uStack_184 != 0;
            if (cVar1 != '\0') {
              cVar1 = FUN_1805aeb50(param_3,auStack_e8);
              if (cVar1 != '\0') {
                iStack_168 = aiStack_180[0];
                uStack_164 = (undefined4)_auStack_178;
                uStack_160 = (undefined4)((ulonglong)_auStack_178 >> 0x20);
                uStack_15c = auStack_170._0_4_;
                uStack_158 = auStack_170._4_4_;
                uStack_150 = 0;
                uStack_148 = 0;
                uStack_140 = 0;
                uStack_138 = 0;
                uStack_154 = CONCAT13(bVar2,1);
                uStack_128 = CONCAT44(uStack_164,aiStack_180[0]);
                uStack_120 = CONCAT44(uStack_15c,uStack_160);
                uStack_118 = uStack_158;
                uStack_114 = uStack_154;
                uStack_110 = 0;
                uStack_10c = 0;
                uStack_108 = 0;
                uStack_104 = 0;
                uStack_100 = 0;
                uStack_fc = 0x3f800000;
                lStack_f8 = (ulonglong)uStack_134 << 0x20;
                if (-1 < aiStack_180[0]) {
                  FUN_180545140(&DAT_180c96110,&uStack_128,auStack_e8,0);
                }
              }
            }
          }
        }
      }
    }
    FUN_1808fc8a8(auStack_e8,0x30,4,FUN_18004a130);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_1b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180536390(longlong *param_1,undefined8 param_2,undefined8 param_3)
void FUN_180536390(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  code *pcStack_108;
  int iStack_f8;
  undefined2 auStack_f4 [2];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [192];
  undefined4 uStack_28;
  ulonglong uStack_18;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_128;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    pcStack_108 = FUN_18004a130;
    FUN_1808fc838(auStack_e8,0x30,4,FUN_1801c2890);
    uStack_28 = 0;
    cVar2 = FUN_18055f260(param_3,&iStack_f8,&UNK_1809fa510);
    if (cVar2 != '\0') {
      cVar2 = FUN_18055f260(param_3,auStack_f4,&DAT_180bfbcd0);
      if (cVar2 != '\0') {
        cVar2 = FUN_1805aeb50(param_3,auStack_e8);
        if (cVar2 != '\0') {
          if (((-1 < iStack_f8) && (iStack_f8 < *(int *)(lVar1 + 0x52ed94))) &&
             (-1 < *(short *)(lVar1 + 0x52dda0 + (longlong)iStack_f8 * 2))) {
            lVar3 = lVar1 + 0x30a0 + (longlong)iStack_f8 * 0xa60;
            lVar1 = *(longlong *)(lVar3 + 0x6d8);
            if ((lVar1 != 0) && (*(char *)(lVar1 + 0x8be) != '\0')) {
              FUN_180508510(lVar3,auStack_f4[0],0,auStack_e8);
            }
          }
        }
      }
    }
    FUN_1808fc8a8(auStack_e8,0x30,4,FUN_18004a130);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_128);
}





// 函数: void FUN_1805364e0(longlong *param_1,undefined8 param_2,undefined8 param_3)
void FUN_1805364e0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  float fStack_18;
  float fStack_14;
  float afStack_10 [2];
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    cVar3 = FUN_180646700(param_3,&fStack_18,&UNK_1809fa360);
    if (((cVar3 == '\0') ||
        (cVar3 = FUN_180646700(param_3,&fStack_14,&UNK_1809fa360), cVar3 == '\0')) ||
       (cVar3 = FUN_180646700(param_3,afStack_10,&UNK_1809fa370), cVar3 == '\0')) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    FUN_1804fe350(&UNK_180a30568,cVar3,&UNK_180a305a0,lVar2 + 0x98d930);
    if (cVar3 != '\0') {
      iVar1 = *(int *)(lVar2 + 0x98d930);
      if (((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x52ed94))) &&
         (-1 < *(short *)(lVar2 + 0x52dda0 + (longlong)iVar1 * 2))) {
        lVar4 = (longlong)iVar1 * 0xa60;
        *(undefined4 *)(lVar4 + 0x3624 + lVar2) = 0xbf19999a;
        *(float *)(lVar4 + 0x3614 + lVar2) = fStack_18 + *(float *)(lVar4 + 0x3614 + lVar2);
        *(float *)(lVar4 + 0x3618 + lVar2) = fStack_14 + *(float *)(lVar4 + 0x3618 + lVar2);
        *(float *)(lVar4 + 0x361c + lVar2) = afStack_10[0] + *(float *)(lVar4 + 0x361c + lVar2);
      }
    }
  }
  return;
}





// 函数: void FUN_180536500(undefined4 param_1)
void FUN_180536500(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong unaff_RBX;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fStackX_20;
  float fStackX_24;
  float in_stack_00000028;
  
  cVar2 = FUN_180646700(param_1,&fStackX_20);
  if (cVar2 != '\0') {
    cVar2 = FUN_180646700(extraout_XMM0_Da,&fStackX_24,&UNK_1809fa360);
    if (cVar2 != '\0') {
      cVar2 = FUN_180646700(extraout_XMM0_Da_00,&stack0x00000028,&UNK_1809fa370);
      if (cVar2 != '\0') {
        cVar2 = '\x01';
        goto LAB_18053654e;
      }
    }
  }
  cVar2 = '\0';
LAB_18053654e:
  FUN_1804fe350(&UNK_180a30568,cVar2,&UNK_180a305a0,unaff_RBX + 0x98d930);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(unaff_RBX + 0x98d930);
    if (((-1 < iVar1) && (iVar1 < *(int *)(unaff_RBX + 0x52ed94))) &&
       (-1 < *(short *)(unaff_RBX + 0x52dda0 + (longlong)iVar1 * 2))) {
      lVar3 = (longlong)iVar1 * 0xa60;
      *(undefined4 *)(lVar3 + 0x3624 + unaff_RBX) = 0xbf19999a;
      *(float *)(lVar3 + 0x3614 + unaff_RBX) = fStackX_20 + *(float *)(lVar3 + 0x3614 + unaff_RBX);
      *(float *)(lVar3 + 0x3618 + unaff_RBX) = fStackX_24 + *(float *)(lVar3 + 0x3618 + unaff_RBX);
      *(float *)(lVar3 + 0x361c + unaff_RBX) =
           in_stack_00000028 + *(float *)(lVar3 + 0x361c + unaff_RBX);
    }
  }
  return;
}





// 函数: void FUN_1805365f1(void)
void FUN_1805365f1(void)

{
  return;
}





// 函数: void FUN_180536600(longlong *param_1,undefined8 param_2,undefined8 param_3)
void FUN_180536600(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  float afStackX_8 [2];
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    cVar3 = FUN_180646700(param_3,afStackX_8,&UNK_1809fa350);
    FUN_1804feec0();
    if (cVar3 != '\0') {
      iVar1 = *(int *)(lVar2 + 0x98d930);
      if ((((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x52ed94))) &&
          (-1 < *(short *)(lVar2 + 0x52dda0 + (longlong)iVar1 * 2))) && (0.01 < afStackX_8[0])) {
        FUN_1805a0af0(lVar2 + 0x30c8 + (longlong)iVar1 * 0xa60,afStackX_8[0],1);
      }
    }
  }
  return;
}





// 函数: void FUN_180536615(void)
void FUN_180536615(void)

{
  int iVar1;
  char cVar2;
  longlong unaff_RDI;
  float in_stack_00000040;
  
  cVar2 = FUN_180646700();
  FUN_1804feec0();
  if (cVar2 != '\0') {
    iVar1 = *(int *)(unaff_RDI + 0x98d930);
    if ((((-1 < iVar1) && (iVar1 < *(int *)(unaff_RDI + 0x52ed94))) &&
        (-1 < *(short *)(unaff_RDI + 0x52dda0 + (longlong)iVar1 * 2))) && (0.01 < in_stack_00000040)
       ) {
      FUN_1805a0af0(unaff_RDI + 0x30c8 + (longlong)iVar1 * 0xa60,in_stack_00000040,1);
    }
  }
  return;
}





// 函数: void FUN_180536658(void)
void FUN_180536658(void)

{
  int iVar1;
  int *unaff_RSI;
  longlong unaff_RDI;
  float in_stack_00000040;
  
  iVar1 = *unaff_RSI;
  if ((((-1 < iVar1) && (iVar1 < *(int *)(unaff_RDI + 0x52ed94))) &&
      (-1 < *(short *)(unaff_RDI + 0x52dda0 + (longlong)iVar1 * 2))) && (0.01 < in_stack_00000040))
  {
    FUN_1805a0af0(unaff_RDI + 0x30c8 + (longlong)iVar1 * 0xa60,in_stack_00000040,1);
  }
  return;
}





// 函数: void FUN_1805366a2(void)
void FUN_1805366a2(void)

{
  return;
}





// 函数: void FUN_1805366b0(longlong *param_1,undefined8 param_2,undefined8 param_3)
void FUN_1805366b0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int aiStackX_8 [2];
  int aiStackX_20 [2];
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  cVar3 = FUN_18055f260(param_3,aiStackX_20,&UNK_1809fa510);
  if (cVar3 != '\0') {
    aiStackX_8[0] = (int)(char)aiStackX_8[0];
    cVar3 = FUN_18055f260(param_3,aiStackX_8,&UNK_1809fa390);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_180536711;
    }
  }
  bVar2 = false;
LAB_180536711:
  FUN_1804ff150();
  if ((((bVar2) && (-1 < aiStackX_20[0])) && (aiStackX_20[0] < *(int *)(lVar1 + 0x52ed94))) &&
     (-1 < *(short *)(lVar1 + 0x52dda0 + (longlong)aiStackX_20[0] * 2))) {
    FUN_180525ac0(lVar1 + 0x30a0 + (longlong)aiStackX_20[0] * 0xa60,(char)aiStackX_8[0]);
  }
  return;
}





// 函数: void FUN_180536790(longlong *param_1,undefined8 param_2,undefined8 param_3)
void FUN_180536790(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  uint auStackX_8 [2];
  int aiStackX_20 [2];
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  cVar2 = FUN_18055f260(param_3,aiStackX_20,&UNK_1809fa510);
  if (cVar2 != '\0') {
    auStackX_8[0] = (uint)((char)auStackX_8[0] != '\0');
    cVar2 = FUN_18055f260(param_3,auStackX_8,&UNK_1809fa560);
    auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,auStackX_8[0] != 0);
    if (cVar2 != '\0') {
      cVar2 = '\x01';
      goto LAB_1805367f6;
    }
  }
  cVar2 = '\0';
LAB_1805367f6:
  FUN_1804fe790(&UNK_180a305f8,cVar2,&UNK_180a30638,aiStackX_20,auStackX_8);
  if ((((cVar2 != '\0') && (-1 < aiStackX_20[0])) && (aiStackX_20[0] < *(int *)(lVar1 + 0x52ed94)))
     && (-1 < *(short *)(lVar1 + 0x52dda0 + (longlong)aiStackX_20[0] * 2))) {
    FUN_180508bd0(lVar1 + 0x30a0 + (longlong)aiStackX_20[0] * 0xa60,(char)auStackX_8[0]);
  }
  return;
}





// 函数: void FUN_180536870(longlong *param_1,undefined8 param_2,undefined8 param_3)
void FUN_180536870(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  uint auStackX_8 [2];
  int aiStackX_20 [2];
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  cVar3 = FUN_18055f260(param_3,aiStackX_20,&UNK_1809fa510);
  if (cVar3 != '\0') {
    auStackX_8[0] = (uint)((char)auStackX_8[0] != '\0');
    cVar3 = FUN_18055f260(param_3,auStackX_8,&UNK_1809fa560);
    auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,auStackX_8[0] != 0);
    if (cVar3 != '\0') {
      cVar3 = '\x01';
      goto LAB_1805368d6;
    }
  }
  cVar3 = '\0';
LAB_1805368d6:
  FUN_1804fe790(&UNK_180a30660,cVar3,&UNK_180a306a8,aiStackX_20,auStackX_8);
  if ((((cVar3 != '\0') && (-1 < aiStackX_20[0])) && (aiStackX_20[0] < *(int *)(lVar2 + 0x74eb8c)))
     && (-1 < *(short *)(lVar2 + 0x74db98 + (longlong)aiStackX_20[0] * 2))) {
    lVar4 = (longlong)aiStackX_20[0] * 0x240;
    uVar1 = *(uint *)(lVar4 + 0x62eda0 + lVar2);
    if ((char)auStackX_8[0] != '\0') {
      *(uint *)(lVar4 + 0x62eda0 + lVar2) = uVar1 | 0x80;
      return;
    }
    *(uint *)(lVar4 + 0x62eda0 + lVar2) = uVar1 & 0xffffff7f;
  }
  return;
}





// 函数: void FUN_180536960(longlong *param_1,undefined8 param_2,undefined8 param_3)
void FUN_180536960(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 auStackX_8 [8];
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    cVar2 = FUN_18055f260(param_3,auStackX_8,&UNK_1809fa550);
    if (cVar2 != '\0') {
      *(undefined4 *)(lVar1 + 0x87b758) = auStackX_8[0];
      *(undefined4 *)(lVar1 + 0x87b754) = auStackX_8[0];
    }
  }
  return;
}





// 函数: void FUN_1805369a0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1805369a0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  plVar4 = (longlong *)(param_1 + 8);
  lVar8 = 5;
  do {
    *(undefined4 *)(plVar4 + 3) = 0xffffffff;
    plVar4[0x18] = plVar4[0x17];
    *(undefined2 *)((longlong)plVar4 + -0xe) = 0;
    plVar4[0x14] = 0;
    *(undefined8 *)((longlong)plVar4 + 0x34) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x3c) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x44) = 0;
    *(undefined4 *)(plVar4 + 6) = 0x3f800000;
    plVar1 = (longlong *)plVar4[4];
    plVar4[4] = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar1 = (longlong *)plVar4[5];
    if (plVar1 != (longlong *)0x0) {
      if (plVar1[0x11] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      if (*plVar1 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar1);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    plVar4[5] = 0;
    plVar4[0x1c] = 0;
    *(undefined2 *)(plVar4 + -2) = 0;
    lVar3 = plVar4[-3];
    if (lVar3 != 0) {
      FUN_18058f420(lVar3);
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
    plVar4[-3] = 0;
    lVar3 = plVar4[-1];
    uVar6 = 0;
    uVar7 = 0;
    if (*plVar4 - lVar3 >> 3 != 0) {
      do {
        lVar2 = *(longlong *)(uVar7 + lVar3);
        if (lVar2 != 0) {
          FUN_18058f420(lVar2,lVar3,param_3,param_4,uVar9);
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar2);
        }
        *(undefined8 *)(uVar7 + plVar4[-1]) = 0;
        uVar5 = (int)uVar6 + 1;
        lVar3 = plVar4[-1];
        uVar6 = (ulonglong)uVar5;
        uVar7 = uVar7 + 8;
      } while ((ulonglong)(longlong)(int)uVar5 < (ulonglong)(*plVar4 - lVar3 >> 3));
    }
    *plVar4 = lVar3;
    *(undefined4 *)(plVar4 + 0x1b) = 0;
    *(undefined1 *)((longlong)plVar4 + 0xb4) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = 0xffffffff;
    *(undefined8 *)((longlong)plVar4 + 0xac) = 0xffffffffffffffff;
    *(undefined4 *)(plVar4 + 0x15) = 0xffffffff;
    *(undefined8 *)((longlong)plVar4 + 0x4c) = 0x3f800000;
    *(undefined8 *)((longlong)plVar4 + 0x54) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x5c) = 0x3f80000000000000;
    *(undefined8 *)((longlong)plVar4 + 100) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x6c) = 0;
    *(undefined4 *)(plVar4 + 0xe) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x74) = 0x3f800000;
    *(undefined4 *)(plVar4 + 0xf) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x7c) = 0;
    *(undefined4 *)(plVar4 + 0x10) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x84) = 0;
    *(undefined4 *)(plVar4 + 0x11) = 0x3f800000;
    plVar4 = plVar4 + 0x3f;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  *(undefined8 *)(param_1 + 0x278) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x27a) = 0;
  *(undefined8 *)(param_1 + 0x27c) = 0;
  *(undefined8 *)(param_1 + 0x27e) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x280) = 0xffffffffffffffff;
  param_1[0x288] = 0xffffffff;
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 0x286) = 0;
  *(undefined8 *)(param_1 + 0x282) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x284) = 0xffffffffffffffff;
  param_1[0x289] = 0xffffff;
  *(undefined2 *)(param_1 + 0x28a) = 0x101;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180536bf0(int *param_1,int param_2,int param_3,int param_4)
void FUN_180536bf0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  param_1[0x282] = param_2;
  param_1[0x283] = param_3;
  param_1[0x284] = param_4;
  if (*(int *)((longlong)*param_1 * 0xa60 + 0x30b8 + *(longlong *)(param_1 + 0x286)) != 0) {
    iVar1 = *(int *)((longlong)*param_1 * 0xa60 + 0x30b8 + *(longlong *)(param_1 + 0x286));
    if ((iVar1 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x30))(iVar1);
    }
    (**(code **)(_DAT_180c8ece0 + 0xb0))
              (iVar1,param_3,param_4,*(code **)(_DAT_180c8ece0 + 0xb0),1,uVar2);
    if ((iVar1 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x18))(iVar1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180536cd0(int *param_1)
void FUN_180536cd0(int *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)*param_1 * 0xa60 + *(longlong *)(param_1 + 0x286);
  FUN_180536e20(param_1,(int)*(char *)((longlong)param_1 + 0xa25),
                (int)*(char *)((longlong)param_1 + 0xa26),(char)param_1[0x28a],
                *(undefined1 *)((longlong)param_1 + 0xa29));
  cVar1 = *(char *)((longlong)param_1 + 0xa26);
  if ((((-1 < cVar1) &&
       (*(char *)((longlong)
                  *(int *)((longlong)param_1[(longlong)cVar1 * 0x7e + 0x3e] * 0xa0 + 100 +
                          *(longlong *)(param_1 + (longlong)cVar1 * 0x7e + 0x36)) * 0x170 + 0x134 +
                 _DAT_180c95ff0) != '\0')) && ((*(uint *)(lVar4 + 0x360c) & 0x800) != 0)) &&
     ((lVar3 = *(longlong *)(lVar4 + 0x3630), lVar3 != 0 && (*(char *)(lVar3 + 0x34bc) != '\0')))) {
    *(undefined1 *)(lVar3 + 0x34bc) = 0;
  }
  *(undefined4 *)((longlong)param_1 + 0xa25) = 0x100ffff;
  *(undefined1 *)((longlong)param_1 + 0xa29) = 1;
  lVar3 = _DAT_180c8ece0;
  iVar2 = *(int *)(lVar4 + 0x30b8);
  if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x30))(iVar2);
  }
  (**(code **)(lVar3 + 0xd0))(iVar2);
  if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))(iVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180536e20(int *param_1,int param_2,int param_3,ulonglong param_4,char param_5)
void FUN_180536e20(int *param_1,int param_2,int param_3,ulonglong param_4,char param_5)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  int aiStackX_10 [2];
  longlong lStackX_20;
  ulonglong in_stack_ffffffffffffffc8;
  ulonglong uVar13;
  
  lVar8 = (longlong)param_3;
  lVar12 = (longlong)param_2;
  uVar13 = in_stack_ffffffffffffffc8 & 0xffffffff00000000;
  iVar2 = param_1[lVar12 + 0x278];
  lVar7 = (longlong)iVar2;
  if (iVar2 != param_3) {
    if (((*(longlong *)(param_1 + 0x286) != 0) && (-1 < iVar2)) && (0 < param_1[lVar7 * 0x7e + 0xe])
       ) {
      if (((*(ulonglong *)
             (*(longlong *)(param_1 + lVar7 * 0x7e + 0x36) + 0x50 +
             (longlong)param_1[lVar7 * 0x7e + 0x3e] * 0xa0) & 0x200) == 0) ||
         (0 < (short)param_1[lVar7 * 0x7e + 4])) {
        uVar3 = *(ulonglong *)
                 (*(longlong *)(param_1 + lVar7 * 0x7e + 0x36) + 0x50 +
                 (longlong)param_1[lVar7 * 0x7e + 0x3e] * 0xa0);
        if ((uVar3 >> 0xc & 1) == 0) {
          if ((uVar3 >> 10 & 1) != 0) {
            if (*(short *)(lVar7 * 0x1f8 + 0x12 + (longlong)param_1) < 1) {
              uVar6 = 0;
            }
            else {
              uVar6 = 0x3f800000;
            }
            if (*(longlong *)(param_1 + lVar7 * 0x7e + 0x40) != 0) {
              *(undefined4 *)(*(longlong *)(param_1 + lVar7 * 0x7e + 0x40) + 0x90) = uVar6;
            }
          }
        }
        else {
          if ((*(longlong *)(param_1 + lVar7 * 0x7e + 2) != 0) &&
             (sVar1 = *(short *)(*(longlong *)(param_1 + lVar7 * 0x7e + 2) + 8), sVar1 != 0)) {
            FUN_1805373f0(param_1,lVar7,sVar1,param_4,uVar13,0xfffffffffffffffe);
          }
          FUN_180537de0(param_1,param_1[lVar12 + 0x278],0);
          if (((*(ulonglong *)
                 ((longlong)param_1[lVar7 * 0x7e + 0x3e] * 0xa0 + 0x50 +
                 *(longlong *)(param_1 + lVar7 * 0x7e + 0x36)) & 0x400) != 0) &&
             (*(longlong *)(param_1 + lVar7 * 0x7e + 0x40) != 0)) {
            *(undefined4 *)(*(longlong *)(param_1 + lVar7 * 0x7e + 0x40) + 0x90) = 0;
          }
        }
        if (*(longlong *)(param_1 + lVar7 * 0x7e + 0x40) != 0) {
          *(undefined1 *)(*(longlong *)(param_1 + lVar7 * 0x7e + 0x40) + 0x125) = 0;
        }
      }
    }
    uVar6 = (undefined4)(uVar13 >> 0x20);
    param_1[lVar12 + 0x278] = param_3;
    param_1[0x285] = -1;
    if (((param_3 == -1) || (piVar11 = param_1 + lVar8 * 0x7e + 2, piVar11 == (int *)0x0)) ||
       (cVar4 = FUN_18058f970(piVar11), cVar4 == '\0')) {
      piVar11 = (int *)0x0;
    }
    *(int **)(param_1 + lVar12 * 2 + 0x27a) = piVar11;
    lVar7 = *(longlong *)(param_1 + 0x286);
    lVar12 = *(longlong *)((longlong)*param_1 * 0xa60 + 0x37d8 + lVar7);
    if (lVar12 != 0) {
      func_0x0001805afb00(lVar12,param_1);
      lVar7 = *(longlong *)(param_1 + 0x286);
    }
    if (((lVar7 != 0) && (-1 < *param_1)) &&
       (aiStackX_10[0] = 0, *(int *)((longlong)*param_1 * 0xa60 + 0x30b8 + lVar7) != 0)) {
      lVar7 = (longlong)*param_1 * 0xa60 + *(longlong *)(param_1 + 0x286);
      iVar2 = *(int *)(lVar7 + 0x30b8);
      aiStackX_10[0] = iVar2;
      if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
        (**(code **)(_DAT_180c8f008 + 0x30))(iVar2);
      }
      (**(code **)(_DAT_180c8ece0 + 0xc0))
                (iVar2,param_2 == 1,param_4 & 0xff,param_5,CONCAT44(uVar6,1));
      uVar6 = 1;
      if (*(int *)(lVar7 + 0x3610) == 1) {
        lVar12 = *(longlong *)(lVar7 + 0x3780);
        *(undefined4 *)(lVar12 + 0x10) = 0;
        *(undefined8 *)(lVar12 + 0x18) = 0;
        *(undefined8 *)(lVar12 + 0x20) = 0;
        *(undefined4 *)(lVar12 + 0x28) = 0;
        *(undefined4 *)(lVar12 + 0x2c) = 0xbf800000;
        *(undefined8 *)(lVar12 + 0x30) = 0;
        *(undefined4 *)(lVar12 + 0x38) = 0xffffffff;
        lVar12 = *(longlong *)(param_1 + 0x27a);
        if (lVar12 != 0) {
          uVar13 = *(ulonglong *)
                    ((longlong)*(int *)(lVar12 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar12 + 0xd0))
          ;
          if (((byte)uVar13 >> 1 & 1) == 0) {
            uVar6 = 1;
            if ((uVar13 & 0x40) != 0) {
              uVar6 = 3;
            }
          }
          else {
            uVar6 = 2;
          }
        }
        *(undefined4 *)(*(longlong *)(lVar7 + 0x3780) + 0x215c) = uVar6;
      }
      if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
        (**(code **)(_DAT_180c8f008 + 0x18))(iVar2);
      }
    }
    if ((*(longlong *)(param_1 + 0x286) != 0) && (-1 < param_3)) {
      cVar4 = FUN_18058f970(param_1 + lVar8 * 0x7e + 2);
      if (cVar4 != '\0') {
        if ((param_5 == '\0') &&
           ((*(uint *)((longlong)param_1[lVar8 * 0x7e + 0x3e] * 0xa0 + 0x50 +
                      *(longlong *)(param_1 + lVar8 * 0x7e + 0x36)) >> 0xc & 1) != 0)) {
          if ((*(longlong *)(param_1 + lVar8 * 0x7e + 2) != 0) &&
             (*(short *)(*(longlong *)(param_1 + lVar8 * 0x7e + 2) + 8) != 0)) {
            FUN_1805373f0(param_1,param_3);
          }
          FUN_180537de0(param_1,param_3,0);
        }
        if ((char)param_4 == '\0') {
          if ((*(uint *)((longlong)param_1[lVar8 * 0x7e + 0x3e] * 0xa0 + 0x50 +
                        *(longlong *)(param_1 + lVar8 * 0x7e + 0x36)) >> 8 & 1) != 0) {
            FUN_180537de0(param_1,param_3,
                          *(undefined2 *)
                           ((longlong)param_1[lVar8 * 0x7e + 0x3e] * 0xa0 + 0x96 +
                           *(longlong *)(param_1 + lVar8 * 0x7e + 0x36)));
          }
        }
        if (*(longlong *)(param_1 + lVar8 * 0x7e + 0x40) != 0) {
          *(undefined1 *)(*(longlong *)(param_1 + lVar8 * 0x7e + 0x40) + 0x125) = 1;
        }
      }
    }
  }
  lVar12 = (longlong)*param_1 * 0xa60 + *(longlong *)(param_1 + 0x286) + 0x30a0;
  lVar7 = 0;
  iVar10 = -1;
  iVar2 = *(int *)(*(longlong *)(lVar12 + 0x8f8) + 0x9e0);
  lVar8 = lVar7;
  iVar9 = iVar10;
  if ((-1 < iVar2) &&
     (lVar8 = (longlong)iVar2 * 0x1f8 + 8 + *(longlong *)(lVar12 + 0x8f8), lVar8 != 0)) {
    iVar9 = *(int *)(lVar8 + 0xf0);
  }
  aiStackX_10[0] = -1;
  lVar5 = lVar7;
  if (lVar8 != 0) {
    lVar5 = FUN_18050e440(lVar12,lVar8,aiStackX_10,&stack0x00000018,&stack0x00000008,&lStackX_20,
                          iVar9);
    lVar7 = lStackX_20;
    iVar10 = aiStackX_10[0];
  }
  *(longlong *)(lVar12 + 0x628) = lVar7;
  *(longlong *)(lVar12 + 0x630) = lVar5;
  *(ulonglong *)(lVar12 + 0x638) = CONCAT44(0xffffffff,iVar10);
  *(ulonglong *)(lVar12 + 0x640) = CONCAT44(iVar9,0xffffffff);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180537230(int *param_1,int param_2,int param_3,undefined2 param_4)
void FUN_180537230(int *param_1,int param_2,int param_3,undefined2 param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lStack_30;
  
  lStack_30 = -2;
  lVar7 = (longlong)param_3;
  uVar5 = 0;
  lVar6 = *(longlong *)(param_1 + 0x286) + 0x30a0 + (longlong)*param_1 * 0xa60;
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x6d8) + 0x8a8) + 0x260) + 0x210);
  uVar4 = *(uint *)((longlong)param_1[lVar7 * 0x7e + 0x3e] * 0xa0 + 0x58 +
                   *(longlong *)(param_1 + lVar7 * 0x7e + 0x36)) & 0x300;
  if (uVar4 == 0x100) {
    uVar2 = *(undefined1 *)(lVar1 + 0x25fc);
  }
  else if (uVar4 == 0x200) {
    uVar2 = *(undefined1 *)(lVar1 + 0x25fe);
  }
  else {
    uVar2 = *(undefined1 *)(lVar1 + 0x25fb);
  }
  FUN_18058f6e0(param_1 + (longlong)param_2 * 0x7e + 2,param_1 + lVar7 * 0x7e + 2,param_4,
                lVar7 * 0x1f8,uVar2);
  if (*(int *)(lVar6 + 0x18) != 0) {
    iVar3 = *(int *)(lVar6 + 0x18);
    if ((iVar3 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x30))(iVar3);
    }
    if (*(longlong *)(param_1 + (longlong)param_2 * 0x7e + 2) != 0) {
      uVar5 = *(undefined2 *)(*(longlong *)(param_1 + (longlong)param_2 * 0x7e + 2) + 8);
    }
    (**(code **)(_DAT_180c8ece0 + 0x90))(iVar3,param_2,param_3,uVar5);
    if ((iVar3 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x18))(iVar3);
    }
  }
  lVar1 = *(longlong *)(lVar6 + 0x6d8);
  if ((*(int *)(lVar6 + 0x570) == 2) && (DAT_180c8ec8a != '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)(lVar1 + 0x848) = uVar2;
  FUN_180543e30(lVar1);
  FUN_180540440(lVar1,lVar6);
  lVar6 = *(longlong *)(lVar6 + 0x6d8);
  lVar7 = *(longlong *)(lVar6 + 0x930);
  lVar1 = lVar7 + 0x2be8;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  lStack_30 = lVar6;
  FUN_1804dd4d0(lVar7 + 0x2b88,&stack0xffffffffffffffe0,&lStack_30);
  iVar3 = _Mtx_unlock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



