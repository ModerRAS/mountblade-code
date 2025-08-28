#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part198.c - 13 个函数

// 函数: void FUN_1807833a7(longlong param_1,uint64_t param_2,longlong param_3,float *param_4)
void FUN_1807833a7(longlong param_1,uint64_t param_2,longlong param_3,float *param_4)

{
  float fVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  float *pfVar2;
  longlong unaff_RDI;
  longlong lVar3;
  int in_R10D;
  longlong lVar4;
  longlong unaff_R15;
  float fVar5;
  int aiStackX_20 [2];
  ulonglong in_stack_00000060;
  
code_r0x0001807833a7:
  param_1 = param_1 + 3;
  pfVar2 = param_4;
  lVar4 = param_3;
joined_r0x000180783279:
  do {
    do {
      while (lVar3 = lVar4, lVar4 = param_3 + -1, param_1 <= lVar4) {
        aiStackX_20[param_3] = aiStackX_20[lVar4];
        param_3 = lVar4;
        lVar4 = lVar3;
      }
      aiStackX_20[param_1] = in_R10D;
      param_3 = lVar3 + 1;
      in_R10D = in_R10D + 1;
      param_4 = pfVar2 + 0xc;
      if (unaff_R15 <= param_3) {
        pfVar2 = (float *)(unaff_RDI + 0x10);
        do {
          lVar4 = (longlong)aiStackX_20[unaff_RBP];
          fVar5 = *(float *)(unaff_RSI + 4 + lVar4 * 0x30);
          if ((fVar5 != 0.0) || (*(float *)(unaff_RSI + 0xc + lVar4 * 0x30) != 0.0)) {
            fVar5 = (float)atan2f(fVar5,*(int32_t *)(unaff_RSI + 0xc + lVar4 * 0x30));
            pfVar2[-3] = fVar5 * 57.295776;
            fVar5 = *(float *)(unaff_RSI + 4 + lVar4 * 0x30);
            fVar1 = *(float *)(unaff_RSI + 0xc + lVar4 * 0x30);
            *pfVar2 = SQRT(fVar1 * fVar1 + fVar5 * fVar5);
          }
          fVar5 = *(float *)(unaff_RSI + 0x1c + lVar4 * 0x30);
          if ((fVar5 != 0.0) || (*(float *)(unaff_RSI + 0x24 + lVar4 * 0x30) != 0.0)) {
            fVar5 = (float)atan2f(fVar5,*(int32_t *)(unaff_RSI + 0x24 + lVar4 * 0x30));
            pfVar2[-2] = fVar5 * 57.295776;
          }
          unaff_RBP = unaff_RBP + 1;
          pfVar2[-1] = *(float *)(&stack0x00000040 + lVar4 * 4);
          pfVar2[-4] = *(float *)(unaff_RSI + 0x184 + lVar4 * 4);
          pfVar2 = pfVar2 + 5;
        } while (unaff_RBP < unaff_R15);
                    // WARNING: Subroutine does not return
        FUN_1808fc050(in_stack_00000060 ^ (ulonglong)&stack0x00000000);
      }
      fVar5 = SQRT(pfVar2[0xd] * pfVar2[0xd] + *param_4 * *param_4 + pfVar2[0xe] * pfVar2[0xe]);
      *(float *)(&stack0x00000040 + param_3 * 4) = fVar5;
      param_1 = unaff_RBP;
      pfVar2 = param_4;
      lVar4 = param_3;
      if (3 < param_3) {
        do {
          if (fVar5 < *(float *)(&stack0x00000040 + (longlong)aiStackX_20[param_1] * 4))
          goto joined_r0x000180783279;
          if (fVar5 < *(float *)(&stack0x00000040 + (longlong)aiStackX_20[param_1 + 1] * 4)) {
            param_1 = param_1 + 1;
            goto joined_r0x000180783279;
          }
          if (fVar5 < *(float *)(&stack0x00000040 +
                                (longlong)*(int *)(&stack0x00000028 + param_1 * 4) * 4)) {
            param_1 = param_1 + 2;
            goto joined_r0x000180783279;
          }
          if (fVar5 < *(float *)(&stack0x00000040 +
                                (longlong)*(int *)(&stack0x0000002c + param_1 * 4) * 4))
          goto code_r0x0001807833a7;
          param_1 = param_1 + 4;
        } while (param_1 < lVar3 + -2);
      }
    } while (param_3 <= param_1);
    do {
      if (fVar5 < *(float *)(&stack0x00000040 + (longlong)aiStackX_20[param_1] * 4)) break;
      param_1 = param_1 + 1;
    } while (param_1 < param_3);
  } while( true );
}



