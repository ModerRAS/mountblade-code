#include "TaleWorlds.Native.Split.h"

// 99_part_13_part026.c - 8 个函数

// 函数: void FUN_1808b59b0(longlong param_1)
void FUN_1808b59b0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  for (plVar2 = *(longlong **)(param_1 + 0x60);
      (*(longlong **)(param_1 + 0x60) <= plVar2 &&
      (plVar2 < *(longlong **)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 0x68) * 2));
      plVar2 = plVar2 + 2) {
    iVar1 = FUN_180740190(*(uint64_t *)(*plVar2 + 0x30),*(uint64_t *)(param_1 + 0x30),plVar2[1])
    ;
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = FUN_1808b41e0(param_1 + 0x60);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffff7;
  }
  return;
}



uint64_t FUN_1808b5a30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong *puVar12;
  
  cVar3 = (**(code **)(*param_2 + 0x38))(param_2);
  if ((cVar3 != '\0') || (*(short *)((longlong)param_2 + 0xc) == 7)) {
    if (*(longlong *)(param_1 + 0x48) == 0) {
      puVar12 = (ulonglong *)(*(longlong *)(param_1 + 0x38) + 0x7a8);
    }
    else {
      puVar12 = (ulonglong *)(*(longlong *)(param_1 + 0x48) + 0x4b0);
    }
    plVar10 = (longlong *)*puVar12;
    while ((plVar9 = (longlong *)*puVar12, plVar9 <= plVar10 &&
           (iVar8 = (int)puVar12[1], plVar10 < plVar9 + iVar8))) {
      lVar1 = *plVar10;
      if (lVar1 == param_1) {
        iVar4 = (int)((longlong)plVar10 - (longlong)plVar9 >> 3);
        if ((iVar4 < 0) || (iVar8 <= iVar4)) {
          return 0x1c;
        }
        iVar11 = (iVar8 - iVar4) + -1;
        if (0 < iVar11) {
                    // WARNING: Subroutine does not return
          memmove(plVar9 + iVar4,plVar9 + iVar4 + 1,(longlong)iVar11 << 3);
        }
        *(int *)(puVar12 + 1) = iVar8 + -1;
      }
      else {
        plVar2 = *(longlong **)(lVar1 + 0x60);
        plVar9 = plVar2;
        while( true ) {
          if ((plVar9 < plVar2) || (plVar2 + (longlong)*(int *)(lVar1 + 0x68) * 2 <= plVar9))
          goto LAB_1808b5b9b;
          if (*plVar9 == param_1) break;
          plVar9 = plVar9 + 2;
        }
        uVar5 = FUN_180740190(*(uint64_t *)(param_1 + 0x30),*(uint64_t *)(lVar1 + 0x30),
                              plVar9[1]);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        iVar8 = (int)((longlong)plVar9 - *(longlong *)(lVar1 + 0x60) >> 4);
        if (iVar8 < 0) {
          return 0x1c;
        }
        iVar4 = *(int *)(lVar1 + 0x68);
        if (iVar4 <= iVar8) {
          return 0x1c;
        }
        iVar11 = (iVar4 - iVar8) + -1;
        if (0 < iVar11) {
          lVar7 = (longlong)iVar11;
          puVar6 = (int32_t *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar1 + 0x60));
          if (0 < lVar7) {
            do {
              *puVar6 = puVar6[4];
              puVar6[1] = puVar6[5];
              puVar6[2] = puVar6[6];
              puVar6[3] = puVar6[7];
              lVar7 = lVar7 + -1;
              puVar6 = puVar6 + 4;
            } while (lVar7 != 0);
            iVar4 = *(int *)(lVar1 + 0x68);
          }
        }
        *(int *)(lVar1 + 0x68) = iVar4 + -1;
LAB_1808b5b9b:
        plVar10 = plVar10 + 1;
      }
    }
  }
  return 0;
}



uint64_t FUN_1808b5bd0(longlong param_1,byte param_2,byte param_3)

