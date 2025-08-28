#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part259.c - 1 个函数

// 函数: void FUN_180815080(longlong param_1,longlong param_2)
void FUN_180815080(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(*(longlong *)(param_1 + 0x178) + 0x48c4) == 0) {
    iVar2 = FUN_180815200(param_1,param_2,0,0,0);
    if (iVar2 != 0) {
      return;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x178);
  *(longlong *)(lVar1 + 0x48b0) = lVar1 + 0x200 + (longlong)*(int *)(lVar1 + 0x48a0) * 0x900;
  *(uint *)(*(longlong *)(param_1 + 0x178) + 0x48a0) =
       *(int *)(*(longlong *)(param_1 + 0x178) + 0x48a0) - 1U & 1;
  *(int32_t *)(*(longlong *)(param_1 + 0x178) + 0x48a8) = 0;
                    // WARNING: Subroutine does not return
  memcpy(*(uint64_t *)(*(longlong *)(param_1 + 0x178) + 0x48b0),param_2 + 4,
         (longlong)*(int *)(*(longlong *)(param_1 + 0x178) + 0x48c4));
}



uint64_t
FUN_180815200(longlong param_1,int8_t *param_2,int32_t *param_3,int32_t *param_4,
             int *param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ushort uVar5;
  uint3 uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  
  bVar2 = param_2[1];
  uVar5 = CONCAT11(*param_2,bVar2);
  uVar6 = CONCAT21(uVar5,param_2[2]);
  bVar3 = param_2[3];
  *(uint *)(*(longlong *)(param_1 + 0x178) + 0x4898) = CONCAT31(uVar6,bVar3);
  if ((uVar5 & 0xffe0) == 0xffe0) {
    if ((bVar2 & 0x10) == 0) {
      if ((bVar2 & 8) != 0) {
        return 0x13;
      }
      *(int32_t *)(*(longlong *)(param_1 + 0x178) + 0x485c) = 1;
      *(int32_t *)(*(longlong *)(param_1 + 0x178) + 0x4860) = 1;
    }
    else {
      *(uint *)(*(longlong *)(param_1 + 0x178) + 0x485c) = ~(uint)(uVar5 >> 3) & 1;
      *(int32_t *)(*(longlong *)(param_1 + 0x178) + 0x4860) = 0;
    }
    *(uint *)(*(longlong *)(param_1 + 0x178) + 0x4868) = 4 - (((uVar6 & 0x600) << 8) >> 0x11);
    lVar8 = *(longlong *)(param_1 + 0x178);
    if (*(int *)(lVar8 + 0x4868) - 2U < 2) {
      if (*(int *)(lVar8 + 0x48c0) == 0) {
        *(int *)(lVar8 + 0x48c0) = *(int *)(lVar8 + 0x4868);
        lVar8 = *(longlong *)(param_1 + 0x178);
      }
      if ((*(int *)(lVar8 + 0x4868) == *(int *)(lVar8 + 0x48c0)) &&
         (uVar9 = ((uVar6 & 0xc) << 8) >> 10, uVar9 != 3)) {
        if (*(int *)(lVar8 + 0x4860) == 0) {
          iVar7 = *(int *)(lVar8 + 0x485c) * 3;
        }
        else {
          iVar7 = 6;
        }
        *(uint *)(lVar8 + 0x4874) = iVar7 + uVar9;
        if (param_3 != (int32_t *)0x0) {
          *param_3 = *(int32_t *)
                      ((longlong)*(int *)(*(longlong *)(param_1 + 0x178) + 0x4874) * 4 + 0x180beb820
                      );
        }
        *(uint *)(*(longlong *)(param_1 + 0x178) + 0x486c) = ~(uint)uVar5 & 1;
        *(uint *)(*(longlong *)(param_1 + 0x178) + 0x4870) = ((uVar6 & 0xf0) << 8) >> 0xc;
        *(uint *)(*(longlong *)(param_1 + 0x178) + 0x4878) = ((uVar6 & 2) << 8) >> 9;
        *(uint *)(*(longlong *)(param_1 + 0x178) + 0x487c) = uVar6 & 1;
        *(uint *)(*(longlong *)(param_1 + 0x178) + 0x4880) = (uint)(bVar3 >> 6);
        *(uint *)(*(longlong *)(param_1 + 0x178) + 0x4884) = (bVar3 & 0x30) >> 4;
        *(uint *)(*(longlong *)(param_1 + 0x178) + 0x4888) = (bVar3 & 8) >> 3;
        *(uint *)(*(longlong *)(param_1 + 0x178) + 0x488c) = (bVar3 & 4) >> 2;
        *(uint *)(*(longlong *)(param_1 + 0x178) + 0x4890) = bVar3 & 3;
        *(uint *)(*(longlong *)(param_1 + 0x178) + 0x4850) =
             (*(int *)(*(longlong *)(param_1 + 0x178) + 0x4880) != 3) + 1;
        lVar8 = *(longlong *)(param_1 + 0x178);
        iVar7 = *(int *)(lVar8 + 0x4870);
        if ((iVar7 != 0) && (iVar7 != 0xf)) {
          if (*(int *)(lVar8 + 0x4868) == 2) {
            if ((*(byte *)(param_1 + 0x2c) & 2) == 0) {
              iVar7 = *(int *)(((longlong)*(int *)(lVar8 + 0x485c) * 0x30 + (longlong)iVar7) * 4 +
                              0x180beb6e0);
              if (*(int *)(lVar8 + 0x4880) == 3) {
                if (0xdf < iVar7) {
                  return 0x13;
                }
              }
              else {
                uVar9 = iVar7 - 0x20;
                if ((uVar9 < 0x31) && ((0x1000001010001U >> ((ulonglong)uVar9 & 0x3f) & 1) != 0)) {
                  return 0x13;
                }
              }
            }
            if ((*(int *)(lVar8 + 0x4880) != 1) && (*(int *)(lVar8 + 0x4884) != 0)) {
              return 0x13;
            }
          }
          if (((((*(byte *)(param_1 + 0x2c) & 2) != 0) || (*(longlong *)(param_1 + 8) == 0)) ||
              (iVar7 = *(int *)(*(longlong *)(param_1 + 8) + 0xc), iVar7 == 0)) ||
             (iVar7 == *(int *)(lVar8 + 0x4850))) {
            if (param_4 == (int32_t *)0x0) {
              if ((*(int *)(lVar8 + 0x4850) != *(int *)(*(longlong *)(param_1 + 8) + 0xc)) &&
                 (*(int *)(param_1 + 0x1c8) == 0)) {
                return 0x13;
              }
            }
            else {
              *param_4 = *(int32_t *)(lVar8 + 0x4850);
              lVar8 = *(longlong *)(param_1 + 0x178);
            }
            if (*(int *)(lVar8 + 0x4868) == 2) {
              FUN_18080e220(param_1);
              lVar8 = *(longlong *)(param_1 + 0x178);
              if (*(int *)(lVar8 + 0x4880) == 1) {
                iVar7 = *(int *)(lVar8 + 0x4884) * 4 + 4;
              }
              else {
                iVar7 = *(int *)(lVar8 + 0x4858);
              }
              *(int *)(lVar8 + 0x4854) = iVar7;
              lVar8 = *(longlong *)(param_1 + 0x178);
              *(int *)(lVar8 + 0x4894) =
                   *(int *)(((longlong)*(int *)(lVar8 + 0x485c) * 0x30 +
                            (longlong)*(int *)(lVar8 + 0x4870)) * 4 + 0x180beb6e0) * 0x23280;
              lVar8 = *(longlong *)(param_1 + 0x178);
              *(int *)(lVar8 + 0x4894) =
                   *(int *)(lVar8 + 0x4894) /
                   *(int *)((longlong)*(int *)(lVar8 + 0x4874) * 4 + 0x180beb820);
            }
            else {
              if (*(int *)(lVar8 + 0x4868) != 3) {
                return 0x44;
              }
              *(int *)(lVar8 + 0x4894) =
                   *(int *)(((longlong)*(int *)(lVar8 + 0x485c) * 0x30 +
                            (longlong)*(int *)(lVar8 + 0x4870)) * 4 + 0x180beb720) * 0x23280;
              lVar8 = *(longlong *)(param_1 + 0x178);
              *(int *)(lVar8 + 0x4894) =
                   *(int *)(lVar8 + 0x4894) /
                   (*(int *)((longlong)*(int *)(lVar8 + 0x4874) * 4 + 0x180beb820) <<
                   ((byte)*(int32_t *)(lVar8 + 0x485c) & 0x1f));
            }
            piVar1 = (int *)(*(longlong *)(param_1 + 0x178) + 0x4894);
            *piVar1 = *piVar1 + *(int *)(*(longlong *)(param_1 + 0x178) + 0x4878) + -4;
            iVar7 = *(int *)(*(longlong *)(param_1 + 0x178) + 0x4894);
            if (iVar7 - 0x10U < 0x6f1) {
              *(int *)(*(longlong *)(param_1 + 0x178) + 0x48c4) = iVar7;
              if (param_5 != (int *)0x0) {
                iVar7 = *(int *)(*(longlong *)(param_1 + 0x178) + 0x4894);
                *param_5 = iVar7;
                if ((*(byte *)(param_1 + 0x2c) & 2) != 0) {
                  if ((*(longlong *)(param_1 + 8) != 0) &&
                     (2 < *(int *)(*(longlong *)(param_1 + 8) + 0xc))) {
                    iVar4 = *(int *)(*(longlong *)(param_1 + 0x178) + 0x48c8);
                    if (*(int *)(*(longlong *)(param_1 + 0x178) + 0x4894) < iVar4) {
                      iVar7 = iVar4;
                    }
                    *param_5 = (iVar7 + 0x13U & 0xfffffff0) - 4;
                    return 0;
                  }
                  if (*(int *)(*(longlong *)(param_1 + 0x178) + 0x4868) == 3) {
                    *param_5 = (iVar7 + 7U & 0xfffffffc) - 4;
                  }
                }
              }
              return 0;
            }
          }
        }
      }
    }
  }
  return 0x13;
}



