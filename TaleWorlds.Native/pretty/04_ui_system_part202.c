#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part202.c - 4 个函数

// 函数: void FUN_1807872c0(int64_t param_1,uint64_t param_2,int32_t param_3,int param_4,int param_5)
void FUN_1807872c0(int64_t param_1,uint64_t param_2,int32_t param_3,int param_4,int param_5)

{
  short *psVar1;
  ushort uVar2;
  int64_t *plVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  int iVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint uVar12;
  int64_t lVar13;
  int8_t auStack_148 [32];
  int32_t uStack_128;
  int8_t uStack_120;
  int8_t uStack_118;
  char cStack_108;
  ushort uStack_104;
  uint uStack_100;
  int iStack_fc;
  int32_t uStack_f8;
  uint64_t uStack_f0;
  int64_t lStack_e8;
  uint uStack_e0;
  int iStack_dc;
  int iStack_d8;
  int32_t uStack_d4;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  int64_t lStack_c0;
  int64_t lStack_b8;
  int64_t lStack_b0;
  uint64_t uStack_a8;
  int64_t lStack_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  uint64_t uStack_80;
  int iStack_78;
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_148;
  lVar11 = *(int64_t *)(param_1 + 0x48);
  iStack_d8 = param_5;
  cStack_108 = 0;
  lVar6 = lVar11;
  lStack_e8 = param_1;
  iStack_dc = param_4;
  uStack_d4 = param_3;
  lStack_b8 = lVar11;
  uStack_a8 = param_2;
  if (lVar11 != 0) {
    func_0x000180743c20(lVar11,0x11);
    lVar6 = *(int64_t *)(param_1 + 0x48);
  }
  iStack_fc = 0;
  uStack_100 = 0;
  cStack_108 = lVar11 != 0;
  func_0x000180746360(lVar6,&uStack_100,&iStack_fc);
  uVar8 = 0;
  uStack_e0 = 0;
  uVar9 = 0;
  if ((((*(code **)(param_1 + 0x388) != (code *)0x0) &&
       (uVar9 = uVar8, *(int64_t *)(param_1 + 0x390) != 0)) &&
      (*(int64_t *)(param_1 + 0x398) != 0)) && (*(int64_t *)(param_1 + 0x3a0) != 0)) {
    uVar9 = param_1 + 8;
    if (param_1 == 0) {
      uVar9 = 0;
    }
    iVar4 = (**(code **)(param_1 + 0x388))(uVar9,&uStack_e0);
    if (iVar4 != 0) goto LAB_1807878e9;
    uVar9 = (uint64_t)uStack_e0;
    param_1 = lStack_e8;
  }
  lVar11 = *(int64_t *)(param_1 + 0x48);
  iVar4 = *(int *)(lVar11 + 0x127e8);
  lVar6 = (int64_t)iVar4;
  iVar7 = (int)uVar9;
  if (iVar4 < (int)uVar9) {
    iVar7 = iVar4;
  }
  iVar4 = iVar4 - iVar7;
  uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar4);
  lStack_c0 = lVar6;
  if ((iVar7 != 0) && (iVar4 != 0)) {
    uVar2 = *(ushort *)(lVar11 + 0x127f4);
    uStack_104 = *(ushort *)(lVar11 + 0x127f2);
    lVar11 = *(int64_t *)(lVar11 + 0x127e0);
    uStack_f8 = CONCAT22(uStack_f8._2_2_,uVar2);
    if (0 < lVar6) {
      lVar10 = 0;
      do {
        plVar3 = *(int64_t **)(lVar11 + lVar10 * 8);
        uVar9 = (uint64_t)uStack_104;
        uVar5 = (uint)uVar2;
        uVar12 = 0;
        *(int32_t *)(plVar3 + 5) = 0x41200000;
        if (0 < param_5) {
          do {
            lVar13 = (uVar9 & 0xffff) * 0x58;
            iVar4 = param_5 - uVar12;
            if ((int)(uStack_100 - uVar5) < (int)(param_5 - uVar12)) {
              iVar4 = uStack_100 - uVar5;
            }
            if ((*(char *)(lVar13 + *plVar3) != '\0') && (*(float *)(plVar3 + 5) == 10.0)) {
              *(int32_t *)(plVar3 + 5) = *(int32_t *)(lVar13 + 0xc + *plVar3);
            }
            uVar5 = (uint)(ushort)((short)uVar5 + (short)iVar4);
            uVar12 = (uint)(ushort)((short)uVar12 + (short)iVar4);
            if (uVar5 == uStack_100) {
              uVar5 = 0;
              uVar9 = (int64_t)(uint64_t)(((uint)uVar9 & 0xffff) + 1) % (int64_t)iStack_fc &
                      0xffffffff;
            }
          } while ((int)uVar12 < param_5);
        }
        lVar10 = lVar10 + 1;
        param_1 = lStack_e8;
        param_4 = iStack_dc;
      } while (lVar10 < lVar6);
    }
    qsort(lVar11,lVar6,8,&unknown_var_8192_ptr);
    iVar4 = (int)uStack_f0;
  }
  lStack_88 = *(int64_t *)(param_1 + 0x48) + 0x10bd0;
  uStack_118 = 1;
  uStack_120 = 0;
  uStack_128 = 0;
  lStack_90 = SystemResourceManager(lStack_88,param_4 * 4 + 0x20,&system_buffer_ptr,0);
  uStack_d0 = lStack_90 + 0x1fU & 0xffffffffffffffe0;
  if (uStack_d0 != 0) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    if (0 < lVar6) {
      lStack_b0 = (int64_t)iVar4;
      lStack_98 = uStack_d0 + (int64_t)param_5 * 4;
      uStack_c8 = 0;
      lStack_a0 = (int64_t)(param_4 - param_5) << 2;
      uStack_80 = uStack_d0;
      iStack_78 = param_4;
                    // WARNING: Subroutine does not return
      memset(lStack_98,0);
    }
    psVar1 = (short *)(*(int64_t *)(param_1 + 0x48) + 0x127f4);
    *psVar1 = *psVar1 + (short)param_5;
    uVar5 = (uint)*(ushort *)(*(int64_t *)(param_1 + 0x48) + 0x127f4);
    if (uStack_100 <= uVar5) {
      *(short *)(*(int64_t *)(param_1 + 0x48) + 0x127f4) = (short)(uVar5 % uStack_100);
      *(short *)(*(int64_t *)(param_1 + 0x48) + 0x127f2) =
           (short)((int)((uint)*(ushort *)(*(int64_t *)(param_1 + 0x48) + 0x127f2) +
                        uVar5 / uStack_100) % iStack_fc);
    }
  }
  if (uStack_d0 != 0) {
    uStack_128 = CONCAT31(uStack_128._1_3_,1);
                    // WARNING: Subroutine does not return
    SystemDataValidator(lStack_88,lStack_90,&system_buffer_ptr,0);
  }
  uStack_d0 = 0;
  lVar11 = lStack_b8;
