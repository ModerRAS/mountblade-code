#include "TaleWorlds.Native.Split.h"

// 99_part_03_part045.c - 6 个函数

// 函数: void FUN_1801f9340(longlong *param_1,longlong param_2)
void FUN_1801f9340(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  ulonglong uVar8;
  uint uVar9;
  void *puVar10;
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  int8_t auStack_188 [32];
  int32_t uStack_168;
  int32_t uStack_158;
  longlong *plStack_150;
  void *puStack_148;
  uint64_t *puStack_140;
  int32_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  int32_t uStack_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  uint64_t uStack_114;
  uint64_t uStack_10c;
  int16_t uStack_104;
  char cStack_102;
  int16_t uStack_101;
  int8_t uStack_ff;
  int8_t uStack_fe;
  int16_t uStack_fd;
  int32_t uStack_f8;
  int8_t uStack_f4;
  uint64_t uStack_f0;
  void *puStack_e8;
  int8_t *puStack_e0;
  uint uStack_d8;
  int8_t auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  uStack_158 = 0;
  FUN_1801f9270();
  puStack_e8 = &UNK_1809fcc28;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = *(uint *)(param_1 + 4);
  puVar10 = &DAT_18098bc73;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar10 = (void *)param_1[3];
  }
  strcpy_s(auStack_d0,0x80,puVar10);
  uVar8 = (ulonglong)uStack_d8;
  uVar9 = uStack_d8 + 1;
  if (uVar9 < 0x7f) {
    *(int16_t *)(puStack_e0 + uVar8) = 0x5f;
    uVar8 = (ulonglong)uVar9;
    uStack_d8 = uVar9;
  }
  puVar10 = &DAT_18098bc73;
  if (*(void **)(param_2 + 0x3528) != (void *)0x0) {
    puVar10 = *(void **)(param_2 + 0x3528);
  }
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (puVar10[lVar5] != '\0');
  iVar4 = (int)lVar5;
  if ((0 < iVar4) && ((uint)((int)uVar8 + iVar4) < 0x7f)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_e0 + uVar8,puVar10,(longlong)(iVar4 + 1));
  }
  if (*(char *)((longlong)param_1 + 0x4d) == '\0') {
    iVar4 = (int)param_1[0x37];
    if (iVar4 == -1) {
      uStack_128 = 0;
      uStack_120 = 1;
      uStack_11c = 1;
      uStack_104 = 0x100;
      uStack_101 = 0;
      uStack_fd = 0;
      uStack_f4 = 0;
      uStack_118 = (int32_t)param_1[0xe];
      cStack_102 = (char)param_1[10];
      uStack_ff = cStack_102 == '\0';
      uStack_114 = 0;
      uStack_10c = 0;
      uStack_f8 = *(int32_t *)(param_2 + 0x1bd4);
      puStack_148 = &UNK_180a3c3e0;
      uStack_130 = 0;
      puStack_140 = (uint64_t *)0x0;
      uStack_138 = 0;
      uStack_fe = uStack_ff;
      puVar6 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
      *(int8_t *)puVar6 = 0;
      puStack_140 = puVar6;
      uVar9 = FUN_18064e990(puVar6);
      *puVar6 = 0x656e6563536c6772;
      puVar6[1] = 0x3a3a776569765f;
      uStack_138 = 0xf;
      plVar1 = *(longlong **)(param_2 + 0x3580);
      uStack_130._0_4_ = uVar9;
      if (*(code **)(*plVar1 + 0xb8) == (code *)&UNK_1802426a0) {
        lVar5 = plVar1[0xda];
      }
      else {
        lVar5 = (**(code **)(*plVar1 + 0xb8))(plVar1);
      }
      uVar2 = *(uint *)(lVar5 + 0x4e8);
      if (0 < (int)uVar2) {
        if ((uVar2 != 0xfffffff1) && (uVar9 < uVar2 + 0x10)) {
          uStack_168 = CONCAT31(uStack_168._1_3_,0x13);
          puVar6 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar6,uVar2 + 0x10,0x10);
          puStack_140 = puVar6;
          uStack_130._0_4_ = FUN_18064e990(puVar6);
          uVar2 = *(uint *)(lVar5 + 0x4e8);
        }
                    // WARNING: Subroutine does not return
        memcpy((int8_t *)((longlong)puVar6 + 0xf),*(uint64_t *)(lVar5 + 0x4e0),
               (longlong)(int)(uVar2 + 1));
      }
      if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
        uStack_128 = CONCAT44((int)(longlong)(double)param_1[0xc],
                              (int)(longlong)(double)param_1[0xb]);
        if (param_1[0x85] == 0) {
          (**(code **)(*param_1 + 8))(param_1,&uStack_128,param_2);
          uVar7 = FUN_1800b1230(_DAT_180c86930,&plStack_150,&puStack_e8,&uStack_128);
          uStack_158 = 2;
          FUN_180060b80(param_1 + 0x85,uVar7);
          goto LAB_1801f97f7;
        }
      }
      else {
        auVar11._0_8_ = (double)*(int *)(param_2 + 0x3590) * (double)param_1[0xb];
        lVar5 = (longlong)auVar11._0_8_;
        if (auVar11._0_8_ <= 0.0) {
          if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != auVar11._0_8_)) {
            auVar12._8_8_ = auVar11._0_8_;
            auVar12._0_8_ = auVar11._0_8_;
            uVar9 = movmskpd(uVar2,auVar12);
            uVar2 = uVar9 & 1 ^ 1;
            auVar11._0_8_ = (double)(longlong)(lVar5 + (ulonglong)uVar2);
          }
          auVar11._0_8_ = auVar11._0_8_ - 1e-08;
        }
        else {
          if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != auVar11._0_8_)) {
            auVar11._8_8_ = auVar11._0_8_;
            uVar9 = movmskpd(uVar2,auVar11);
            uVar2 = uVar9 & 1 ^ 1;
            auVar11._0_8_ = (double)(longlong)(lVar5 + (ulonglong)uVar2);
          }
          auVar11._0_8_ = auVar11._0_8_ + 1e-08;
        }
        auVar13._0_8_ = (double)*(int *)(param_2 + 0x3594) * (double)param_1[0xc];
        lVar5 = (longlong)auVar13._0_8_;
        if (auVar13._0_8_ <= 0.0) {
          if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != auVar13._0_8_)) {
            auVar14._8_8_ = auVar13._0_8_;
            auVar14._0_8_ = auVar13._0_8_;
            uVar9 = movmskpd(uVar2,auVar14);
            auVar13._0_8_ = (double)(longlong)(lVar5 + (ulonglong)(uVar9 & 1 ^ 1));
          }
          auVar13._0_8_ = auVar13._0_8_ - 1e-08;
        }
        else {
          if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != auVar13._0_8_)) {
            auVar13._8_8_ = auVar13._0_8_;
            uVar9 = movmskpd(uVar2,auVar13);
            auVar13._0_8_ = (double)(longlong)(lVar5 + (ulonglong)(uVar9 & 1 ^ 1));
          }
          auVar13._0_8_ = auVar13._0_8_ + 1e-08;
        }
        iVar4 = (int)(longlong)auVar11._0_8_;
        if (iVar4 < 1) {
          iVar4 = 1;
        }
        iVar3 = (int)(longlong)auVar13._0_8_;
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        uStack_128 = CONCAT44(iVar3,iVar4);
        (**(code **)(*param_1 + 8))(param_1,&uStack_128,param_2);
        uVar7 = FUN_1800b1230(_DAT_180c86930,&plStack_150,&puStack_e8,&uStack_128);
        uStack_158 = 1;
        FUN_180060b80(param_1 + 0x85,uVar7);
