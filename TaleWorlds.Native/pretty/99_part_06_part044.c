#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part044.c - 11 个函数

// 函数: void FUN_1803d1940(longlong param_1,longlong *param_2,uint64_t param_3,int8_t *param_4,
void FUN_1803d1940(longlong param_1,longlong *param_2,uint64_t param_3,int8_t *param_4,
                  uint param_5)

{
  longlong **pplVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  longlong lVar9;
  uint64_t uVar10;
  longlong lVar11;
  longlong *plVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  void *puVar15;
  uint64_t *puVar16;
  char cVar17;
  int8_t auStack_218 [32];
  char acStack_1f8 [4];
  int iStack_1f4;
  longlong *plStack_1e8;
  uint64_t uStack_1e0;
  longlong **pplStack_1d8;
  int8_t uStack_1d0;
  longlong *plStack_1c8;
  ulonglong uStack_1c0;
  int8_t *puStack_1b8;
  uint64_t uStack_1b0;
  longlong alStack_1a8 [12];
  int8_t auStack_148 [32];
  int8_t auStack_128 [32];
  uint uStack_108;
  int32_t uStack_104;
  int iStack_100;
  int8_t auStack_f8 [32];
  longlong *plStack_d8;
  int8_t auStack_98 [32];
  int8_t auStack_78 [32];
  uint uStack_58;
  int32_t uStack_54;
  int iStack_50;
  ulonglong uStack_48;
  
  uStack_1b0 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_218;
  iStack_1f4 = (int)param_2[3];
  puVar16 = (uint64_t *)(param_2[4] + 0x368);
  uStack_1c0 = *(ulonglong *)(*param_2 + 0x15b8);
  plStack_1c8 = (longlong *)CONCAT44(plStack_1c8._4_4_,param_5);
  puVar7 = *(uint64_t **)(param_2[4] + 0x378);
  puVar14 = puVar16;
  if (puVar7 == (uint64_t *)0x0) {
LAB_1803d19ff:
    puVar13 = puVar16;
  }
  else {
    do {
      if ((*(uint *)(puVar7 + 4) < param_5) ||
         ((*(uint *)(puVar7 + 4) <= param_5 && ((ulonglong)puVar7[5] < uStack_1c0)))) {
        bVar4 = true;
        puVar8 = (uint64_t *)*puVar7;
      }
      else {
        bVar4 = false;
        puVar8 = (uint64_t *)puVar7[1];
      }
      puVar13 = puVar7;
      if (bVar4) {
        puVar13 = puVar14;
      }
      puVar7 = puVar8;
      puVar14 = puVar13;
    } while (puVar8 != (uint64_t *)0x0);
    if (((puVar13 == puVar16) || (param_5 < *(uint *)(puVar13 + 4))) ||
       ((param_5 <= *(uint *)(puVar13 + 4) && (uStack_1c0 < (ulonglong)puVar13[5]))))
    goto LAB_1803d19ff;
  }
  acStack_1f8[0] = '\0';
  puStack_1b8 = param_4;
  if (puVar13 != puVar16) {
    pplStack_1d8 = (longlong **)0x180c91dc8;
    uStack_1d0 = 1;
    AcquireSRWLockShared(0x180c91dc8);
    plStack_1e8 = (longlong *)param_2[1];
    uVar3 = param_2[2];
    lVar11 = puVar13[7];
    plVar12 = *(longlong **)
               (lVar11 + (((uVar3 & 0xffffffff) + (longlong)plStack_1e8) %
                         (ulonglong)*(uint *)(puVar13 + 8)) * 8);
    if (plVar12 != (longlong *)0x0) {
      uStack_1e0._4_2_ = (short)(uVar3 >> 0x20);
      do {
        if ((((longlong *)*plVar12 == plStack_1e8) && ((int)plVar12[1] == (int)uVar3)) &&
           (*(short *)((longlong)plVar12 + 0xc) == uStack_1e0._4_2_)) {
          lVar9 = puVar13[8];
          goto LAB_1803d1a92;
        }
        plVar12 = (longlong *)plVar12[3];
      } while (plVar12 != (longlong *)0x0);
    }
    lVar9 = puVar13[8];
    plVar12 = *(longlong **)(lVar11 + lVar9 * 8);
LAB_1803d1a92:
    if (plVar12 == *(longlong **)(lVar11 + lVar9 * 8)) {
      lVar11 = 0;
    }
    else {
      lVar11 = plVar12[2];
    }
    uStack_1e0 = uVar3;
    ReleaseSRWLockShared(0x180c91dc8);
    cVar17 = '\0';
    if (lVar11 != 0) goto LAB_1803d1b14;
  }
  pplStack_1d8 = (longlong **)0x180c91dc8;
  uStack_1d0 = 0;
  AcquireSRWLockExclusive(0x180c91dc8);
  uStack_1d0 = 1;
  uVar10 = FUN_1803d8cd0(puVar16,&plStack_1c8);
  plStack_1c8 = (longlong *)param_2[1];
  uStack_1c0 = param_2[2];
  lVar11 = FUN_18029a790(uVar10,&plStack_1c8,acStack_1f8);
  ReleaseSRWLockExclusive(0x180c91dc8);
  cVar17 = acStack_1f8[0];
LAB_1803d1b14:
  if (*(char *)(lVar11 + 0x81) == '\0') {
    if (cVar17 != '\0') {
      FUN_1801eb9b0(auStack_f8);
      uVar2 = *(uint *)(*param_2 + 0x1588);
      uVar10 = FUN_18029a300(auStack_f8,param_2);
      iStack_50 = (uVar2 >> 9 & 1) * 8 + 0x11;
      uStack_58 = param_5;
      plVar12 = (longlong *)param_2[4];
      if (plVar12 != (longlong *)0x0) {
        plStack_1e8 = plVar12;
        uVar10 = (**(code **)(*plVar12 + 0x28))(plVar12);
      }
      plStack_1e8 = plStack_d8;
      if (plStack_d8 != (longlong *)0x0) {
        lVar9 = *plStack_d8;
        plStack_d8 = plVar12;
        uVar10 = (**(code **)(lVar9 + 0x38))();
        plVar12 = plStack_d8;
      }
      plStack_d8 = plVar12;
      cVar5 = FUN_1801d8920(uVar10,auStack_f8);
      if ((cVar5 == '\0') && (system_data_2847 == '\0')) {
        puVar15 = &system_buffer_ptr;
        if (*(void **)(*param_2 + 0x18) != (void *)0x0) {
          puVar15 = *(void **)(*param_2 + 0x18);
        }
                    // WARNING: Subroutine does not return
        FUN_180062300(system_message_context,&unknown_var_776_ptr,puVar15);
      }
      if ((iStack_1f4 == 2) || (*system_global_data_ptr != 0)) {
        pplVar1 = (longlong **)(lVar11 + 0x30);
        pplStack_1d8 = pplVar1;
        iVar6 = _Mtx_lock(pplVar1);
        if (iVar6 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar6);
        }
        plStack_1c8 = alStack_1a8;
        FUN_18009e8e0(alStack_1a8,auStack_f8);
        FUN_180627ae0(auStack_148,auStack_98);
        uVar10 = FUN_180627ae0(auStack_128,auStack_78);
        uStack_108 = uStack_58;
        uStack_104 = uStack_54;
        iStack_100 = iStack_50;
        FUN_1801c8b50(uVar10,lVar11,alStack_1a8);
        iVar6 = _Mtx_unlock(pplVar1);
        if (iVar6 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar6);
        }
      }
      else {
        uVar10 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,3);
        plVar12 = (longlong *)FUN_18041bf60(uVar10,lVar11,auStack_f8);
        plStack_1c8 = plVar12;
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x28))(plVar12);
        }
        uVar10 = system_context_ptr;
        plStack_1e8 = plVar12;
        if ((*(int *)(system_module_state + 0x620) == 0) &&
           (*(char *)((longlong)system_global_data_ptr + 9) == '\0')) {
          pplStack_1d8 = &plStack_1e8;
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0x28))(plVar12);
          }
          FUN_18005e450(uVar10,&plStack_1e8);
        }
        else {
          pplStack_1d8 = &plStack_1e8;
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0x28))(plVar12);
          }
          FUN_18005e110(uVar10,&plStack_1e8);
        }
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x38))(plVar12);
        }
      }
      FUN_1801c92a0(auStack_f8);
    }
    if (iStack_1f4 == 0) {
      *puStack_1b8 = 1;
      if (param_1 != 0) {
        *(int *)(param_1 + 0x124ec) = *(int *)(param_1 + 0x124ec) + 1;
      }
    }
    else if (iStack_1f4 == 1) {
      if (param_1 != 0) {
        *(int *)(param_1 + 0x124ec) = *(int *)(param_1 + 0x124ec) + 1;
      }
    }
    else if ((iStack_1f4 == 2) && (cVar17 == '\0')) {
      FUN_1801d7510(system_global_data_ptr);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_218);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803d1f30(longlong param_1,int8_t param_2)
