#include "TaleWorlds.Native.Split.h"

// 03_rendering_part543.c - 12 个函数

// 函数: void FUN_1805655d2(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1805655d2(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong in_RAX;
  uint64_t *puVar6;
  int32_t uVar7;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  longlong lVar8;
  uint64_t unaff_RDI;
  longlong lVar9;
  longlong *plVar10;
  uint64_t *unaff_R12;
  longlong unaff_R13;
  uint64_t unaff_R14;
  longlong lVar11;
  longlong unaff_R15;
  float fVar12;
  int32_t unaff_XMM6_Da;
  float fVar13;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R14;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x70) = 0;
  *(int32_t *)(in_RAX + -0x6c) = 0x7f7fffff;
  lVar11 = unaff_R15 * 0xc;
  do {
    lVar8 = 0;
    fVar13 = 3.4028235e+38;
    cVar1 = *(char *)unaff_R12[3];
    uVar2 = *(uint *)unaff_R12[2];
    lVar3 = *(longlong *)*unaff_R12;
    lVar9 = lVar8;
    if (*(longlong *)(lVar3 + 0x2ee8) - *(longlong *)(lVar3 + 12000) >> 3 != 0) {
      puVar6 = (uint64_t *)
               func_0x000180388c90(lVar3 + 0x28c8,&stack0x00000020,param_3,param_4,
                                   *(int32_t *)(*(longlong *)unaff_R12[1] + unaff_R15 * 8));
      plVar4 = (longlong *)puVar6[1];
      for (plVar10 = (longlong *)*puVar6; lVar9 = lVar8, plVar10 != plVar4; plVar10 = plVar10 + 1) {
        lVar9 = *plVar10;
        if (((((*(uint *)(lVar9 + 0x134) & uVar2 & 0xfffffffe) == (uVar2 & 0xfffffffe)) ||
             ((*(uint *)(lVar9 + 0x134) & 1) != 0)) && ((*(byte *)(lVar9 + 0x139) & 1) != 0)) &&
           (((*(byte *)(lVar9 + 0x139) & 2) == 0 &&
            (cVar5 = FUN_18038d0a0(lVar9,&stack0x00000020), cVar5 != '\0')))) {
          if (cVar1 != '\0') break;
          fVar12 = (float)func_0x00018038d2f0(lVar9,&stack0x00000020);
          fVar12 = ABS(fVar12);
          if ((fVar12 < 100.0) && (fVar12 < fVar13)) {
            lVar8 = lVar9;
            fVar13 = fVar12;
          }
        }
      }
    }
    if (lVar9 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(int32_t *)(lVar9 + 300);
    }
    *(int32_t *)(lVar11 + *(longlong *)unaff_R12[4]) = uVar7;
    if (lVar9 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(int32_t *)(lVar9 + 0x130);
    }
    *(int32_t *)(*(longlong *)unaff_R12[4] + 4 + lVar11) = uVar7;
    if (lVar9 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(int32_t *)(lVar9 + 0x128);
    }
    unaff_R15 = unaff_R15 + 1;
    *(int32_t *)(*(longlong *)unaff_R12[4] + 8 + lVar11) = uVar7;
    lVar11 = lVar11 + 0xc;
    if (unaff_R13 <= unaff_R15) {
      return;
    }
  } while( true );
}





// 函数: void FUN_1805657c1(void)
void FUN_1805657c1(void)

{
  return;
}





