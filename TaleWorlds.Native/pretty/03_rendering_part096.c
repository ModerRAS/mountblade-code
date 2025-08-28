#include "TaleWorlds.Native.Split.h"

// 03_rendering_part096.c - 3 个函数

// 函数: void FUN_180323b30(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180323b30(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  byte bVar2;
  void *puVar3;
  bool bVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  void *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  longlong lVar13;
  void *puStack_70;
  byte *pbStack_68;
  int iStack_60;
  int32_t uStack_58;
  void *puStack_50;
  longlong lStack_48;
  int32_t uStack_38;
  longlong *plStack_30;
  
  puVar3 = *(void **)(*param_2 + 0x18);
  puVar10 = &system_buffer_ptr;
  if (puVar3 != (void *)0x0) {
    puVar10 = puVar3;
  }
  puVar1 = (uint64_t *)(param_1 + 0xbf8);
  FUN_180627910(&puStack_70,puVar10,puVar3,param_4,0xfffffffffffffffe);
  puVar11 = *(uint64_t **)(param_1 + 0xc08);
  puVar8 = puVar1;
  if (puVar11 != (uint64_t *)0x0) {
    do {
      if (iStack_60 == 0) {
        bVar4 = false;
        puVar12 = (uint64_t *)puVar11[1];
      }
      else {
        if (*(int *)(puVar11 + 6) == 0) {
          bVar4 = true;
        }
        else {
          pbVar5 = pbStack_68;
          do {
            uVar6 = (uint)pbVar5[puVar11[5] - (longlong)pbStack_68];
            iVar7 = *pbVar5 - uVar6;
            if (*pbVar5 != uVar6) break;
            pbVar5 = pbVar5 + 1;
          } while (uVar6 != 0);
          bVar4 = 0 < iVar7;
          if (iVar7 < 1) {
            puVar12 = (uint64_t *)puVar11[1];
            goto LAB_180323be7;
          }
        }
        puVar12 = (uint64_t *)*puVar11;
      }
LAB_180323be7:
      puVar9 = puVar11;
      if (bVar4) {
        puVar9 = puVar8;
      }
      puVar8 = puVar9;
      puVar11 = puVar12;
    } while (puVar12 != (uint64_t *)0x0);
    if (puVar9 != puVar1) {
      if (*(int *)(puVar9 + 6) == 0) goto LAB_180323c2a;
      if (iStack_60 != 0) {
        pbVar5 = (byte *)puVar9[5];
        lVar13 = (longlong)pbStack_68 - (longlong)pbVar5;
        do {
          bVar2 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar13];
          if (bVar2 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar2 - uVar6) < 1) goto LAB_180323c2a;
      }
    }
  }
  puVar9 = puVar1;
