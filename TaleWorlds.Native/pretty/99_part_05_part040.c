#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part040.c - 10 个函数

// 函数: void FUN_1802f0f10(longlong param_1)
void FUN_1802f0f10(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  lVar3 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x208) - lVar3 >> 3 != 0) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + lVar3);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      if (*(char *)(*(longlong *)(plVar1[3] + 0x20) + 0x561) == '\0') {
LAB_1802f0f89:
        (**(code **)(*plVar1 + 0x68))(plVar1);
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x110))(plVar1);
        if (cVar2 != '\0') goto LAB_1802f0f89;
      }
      (**(code **)(*plVar1 + 0x38))(plVar1);
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
      lVar3 = *(longlong *)(param_1 + 0x200);
    } while ((ulonglong)(longlong)iVar4 < (ulonglong)(*(longlong *)(param_1 + 0x208) - lVar3 >> 3));
  }
  return;
}






// 函数: void FUN_1802f0fe0(longlong param_1,longlong param_2)
void FUN_1802f0fe0(longlong param_1,longlong param_2)

{
  if (0 < *(int *)(param_1 + 0xe0)) {
    FUN_1806277c0(param_1 + 0xd0,*(int *)(param_1 + 0xe0) + 1);
    *(int8_t *)((ulonglong)*(uint *)(param_1 + 0xe0) + *(longlong *)(param_1 + 0xd8)) = 0x20;
    *(int8_t *)((ulonglong)(*(int *)(param_1 + 0xe0) + 1) + *(longlong *)(param_1 + 0xd8)) = 0;
    *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
  }
  if (0 < *(int *)(param_2 + 0x10)) {
    FUN_1806277c0(param_1 + 0xd0,*(int *)(param_1 + 0xe0) + *(int *)(param_2 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 0xe0) + *(longlong *)(param_1 + 0xd8),
           *(uint64_t *)(param_2 + 8),(longlong)(*(int *)(param_2 + 0x10) + 1));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802f1080(longlong param_1,longlong param_2)
void FUN_1802f1080(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int32_t uVar4;
  int32_t uVar5;
  bool bVar6;
  uint64_t *puVar7;
  longlong lVar8;
  longlong *plVar9;
  char *pcVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  void *puVar16;
  longlong *plVar17;
  uint64_t *puVar18;
  uint uVar19;
  longlong *plVar20;
  int8_t auStack_d08 [32];
  ushort auStack_ce8 [2];
  uint uStack_ce4;
  longlong lStack_ce0;
  longlong lStack_cd8;
  longlong lStack_cd0;
  uint64_t *puStack_cc8;
  longlong lStack_cc0;
  longlong lStack_cb8;
  uint64_t uStack_cb0;
  longlong *plStack_ca8;
  longlong alStack_c98 [130];
  longlong *plStack_888;
  longlong *plStack_880;
  longlong *plStack_878;
  longlong alStack_870 [128];
  longlong lStack_470;
  uint64_t *puStack_468;
  uint64_t *puStack_460;
  uint64_t uStack_458;
  longlong alStack_450 [128];
  uint64_t uStack_50;
  ulonglong uStack_48;
  
  uStack_cb0 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_d08;
  puStack_468 = (uint64_t *)0x0;
  puStack_460 = (uint64_t *)0x0;
  plVar17 = (longlong *)0x0;
  uStack_458 = 0;
  plVar11 = alStack_c98;
  lVar13 = 8;
  lVar12 = 8;
  plVar9 = alStack_450;
  do {
    lVar8 = plVar11[1];
    *plVar9 = *plVar11;
    plVar9[1] = lVar8;
    lVar8 = plVar11[3];
    plVar9[2] = plVar11[2];
    plVar9[3] = lVar8;
    lVar8 = plVar11[5];
    plVar9[4] = plVar11[4];
    plVar9[5] = lVar8;
    lVar8 = plVar11[7];
    plVar9[6] = plVar11[6];
    plVar9[7] = lVar8;
    lVar8 = plVar11[9];
    plVar9[8] = plVar11[8];
    plVar9[9] = lVar8;
    lVar8 = plVar11[0xb];
    plVar9[10] = plVar11[10];
    plVar9[0xb] = lVar8;
    uVar4 = *(int32_t *)((longlong)plVar11 + 100);
    lVar8 = plVar11[0xd];
    uVar5 = *(int32_t *)((longlong)plVar11 + 0x6c);
    *(int *)(plVar9 + 0xc) = (int)plVar11[0xc];
    *(int32_t *)((longlong)plVar9 + 100) = uVar4;
    *(int *)(plVar9 + 0xd) = (int)lVar8;
    *(int32_t *)((longlong)plVar9 + 0x6c) = uVar5;
    uVar4 = *(int32_t *)((longlong)plVar11 + 0x74);
    lVar8 = plVar11[0xf];
    uVar5 = *(int32_t *)((longlong)plVar11 + 0x7c);
    *(int *)(plVar9 + 0xe) = (int)plVar11[0xe];
    *(int32_t *)((longlong)plVar9 + 0x74) = uVar4;
    *(int *)(plVar9 + 0xf) = (int)lVar8;
    *(int32_t *)((longlong)plVar9 + 0x7c) = uVar5;
    plVar11 = plVar11 + 0x10;
    lVar12 = lVar12 + -1;
    plVar9 = plVar9 + 0x10;
  } while (lVar12 != 0);
  uStack_50 = 0;
  lStack_cc0 = param_2;
  lStack_cb8 = param_1;
  FUN_1802f47c0(&puStack_468);
  plStack_888 = (longlong *)0x0;
  plStack_880 = (longlong *)0x0;
  plStack_878 = (longlong *)0x0;
  plVar11 = alStack_c98;
  plVar9 = alStack_870;
  do {
    lVar12 = plVar11[1];
    *plVar9 = *plVar11;
    plVar9[1] = lVar12;
    lVar12 = plVar11[3];
    plVar9[2] = plVar11[2];
    plVar9[3] = lVar12;
    lVar12 = plVar11[5];
    plVar9[4] = plVar11[4];
    plVar9[5] = lVar12;
    lVar12 = plVar11[7];
    plVar9[6] = plVar11[6];
    plVar9[7] = lVar12;
    lVar12 = plVar11[9];
    plVar9[8] = plVar11[8];
    plVar9[9] = lVar12;
    lVar12 = plVar11[0xb];
    plVar9[10] = plVar11[10];
    plVar9[0xb] = lVar12;
    uVar4 = *(int32_t *)((longlong)plVar11 + 100);
    lVar12 = plVar11[0xd];
    uVar5 = *(int32_t *)((longlong)plVar11 + 0x6c);
    *(int *)(plVar9 + 0xc) = (int)plVar11[0xc];
    *(int32_t *)((longlong)plVar9 + 100) = uVar4;
    *(int *)(plVar9 + 0xd) = (int)lVar12;
    *(int32_t *)((longlong)plVar9 + 0x6c) = uVar5;
    uVar4 = *(int32_t *)((longlong)plVar11 + 0x74);
    lVar12 = plVar11[0xf];
    uVar5 = *(int32_t *)((longlong)plVar11 + 0x7c);
    *(int *)(plVar9 + 0xe) = (int)plVar11[0xe];
    *(int32_t *)((longlong)plVar9 + 0x74) = uVar4;
    *(int *)(plVar9 + 0xf) = (int)lVar12;
    *(int32_t *)((longlong)plVar9 + 0x7c) = uVar5;
    plVar11 = plVar11 + 0x10;
    lVar13 = lVar13 + -1;
    plVar9 = plVar9 + 0x10;
  } while (lVar13 != 0);
  lStack_470 = 0;
  FUN_1802f47c0(&plStack_888);
  auStack_ce8[0] = 0x20;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1802f4b90(param_1 + 0xd0,&puStack_468,auStack_ce8);
  }
  *(int32_t *)(param_1 + 0xe0) = 0;
  if (*(int8_t **)(param_1 + 0xd8) != (int8_t *)0x0) {
    **(int8_t **)(param_1 + 0xd8) = 0;
  }
  auStack_ce8[0] = auStack_ce8[0] & 0xff00;
  iVar3 = (int)(((longlong)puStack_460 - (longlong)puStack_468) / 0x58);
  uStack_ce4 = 0;
  lStack_cd8 = (longlong)iVar3;
  plVar11 = plStack_880;
  plVar9 = plStack_888;
  if (0 < iVar3) {
    lStack_ce0 = 0;
    plVar15 = plVar17;
    puVar18 = puStack_468;
    do {
      uVar19 = (uint)plVar15;
      iVar3 = *(int *)(lStack_ce0 + 0x10 + (longlong)puVar18);
      if (iVar3 == *(int *)(param_2 + 0x10)) {
        if (iVar3 == 0) {
LAB_1802f131c:
          if (*(int *)(param_2 + 0x10) != 0) goto LAB_1802f12d7;
          auStack_ce8[0] = CONCAT11(auStack_ce8[0]._1_1_,1);
        }
        else {
          pcVar10 = *(char **)(lStack_ce0 + 8 + (longlong)puVar18);
          lVar12 = *(longlong *)(param_2 + 8) - (longlong)pcVar10;
          do {
            cVar1 = *pcVar10;
            cVar2 = pcVar10[lVar12];
            if (cVar1 != cVar2) break;
            pcVar10 = pcVar10 + 1;
          } while (cVar2 != '\0');
          if (cVar1 != cVar2) goto LAB_1802f12d7;
          auStack_ce8[0] = CONCAT11(auStack_ce8[0]._1_1_,1);
        }
      }
      else {
        if (iVar3 == 0) goto LAB_1802f131c;
LAB_1802f12d7:
        puStack_cc8 = puVar18 + (longlong)(int)uVar19 * 0xb;
        if (plVar11 < plStack_878) {
          plStack_880 = plVar11 + 0xb;
          FUN_1800b8300(plVar11,puStack_cc8);
          plVar11 = plStack_880;
          plVar9 = plStack_888;
          puVar18 = puStack_468;
        }
        else {
          lStack_cd0 = ((longlong)plVar11 - (longlong)plVar9) / 0x58;
          if (lStack_cd0 == 0) {
            lStack_cd0 = 1;
LAB_1802f137b:
            plVar15 = (longlong *)((longlong)alStack_870 + lStack_470);
            lStack_470 = lStack_470 + lStack_cd0 * 0x58;
          }
          else {
            lStack_cd0 = lStack_cd0 * 2;
            plVar15 = plVar17;
            if (lStack_cd0 != 0) goto LAB_1802f137b;
          }
          plVar14 = plVar15;
          if (plVar9 != plVar11) {
            plVar9 = plVar9 + 1;
            do {
              *plVar14 = (longlong)&system_state_ptr;
              plVar14[1] = 0;
              *(int32_t *)(plVar14 + 2) = 0;
              *plVar14 = (longlong)&unknown_var_3480_ptr;
              plVar14[1] = (longlong)(plVar14 + 3);
              *(int32_t *)(plVar14 + 2) = 0;
              *(int8_t *)(plVar14 + 3) = 0;
              *(int *)(plVar14 + 2) = (int)plVar9[1];
              puVar16 = &system_buffer_ptr;
              if ((void *)*plVar9 != (void *)0x0) {
                puVar16 = (void *)*plVar9;
              }
              plStack_ca8 = plVar14;
              strcpy_s(plVar14[1],0x40,puVar16);
              plVar14 = plVar14 + 0xb;
              plVar20 = plVar9 + 10;
              plVar9 = plVar9 + 0xb;
            } while (plVar20 != plVar11);
          }
          lVar12 = lStack_cd0;
          FUN_1800b8300(plVar14,puStack_cc8);
          plVar9 = plStack_880;
          uVar19 = uStack_ce4;
          param_2 = lStack_cc0;
          puVar18 = puStack_468;
          for (plVar11 = plStack_888; lStack_cc0 = param_2, puStack_468 = puVar18, plVar11 != plVar9
              ; plVar11 = plVar11 + 0xb) {
            uStack_ce4 = uVar19;
            (**(code **)*plVar11)(plVar11,0);
            uVar19 = uStack_ce4;
            param_2 = lStack_cc0;
            puVar18 = puStack_468;
          }
          plStack_888 = plVar15;
          plStack_880 = plVar14 + 0xb;
          plStack_878 = plVar15 + lVar12 * 0xb;
          plVar11 = plStack_880;
          plVar9 = plStack_888;
        }
      }
      uStack_ce4 = uVar19 + 1;
      plVar15 = (longlong *)(ulonglong)uStack_ce4;
      lStack_ce0 = lStack_ce0 + 0x58;
      lStack_cd8 = lStack_cd8 + -1;
    } while (lStack_cd8 != 0);
    lStack_cd8 = 0;
    param_1 = lStack_cb8;
  }
  plVar15 = plStack_888;
  plVar14 = plStack_880;
  puVar18 = puStack_460;
  if ((plVar9 != plVar11) &&
     (lVar12 = (longlong)plVar11 - (longlong)plVar9 >> 0x3f, plVar20 = plVar17,
     ((longlong)plVar11 - (longlong)plVar9) / 0x58 + lVar12 != lVar12)) {
    do {
      FUN_1802f0fe0(param_1,plVar9 + (longlong)plVar17 * 0xb);
      uVar19 = (int)plVar20 + 1;
      plVar17 = (longlong *)(longlong)(int)uVar19;
      plVar9 = plStack_888;
      plVar20 = (longlong *)(ulonglong)uVar19;
      plVar15 = plStack_888;
      plVar14 = plStack_880;
      puVar18 = puStack_460;
    } while (plVar17 < (longlong *)(((longlong)plStack_880 - (longlong)plStack_888) / 0x58));
  }
  for (; plVar11 = plStack_880, bVar6 = plVar15 != plStack_880, plStack_880 = plVar14,
      puVar7 = puStack_468, puStack_460 = puVar18, bVar6; plVar15 = plVar15 + 0xb) {
    (**(code **)*plVar15)(plVar15,0);
    plVar14 = plStack_880;
    puVar18 = puStack_460;
    plStack_880 = plVar11;
  }
  for (; puVar7 != puVar18; puVar7 = puVar7 + 0xb) {
    (**(code **)*puVar7)(puVar7,0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_d08);
}






// 函数: void FUN_1802f15c0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802f15c0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (param_1 = (uint64_t *)*param_1; param_1 != puVar1; param_1 = param_1 + 0xb) {
    (**(code **)*param_1)(param_1,0,param_3,param_4,uVar2);
  }
  return;
}






