#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part066.c - 9 个函数

// 函数: void FUN_1803e6590(longlong param_1)
void FUN_1803e6590(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  lVar1 = *(longlong *)(param_1 + 400);
  iVar8 = 0x800;
  if (*(char *)(lVar1 + 0x1e50) != '\0') {
    iVar8 = 0x400;
  }
  plVar9 = (longlong *)0x0;
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 4);
  plVar2 = plVar9;
  plVar7 = plVar9;
  if (plVar4 != (longlong *)0x0) {
    do {
      iVar5 = (int)plVar7;
      piVar3 = (int *)((longlong)plVar2 * 0x10 + *(longlong *)(param_1 + 0xf0));
      if ((((*piVar3 == 0xe) && (piVar3[1] == iVar8)) && (piVar3[2] == iVar8)) && (piVar3[3] == 0))
      goto LAB_1803e661a;
      uVar6 = iVar5 + 1;
      plVar2 = (longlong *)(longlong)(int)uVar6;
      plVar7 = (longlong *)(ulonglong)uVar6;
    } while ((longlong *)(longlong)(int)uVar6 < plVar4);
  }
  iVar5 = -1;
LAB_1803e661a:
  plVar2 = plVar9;
  if (iVar5 != -1) {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x100) + (longlong)iVar5 * 8);
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar7 = *(longlong **)(lVar1 + 0x1d0);
  *(longlong **)(lVar1 + 0x1d0) = plVar2;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x38))();
  }
  plVar10 = (longlong *)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 4);
  plVar7 = plVar9;
  plVar4 = plVar9;
  plVar2 = plVar9;
  if (plVar10 != (longlong *)0x0) {
    do {
      piVar3 = (int *)((longlong)plVar4 * 0x10 + *(longlong *)(param_1 + 0xf0));
      if (((*piVar3 == 0x14) && (piVar3[1] == iVar8)) && ((piVar3[2] == iVar8 && (piVar3[3] == 0))))
      {
        plVar2 = (longlong *)0x0;
        if ((int)plVar7 != -1) {
          plVar2 = *(longlong **)
                    (*(longlong *)(*(longlong *)(param_1 + 400) + 0x100) + (longlong)plVar4 * 8);
        }
        break;
      }
      uVar6 = (int)plVar7 + 1;
      plVar7 = (longlong *)(ulonglong)uVar6;
      plVar4 = (longlong *)(longlong)(int)uVar6;
    } while (plVar4 < plVar10);
  }
  lVar1 = *(longlong *)(param_1 + 400);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar7 = *(longlong **)(lVar1 + 0x1d8);
  *(longlong **)(lVar1 + 0x1d8) = plVar2;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x38))();
  }
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 4);
  plVar2 = plVar9;
  plVar7 = plVar9;
  if (plVar4 != (longlong *)0x0) {
    do {
      piVar3 = (int *)((longlong)plVar7 * 0x10 + *(longlong *)(param_1 + 0xf0));
      if (((*piVar3 == 0x13) && (piVar3[1] == iVar8)) && ((piVar3[2] == iVar8 && (piVar3[3] == 0))))
      {
        if ((int)plVar2 != -1) {
          plVar9 = *(longlong **)
                    (*(longlong *)(*(longlong *)(param_1 + 400) + 0x100) + (longlong)plVar7 * 8);
        }
        break;
      }
      uVar6 = (int)plVar2 + 1;
      plVar2 = (longlong *)(ulonglong)uVar6;
      plVar7 = (longlong *)(longlong)(int)uVar6;
    } while (plVar7 < plVar4);
  }
  lVar1 = *(longlong *)(param_1 + 400);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9);
  }
  plVar2 = *(longlong **)(lVar1 + 0x1e0);
  *(longlong **)(lVar1 + 0x1e0) = plVar9;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e67b0(longlong param_1)
void FUN_1803e67b0(longlong param_1)

