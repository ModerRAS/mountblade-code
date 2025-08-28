#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part266.c - 8 个函数

// 函数: void FUN_18081a760(void)
void FUN_18081a760(void)

{
  uint64_t *puVar1;
  uint uVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int32_t *puVar6;
  int iVar7;
  int32_t uVar8;
  uint64_t uVar9;
  int8_t auVar10 [16];
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  int8_t auVar11 [16];
  float fVar12;
  float fVar14;
  float fVar15;
  int8_t unaff_XMM6 [16];
  int8_t auVar13 [16];
  float fVar16;
  
  uVar3 = 0x20;
  do {
    if ((int)uVar3 < 0x201) {
      if (uVar3 == 0x200) {
        lVar5 = 0x180c47250;
      }
      else if (uVar3 == 0x20) {
        lVar5 = 0x180c46ad0;
      }
      else if (uVar3 == 0x40) {
        lVar5 = 0x180c46b50;
      }
      else if (uVar3 == 0x80) {
        lVar5 = 0x180c46c50;
      }
      else {
        if (uVar3 != 0x100) goto LAB_18081a964;
        lVar5 = 0x180c46e50;
      }
LAB_18081a87b:
      iVar7 = 0;
      lVar4 = 0;
      uVar2 = uVar3 & 0x80000003;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
      }
      auVar10._0_4_ = (float)(int)uVar3;
      auVar10._4_4_ = (float)(int)uVar3;
      auVar10._8_4_ = (float)(int)uVar3;
      auVar10._12_4_ = (float)(int)uVar3;
      auVar13 = rcpps(unaff_XMM6,auVar10);
      fVar12 = auVar13._0_4_;
      fVar14 = auVar13._4_4_;
      fVar15 = auVar13._8_4_;
      fVar16 = auVar13._12_4_;
      unaff_XMM6._0_4_ = (fVar12 + fVar12) - fVar12 * fVar12 * auVar10._0_4_;
      unaff_XMM6._4_4_ = (fVar14 + fVar14) - fVar14 * fVar14 * auVar10._4_4_;
      unaff_XMM6._8_4_ = (fVar15 + fVar15) - fVar15 * fVar15 * auVar10._8_4_;
      unaff_XMM6._12_4_ = (fVar16 + fVar16) - fVar16 * fVar16 * auVar10._12_4_;
      do {
        thunk_FUN_1808fd8e0();
        uVar9 = thunk_FUN_1808fd8e0();
        puVar1 = (uint64_t *)(lVar5 + lVar4 * 4);
        *puVar1 = uVar9;
        puVar1[1] = extraout_XMM0_Qb;
        lVar4 = lVar4 + 4;
        iVar7 = iVar7 + 4;
      } while (iVar7 < (int)(uVar3 - uVar2));
LAB_18081a911:
      if (iVar7 < (int)uVar3) {
        puVar6 = (int32_t *)(lVar5 + lVar4 * 4);
        unaff_XMM6 = ZEXT416((uint)(1.0 / (float)(int)uVar3));
        do {
          auVar13._0_8_ = sinf(((float)iVar7 + 0.5) * (1.0 / (float)(int)uVar3) * 1.5707964);
          auVar13._8_8_ = extraout_XMM0_Qb_00;
          auVar11._4_12_ = auVar13._4_12_;
          auVar11._0_4_ = (float)auVar13._0_8_ * (float)auVar13._0_8_ * 1.5707964;
          uVar8 = sinf(auVar11._0_8_);
          *puVar6 = uVar8;
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar7 < (int)uVar3);
      }
    }
    else if (uVar3 == 0x400) {
      lVar5 = 0x180c47a50;
LAB_18081a866:
      iVar7 = 0;
      lVar4 = 0;
      if (0 < (int)uVar3) {
        if (3 < uVar3) goto LAB_18081a87b;
        goto LAB_18081a911;
      }
    }
    else {
      if (uVar3 == 0x800) {
        lVar5 = 0x180c48a50;
        goto LAB_18081a87b;
      }
      if (uVar3 == 0x1000) {
        lVar5 = 0x180c4aa50;
        goto LAB_18081a866;
      }
    }
LAB_18081a964:
    uVar3 = uVar3 * 2;
    if (0x1000 < (int)uVar3) {
      return;
    }
  } while( true );
}



