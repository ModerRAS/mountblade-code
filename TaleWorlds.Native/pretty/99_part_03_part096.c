#include "TaleWorlds.Native.Split.h"

// 99_part_03_part096.c - 9 个函数

// 函数: void FUN_180252ca0(uint64_t param_1,longlong *param_2,int32_t param_3,uint64_t param_4,
void FUN_180252ca0(uint64_t param_1,longlong *param_2,int32_t param_3,uint64_t param_4,
                  int32_t param_5,int32_t param_6)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  uint64_t *puVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  int8_t auStack_9a8 [32];
  uint64_t uStack_988;
  longlong *plStack_970;
  longlong *plStack_968;
  longlong *plStack_960;
  uint64_t uStack_958;
  int32_t uStack_950;
  int32_t uStack_94c;
  int32_t uStack_948;
  int32_t uStack_940;
  int32_t uStack_93c;
  int32_t uStack_938;
  longlong *plStack_930;
  longlong *plStack_928;
  longlong *plStack_920;
  longlong *plStack_918;
  longlong *plStack_910;
  longlong *plStack_908;
  uint64_t uStack_900;
  uint64_t uStack_8f8;
  uint64_t uStack_8f0;
  int32_t uStack_8e8;
  int32_t uStack_8e4;
  int32_t uStack_8e0;
  int32_t uStack_8dc;
  int32_t uStack_8d8;
  int32_t uStack_8d4;
  int32_t uStack_8d0;
  int32_t uStack_8cc;
  int32_t uStack_8c8;
  uint64_t uStack_8c0;
  uint64_t uStack_8b8;
  int32_t uStack_8b0;
  int32_t uStack_8ac;
  int32_t uStack_8a8;
  int32_t uStack_8a4;
  int32_t uStack_8a0;
  int32_t uStack_89c;
  int32_t uStack_898;
  int32_t uStack_894;
  int32_t uStack_890;
  longlong lStack_888;
  longlong lStack_880;
  longlong *plStack_878;
  int8_t auStack_870 [192];
  int32_t uStack_7b0;
  int32_t uStack_7ac;
  uint uStack_7a8;
  uint uStack_7a4;
  int8_t auStack_798 [328];
  int8_t auStack_650 [112];
  longlong *plStack_5e0;
  longlong alStack_5c0 [43];
  longlong lStack_468;
  longlong lStack_460;
  longlong *plStack_458;
  uint64_t uStack_390;
  int32_t uStack_388;
  int32_t uStack_384;
  int8_t auStack_378 [328];
  longlong alStack_230 [14];
  longlong *plStack_1c0;
  longlong alStack_1a0 [43];
  ulonglong uStack_48;
  
  uStack_900 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_9a8;
  plStack_970 = &lStack_888;
  uVar12 = 0;
  lStack_880 = 0;
  lStack_888 = 0;
  plStack_878 = (longlong *)0x0;
  uStack_958 = param_1;
  FUN_180084ea0(auStack_870);
  FUN_1800ed420(auStack_798);
  FUN_1802de3f0(auStack_798,param_2,param_4);
  uStack_950 = param_5;
  uStack_948 = param_6;
  uStack_7ac = 0;
  lVar10 = param_2[0x37];
  uVar2 = *(uint *)(*(longlong *)(lVar10 + 0x1e0) + 0x1588);
  if ((uVar2 >> 0x1a & 1) == 0) {
    uStack_7b0 = uStack_7ac;
    if ((*(uint *)(lVar10 + 0x138) >> 0x13 & 1) != 0) {
      if ((*(uint *)(param_2 + 0x20) & 0x8000) == 0) {
        if (((uVar2 >> 0x1c & 1) == 0) &&
           ((-1 < (char)uVar2 ||
            ((*(ulonglong *)(lVar10 + 0x3a8) & *(ulonglong *)(lVar10 + 0x140)) == 0)))) {
          if ((*(uint *)(lVar10 + 0x138) >> 0x1d & 1) == 0) {
            if ((*(char *)(lVar10 + 0x13c) == '\x06') || (*(char *)(lVar10 + 0x13c) == '\0')) {
              uStack_7b0 = 0x20;
            }
            else {
              uStack_7b0 = 0x40;
            }
          }
          else {
            uStack_7b0 = 0x200;
          }
        }
        else {
          uStack_7b0 = 0x100;
        }
      }
      else {
        uStack_7b0 = 0x2000;
      }
    }
  }
  else {
    uStack_7b0 = 0x800;
    if ((*(uint *)(lVar10 + 0x138) & 0x40000000) == 0) {
      uStack_7b0 = 0x400;
    }
  }
  if ((((*(uint *)(lVar10 + 0x138) & 0x2000000e) == 0) &&
      (uVar2 = *(uint *)(*(longlong *)(lVar10 + 0x1e0) + 0x1588), (uVar2 >> 0x13 & 1) == 0)) &&
     ((*(char *)(lVar10 + 0x13c) == '\x06' || (*(char *)(lVar10 + 0x13c) == '\0')))) {
    if ((*(uint *)(param_2 + 0x20) & 0x8000) == 0) {
      if (((uVar2 >> 0x1c & 1) == 0) &&
         ((-1 < (char)uVar2 ||
          ((*(ulonglong *)(lVar10 + 0x3a8) & *(ulonglong *)(lVar10 + 0x140)) == 0)))) {
        uStack_7ac = 0x20;
        if ((*(uint *)(lVar10 + 0x138) >> 0x1d & 1) != 0) {
          uStack_7ac = 0x200;
        }
      }
      else {
        uStack_7ac = 0x100;
      }
    }
    else {
      uStack_7ac = 0x2000;
    }
  }
  if (((*(uint *)(*(longlong *)(lVar10 + 0x1e0) + 0x1588) >> 0x1a & 1) != 0) &&
     (uVar12 = 0x400, (*(uint *)(lVar10 + 0x138) & 0x40000000) != 0)) {
    uVar12 = 0x800;
  }
  uStack_94c = param_3;
  cVar6 = func_0x00018022cda0();
  cVar1 = *(char *)(lVar10 + 0x13c);
  if ((cVar1 == '\x01') && ((*(uint *)(lVar10 + 0x138) & 0x80000) != 0)) {
    uVar12 = uVar12 | 0x4000;
  }
  if (((cVar6 == '\0') &&
      (uVar2 = *(uint *)(*(longlong *)(lVar10 + 0x1e0) + 0x1588), (uVar2 >> 0x1a & 1) == 0)) &&
     ((*(uint *)(lVar10 + 0x138) >> 0x13 & 1) == 0)) {
    if ((*(uint *)(param_2 + 0x20) & 0x8000) == 0) {
      if (((uVar2 >> 0x1c & 1) == 0) &&
         ((-1 < (char)uVar2 ||
          ((*(ulonglong *)(lVar10 + 0x3a8) & *(ulonglong *)(lVar10 + 0x140)) == 0)))) {
        if ((*(uint *)(lVar10 + 0x138) >> 0x1d & 1) == 0) {
          if ((cVar1 == '\x06') || (cVar1 == '\0')) {
            uVar12 = uVar12 | 0x20;
          }
          else {
            uVar12 = uVar12 | 0x40;
          }
        }
        else {
          uVar12 = uVar12 | 0x200;
        }
      }
      else {
        uVar12 = uVar12 | 0x100;
      }
    }
    else {
      uVar12 = uVar12 | 0x2000;
    }
  }
  if ((((((~(byte)(*(uint *)(lVar10 + 0x138) >> 2) & 1) == 0) ||
        (uVar2 = *(uint *)(*(longlong *)(lVar10 + 0x1e0) + 0x1588), (uVar2 >> 0x13 & 1) != 0)) ||
       ((uVar2 >> 0x1a & 1) != 0)) || ((char)param_2[0x1f] == '\x03')) ||
     ((cVar1 != '\x06' && (cVar1 != '\0')))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  uStack_7a8 = uVar12 | 0x10;
  if (!bVar4) {
    uStack_7a8 = uVar12;
  }
  plStack_968 = param_2;
  (**(code **)(*param_2 + 0x28))(param_2);
  plVar8 = param_2;
  if ((*(byte *)((longlong)param_2 + 0xfd) & 0x20) == 0) {
    plVar8 = (longlong *)func_0x000180085de0(param_2[0x36]);
  }
  lVar10 = param_2[0x37];
  bVar7 = *(byte *)(lVar10 + 0x38c);
  if (bVar7 == 9) {
    bVar7 = func_0x00018022d300();
    *(byte *)(lVar10 + 0x38c) = bVar7;
  }
  lVar10 = plVar8[0x3c] + (ulonglong)bVar7 * 0x18;
  if (lStack_888 != lVar10) {
    if (lStack_888 != 0) {
      FUN_180080060();
    }
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + 1;
      UNLOCK();
    }
    lStack_888 = lVar10;
    if (lStack_880 != 0) {
      *(byte *)(lStack_880 + 0xfe) = *(byte *)(lStack_880 + 0xfe) & 0xfb;
    }
  }
  lStack_880 = 0;
  uStack_988 = 0;
  puVar9 = (uint64_t *)FUN_1800b32c0(_DAT_180c86930,&plStack_930,plVar8 + 2,0);
  plVar3 = (longlong *)*puVar9;
  if (plStack_930 != (longlong *)0x0) {
    (**(code **)(*plStack_930 + 0x38))();
  }
  plVar11 = plStack_968;
  plVar5 = plStack_878;
  if (plVar8 != plVar3) {
    puVar9 = (uint64_t *)FUN_1800763c0(param_2,&plStack_920);
    plVar11 = (longlong *)*puVar9;
    *puVar9 = 0;
    plStack_968 = plVar11;
    plStack_928 = param_2;
    (**(code **)(*param_2 + 0x38))(param_2);
    if (plStack_920 != (longlong *)0x0) {
      (**(code **)(*plStack_920 + 0x38))();
    }
    if (plVar11 != (longlong *)0x0) {
      plStack_918 = plVar11;
      (**(code **)(*plVar11 + 0x28))(plVar11);
    }
    plStack_918 = plStack_878;
    plVar5 = plVar11;
    if (plStack_878 != (longlong *)0x0) {
      lVar10 = *plStack_878;
      plStack_878 = plVar11;
      (**(code **)(lVar10 + 0x38))();
      plVar5 = plStack_878;
    }
  }
  plStack_878 = plVar5;
  uStack_7a4 = *(uint *)(plVar11 + 0x4e) | 0x10;
  FUN_180075b70(plVar11);
  uStack_8f8 = *(uint64_t *)((longlong)plVar11 + 0x274);
  uStack_8f0 = *(uint64_t *)((longlong)plVar11 + 0x27c);
  uStack_8e8 = *(int32_t *)((longlong)plVar11 + 0x284);
  uStack_8e4 = (int32_t)plVar11[0x51];
  uStack_8e0 = *(int32_t *)((longlong)plVar11 + 0x28c);
  uStack_8dc = (int32_t)plVar11[0x52];
  uStack_8d8 = *(int32_t *)((longlong)plVar11 + 0x294);
  uStack_8d4 = (int32_t)plVar11[0x53];
  uStack_8d0 = *(int32_t *)((longlong)plVar11 + 0x29c);
  uStack_8cc = (int32_t)plVar11[0x54];
  uStack_8c8 = *(int32_t *)((longlong)plVar11 + 0x2a4);
  FUN_18024f3b0(uStack_958,&uStack_950,&lStack_888,&uStack_8f8);
  if ((*(uint *)(param_2[0x37] + 0x138) >> 0x12 & 1) != 0) {
    FUN_1802533e0(&lStack_468,&lStack_888);
    uStack_940 = param_5;
    uStack_938 = param_6;
    uStack_390 = 0;
    uStack_388 = 0x1000;
    uStack_93c = param_3;
    if (param_2 != (longlong *)0x0) {
      plStack_910 = param_2;
      (**(code **)(*param_2 + 0x28))(param_2);
    }
    plStack_968 = param_2;
    plStack_910 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x38))(plVar11);
    }
    lVar10 = plVar8[0x3c] + (ulonglong)bVar7 * 0x18;
    if (lStack_468 != lVar10) {
      if (lStack_468 != 0) {
        FUN_180080060();
      }
      if (lVar10 != 0) {
        LOCK();
        *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + 1;
        UNLOCK();
      }
      lStack_468 = lVar10;
      if (lStack_460 != 0) {
        *(byte *)(lStack_460 + 0xfe) = *(byte *)(lStack_460 + 0xfe) & 0xfb;
      }
    }
    plVar11 = plStack_968;
    plVar5 = plStack_458;
    if (plVar8 != plVar3) {
      puVar9 = (uint64_t *)FUN_1800763c0(param_2,&plStack_960);
      plVar11 = (longlong *)*puVar9;
      *puVar9 = 0;
      plStack_968 = plVar11;
      plStack_908 = param_2;
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x38))(param_2);
      }
      if (plStack_960 != (longlong *)0x0) {
        (**(code **)(*plStack_960 + 0x38))();
      }
      if (plVar11 != (longlong *)0x0) {
        plStack_970 = plVar11;
        (**(code **)(*plVar11 + 0x28))(plVar11);
      }
      plStack_970 = plStack_458;
      plVar5 = plVar11;
      if (plStack_458 != (longlong *)0x0) {
        lVar10 = *plStack_458;
        plStack_458 = plVar11;
        (**(code **)(lVar10 + 0x38))();
        plVar5 = plStack_458;
      }
    }
    plStack_458 = plVar5;
    uStack_384 = (int32_t)plVar11[0x4e];
    FUN_180075b70(plVar11);
    uStack_8c0 = *(uint64_t *)((longlong)plVar11 + 0x274);
    uStack_8b8 = *(uint64_t *)((longlong)plVar11 + 0x27c);
    uStack_8b0 = *(int32_t *)((longlong)plVar11 + 0x284);
    uStack_8ac = (int32_t)plVar11[0x51];
    uStack_8a8 = *(int32_t *)((longlong)plVar11 + 0x28c);
    uStack_8a4 = (int32_t)plVar11[0x52];
    uStack_8a0 = *(int32_t *)((longlong)plVar11 + 0x294);
    uStack_89c = (int32_t)plVar11[0x53];
    uStack_898 = *(int32_t *)((longlong)plVar11 + 0x29c);
    uStack_894 = (int32_t)plVar11[0x54];
    uStack_890 = *(int32_t *)((longlong)plVar11 + 0x2a4);
    FUN_18024f3b0(uStack_958,&uStack_940,&lStack_468,&uStack_8c0);
    plStack_970 = (longlong *)auStack_378;
    plStack_960 = alStack_1a0;
    if (alStack_1a0[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    plStack_970 = alStack_230;
    if (plStack_1c0 != (longlong *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    if (plStack_458 != (longlong *)0x0) {
      (**(code **)(*plStack_458 + 0x38))();
    }
    if (lStack_468 != 0) {
      FUN_180080060();
    }
  }
  (**(code **)(*plVar11 + 0x38))(plVar11);
  plStack_970 = (longlong *)auStack_798;
  plStack_960 = alStack_5c0;
  if (alStack_5c0[0] == 0) {
    plStack_970 = (longlong *)auStack_650;
    if (plStack_5e0 != (longlong *)0x0) {
      (**(code **)(*plStack_5e0 + 0x38))();
    }
    if (plStack_878 != (longlong *)0x0) {
      (**(code **)(*plStack_878 + 0x38))();
    }
    if (lStack_888 != 0) {
      FUN_180080060();
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_9a8);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



longlong * FUN_1802533e0(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  int *piVar1;
  byte *pbVar2;
  longlong *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  longlong lVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_2 != 0) {
    LOCK();
    piVar1 = (int *)(*param_2 + 0x10);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (*param_1 != 0) {
      FUN_180080060();
    }
    *param_1 = *param_2;
    if (param_1[1] != 0) {
      pbVar2 = (byte *)(param_1[1] + 0xfe);
      *pbVar2 = *pbVar2 & 0xfb;
    }
  }
  plVar3 = (longlong *)param_2[2];
  param_1[2] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))();
  }
  lVar6 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = lVar6;
  lVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = lVar6;
  lVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = lVar6;
  lVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = lVar6;
  lVar6 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = lVar6;
  lVar6 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = lVar6;
  lVar6 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = lVar6;
  lVar6 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = lVar6;
  lVar6 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = lVar6;
  lVar6 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = lVar6;
  uVar4 = *(int32_t *)((longlong)param_2 + 0xbc);
  lVar6 = param_2[0x18];
  uVar5 = *(int32_t *)((longlong)param_2 + 0xc4);
  *(int *)(param_1 + 0x17) = (int)param_2[0x17];
  *(int32_t *)((longlong)param_1 + 0xbc) = uVar4;
  *(int *)(param_1 + 0x18) = (int)lVar6;
  *(int32_t *)((longlong)param_1 + 0xc4) = uVar5;
  lVar6 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = lVar6;
  param_1[0x1b] = param_2[0x1b];
  *(int *)(param_1 + 0x1c) = (int)param_2[0x1c];
  *(int32_t *)((longlong)param_1 + 0xe4) = *(int32_t *)((longlong)param_2 + 0xe4);
  FUN_1801bd980(param_1 + 0x1e,param_2 + 0x1e,param_3,param_4,uVar7);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180253520(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)
void FUN_180253520(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  int *piVar1;
  uint64_t *puVar2;
  byte *pbVar3;
  uint64_t *puVar4;
  longlong lVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint64_t *puVar12;
  longlong lVar13;
  
  puVar12 = (uint64_t *)*param_1;
  if ((ulonglong)((param_1[2] - (longlong)puVar12) / 0x420) < param_2) {
    plVar10 = (longlong *)0x0;
    if (param_2 != 0) {
      plVar10 = (longlong *)
                FUN_18062b420(_DAT_180c8ed18,param_2 * 0x420,*(int8_t *)(param_1 + 3),param_4,
                              0xfffffffffffffffe);
      puVar12 = (uint64_t *)*param_1;
    }
    puVar4 = (uint64_t *)param_1[1];
    plVar11 = plVar10;
    if (puVar12 != puVar4) {
      lVar13 = (longlong)plVar10 - (longlong)puVar12;
      puVar12 = puVar12 + 2;
      do {
        *plVar11 = 0;
        *(uint64_t *)(lVar13 + -8 + (longlong)puVar12) = 0;
        if (puVar12[-2] != 0) {
          LOCK();
          piVar1 = (int *)(puVar12[-2] + 0x10);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          if (*plVar11 != 0) {
            FUN_180080060();
          }
          *plVar11 = puVar12[-2];
          lVar5 = *(longlong *)(lVar13 + -8 + (longlong)puVar12);
          if (lVar5 != 0) {
            pbVar3 = (byte *)(lVar5 + 0xfe);
            *pbVar3 = *pbVar3 & 0xfb;
          }
        }
        *(uint64_t *)(lVar13 + (longlong)puVar12) = *puVar12;
        *puVar12 = 0;
        uVar9 = puVar12[2];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 8) = puVar12[1];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0x10) = uVar9;
        uVar9 = puVar12[4];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0x18) = puVar12[3];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0x20) = uVar9;
        uVar9 = puVar12[6];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0x28) = puVar12[5];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0x30) = uVar9;
        uVar9 = puVar12[8];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0x38) = puVar12[7];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0x40) = uVar9;
        uVar9 = puVar12[10];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0x48) = puVar12[9];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0x50) = uVar9;
        uVar9 = puVar12[0xc];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0x58) = puVar12[0xb];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0x60) = uVar9;
        uVar9 = puVar12[0xe];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0x68) = puVar12[0xd];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0x70) = uVar9;
        uVar9 = puVar12[0x10];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0x78) = puVar12[0xf];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0x80) = uVar9;
        uVar9 = puVar12[0x12];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0x88) = puVar12[0x11];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0x90) = uVar9;
        uVar9 = puVar12[0x14];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0x98) = puVar12[0x13];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0xa0) = uVar9;
        uVar9 = puVar12[0x16];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0xa8) = puVar12[0x15];
        *(uint64_t *)((longlong)puVar12 + lVar13 + 0xb0) = uVar9;
        uVar6 = *(int32_t *)((longlong)puVar12 + 0xbc);
        uVar7 = *(int32_t *)(puVar12 + 0x18);
        uVar8 = *(int32_t *)((longlong)puVar12 + 0xc4);
        *(int32_t *)((longlong)puVar12 + lVar13 + 0xb8) = *(int32_t *)(puVar12 + 0x17);
        *(int32_t *)((longlong)puVar12 + lVar13 + 0xbc) = uVar6;
        *(int32_t *)((longlong)puVar12 + lVar13 + 0xc0) = uVar7;
        *(int32_t *)((longlong)puVar12 + lVar13 + 0xc4) = uVar8;
        *(uint64_t *)(lVar13 + 200 + (longlong)puVar12) = puVar12[0x19];
        *(int32_t *)(lVar13 + 0xd0 + (longlong)puVar12) = *(int32_t *)(puVar12 + 0x1a);
        *(int32_t *)(lVar13 + 0xd4 + (longlong)puVar12) =
             *(int32_t *)((longlong)puVar12 + 0xd4);
        FUN_1801bd980((longlong)puVar12 + lVar13 + 0xe0,puVar12 + 0x1c);
        plVar11 = plVar11 + 0x84;
        puVar2 = puVar12 + 0x82;
        puVar12 = puVar12 + 0x84;
      } while (puVar2 != puVar4);
      puVar4 = (uint64_t *)param_1[1];
      puVar12 = (uint64_t *)*param_1;
      if (puVar12 != puVar4) {
        do {
          FUN_1801bd090(puVar12);
          puVar12 = puVar12 + 0x84;
        } while (puVar12 != puVar4);
        puVar12 = (uint64_t *)*param_1;
      }
    }
    if (puVar12 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar12);
    }
    *param_1 = plVar10;
    param_1[1] = plVar11;
    param_1[2] = plVar10 + param_2 * 0x84;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180253760(ulonglong *param_1,uint64_t *param_2)
