#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part071.c - 7 个函数

// 函数: void FUN_180705980(uint64_t *param_1,int32_t *param_2,uint64_t param_3,int param_4,
void FUN_180705980(uint64_t *param_1,int32_t *param_2,uint64_t param_3,int param_4,
                  uint64_t param_5,uint64_t param_6,int param_7)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int iVar10;
  int iVar11;
  uint64_t *puVar12;
  int32_t *puVar13;
  int32_t *puVar14;
  uint64_t *puVar15;
  int64_t lVar16;
  int32_t uVar17;
  int iVar18;
  int32_t auStack_a8 [3];
  int iStack_9c;
  int iStack_90;
  uint64_t uStack_88;
  int32_t *puStack_80;
  int iStack_78;
  int32_t uStack_70;
  int32_t uStack_6c;
  int iStack_60;
  uint64_t *puStack_40;
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  uStack_70 = 0;
  uStack_6c = 0;
  if (param_2[0x11] != 0) {
    *(int32_t *)((int64_t)param_1 + 0x1234) = 1;
    *(int32_t *)((int64_t)param_1 + 0x3994) = 1;
  }
  *(int32_t *)((int64_t)param_1 + 0x3ddc) = 0;
  *(int32_t *)((int64_t)param_1 + 0x167c) = 0;
  iStack_90 = param_4;
  uStack_88 = param_3;
  puStack_80 = param_2;
  puStack_40 = param_1;
  iVar10 = func_0x00018071c070(param_2);
  if (iVar10 == 0) {
    param_2[0x16] = 0;
    if (*(int *)((int64_t)param_1 + 0x4f04) < (int)param_2[1]) {
      FUN_18071db50(param_1 + 0x4ec,*(int32_t *)((int64_t)param_1 + 0x13ec));
      *(int32_t *)(param_1 + 0x9d8) = 0;
      param_1[0x9d9] = 0;
      param_1[0x9da] = 1;
      *(int32_t *)(param_1 + 0x9db) = 1;
      *(int32_t *)((int64_t)param_1 + 0x4edc) = 0x4000;
      if (*(int *)(param_1 + 0x9e0) == 2) {
        lVar16 = 2;
        puVar8 = param_1 + 0x7bf;
        puVar9 = param_1 + 0x2d3;
        do {
          puVar15 = puVar9;
          puVar12 = puVar8;
          uVar4 = puVar15[1];
          uVar5 = puVar15[2];
          uVar6 = puVar15[3];
          *puVar12 = *puVar15;
          puVar12[1] = uVar4;
          uVar4 = puVar15[4];
          uVar7 = puVar15[5];
          puVar12[2] = uVar5;
          puVar12[3] = uVar6;
          uVar5 = puVar15[6];
          uVar6 = puVar15[7];
          puVar12[4] = uVar4;
          puVar12[5] = uVar7;
          uVar4 = puVar15[8];
          uVar7 = puVar15[9];
          puVar12[6] = uVar5;
          puVar12[7] = uVar6;
          uVar5 = puVar15[10];
          uVar6 = puVar15[0xb];
          puVar12[8] = uVar4;
          puVar12[9] = uVar7;
          uVar4 = puVar15[0xc];
          uVar7 = puVar15[0xd];
          puVar12[10] = uVar5;
          puVar12[0xb] = uVar6;
          uVar5 = puVar15[0xe];
          uVar6 = puVar15[0xf];
          puVar12[0xc] = uVar4;
          puVar12[0xd] = uVar7;
          puVar12[0xe] = uVar5;
          puVar12[0xf] = uVar6;
          lVar16 = lVar16 + -1;
          puVar8 = puVar12 + 0x10;
          puVar9 = puVar15 + 0x10;
        } while (lVar16 != 0);
        uVar4 = puVar15[0x11];
        uVar5 = puVar15[0x12];
        uVar6 = puVar15[0x13];
        puVar12[0x10] = puVar15[0x10];
        puVar12[0x11] = uVar4;
        uVar17 = *(int32_t *)(puVar15 + 0x14);
        uVar1 = *(int32_t *)((int64_t)puVar15 + 0xa4);
        uVar2 = *(int32_t *)(puVar15 + 0x15);
        uVar3 = *(int32_t *)((int64_t)puVar15 + 0xac);
        puVar12[0x12] = uVar5;
        puVar12[0x13] = uVar6;
        *(int32_t *)(puVar12 + 0x14) = uVar17;
        *(int32_t *)((int64_t)puVar12 + 0xa4) = uVar1;
        *(int32_t *)(puVar12 + 0x15) = uVar2;
        *(int32_t *)((int64_t)puVar12 + 0xac) = uVar3;
        param_1[0x4ec] = *param_1;
      }
    }
    iVar10 = 0;
    if ((param_2[6] != *(int *)(param_1 + 0x240)) ||
       (iVar18 = iVar10, *(int *)((int64_t)param_1 + 0x4f04) != param_2[1])) {
      iVar18 = 1;
    }
    *(int32_t *)(param_1 + 0x9e0) = *param_2;
    *(int32_t *)((int64_t)param_1 + 0x4f04) = param_2[1];
    iVar11 = param_2[2];
    auStack_a8[0] = 0;
    iStack_78 = (param_4 * 100) / iVar11;
    iStack_9c = iStack_78 >> 1;
    if (iStack_78 < 2) {
      iStack_9c = 1;
    }
    if (param_7 == 0) {
      if (((iVar11 * iStack_78 == param_4 * 100) && (-1 < param_4)) &&
         (param_4 * 1000 <= param_2[6] * iVar11)) goto LAB_180705c37;
    }
    else if (iStack_78 == 1) {
      if (0 < (int)param_2[1]) {
        puVar13 = (int32_t *)((int64_t)param_1 + 0x13ec);
        do {
          FUN_18071db50(param_1 + (int64_t)iVar10 * 0x4ec,*puVar13);
          iVar10 = iVar10 + 1;
          puVar13 = puVar13 + 0x9d8;
        } while (iVar10 < (int)param_2[1]);
      }
      iVar10 = 0;
      uStack_70 = param_2[6];
      uStack_6c = param_2[9];
      param_2[9] = 0;
      param_2[6] = 10;
      if (0 < (int)param_2[1]) {
        puVar13 = (int32_t *)((int64_t)param_1 + 0x1244);
        do {
          puVar13[-3] = 0;
          iVar10 = iVar10 + 1;
          *puVar13 = 1;
          puVar13 = puVar13 + 0x9d8;
        } while (iVar10 < (int)param_2[1]);
      }
LAB_180705c37:
      iVar10 = 0;
      if (0 < (int)param_2[1]) {
        puVar13 = (int32_t *)((int64_t)param_1 + 0x127c);
        do {
          if (iVar10 == 1) {
            uVar17 = *(int32_t *)((int64_t)param_1 + 0x11dc);
          }
          else {
            uVar17 = 0;
          }
          iVar11 = FUN_18071dbc0(param_1 + (int64_t)iVar10 * 0x4ec,param_2,
                                 *(int32_t *)(param_1 + 0x9e2),iVar10,uVar17);
          if (iVar11 != 0) goto LAB_180706998;
          if (((puVar13[-0x12] != 0) || (iVar18 != 0)) &&
             (iVar11 = 0, puVar14 = puVar13, 0 < *(int *)(param_1 + 0x2cf))) {
            do {
              *puVar14 = 0;
              iVar11 = iVar11 + 1;
              puVar14 = puVar14 + 1;
            } while (iVar11 < *(int *)(param_1 + 0x2cf));
          }
          iVar10 = iVar10 + 1;
          puVar13[0x154] = puVar13[0x153];
          puVar13 = puVar13 + 0x9d8;
        } while (iVar10 < (int)param_2[1]);
      }
      iVar10 = *(int *)((int64_t)param_1 + 0x11dc) * 1000;
      iStack_60 = *(int *)((int64_t)param_1 + 0x11dc) * iStack_78 * 10;
                    // WARNING: Subroutine does not return
      FUN_1808fd200((int64_t)((*(int *)(param_1 + 0x239) * iStack_60) / iVar10) * 2,
                    (int64_t)(*(int *)(param_1 + 0x239) * iStack_60) % (int64_t)iVar10 &
                    0xffffffff);
    }
  }