{
  uint64_t *puVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  int8_t auStack_3d8 [108];
  int32_t uStack_36c;
  longlong lStack_368;
  uint64_t *puStack_348;
  uint64_t uStack_310;
  uint64_t uStack_2a8;
  int8_t auStack_2a0 [568];
  ulonglong uStack_68;
  
  uStack_2a8 = 0xfffffffffffffffe;
  uStack_68 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_3d8;
  lStack_368 = param_1;
  FUN_1801ec5c0(auStack_2a0,&unknown_var_9624_ptr);
  fVar3 = (float)(*(int *)(*(longlong *)(param_1 + 400) + 0x18) << 8);
  fVar4 = (float)(*(int *)(*(longlong *)(param_1 + 400) + 0x14) << 8);
  uStack_36c = 0;
  puVar1 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(int16_t *)(puVar1 + 2) = 0;
  *(int8_t *)((longlong)puVar1 + 0x12) = 3;
  *(int32_t *)((longlong)puVar1 + 0x62) = 0;
  *(uint64_t *)((longlong)puVar1 + 0x54) = 0;
  *(int32_t *)((longlong)puVar1 + 0x5c) = 0;
  *(int16_t *)(puVar1 + 0xc) = 0;
  *(int8_t *)((longlong)puVar1 + 0x66) = 0;
  *(uint64_t *)((longlong)puVar1 + 0x14) = 0;
  *(uint64_t *)((longlong)puVar1 + 0x1c) = 0;
  *(uint64_t *)((longlong)puVar1 + 0x24) = 0;
  *(uint64_t *)((longlong)puVar1 + 0x2c) = 0;
  *(uint64_t *)((longlong)puVar1 + 0x34) = 0;
  *(uint64_t *)((longlong)puVar1 + 0x3c) = 0;
  *(uint64_t *)((longlong)puVar1 + 0x44) = 0;
  *(uint64_t *)((longlong)puVar1 + 0x4c) = 0;
  *(short *)((longlong)puVar1 + 0x5c) = (short)(int)fVar4;
  *(short *)((longlong)puVar1 + 0x5e) = (short)(int)fVar3;
  *(uint64_t *)((longlong)puVar1 + 0x54) = 0x2b;
  *(int32_t *)(puVar1 + 0xc) = 0x10001;
  *(int16_t *)((longlong)puVar1 + 100) = 0x102;
  puStack_348 = puVar1;
  FUN_1802a1bc0(puVar1);
  uStack_310 = *puVar1;
  fVar4 = fVar4 * fVar3;
  lVar2 = 0;
  if ((9.223372e+18 <= fVar4) && (fVar4 = fVar4 - 9.223372e+18, fVar4 < 9.223372e+18)) {
    lVar2 = -0x8000000000000000;
  }
                    // WARNING: Subroutine does not return
  memset(uStack_310,0xff,(longlong)fVar4 + lVar2);
}






