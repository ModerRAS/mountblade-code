#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part464.c - 7 个函数

// 函数: void FUN_180516cb0(longlong param_1,int32_t param_2,longlong param_3,uint64_t param_4)
void FUN_180516cb0(longlong param_1,int32_t param_2,longlong param_3,uint64_t param_4)

{
  char cVar1;
  byte bVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t *puVar10;
  int32_t *puVar11;
  ushort uVar12;
  longlong lVar13;
  int8_t auStack_28 [32];
  
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x590) + 0x25fb);
  puVar10 = (int32_t *)
            FUN_18022a890(param_3,cVar1,*(uint64_t *)(*(longlong *)(param_1 + 0x658) + 0x208));
  uVar3 = puVar10[1];
  uVar4 = puVar10[2];
  uVar5 = puVar10[3];
  puVar11 = (int32_t *)(param_3 + ((longlong)cVar1 + 0x40) * 0x10);
  uVar6 = *puVar11;
  uVar7 = puVar11[1];
  uVar8 = puVar11[2];
  uVar9 = puVar11[3];
  lVar13 = *(longlong *)(param_1 + 0x728);
  *(int32_t *)(lVar13 + 0xa0) = *puVar10;
  *(int32_t *)(lVar13 + 0xa4) = uVar3;
  *(int32_t *)(lVar13 + 0xa8) = uVar4;
  *(int32_t *)(lVar13 + 0xac) = uVar5;
  *(int32_t *)(lVar13 + 0xb0) = uVar6;
  *(int32_t *)(lVar13 + 0xb4) = uVar7;
  *(int32_t *)(lVar13 + 0xb8) = uVar8;
  *(int32_t *)(lVar13 + 0xbc) = uVar9;
  puVar11 = (int32_t *)
            FUN_18022b050(param_3,auStack_28,
                          *(int8_t *)(*(longlong *)(param_1 + 0x590) + 0x25f9),
                          *(uint64_t *)(*(longlong *)(param_1 + 0x658) + 0x208));
  uVar3 = puVar11[1];
  uVar4 = puVar11[2];
  uVar5 = puVar11[3];
  lVar13 = *(longlong *)(param_1 + 0x728);
  *(int32_t *)(lVar13 + 0x90) = *puVar11;
  *(int32_t *)(lVar13 + 0x94) = uVar3;
  *(int32_t *)(lVar13 + 0x98) = uVar4;
  *(int32_t *)(lVar13 + 0x9c) = uVar5;
  lVar13 = *(longlong *)(param_1 + 0x728);
  if (((*(byte *)(lVar13 + 0x5ac) | *(byte *)(lVar13 + 0x5aa)) & 0x3c) != 0) {
    FUN_180519350(param_1,param_3);
    lVar13 = *(longlong *)(param_1 + 0x728);
  }
  uVar12 = *(ushort *)(lVar13 + 0x5aa) | *(ushort *)(lVar13 + 0x5ac);
  bVar2 = (byte)(*(ushort *)(lVar13 + 0x5ac) >> 8);
  if ((uVar12 & 0x1000) == 0) {
    if ((uVar12 & 0x2000) != 0) {
      FUN_1805183c0(param_1,param_3,param_4,bVar2 >> 5 & 1);
    }
  }
  else {
    FUN_1805173c0(param_1,param_2,param_3,bVar2 >> 4 & 1);
  }
  if (((*(byte *)(*(longlong *)(param_1 + 0x728) + 0x5ac) |
       *(byte *)(*(longlong *)(param_1 + 0x728) + 0x5aa)) & 3) != 0) {
    FUN_180518970(param_1,param_3);
  }
  if (*(float *)(*(longlong *)(param_1 + 0x590) + 0xa414) != 0.0) {
    FUN_180514120(param_1,param_3);
  }
  return;
}





