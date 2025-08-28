#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part158.c - 3 个函数

// 函数: void FUN_1803663f0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803663f0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint64_t uStackX_8;
  longlong lStack_50;
  longlong lStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  
  if (*(char *)(param_1 + 0xa8) != '\0') {
    lStack_50 = 0;
    lStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 3;
    uStackX_8 = *(uint64_t *)(param_1 + 0x18);
    FUN_1802e8c60(uStackX_8,&lStack_50,param_3,param_4,0xfffffffffffffffe);
    FUN_18005ea90(&lStack_50,&uStackX_8);
    iVar8 = 0;
    if (lStack_48 - lStack_50 >> 3 != 0) {
      lVar5 = 0;
      lVar4 = lStack_50;
      lVar7 = lStack_48;
      do {
        lVar1 = *(longlong *)(lVar5 + lVar4);
        cVar3 = FUN_1802eee20(lVar1,&unknown_var_4260_ptr);
        if ((cVar3 == '\0') &&
           (iVar6 = 0, *(longlong *)(lVar1 + 0xf8) - *(longlong *)(lVar1 + 0xf0) >> 3 != 0)) {
          do {
            plVar2 = *(longlong **)(lVar5 + *(longlong *)(lVar1 + 0xf0));
            (**(code **)(*plVar2 + 0x108))(plVar2,param_1 + 0x98);
            iVar6 = iVar6 + 1;
            lVar4 = lStack_50;
            lVar7 = lStack_48;
          } while ((ulonglong)(longlong)iVar6 <
                   (ulonglong)(*(longlong *)(lVar1 + 0xf8) - *(longlong *)(lVar1 + 0xf0) >> 3));
        }
        iVar8 = iVar8 + 1;
        lVar5 = lVar5 + 8;
      } while ((ulonglong)(longlong)iVar8 < (ulonglong)(lVar7 - lVar4 >> 3));
    }
    if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



uint64_t * FUN_180366540(uint64_t *param_1)

{
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_768_ptr;
  *(int32_t *)(param_1 + 2) = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 1) = 0;
  param_1[5] = 0;
  *param_1 = &unknown_var_9656_ptr;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(int32_t *)(param_1 + 9) = 3;
  *(int32_t *)(param_1 + 0x10) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(int8_t *)((longlong)param_1 + 0x84) = 0;
  param_1[0x11] = 0x3f8000003f800000;
  param_1[0x12] = 0x7f7fffff3f800000;
  return param_1;
}



uint64_t
FUN_1803665f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180627910(param_2,&unknown_var_7160_ptr,param_3,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180366630(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint64_t uVar7;
  longlong *plVar8;
  longlong lVar9;
  
  lVar9 = 0;
  uVar7 = FUN_18062b1e0(system_memory_pool_ptr,0x98,8,3,0,0xfffffffffffffffe);
  plVar8 = (longlong *)FUN_180366540(uVar7);
  *param_2 = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8);
  }
  lVar1 = *param_2;
  plVar8 = (longlong *)(lVar1 + 0x30);
  if (plVar8 != (longlong *)(param_1 + 0x30)) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar6 = (lVar2 - lVar3) / 0x50;
    lVar4 = *plVar8;
    if ((ulonglong)((*(longlong *)(lVar1 + 0x40) - lVar4) / 0x50) < uVar6) {
      if (uVar6 != 0) {
        lVar9 = FUN_18062b420(system_memory_pool_ptr,uVar6 * 0x50,*(int8_t *)(lVar1 + 0x48));
      }
      if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
        memmove(lVar9,lVar3,lVar2 - lVar3);
      }
      if (*plVar8 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *plVar8 = lVar9;
      lVar9 = uVar6 * 0x50 + lVar9;
      *(longlong *)(lVar1 + 0x38) = lVar9;
      *(longlong *)(lVar1 + 0x40) = lVar9;
    }
    else {
      uVar5 = (*(longlong *)(lVar1 + 0x38) - lVar4) / 0x50;
      if (uVar5 < uVar6) {
        lVar9 = uVar5 * 0x50 + lVar3;
        FUN_180368e20(lVar3,lVar9,lVar4,0x6666666666666667,1);
        uVar7 = FUN_180368e20(lVar9,lVar2,*(uint64_t *)(lVar1 + 0x38));
      }
      else {
        uVar7 = FUN_180368e20(lVar3,lVar2,lVar4,0x6666666666666667,1);
      }
      *(uint64_t *)(lVar1 + 0x38) = uVar7;
    }
  }
  return param_2;
}