void FUN_180253760(ulonglong *param_1,uint64_t *param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  longlong lVar8;
  
  puVar6 = (uint64_t *)param_1[1];
  if (puVar6 < (uint64_t *)param_1[2]) {
    param_1[1] = (longlong)puVar6 + 0xbc;
    uVar4 = param_2[1];
    *puVar6 = *param_2;
    puVar6[1] = uVar4;
    uVar4 = param_2[3];
    puVar6[2] = param_2[2];
    puVar6[3] = uVar4;
    uVar4 = param_2[5];
    puVar6[4] = param_2[4];
    puVar6[5] = uVar4;
    uVar4 = param_2[7];
    puVar6[6] = param_2[6];
    puVar6[7] = uVar4;
    uVar4 = param_2[9];
    puVar6[8] = param_2[8];
    puVar6[9] = uVar4;
    uVar4 = param_2[0xb];
    puVar6[10] = param_2[10];
    puVar6[0xb] = uVar4;
    uVar4 = param_2[0xd];
    puVar6[0xc] = param_2[0xc];
    puVar6[0xd] = uVar4;
    uVar4 = param_2[0xf];
    puVar6[0xe] = param_2[0xe];
    puVar6[0xf] = uVar4;
    uVar4 = param_2[0x11];
    puVar6[0x10] = param_2[0x10];
    puVar6[0x11] = uVar4;
    uVar4 = param_2[0x13];
    puVar6[0x12] = param_2[0x12];
    puVar6[0x13] = uVar4;
    uVar4 = param_2[0x15];
    puVar6[0x14] = param_2[0x14];
    puVar6[0x15] = uVar4;
    puVar6[0x16] = param_2[0x16];
    *(int32_t *)(puVar6 + 0x17) = *(int32_t *)(param_2 + 0x17);
    return;
  }
  puVar7 = (uint64_t *)*param_1;
  lVar8 = ((longlong)puVar6 - (longlong)puVar7) / 0xbc;
  if (lVar8 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = lVar8 * 2;
    if (lVar8 == 0) {
      puVar5 = (uint64_t *)0x0;
      goto LAB_180253872;
    }
  }
  puVar5 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 0xbc,(char)param_1[3]);
  puVar7 = (uint64_t *)*param_1;
  puVar6 = (uint64_t *)param_1[1];