// 函数: void FUN_180516e40(longlong param_1,ushort param_2)
void FUN_180516e40(longlong param_1,ushort param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x728) + 0x5ac);
  *(ushort *)(*(longlong *)(param_1 + 0x728) + 0x5ac) = ~param_2 & uVar1;
  lVar3 = *(longlong *)(param_1 + 0x728);
  if (((((*(ushort *)(lVar3 + 0x5aa) | uVar1) & 0x33ff) != 0) &&
      (((*(ushort *)(lVar3 + 0x5ac) | *(ushort *)(lVar3 + 0x5aa)) & 0x33ff) == 0)) &&
     (lVar2 = *(longlong *)(param_1 + 0x590), *(float *)(lVar2 + 0xa414) <= 0.0)) {
    *(uint64_t *)(lVar2 + 0x3440) = 0;
    *(uint64_t *)(lVar2 + 0x3448) = 0;
    lVar3 = *(longlong *)(param_1 + 0x728);
  }
  if (((((*(ushort *)(lVar3 + 0x5aa) | uVar1) & 0x2000) != 0) &&
      (((*(ushort *)(lVar3 + 0x5ac) | *(ushort *)(lVar3 + 0x5aa)) & 0x2000) == 0)) &&
     (lVar3 = *(longlong *)(param_1 + 0x590), *(longlong *)(lVar3 + 0x2510) != 0)) {
    if ((*(longlong *)(lVar3 + 0x3450) != 0) || (*(longlong *)(lVar3 + 0x3458) != 0)) {
      (**(code **)(lVar3 + 0x3458))(*(longlong *)(lVar3 + 0x3450),&system_data_99a0,0);
    }
    *(uint64_t *)(lVar3 + 0x3450) = 0;
    *(uint64_t *)(lVar3 + 0x3458) = 0;
    *(uint64_t *)(lVar3 + 0x2510) = 0;
  }
  return;
}





// 函数: void FUN_180516ef2(longlong param_1)
void FUN_180516ef2(longlong param_1)

{
  longlong lVar1;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(param_1 + 0x590);
  if (*(longlong *)(lVar1 + 0x2510) != unaff_RDI) {
    if ((*(longlong *)(lVar1 + 0x3450) != 0) || (*(longlong *)(lVar1 + 0x3458) != unaff_RDI)) {
      (**(code **)(lVar1 + 0x3458))(*(longlong *)(lVar1 + 0x3450),&system_data_99a0,0);
    }
    *(longlong *)(lVar1 + 0x3450) = unaff_RDI;
    *(longlong *)(lVar1 + 0x3458) = unaff_RDI;
    *(longlong *)(lVar1 + 0x2510) = unaff_RDI;
  }
  return;
}





// 函数: void FUN_180516f46(void)
void FUN_180516f46(void)

{
  return;
}



uint64_t * FUN_180516f50(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x9d8);
  lVar6 = *(longlong *)(param_1 + 0x20);
  lVar7 = lVar5;
  if ((lVar5 == 0) || (cVar4 = FUN_18038d0a0(lVar5), lVar7 = lVar5, cVar4 == '\0')) {
    lVar5 = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x8d8);
  param_2[7] = 0;
  *param_2 = *(uint64_t *)(lVar1 + 0x18);
  uVar2 = *(uint64_t *)(lVar6 + 0x14);
  param_2[3] = *(uint64_t *)(lVar6 + 0xc);
  param_2[4] = uVar2;
  uVar2 = *(uint64_t *)(lVar6 + 0xb0);
  uVar3 = *(uint64_t *)(lVar6 + 0xb8);
  param_2[1] = lVar5;
  param_2[2] = lVar7;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  param_2[7] = param_2[3];
  *(int32_t *)(param_2 + 8) = 3;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_180516fe0(longlong param_1,float *param_2,longlong param_3,int param_4)