uint64_t FUN_1807833e0(longlong param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int iVar6;
  uint64_t uVar7;
  int8_t *puStackX_20;
  
  if (param_2 == 1) {
    if (*(short *)(param_1 + 0x118) != 0) {
      iVar6 = func_0x000180746b50(*(short *)(param_1 + 0x118));
      *(int *)(param_1 + 0x250) = iVar6;
      if (iVar6 == 1) {
        *(int32_t *)(param_1 + 0x250) = *(int32_t *)(*(longlong *)(param_1 + 0xa8) + 0x1193c);
      }
    }
    if ((*(int *)(param_1 + 0x24c) != *(int *)(param_1 + 0x250)) ||
       (*(char *)(param_1 + 0x221) != '\0')) {
      uVar7 = FUN_180784d10(param_1,param_1 + 0x278,1);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      if (*(char *)(param_1 + 0x221) != (char)uVar7) {
        uVar7 = FUN_180765990(*(uint64_t *)(param_1 + 0x218),0,1);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        *(char *)(param_1 + 0x221) = (char)uVar7;
        return uVar7;
      }
    }
  }
  else if (param_2 == 2) {
    if (*(short *)(param_1 + 0x118) != 0) {
      iVar6 = func_0x000180746b50(*(short *)(param_1 + 0x118));
      *(int *)(param_1 + 0x250) = iVar6;
      if (iVar6 == 1) {
        *(int32_t *)(param_1 + 0x250) = *(int32_t *)(*(longlong *)(param_1 + 0xa8) + 0x1193c);
      }
    }
    uVar7 = FUN_180784d10(param_1,param_3 + 0x10,1);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
  }
  else if ((param_2 == 0x40) && (*(char *)(param_1 + 0x220) != '\0')) {
    uVar7 = FUN_180743700(*(uint64_t *)(param_1 + 0xa8),&puStackX_20,0x104,1);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    *puStackX_20 = 7;
    *(longlong *)(puStackX_20 + 8) = param_1;
    uVar7 = *(uint64_t *)(param_1 + 0x390);
    *(uint64_t *)(puStackX_20 + 0x10) = *(uint64_t *)(param_1 + 0x388);
    *(uint64_t *)(puStackX_20 + 0x18) = uVar7;
    uVar7 = *(uint64_t *)(param_1 + 0x3a0);
    *(uint64_t *)(puStackX_20 + 0x20) = *(uint64_t *)(param_1 + 0x398);
    *(uint64_t *)(puStackX_20 + 0x28) = uVar7;
    uVar7 = *(uint64_t *)(param_1 + 0x3b0);
    *(uint64_t *)(puStackX_20 + 0x30) = *(uint64_t *)(param_1 + 0x3a8);
    *(uint64_t *)(puStackX_20 + 0x38) = uVar7;
    uVar7 = *(uint64_t *)(param_1 + 0x3c0);
    *(uint64_t *)(puStackX_20 + 0x40) = *(uint64_t *)(param_1 + 0x3b8);
    *(uint64_t *)(puStackX_20 + 0x48) = uVar7;
    uVar7 = *(uint64_t *)(param_1 + 0x3d0);
    *(uint64_t *)(puStackX_20 + 0x50) = *(uint64_t *)(param_1 + 0x3c8);
    *(uint64_t *)(puStackX_20 + 0x58) = uVar7;
    uVar7 = *(uint64_t *)(param_1 + 0x3e0);
    *(uint64_t *)(puStackX_20 + 0x60) = *(uint64_t *)(param_1 + 0x3d8);
    *(uint64_t *)(puStackX_20 + 0x68) = uVar7;
    uVar7 = *(uint64_t *)(param_1 + 0x3f0);
    *(uint64_t *)(puStackX_20 + 0x70) = *(uint64_t *)(param_1 + 1000);
    *(uint64_t *)(puStackX_20 + 0x78) = uVar7;
    uVar7 = *(uint64_t *)(param_1 + 0x400);
    *(uint64_t *)(puStackX_20 + 0x80) = *(uint64_t *)(param_1 + 0x3f8);
    *(uint64_t *)(puStackX_20 + 0x88) = uVar7;
    uVar7 = *(uint64_t *)(param_1 + 0x410);
    *(uint64_t *)(puStackX_20 + 0x90) = *(uint64_t *)(param_1 + 0x408);
    *(uint64_t *)(puStackX_20 + 0x98) = uVar7;
    uVar7 = *(uint64_t *)(param_1 + 0x420);
    *(uint64_t *)(puStackX_20 + 0xa0) = *(uint64_t *)(param_1 + 0x418);
    *(uint64_t *)(puStackX_20 + 0xa8) = uVar7;
    uVar7 = *(uint64_t *)(param_1 + 0x430);
    *(uint64_t *)(puStackX_20 + 0xb0) = *(uint64_t *)(param_1 + 0x428);
    *(uint64_t *)(puStackX_20 + 0xb8) = uVar7;
    uVar7 = *(uint64_t *)(param_1 + 0x440);
    *(uint64_t *)(puStackX_20 + 0xc0) = *(uint64_t *)(param_1 + 0x438);
    *(uint64_t *)(puStackX_20 + 200) = uVar7;
    uVar7 = *(uint64_t *)(param_1 + 0x450);
    *(uint64_t *)(puStackX_20 + 0xd0) = *(uint64_t *)(param_1 + 0x448);
    *(uint64_t *)(puStackX_20 + 0xd8) = uVar7;
    uVar3 = *(int32_t *)(param_1 + 0x45c);
    uVar4 = *(int32_t *)(param_1 + 0x460);
    uVar5 = *(int32_t *)(param_1 + 0x464);
    *(int32_t *)(puStackX_20 + 0xe0) = *(int32_t *)(param_1 + 0x458);
    *(int32_t *)(puStackX_20 + 0xe4) = uVar3;
    *(int32_t *)(puStackX_20 + 0xe8) = uVar4;
    *(int32_t *)(puStackX_20 + 0xec) = uVar5;
    uVar3 = *(int32_t *)(param_1 + 0x46c);
    uVar4 = *(int32_t *)(param_1 + 0x470);
    uVar5 = *(int32_t *)(param_1 + 0x474);
    *(int32_t *)(puStackX_20 + 0xf0) = *(int32_t *)(param_1 + 0x468);
    *(int32_t *)(puStackX_20 + 0xf4) = uVar3;
    *(int32_t *)(puStackX_20 + 0xf8) = uVar4;
    *(int32_t *)(puStackX_20 + 0xfc) = uVar5;
    *(int32_t *)(puStackX_20 + 0x100) = *(int32_t *)(param_1 + 0x478);
    func_0x000180743b40(*(uint64_t *)(param_1 + 0xa8),puStackX_20,1);
    lVar2 = *(longlong *)(param_1 + 0xa8);
    if (lVar2 != 0) {
      func_0x000180743c20(lVar2,6);
    }
    plVar1 = (longlong *)(param_1 + 0x370);
    **(longlong **)(param_1 + 0x378) = *plVar1;
    *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(param_1 + 0x378);
    *(longlong **)(param_1 + 0x378) = plVar1;
    *plVar1 = (longlong)plVar1;
    if ((lVar2 != 0) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(lVar2,6);
    }
    *(int8_t *)(param_1 + 0x220) = 0;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180783660(longlong param_1)
void FUN_180783660(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int8_t auStack_218 [36];
  int8_t auStack_1f4 [476];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_218;
  iVar2 = FUN_18078a0c0(*(longlong *)(param_1 + 0xa8) + 0x720,param_1 + 0x218,1);
  if (iVar2 == 0) {
    FUN_180765990(*(uint64_t *)(param_1 + 0x218),1);
    iVar2 = func_0x00018074a3d0(*(longlong *)(param_1 + 0xa8),
                                *(int32_t *)(*(longlong *)(param_1 + 0xa8) + 0x1193c),
                                param_1 + 600);
    if (iVar2 == 0) {
      LOCK();
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x10;
      UNLOCK();
      lVar3 = param_1 + 0x370;
      uVar4 = 0;
      *(longlong *)(param_1 + 0x378) = lVar3;
      *(longlong *)lVar3 = lVar3;
      *(uint64_t *)(param_1 + 0x380) = 0;
      lVar3 = *(longlong *)(param_1 + 0xe8);
      *(longlong *)(param_1 + 0x380) = param_1;
      uVar6 = uVar4;
      if (0 < *(int *)(lVar3 + 0x60)) {
        do {
          piVar1 = *(int **)(uVar4 + *(longlong *)(lVar3 + 0x68));
          iVar2 = *piVar1;
          if (iVar2 == 0) {
            iVar2 = func_0x000180762a70(param_1,uVar6,piVar1[0xe]);
LAB_18078375c:
            if (iVar2 != 0) goto FUN_1807837e9;
          }
          else {
            if (iVar2 == 1) {
              iVar2 = func_0x000180762af0(param_1,uVar6,piVar1[0xe]);
              goto LAB_18078375c;
            }
            if (iVar2 == 2) {
              iVar2 = func_0x000180762600(param_1,uVar6,piVar1[0xc] != 0);
              goto LAB_18078375c;
            }
          }
          lVar3 = *(longlong *)(param_1 + 0xe8);
          uVar5 = (int)uVar6 + 1;
          uVar4 = uVar4 + 8;
          uVar6 = (ulonglong)uVar5;
        } while ((int)uVar5 < *(int *)(lVar3 + 0x60));
      }
                    // WARNING: Subroutine does not return
      memset(auStack_1f4,0,0x1d0);
    }
  }
FUN_1807837e9:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_218);
}





// 函数: void FUN_1807836db(void)
void FUN_1807836db(void)

{
  int iVar1;
  longlong lVar2;
  longlong unaff_RBX;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  int8_t auStackX_24 [4];
  ulonglong in_stack_00000200;
  
  LOCK();
  *(uint *)(unaff_RBX + 100) = *(uint *)(unaff_RBX + 100) | 0x10;
  UNLOCK();
  lVar2 = unaff_RBX + 0x370;
  uVar3 = 0;
  *(longlong *)(unaff_RBX + 0x378) = lVar2;
  *(longlong *)lVar2 = lVar2;
  *(uint64_t *)(unaff_RBX + 0x380) = 0;
  lVar2 = *(longlong *)(unaff_RBX + 0xe8);
  *(longlong *)(unaff_RBX + 0x380) = unaff_RBX;
  uVar5 = uVar3;
  if (0 < *(int *)(lVar2 + 0x60)) {
    do {
      iVar1 = **(int **)(uVar3 + *(longlong *)(lVar2 + 0x68));
      if (iVar1 == 0) {
        iVar1 = func_0x000180762a70();
LAB_18078375c:
        if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
          FUN_1808fc050(in_stack_00000200 ^ (ulonglong)&stack0x00000000);
        }
      }
      else {
        if (iVar1 == 1) {
          iVar1 = func_0x000180762af0();
          goto LAB_18078375c;
        }
        if (iVar1 == 2) {
          iVar1 = func_0x000180762600();
          goto LAB_18078375c;
        }
      }
      lVar2 = *(longlong *)(unaff_RBX + 0xe8);
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 8;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < *(int *)(lVar2 + 0x60));
  }
                    // WARNING: Subroutine does not return
  memset(auStackX_24,0,0x1d0);
}