LAB_180323c2a:
  puStack_70 = &unknown_var_3456_ptr;
  if (pbStack_68 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  pbStack_68 = (byte *)0x0;
  uStack_58 = 0;
  puStack_70 = &unknown_var_720_ptr;
  if (puVar9 == puVar1) {
    FUN_180627910(&puStack_50,puVar10);
    plStack_30 = (longlong *)*param_2;
    if (plStack_30 != (longlong *)0x0) {
      (**(code **)(*plStack_30 + 0x28))();
    }
    FUN_18033c660(puVar1,&puStack_70);
    if (plStack_30 != (longlong *)0x0) {
      (**(code **)(*plStack_30 + 0x38))();
    }
    puStack_50 = &unknown_var_3456_ptr;
    if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_48 = 0;
    uStack_38 = 0;
    puStack_50 = &unknown_var_720_ptr;
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180323e94)
// WARNING: Removing unreachable block (ram,0x000180323ea0)
// WARNING: Removing unreachable block (ram,0x000180323ebd)
// WARNING: Removing unreachable block (ram,0x000180323f06)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180323d00(longlong param_1,int32_t param_2,int32_t param_3)

{
  uint64_t *puVar1;
  uint uVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  int iVar5;
  int iVar6;
  uint64_t *puVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  uint64_t *puVar11;
  longlong lVar12;
  longlong lVar13;
  int32_t **ppuStackX_8;
  int32_t auStackX_10 [2];
  int32_t auStackX_18 [2];
  int aiStackX_20 [2];
  int iStack_148;
  int iStack_144;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  longlong lStack_120;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  uint64_t uStack_d8;
  int32_t uStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  uint uStack_b0;
  int32_t *apuStack_a8 [2];
  code *pcStack_98;
  void *puStack_90;
  int32_t *apuStack_88 [2];
  code *pcStack_78;
  void *puStack_70;
  uint64_t uStack_68;
  int8_t auStack_60 [8];
  int8_t auStack_58 [8];
  int8_t auStack_50 [8];
  int8_t auStack_48 [8];
  longlong lStack_40;
  
  uStack_68 = 0xfffffffffffffffe;
  auStackX_10[0] = param_2;
  auStackX_18[0] = param_3;
  FUN_180335000();
  lVar10 = param_1 + 0x908;
  lStack_120 = lVar10;
  iVar5 = _Mtx_lock(lVar10);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  puVar1 = (uint64_t *)(param_1 + 0x8d8);
  iVar5 = *(int *)(param_1 + 0x150);
  puVar3 = *(uint64_t **)(param_1 + 0x8e8);
  puVar7 = puVar3;
  puVar11 = puVar1;
  if (puVar3 != (uint64_t *)0x0) {
    do {
      if (*(int *)(puVar7 + 4) < iVar5) {
        puVar7 = (uint64_t *)*puVar7;
      }
      else {
        puVar11 = puVar7;
        puVar7 = (uint64_t *)puVar7[1];
      }
    } while (puVar7 != (uint64_t *)0x0);
    if ((puVar11 != puVar1) && (*(int *)(puVar11 + 4) <= iVar5)) {
      ppuStackX_8 = (int32_t **)CONCAT44(ppuStackX_8._4_4_,iVar5);
      puVar7 = puVar1;
      while (puVar3 != (uint64_t *)0x0) {
        if (*(int *)(puVar3 + 4) < iVar5) {
          puVar3 = (uint64_t *)*puVar3;
        }
        else {
          puVar7 = puVar3;
          puVar3 = (uint64_t *)puVar3[1];
        }
      }
      if ((puVar7 == puVar1) || (iVar5 < *(int *)(puVar7 + 4))) {
        puVar7 = (uint64_t *)FUN_18020d730(puVar1,auStack_60,puVar11,puVar7,&ppuStackX_8);
        puVar7 = (uint64_t *)*puVar7;
      }
      lVar12 = (longlong)(puVar7[6] - puVar7[5]) >> 4;
      uStack_b0 = *(uint *)(puVar7 + 8);
      if (lVar12 == 0) {
        lStack_c8 = 0;
      }
      else {
        lStack_c8 = FUN_18062b420(_DAT_180c8ed18,lVar12 << 4,uStack_b0 & 0xff);
      }
      lStack_b8 = lVar12 * 0x10 + lStack_c8;
      lVar12 = puVar7[5];
      lStack_c0 = lStack_c8;
      if (lVar12 != puVar7[6]) {
                    // WARNING: Subroutine does not return
        memmove(lStack_c8,lVar12,puVar7[6] - lVar12);
      }
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x3a8);
      if (lVar12 != 0) {
        LOCK();
        *(int32_t *)(lVar12 + 0x1060) = 0;
        UNLOCK();
        lVar10 = lStack_120;
      }
      if (lStack_c8 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lStack_c8);
      }
    }
  }
  iVar5 = _Mtx_unlock(lVar10);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  uStack_140 = (longlong *)0x0;
  uStack_138 = 0;
  uStack_130 = (int32_t *)0x0;
  uStack_128 = (int32_t *)CONCAT44(uStack_128._4_4_,3);
  FUN_18032b1c0(param_1,&uStack_140,*(int32_t *)(param_1 + 0x150),0);
  lVar10 = uStack_138 - (longlong)uStack_140;
  ppuStackX_8 = apuStack_a8;
  uStack_108 = &uStack_140;
  uStack_f8 = auStackX_10;
  uStack_f0 = auStackX_18;
  pcStack_98 = FUN_18033d170;
  puStack_90 = &unknown_var_6880_ptr;
  uStack_100 = param_1;
  apuStack_a8[0] = (int32_t *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,system_allocation_flags);
  *apuStack_a8[0] = (int32_t)uStack_108;
  apuStack_a8[0][1] = uStack_108._4_4_;
  apuStack_a8[0][2] = (int32_t)uStack_100;
  apuStack_a8[0][3] = uStack_100._4_4_;
  apuStack_a8[0][4] = (int32_t)uStack_f8;
  apuStack_a8[0][5] = uStack_f8._4_4_;
  apuStack_a8[0][6] = (int32_t)uStack_f0;
  apuStack_a8[0][7] = uStack_f0._4_4_;
  FUN_18015b810((int32_t)uStack_108,0,lVar10 >> 2 & 0xffffffff,0x20,0xffffffffffffffff,
                apuStack_a8);
  if (uStack_140 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_e8 = 0;
  lStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 3;
  FUN_18032afa0(param_1,&lStack_e8,*(int32_t *)(param_1 + 0x150));
  lVar10 = lStack_e0 - lStack_e8;
  ppuStackX_8 = apuStack_88;
  uStack_140 = &lStack_e8;
  uStack_130 = auStackX_10;
  uStack_128 = auStackX_18;
  pcStack_78 = FUN_18033d080;
  puStack_70 = &unknown_var_6640_ptr;
  uStack_138 = param_1;
  apuStack_88[0] = (int32_t *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,system_allocation_flags);
  *apuStack_88[0] = (int32_t)uStack_140;
  apuStack_88[0][1] = uStack_140._4_4_;
  apuStack_88[0][2] = (int32_t)uStack_138;
  apuStack_88[0][3] = uStack_138._4_4_;
  apuStack_88[0][4] = (int32_t)uStack_130;
  apuStack_88[0][5] = uStack_130._4_4_;
  apuStack_88[0][6] = (int32_t)uStack_128;
  apuStack_88[0][7] = uStack_128._4_4_;
  FUN_18015b810((int32_t)uStack_140,0,lVar10 >> 2 & 0xffffffff,0x20,0xffffffffffffffff,
                apuStack_88);
  if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((*(longlong *)(_DAT_180c86870 + 0x3d8) != 0) &&
     (*(int *)(*(longlong *)(_DAT_180c86870 + 0x3d8) + 0x110) == 3)) {
    puVar1 = (uint64_t *)(param_1 + 0x848);
    iVar5 = *(int *)(param_1 + 0x150);
    puVar3 = *(uint64_t **)(param_1 + 0x858);
    puVar7 = puVar3;
    puVar11 = puVar1;
    if (puVar3 != (uint64_t *)0x0) {
      do {
        if (*(int *)(puVar7 + 4) < iVar5) {
          puVar7 = (uint64_t *)*puVar7;
        }
        else {
          puVar11 = puVar7;
          puVar7 = (uint64_t *)puVar7[1];
        }
      } while (puVar7 != (uint64_t *)0x0);
      if ((puVar11 != puVar1) && (puVar7 = puVar1, *(int *)(puVar11 + 4) <= iVar5)) {
        while (puVar3 != (uint64_t *)0x0) {
          if (*(int *)(puVar3 + 4) < iVar5) {
            puVar3 = (uint64_t *)*puVar3;
          }
          else {
            puVar7 = puVar3;
            puVar3 = (uint64_t *)puVar3[1];
          }
        }
        aiStackX_20[0] = iVar5;
        if ((puVar7 == puVar1) || (iVar5 < *(int *)(puVar7 + 4))) {
          puVar7 = (uint64_t *)FUN_18020d730(puVar1,auStack_58,puVar11,puVar7,aiStackX_20);
          puVar7 = (uint64_t *)*puVar7;
        }
        iVar5 = 0;
        lVar10 = puVar7[5];
        if (puVar7[6] - lVar10 >> 3 != 0) {
          lVar12 = 0;
          do {
            FUN_1802d2c20(*(uint64_t *)(*(longlong *)(param_1 + 0x2d8) + 0x260),
                          **(int32_t **)(lVar10 + lVar12),*(int32_t **)(lVar10 + lVar12) + 1);
            iVar5 = iVar5 + 1;
            lVar12 = lVar12 + 8;
            lVar10 = puVar7[5];
          } while ((ulonglong)(longlong)iVar5 < (ulonglong)(puVar7[6] - lVar10 >> 3));
        }
      }
    }
  }
  if ((*(longlong *)(_DAT_180c86870 + 0x3d8) != 0) &&
     (*(int *)(*(longlong *)(_DAT_180c86870 + 0x3d8) + 0x110) == 3)) {
    puVar1 = (uint64_t *)(param_1 + 0x878);
    iVar5 = *(int *)(param_1 + 0x150);
    puVar3 = *(uint64_t **)(param_1 + 0x888);
    puVar7 = puVar3;
    puVar11 = puVar1;
    if (puVar3 != (uint64_t *)0x0) {
      do {
        if (*(int *)(puVar7 + 4) < iVar5) {
          puVar7 = (uint64_t *)*puVar7;
        }
        else {
          puVar11 = puVar7;
          puVar7 = (uint64_t *)puVar7[1];
        }
      } while (puVar7 != (uint64_t *)0x0);
      if ((puVar11 != puVar1) && (puVar7 = puVar1, *(int *)(puVar11 + 4) <= iVar5)) {
        while (puVar3 != (uint64_t *)0x0) {
          if (*(int *)(puVar3 + 4) < iVar5) {
            puVar3 = (uint64_t *)*puVar3;
          }
          else {
            puVar7 = puVar3;
            puVar3 = (uint64_t *)puVar3[1];
          }
        }
        iStack_148 = iVar5;
        if ((puVar7 == puVar1) || (iVar5 < *(int *)(puVar7 + 4))) {
          puVar7 = (uint64_t *)FUN_18020d730(puVar1,auStack_50,puVar11,puVar7,&iStack_148);
          puVar7 = (uint64_t *)*puVar7;
        }
        iVar5 = 0;
        lVar10 = puVar7[5];
        if (puVar7[6] - lVar10 >> 3 != 0) {
          lVar12 = 0;
          do {
            FUN_1803a8870(*(uint64_t *)(param_1 + 0x528),*(int32_t **)(lVar10 + lVar12) + 1,
                          &system_data_02f0,**(int32_t **)(lVar10 + lVar12));
            iVar5 = iVar5 + 1;
            lVar12 = lVar12 + 8;
            lVar10 = puVar7[5];
          } while ((ulonglong)(longlong)iVar5 < (ulonglong)(puVar7[6] - lVar10 >> 3));
        }
      }
    }
  }
  if ((*(longlong *)(_DAT_180c86870 + 0x3d8) != 0) &&
     (*(int *)(*(longlong *)(_DAT_180c86870 + 0x3d8) + 0x110) == 3)) {
    puVar1 = (uint64_t *)(param_1 + 0x8a8);
    iVar5 = *(int *)(param_1 + 0x150);
    puVar3 = *(uint64_t **)(param_1 + 0x8b8);
    puVar7 = puVar3;
    puVar11 = puVar1;
    if (puVar3 != (uint64_t *)0x0) {
      do {
        if (*(int *)(puVar7 + 4) < iVar5) {
          puVar7 = (uint64_t *)*puVar7;
        }
        else {
          puVar11 = puVar7;
          puVar7 = (uint64_t *)puVar7[1];
        }
      } while (puVar7 != (uint64_t *)0x0);
      if ((puVar11 != puVar1) && (puVar7 = puVar1, *(int *)(puVar11 + 4) <= iVar5)) {
        while (puVar3 != (uint64_t *)0x0) {
          if (*(int *)(puVar3 + 4) < iVar5) {
            puVar3 = (uint64_t *)*puVar3;
          }
          else {
            puVar7 = puVar3;
            puVar3 = (uint64_t *)puVar3[1];
          }
        }
        iStack_144 = iVar5;
        if ((puVar7 == puVar1) || (iVar5 < *(int *)(puVar7 + 4))) {
          puVar7 = (uint64_t *)FUN_18020d730(puVar1,auStack_48,puVar11,puVar7,&iStack_144);
          puVar7 = (uint64_t *)*puVar7;
        }
        iVar5 = 0;
        lVar10 = puVar7[5];
        if (puVar7[6] - lVar10 >> 3 != 0) {
          lVar12 = 0;
          do {
            puVar4 = *(int32_t **)(lVar12 + lVar10);
            FUN_1803a8720(*(uint64_t *)(param_1 + 0x528),puVar4 + 1,puVar4 + 5,*puVar4);
            iVar5 = iVar5 + 1;
            lVar12 = lVar12 + 8;
            lVar10 = puVar7[5];
          } while ((ulonglong)(longlong)iVar5 < (ulonglong)(puVar7[6] - lVar10 >> 3));
        }
      }
    }
  }
  for (puVar9 = *(uint **)(*(longlong *)(param_1 + 0x990) +
                          ((ulonglong)*(uint *)(param_1 + 0x150) %
                          (ulonglong)*(uint *)(param_1 + 0x998)) * 8); puVar9 != (uint *)0x0;
      puVar9 = *(uint **)(puVar9 + 2)) {
    if (*(uint *)(param_1 + 0x150) == *puVar9) goto LAB_180324489;
  }
  puVar9 = *(uint **)(*(longlong *)(param_1 + 0x990) + *(longlong *)(param_1 + 0x998) * 8);
LAB_180324489:
  *(uint *)(*(longlong *)(param_1 + 0x2d8) + 0x5b9c) = puVar9[1];
  iVar5 = 0;
  lVar10 = *(longlong *)(param_1 + 0xac0);
  if (*(longlong *)(param_1 + 0xac8) - lVar10 >> 2 != 0) {
    lVar12 = param_1 + 0x3d8;
    lVar13 = 0;
    do {
      uVar2 = *(uint *)(lVar13 + lVar10);
      lStack_40 = lVar12;
      iVar6 = _Mtx_lock(lVar12);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      lVar10 = *(longlong *)(param_1 + 0x3b0);
      for (puVar9 = *(uint **)(lVar10 + ((ulonglong)uVar2 % (ulonglong)*(uint *)(param_1 + 0x3b8)) *
                                        8); puVar9 != (uint *)0x0; puVar9 = *(uint **)(puVar9 + 4))
      {
        if (uVar2 == *puVar9) {
          lVar8 = *(longlong *)(param_1 + 0x3b8);
          goto LAB_180324528;
        }
      }
      lVar8 = *(longlong *)(param_1 + 0x3b8);
      puVar9 = *(uint **)(lVar10 + lVar8 * 8);
LAB_180324528:
      if (puVar9 == *(uint **)(lVar10 + lVar8 * 8)) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(longlong *)(puVar9 + 2);
      }
      iVar6 = _Mtx_unlock(lVar12);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      if (lVar10 != 0) {
        FUN_1802ee720(lVar10,0);
      }
      iVar5 = iVar5 + 1;
      lVar13 = lVar13 + 4;
      lVar10 = *(longlong *)(param_1 + 0xac0);
    } while ((ulonglong)(longlong)iVar5 < (ulonglong)(*(longlong *)(param_1 + 0xac8) - lVar10 >> 2))
    ;
  }
  *(uint64_t *)(param_1 + 0x158) = *(uint64_t *)(param_1 + 0x150);
  return 0;
}