{
  uint uVar1;
  uint64_t uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if ((((byte)(uVar1 >> 5) & 1) != param_2) || (((byte)(uVar1 >> 6) & 1) != param_3)) {
    *(uint *)(param_1 + 0x88) =
         (((uint)param_2 << 5 | uVar1) & ~((param_2 ^ 1) << 5) | (uint)param_3 << 6) &
         ~((param_3 ^ 1) << 6);
    uVar2 = func_0x0001808b40b0(param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



uint64_t FUN_1808b5c40(longlong param_1,byte param_2)

{
  uint64_t uVar1;
  
  if (((byte)(*(uint *)(param_1 + 0x88) >> 7) & 1) != param_2) {
    *(uint *)(param_1 + 0x88) =
         ((uint)param_2 << 7 | *(uint *)(param_1 + 0x88)) & ~((param_2 ^ 1) << 7);
    uVar1 = func_0x0001808b40b0();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



uint64_t FUN_1808b5c90(longlong param_1,int param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uStackX_8;
  int32_t auStackX_10 [6];
  
  uVar1 = *(uint64_t *)(param_1 + 0x30);
  if (param_2 == 0) {
    uVar2 = FUN_180740b40(uVar1,&uStackX_8);
    if ((int)uVar2 == 0) {
      uVar2 = FUN_18073a840(uStackX_8,0,auStackX_10,0);
      if ((int)uVar2 == 0) {
        FUN_1807411a0(uVar1,0,0,auStackX_10[0]);
        return 0;
      }
    }
  }
  else {
    FUN_1807411a0(uVar1,0,0,param_2);
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1808b5d00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  
  if (param_2 != *(longlong *)(param_1 + 0x48)) {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x40);
      uVar2 = FUN_1808b5a30(param_1,lVar1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (((*(short *)(lVar1 + 0xc) == 7) && ((*(uint *)(param_1 + 0x88) >> 3 & 1) != 0)) &&
         (uVar2 = FUN_1808b59b0(param_1), (int)uVar2 != 0)) {
        return uVar2;
      }
      if (((*(int *)(param_1 + 0x70) != -1) || (*(int *)(param_1 + 0x74) != -1)) &&
         (uVar2 = FUN_180862910(*(uint64_t *)(param_1 + 0x48),param_1), (int)uVar2 != 0)) {
        return uVar2;
      }
    }
    *(longlong *)(param_1 + 0x48) = param_2;
    if (param_2 != 0) {
      if (((*(int *)(param_1 + 0x70) != -1) || (*(int *)(param_1 + 0x74) != -1)) &&
         (uVar2 = FUN_18085ec90(param_2,param_1), (int)uVar2 != 0)) {
        return uVar2;
      }
      lVar1 = *(longlong *)(param_1 + 0x40);
      uVar2 = FUN_1808b3d00(param_1,lVar1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((*(short *)(lVar1 + 0xc) == 7) && (uVar2 = FUN_1808b3c20(param_1,lVar1), (int)uVar2 != 0))
      {
        return uVar2;
      }
    }
  }
  return 0;
}






// 函数: void FUN_1808b5de0(longlong param_1,byte param_2)
void FUN_1808b5de0(longlong param_1,byte param_2)

{
  void *puStack_18;
  longlong lStack_10;
  
  *(uint *)(param_1 + 0x88) = ((uint)param_2 * 2 | *(uint *)(param_1 + 0x88)) & ~((param_2 ^ 1) * 2)
  ;
  puStack_18 = &UNK_180987150;
  lStack_10 = param_1;
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))(*(longlong **)(param_1 + 0x40),&puStack_18);
  return;
}



uint64_t FUN_1808b5e30(longlong param_1,byte param_2)

{
  uint64_t uVar1;
  
  if (((byte)(*(uint *)(param_1 + 0x88) >> 8) & 1) != param_2) {
    *(uint *)(param_1 + 0x88) =
         ((uint)param_2 << 8 | *(uint *)(param_1 + 0x88)) & ~((param_2 ^ 1) << 8);
    uVar1 = func_0x0001808b40b0();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



uint64_t FUN_1808b5eb0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  
  iVar3 = *(int *)(param_2 + 0x58);
  iVar9 = 0;
  if (0 < iVar3) {
    lVar10 = 0;
    do {
      lVar1 = *(longlong *)(lVar10 + *(longlong *)(param_2 + 0x48));
      if (lVar1 == 0) {
        return 0x1c;
      }
      iVar4 = *(int *)(lVar1 + 0x10);
      if (iVar4 == 0) {
        uVar6 = FUN_1808b2f30(param_1,iVar9 + 1000);
LAB_1808b6046:
        if (((int)uVar6 != 0x44) && ((int)uVar6 != 0)) {
          return uVar6;
        }
      }
      else {
        if (iVar4 == 1) {
          uVar6 = FUN_1807417b0(*(uint64_t *)(param_1 + 0x30),iVar9,*(int32_t *)(lVar1 + 0x18))
          ;
          goto LAB_1808b6046;
        }
        if (iVar4 == 2) {
          uVar6 = FUN_180741460(*(uint64_t *)(param_1 + 0x30),iVar9,*(int8_t *)(lVar1 + 0x18))
          ;
          goto LAB_1808b6046;
        }
        if (iVar4 != 3) {
          return 0x1c;
        }
        if (param_3 == 0) {
LAB_1808b5fb7:
          uVar8 = *(ulonglong *)(lVar1 + 8);
          if (uVar8 != 0) {
            uVar8 = (ulonglong)*(uint *)(uVar8 + 0x30);
          }
          uVar7 = *(uint64_t *)(param_1 + 0x30);
          if (((int)uVar8 < 0) ||
             ((uVar6 = FUN_1807410d0(uVar7,FUN_1808b4e90), (int)uVar6 == 0 &&
              (uVar6 = func_0x0001808d9fc0(lVar1 + 0x18), (int)uVar6 == 0)))) {
            uVar5 = func_0x0001808d9e60(lVar1 + 0x18);
            uVar6 = func_0x0001808d9e70(lVar1 + 0x18);
            uVar6 = FUN_180741560(uVar7,iVar9,uVar6,uVar5);
            if ((int)uVar6 == 0) goto LAB_1808b604f;
          }
          goto LAB_1808b6046;
        }
        if (iVar3 != *(int *)(param_3 + 0x58)) {
          return 0x1c;
        }
        lVar2 = *(longlong *)(lVar10 + *(longlong *)(param_3 + 0x48));
        if (lVar2 == 0) {
          return 0x1c;
        }
        if (*(int *)(lVar2 + 0x10) != 3) {
          return 0x1c;
        }
        iVar3 = func_0x0001808d9e60(lVar2 + 0x18);
        iVar4 = func_0x0001808d9e60(lVar1 + 0x18);
        if (iVar3 != iVar4) goto LAB_1808b5fb7;
        iVar3 = func_0x0001808d9e60(lVar1 + 0x18);
        if (0 < iVar3) {
          iVar3 = func_0x0001808d9e60(lVar1 + 0x18);
          uVar6 = func_0x0001808d9e70(lVar1 + 0x18);
          uVar7 = func_0x0001808d9e70(lVar2 + 0x18);
          iVar3 = memcmp(uVar7,uVar6,(longlong)iVar3);
          if (iVar3 != 0) goto LAB_1808b5fb7;
        }
      }
LAB_1808b604f:
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + 8;
      iVar3 = *(int *)(param_2 + 0x58);
    } while (iVar9 < iVar3);
  }
  return 0;
}



uint64_t FUN_1808b6090(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10) + -1000;
  if (iVar2 < 0) {
    return 0x1c;
  }
  if (iVar2 < *(int *)(param_2 + 0x58)) {
    uVar1 = FUN_1807416a0(*(uint64_t *)(*(longlong *)(param_1 + 8) + 0x30),iVar2,
                          *(int32_t *)(param_1 + 0x14));
    if (((int)uVar1 != 0x44) && ((int)uVar1 != 0)) {
      return uVar1;
    }
  }
  return 0;
}



uint64_t FUN_1808b60e0(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x80) != 0) {
    iVar2 = *(int *)(param_1 + 0x10) + -1000;
    if (iVar2 < 0) {
      return 0x1c;
    }
    if (iVar2 < *(int *)(param_2 + 0x58)) {
      uVar1 = FUN_1807416a0(*(uint64_t *)(*(longlong *)(param_1 + 8) + 0x30),iVar2,
                            *(int32_t *)(param_1 + 0x14));
      if (((int)uVar1 != 0x44) && ((int)uVar1 != 0)) {
        return uVar1;
      }
    }
  }
  return 0;
}



uint64_t FUN_1808b61b0(longlong param_1)

{
  longlong lVar1;
  uint64_t uVar2;
  ulonglong uVar3;
  int32_t uVar4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0x1c;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  *(int32_t *)(lVar1 + 0x84) = *(int32_t *)(param_1 + 0x14);
  *(uint *)(lVar1 + 0x88) = *(uint *)(lVar1 + 0x88) | 1;
  if (-80.0 < *(float *)(lVar1 + 0x84)) {
    uVar4 = powf(0x41200000,*(float *)(lVar1 + 0x84) * 0.05);
  }
  else {
    uVar4 = 0;
  }
  for (uVar3 = *(ulonglong *)(lVar1 + 0x60);
      (*(ulonglong *)(lVar1 + 0x60) <= uVar3 &&
      (uVar3 < (longlong)*(int *)(lVar1 + 0x68) * 0x10 + *(ulonglong *)(lVar1 + 0x60)));
      uVar3 = uVar3 + 0x10) {
    uVar2 = FUN_1807418b0(*(uint64_t *)(uVar3 + 8),uVar4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



uint64_t FUN_1808b6270(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte bVar2;
  uint64_t uVar3;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + 0x88);
  if ((*(char *)(param_2 + 0x6c) == '\0') || ((uVar1 >> 1 & 1) != 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  if (bVar2 != ((byte)(uVar1 >> 3) & 1)) {
    if (bVar2 == 0) {
      uVar3 = FUN_1808b59b0(*(longlong *)(param_1 + 8));
    }
    else {
      uVar3 = FUN_1808b3c20();
    }
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  return 0;
}



longlong FUN_1808b62e0(longlong param_1,uint64_t param_2,uint64_t param_3,byte param_4)

{
  longlong lVar1;
  int32_t uVar2;
  
  *(longlong *)param_1 = param_1;
  lVar1 = param_1 + 0x10;
  *(longlong *)(param_1 + 8) = param_1;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(param_1 + 0x18) = lVar1;
  *(uint64_t *)(param_1 + 0x20) = param_2;
  *(uint64_t *)(param_1 + 0x28) = param_3;
  lVar1 = param_1 + 0x38;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(param_1 + 0x40) = lVar1;
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x50) = 0;
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = func_0x0001808b2150(param_1);
  }
  *(uint *)(param_1 + 0x5c) = (uint)param_4;
  *(int32_t *)(param_1 + 0x58) = uVar2;
  return param_1;
}



uint64_t FUN_1808b63b0(uint64_t param_1,ulonglong param_2)

{
  func_0x0001808c9890();
  if ((param_2 & 1) != 0) {
    free(param_1,0x238);
  }
  return param_1;
}



uint64_t FUN_1808b63f0(uint64_t param_1,ulonglong param_2)

{
  func_0x0001808c9a30();
  if ((param_2 & 1) != 0) {
    free(param_1,0x238);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b6430(uint64_t *param_1,longlong *param_2,int param_3,int32_t *param_4)
void FUN_1808b6430(uint64_t *param_1,longlong *param_2,int param_3,int32_t *param_4)

{
  int iVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong *plVar4;
  longlong *plVar5;
  int8_t auStack_178 [32];
  uint uStack_158;
  uint uStack_150;
  uint uStack_148;
  uint uStack_140;
  uint uStack_138;
  uint uStack_130;
  uint uStack_128;
  uint uStack_120;
  uint uStack_118;
  uint uStack_110;
  int32_t uStack_108;
  ushort uStack_104;
  ushort uStack_102;
  byte bStack_100;
  byte bStack_ff;
  byte bStack_fe;
  byte bStack_fd;
  byte bStack_fc;
  byte bStack_fb;
  byte bStack_fa;
  byte bStack_f9;
  uint64_t **ppuStack_f8;
  uint64_t **ppuStack_f0;
  uint64_t **ppuStack_e8;
  uint64_t **ppuStack_e0;
  longlong *plStack_d8;
  void **ppuStack_d0;
  uint64_t uStack_c8;
  uint64_t **ppuStack_c0;
  uint64_t **ppuStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  int32_t uStack_a0;
  int32_t uStack_9c;
  uint64_t *puStack_98;
  void *puStack_90;
  longlong *plStack_88;
  int iStack_80;
  int32_t uStack_7c;
  int8_t auStack_78 [40];
  ulonglong uStack_50;
  
  uStack_50 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  plVar5 = (longlong *)param_2[4];
  plVar4 = param_2 + 4;
  puStack_98 = param_1;
  if (plVar5 != plVar4) {
    while ((int)plVar5[8] != param_3) {
      if ((plVar5 == plVar4) || (plVar5 = (longlong *)*plVar5, plVar5 == plVar4))
      goto LAB_1808b648f;
    }
    if (plVar5 != (longlong *)0x0) {
      puStack_90 = &UNK_180987530;
      ppuStack_f8 = &ppuStack_f8;
      ppuStack_f0 = &ppuStack_f8;
      ppuStack_e8 = &ppuStack_e8;
      ppuStack_e0 = &ppuStack_e8;
      ppuStack_d0 = &puStack_90;
      uStack_c8 = 0;
      ppuStack_c0 = &ppuStack_c0;
      ppuStack_b8 = &ppuStack_c0;
      uStack_7c = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      plStack_d8 = plVar5;
      plStack_88 = param_2;
      iStack_80 = param_3;
      uStack_a0 = func_0x0001808b2150(&ppuStack_f8);
      uStack_9c = 1;
      if (((((int)plVar5[6] == 0) && (*(int *)((longlong)plVar5 + 0x34) == 0)) &&
          ((int)plVar5[7] == 0)) && (*(int *)((longlong)plVar5 + 0x3c) == 0)) {
LAB_1808b659b:
        if ((int)plVar5[3] != 0) {
          (**(code **)(*param_2 + 0x20))(param_2,&uStack_108);
          uStack_110 = (uint)bStack_f9;
          uStack_118 = (uint)bStack_fa;
          uStack_120 = (uint)bStack_fb;
          uStack_128 = (uint)bStack_fc;
          uStack_130 = (uint)bStack_fd;
          uStack_138 = (uint)bStack_fe;
          uStack_140 = (uint)bStack_ff;
          uStack_148 = (uint)bStack_100;
          uStack_150 = (uint)uStack_102;
          uStack_158 = (uint)uStack_104;
                    // WARNING: Subroutine does not return
          FUN_18076b390(auStack_78,0x27,&UNK_180958180,uStack_108);
        }
        if ((int)plVar5[5] != 0) {
          (**(code **)(*param_2 + 0x20))(param_2,&uStack_108);
          uVar3 = FUN_1808b8590(param_1 + 5,&uStack_108,param_3);
          iVar1 = FUN_1808b3850(&ppuStack_f8,uVar3);
          if (iVar1 != 0) goto LAB_1808b668f;
        }
        iVar1 = FUN_1808b3060(&ppuStack_f8,0);
        if (iVar1 == 0) {
          *param_4 = uStack_7c;
          FUN_1808b1880(&ppuStack_f8);
          goto LAB_1808b64a3;
        }
      }
      else {
        lVar2 = FUN_180869ab0(*param_1);
        if (lVar2 == 0) {
          FUN_1808b1880(&ppuStack_f8);
          goto LAB_1808b64a3;
        }
        iVar1 = func_0x0001808b1cd0(&ppuStack_f8,lVar2);
        if (iVar1 == 0) goto LAB_1808b659b;
      }
LAB_1808b668f:
      FUN_1808b1880(&ppuStack_f8);
      goto LAB_1808b64a3;
    }
  }
LAB_1808b648f:
  FUN_1808b05f0(param_2,param_3,param_4);
LAB_1808b64a3:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_178);
}






// 函数: void FUN_1808b65b2(void)
void FUN_1808b65b2(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x20))();
                    // WARNING: Subroutine does not return
  FUN_18076b390();
}






// 函数: void FUN_1808b6645(int32_t param_1)
void FUN_1808b6645(int32_t param_1)

{
  int iVar1;
  uint64_t uVar2;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong *unaff_R12;
  int32_t *unaff_R13;
  longlong unaff_R14;
  int32_t unaff_R15D;
  
  if (*(int *)(unaff_R14 + 0x28) == 0) {
LAB_1808b667e:
    iVar1 = FUN_1808b3060(unaff_RBP + -0x80,0);
    if (iVar1 == 0) {
      *unaff_R13 = *(int32_t *)(unaff_RBP + -4);
      FUN_1808b1880(unaff_RBP + -0x80);
      goto LAB_1808b64a3;
    }
  }
  else {
    (**(code **)(*unaff_R12 + 0x20))(param_1,&stack0x00000070);
    uVar2 = FUN_1808b8590(unaff_RDI + 0x28,&stack0x00000070,unaff_R15D);
    iVar1 = FUN_1808b3850(unaff_RBP + -0x80,uVar2);
    if (iVar1 == 0) goto LAB_1808b667e;
  }
  FUN_1808b1880(unaff_RBP + -0x80);
LAB_1808b64a3:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x28) ^ (ulonglong)&stack0x00000000);
}



uint64_t FUN_1808b66c0(int8_t *param_1)

{
  longlong lVar1;
  uint64_t uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar1 + 0x60) < 1) {
    return 0x1c;
  }
  if ((*(int *)(lVar1 + 0x60) == 1) && (uVar2 = FUN_1808501b0(lVar1), (int)uVar2 != 0)) {
    return uVar2;
  }
  *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + -1;
  *param_1 = 1;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(lVar1 + 0x60) < 1) {
    return 0x1c;
  }
  if ((*(int *)(lVar1 + 0x60) == 1) && (uVar2 = FUN_18084f7f0(lVar1), (int)uVar2 != 0)) {
    return uVar2;
  }
  *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + -1;
  param_1[0x20] = 1;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(lVar1 + 0x60) < 1) {
    return 0x1c;
  }
  if ((*(int *)(lVar1 + 0x60) == 1) && (uVar2 = FUN_18084fcd0(lVar1), (int)uVar2 != 0)) {
    return uVar2;
  }
  *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + -1;
  param_1[0x10] = 1;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(int *)(lVar1 + 0x60) < 1) {
    return 0x1c;
  }
  if ((*(int *)(lVar1 + 0x60) == 1) && (uVar2 = FUN_180850690(lVar1), (int)uVar2 != 0)) {
    return uVar2;
  }
  *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + -1;
  param_1[0x30] = 1;
  uVar2 = FUN_1808bd690(*(uint64_t *)(param_1 + 0x40));
  return uVar2;
}