uint64_t FUN_1808156f0(longlong param_1,longlong param_2,int8_t *param_3,int32_t *param_4)

{
  byte bVar1;
  int8_t uVar2;
  int iVar3;
  longlong lVar4;
  uint64_t uVar5;
  int8_t *puVar6;
  int8_t *puVar7;
  
  bVar1 = *(byte *)(param_2 + 3) >> 6;
  if ((*(byte *)(param_2 + 1) & 8) == 0) {
    lVar4 = 0xd;
    if (bVar1 != 3) {
      lVar4 = 0x15;
    }
  }
  else {
    lVar4 = 0x24;
    if (bVar1 == 3) {
      lVar4 = 0x15;
    }
  }
  lVar4 = lVar4 + param_2;
  iVar3 = func_0x00018076b6b0(lVar4,&unknown_var_704_ptr,4);
  if (iVar3 == 0) {
    bVar1 = *(byte *)(lVar4 + 7);
    puVar7 = (int8_t *)(lVar4 + 8);
    if ((bVar1 & 1) != 0) {
      uVar2 = *puVar7;
      puVar7 = (int8_t *)(lVar4 + 0xc);
      if (param_4 != (int32_t *)0x0) {
        *param_4 = CONCAT31(CONCAT21(CONCAT11(uVar2,*(int8_t *)(lVar4 + 9)),
                                     *(int8_t *)(lVar4 + 10)),*(int8_t *)(lVar4 + 0xb));
        *(int8_t *)(param_1 + 0x23c) = 1;
      }
    }
    if (((bVar1 & 4) != 0) && (param_3 != (int8_t *)0x0)) {
      puVar6 = puVar7 + 4;
      if ((bVar1 & 2) == 0) {
        puVar6 = puVar7;
      }
      *param_3 = *puVar6;
      param_3[1] = puVar6[1];
      param_3[2] = puVar6[2];
      param_3[3] = puVar6[3];
      param_3[4] = puVar6[4];
      param_3[5] = puVar6[5];
      param_3[6] = puVar6[6];
      param_3[7] = puVar6[7];
      param_3[8] = puVar6[8];
      param_3[9] = puVar6[9];
      param_3[10] = puVar6[10];
      param_3[0xb] = puVar6[0xb];
      param_3[0xc] = puVar6[0xc];
      param_3[0xd] = puVar6[0xd];
      param_3[0xe] = puVar6[0xe];
      param_3[0xf] = puVar6[0xf];
      param_3[0x10] = puVar6[0x10];
      param_3[0x11] = puVar6[0x11];
      param_3[0x12] = puVar6[0x12];
      param_3[0x13] = puVar6[0x13];
      param_3[0x14] = puVar6[0x14];
      param_3[0x15] = puVar6[0x15];
      param_3[0x16] = puVar6[0x16];
      param_3[0x17] = puVar6[0x17];
      param_3[0x18] = puVar6[0x18];
      param_3[0x19] = puVar6[0x19];
      param_3[0x1a] = puVar6[0x1a];
      param_3[0x1b] = puVar6[0x1b];
      param_3[0x1c] = puVar6[0x1c];
      param_3[0x1d] = puVar6[0x1d];
      param_3[0x1e] = puVar6[0x1e];
      param_3[0x1f] = puVar6[0x1f];
      param_3[0x20] = puVar6[0x20];
      param_3[0x21] = puVar6[0x21];
      param_3[0x22] = puVar6[0x22];
      param_3[0x23] = puVar6[0x23];
      param_3[0x24] = puVar6[0x24];
      param_3[0x25] = puVar6[0x25];
      param_3[0x26] = puVar6[0x26];
      param_3[0x27] = puVar6[0x27];
      param_3[0x28] = puVar6[0x28];
      param_3[0x29] = puVar6[0x29];
      param_3[0x2a] = puVar6[0x2a];
      param_3[0x2b] = puVar6[0x2b];
      param_3[0x2c] = puVar6[0x2c];
      param_3[0x2d] = puVar6[0x2d];
      param_3[0x2e] = puVar6[0x2e];
      param_3[0x2f] = puVar6[0x2f];
      param_3[0x30] = puVar6[0x30];
      param_3[0x31] = puVar6[0x31];
      param_3[0x32] = puVar6[0x32];
      param_3[0x33] = puVar6[0x33];
      param_3[0x34] = puVar6[0x34];
      param_3[0x35] = puVar6[0x35];
      param_3[0x36] = puVar6[0x36];
      param_3[0x37] = puVar6[0x37];
      param_3[0x38] = puVar6[0x38];
      param_3[0x39] = puVar6[0x39];
      param_3[0x3a] = puVar6[0x3a];
      param_3[0x3b] = puVar6[0x3b];
      param_3[0x3c] = puVar6[0x3c];
      param_3[0x3d] = puVar6[0x3d];
      param_3[0x3e] = puVar6[0x3e];
      param_3[0x3f] = puVar6[0x3f];
      param_3[0x40] = puVar6[0x40];
      param_3[0x41] = puVar6[0x41];
      param_3[0x42] = puVar6[0x42];
      param_3[0x43] = puVar6[0x43];
      param_3[0x44] = puVar6[0x44];
      param_3[0x45] = puVar6[0x45];
      param_3[0x46] = puVar6[0x46];
      param_3[0x47] = puVar6[0x47];
      param_3[0x48] = puVar6[0x48];
      param_3[0x49] = puVar6[0x49];
      param_3[0x4a] = puVar6[0x4a];
      param_3[0x4b] = puVar6[0x4b];
      param_3[0x4c] = puVar6[0x4c];
      param_3[0x4d] = puVar6[0x4d];
      param_3[0x4e] = puVar6[0x4e];
      param_3[0x4f] = puVar6[0x4f];
      param_3[0x50] = puVar6[0x50];
      param_3[0x51] = puVar6[0x51];
      param_3[0x52] = puVar6[0x52];
      param_3[0x53] = puVar6[0x53];
      param_3[0x54] = puVar6[0x54];
      param_3[0x55] = puVar6[0x55];
      param_3[0x56] = puVar6[0x56];
      param_3[0x57] = puVar6[0x57];
      param_3[0x58] = puVar6[0x58];
      param_3[0x59] = puVar6[0x59];
      param_3[0x5a] = puVar6[0x5a];
      param_3[0x5b] = puVar6[0x5b];
      param_3[0x5c] = puVar6[0x5c];
      param_3[0x5d] = puVar6[0x5d];
      param_3[0x5e] = puVar6[0x5e];
      param_3[0x5f] = puVar6[0x5f];
      param_3[0x60] = puVar6[0x60];
      param_3[0x61] = puVar6[0x61];
      param_3[0x62] = puVar6[0x62];
      param_3[99] = puVar6[99];
      *(int8_t *)(param_1 + 0x23d) = 1;
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 0x13;
  }
  return uVar5;
}



uint64_t FUN_180815ba0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x178) == 0) {
    return 0;
  }
  if (0 < (*(int *)(param_1 + 0x1c8) + 1) / 2) {
                    // WARNING: Subroutine does not return
    memset(*(uint64_t *)(param_1 + 0x178),0,0x48d0);
  }
  return 0;
}