// 函数: void FUN_1807837e9(void)
void FUN_1807837e9(void)

{
  ulonglong in_stack_00000200;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000200 ^ (ulonglong)&stack0x00000000);
}



void * FUN_180783810(void)

{
  if (system_data_0880 == '\0') {
                    // WARNING: Subroutine does not return
    memset(0x180c0ff84,0,0x5c);
  }
  return &system_data_0890;
}





// 函数: void FUN_180783823(uint64_t param_1,uint64_t param_2)
void FUN_180783823(uint64_t param_1,uint64_t param_2)

{
                    // WARNING: Subroutine does not return
  memset(0x180c0ff84,param_2,(int)param_2 + 0x5c);
}



void * FUN_1807842e5(void)

{
  return &system_data_0890;
}



uint64_t
FUN_180784300(longlong param_1,int param_2,longlong param_3,longlong param_4,int param_5,int param_6
             )

{
  float fVar1;
  int32_t uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  int iVar7;
  uint uVar8;
  int8_t uVar9;
  
  if (param_6 == 1) {
    if (param_5 != 0) {
      return 0xb;
    }
    lVar3 = *(longlong *)(param_1 + 0x218);
    if ((param_2 == 0) && (uVar6 = FUN_1807833e0(param_1,1,0), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(int *)(param_1 + 0x278) == 0) {
      iVar7 = 2;
    }
    else if (*(int *)(param_1 + 0x278) == 1) {
      iVar7 = 3;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x27c);
      if (iVar7 == 0) {
        iVar7 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x1193c);
      }
    }
    uVar8 = 0;
    param_6 = 0;
    func_0x00018074a590(*(uint64_t *)(param_1 + 0xa8),iVar7,&param_6);
    if (param_4 != 0) {
      *(int *)(param_4 + 0x20) = iVar7;
      **(int32_t **)(param_4 + 8) = param_6;
    }
    if ((param_2 != 0) && (iVar7 = *(int *)(param_3 + 0x20), *(float *)(param_1 + 0x2b8) == 0.0)) {
      iVar5 = *(int *)(param_1 + 0x278);
      if (iVar5 == 0) {
        if (iVar7 != 2) {
          return 0;
        }
      }
      else {
        if (iVar5 == 1) {
          if (iVar7 != 3) {
            return 0;
          }
          fVar1 = *(float *)(param_1 + 0x280);
        }
        else {
          if (iVar5 != 2) {
            return 0;
          }
          uVar4 = func_0x0001807d6120(*(int32_t *)(param_1 + 0x2c4),
                                      *(int32_t *)(param_1 + 0x27c));
          param_6 = 0;
          func_0x00018074a590(*(uint64_t *)(param_1 + 0xa8),*(int32_t *)(param_1 + 0x27c),
                              &param_6);
          if (0 < param_6) {
            do {
              if ((uVar4 >> (uVar8 & 0x1f) & 1) == 0) {
                return 0;
              }
              uVar8 = uVar8 + 1;
              param_6 = 0;
              func_0x00018074a590(*(uint64_t *)(param_1 + 0xa8),*(int32_t *)(param_1 + 0x27c),
                                  &param_6);
            } while ((int)uVar8 < param_6);
          }
          if ((iVar7 != 0) && (iVar7 != *(int *)(*(longlong *)(param_1 + 0xa8) + 0x1193c))) {
            return 0;
          }
          if (*(float *)(param_1 + 0x288) != 360.0) {
            return 0;
          }
          if (*(float *)(param_1 + 0x28c) != 0.0) {
            return 0;
          }
          fVar1 = *(float *)(param_1 + 0x290);
        }
        if (fVar1 != 0.0) {
          return 0;
        }
      }
      if (((*(longlong *)(lVar3 + 0x40) == 0) && (*(float *)(lVar3 + 0x80) == 1.0)) &&
         (*(float *)(lVar3 + 0x68) == 1.0)) {
        return 6;
      }
    }
  }
  else {
    uVar2 = **(int32_t **)(param_3 + 8);
    iVar7 = **(int **)(param_4 + 8);
    iVar5 = *(int *)(param_3 + 0x20);
    if (iVar5 == 0) {
      iVar5 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x1193c);
    }
    *(int *)(param_1 + 0x250) = iVar5;
    if ((*(int *)(param_4 + 0x20) == 1) || (*(int *)(param_3 + 0x20) == 1)) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    uVar6 = FUN_1807636f0(*(uint64_t *)(param_1 + 0x218),**(uint64_t **)(param_4 + 0x18),
                          **(uint64_t **)(param_3 + 0x18),uVar9,iVar7,uVar2,param_2,1);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    if (iVar7 != **(int **)(param_4 + 8)) {
      return 0x1c;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807845c0(longlong param_1,int param_2,float *param_3,int param_4)
void FUN_1807845c0(longlong param_1,int param_2,float *param_3,int param_4)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  bool bVar7;
  int8_t auStack_f8 [32];
  int8_t auStack_d8 [160];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  if (param_2 == 10) {
    if ((param_4 == 0x1d4) && (iVar5 = FUN_180783090(param_1,param_3,auStack_d8), iVar5 == 0)) {
      fVar6 = *param_3;
      if ((*(float *)(param_1 + 0x3d8) != fVar6) ||
         (iVar5 = memcmp(auStack_d8,param_1 + 0x3dc,
                         (longlong)(int)*(float *)(param_1 + 0x3d8) * 0x14), iVar5 != 0)) {
        if (*(longlong *)(param_1 + 0xa8) != 0) {
          func_0x000180743c20(*(longlong *)(param_1 + 0xa8),6);
          fVar6 = *param_3;
        }
        *(float *)(param_1 + 0x3d8) = fVar6;
                    // WARNING: Subroutine does not return
        memcpy(param_1 + 0x3dc,auStack_d8,(longlong)(int)fVar6 * 0x14);
      }
    }
  }
  else if ((param_2 != 0x13) && (param_2 == 0x16)) {
    lVar3 = *(longlong *)(param_1 + 0xa8);
    bVar7 = lVar3 != 0;
    if (bVar7) {
      func_0x000180743c20(lVar3,6);
    }
    if (param_4 == 8) {
      fVar6 = *param_3;
      *(float *)(param_1 + 0x228) = fVar6;
      fVar2 = param_3[1];
      *(float *)(param_1 + 0x22c) = fVar2;
      if ((*(char *)(param_1 + 0x238) == '\0') &&
         ((fVar6 != *(float *)(param_1 + 0x3b8) || (fVar2 != *(float *)(param_1 + 0x3bc))))) {
        *(float *)(param_1 + 0x3b8) = fVar6;
        plVar1 = (longlong *)(param_1 + 0x370);
        *(float *)(param_1 + 0x3bc) = fVar2;
        *(int8_t *)(param_1 + 0x220) = 1;
        **(longlong **)(param_1 + 0x378) = *plVar1;
        *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(param_1 + 0x378);
        *(longlong **)(param_1 + 0x378) = plVar1;
        *plVar1 = (longlong)plVar1;
        lVar4 = *(longlong *)(param_1 + 0xa8);
        *(uint64_t *)(param_1 + 0x378) = *(uint64_t *)(lVar4 + 0x10ff8);
        *plVar1 = lVar4 + 0x10ff0;
        *(longlong **)(lVar4 + 0x10ff8) = plVar1;
        **(longlong **)(param_1 + 0x378) = (longlong)plVar1;
        if ((bVar7) && (lVar3 != 0)) {
                    // WARNING: Subroutine does not return
          FUN_180743d60(lVar3,6);
        }
        goto LAB_18078482e;
      }
    }
    if ((bVar7) && (lVar3 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(lVar3,6);
    }
  }
LAB_18078482e:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_f8);
}





