#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part016.c - 15 个函数

// 函数: void FUN_1804a9fe0(longlong *param_1)
void FUN_1804a9fe0(longlong *param_1)

{
  int *piVar1;
  char *pcVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ();
  puVar3 = (uint64_t *)*param_1;
  if (puVar3 != (uint64_t *)0x0) {
    if ((uint64_t *)puVar3[3] != (uint64_t *)0x0) {
      *(uint64_t *)puVar3[3] = 0;
    }
    (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  if ((param_1[6] != 0) && (*(longlong *)(param_1[6] + 0x10) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar4 = param_1[5];
  while (lVar4 != 0) {
    pcVar2 = (char *)(lVar4 + 0x3c1);
    lVar4 = *(longlong *)(lVar4 + 0x3b8);
    if (*pcVar2 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  puVar3 = (uint64_t *)param_1[3];
  if (puVar3 == (uint64_t *)0x0) {
    return;
  }
  uVar5 = (ulonglong)puVar3 & 0xffffffffffc00000;
  if (uVar5 != 0) {
    lVar4 = uVar5 + 0x80 + ((longlong)puVar3 - uVar5 >> 0x10) * 0x50;
    lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
    if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
      *puVar3 = *(uint64_t *)(lVar4 + 0x20);
      *(uint64_t **)(lVar4 + 0x20) = puVar3;
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                          puVar3,uVar5,0xfffffffffffffffe);
    }
  }
  return;
}






// 函数: void FUN_1804aa030(longlong param_1)
void FUN_1804aa030(longlong param_1)

{
  FUN_1808fc8a8(param_1 + 200,0x20,0x18,FUN_180046860,0xfffffffffffffffe);
  FUN_1808fc8a8(param_1 + 8,8,0x18,FUN_180045af0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804aa090(longlong param_1)
void FUN_1804aa090(longlong param_1)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  char cVar3;
  
  puVar1 = _DAT_180c8ed08;
  *(int32_t *)(param_1 + 0x40) = 0;
  if (*(void **)*puVar1 == &unknown_var_424_ptr) {
    cVar3 = *(int *)(_DAT_180c8a9c8 + 0xe0) != 0;
  }
  else {
    cVar3 = (**(code **)(*(void **)*puVar1 + 0x48))();
  }
  if (cVar3 == '\0') {
    _DAT_180bf65b8 = timeGetTime();
  }
  else {
    _DAT_180bf65b8 = 0xb061;
  }
  uVar2 = _DAT_180c8ed18;
  _DAT_180bf65b8 = _DAT_180bf65b8 ^ 0x41c64e6d;
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x50) = 0;
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(uint64_t *)(param_1 + 0x60) = 0;
  *(uint64_t *)(param_1 + 0x68) = 0;
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(uint64_t *)(param_1 + 0x90) = 0;
  *(uint64_t *)(param_1 + 0x98) = 0;
  *(uint64_t *)(param_1 + 0xa0) = 0;
  *(int32_t *)(param_1 + 0xa8) = 0;
  uVar2 = FUN_18062b1e0(uVar2,0x6c8,8,3);
  uVar2 = FUN_180567a40(uVar2);
  *(uint64_t *)(param_1 + 0xb0) = uVar2;
  return;
}






// 函数: void FUN_1804aa240(longlong *param_1)
void FUN_1804aa240(longlong *param_1)

{
  if ((longlong *)*param_1 != param_1) {
                    // WARNING: Subroutine does not return
    FUN_18064e900((longlong *)*param_1);
  }
  return;
}






// 函数: void FUN_1804aa280(ulonglong *param_1)
void FUN_1804aa280(ulonglong *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_1[4] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804aa2d0(longlong param_1)
void FUN_1804aa2d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x588) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x588) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1804aa300(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar7;
  ulonglong uVar8;
  int32_t uVar9;
  uint64_t uVar10;
  ulonglong uVar6;
  
  uVar10 = 0xfffffffffffffffe;
  iVar3 = (**(code **)(_DAT_180c8ece0 + 0x158))();
  if (iVar3 != 0x30) {
    FUN_180626f80(&unknown_var_5072_ptr);
  }
  if ((_DAT_180c95fd0 - _DAT_180c95fc8 & 0xfffffffffffffffc) != 0xc0) {
    FUN_180080ca0(&system_state_5fc8,0x30,param_3,param_4,uVar10);
  }
  uVar6 = 0;
  uVar8 = uVar6;
  do {
    uVar9 = (**(code **)(_DAT_180c8ece0 + 0x160))(uVar6);
    uVar4 = _DAT_180c95fc8;
    *(int32_t *)(uVar8 + _DAT_180c95fc8) = uVar9;
    lVar2 = _DAT_180c96070;
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
    uVar8 = uVar8 + 4;
  } while ((int)uVar5 < 0x30);
  if ((system_state_6098 != '\0') && (_DAT_180c96070 != 0)) {
    if ((_DAT_180c92514 == 1) && (_DAT_180c92590 != 0)) {
      (**(code **)(_DAT_180c8ece0 + 0x150))();
    }
    uVar4 = _DAT_180c95fc8;
    if ((int)*(float *)(_DAT_180c95fc8 + 0x20) < 1) {
      lVar1 = *(longlong *)(lVar2 + 0x18);
      lVar7 = *(longlong *)(lVar1 + 0x328);
      if (lVar7 != 0) {
        uVar10 = *(uint64_t *)(lVar1 + 0x348);
        lVar7 = lVar7 + 0x1bb0;
        iVar3 = _Mtx_lock(lVar7);
        if (iVar3 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar3);
        }
        FUN_1803096a0(uVar10);
        iVar3 = _Mtx_unlock(lVar7);
        if (iVar3 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar3);
        }
      }
      lVar2 = *(longlong *)(lVar2 + 0x18);
      uVar4 = (ulonglong)*(uint *)(lVar2 + 0x51d0);
      LOCK();
      *(int32_t *)(lVar2 + 0x51d0) = 0;
      UNLOCK();
    }
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804aa470(longlong param_1,uint64_t param_2,longlong param_3,longlong param_4,
void FUN_1804aa470(longlong param_1,uint64_t param_2,longlong param_3,longlong param_4,
                  char param_5)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  void *puVar4;
  int iVar5;
  int8_t auStack_108 [48];
  longlong lStack_d8;
  uint64_t uStack_d0;
  void *puStack_a8;
  int8_t *puStack_a0;
  int iStack_98;
  int8_t auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_d0 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_108;
  puStack_a8 = &unknown_var_3480_ptr;
  puStack_a0 = auStack_90;
  auStack_90[0] = 0;
  iStack_98 = *(int *)(param_3 + 0x10);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar4 = *(void **)(param_3 + 8);
  }
  lStack_d8 = param_4;
  strcpy_s(auStack_90,0x40,puVar4);
  iVar5 = -1;
  if (0 < iStack_98) {
    iVar5 = FUN_18053a2e0(&system_state_5f30);
  }
  puStack_a8 = &unknown_var_720_ptr;
  if (param_5 == -1) {
                    // WARNING: Subroutine does not return
    memset(&puStack_a0,0,0x50);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  piVar3 = *(int **)(lVar1 + ((ulonglong)(longlong)iVar5 % (ulonglong)*(uint *)(param_1 + 0x10)) * 8
                    );
  do {
    if (piVar3 == (int *)0x0) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      piVar3 = *(int **)(lVar1 + lVar2 * 8);
LAB_1804aa5dc:
      if (piVar3 != *(int **)(lVar1 + lVar2 * 8)) {
        *(uint64_t *)(piVar3 + (longlong)param_5 * 2 + 4) = param_2;
                    // WARNING: Subroutine does not return
        FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_108);
      }
      puStack_a8 = &unknown_var_3480_ptr;
      puStack_a0 = auStack_90;
      auStack_90[0] = 0;
      iStack_98 = *(int *)(lStack_d8 + 0x10);
      puVar4 = &system_buffer_ptr;
      if (*(void **)(lStack_d8 + 8) != (void *)0x0) {
        puVar4 = *(void **)(lStack_d8 + 8);
      }
      strcpy_s(auStack_90,0x40,puVar4);
      if (0 < iStack_98) {
        FUN_18053a2e0(&system_state_5f30,&puStack_a8);
      }
      puStack_a8 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
      memset(&puStack_a0,0,0x50);
    }
    if (iVar5 == *piVar3) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      goto LAB_1804aa5dc;
    }
    piVar3 = *(int **)(piVar3 + 0x18);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804aa710(longlong param_1)
void FUN_1804aa710(longlong param_1)

{
  uint64_t *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int **ppiVar7;
  longlong lVar8;
  longlong lVar9;
  void *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  void *puVar14;
  int8_t auStack_d8 [32];
  int *piStack_b8;
  uint64_t *puStack_b0;
  int *piStack_a8;
  uint64_t *puStack_a0;
  uint64_t uStack_98;
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_98 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_d8;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x10;
  strcpy_s(auStack_70,0x40,&unknown_var_5144_ptr);
  iVar5 = FUN_18053a5e0(&system_state_5f30,&puStack_88);
  puStack_88 = &unknown_var_720_ptr;
  iVar12 = 0;
  iVar4 = (int)((_DAT_180c96158 - _DAT_180c96150) / 0x68);
  if (0 < iVar4) {
    lVar13 = 0;
    do {
      if (-1 < *(int *)(*(longlong *)((longlong)iVar5 * 0xe0 + 0x78 + _DAT_180c95fb0) + lVar13 * 8))
      {
        iVar6 = FUN_18053a410(&system_state_5f30,iVar5,iVar12);
        if (iVar6 != -1) {
          iVar2 = *(int *)(_DAT_180c95f68 + (longlong)iVar6 * 4);
          if (iVar2 == -1) {
            lVar11 = 0;
          }
          else {
            lVar11 = *(longlong *)(_DAT_180c95f88 + (longlong)iVar2 * 8);
          }
          if (*(short *)(lVar11 + 0x7e) != -1) {
            lVar8 = *(longlong *)(param_1 + 8);
            puVar1 = (uint64_t *)
                     (lVar8 + ((ulonglong)(longlong)iVar6 % (ulonglong)*(uint *)(param_1 + 0x10)) *
                              8);
            for (piVar3 = (int *)*puVar1; piVar3 != (int *)0x0; piVar3 = *(int **)(piVar3 + 0x18)) {
              if (iVar6 == *piVar3) {
                piStack_b8 = piVar3;
                puStack_b0 = puVar1;
                ppiVar7 = &piStack_b8;
                lVar9 = *(longlong *)(param_1 + 0x10);
                goto LAB_1804aa8b8;
              }
            }
            lVar9 = *(longlong *)(param_1 + 0x10);
            puStack_a0 = (uint64_t *)(lVar8 + lVar9 * 8);
            piStack_a8 = (int *)*puStack_a0;
            ppiVar7 = &piStack_a8;
LAB_1804aa8b8:
            if (((*ppiVar7 == *(int **)(lVar8 + lVar9 * 8)) || (*(longlong *)(*ppiVar7 + 0xe) == 0))
               && (*(int *)(lVar11 + 0x1ec) != -1)) {
              iVar6 = FUN_18053a410(&system_state_5f30,iVar5);
              iVar6 = *(int *)(_DAT_180c95f68 + (longlong)iVar6 * 4);
              if (iVar6 == -1) {
                lVar8 = 0;
              }
              else {
                lVar8 = *(longlong *)(_DAT_180c95f88 + (longlong)iVar6 * 8);
              }
              puVar14 = &system_buffer_ptr;
              if (*(void **)(lVar8 + 0x18) != (void *)0x0) {
                puVar14 = *(void **)(lVar8 + 0x18);
              }
              puVar10 = &system_buffer_ptr;
              if (*(void **)(lVar11 + 0x18) != (void *)0x0) {
                puVar10 = *(void **)(lVar11 + 0x18);
              }
              FUN_18005d3a0(&unknown_var_5184_ptr,puVar10,puVar14);
            }
          }
        }
      }
      iVar12 = iVar12 + 1;
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar4);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1804aa990(longlong param_1,uint64_t *param_2,uint64_t param_3,int *param_4,
             uint64_t param_5)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  int *piVar8;
  uint64_t uVar9;
  
  piVar8 = (int *)FUN_18062b420(_DAT_180c8ed18,0x68,*(int8_t *)(param_1 + 0x2c));
  *piVar8 = *param_4;
  puVar6 = (uint64_t *)CONCAT44(param_5._4_4_,(int32_t)param_5);
  uVar9 = puVar6[1];
  *(uint64_t *)(piVar8 + 2) = *puVar6;
  *(uint64_t *)(piVar8 + 4) = uVar9;
  uVar9 = puVar6[3];
  *(uint64_t *)(piVar8 + 6) = puVar6[2];
  *(uint64_t *)(piVar8 + 8) = uVar9;
  uVar9 = puVar6[5];
  *(uint64_t *)(piVar8 + 10) = puVar6[4];
  *(uint64_t *)(piVar8 + 0xc) = uVar9;
  uVar9 = puVar6[7];
  *(uint64_t *)(piVar8 + 0xe) = puVar6[6];
  *(uint64_t *)(piVar8 + 0x10) = uVar9;
  iVar3 = *(int *)((longlong)puVar6 + 0x44);
  iVar4 = *(int *)(puVar6 + 9);
  iVar5 = *(int *)((longlong)puVar6 + 0x4c);
  piVar8[0x12] = *(int *)(puVar6 + 8);
  piVar8[0x13] = iVar3;
  piVar8[0x14] = iVar4;
  piVar8[0x15] = iVar5;
  *(uint64_t *)(piVar8 + 0x16) = puVar6[10];
  piVar8[0x18] = 0;
  piVar8[0x19] = 0;
  uVar7 = (ulonglong)(longlong)*piVar8 % (ulonglong)*(uint *)(param_1 + 0x10);
  for (piVar1 = *(int **)(*(longlong *)(param_1 + 8) + uVar7 * 8); piVar1 != (int *)0x0;
      piVar1 = *(int **)(piVar1 + 0x18)) {
    if (*piVar8 == *piVar1) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(piVar8);
    }
  }
  FUN_18066c220(param_1 + 0x20,&param_5,(ulonglong)*(uint *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),1);
  if ((char)param_5 == '\0') {
    *(uint64_t *)(piVar8 + 0x18) = *(uint64_t *)(*(longlong *)(param_1 + 8) + uVar7 * 8);
    *(int **)(*(longlong *)(param_1 + 8) + uVar7 * 8) = piVar8;
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
    *param_2 = piVar8;
    param_2[1] = lVar2 + uVar7 * 8;
    *(int8_t *)(param_2 + 2) = 1;
    return param_2;
  }
  uVar9 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)param_5._4_4_ * 8 + 8,8,
                        *(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
  memset(uVar9,0,(ulonglong)param_5._4_4_ * 8);
}






// 函数: void FUN_1804aaa83(uint64_t param_1)
void FUN_1804aaa83(uint64_t param_1)

{
  longlong lVar1;
  uint64_t uVar2;
  ulonglong in_stack_00000080;
  
  lVar1 = (in_stack_00000080 >> 0x20) * 8;
  uVar2 = FUN_18062b1e0(param_1,lVar1 + 8,8);
                    // WARNING: Subroutine does not return
  memset(uVar2,0,lVar1);
}






// 函数: void FUN_1804aab1e(void)
void FUN_1804aab1e(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804aab3b(void)
void FUN_1804aab3b(void)

{
  longlong lVar1;
  ulonglong in_RAX;
  uint64_t unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong *unaff_R15;
  
  if ((1 < in_RAX) && (*(longlong *)(unaff_RDI + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(*(longlong *)(unaff_RDI + 8));
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(longlong *)(unaff_RDI + 8) = unaff_R14;
  *(uint64_t *)(unaff_R12 + 0x60) = *(uint64_t *)(unaff_R14 + unaff_R13 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}






// 函数: void FUN_1804aab61(void)
void FUN_1804aab61(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong *unaff_R15;
  
  *(uint64_t *)(unaff_R12 + 0x60) = *(uint64_t *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}



// WARNING: Removing unreachable block (ram,0x0001804aae27)
// WARNING: Removing unreachable block (ram,0x0001804aae32)
// WARNING: Removing unreachable block (ram,0x0001804aae40)
// WARNING: Removing unreachable block (ram,0x0001804aae46)
// WARNING: Removing unreachable block (ram,0x0001804aae51)
// WARNING: Removing unreachable block (ram,0x0001804aae55)
// WARNING: Removing unreachable block (ram,0x0001804aae5b)
// WARNING: Removing unreachable block (ram,0x0001804aae67)
// WARNING: Removing unreachable block (ram,0x0001804aaf19)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804aac20(longlong param_1,longlong param_2)
void FUN_1804aac20(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  int32_t uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int8_t *puVar7;
  longlong lVar8;
  byte *pbVar9;
  int iVar10;
  void *puVar11;
  longlong lVar12;
  uint64_t uVar13;
  int8_t auStack_488 [32];
  char acStack_468 [8];
  void *puStack_460;
  int8_t *puStack_458;
  int32_t uStack_450;
  ulonglong uStack_448;
  void *puStack_440;
  longlong lStack_438;
  int32_t uStack_430;
  ulonglong uStack_428;
  uint64_t uStack_420;
  int8_t *puStack_418;
  int iStack_40c;
  longlong alStack_408 [3];
  int8_t auStack_3f0 [8];
  int8_t auStack_3e8 [120];
  longlong lStack_370;
  int8_t auStack_350 [104];
  void *puStack_2e8;
  void *puStack_2e0;
  char acStack_c8 [128];
  ulonglong uStack_48;
  
  uStack_420 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_488;
  FUN_18005d260(param_2,*(uint64_t *)(param_2 + 0x10));
  *(longlong *)param_2 = param_2;
  *(longlong *)(param_2 + 8) = param_2;
  uVar13 = 0;
  *(uint64_t *)(param_2 + 0x10) = 0;
  *(int8_t *)(param_2 + 0x18) = 0;
  *(uint64_t *)(param_2 + 0x20) = 0;
  FUN_1800c4720(alStack_408);
  puStack_440 = &unknown_var_3456_ptr;
  uStack_428 = 0;
  lStack_438 = 0;
  uStack_430 = 0;
  puVar11 = &system_buffer_ptr;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar11 = *(void **)(param_1 + 8);
  }
  FUN_180628040(&puStack_440,&unknown_var_5232_ptr,puVar11,&unknown_var_5256_ptr);
  FUN_180624440(&puStack_2e8,&puStack_440);
  puVar11 = &system_buffer_ptr;
  if (puStack_2e0 != (void *)0x0) {
    puVar11 = puStack_2e0;
  }
  lVar5 = FUN_1800c4800(auStack_3f0,puVar11,1);
  if (lVar5 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((longlong)alStack_408 + (longlong)*(int *)(alStack_408[0] + 4),2);
  }
  else {
    _clear___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((longlong)alStack_408 + (longlong)*(int *)(alStack_408[0] + 4),0,0);
  }
  if (lStack_370 != 0) {
    plVar6 = (longlong *)
             _getline___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_PEAD_J_Z
                       (alStack_408,acStack_c8,0x80);
    bVar1 = *(byte *)((longlong)*(int *)(*plVar6 + 4) + 0x10 + (longlong)plVar6);
    while ((bVar1 & 6) == 0) {
      puStack_460 = &unknown_var_3456_ptr;
      uStack_448 = 0;
      puStack_458 = (int8_t *)0x0;
      uStack_450 = 0;
      lVar5 = -1;
      do {
        lVar8 = lVar5;
        lVar5 = lVar8 + 1;
      } while (acStack_c8[lVar8 + 1] != '\0');
      if ((int)(lVar8 + 1) != 0) {
        iVar10 = (int)lVar8 + 2;
        iVar2 = iVar10;
        if (iVar10 < 0x10) {
          iVar2 = 0x10;
        }
        puVar7 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar2,0x13);
        *puVar7 = 0;
        puStack_458 = puVar7;
        uVar3 = FUN_18064e990(puVar7);
        uStack_448 = CONCAT44(uStack_448._4_4_,uVar3);
                    // WARNING: Subroutine does not return
        memcpy(puVar7,acStack_c8,iVar10);
      }
      uStack_450 = 0;
      lVar5 = FUN_18062b420(_DAT_180c8ed18,0x40,*(int8_t *)(param_2 + 0x28));
      FUN_180627ae0(lVar5 + 0x20,&puStack_460);
      lVar8 = FUN_1800590b0(param_2,acStack_468,lVar5 + 0x20);
      if (acStack_468[0] != '\0') {
        if (lVar8 == param_2) goto LAB_1804aaef2;
        if (*(int *)(lVar8 + 0x30) == 0) goto LAB_1804aaee7;
        if (*(int *)(lVar5 + 0x30) == 0) goto LAB_1804aaef2;
        pbVar9 = *(byte **)(lVar8 + 0x28);
        lVar12 = *(longlong *)(lVar5 + 0x28) - (longlong)pbVar9;
        goto LAB_1804aaed0;
      }
      FUN_18005d1f0();
      puStack_458 = (int8_t *)0x0;
      uStack_448 = uStack_448 & 0xffffffff00000000;
      puStack_460 = &unknown_var_720_ptr;
      plVar6 = (longlong *)
               _getline___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_PEAD_J_Z
                         (alStack_408,acStack_c8,0x80);
      bVar1 = *(byte *)((longlong)*(int *)(*plVar6 + 4) + 0x10 + (longlong)plVar6);
    }
    lVar5 = FUN_1800a19c0(auStack_3f0);
    if (lVar5 == 0) {
      _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
                ((longlong)alStack_408 + (longlong)*(int *)(alStack_408[0] + 4),2);
    }
  }
  puStack_2e8 = &unknown_var_720_ptr;
  puStack_440 = &unknown_var_3456_ptr;
  if (lStack_438 == 0) {
    lStack_438 = 0;
    uStack_428 = uStack_428 & 0xffffffff00000000;
    puStack_440 = &unknown_var_720_ptr;
    puStack_418 = auStack_350;
    *(void **)((longlong)alStack_408 + (longlong)*(int *)(alStack_408[0] + 4)) = &unknown_var_1768_ptr
    ;
    *(int *)((longlong)&iStack_40c + (longlong)*(int *)(alStack_408[0] + 4)) =
         *(int *)(alStack_408[0] + 4) + -0xb8;
    FUN_18009fb60(auStack_3f0);
    __1__basic_iostream_DU__char_traits_D_std___std__UEAA_XZ(auStack_3e8);
    __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(auStack_350);
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_488);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
  while (pbVar9 = pbVar9 + 1, uVar4 != 0) {
LAB_1804aaed0:
    bVar1 = *pbVar9;
    uVar4 = (uint)pbVar9[lVar12];
    if (bVar1 != uVar4) break;
  }
  if ((int)(bVar1 - uVar4) < 1) {
LAB_1804aaee7:
    uVar13 = 1;
  }
LAB_1804aaef2:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar5,lVar8,param_2,uVar13);
}






// 函数: void FUN_1804ab030(longlong *param_1)
void FUN_1804ab030(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    FUN_1804ac5c0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804ab050(longlong *param_1)
void FUN_1804ab050(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    FUN_1804ac4d0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