LAB_180706998:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_a8);
}





// 函数: void FUN_1807069e0(uint64_t param_1)
void FUN_1807069e0(uint64_t param_1)

{
                    // WARNING: Subroutine does not return
  memset(param_1,0,0x4f18);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180706b30(int64_t param_1,int param_2,int param_3)
void FUN_180706b30(int64_t param_1,int param_2,int param_3)

{
  int8_t auStack_258 [68];
  int32_t uStack_214;
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_258;
  if (((0 < param_2) && (param_2 != param_3)) && (param_2 <= param_3)) {
    uStack_214 = 0;
                    // WARNING: Subroutine does not return
    memmove(((int64_t)param_3 - (int64_t)param_2) + param_1,param_1,(int64_t)param_2);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_258);
}





// 函数: void FUN_180706b61(int64_t param_1)
void FUN_180706b61(int64_t param_1)

{
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int32_t uStack0000000000000044;
  
  uStack0000000000000044 = 0;
                    // WARNING: Subroutine does not return
  memmove((unaff_RSI - unaff_RDI) + param_1,param_1);
}





// 函数: void FUN_180706ba7(void)
void FUN_180706ba7(void)

{
  int32_t uStack0000000000000030;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000230;
  
  uStack0000000000000030 = 1;
  FUN_180706d00(&stack0x00000040,0,in_stack_00000040._4_4_);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000230 ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_180706c10(byte *param_1,byte *param_2,int param_3,int32_t param_4)

{
  int iVar1;
  int32_t uVar2;
  int iVar3;
  uint64_t uVar4;
  int8_t auStackX_18 [16];
  
  if (0 < param_3) {
    if (*(int *)(param_1 + 4) == 0) {
      *param_1 = *param_2;
      uVar2 = func_0x00018070f7d0(param_2,8000);
      *(int32_t *)(param_1 + 0x1e8) = uVar2;
    }
    else if (((*param_1 ^ *param_2) & 0xfc) != 0) {
      return 0xfffffffc;
    }
    iVar3 = func_0x0001806fd5e0(param_2,param_3);
    if ((0 < iVar3) &&
       (iVar1 = *(int *)(param_1 + 4), (iVar1 + iVar3) * *(int *)(param_1 + 0x1e8) < 0x3c1)) {
      uVar4 = FUN_18070f860(param_2,param_3,param_4,auStackX_18,param_1 + ((int64_t)iVar1 + 1) * 8,
                            param_1 + (int64_t)iVar1 * 2 + 0x188,0,0);
      if (0 < (int)uVar4) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar3;
        return 0;
      }
      return uVar4;
    }
  }
  return 0xfffffffc;
}



uint64_t FUN_180706d00(byte *param_1,int param_2,int param_3,byte *param_4,int param_5,int param_6,
                       int param_7)

{
  byte *pbVar1;
  short sVar2;
  bool bVar3;
  byte *pbVar4;
  uint64_t uVar5;
  byte bVar6;
  int iVar7;
  int64_t lVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  
  if (((param_2 < 0) || (param_3 <= param_2)) || (*(int *)(param_1 + 4) < param_3)) {
    return 0xffffffff;
  }
  param_3 = param_3 - param_2;
  uVar13 = 0;
  lVar12 = (int64_t)param_3;
  pbVar1 = param_1 + (int64_t)param_2 * 2 + 0x188;
  uVar5 = uVar13;
  if (param_6 != 0) {
    uVar5 = (uint64_t)((0xfb < *(short *)(pbVar1 + lVar12 * 2 + -2)) + 1);
  }
  iVar10 = (int)uVar5;
  if (param_3 == 1) {
    uVar9 = iVar10 + *(short *)pbVar1 + 1;
    uVar5 = (uint64_t)uVar9;
    if (param_5 < (int)uVar9) goto LAB_180706ed5;
    *param_4 = *param_1 & 0xfc;
    pbVar4 = param_4 + 1;
LAB_180706e76:
    if ((param_7 != 0) && ((int)uVar5 < param_5)) {
LAB_180706e88:
      iVar10 = 0;
      if (param_6 != 0) {
        iVar10 = (0xfb < *(short *)(pbVar1 + (int64_t)param_3 * 2 + -2)) + 1;
      }
      iVar7 = 1;
      bVar3 = false;
      bVar6 = (byte)param_3;
      if (1 < param_3) {
        pbVar4 = pbVar1;
LAB_180706eb2:
        pbVar4 = pbVar4 + 2;
        if (*(short *)pbVar4 == *(short *)pbVar1) goto code_r0x000180706eb7;
        iVar10 = iVar10 + 2;
        bVar3 = true;
        if (0 < (int)(param_3 - 1U)) {
          uVar5 = (uint64_t)(param_3 - 1U);
          pbVar4 = pbVar1;
          do {
            sVar2 = *(short *)pbVar4;
            pbVar4 = pbVar4 + 2;
            iVar10 = iVar10 + sVar2 + (0xfb < sVar2) + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        uVar9 = iVar10 + *(short *)(pbVar1 + lVar12 * 2 + -2);
        if (param_5 < (int)uVar9) goto LAB_180706ed5;
        bVar6 = bVar6 | 0x80;
        goto LAB_180706f57;
      }
LAB_180706ec1:
      uVar9 = iVar10 + *(short *)pbVar1 * param_3 + 2;
      if (param_5 < (int)uVar9) goto LAB_180706ed5;
LAB_180706f57:
      pbVar4 = param_4 + 2;
      *param_4 = *param_1 | 3;
      param_4[1] = bVar6;
      iVar10 = param_5 - uVar9;
      if (param_7 == 0) {
        iVar10 = 0;
      }
      if (iVar10 != 0) {
        param_4[1] = bVar6 | 0x40;
        iVar7 = (iVar10 + -1) / 0xff;
        if (0 < iVar7) {
          pbVar11 = pbVar4;
          for (lVar8 = (int64_t)iVar7; lVar8 != 0; lVar8 = lVar8 + -1) {
            *pbVar11 = 0xff;
            pbVar11 = pbVar11 + 1;
          }
          pbVar4 = pbVar4 + iVar7;
        }
        *pbVar4 = (char)iVar10 + -1 + (char)iVar7;
        pbVar4 = pbVar4 + 1;
        uVar9 = uVar9 + iVar10;
      }
      uVar5 = (uint64_t)uVar9;
      if ((bVar3) && (uVar14 = uVar13, 0 < param_3 + -1)) {
        do {
          iVar10 = func_0x00018070f790((int)*(short *)(pbVar1 + uVar14 * 2),pbVar4);
          uVar14 = uVar14 + 1;
          pbVar4 = pbVar4 + iVar10;
        } while ((int64_t)uVar14 < (int64_t)(param_3 + -1));
      }
    }
    if (param_6 != 0) {
      iVar10 = func_0x00018070f790((int)*(short *)(pbVar1 + lVar12 * 2 + -2),pbVar4);
      pbVar4 = pbVar4 + iVar10;
    }
    if (0 < param_3) {
                    // WARNING: Subroutine does not return
      memmove(pbVar4,*(uint64_t *)(param_1 + (int64_t)param_2 * 8 + 8),(int64_t)*(short *)pbVar1
             );
    }
    if (param_7 != 0) {
      uVar14 = (int64_t)(param_4 + param_5) - (int64_t)pbVar4;
      if (param_4 + param_5 < pbVar4) {
        uVar14 = uVar13;
      }
      if (uVar14 != 0) {
        for (; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pbVar4 = 0;
          pbVar4 = pbVar4 + 1;
        }
      }
    }
  }
  else {
    if (param_3 != 2) {
      pbVar4 = param_4;
      if (param_3 < 3) goto LAB_180706e76;
      goto LAB_180706e88;
    }
    sVar2 = *(short *)pbVar1;
    if (*(short *)(pbVar1 + 2) == sVar2) {
      uVar9 = iVar10 + sVar2 * 2 + 1;
      uVar5 = (uint64_t)uVar9;
      if ((int)uVar9 <= param_5) {
        *param_4 = *param_1 & 0xfd | 1;
        pbVar4 = param_4 + 1;
        goto LAB_180706e76;
      }
    }
    else {
      uVar9 = iVar10 + (int)*(short *)(pbVar1 + 2) + (0xfb < sVar2) + 2 + (int)sVar2;
      uVar5 = (uint64_t)uVar9;
      if ((int)uVar9 <= param_5) {
        *param_4 = *param_1 & 0xfe | 2;
        iVar10 = func_0x00018070f790((int)*(short *)pbVar1,param_4 + 1);
        pbVar4 = param_4 + 1 + iVar10;
        goto LAB_180706e76;
      }
    }
LAB_180706ed5:
    uVar5 = 0xfffffffe;
  }
  return uVar5;
code_r0x000180706eb7:
  iVar7 = iVar7 + 1;
  if (param_3 <= iVar7) goto LAB_180706ec1;
  goto LAB_180706eb2;
}



uint64_t FUN_180706d32(byte *param_1,int param_2)

{
  byte *pbVar1;
  short sVar2;
  bool bVar3;
  int64_t in_RAX;
  byte *pbVar4;
  uint64_t uVar5;
  byte bVar6;
  int iVar7;
  int64_t lVar8;
  uint uVar9;
  int iVar10;
  uint64_t unaff_RBX;
  int unaff_EBP;
  int iVar11;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  byte *pbVar12;
  int64_t lVar13;
  byte *in_R11;
  uint64_t unaff_R12;
  uint64_t uVar14;
  uint64_t unaff_R13;
  byte *unaff_R14;
  uint64_t uVar15;
  uint64_t unaff_R15;
  byte *in_stack_00000088;
  int in_stack_00000090;
  int in_stack_00000098;
  int in_stack_000000a0;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  iVar11 = unaff_EBP - param_2;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R12;
  uVar14 = 0;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  lVar13 = (int64_t)iVar11;
  pbVar1 = param_1 + (int64_t)param_2 * 2 + 0x188;
  uVar5 = uVar14;
  if (in_stack_00000098 != 0) {
    uVar5 = (uint64_t)((0xfb < *(short *)(pbVar1 + lVar13 * 2 + -2)) + 1);
  }
  iVar10 = (int)uVar5;
  if (iVar11 == 1) {
    uVar9 = iVar10 + *(short *)pbVar1 + 1;
    uVar5 = (uint64_t)uVar9;
    if (in_stack_00000090 < (int)uVar9) goto LAB_180706ed5;
    *in_R11 = *param_1 & 0xfc;
    pbVar4 = in_R11 + 1;
LAB_180706e76:
    if ((in_stack_000000a0 != 0) && ((int)uVar5 < in_stack_00000090)) {
LAB_180706e88:
      iVar10 = 0;
      if (in_stack_00000098 != 0) {
        iVar10 = (0xfb < *(short *)(pbVar1 + (int64_t)iVar11 * 2 + -2)) + 1;
      }
      iVar7 = 1;
      bVar3 = false;
      bVar6 = (byte)iVar11;
      if (1 < iVar11) {
        pbVar4 = pbVar1;
LAB_180706eb2:
        pbVar4 = pbVar4 + 2;
        if (*(short *)pbVar4 == *(short *)pbVar1) goto code_r0x000180706eb7;
        iVar10 = iVar10 + 2;
        bVar3 = true;
        if (0 < (int)(iVar11 - 1U)) {
          uVar5 = (uint64_t)(iVar11 - 1U);
          pbVar4 = pbVar1;
          do {
            sVar2 = *(short *)pbVar4;
            pbVar4 = pbVar4 + 2;
            iVar10 = iVar10 + sVar2 + (0xfb < sVar2) + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        uVar9 = iVar10 + *(short *)(pbVar1 + lVar13 * 2 + -2);
        if (in_stack_00000090 < (int)uVar9) goto LAB_180706ed5;
        bVar6 = bVar6 | 0x80;
        goto LAB_180706f57;
      }
LAB_180706ec1:
      uVar9 = iVar10 + *(short *)pbVar1 * iVar11 + 2;
      if (in_stack_00000090 < (int)uVar9) goto LAB_180706ed5;
LAB_180706f57:
      pbVar4 = in_R11 + 2;
      *in_R11 = *unaff_R14 | 3;
      in_R11[1] = bVar6;
      iVar10 = in_stack_00000090 - uVar9;
      if (in_stack_000000a0 == 0) {
        iVar10 = 0;
      }
      if (iVar10 != 0) {
        in_R11[1] = bVar6 | 0x40;
        iVar7 = (iVar10 + -1) / 0xff;
        if (0 < iVar7) {
          pbVar12 = pbVar4;
          for (lVar8 = (int64_t)iVar7; lVar8 != 0; lVar8 = lVar8 + -1) {
            *pbVar12 = 0xff;
            pbVar12 = pbVar12 + 1;
          }
          pbVar4 = pbVar4 + iVar7;
        }
        *pbVar4 = (char)iVar10 + -1 + (char)iVar7;
        pbVar4 = pbVar4 + 1;
        uVar9 = uVar9 + iVar10;
      }
      uVar5 = (uint64_t)uVar9;
      if ((bVar3) && (uVar15 = uVar14, 0 < iVar11 + -1)) {
        do {
          iVar10 = func_0x00018070f790((int)*(short *)(pbVar1 + uVar15 * 2),pbVar4);
          uVar15 = uVar15 + 1;
          pbVar4 = pbVar4 + iVar10;
        } while ((int64_t)uVar15 < (int64_t)(iVar11 + -1));
      }
    }
    if (in_stack_00000098 != 0) {
      iVar10 = func_0x00018070f790((int)*(short *)(pbVar1 + lVar13 * 2 + -2),pbVar4);
      pbVar4 = pbVar4 + iVar10;
    }
    if (0 < iVar11) {
                    // WARNING: Subroutine does not return
      memmove(pbVar4,*(uint64_t *)(param_1 + (int64_t)param_2 * 8 + 8),(int64_t)*(short *)pbVar1
             );
    }
    if (in_stack_000000a0 != 0) {
      uVar15 = (int64_t)(in_stack_00000088 + in_stack_00000090) - (int64_t)pbVar4;
      if (in_stack_00000088 + in_stack_00000090 < pbVar4) {
        uVar15 = uVar14;
      }
      if (uVar15 != 0) {
        for (; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pbVar4 = 0;
          pbVar4 = pbVar4 + 1;
        }
      }
    }
  }
  else {
    if (iVar11 != 2) {
      pbVar4 = in_R11;
      if (iVar11 < 3) goto LAB_180706e76;
      goto LAB_180706e88;
    }
    sVar2 = *(short *)pbVar1;
    if (*(short *)(pbVar1 + 2) == sVar2) {
      uVar9 = iVar10 + sVar2 * 2 + 1;
      uVar5 = (uint64_t)uVar9;
      if ((int)uVar9 <= in_stack_00000090) {
        *in_R11 = *unaff_R14 & 0xfd | 1;
        pbVar4 = in_R11 + 1;
        goto LAB_180706e76;
      }
    }
    else {
      uVar9 = iVar10 + (int)*(short *)(pbVar1 + 2) + (0xfb < sVar2) + 2 + (int)sVar2;
      uVar5 = (uint64_t)uVar9;
      if ((int)uVar9 <= in_stack_00000090) {
        *in_R11 = *unaff_R14 & 0xfe | 2;
        iVar10 = func_0x00018070f790((int)*(short *)pbVar1,in_R11 + 1);
        pbVar4 = in_R11 + 1 + iVar10;
        in_R11 = in_stack_00000088;
        goto LAB_180706e76;
      }
    }
LAB_180706ed5:
    uVar5 = 0xfffffffe;
  }
  return uVar5;
code_r0x000180706eb7:
  iVar7 = iVar7 + 1;
  if (iVar11 <= iVar7) goto LAB_180706ec1;
  goto LAB_180706eb2;
}



int FUN_180706f00(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  short sVar1;
  int iVar2;
  int64_t lVar3;
  short *psVar4;
  int unaff_EBX;
  int iVar5;
  int unaff_EBP;
  short *unaff_RSI;
  uint64_t uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  short in_R10W;
  byte *in_R11;
  int64_t unaff_R12;
  int unaff_R13D;
  byte *unaff_R14;
  uint64_t *unaff_R15;
  int64_t lStackX_20;
  int32_t uStack0000000000000078;
  int64_t in_stack_00000088;
  int in_stack_00000090;
  int in_stack_00000098;
  int in_stack_000000a0;
  
  iVar5 = unaff_EBX + 2;
  uStack0000000000000078 = 1;
  if (0 < (int)(unaff_EBP - 1U)) {
    uVar6 = (uint64_t)(unaff_EBP - 1U);
    psVar4 = unaff_RSI;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
      iVar5 = iVar5 + sVar1 + (int)CONCAT71((int7)((uint64_t)unaff_R12 >> 8),in_R10W <= sVar1) + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  iVar5 = iVar5 + unaff_RSI[param_3 + -1];
  if (unaff_R13D < iVar5) {
    iVar5 = -2;
  }
  else {
    pbVar8 = in_R11 + 2;
    *in_R11 = *unaff_R14 | 3;
    iVar9 = unaff_R13D - iVar5;
    in_R11[1] = (byte)unaff_EBP | 0x80;
    if (in_stack_000000a0 == 0) {
      iVar9 = (int)unaff_R12;
    }
    if (iVar9 != 0) {
      in_R11[1] = (byte)unaff_EBP | 0xc0;
      iVar2 = (iVar9 + -1) / 0xff;
      if (0 < iVar2) {
        pbVar7 = pbVar8;
        for (lVar3 = (int64_t)iVar2; lVar3 != 0; lVar3 = lVar3 + -1) {
          *pbVar7 = 0xff;
          pbVar7 = pbVar7 + 1;
        }
        pbVar8 = pbVar8 + iVar2;
      }
      *pbVar8 = (char)iVar9 + -1 + (char)iVar2;
      pbVar8 = pbVar8 + 1;
      iVar5 = iVar5 + iVar9;
    }
    lVar3 = unaff_R12;
    if (0 < unaff_EBP + -1) {
      do {
        iVar9 = func_0x00018070f790((int)unaff_RSI[lVar3],pbVar8);
        lVar3 = lVar3 + 1;
        pbVar8 = pbVar8 + iVar9;
      } while (lVar3 < unaff_EBP + -1);
    }
    if (in_stack_00000098 != 0) {
      iVar9 = func_0x00018070f790((int)unaff_RSI[lStackX_20 + -1],pbVar8);
      pbVar8 = pbVar8 + iVar9;
    }
    if (0 < unaff_EBP) {
                    // WARNING: Subroutine does not return
      memmove(pbVar8,*unaff_R15,(int64_t)*unaff_RSI);
    }
    if (in_stack_000000a0 != 0) {
      lVar3 = (in_stack_00000090 + in_stack_00000088) - (int64_t)pbVar8;
      if ((byte *)(in_stack_00000090 + in_stack_00000088) < pbVar8) {
        lVar3 = unaff_R12;
      }
      if (lVar3 != 0) {
        for (; lVar3 != 0; lVar3 = lVar3 + -1) {
          *pbVar8 = 0;
          pbVar8 = pbVar8 + 1;
        }
      }
    }
  }
  return iVar5;
}



uint64_t FUN_18070708f(void)

{
  return 0xffffffff;
}



float FUN_1807070a0(int64_t param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  uint64_t uVar11;
  int iVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar14 = (int64_t)param_3;
  iVar12 = 0;
  fVar17 = 0.0;
  fVar18 = 0.0;
  fVar19 = 0.0;
  fVar20 = 0.0;
  if (0 < param_3 + -3) {
    uVar9 = (param_3 - 4U >> 2) + 1;
    uVar11 = (uint64_t)uVar9;
    iVar12 = uVar9 * 4;
    pfVar10 = param_2;
    do {
      pfVar1 = (float *)((param_1 - (int64_t)param_2) + (int64_t)pfVar10);
      fVar6 = *pfVar10;
      pfVar7 = pfVar10 + 1;
      pfVar8 = pfVar10 + 2;
      pfVar2 = pfVar10 + 3;
      pfVar10 = pfVar10 + 4;
      fVar17 = fVar17 + *pfVar1 * fVar6;
      fVar18 = fVar18 + pfVar1[1] * *pfVar7;
      fVar19 = fVar19 + pfVar1[2] * *pfVar8;
      fVar20 = fVar20 + pfVar1[3] * *pfVar2;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  lVar15 = (int64_t)iVar12;
  fVar17 = fVar17 + fVar19 + fVar18 + fVar20;
  if (lVar15 < lVar14) {
    if (3 < lVar14 - lVar15) {
      pfVar10 = param_2 + lVar15 + 1;
      lVar16 = param_1 - (int64_t)param_2;
      lVar13 = ((lVar14 - lVar15) - 4U >> 2) + 1;
      lVar15 = lVar15 + lVar13 * 4;
      do {
        pfVar3 = (float *)(lVar16 + -4 + (int64_t)pfVar10);
        pfVar1 = pfVar10 + -1;
        pfVar2 = (float *)((int64_t)pfVar10 + lVar16);
        fVar18 = *pfVar10;
        pfVar4 = (float *)(lVar16 + 4 + (int64_t)pfVar10);
        pfVar7 = pfVar10 + 1;
        pfVar5 = (float *)(lVar16 + 8 + (int64_t)pfVar10);
        pfVar8 = pfVar10 + 2;
        pfVar10 = pfVar10 + 4;
        fVar17 = *pfVar3 * *pfVar1 + fVar17 + *pfVar2 * fVar18 + *pfVar4 * *pfVar7 +
                 *pfVar5 * *pfVar8;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    if (lVar15 < lVar14) {
      pfVar10 = param_2 + lVar15;
      lVar14 = lVar14 - lVar15;
      do {
        pfVar1 = (float *)((int64_t)pfVar10 + (param_1 - (int64_t)param_2));
        fVar18 = *pfVar10;
        pfVar10 = pfVar10 + 1;
        fVar17 = fVar17 + *pfVar1 * fVar18;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    return fVar17;
  }
  return fVar17;
}





// 函数: void FUN_180707200(float *param_1,int64_t param_2,int param_3,int param_4,float param_5,
void FUN_180707200(float *param_1,int64_t param_2,int param_3,int param_4,float param_5,
                  float param_6,float param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  pfVar1 = (float *)(param_2 + (int64_t)(-2 - param_3) * 4);
  if (0 < param_4 + -3) {
    lVar11 = ((int64_t)(-2 - param_3) * 4 + 0x10) - (int64_t)param_1;
    lVar9 = param_2 - (int64_t)param_1;
    uVar10 = (uint64_t)((param_4 - 4U >> 2) + 1);
    fVar12 = *pfVar1;
    fVar13 = pfVar1[1];
    fVar14 = pfVar1[2];
    fVar15 = pfVar1[3];
    do {
      pfVar1 = (float *)(lVar11 + param_2 + (int64_t)param_1);
      fVar2 = *pfVar1;
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      pfVar1 = (float *)(lVar9 + (int64_t)param_1);
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      *param_1 = *pfVar1 + fVar14 * param_5 +
                 (fVar15 + fVar13) * param_6 + (fVar2 + fVar12) * param_7;
      param_1[1] = fVar6 + fVar15 * param_5 +
                   (fVar2 + fVar14) * param_6 + (fVar3 + fVar13) * param_7;
      param_1[2] = fVar7 + fVar2 * param_5 + (fVar3 + fVar15) * param_6 + (fVar4 + fVar14) * param_7
      ;
      param_1[3] = fVar8 + fVar3 * param_5 + (fVar4 + fVar2) * param_6 + (fVar5 + fVar15) * param_7;
      param_1 = param_1 + 4;
      uVar10 = uVar10 - 1;
      fVar12 = fVar2;
      fVar13 = fVar3;
      fVar14 = fVar4;
      fVar15 = fVar5;
    } while (uVar10 != 0);
  }
  return;
}





// 函数: void FUN_1807072c0(int64_t param_1,float *param_2,int64_t param_3,int param_4,float *param_5,
void FUN_1807072c0(int64_t param_1,float *param_2,int64_t param_3,int param_4,float *param_5,
                  float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  iVar7 = 0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  fVar15 = 0.0;
  fVar16 = 0.0;
  fVar17 = 0.0;
  fVar18 = 0.0;
  fVar19 = 0.0;
  if (0 < param_4 + -3) {
    uVar3 = (param_4 - 4U >> 2) + 1;
    uVar5 = (uint64_t)uVar3;
    iVar7 = uVar3 * 4;
    pfVar4 = param_2;
    do {
      pfVar1 = (float *)((param_1 - (int64_t)param_2) + (int64_t)pfVar4);
      fVar12 = fVar12 + *pfVar4 * *pfVar1;
      fVar13 = fVar13 + pfVar4[1] * pfVar1[1];
      fVar14 = fVar14 + pfVar4[2] * pfVar1[2];
      fVar15 = fVar15 + pfVar4[3] * pfVar1[3];
      pfVar2 = (float *)((param_3 - (int64_t)param_2) + (int64_t)pfVar4);
      pfVar4 = pfVar4 + 4;
      fVar16 = fVar16 + *pfVar2 * *pfVar1;
      fVar17 = fVar17 + pfVar2[1] * pfVar1[1];
      fVar18 = fVar18 + pfVar2[2] * pfVar1[2];
      fVar19 = fVar19 + pfVar2[3] * pfVar1[3];
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  lVar11 = (int64_t)iVar7;
  lVar9 = (int64_t)param_4;
  *param_5 = fVar12 + fVar14 + fVar13 + fVar15;
  *param_6 = fVar16 + fVar18 + fVar17 + fVar19;
  if (lVar11 < lVar9) {
    if (3 < lVar9 - lVar11) {
      pfVar4 = (float *)(param_1 + 4 + lVar11 * 4);
      lVar8 = (int64_t)param_2 - param_1;
      lVar6 = param_3 - param_1;
      lVar10 = ((lVar9 - lVar11) - 4U >> 2) + 1;
      lVar11 = lVar11 + lVar10 * 4;
      do {
        *param_5 = *(float *)((int64_t)pfVar4 + lVar8 + -4) * pfVar4[-1] + *param_5;
        *param_6 = *(float *)((int64_t)pfVar4 + lVar6 + -4) * pfVar4[-1] + *param_6;
        *param_5 = *(float *)(lVar8 + (int64_t)pfVar4) * *pfVar4 + *param_5;
        *param_6 = *(float *)((int64_t)pfVar4 + lVar6) * *pfVar4 + *param_6;
        *param_5 = *(float *)((int64_t)pfVar4 + lVar8 + 4) * pfVar4[1] + *param_5;
        *param_6 = *(float *)((int64_t)pfVar4 + lVar6 + 4) * pfVar4[1] + *param_6;
        *param_5 = *(float *)((int64_t)pfVar4 + lVar8 + 8) * pfVar4[2] + *param_5;
        pfVar2 = (float *)((int64_t)pfVar4 + lVar6 + 8);
        pfVar1 = pfVar4 + 2;
        pfVar4 = pfVar4 + 4;
        *param_6 = *pfVar2 * *pfVar1 + *param_6;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if (lVar11 < lVar9) {
      pfVar4 = (float *)(param_1 + lVar11 * 4);
      lVar9 = lVar9 - lVar11;
      do {
        *param_5 = *(float *)(((int64_t)param_2 - param_1) + (int64_t)pfVar4) * *pfVar4 + *param_5
        ;
        pfVar1 = (float *)((int64_t)pfVar4 + (param_3 - param_1));
        fVar12 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        *param_6 = *pfVar1 * fVar12 + *param_6;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  return;
}