uint64_t
FUN_18081a9c0(uint *param_1,short *param_2,int param_3,uint param_4,int param_5,int param_6)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puStackX_8;
  int iVar9;
  
  if (param_3 == 0) {
    return 0;
  }
  puStackX_8 = param_1;
  do {
    puVar1 = puStackX_8 + 1;
    sVar4 = (short)*puStackX_8;
    iVar12 = (int)sVar4;
    param_3 = param_3 + -1;
    uVar10 = *puStackX_8 >> 0x10 & 0xff;
    if (0x58 < uVar10) {
      return 0xd;
    }
    *param_2 = sVar4;
    for (iVar6 = param_5 + -1; param_2 = param_2 + param_6, iVar6 != 0; iVar6 = iVar6 + -2) {
      uVar2 = *puVar1;
      puVar1 = (uint *)((int64_t)puVar1 + 1);
      uVar11 = (byte)uVar2 & 0xf;
      iVar7 = (int)*(short *)(&unknown_var_960_ptr + (int64_t)(int)uVar10 * 2);
      iVar5 = iVar7 >> 3;
      if (0xe < uVar11 - 1) goto LAB_18081ab3f;
      iVar3 = iVar7 >> 1;
      iVar8 = iVar7 >> 2;
      switch(uVar11) {
      case 1:
        iVar7 = iVar8;
      case 4:
        iVar5 = iVar5 + iVar7;
        goto LAB_18081ab3f;
      case 2:
        iVar5 = iVar5 + iVar3;
        goto LAB_18081ab3f;
      case 3:
        iVar5 = iVar5 + iVar3 + iVar8;
        goto LAB_18081ab3f;
      case 5:
        iVar5 = iVar5 + iVar8 + iVar7;
        goto LAB_18081ab3f;
      case 6:
        iVar5 = iVar5 + iVar3 + iVar7;
        goto LAB_18081ab3f;
      case 7:
        iVar5 = iVar5 + iVar3 + iVar8 + iVar7;
        goto LAB_18081ab3f;
      case 8:
        goto code_r0x00018081ab3d;
      case 9:
        iVar7 = iVar8;
        break;
      case 10:
        iVar7 = iVar3;
        break;
      case 0xb:
        iVar5 = iVar5 + iVar8;
        iVar7 = iVar3;
        break;
      case 0xd:
        iVar5 = iVar5 + iVar8;
        break;
      case 0xe:
        iVar5 = iVar5 + iVar3;
        break;
      case 0xf:
        iVar5 = iVar5 + iVar8 + iVar3;
      }
      iVar5 = iVar5 + iVar7;
code_r0x00018081ab3d:
      iVar5 = -iVar5;
LAB_18081ab3f:
      iVar12 = iVar12 + iVar5;
      iVar7 = iVar12;
      if ((short)iVar12 != iVar12) {
        iVar7 = 0x7fff;
        if (iVar12 < -0x8000) {
          iVar7 = -0x8000;
        }
      }
      iVar5 = *(int *)(&unknown_var_896_ptr + (uint64_t)uVar11 * 4) + uVar10;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0x58 < iVar5) {
        iVar5 = 0x58;
      }
      *param_2 = (short)iVar7;
      param_2 = param_2 + param_6;
      if (iVar6 == 1) break;
      uVar10 = (uint)(byte)((byte)uVar2 >> 4);
      iVar12 = (int)*(short *)(&unknown_var_960_ptr + (int64_t)iVar5 * 2);
      iVar3 = iVar12 >> 3;
      if (0xe < uVar10 - 1) goto LAB_18081ac45;
      iVar8 = iVar12 >> 1;
      iVar9 = iVar12 >> 2;
      switch(uVar10) {
      case 1:
        iVar12 = iVar9;
      case 4:
        iVar3 = iVar3 + iVar12;
        goto LAB_18081ac45;
      case 2:
        iVar3 = iVar3 + iVar8;
        goto LAB_18081ac45;
      case 3:
        iVar3 = iVar3 + iVar8 + iVar9;
        goto LAB_18081ac45;
      case 5:
        iVar3 = iVar3 + iVar9 + iVar12;
        goto LAB_18081ac45;
      case 6:
        iVar3 = iVar3 + iVar8 + iVar12;
        goto LAB_18081ac45;
      case 7:
        iVar3 = iVar3 + iVar8 + iVar9 + iVar12;
        goto LAB_18081ac45;
      case 8:
        goto code_r0x00018081ac43;
      case 9:
        iVar12 = iVar9;
        break;
      case 10:
        iVar12 = iVar8;
        break;
      case 0xb:
        iVar3 = iVar3 + iVar9;
        iVar12 = iVar8;
        break;
      case 0xd:
        iVar3 = iVar3 + iVar9;
        break;
      case 0xe:
        iVar3 = iVar3 + iVar8;
        break;
      case 0xf:
        iVar3 = iVar3 + iVar9 + iVar8;
      }
      iVar3 = iVar3 + iVar12;
code_r0x00018081ac43:
      iVar3 = -iVar3;
LAB_18081ac45:
      iVar7 = iVar7 + iVar3;
      iVar12 = iVar7;
      if ((short)iVar7 != iVar7) {
        iVar12 = 0x7fff;
        if (iVar7 < -0x8000) {
          iVar12 = -0x8000;
        }
      }
      uVar10 = *(int *)(&unknown_var_896_ptr + (uint64_t)uVar10 * 4) + iVar5;
      if ((int)uVar10 < 0) {
        uVar10 = 0;
      }
      else if (0x58 < (int)uVar10) {
        uVar10 = 0x58;
      }
      *param_2 = (short)iVar12;
    }
    puStackX_8 = (uint *)((int64_t)puStackX_8 + (uint64_t)param_4);
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}