// 函数: void FUN_1802f1610(longlong param_1,float *param_2)
void FUN_1802f1610(longlong param_1,float *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int32_t uStack_c;
  
  if (*(short *)(param_1 + 0x2b0) != *(short *)(param_1 + 0x2b4)) {
    if (*(char *)(param_1 + 0x2d8) == '\0') {
      FUN_1802e7e20();
    }
    else {
      FUN_18063ad30(*(longlong *)(param_1 + 0x28),*(longlong *)(param_1 + 0x28) + 0xf8,
                    param_1 + 0x70);
    }
    *(int16_t *)(param_1 + 0x2b0) = *(int16_t *)(param_1 + 0x2b4);
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  fVar2 = *(float *)(lVar1 + 0xf8);
  if (*param_2 <= fVar2) {
    fVar2 = *param_2;
  }
  fVar3 = *(float *)(lVar1 + 0xfc);
  if (param_2[1] <= *(float *)(lVar1 + 0xfc)) {
    fVar3 = param_2[1];
  }
  fVar5 = *(float *)(lVar1 + 0x100);
  if (param_2[2] <= *(float *)(lVar1 + 0x100)) {
    fVar5 = param_2[2];
  }
  *(float *)(lVar1 + 0xf8) = fVar2;
  *(float *)(lVar1 + 0xfc) = fVar3;
  *(float *)(lVar1 + 0x100) = fVar5;
  *(int32_t *)(lVar1 + 0x104) = uStack_c;
  fVar3 = *param_2;
  if (*param_2 <= *(float *)(lVar1 + 0x108)) {
    fVar3 = *(float *)(lVar1 + 0x108);
  }
  fVar4 = *(float *)(lVar1 + 0x10c);
  if (*(float *)(lVar1 + 0x10c) <= param_2[1]) {
    fVar4 = param_2[1];
  }
  fVar6 = *(float *)(lVar1 + 0x110);
  if (*(float *)(lVar1 + 0x110) <= param_2[2]) {
    fVar6 = param_2[2];
  }
  *(float *)(lVar1 + 0x108) = fVar3;
  *(float *)(lVar1 + 0x10c) = fVar4;
  *(float *)(lVar1 + 0x110) = fVar6;
  *(int32_t *)(lVar1 + 0x114) = uStack_c;
  FUN_1800b9f60(*(longlong *)(param_1 + 0x28) + 0xf8,fVar4,fVar6,fVar3,fVar2,fVar5);
  if (*(short *)(param_1 + 0x2b0) != *(short *)(param_1 + 0x2b4)) {
    if (*(char *)(param_1 + 0x2d8) == '\0') {
      FUN_1802e7e20(param_1);
      *(int16_t *)(param_1 + 0x2b0) = *(int16_t *)(param_1 + 0x2b4);
      return;
    }
    FUN_18063ad30(*(longlong *)(param_1 + 0x28),*(longlong *)(param_1 + 0x28) + 0xf8,param_1 + 0x70)
    ;
    *(int16_t *)(param_1 + 0x2b0) = *(int16_t *)(param_1 + 0x2b4);
    return;
  }
  FUN_18063ad30(*(longlong *)(param_1 + 0x28),*(longlong *)(param_1 + 0x28) + 0xf8,param_1 + 0x70);
  *(int16_t *)(param_1 + 0x2b6) = *(int16_t *)(param_1 + 0x2b2);
  return;
}



uint64_t FUN_1802f17b0(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar10;
  ulonglong uVar9;
  
  lVar6 = *(longlong *)(param_1 + 0x200);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x208) - lVar6 >> 3 != 0) {
    uVar9 = uVar5;
    do {
      lVar7 = *(longlong *)(*(longlong *)(uVar5 + lVar6) + 0x10);
      iVar3 = *(int *)(lVar7 + 0x18);
      if ((iVar3 == *(int *)(param_2 + 0x10)) && (iVar3 != 0)) {
        pcVar4 = *(char **)(lVar7 + 0x10);
        lVar7 = *(longlong *)(param_2 + 8) - (longlong)pcVar4;
        do {
          cVar1 = *pcVar4;
          cVar2 = pcVar4[lVar7];
          if (cVar1 != cVar2) break;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        bVar10 = cVar1 == cVar2;
      }
      else {
        if ((iVar3 == 0) && (*(int *)(param_2 + 0x10) == 0)) goto LAB_1802f1877;
        bVar10 = false;
      }
      if (bVar10) {
LAB_1802f1877:
        return *(uint64_t *)(lVar6 + (longlong)(int)uVar9 * 8);
      }
      lVar6 = *(longlong *)(param_1 + 0x200);
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar5 = uVar5 + 8;
    } while ((ulonglong)(longlong)(int)uVar8 <
             (ulonglong)(*(longlong *)(param_1 + 0x208) - lVar6 >> 3));
  }
  return 0;
}






