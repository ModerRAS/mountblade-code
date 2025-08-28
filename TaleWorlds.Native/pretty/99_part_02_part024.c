#include "TaleWorlds.Native.Split.h"

// 99_part_02_part024.c - 10 个函数

// 函数: void FUN_1800fdee0(longlong param_1)
void FUN_1800fdee0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  void *puVar10;
  int iVar11;
  int iStack_64;
  int iStack_48;
  int iStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  uint64_t uStack_38;
  
  plVar1 = (longlong *)(param_1 + 0x128);
  piVar5 = (int *)_tellg___basic_istream_DU__char_traits_D_std___std__QEAA_AV__fpos_U_Mbstatet___2_XZ
                            (plVar1,&iStack_48);
  iVar2 = piVar5[2];
  iVar3 = *piVar5;
  iVar4 = *(int *)((longlong)*(int *)(*plVar1 + 4) + 0x138 + param_1);
  do {
    if ((iVar4 != 0) ||
       (_read___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_PEAD_J_Z
                  (plVar1,param_1 + 0x2d8,0xc),
       *(int *)((longlong)*(int *)(*plVar1 + 4) + 0x138 + param_1) != 0)) {
      lVar8 = FUN_1800a19c0(param_1 + 0x138);
      if (lVar8 == 0) {
        _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
                  ((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1,2);
      }
      _clear___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
                (param_1 + 0x128 + (longlong)*(int *)(*plVar1 + 4),0,0);
      puVar10 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x10) != (void *)0x0) {
        puVar10 = *(void **)(param_1 + 0x10);
      }
      lVar8 = FUN_1800c4800(param_1 + 0x138,puVar10,0x21);
      lVar9 = (longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1;
      if (lVar8 == 0) {
        _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z(lVar9,2);
      }
      else {
        _clear___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z(lVar9,0,0);
      }
      iStack_64 = iVar2 + iVar3 >> 0x1f;
      iStack_44 = iStack_64;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      iStack_48 = iVar2 + iVar3;
      _seekg___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_V__fpos_U_Mbstatet___2__Z
                (plVar1,&iStack_48);
      return;
    }
    iVar4 = *(int *)(param_1 + 0x2d8);
    piVar6 = (int *)_tellg___basic_istream_DU__char_traits_D_std___std__QEAA_AV__fpos_U_Mbstatet___2_XZ
                              (plVar1,&iStack_48);
    piVar5 = *(int **)(param_1 + 0x340);
    iVar11 = piVar6[2] + *piVar6;
    if (piVar5 < *(int **)(param_1 + 0x348)) {
      *(int **)(param_1 + 0x340) = piVar5 + 1;
      *piVar5 = iVar11;
    }
    else {
      piVar6 = *(int **)(param_1 + 0x338);
      lVar8 = (longlong)piVar5 - (longlong)piVar6 >> 2;
      if (lVar8 == 0) {
        lVar8 = 1;
LAB_1800fe00d:
        piVar7 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 4,*(int8_t *)(param_1 + 0x350));
        piVar6 = *(int **)(param_1 + 0x338);
        piVar5 = *(int **)(param_1 + 0x340);
      }
      else {
        lVar8 = lVar8 * 2;
        if (lVar8 != 0) goto LAB_1800fe00d;
        piVar7 = (int *)0x0;
      }
      if (piVar6 != piVar5) {
                    // WARNING: Subroutine does not return
        memmove(piVar7,piVar6,(longlong)piVar5 - (longlong)piVar6);
      }
      *piVar7 = iVar11;
      if (*(longlong *)(param_1 + 0x338) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(int **)(param_1 + 0x338) = piVar7;
      *(int **)(param_1 + 0x348) = piVar7 + lVar8;
      *(int **)(param_1 + 0x340) = piVar7 + 1;
    }
    piVar5 = *(int **)(param_1 + 0x360);
    if (piVar5 < *(int **)(param_1 + 0x368)) {
      *(int **)(param_1 + 0x360) = piVar5 + 1;
      *piVar5 = iVar4;
    }
    else {
      piVar6 = *(int **)(param_1 + 0x358);
      lVar8 = (longlong)piVar5 - (longlong)piVar6 >> 2;
      if (lVar8 == 0) {
        lVar8 = 1;
LAB_1800fe0d6:
        piVar7 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 4,*(int8_t *)(param_1 + 0x370));
        piVar6 = *(int **)(param_1 + 0x358);
        piVar5 = *(int **)(param_1 + 0x360);
      }
      else {
        lVar8 = lVar8 * 2;
        if (lVar8 != 0) goto LAB_1800fe0d6;
        piVar7 = (int *)0x0;
      }
      if (piVar6 != piVar5) {
                    // WARNING: Subroutine does not return
        memmove(piVar7,piVar6,(longlong)piVar5 - (longlong)piVar6);
      }
      *piVar7 = iVar4;
      if (*(longlong *)(param_1 + 0x358) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(int **)(param_1 + 0x358) = piVar7;
      *(int **)(param_1 + 0x368) = piVar7 + lVar8;
      *(int **)(param_1 + 0x360) = piVar7 + 1;
    }
    _seekg___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12__JH_Z
              (plVar1,(longlong)(iVar11 + iVar4),0);
    iVar4 = *(int *)((longlong)*(int *)(*plVar1 + 4) + 0x138 + param_1);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800fdeea(longlong param_1)
void FUN_1800fdeea(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong in_RAX;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  void *puVar10;
  uint64_t unaff_RBX;
  uint64_t unaff_RDI;
  int iVar11;
  int iStackX_24;
  int in_stack_00000040;
  int iStack0000000000000044;
  int32_t in_stack_00000048;
  int32_t uStack000000000000004c;
  uint64_t in_stack_00000050;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBX;
  plVar1 = (longlong *)(param_1 + 0x128);
  *(uint64_t *)(in_RAX + 0x20) = unaff_RDI;
  piVar5 = (int *)_tellg___basic_istream_DU__char_traits_D_std___std__QEAA_AV__fpos_U_Mbstatet___2_XZ
                            (plVar1,in_RAX + -0x48);
  iVar2 = piVar5[2];
  iVar3 = *piVar5;
  iVar4 = *(int *)((longlong)*(int *)(*plVar1 + 4) + 0x138 + param_1);
  do {
    if ((iVar4 != 0) ||
       (_read___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_PEAD_J_Z
                  (plVar1,param_1 + 0x2d8,0xc),
       *(int *)((longlong)*(int *)(*plVar1 + 4) + 0x138 + param_1) != 0)) {
      lVar8 = FUN_1800a19c0(param_1 + 0x138);
      if (lVar8 == 0) {
        _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
                  ((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1,2);
      }
      _clear___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
                (param_1 + 0x128 + (longlong)*(int *)(*plVar1 + 4),0,0);
      puVar10 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x10) != (void *)0x0) {
        puVar10 = *(void **)(param_1 + 0x10);
      }
      lVar8 = FUN_1800c4800(param_1 + 0x138,puVar10,0x21);
      lVar9 = (longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1;
      if (lVar8 == 0) {
        _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z(lVar9,2);
      }
      else {
        _clear___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z(lVar9,0,0);
      }
      iStackX_24 = iVar2 + iVar3 >> 0x1f;
      iStack0000000000000044 = iStackX_24;
      in_stack_00000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000050 = 0;
      in_stack_00000040 = iVar2 + iVar3;
      _seekg___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_V__fpos_U_Mbstatet___2__Z
                (plVar1,&stack0x00000040);
      return;
    }
    iVar4 = *(int *)(param_1 + 0x2d8);
    piVar6 = (int *)_tellg___basic_istream_DU__char_traits_D_std___std__QEAA_AV__fpos_U_Mbstatet___2_XZ
                              (plVar1,&stack0x00000040);
    piVar5 = *(int **)(param_1 + 0x340);
    iVar11 = piVar6[2] + *piVar6;
    if (piVar5 < *(int **)(param_1 + 0x348)) {
      *(int **)(param_1 + 0x340) = piVar5 + 1;
      *piVar5 = iVar11;
    }
    else {
      piVar6 = *(int **)(param_1 + 0x338);
      lVar8 = (longlong)piVar5 - (longlong)piVar6 >> 2;
      if (lVar8 == 0) {
        lVar8 = 1;
LAB_1800fe00d:
        piVar7 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 4,*(int8_t *)(param_1 + 0x350));
        piVar6 = *(int **)(param_1 + 0x338);
        piVar5 = *(int **)(param_1 + 0x340);
      }
      else {
        lVar8 = lVar8 * 2;
        if (lVar8 != 0) goto LAB_1800fe00d;
        piVar7 = (int *)0x0;
      }
      if (piVar6 != piVar5) {
                    // WARNING: Subroutine does not return
        memmove(piVar7,piVar6,(longlong)piVar5 - (longlong)piVar6);
      }
      *piVar7 = iVar11;
      if (*(longlong *)(param_1 + 0x338) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(int **)(param_1 + 0x338) = piVar7;
      *(int **)(param_1 + 0x348) = piVar7 + lVar8;
      *(int **)(param_1 + 0x340) = piVar7 + 1;
    }
    piVar5 = *(int **)(param_1 + 0x360);
    if (piVar5 < *(int **)(param_1 + 0x368)) {
      *(int **)(param_1 + 0x360) = piVar5 + 1;
      *piVar5 = iVar4;
    }
    else {
      piVar6 = *(int **)(param_1 + 0x358);
      lVar8 = (longlong)piVar5 - (longlong)piVar6 >> 2;
      if (lVar8 == 0) {
        lVar8 = 1;
LAB_1800fe0d6:
        piVar7 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 4,*(int8_t *)(param_1 + 0x370));
        piVar6 = *(int **)(param_1 + 0x358);
        piVar5 = *(int **)(param_1 + 0x360);
      }
      else {
        lVar8 = lVar8 * 2;
        if (lVar8 != 0) goto LAB_1800fe0d6;
        piVar7 = (int *)0x0;
      }
      if (piVar6 != piVar5) {
                    // WARNING: Subroutine does not return
        memmove(piVar7,piVar6,(longlong)piVar5 - (longlong)piVar6);
      }
      *piVar7 = iVar4;
      if (*(longlong *)(param_1 + 0x358) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(int **)(param_1 + 0x358) = piVar7;
      *(int **)(param_1 + 0x368) = piVar7 + lVar8;
      *(int **)(param_1 + 0x360) = piVar7 + 1;
    }
    _seekg___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12__JH_Z
              (plVar1,(longlong)(iVar11 + iVar4),0);
    iVar4 = *(int *)((longlong)*(int *)(*plVar1 + 4) + 0x138 + param_1);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800fdf2a(int32_t param_1)
void FUN_1800fdf2a(int32_t param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  void *puVar6;
  longlong unaff_RBX;
  int *piVar7;
  int iVar8;
  longlong *unaff_R14;
  int32_t uVar9;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int iStackX_24;
  int in_stack_00000040;
  int iStack0000000000000044;
  int32_t in_stack_00000048;
  int32_t uStack000000000000004c;
  uint64_t in_stack_00000050;
  int in_stack_00000090;
  
  do {
    uVar9 = _read___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_PEAD_J_Z
                      (param_1,unaff_RBX + 0x2d8,0xc);
    if (*(int *)((longlong)*(int *)(*unaff_R14 + 4) + 0x138 + unaff_RBX) != 0) break;
    iVar1 = *(int *)(unaff_RBX + 0x2d8);
    piVar2 = (int *)_tellg___basic_istream_DU__char_traits_D_std___std__QEAA_AV__fpos_U_Mbstatet___2_XZ
                              (uVar9,&stack0x00000040);
    piVar7 = *(int **)(unaff_RBX + 0x340);
    iVar8 = piVar2[2] + *piVar2;
    uVar9 = extraout_XMM0_Da;
    if (piVar7 < *(int **)(unaff_RBX + 0x348)) {
      *(int **)(unaff_RBX + 0x340) = piVar7 + 1;
      *piVar7 = iVar8;
    }
    else {
      piVar2 = *(int **)(unaff_RBX + 0x338);
      lVar4 = (longlong)piVar7 - (longlong)piVar2 >> 2;
      if (lVar4 == 0) {
        lVar4 = 1;
LAB_1800fe00d:
        piVar3 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar4 * 4,*(int8_t *)(unaff_RBX + 0x350));
        piVar2 = *(int **)(unaff_RBX + 0x338);
        piVar7 = *(int **)(unaff_RBX + 0x340);
        uVar9 = extraout_XMM0_Da_00;
      }
      else {
        lVar4 = lVar4 * 2;
        if (lVar4 != 0) goto LAB_1800fe00d;
        piVar3 = (int *)0x0;
      }
      if (piVar2 != piVar7) {
                    // WARNING: Subroutine does not return
        memmove(piVar3,piVar2,(longlong)piVar7 - (longlong)piVar2);
      }
      *piVar3 = iVar8;
      if (*(longlong *)(unaff_RBX + 0x338) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(int **)(unaff_RBX + 0x338) = piVar3;
      *(int **)(unaff_RBX + 0x348) = piVar3 + lVar4;
      *(int **)(unaff_RBX + 0x340) = piVar3 + 1;
    }
    piVar7 = *(int **)(unaff_RBX + 0x360);
    if (piVar7 < *(int **)(unaff_RBX + 0x368)) {
      *(int **)(unaff_RBX + 0x360) = piVar7 + 1;
      *piVar7 = iVar1;
    }
    else {
      piVar2 = *(int **)(unaff_RBX + 0x358);
      lVar4 = (longlong)piVar7 - (longlong)piVar2 >> 2;
      if (lVar4 == 0) {
        lVar4 = 1;
LAB_1800fe0d6:
        piVar3 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar4 * 4,*(int8_t *)(unaff_RBX + 0x370));
        piVar2 = *(int **)(unaff_RBX + 0x358);
        piVar7 = *(int **)(unaff_RBX + 0x360);
        uVar9 = extraout_XMM0_Da_01;
      }
      else {
        lVar4 = lVar4 * 2;
        if (lVar4 != 0) goto LAB_1800fe0d6;
        piVar3 = (int *)0x0;
      }
      if (piVar2 != piVar7) {
                    // WARNING: Subroutine does not return
        memmove(piVar3,piVar2,(longlong)piVar7 - (longlong)piVar2);
      }
      *piVar3 = iVar1;
      if (*(longlong *)(unaff_RBX + 0x358) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(int **)(unaff_RBX + 0x358) = piVar3;
      *(int **)(unaff_RBX + 0x368) = piVar3 + lVar4;
      *(int **)(unaff_RBX + 0x360) = piVar3 + 1;
    }
    param_1 = _seekg___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12__JH_Z
                        (uVar9,(longlong)(iVar8 + iVar1),0);
  } while (*(int *)((longlong)*(int *)(*unaff_R14 + 4) + 0x138 + unaff_RBX) == 0);
  lVar4 = FUN_1800a19c0(unaff_R14 + 2);
  if (lVar4 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((longlong)*(int *)(*unaff_R14 + 4) + (longlong)unaff_R14,2);
  }
  _clear___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
            (unaff_RBX + 0x128 + (longlong)*(int *)(*unaff_R14 + 4),0,0);
  puVar6 = &system_buffer_ptr;
  if (*(void **)(unaff_RBX + 0x10) != (void *)0x0) {
    puVar6 = *(void **)(unaff_RBX + 0x10);
  }
  lVar4 = FUN_1800c4800(unaff_R14 + 2,puVar6,0x21);
  lVar5 = (longlong)*(int *)(*unaff_R14 + 4) + (longlong)unaff_R14;
  if (lVar4 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z(lVar5,2);
  }
  else {
    _clear___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z(lVar5,0,0);
  }
  iStackX_24 = in_stack_00000090 >> 0x1f;
  in_stack_00000040 = in_stack_00000090;
  iStack0000000000000044 = iStackX_24;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000050 = 0;
  _seekg___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_V__fpos_U_Mbstatet___2__Z
            (in_stack_00000090,&stack0x00000040);
  return;
}






// 函数: void FUN_1800fe19a(void)
void FUN_1800fe19a(void)

{
  longlong lVar1;
  longlong lVar2;
  void *puVar3;
  longlong unaff_RBX;
  int unaff_ESI;
  longlong *unaff_R14;
  int iStackX_24;
  int32_t in_stack_00000040;
  int iStack0000000000000044;
  int32_t in_stack_00000048;
  int32_t uStack000000000000004c;
  uint64_t in_stack_00000050;
  
  lVar1 = FUN_1800a19c0(unaff_R14 + 2);
  if (lVar1 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((longlong)*(int *)(*unaff_R14 + 4) + (longlong)unaff_R14,2);
  }
  _clear___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
            (unaff_RBX + 0x128 + (longlong)*(int *)(*unaff_R14 + 4),0,0);
  puVar3 = &system_buffer_ptr;
  if (*(void **)(unaff_RBX + 0x10) != (void *)0x0) {
    puVar3 = *(void **)(unaff_RBX + 0x10);
  }
  lVar1 = FUN_1800c4800(unaff_R14 + 2,puVar3,0x21);
  lVar2 = (longlong)*(int *)(*unaff_R14 + 4) + (longlong)unaff_R14;
  if (lVar1 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z(lVar2,2);
  }
  else {
    _clear___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z(lVar2,0,0);
  }
  iStackX_24 = unaff_ESI >> 0x1f;
  iStack0000000000000044 = iStackX_24;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000050 = 0;
  _seekg___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_V__fpos_U_Mbstatet___2__Z
            (unaff_ESI,&stack0x00000040);
  return;
}






// 函数: void FUN_1800fe21e(uint64_t param_1)
void FUN_1800fe21e(uint64_t param_1)

{
  int in_EAX;
  int unaff_ESI;
  int iStackX_24;
  int32_t in_stack_00000040;
  int iStack0000000000000044;
  int32_t in_stack_00000048;
  int32_t uStack000000000000004c;
  uint64_t in_stack_00000050;
  
  _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z(param_1,in_EAX + 2);
  iStackX_24 = unaff_ESI >> 0x1f;
  iStack0000000000000044 = iStackX_24;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000050 = 0;
  _seekg___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_V__fpos_U_Mbstatet___2__Z
            (unaff_ESI,&stack0x00000040);
  return;
}






// 函数: void FUN_1800fe280(longlong param_1)
void FUN_1800fe280(longlong param_1)

{
  char cVar1;
  
  *(uint *)(param_1 + 0x120) = *(uint *)(param_1 + 0x120) & 0xfffffffd;
  if (*(longlong **)(param_1 + 0x260) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x260) + 0x80))();
    if (cVar1 != '\0') {
                    // WARNING: Could not recover jumptable at 0x0001800fe2b8. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(**(longlong **)(param_1 + 0x260) + 0x68))();
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800fe2d0(longlong param_1)
void FUN_1800fe2d0(longlong param_1)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int8_t auStack_138 [32];
  int32_t uStack_118;
  longlong *plStack_110;
  longlong *plStack_108;
  longlong *plStack_100;
  longlong *plStack_f8;
  longlong *plStack_f0;
  uint64_t uStack_e8;
  int32_t uStack_e0;
  int32_t uStack_dc;
  int16_t uStack_d8;
  int8_t uStack_d6;
  int32_t uStack_d4;
  int8_t uStack_d0;
  uint64_t uStack_c8;
  longlong alStack_c0 [3];
  int32_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  ulonglong uStack_28;
  
  uVar1 = _DAT_180c86930;
  uStack_98 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  uStack_118 = 0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0xc;
  strcpy_s(auStack_70,0x40,&UNK_180a05138);
  FUN_1800b30d0(uVar1,&plStack_100,&puStack_88,1);
  uStack_118 = 1;
  puStack_88 = &UNK_18098bcb0;
  uVar3 = FUN_18022cb40(plStack_100,&plStack_110);
  uStack_118 = 0;
  if (plStack_100 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plStack_100 + 0x38))();
  }
  puVar2 = (uint64_t *)FUN_1800bf050(uVar3,&plStack_108);
  puVar2 = (uint64_t *)FUN_1800763c0(*puVar2,&plStack_f0);
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_f8 = *(longlong **)(param_1 + 600);
  *(uint64_t *)(param_1 + 600) = uVar1;
  if (plStack_f8 != (longlong *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  if (plStack_f0 != (longlong *)0x0) {
    (**(code **)(*plStack_f0 + 0x38))();
  }
  if (plStack_108 != (longlong *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  FUN_18022cd30(plStack_110,0,*(uint64_t *)(param_1 + 0x238));
  FUN_180076910(*(uint64_t *)(param_1 + 600),&plStack_110);
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_dc = 0xffffffff;
  uStack_d8 = 1;
  uStack_d6 = 0;
  uStack_d4 = 0xffffffff;
  uStack_d0 = 1;
  uStack_c8 = 0;
  plStack_108 = alStack_c0;
  alStack_c0[0] = 0;
  alStack_c0[1] = 0;
  alStack_c0[2] = 0;
  uStack_a8 = 3;
  uStack_a0 = 0;
  FUN_180076c50(*(uint64_t *)(param_1 + 600),&uStack_e8);
  FUN_1800b6620();
  plStack_108 = alStack_c0;
  if (alStack_c0[0] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (plStack_110 != (longlong *)0x0) {
    (**(code **)(*plStack_110 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_138);
}






// 函数: void FUN_1800fe500(longlong param_1,longlong param_2)
void FUN_1800fe500(longlong param_1,longlong param_2)

{
  uint64_t uStack_b8;
  int32_t uStack_b0;
  int16_t uStack_ac;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  int32_t uStack_98;
  int8_t uStack_94;
  int32_t uStack_90;
  uint64_t uStack_8c;
  int16_t uStack_84;
  uint64_t uStack_80;
  int32_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  int8_t uStack_64;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if (*(longlong *)(param_1 + 600) != 0) {
    FUN_1800fda70();
    uStack_48 = 0x3f800000;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_20 = 0x3f800000;
    uStack_38 = 0x3f80000000000000;
    uStack_30 = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_8c = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_64 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0x3f800000;
    uStack_b0 = 0xffffffff;
    uStack_ac = 0xff00;
    uStack_a0 = 0xffffffffffffffff;
    uStack_98 = 0xffffffff;
    uStack_94 = 0xff;
    uStack_90 = 0xffffffff;
    uStack_84 = 0x400;
    FUN_180077750(*(uint64_t *)(param_1 + 600),param_2,&uStack_48,0,&uStack_b8);
    if (*(code **)(param_2 + 0x9670) != (code *)0x0) {
      (**(code **)(param_2 + 0x9670))(param_2 + 0x9660,0,0);
    }
    *(void **)(param_2 + 0x9670) = &UNK_1800ee4d0;
    *(void **)(param_2 + 0x9678) = &UNK_1800ee4c0;
    *(code **)(param_2 + 0x9660) = FUN_1800fcf80;
    *(longlong *)(param_2 + 0x9680) = param_1;
  }
  return;
}






// 函数: void FUN_1800fe52b(void)
void FUN_1800fe52b(void)

{
  uint64_t uVar1;
  longlong in_RAX;
  uint64_t unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  FUN_1800fda70();
  uVar1 = *(uint64_t *)(unaff_RDI + 600);
  *(uint64_t *)(unaff_RBP + 0x17) = 0x3f800000;
  *(uint64_t *)(unaff_RBP + 0x1f) = 0;
  *(uint64_t *)(unaff_RBP + 0x37) = 0;
  *(uint64_t *)(unaff_RBP + 0x3f) = 0x3f800000;
  *(uint64_t *)(unaff_RBP + 0x27) = 0x3f80000000000000;
  *(uint64_t *)(unaff_RBP + 0x2f) = 0;
  *(uint64_t *)(unaff_RBP + -0x59) = 0;
  *(uint64_t *)(unaff_RBP + -0x49) = 0;
  *(uint64_t *)(unaff_RBP + -0x2d) = 0;
  *(uint64_t *)(unaff_RBP + -0x21) = 0;
  *(int32_t *)(unaff_RBP + -0x19) = 0;
  *(uint64_t *)(unaff_RBP + -0x11) = 0;
  *(int8_t *)(unaff_RBP + -5) = 0;
  *(uint64_t *)(unaff_RBP + 0xf) = 0;
  *(int32_t *)(unaff_RBP + -9) = 0;
  *(int32_t *)(unaff_RBP + 0x47) = 0;
  *(int32_t *)(unaff_RBP + 0x4b) = 0;
  *(int32_t *)(unaff_RBP + 0x4f) = 0;
  *(int32_t *)(unaff_RBP + 0x53) = 0x3f800000;
  *(int32_t *)(unaff_RBP + -0x51) = 0xffffffff;
  *(int16_t *)(unaff_RBP + -0x4d) = 0xff00;
  *(uint64_t *)(unaff_RBP + -0x41) = 0xffffffffffffffff;
  *(int32_t *)(unaff_RBP + -0x39) = 0xffffffff;
  *(int8_t *)(unaff_RBP + -0x35) = 0xff;
  *(int32_t *)(unaff_RBP + -0x31) = 0xffffffff;
  *(int16_t *)(unaff_RBP + -0x25) = 0x400;
  FUN_180077750(uVar1,0,unaff_RBP + 0x17,0,unaff_RBP + -0x59);
  if (*(code **)(unaff_RSI + 0x9670) != (code *)0x0) {
    (**(code **)(unaff_RSI + 0x9670))(unaff_RSI + 0x9660,0,0);
  }
  *(void **)(unaff_RSI + 0x9670) = &UNK_1800ee4d0;
  *(void **)(unaff_RSI + 0x9678) = &UNK_1800ee4c0;
  *(code **)(unaff_RSI + 0x9660) = FUN_1800fcf80;
  *(longlong *)(unaff_RSI + 0x9680) = unaff_RDI;
  return;
}






// 函数: void FUN_1800fe627(void)
void FUN_1800fe627(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