uint64_t FUN_18081a9ee(void)

{
  uint *puVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  short sVar4;
  int iVar5;
  short *unaff_RBX;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int unaff_R12D;
  uint unaff_R13D;
  uint *unaff_R15;
  uint *in_stack_00000050;
  uint in_stack_00000068;
  int in_stack_00000078;
  int iVar9;
  
  do {
    puVar1 = unaff_R15 + 1;
    sVar4 = (short)*unaff_R15;
    iVar12 = (int)sVar4;
    unaff_R12D = unaff_R12D + -1;
    uVar10 = *unaff_R15 >> 0x10 & 0xff;
    if (0x58 < uVar10) {
      return 0xd;
    }
    *unaff_RBX = sVar4;
    for (iVar6 = in_EAX + -1; unaff_RBX = unaff_RBX + in_stack_00000078, iVar6 != 0;
        iVar6 = iVar6 + -2) {
      uVar2 = *puVar1;
      puVar1 = (uint *)((int64_t)puVar1 + 1);
      uVar11 = (byte)uVar2 & 0xf;
      iVar7 = (int)*(short *)(&unknown_var_960_ptr + (int64_t)(int)uVar10 * 2);
      iVar5 = iVar7 >> 3;
      if (0xe < uVar11 - 1) goto LAB_18081ab3f;
      iVar3 = iVar7 >> 1;
      iVar8 = iVar7 >> 2;
      switch(uVar11) {
      case 1:
        iVar7 = iVar8;
      case 4:
        iVar5 = iVar5 + iVar7;
        goto LAB_18081ab3f;
      case 2:
        iVar5 = iVar5 + iVar3;
        goto LAB_18081ab3f;
      case 3:
        iVar5 = iVar5 + iVar3 + iVar8;
        goto LAB_18081ab3f;
      case 5:
        iVar5 = iVar5 + iVar8 + iVar7;
        goto LAB_18081ab3f;
      case 6:
        iVar5 = iVar5 + iVar3 + iVar7;
        goto LAB_18081ab3f;
      case 7:
        iVar5 = iVar5 + iVar3 + iVar8 + iVar7;
        goto LAB_18081ab3f;
      case 8:
        goto code_r0x00018081ab3d;
      case 9:
        iVar7 = iVar8;
        break;
      case 10:
        iVar7 = iVar3;
        break;
      case 0xb:
        iVar5 = iVar5 + iVar8;
        iVar7 = iVar3;
        break;
      case 0xd:
        iVar5 = iVar5 + iVar8;
        break;
      case 0xe:
        iVar5 = iVar5 + iVar3;
        break;
      case 0xf:
        iVar5 = iVar5 + iVar8 + iVar3;
      }
      iVar5 = iVar5 + iVar7;
code_r0x00018081ab3d:
      iVar5 = -iVar5;
LAB_18081ab3f:
      iVar12 = iVar12 + iVar5;
      iVar7 = iVar12;
      if ((short)iVar12 != iVar12) {
        iVar7 = 0x7fff;
        if (iVar12 < -0x8000) {
          iVar7 = -0x8000;
        }
      }
      iVar5 = *(int *)(&unknown_var_896_ptr + (uint64_t)uVar11 * 4) + uVar10;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0x58 < iVar5) {
        iVar5 = 0x58;
      }
      *unaff_RBX = (short)iVar7;
      unaff_RBX = unaff_RBX + in_stack_00000078;
      unaff_R15 = in_stack_00000050;
      unaff_R13D = in_stack_00000068;
      if (iVar6 == 1) break;
      uVar10 = (uint)(byte)((byte)uVar2 >> 4);
      iVar12 = (int)*(short *)(&unknown_var_960_ptr + (int64_t)iVar5 * 2);
      iVar3 = iVar12 >> 3;
      if (0xe < uVar10 - 1) goto LAB_18081ac45;
      iVar8 = iVar12 >> 1;
      iVar9 = iVar12 >> 2;
      switch(uVar10) {
      case 1:
        iVar12 = iVar9;
      case 4:
        iVar3 = iVar3 + iVar12;
        goto LAB_18081ac45;
      case 2:
        iVar3 = iVar3 + iVar8;
        goto LAB_18081ac45;
      case 3:
        iVar3 = iVar3 + iVar8 + iVar9;
        goto LAB_18081ac45;
      case 5:
        iVar3 = iVar3 + iVar9 + iVar12;
        goto LAB_18081ac45;
      case 6:
        iVar3 = iVar3 + iVar8 + iVar12;
        goto LAB_18081ac45;
      case 7:
        iVar3 = iVar3 + iVar8 + iVar9 + iVar12;
        goto LAB_18081ac45;
      case 8:
        goto code_r0x00018081ac43;
      case 9:
        iVar12 = iVar9;
        break;
      case 10:
        iVar12 = iVar8;
        break;
      case 0xb:
        iVar3 = iVar3 + iVar9;
        iVar12 = iVar8;
        break;
      case 0xd:
        iVar3 = iVar3 + iVar9;
        break;
      case 0xe:
        iVar3 = iVar3 + iVar8;
        break;
      case 0xf:
        iVar3 = iVar3 + iVar9 + iVar8;
      }
      iVar3 = iVar3 + iVar12;
code_r0x00018081ac43:
      iVar3 = -iVar3;
LAB_18081ac45:
      iVar7 = iVar7 + iVar3;
      iVar12 = iVar7;
      if ((short)iVar7 != iVar7) {
        iVar12 = 0x7fff;
        if (iVar7 < -0x8000) {
          iVar12 = -0x8000;
        }
      }
      uVar10 = *(int *)(&unknown_var_896_ptr + (uint64_t)uVar10 * 4) + iVar5;
      if ((int)uVar10 < 0) {
        uVar10 = 0;
      }
      else if (0x58 < (int)uVar10) {
        uVar10 = 0x58;
      }
      *unaff_RBX = (short)iVar12;
    }
    unaff_R15 = (uint *)((int64_t)unaff_R15 + (uint64_t)unaff_R13D);
    in_stack_00000050 = unaff_R15;
    if (unaff_R12D == 0) {
      return 0;
    }
  } while( true );
}



