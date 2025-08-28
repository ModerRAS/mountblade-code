#include "TaleWorlds.Native.Split.h"

// 99_part_01_part036.c - 1 个函数

// 函数: void FUN_1800c3c70(void)
void FUN_1800c3c70(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1800c4620(uint64_t param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  void *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = 0;
  lVar7 = *(longlong *)(_DAT_180c86978 + 200);
  iVar6 = (int)(*(longlong *)(_DAT_180c86978 + 0xd0) - lVar7 >> 3);
  if (0 < iVar6) {
    do {
      if (iVar9 < 0) {
        lVar7 = *(longlong *)(_DAT_180c86978 + 200);
        iVar2 = 0;
      }
      else {
        lVar8 = *(longlong *)(_DAT_180c86978 + 0xd0) - lVar7 >> 3;
        iVar2 = (int)lVar8 + -1;
        if (iVar9 != lVar8) {
          iVar2 = iVar9;
        }
      }
      lVar8 = *(longlong *)(lVar7 + (longlong)iVar2 * 8);
      iVar2 = *(int *)(lVar8 + 0x18);
      if ((iVar2 == *(int *)(param_2 + 0x10)) && (iVar2 != 0)) {
        pbVar3 = *(byte **)(lVar8 + 0x10);
        lVar8 = *(longlong *)(param_2 + 8) - (longlong)pbVar3;
        do {
          pbVar1 = pbVar3 + lVar8;
          iVar4 = (uint)*pbVar3 - (uint)*pbVar1;
          if (iVar4 != 0) break;
          pbVar3 = pbVar3 + 1;
        } while (*pbVar1 != 0);
LAB_1800c46c3:
        if (iVar4 == 0) {
          return iVar9;
        }
      }
      else {
        iVar4 = *(int *)(param_2 + 0x10);
        if (iVar2 == 0) goto LAB_1800c46c3;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar6);
  }
  puVar5 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar5 = *(void **)(param_2 + 8);
  }
  FUN_180626f80(&UNK_180a03aa0,puVar5);
  return -1;
}



longlong * FUN_1800c4720(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = (longlong)&UNK_180a03ac8;
  param_1[2] = (longlong)&UNK_180a01620;
  __0__basic_ios_DU__char_traits_D_std___std__IEAA_XZ(param_1 + 0x17);
  __0__basic_iostream_DU__char_traits_D_std___std__QEAA_PEAV__basic_streambuf_DU__char_traits_D_std___1__Z
            (param_1,param_1 + 3,0,param_4,1,uVar1);
  *(void **)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &UNK_180a03ad8;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xb8;
  FUN_18009ec20(param_1 + 3);
  return param_1;
}



longlong FUN_1800c47c0(longlong param_1,ulonglong param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_1800c3bf0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x118);
  }
  return param_1;
}



longlong FUN_1800c4800(longlong param_1,uint64_t param_2,int32_t param_3)