uint64_t *
FUN_1803667e0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_1[6] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &unknown_var_768_ptr;
  param_1[5] = 0;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x98,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180366860(uint64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  
  puVar2 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0xb0,8,3,0xfffffffffffffffe);
  puVar3 = puVar2;
  FUN_1803456e0(puVar2,param_2,param_1);
  *puVar2 = &unknown_var_192_ptr;
  puVar1 = puVar2 + 0xe;
  puVar2[0x11] = 0;
  *(int32_t *)(puVar2 + 0x13) = 3;
  *puVar1 = puVar1;
  puVar2[0xf] = puVar1;
  puVar2[0x10] = 0;
  *(int8_t *)(puVar2 + 0x11) = 0;
  puVar2[0x12] = 0;
  puVar3[0x15] = param_2;
  return puVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180366900(longlong param_1)
void FUN_180366900(longlong param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  char *pcVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint64_t *puVar10;
  int8_t auStack_108 [32];
  uint64_t *puStack_e8;
  uint64_t *puStack_e0;
  uint64_t uStack_d8;
  int32_t uStack_d0;
  uint64_t uStack_c8;
  void *apuStack_b8 [18];
  ulonglong uStack_28;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_108;
  apuStack_b8[0] = &unknown_var_9264_ptr;
  apuStack_b8[1] = &unknown_var_9240_ptr;
  apuStack_b8[2] = &render_data_ptr;
  apuStack_b8[3] = &unknown_var_9352_ptr;
  apuStack_b8[4] = &unknown_var_9328_ptr;
  apuStack_b8[5] = &unknown_var_9304_ptr;
  apuStack_b8[6] = &unknown_var_9464_ptr;
  apuStack_b8[7] = &unknown_var_9448_ptr;
  apuStack_b8[8] = &unknown_var_9424_ptr;
  apuStack_b8[9] = &unknown_var_9408_ptr;
  apuStack_b8[10] = &unknown_var_9424_ptr;
  apuStack_b8[0xb] = &system_string1_ptr;
  apuStack_b8[0xc] = &unknown_var_9528_ptr;
  apuStack_b8[0xd] = &unknown_var_9504_ptr;
  apuStack_b8[0xe] = &unknown_var_9488_ptr;
  apuStack_b8[0xf] = &unknown_var_9632_ptr;
  apuStack_b8[0x10] = &unknown_var_9624_ptr;
  apuStack_b8[0x11] = &unknown_var_4260_ptr;
  puStack_e8 = (uint64_t *)0x0;
  puStack_e0 = (uint64_t *)0x0;
  uStack_d8 = 0;
  uStack_d0 = 3;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_180057980(param_1 + 0xd0,&puStack_e8,&system_data_c8e4);
  }
  puVar3 = puStack_e0;
  puVar2 = puStack_e8;
  lVar8 = 0;
  uVar9 = (longlong)puStack_e0 - (longlong)puStack_e8 >> 5;
  do {
    iVar7 = 0;
    puVar1 = puStack_e8;
    if (uVar9 != 0) {
      puVar10 = puStack_e8 + 1;
      do {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (apuStack_b8[lVar8][lVar6] != '\0');
        uVar5 = (uint)lVar6;
        if (uVar5 <= *(uint *)(puVar10 + 1)) {
          if ((int)uVar5 < 1) goto joined_r0x000180366abe;
          pcVar4 = (char *)*puVar10;
          lVar6 = -(longlong)pcVar4;
          while (*pcVar4 == pcVar4[lVar6 + (longlong)apuStack_b8[lVar8]]) {
            pcVar4 = pcVar4 + 1;
            if ((longlong)(int)uVar5 <= (longlong)pcVar4 + lVar6) goto joined_r0x000180366abe;
          }
        }
        iVar7 = iVar7 + 1;
        puVar10 = puVar10 + 4;
      } while ((ulonglong)(longlong)iVar7 < uVar9);
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 < 0x12);
joined_r0x000180366abe:
  for (; puVar1 != puVar3; puVar1 = puVar1 + 4) {
    (**(code **)*puVar1)(puVar1,0);
  }
  if (puVar2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_108);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180366b10(longlong param_1,longlong param_2)
void FUN_180366b10(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  int8_t auStack_118 [32];
  uint64_t *puStack_f8;
  uint64_t *puStack_f0;
  uint64_t uStack_e8;
  int32_t uStack_e0;
  uint64_t uStack_d8;
  void *apuStack_c8 [18];
  ulonglong uStack_38;
  ulonglong uVar11;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_118;
  if (param_1 != 0) {
    do {
      if (param_1 == param_2) break;
      apuStack_c8[0] = &unknown_var_9264_ptr;
      apuStack_c8[1] = &unknown_var_9240_ptr;
      apuStack_c8[2] = &render_data_ptr;
      apuStack_c8[3] = &unknown_var_9352_ptr;
      apuStack_c8[4] = &unknown_var_9328_ptr;
      apuStack_c8[5] = &unknown_var_9304_ptr;
      apuStack_c8[6] = &unknown_var_9464_ptr;
      apuStack_c8[7] = &unknown_var_9448_ptr;
      apuStack_c8[8] = &unknown_var_9424_ptr;
      apuStack_c8[9] = &unknown_var_9408_ptr;
      apuStack_c8[10] = &unknown_var_9424_ptr;
      apuStack_c8[0xb] = &system_string1_ptr;
      apuStack_c8[0xc] = &unknown_var_9528_ptr;
      apuStack_c8[0xd] = &unknown_var_9504_ptr;
      apuStack_c8[0xe] = &unknown_var_9488_ptr;
      apuStack_c8[0xf] = &unknown_var_9632_ptr;
      apuStack_c8[0x10] = &unknown_var_9624_ptr;
      apuStack_c8[0x11] = &unknown_var_4260_ptr;
      puStack_f8 = (uint64_t *)0x0;
      puStack_f0 = (uint64_t *)0x0;
      uStack_e8 = 0;
      uStack_e0 = 3;
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        FUN_180057980(param_1 + 0xd0,&puStack_f8,&system_data_c8e4);
      }
      puVar4 = puStack_f0;
      puVar3 = puStack_f8;
      uVar7 = (longlong)puStack_f0 - (longlong)puStack_f8 >> 5;
      uVar8 = 0;
      do {
        if (uVar7 != 0) {
          pcVar1 = apuStack_c8[uVar8];
          plVar9 = puStack_f8 + 1;
          uVar11 = 0;
          do {
            lVar5 = -1;
            do {
              lVar5 = lVar5 + 1;
            } while (pcVar1[lVar5] != '\0');
            uVar10 = (uint)lVar5;
            if (uVar10 <= *(uint *)(plVar9 + 1)) {
              puVar2 = puStack_f8;
              if ((int)uVar10 < 1) goto joined_r0x000180366cdc;
              pcVar6 = pcVar1;
              while (pcVar6[*plVar9 - (longlong)pcVar1] == *pcVar6) {
                pcVar6 = pcVar6 + 1;
                if ((longlong)(int)uVar10 <= (longlong)pcVar6 - (longlong)pcVar1)
                goto joined_r0x000180366cdc;
              }
            }
            uVar10 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
            plVar9 = plVar9 + 4;
          } while ((ulonglong)(longlong)(int)uVar10 < uVar7);
        }
        uVar8 = uVar8 + 1;
        puVar2 = puStack_f8;
      } while ((longlong)uVar8 < 0x12);
      for (; puVar2 != puVar4; puVar2 = puVar2 + 4) {
        (**(code **)*puVar2)(puVar2,0);
      }
      if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar3);
      }
      param_1 = *(longlong *)(param_1 + 0x168);
    } while (param_1 != 0);
  }
LAB_180366d62:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_118);
joined_r0x000180366cdc:
  for (; puVar2 != puVar4; puVar2 = puVar2 + 4) {
    (**(code **)*puVar2)(puVar2,0);
  }
  if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  goto LAB_180366d62;
}



longlong FUN_180366d90(longlong param_1,uint param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800c2ff0(param_1 + 0x70,*(uint64_t *)(param_1 + 0x80),param_3,param_4,0xfffffffffffffffe);
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xb0);
  }
  return param_1;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