uint64_t
FUN_1808b6780(int32_t *param_1,longlong *param_2,uint64_t param_3,longlong param_4,
             longlong *param_5)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong lStackX_20;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  void *puStack_58;
  longlong lStack_50;
  int32_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  longlong lStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  longlong lStack_18;
  
  lStackX_20 = 0;
  if (param_4 == 0) {
    if (((((int)param_2[8] == 0) && (*(int *)((longlong)param_2 + 0x44) == 0)) &&
        ((int)param_2[9] == 0)) && (*(int *)((longlong)param_2 + 0x4c) == 0)) {
      return 0x1c;
    }
    uStack_68 = (int32_t)param_2[8];
    uStack_64 = *(int32_t *)((longlong)param_2 + 0x44);
    uStack_60 = (int32_t)param_2[9];
    uStack_5c = *(int32_t *)((longlong)param_2 + 0x4c);
    uVar2 = FUN_180860650(*(uint64_t *)(param_1 + 6),&uStack_68,&lStackX_20);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (lStackX_20 == 0) {
      return 0x1c;
    }
  }
  else {
    if ((int)param_2[8] != 0) {
      return 0x1c;
    }
    if (*(int *)((longlong)param_2 + 0x44) != 0) {
      return 0x1c;
    }
    if ((int)param_2[9] != 0) {
      return 0x1c;
    }
    if (*(int *)((longlong)param_2 + 0x4c) != 0) {
      return 0x1c;
    }
  }
  puStack_58 = &UNK_180987558;
  uStack_48 = *param_1;
  uStack_40 = *(uint64_t *)(param_1 + 2);
  uStack_38 = *(uint64_t *)(param_1 + 4);
  uStack_20 = *(uint64_t *)(param_1 + 6);
  lStack_50 = 0;
  lStack_30 = lStackX_20;
  uStack_28 = param_3;
  lStack_18 = param_4;
  uVar2 = (**(code **)(*param_2 + 0x28))(param_2,&puStack_58);
  lVar1 = lStack_50;
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (lStack_50 == 0) {
    return 0x1c;
  }
  uVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 6) + 8) + 0x30))();
  uVar2 = FUN_1808b89f0(uVar2,lVar1);
  if ((int)uVar2 == 0) {
    *param_5 = lVar1;
    return 0;
  }
  return uVar2;
}