// 函数: void FUN_18078473a(void)
void FUN_18078473a(void)

{
  int iVar1;
  longlong in_RAX;
  longlong unaff_RBX;
  int unaff_EBP;
  int *unaff_RSI;
  int8_t auStackX_20 [8];
  ulonglong in_stack_000000c0;
  
  if ((int)in_RAX == unaff_EBP) {
    iVar1 = memcmp(auStackX_20,unaff_RBX + 0x3dc,in_RAX * 0x14);
    if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_000000c0 ^ (ulonglong)&stack0x00000000);
    }
  }
  if (*(longlong *)(unaff_RBX + 0xa8) != 0) {
    func_0x000180743c20(*(longlong *)(unaff_RBX + 0xa8),6);
    unaff_EBP = *unaff_RSI;
  }
  *(int *)(unaff_RBX + 0x3d8) = unaff_EBP;
                    // WARNING: Subroutine does not return
  memcpy(unaff_RBX + 0x3dc,auStackX_20,(longlong)unaff_EBP * 0x14);
}





// 函数: void FUN_180784773(void)
void FUN_180784773(void)

{
  longlong unaff_RBX;
  int unaff_EBP;
  int *unaff_RSI;
  longlong unaff_RDI;
  int8_t auStackX_20 [8];
  
  if (unaff_RDI != 0) {
    func_0x000180743c20();
    unaff_EBP = *unaff_RSI;
  }
  *(int *)(unaff_RBX + 0x3d8) = unaff_EBP;
                    // WARNING: Subroutine does not return
  memcpy(unaff_RBX + 0x3dc,auStackX_20,(longlong)unaff_EBP * 0x14);
}