void FUN_1803d1f30(longlong param_1,int8_t param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int8_t auStack_a8 [32];
  longlong *plStack_88;
  uint64_t uStack_80;
  longlong lStack_78;
  ulonglong uStack_38;
  
  uStack_80 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_a8;
  *(int32_t *)(param_1 + 0xb0) = 0;
  *(uint64_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(uint64_t *)(param_1 + 0x90) = 0;
  *(uint64_t *)(param_1 + 0x98) = 0;
  *(uint64_t *)(param_1 + 0xa0) = 0;
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(uint64_t *)(param_1 + 0xb8) = 0;
  *(uint64_t *)(param_1 + 0x140) = 0;
  plStack_88 = (longlong *)(param_1 + 0x148);
  *plStack_88 = 0;
  *(uint64_t *)(param_1 + 0x150) = 0;
  *(uint64_t *)(param_1 + 0x158) = 0;
  *(int32_t *)(param_1 + 0x160) = 3;
  lVar3 = 0x10;
  lStack_78 = param_1;
  do {
    func_0x000180074f10();
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(uint64_t *)(param_1 + 0x4e0) = 0;
  *(uint64_t *)(param_1 + 0x4d8) = 0;
  *(uint64_t *)(param_1 + 0x4c0) = 0;
  *(uint64_t *)(param_1 + 0x4c8) = 0;
  *(uint64_t *)(param_1 + 0x4e8) = 0;
  *(int32_t *)(param_1 + 0x4f0) = 0x461c4000;
  *(int32_t *)(param_1 + 0x4f4) = 0x3f800000;
  *(int32_t *)(param_1 + 0x4f8) = 0x41a00000;
  *(uint64_t *)(param_1 + 0x4d0) = 0;
  lVar3 = param_1 + 0x578;
  *(uint64_t *)(param_1 + 0x590) = 0;
  *(int32_t *)(param_1 + 0x5a0) = 3;
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(param_1 + 0x580) = lVar3;
  *(uint64_t *)(param_1 + 0x588) = 0;
  *(int8_t *)(param_1 + 0x590) = 0;
  *(uint64_t *)(param_1 + 0x598) = 0;
  lVar3 = param_1 + 0x5a8;
  *(uint64_t *)(param_1 + 0x5c0) = 0;
  *(int32_t *)(param_1 + 0x5d0) = 3;
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(param_1 + 0x5b0) = lVar3;
  *(uint64_t *)(param_1 + 0x5b8) = 0;
  *(int8_t *)(param_1 + 0x5c0) = 0;
  *(uint64_t *)(param_1 + 0x5c8) = 0;
  plVar1 = (longlong *)(param_1 + 0x5e8);
  *plVar1 = (longlong)&unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 0x5f0) = 0;
  *(int32_t *)(param_1 + 0x5f8) = 0;
  *plVar1 = (longlong)&unknown_var_3456_ptr;
  *(uint64_t *)(param_1 + 0x600) = 0;
  *(uint64_t *)(param_1 + 0x5f0) = 0;
  *(int32_t *)(param_1 + 0x5f8) = 0;
  plVar2 = (longlong *)(param_1 + 0x608);
  *plVar2 = (longlong)&unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 0x610) = 0;
  *(int32_t *)(param_1 + 0x618) = 0;
  *plVar2 = (longlong)&unknown_var_3456_ptr;
  *(uint64_t *)(param_1 + 0x620) = 0;
  *(uint64_t *)(param_1 + 0x610) = 0;
  *(int32_t *)(param_1 + 0x618) = 0;
  *(uint64_t *)(param_1 + 0xc0) = 0;
  *(uint64_t *)(param_1 + 0x500) = 0;
  *(uint64_t *)(param_1 + 200) = 0;
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(uint64_t *)(param_1 + 0x508) = 0;
  *(uint64_t *)(param_1 + 0xd8) = 0;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(uint64_t *)(param_1 + 0x510) = 0;
  *(uint64_t *)(param_1 + 0xe8) = 0;
  *(uint64_t *)(param_1 + 0xf0) = 0;
  *(uint64_t *)(param_1 + 0x518) = 0;
  *(uint64_t *)(param_1 + 0xf8) = 0;
  *(uint64_t *)(param_1 + 0x100) = 0;
  *(uint64_t *)(param_1 + 0x520) = 0;
  *(uint64_t *)(param_1 + 0x108) = 0;
  *(uint64_t *)(param_1 + 0x110) = 0;
  *(uint64_t *)(param_1 + 0x528) = 0;
  *(uint64_t *)(param_1 + 0x118) = 0;
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x530) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  *(uint64_t *)(param_1 + 0x130) = 0;
  *(uint64_t *)(param_1 + 0x538) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  plStack_88 = plVar2;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
  (**(code **)(*plVar2 + 0x10))(plVar2,&system_buffer_ptr);
  *(uint64_t *)(param_1 + 0x5d8) = 0;
  *(int8_t *)(param_1 + 0x5e0) = param_2;
  *(int8_t *)(param_1 + 0x561) = 0;
  *(uint64_t *)(param_1 + 0x168) = 0;
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x180,0,0x140);
}