LAB_1807878e9:
  if ((cStack_108 != '\0') && (lVar11 != 0)) {
                    // WARNING: Subroutine does not return
    SystemCoreHandler(lVar11,0x11);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_148);
}





// 函数: void FUN_1807872e6(int64_t param_1,uint64_t param_2,int32_t param_3,int param_4)
void FUN_1807872e6(int64_t param_1,uint64_t param_2,int32_t param_3,int param_4)

{
  short *psVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int64_t *plVar5;
  int iVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t lVar13;
  int64_t unaff_RDI;
  uint uVar14;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  int32_t in_XMM0_Da;
  char cStack0000000000000040;
  uint in_stack_00000048;
  int iStack000000000000004c;
  int32_t in_stack_00000050;
  int iStack0000000000000058;
  int32_t uStack000000000000005c;
  int64_t lStack0000000000000060;
  uint in_stack_00000068;
  int iStack000000000000006c;
  int iStack0000000000000070;
  int32_t uStack0000000000000074;
  uint64_t in_stack_00000078;
  
  *(uint64_t *)(in_R11 + -0x20) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R14;
  iVar4 = *(int *)(unaff_RBP + 0x70);
  *(uint64_t *)(unaff_RBP + -0x60) = param_2;
  cStack0000000000000040 = 0;
  *(int64_t *)(unaff_RBP + -0x70) = unaff_RDI;
  lStack0000000000000060 = param_1;
  iStack000000000000006c = param_4;
  iStack0000000000000070 = iVar4;
  uStack0000000000000074 = param_3;
  if (unaff_RDI != 0) {
    in_XMM0_Da = func_0x000180743c20(in_XMM0_Da,0x11);
  }
  iStack000000000000004c = 0;
  in_stack_00000048 = 0;
  cStack0000000000000040 = unaff_RDI != 0;
  func_0x000180746360(in_XMM0_Da,&stack0x00000048,&stack0x0000004c);
  uVar11 = 0;
  in_stack_00000068 = 0;
  uVar12 = 0;
  if ((((*(code **)(unaff_RBX + 0x388) != (code *)0x0) &&
       (uVar12 = uVar11, *(int64_t *)(unaff_RBX + 0x390) != 0)) &&
      (*(int64_t *)(unaff_RBX + 0x398) != 0)) && (*(int64_t *)(unaff_RBX + 0x3a0) != 0)) {
    uVar12 = unaff_RBX + 8;
    if (unaff_RBX == 0) {
      uVar12 = 0;
    }
    iVar6 = (**(code **)(unaff_RBX + 0x388))(uVar12,&stack0x00000068);
    if (iVar6 != 0) goto LAB_1807878e9;
    uVar12 = (uint64_t)in_stack_00000068;
    unaff_RBX = lStack0000000000000060;
  }
  lVar9 = *(int64_t *)(unaff_RBX + 0x48);
  iVar6 = *(int *)(lVar9 + 0x127e8);
  lVar8 = (int64_t)iVar6;
  *(int64_t *)(unaff_RBP + -0x78) = lVar8;
  iVar10 = (int)uVar12;
  if (iVar6 < (int)uVar12) {
    iVar10 = iVar6;
  }
  iVar6 = iVar6 - iVar10;
  _iStack0000000000000058 = CONCAT44(uStack000000000000005c,iVar6);
  if ((iVar10 != 0) && (iVar6 != 0)) {
    uVar2 = *(ushort *)(lVar9 + 0x127f4);
    uVar3 = *(ushort *)(lVar9 + 0x127f2);
    lVar9 = *(int64_t *)(lVar9 + 0x127e0);
    in_stack_00000050 = CONCAT22(in_stack_00000050._2_2_,uVar2);
    if (0 < lVar8) {
      lVar13 = 0;
      do {
        plVar5 = *(int64_t **)(lVar9 + lVar13 * 8);
        uVar12 = (uint64_t)uVar3;
        uVar7 = (uint)uVar2;
        uVar14 = 0;
        *(int32_t *)(plVar5 + 5) = 0x41200000;
        if (0 < iVar4) {
          do {
            lVar8 = (uVar12 & 0xffff) * 0x58;
            iVar6 = iVar4 - uVar14;
            if ((int)(in_stack_00000048 - uVar7) < (int)(iVar4 - uVar14)) {
              iVar6 = in_stack_00000048 - uVar7;
            }
            if ((*(char *)(lVar8 + *plVar5) != '\0') && (*(float *)(plVar5 + 5) == 10.0)) {
              *(int32_t *)(plVar5 + 5) = *(int32_t *)(lVar8 + 0xc + *plVar5);
            }
            uVar7 = (uint)(ushort)((short)uVar7 + (short)iVar6);
            uVar14 = (uint)(ushort)((short)uVar14 + (short)iVar6);
            if (uVar7 == in_stack_00000048) {
              uVar7 = 0;
              uVar12 = (int64_t)(uint64_t)(((uint)uVar12 & 0xffff) + 1) %
                       (int64_t)iStack000000000000004c & 0xffffffff;
            }
          } while ((int)uVar14 < iVar4);
          lVar8 = *(int64_t *)(unaff_RBP + -0x78);
        }
        lVar13 = lVar13 + 1;
        unaff_RBX = lStack0000000000000060;
        param_4 = iStack000000000000006c;
      } while (lVar13 < lVar8);
    }
    qsort(lVar9,lVar8,8,&unknown_var_8192_ptr);
    iVar6 = iStack0000000000000058;
  }
  lVar9 = *(int64_t *)(unaff_RBX + 0x48) + 0x10bd0;
  *(int64_t *)(unaff_RBP + -0x40) = lVar9;
  lVar9 = SystemResourceManager(lVar9,param_4 * 4 + 0x20,&system_buffer_ptr,0,0);
  *(int64_t *)(unaff_RBP + -0x48) = lVar9;
  in_stack_00000078 = lVar9 + 0x1fU & 0xffffffffffffffe0;
  if (in_stack_00000078 != 0) {
    _iStack0000000000000058 = 0;
    in_stack_00000050 = 0;
    if (0 < lVar8) {
      lVar9 = in_stack_00000078 + (int64_t)iVar4 * 4;
      *(int64_t *)(unaff_RBP + -0x68) = (int64_t)iVar6;
      *(uint64_t *)(unaff_RBP + -0x80) = 0;
      *(int64_t *)(unaff_RBP + -0x50) = lVar9;
      *(int64_t *)(unaff_RBP + -0x58) = (int64_t)(param_4 - iVar4) << 2;
      *(uint64_t *)(unaff_RBP + -0x38) = in_stack_00000078;
      *(int *)(unaff_RBP + -0x30) = param_4;
                    // WARNING: Subroutine does not return
      memset(lVar9,0);
    }
    psVar1 = (short *)(*(int64_t *)(unaff_RBX + 0x48) + 0x127f4);
    *psVar1 = *psVar1 + (short)iVar4;
    uVar7 = (uint)*(ushort *)(*(int64_t *)(unaff_RBX + 0x48) + 0x127f4);
    if (in_stack_00000048 <= uVar7) {
      *(short *)(*(int64_t *)(unaff_RBX + 0x48) + 0x127f4) = (short)(uVar7 % in_stack_00000048);
      *(short *)(*(int64_t *)(unaff_RBX + 0x48) + 0x127f2) =
           (short)((int)((uint)*(ushort *)(*(int64_t *)(unaff_RBX + 0x48) + 0x127f2) +
                        uVar7 / in_stack_00000048) % iStack000000000000004c);
    }
  }
  if (in_stack_00000078 != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(unaff_RBP + -0x40),*(uint64_t *)(unaff_RBP + -0x48),
                  &system_buffer_ptr,0,1);
  }
  unaff_RDI = *(int64_t *)(unaff_RBP + -0x70);
  in_stack_00000078 = 0;
