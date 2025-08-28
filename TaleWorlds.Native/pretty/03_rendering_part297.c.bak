#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part297.c - 5 个函数

// 函数: void FUN_1804266c0(uint64_t *param_1,longlong param_2,int param_3,int param_4,int param_5,
void FUN_1804266c0(uint64_t *param_1,longlong param_2,int param_3,int param_4,int param_5,
                  int32_t param_6,int param_7)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int8_t auStack_158 [32];
  uint uStack_138;
  uint uStack_130;
  int iStack_128;
  int32_t uStack_120;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  longlong lStack_108;
  int iStack_100;
  uint uStack_fc;
  int iStack_f8;
  uint uStack_f4;
  int iStack_f0;
  int iStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  int iStack_e0;
  uint uStack_dc;
  longlong lStack_d8;
  longlong lStack_d0;
  uint auStack_c8 [8];
  int aiStack_a8 [8];
  uint auStack_88 [8];
  int aiStack_68 [8];
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_158;
  puVar1 = (uint *)*param_1;
  iVar7 = ((param_5 == 0x10) + 1) * param_4;
  iStack_118 = param_3;
  iStack_100 = param_4;
  lStack_d8 = param_2;
  if (param_7 == 0) {
    uStack_120 = param_6;
    uStack_130 = puVar1[1];
    iStack_128 = param_5;
    uStack_138 = *puVar1;
    FUN_1804256d0(param_1,param_2);
  }
  else {
    uVar3 = puVar1[1];
    uVar4 = *puVar1;
    if ((((((int)uVar4 < 0) || ((int)uVar3 < 0)) ||
         ((uVar3 != 0 && ((int)(0x7fffffff / (longlong)(int)uVar3) < (int)uVar4)))) ||
        ((iVar5 = uVar4 * uVar3, iVar5 < 0 || (iVar7 < 0)))) ||
       ((iVar7 != 0 && ((int)(0x7fffffff / (longlong)iVar7) < iVar5)))) {
      lStack_108 = 0;
    }
    else {
      lStack_108 = FUN_18062b420(system_memory_pool_ptr,(longlong)(iVar5 * iVar7),
                                 CONCAT71((uint7)(uint3)(uVar3 >> 8),0x22));
    }
    iStack_10c = 0;
    lStack_d0 = 0;
    iVar5 = iStack_118;
    do {
      lVar8 = lStack_d0;
      piVar2 = (int *)*param_1;
      aiStack_a8[0] = 0;
      aiStack_a8[1] = 4;
      aiStack_a8[2] = 0;
      aiStack_a8[3] = 2;
      auStack_c8[4] = 2;
      aiStack_68[0] = 0;
      aiStack_68[1] = 0;
      aiStack_68[2] = 4;
      aiStack_68[3] = 0;
      auStack_c8[5] = 2;
      auStack_c8[0] = 8;
      auStack_c8[1] = 8;
      auStack_c8[2] = 4;
      auStack_c8[3] = 4;
      auStack_c8[6] = 1;
      uStack_f4 = *(uint *)((longlong)auStack_c8 + lStack_d0);
      aiStack_a8[4] = 0;
      aiStack_a8[5] = 1;
      aiStack_a8[6] = 0;
      iStack_f0 = *(int *)((longlong)aiStack_a8 + lStack_d0);
      auStack_88[4] = 4;
      auStack_88[5] = 2;
      uVar3 = (*piVar2 + -1 + (uStack_f4 - iStack_f0)) / uStack_f4;
      auStack_88[0] = 8;
      auStack_88[1] = 8;
      auStack_88[2] = 8;
      auStack_88[3] = 4;
      auStack_88[6] = 2;
      uStack_fc = *(uint *)((longlong)auStack_88 + lStack_d0);
      aiStack_68[4] = 2;
      aiStack_68[5] = 0;
      aiStack_68[6] = 1;
      uStack_e8 = uVar3;
      if (uVar3 != 0) {
        iStack_f8 = *(int *)((longlong)aiStack_68 + lStack_d0);
        uVar4 = ((uStack_fc - 1) + (piVar2[1] - iStack_f8)) / uStack_fc;
        uStack_e4 = uVar4;
        if (uVar4 != 0) {
          uStack_120 = param_6;
          iStack_128 = param_5;
          uVar6 = (((int)(piVar2[2] * uVar3 * param_5 + 7) >> 3) + 1) * uVar4;
          uStack_138 = uVar3;
          uStack_130 = uVar4;
          uStack_dc = uVar6;
          iVar5 = FUN_1804256d0(param_1,param_2,iVar5,iStack_100);
          if (iVar5 == 0) {
            if (lStack_108 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(lStack_108);
            }
            goto FUN_180426a43;
          }
          iStack_114 = 0;
          if (0 < (int)uVar4) {
            iStack_e0 = uVar3 * iVar7;
            iStack_110 = 0;
            do {
              if (0 < (int)uVar3) {
                iStack_ec = uStack_fc * iStack_114 + iStack_f8;
                    // WARNING: Subroutine does not return
                memcpy((longlong)(iStack_f0 * iVar7) +
                       (ulonglong)(uint)(*(int *)*param_1 * iStack_ec * iVar7) + lStack_108,
                       (longlong)iStack_110 + param_1[3],(longlong)iVar7);
              }
              iStack_114 = iStack_114 + 1;
              iStack_110 = iStack_110 + iStack_e0;
              lVar8 = lStack_d0;
              uVar6 = uStack_dc;
            } while (iStack_114 < (int)uVar4);
          }
          if (param_1[3] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          iStack_118 = iStack_118 - uVar6;
          param_2 = lStack_d8 + (ulonglong)uVar6;
          param_1[3] = 0;
          lStack_d8 = param_2;
          iVar5 = iStack_118;
        }
      }
      iStack_10c = iStack_10c + 1;
      lStack_d0 = lVar8 + 4;
    } while (iStack_10c < 7);
    param_1[3] = lStack_108;
  }
FUN_180426a43:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18042674c(int param_1,uint64_t param_2,int param_3)
void FUN_18042674c(int param_1,uint64_t param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong unaff_RBX;
  uint64_t *unaff_RBP;
  int unaff_EDI;
  ulonglong uVar10;
  int in_R11D;
  uint64_t *unaff_R13;
  longlong unaff_R14;
  ulonglong uVar11;
  int in_stack_00000040;
  uint uStack000000000000004c;
  int32_t in_stack_00000058;
  uint uStack000000000000005c;
  uint uStack0000000000000064;
  int iStack000000000000006c;
  
  uVar7 = unaff_RBX;
  if (((((-1 < param_1) && (-1 < param_3)) &&
       ((param_3 == 0 || (param_1 <= (int)(0x7fffffff / (longlong)param_3))))) &&
      ((param_1 = param_1 * param_3, -1 < param_1 && (-1 < unaff_EDI)))) &&
     ((unaff_EDI == 0 || (param_1 <= (int)(0x7fffffff / (longlong)unaff_EDI))))) {
    uVar7 = FUN_18062b420(system_memory_pool_ptr,(longlong)(param_1 * unaff_EDI),0x22);
    in_R11D = in_stack_00000040;
  }
  uStack000000000000004c = (uint)unaff_RBX;
  uVar10 = unaff_RBX & 0xffffffff;
  unaff_RBP[-0xf] = unaff_RBX;
  uVar11 = unaff_RBX;
  do {
    piVar3 = (int *)*unaff_R13;
    unaff_RBP[-10] = 0x400000000;
    unaff_RBP[-9] = 0x200000000;
    *(int32_t *)(unaff_RBP + -0xc) = 2;
    unaff_RBP[-2] = 0;
    unaff_RBP[-1] = 4;
    *(int32_t *)((longlong)unaff_RBP + -0x5c) = 2;
    unaff_RBP[-0xe] = 0x800000008;
    unaff_RBP[-0xd] = 0x400000004;
    *(int32_t *)(unaff_RBP + -0xb) = 1;
    uStack0000000000000064 = *(uint *)((longlong)unaff_RBP + (uVar11 - 0x70));
    *(int *)(unaff_RBP + -8) = (int)unaff_RBX;
    *(uint64_t *)((longlong)unaff_RBP + -0x3c) = 1;
    iVar1 = *(int *)((longlong)unaff_RBP + (uVar11 - 0x50));
    iVar2 = *piVar3;
    *(int32_t *)(unaff_RBP + -4) = 4;
    *(int32_t *)((longlong)unaff_RBP + -0x1c) = 2;
    uVar4 = (iVar2 + -1 + (uStack0000000000000064 - iVar1)) / uStack0000000000000064;
    unaff_RBP[-6] = 0x800000008;
    unaff_RBP[-5] = 0x400000008;
    *(int32_t *)(unaff_RBP + -3) = 2;
    uStack000000000000005c = *(uint *)((longlong)unaff_RBP + (uVar11 - 0x30));
    *unaff_RBP = 2;
    *(int32_t *)(unaff_RBP + 1) = 1;
    uVar9 = (uint)uVar10;
    if (uVar4 != 0) {
      iVar2 = *(int *)((longlong)unaff_RBP + (uVar11 - 0x10));
      uVar5 = ((uStack000000000000005c - 1) + (piVar3[1] - iVar2)) / uStack000000000000005c;
      if (uVar5 != 0) {
        uVar9 = (((int)(piVar3[2] * uVar4 * *(int *)(unaff_RBP + 0x10) + 7) >> 3) + 1) * uVar5;
        iVar6 = FUN_1804256d0(0x800000008,unaff_R14,in_R11D,in_stack_00000058,uVar4);
        if (iVar6 == 0) {
          if (uVar7 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(uVar7);
          }
          goto LAB_180426a2b;
        }
        iVar6 = 0;
        if (0 < (int)uVar5) {
          iVar8 = 0;
          do {
            if (0 < (int)uVar4) {
              iStack000000000000006c = uStack000000000000005c * iVar6 + iVar2;
                    // WARNING: Subroutine does not return
              memcpy((longlong)(iVar1 * unaff_EDI) +
                     (uint)(*(int *)*unaff_R13 * iStack000000000000006c * unaff_EDI) + uVar7,
                     (longlong)iVar8 + unaff_R13[3],(longlong)unaff_EDI);
            }
            iVar6 = iVar6 + 1;
            iVar8 = iVar8 + uVar4 * unaff_EDI;
          } while (iVar6 < (int)uVar5);
          uVar11 = unaff_RBP[-0xf];
        }
        if (unaff_R13[3] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        in_R11D = in_stack_00000040 - uVar9;
        unaff_R14 = unaff_RBP[-0x10] + (ulonglong)uVar9;
        unaff_RBP[-0x10] = unaff_R14;
        unaff_RBX = 0;
        unaff_R13[3] = 0;
        uVar9 = uStack000000000000004c;
        in_stack_00000040 = in_R11D;
      }
    }
    uStack000000000000004c = uVar9 + 1;
    uVar10 = (ulonglong)uStack000000000000004c;
    uVar11 = uVar11 + 4;
    unaff_RBP[-0xf] = uVar11;
  } while ((int)uStack000000000000004c < 7);
  unaff_R13[3] = uVar7;
LAB_180426a2b:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(unaff_RBP[2] ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180426a43(void)
void FUN_180426a43(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x10) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180426a5e(void)
void FUN_180426a5e(void)

{
  longlong unaff_RBP;
  longlong in_stack_00000050;
  
  if (in_stack_00000050 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(in_stack_00000050);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x10) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180426a80(void)
void FUN_180426a80(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



int32_t FUN_1804276f0(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  longlong lVar6;
  
  pcVar4 = *(char **)(param_1 + 0x2e);
  if (*(char **)(param_1 + 0x30) <= pcVar4) {
    if (param_1[0xc] == 0) {
      return 0;
    }
    FUN_18041ee20();
    pcVar4 = *(char **)(param_1 + 0x2e);
  }
  cVar1 = *pcVar4;
  pcVar4 = pcVar4 + 1;
  *(char **)(param_1 + 0x2e) = pcVar4;
  if (cVar1 == 'B') {
    if (*(char **)(param_1 + 0x30) <= pcVar4) {
      if (param_1[0xc] == 0) {
        return 0;
      }
      FUN_18041ee20(param_1);
      pcVar4 = *(char **)(param_1 + 0x2e);
    }
    cVar1 = *pcVar4;
    *(char **)(param_1 + 0x2e) = pcVar4 + 1;
    if (cVar1 == 'M') {
      FUN_18041f0a0(param_1);
      FUN_18041f0a0(param_1);
      FUN_18041f0a0(param_1);
      FUN_18041f0a0(param_1);
      iVar2 = FUN_18041f0a0(param_1);
      iVar3 = FUN_18041f0a0(param_1);
      param_2[1] = iVar3 * 0x10000 + iVar2;
      iVar2 = FUN_18041f0a0(param_1);
      iVar3 = FUN_18041f0a0(param_1);
      uVar5 = iVar3 * 0x10000 + iVar2;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[2] = uVar5;
      param_2[3] = 0;
      param_2[4] = 0;
      if ((((uVar5 < 0x39) && ((0x100010000001000U >> ((ulonglong)uVar5 & 0x3f) & 1) != 0)) ||
          (uVar5 == 0x6c)) || (uVar5 == 0x7c)) {
        iVar2 = FUN_18041f0a0(param_1);
        if (uVar5 == 0xc) {
          *param_1 = iVar2;
          iVar3 = FUN_18041f0a0(param_1);
        }
        else {
          iVar3 = FUN_18041f0a0(param_1);
          *param_1 = iVar3 * 0x10000 + iVar2;
          iVar3 = FUN_18041f0a0(param_1);
          iVar2 = FUN_18041f0a0(param_1);
          iVar3 = iVar2 * 0x10000 + iVar3;
        }
        param_1[1] = iVar3;
        iVar2 = FUN_18041f0a0(param_1);
        if (iVar2 == 1) {
          iVar2 = FUN_18041f0a0(param_1);
          *param_2 = iVar2;
          if (iVar2 != 1) {
            if (uVar5 == 0xc) {
              return 1;
            }
            iVar2 = FUN_18041f150(param_1);
            if (1 < iVar2 - 1U) {
              FUN_18041f150(param_1);
              FUN_18041f150(param_1);
              FUN_18041f150(param_1);
              FUN_18041f150(param_1);
              FUN_18041f150(param_1);
              if (uVar5 != 0x28) {
                if (uVar5 != 0x38) {
                  if ((uVar5 - 0x6c & 0xffffffef) != 0) {
                    return 0;
                  }
                  iVar2 = FUN_18041f150(param_1);
                  param_2[3] = iVar2;
                  iVar2 = FUN_18041f150(param_1);
                  param_2[4] = iVar2;
                  iVar2 = FUN_18041f150(param_1);
                  param_2[5] = iVar2;
                  iVar2 = FUN_18041f150(param_1);
                  param_2[6] = iVar2;
                  FUN_18041f150(param_1);
                  lVar6 = 0xc;
                  do {
                    FUN_18041f150(param_1);
                    lVar6 = lVar6 + -1;
                  } while (lVar6 != 0);
                  if (uVar5 != 0x7c) {
                    return 1;
                  }
                  FUN_18041f150(param_1);
                  FUN_18041f150(param_1);
                  FUN_18041f150(param_1);
                  FUN_18041f150(param_1);
                  return 1;
                }
                FUN_18041f150(param_1);
                FUN_18041f150(param_1);
                FUN_18041f150(param_1);
                FUN_18041f150(param_1);
              }
              if ((*param_2 - 0x10U & 0xffffffef) != 0) {
                return 1;
              }
              if (iVar2 == 0) {
                if (*param_2 != 0x20) {
                  param_2[3] = 0x7c00;
                  param_2[4] = 0x3e0;
                  param_2[5] = 0x1f;
                  return 1;
                }
                param_2[6] = -0x1000000;
                param_2[7] = 0;
                param_2[3] = 0xff0000;
                param_2[4] = 0xff00;
                param_2[5] = 0xff;
                return 1;
              }
              if (iVar2 == 3) {
                iVar2 = FUN_18041f150(param_1);
                param_2[3] = iVar2;
                iVar2 = FUN_18041f150(param_1);
                param_2[4] = iVar2;
                iVar2 = FUN_18041f150(param_1);
                param_2[5] = iVar2;
                if (param_2[3] != param_2[4]) {
                  return 1;
                }
                if (param_2[4] != iVar2) {
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