LAB_180253872:
  if (puVar7 != puVar6) {
                    // WARNING: Subroutine does not return
    memmove(puVar5,puVar7,(longlong)puVar6 - (longlong)puVar7);
  }
  uVar4 = param_2[1];
  *puVar5 = *param_2;
  puVar5[1] = uVar4;
  uVar4 = param_2[3];
  puVar5[2] = param_2[2];
  puVar5[3] = uVar4;
  uVar4 = param_2[5];
  puVar5[4] = param_2[4];
  puVar5[5] = uVar4;
  uVar4 = param_2[7];
  puVar5[6] = param_2[6];
  puVar5[7] = uVar4;
  uVar4 = param_2[9];
  puVar5[8] = param_2[8];
  puVar5[9] = uVar4;
  uVar4 = param_2[0xb];
  puVar5[10] = param_2[10];
  puVar5[0xb] = uVar4;
  uVar4 = param_2[0xd];
  puVar5[0xc] = param_2[0xc];
  puVar5[0xd] = uVar4;
  uVar4 = param_2[0xf];
  puVar5[0xe] = param_2[0xe];
  puVar5[0xf] = uVar4;
  uVar4 = param_2[0x11];
  puVar5[0x10] = param_2[0x10];
  puVar5[0x11] = uVar4;
  uVar1 = *(int32_t *)((longlong)param_2 + 0x94);
  uVar2 = *(int32_t *)(param_2 + 0x13);
  uVar3 = *(int32_t *)((longlong)param_2 + 0x9c);
  *(int32_t *)(puVar5 + 0x12) = *(int32_t *)(param_2 + 0x12);
  *(int32_t *)((longlong)puVar5 + 0x94) = uVar1;
  *(int32_t *)(puVar5 + 0x13) = uVar2;
  *(int32_t *)((longlong)puVar5 + 0x9c) = uVar3;
  uVar1 = *(int32_t *)((longlong)param_2 + 0xa4);
  uVar2 = *(int32_t *)(param_2 + 0x15);
  uVar3 = *(int32_t *)((longlong)param_2 + 0xac);
  *(int32_t *)(puVar5 + 0x14) = *(int32_t *)(param_2 + 0x14);
  *(int32_t *)((longlong)puVar5 + 0xa4) = uVar1;
  *(int32_t *)(puVar5 + 0x15) = uVar2;
  *(int32_t *)((longlong)puVar5 + 0xac) = uVar3;
  puVar5[0x16] = param_2[0x16];
  *(int32_t *)(puVar5 + 0x17) = *(int32_t *)(param_2 + 0x17);
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (ulonglong)puVar5;
  param_1[2] = lVar8 * 0xbc + (longlong)puVar5;
  param_1[1] = (longlong)puVar5 + 0xbc;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180253818(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_180253818(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  longlong unaff_RBX;
  longlong *unaff_RSI;
  uint64_t *unaff_RDI;
  longlong lVar6;
  
  if (param_1 / 0xbc == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = (param_1 / 0xbc) * 2;
    if (lVar6 == 0) {
      puVar5 = (uint64_t *)0x0;
      goto LAB_180253872;
    }
  }
  puVar5 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar6 * 0xbc,(char)unaff_RSI[3]);
  param_4 = *unaff_RSI;
  unaff_RBX = unaff_RSI[1];
LAB_180253872:
  if (param_4 != unaff_RBX) {
                    // WARNING: Subroutine does not return
    memmove(puVar5,param_4,unaff_RBX - param_4);
  }
  uVar4 = unaff_RDI[1];
  *puVar5 = *unaff_RDI;
  puVar5[1] = uVar4;
  uVar4 = unaff_RDI[3];
  puVar5[2] = unaff_RDI[2];
  puVar5[3] = uVar4;
  uVar4 = unaff_RDI[5];
  puVar5[4] = unaff_RDI[4];
  puVar5[5] = uVar4;
  uVar4 = unaff_RDI[7];
  puVar5[6] = unaff_RDI[6];
  puVar5[7] = uVar4;
  uVar4 = unaff_RDI[9];
  puVar5[8] = unaff_RDI[8];
  puVar5[9] = uVar4;
  uVar4 = unaff_RDI[0xb];
  puVar5[10] = unaff_RDI[10];
  puVar5[0xb] = uVar4;
  uVar4 = unaff_RDI[0xd];
  puVar5[0xc] = unaff_RDI[0xc];
  puVar5[0xd] = uVar4;
  uVar4 = unaff_RDI[0xf];
  puVar5[0xe] = unaff_RDI[0xe];
  puVar5[0xf] = uVar4;
  uVar4 = unaff_RDI[0x11];
  puVar5[0x10] = unaff_RDI[0x10];
  puVar5[0x11] = uVar4;
  uVar1 = *(int32_t *)((longlong)unaff_RDI + 0x94);
  uVar2 = *(int32_t *)(unaff_RDI + 0x13);
  uVar3 = *(int32_t *)((longlong)unaff_RDI + 0x9c);
  *(int32_t *)(puVar5 + 0x12) = *(int32_t *)(unaff_RDI + 0x12);
  *(int32_t *)((longlong)puVar5 + 0x94) = uVar1;
  *(int32_t *)(puVar5 + 0x13) = uVar2;
  *(int32_t *)((longlong)puVar5 + 0x9c) = uVar3;
  uVar1 = *(int32_t *)((longlong)unaff_RDI + 0xa4);
  uVar2 = *(int32_t *)(unaff_RDI + 0x15);
  uVar3 = *(int32_t *)((longlong)unaff_RDI + 0xac);
  *(int32_t *)(puVar5 + 0x14) = *(int32_t *)(unaff_RDI + 0x14);
  *(int32_t *)((longlong)puVar5 + 0xa4) = uVar1;
  *(int32_t *)(puVar5 + 0x15) = uVar2;
  *(int32_t *)((longlong)puVar5 + 0xac) = uVar3;
  puVar5[0x16] = unaff_RDI[0x16];
  *(int32_t *)(puVar5 + 0x17) = *(int32_t *)(unaff_RDI + 0x17);
  if (*unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RSI = (longlong)puVar5;
  unaff_RSI[2] = lVar6 * 0xbc + (longlong)puVar5;
  unaff_RSI[1] = (longlong)puVar5 + 0xbc;
  return;
}



void thunk_FUN_18064e900(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180253970(longlong *param_1,ulonglong param_2)
void FUN_180253970(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = param_1[1];
  lVar3 = *param_1;
  uVar2 = lVar5 - lVar3;
  if (param_2 <= uVar2) {
    param_1[1] = lVar3 + param_2;
    return;
  }
  param_2 = (lVar3 - lVar5) + param_2;
  if (param_2 <= (ulonglong)(param_1[2] - lVar5)) {
    if (param_2 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar5,0,param_2);
    }
    param_1[1] = lVar5;
    return;
  }
  uVar4 = uVar2 * 2;
  if (uVar2 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < uVar2 + param_2) {
    uVar4 = uVar2 + param_2;
  }
  if (uVar4 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar4,(char)param_1[3]);
    lVar3 = *param_1;
    lVar5 = param_1[1];
  }
  if (lVar3 != lVar5) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,lVar3,lVar5 - lVar3);
  }
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,param_2);
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = lVar1;
  param_1[2] = lVar1 + uVar4;
  param_1[1] = lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025399a(longlong param_1,longlong param_2,longlong param_3)
