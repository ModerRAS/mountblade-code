#include "TaleWorlds.Native.Split.h"

// 03_rendering_part068.c - 6 个函数

// 函数: void FUN_180306190(longlong param_1,longlong param_2,longlong param_3)
void FUN_180306190(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  float fVar6;
  longlong alStackX_10 [3];
  undefined1 auStack_178 [32];
  undefined8 uStack_158;
  longlong **pplStack_150;
  undefined1 auStack_148 [8];
  longlong lStack_140;
  longlong lStack_138;
  float fStack_130;
  float fStack_12c;
  longlong *plStack_128;
  undefined1 *puStack_120;
  float *pfStack_118;
  float *pfStack_110;
  longlong *plStack_108;
  longlong lStack_100;
  longlong *plStack_f8;
  longlong *aplStack_f0 [2];
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  longlong **pplStack_c8;
  int aiStack_c0 [6];
  ulonglong uStack_a8;
  
  uStack_d0 = 0xfffffffffffffffe;
  uStack_a8 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  LOCK();
  *(undefined4 *)(param_1 + 0x78) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x980) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x1288) = 0;
  UNLOCK();
  alStackX_10[0] = param_2;
  lStack_140 = param_3;
  if (((*(byte *)(param_3 + 0x1bd8) & 0x20) != 0) && (4 < *(int *)(param_2 + 0x27c0))) {
    iVar2 = _Mtx_trylock(param_1 + 0x1bb0);
    if (iVar2 == 0) {
      if (*(longlong *)(alStackX_10[0] + 0x60b80) != 0) {
        *(undefined8 *)(lStack_140 + 0x124c8) =
             *(undefined8 *)(*(longlong *)(alStackX_10[0] + 0x60b80) + 0x20);
      }
      plVar5 = *(longlong **)(param_1 + 0x1b90);
      if (plVar5 != *(longlong **)(param_1 + 0x1b98)) {
        do {
          lStack_138 = *plVar5;
          if (*(longlong *)(lStack_138 + 0x90) - *(longlong *)(lStack_138 + 0x88) >> 3 != 0) {
            lVar1 = *(longlong *)(_DAT_180c86870 + 0x3d8);
            if ((lVar1 == 0) ||
               ((*(int *)(lVar1 + 0x110) != 2 && ((lVar1 == 0 || (*(int *)(lVar1 + 0x110) != 3))))))
            {
              auStack_148[0] = 0;
            }
            else {
              auStack_148[0] = 1;
            }
            LOCK();
            *(undefined4 *)(lStack_138 + 0xa8) = 0;
            UNLOCK();
            lVar1 = *(longlong *)(_DAT_180c86870 + 0x3d8);
            if ((lVar1 == 0) || (*(int *)(lVar1 + 0x110) != 1)) {
              aiStack_c0[0] = 1;
              aiStack_c0[1] = 10;
              aiStack_c0[2] = 0x28;
              aiStack_c0[3] = 0x78;
              aiStack_c0[4] = 0xf0;
              iVar2 = *(int *)(_DAT_180c86920 + 0x2a0);
              if (iVar2 < 0) {
                iVar2 = 0;
              }
              else if (4 < iVar2) {
                iVar2 = 4;
              }
              fStack_12c = (float)aiStack_c0[iVar2] * 0.004166667;
            }
            else {
              fStack_12c = 9999.0;
            }
            if ((*(char *)(lStack_138 + 0x7c) != '\0') &&
               ((lVar1 == 0 || (*(int *)(lVar1 + 0x110) != 1)))) {
              uVar4 = *(longlong *)(lStack_138 + 0x90) - *(longlong *)(lStack_138 + 0x88) >> 3;
              uVar3 = 1;
              if (1 < uVar4) {
                uVar3 = uVar4;
              }
              fVar6 = (float)(longlong)uVar3;
              if ((longlong)uVar3 < 0) {
                fVar6 = fVar6 + 1.8446744e+19;
              }
              fVar6 = 256.0 / fVar6;
              if (0.0 <= fVar6) {
                if (1.0 <= fVar6) {
                  fVar6 = 1.0;
                }
              }
              else {
                fVar6 = 0.0;
              }
              fStack_12c = fVar6 * fStack_12c;
              if (1.0 <= fStack_12c) {
                fStack_12c = 1.0;
              }
            }
            fStack_130 = fStack_12c * *(float *)(lStack_138 + 0x70);
            fStack_12c = fStack_12c * *(float *)(lStack_138 + 0x74);
            pplStack_c8 = aplStack_f0;
            plStack_128 = &lStack_138;
            puStack_120 = auStack_148;
            pfStack_118 = &fStack_130;
            pfStack_110 = &fStack_12c;
            plStack_108 = alStackX_10;
            plStack_f8 = &lStack_140;
            pcStack_e0 = FUN_1803089a0;
            puStack_d8 = &UNK_180308990;
            lStack_100 = param_1;
            aplStack_f0[0] = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x38,8,DAT_180bf65bc);
            *aplStack_f0[0] = (longlong)plStack_128;
            aplStack_f0[0][1] = (longlong)puStack_120;
            aplStack_f0[0][2] = (longlong)pfStack_118;
            aplStack_f0[0][3] = (longlong)pfStack_110;
            aplStack_f0[0][4] = (longlong)plStack_108;
            aplStack_f0[0][5] = lStack_100;
            aplStack_f0[0][6] = (longlong)plStack_f8;
            pplStack_150 = aplStack_f0;
            uStack_158 = 0xfffffffffffffffe;
            FUN_18015b810();
            FUN_1803a64f0(lStack_138);
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != *(longlong **)(param_1 + 0x1b98));
      }
      iVar2 = _Mtx_unlock(param_1 + 0x1bb0);
      if (iVar2 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar2);
      }
      if (*(char *)(_DAT_180c86870 + 0xf9) == '\0') {
        *(undefined4 *)(lStack_140 + 0x124b8) = 0;
      }
      else {
        FUN_180307ca0(param_1,lStack_140);
        FUN_180080810(lStack_140 + 0x9740,param_1 + 0x68);
        FUN_180080810(lStack_140 + 0x9748,param_1 + 0x70);
      }
    }
    else if (iVar2 != 3) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_a8 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803065c0(undefined8 *param_1,int param_2,int param_3)