uint64_t FUN_180815bbf(void)

{
  int in_EAX;
  longlong unaff_RDI;
  
  if (0 < in_EAX / 2) {
                    // WARNING: Subroutine does not return
    memset(*(uint64_t *)(unaff_RDI + 0x178),0,0x48d0);
  }
  return 0;
}



uint64_t FUN_180815c77(void)

{
  return 0;
}



uint64_t FUN_180815c89(void)

{
  return 0;
}



uint64_t
FUN_180815ca0(longlong param_1,longlong param_2,longlong param_3,uint param_4,int32_t param_5)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uStackX_8;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x178) + 0x48a4);
  *piVar1 = *piVar1 + -1;
  puVar2 = (uint *)(*(longlong *)(param_1 + 0x178) + 0x48a4);
  *puVar2 = *puVar2 & 0xf;
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x178) + 0x48a4);
  uVar9 = uVar4 & 1;
  iVar5 = uVar4 + (uVar9 ^ 1);
  if (0 < (int)param_4) {
    lVar7 = 0;
    uStackX_8 = (ulonglong)param_4;
    lVar6 = param_2;
    lVar10 = param_3;
    do {
      lVar8 = *(longlong *)(param_1 + 0x178);
      lVar11 = *(longlong *)(lVar8 + 0x2440) + lVar7;
      lVar3 = (longlong)(int)((uVar9 ^ 1) * 0x120) * 4 + lVar11;
      if (*(int *)(lVar8 + 0x4868) == 2) {
        FUN_180814240(lVar11 + ((ulonglong)(*(int *)(lVar8 + 0x48a4) + uVar9 & 0xf) +
                               (ulonglong)(uVar9 * 0x120)) * 4,(longlong)iVar5 * 4 + lVar3,lVar10);
        lVar8 = *(longlong *)(param_1 + 0x178);
      }
      if (*(int *)(lVar8 + 0x4868) == 3) {
        FUN_180814240(lVar11 + ((ulonglong)(*(int *)(lVar8 + 0x48a4) + uVar9 & 0xf) +
                               (ulonglong)(uVar9 * 0x120)) * 4,(longlong)iVar5 * 4 + lVar3,
                      lVar7 + param_3);
      }
      if (param_2 != 0) {
        FUN_180815ea0(param_1,lVar3,iVar5,param_5,lVar6);
      }
      lVar7 = lVar7 + 0x900;
      lVar10 = lVar10 + 0x200;
      lVar6 = lVar6 + 2;
      uStackX_8 = uStackX_8 - 1;
    } while (uStackX_8 != 0);
  }
  return 0;
}