// 函数: void FUN_180784812(void)
void FUN_180784812(void)

{
  longlong unaff_RDI;
  ulonglong in_stack_000000c0;
  
  if (unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000c0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18078482c(void)
void FUN_18078482c(void)

{
  ulonglong in_stack_000000c0;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000c0 ^ (ulonglong)&stack0x00000000);
}



uint64_t FUN_180784850(longlong param_1,int32_t param_2,float param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  switch(param_2) {
  case 1:
    if (param_3 == *(float *)(param_1 + 0x390)) {
      return 0;
    }
    *(float *)(param_1 + 0x390) = param_3;
    break;
  case 2:
    if (param_3 == *(float *)(param_1 + 0x394)) {
      return 0;
    }
    *(float *)(param_1 + 0x394) = param_3;
    break;
  case 3:
    if (param_3 == *(float *)(param_1 + 0x398)) {
      return 0;
    }
    *(float *)(param_1 + 0x398) = param_3;
    break;
  case 4:
    if (param_3 == *(float *)(param_1 + 0x39c)) {
      return 0;
    }
    *(float *)(param_1 + 0x39c) = param_3;
    break;
  case 5:
    if (param_3 == *(float *)(param_1 + 0x3a0)) {
      return 0;
    }
    *(float *)(param_1 + 0x3a0) = param_3;
    break;
  default:
    return 0x1f;
  case 7:
    if (param_3 == *(float *)(param_1 + 0x3a8)) {
      return 0;
    }
    *(float *)(param_1 + 0x3a8) = param_3;
    break;
  case 8:
    if (param_3 == *(float *)(param_1 + 0x3ac)) {
      return 0;
    }
    *(float *)(param_1 + 0x3ac) = param_3;
    break;
  case 0xc:
    *(float *)(param_1 + 0x230) = param_3;
    if (*(char *)(param_1 + 0x238) == '\0') {
      return 0;
    }
    if (param_3 == *(float *)(param_1 + 0x3b8)) {
      return 0;
    }
    fVar4 = *(float *)(param_1 + 0x234);
    if (param_3 <= *(float *)(param_1 + 0x234)) {
      fVar4 = param_3;
    }
    *(float *)(param_1 + 0x3b8) = fVar4;
    break;
  case 0xd:
    *(float *)(param_1 + 0x234) = param_3;
    if (*(char *)(param_1 + 0x238) == '\0') {
      return 0;
    }
    if (param_3 == *(float *)(param_1 + 0x3bc)) {
      return 0;
    }
    fVar4 = *(float *)(param_1 + 0x230);
    if (param_3 <= *(float *)(param_1 + 0x230)) {
      fVar4 = param_3;
    }
    *(float *)(param_1 + 0x3bc) = param_3;
    *(float *)(param_1 + 0x3b8) = fVar4;
    break;
  case 0xf:
    if (param_3 == *(float *)(param_1 + 0x3c4)) {
      return 0;
    }
    *(float *)(param_1 + 0x3c4) = param_3;
    break;
  case 0x10:
    if (param_3 == *(float *)(param_1 + 0x3cc)) {
      return 0;
    }
    *(float *)(param_1 + 0x3cc) = param_3;
    break;
  case 0x11:
    if (param_3 == *(float *)(param_1 + 0x3c8)) {
      return 0;
    }
    *(float *)(param_1 + 0x3c8) = param_3;
    break;
  case 0x15:
    if (param_3 == *(float *)(param_1 + 0x3b0)) {
      return 0;
    }
    *(float *)(param_1 + 0x3b0) = param_3;
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    func_0x000180743c20(lVar2,6);
  }
  *(int8_t *)(param_1 + 0x220) = 1;
  plVar1 = (longlong *)(param_1 + 0x370);
  **(longlong **)(param_1 + 0x378) = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(param_1 + 0x378);
  *(longlong **)(param_1 + 0x378) = plVar1;
  *plVar1 = (longlong)plVar1;
  lVar3 = *(longlong *)(param_1 + 0xa8);
  *(uint64_t *)(param_1 + 0x378) = *(uint64_t *)(lVar3 + 0x10ff8);
  *plVar1 = lVar3 + 0x10ff0;
  *(longlong **)(lVar3 + 0x10ff8) = plVar1;
  **(longlong **)(param_1 + 0x378) = (longlong)plVar1;
  if ((lVar2 != 0) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar2,6);
  }
  return 0;
}