void FUN_1803065c0(undefined8 *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  int iStackX_10;
  
  iStackX_10 = param_2;
  if (param_2 < param_3) {
    do {
      lVar6 = *(longlong *)*param_1;
      plVar7 = *(longlong **)(*(longlong *)(lVar6 + 0x88) + (longlong)iStackX_10 * 8);
      if ((((char)plVar7[7] == '\0') && (*(char *)param_1[1] == '\0')) &&
         ((*(char *)((longlong)plVar7 + 0x39) != '\0' ||
          ((*(float *)param_1[2] < *(float *)(plVar7 + 6) ||
           (*(float *)param_1[3] < *(float *)((longlong)plVar7 + 0x34))))))) {
        if (*(char *)(lVar6 + 0x7d) != '\0') {
          fVar4 = *(float *)(plVar7 + 0x52);
          fVar3 = *(float *)(&DAT_180bf3ff8 +
                            (longlong)*(int *)(*(longlong *)param_1[4] + 0x5b98) * 4);
          (**(code **)(*plVar7 + 0x108))(plVar7);
          if (0.08 <= fVar4 + fVar3 * -0.1) goto LAB_1803066f9;
          lVar6 = *(longlong *)*param_1;
        }
        FUN_180308500(lVar6 + 0xa8);
        *(undefined1 *)((longlong)plVar7 + 0x39) = 1;
      }
LAB_1803066f9:
      if ((*(char *)((longlong)plVar7 + 0x39) == '\0') && (cVar8 = FUN_1803068a0(), cVar8 != '\0'))
      {
        cVar8 = '\x01';
      }
      else {
        cVar8 = '\0';
      }
      *(char *)(plVar7 + 9) = cVar8;
      fVar3 = *(float *)(&DAT_180bf3ff8 + (longlong)*(int *)(*(longlong *)param_1[4] + 0x5b98) * 4);
      fVar4 = *(float *)(plVar7 + 6);
      *(float *)(plVar7 + 6) = fVar3 + fVar4;
      if (cVar8 == '\0') {
        *(float *)((longlong)plVar7 + 0x34) =
             *(float *)(&DAT_180bf3ff8 + (longlong)*(int *)(*(longlong *)param_1[4] + 0x5b98) * 4) +
             *(float *)((longlong)plVar7 + 0x34);
      }
      else {
        uVar10 = plVar7[0x2b];
        *(undefined4 *)((longlong)plVar7 + 0x34) = 0;
        if (uVar10 != 0) {
          uVar10 = (ulonglong)(byte)(*(char *)(uVar10 + 0x2c8) + 8);
        }
        *(uint *)((longlong)plVar7 + 0x4c) =
             ((int)(fVar3 + fVar4) & 0xfff0U | ((uint)uVar10 & 0xff) << 0x14) << 8 |
             (int)plVar7 >> 4 & 0xfffU;
        lVar6 = param_1[5];
        LOCK();
        puVar1 = (uint *)(lVar6 + 0x78);
        uVar5 = *puVar1;
        *puVar1 = *puVar1 + 1;
        UNLOCK();
        uVar9 = uVar5 >> 0xb;
        if (*(longlong *)(lVar6 + 0x80 + (ulonglong)uVar9 * 8) == 0) {
          lVar11 = FUN_18062b420(_DAT_180c8ed18,0x4000,0x25);
          plVar2 = (longlong *)(lVar6 + 0x80 + (ulonglong)uVar9 * 8);
          LOCK();
          bVar12 = *plVar2 == 0;
          if (bVar12) {
            *plVar2 = lVar11;
          }
          UNLOCK();
          if ((!bVar12) && (lVar11 != 0)) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
        }
        *(longlong **)
         (*(longlong *)(lVar6 + 0x80 + (ulonglong)uVar9 * 8) +
         (ulonglong)(uVar5 + uVar9 * -0x800) * 8) = plVar7;
      }
      iStackX_10 = iStackX_10 + 1;
    } while (iStackX_10 < param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803065d4(undefined8 *param_1,int param_2,int param_3)
void FUN_1803065d4(undefined8 *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  uint uVar9;
  longlong in_RAX;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  bool bVar12;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  int in_stack_00000098;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBX;
  *(undefined8 *)(in_RAX + 0x20) = unaff_R12;
  *(undefined8 *)(in_RAX + -0x20) = unaff_R13;
  *(undefined4 *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(undefined4 *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(undefined4 *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(undefined4 *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(undefined4 *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  *(undefined8 *)(in_RAX + 0x18) = unaff_RBP;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R14;
  *(int *)(in_RAX + 0x10) = param_2;
  do {
    lVar6 = *(longlong *)*param_1;
    plVar7 = *(longlong **)(*(longlong *)(lVar6 + 0x88) + (longlong)param_2 * 8);
    if ((((char)plVar7[7] == '\0') && (*(char *)param_1[1] == '\0')) &&
       ((*(char *)((longlong)plVar7 + 0x39) != '\0' ||
        ((*(float *)param_1[2] < *(float *)(plVar7 + 6) ||
         (*(float *)param_1[3] < *(float *)((longlong)plVar7 + 0x34))))))) {
      if (*(char *)(lVar6 + 0x7d) != '\0') {
        fVar4 = *(float *)(plVar7 + 0x52);
        fVar3 = *(float *)(&DAT_180bf3ff8 + (longlong)*(int *)(*(longlong *)param_1[4] + 0x5b98) * 4
                          );
        (**(code **)(*plVar7 + 0x108))(plVar7);
        if (0.08 <= fVar4 + fVar3 * -0.1) goto LAB_1803066f9;
        lVar6 = *(longlong *)*param_1;
      }
      FUN_180308500(lVar6 + 0xa8);
      *(undefined1 *)((longlong)plVar7 + 0x39) = 1;
      param_2 = in_stack_00000098;
    }
LAB_1803066f9:
    if ((*(char *)((longlong)plVar7 + 0x39) == '\0') && (cVar8 = FUN_1803068a0(), cVar8 != '\0')) {
      cVar8 = '\x01';
    }
    else {
      cVar8 = '\0';
    }
    *(char *)(plVar7 + 9) = cVar8;
    fVar3 = *(float *)(&DAT_180bf3ff8 + (longlong)*(int *)(*(longlong *)param_1[4] + 0x5b98) * 4);
    fVar4 = *(float *)(plVar7 + 6);
    *(float *)(plVar7 + 6) = fVar3 + fVar4;
    if (cVar8 == '\0') {
      *(float *)((longlong)plVar7 + 0x34) =
           *(float *)(&DAT_180bf3ff8 + (longlong)*(int *)(*(longlong *)param_1[4] + 0x5b98) * 4) +
           *(float *)((longlong)plVar7 + 0x34);
    }
    else {
      uVar10 = plVar7[0x2b];
      *(undefined4 *)((longlong)plVar7 + 0x34) = 0;
      if (uVar10 != 0) {
        uVar10 = (ulonglong)(byte)(*(char *)(uVar10 + 0x2c8) + 8);
      }
      *(uint *)((longlong)plVar7 + 0x4c) =
           ((int)(fVar3 + fVar4) & 0xfff0U | ((uint)uVar10 & 0xff) << 0x14) << 8 |
           (int)plVar7 >> 4 & 0xfffU;
      lVar6 = param_1[5];
      LOCK();
      puVar1 = (uint *)(lVar6 + 0x78);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      uVar9 = uVar5 >> 0xb;
      if (*(longlong *)(lVar6 + 0x80 + (ulonglong)uVar9 * 8) == 0) {
        lVar11 = FUN_18062b420(_DAT_180c8ed18,0x4000,0x25);
        plVar2 = (longlong *)(lVar6 + 0x80 + (ulonglong)uVar9 * 8);
        LOCK();
        bVar12 = *plVar2 == 0;
        if (bVar12) {
          *plVar2 = lVar11;
        }
        UNLOCK();
        if ((!bVar12) && (lVar11 != 0)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      *(longlong **)
       (*(longlong *)(lVar6 + 0x80 + (ulonglong)uVar9 * 8) + (ulonglong)(uVar5 + uVar9 * -0x800) * 8
       ) = plVar7;
      param_2 = in_stack_00000098;
    }
    in_stack_00000098 = param_2 + 1;
    param_2 = in_stack_00000098;
    if (param_3 <= in_stack_00000098) {
      return;
    }
  } while( true );
}





// 函数: void FUN_180306894(void)
void FUN_180306894(void)

{
  return;
}



bool FUN_1803068a0(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,float param_6)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  
  (**(code **)(*param_2 + 0x218))(param_2);
  (**(code **)(*param_2 + 0x218))(param_2);
  if ((undefined *)*param_2 == &UNK_180a19770) {
    uVar5 = *(uint *)((longlong)param_2 + 0x174);
  }
  else {
    uVar5 = (**(code **)((undefined *)*param_2 + 0x130))(param_2);
  }
  if (((uVar5 & 1) != 0) &&
     ((uVar5 = *(uint *)(param_3 + 0x60300) & 0xfffffffe,
      (uVar5 & *(uint *)(param_2 + 0x2e)) == uVar5 || ((*(uint *)(param_2 + 0x2e) & 1) != 0)))) {
    lVar4 = (**(code **)(*param_2 + 0x218))(param_2);
    fVar6 = *(float *)(lVar4 + 0x14);
    fVar1 = *(float *)(lVar4 + 0x10);
    fVar2 = *(float *)(lVar4 + 0x18);
    lVar4 = (**(code **)(*param_2 + 0x218))(param_2);
    cVar3 = func_0x0001801be000(param_4 + 0x30,lVar4 + 0x30,
                                SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar2 * fVar2));
    if (cVar3 != '\0') {
      if ((char)param_2[0x2f] == '\0') {
        FUN_180287b30(param_4 + 0xf0,&fStack_68);
        uStack_5c = 0;
        uStack_4c = 0;
        uStack_3c = 0;
        uStack_2c = 0x3f800000;
        lVar4 = (**(code **)(*param_2 + 0x218))(param_2);
        fVar6 = *(float *)(lVar4 + 0x34);
        fVar1 = *(float *)(lVar4 + 0x38);
        fVar2 = *(float *)(lVar4 + 0x30);
        fStack_38 = fVar6 * fStack_58 + fStack_68 * fVar2 + fVar1 * fStack_48 + fStack_38;
        fStack_34 = fVar6 * fStack_54 + fStack_64 * fVar2 + fVar1 * fStack_44 + fStack_34;
        fStack_30 = fVar6 * fStack_50 + fStack_60 * fVar2 + fVar1 * fStack_40 + fStack_30;
        if ((0.0 < param_6) && (param_6 < -fStack_30)) {
          return false;
        }
        if ((0.0 < (float)param_5) && (0.0 < param_5._4_4_)) {
          fVar6 = 1.0 / (1.0 - fStack_30 * fStack_30);
          fVar6 = SQRT(ABS(((fStack_34 * fStack_34 + fStack_38 * fStack_38 + fStack_30 * fStack_30)
                           - 1.0) * fVar6)) *
                  *(float *)(param_4 + 0x14c) * -3.1415927 * *(float *)(param_4 + 0x14c) * fVar6 *
                  *(float *)(param_4 + 0x11c20) * *(float *)(param_4 + 0x11c24) * 0.25;
          if (fVar6 < 0.0) {
            fVar6 = *(float *)(param_4 + 0x11c24) * *(float *)(param_4 + 0x11c20);
          }
          return param_5._4_4_ * (float)param_5 < fVar6;
        }
      }
      return true;
    }
  }
  return false;
}



bool FUN_1803068ec(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  ulonglong in_RAX;
  longlong lVar4;
  uint uVar5;
  longlong *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  float fVar6;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  undefined4 uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  undefined4 uStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  undefined4 uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  undefined4 uStack000000000000006c;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  
  if (((in_RAX & 1) != 0) &&
     ((uVar5 = *(uint *)(unaff_RSI + 0x60300) & 0xfffffffe,
      (uVar5 & *(uint *)(unaff_RBX + 0x2e)) == uVar5 || ((*(uint *)(unaff_RBX + 0x2e) & 1) != 0))))
  {
    lVar4 = (**(code **)(*unaff_RBX + 0x218))();
    fVar6 = *(float *)(lVar4 + 0x14);
    fVar1 = *(float *)(lVar4 + 0x10);
    fVar2 = *(float *)(lVar4 + 0x18);
    lVar4 = (**(code **)(*unaff_RBX + 0x218))();
    cVar3 = func_0x0001801be000(unaff_RDI + 0x30,lVar4 + 0x30,
                                SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar2 * fVar2));
    if (cVar3 != '\0') {
      if ((char)unaff_RBX[0x2f] == '\0') {
        FUN_180287b30(unaff_RDI + 0xf0,&stack0x00000030);
        uStack000000000000003c = 0;
        uStack000000000000004c = 0;
        uStack000000000000005c = 0;
        uStack000000000000006c = 0x3f800000;
        lVar4 = (**(code **)(*unaff_RBX + 0x218))();
        fVar6 = *(float *)(lVar4 + 0x34);
        fVar1 = *(float *)(lVar4 + 0x38);
        fVar2 = *(float *)(lVar4 + 0x30);
        fStack0000000000000060 =
             fVar6 * fStack0000000000000040 + fStack0000000000000030 * fVar2 +
             fVar1 * fStack0000000000000050 + fStack0000000000000060;
        fStack0000000000000064 =
             fVar6 * fStack0000000000000044 + fStack0000000000000034 * fVar2 +
             fVar1 * fStack0000000000000054 + fStack0000000000000064;
        in_stack_00000068 =
             fVar6 * in_stack_00000048 + in_stack_00000038 * fVar2 + fVar1 * in_stack_00000058 +
             in_stack_00000068;
        if ((0.0 < in_stack_000000c8) && (in_stack_000000c8 < -in_stack_00000068)) {
          return false;
        }
        if ((0.0 < fStack00000000000000c0) && (0.0 < fStack00000000000000c4)) {
          fVar6 = 1.0 / (1.0 - in_stack_00000068 * in_stack_00000068);
          fVar6 = SQRT(ABS(((fStack0000000000000064 * fStack0000000000000064 +
                             fStack0000000000000060 * fStack0000000000000060 +
                            in_stack_00000068 * in_stack_00000068) - 1.0) * fVar6)) *
                  *(float *)(unaff_RDI + 0x14c) * -3.1415927 * *(float *)(unaff_RDI + 0x14c) * fVar6
                  * *(float *)(unaff_RDI + 0x11c20) * *(float *)(unaff_RDI + 0x11c24) * 0.25;
          if (fVar6 < 0.0) {
            fVar6 = *(float *)(unaff_RDI + 0x11c24) * *(float *)(unaff_RDI + 0x11c20);
          }
          return fStack00000000000000c4 * fStack00000000000000c0 < fVar6;
        }
      }
      return true;
    }
  }
  return false;
}



bool FUN_180306b2c(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  longlong in_RAX;
  ulonglong uVar5;
  uint uVar6;
  longlong *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  float fVar7;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  undefined4 uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  undefined4 uStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  undefined4 uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000088;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  
  uVar5 = (**(code **)(in_RAX + 0x130))();
  if (((uVar5 & 1) != 0) &&
     ((uVar6 = *(uint *)(unaff_RSI + 0x60300) & 0xfffffffe,
      (uVar6 & *(uint *)(unaff_RBX + 0x2e)) == uVar6 || ((*(uint *)(unaff_RBX + 0x2e) & 1) != 0))))
  {
    lVar4 = (**(code **)(*unaff_RBX + 0x218))();
    fVar7 = *(float *)(lVar4 + 0x14);
    fVar1 = *(float *)(lVar4 + 0x10);
    fVar2 = *(float *)(lVar4 + 0x18);
    lVar4 = (**(code **)(*unaff_RBX + 0x218))();
    cVar3 = func_0x0001801be000(unaff_RDI + 0x30,lVar4 + 0x30,
                                SQRT(fVar1 * fVar1 + fVar7 * fVar7 + fVar2 * fVar2));
    if (cVar3 != '\0') {
      if ((char)unaff_RBX[0x2f] == '\0') {
        FUN_180287b30(unaff_RDI + 0xf0,&stack0x00000030);
        uStack000000000000003c = 0;
        uStack000000000000004c = 0;
        uStack000000000000005c = 0;
        uStack000000000000006c = 0x3f800000;
        lVar4 = (**(code **)(*unaff_RBX + 0x218))();
        fVar7 = *(float *)(lVar4 + 0x34);
        fVar1 = *(float *)(lVar4 + 0x38);
        fVar2 = *(float *)(lVar4 + 0x30);
        fStack0000000000000060 =
             fVar7 * fStack0000000000000040 + fStack0000000000000030 * fVar2 +
             fVar1 * fStack0000000000000050 + fStack0000000000000060;
        fStack0000000000000064 =
             fVar7 * fStack0000000000000044 + fStack0000000000000034 * fVar2 +
             fVar1 * fStack0000000000000054 + fStack0000000000000064;
        in_stack_00000068 =
             fVar7 * in_stack_00000048 + in_stack_00000038 * fVar2 + fVar1 * in_stack_00000058 +
             in_stack_00000068;
        if ((0.0 < in_stack_000000c8) && (in_stack_000000c8 < -in_stack_00000068)) {
          return false;
        }
        if ((0.0 < fStack00000000000000c0) && (0.0 < fStack00000000000000c4)) {
          fVar7 = 1.0 / (1.0 - in_stack_00000068 * in_stack_00000068);
          fVar7 = SQRT(ABS(((fStack0000000000000064 * fStack0000000000000064 +
                             fStack0000000000000060 * fStack0000000000000060 +
                            in_stack_00000068 * in_stack_00000068) - 1.0) * fVar7)) *
                  *(float *)(unaff_RDI + 0x14c) * -3.1415927 * *(float *)(unaff_RDI + 0x14c) * fVar7
                  * *(float *)(unaff_RDI + 0x11c20) * *(float *)(unaff_RDI + 0x11c24) * 0.25;
          if (fVar7 < 0.0) {
            fVar7 = *(float *)(unaff_RDI + 0x11c24) * *(float *)(unaff_RDI + 0x11c20);
          }
          return fStack00000000000000c4 * fStack00000000000000c0 < fVar7;
        }
      }
      return true;
    }
  }
  return false;
}





// 函数: void FUN_180306b40(longlong param_1)
void FUN_180306b40(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x1c48) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x1c48) + 0x328);
    *puVar1 = *puVar1 & 0xdfffffff;
    plVar2 = *(longlong **)(param_1 + 0x1c48);
    *(undefined8 *)(param_1 + 0x1c48) = 0;
    if (plVar2 != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x000180306b8c. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*plVar2 + 0x38))();
      return;
    }
  }
  return;
}



longlong FUN_180306ba0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  plVar8 = *(longlong **)(param_1 + 0x1b90);
  if (plVar8 != *(longlong **)(param_1 + 0x1b98)) {
    iVar2 = *(int *)(param_2 + 0x10);
    do {
      lVar4 = *plVar8;
      iVar3 = *(int *)(lVar4 + 0x60);
      iVar6 = iVar2;
      if (iVar3 == iVar2) {
        if (iVar3 != 0) {
          pbVar5 = *(byte **)(lVar4 + 0x58);
          lVar7 = *(longlong *)(param_2 + 8) - (longlong)pbVar5;
          do {
            pbVar1 = pbVar5 + lVar7;
            iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
            if (iVar6 != 0) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar1 != 0);
        }
LAB_180306bfe:
        if (iVar6 == 0) {
          return lVar4;
        }
      }
      else if (iVar3 == 0) goto LAB_180306bfe;
      plVar8 = plVar8 + 1;
    } while (plVar8 != *(longlong **)(param_1 + 0x1b98));
  }
  return 0;
}





// 函数: void FUN_180306c30(longlong param_1)
void FUN_180306c30(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  iVar3 = _Mtx_lock(param_1 + 0x1bb0);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  plVar5 = *(longlong **)(param_1 + 0x1b90);
  if (plVar5 != *(longlong **)(param_1 + 0x1b98)) {
    do {
      lVar1 = *plVar5;
      iVar3 = _Mtx_lock(lVar1);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      plVar2 = *(longlong **)(lVar1 + 0x90);
      plVar4 = *(longlong **)(lVar1 + 0x88);
      if (plVar4 != plVar2) {
        do {
          if ((longlong *)*plVar4 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar4 + 0x38))();
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar2);
        plVar4 = *(longlong **)(lVar1 + 0x88);
      }
      *(longlong **)(lVar1 + 0x90) = plVar4;
      iVar3 = _Mtx_unlock(lVar1);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != *(longlong **)(param_1 + 0x1b98));
  }
  iVar3 = _Mtx_unlock(param_1 + 0x1bb0);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}



bool FUN_180306d20(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(*param_2 + 0x4c);
  uVar2 = *(uint *)(*param_1 + 0x4c);
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return uVar1 < uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