{
  float fVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  int iStackX_18;
  int32_t uVar14;
  int iVar15;
  
  fVar12 = 0.0;
  fVar13 = 0.0;
  if (param_3 != 0) {
    if (*(int *)(param_3 + 0x30) < 1) goto FUN_18051739b;
    uVar3 = *(ulonglong *)((longlong)param_4 * 0xa0 + 0x50 + *(longlong *)(param_3 + 0xd0));
    if (((((uVar3 >> 9 & 1) != 0) && (*(short *)(param_3 + 8) < 1)) || ((uVar3 >> 1 & 1) != 0)) ||
       ((*(byte *)((longlong)
                   *(int *)((longlong)param_4 * 0xa0 + 100 + *(longlong *)(param_3 + 0xd0)) * 0x170
                   + 0x140 + render_system_memory) & 0x10) != 0)) goto FUN_18051739b;
  }
  lVar7 = *(longlong *)(param_1 + 0x590);
  iVar2 = *(int *)(lVar7 + 0xac);
  if ((param_3 == 0) ||
     ((*(byte *)((longlong)param_4 * 0xa0 + 0x50 + *(longlong *)(param_3 + 0xd0)) & 0x10) == 0)) {
    uVar6 = *(uint64_t *)(*(longlong *)(param_1 + 0x8f8) + 0x9f0);
  }
  else {
    uVar6 = 0;
  }
  if ((((*(uint *)(param_1 + 0x56c) & 0x800) == 0) || (lVar7 == 0)) ||
     (*(char *)(lVar7 + 0x34bc) == '\0')) {
    bVar11 = 0;
  }
  else {
    bVar11 = 1;
  }
  iVar9 = 0;
  iStackX_18 = 0;
  do {
    if (1 < iStackX_18) break;
    iVar10 = 0;
    do {
      lVar7 = FUN_1805a0690(param_1 + 0x28,iVar10,param_3,uVar6,bVar11,param_4);
      if (lVar7 != 0) {
        iVar5 = *(int *)(lVar7 + 0x30);
        if (iVar5 != -1) {
          if ((iVar2 < 0) || (render_system_memory <= iVar2)) {
            uVar14 = 0x130c;
            iVar4 = iVar2;
            iVar15 = render_system_memory;
LAB_18051724a:
            FUN_1800622d0(system_message_context,0,0xc,&unknown_var_6592_ptr,uVar14,iVar4,iVar15);
          }
          else {
            if ((iVar5 < 0) || ((int)((render_system_memory - render_system_memory) / 0x68) <= iVar5)) {
              uVar14 = 0x1310;
              iVar4 = iVar5;
              iVar15 = (int)((render_system_memory - render_system_memory) / 0x68);
              goto LAB_18051724a;
            }
            iVar4 = FUN_18053a410(&system_data_5f30,iVar2,iVar5);
            if ((iVar4 < 0) || ((int)(render_system_memory - render_system_memory >> 3) <= iVar4)) {
              uVar14 = 0x1317;
              iVar15 = (int)(render_system_memory - render_system_memory >> 3);
              goto LAB_18051724a;
            }
          }
          iVar5 = FUN_18053a410(&system_data_5f30,iVar2,iVar5);
          iVar5 = *(int *)(render_system_memory + (longlong)iVar5 * 4);
          if (iVar5 == -1) {
            lVar8 = 0;
          }
          else {
            lVar8 = *(longlong *)(render_system_memory + (longlong)iVar5 * 8);
          }
          fVar1 = *(float *)(lVar8 + 0x1d8);
          if (fVar12 < fVar1) {
            fVar12 = fVar1;
          }
          fVar13 = fVar13 + fVar1;
          iVar9 = iVar9 + 1;
        }
        if (*(int *)(lVar7 + 0x34) != -1) {
          iVar5 = FUN_18053a410(&system_data_5f30,iVar2);
          iVar5 = *(int *)(render_system_memory + (longlong)iVar5 * 4);
          if (iVar5 == -1) {
            lVar7 = 0;
          }
          else {
            lVar7 = *(longlong *)(render_system_memory + (longlong)iVar5 * 8);
          }
          fVar1 = *(float *)(lVar7 + 0x1d8);
          if (fVar12 < fVar1) {
            fVar12 = fVar1;
          }
          fVar13 = fVar13 + fVar1;
          iVar9 = iVar9 + 1;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 4);
    bVar11 = bVar11 ^ 1;
    iStackX_18 = iStackX_18 + 1;
  } while (iVar9 == 0);
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x6d8) + 0x8c0);
  fVar12 = fVar12 * fVar1;
  fVar13 = (fVar13 / (float)iVar9) * fVar1;
FUN_18051739b:
  *param_2 = fVar12;
  param_2[1] = fVar13;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_180517093(uint64_t param_1,longlong param_2,longlong param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong in_R10;
  longlong unaff_R13;
  int iVar8;
  byte bVar9;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  uint uVar10;
  int32_t uVar11;
  int iStack0000000000000028;
  uint64_t uStack0000000000000040;
  longlong in_stack_000000c0;
  float *in_stack_000000c8;
  int iStack00000000000000d0;
  int in_stack_000000d8;
  
  iVar2 = *(int *)(param_2 + 0xac);
  if ((unaff_R13 == 0) ||
     ((*(byte *)(in_R10 * 0xa0 + 0x50 + *(longlong *)(unaff_R13 + 0xd0)) & 0x10) == 0)) {
    uStack0000000000000040 = *(uint64_t *)(*(longlong *)(param_3 + 0x8f8) + 0x9f0);
  }
  else {
    uStack0000000000000040 = 0;
  }
  if ((((*(uint *)(param_3 + 0x56c) & 0x800) == 0) || (param_2 == 0)) ||
     (*(char *)(param_2 + 0x34bc) == '\0')) {
    bVar9 = 0;
  }
  else {
    bVar9 = 1;
  }
  iVar7 = 0;
  iStack00000000000000d0 = 0;
  do {
    if (1 < iStack00000000000000d0) break;
    iVar8 = 0;
    iStack0000000000000028 = param_4;
    do {
      uVar10 = (uint)bVar9;
      lVar5 = FUN_1805a0690(param_3 + 0x28,iVar8);
      if (lVar5 != 0) {
        iVar4 = *(int *)(lVar5 + 0x30);
        if (iVar4 != -1) {
          if ((iVar2 < 0) || (render_system_memory <= iVar2)) {
            uVar11 = 0x130c;
            iStack0000000000000028 = iVar2;
LAB_18051724a:
            FUN_1800622d0(system_message_context,0,0xc,&unknown_var_6592_ptr,uVar11);
          }
          else {
            if ((iVar4 < 0) || ((int)((render_system_memory - render_system_memory) / 0x68) <= iVar4)) {
              uVar11 = 0x1310;
              iStack0000000000000028 = iVar4;
              goto LAB_18051724a;
            }
            iVar3 = FUN_18053a410(&system_data_5f30,iVar2,iVar4,render_system_memory,uVar10);
            if ((iVar3 < 0) || ((int)(render_system_memory - render_system_memory >> 3) <= iVar3)) {
              uVar11 = 0x1317;
              iStack0000000000000028 = iVar3;
              goto LAB_18051724a;
            }
          }
          iVar4 = FUN_18053a410(&system_data_5f30,iVar2,iVar4);
          iVar4 = *(int *)(render_system_memory + (longlong)iVar4 * 4);
          if (iVar4 == -1) {
            lVar6 = 0;
          }
          else {
            lVar6 = *(longlong *)(render_system_memory + (longlong)iVar4 * 8);
          }
          fVar1 = *(float *)(lVar6 + 0x1d8);
          if (unaff_XMM6_Da < fVar1) {
            unaff_XMM6_Da = fVar1;
          }
          unaff_XMM7_Da = unaff_XMM7_Da + fVar1;
          iVar7 = iVar7 + 1;
        }
        if (*(int *)(lVar5 + 0x34) != -1) {
          iVar4 = FUN_18053a410(&system_data_5f30,iVar2);
          iVar4 = *(int *)(render_system_memory + (longlong)iVar4 * 4);
          if (iVar4 == -1) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(render_system_memory + (longlong)iVar4 * 8);
          }
          fVar1 = *(float *)(lVar5 + 0x1d8);
          if (unaff_XMM6_Da < fVar1) {
            unaff_XMM6_Da = fVar1;
          }
          unaff_XMM7_Da = unaff_XMM7_Da + fVar1;
          iVar7 = iVar7 + 1;
        }
      }
      iVar8 = iVar8 + 1;
      iStack0000000000000028 = in_stack_000000d8;
    } while (iVar8 < 4);
    bVar9 = bVar9 ^ 1;
    iStack00000000000000d0 = iStack00000000000000d0 + 1;
    param_3 = in_stack_000000c0;
    param_4 = in_stack_000000d8;
  } while (iVar7 == 0);
  fVar1 = *(float *)(*(longlong *)(param_3 + 0x6d8) + 0x8c0);
  *in_stack_000000c8 = unaff_XMM6_Da * fVar1;
  in_stack_000000c8[1] = (unaff_XMM7_Da / (float)iVar7) * fVar1;
  return in_stack_000000c8;
}





