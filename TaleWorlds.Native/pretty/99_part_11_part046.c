#include "TaleWorlds.Native.Split.h"

// 99_part_11_part046.c - 3 个函数

// 函数: void FUN_1807ac340(longlong param_1)
void FUN_1807ac340(longlong param_1)

{
  uint64_t *puVar1;
  short sVar2;
  longlong lVar3;
  int8_t auVar4 [16];
  longlong *plVar5;
  int iVar6;
  uint64_t *puVar7;
  longlong *plVar8;
  uint64_t *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  int8_t auStack_2d8 [32];
  longlong *plStack_2b8;
  int16_t *puStack_2b0;
  int16_t auStack_298 [2];
  int16_t auStack_294 [2];
  uint uStack_290;
  int32_t uStack_28c;
  int32_t auStack_288 [2];
  longlong *plStack_280;
  int aiStack_274 [3];
  longlong *plStack_268;
  longlong lStack_260;
  longlong lStack_258;
  longlong lStack_250;
  longlong lStack_248;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_2d8;
  puVar13 = (uint64_t *)0x0;
  *(int32_t *)(param_1 + 0x28) = 2;
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  *(uint64_t *)(param_1 + 0x130) = 0;
  *(uint64_t *)(param_1 + 0x148) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(uint64_t *)(param_1 + 0x168) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  aiStack_274[1] = 2;
  plStack_268 = (longlong *)0x0;
  plStack_2b8 = (longlong *)0x0;
  iVar6 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),&lStack_250,1,0x10);
  if (((iVar6 == 0) && (lStack_250 == 0x11cf668e75b22630)) && (lStack_248 == 0x6cce6200aa00d9a6)) {
    *(int8_t *)(param_1 + 0x198) = 1;
    *(uint64_t *)(param_1 + 0x1a0) = 0;
    *(int32_t *)(param_1 + 0x19c) = 0;
    if ((_DAT_180c2c830 != (code *)0x0) ||
       (((_DAT_180c2c838 != 0 ||
         (_DAT_180c2c838 = LoadLibraryA(&UNK_18095d048), _DAT_180c2c838 != 0)) &&
        (_DAT_180c2c830 = (code *)GetProcAddress(_DAT_180c2c838,&UNK_18095d058),
        _DAT_180c2c830 != (code *)0x0)))) {
      *(uint64_t *)(param_1 + 0x1b0) = 0;
      *(uint64_t *)(param_1 + 0x1b8) = 0;
      *(uint64_t *)(param_1 + 0x1c0) = 0;
      *(uint64_t *)(param_1 + 0x1c8) = 0;
      *(uint64_t *)(param_1 + 0x1d0) = 0;
      *(uint64_t *)(param_1 + 0x1d8) = 0;
      *(uint64_t *)(param_1 + 0x1e0) = 0;
      *(uint64_t **)(param_1 + 8) = (uint64_t *)(param_1 + 0x1b0);
      iVar6 = (**(code **)(**(longlong **)(param_1 + 0x170) + 0x10))
                        (*(longlong **)(param_1 + 0x170),param_1 + 0x1c4);
      if ((iVar6 == 0) && (iVar6 = FUN_18076a440(*(uint64_t *)(param_1 + 0x170),0,0), iVar6 == 0))
      {
        puVar1 = (uint64_t *)(param_1 + 0x178);
        iVar6 = (*_DAT_180c2c830)(0,0,puVar1);
        if (-1 < iVar6) {
          plStack_2b8 = (longlong *)((ulonglong)plStack_2b8 & 0xffffffff00000000);
          puVar7 = (uint64_t *)
                   FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x18,&UNK_18095d070,0xe0);
          puVar9 = puVar13;
          if (puVar7 != (uint64_t *)0x0) {
            puVar7[1] = 0;
            *puVar7 = &UNK_18095cfc8;
            *(int32_t *)(puVar7 + 2) = 1;
            puVar9 = puVar7;
          }
          *(uint64_t **)(param_1 + 0x180) = puVar9;
          if (puVar9 != (uint64_t *)0x0) {
            puVar9[1] = *(uint64_t *)(param_1 + 0x170);
            iVar6 = (**(code **)(*(longlong *)*puVar1 + 0xb8))
                              ((longlong *)*puVar1,*(uint64_t *)(param_1 + 0x180));
            if (iVar6 == -0x7ffbfe10) {
              iVar6 = CoInitializeEx(0,2);
              if (iVar6 < 0) goto FUN_1807ac5e4;
              (**(code **)(*(longlong *)*puVar1 + 0x10))();
              iVar6 = (*_DAT_180c2c830)(0,0,puVar1);
              if ((iVar6 < 0) ||
                 (iVar6 = FUN_18076a440(*(uint64_t *)(param_1 + 0x170),0,0), iVar6 != 0))
              goto FUN_1807ac5e4;
              iVar6 = (**(code **)(*(longlong *)*puVar1 + 0xb8))
                                ((longlong *)*puVar1,*(uint64_t *)(param_1 + 0x180));
            }
            if ((-1 < iVar6) &&
               (iVar6 = (*(code *)**(uint64_t **)*puVar1)
                                  ((uint64_t *)*puVar1,&UNK_180957f48,&plStack_268),
               plVar8 = plStack_268, -1 < iVar6)) {
              plStack_280 = (longlong *)0x0;
              uStack_290 = 0;
              if ((plStack_268 != (longlong *)0x0) &&
                 (iVar6 = (**(code **)(*plStack_268 + 0x40))(plStack_268,&uStack_290), -1 < iVar6))
              {
                *(int32_t *)(param_1 + 0x188) = 0;
                if (uStack_290 != 0) {
                  do {
                    iVar6 = (**(code **)(*plVar8 + 0x48))(plVar8,puVar13,&plStack_280);
                    if (iVar6 < 0) goto FUN_1807ac5e4;
                    auStack_298[0] = 0;
                    iVar6 = (**(code **)(*plStack_280 + 0x20))(plStack_280,auStack_298);
                    if ((iVar6 < 0) ||
                       (iVar6 = (**(code **)(*plStack_280 + 0x18))(plStack_280,&lStack_260),
                       iVar6 < 0)) goto FUN_1807ac5e4;
                    if ((lStack_260 == 0x10000073647561) && (lStack_258 == 0x719b3800aa000080)) {
                      *(int16_t *)(param_1 + 0x188) = auStack_298[0];
                    }
                    else if ((lStack_260 == 0x10000073646976) && (lStack_258 == 0x719b3800aa000080))
                    {
                      *(int16_t *)(param_1 + 0x18a) = auStack_298[0];
                    }
                    if (plStack_280 != (longlong *)0x0) {
                      (**(code **)(*plStack_280 + 0x10))();
                    }
                    uVar12 = (int)puVar13 + 1;
                    puVar13 = (uint64_t *)(ulonglong)uVar12;
                  } while (uVar12 < uStack_290);
                }
                (**(code **)(*plStack_268 + 0x10))();
                iVar6 = (**(code **)(*(longlong *)*puVar1 + 0x28))((longlong *)*puVar1,0,0);
                if (((-1 < iVar6) &&
                    (iVar6 = (**(code **)(*(longlong *)*puVar1 + 0x40))
                                       ((longlong *)*puVar1,1,param_1 + 0x188,aiStack_274 + 1),
                    -1 < iVar6)) &&
                   (iVar6 = (**(code **)(*(longlong *)*puVar1 + 0x50))
                                      ((longlong *)*puVar1,*(int16_t *)(param_1 + 0x188),0),
                   -1 < iVar6)) {
                  (**(code **)(*(longlong *)*puVar1 + 0x70))((longlong *)*puVar1,aiStack_274);
                  if (aiStack_274[0] < 1) {
                    iVar6 = (*(code *)**(uint64_t **)*puVar1)
                                      ((uint64_t *)*puVar1,&UNK_180957f38,&plStack_280);
                    if (-1 < iVar6) {
                      puStack_2b0 = auStack_294;
                      auStack_298[0] = 0;
                      plStack_2b8 = (longlong *)0x0;
                      iVar6 = (**(code **)(*plStack_280 + 0x28))
                                        (plStack_280,auStack_298,&UNK_18095d0f0,auStack_288);
                      if (-1 < iVar6) {
                        plStack_2b8 = (longlong *)((ulonglong)plStack_2b8 & 0xffffffff00000000);
                        plVar8 = (longlong *)
                                 FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                                               auStack_294[0],&UNK_18095d070,0x199);
                        if (plVar8 != (longlong *)0x0) {
                          puStack_2b0 = auStack_294;
                          plStack_2b8 = plVar8;
                          iVar6 = (**(code **)(*plStack_280 + 0x28))
                                            (plStack_280,auStack_298,&UNK_18095d0f0,auStack_288);
                          plStack_2b8 = (longlong *)CONCAT71(plStack_2b8._1_7_,1);
                          if (-1 < iVar6) {
                            uVar10 = (ulonglong)
                                     ((longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x10) *
                                     *plVar8) / 10000;
                            auVar4._8_8_ = 0;
                            auVar4._0_8_ = uVar10;
                            lVar11 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar4,8);
                            *(int *)(*(longlong *)(param_1 + 8) + 0x18) =
                                 (int)((uVar10 - lVar11 >> 1) + lVar11 >> 9);
                    // WARNING: Subroutine does not return
                            FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar8,
                                          &UNK_18095d070,0x1a9);
                          }
                          uVar14 = 0x1a2;
LAB_1807ac9fe:
                    // WARNING: Subroutine does not return
                          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar8,
                                        &UNK_18095d070,uVar14);
                        }
                      }
                    }
                  }
                  else {
                    iVar6 = (**(code **)(*(longlong *)*puVar1 + 0x90))
                                      ((longlong *)*puVar1,0,0,&uStack_290);
                    if (-1 < iVar6) {
                      iVar6 = (**(code **)(*(longlong *)CONCAT44(uStack_28c,uStack_290) + 0x20))
                                        ((longlong *)CONCAT44(uStack_28c,uStack_290),0,auStack_288);
                      if (-1 < iVar6) {
                        plStack_2b8 = (longlong *)((ulonglong)plStack_2b8 & 0xffffffff00000000);
                        plVar8 = (longlong *)
                                 FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                                               auStack_288[0],&UNK_18095d070,0x152);
                        plVar5 = (longlong *)CONCAT44(uStack_28c,uStack_290);
                        if (plVar8 == (longlong *)0x0) {
                          (**(code **)(*plVar5 + 0x10))();
                          goto FUN_1807ac5e4;
                        }
                        iVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,plVar8,auStack_288);
                        if (-1 < iVar6) {
                          if ((*(longlong *)((longlong)plVar8 + 0x2c) == 0x11cec35605589f81) &&
                             (*(longlong *)((longlong)plVar8 + 0x34) == 0x5a595500aa0001bf)) {
                            lVar11 = plVar8[10];
                            lVar3 = *(longlong *)(param_1 + 8);
                            sVar2 = *(short *)(lVar11 + 0xe);
                            if (sVar2 == 8) {
                              *(int32_t *)(lVar3 + 8) = 1;
                            }
                            else if (sVar2 == 0x10) {
                              *(int32_t *)(lVar3 + 8) = 2;
                            }
                            else if (sVar2 == 0x18) {
                              *(int32_t *)(lVar3 + 8) = 3;
                            }
                            else {
                              if (sVar2 != 0x20) {
                                (**(code **)(*(longlong *)CONCAT44(uStack_28c,uStack_290) + 0x10))()
                                ;
                                uVar14 = 0x16f;
                                plStack_2b8 = (longlong *)CONCAT71(plStack_2b8._1_7_,1);
                                goto LAB_1807ac9fe;
                              }
                              *(int32_t *)(lVar3 + 8) = 4;
                            }
                            *(uint *)(*(longlong *)(param_1 + 8) + 0xc) =
                                 (uint)*(ushort *)(lVar11 + 2);
                            *(int32_t *)(*(longlong *)(param_1 + 8) + 0x10) =
                                 *(int32_t *)(lVar11 + 4);
                          }
                          (**(code **)(*(longlong *)CONCAT44(uStack_28c,uStack_290) + 0x10))();
                          plStack_2b8 = (longlong *)CONCAT71(plStack_2b8._1_7_,1);
                    // WARNING: Subroutine does not return
                          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar8,
                                        &UNK_18095d070,0x178);
                        }
                      }
                      (**(code **)(*(longlong *)CONCAT44(uStack_28c,uStack_290) + 0x10))();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
FUN_1807ac5e4:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_2d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807ac3e3(void)
void FUN_1807ac3e3(void)

{
  uint64_t *puVar1;
  short sVar2;
  longlong lVar3;
  int8_t auVar4 [16];
  longlong *plVar5;
  int iVar6;
  code *pcVar7;
  longlong *plVar8;
  code *pcVar9;
  longlong lVar10;
  uint uVar11;
  code *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  uint64_t uVar12;
  bool in_ZF;
  uint64_t in_stack_00000020;
  int32_t uVar14;
  ulonglong uVar13;
  int16_t uStack0000000000000040;
  int16_t uStack0000000000000044;
  uint uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t in_stack_00000050;
  code *in_stack_00000058;
  uint64_t in_stack_00000060;
  longlong *in_stack_00000070;
  longlong in_stack_00000078;
  
  uVar14 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
  if ((in_ZF) && (*(longlong *)(unaff_RBP + -0x70) == 0x6cce6200aa00d9a6)) {
    *(int8_t *)(unaff_RDI + 0x198) = 1;
    *(code **)(unaff_RDI + 0x1a0) = unaff_RBX;
    uVar11 = (uint)unaff_RBX;
    *(uint *)(unaff_RDI + 0x19c) = uVar11;
    if ((_DAT_180c2c830 != unaff_RBX) ||
       (((_DAT_180c2c838 != 0 ||
         (_DAT_180c2c838 = LoadLibraryA(&UNK_18095d048), _DAT_180c2c838 != 0)) &&
        (_DAT_180c2c830 = (code *)GetProcAddress(_DAT_180c2c838,&UNK_18095d058),
        _DAT_180c2c830 != (code *)0x0)))) {
      *(uint64_t *)(unaff_RDI + 0x1b0) = 0;
      *(uint64_t *)(unaff_RDI + 0x1b8) = 0;
      *(uint64_t *)(unaff_RDI + 0x1c0) = 0;
      *(uint64_t *)(unaff_RDI + 0x1c8) = 0;
      *(uint64_t *)(unaff_RDI + 0x1d0) = 0;
      *(uint64_t *)(unaff_RDI + 0x1d8) = 0;
      *(uint64_t *)(unaff_RDI + 0x1e0) = 0;
      *(uint64_t **)(unaff_RDI + 8) = (uint64_t *)(unaff_RDI + 0x1b0);
      iVar6 = (**(code **)(**(longlong **)(unaff_RDI + 0x170) + 0x10))
                        (*(longlong **)(unaff_RDI + 0x170),unaff_RDI + 0x1c4);
      if ((iVar6 == 0) &&
         (iVar6 = FUN_18076a440(*(uint64_t *)(unaff_RDI + 0x170),0,0), iVar6 == 0)) {
        puVar1 = (uint64_t *)(unaff_RDI + 0x178);
        iVar6 = (*_DAT_180c2c830)(0,0,puVar1);
        if (-1 < iVar6) {
          uVar13 = CONCAT44(uVar14,uVar11);
          pcVar7 = (code *)FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x18,&UNK_18095d070
                                         ,0xe0,uVar13);
          pcVar9 = unaff_RBX;
          if (pcVar7 != (code *)0x0) {
            *(code **)(pcVar7 + 8) = unaff_RBX;
            *(void **)pcVar7 = &UNK_18095cfc8;
            *(int32_t *)(pcVar7 + 0x10) = 1;
            pcVar9 = pcVar7;
          }
          *(code **)(unaff_RDI + 0x180) = pcVar9;
          if (pcVar9 != (code *)0x0) {
            *(longlong *)(pcVar9 + 8) = *(longlong *)(unaff_RDI + 0x170);
            iVar6 = (**(code **)(*(longlong *)*puVar1 + 0xb8))
                              ((longlong *)*puVar1,*(uint64_t *)(unaff_RDI + 0x180));
            if (iVar6 == -0x7ffbfe10) {
              iVar6 = CoInitializeEx(0,2);
              if (iVar6 < 0) goto LAB_1807ac5c4;
              (**(code **)(*(longlong *)*puVar1 + 0x10))();
              iVar6 = (*_DAT_180c2c830)(0,0,puVar1);
              if ((iVar6 < 0) ||
                 (iVar6 = FUN_18076a440(*(uint64_t *)(unaff_RDI + 0x170),0,0), iVar6 != 0))
              goto LAB_1807ac5c4;
              iVar6 = (**(code **)(*(longlong *)*puVar1 + 0xb8))
                                ((longlong *)*puVar1,*(uint64_t *)(unaff_RDI + 0x180));
            }
            if ((((-1 < iVar6) &&
                 (iVar6 = (*(code *)**(uint64_t **)*puVar1)
                                    ((uint64_t *)*puVar1,&UNK_180957f48,&stack0x00000070),
                 plVar8 = in_stack_00000070, -1 < iVar6)) &&
                (uStack0000000000000048 = uVar11, in_stack_00000058 = unaff_RBX,
                in_stack_00000070 != (longlong *)0x0)) &&
               (iVar6 = (**(code **)(*in_stack_00000070 + 0x40))(in_stack_00000070,&stack0x00000048)
               , -1 < iVar6)) {
              *(uint *)(unaff_RDI + 0x188) = uVar11;
              if (uVar11 < uStack0000000000000048) {
                do {
                  iVar6 = (**(code **)(*plVar8 + 0x48))
                                    (plVar8,(ulonglong)unaff_RBX & 0xffffffff,&stack0x00000058);
                  if (iVar6 < 0) goto LAB_1807ac5c4;
                  uStack0000000000000040 = 0;
                  iVar6 = (**(code **)(*(longlong *)in_stack_00000058 + 0x20))
                                    (in_stack_00000058,&stack0x00000040);
                  if ((iVar6 < 0) ||
                     (iVar6 = (**(code **)(*(longlong *)in_stack_00000058 + 0x18))
                                        (in_stack_00000058,&stack0x00000078), iVar6 < 0))
                  goto LAB_1807ac5c4;
                  if ((in_stack_00000078 == 0x10000073647561) &&
                     (*(longlong *)(unaff_RBP + -0x80) == 0x719b3800aa000080)) {
                    *(int16_t *)(unaff_RDI + 0x188) = uStack0000000000000040;
                  }
                  else if ((in_stack_00000078 == 0x10000073646976) &&
                          (*(longlong *)(unaff_RBP + -0x80) == 0x719b3800aa000080)) {
                    *(int16_t *)(unaff_RDI + 0x18a) = uStack0000000000000040;
                  }
                  if (in_stack_00000058 != (code *)0x0) {
                    (**(code **)(*(longlong *)in_stack_00000058 + 0x10))();
                  }
                  uVar11 = (int)unaff_RBX + 1;
                  unaff_RBX = (code *)(ulonglong)uVar11;
                } while (uVar11 < uStack0000000000000048);
              }
              (**(code **)(*in_stack_00000070 + 0x10))();
              iVar6 = (**(code **)(*(longlong *)*puVar1 + 0x28))((longlong *)*puVar1,0,0);
              if (((-1 < iVar6) &&
                  (iVar6 = (**(code **)(*(longlong *)*puVar1 + 0x40))
                                     ((longlong *)*puVar1,1,unaff_RDI + 0x188,&stack0x00000068),
                  -1 < iVar6)) &&
                 (iVar6 = (**(code **)(*(longlong *)*puVar1 + 0x50))
                                    ((longlong *)*puVar1,*(int16_t *)(unaff_RDI + 0x188),0),
                 -1 < iVar6)) {
                (**(code **)(*(longlong *)*puVar1 + 0x70))
                          ((longlong *)*puVar1,(longlong)&stack0x00000060 + 4);
                if (in_stack_00000060._4_4_ < 1) {
                  iVar6 = (*(code *)**(uint64_t **)*puVar1)
                                    ((uint64_t *)*puVar1,&UNK_180957f38,&stack0x00000058);
                  if (-1 < iVar6) {
                    uStack0000000000000040 = 0;
                    uVar13 = 0;
                    iVar6 = (**(code **)(*(longlong *)in_stack_00000058 + 0x28))
                                      (in_stack_00000058,&stack0x00000040,&UNK_18095d0f0,
                                       &stack0x00000050,0);
                    if ((-1 < iVar6) &&
                       (plVar8 = (longlong *)
                                 FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                                               uStack0000000000000044,&UNK_18095d070,0x199,
                                               uVar13 & 0xffffffff00000000),
                       plVar8 != (longlong *)0x0)) {
                      iVar6 = (**(code **)(*(longlong *)in_stack_00000058 + 0x28))
                                        (in_stack_00000058,&stack0x00000040,&UNK_18095d0f0,
                                         &stack0x00000050,plVar8);
                      if (-1 < iVar6) {
                        uVar13 = (ulonglong)
                                 ((longlong)*(int *)(*(longlong *)(unaff_RDI + 8) + 0x10) * *plVar8)
                                 / 10000;
                        auVar4._8_8_ = 0;
                        auVar4._0_8_ = uVar13;
                        lVar10 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar4,8);
                        *(int *)(*(longlong *)(unaff_RDI + 8) + 0x18) =
                             (int)((uVar13 - lVar10 >> 1) + lVar10 >> 9);
                    // WARNING: Subroutine does not return
                        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar8,&UNK_18095d070,
                                      0x1a9,1);
                      }
                      uVar12 = 0x1a2;
LAB_1807ac9fe:
                    // WARNING: Subroutine does not return
                      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar8,&UNK_18095d070,
                                    uVar12,1);
                    }
                  }
                }
                else {
                  iVar6 = (**(code **)(*(longlong *)*puVar1 + 0x90))
                                    ((longlong *)*puVar1,0,0,&stack0x00000048);
                  if (-1 < iVar6) {
                    iVar6 = (**(code **)(*(longlong *)
                                          CONCAT44(uStack000000000000004c,uStack0000000000000048) +
                                        0x20))((longlong *)
                                               CONCAT44(uStack000000000000004c,
                                                        uStack0000000000000048),0,&stack0x00000050);
                    if (-1 < iVar6) {
                      plVar8 = (longlong *)
                               FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                                             in_stack_00000050,&UNK_18095d070,0x152,
                                             uVar13 & 0xffffffff00000000);
                      plVar5 = (longlong *)CONCAT44(uStack000000000000004c,uStack0000000000000048);
                      if (plVar8 == (longlong *)0x0) {
                        (**(code **)(*plVar5 + 0x10))();
                        goto LAB_1807ac5c4;
                      }
                      iVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,plVar8,&stack0x00000050);
                      if (-1 < iVar6) {
                        if ((*(longlong *)((longlong)plVar8 + 0x2c) == 0x11cec35605589f81) &&
                           (*(longlong *)((longlong)plVar8 + 0x34) == 0x5a595500aa0001bf)) {
                          lVar10 = plVar8[10];
                          lVar3 = *(longlong *)(unaff_RDI + 8);
                          sVar2 = *(short *)(lVar10 + 0xe);
                          if (sVar2 == 8) {
                            *(int32_t *)(lVar3 + 8) = 1;
                          }
                          else if (sVar2 == 0x10) {
                            *(int32_t *)(lVar3 + 8) = 2;
                          }
                          else if (sVar2 == 0x18) {
                            *(int32_t *)(lVar3 + 8) = 3;
                          }
                          else {
                            if (sVar2 != 0x20) {
                              (**(code **)(*(longlong *)
                                            CONCAT44(uStack000000000000004c,uStack0000000000000048)
                                          + 0x10))();
                              uVar12 = 0x16f;
                              goto LAB_1807ac9fe;
                            }
                            *(int32_t *)(lVar3 + 8) = 4;
                          }
                          *(uint *)(*(longlong *)(unaff_RDI + 8) + 0xc) =
                               (uint)*(ushort *)(lVar10 + 2);
                          *(int32_t *)(*(longlong *)(unaff_RDI + 8) + 0x10) =
                               *(int32_t *)(lVar10 + 4);
                        }
                        (**(code **)(*(longlong *)
                                      CONCAT44(uStack000000000000004c,uStack0000000000000048) + 0x10
                                    ))();
                    // WARNING: Subroutine does not return
                        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar8,&UNK_18095d070,
                                      0x178,1);
                      }
                    }
                    (**(code **)(*(longlong *)
                                  CONCAT44(uStack000000000000004c,uStack0000000000000048) + 0x10))()
                    ;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1807ac5c4:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1a0) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807ac5e4(void)
void FUN_1807ac5e4(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1a0) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