uint64_t FUN_180815d01(int param_1,longlong param_2,uint64_t param_3,ulonglong param_4)

{
  longlong lVar1;
  int in_EAX;
  longlong lVar2;
  longlong unaff_RBP;
  longlong lVar3;
  longlong lVar4;
  longlong in_R11;
  int unaff_R12D;
  longlong lVar5;
  longlong lVar6;
  longlong lStack0000000000000030;
  longlong lStack0000000000000038;
  ulonglong uStack0000000000000090;
  longlong in_stack_00000098;
  longlong in_stack_000000a0;
  
  lVar3 = 0;
  lStack0000000000000030 = (longlong)param_1;
  lStack0000000000000038 = (longlong)(in_EAX * 0x120) * 4;
  uStack0000000000000090 = param_4 & 0xffffffff;
  lVar2 = lStack0000000000000030 * 4;
  lVar5 = in_R11;
  do {
    lVar4 = *(longlong *)(unaff_RBP + 0x178);
    lVar6 = *(longlong *)(lVar4 + 0x2440) + lVar3;
    lVar1 = lStack0000000000000038 + lVar6;
    if (*(int *)(lVar4 + 0x4868) == 2) {
      lVar2 = lStack0000000000000030 * 4;
      FUN_180814240(lVar6 + ((ulonglong)(*(int *)(lVar4 + 0x48a4) + unaff_R12D & 0xf) +
                            (ulonglong)(uint)(unaff_R12D * 0x120)) * 4,lVar2 + lVar1,lVar5);
      lVar4 = *(longlong *)(unaff_RBP + 0x178);
      param_2 = in_stack_00000098;
      in_R11 = in_stack_000000a0;
    }
    if (*(int *)(lVar4 + 0x4868) == 3) {
      FUN_180814240(lVar6 + ((ulonglong)(*(int *)(lVar4 + 0x48a4) + unaff_R12D & 0xf) +
                            (ulonglong)(uint)(unaff_R12D * 0x120)) * 4,lVar2 + lVar1,lVar3 + in_R11)
      ;
      param_2 = in_stack_00000098;
    }
    else {
      lVar2 = lStack0000000000000030 * 4;
    }
    if (param_2 != 0) {
      FUN_180815ea0();
      param_2 = in_stack_00000098;
    }
    lVar3 = lVar3 + 0x900;
    lVar5 = lVar5 + 0x200;
    uStack0000000000000090 = uStack0000000000000090 - 1;
    in_R11 = in_stack_000000a0;
  } while (uStack0000000000000090 != 0);
  return 0;
}