// 函数: void FUN_1803d22d0(longlong param_1)
void FUN_1803d22d0(longlong param_1)

{
  *(uint64_t *)(param_1 + 0xc0) = 0;
  *(uint64_t *)(param_1 + 200) = 0;
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(uint64_t *)(param_1 + 0xd8) = 0;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(uint64_t *)(param_1 + 0xe8) = 0;
  *(uint64_t *)(param_1 + 0xf0) = 0;
  *(uint64_t *)(param_1 + 0xf8) = 0;
  *(uint64_t *)(param_1 + 0x100) = 0;
  *(uint64_t *)(param_1 + 0x108) = 0;
  *(uint64_t *)(param_1 + 0x110) = 0;
  *(uint64_t *)(param_1 + 0x118) = 0;
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  *(uint64_t *)(param_1 + 0x130) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  FUN_1800ed380(param_1 + 0x4c0);
  *(uint64_t *)(param_1 + 0x608) = &unknown_var_3456_ptr;
  if (*(longlong *)(param_1 + 0x610) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x610) = 0;
  *(int32_t *)(param_1 + 0x620) = 0;
  *(uint64_t *)(param_1 + 0x608) = &unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 0x5e8) = &unknown_var_3456_ptr;
  if (*(longlong *)(param_1 + 0x5f0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x5f0) = 0;
  *(int32_t *)(param_1 + 0x600) = 0;
  *(uint64_t *)(param_1 + 0x5e8) = &unknown_var_720_ptr;
  FUN_18004b730();
  FUN_18004b730();
  FUN_1800ed380(param_1 + 0x4c0);
  FUN_180057830();
  if (*(longlong **)(param_1 + 0x140) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x140) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x38))();
  }
  return;
}