// 函数: void FUN_1805657d0(uint64_t *param_1,int param_2,int param_3)
void FUN_1805657d0(uint64_t *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  uint64_t *puVar6;
  int32_t uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  
  lVar12 = (longlong)param_2;
  if (lVar12 < param_3) {
    uStack_70 = 0;
    uStack_6c = 0x7f7fffff;
    lVar11 = lVar12 * 0xc;
    do {
      lVar8 = 0;
      fVar14 = 3.4028235e+38;
      cVar1 = *(char *)param_1[3];
      uStack_78 = *(int32_t *)(*(longlong *)param_1[1] + lVar12 * 8);
      uVar2 = *(uint *)param_1[2];
      uStack_74 = *(int32_t *)(*(longlong *)param_1[1] + 4 + lVar12 * 8);
      lVar3 = *(longlong *)*param_1;
      lVar9 = lVar8;
      if (*(longlong *)(lVar3 + 0x2ee8) - *(longlong *)(lVar3 + 12000) >> 3 != 0) {
        puVar6 = (uint64_t *)func_0x000180388c90(lVar3 + 0x28c8,&uStack_78);
        plVar4 = (longlong *)puVar6[1];
        for (plVar10 = (longlong *)*puVar6; lVar9 = lVar8, plVar10 != plVar4; plVar10 = plVar10 + 1)
        {
          lVar9 = *plVar10;
          if ((((*(uint *)(lVar9 + 0x134) & uVar2 & 0xfffffffe) == (uVar2 & 0xfffffffe)) ||
              ((*(uint *)(lVar9 + 0x134) & 1) != 0)) &&
             (cVar5 = FUN_18038d0a0(lVar9,&uStack_78), cVar5 != '\0')) {
            if (cVar1 != '\0') break;
            fVar13 = (float)func_0x00018038d2f0(lVar9,&uStack_78);
            fVar13 = ABS(fVar13);
            if ((fVar13 < 100.0) && (fVar13 < fVar14)) {
              lVar8 = lVar9;
              fVar14 = fVar13;
            }
          }
        }
      }
      if (lVar9 == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(int32_t *)(lVar9 + 300);
      }
      *(int32_t *)(lVar11 + *(longlong *)param_1[4]) = uVar7;
      if (lVar9 == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(int32_t *)(lVar9 + 0x130);
      }
      *(int32_t *)(*(longlong *)param_1[4] + 4 + lVar11) = uVar7;
      if (lVar9 == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(int32_t *)(lVar9 + 0x128);
      }
      lVar12 = lVar12 + 1;
      *(int32_t *)(*(longlong *)param_1[4] + 8 + lVar11) = uVar7;
      lVar11 = lVar11 + 0xc;
    } while (lVar12 < param_3);
  }
  return;
}





// 函数: void FUN_1805657f2(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1805657f2(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong in_RAX;
  uint64_t *puVar6;
  int32_t uVar7;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  longlong lVar8;
  uint64_t unaff_RDI;
  longlong lVar9;
  longlong *plVar10;
  uint64_t *unaff_R12;
  longlong unaff_R13;
  uint64_t unaff_R14;
  longlong lVar11;
  longlong unaff_R15;
  float fVar12;
  int32_t unaff_XMM6_Da;
  float fVar13;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R14;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x70) = 0;
  *(int32_t *)(in_RAX + -0x6c) = 0x7f7fffff;
  lVar11 = unaff_R15 * 0xc;
  do {
    lVar8 = 0;
    fVar13 = 3.4028235e+38;
    cVar1 = *(char *)unaff_R12[3];
    uVar2 = *(uint *)unaff_R12[2];
    lVar3 = *(longlong *)*unaff_R12;
    lVar9 = lVar8;
    if (*(longlong *)(lVar3 + 0x2ee8) - *(longlong *)(lVar3 + 12000) >> 3 != 0) {
      puVar6 = (uint64_t *)
               func_0x000180388c90(lVar3 + 0x28c8,&stack0x00000020,param_3,param_4,
                                   *(int32_t *)(*(longlong *)unaff_R12[1] + unaff_R15 * 8));
      plVar4 = (longlong *)puVar6[1];
      for (plVar10 = (longlong *)*puVar6; lVar9 = lVar8, plVar10 != plVar4; plVar10 = plVar10 + 1) {
        lVar9 = *plVar10;
        if ((((*(uint *)(lVar9 + 0x134) & uVar2 & 0xfffffffe) == (uVar2 & 0xfffffffe)) ||
            ((*(uint *)(lVar9 + 0x134) & 1) != 0)) &&
           (cVar5 = FUN_18038d0a0(lVar9,&stack0x00000020), cVar5 != '\0')) {
          if (cVar1 != '\0') break;
          fVar12 = (float)func_0x00018038d2f0(lVar9,&stack0x00000020);
          fVar12 = ABS(fVar12);
          if ((fVar12 < 100.0) && (fVar12 < fVar13)) {
            lVar8 = lVar9;
            fVar13 = fVar12;
          }
        }
      }
    }
    if (lVar9 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(int32_t *)(lVar9 + 300);
    }
    *(int32_t *)(lVar11 + *(longlong *)unaff_R12[4]) = uVar7;
    if (lVar9 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(int32_t *)(lVar9 + 0x130);
    }
    *(int32_t *)(*(longlong *)unaff_R12[4] + 4 + lVar11) = uVar7;
    if (lVar9 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(int32_t *)(lVar9 + 0x128);
    }
    unaff_R15 = unaff_R15 + 1;
    *(int32_t *)(*(longlong *)unaff_R12[4] + 8 + lVar11) = uVar7;
    lVar11 = lVar11 + 0xc;
    if (unaff_R13 <= unaff_R15) {
      return;
    }
  } while( true );
}