int32_t FUN_1808b68c0(uint64_t *param_1,longlong param_2,ulonglong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint64_t uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint auStackX_8 [2];
  longlong lStackX_20;
  uint64_t auStack_38 [2];
  
  lVar4 = (**(code **)(*(longlong *)*param_1 + 0x18))();
  if (lVar4 == 0) {
    return 0x1c;
  }
  plVar10 = (longlong *)0x0;
  auStack_38[0] = 0;
  iVar3 = FUN_18088c740(auStack_38,lVar4);
  if (iVar3 == 0) {
    lVar5 = (*(code *)**(uint64_t **)(param_2 + 8))(param_2 + 8);
    if (**(int **)(lVar5 + 0xd0) == 0) {
      lVar5 = (*(code *)**(uint64_t **)(param_2 + 8))(param_2 + 8);
      iVar3 = FUN_18088c060(*(int32_t *)(lVar4 + 0x18),*(uint64_t *)(lVar5 + 0xd0));
      if (iVar3 != 0) goto LAB_1808b6a7b;
    }
    if (*(longlong *)(param_2 + 0x80) == 0) {
      lStackX_20 = 0;
      iVar3 = FUN_180867bc0(&lStackX_20);
      if (iVar3 == 0) {
        uVar6 = (*(code *)**(uint64_t **)(param_2 + 8))(param_2 + 8);
        FUN_180868490(lStackX_20,lVar4,uVar6);
        plVar8 = (longlong *)(param_2 + 0x240);
        plVar7 = (longlong *)(*plVar8 + -0x18);
        if (*plVar8 == 0) {
          plVar7 = plVar10;
        }
        plVar9 = plVar10;
        plVar1 = plVar10;
        plVar2 = plVar10;
        if (plVar7 != (longlong *)0x0) {
          plVar9 = plVar7 + 3;
        }
        while (plVar9 != plVar8) {
          if (*(int *)(lStackX_20 + 0x28) <= (int)plVar2) goto LAB_1808b6a7b;
          plVar7 = plVar9 + 4;
          if (plVar9 == (longlong *)0x0) {
            plVar7 = (longlong *)0x38;
          }
          *(longlong *)(*(longlong *)(lStackX_20 + 0x20) + 8 + (longlong)plVar1) = *plVar7;
          if (plVar9 == plVar8) goto LAB_1808b6a7b;
          plVar7 = (longlong *)(*plVar9 + -0x18);
          if (*plVar9 == 0) {
            plVar7 = plVar10;
          }
          plVar9 = plVar10;
          if (plVar7 != (longlong *)0x0) {
            plVar9 = plVar7 + 3;
          }
          plVar1 = plVar1 + 3;
          plVar2 = (longlong *)(ulonglong)((int)plVar2 + 1);
        }
        *(longlong *)(param_2 + 0x80) = lStackX_20;
        func_0x00018085eef0(param_2);
        *(longlong *)(lStackX_20 + 0x10) = param_2;
        FUN_18085ff30(param_2);
        auStackX_8[0] = 0;
        plVar8 = (longlong *)(lStackX_20 + 8);
        if (lStackX_20 == 0) {
          plVar8 = plVar10;
        }
        iVar3 = func_0x00018088c500(plVar8,auStackX_8);
        if (iVar3 == 0) {
          *param_3 = (ulonglong)auStackX_8[0];
        }
      }
    }
  }
LAB_1808b6a7b:
                    // WARNING: Subroutine does not return
  FUN_18088c790(auStack_38);
}