{
  char cVar1;
  longlong lVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int8_t auStack_20 [8];
  longlong *plStack_18;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = __Fiopen_std__YAPEAU_iobuf__PEBDHH_Z(param_2,param_3,0x40,param_2,0xfffffffffffffffe);
    if (lVar2 != 0) {
      FUN_1800a1920(param_1,lVar2,1);
      uVar3 = _getloc___basic_streambuf_DU__char_traits_D_std___std__QEBA_AVlocale_2_XZ
                        (param_1,auStack_20);
      uVar3 = FUN_18009f9d0(uVar3);
      cVar1 = _always_noconv_codecvt_base_std__QEBA_NXZ(uVar3);
      if (cVar1 == '\0') {
        *(uint64_t *)(param_1 + 0x68) = uVar3;
        __Init___basic_streambuf_DU__char_traits_D_std___std__IEAAXXZ(param_1);
      }
      else {
        *(uint64_t *)(param_1 + 0x68) = 0;
      }
      if (plStack_18 != (longlong *)0x0) {
        puVar4 = (uint64_t *)(**(code **)(*plStack_18 + 0x10))();
        if (puVar4 != (uint64_t *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      return param_1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1800c48e0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int8_t param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1800b6de0(_DAT_180c86930,param_3,param_4,param_4,0,0xfffffffffffffffe);
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else {
    FUN_1802759e0(lVar1,param_2);
  }
  return param_2;
}



longlong FUN_1800c4960(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  
  lVar16 = 2;
  plVar17 = (longlong *)(param_1 + 0x1a20);
  lVar6 = 2;
  lVar2 = 0;
  do {
    iVar5 = 0;
    uVar3 = 0;
    plVar1 = plVar17;
    do {
      if (*plVar1 == 0) break;
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar3 < 0x80);
    plVar17 = plVar17 + 0x91;
    lVar2 = lVar2 + (ulonglong)(uint)(iVar5 << 0xe) * 0x40;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = 0;
  plVar17 = (longlong *)(param_1 + 0x2380);
  lVar7 = 2;
  do {
    iVar5 = 0;
    uVar3 = 0;
    plVar1 = plVar17;
    do {
      if (*plVar1 == 0) break;
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar3 < 0x40);
    plVar17 = plVar17 + 0x49;
    lVar6 = lVar6 + (ulonglong)(uint)(iVar5 << 0xc) * 0xa0;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar8 = 2;
  lVar7 = 0;
  plVar17 = (longlong *)(param_1 + 0x2818);
  do {
    iVar5 = 0;
    uVar3 = 0;
    plVar1 = plVar17;
    do {
      if (*plVar1 == 0) break;
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar3 < 0x40);
    plVar17 = plVar17 + 0x49;
    lVar7 = lVar7 + (ulonglong)(uint)(iVar5 << 0xc) * 0x130;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  plVar17 = (longlong *)(param_1 + 0x4658);
  lVar8 = 0;
  lVar9 = 2;
  do {
    iVar5 = 0;
    uVar3 = 0;
    plVar1 = plVar17;
    do {
      if (*plVar1 == 0) break;
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar3 < 0x100);
    plVar17 = plVar17 + 0x121;
    lVar8 = lVar8 + (ulonglong)(uint)(iVar5 << 9) * 0x330;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  plVar17 = (longlong *)(param_1 + 0x5870);
  lVar9 = 0;
  lVar10 = 2;
  do {
    iVar5 = 0;
    uVar3 = 0;
    plVar1 = plVar17;
    do {
      if (*plVar1 == 0) break;
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar3 < 0x100);
    plVar17 = plVar17 + 0x121;
    lVar9 = lVar9 + (ulonglong)(uint)(iVar5 << 9) * 0x60;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  plVar17 = (longlong *)(param_1 + 0x6a88);
  lVar10 = 0;
  lVar11 = 2;
  do {
    iVar5 = 0;
    uVar3 = 0;
    plVar1 = plVar17;
    do {
      if (*plVar1 == 0) break;
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar3 < 8);
    plVar17 = plVar17 + 10;
    lVar10 = lVar10 + (ulonglong)(uint)(iVar5 << 9) * 0x2f0;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  plVar17 = (longlong *)(param_1 + 0x6b30);
  lVar11 = 0;
  lVar12 = 2;
  do {
    iVar5 = 0;
    uVar3 = 0;
    plVar1 = plVar17;
    do {
      if (*plVar1 == 0) break;
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar3 < 0x80);
    plVar17 = plVar17 + 0x91;
    lVar11 = lVar11 + (ulonglong)(uint)(iVar5 << 9) * 0x340;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  plVar17 = (longlong *)(param_1 + 0x7448);
  lVar12 = 0;
  lVar13 = 2;
  do {
    iVar5 = 0;
    uVar3 = 0;
    plVar1 = plVar17;
    do {
      if (*plVar1 == 0) break;
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar3 < 8);
    plVar17 = plVar17 + 10;
    lVar12 = lVar12 + (ulonglong)(uint)(iVar5 << 9) * 0x240;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  plVar17 = (longlong *)(param_1 + 0x74f0);
  lVar13 = 0;
  lVar14 = 2;
  do {
    iVar5 = 0;
    uVar3 = 0;
    plVar1 = plVar17;
    do {
      if (*plVar1 == 0) break;
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar3 < 0x10);
    plVar17 = plVar17 + 0x13;
    lVar13 = lVar13 + (ulonglong)(uint)(iVar5 << 9) * 0xfc;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  plVar17 = (longlong *)(param_1 + 0x7628);
  lVar14 = 0;
  lVar15 = 2;
  do {
    iVar5 = 0;
    uVar3 = 0;
    plVar1 = plVar17;
    do {
      if (*plVar1 == 0) break;
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar3 < 0x40);
    plVar17 = plVar17 + 0x49;
    lVar14 = lVar14 + (ulonglong)(uint)(iVar5 << 0xc) * 0x120;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  lVar14 = lVar6 + lVar2 + lVar7 + lVar8 + lVar9 + lVar10 + lVar11 + lVar12 + lVar13 + lVar14;
  plVar17 = (longlong *)(param_1 + 0x3d40);
  do {
    iVar5 = 0;
    uVar3 = 0;
    plVar1 = plVar17;
    do {
      if (*plVar1 == 0) break;
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar3 < 0x80);
    iVar4 = 0;
    lVar14 = lVar14 + (ulonglong)(uint)(iVar5 << 4) * 0x12c30;
    uVar3 = 0;
    plVar1 = plVar17;
    do {
      if (*plVar1 == 0) break;
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar3 < 0x80);
    lVar2 = (longlong)iVar4;
    plVar1 = plVar17;
    if (0 < iVar4) {
      do {
        lVar6 = 0;
        lVar7 = 0x10;
        do {
          lVar8 = FUN_180245650(*plVar1 + lVar6);
          lVar14 = lVar14 + lVar8;
          lVar6 = lVar6 + 0x12c30;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        lVar2 = lVar2 + -1;
        plVar1 = plVar1 + 1;
      } while (lVar2 != 0);
    }
    plVar17 = plVar17 + 0x91;
    lVar16 = lVar16 + -1;
    if (lVar16 == 0) {
      return lVar14;
    }
  } while( true );
}



longlong FUN_1800c4da0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  
  lVar2 = 2;
  puVar3 = (uint *)(param_1 + 0x1a18);
  lVar15 = 2;
  lVar6 = 0;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 0x122;
    lVar6 = lVar6 + (ulonglong)uVar1 * 0x40;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  lVar15 = 0;
  puVar3 = (uint *)(param_1 + 0x2378);
  lVar16 = 2;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 0x92;
    lVar15 = lVar15 + (ulonglong)uVar1 * 0xa0;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  lVar16 = 0;
  lVar7 = 2;
  puVar3 = (uint *)(param_1 + 0x2810);
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 0x92;
    lVar16 = lVar16 + (ulonglong)uVar1 * 0x130;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  puVar3 = (uint *)(param_1 + 18000);
  lVar7 = 0;
  lVar8 = 2;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 0x242;
    lVar7 = lVar7 + (ulonglong)uVar1 * 0x330;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  puVar3 = (uint *)(param_1 + 0x5868);
  lVar8 = 0;
  lVar9 = 2;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 0x242;
    lVar8 = lVar8 + (ulonglong)uVar1 * 0x60;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  puVar3 = (uint *)(param_1 + 0x6a80);
  lVar9 = 0;
  lVar10 = 2;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 0x14;
    lVar9 = lVar9 + (ulonglong)uVar1 * 0x2f0;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  puVar3 = (uint *)(param_1 + 0x6b28);
  lVar10 = 0;
  lVar11 = 2;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 0x122;
    lVar10 = lVar10 + (ulonglong)uVar1 * 0x340;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  puVar3 = (uint *)(param_1 + 0x7440);
  lVar11 = 0;
  lVar12 = 2;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 0x14;
    lVar11 = lVar11 + (ulonglong)uVar1 * 0x240;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  puVar3 = (uint *)(param_1 + 0x74e8);
  lVar12 = 0;
  lVar13 = 2;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 0x26;
    lVar12 = lVar12 + (ulonglong)uVar1 * 0xfc;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  puVar3 = (uint *)(param_1 + 0x7620);
  lVar13 = 0;
  lVar14 = 2;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 0x92;
    lVar13 = lVar13 + (ulonglong)uVar1 * 0x120;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  lVar13 = lVar15 + lVar6 + lVar16 + lVar7 + lVar8 + lVar9 + lVar10 + lVar11 + lVar12 + lVar13;
  puVar3 = (uint *)(param_1 + 0x3d38);
  do {
    uVar1 = *puVar3;
    lVar13 = lVar13 + (ulonglong)*puVar3 * 0x12c30;
    uVar5 = 0;
    if (0 < (int)uVar1) {
      do {
        lVar6 = FUN_180245a60((ulonglong)(uint)((int)uVar5 + (int)(uVar5 >> 4) * -0x10) * 0x12c30 +
                              *(longlong *)(puVar3 + (uVar5 >> 4) * 2 + 2));
        lVar13 = lVar13 + lVar6;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while ((int)uVar4 < (int)uVar1);
    }
    puVar3 = puVar3 + 0x122;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return lVar13;
}



ulonglong FUN_1800c5020(longlong param_1)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  
  puVar8 = (uint *)((longlong)*(int *)(param_1 + 9000) * 0x488 + param_1 + 0x1a18);
  uVar6 = (*puVar8 >> 0xe) + 1;
  if (uVar6 < 0x80) {
    puVar10 = puVar8 + ((ulonglong)uVar6 + 1) * 2;
    do {
      if (*(longlong *)puVar10 == 0) break;
      if (*(longlong *)puVar10 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      (puVar8 + (longlong)(int)uVar6 * 2 + 2)[0] = 0;
      (puVar8 + (longlong)(int)uVar6 * 2 + 2)[1] = 0;
      LOCK();
      *(int8_t *)((longlong)puVar8 + (longlong)(int)uVar6 + 0x408) = 1;
      UNLOCK();
      uVar6 = uVar6 + 1;
      puVar10 = puVar10 + 2;
    } while (uVar6 < 0x80);
  }
  puVar8 = (uint *)((longlong)*(int *)(param_1 + 0x2808) * 0x248 + param_1 + 0x2378);
  uVar6 = (*puVar8 >> 0xc) + 1;
  if (uVar6 < 0x40) {
    puVar10 = puVar8 + ((ulonglong)uVar6 + 1) * 2;
    do {
      if (*(longlong *)puVar10 == 0) break;
      if (*(longlong *)puVar10 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      (puVar8 + (longlong)(int)uVar6 * 2 + 2)[0] = 0;
      (puVar8 + (longlong)(int)uVar6 * 2 + 2)[1] = 0;
      LOCK();
      *(int8_t *)((longlong)puVar8 + (longlong)(int)uVar6 + 0x208) = 1;
      UNLOCK();
      uVar6 = uVar6 + 1;
      puVar10 = puVar10 + 2;
    } while (uVar6 < 0x40);
  }
  puVar8 = (uint *)((longlong)*(int *)(param_1 + 0x2ca0) * 0x248 + param_1 + 0x2810);
  uVar6 = (*puVar8 >> 0xc) + 1;
  if (uVar6 < 0x40) {
    puVar10 = puVar8 + ((ulonglong)uVar6 + 1) * 2;
    do {
      if (*(longlong *)puVar10 == 0) break;
      if (*(longlong *)puVar10 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      (puVar8 + (longlong)(int)uVar6 * 2 + 2)[0] = 0;
      (puVar8 + (longlong)(int)uVar6 * 2 + 2)[1] = 0;
      LOCK();
      *(int8_t *)((longlong)puVar8 + (longlong)(int)uVar6 + 0x208) = 1;
      UNLOCK();
      uVar6 = uVar6 + 1;
      puVar10 = puVar10 + 2;
    } while (uVar6 < 0x40);
  }
  puVar8 = (uint *)((longlong)*(int *)(param_1 + 0x5860) * 0x908 + param_1 + 18000);
  uVar6 = (*puVar8 >> 9) + 1;
  if (uVar6 < 0x100) {
    puVar10 = puVar8 + ((ulonglong)uVar6 + 1) * 2;
    do {
      if (*(longlong *)puVar10 == 0) break;
      uVar7 = uVar6 * 0x200;
      iVar1 = uVar7 + 0x200;
      for (; (int)uVar7 < iVar1; uVar7 = uVar7 + 1) {
        lVar9 = *(longlong *)(puVar8 + (ulonglong)(uVar7 >> 9) * 2 + 2) +
                (longlong)(int)(uVar7 + (uVar7 >> 9) * -0x200) * 0x330;
        if (*(longlong *)(lVar9 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar4 = *(longlong **)(lVar9 + 0x1b8);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x38))();
        }
      }
      if (*(longlong *)puVar10 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      (puVar8 + (longlong)(int)uVar6 * 2 + 2)[0] = 0;
      (puVar8 + (longlong)(int)uVar6 * 2 + 2)[1] = 0;
      LOCK();
      *(int8_t *)((longlong)puVar8 + (longlong)(int)uVar6 + 0x808) = 1;
      UNLOCK();
      uVar6 = uVar6 + 1;
      puVar10 = puVar10 + 2;
    } while (uVar6 < 0x100);
  }
  puVar8 = (uint *)((longlong)*(int *)(param_1 + 0x6a78) * 0x908 + param_1 + 0x5868);
  uVar6 = (*puVar8 >> 9) + 1;
  if (uVar6 < 0x100) {
    puVar10 = puVar8 + ((ulonglong)uVar6 + 1) * 2;
    do {
      if (*(longlong *)puVar10 == 0) break;
      if (*(longlong *)puVar10 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      (puVar8 + (longlong)(int)uVar6 * 2 + 2)[0] = 0;
      (puVar8 + (longlong)(int)uVar6 * 2 + 2)[1] = 0;
      LOCK();
      *(int8_t *)((longlong)puVar8 + (longlong)(int)uVar6 + 0x808) = 1;
      UNLOCK();
      uVar6 = uVar6 + 1;
      puVar10 = puVar10 + 2;
    } while (uVar6 < 0x100);
  }
  puVar8 = (uint *)((longlong)*(int *)(param_1 + 0x6b20) * 0x50 + param_1 + 0x6a80);
  uVar6 = (*puVar8 >> 9) + 1;
  if (uVar6 < 8) {
    puVar10 = puVar8 + ((ulonglong)uVar6 + 1) * 2;
    do {
      if (*(longlong *)puVar10 == 0) break;
      uVar7 = uVar6 * 0x200;
      iVar1 = uVar7 + 0x200;
      for (; (int)uVar7 < iVar1; uVar7 = uVar7 + 1) {
        lVar9 = *(longlong *)(puVar8 + (ulonglong)(uVar7 >> 9) * 2 + 2) +
                (longlong)(int)(uVar7 + (uVar7 >> 9) * -0x200) * 0x2f0;
        if (*(longlong *)(lVar9 + 0x2d0) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        FUN_1800ed380(lVar9 + 0x80);
        if (*(longlong *)(lVar9 + 8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      if (*(longlong *)puVar10 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      (puVar8 + (longlong)(int)uVar6 * 2 + 2)[0] = 0;
      (puVar8 + (longlong)(int)uVar6 * 2 + 2)[1] = 0;
      LOCK();
      *(int8_t *)((longlong)puVar8 + (longlong)(int)uVar6 + 0x48) = 1;
      UNLOCK();
      uVar6 = uVar6 + 1;
      puVar10 = puVar10 + 2;
    } while (uVar6 < 8);
  }
  puVar8 = (uint *)((longlong)*(int *)(param_1 + 0x7438) * 0x488 + param_1 + 0x6b28);
  uVar6 = (*puVar8 >> 9) + 1;
  if (uVar6 < 0x80) {
    puVar10 = puVar8 + ((ulonglong)uVar6 + 1) * 2;
    do {
      if (*(longlong *)puVar10 == 0) break;
      uVar7 = uVar6 * 0x200;
      iVar1 = uVar7 + 0x200;
      for (; (int)uVar7 < iVar1; uVar7 = uVar7 + 1) {
        lVar9 = *(longlong *)(puVar8 + (ulonglong)(uVar7 >> 9) * 2 + 2) +
                (longlong)(int)(uVar7 + (uVar7 >> 9) * -0x200) * 0x340;
        if (*(longlong *)(lVar9 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar4 = *(longlong **)(lVar9 + 0x1b8);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x38))();
        }
      }
      if (*(longlong *)puVar10 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      (puVar8 + (longlong)(int)uVar6 * 2 + 2)[0] = 0;
      (puVar8 + (longlong)(int)uVar6 * 2 + 2)[1] = 0;
      LOCK();
      *(int8_t *)((longlong)puVar8 + (longlong)(int)uVar6 + 0x408) = 1;
      UNLOCK();
      uVar6 = uVar6 + 1;
      puVar10 = puVar10 + 2;
    } while (uVar6 < 0x80);
  }
  puVar8 = (uint *)((longlong)*(int *)(param_1 + 0x74e0) * 0x50 + param_1 + 0x7440);
  uVar6 = (*puVar8 >> 9) + 1;
  if (uVar6 < 8) {
    puVar10 = puVar8 + ((ulonglong)uVar6 + 1) * 2;
    do {
      if (*(longlong *)puVar10 == 0) break;
      if (*(longlong *)puVar10 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      (puVar8 + (longlong)(int)uVar6 * 2 + 2)[0] = 0;
      (puVar8 + (longlong)(int)uVar6 * 2 + 2)[1] = 0;
      LOCK();
      *(int8_t *)((longlong)puVar8 + (longlong)(int)uVar6 + 0x48) = 1;
      UNLOCK();
      uVar6 = uVar6 + 1;
      puVar10 = puVar10 + 2;
    } while (uVar6 < 8);
  }
  puVar8 = (uint *)((longlong)*(int *)(param_1 + 0x7618) * 0x98 + param_1 + 0x74e8);
  uVar6 = (*puVar8 >> 9) + 1;
  if (uVar6 < 0x10) {
    puVar10 = puVar8 + ((ulonglong)uVar6 + 1) * 2;
    do {
      if (*(longlong *)puVar10 == 0) break;
      if (*(longlong *)puVar10 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      (puVar8 + (longlong)(int)uVar6 * 2 + 2)[0] = 0;
      (puVar8 + (longlong)(int)uVar6 * 2 + 2)[1] = 0;
      LOCK();
      *(int8_t *)((longlong)puVar8 + (longlong)(int)uVar6 + 0x88) = 1;
      UNLOCK();
      uVar6 = uVar6 + 1;
      puVar10 = puVar10 + 2;
    } while (uVar6 < 0x10);
  }
  uVar5 = (ulonglong)*(int *)(param_1 + 0x7ab0);
  puVar8 = (uint *)(uVar5 * 0x248 + param_1 + 0x7620);
  uVar6 = (*puVar8 >> 0xc) + 1;
  if (uVar6 < 0x40) {
    puVar10 = puVar8 + ((ulonglong)uVar6 + 1) * 2;
    do {
      if (*(longlong *)puVar10 == 0) {
        return 0;
      }
      if (*(longlong *)puVar10 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      (puVar8 + (longlong)(int)uVar6 * 2 + 2)[0] = 0;
      (puVar8 + (longlong)(int)uVar6 * 2 + 2)[1] = 0;
      LOCK();
      pbVar2 = (byte *)((longlong)puVar8 + (longlong)(int)uVar6 + 0x208);
      bVar3 = *pbVar2;
      *pbVar2 = 1;
      uVar5 = (ulonglong)bVar3;
      UNLOCK();
      uVar6 = uVar6 + 1;
      puVar10 = puVar10 + 2;
    } while (uVar6 < 0x40);
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