LAB_1801f97f7:
        uStack_158 = 0;
        if (plStack_150 != (longlong *)0x0) {
          (**(code **)(*plStack_150 + 0x38))();
        }
      }
      puStack_148 = &UNK_180a3c3e0;
      if (puVar6 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar6);
      }
      puStack_140 = (uint64_t *)0x0;
      uStack_130 = (ulonglong)uStack_130._4_4_ << 0x20;
      puStack_148 = &UNK_18098bcb0;
      goto LAB_1801f98db;
    }
    if (iVar4 == -3) {
      if (((int)param_1[0x3b] == 9) && (iVar4 = strcmp(param_1[0x3a],&UNK_180a0e648), iVar4 == 0)) {
        uVar7 = FUN_180244ff0(param_2);
        FUN_180056f10(param_1 + 0x85,uVar7);
      }
      else {
        puVar10 = &DAT_18098bc73;
        if ((void *)param_1[3] != (void *)0x0) {
          puVar10 = (void *)param_1[3];
        }
        FUN_180626f80(&UNK_180a0ec50,puVar10);
      }
      goto LAB_1801f98db;
    }
    if (iVar4 != -2) goto LAB_1801f98db;
    uStack_168 = *(int32_t *)(param_2 + 0x1bd4);
    uVar7 = FUN_1801f9aa0(uVar8,&plStack_150,param_1,param_1 + 0x39);
    FUN_180060b80(param_1 + 0x85,uVar7);
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x9690);
    if (plVar1 != (longlong *)0x0) {
      plStack_150 = plVar1;
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plStack_150 = (longlong *)param_1[0x85];
    param_1[0x85] = (longlong)plVar1;
  }
  if (plStack_150 != (longlong *)0x0) {
    (**(code **)(*plStack_150 + 0x38))();
  }