// 函数: void FUN_1802f1890(longlong param_1,longlong param_2)
void FUN_1802f1890(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  FUN_1802f5440(param_2,*(uint64_t *)(param_2 + 8),*(uint64_t *)(param_1 + 0x200),
                *(uint64_t *)(param_1 + 0x208));
  uVar1 = 0;
  uVar3 = uVar1;
  if (*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802f1890(*(uint64_t *)(uVar1 + *(longlong *)(param_1 + 0x1c0)),param_2);
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  return;
}






// 函数: void FUN_1802f18d8(void)
void FUN_1802f18d8(void)

{
  longlong unaff_RBX;
  ulonglong uVar1;
  uint unaff_EDI;
  
  uVar1 = (ulonglong)unaff_EDI;
  do {
    FUN_1802f1890(*(uint64_t *)(uVar1 + *(longlong *)(unaff_RBX + 0x1c0)));
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3));
  return;
}






// 函数: void FUN_1802f1918(void)
void FUN_1802f1918(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802f1930(longlong param_1)
void FUN_1802f1930(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int8_t auStack_418 [48];
  int iStack_3e8;
  longlong lStack_3e0;
  uint64_t uStack_3b0;
  int8_t auStack_328 [704];
  ulonglong uStack_68;
  
  uStack_3b0 = 0xfffffffffffffffe;
  uStack_68 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_418;
  iStack_3e8 = 0;
  lVar2 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x208) - lVar2 >> 3 != 0) {
    lStack_3e0 = 0;
    do {
      lVar1 = *(longlong *)(lVar2 + lStack_3e0);
      lVar2 = lVar1 + 0x20;
      if (*(longlong *)(lVar1 + 0x28) != lVar2) {
                    // WARNING: Subroutine does not return
        memset(auStack_328,0,0x200);
      }
      FUN_1802f5b10(lVar2,*(uint64_t *)(lVar1 + 0x30));
      *(longlong *)lVar2 = lVar2;
      *(longlong *)(lVar1 + 0x28) = lVar2;
      *(uint64_t *)(lVar1 + 0x30) = 0;
      *(int8_t *)(lVar1 + 0x38) = 0;
      *(uint64_t *)(lVar1 + 0x40) = 0;
      iStack_3e8 = iStack_3e8 + 1;
      lStack_3e0 = lStack_3e0 + 8;
      lVar2 = *(longlong *)(param_1 + 0x200);
    } while ((ulonglong)(longlong)iStack_3e8 <
             (ulonglong)(*(longlong *)(param_1 + 0x208) - lVar2 >> 3));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_418);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1802f1cd0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong lVar4;
  longlong *plVar5;
  uint64_t *puVar6;
  longlong *plVar7;
  uint64_t *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint64_t *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  uint uStackX_20;
  int32_t uVar16;
  uint64_t uVar17;
  
  uVar17 = 0xfffffffffffffffe;
  uVar12 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(int32_t *)(param_2 + 3) = 3;
  uVar16 = 1;
  lVar2 = *(longlong *)(param_1 + 0xf0);
  uVar13 = uVar12;
  if (0 < (int)(*(longlong *)(param_1 + 0xf8) - lVar2 >> 3)) {
    do {
      if ((-1 < *(char *)(param_1 + 0x2e8)) ||
         (plVar9 = *(longlong **)(uVar12 + *(longlong *)(param_1 + 0xb0)), plVar9 == (longlong *)0x0
         )) {
        plVar9 = *(longlong **)(lVar2 + uVar12);
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x28))(plVar9);
      }
      puVar3 = (uint64_t *)0x0;
      puVar11 = (uint64_t *)param_2[1];
      if (puVar11 < (uint64_t *)param_2[2]) {
        param_2[1] = (longlong)(puVar11 + 1);
        *puVar11 = plVar9;
      }
      else {
        lVar2 = (longlong)puVar11 - *param_2 >> 3;
        if (lVar2 == 0) {
          lVar2 = 1;
LAB_1802f1dba:
          puVar3 = (uint64_t *)
                   FUN_18062b420(system_memory_pool_ptr,lVar2 * 8,(char)param_2[3],puVar11,uVar16,uVar17);
          puVar11 = (uint64_t *)param_2[1];
        }
        else {
          lVar2 = lVar2 * 2;
          if (lVar2 != 0) goto LAB_1802f1dba;
        }
        puVar8 = puVar3;
        for (puVar6 = (uint64_t *)*param_2; puVar6 != puVar11; puVar6 = puVar6 + 1) {
          *puVar8 = *puVar6;
          *puVar6 = 0;
          puVar8 = puVar8 + 1;
        }
        *puVar8 = plVar9;
        plVar9 = (longlong *)param_2[1];
        for (plVar5 = (longlong *)*param_2; plVar5 != plVar9; plVar5 = plVar5 + 1) {
          if ((longlong *)*plVar5 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar5 + 0x38))();
          }
        }
        if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *param_2 = (longlong)puVar3;
        param_2[1] = (longlong)(puVar8 + 1);
        param_2[2] = (longlong)(puVar3 + lVar2);
      }
      uVar14 = (int)uVar13 + 1;
      uVar12 = uVar12 + 8;
      lVar2 = *(longlong *)(param_1 + 0xf0);
      uVar13 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)(*(longlong *)(param_1 + 0xf8) - lVar2 >> 3));
  }
  uVar13 = 0;
  lVar2 = *(longlong *)(param_1 + 0x260);
  if (lVar2 != 0) {
    uVar12 = uVar13;
    if (*(longlong *)(lVar2 + 0x1b0) - *(longlong *)(lVar2 + 0x1a8) >> 3 != 0) {
      do {
        plVar5 = (longlong *)0x0;
        lVar2 = *(longlong *)(lVar2 + 0x1a8);
        plVar9 = (longlong *)param_2[1];
        if (plVar9 < (longlong *)param_2[2]) {
          param_2[1] = (longlong)(plVar9 + 1);
          plVar5 = *(longlong **)(lVar2 + uVar13);
          *plVar9 = (longlong)plVar5;
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x28))();
          }
        }
        else {
          lVar15 = (longlong)plVar9 - *param_2 >> 3;
          if (lVar15 == 0) {
            lVar15 = 1;
LAB_1802f1f16:
            plVar5 = (longlong *)FUN_18062b420(system_memory_pool_ptr,lVar15 * 8,(char)param_2[3]);
            plVar9 = (longlong *)param_2[1];
          }
          else {
            lVar15 = lVar15 * 2;
            if (lVar15 != 0) goto LAB_1802f1f16;
          }
          plVar10 = plVar5;
          for (plVar7 = (longlong *)*param_2; plVar7 != plVar9; plVar7 = plVar7 + 1) {
            *plVar10 = *plVar7;
            *plVar7 = 0;
            plVar10 = plVar10 + 1;
          }
          plVar9 = *(longlong **)(lVar2 + uVar13);
          *plVar10 = (longlong)plVar9;
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x28))();
          }
          plVar9 = (longlong *)param_2[1];
          for (plVar7 = (longlong *)*param_2; plVar7 != plVar9; plVar7 = plVar7 + 1) {
            if ((longlong *)*plVar7 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar7 + 0x38))();
            }
          }
          if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *param_2 = (longlong)plVar5;
          param_2[1] = (longlong)(plVar10 + 1);
          param_2[2] = (longlong)(plVar5 + lVar15);
        }
        uVar14 = (int)uVar12 + 1;
        uVar13 = uVar13 + 8;
        lVar2 = *(longlong *)(param_1 + 0x260);
        uVar12 = (ulonglong)uVar14;
      } while ((ulonglong)(longlong)(int)uVar14 <
               (ulonglong)(*(longlong *)(lVar2 + 0x1b0) - *(longlong *)(lVar2 + 0x1a8) >> 3));
    }
    cVar1 = '\0';
    if ('\0' < *(char *)(lVar2 + 0x20)) {
      do {
        uVar12 = 0;
        lVar15 = (longlong)cVar1 * 0x100 + *(longlong *)(lVar2 + 0x18);
        uStackX_20 = 0;
        lVar2 = *(longlong *)(lVar15 + 0xb0);
        uVar13 = uVar12;
        if (*(longlong *)(lVar15 + 0xb8) - lVar2 >> 3 != 0) {
          do {
            plVar5 = (longlong *)0x0;
            plVar9 = (longlong *)param_2[1];
            if (plVar9 < (longlong *)param_2[2]) {
              param_2[1] = (longlong)(plVar9 + 1);
              plVar5 = *(longlong **)(lVar2 + uVar13);
              *plVar9 = (longlong)plVar5;
              uStackX_20 = (uint)uVar12;
              if (plVar5 != (longlong *)0x0) {
                (**(code **)(*plVar5 + 0x28))();
              }
            }
            else {
              lVar4 = (longlong)plVar9 - *param_2 >> 3;
              if (lVar4 == 0) {
                lVar4 = 1;
LAB_1802f20a2:
                plVar5 = (longlong *)FUN_18062b420(system_memory_pool_ptr,lVar4 * 8,(char)param_2[3]);
                plVar9 = (longlong *)param_2[1];
              }
              else {
                lVar4 = lVar4 * 2;
                if (lVar4 != 0) goto LAB_1802f20a2;
              }
              plVar10 = plVar5;
              for (plVar7 = (longlong *)*param_2; plVar7 != plVar9; plVar7 = plVar7 + 1) {
                *plVar10 = *plVar7;
                *plVar7 = 0;
                plVar10 = plVar10 + 1;
              }
              plVar9 = *(longlong **)(lVar2 + uVar13);
              *plVar10 = (longlong)plVar9;
              if (plVar9 != (longlong *)0x0) {
                (**(code **)(*plVar9 + 0x28))();
              }
              plVar9 = (longlong *)param_2[1];
              for (plVar7 = (longlong *)*param_2; plVar7 != plVar9; plVar7 = plVar7 + 1) {
                if ((longlong *)*plVar7 != (longlong *)0x0) {
                  (**(code **)(*(longlong *)*plVar7 + 0x38))();
                }
              }
              if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              *param_2 = (longlong)plVar5;
              param_2[1] = (longlong)(plVar10 + 1);
              param_2[2] = (longlong)(plVar5 + lVar4);
            }
            uStackX_20 = uStackX_20 + 1;
            uVar12 = (ulonglong)uStackX_20;
            lVar2 = *(longlong *)(lVar15 + 0xb0);
            uVar13 = uVar13 + 8;
          } while ((ulonglong)(longlong)(int)uStackX_20 <
                   (ulonglong)(*(longlong *)(lVar15 + 0xb8) - lVar2 >> 3));
        }
        cVar1 = cVar1 + '\x01';
        lVar2 = *(longlong *)(param_1 + 0x260);
      } while (cVar1 < *(char *)(lVar2 + 0x20));
    }
  }
  return param_2;
}






// 函数: void FUN_1802f21b0(longlong param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802f21b0(longlong param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plStackX_8;
  
  *(int32_t *)(param_1 + 0x2c8) = param_2;
  uVar5 = 0;
  iVar2 = FUN_1802ed190(param_1,7,param_3,param_4,0xfffffffffffffffe);
  if (iVar2 != 0) {
    do {
      plVar4 = (longlong *)FUN_1802ed2b0(param_1,&plStackX_8,7,uVar5);
      lVar1 = *plVar4;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      *(int32_t *)(lVar1 + 0x170) = *(int32_t *)(param_1 + 0x2c8);
      uVar5 = uVar5 + 1;
      uVar3 = FUN_1802ed190(param_1,7);
    } while (uVar5 < uVar3);
  }
  return;
}