void FUN_18025399a(longlong param_1,longlong param_2,longlong param_3)

{
  longlong in_RAX;
  longlong lVar1;
  longlong *unaff_RBX;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  
  uVar3 = (param_2 - unaff_RDI) + param_3;
  if (uVar3 <= (ulonglong)(in_RAX - unaff_RDI)) {
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memset();
    }
    unaff_RBX[1] = unaff_RDI;
    return;
  }
  uVar2 = param_1 * 2;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 < param_1 + uVar3) {
    uVar2 = param_1 + uVar3;
  }
  if (uVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar2,(char)unaff_RBX[3]);
    param_2 = *unaff_RBX;
    unaff_RDI = unaff_RBX[1];
  }
  if (param_2 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,param_2,unaff_RDI - param_2);
  }
  if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,uVar3);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RBX = lVar1;
  unaff_RBX[2] = lVar1 + uVar2;
  unaff_RBX[1] = lVar1;
  return;
}






// 函数: void FUN_180253a66(void)
void FUN_180253a66(void)

{
  longlong unaff_RBX;
  longlong unaff_RSI;
  uint64_t unaff_RDI;
  
  if (unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *(uint64_t *)(unaff_RBX + 8) = unaff_RDI;
  return;
}






// 函数: void FUN_180253a94(uint64_t param_1,longlong param_2,longlong param_3)
void FUN_180253a94(uint64_t param_1,longlong param_2,longlong param_3)

{
  longlong unaff_RBX;
  
  *(longlong *)(unaff_RBX + 8) = param_2 + param_3;
  return;
}






// 函数: void FUN_180253ab0(longlong *param_1)
void FUN_180253ab0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 2) {
    if ((longlong *)plVar2[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[1] + 0x38))();
    }
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