uint64_t FUN_18081acd2(void)

{
  return 0xd;
}



uint64_t FUN_18081acd9(void)

{
  return 0;
}



uint64_t FUN_18081ad60(uint *param_1,short *param_2,int param_3,uint param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint64_t uVar16;
  uint *puStackX_8;
  uint uStack_58;
  int iVar10;
  
  if (param_3 == 0) {
    return 0;
  }
  puStackX_8 = param_1;
  do {
    param_3 = param_3 + -1;
    sVar3 = (short)*puStackX_8;
    iVar12 = (int)sVar3;
    uVar11 = *puStackX_8 >> 0x10 & 0xff;
    if (0x58 < uVar11) {
      return 0xd;
    }
    uVar13 = puStackX_8[1] >> 0x10 & 0xff;
    sVar4 = (short)puStackX_8[1];
    iVar7 = (int)sVar4;
    if (0x58 < uVar13) {
      return 0xd;
    }
    *param_2 = sVar3;
    param_2[1] = sVar4;
    param_2 = param_2 + 2;
    puVar1 = puStackX_8;
    for (uVar14 = param_5 - 1; uVar14 != 0; uVar14 = uVar14 - uStack_58) {
      uVar6 = puVar1[2];
      uVar15 = puVar1[3];
      uStack_58 = 8;
      if ((7 < uVar14) || (uStack_58 = uVar14, uVar14 != 0)) {
        uVar16 = (uint64_t)uStack_58;
        do {
          uVar5 = uVar6 & 0xf;
          iVar8 = (int)*(short *)(&unknown_var_960_ptr + (int64_t)(int)uVar11 * 2);
          iVar2 = iVar8 >> 3;
          if (0xe < uVar5 - 1) goto LAB_18081af13;
          iVar9 = iVar8 >> 1;
          iVar10 = iVar8 >> 2;
          switch(uVar5) {
          case 1:
            iVar8 = iVar10;
          case 4:
            iVar2 = iVar2 + iVar8;
            goto LAB_18081af13;
          case 2:
            iVar2 = iVar2 + iVar9;
            goto LAB_18081af13;
          case 3:
            iVar2 = iVar2 + iVar9 + iVar10;
            goto LAB_18081af13;
          case 5:
            iVar2 = iVar2 + iVar10 + iVar8;
            goto LAB_18081af13;
          case 6:
            iVar2 = iVar2 + iVar9 + iVar8;
            goto LAB_18081af13;
          case 7:
            iVar2 = iVar2 + iVar9 + iVar10 + iVar8;
            goto LAB_18081af13;
          case 8:
            goto code_r0x00018081af11;
          case 9:
            iVar8 = iVar10;
            break;
          case 10:
            iVar8 = iVar9;
            break;
          case 0xb:
            iVar2 = iVar2 + iVar10;
            iVar8 = iVar9;
            break;
          case 0xd:
            iVar2 = iVar2 + iVar10;
            break;
          case 0xe:
            iVar2 = iVar2 + iVar9;
            break;
          case 0xf:
            iVar2 = iVar2 + iVar10 + iVar9;
          }
          iVar2 = iVar2 + iVar8;
code_r0x00018081af11:
          iVar2 = -iVar2;
LAB_18081af13:
          iVar2 = iVar12 + iVar2;
          iVar12 = iVar2;
          if ((short)iVar2 != iVar2) {
            iVar12 = 0x7fff;
            if (iVar2 < -0x8000) {
              iVar12 = -0x8000;
            }
          }
          uVar11 = uVar11 + *(int *)(&unknown_var_896_ptr + (uint64_t)uVar5 * 4);
          if ((int)uVar11 < 0) {
            uVar11 = 0;
          }
          else if (0x58 < (int)uVar11) {
            uVar11 = 0x58;
          }
          uVar5 = uVar15 & 0xf;
          iVar8 = (int)*(short *)(&unknown_var_960_ptr + (int64_t)(int)uVar13 * 2);
          iVar2 = iVar8 >> 3;
          if (0xe < uVar5 - 1) goto LAB_18081b00d;
          iVar9 = iVar8 >> 1;
          iVar10 = iVar8 >> 2;
          switch(uVar5) {
          case 1:
            iVar8 = iVar10;
          case 4:
            iVar2 = iVar2 + iVar8;
            goto LAB_18081b00d;
          case 2:
            iVar2 = iVar2 + iVar9;
            goto LAB_18081b00d;
          case 3:
            iVar2 = iVar2 + iVar9 + iVar10;
            goto LAB_18081b00d;
          case 5:
            iVar2 = iVar2 + iVar10 + iVar8;
            goto LAB_18081b00d;
          case 6:
            iVar2 = iVar2 + iVar9 + iVar8;
            goto LAB_18081b00d;
          case 7:
            iVar2 = iVar2 + iVar9 + iVar10 + iVar8;
            goto LAB_18081b00d;
          case 8:
            goto code_r0x00018081b00b;
          case 9:
            iVar8 = iVar10;
            break;
          case 10:
            iVar8 = iVar9;
            break;
          case 0xb:
            iVar2 = iVar2 + iVar10;
            iVar8 = iVar9;
            break;
          case 0xd:
            iVar2 = iVar2 + iVar10;
            break;
          case 0xe:
            iVar2 = iVar2 + iVar9;
            break;
          case 0xf:
            iVar2 = iVar2 + iVar10 + iVar9;
          }
          iVar2 = iVar2 + iVar8;
code_r0x00018081b00b:
          iVar2 = -iVar2;
LAB_18081b00d:
          iVar2 = iVar7 + iVar2;
          iVar7 = iVar2;
          if ((short)iVar2 != iVar2) {
            iVar7 = 0x7fff;
            if (iVar2 < -0x8000) {
              iVar7 = -0x8000;
            }
          }
          uVar13 = uVar13 + *(int *)(&unknown_var_896_ptr + (uint64_t)uVar5 * 4);
          if ((int)uVar13 < 0) {
            uVar13 = 0;
          }
          else if (0x58 < (int)uVar13) {
            uVar13 = 0x58;
          }
          *param_2 = (short)iVar12;
          param_2[1] = (short)iVar7;
          param_2 = param_2 + 2;
          uVar6 = uVar6 >> 4;
          uVar15 = uVar15 >> 4;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      puVar1 = puVar1 + 2;
    }
    puStackX_8 = (uint *)((int64_t)puStackX_8 + (uint64_t)param_4);
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}



uint64_t FUN_18081ad7f(uint64_t param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int64_t in_RAX;
  short sVar3;
  short sVar4;
  uint uVar5;
  uint64_t unaff_RBX;
  uint uVar6;
  uint64_t unaff_RBP;
  int iVar7;
  uint64_t unaff_RSI;
  short *unaff_RDI;
  int iVar8;
  int iVar9;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint64_t unaff_R12;
  uint uVar14;
  uint64_t unaff_R13;
  uint uVar15;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  uint64_t uVar16;
  uint *in_stack_00000060;
  uint in_stack_00000078;
  int in_stack_00000080;
  int iVar10;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  do {
    param_3 = param_3 + -1;
    sVar3 = (short)*param_2;
    iVar12 = (int)sVar3;
    uVar11 = *param_2 >> 0x10 & 0xff;
    if (0x58 < uVar11) {
      return 0xd;
    }
    uVar13 = param_2[1] >> 0x10 & 0xff;
    sVar4 = (short)param_2[1];
    iVar7 = (int)sVar4;
    if (0x58 < uVar13) {
      return 0xd;
    }
    *unaff_RDI = sVar3;
    unaff_RDI[1] = sVar4;
    unaff_RDI = unaff_RDI + 2;
    for (uVar14 = in_stack_00000080 - 1; uVar14 != 0; uVar14 = uVar14 - uVar2) {
      uVar6 = param_2[2];
      uVar15 = param_2[3];
      uVar2 = 8;
      if ((7 < uVar14) || (uVar2 = uVar14, uVar14 != 0)) {
        uVar16 = (uint64_t)uVar2;
        do {
          uVar5 = uVar6 & 0xf;
          iVar8 = (int)*(short *)(&unknown_var_960_ptr + (int64_t)(int)uVar11 * 2);
          iVar1 = iVar8 >> 3;
          if (0xe < uVar5 - 1) goto LAB_18081af13;
          iVar9 = iVar8 >> 1;
          iVar10 = iVar8 >> 2;
          switch(uVar5) {
          case 1:
            iVar8 = iVar10;
          case 4:
            iVar1 = iVar1 + iVar8;
            goto LAB_18081af13;
          case 2:
            iVar1 = iVar1 + iVar9;
            goto LAB_18081af13;
          case 3:
            iVar1 = iVar1 + iVar9 + iVar10;
            goto LAB_18081af13;
          case 5:
            iVar1 = iVar1 + iVar10 + iVar8;
            goto LAB_18081af13;
          case 6:
            iVar1 = iVar1 + iVar9 + iVar8;
            goto LAB_18081af13;
          case 7:
            iVar1 = iVar1 + iVar9 + iVar10 + iVar8;
            goto LAB_18081af13;
          case 8:
            goto code_r0x00018081af11;
          case 9:
            iVar8 = iVar10;
            break;
          case 10:
            iVar8 = iVar9;
            break;
          case 0xb:
            iVar1 = iVar1 + iVar10;
            iVar8 = iVar9;
            break;
          case 0xd:
            iVar1 = iVar1 + iVar10;
            break;
          case 0xe:
            iVar1 = iVar1 + iVar9;
            break;
          case 0xf:
            iVar1 = iVar1 + iVar10 + iVar9;
          }
          iVar1 = iVar1 + iVar8;
code_r0x00018081af11:
          iVar1 = -iVar1;
LAB_18081af13:
          iVar1 = iVar12 + iVar1;
          iVar12 = iVar1;
          if ((short)iVar1 != iVar1) {
            iVar12 = 0x7fff;
            if (iVar1 < -0x8000) {
              iVar12 = -0x8000;
            }
          }
          uVar11 = uVar11 + *(int *)(&unknown_var_896_ptr + (uint64_t)uVar5 * 4);
          if ((int)uVar11 < 0) {
            uVar11 = 0;
          }
          else if (0x58 < (int)uVar11) {
            uVar11 = 0x58;
          }
          uVar5 = uVar15 & 0xf;
          iVar8 = (int)*(short *)(&unknown_var_960_ptr + (int64_t)(int)uVar13 * 2);
          iVar1 = iVar8 >> 3;
          if (0xe < uVar5 - 1) goto LAB_18081b00d;
          iVar9 = iVar8 >> 1;
          iVar10 = iVar8 >> 2;
          switch(uVar5) {
          case 1:
            iVar8 = iVar10;
          case 4:
            iVar1 = iVar1 + iVar8;
            goto LAB_18081b00d;
          case 2:
            iVar1 = iVar1 + iVar9;
            goto LAB_18081b00d;
          case 3:
            iVar1 = iVar1 + iVar9 + iVar10;
            goto LAB_18081b00d;
          case 5:
            iVar1 = iVar1 + iVar10 + iVar8;
            goto LAB_18081b00d;
          case 6:
            iVar1 = iVar1 + iVar9 + iVar8;
            goto LAB_18081b00d;
          case 7:
            iVar1 = iVar1 + iVar9 + iVar10 + iVar8;
            goto LAB_18081b00d;
          case 8:
            goto code_r0x00018081b00b;
          case 9:
            iVar8 = iVar10;
            break;
          case 10:
            iVar8 = iVar9;
            break;
          case 0xb:
            iVar1 = iVar1 + iVar10;
            iVar8 = iVar9;
            break;
          case 0xd:
            iVar1 = iVar1 + iVar10;
            break;
          case 0xe:
            iVar1 = iVar1 + iVar9;
            break;
          case 0xf:
            iVar1 = iVar1 + iVar10 + iVar9;
          }
          iVar1 = iVar1 + iVar8;
code_r0x00018081b00b:
          iVar1 = -iVar1;
LAB_18081b00d:
          iVar1 = iVar7 + iVar1;
          iVar7 = iVar1;
          if ((short)iVar1 != iVar1) {
            iVar7 = 0x7fff;
            if (iVar1 < -0x8000) {
              iVar7 = -0x8000;
            }
          }
          uVar13 = uVar13 + *(int *)(&unknown_var_896_ptr + (uint64_t)uVar5 * 4);
          if ((int)uVar13 < 0) {
            uVar13 = 0;
          }
          else if (0x58 < (int)uVar13) {
            uVar13 = 0x58;
          }
          *unaff_RDI = (short)iVar12;
          unaff_RDI[1] = (short)iVar7;
          unaff_RDI = unaff_RDI + 2;
          uVar6 = uVar6 >> 4;
          uVar15 = uVar15 >> 4;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      param_2 = param_2 + 2;
    }
    param_2 = (uint *)((int64_t)in_stack_00000060 + (uint64_t)in_stack_00000078);
    in_stack_00000060 = param_2;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}



uint64_t FUN_18081b0c6(void)

{
  return 0xd;
}



uint64_t FUN_18081b0cd(void)

{
  return 0;
}





// 函数: void FUN_18081b150(int64_t param_1)
void FUN_18081b150(int64_t param_1)

{
  *(int64_t *)(param_1 + 8) = param_1;
  *(int64_t *)param_1 = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  func_0x000180767970(param_1 + 0x30);
  func_0x000180767970(param_1 + 0x180);
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(int8_t *)(param_1 + 0x2d0) = 0;
  *(uint64_t *)(param_1 + 0x568) = 0;
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x2d5,0,0x1ff);
}





// 函数: void FUN_18081b2d0(int64_t param_1,int param_2)
void FUN_18081b2d0(int64_t param_1,int param_2)

{
  uint64_t uVar1;
  
  uVar1 = *(uint64_t *)(param_1 + 0x20);
  SystemMemoryAllocator(uVar1);
  if ((param_2 != 0) &&
     (*(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_2,
     *(int *)(param_1 + 0x10) == *(int *)(param_1 + 0xc))) {
    *(uint64_t *)(param_1 + 0xc) = 0;
  }
  FUN_18081b7c0(param_1);
                    // WARNING: Subroutine does not return
  SystemMemoryManager(uVar1);
}





// 函数: void FUN_18081b330(int64_t param_1,int *param_2)
void FUN_18081b330(int64_t param_1,int *param_2)

{
  int iVar1;
  uint64_t uVar2;
  
  iVar1 = *param_2;
  uVar2 = *(uint64_t *)(param_1 + 0x540);
  SystemMemoryAllocator(uVar2);
  if ((iVar1 != 0) &&
     (*(int *)(param_1 + 0x530) = *(int *)(param_1 + 0x530) + iVar1,
     *(int *)(param_1 + 0x530) == *(int *)(param_1 + 0x52c))) {
    *(uint64_t *)(param_1 + 0x52c) = 0;
  }
  FUN_18081b7c0(param_1 + 0x520);
                    // WARNING: Subroutine does not return
  SystemMemoryManager(uVar2);
}





// 函数: void FUN_18081b390(int64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_18081b390(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  
  *(uint64_t *)(param_1 + 0x20) = param_2;
  *(uint64_t *)(param_1 + 0x18) = param_3;
  iVar1 = FUN_18081b490(param_1 + 0x4d8,0x20000,1);
  if ((((iVar1 == 0) && (iVar1 = FUN_18081b490(param_1 + 0x520,0x20000,4), iVar1 == 0)) &&
      (iVar1 = FUN_1807682e0(param_1 + 0x28,0), iVar1 == 0)) &&
     ((iVar1 = FUN_18081bd90(param_1,0,0,0xffffffff), iVar1 == 0 &&
      (iVar1 = FUN_180767c00(param_1 + 0x30,&unknown_var_1272_ptr,FUN_18081bc60,param_1,7,0,0,0,0),
      iVar1 == 0)))) {
    FUN_180767c00(param_1 + 0x180,&unknown_var_1304_ptr,FUN_18081c0c0,param_1,7,0,0,0,0);
  }
  return;
}





// 函数: void FUN_18081b40f(uint64_t param_1)
void FUN_18081b40f(uint64_t param_1)

{
  int iVar1;
  int64_t unaff_RBX;
  int8_t uStack0000000000000028;
  int32_t uStack0000000000000030;
  uint64_t uStack0000000000000038;
  
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000028 = 0;
  iVar1 = FUN_180767c00(param_1,&unknown_var_1272_ptr,FUN_18081bc60);
  if (iVar1 == 0) {
    uStack0000000000000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000028 = 0;
    FUN_180767c00(unaff_RBX + 0x180,&unknown_var_1304_ptr,FUN_18081c0c0);
  }
  return;
}





// 函数: void FUN_18081b483(void)
void FUN_18081b483(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18081b490(int64_t *param_1,uint64_t param_2,int32_t param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  
  lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&unknown_var_1152_ptr,0x52,0,0,1);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0x26;
  }
  else {
    *(int *)(param_1 + 1) = (int)param_2;
    *(uint64_t *)((int64_t)param_1 + 0xc) = 0;
    *(int32_t *)((int64_t)param_1 + 0x14) = 0;
    *(int8_t *)(param_1 + 3) = 0;
    *(int32_t *)(param_1 + 8) = param_3;
    uVar2 = FUN_1807682e0(param_1 + 4,0);
    if ((int)uVar2 == 0) {
      uVar2 = FUN_1807688b0(param_1 + 5);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_1807688b0(param_1 + 6);
        if ((int)uVar2 == 0) {
          param_1[7] = 0;
        }
      }
    }
  }
  return uVar2;
}



uint64_t FUN_18081b580(int64_t param_1,char *param_2)

{
  uint64_t uVar1;
  bool bVar2;
  uint uVar3;
  uint64_t in_RAX;
  char *pcVar4;
  uint uVar5;
  int aiStackX_8 [2];
  
  if (*(char *)(param_1 + 0x2d0) == '\0') {
    in_RAX = FUN_180768b70(aiStackX_8);
    pcVar4 = (char *)(param_1 + 0x2d5);
    uVar5 = 0;
    do {
      if (pcVar4[-1] == *param_2) {
        in_RAX = 0;
        if ((*pcVar4 != param_2[1]) && (*pcVar4 != -1)) goto LAB_18081b5ca;
        bVar2 = true;
      }
      else {
LAB_18081b5ca:
        bVar2 = false;
      }
      if (*(int *)(pcVar4 + 7) == 0) {
LAB_18081b5e5:
        in_RAX = CONCAT71((int7)(in_RAX >> 8),1);
      }
      else {
        uVar3 = aiStackX_8[0] - *(int *)(pcVar4 + 7);
        in_RAX = (uint64_t)uVar3;
        if (*(int *)(pcVar4 + 3) < (int)uVar3) goto LAB_18081b5e5;
        in_RAX = (uint64_t)(uint3)(uVar3 >> 8) << 8;
      }
      if ((bVar2) && ((*(int *)(pcVar4 + 3) == -1 || ((char)in_RAX != '\0')))) {
        uVar1 = *(uint64_t *)(param_1 + 0x4f8);
        SystemMemoryAllocator(uVar1);
                    // WARNING: Subroutine does not return
        SystemMemoryManager(uVar1);
      }
      uVar5 = uVar5 + 1;
      pcVar4 = pcVar4 + 0x10;
    } while (uVar5 < 0x20);
  }
  return in_RAX & 0xffffffffffffff00;
}



// WARNING: Removing unreachable block (ram,0x00018081b7b4)



// 函数: void FUN_18081b670(int64_t param_1)
void FUN_18081b670(int64_t param_1)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int iVar3;
  uint uVar4;
  int8_t *puVar5;
  
  uVar1 = *(uint64_t *)(param_1 + 0x28);
  SystemMemoryAllocator(uVar1);
  if (*(char *)(param_1 + 0x2d0) == '\0') {
    uVar4 = 0;
    puVar5 = (int8_t *)(param_1 + 0x2d5);
    do {
      if (((puVar5[-1] != -1) &&
          (plVar2 = *(int64_t **)(param_1 + 0x18), plVar2 != (int64_t *)0x0)) &&
         (iVar3 = (**(code **)(*plVar2 + 0x40))(plVar2,param_1,puVar5[-1],*puVar5), iVar3 != 0))
      goto FUN_18081b7ac;
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0x10;
    } while (uVar4 < 0x20);
    *(int8_t *)(param_1 + 0x2d0) = 1;
    iVar3 = FUN_1807ff260(*(uint64_t *)(param_1 + 0x20));
    if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(uVar1);
    }
  }
FUN_18081b7ac:
                    // WARNING: Subroutine does not return
  SystemMemoryManager(uVar1);
}



// WARNING: Removing unreachable block (ram,0x00018081b7b4)