// 函数: void FUN_1803e6e20(uint64_t *param_1,int param_2,int param_3)
void FUN_1803e6e20(uint64_t *param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  float *pfVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  uint64_t *puVar13;
  int iVar14;
  int8_t auStack_48 [32];
  
  if (param_2 < param_3) {
    do {
      iVar14 = 0;
      do {
        iVar11 = 0;
        uVar10 = 0xff;
        if (0 < *(int *)*param_1) {
          lVar9 = 0;
          do {
            lVar2 = *(longlong *)(lVar9 + 8 + param_1[1]);
            uVar1 = *(uint *)(lVar9 + param_1[1]);
            if (((lVar2 == 0) || (uVar1 == 0)) ||
               (pfVar4 = (float *)FUN_1802a11e0(lVar2,auStack_48,
                                                CONCAT44((float)param_2 * *(float *)param_1[2],
                                                         (float)iVar14 * *(float *)param_1[2]),1),
               0.85 < *pfVar4)) {
              uVar10 = uVar1 & 0xff;
              break;
            }
            iVar11 = iVar11 + 1;
            lVar9 = lVar9 + 0x10;
          } while (iVar11 < *(int *)*param_1);
        }
        cVar12 = -1;
        if ((char)uVar10 != -1) {
          puVar13 = (uint64_t *)(param_1[3] + 0x30);
          puVar7 = *(uint64_t **)(param_1[3] + 0x40);
          puVar5 = puVar13;
          if (puVar7 == (uint64_t *)0x0) {
LAB_1803e6f51:
            puVar6 = puVar13;
          }
          else {
            do {
              if ((*(int *)(puVar7 + 4) < (int)uVar10) ||
                 ((*(int *)(puVar7 + 4) <= (int)uVar10 && (*(int *)((longlong)puVar7 + 0x24) < 0))))
              {
                puVar8 = (uint64_t *)*puVar7;
                bVar3 = true;
              }
              else {
                puVar8 = (uint64_t *)puVar7[1];
                bVar3 = false;
              }
              puVar6 = puVar7;
              if (bVar3) {
                puVar6 = puVar5;
              }
              puVar5 = puVar6;
              puVar7 = puVar8;
            } while (puVar8 != (uint64_t *)0x0);
            if (((puVar6 == puVar13) || ((int)uVar10 < *(int *)(puVar6 + 4))) ||
               (((int)uVar10 <= *(int *)(puVar6 + 4) && (0 < *(int *)((longlong)puVar6 + 0x24)))))
            goto LAB_1803e6f51;
          }
          cVar12 = *(char *)((longlong)puVar6 + 0x2c) * '\x10' + (char)uVar10;
        }
        iVar11 = ((*(int *)param_1[5] * 0x100 + param_2) *
                  *(int *)(*(longlong *)(param_1[3] + 400) + 0x14) + *(int *)param_1[4]) * 0x100 +
                 iVar14;
        iVar14 = iVar14 + 1;
        *(char *)((longlong)iVar11 + *(longlong *)param_1[6]) = cVar12;
        *(int *)param_1[7] = *(int *)param_1[7] + 1;
      } while (iVar14 < 0x100);
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  return;
}






// 函数: void FUN_1803e6e36(uint64_t *param_1,int param_2,int param_3)
void FUN_1803e6e36(uint64_t *param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong in_RAX;
  float *pfVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t unaff_RBX;
  longlong lVar9;
  uint uVar10;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int iVar11;
  uint64_t unaff_RDI;
  char cVar12;
  uint64_t *puVar13;
  int iVar14;
  uint64_t unaff_R15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float fStack0000000000000098;
  float fStack000000000000009c;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  do {
    iVar14 = 0;
    do {
      iVar11 = 0;
      uVar10 = 0xff;
      if (0 < *(int *)*param_1) {
        lVar9 = 0;
        do {
          lVar2 = *(longlong *)(lVar9 + 8 + param_1[1]);
          uVar1 = *(uint *)(lVar9 + param_1[1]);
          if ((lVar2 == 0) || (uVar1 == 0)) {
LAB_1803e6ee4:
            uVar10 = uVar1 & 0xff;
            break;
          }
          fStack0000000000000098 = (float)iVar14 * *(float *)param_1[2];
          fStack000000000000009c = (float)param_2 * *(float *)param_1[2];
          pfVar4 = (float *)FUN_1802a11e0(lVar2,&stack0x00000030,
                                          CONCAT44(fStack000000000000009c,fStack0000000000000098),1)
          ;
          if (0.85 < *pfVar4) goto LAB_1803e6ee4;
          iVar11 = iVar11 + 1;
          lVar9 = lVar9 + 0x10;
        } while (iVar11 < *(int *)*param_1);
      }
      cVar12 = -1;
      if ((char)uVar10 != -1) {
        puVar13 = (uint64_t *)(param_1[3] + 0x30);
        puVar7 = *(uint64_t **)(param_1[3] + 0x40);
        puVar5 = puVar13;
        if (puVar7 == (uint64_t *)0x0) {
LAB_1803e6f51:
          puVar6 = puVar13;
        }
        else {
          do {
            if ((*(int *)(puVar7 + 4) < (int)uVar10) ||
               ((*(int *)(puVar7 + 4) <= (int)uVar10 && (*(int *)((longlong)puVar7 + 0x24) < 0)))) {
              puVar8 = (uint64_t *)*puVar7;
              bVar3 = true;
            }
            else {
              puVar8 = (uint64_t *)puVar7[1];
              bVar3 = false;
            }
            puVar6 = puVar7;
            if (bVar3) {
              puVar6 = puVar5;
            }
            puVar5 = puVar6;
            puVar7 = puVar8;
          } while (puVar8 != (uint64_t *)0x0);
          if (((puVar6 == puVar13) || ((int)uVar10 < *(int *)(puVar6 + 4))) ||
             (((int)uVar10 <= *(int *)(puVar6 + 4) && (0 < *(int *)((longlong)puVar6 + 0x24)))))
          goto LAB_1803e6f51;
        }
        cVar12 = *(char *)((longlong)puVar6 + 0x2c) * '\x10' + (char)uVar10;
      }
      iVar11 = ((*(int *)param_1[5] * 0x100 + param_2) *
                *(int *)(*(longlong *)(param_1[3] + 400) + 0x14) + *(int *)param_1[4]) * 0x100 +
               iVar14;
      iVar14 = iVar14 + 1;
      *(char *)((longlong)iVar11 + *(longlong *)param_1[6]) = cVar12;
      *(int *)param_1[7] = *(int *)param_1[7] + 1;
    } while (iVar14 < 0x100);
    param_2 = param_2 + 1;
    if (param_3 <= param_2) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1803e6fe8(void)
void FUN_1803e6fe8(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e6ff0(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4)
void FUN_1803e6ff0(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int **ppiVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  double dVar12;
  ulonglong uVar13;
  int iVar14;
  float fVar15;
  uint64_t uStackX_18;
  ulonglong uStackX_20;
  int8_t auStack_478 [32];
  uint64_t uStack_458;
  uint64_t *puStack_450;
  char acStack_438 [936];
  uint64_t uStack_90;
  int *piStack_68;
  longlong lStack_60;
  int *piStack_58;
  longlong lStack_50;
  
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 400) + 0x14);
  iVar2 = (int)lVar9;
  iVar10 = (int)((ulonglong)lVar9 >> 0x20);
  dVar12 = (double)(ulonglong)(uint)(iVar2 * iVar10);
  uStack_90 = 0x1803e703b;
  uStackX_18 = (double)lVar9;
  FUN_180628040();
  iVar14 = 0;
  if (iVar10 != 0 && -1 < lVar9) {
    iVar10 = uStackX_18._4_4_;
    uStackX_20 = 0;
    do {
      iVar8 = 0;
      if (0 < iVar2) {
        uStackX_18 = (double)CONCAT44(uStackX_18._4_4_,iVar2 + -1);
        uVar13 = uStackX_20;
        do {
          lVar9 = *(longlong *)(param_1 + 400);
          param_4 = *(longlong *)(lVar9 + 0x40);
          uVar6 = uVar13 % (ulonglong)*(uint *)(lVar9 + 0x48);
          for (piVar3 = *(int **)(param_4 + uVar6 * 8); piVar3 != (int *)0x0;
              piVar3 = *(int **)(piVar3 + 4)) {
            if ((iVar8 == *piVar3) && (iVar14 == piVar3[1])) goto LAB_1803e70db;
          }
          piVar3 = (int *)0x0;
LAB_1803e70db:
          lVar9 = *(longlong *)(lVar9 + 0x48);
          if (piVar3 == (int *)0x0) {
            piStack_58 = *(int **)(param_4 + lVar9 * 8);
            ppiVar4 = &piStack_58;
            lStack_50 = param_4 + lVar9 * 8;
          }
          else {
            piStack_68 = piVar3;
            ppiVar4 = &piStack_68;
            lStack_60 = param_4 + uVar6 * 8;
          }
          if (*ppiVar4 == *(int **)(param_4 + lVar9 * 8)) {
            lVar9 = 0;
          }
          else {
            lVar9 = *(longlong *)(*ppiVar4 + 2);
          }
          uStack_90 = 0x1803e712c;
          FUN_180628040(param_2,&unknown_var_9612_ptr);
          plVar11 = (longlong *)(lVar9 + 0x718);
          lVar9 = 0xf;
          do {
            if ((*plVar11 == 0) || (uVar1 = *(ushort *)(*plVar11 + 0x5c), uVar1 == 0)) {
              fVar15 = 0.0;
            }
            else {
              fVar15 = 1.0 / (float)uVar1;
            }
            dVar12 = (double)fVar15;
            uStack_90 = 0x1803e717a;
            FUN_180628040(param_2,&unknown_var_9616_ptr);
            plVar11 = plVar11 + 1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          uStack_90 = 0x1803e7193;
          FUN_180628040(param_2);
          if ((iVar8 != (int)uStackX_18) || (iVar14 != iVar10 + -1)) {
            uStack_90 = 0x1803e71b4;
            FUN_180628040(param_2);
          }
          iVar8 = iVar8 + 1;
          uVar13 = uVar13 + 1000;
        } while (iVar8 < iVar2);
      }
      uStackX_20 = uStackX_20 + 1;
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar10);
  }
  uVar13 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_478;
  uStackX_18 = dVar12;
  uStackX_20 = param_4;
  puVar5 = (ulonglong *)func_0x00018004b9a0();
  lVar9 = 0;
  uStack_458 = 0;
  puStack_450 = &uStackX_18;
  iVar2 = __stdio_common_vsprintf(*puVar5 | 1,0,0,&unknown_var_9680_ptr);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  if (iVar2 < 0x400) {
    uStack_458 = 0;
    puStack_450 = &uStackX_18;
    __stdio_common_vsprintf(*puVar5 | 1,acStack_438,0x400,&unknown_var_9680_ptr);
    lVar9 = -1;
    do {
      lVar7 = lVar9;
      lVar9 = lVar7 + 1;
    } while (acStack_438[lVar7 + 1] != '\0');
    iVar2 = (int)(lVar7 + 1);
    if (0 < iVar2) {
      FUN_1806277c0(param_2,*(int *)(param_2 + 0x10) + iVar2);
                    // WARNING: Subroutine does not return
      memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),acStack_438,
             (longlong)((int)lVar7 + 2));
    }
  }
  else {
    iVar2 = iVar2 + 1;
    if (iVar2 != 0) {
      lVar9 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar2,3);
    }
    FUN_18004b9b0(lVar9,(longlong)iVar2,&unknown_var_9680_ptr,&uStackX_18);
    FUN_1806281a0(param_2,lVar9);
    if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar9);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uVar13 ^ (ulonglong)auStack_478);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e7046(uint64_t param_1,uint64_t param_2,double param_3,longlong param_4,
void FUN_1803e7046(uint64_t param_1,uint64_t param_2,double param_3,longlong param_4,
                  uint64_t param_5,int *param_6,longlong param_7)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int **ppiVar4;
  ulonglong *puVar5;
  int unaff_EBX;
  longlong lVar6;
  int iVar7;
  longlong unaff_RSI;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong unaff_R14;
  int unaff_R15D;
  uint64_t uVar11;
  float fVar12;
  int *piStackX_20;
  longlong in_stack_00000090;
  int iStack00000000000000a0;
  int iStack00000000000000a4;
  ulonglong uStack00000000000000a8;
  int8_t auStack_3f0 [32];
  uint64_t uStack_3d0;
  uint64_t *puStack_3c8;
  char acStack_3b0 [936];
  uint64_t uStack_8;
  
  iVar2 = iStack00000000000000a4;
  uStack00000000000000a8 = 0;
  do {
    iVar7 = 0;
    if (0 < unaff_EBX) {
      _iStack00000000000000a0 = (double)CONCAT44(iStack00000000000000a4,unaff_EBX + -1);
      uVar10 = uStack00000000000000a8;
      do {
        lVar8 = *(longlong *)(unaff_RSI + 400);
        param_4 = *(longlong *)(lVar8 + 0x40);
        for (piVar3 = *(int **)(param_4 + (uVar10 % (ulonglong)*(uint *)(lVar8 + 0x48)) * 8);
            piVar3 != (int *)0x0; piVar3 = *(int **)(piVar3 + 4)) {
          if ((iVar7 == *piVar3) && (unaff_R15D == piVar3[1])) goto LAB_1803e70db;
        }
        piVar3 = (int *)0x0;
LAB_1803e70db:
        lVar8 = *(longlong *)(lVar8 + 0x48);
        if (piVar3 == (int *)0x0) {
          param_6 = *(int **)(param_4 + lVar8 * 8);
          ppiVar4 = &param_6;
          param_7 = param_4 + lVar8 * 8;
        }
        else {
          piStackX_20 = piVar3;
          ppiVar4 = &piStackX_20;
        }
        if (*ppiVar4 == *(int **)(param_4 + lVar8 * 8)) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(longlong *)(*ppiVar4 + 2);
        }
        uStack_8 = 0x1803e712c;
        FUN_180628040();
        plVar9 = (longlong *)(lVar8 + 0x718);
        lVar8 = 0xf;
        do {
          if ((*plVar9 == 0) || (uVar1 = *(ushort *)(*plVar9 + 0x5c), uVar1 == 0)) {
            fVar12 = 0.0;
          }
          else {
            fVar12 = 1.0 / (float)uVar1;
          }
          param_3 = (double)fVar12;
          uStack_8 = 0x1803e717a;
          FUN_180628040();
          plVar9 = plVar9 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        uStack_8 = 0x1803e7193;
        FUN_180628040();
        if ((iVar7 != iStack00000000000000a0) || (unaff_R15D != iVar2 + -1)) {
          uStack_8 = 0x1803e71b4;
          FUN_180628040();
        }
        iVar7 = iVar7 + 1;
        uVar10 = uVar10 + 1000;
        unaff_RSI = in_stack_00000090;
      } while (iVar7 < unaff_EBX);
    }
    uStack00000000000000a8 = uStack00000000000000a8 + 1;
    unaff_R15D = unaff_R15D + 1;
    if (iVar2 <= unaff_R15D) {
      uVar10 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_3f0;
      _iStack00000000000000a0 = param_3;
      uStack00000000000000a8 = param_4;
      puVar5 = (ulonglong *)func_0x00018004b9a0();
      lVar8 = 0;
      uStack_3d0 = 0;
      puStack_3c8 = (uint64_t *)&stack0x000000a0;
      iVar2 = __stdio_common_vsprintf(*puVar5 | 1,0,0,&unknown_var_9680_ptr);
      if (iVar2 < 0) {
        iVar2 = -1;
      }
      if (iVar2 < 0x400) {
        uStack_3d0 = 0;
        puStack_3c8 = (uint64_t *)&stack0x000000a0;
        uVar11 = __stdio_common_vsprintf(*puVar5 | 1,acStack_3b0,0x400,&unknown_var_9680_ptr);
        lVar8 = -1;
        do {
          lVar6 = lVar8;
          lVar8 = lVar6 + 1;
        } while (acStack_3b0[lVar6 + 1] != '\0');
        iVar2 = (int)(lVar6 + 1);
        if (0 < iVar2) {
          FUN_1806277c0(uVar11,*(int *)(unaff_R14 + 0x10) + iVar2);
                    // WARNING: Subroutine does not return
          memcpy((ulonglong)*(uint *)(unaff_R14 + 0x10) + *(longlong *)(unaff_R14 + 8),acStack_3b0,
                 (longlong)((int)lVar6 + 2));
        }
      }
      else {
        iVar2 = iVar2 + 1;
        if (iVar2 != 0) {
          lVar8 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar2,3);
        }
        uVar11 = FUN_18004b9b0(lVar8,(longlong)iVar2,&unknown_var_9680_ptr,&stack0x000000a0);
        FUN_1806281a0(uVar11,lVar8);
        if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar8);
        }
      }
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uVar10 ^ (ulonglong)auStack_3f0);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e7203(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803e7203(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_R14;
  ulonglong uStack0000000000000050;
  uint64_t uStack0000000000000060;
  uint64_t in_stack_00000068;
  void *puStack0000000000000098;
  uint64_t uStack00000000000000a0;
  uint64_t uStack00000000000000a8;
  int8_t auStack_3f0 [32];
  uint64_t uStack_3d0;
  int8_t *puStack_3c8;
  char acStack_3b0 [944];
  
  puStack0000000000000098 = &unknown_var_9680_ptr;
  uStack0000000000000060 = in_stack_00000068;
  uStack0000000000000050 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_3f0;
  uStack00000000000000a0 = param_3;
  uStack00000000000000a8 = param_4;
  puVar2 = (ulonglong *)func_0x00018004b9a0();
  lVar3 = 0;
  uStack_3d0 = 0;
  puStack_3c8 = (int8_t *)&stack0x000000a0;
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,0,0,&unknown_var_9680_ptr);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (iVar1 < 0x400) {
    uStack_3d0 = 0;
    puStack_3c8 = (int8_t *)&stack0x000000a0;
    __stdio_common_vsprintf(*puVar2 | 1,acStack_3b0,0x400,puStack0000000000000098);
    lVar3 = -1;
    do {
      lVar4 = lVar3;
      lVar3 = lVar4 + 1;
    } while (acStack_3b0[lVar4 + 1] != '\0');
    if (0 < (int)(lVar4 + 1)) {
      FUN_1806277c0();
                    // WARNING: Subroutine does not return
      memcpy((ulonglong)*(uint *)(unaff_R14 + 0x10) + *(longlong *)(unaff_R14 + 8),acStack_3b0,
             (longlong)((int)lVar4 + 2));
    }
  }
  else {
    iVar1 = iVar1 + 1;
    if (iVar1 != 0) {
      lVar3 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar1,3);
    }
    FUN_18004b9b0(lVar3,(longlong)iVar1,puStack0000000000000098,&stack0x000000a0);
    FUN_1806281a0();
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack0000000000000050 ^ (ulonglong)auStack_3f0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e7220(longlong param_1,int param_2)
void FUN_1803e7220(longlong param_1,int param_2)

{
  uint64_t *puVar1;
  bool bVar2;
  uint64_t *puVar3;
  char cVar4;
  longlong lVar5;
  uint64_t *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint64_t uVar12;
  void *puStack_50;
  longlong lStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  uVar12 = 0xfffffffffffffffe;
  uVar9 = 0;
  *(int32_t *)(param_1 + 0x180) = 0;
  puVar1 = (uint64_t *)(param_1 + 0x150);
  FUN_1800572d0(puVar1);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 400) + 0x68);
  lVar7 = *(longlong *)(lVar5 + 0x60b20);
  if (*(longlong *)(lVar5 + 0x60b28) - lVar7 >> 3 != 0) {
    uVar8 = uVar9;
    uVar11 = uVar9;
    do {
      lVar7 = *(longlong *)
               ((longlong)param_2 * 8 + 8 + *(longlong *)(lVar7 + (longlong)(int)uVar8 * 8));
      puStack_50 = &unknown_var_3456_ptr;
      uStack_38 = 0;
      lStack_48 = 0;
      uStack_40 = 0;
      cVar4 = FUN_1801fcbc0(lVar7,&puStack_50,uVar8,&unknown_var_3456_ptr,uVar12);
      iVar10 = (int)uVar11;
      if (cVar4 != '\0') {
        if ((*(char *)(lVar7 + 0x382) != '\0') && (cVar4 = FUN_1801fcbc0(lVar7,0), cVar4 != '\0')) {
          *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
        }
        lVar5 = FUN_18062b420(_DAT_180c8ed18,0x28,*(int8_t *)(param_1 + 0x178));
        *(int *)(lVar5 + 0x20) = iVar10;
        bVar2 = true;
        puVar3 = puVar1;
        puVar6 = *(uint64_t **)(param_1 + 0x160);
        while (puVar6 != (uint64_t *)0x0) {
          bVar2 = iVar10 < *(int *)(puVar6 + 4);
          puVar3 = puVar6;
          if (iVar10 < *(int *)(puVar6 + 4)) {
            puVar6 = (uint64_t *)puVar6[1];
          }
          else {
            puVar6 = (uint64_t *)*puVar6;
          }
        }
        puVar6 = puVar3;
        if (bVar2) {
          if (puVar3 == *(uint64_t **)(param_1 + 0x158)) goto LAB_1803e737d;
          puVar6 = (uint64_t *)func_0x00018066b9a0(puVar3);
        }
        if (*(int *)(lVar5 + 0x20) <= *(int *)(puVar6 + 4)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar5);
        }
LAB_1803e737d:
        if ((puVar3 == puVar1) || (uVar8 = 1, *(int *)(lVar5 + 0x20) < *(int *)(puVar3 + 4))) {
          uVar8 = uVar9;
        }
                    // WARNING: Subroutine does not return
        FUN_18066bdc0(lVar5,puVar3,puVar1,uVar8);
      }
      puStack_50 = &unknown_var_3456_ptr;
      if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uVar11 = (ulonglong)(iVar10 + 1U);
      uVar8 = (ulonglong)(int)(iVar10 + 1U);
      lVar7 = *(longlong *)(lVar5 + 0x60b20);
    } while (uVar8 < (ulonglong)(*(longlong *)(lVar5 + 0x60b28) - lVar7 >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