uint64_t FUN_180815e8e(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180815ea0(uint64_t param_1,float *param_2,int param_3,int param_4,int16_t *param_5)

{
  int16_t uVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  
  lVar4 = (longlong)param_4;
  lVar2 = 4;
  pfVar5 = (float *)(ui_system_config + (0x10 - (longlong)param_3) * 4);
  do {
    pfVar6 = pfVar5;
    pfVar3 = param_2;
    fVar7 = (((((((((((((((*pfVar6 * *pfVar3 - pfVar6[1] * pfVar3[1]) + pfVar6[2] * pfVar3[2]) -
                        pfVar6[3] * pfVar3[3]) + pfVar6[4] * pfVar3[4]) - pfVar6[5] * pfVar3[5]) +
                     pfVar6[6] * pfVar3[6]) - pfVar6[7] * pfVar3[7]) + pfVar6[8] * pfVar3[8]) -
                  pfVar6[9] * pfVar3[9]) + pfVar6[10] * pfVar3[10]) - pfVar6[0xb] * pfVar3[0xb]) +
               pfVar6[0xc] * pfVar3[0xc]) - pfVar6[0xd] * pfVar3[0xd]) + pfVar6[0xe] * pfVar3[0xe])
            - pfVar6[0xf] * pfVar3[0xf]) * 32767.0;
    if (fVar7 <= 32767.0) {
      uVar1 = 0x8000;
      if (-32768.0 <= fVar7) {
        uVar1 = (int16_t)(int)fVar7;
      }
    }
    else {
      uVar1 = 0x7fff;
    }
    *param_5 = uVar1;
    fVar7 = (((((((((((((((pfVar6[0x20] * pfVar3[0x10] - pfVar6[0x21] * pfVar3[0x11]) +
                         pfVar6[0x22] * pfVar3[0x12]) - pfVar6[0x23] * pfVar3[0x13]) +
                       pfVar6[0x24] * pfVar3[0x14]) - pfVar6[0x25] * pfVar3[0x15]) +
                     pfVar6[0x26] * pfVar3[0x16]) - pfVar6[0x27] * pfVar3[0x17]) +
                   pfVar6[0x28] * pfVar3[0x18]) - pfVar6[0x29] * pfVar3[0x19]) +
                 pfVar6[0x2a] * pfVar3[0x1a]) - pfVar6[0x2b] * pfVar3[0x1b]) +
               pfVar6[0x2c] * pfVar3[0x1c]) - pfVar6[0x2d] * pfVar3[0x1d]) +
             pfVar6[0x2e] * pfVar3[0x1e]) - pfVar6[0x2f] * pfVar3[0x1f]) * 32767.0;
    if (fVar7 <= 32767.0) {
      uVar1 = 0x8000;
      if (-32768.0 <= fVar7) {
        uVar1 = (int16_t)(int)fVar7;
      }
    }
    else {
      uVar1 = 0x7fff;
    }
    param_5[lVar4] = uVar1;
    param_5 = param_5 + lVar4 * 2;
    fVar7 = (((((((((((((((pfVar6[0x40] * pfVar3[0x20] - pfVar6[0x41] * pfVar3[0x21]) +
                         pfVar6[0x42] * pfVar3[0x22]) - pfVar6[0x43] * pfVar3[0x23]) +
                       pfVar6[0x44] * pfVar3[0x24]) - pfVar6[0x45] * pfVar3[0x25]) +
                     pfVar6[0x46] * pfVar3[0x26]) - pfVar6[0x47] * pfVar3[0x27]) +
                   pfVar6[0x48] * pfVar3[0x28]) - pfVar6[0x49] * pfVar3[0x29]) +
                 pfVar6[0x4a] * pfVar3[0x2a]) - pfVar6[0x4b] * pfVar3[0x2b]) +
               pfVar6[0x4c] * pfVar3[0x2c]) - pfVar6[0x4d] * pfVar3[0x2d]) +
             pfVar6[0x4e] * pfVar3[0x2e]) - pfVar6[0x4f] * pfVar3[0x2f]) * 32767.0;
    if (fVar7 <= 32767.0) {
      uVar1 = 0x8000;
      if (-32768.0 <= fVar7) {
        uVar1 = (int16_t)(int)fVar7;
      }
    }
    else {
      uVar1 = 0x7fff;
    }
    *param_5 = uVar1;
    fVar7 = (((((((((((((((pfVar6[0x60] * pfVar3[0x30] - pfVar6[0x61] * pfVar3[0x31]) +
                         pfVar6[0x62] * pfVar3[0x32]) - pfVar6[99] * pfVar3[0x33]) +
                       pfVar6[100] * pfVar3[0x34]) - pfVar6[0x65] * pfVar3[0x35]) +
                     pfVar6[0x66] * pfVar3[0x36]) - pfVar6[0x67] * pfVar3[0x37]) +
                   pfVar6[0x68] * pfVar3[0x38]) - pfVar6[0x69] * pfVar3[0x39]) +
                 pfVar6[0x6a] * pfVar3[0x3a]) - pfVar6[0x6b] * pfVar3[0x3b]) +
               pfVar6[0x6c] * pfVar3[0x3c]) - pfVar6[0x6d] * pfVar3[0x3d]) +
             pfVar6[0x6e] * pfVar3[0x3e]) - pfVar6[0x6f] * pfVar3[0x3f]) * 32767.0;
    if (fVar7 <= 32767.0) {
      uVar1 = 0x8000;
      if (-32768.0 <= fVar7) {
        uVar1 = (int16_t)(int)fVar7;
      }
    }
    else {
      uVar1 = 0x7fff;
    }
    param_5[lVar4] = uVar1;
    param_5 = param_5 + lVar4 + lVar4;
    pfVar5 = pfVar6 + 0x80;
    lVar2 = lVar2 + -1;
    param_2 = pfVar3 + 0x40;
  } while (lVar2 != 0);
  fVar7 = (pfVar6[0x82] * pfVar3[0x42] + *pfVar5 * pfVar3[0x40] + pfVar6[0x84] * pfVar3[0x44] +
           pfVar6[0x86] * pfVar3[0x46] + pfVar6[0x88] * pfVar3[0x48] + pfVar6[0x8a] * pfVar3[0x4a] +
           pfVar6[0x8c] * pfVar3[0x4c] + pfVar6[0x8e] * pfVar3[0x4e]) * 32767.0;
  if (fVar7 <= 32767.0) {
    uVar1 = 0x8000;
    if (-32768.0 <= fVar7) {
      uVar1 = (int16_t)(int)fVar7;
    }
  }
  else {
    uVar1 = 0x7fff;
  }
  *param_5 = uVar1;
  pfVar3 = pfVar3 + 0x30;
  pfVar5 = pfVar5 + (longlong)(param_3 * 2) + -0x20;
  lVar2 = 5;
  do {
    param_5 = param_5 + lVar4;
    fVar7 = (((((((((((((((-(pfVar5[-1] * *pfVar3) - pfVar5[-2] * pfVar3[1]) -
                         pfVar5[-3] * pfVar3[2]) - pfVar5[-4] * pfVar3[3]) - pfVar5[-5] * pfVar3[4])
                      - pfVar5[-6] * pfVar3[5]) - pfVar5[-7] * pfVar3[6]) - pfVar5[-8] * pfVar3[7])
                   - pfVar5[-9] * pfVar3[8]) - pfVar5[-10] * pfVar3[9]) - pfVar5[-0xb] * pfVar3[10])
                - pfVar5[-0xc] * pfVar3[0xb]) - pfVar5[-0xd] * pfVar3[0xc]) -
              pfVar5[-0xe] * pfVar3[0xd]) - pfVar5[-0xf] * pfVar3[0xe]) -
            pfVar5[-0x10] * pfVar3[0xf]) * 32767.0;
    if (fVar7 <= 32767.0) {
      uVar1 = 0x8000;
      if (-32768.0 <= fVar7) {
        uVar1 = (int16_t)(int)fVar7;
      }
    }
    else {
      uVar1 = 0x7fff;
    }
    *param_5 = uVar1;
    fVar7 = (((((((((((((((-(pfVar5[-0x21] * pfVar3[-0x10]) - pfVar5[-0x22] * pfVar3[-0xf]) -
                         pfVar5[-0x23] * pfVar3[-0xe]) - pfVar5[-0x24] * pfVar3[-0xd]) -
                       pfVar5[-0x25] * pfVar3[-0xc]) - pfVar5[-0x26] * pfVar3[-0xb]) -
                     pfVar5[-0x27] * pfVar3[-10]) - pfVar5[-0x28] * pfVar3[-9]) -
                   pfVar5[-0x29] * pfVar3[-8]) - pfVar5[-0x2a] * pfVar3[-7]) -
                 pfVar5[-0x2b] * pfVar3[-6]) - pfVar5[-0x2c] * pfVar3[-5]) -
               pfVar5[-0x2d] * pfVar3[-4]) - pfVar5[-0x2e] * pfVar3[-3]) -
             pfVar5[-0x2f] * pfVar3[-2]) - pfVar5[-0x30] * pfVar3[-1]) * 32767.0;
    if (fVar7 <= 32767.0) {
      uVar1 = 0x8000;
      if (-32768.0 <= fVar7) {
        uVar1 = (int16_t)(int)fVar7;
      }
    }
    else {
      uVar1 = 0x7fff;
    }
    param_5[lVar4] = uVar1;
    param_5 = param_5 + lVar4 + lVar4;
    fVar7 = (((((((((((((((-(pfVar5[-0x41] * pfVar3[-0x20]) - pfVar5[-0x42] * pfVar3[-0x1f]) -
                         pfVar5[-0x43] * pfVar3[-0x1e]) - pfVar5[-0x44] * pfVar3[-0x1d]) -
                       pfVar5[-0x45] * pfVar3[-0x1c]) - pfVar5[-0x46] * pfVar3[-0x1b]) -
                     pfVar5[-0x47] * pfVar3[-0x1a]) - pfVar5[-0x48] * pfVar3[-0x19]) -
                   pfVar5[-0x49] * pfVar3[-0x18]) - pfVar5[-0x4a] * pfVar3[-0x17]) -
                 pfVar5[-0x4b] * pfVar3[-0x16]) - pfVar5[-0x4c] * pfVar3[-0x15]) -
               pfVar5[-0x4d] * pfVar3[-0x14]) - pfVar5[-0x4e] * pfVar3[-0x13]) -
             pfVar5[-0x4f] * pfVar3[-0x12]) - pfVar5[-0x50] * pfVar3[-0x11]) * 32767.0;
    if (fVar7 <= 32767.0) {
      uVar1 = 0x8000;
      if (-32768.0 <= fVar7) {
        uVar1 = (int16_t)(int)fVar7;
      }
    }
    else {
      uVar1 = 0x7fff;
    }
    *param_5 = uVar1;
    pfVar5 = pfVar5 + -0x60;
    pfVar3 = pfVar3 + -0x30;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