// 函数: void FUN_1803245b0(uint64_t *param_1,int param_2,int param_3)
void FUN_1803245b0(uint64_t *param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  int32_t uVar3;
  int iVar4;
  longlong lVar5;
  uint64_t uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint64_t uStackX_20;
  longlong in_stack_ffffffffffffffb8;
  int32_t uVar10;
  uint64_t uVar11;
  longlong lVar12;
  
  uVar11 = 0xfffffffffffffffe;
  lVar9 = (longlong)param_2;
  if (lVar9 < param_3) {
    do {
      uVar3 = (int32_t)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
      uVar10 = *(int32_t *)(*(longlong *)*param_1 + lVar9 * 4);
      lVar5 = FUN_18032ba60(param_1[1],uVar10,*(int32_t *)(param_1[1] + 0x150));
      uVar6 = FUN_18032ba60(param_1[1],uVar10,*(int *)(param_1[1] + 0x150) + 1);
      uStackX_20 = 0;
      uVar10 = *(int32_t *)param_1[3];
      uVar3 = FUN_1803248c0(param_1[1],&uStackX_20,lVar5,uVar6,
                            CONCAT44(uVar3,*(int32_t *)param_1[2]),uVar10,uVar11);
      lVar8 = param_1[1];
      uVar1 = *(uint *)(lVar5 + 0x48);
      lVar5 = lVar8 + 0x3d8;
      lVar12 = lVar5;
      iVar4 = _Mtx_lock(lVar5);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      lVar2 = *(longlong *)(lVar8 + 0x3b0);
      for (puVar7 = *(uint **)(lVar2 + ((ulonglong)uVar1 % (ulonglong)*(uint *)(lVar8 + 0x3b8)) * 8)
          ; puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 4)) {
        if (uVar1 == *puVar7) {
          lVar8 = *(longlong *)(lVar8 + 0x3b8);
          goto LAB_1803246bb;
        }
      }
      lVar8 = *(longlong *)(lVar8 + 0x3b8);
      puVar7 = *(uint **)(lVar2 + lVar8 * 8);
LAB_1803246bb:
      uVar6 = 0;
      if (puVar7 != *(uint **)(lVar2 + lVar8 * 8)) {
        uVar6 = *(uint64_t *)(puVar7 + 2);
      }
      iVar4 = _Mtx_unlock(lVar5);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      in_stack_ffffffffffffffb8 = param_1[1];
      FUN_180320fd0(*(uint64_t *)(in_stack_ffffffffffffffb8 + 0x2d8),uVar6,uStackX_20,uVar3,
                    in_stack_ffffffffffffffb8,uVar10,uVar11,lVar12);
      lVar9 = lVar9 + 1;
    } while (lVar9 < param_3);
  }
  return;
}





