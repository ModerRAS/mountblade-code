#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part188.c - 11 个函数

// 函数: void FUN_18016ff80(ulonglong param_1,ulonglong param_2,longlong param_3,int8_t param_4)
void FUN_18016ff80(ulonglong param_1,ulonglong param_2,longlong param_3,int8_t param_4)

{
  byte bVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int8_t uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int8_t uVar15;
  uint64_t uVar16;
  void *puStack_78;
  byte *pbStack_70;
  int iStack_68;
  ulonglong uStack_60;
  void *puStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  uint64_t uStack_40;
  
  uVar16 = 0xfffffffffffffffe;
  uVar7 = param_2 - param_1;
  uVar6 = param_4;
  do {
    uVar15 = param_4;
    if (((longlong)(uVar7 & 0xffffffffffffffe0) < 0x381) || (param_3 < 1)) {
      if (param_3 == 0) {
        FUN_180170380(param_1,param_2,param_2,uVar6,uVar15,uVar16);
      }
      return;
    }
    uVar7 = (((longlong)(param_2 - param_1) >> 5) - ((longlong)(param_2 - param_1) >> 0x3f) >> 1) *
            0x20 + param_1;
    if (*(int *)(uVar7 + 0x10) == 0) {
LAB_180170161:
      uVar12 = uVar7;
      if ((*(int *)(param_2 - 0x10) != 0) && (uVar12 = param_1, *(int *)(param_1 + 0x10) != 0)) {
        pbVar8 = *(byte **)(param_2 - 0x18);
        pbVar10 = pbVar8;
        do {
          bVar1 = *pbVar10;
          uVar9 = (uint)pbVar10[*(longlong *)(param_1 + 8) - (longlong)pbVar8];
          if (bVar1 != uVar9) break;
          pbVar10 = pbVar10 + 1;
        } while (uVar9 != 0);
        if ((int)(bVar1 - uVar9) < 1) {
          if (*(int *)(uVar7 + 0x10) != 0) {
            lVar13 = *(longlong *)(uVar7 + 8) - (longlong)pbVar8;
            do {
              uVar9 = (uint)pbVar8[lVar13];
              iVar11 = *pbVar8 - uVar9;
              if (*pbVar8 != uVar9) break;
              pbVar8 = pbVar8 + 1;
            } while (uVar9 != 0);
            goto joined_r0x0001801701d5;
          }
          goto LAB_1801701db;
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x10) != 0) {
        pbVar8 = *(byte **)(uVar7 + 8);
        lVar13 = *(longlong *)(param_1 + 8) - (longlong)pbVar8;
        do {
          bVar1 = *pbVar8;
          uVar9 = (uint)pbVar8[lVar13];
          if (bVar1 != uVar9) break;
          pbVar8 = pbVar8 + 1;
        } while (uVar9 != 0);
        if ((int)(bVar1 - uVar9) < 1) goto LAB_180170161;
      }
      uVar12 = param_1;
      if (*(int *)(param_2 - 0x10) != 0) {
        pbVar8 = *(byte **)(param_2 - 0x18);
        pbVar10 = pbVar8;
        do {
          bVar1 = *pbVar10;
          uVar9 = (uint)pbVar10[*(longlong *)(uVar7 + 8) - (longlong)pbVar8];
          if (bVar1 != uVar9) break;
          pbVar10 = pbVar10 + 1;
        } while (uVar9 != 0);
        uVar12 = uVar7;
        if ((int)(bVar1 - uVar9) < 1) {
          if (*(int *)(param_1 + 0x10) != 0) {
            lVar13 = *(longlong *)(param_1 + 8) - (longlong)pbVar8;
            do {
              uVar9 = (uint)pbVar8[lVar13];
              iVar11 = *pbVar8 - uVar9;
              uVar7 = param_1;
              if (*pbVar8 != uVar9) break;
              pbVar8 = pbVar8 + 1;
            } while (uVar9 != 0);
joined_r0x0001801701d5:
            uVar12 = uVar7;
            if (iVar11 < 1) goto LAB_18017009e;
          }
LAB_1801701db:
          uVar12 = param_2 - 0x20;
        }
      }
    }
LAB_18017009e:
    puStack_78 = &unknown_var_3456_ptr;
    uStack_60 = 0;
    pbStack_70 = (byte *)0x0;
    iStack_68 = 0;
    FUN_1806277c0(&puStack_78,*(int32_t *)(uVar12 + 0x10));
    if (*(int *)(uVar12 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(pbStack_70,*(uint64_t *)(uVar12 + 8),*(int *)(uVar12 + 0x10) + 1);
    }
    uVar14 = param_1;
    uVar7 = param_2;
    if (*(longlong *)(uVar12 + 8) != 0) {
      iStack_68 = 0;
      if (pbStack_70 != (byte *)0x0) {
        *pbStack_70 = 0;
      }
      uStack_60 = uStack_60 & 0xffffffff;
    }
LAB_180170120:
    while (iStack_68 != 0) {
      if (*(int *)(uVar14 + 0x10) != 0) {
        pbVar8 = pbStack_70;
        do {
          bVar1 = *pbVar8;
          uVar9 = (uint)pbVar8[*(longlong *)(uVar14 + 8) - (longlong)pbStack_70];
          if (bVar1 != uVar9) break;
          pbVar8 = pbVar8 + 1;
        } while (uVar9 != 0);
        if ((int)(bVar1 - uVar9) < 1) break;
      }
      uVar14 = uVar14 + 0x20;
    }
    do {
      do {
        uVar12 = uVar7;
        uVar7 = uVar12 - 0x20;
        if (*(int *)(uVar12 - 0x10) == 0) goto LAB_18017023b;
      } while (iStack_68 == 0);
      pbVar8 = *(byte **)(uVar12 - 0x18);
      lVar13 = (longlong)pbStack_70 - (longlong)pbVar8;
      do {
        bVar1 = *pbVar8;
        uVar9 = (uint)pbVar8[lVar13];
        if (bVar1 != uVar9) break;
        pbVar8 = pbVar8 + 1;
      } while (uVar9 != 0);
    } while (0 < (int)(bVar1 - uVar9));
LAB_18017023b:
    if (uVar14 < uVar7) {
      puStack_58 = &unknown_var_3456_ptr;
      uVar2 = *(int32_t *)(uVar14 + 0x10);
      uVar5 = *(uint64_t *)(uVar14 + 8);
      uVar3 = *(int32_t *)(uVar14 + 0x1c);
      uVar4 = *(int32_t *)(uVar14 + 0x18);
      uStack_40 = *(uint64_t *)(uVar14 + 0x18);
      *(int32_t *)(uVar14 + 0x10) = 0;
      *(uint64_t *)(uVar14 + 8) = 0;
      *(uint64_t *)(uVar14 + 0x18) = 0;
      uStack_50 = uVar5;
      uStack_48 = uVar2;
      FUN_18005d190(uVar14,uVar7);
      if (*(longlong *)(uVar12 - 0x18) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(int32_t *)(uVar12 - 0x10) = uVar2;
      *(uint64_t *)(uVar12 - 0x18) = uVar5;
      *(int32_t *)(uVar12 - 4) = uVar3;
      *(int32_t *)(uVar12 - 8) = uVar4;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_40 = 0;
      puStack_58 = &unknown_var_720_ptr;
      uVar14 = uVar14 + 0x20;
      goto LAB_180170120;
    }
    puStack_78 = &unknown_var_3456_ptr;
    if (pbStack_70 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    pbStack_70 = (byte *)0x0;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    puStack_78 = &unknown_var_720_ptr;
    param_3 = param_3 + -1;
    param_4 = uVar15;
    FUN_18016ff80(uVar14,param_2,param_3,uVar15);
    uVar7 = uVar14 - param_1;
    param_2 = uVar14;
    uVar6 = uVar15;
  } while( true );
}





// 函数: void FUN_180170380(longlong param_1,ulonglong param_2,ulonglong param_3,int8_t param_4)
void FUN_180170380(longlong param_1,ulonglong param_2,ulonglong param_3,int8_t param_4)

{
  longlong *plVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint64_t uVar10;
  void *puStack_60;
  longlong lStack_58;
  int32_t uStack_50;
  longlong lStack_48;
  
  uVar10 = 0xfffffffffffffffe;
  lVar9 = (longlong)(param_2 - param_1) >> 5;
  if (1 < lVar9) {
    lVar6 = (lVar9 + -2 >> 1) + 1;
    plVar7 = (longlong *)(param_1 + 8 + lVar6 * 0x20);
    do {
      lVar6 = lVar6 + -1;
      plVar1 = plVar7 + -4;
      puStack_60 = &unknown_var_3456_ptr;
      uStack_50 = (int32_t)plVar7[-3];
      lStack_58 = *plVar1;
      lStack_48 = plVar7[-2];
      *(int32_t *)(plVar7 + -3) = 0;
      *plVar1 = 0;
      plVar7[-2] = 0;
      FUN_180170700(param_1,lVar6,lVar9,lVar6,&puStack_60,param_4,uVar10);
      puStack_60 = &unknown_var_3456_ptr;
      if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      plVar7 = plVar1;
    } while (lVar6 != 0);
  }
  if (param_2 < param_3) {
    plVar7 = (longlong *)(param_2 + 8);
    lVar6 = ((param_3 - param_2) - 1 >> 5) + 1;
    do {
      if (*(int *)(param_1 + 0x10) == 0) {
        bVar3 = false;
      }
      else if ((int)plVar7[1] == 0) {
        bVar3 = true;
      }
      else {
        pbVar4 = *(byte **)(param_1 + 8);
        lVar8 = *plVar7 - (longlong)pbVar4;
        do {
          bVar2 = *pbVar4;
          uVar5 = (uint)pbVar4[lVar8];
          if (bVar2 != uVar5) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar5 != 0);
        bVar3 = 0 < (int)(bVar2 - uVar5);
      }
      if (bVar3) {
        puStack_60 = &unknown_var_3456_ptr;
        uStack_50 = (int32_t)plVar7[1];
        lStack_58 = *plVar7;
        lStack_48 = plVar7[2];
        *(int32_t *)(plVar7 + 1) = 0;
        *plVar7 = 0;
        plVar7[2] = 0;
        if (*plVar7 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar7[2] = 0;
        *plVar7 = 0;
        *(int32_t *)(plVar7 + 1) = 0;
        *(int32_t *)(plVar7 + 1) = *(int32_t *)(param_1 + 0x10);
        *plVar7 = *(longlong *)(param_1 + 8);
        *(int32_t *)((longlong)plVar7 + 0x14) = *(int32_t *)(param_1 + 0x1c);
        *(int32_t *)(plVar7 + 2) = *(int32_t *)(param_1 + 0x18);
        *(int32_t *)(param_1 + 0x10) = 0;
        *(uint64_t *)(param_1 + 8) = 0;
        *(uint64_t *)(param_1 + 0x18) = 0;
        FUN_180170700(param_1,0,lVar9,0,&puStack_60,param_4,uVar10);
        puStack_60 = &unknown_var_3456_ptr;
        if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      plVar7 = plVar7 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (1 < lVar9) {
    plVar7 = (longlong *)(param_2 - 0x18);
    do {
      puStack_60 = &unknown_var_3456_ptr;
      uStack_50 = (int32_t)plVar7[1];
      lStack_58 = *plVar7;
      lStack_48 = plVar7[2];
      *(int32_t *)(plVar7 + 1) = 0;
      *plVar7 = 0;
      plVar7[2] = 0;
      FUN_18005d190(plVar7 + -1,param_1);
      FUN_180170700(param_1,0,lVar9 + -1,0,&puStack_60,param_4);
      puStack_60 = &unknown_var_3456_ptr;
      if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      plVar7 = plVar7 + -4;
      lVar9 = (0x18 - param_1) + (longlong)plVar7 >> 5;
    } while (1 < lVar9);
  }
  return;
}



longlong FUN_180170700(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong param_5)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = param_4 * 2;
  while (lVar6 = lVar5 + 2, lVar6 < param_3) {
    lVar7 = lVar6 * 0x20 + param_1;
    if (*(int *)(lVar6 * 0x20 + -0x10 + param_1) == 0) {
      bVar2 = false;
    }
    else if (*(int *)(lVar7 + 0x10) == 0) {
      bVar2 = true;
    }
    else {
      pbVar3 = *(byte **)(lVar7 + -0x18);
      lVar7 = *(longlong *)(lVar7 + 8) - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar4 = (uint)pbVar3[lVar7];
        if (bVar1 != uVar4) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar4 != 0);
      bVar2 = 0 < (int)(bVar1 - uVar4);
    }
    lVar7 = lVar5 + 1;
    if (!bVar2) {
      lVar7 = lVar6;
    }
    lVar5 = param_4 * 0x20 + param_1;
    lVar6 = lVar7 * 0x20 + param_1;
    if (*(longlong *)(lVar5 + 8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)(lVar5 + 0x18) = 0;
    *(uint64_t *)(lVar5 + 8) = 0;
    *(int32_t *)(lVar5 + 0x10) = 0;
    *(int32_t *)(lVar5 + 0x10) = *(int32_t *)(lVar6 + 0x10);
    *(uint64_t *)(lVar5 + 8) = *(uint64_t *)(lVar6 + 8);
    *(int32_t *)(lVar5 + 0x1c) = *(int32_t *)(lVar6 + 0x1c);
    *(int32_t *)(lVar5 + 0x18) = *(int32_t *)(lVar6 + 0x18);
    *(int32_t *)(lVar6 + 0x10) = 0;
    *(uint64_t *)(lVar6 + 8) = 0;
    *(uint64_t *)(lVar6 + 0x18) = 0;
    param_4 = lVar7;
    lVar5 = lVar7 * 2;
  }
  if (lVar6 == param_3) {
    FUN_18005d190(param_4 * 0x20 + param_1,param_1 + -0x20 + lVar6 * 0x20);
    param_4 = lVar5 + 1;
  }
  while (param_2 < param_4) {
    lVar5 = param_4 + -1 >> 1;
    lVar6 = lVar5 * 0x20 + param_1;
    if (*(int *)(param_5 + 0x10) == 0) break;
    if (*(int *)(lVar6 + 0x10) != 0) {
      pbVar3 = *(byte **)(param_5 + 8);
      lVar7 = *(longlong *)(lVar6 + 8) - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar4 = (uint)pbVar3[lVar7];
        if (bVar1 != uVar4) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar4 != 0);
      if ((int)(bVar1 - uVar4) < 1) break;
    }
    lVar7 = param_4 * 0x20 + param_1;
    if (*(longlong *)(lVar7 + 8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)(lVar7 + 0x18) = 0;
    *(uint64_t *)(lVar7 + 8) = 0;
    *(int32_t *)(lVar7 + 0x10) = 0;
    *(int32_t *)(lVar7 + 0x10) = *(int32_t *)(lVar6 + 0x10);
    *(uint64_t *)(lVar7 + 8) = *(uint64_t *)(lVar6 + 8);
    *(int32_t *)(lVar7 + 0x1c) = *(int32_t *)(lVar6 + 0x1c);
    *(int32_t *)(lVar7 + 0x18) = *(int32_t *)(lVar6 + 0x18);
    *(int32_t *)(lVar6 + 0x10) = 0;
    *(uint64_t *)(lVar6 + 8) = 0;
    *(uint64_t *)(lVar6 + 0x18) = 0;
    param_4 = lVar5;
  }
  param_1 = param_4 * 0x20 + param_1;
  if (*(longlong *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x10) = *(int32_t *)(param_5 + 0x10);
  *(uint64_t *)(param_1 + 8) = *(uint64_t *)(param_5 + 8);
  *(int32_t *)(param_1 + 0x1c) = *(int32_t *)(param_5 + 0x1c);
  *(int32_t *)(param_1 + 0x18) = *(int32_t *)(param_5 + 0x18);
  *(int32_t *)(param_5 + 0x10) = 0;
  *(uint64_t *)(param_5 + 8) = 0;
  *(uint64_t *)(param_5 + 0x18) = 0;
  return param_1;
}





// 函数: void FUN_180170900(uint64_t *param_1)
void FUN_180170900(uint64_t *param_1)

{
  param_1[0x27f] = &unknown_var_720_ptr;
  param_1[0x26c] = &unknown_var_720_ptr;
  param_1[0x259] = &unknown_var_720_ptr;
  param_1[0x246] = &unknown_var_720_ptr;
  param_1[0x233] = &unknown_var_720_ptr;
  param_1[0x220] = &unknown_var_720_ptr;
  param_1[0x21b] = &unknown_var_3456_ptr;
  if (param_1[0x21c] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x21c] = 0;
  *(int32_t *)(param_1 + 0x21e) = 0;
  param_1[0x21b] = &unknown_var_720_ptr;
  FUN_18006b6f0();
  param_1[0x204] = &unknown_var_720_ptr;
  param_1[0x1f1] = &unknown_var_720_ptr;
  FUN_1808fc8a8(param_1 + 0x146,0x98,9,FUN_180044a30);
  FUN_1808fc8a8(param_1 + 0x96,0x58,0x10,FUN_180044a30);
  FUN_18006b6f0();
  FUN_1808fc8a8(param_1 + 0x33,0x98,5,FUN_180044a30);
  FUN_18006b6f0();
  param_1[0x1c] = &unknown_var_720_ptr;
  param_1[8] = &unknown_var_720_ptr;
  FUN_18006b6f0();
  *param_1 = &unknown_var_3456_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &unknown_var_720_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180170ac0(longlong param_1,longlong param_2)
void FUN_180170ac0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  void *puVar2;
  int8_t auStack_a8 [32];
  uint64_t uStack_88;
  void *puStack_78;
  void *puStack_70;
  int32_t uStack_68;
  uint8_t auStack_60 [72];
  ulonglong uStack_18;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_a8;
  puStack_78 = &unknown_var_3480_ptr;
  puStack_70 = auStack_60;
  uStack_68 = 0;
  auStack_60[0] = 0;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    uStack_68 = (int32_t)lVar1;
    strcpy_s(auStack_60,0x40,param_2);
  }
  puVar2 = &system_buffer_ptr;
  if (puStack_70 != (void *)0x0) {
    puVar2 = puStack_70;
  }
  (**(code **)(*(longlong *)(param_1 + 0x288) + 0x10))((longlong *)(param_1 + 0x288),puVar2);
  puStack_78 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180170ba0(uint64_t param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_180170ba0(uint64_t param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint64_t uVar3;
  int8_t auStack_128 [32];
  uint64_t uStack_108;
  uint uStack_100;
  uint uStack_fc;
  uint64_t uStack_f8;
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [64];
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  uint64_t uStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int iStack_54;
  ulonglong uStack_28;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_128;
  uStack_78 = 0x48;
  GetMonitorInfoA(param_1,&uStack_78);
  uVar3 = GetDC(0);
  uStack_fc = GetDeviceCaps(uVar3,0x58);
  uStack_100 = GetDeviceCaps(uVar3,0x5a);
  ReleaseDC(0,uVar3);
  if (iStack_54 != 8) {
    puVar1 = (ulonglong *)(param_4 + 0x18);
    uStack_108 = &puStack_e8;
    puStack_e8 = &unknown_var_3480_ptr;
    puStack_e0 = auStack_d0;
    uStack_d8 = 0;
    auStack_d0[0] = 0;
    uStack_80 = 0;
    FUN_180049bf0(&puStack_e8,&unknown_var_2032_ptr);
    uStack_84 = uStack_68;
    uStack_90 = uStack_74;
    uStack_88 = uStack_6c;
    uStack_8c = uStack_70;
    uStack_108 = (void **)
                 CONCAT44((float)uStack_100 * 0.010416667,(float)uStack_fc * 0.010416667);
    uStack_80 = uStack_108;
    uVar2 = *(ulonglong *)(param_4 + 0x20);
    if (iStack_54 == 1) {
      if ((uVar2 == *(ulonglong *)(param_4 + 0x28)) || (*puVar1 != uVar2)) {
        FUN_180174340(puVar1,*puVar1,&puStack_e8);
      }
      else {
        uStack_108 = (void **)uVar2;
        FUN_1800b8300(uVar2,&puStack_e8);
        *(int32_t *)(uVar2 + 0x58) = uStack_90;
        *(int32_t *)(uVar2 + 0x5c) = uStack_8c;
        *(int32_t *)(uVar2 + 0x60) = uStack_88;
        *(int32_t *)(uVar2 + 100) = uStack_84;
        *(uint64_t *)(uVar2 + 0x68) = uStack_80;
        *(longlong *)(param_4 + 0x20) = *(longlong *)(param_4 + 0x20) + 0x70;
      }
    }
    else if (uVar2 < *(ulonglong *)(param_4 + 0x28)) {
      *(ulonglong *)(param_4 + 0x20) = uVar2 + 0x70;
      uStack_108 = (void **)uVar2;
      FUN_1800b8300(uVar2);
      *(int32_t *)(uVar2 + 0x58) = uStack_90;
      *(int32_t *)(uVar2 + 0x5c) = uStack_8c;
      *(int32_t *)(uVar2 + 0x60) = uStack_88;
      *(int32_t *)(uVar2 + 100) = uStack_84;
      *(uint64_t *)(uVar2 + 0x68) = uStack_80;
    }
    else {
      FUN_180174150(puVar1,&puStack_e8);
    }
    uStack_108 = &puStack_e8;
    puStack_e8 = &unknown_var_720_ptr;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_128);
}





// 函数: void FUN_180170da0(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180170da0(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  
  lVar1 = GetWindowLongPtrA(param_1,0xffffffeb);
  if ((lVar1 == 0) || (system_ptr_ecee != '\0')) {
    DefWindowProcW(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_1801727d0(lVar1,param_1,param_2,param_3,param_4);
  }
  return;
}





// 函数: void FUN_180170e20(longlong param_1)
void FUN_180170e20(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  
  puVar2 = *(uint64_t **)(param_1 + 0x20);
  for (puVar4 = *(uint64_t **)(param_1 + 0x18); puVar4 != puVar2; puVar4 = puVar4 + 0xe) {
    *puVar4 = &unknown_var_720_ptr;
  }
  puVar2 = *(uint64_t **)(param_1 + 0x18);
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
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
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180170e50(longlong param_1)
void FUN_180170e50(longlong param_1)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int8_t auStack_98 [32];
  uint64_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  ulonglong uStack_18;
  
  uStack_30 = 0x180170e65;
  FUN_180173c40(*(uint64_t *)(param_1 + 0xc0));
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  lVar4 = GetFocus();
  uStack_68 = CONCAT31(uStack_68._1_3_,*(longlong *)(lVar3 + 8) == lVar4);
  lVar4 = WindowFromPoint(CONCAT44(uStack_60,uStack_64));
  uStack_5c = CONCAT31(uStack_5c._1_3_,lVar4 == *(longlong *)(lVar3 + 8));
  GetWindowRect(*(longlong *)(lVar3 + 8),&uStack_58);
  lVar4 = GetConsoleWindow();
  if (lVar4 != 0) {
    GetWindowRect(lVar4,&uStack_48);
  }
  uStack_28 = (int32_t)uStack_78;
  uStack_24 = uStack_78._4_4_;
  uStack_20 = (int32_t)uStack_70;
  uStack_1c = uStack_70._4_4_;
  MapWindowPoints(*(uint64_t *)(lVar3 + 8),0,&uStack_28,2);
  uStack_38 = CONCAT44(uStack_24,uStack_28);
  GetClientRect(*(uint64_t *)(lVar3 + 8),&uStack_78);
  GetCursorPos(&uStack_64);
  uVar5 = (ulonglong)(*(int *)(lVar3 + 0x13c) - 1U & 1);
  puVar1 = (uint64_t *)(lVar3 + 0xac + uVar5 * 0x48);
  *puVar1 = uStack_78;
  puVar1[1] = uStack_70;
  puVar1 = (uint64_t *)(lVar3 + 0xbc + uVar5 * 0x48);
  *puVar1 = CONCAT44(uStack_64,uStack_68);
  puVar1[1] = CONCAT44(uStack_5c,uStack_60);
  puVar1 = (uint64_t *)(lVar3 + 0xcc + uVar5 * 0x48);
  *puVar1 = uStack_58;
  puVar1[1] = uStack_50;
  puVar2 = (int32_t *)(lVar3 + 0xdc + uVar5 * 0x48);
  *puVar2 = (int32_t)uStack_48;
  puVar2[1] = uStack_48._4_4_;
  puVar2[2] = (int32_t)uStack_40;
  puVar2[3] = uStack_40._4_4_;
  *(uint64_t *)(lVar3 + 0xec + uVar5 * 0x48) = uStack_38;
  LOCK();
  *(int *)(lVar3 + 0x13c) = *(int *)(lVar3 + 0x13c) + 1;
  UNLOCK();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180170e80(longlong param_1)
void FUN_180170e80(longlong param_1)

{
  void *puVar1;
  int8_t uVar2;
  int iVar3;
  longlong lVar4;
  uint64_t uVar5;
  void *puVar6;
  int8_t auStack_68 [32];
  longlong lStack_48;
  longlong lStack_40;
  int32_t uStack_38;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_68;
  switch(*(int32_t *)(param_1 + 0x28)) {
  case 0:
    FUN_180173950(*(uint64_t *)(param_1 + 0x20),*(uint64_t *)(param_1 + 0x30));
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
  case 1:
    FUN_180173ab0(*(longlong *)(param_1 + 0x20),*(longlong *)(param_1 + 0x20) + 0x148);
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
  case 2:
    ShowWindow(*(uint64_t *)(*(longlong *)(param_1 + 0x20) + 8),5);
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
  case 3:
    ShowWindow(*(uint64_t *)(*(longlong *)(param_1 + 0x20) + 8),0);
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
  case 4:
    SetFocus(*(uint64_t *)(*(longlong *)(param_1 + 0x20) + 8));
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
  case 5:
    iStack_28 = *(int *)(param_1 + 0x30);
    iStack_24 = *(int32_t *)(param_1 + 0x34);
    ClientToScreen(*(uint64_t *)(*(longlong *)(param_1 + 0x20) + 8),&iStack_28);
    SetCursorPos(iStack_28,iStack_24);
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
  case 6:
    GetCursorPos(&iStack_28);
    iStack_28 = iStack_28 + *(int *)(param_1 + 0x30);
    iStack_24 = iStack_24 + *(int *)(param_1 + 0x34);
    SetCursorPos();
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
  case 7:
    iStack_28 = *(int *)(param_1 + 0x34);
    iStack_24 = *(int *)(param_1 + 0x38);
    iStack_20 = *(int *)(param_1 + 0x3c);
    iStack_1c = *(int *)(param_1 + 0x40);
    if (*(int *)(param_1 + 0x30) == 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
    }
    else {
      if (*(int *)(param_1 + 0x30) != 1) break;
      lVar4 = GetConsoleWindow();
    }
    if (lVar4 != 0) {
      uStack_38 = 0x40;
      lStack_40 = CONCAT44(lStack_40._4_4_,iStack_1c - iStack_24);
      lStack_48 = CONCAT44(lStack_48._4_4_,iStack_20 - iStack_28);
      SetWindowPos(lVar4,0);
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
    }
    break;
  case 8:
    if (*(char *)(param_1 + 0x30) == '\0') {
      iVar3 = ClipCursor(0);
      *(bool *)(param_1 + 0x30) = iVar3 != 0;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
    }
    iStack_1c = *(int32_t *)(param_1 + 0x40);
    iStack_28 = *(int *)(param_1 + 0x34);
    iStack_20 = *(int32_t *)(param_1 + 0x3c);
    iStack_24 = *(int32_t *)(param_1 + 0x38);
    iVar3 = ClipCursor(&iStack_28);
    *(bool *)(param_1 + 0x30) = iVar3 != 0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
  case 9:
    uVar2 = FUN_1801720a0(*(uint64_t *)(param_1 + 0x20),*(int32_t *)(param_1 + 0x30));
    *(int8_t *)(*(longlong *)(param_1 + 0x20) + 0x168) = uVar2;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
  case 10:
    FUN_180173be0(*(uint64_t *)(param_1 + 0x20),*(int8_t *)(param_1 + 0x30),
                  *(int32_t *)(param_1 + 0x34));
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
  case 0xb:
    lVar4 = *(longlong *)(param_1 + 0x20);
    switch(*(int32_t *)(param_1 + 0x30)) {
    case 1:
      uVar5 = LoadCursorFromFileA();
      *(uint64_t *)(lVar4 + 0x40) = uVar5;
      break;
    case 2:
      uVar5 = LoadCursorFromFileA();
      *(uint64_t *)(lVar4 + 0x50) = uVar5;
      break;
    case 3:
      uVar5 = LoadCursorFromFileA();
      *(uint64_t *)(lVar4 + 0x58) = uVar5;
      break;
    case 4:
      uVar5 = LoadCursorFromFileA();
      *(uint64_t *)(lVar4 + 0x60) = uVar5;
      break;
    case 5:
      uVar5 = LoadCursorFromFileA();
      *(uint64_t *)(lVar4 + 0x68) = uVar5;
      break;
    case 6:
      uVar5 = LoadCursorFromFileA();
      *(uint64_t *)(lVar4 + 0x70) = uVar5;
      break;
    case 7:
      uVar5 = LoadCursorFromFileA();
      *(uint64_t *)(lVar4 + 0x78) = uVar5;
      break;
    case 8:
      uVar5 = LoadCursorFromFileA();
      *(uint64_t *)(lVar4 + 0x80) = uVar5;
      break;
    case 9:
      uVar5 = LoadCursorFromFileA();
      *(uint64_t *)(lVar4 + 0x90) = uVar5;
      break;
    case 10:
      uVar5 = LoadCursorFromFileA();
      *(uint64_t *)(lVar4 + 0x98) = uVar5;
      break;
    case 0xb:
      uVar5 = LoadCursorFromFileA(*(uint64_t *)(param_1 + 0x38));
      *(uint64_t *)(lVar4 + 0x48) = uVar5;
    }
    break;
  case 0xc:
    lVar4 = *(longlong *)(param_1 + 0x20);
    lStack_48 = lVar4 + 0x38;
    lStack_40 = lVar4 + 0x18;
    FUN_180173720(lVar4,*(int32_t *)(param_1 + 0x30),*(int32_t *)(param_1 + 0x34),
                  *(int8_t *)(param_1 + 0x38));
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
  case 0xd:
    puVar1 = *(void **)(*(longlong *)(param_1 + 0x20) + 0x150);
    puVar6 = &system_buffer_ptr;
    if (puVar1 != (void *)0x0) {
      puVar6 = puVar1;
    }
    SetWindowTextA(*(uint64_t *)(*(longlong *)(param_1 + 0x20) + 8),puVar6);
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
}





// 函数: void FUN_180171037(longlong param_1,uint64_t param_2,longlong param_3)
void FUN_180171037(longlong param_1,uint64_t param_2,longlong param_3)

{
  uint in_EAX;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong in_stack_00000050;
  
  if (in_EAX < 0xb) {
    UNRECOVERED_JUMPTABLE =
         (code *)((ulonglong)*(uint *)(param_3 + 0x17128c + (longlong)(int)in_EAX * 4) + param_3);
                    // WARNING: Could not recover jumptable at 0x000180171056. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(param_1 + 0x38),UNRECOVERED_JUMPTABLE);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180171067(void)
void FUN_180171067(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}





