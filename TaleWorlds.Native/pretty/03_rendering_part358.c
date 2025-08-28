#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part358.c - 7 个函数

// 函数: void FUN_1804615e0(longlong *param_1,int param_2,int param_3,uint64_t param_4)
void FUN_1804615e0(longlong *param_1,int param_2,int param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint64_t uVar6;
  longlong *plStack_50;
  longlong *plStack_48;
  longlong *plStack_40;
  int32_t uStack_38;
  
  uVar6 = 0xfffffffffffffffe;
  lVar5 = (longlong)param_2;
  do {
    if (param_3 <= lVar5) {
      return;
    }
    lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x88) + lVar5 * 8);
    *(uint64_t *)(*(longlong *)(lVar3 + 0x28) + 0x138) =
         *(uint64_t *)(*(longlong *)(lVar3 + 0x28) + 0x130);
    if (*(longlong *)(lVar3 + 0x168) == 0) {
      plStack_50 = (longlong *)0x0;
      plStack_48 = (longlong *)0x0;
      plStack_40 = (longlong *)0x0;
      uStack_38 = 3;
      FUN_1802e8c60(lVar3,&plStack_50);
      if (plStack_48 < plStack_40) {
        *plStack_48 = lVar3;
        plVar2 = plStack_48;
      }
      else {
        lVar1 = (longlong)plStack_48 - (longlong)plStack_50 >> 3;
        if (lVar1 == 0) {
          lVar1 = 1;
LAB_1804616c3:
          plVar2 = (longlong *)
                   FUN_18062b420(system_memory_pool_ptr,lVar1 * 8,(int8_t)uStack_38,param_4,uVar6);
        }
        else {
          lVar1 = lVar1 * 2;
          if (lVar1 != 0) goto LAB_1804616c3;
          plVar2 = (longlong *)0x0;
        }
        if (plStack_50 != plStack_48) {
                    // WARNING: Subroutine does not return
          memmove(plVar2,plStack_50,(longlong)plStack_48 - (longlong)plStack_50);
        }
        *plVar2 = lVar3;
        if (plStack_50 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plStack_40 = plVar2 + lVar1;
        plStack_50 = plVar2;
      }
      plStack_48 = plVar2 + 1;
      iVar4 = 0;
      if ((longlong)plStack_48 - (longlong)plStack_50 >> 3 != 0) {
        lVar3 = 0;
        do {
          FUN_1801c0d90(*(uint64_t *)(lVar3 + (longlong)plStack_50));
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 8;
        } while ((ulonglong)(longlong)iVar4 <
                 (ulonglong)((longlong)plStack_48 - (longlong)plStack_50 >> 3));
      }
      if (plStack_50 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    lVar5 = lVar5 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1804617c0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plStack_48;
  ulonglong uStack_40;
  longlong lStack_30;
  
  iVar8 = -1;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x88);
  *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x88);
  if ((ulonglong)(*(longlong *)(param_1 + 0x98) - *(longlong *)(param_1 + 0x88) >> 3) < 0x1000) {
    lVar2 = FUN_18062b420(system_memory_pool_ptr,0x8000);
    lVar5 = *(longlong *)(param_1 + 0x88);
    if (lVar5 != *(longlong *)(param_1 + 0x90)) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar5,*(longlong *)(param_1 + 0x90) - lVar5);
    }
    if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(longlong *)(param_1 + 0x88) = lVar2;
    *(longlong *)(param_1 + 0x98) = lVar2 + 0x8000;
    *(longlong *)(param_1 + 0x90) = lVar2;
  }
  uVar1 = *(ulonglong *)(lVar3 + 0x60838);
  FUN_1801c2360(lVar3 + 0x60830,&plStack_48);
  do {
    if (uStack_40 == uVar1) {
      return iVar8 + 1;
    }
    plVar4 = (longlong *)0x0;
    plVar7 = *(longlong **)(param_1 + 0x90);
    if (iVar8 < *(int *)(lStack_30 + 0x2b8)) {
      iVar8 = *(int *)(lStack_30 + 0x2b8);
    }
    if (plVar7 < *(longlong **)(param_1 + 0x98)) {
      *plVar7 = lStack_30;
      *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + 8;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x88);
      lVar3 = (longlong)plVar7 - (longlong)plVar6 >> 3;
      if (lVar3 == 0) {
        lVar3 = 1;
LAB_18046192a:
        plVar4 = (longlong *)FUN_18062b420(system_memory_pool_ptr,lVar3 * 8);
        plVar6 = *(longlong **)(param_1 + 0x88);
        plVar7 = *(longlong **)(param_1 + 0x90);
      }
      else {
        lVar3 = lVar3 * 2;
        if (lVar3 != 0) goto LAB_18046192a;
      }
      if (plVar6 != plVar7) {
                    // WARNING: Subroutine does not return
        memmove(plVar4,plVar6,(longlong)plVar7 - (longlong)plVar6);
      }
      *plVar4 = lStack_30;
      if (*(longlong *)(param_1 + 0x88) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(longlong **)(param_1 + 0x88) = plVar4;
      *(longlong **)(param_1 + 0x98) = plVar4 + lVar3;
      *(longlong **)(param_1 + 0x90) = plVar4 + 1;
    }
    lVar3 = *plStack_48;
    do {
      uStack_40 = uStack_40 + 1;
      lVar2 = (uStack_40 & 0xffffffff) * 0x10;
      lVar5 = lVar2 + 8 + lVar3;
      if ((*(ulonglong *)(lVar2 + lVar3) & 0xffffffff00000000) == 0) {
        lVar5 = 0;
      }
      if (lVar5 != 0) {
        lStack_30 = *(longlong *)(lVar3 + 8 + (uStack_40 & 0xffffffff) * 0x10);
        break;
      }
    } while (uStack_40 != plStack_48[1]);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1804618a6(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong *plVar6;
  ulonglong unaff_RDI;
  int unaff_R13D;
  longlong *plStackX_20;
  longlong in_stack_00000038;
  ulonglong in_stack_00000070;
  
  do {
    plVar2 = (longlong *)0x0;
    plVar6 = *(longlong **)(unaff_RBX + 0x90);
    if (unaff_R13D < *(int *)(in_stack_00000038 + 0x2b8)) {
      unaff_R13D = *(int *)(in_stack_00000038 + 0x2b8);
    }
    if (plVar6 < *(longlong **)(unaff_RBX + 0x98)) {
      *plVar6 = in_stack_00000038;
      *(longlong *)(unaff_RBX + 0x90) = *(longlong *)(unaff_RBX + 0x90) + 8;
    }
    else {
      plVar5 = *(longlong **)(unaff_RBX + 0x88);
      lVar1 = (longlong)plVar6 - (longlong)plVar5 >> 3;
      if (lVar1 == 0) {
        lVar1 = 1;
LAB_18046192a:
        plVar2 = (longlong *)FUN_18062b420(system_memory_pool_ptr,lVar1 * 8);
        plVar5 = *(longlong **)(unaff_RBX + 0x88);
        plVar6 = *(longlong **)(unaff_RBX + 0x90);
      }
      else {
        lVar1 = lVar1 * 2;
        if (lVar1 != 0) goto LAB_18046192a;
      }
      if (plVar5 != plVar6) {
                    // WARNING: Subroutine does not return
        memmove(plVar2,plVar5,(longlong)plVar6 - (longlong)plVar5);
      }
      *plVar2 = in_stack_00000038;
      if (*(longlong *)(unaff_RBX + 0x88) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(longlong **)(unaff_RBX + 0x88) = plVar2;
      *(longlong **)(unaff_RBX + 0x98) = plVar2 + lVar1;
      *(longlong **)(unaff_RBX + 0x90) = plVar2 + 1;
      unaff_RBP = in_stack_00000070;
    }
    lVar1 = *plStackX_20;
    do {
      unaff_RDI = unaff_RDI + 1;
      lVar3 = (unaff_RDI & 0xffffffff) * 0x10;
      lVar4 = lVar3 + 8 + lVar1;
      if ((*(ulonglong *)(lVar3 + lVar1) & 0xffffffff00000000) == 0) {
        lVar4 = 0;
      }
      if (lVar4 != 0) {
        in_stack_00000038 = *(longlong *)(lVar1 + 8 + (unaff_RDI & 0xffffffff) * 0x10);
        break;
      }
    } while (unaff_RDI != plStackX_20[1]);
    if (unaff_RDI == unaff_RBP) {
      return unaff_R13D + 1;
    }
  } while( true );
}



int FUN_180461a0b(void)

{
  int unaff_R13D;
  
  return unaff_R13D + 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180461a20(longlong param_1,longlong param_2,longlong param_3)
void FUN_180461a20(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint64_t uVar6;
  int *apiStack_50 [2];
  void *puStack_40;
  void *puStack_38;
  longlong lStack_30;
  void *puStack_20;
  void *puStack_18;
  
  uVar6 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x88);
  lVar1 = lVar2 + 0x570;
  if ((*(char *)(lVar2 + 0x563) != '\0') &&
     (lVar5 = *(longlong *)(lVar2 + 0x5b0) - *(longlong *)(lVar2 + 0x5a8),
     iVar4 = (int)(lVar5 >> 0x3f), iVar3 = (int)(lVar5 / 0xc) + iVar4,
     iVar3 != iVar4 && -1 < iVar3 - iVar4)) {
    iVar3 = *(int *)(lVar2 + 0x2668);
    *(int *)(lVar2 + 0x2668) = iVar3 + 1;
    *(int *)(param_3 + 0x9a28) = iVar3;
    *(longlong *)(param_3 + 0x9a20) = lVar1;
    FUN_18024edc0(lVar1,*(uint64_t *)(param_3 + 0x3580));
    *(int8_t *)
     ((longlong)*(int *)(param_3 + 0x9a28) +
     ((longlong)*(int *)(*(longlong *)(param_2 + 0x3580) + 0x628) + 0x200) * 0x80 + render_system_data_memory)
         = 1;
    apiStack_50[0] =
         (int *)(((longlong)*(int *)(*(longlong *)(param_2 + 0x3580) + 0x628) * 0x80 +
                 (longlong)*(int *)(param_3 + 0x9a28)) * 0x20 + render_system_data_memory);
    puStack_40 = &unknown_var_848_ptr;
    puStack_38 = &unknown_var_800_ptr;
    FUN_18015b810(apiStack_50[0],0,apiStack_50[0][2] - *apiStack_50[0],0x10,0xffffffffffffffff,
                  apiStack_50,uVar6);
    lStack_30 = (((longlong)*(int *)(*(longlong *)(param_2 + 0x3580) + 0x628) + 8) * 0x80 +
                (longlong)*(int *)(param_3 + 0x9a28)) * 0x20 + render_system_data_memory;
    puStack_20 = &unknown_var_736_ptr;
    puStack_18 = &unknown_var_688_ptr;
    FUN_18015b810();
    func_0x00018024f0d0(lVar1,*(uint64_t *)(param_2 + 0x3580),param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180461c10(longlong param_1,int param_2,uint64_t param_3,longlong param_4,float *param_5,
void FUN_180461c10(longlong param_1,int param_2,uint64_t param_3,longlong param_4,float *param_5,
                  int param_6,int param_7,longlong param_8)

{
  uint uVar1;
  uint64_t ******ppppppuVar2;
  int iVar3;
  uint64_t *****pppppuVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  ulonglong *puVar9;
  uint64_t ****ppppuVar10;
  uint64_t *******pppppppuVar11;
  longlong lVar12;
  uint64_t *******pppppppuVar13;
  uint64_t ****ppppuVar14;
  ulonglong *puVar15;
  uint64_t ****ppppuVar16;
  uint64_t uVar17;
  longlong lVar18;
  bool bVar19;
  int32_t uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int8_t auStack_398 [48];
  int iStack_368;
  int iStack_364;
  int iStack_360;
  longlong *plStack_358;
  longlong lStack_350;
  longlong lStack_348;
  uint64_t uStack_340;
  float fStack_338;
  int32_t uStack_334;
  uint64_t uStack_330;
  float fStack_328;
  int32_t uStack_324;
  uint64_t ******ppppppuStack_320;
  uint64_t ******ppppppuStack_318;
  uint64_t ******ppppppuStack_310;
  uint64_t uStack_308;
  uint64_t uStack_300;
  int32_t uStack_2f8;
  longlong lStack_2f0;
  longlong lStack_2e8;
  uint64_t uStack_2a8;
  longlong lStack_2a0;
  longlong *plStack_250;
  longlong lStack_248;
  uint64_t uStack_240;
  int32_t uStack_238;
  longlong lStack_210;
  longlong lStack_208;
  uint64_t uStack_200;
  int32_t uStack_1f8;
  uint64_t uStack_1f0;
  int8_t auStack_1c8 [224];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  ulonglong uStack_88;
  
  uStack_1f0 = 0xfffffffffffffffe;
  uStack_88 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_398;
  uStack_340 = param_8;
  lVar18 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x88);
  iStack_364 = param_2;
  lStack_348 = lVar18;
  lStack_2f0 = param_4;
  lStack_2e8 = param_1;
  uVar20 = FUN_180094c20(auStack_1c8);
  FUN_18031e240(uVar20,auStack_1c8,param_5,param_6);
  fVar21 = *(float *)(*(longlong *)(param_1 + 8) + 0x210) * 0.5;
  fStack_328 = -fStack_e0 * fVar21 + param_5[2];
  fVar22 = -fStack_e4 * fVar21 + param_5[1];
  fVar23 = *param_5 - fStack_e8 * fVar21;
  if ((*(char *)(lVar18 + 0x563) != '\0') &&
     (lVar12 = *(longlong *)(lVar18 + 0x5b0) - *(longlong *)(lVar18 + 0x5a8),
     iVar3 = (int)(lVar12 >> 0x3f), iVar8 = (int)(lVar12 / 0xc) + iVar3,
     iVar8 != iVar3 && -1 < iVar8 - iVar3)) {
    lStack_210 = 0;
    lStack_208 = 0;
    uStack_200 = 0;
    uStack_1f8 = 3;
    FUN_180080ca0(&lStack_210,(*(longlong *)(lVar18 + 0x610) - *(longlong *)(lVar18 + 0x608)) / 0xbc
                 );
                    // WARNING: Subroutine does not return
    memset(lStack_210,0xffffffff,lStack_208 - lStack_210 & 0xfffffffffffffffc);
  }
  LOCK();
  *(uint64_t *)(param_8 + 8) = 0;
  UNLOCK();
  *(int32_t *)(param_8 + 0x10) = 0;
  plStack_250 = (longlong *)0x0;
  lStack_248 = 0;
  uStack_240 = 0;
  uStack_238 = 3;
  fStack_338 = fStack_328 + fVar21;
  uStack_340 = CONCAT44(fVar22 + fVar21,fVar23 + fVar21);
  uStack_334 = 0x7f7fffff;
  fStack_328 = fStack_328 - fVar21;
  uStack_330 = CONCAT44(fVar22 - fVar21,fVar23 - fVar21);
  uStack_324 = 0x7f7fffff;
  FUN_1803e1950(lVar18 + 0x60c80,&plStack_250,&uStack_330,&uStack_340);
  uStack_2f8 = 3;
  ppppppuStack_320 = &ppppppuStack_320;
  ppppppuStack_318 = &ppppppuStack_320;
  ppppppuStack_310 = (uint64_t *******)0x0;
  uStack_308 = 0;
  uStack_300 = 0;
  iStack_360 = 0;
  uStack_330 = lStack_248 - (longlong)plStack_250 >> 3;
  plVar6 = plStack_250;
  if (uStack_330 != 0) {
    do {
      plStack_358 = plVar6;
      uStack_340 = *plStack_358;
      iStack_368 = 0;
      lVar12 = *(longlong *)(uStack_340 + 8);
      if (*(longlong *)(uStack_340 + 0x10) - lVar12 >> 2 != 0) {
        lStack_350 = 0;
        do {
          lVar5 = lStack_350;
          iVar8 = iStack_368;
          uVar1 = *(uint *)(lStack_350 + lVar12);
          puVar9 = (ulonglong *)((ulonglong)uVar1 * 0x10 + *(longlong *)(lVar18 + 0x60830));
          puVar15 = puVar9 + 1;
          if ((*puVar9 & 0xffffffff00000000) == 0) {
            puVar15 = (ulonglong *)0x0;
          }
          if (((((puVar15 != (ulonglong *)0x0) &&
                (ppppppuVar2 = (uint64_t ******)*puVar15, ppppppuVar2 != (uint64_t ******)0x0))
               && ((int)uVar1 < param_7)) &&
              ((pppppuVar4 = ppppppuVar2[0x5d], ((ulonglong)pppppuVar4 & 1) != 0 &&
               (((ulonglong)pppppuVar4 & 2) != 0)))) && (((ulonglong)pppppuVar4 & 8) != 0)) {
            FUN_1801c0d90(ppppppuVar2);
            cVar7 = FUN_18063c5e0(auStack_1c8,ppppppuVar2[5]);
            if (cVar7 != '\0') {
              pppppppuVar13 = &ppppppuStack_320;
              pppppppuVar11 = (uint64_t *******)ppppppuStack_310;
              if ((uint64_t *******)ppppppuStack_310 != (uint64_t *******)0x0) {
                do {
                  if (pppppppuVar11[4] < ppppppuVar2) {
                    pppppppuVar11 = (uint64_t *******)*pppppppuVar11;
                  }
                  else {
                    pppppppuVar13 = pppppppuVar11;
                    pppppppuVar11 = (uint64_t *******)pppppppuVar11[1];
                  }
                } while (pppppppuVar11 != (uint64_t *******)0x0);
                if ((pppppppuVar13 != &ppppppuStack_320) && (pppppppuVar13[4] <= ppppppuVar2))
                goto LAB_18046261d;
              }
              lVar18 = (longlong)(int)uVar1 * 0x50 + *(longlong *)(lStack_2e8 + 0xb0);
              lStack_2a0 = lVar18;
              iVar8 = _Mtx_lock(lVar18);
              if (iVar8 != 0) {
                __Throw_C_error_std__YAXH_Z(iVar8);
              }
              *(int32_t *)(*(longlong *)(lStack_2f0 + 0x98f8) + (longlong)(int)uVar1 * 4) = 1;
              pppppuVar4 = ppppppuVar2[5];
              param_6 = param_6 + param_2 * 6;
              ppppuVar16 = pppppuVar4[0x27];
              if (ppppuVar16 < pppppuVar4[0x28]) {
                pppppuVar4[0x27] = (uint64_t ****)((longlong)ppppuVar16 + 4);
                *(int *)ppppuVar16 = param_6;
              }
              else {
                ppppuVar14 = pppppuVar4[0x26];
                lVar12 = (longlong)ppppuVar16 - (longlong)ppppuVar14 >> 2;
                if (lVar12 == 0) {
                  lVar12 = 1;
LAB_1804624cb:
                  ppppuVar10 = (uint64_t ****)
                               FUN_18062b420(system_memory_pool_ptr,lVar12 * 4,
                                             *(int8_t *)(pppppuVar4 + 0x29));
                  ppppuVar16 = pppppuVar4[0x27];
                  ppppuVar14 = pppppuVar4[0x26];
                }
                else {
                  lVar12 = lVar12 * 2;
                  if (lVar12 != 0) goto LAB_1804624cb;
                  ppppuVar10 = (uint64_t ****)0x0;
                }
                if (ppppuVar14 != ppppuVar16) {
                    // WARNING: Subroutine does not return
                  memmove(ppppuVar10,ppppuVar14,(longlong)ppppuVar16 - (longlong)ppppuVar14);
                }
                *(int *)ppppuVar10 = param_6;
                if (pppppuVar4[0x26] != (uint64_t ****)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                pppppuVar4[0x26] = ppppuVar10;
                pppppuVar4[0x27] = (uint64_t ****)((longlong)ppppuVar10 + 4);
                pppppuVar4[0x28] = (uint64_t ****)((longlong)ppppuVar10 + lVar12 * 4);
              }
              iVar8 = _Mtx_unlock(lVar18);
              if (iVar8 != 0) {
                __Throw_C_error_std__YAXH_Z(iVar8);
              }
              lVar18 = FUN_18062b420(system_memory_pool_ptr,0x28,(int8_t)uStack_2f8);
              *(uint64_t *******)(lVar18 + 0x20) = ppppppuVar2;
              bVar19 = true;
              pppppppuVar13 = &ppppppuStack_320;
              pppppppuVar11 = (uint64_t *******)ppppppuStack_310;
              while (pppppppuVar11 != (uint64_t *******)0x0) {
                bVar19 = ppppppuVar2 < pppppppuVar11[4];
                pppppppuVar13 = pppppppuVar11;
                if (bVar19) {
                  pppppppuVar11 = (uint64_t *******)pppppppuVar11[1];
                }
                else {
                  pppppppuVar11 = (uint64_t *******)*pppppppuVar11;
                }
              }
              pppppppuVar11 = pppppppuVar13;
              if (bVar19) {
                if (pppppppuVar13 == (uint64_t *******)ppppppuStack_318) goto LAB_1804625cf;
                pppppppuVar11 = (uint64_t *******)func_0x00018066b9a0(pppppppuVar13);
              }
              if (*(uint64_t *******)(lVar18 + 0x20) <= pppppppuVar11[4]) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(lVar18);
              }
LAB_1804625cf:
              if ((pppppppuVar13 == &ppppppuStack_320) ||
                 (*(uint64_t *******)(lVar18 + 0x20) < pppppppuVar13[4])) {
                uVar17 = 0;
              }
              else {
                uVar17 = 1;
              }
                    // WARNING: Subroutine does not return
              FUN_18066bdc0(lVar18,pppppppuVar13,&ppppppuStack_320,uVar17);
            }
          }
LAB_18046261d:
          iStack_368 = iVar8 + 1;
          lStack_350 = lVar5 + 4;
          lVar12 = *(longlong *)(uStack_340 + 8);
          param_2 = iStack_364;
        } while ((ulonglong)(longlong)iStack_368 <
                 (ulonglong)(*(longlong *)(uStack_340 + 0x10) - lVar12 >> 2));
      }
      iStack_360 = iStack_360 + 1;
      plStack_358 = plStack_358 + 1;
      plVar6 = plStack_358;
      param_2 = iStack_364;
    } while ((ulonglong)(longlong)iStack_360 < uStack_330);
  }
  ppppppuVar2 = ppppppuStack_310;
  if ((uint64_t *******)ppppppuStack_310 != (uint64_t *******)0x0) {
    FUN_18004b790(&ppppppuStack_320,*ppppppuStack_310);
                    // WARNING: Subroutine does not return
    FUN_18064e900(ppppppuVar2);
  }
  if (plStack_250 == (longlong *)0x0) {
    uVar17 = *(uint64_t *)(lStack_2e8 + 0xb0);
    uStack_2a8 = uVar17;
    iVar8 = _Mtx_lock(uVar17);
    if (iVar8 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar8);
    }
    iStack_368 = param_6 + iStack_364 * 6;
    FUN_1800571e0(lVar18 + 0x27f0,&iStack_368);
    iVar8 = _Mtx_unlock(uVar17);
    if (iVar8 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar8);
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_88 ^ (ulonglong)auStack_398);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plStack_250);
}





// 函数: void FUN_180462760(longlong param_1,int param_2,float *param_3)
void FUN_180462760(longlong param_1,int param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar2 = param_2 >> 0x1f & 0x3f;
  uVar1 = param_2 + uVar2;
  fVar8 = (float)(int)(((uVar1 & 0x3f) - uVar2) * 3);
  fVar5 = (float)*(int *)(param_1 + 0x84) / (float)*(int *)(param_1 + 0x74);
  fVar6 = (float)*(int *)(param_1 + 0x84) / (float)*(int *)(param_1 + 0x78);
  fVar7 = (float)(((int)uVar1 >> 6) * 2);
  fVar3 = fVar6 * fVar7;
  fVar9 = (fVar8 + 2.0) * fVar5;
  fVar4 = (fVar8 + 1.0) * fVar5;
  *param_3 = fVar5;
  param_3[1] = fVar6;
  param_3[2] = fVar8 * fVar5;
  param_3[3] = fVar3;
  fVar7 = (fVar7 + 1.0) * fVar6;
  param_3[4] = fVar5;
  param_3[5] = fVar6;
  param_3[6] = fVar4;
  param_3[7] = fVar3;
  param_3[8] = fVar5;
  param_3[9] = fVar6;
  param_3[10] = fVar9;
  param_3[0xb] = fVar3;
  param_3[0xc] = fVar5;
  param_3[0xd] = fVar6;
  param_3[0xe] = fVar8 * fVar5;
  param_3[0xf] = fVar7;
  param_3[0x10] = fVar5;
  param_3[0x11] = fVar6;
  param_3[0x12] = fVar4;
  param_3[0x13] = fVar7;
  param_3[0x14] = fVar5;
  param_3[0x15] = fVar6;
  param_3[0x16] = fVar9;
  param_3[0x17] = fVar7;
  return;
}



uint64_t *
FUN_180462890(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_1304_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t *
FUN_1804628e0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_1200_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180462930(longlong param_1)
void FUN_180462930(longlong param_1)

{
  ulonglong uVar1;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = *(ulonglong *)(param_1 + -0x10) >> 0x20;
  if ((int)(*(ulonglong *)(param_1 + -0x10) >> 0x20) != 0) {
    do {
      _Mtx_destroy_in_situ();
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_1 + -0x10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804629b0(uint64_t param_1,longlong *param_2,int param_3)
void FUN_1804629b0(uint64_t param_1,longlong *param_2,int param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t auStack_c8 [32];
  int32_t uStack_a8;
  uint64_t uStack_a0;
  longlong *plStack_98;
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  ulonglong uStack_28;
  
  uVar1 = render_system_data_memory;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_c8;
  uStack_a8 = 0;
  param_3 = param_3 * 0x70;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x1c;
  plStack_98 = param_2;
  strcpy_s(auStack_70,0x40,&system_data_fc60);
  FUN_1802037e0();
  puStack_88 = &unknown_var_720_ptr;
  uVar2 = FUN_18062b1e0(system_memory_pool_ptr,param_3,0x10,0x21);
  FUN_180462e40(uVar1,param_2);
  *(uint64_t *)(*param_2 + 0x10) = uVar2;
  *(int *)(*param_2 + 0x18) = param_3;
  *(int *)(*param_2 + 0x1c) = param_3;
  *(int8_t *)(*param_2 + 0x20) = 0;
  uStack_a8 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180462ae0(uint64_t param_1,longlong *param_2,int param_3)
void FUN_180462ae0(uint64_t param_1,longlong *param_2,int param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t auStack_c8 [32];
  int32_t uStack_a8;
  uint64_t uStack_a0;
  longlong *plStack_98;
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  ulonglong uStack_28;
  
  uVar1 = render_system_data_memory;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_c8;
  uStack_a8 = 0;
  param_3 = param_3 * 0x1e0;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x1c;
  plStack_98 = param_2;
  strcpy_s(auStack_70,0x40,&system_data_fc60);
  FUN_1802037e0();
  puStack_88 = &unknown_var_720_ptr;
  uVar2 = FUN_18062b1e0(system_memory_pool_ptr,param_3,0x10,0x21);
  FUN_180387ce0(uVar1,param_2);
  *(uint64_t *)(*param_2 + 0x10) = uVar2;
  *(int *)(*param_2 + 0x18) = param_3;
  *(int *)(*param_2 + 0x1c) = param_3;
  *(int8_t *)(*param_2 + 0x20) = 0;
  uStack_a8 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong *
FUN_180462c10(ulonglong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 == 0) {
    return (ulonglong *)0x0;
  }
  puVar1 = (ulonglong *)
           FUN_18062b420(system_memory_pool_ptr,param_1 * 0x50 + 0x10,0x21,param_4,0xfffffffffffffffe);
  *puVar1 = param_1 << 0x20 | 0x50;
  uVar2 = 0;
  uVar4 = uVar2;
  do {
    _Mtx_init_in_situ(puVar1 + 2 + uVar2 * 10,2);
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    uVar2 = (ulonglong)(int)uVar3;
  } while (uVar2 < param_1);
  return puVar1 + 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180462cc0(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (longlong)&unknown_var_3552_ptr;
    *plVar3 = (longlong)&unknown_var_3696_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&unknown_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&unknown_var_1200_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(longlong **)(lVar1 + -8);
    *(longlong *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (longlong)&unknown_var_3552_ptr;
    *plVar3 = (longlong)&unknown_var_3696_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&unknown_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&unknown_var_1200_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180462e40(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (longlong)&unknown_var_3552_ptr;
    *plVar3 = (longlong)&unknown_var_3696_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&unknown_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&unknown_var_1304_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(longlong **)(lVar1 + -8);
    *(longlong *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (longlong)&unknown_var_3552_ptr;
    *plVar3 = (longlong)&unknown_var_3696_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&unknown_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&unknown_var_1304_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}