// 函数: void FUN_1805659d1(void)
void FUN_1805659d1(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805659e0(longlong param_1,uint64_t param_2,longlong param_3,int param_4)
void FUN_1805659e0(longlong param_1,uint64_t param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plStackX_8;
  
  if (param_1 != 0) {
    *(int8_t *)(param_1 + 0x60c60) = 0;
    FUN_180199500(param_1,_DAT_180bf3ff8,1);
    FUN_1800b5ac0(_DAT_180c8ed30 % 1000000000,&plStackX_8,
                  (float)(_DAT_180c8ed30 % 1000000000) * 0.00012);
    if (0 < param_4) {
      lVar5 = 0;
      do {
        plVar4 = plStackX_8;
        fVar3 = _DAT_180bf3ff8;
        lVar1 = *(longlong *)(param_3 + lVar5 * 8);
        *(float *)(lVar1 + 0x2a8) =
             _DAT_180bf3ff8 * *(float *)(lVar1 + 0x2b0) + *(float *)(lVar1 + 0x2a8);
        *(float *)(lVar1 + 0x2ac) = fVar3 * *(float *)(lVar1 + 0x2b4) + *(float *)(lVar1 + 0x2ac);
        lVar1 = *(longlong *)(lVar1 + 0x1b8);
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
        }
        plVar2 = *(longlong **)(lVar1 + 200);
        *(longlong **)(lVar1 + 200) = plVar4;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x38))();
        }
        FUN_18022ce40(lVar1);
        lVar5 = lVar5 + 1;
      } while (lVar5 < param_4);
    }
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180565b70(longlong param_1,int param_2)
void FUN_180565b70(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  uint64_t *puVar5;
  longlong *plStackX_18;
  
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(_DAT_180c95ef8 + 0x10 + (longlong)param_2 * 0x14), iVar1 != _DAT_180c95f20))
  {
    if ((_DAT_180c95f18 != (longlong *)0x0) &&
       ((cVar4 = (**(code **)(*_DAT_180c95f18 + 0xd8))(), cVar4 != '\0' &&
        (cVar4 = (**(code **)(*_DAT_180c95f18 + 0x80))(), cVar4 != '\0')))) {
      (**(code **)(*_DAT_180c95f18 + 0x68))();
    }
    puVar5 = (uint64_t *)FUN_180157b70();
    plVar2 = (longlong *)*puVar5;
    *puVar5 = 0;
    if (_DAT_180c95f18 != (longlong *)0x0) {
      lVar3 = *_DAT_180c95f18;
      _DAT_180c95f18 = plVar2;
      (**(code **)(lVar3 + 0x38))();
      plVar2 = _DAT_180c95f18;
    }
    _DAT_180c95f18 = plVar2;
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
    (**(code **)(*_DAT_180c95f18 + 0x60))();
    _DAT_180c95f20 = iVar1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180565c60(int param_1,byte param_2)
void FUN_180565c60(int param_1,byte param_2)

{
  int aiStack_28 [10];
  
  aiStack_28[2] = 0;
  aiStack_28[3] = 0;
  if (param_1 == 0) {
    aiStack_28[1] = 0xe0;
  }
  else if (param_1 == 1) {
    aiStack_28[1] = 0xe1;
  }
  else if (param_1 == 2) {
    aiStack_28[1] = 0xe2;
  }
  aiStack_28[0] = (param_2 ^ 1) + 1;
  FUN_180567600(_DAT_180c86950 + 0x10,aiStack_28);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180565cc0(int param_1,int param_2)
void FUN_180565cc0(int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t *puVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  longlong *plStackX_20;
  ulonglong uStack_28;
  longlong *plStack_20;
  uint64_t uStack_18;
  
  plStack_20 = (longlong *)0x0;
  uStack_28 = uStack_28 & 0xffffffff00000000;
  uStack_18 = (longlong *)
              CONCAT44((int)((float)param_2 -
                            *(float *)(_DAT_180c86950 + 0x17f0) *
                            *(float *)(_DAT_180c86950 + 0x17e4)),
                       (int)((float)param_1 -
                            *(float *)(_DAT_180c86950 + 0x17ec) *
                            *(float *)(_DAT_180c86950 + 0x17e0)));
  FUN_180567600(_DAT_180c86950 + 0x10,&uStack_28);
  uStack_28 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(_DAT_180c86870 + 8);
  uVar7 = (ulonglong)(*(uint *)(lVar1 + 0x13c) & 1);
  lVar2 = *(longlong *)(_DAT_180c86870 + 8);
  uVar8 = (ulonglong)(*(uint *)(lVar2 + 0x13c) & 1);
  uVar5 = param_1 - (*(int *)(lVar1 + 0xc0 + uVar7 * 0x48) - *(int *)(lVar2 + 0xec + uVar8 * 0x48));
  uVar10 = (int)uVar5 >> 0x1f;
  uVar6 = param_2 - (*(int *)(lVar1 + 0xc4 + uVar7 * 0x48) - *(int *)(lVar2 + 0xf0 + uVar8 * 0x48));
  uVar11 = (int)uVar6 >> 0x1f;
  if ((0 < (int)((uVar5 ^ uVar10) - uVar10)) || (0 < (int)((uVar6 ^ uVar11) - uVar11))) {
    lVar2 = *(longlong *)(_DAT_180c86870 + 8);
    plVar9 = (longlong *)
             FUN_18062b1e0(_DAT_180c8ed18,0x48,8,CONCAT71((int7)((ulonglong)lVar1 >> 8),3));
    *plVar9 = (longlong)&UNK_180a21690;
    *plVar9 = (longlong)&UNK_180a21720;
    *(int32_t *)(plVar9 + 1) = 0;
    *plVar9 = (longlong)&UNK_18098bdc8;
    LOCK();
    *(int8_t *)(plVar9 + 2) = 0;
    UNLOCK();
    plVar9[3] = -1;
    *plVar9 = (longlong)&UNK_180a08c60;
    *(int32_t *)(plVar9 + 5) = 5;
    plVar9[4] = lVar2;
    plStack_20 = plVar9;
    uStack_18 = plVar9;
    (**(code **)(*plVar9 + 0x28))(plVar9);
    plVar9[6] = CONCAT44(param_2,param_1);
    puVar3 = *(uint64_t **)(lVar2 + 0x140);
    pcVar4 = *(code **)*puVar3;
    plStackX_20 = plVar9;
    (**(code **)(*plVar9 + 0x28))(plVar9);
    (*pcVar4)(puVar3,&plStackX_20);
    (**(code **)(*plVar9 + 0x38))(plVar9);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180565d50(longlong param_1,longlong *param_2,longlong param_3)
void FUN_180565d50(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  int8_t *puVar4;
  int8_t *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int8_t *puVar9;
  int8_t auStack_158 [32];
  uint64_t **ppuStack_138;
  longlong *plStack_128;
  longlong *plStack_120;
  longlong **pplStack_118;
  longlong *plStack_110;
  longlong *plStack_108;
  longlong **pplStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  uint64_t uStack_e8;
  longlong alStack_d8 [2];
  int16_t uStack_c8;
  int8_t uStack_c6;
  uint64_t uStack_c4;
  uint64_t uStack_bc;
  uint64_t uStack_b4;
  uint64_t uStack_ac;
  uint64_t uStack_a4;
  uint64_t uStack_9c;
  uint64_t uStack_94;
  uint64_t uStack_8c;
  uint64_t uStack_84;
  int32_t uStack_7c;
  int16_t uStack_78;
  int32_t uStack_76;
  int8_t uStack_72;
  void *puStack_68;
  int8_t *puStack_60;
  int32_t uStack_58;
  int8_t auStack_50 [32];
  ulonglong uStack_30;
  
  if (param_1 == 0) {
    return;
  }
  uStack_e8 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  lVar8 = 0;
  alStack_d8[0] = 0;
  alStack_d8[1] = 0;
  uStack_c8 = 0;
  uStack_c6 = 3;
  uStack_76 = 0;
  uStack_84 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_72 = 0;
  uStack_c4 = 0;
  uStack_bc = 0;
  uStack_b4 = 0;
  uStack_ac = 0;
  uStack_a4 = 0;
  uStack_9c = 0;
  uStack_94 = 0;
  uStack_8c = 0;
  plStack_128 = (longlong *)0x0;
  puStack_68 = &UNK_18098bc80;
  puStack_60 = auStack_50;
  uStack_58 = 0;
  auStack_50[0] = 0;
  if (param_3 != 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_3 + lVar2) != '\0');
    uStack_58 = (int32_t)lVar2;
    strcpy_s(auStack_50,0x20);
  }
  plVar3 = (longlong *)FUN_1800b08e0(_DAT_180c86930,&plStack_120,&puStack_68,1);
  plVar3 = (longlong *)*plVar3;
  if (plVar3 != (longlong *)0x0) {
    plStack_110 = plVar3;
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plStack_110 = plStack_128;
  if (plStack_128 != (longlong *)0x0) {
    lVar2 = *plStack_128;
    plStack_128 = plVar3;
    (**(code **)(lVar2 + 0x38))();
    plVar3 = plStack_128;
  }
  plStack_128 = plVar3;
  if (plStack_120 != (longlong *)0x0) {
    (**(code **)(*plStack_120 + 0x38))();
  }
  puStack_68 = &UNK_18098bcb0;
  plStack_120 = alStack_d8;
  pplStack_118 = &plStack_128;
  pcStack_f8 = (code *)&UNK_180567820;
  pcStack_f0 = FUN_180567730;
  ppuStack_138 = &plStack_108;
  plStack_108 = plStack_120;
  pplStack_100 = pplStack_118;
  cVar1 = (**(code **)(**(longlong **)(plStack_128[0x15] + 0x88) + 0x60))
                    (*(longlong **)(plStack_128[0x15] + 0x88),&DAT_180a01050,plStack_128[0x15] + 0xc
                     ,0);
  if (pcStack_f8 != (code *)0x0) {
    (*pcStack_f8)(&plStack_108,0,0);
  }
  if (cVar1 != '\0') {
    if (uStack_7c._2_2_ != 0) {
      puVar9 = (int8_t *)
               (alStack_d8[0] + (longlong)(int)((uStack_7c._2_2_ - 1) * (uStack_7c & 0xffff)) * 4);
      uVar6 = (ulonglong)uStack_7c._2_2_;
      do {
        if ((uStack_7c & 0xffff) != 0) {
          puVar5 = (int8_t *)(*param_2 + lVar8);
          puVar4 = puVar9;
          uVar7 = (ulonglong)(ushort)uStack_7c;
          do {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 4;
            puVar5 = puVar5 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar8 = lVar8 + (int)(uStack_7c & 0xffff);
        puVar9 = puVar9 + (longlong)(int)-(uStack_7c & 0xffff) * 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  if (plStack_128 != (longlong *)0x0) {
    (**(code **)(*plStack_128 + 0x38))();
  }
  if (uStack_c8._1_1_ == '\0') {
    if (((char)uStack_c8 == '\0') && (alStack_d8[0] != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    alStack_d8[0] = 0;
    uStack_c8 = 0;
    alStack_d8[1] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180566010(longlong param_1,uint *param_2,uint *param_3)
void FUN_180566010(longlong param_1,uint *param_2,uint *param_3)

{
  longlong *plVar1;
  int8_t auStack_138 [32];
  longlong *plStack_118;
  longlong *plStack_110;
  longlong *aplStack_108 [2];
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  ushort uStack_e8;
  int8_t uStack_e6;
  uint64_t uStack_e4;
  uint64_t uStack_dc;
  uint64_t uStack_d4;
  uint64_t uStack_cc;
  uint64_t uStack_c4;
  uint64_t uStack_bc;
  uint64_t uStack_b4;
  uint64_t uStack_ac;
  uint64_t uStack_a4;
  int32_t uStack_9c;
  int16_t uStack_98;
  int32_t uStack_96;
  int8_t uStack_92;
  uint64_t uStack_88;
  void *puStack_80;
  int8_t *puStack_78;
  int32_t uStack_70;
  int8_t auStack_68 [32];
  ulonglong uStack_48;
  
  if (param_1 == 0) {
    return;
  }
  uStack_88 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e6 = 3;
  uStack_96 = 0;
  uStack_a4 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_92 = 0;
  uStack_e4 = 0;
  uStack_dc = 0;
  uStack_d4 = 0;
  uStack_cc = 0;
  uStack_c4 = 0;
  uStack_bc = 0;
  uStack_b4 = 0;
  uStack_ac = 0;
  plStack_110 = (longlong *)0x0;
  puStack_80 = &UNK_18098bc80;
  puStack_78 = auStack_68;
  auStack_68[0] = 0;
  uStack_70 = 0x1a;
  strcpy_s(auStack_68,0x20,&UNK_180a362c0);
  plVar1 = (longlong *)FUN_1800b08e0(_DAT_180c86930,aplStack_108,&puStack_80,1);
  plVar1 = (longlong *)*plVar1;
  if (plVar1 != (longlong *)0x0) {
    plStack_118 = plVar1;
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plStack_118 = (longlong *)0x0;
  plStack_110 = plVar1;
  if (aplStack_108[0] != (longlong *)0x0) {
    (**(code **)(*aplStack_108[0] + 0x38))();
  }
  puStack_80 = &UNK_18098bcb0;
  *param_2 = (uint)*(ushort *)((longlong)plVar1 + 0x32c);
  *param_3 = (uint)*(ushort *)((longlong)plVar1 + 0x32e);
  (**(code **)(*plVar1 + 0x38))(plVar1);
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = uStack_e8 & 0xff00;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805661a0(longlong param_1,longlong *param_2)
void FUN_1805661a0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  uint64_t uVar3;
  int8_t *puVar4;
  int8_t *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int8_t *puVar9;
  int8_t auStack_118 [32];
  longlong *plStack_f8;
  longlong *plStack_f0;
  longlong *plStack_e8;
  uint64_t uStack_e0;
  longlong lStack_d8;
  uint64_t uStack_d0;
  int16_t uStack_c8;
  int8_t uStack_c6;
  uint64_t uStack_c4;
  uint64_t uStack_bc;
  uint64_t uStack_b4;
  uint64_t uStack_ac;
  uint64_t uStack_a4;
  uint64_t uStack_9c;
  uint64_t uStack_94;
  uint64_t uStack_8c;
  uint64_t uStack_84;
  int32_t uStack_7c;
  int16_t uStack_78;
  int32_t uStack_76;
  char cStack_72;
  void *puStack_68;
  int8_t *puStack_60;
  int32_t uStack_58;
  int8_t auStack_50 [32];
  ulonglong uStack_30;
  
  if (param_1 == 0) {
    return;
  }
  uStack_e0 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  lVar8 = 0;
  lStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c6 = 3;
  uStack_76 = 0;
  uStack_84 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  cStack_72 = '\0';
  uStack_c4 = 0;
  uStack_bc = 0;
  uStack_b4 = 0;
  uStack_ac = 0;
  uStack_a4 = 0;
  uStack_9c = 0;
  uStack_94 = 0;
  uStack_8c = 0;
  plStack_f0 = (longlong *)0x0;
  puStack_68 = &UNK_18098bc80;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 0x1a;
  strcpy_s(auStack_50,0x20,&UNK_180a362c0);
  plVar2 = (longlong *)FUN_1800b08e0(_DAT_180c86930,&plStack_e8,&puStack_68,1);
  plVar2 = (longlong *)*plVar2;
  if (plVar2 != (longlong *)0x0) {
    plStack_f8 = plVar2;
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plStack_f8 = (longlong *)0x0;
  plStack_f0 = plVar2;
  if (plStack_e8 != (longlong *)0x0) {
    (**(code **)(*plStack_e8 + 0x38))();
  }
  puStack_68 = &UNK_18098bcb0;
  cVar1 = FUN_18023cbe0(plVar2,&lStack_d8);
  if (cVar1 != '\0') {
    if ((cStack_72 == '\0') && ((char)uStack_c8 != '\0')) {
      uVar3 = FUN_18062b420(_DAT_180c8ed18,uStack_d0,3);
                    // WARNING: Subroutine does not return
      memcpy(uVar3,lStack_d8,uStack_d0);
    }
    if (uStack_7c._2_2_ != 0) {
      puVar9 = (int8_t *)
               (lStack_d8 + (longlong)(int)((uStack_7c._2_2_ - 1) * (uStack_7c & 0xffff)) * 4);
      uVar6 = (ulonglong)uStack_7c._2_2_;
      do {
        if ((uStack_7c & 0xffff) != 0) {
          puVar5 = (int8_t *)(*param_2 + lVar8);
          puVar4 = puVar9;
          uVar7 = (ulonglong)(ushort)uStack_7c;
          do {
            *puVar5 = *puVar4;
            puVar5[1] = puVar4[1];
            puVar4 = puVar4 + 4;
            puVar5 = puVar5 + 2;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar8 = lVar8 + (longlong)(int)(uStack_7c & 0xffff) * 2;
        puVar9 = puVar9 + (longlong)(int)-(uStack_7c & 0xffff) * 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  if (uStack_c8._1_1_ == '\0') {
    if (((char)uStack_c8 == '\0') && (lStack_d8 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_d8 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