// 函数: void FUN_1803d2450(longlong param_1,longlong param_2,longlong param_3)
void FUN_1803d2450(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int32_t uVar2;
  longlong lVar3;
  int32_t *puVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  if (0 < *(int *)(param_3 + 0x78)) {
    lVar6 = 0;
    puVar4 = (int32_t *)(param_1 + 0x180);
    lVar3 = (longlong)*(int *)(*(longlong *)(param_3 + 0x68) + 0x3054);
    do {
      if ((((*(char *)(*(longlong *)
                        (*(longlong *)
                          (*(longlong *)(*(longlong *)(param_3 + 0x68) + 0x60b20) + lVar6) + 8 +
                        lVar3 * 8) + 0x380) == '\0') ||
           (lVar1 = *(longlong *)(param_3 + 0x80 + lVar6), *(char *)(lVar1 + 0x152) == '\0')) ||
          (*(char *)(lVar1 + 0x150) == '\x01')) ||
         ((*(uint *)(param_2 + 0x860 + lVar3 * 4) >> ((byte)iVar5 & 0x1f) & 1) == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      *puVar4 = uVar2;
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar5 < *(int *)(param_3 + 0x78));
  }
  return;
}






// 函数: void FUN_1803d246b(longlong param_1,longlong param_2,uint64_t param_3,int param_4)
void FUN_1803d246b(longlong param_1,longlong param_2,uint64_t param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int32_t uVar3;
  longlong in_RAX;
  int32_t *puVar4;
  longlong in_R10;
  longlong in_R11;
  
  puVar4 = (int32_t *)(param_1 + 0x180);
  iVar1 = *(int *)(in_RAX + 0x3054);
  do {
    if ((((*(char *)(*(longlong *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(in_R11 + 0x68) + 0x60b20) + in_R10)
                       + 8 + (longlong)iVar1 * 8) + 0x380) == '\0') ||
         (lVar2 = *(longlong *)(in_R11 + 0x80 + in_R10), *(char *)(lVar2 + 0x152) == '\0')) ||
        (*(char *)(lVar2 + 0x150) == '\x01')) ||
       ((*(uint *)(param_2 + 0x860 + (longlong)iVar1 * 4) >> ((byte)param_4 & 0x1f) & 1) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *puVar4 = uVar3;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
    in_R10 = in_R10 + 8;
  } while (param_4 < *(int *)(in_R11 + 0x78));
  return;
}






// 函数: void FUN_1803d24e8(void)
void FUN_1803d24e8(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803d24f0(longlong param_1,uint64_t param_2)
void FUN_1803d24f0(longlong param_1,uint64_t param_2)

{
  int32_t uVar1;
  longlong lVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  int8_t auStack_2c8 [48];
  void *puStack_298;
  int32_t *puStack_290;
  int32_t uStack_288;
  uint64_t uStack_280;
  int8_t auStack_258 [8];
  longlong lStack_250;
  uint uStack_248;
  void *puStack_228;
  longlong lStack_220;
  int32_t uStack_210;
  uint64_t uStack_1e0;
  uint64_t uStack_1d0;
  ulonglong uStack_48;
  
  uStack_1d0 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_2c8;
  uStack_1e0 = param_2;
  FUN_180627ae0(auStack_258,*(uint64_t *)(param_1 + 0x168));
  lVar2 = FUN_1803d0880(param_1,&puStack_228,*(uint64_t *)(param_1 + 0x170));
  if (0 < *(int *)(lVar2 + 0x10)) {
    FUN_1806277c0(auStack_258,uStack_248 + *(int *)(lVar2 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)uStack_248 + lStack_250,*(uint64_t *)(lVar2 + 8),
           (longlong)(*(int *)(lVar2 + 0x10) + 1));
  }
  puStack_228 = &unknown_var_3456_ptr;
  if (lStack_220 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_220 = 0;
  uStack_210 = 0;
  puStack_228 = &unknown_var_720_ptr;
  uVar3 = FUN_1800bfec0();
  puStack_298 = &unknown_var_3456_ptr;
  uStack_280 = 0;
  puStack_290 = (int32_t *)0x0;
  uStack_288 = 0;
  puVar4 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x20,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_290 = puVar4;
  uVar1 = FUN_18064e990(puVar4);
  uStack_280 = CONCAT44(uStack_280._4_4_,uVar1);
  *puVar4 = 0x5f657375;
  puVar4[1] = 0x616e7964;
  puVar4[2] = 0x5f63696d;
  puVar4[3] = 0x676e6973;
  puVar4[4] = 0x705f656c;
  puVar4[5] = 0x5f737361;
  puVar4[6] = 0x72726574;
  puVar4[7] = 0x6e6961;
  uStack_288 = 0x1f;
  FUN_180240430(uVar3,&puStack_298,1);
  puStack_298 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803d3f10(longlong param_1)
void FUN_1803d3f10(longlong param_1)

{
  int32_t uVar1;
  longlong lVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  int8_t auStack_1b8 [56];
  void *puStack_180;
  longlong lStack_178;
  int32_t uStack_168;
  int8_t auStack_158 [8];
  longlong lStack_150;
  uint uStack_148;
  uint64_t uStack_138;
  void *puStack_130;
  int32_t *puStack_128;
  int32_t uStack_120;
  uint64_t uStack_118;
  ulonglong uStack_38;
  
  uStack_138 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1b8;
  FUN_180627ae0(auStack_158,*(uint64_t *)(param_1 + 0x168));
  lVar2 = FUN_1803d0880(param_1,&puStack_180,*(uint64_t *)(param_1 + 0x170));
  if (0 < *(int *)(lVar2 + 0x10)) {
    FUN_1806277c0(auStack_158,uStack_148 + *(int *)(lVar2 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)uStack_148 + lStack_150,*(uint64_t *)(lVar2 + 8),
           (longlong)(*(int *)(lVar2 + 0x10) + 1));
  }
  puStack_180 = &unknown_var_3456_ptr;
  if (lStack_178 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_178 = 0;
  uStack_168 = 0;
  puStack_180 = &unknown_var_720_ptr;
  uVar3 = FUN_1800bfec0();
  puStack_130 = &unknown_var_3456_ptr;
  uStack_118 = 0;
  puStack_128 = (int32_t *)0x0;
  uStack_120 = 0;
  puVar4 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x13,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_128 = puVar4;
  uVar1 = FUN_18064e990(puVar4);
  uStack_118 = CONCAT44(uStack_118._4_4_,uVar1);
  *puVar4 = 0x656b6162;
  puVar4[1] = 0x7265745f;
  puVar4[2] = 0x6e696172;
  puVar4[3] = 0x6c6f635f;
  *(int16_t *)(puVar4 + 4) = 0x726f;
  *(int8_t *)((longlong)puVar4 + 0x12) = 0;
  uStack_120 = 0x12;
  FUN_180240430(uVar3,&puStack_130,1);
  puStack_130 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803d5410(int *param_1,longlong *param_2,uint64_t param_3,int param_4)
void FUN_1803d5410(int *param_1,longlong *param_2,uint64_t param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  char *pcVar5;
  int8_t auStack_118 [32];
  int iStack_f8;
  int iStack_f4;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  int iStack_e0;
  int iStack_dc;
  uint64_t uStack_d8;
  longlong lStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  int iStack_28;
  int8_t uStack_24;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_118;
  FUN_1801eb9b0(&lStack_c8);
  uVar2 = *(uint *)(*param_2 + 0x1588);
  FUN_18029a300(&lStack_c8,param_2);
  iStack_20 = (uVar2 >> 9 & 1) * 8 + 0x11;
  pcVar5 = "";
  if (*(char **)(lStack_c8 + 0x18) != (char *)0x0) {
    pcVar5 = *(char **)(lStack_c8 + 0x18);
  }
  iStack_f8 = 0x1505;
  cVar1 = *pcVar5;
  while (cVar1 != '\0') {
    pcVar5 = pcVar5 + 1;
    iStack_f8 = iStack_f8 * 0x21 + (int)cVar1;
    cVar1 = *pcVar5;
  }
  uStack_f0 = uStack_c0;
  uVar3 = uStack_f0;
  uStack_e8 = uStack_b8;
  uVar4 = uStack_e8;
  iStack_e0 = CONCAT31(iStack_e0._1_3_,uStack_24);
  uStack_f0._0_4_ = (int)uStack_c0;
  uStack_f0._4_4_ = (int)((ulonglong)uStack_c0 >> 0x20);
  *param_1 = iStack_f8;
  param_1[1] = iStack_f4;
  param_1[2] = (int)uStack_f0;
  param_1[3] = uStack_f0._4_4_;
  uStack_e8._0_4_ = (int)uStack_b8;
  uStack_e8._4_4_ = (int)((ulonglong)uStack_b8 >> 0x20);
  param_1[4] = (int)uStack_e8;
  param_1[5] = uStack_e8._4_4_;
  param_1[6] = iStack_e0;
  param_1[7] = param_4;
  uStack_f0 = uVar3;
  uStack_e8 = uVar4;
  iStack_dc = param_4;
  iStack_28 = param_4;
  FUN_1801c92a0(&lStack_c8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803d5530(longlong *param_1)
void FUN_1803d5530(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint64_t uVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  uint64_t uStackX_8;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  
  iVar6 = _Mtx_lock(0x180c91f70);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  lVar1 = param_1[4];
  iVar6 = (int)param_1[5];
  if (((*(longlong *)(lVar1 + 0x68) == 0) ||
      (*(char *)(*(longlong *)(lVar1 + 0x68) + 0x2966) == '\0')) &&
     (param_1[1] - *param_1 >> 3 != 0)) {
    if (iVar6 == 3) {
      iVar6 = 0;
    }
    else if (iVar6 == 5) {
      iVar6 = 1;
    }
    else if (iVar6 == 7) {
      iVar6 = 2;
    }
    else {
      iVar6 = (int)uStackX_8;
    }
    plVar2 = *(longlong **)*param_1;
    if (*(int *)((longlong)plVar2 + 0x324) == 1) {
      uVar3 = *(uint64_t *)(system_message_buffer + 0x1cd8);
      lVar7 = *(longlong *)(*(longlong *)(system_message_buffer + 0x121e0) + 0x1d8);
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else if (system_main_module_state != 0) {
        *(longlong *)(*(longlong *)(system_message_buffer + 0x121e0) + 0x340) =
             (longlong)*(int *)(system_main_module_state + 0x224);
      }
      FUN_18029ad30(uVar3,0,lVar7);
      lVar7 = system_message_buffer;
      *(uint64_t *)(*(longlong *)(system_message_buffer + 0x1cd8) + 0x83f0) = 0;
      FUN_18029de40(*(uint64_t *)(lVar7 + 0x1cd8),1);
      plStackX_18 = &uStackX_8;
      uStackX_8 = 0;
      plStackX_10 = plVar2;
      (**(code **)(*plVar2 + 0x28))(plVar2);
      FUN_1800e44b0();
      plVar5 = plStackX_20;
      lVar7 = (longlong)iVar6;
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x28))(plStackX_20);
      }
      plVar4 = *(longlong **)(lVar1 + 0x120 + lVar7 * 8);
      *(longlong **)(lVar1 + 0x120 + lVar7 * 8) = plVar5;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x38))();
      }
      plStackX_18 = plVar2;
      (**(code **)(*plVar2 + 0x28))(plVar2);
      FUN_1802435e0();
      FUN_18023b050(plVar2);
      LOCK();
      *(int32_t *)(plVar2 + 0x70) = 0;
      UNLOCK();
      plVar2 = *(longlong **)(lVar1 + 0x138 + lVar7 * 8);
      *(uint64_t *)(lVar1 + 0x138 + lVar7 * 8) = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
    }
  }
  FUN_180057830(param_1);
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

code * FUN_1803d5780(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint64_t *puVar3;
  code *pcVar4;
  code *apcStack_30 [2];
  code *pcStack_20;
  void *puStack_18;
  
  plVar2 = *(longlong **)(param_1 + 0x9650);
  if ((*(int *)(param_1 + 0x124ec) == 0) && (*(int *)(param_1 + 0x124e8) == 0)) {
    puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x30,8,3,0xfffffffffffffffe);
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(int32_t *)(puVar3 + 3) = 3;
    if ((*(longlong *)(param_1 + 0x96b8) - *(longlong *)(param_1 + 0x96b0) & 0xfffffffffffffff8U) ==
        8) {
      FUN_1800b88d0(puVar3);
    }
    puVar3[4] = *plVar2;
    *(int *)(puVar3 + 5) = (int)plVar2[1];
    *(int32_t *)((longlong)puVar3 + 0x2c) = *(int32_t *)((longlong)plVar2 + 0xc);
    pcStack_20 = (code *)&unknown_var_4992_ptr;
    puStack_18 = &unknown_var_7008_ptr;
    apcStack_30[0] = FUN_1803d5530;
    (*(code *)&unknown_var_7008_ptr)(puVar3,apcStack_30);
    if (pcStack_20 != (code *)0x0) {
      pcVar4 = (code *)(*pcStack_20)(apcStack_30,0,0);
      return pcVar4;
    }
  }
  else {
    LOCK();
    if (*(int *)(*plVar2 + 0x10) == 1) {
      *(int *)(*plVar2 + 0x10) = 8;
    }
    UNLOCK();
    pcStack_20 = (code *)0x3;
    LOCK();
    uVar1 = *(uint *)(*plVar2 + 0x10);
    if (uVar1 == 3) {
      *(uint *)(*plVar2 + 0x10) = 8;
    }
    else {
      pcStack_20 = (code *)(ulonglong)uVar1;
    }
    UNLOCK();
  }
  return pcStack_20;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803d58e0(longlong param_1,uint64_t param_2,uint64_t param_3)
void FUN_1803d58e0(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  int8_t auStack_408 [48];
  int32_t uStack_3d8;
  int32_t uStack_3d4;
  int32_t uStack_3d0;
  int32_t uStack_3cc;
  uint64_t uStack_3b8;
  uint64_t uStack_370;
  uint64_t uStack_218;
  ulonglong uStack_88;
  
  uStack_218 = 0xfffffffffffffffe;
  uStack_88 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_408;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x68) + 0x10);
  if (iVar1 == 0) {
LAB_1803d59da:
    uStack_3d4 = 1;
    uStack_3cc = 2;
    uStack_3d8 = 2;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 4) {
        uStack_3d4 = 5;
        uStack_3cc = 6;
        uStack_3d8 = 4;
        uStack_3d0 = 1;
        goto LAB_1803d59ef;
      }
      if (iVar1 == 6) {
        uStack_3d4 = 7;
        uStack_3cc = 9;
        uStack_3d0 = 2;
        uStack_3d8 = 5;
        goto LAB_1803d59ef;
      }
      if (iVar1 != 8) goto LAB_1803d59ef;
      goto LAB_1803d59da;
    }
    uStack_3d4 = 3;
    uStack_3cc = 4;
    uStack_3d8 = 3;
  }
  uStack_3d0 = 0;
LAB_1803d59ef:
  uStack_3b8 = param_2;
  uStack_370 = param_3;
  FUN_1803b8120(*(uint64_t *)(param_1 + 0x68),uStack_3d0);
                    // WARNING: Subroutine does not return
  FUN_180062300(system_message_context,&unknown_var_5704_ptr);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




