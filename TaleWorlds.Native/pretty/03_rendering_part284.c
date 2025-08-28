#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part284.c - 1 个函数

// 函数: void FUN_1804215a0(int64_t param_1)
void FUN_1804215a0(int64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int8_t auStack_108 [32];
  int64_t lStack_e8;
  int iStack_e0;
  int64_t lStack_d8;
  int iStack_c8;
  int iStack_c4;
  int *piStack_c0;
  int8_t auStack_b8 [128];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_108;
  *(uint64_t *)(param_1 + 0x4820) = 0;
  *(int32_t *)(param_1 + 0x482c) = 0;
  *(int32_t *)(param_1 + 0x47d8) = 0;
  *(int32_t *)(param_1 + 0x4778) = 0;
  *(int32_t *)(param_1 + 0x4718) = 0;
  *(int32_t *)(param_1 + 0x46b8) = 0;
  *(int8_t *)(param_1 + 0x4828) = 0xff;
  iVar9 = 0x7fffffff;
  if (*(int *)(param_1 + 0x4868) != 0) {
    iVar9 = *(int *)(param_1 + 0x4868);
  }
  *(int32_t *)(param_1 + 0x4844) = 0;
  *(int *)(param_1 + 0x486c) = iVar9;
  if (*(int *)(param_1 + 0x4830) == 0) {
    if (*(int *)(param_1 + 0x4854) == 1) {
      iVar9 = *(int *)(param_1 + 0x4858);
      iVar10 = 0;
      lVar6 = (int64_t)iVar9 * 0x60 + param_1;
      iVar11 = *(int *)(lVar6 + 0x46bc) + 7 >> 3;
      iVar8 = *(int *)(lVar6 + 0x46c0) + 7 >> 3;
      if (0 < iVar8) {
        do {
          iVar7 = 0;
          if (0 < iVar11) {
            iVar5 = 0;
            do {
              lStack_d8 = param_1 + 0x3488 + (int64_t)*(int *)(lVar6 + 0x46ac) * 0x80;
              lStack_e8 = param_1 + 0x3688 + (int64_t)*(int *)(lVar6 + 0x46b4) * 0x400;
              iStack_e0 = iVar9;
              iVar2 = FUN_18041f970(param_1,auStack_b8,
                                    param_1 + 8 + (int64_t)*(int *)(lVar6 + 0x46b0) * 0x690,
                                    param_1 + 0x1a48 + (int64_t)*(int *)(lVar6 + 0x46b4) * 0x690);
              if (iVar2 == 0) goto LAB_1804217f5;
              (**(code **)(param_1 + 0x4870))
                        ((int64_t)(*(int *)(lVar6 + 0x46c4) * iVar10 * 8) +
                         *(int64_t *)(lVar6 + 0x46d0) + (int64_t)iVar5,*(int *)(lVar6 + 0x46c4),
                         auStack_b8);
              *(int *)(param_1 + 0x486c) = *(int *)(param_1 + 0x486c) + -1;
              if (*(int *)(param_1 + 0x486c) < 1) {
                if (*(int *)(param_1 + 0x4824) < 0x18) {
                  FUN_18041f7a0(param_1);
                }
                if (7 < (byte)(*(char *)(param_1 + 0x4828) + 0x30U)) goto LAB_1804217f5;
                *(uint64_t *)(param_1 + 0x4820) = 0;
                *(int32_t *)(param_1 + 0x482c) = 0;
                *(int32_t *)(param_1 + 0x47d8) = 0;
                *(int32_t *)(param_1 + 0x4778) = 0;
                *(int32_t *)(param_1 + 0x4718) = 0;
                *(int32_t *)(param_1 + 0x46b8) = 0;
                *(int8_t *)(param_1 + 0x4828) = 0xff;
                iVar2 = 0x7fffffff;
                if (*(int *)(param_1 + 0x4868) != 0) {
                  iVar2 = *(int *)(param_1 + 0x4868);
                }
                *(int32_t *)(param_1 + 0x4844) = 0;
                *(int *)(param_1 + 0x486c) = iVar2;
              }
              iVar7 = iVar7 + 1;
              iVar5 = iVar5 + 8;
            } while (iVar7 < iVar11);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar8);
      }
    }
    else {
      iStack_c8 = 0;
      if (0 < *(int *)(param_1 + 0x4694)) {
        do {
          iVar9 = 0;
          if (0 < *(int *)(param_1 + 0x4690)) {
            do {
              iStack_c4 = 0;
              if (0 < *(int *)(param_1 + 0x4854)) {
                piStack_c0 = (int *)(param_1 + 0x4858);
                iVar8 = iStack_c8;
                do {
                  iVar10 = *piStack_c0;
                  iVar11 = 0;
                  lVar6 = (int64_t)iVar10 * 0x60 + param_1;
                  if (0 < *(int *)(lVar6 + 0x46a8)) {
                    do {
                      iVar7 = *(int *)(lVar6 + 0x46a4);
                      iVar5 = 0;
                      if (0 < iVar7) {
                        do {
                          iVar2 = *(int *)(lVar6 + 0x46a8);
                          lStack_d8 = param_1 + 0x3488 + (int64_t)*(int *)(lVar6 + 0x46ac) * 0x80;
                          lStack_e8 = param_1 + 0x3688 + (int64_t)*(int *)(lVar6 + 0x46b4) * 0x400;
                          iStack_e0 = iVar10;
                          iVar3 = FUN_18041f970(param_1,auStack_b8,
                                                param_1 + 8 +
                                                (int64_t)*(int *)(lVar6 + 0x46b0) * 0x690,
                                                param_1 + 0x1a48 +
                                                (int64_t)*(int *)(lVar6 + 0x46b4) * 0x690);
                          if (iVar3 == 0) goto LAB_1804217f5;
                          (**(code **)(param_1 + 0x4870))
                                    ((int64_t)((iVar7 * iVar9 + iVar5) * 8) +
                                     (int64_t)
                                     ((iVar2 * iVar8 + iVar11) * *(int *)(lVar6 + 0x46c4) * 8) +
                                     *(int64_t *)(lVar6 + 0x46d0),*(int *)(lVar6 + 0x46c4),
                                     auStack_b8);
                          iVar7 = *(int *)(lVar6 + 0x46a4);
                          iVar5 = iVar5 + 1;
                          iVar8 = iStack_c8;
                        } while (iVar5 < iVar7);
                      }
                      iVar11 = iVar11 + 1;
                    } while (iVar11 < *(int *)(lVar6 + 0x46a8));
                  }
                  iStack_c4 = iStack_c4 + 1;
                  piStack_c0 = piStack_c0 + 1;
                } while (iStack_c4 < *(int *)(param_1 + 0x4854));
              }
              *(int *)(param_1 + 0x486c) = *(int *)(param_1 + 0x486c) + -1;
              if (*(int *)(param_1 + 0x486c) < 1) {
                if (*(int *)(param_1 + 0x4824) < 0x18) {
                  FUN_18041f7a0(param_1);
                }
                if (7 < (byte)(*(char *)(param_1 + 0x4828) + 0x30U)) goto LAB_1804217f5;
                *(uint64_t *)(param_1 + 0x4820) = 0;
                *(int32_t *)(param_1 + 0x482c) = 0;
                *(int32_t *)(param_1 + 0x47d8) = 0;
                *(int32_t *)(param_1 + 0x4778) = 0;
                *(int32_t *)(param_1 + 0x4718) = 0;
                *(int32_t *)(param_1 + 0x46b8) = 0;
                *(int8_t *)(param_1 + 0x4828) = 0xff;
                iVar8 = 0x7fffffff;
                if (*(int *)(param_1 + 0x4868) != 0) {
                  iVar8 = *(int *)(param_1 + 0x4868);
                }
                *(int32_t *)(param_1 + 0x4844) = 0;
                *(int *)(param_1 + 0x486c) = iVar8;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < *(int *)(param_1 + 0x4690));
          }
          iStack_c8 = iStack_c8 + 1;
        } while (iStack_c8 < *(int *)(param_1 + 0x4694));
      }
    }
  }
  else if (*(int *)(param_1 + 0x4854) == 1) {
    iVar9 = *(int *)(param_1 + 0x4858);
    iVar10 = 0;
    lVar6 = (int64_t)iVar9 * 0x60;
    iVar8 = *(int *)(lVar6 + 0x46bc + param_1) + 7 >> 3;
    iVar11 = *(int *)(lVar6 + 0x46c0 + param_1) + 7 >> 3;
    if (0 < iVar11) {
      do {
        iVar7 = 0;
        if (0 < iVar8) {
          do {
            lVar1 = *(int64_t *)(lVar6 + 0x46f0 + param_1) +
                    (int64_t)((*(int *)(lVar6 + 0x46f8 + param_1) * iVar10 + iVar7) * 0x40) * 2;
            if (*(int *)(param_1 + 0x4834) == 0) {
              iVar5 = FUN_18041fdb0(param_1,lVar1,
                                    param_1 + 8 +
                                    (int64_t)*(int *)(param_1 + 0x46b0 + lVar6) * 0x690,iVar9);
            }
            else {
              lVar4 = (int64_t)*(int *)(param_1 + 0x46b4 + lVar6);
              iVar5 = FUN_180420020(param_1,lVar1,param_1 + 0x1a48 + lVar4 * 0x690,
                                    param_1 + 0x3688 + lVar4 * 0x400);
            }
            if (iVar5 == 0) goto LAB_1804217f5;
            *(int *)(param_1 + 0x486c) = *(int *)(param_1 + 0x486c) + -1;
            if (*(int *)(param_1 + 0x486c) < 1) {
              if (*(int *)(param_1 + 0x4824) < 0x18) {
                FUN_18041f7a0(param_1);
              }
              if (7 < (byte)(*(char *)(param_1 + 0x4828) + 0x30U)) goto LAB_1804217f5;
              *(uint64_t *)(param_1 + 0x4820) = 0;
              *(int32_t *)(param_1 + 0x482c) = 0;
              *(int32_t *)(param_1 + 0x47d8) = 0;
              *(int32_t *)(param_1 + 0x4778) = 0;
              *(int32_t *)(param_1 + 0x4718) = 0;
              *(int32_t *)(param_1 + 0x46b8) = 0;
              *(int8_t *)(param_1 + 0x4828) = 0xff;
              iVar5 = 0x7fffffff;
              if (*(int *)(param_1 + 0x4868) != 0) {
                iVar5 = *(int *)(param_1 + 0x4868);
              }
              *(int32_t *)(param_1 + 0x4844) = 0;
              *(int *)(param_1 + 0x486c) = iVar5;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar8);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar11);
    }
  }
  else {
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x4694)) {
      do {
        iVar8 = 0;
        if (0 < *(int *)(param_1 + 0x4690)) {
          do {
            iVar10 = 0;
            if (0 < *(int *)(param_1 + 0x4854)) {
              piStack_c0 = (int *)(param_1 + 0x4858);
              do {
                iVar11 = *piStack_c0;
                iVar7 = 0;
                lVar6 = (int64_t)iVar11 * 0x60 + param_1;
                if (0 < *(int *)(lVar6 + 0x46a8)) {
                  do {
                    iVar5 = *(int *)(lVar6 + 0x46a4);
                    iVar2 = 0;
                    if (0 < iVar5) {
                      do {
                        iVar5 = FUN_18041fdb0(param_1,*(int64_t *)(lVar6 + 0x46f0) +
                                                      (int64_t)
                                                      ((iVar5 * iVar8 +
                                                       (iVar9 * *(int *)(lVar6 + 0x46a8) + iVar7) *
                                                       *(int *)(lVar6 + 0x46f8) + iVar2) * 0x40) * 2
                                              ,param_1 + 8 +
                                               (int64_t)*(int *)(lVar6 + 0x46b0) * 0x690,iVar11);
                        if (iVar5 == 0) goto LAB_1804217f5;
                        iVar5 = *(int *)(lVar6 + 0x46a4);
                        iVar2 = iVar2 + 1;
                      } while (iVar2 < iVar5);
                    }
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < *(int *)(lVar6 + 0x46a8));
                }
                iVar10 = iVar10 + 1;
                piStack_c0 = piStack_c0 + 1;
              } while (iVar10 < *(int *)(param_1 + 0x4854));
            }
            *(int *)(param_1 + 0x486c) = *(int *)(param_1 + 0x486c) + -1;
            if (*(int *)(param_1 + 0x486c) < 1) {
              if (*(int *)(param_1 + 0x4824) < 0x18) {
                FUN_18041f7a0(param_1);
              }
              if (7 < (byte)(*(char *)(param_1 + 0x4828) + 0x30U)) goto LAB_1804217f5;
              *(uint64_t *)(param_1 + 0x4820) = 0;
              *(int32_t *)(param_1 + 0x482c) = 0;
              *(int32_t *)(param_1 + 0x47d8) = 0;
              *(int32_t *)(param_1 + 0x4778) = 0;
              *(int32_t *)(param_1 + 0x4718) = 0;
              *(int32_t *)(param_1 + 0x46b8) = 0;
              *(int8_t *)(param_1 + 0x4828) = 0xff;
              iVar10 = 0x7fffffff;
              if (*(int *)(param_1 + 0x4868) != 0) {
                iVar10 = *(int *)(param_1 + 0x4868);
              }
              *(int32_t *)(param_1 + 0x4844) = 0;
              *(int *)(param_1 + 0x486c) = iVar10;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(param_1 + 0x4690));
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0x4694));
    }
  }
LAB_1804217f5:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_108);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