// 函数: void FUN_1808b68ee(void)
void FUN_1808b68ee(void)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong *unaff_R14;
  longlong *plVar8;
  uint64_t uStackX_20;
  uint in_stack_00000060;
  longlong in_stack_00000078;
  
  plVar8 = (longlong *)0x0;
  uStackX_20 = 0;
  iVar3 = FUN_18088c740(&uStackX_20);
  if (iVar3 == 0) {
    lVar4 = (*(code *)**(uint64_t **)(unaff_RBP + 8))(unaff_RBP + 8);
    if (**(int **)(lVar4 + 0xd0) == 0) {
      lVar4 = (*(code *)**(uint64_t **)(unaff_RBP + 8))(unaff_RBP + 8);
      iVar3 = FUN_18088c060(*(int32_t *)(unaff_RSI + 0x18),*(uint64_t *)(lVar4 + 0xd0));
      if (iVar3 != 0) goto LAB_1808b6a7b;
    }
    if (*(longlong *)(unaff_RBP + 0x80) == 0) {
      in_stack_00000078 = 0;
      iVar3 = FUN_180867bc0(&stack0x00000078);
      if (iVar3 == 0) {
        (*(code *)**(uint64_t **)(unaff_RBP + 8))(unaff_RBP + 8);
        FUN_180868490(in_stack_00000078);
        plVar6 = (longlong *)(unaff_RBP + 0x240);
        plVar5 = (longlong *)(*plVar6 + -0x18);
        if (*plVar6 == 0) {
          plVar5 = plVar8;
        }
        plVar7 = plVar8;
        plVar1 = plVar8;
        plVar2 = plVar8;
        if (plVar5 != (longlong *)0x0) {
          plVar7 = plVar5 + 3;
        }
        while (plVar7 != plVar6) {
          if (*(int *)(in_stack_00000078 + 0x28) <= (int)plVar2) goto LAB_1808b6a7b;
          plVar5 = plVar7 + 4;
          if (plVar7 == (longlong *)0x0) {
            plVar5 = (longlong *)0x38;
          }
          *(longlong *)(*(longlong *)(in_stack_00000078 + 0x20) + 8 + (longlong)plVar1) = *plVar5;
          if (plVar7 == plVar6) goto LAB_1808b6a7b;
          plVar5 = (longlong *)(*plVar7 + -0x18);
          if (*plVar7 == 0) {
            plVar5 = plVar8;
          }
          plVar7 = plVar8;
          if (plVar5 != (longlong *)0x0) {
            plVar7 = plVar5 + 3;
          }
          plVar1 = plVar1 + 3;
          plVar2 = (longlong *)(ulonglong)((int)plVar2 + 1);
        }
        *(longlong *)(unaff_RBP + 0x80) = in_stack_00000078;
        func_0x00018085eef0();
        *(longlong *)(in_stack_00000078 + 0x10) = unaff_RBP;
        FUN_18085ff30();
        in_stack_00000060 = 0;
        plVar6 = (longlong *)(in_stack_00000078 + 8);
        if (in_stack_00000078 == 0) {
          plVar6 = plVar8;
        }
        iVar3 = func_0x00018088c500(plVar6,&stack0x00000060);
        if (iVar3 == 0) {
          *unaff_R14 = (ulonglong)in_stack_00000060;
        }
      }
    }
  }