LAB_1807878e9:
  if ((cStack0000000000000040 != '\0') && (unaff_RDI != 0)) {
                    // WARNING: Subroutine does not return
    SystemCoreHandler(unaff_RDI,0x11);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x10) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1807873a8(int param_1,int64_t param_2)
void FUN_1807873a8(int param_1,int64_t param_2)

{
  short *psVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int64_t *plVar5;
  int iVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int unaff_ESI;
  int64_t lVar11;
  uint uVar12;
  uint64_t unaff_R12;
  int iVar13;
  int64_t unaff_R14;
  char in_stack_00000040;
  uint uStack0000000000000048;
  int iStack000000000000004c;
  int64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  
  iVar4 = *(int *)(param_2 + 0x127e8);
  lVar8 = (int64_t)iVar4;
  *(int64_t *)(unaff_RBP + -0x78) = lVar8;
  if (iVar4 < param_1) {
    param_1 = iVar4;
  }
  iVar13 = (int)unaff_R14;
  if ((param_1 != 0) && (iVar4 - param_1 != 0)) {
    uVar2 = *(ushort *)(param_2 + 0x127f4);
    uVar3 = *(ushort *)(param_2 + 0x127f2);
    lVar9 = *(int64_t *)(param_2 + 0x127e0);
    if (0 < lVar8) {
      lVar11 = 0;
      do {
        plVar5 = *(int64_t **)(lVar9 + lVar11 * 8);
        uVar10 = (uint64_t)uVar3;
        uVar7 = (uint)uVar2;
        uVar12 = 0;
        *(int32_t *)(plVar5 + 5) = 0x41200000;
        if (0 < iVar13) {
          do {
            lVar8 = (uVar10 & 0xffff) * 0x58;
            iVar6 = iVar13 - uVar12;
            if ((int)(uStack0000000000000048 - uVar7) < (int)(iVar13 - uVar12)) {
              iVar6 = uStack0000000000000048 - uVar7;
            }
            if ((*(char *)(lVar8 + *plVar5) != '\0') && (*(float *)(plVar5 + 5) == 10.0)) {
              *(int32_t *)(plVar5 + 5) = *(int32_t *)(lVar8 + 0xc + *plVar5);
            }
            uVar7 = (uint)(ushort)((short)uVar7 + (short)iVar6);
            uVar12 = (uint)(ushort)((short)uVar12 + (short)iVar6);
            if (uVar7 == uStack0000000000000048) {
              uVar7 = 0;
              uVar10 = (int64_t)(uint64_t)(((uint)uVar10 & 0xffff) + 1) %
                       (int64_t)iStack000000000000004c & 0xffffffff;
            }
          } while ((int)uVar12 < iVar13);
          lVar8 = *(int64_t *)(unaff_RBP + -0x78);
        }
        lVar11 = lVar11 + 1;
        unaff_RBX = in_stack_00000060;
        unaff_ESI = in_stack_00000068._4_4_;
      } while (lVar11 < lVar8);
    }
    qsort(lVar9,lVar8,8,&unknown_var_8192_ptr);
    unaff_R12 = 0;
  }
  lVar9 = *(int64_t *)(unaff_RBX + 0x48) + 0x10bd0;
  *(int64_t *)(unaff_RBP + -0x40) = lVar9;
  lVar9 = SystemResourceManager(lVar9,unaff_ESI * 4 + 0x20,&system_buffer_ptr,0,(int)unaff_R12);
  *(int64_t *)(unaff_RBP + -0x48) = lVar9;
  uVar10 = lVar9 + 0x1fU & 0xffffffffffffffe0;
  if (uVar10 != 0) {
    if (0 < lVar8) {
      lVar8 = uVar10 + unaff_R14 * 4;
      *(int64_t *)(unaff_RBP + -0x68) = (int64_t)(iVar4 - param_1);
      *(uint64_t *)(unaff_RBP + -0x80) = unaff_R12;
      *(int64_t *)(unaff_RBP + -0x50) = lVar8;
      *(int64_t *)(unaff_RBP + -0x58) = (int64_t)(unaff_ESI - iVar13) << 2;
      *(uint64_t *)(unaff_RBP + -0x38) = uVar10;
      *(int *)(unaff_RBP + -0x30) = unaff_ESI;
                    // WARNING: Subroutine does not return
      memset(lVar8,0);
    }
    psVar1 = (short *)(*(int64_t *)(unaff_RBX + 0x48) + 0x127f4);
    *psVar1 = *psVar1 + (short)unaff_R14;
    uVar7 = (uint)*(ushort *)(*(int64_t *)(unaff_RBX + 0x48) + 0x127f4);
    if (uStack0000000000000048 <= uVar7) {
      *(short *)(*(int64_t *)(unaff_RBX + 0x48) + 0x127f4) =
           (short)(uVar7 % uStack0000000000000048);
      *(short *)(*(int64_t *)(unaff_RBX + 0x48) + 0x127f2) =
           (short)((int)((uint)*(ushort *)(*(int64_t *)(unaff_RBX + 0x48) + 0x127f2) +
                        uVar7 / uStack0000000000000048) % iStack000000000000004c);
    }
  }
  if (uVar10 == 0) {
    if ((in_stack_00000040 != '\0') && (*(int64_t *)(unaff_RBP + -0x70) != 0)) {
                    // WARNING: Subroutine does not return
      SystemCoreHandler(*(int64_t *)(unaff_RBP + -0x70),0x11);
    }
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x10) ^ (uint64_t)&stack0x00000000);
  }
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(unaff_RBP + -0x40),*(uint64_t *)(unaff_RBP + -0x48),&system_buffer_ptr
                ,0,1);
}





// 函数: void FUN_1807878c9(void)
void FUN_1807878c9(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(unaff_RBP + -0x40),*(uint64_t *)(unaff_RBP + -0x48),&system_buffer_ptr
                ,0,1);
}