// 函数: void FUN_18051739b(void)
void FUN_18051739b(void)

{
  int32_t *in_R11;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM7_Da;
  
  *in_R11 = unaff_XMM6_Da;
  in_R11[1] = unaff_XMM7_Da;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805173c0(longlong param_1,uint64_t param_2,uint64_t param_3)
void FUN_1805173c0(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  
  FUN_18022a890(param_3,*(int8_t *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8) + 0x260) + 0x210
                           ) + 0xde),*(uint64_t *)(*(longlong *)(param_1 + 0x658) + 0x208));
  FUN_18022a890(param_3,*(int8_t *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8) + 0x260) + 0x210
                           ) + 0xe1),*(uint64_t *)(*(longlong *)(param_1 + 0x658) + 0x208));
  FUN_18022ac60(param_3,&fStack_1f8,
                *(int8_t *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8) + 0x260) +
                   0x210) + 0xe1),*(uint64_t *)(*(longlong *)(param_1 + 0x658) + 0x208));
  fVar3 = render_system_memory * fStack_1f0 - render_system_memory * fStack_1ec;
  fVar3 = fVar3 + fVar3;
  fVar5 = fStack_1ec * render_system_memory - render_system_memory * fStack_1f4;
  fVar2 = render_system_memory * fStack_1f4 - fStack_1f0 * render_system_memory;
  fVar5 = fVar5 + fVar5;
  fVar2 = fVar2 + fVar2;
  fVar1 = fVar5 * fStack_1ec;
  fVar4 = fVar2 * fStack_1f0;
  fStack_1f0 = (fVar5 * fStack_1f4 - fVar3 * fStack_1f0) + fVar2 * fStack_1f8 + render_system_memory;
  fStack_1f4 = (fVar3 * fStack_1ec - fVar2 * fStack_1f4) + fVar5 * fStack_1f8 + render_system_memory;
  fStack_1ec = 3.4028235e+38;
  fStack_1f8 = (fVar4 - fVar1) + fVar3 * fStack_1f8 + render_system_memory;
  fVar1 = (float)atan2f(*(uint *)(*(longlong *)(param_1 + 0x590) + 0x2588) ^ 0x80000000,
                        *(int32_t *)(*(longlong *)(param_1 + 0x590) + 0x258c));
                    // WARNING: Subroutine does not return
  FUN_1808fd400(fVar1 * 0.3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805183c0(longlong param_1,longlong param_2,float *param_3,int8_t param_4)
void FUN_1805183c0(longlong param_1,longlong param_2,float *param_3,int8_t param_4)

{
  uint64_t *puVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int8_t auVar5 [16];
  int8_t auVar6 [16];
  int8_t auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  int iVar15;
  float *pfVar16;
  ulonglong uVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float extraout_XMM0_Da;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int8_t auStack_1c8 [32];
  uint64_t *puStack_1a8;
  float *pfStack_1a0;
  int32_t uStack_198;
  int8_t uStack_190;
  int8_t uStack_188;
  int8_t uStack_180;
  int32_t uStack_178;
  uint64_t uStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  uint64_t uStack_158;
  uint64_t uStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint64_t uStack_138;
  uint64_t uStack_130;
  int8_t auStack_128 [16];
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  ulonglong uStack_d8;
  
  uStack_d8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1c8;
  cVar2 = *(char *)(*(longlong *)(param_1 + 0x590) + 0x25fa);
  pfVar16 = (float *)FUN_18022a890(param_2,cVar2,
                                   *(uint64_t *)(*(longlong *)(param_1 + 0x658) + 0x208));
  fVar23 = *pfVar16;
  fVar34 = pfVar16[1];
  fVar24 = pfVar16[2];
  fVar35 = pfVar16[3];
  puVar1 = (uint64_t *)(param_2 + ((longlong)cVar2 + 0x40) * 0x10);
  uStack_138 = *puVar1;
  uStack_130 = puVar1[1];
  fStack_148 = fVar23;
  fStack_144 = fVar34;
  fStack_140 = fVar24;
  fStack_13c = fVar35;
  if ((((uint)param_3[0x11] & 2) == 0) || (cVar3 = *(char *)(param_3 + 0x10), cVar3 == -1)) {
    uStack_170 = *(uint64_t *)(param_1 + 0x658);
    lVar18 = *(longlong *)(param_1 + 0x590);
    pfStack_1a0 = &fStack_148;
    puStack_1a8 = (uint64_t *)&system_data_02f0;
  }
  else {
    lVar18 = *(longlong *)(param_1 + 0x590);
    if ((*(int *)(param_1 + 0x564) < 0) || (*(longlong *)(lVar18 + 0x2500) == 0)) {
      uStack_118 = *(uint64_t *)(lVar18 + 0xa630);
      uStack_110 = *(uint64_t *)(lVar18 + 0xa638);
      uStack_f8 = *(uint64_t *)(lVar18 + 0xa640);
      uStack_f0 = *(uint64_t *)(lVar18 + 0xa648);
    }
    else {
      pfVar16 = param_3;
      if (cVar2 != cVar3) {
        pfVar16 = param_3 + 8;
      }
      fVar22 = *pfVar16;
      fVar29 = pfVar16[1];
      fVar30 = pfVar16[2];
      fVar31 = pfVar16[3];
      cVar4 = *(char *)(*(longlong *)
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8) + 0x260) + 0x210)
                       + 0xe1);
      if (cVar4 != cVar3) {
        param_3 = param_3 + 8;
      }
      uStack_158 = *(uint64_t *)(param_3 + 4);
      uStack_150 = *(uint64_t *)(param_3 + 6);
      fVar8 = *param_3;
      fVar32 = param_3[1];
      fVar9 = param_3[2];
      fVar33 = param_3[3];
      uStack_118 = CONCAT44(pfVar16[5] - param_3[5],pfVar16[4] - param_3[4]);
      uStack_110 = CONCAT44(0x7f7fffff,pfVar16[6] - param_3[6]);
      fStack_168 = fVar8;
      fStack_164 = fVar32;
      fStack_160 = fVar9;
      fStack_15c = fVar33;
      FUN_180285b40(&fStack_168,auStack_128,&uStack_118);
      pfVar16 = (float *)FUN_18022a890(param_2,cVar4,
                                       *(uint64_t *)(*(longlong *)(param_1 + 0x658) + 0x208));
      fVar10 = *pfVar16;
      fVar11 = pfVar16[1];
      fVar12 = pfVar16[2];
      fVar13 = pfVar16[3];
      fVar25 = fVar30 * fVar24;
      fVar26 = fVar31 * fVar35;
      uStack_f8 = 0x3f8000003f800000;
      uStack_f0 = 0x3f8000003f800000;
      puVar1 = (uint64_t *)(param_2 + ((longlong)cVar4 + 0x40) * 0x10);
      uStack_158 = *puVar1;
      uStack_150 = puVar1[1];
      uStack_e8 = 0xbf800000bf800000;
      uStack_e0 = 0xbf800000bf800000;
      auVar28._0_4_ = fVar25 + fVar22 * fVar23;
      auVar28._4_4_ = fVar26 + fVar29 * fVar34;
      auVar28._8_4_ = fVar25 + fVar25;
      auVar28._12_4_ = fVar26 + fVar26;
      auVar27._4_12_ = auVar28._4_12_;
      auVar27._0_4_ = auVar28._0_4_ + auVar28._4_4_;
      uVar14 = movmskps((int)((longlong)cVar4 + 0x40) * 2,auVar27);
      uVar17 = (ulonglong)(uVar14 & 1);
      iVar15 = (uVar14 & 1) * 2;
      fVar25 = *(float *)(&uStack_f8 + uVar17 * 2);
      fVar26 = *(float *)(&uStack_f0 + uVar17 * 2);
      fVar34 = *(float *)((longlong)&uStack_f8 + uVar17 * 0x10 + 4) * fVar34;
      fVar35 = *(float *)((longlong)&uStack_f0 + uVar17 * 0x10 + 4) * fVar35;
      if (0.9995 < ABS(auVar27._0_4_)) {
        fVar25 = fVar25 * fVar23 * 0.5 + fVar22 * 0.5;
        fVar19 = fVar34 * 0.5 + fVar29 * 0.5;
        fVar26 = fVar26 * fVar24 * 0.5 + fVar30 * 0.5;
        fVar20 = fVar35 * 0.5 + fVar31 * 0.5;
        fVar23 = fVar20 * fVar20 + fVar25 * fVar25;
        fVar34 = fVar26 * fVar26 + fVar19 * fVar19;
        fVar30 = fVar23 + fVar19 * fVar19 + fVar26 * fVar26;
        fVar31 = fVar34 + fVar25 * fVar25 + fVar20 * fVar20;
        auVar6._4_4_ = fVar23 + fVar34 + 1.1754944e-38;
        auVar6._0_4_ = fVar34 + fVar23 + 1.1754944e-38;
        auVar6._8_4_ = fVar30 + 1.1754944e-38;
        auVar6._12_4_ = fVar31 + 1.1754944e-38;
        auVar27 = rsqrtps(auVar27,auVar6);
        fVar24 = auVar27._0_4_;
        fVar35 = auVar27._4_4_;
        fVar22 = auVar27._8_4_;
        fVar29 = auVar27._12_4_;
        fVar25 = fVar25 * (3.0 - fVar24 * fVar24 * (fVar34 + fVar23)) * fVar24 * 0.5;
        fVar19 = fVar19 * (3.0 - fVar35 * fVar35 * (fVar23 + fVar34)) * fVar35 * 0.5;
        fVar26 = fVar26 * (3.0 - fVar22 * fVar22 * fVar30) * fVar22 * 0.5;
        fVar20 = fVar20 * (3.0 - fVar29 * fVar29 * fVar31) * fVar29 * 0.5;
      }
      else {
        fVar19 = (float)acosf();
        fVar20 = (float)sinf();
        fVar21 = (float)sinf(fVar19 - fVar19 * 0.5);
        fVar21 = fVar21 * (1.0 / fVar20);
        iVar15 = sinf(fVar19 * 0.5);
        fVar20 = extraout_XMM0_Da * (1.0 / fVar20);
        fVar25 = fVar21 * fVar22 + fVar20 * fVar25 * fVar23;
        fVar19 = fVar21 * fVar29 + fVar20 * fVar34;
        fVar26 = fVar21 * fVar30 + fVar20 * fVar26 * fVar24;
        fVar20 = fVar21 * fVar31 + fVar20 * fVar35;
      }
      fVar23 = fVar12 * fVar9;
      fVar34 = fVar13 * fVar33;
      uStack_118 = 0x3f8000003f800000;
      uStack_110 = 0x3f8000003f800000;
      uStack_108 = 0xbf800000bf800000;
      uStack_100 = 0xbf800000bf800000;
      fVar35 = fVar34 + fVar11 * fVar32;
      uStack_f8 = CONCAT44(fVar19,fVar25);
      uStack_f0 = CONCAT44(fVar20,fVar26);
      fVar24 = fVar23 + fVar10 * fVar8 + fVar35;
      auVar7._4_4_ = fVar35;
      auVar7._0_4_ = fVar24;
      auVar7._8_4_ = fVar23 + fVar23;
      auVar7._12_4_ = fVar34 + fVar34;
      uVar14 = movmskps(iVar15,auVar7);
      uVar17 = (ulonglong)(uVar14 & 1);
      fVar23 = *(float *)(&uStack_118 + uVar17 * 2);
      fVar34 = *(float *)(&uStack_110 + uVar17 * 2);
      fVar32 = *(float *)((longlong)&uStack_118 + uVar17 * 0x10 + 4) * fVar32;
      fVar33 = *(float *)((longlong)&uStack_110 + uVar17 * 0x10 + 4) * fVar33;
      if (0.9995 < ABS(fVar24)) {
        fStack_168 = fVar23 * fVar8 * 0.4 + fVar10 * 0.6;
        fStack_164 = fVar32 * 0.4 + fVar11 * 0.6;
        fStack_160 = fVar34 * fVar9 * 0.4 + fVar12 * 0.6;
        fStack_15c = fVar33 * 0.4 + fVar13 * 0.6;
        fVar23 = fStack_15c * fStack_15c + fStack_168 * fStack_168;
        fVar34 = fStack_160 * fStack_160 + fStack_164 * fStack_164;
        fVar30 = fVar23 + fStack_164 * fStack_164 + fStack_160 * fStack_160;
        fVar31 = fVar34 + fStack_168 * fStack_168 + fStack_15c * fStack_15c;
        auVar5._4_4_ = fVar23 + fVar34 + 1.1754944e-38;
        auVar5._0_4_ = fVar34 + fVar23 + 1.1754944e-38;
        auVar5._8_4_ = fVar30 + 1.1754944e-38;
        auVar5._12_4_ = fVar31 + 1.1754944e-38;
        auVar28 = rsqrtps(auVar27,auVar5);
        fVar24 = auVar28._0_4_;
        fVar35 = auVar28._4_4_;
        fVar22 = auVar28._8_4_;
        fVar29 = auVar28._12_4_;
        fStack_168 = fStack_168 * (3.0 - fVar24 * fVar24 * (fVar34 + fVar23)) * fVar24 * 0.5;
        fStack_164 = fStack_164 * (3.0 - fVar35 * fVar35 * (fVar23 + fVar34)) * fVar35 * 0.5;
        fStack_160 = fStack_160 * (3.0 - fVar22 * fVar22 * fVar30) * fVar22 * 0.5;
        fStack_15c = fStack_15c * (3.0 - fVar29 * fVar29 * fVar31) * fVar29 * 0.5;
      }
      else {
        fVar24 = (float)acosf();
        fVar35 = (float)sinf();
        fVar22 = (float)sinf(fVar24 - fVar24 * 0.4);
        fVar22 = fVar22 * (1.0 / fVar35);
        fVar24 = (float)sinf(fVar24 * 0.4);
        fVar24 = fVar24 * (1.0 / fVar35);
        fStack_168 = fVar22 * fVar10 + fVar24 * fVar23 * fVar8;
        fStack_164 = fVar22 * fVar11 + fVar24 * fVar32;
        fStack_160 = fVar22 * fVar12 + fVar24 * fVar34 * fVar9;
        fStack_15c = fVar22 * fVar13 + fVar24 * fVar33;
      }
      pfVar16 = (float *)FUN_1801c0fb0(&fStack_168,&uStack_118,auStack_128);
      lVar18 = *(longlong *)(param_1 + 0x590);
      uStack_118 = CONCAT44((uStack_158._4_4_ + pfVar16[1]) - uStack_138._4_4_,
                            ((float)uStack_158 + *pfVar16) - (float)uStack_138);
      uStack_110 = CONCAT44(0x7f7fffff,((float)uStack_150 + pfVar16[2]) - (float)uStack_130);
    }
    uStack_170 = *(uint64_t *)(param_1 + 0x658);
    pfStack_1a0 = (float *)&uStack_f8;
    puStack_1a8 = &uStack_118;
  }
  uStack_178 = 2;
  uStack_180 = 1;
  uStack_190 = 0;
  uStack_198 = 0x40400000;
  uStack_188 = param_4;
  FUN_180575540(lVar18,2,cVar2,*(int8_t *)(lVar18 + 0x2600));
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (ulonglong)auStack_1c8);
}