// 函数: void FUN_180324740(uint64_t *param_1,int param_2,int param_3)
void FUN_180324740(uint64_t *param_1,int param_2,int param_3)

{
  uint64_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plStackX_20;
  longlong *plStack_38;
  uint64_t uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  for (lVar8 = (longlong)param_2; lVar8 < param_3; lVar8 = lVar8 + 1) {
    lVar6 = FUN_18032b880(param_1[1],*(int32_t *)(*(longlong *)*param_1 + lVar8 * 4),
                          *(int32_t *)(param_1[1] + 0x150));
    uVar1 = param_1[1];
    uVar7 = (*(uint *)(lVar6 + 8) | *(uint *)param_1[2]) & ~*(uint *)param_1[3];
    plStack_38 = (longlong *)0x0;
    if (((*(uint *)(lVar6 + 8) & 1) != 0) &&
       (FUN_180329fa0(uVar1,&plStack_38,lVar6,uVar7), plVar5 = plStack_38,
       plStack_38 != (longlong *)0x0)) {
      if ((uVar7 >> 2 & 1) == 0) {
        if ((uVar7 & 10) != 0) {
          (**(code **)(*plStack_38 + 0x148))(plStack_38,lVar6 + 0xc);
          (**(code **)(*plVar5 + 0x128))(plVar5,lVar6 + 4);
          (**(code **)(*plVar5 + 0x108))(plVar5,lVar6 + 0xa8);
          (**(code **)(*plVar5 + 400))(plVar5,lVar6 + 200);
          uVar2 = *(int32_t *)(lVar6 + 0xdc);
          uVar3 = *(int32_t *)(lVar6 + 0xe0);
          uVar4 = *(int32_t *)(lVar6 + 0xe4);
          *(int32_t *)(plVar5 + 0xc) = *(int32_t *)(lVar6 + 0xd8);
          *(int32_t *)((longlong)plVar5 + 100) = uVar2;
          *(int32_t *)(plVar5 + 0xd) = uVar3;
          *(int32_t *)((longlong)plVar5 + 0x6c) = uVar4;
        }
        if ((uVar7 >> 4 & 1) != 0) {
          plStackX_20 = (longlong *)0x0;
          FUN_1803276a0(uVar1,&plStackX_20,lVar6 + 0x50);
          (**(code **)(*plVar5 + 0x118))(plVar5,&plStackX_20);
          if (plStackX_20 != (longlong *)0x0) {
            (**(code **)(*plStackX_20 + 0x38))();
          }
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