LAB_1808b6a7b:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStackX_20);
}






// 函数: void FUN_1808b6a9b(void)
void FUN_1808b6a9b(void)

{
  int8_t auStackX_20 [8];
  
                    // WARNING: Subroutine does not return
  FUN_18088c790(auStackX_20);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b6ab0(uint64_t *param_1,uint64_t param_2,int32_t param_3,longlong *param_4,
void FUN_1808b6ab0(uint64_t *param_1,uint64_t param_2,int32_t param_3,longlong *param_4,
                  uint64_t param_5)

{
  int iVar1;
  longlong lVar2;
  int8_t auStack_b8 [32];
  longlong lStack_98;
  longlong *plStack_90;
  longlong lStack_88;
  longlong lStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int8_t auStack_68 [40];
  ulonglong uStack_40;
  
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  lStack_80 = 0;
  lVar2 = (**(code **)(*(longlong *)*param_1 + 0x288))((longlong *)*param_1,param_2,1);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18084b240(param_2,auStack_68);
  }
  lStack_88 = 0;
  if ((((*(int *)(lVar2 + 0x60) == 0) && (*(int *)(lVar2 + 100) == 0)) &&
      (*(int *)(lVar2 + 0x68) == 0)) && (*(int *)(lVar2 + 0x6c) == 0)) {
    if (((*(int *)(lVar2 + 0x40) == 0) && (*(int *)(lVar2 + 0x44) == 0)) &&
       ((*(int *)(lVar2 + 0x48) == 0 && (*(int *)(lVar2 + 0x4c) == 0)))) goto LAB_1808b6c0b;
    uStack_78 = *(int32_t *)(lVar2 + 0x40);
    uStack_74 = *(int32_t *)(lVar2 + 0x44);
    uStack_70 = *(int32_t *)(lVar2 + 0x48);
    uStack_6c = *(int32_t *)(lVar2 + 0x4c);
    iVar1 = FUN_1808bc010(param_1[2],&uStack_78,0,&lStack_88);
    if (iVar1 != 0) goto LAB_1808b6c0b;
  }
  plStack_90 = &lStack_80;
  lStack_98 = param_1[2] + 0x290;
  iVar1 = FUN_1808b6fd0(param_1,lVar2,param_3,lStack_88);
  lVar2 = lStack_80;
  if ((((iVar1 == 0) &&
       ((lStack_88 == 0 ||
        (iVar1 = FUN_18073f130(*(uint64_t *)(lStack_88 + 0x78),
                               *(uint64_t *)(*(longlong *)(lStack_80 + 0x2b0) + 0x78),1,0),
        iVar1 == 0)))) && (iVar1 = FUN_1808624a0(lVar2), iVar1 == 0)) &&
     (iVar1 = FUN_1808b68c0(param_1[2] + 0x3c8,lVar2,param_5), iVar1 == 0)) {
    *param_4 = lVar2;
  }
LAB_1808b6c0b:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