LAB_1801f98db:
  puStack_e8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_188);
}






// 函数: void FUN_1801f9920(uint64_t *param_1)
void FUN_1801f9920(uint64_t *param_1)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a0f068;
  FUN_1801f9a00();
  if ((longlong *)param_1[0x89] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x89] + 0x38))();
  }
  FUN_1808fc8a8(param_1 + 0x85,8,4,FUN_180045af0,uVar1);
  FUN_1808fc8a8(param_1 + 0x39,0x98,4,FUN_180044a30);
  FUN_1808fc8a8(param_1 + 0x27,8,0x10,FUN_180045af0);
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x38))();
  }
  param_1[2] = &UNK_180a3c3e0;
  if (param_1[3] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[3] = 0;
  *(int32_t *)(param_1 + 5) = 0;
  param_1[2] = &UNK_18098bcb0;
  return;
}






// 函数: void FUN_1801f9a00(longlong param_1)
void FUN_1801f9a00(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int *piVar4;
  
  plVar2 = (longlong *)(param_1 + 0x138);
  piVar4 = (int *)(param_1 + 0x74);
  lVar3 = 0x10;
  do {
    if (*piVar4 != -2) {
      plVar1 = (longlong *)*plVar2;
      *plVar2 = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
    }
    piVar4 = piVar4 + 1;
    plVar2 = plVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(int *)(param_1 + 0x1b8) == -3) {
    plVar2 = *(longlong **)(param_1 + 0x428);
    *(uint64_t *)(param_1 + 0x428) = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801f9aa0(uint64_t param_1,longlong *param_2,longlong param_3,longlong param_4,
void FUN_1801f9aa0(uint64_t param_1,longlong *param_2,longlong param_3,longlong param_4,
                  int32_t param_5)

{
  byte bVar1;
  bool bVar2;
  uint64_t *puVar3;
  byte *pbVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  longlong lVar11;
  void *puVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  int8_t auStack_168 [32];
  int32_t uStack_148;
  longlong *plStack_140;
  int32_t uStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  int32_t uStack_12c;
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  int8_t uStack_114;
  uint64_t uStack_113;
  int32_t uStack_108;
  int8_t uStack_104;
  longlong *plStack_100;
  uint64_t uStack_f8;
  longlong *plStack_f0;
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [136];
  ulonglong uStack_48;
  
  puVar3 = _DAT_180c8aa30;
  uStack_f8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  uStack_148 = 0;
  plStack_f0 = param_2;
  if ((uint64_t *)_DAT_180c8aa30[2] != (uint64_t *)0x0) {
    puVar9 = (uint64_t *)_DAT_180c8aa30[2];
    puVar14 = _DAT_180c8aa30;
    do {
      if (*(int *)(param_4 + 0x10) == 0) {
        bVar2 = false;
        puVar10 = (uint64_t *)puVar9[1];
      }
      else {
        if (*(int *)(puVar9 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar4 = *(byte **)(param_4 + 8);
          lVar11 = puVar9[5] - (longlong)pbVar4;
          do {
            uVar7 = (uint)pbVar4[lVar11];
            iVar8 = *pbVar4 - uVar7;
            if (*pbVar4 != uVar7) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar7 != 0);
          bVar2 = 0 < iVar8;
          if (iVar8 < 1) {
            puVar10 = (uint64_t *)puVar9[1];
            goto LAB_1801f9b47;
          }
        }
        puVar10 = (uint64_t *)*puVar9;
      }
LAB_1801f9b47:
      puVar13 = puVar9;
      if (bVar2) {
        puVar13 = puVar14;
      }
      puVar9 = puVar10;
      puVar14 = puVar13;
    } while (puVar10 != (uint64_t *)0x0);
    if (puVar13 != _DAT_180c8aa30) {
      if (*(int *)(puVar13 + 6) == 0) goto LAB_1801f9ca5;
      if (*(int *)(param_4 + 0x10) != 0) {
        pbVar4 = (byte *)puVar13[5];
        lVar11 = *(longlong *)(param_4 + 8) - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar7 = (uint)pbVar4[lVar11];
          if (bVar1 != uVar7) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar7 != 0);
        if ((int)(bVar1 - uVar7) < 1) goto LAB_1801f9ca5;
      }
    }
  }
  uStack_130 = 1;
  uStack_12c = 1;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0x3f800000;
  uStack_113 = 1;
  uStack_114 = 0;
  uStack_104 = 0;
  uStack_128 = *(int32_t *)(param_3 + 0x70);
  uStack_138 = (int32_t)(longlong)*(double *)(param_3 + 0x58);
  uStack_134 = (int32_t)(longlong)*(double *)(param_3 + 0x60);
  uStack_108 = param_5;
  puStack_e8 = &UNK_1809fcc28;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = *(int32_t *)(param_3 + 0x20);
  puVar12 = &DAT_18098bc73;
  if (*(void **)(param_3 + 0x18) != (void *)0x0) {
    puVar12 = *(void **)(param_3 + 0x18);
  }
  strcpy_s(auStack_d0,0x80,puVar12);
  FUN_1800b1230(_DAT_180c86930,&plStack_140,&puStack_e8,&uStack_138);
  puStack_e8 = &UNK_18098bcb0;
  plVar5 = (longlong *)FUN_1801f9d20(puVar3,param_4);
  plVar6 = plStack_140;
  plStack_100 = plStack_140;
  if (plStack_140 != (longlong *)0x0) {
    (**(code **)(*plStack_140 + 0x28))(plStack_140);
  }
  plStack_100 = (longlong *)*plVar5;
  *plVar5 = (longlong)plVar6;
  if (plStack_100 != (longlong *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  if (plStack_140 != (longlong *)0x0) {
    (**(code **)(*plStack_140 + 0x38))();
  }
LAB_1801f9ca5:
  plVar6 = (longlong *)FUN_1801f9d20(puVar3,param_4);
  plVar6 = (longlong *)*plVar6;
  *param_2 = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))();
  }
  uStack_148 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_168);
}



uint64_t * FUN_1801f9cf0(uint64_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  return param_1;
}



uint64_t * FUN_1801f9d20(uint64_t *param_1,longlong param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  longlong lVar10;
  int8_t auStackX_8 [8];
  
  puVar8 = (uint64_t *)param_1[2];
  puVar9 = param_1;
  if (puVar8 != (uint64_t *)0x0) {
    do {
      if (*(int *)(param_2 + 0x10) == 0) {
        puVar7 = (uint64_t *)puVar8[1];
        bVar2 = false;
      }
      else {
        if (*(int *)(puVar8 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar3 = *(byte **)(param_2 + 8);
          lVar10 = puVar8[5] - (longlong)pbVar3;
          do {
            uVar5 = (uint)pbVar3[lVar10];
            iVar6 = *pbVar3 - uVar5;
            if (*pbVar3 != uVar5) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar5 != 0);
          bVar2 = 0 < iVar6;
          if (iVar6 < 1) {
            puVar7 = (uint64_t *)puVar8[1];
            goto LAB_1801f9d97;
          }
        }
        puVar7 = (uint64_t *)*puVar8;
      }
LAB_1801f9d97:
      if (bVar2) {
        puVar8 = puVar9;
      }
      puVar9 = puVar8;
      puVar8 = puVar7;
    } while (puVar7 != (uint64_t *)0x0);
    puVar8 = (uint64_t *)0x0;
  }
  if (puVar9 != param_1) {
    if (*(int *)(puVar9 + 6) == 0) {
LAB_1801f9de7:
      return puVar9 + 0x17;
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      pbVar3 = (byte *)puVar9[5];
      puVar8 = (uint64_t *)(*(longlong *)(param_2 + 8) - (longlong)pbVar3);
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[(longlong)puVar8];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_1801f9de7;
    }
  }
  plVar4 = (longlong *)FUN_1800f7800(param_1,auStackX_8,puVar8,puVar9,param_2);
  return (uint64_t *)(*plVar4 + 0xb8);
}



uint64_t *
FUN_1801f9d3c(uint64_t param_1,longlong param_2,uint64_t *param_3,uint64_t *param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong unaff_RBX;
  uint64_t *unaff_RSI;
  uint64_t *puVar7;
  longlong lVar8;
  
  do {
    if (*(int *)(param_2 + 0x10) == 0) {
      puVar7 = (uint64_t *)param_3[1];
      bVar2 = false;
    }
    else {
      if (*(int *)(param_3 + 6) == 0) {
        bVar2 = true;
      }
      else {
        pbVar3 = *(byte **)(unaff_RBX + 8);
        lVar8 = param_3[5] - (longlong)pbVar3;
        do {
          uVar5 = (uint)pbVar3[lVar8];
          iVar6 = *pbVar3 - uVar5;
          if (*pbVar3 != uVar5) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar5 != 0);
        bVar2 = 0 < iVar6;
        if (iVar6 < 1) {
          puVar7 = (uint64_t *)param_3[1];
          goto LAB_1801f9d97;
        }
      }
      puVar7 = (uint64_t *)*param_3;
    }
LAB_1801f9d97:
    if (bVar2) {
      param_3 = param_4;
    }
    param_4 = param_3;
    param_3 = puVar7;
  } while (puVar7 != (uint64_t *)0x0);
  if (param_4 != unaff_RSI) {
    if (*(int *)(param_4 + 6) == 0) {
LAB_1801f9de7:
      return param_4 + 0x17;
    }
    if (*(int *)(unaff_RBX + 0x10) != 0) {
      pbVar3 = (byte *)param_4[5];
      lVar8 = *(longlong *)(unaff_RBX + 8) - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[lVar8];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_1801f9de7;
    }
  }
  plVar4 = (longlong *)FUN_1800f7800();
  return (uint64_t *)(*plVar4 + 0xb8);
}



longlong FUN_1801f9daa(void)

{
  byte bVar1;
  byte *pbVar2;
  longlong *plVar3;
  uint uVar4;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong lVar5;
  longlong in_R9;
  
  if (in_R9 != unaff_RSI) {
    if (*(int *)(in_R9 + 0x30) == 0) {
LAB_1801f9de7:
      return in_R9 + 0xb8;
    }
    if (*(int *)(unaff_RBX + 0x10) != 0) {
      pbVar2 = *(byte **)(in_R9 + 0x28);
      lVar5 = *(longlong *)(unaff_RBX + 8) - (longlong)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar4 = (uint)pbVar2[lVar5];
        if (bVar1 != uVar4) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar4 != 0);
      if ((int)(bVar1 - uVar4) < 1) goto LAB_1801f9de7;
    }
  }
  plVar3 = (longlong *)FUN_1800f7800();
  return *plVar3 + 0xb8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801f9e20(longlong *param_1,longlong param_2)
void FUN_1801f9e20(longlong *param_1,longlong param_2)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = param_1[1];
  lVar6 = *param_1;
  lVar5 = (lVar7 - lVar6) / 0x50;
  puVar1 = (uint64_t *)0x0;
  if (lVar5 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = lVar5 * 2;
    if (lVar5 == 0) goto LAB_1801f9ea3;
  }
  puVar1 = (uint64_t *)
           FUN_18062b420(_DAT_180c8ed18,lVar5 * 0x50,(char)param_1[3],lVar6,0xfffffffffffffffe);
  lVar7 = param_1[1];
  lVar6 = *param_1;
LAB_1801f9ea3:
  puVar4 = puVar1;
  if (lVar6 != lVar7) {
    lVar6 = lVar6 - (longlong)puVar1;
    puVar3 = puVar1 + 5;
    do {
      *puVar4 = &UNK_18098bcb0;
      puVar3[-4] = 0;
      *(int32_t *)(puVar3 + -3) = 0;
      *puVar4 = &UNK_180a3c3e0;
      puVar3[-2] = 0;
      puVar3[-4] = 0;
      *(int32_t *)(puVar3 + -3) = 0;
      *(int32_t *)(puVar3 + -3) = *(int32_t *)(lVar6 + -0x18 + (longlong)puVar3);
      puVar3[-4] = *(uint64_t *)(lVar6 + -0x20 + (longlong)puVar3);
      *(int32_t *)((longlong)puVar3 + -0xc) = *(int32_t *)(lVar6 + -0xc + (longlong)puVar3);
      *(int32_t *)(puVar3 + -2) = *(int32_t *)(lVar6 + -0x10 + (longlong)puVar3);
      *(int32_t *)(lVar6 + -0x18 + (longlong)puVar3) = 0;
      *(uint64_t *)(lVar6 + -0x20 + (longlong)puVar3) = 0;
      *(uint64_t *)(lVar6 + -0x10 + (longlong)puVar3) = 0;
      puVar3[-1] = &UNK_18098bcb0;
      *puVar3 = 0;
      *(int32_t *)(puVar3 + 1) = 0;
      puVar3[-1] = &UNK_180a3c3e0;
      puVar3[2] = 0;
      *puVar3 = 0;
      *(int32_t *)(puVar3 + 1) = 0;
      *(int32_t *)(puVar3 + 1) = *(int32_t *)(lVar6 + 8 + (longlong)puVar3);
      *puVar3 = *(uint64_t *)(lVar6 + (longlong)puVar3);
      *(int32_t *)((longlong)puVar3 + 0x14) = *(int32_t *)(lVar6 + 0x14 + (longlong)puVar3);
      *(int32_t *)(puVar3 + 2) = *(int32_t *)(lVar6 + 0x10 + (longlong)puVar3);
      *(int32_t *)(lVar6 + 8 + (longlong)puVar3) = 0;
      *(uint64_t *)(lVar6 + (longlong)puVar3) = 0;
      *(uint64_t *)(lVar6 + 0x10 + (longlong)puVar3) = 0;
      *(int32_t *)(puVar3 + 3) = *(int32_t *)(lVar6 + 0x18 + (longlong)puVar3);
      *(int32_t *)((longlong)puVar3 + 0x1c) = *(int32_t *)(lVar6 + 0x1c + (longlong)puVar3);
      *(int32_t *)(puVar3 + 4) = *(int32_t *)(lVar6 + 0x20 + (longlong)puVar3);
      puVar4 = puVar4 + 10;
      lVar2 = (longlong)puVar3 + lVar6 + 0x28;
      puVar3 = puVar3 + 10;
    } while (lVar2 != lVar7);
  }
  FUN_180627ae0(puVar4,param_2);
  FUN_180627ae0(puVar4 + 4,param_2 + 0x20);
  *(int32_t *)(puVar4 + 8) = *(int32_t *)(param_2 + 0x40);
  *(int32_t *)((longlong)puVar4 + 0x44) = *(int32_t *)(param_2 + 0x44);
  *(int32_t *)(puVar4 + 9) = *(int32_t *)(param_2 + 0x48);
  lVar7 = param_1[1];
  lVar6 = *param_1;
  if (lVar6 != lVar7) {
    do {
      FUN_1800596a0(lVar6);
      lVar6 = lVar6 + 0x50;
    } while (lVar6 != lVar7);
    lVar6 = *param_1;
  }
  if (lVar6 == 0) {
    *param_1 = (longlong)puVar1;
    param_1[1] = (longlong)(puVar4 + 10);
    param_1[2] = (longlong)(puVar1 + lVar5 * 10);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar6);
}






// 函数: void FUN_1801fa030(uint64_t *param_1)
void FUN_1801fa030(uint64_t *param_1)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a0f068;
  FUN_1801f9a00();
  if ((longlong *)param_1[0x89] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x89] + 0x38))();
  }
  FUN_1808fc8a8(param_1 + 0x85,8,4,FUN_180045af0,uVar1);
  FUN_1808fc8a8(param_1 + 0x39,0x98,4,FUN_180044a30);
  FUN_1808fc8a8(param_1 + 0x27,8,0x10,FUN_180045af0);
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x38))();
  }
  param_1[2] = &UNK_180a3c3e0;
  if (param_1[3] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[3] = 0;
  *(int32_t *)(param_1 + 5) = 0;
  param_1[2] = &UNK_18098bcb0;
  return;
}



uint64_t FUN_1801fa050(uint64_t param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1801f9920();
  if ((param_2 & 1) != 0) {
    free(param_1,0x458,param_3,param_4,uVar1);
  }
  return param_1;
}