uint64_t FUN_180784a05(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBX;
  
  lVar2 = *(longlong *)(unaff_RBX + 0xa8);
  if (lVar2 != 0) {
    func_0x000180743c20(lVar2,6);
  }
  *(int8_t *)(unaff_RBX + 0x220) = 1;
  plVar1 = (longlong *)(unaff_RBX + 0x370);
  **(longlong **)(unaff_RBX + 0x378) = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(unaff_RBX + 0x378);
  *(longlong **)(unaff_RBX + 0x378) = plVar1;
  *plVar1 = (longlong)plVar1;
  lVar3 = *(longlong *)(unaff_RBX + 0xa8);
  *(uint64_t *)(unaff_RBX + 0x378) = *(uint64_t *)(lVar3 + 0x10ff8);
  *plVar1 = lVar3 + 0x10ff0;
  *(longlong **)(lVar3 + 0x10ff8) = plVar1;
  **(longlong **)(unaff_RBX + 0x378) = (longlong)plVar1;
  if ((lVar2 != 0) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar2,6);
  }
  return 0;
}



uint64_t FUN_180784a90(void)

{
  return 0;
}





// 函数: void FUN_180784b00(longlong param_1,uint64_t param_2,longlong param_3,int32_t param_4,
void FUN_180784b00(longlong param_1,uint64_t param_2,longlong param_3,int32_t param_4,
                  int32_t param_5,int32_t param_6,int32_t param_7,float param_8,
                  float param_9,int param_10,float param_11,int32_t param_12)

{
  int iVar1;
  uint64_t uStackX_8;
  uint64_t in_stack_ffffffffffffffa8;
  int32_t uVar2;
  uint64_t in_stack_ffffffffffffffb0;
  int32_t uVar3;
  
  uVar2 = (int32_t)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar3 = (int32_t)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  iVar1 = *(int *)(param_1 + 0x24c);
  if (iVar1 == 2) {
    FUN_1807d7510(param_2,param_5,param_6,param_11,param_12,param_4,param_3);
  }
  else if (iVar1 == 3) {
    if (param_10 == 1) {
      FUN_1807d7510(param_2,param_9 - param_8 * 0.5,0,param_11 * 0.70710677,param_12,param_4,param_3
                   );
      FUN_1807d7510(param_2,param_8 * 0.5 + param_9,0,param_11 * 0.70710677,param_12,param_4,
                    param_3 + 4);
    }
    else {
      FUN_1807d68f0(param_2,param_5,param_6,param_7,param_11,param_12,CONCAT44(uVar2,param_4),
                    param_3);
    }
  }
  else {
    func_0x00018074a3d0(*(uint64_t *)(param_1 + 0xa8),iVar1,&uStackX_8);
    FUN_1807d6d40(uStackX_8,param_2,param_5,param_6,param_7,param_11,CONCAT44(uVar2,param_12),
                  CONCAT44(uVar3,param_4),param_3,0);
  }
  return;
}





// 函数: void FUN_180784b8c(uint64_t param_1,float param_2,int32_t param_3)
void FUN_180784b8c(uint64_t param_1,float param_2,int32_t param_3)

{
  float in_stack_000000c8;
  float in_stack_000000e0;
  int32_t in_stack_000000e8;
  
  FUN_1807d7510(param_1,param_2 - in_stack_000000c8 * 0.5,param_3,in_stack_000000e0 * 0.70710677,
                in_stack_000000e8);
  FUN_1807d7510();
  return;
}





// 函数: void FUN_180784c2f(void)
void FUN_180784c2f(void)

{
  int32_t uStack0000000000000028;
  int32_t in_stack_000000b0;
  int32_t in_stack_000000b8;
  int32_t in_stack_000000c0;
  int32_t in_stack_000000e0;
  int32_t in_stack_000000e8;
  
  uStack0000000000000028 = in_stack_000000e8;
  FUN_1807d68f0(in_stack_000000e8,in_stack_000000b0,in_stack_000000b8,in_stack_000000c0,
                in_stack_000000e0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



