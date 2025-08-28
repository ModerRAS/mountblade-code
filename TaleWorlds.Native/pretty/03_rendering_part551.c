#include "TaleWorlds.Native.Split.h"

// 03_rendering_part551.c - 11 个函数

// 函数: void FUN_18056effa(void)
void FUN_18056effa(void)

{
  int32_t *puVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint uVar7;
  uint64_t *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong unaff_RBX;
  ulonglong uVar11;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong in_R9;
  longlong in_R10;
  uint64_t *puVar12;
  uint64_t *puVar13;
  longlong lVar14;
  longlong unaff_R12;
  int unaff_R15D;
  float fVar15;
  
  uVar11 = unaff_RBX * 2;
  if (unaff_RBX == 0) {
    uVar11 = 1;
  }
  if (uVar11 < unaff_RBX + unaff_RSI) {
    uVar11 = unaff_RBX + unaff_RSI;
  }
  if (uVar11 == 0) {
    puVar8 = (uint64_t *)0x0;
  }
  else {
    puVar8 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,uVar11 * 0xe0,(char)unaff_RDI[3]);
    in_R9 = *unaff_RDI;
    in_R10 = unaff_RDI[1];
  }
  lVar9 = SUB168(SEXT816(unaff_R12) * SEXT816(in_R10 - in_R9),8);
  lVar9 = (lVar9 >> 6) - (lVar9 >> 0x3f);
  puVar13 = puVar8;
  if (0 < lVar9) {
    in_R9 = in_R9 - (longlong)puVar8;
    puVar12 = puVar8;
    do {
      uVar6 = ((uint64_t *)(in_R9 + (longlong)puVar12))[1];
      lVar9 = lVar9 + -1;
      *puVar12 = *(uint64_t *)(in_R9 + (longlong)puVar12);
      puVar12[1] = uVar6;
      uVar6 = *(uint64_t *)((longlong)puVar12 + in_R9 + 0x18);
      puVar12[2] = *(uint64_t *)((longlong)puVar12 + in_R9 + 0x10);
      puVar12[3] = uVar6;
      uVar6 = *(uint64_t *)((longlong)puVar12 + in_R9 + 0x28);
      puVar12[4] = *(uint64_t *)((longlong)puVar12 + in_R9 + 0x20);
      puVar12[5] = uVar6;
      uVar6 = *(uint64_t *)((longlong)puVar12 + in_R9 + 0x38);
      puVar12[6] = *(uint64_t *)((longlong)puVar12 + in_R9 + 0x30);
      puVar12[7] = uVar6;
      uVar6 = *(uint64_t *)((longlong)puVar12 + in_R9 + 0x48);
      puVar12[8] = *(uint64_t *)((longlong)puVar12 + in_R9 + 0x40);
      puVar12[9] = uVar6;
      uVar6 = *(uint64_t *)((longlong)puVar12 + in_R9 + 0x58);
      puVar12[10] = *(uint64_t *)((longlong)puVar12 + in_R9 + 0x50);
      puVar12[0xb] = uVar6;
      uVar6 = *(uint64_t *)((longlong)puVar12 + in_R9 + 0x68);
      puVar12[0xc] = *(uint64_t *)((longlong)puVar12 + in_R9 + 0x60);
      puVar12[0xd] = uVar6;
      puVar13 = puVar12 + 0x1c;
      uVar6 = *(uint64_t *)((longlong)puVar12 + in_R9 + 0x78);
      puVar12[0xe] = *(uint64_t *)((longlong)puVar12 + in_R9 + 0x70);
      puVar12[0xf] = uVar6;
      uVar6 = *(uint64_t *)((longlong)puVar12 + in_R9 + 0x88);
      puVar12[0x10] = *(uint64_t *)((longlong)puVar12 + in_R9 + 0x80);
      puVar12[0x11] = uVar6;
      uVar6 = *(uint64_t *)((longlong)puVar12 + in_R9 + 0x98);
      puVar12[0x12] = *(uint64_t *)((longlong)puVar12 + in_R9 + 0x90);
      puVar12[0x13] = uVar6;
      uVar6 = *(uint64_t *)((longlong)puVar12 + in_R9 + 0xa8);
      puVar12[0x14] = *(uint64_t *)((longlong)puVar12 + in_R9 + 0xa0);
      puVar12[0x15] = uVar6;
      uVar6 = *(uint64_t *)((longlong)puVar12 + in_R9 + 0xb8);
      puVar12[0x16] = *(uint64_t *)((longlong)puVar12 + in_R9 + 0xb0);
      puVar12[0x17] = uVar6;
      uVar3 = *(int32_t *)((longlong)puVar12 + in_R9 + 0xc4);
      uVar4 = *(int32_t *)((longlong)puVar12 + in_R9 + 200);
      uVar5 = *(int32_t *)((longlong)puVar12 + in_R9 + 0xcc);
      *(int32_t *)(puVar12 + 0x18) = *(int32_t *)((longlong)puVar12 + in_R9 + 0xc0);
      *(int32_t *)((longlong)puVar12 + 0xc4) = uVar3;
      *(int32_t *)(puVar12 + 0x19) = uVar4;
      *(int32_t *)((longlong)puVar12 + 0xcc) = uVar5;
      uVar6 = *(uint64_t *)((longlong)puVar12 + in_R9 + 0xd8);
      puVar12[0x1a] = *(uint64_t *)((longlong)puVar12 + in_R9 + 0xd0);
      puVar12[0x1b] = uVar6;
      puVar12 = puVar13;
    } while (0 < lVar9);
  }
  func_0x00018056ede0(puVar13);
  if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RDI = (longlong)puVar8;
  unaff_RDI[2] = (longlong)(puVar8 + uVar11 * 0x1c);
  unaff_RDI[1] = (longlong)(puVar13 + unaff_RSI * 0x1c);
  fVar15 = (float)_DAT_180c8ed38 * 1e-05;
  if ((int)unaff_RBX < unaff_R15D) {
    uVar11 = (ulonglong)(int)unaff_RBX;
    lVar14 = 0x180000000;
    lVar9 = uVar11 * 0xe0;
    do {
      lVar2 = *unaff_RDI;
      lVar10 = SUB168(SEXT816(unaff_R12) * SEXT816(unaff_RDI[1] - lVar2),8);
      if (uVar11 < (ulonglong)((lVar10 >> 6) - (lVar10 >> 0x3f))) {
        *(uint64_t *)(lVar9 + 0xd0 + lVar2) = _DAT_180c966e8;
        *(float *)(lVar9 + 0xd8 + lVar2) = fVar15;
        *(int8_t *)(lVar9 + 0xdc + lVar2) = 0;
        uVar7 = (uint)unaff_RBX & 0x8000000f;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
        }
        if (uVar7 < 0x10) {
          switch((ulonglong)*(uint *)(lVar14 + 0x56f2c0 + (longlong)(int)uVar7 * 4) + lVar14) {
          case 0x18056f221:
            puVar1 = (int32_t *)(lVar9 + lVar2);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            puVar1[3] = 0;
            break;
          case 0x18056f22f:
            *(int32_t *)(lVar9 + lVar2) = 1;
            break;
          default:
            *(int32_t *)(lVar9 + lVar2) = 0;
            break;
          case 0x18056f243:
            func_0x0001805b2c90(lVar2 + 0x10 + lVar9);
            break;
          case 0x18056f251:
            *(uint64_t *)(lVar9 + 0xa0 + lVar2) = 0xffffffffffffffff;
            *(int16_t *)(lVar9 + 200 + lVar2) = 0xff;
            *(uint64_t *)(lVar9 + 0xa8 + lVar2) = 0;
            *(uint64_t *)(lVar9 + 0xb0 + lVar2) = 0;
            *(uint64_t *)(lVar9 + 0xb8 + lVar2) = 0;
            *(uint64_t *)(lVar9 + 0xc0 + lVar2) = 0;
            *(int32_t *)(lVar9 + 0xcc + lVar2) = 0;
            break;
          case 0x18056f294:
            *(int32_t *)(lVar9 + lVar2) = 0xffffffff;
          }
        }
      }
      uVar7 = (uint)unaff_RBX + 1;
      unaff_RBX = (ulonglong)uVar7;
      uVar11 = uVar11 + 1;
      lVar9 = lVar9 + 0xe0;
    } while ((int)uVar7 < unaff_R15D);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18056f14d(void)
void FUN_18056f14d(void)

{
  int32_t *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint unaff_EBX;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong unaff_R12;
  int unaff_R15D;
  float fVar8;
  
  func_0x00018056ede0();
  unaff_RDI[1] = unaff_RDI[1] + unaff_RSI * 0xe0;
  fVar8 = (float)_DAT_180c8ed38 * 1e-05;
  if ((int)unaff_EBX < unaff_R15D) {
    uVar6 = (ulonglong)(int)unaff_EBX;
    lVar7 = 0x180000000;
    lVar5 = uVar6 * 0xe0;
    do {
      lVar2 = *unaff_RDI;
      lVar4 = SUB168(SEXT816(unaff_R12) * SEXT816(unaff_RDI[1] - lVar2),8);
      if (uVar6 < (ulonglong)((lVar4 >> 6) - (lVar4 >> 0x3f))) {
        *(uint64_t *)(lVar5 + 0xd0 + lVar2) = _DAT_180c966e8;
        *(float *)(lVar5 + 0xd8 + lVar2) = fVar8;
        *(int8_t *)(lVar5 + 0xdc + lVar2) = 0;
        uVar3 = unaff_EBX & 0x8000000f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
        }
        if (uVar3 < 0x10) {
          switch((ulonglong)*(uint *)(lVar7 + 0x56f2c0 + (longlong)(int)uVar3 * 4) + lVar7) {
          case 0x18056f221:
            puVar1 = (int32_t *)(lVar5 + lVar2);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            puVar1[3] = 0;
            break;
          case 0x18056f22f:
            *(int32_t *)(lVar5 + lVar2) = 1;
            break;
          default:
            *(int32_t *)(lVar5 + lVar2) = 0;
            break;
          case 0x18056f243:
            func_0x0001805b2c90(lVar2 + 0x10 + lVar5);
            break;
          case 0x18056f251:
            *(uint64_t *)(lVar5 + 0xa0 + lVar2) = 0xffffffffffffffff;
            *(int16_t *)(lVar5 + 200 + lVar2) = 0xff;
            *(uint64_t *)(lVar5 + 0xa8 + lVar2) = 0;
            *(uint64_t *)(lVar5 + 0xb0 + lVar2) = 0;
            *(uint64_t *)(lVar5 + 0xb8 + lVar2) = 0;
            *(uint64_t *)(lVar5 + 0xc0 + lVar2) = 0;
            *(int32_t *)(lVar5 + 0xcc + lVar2) = 0;
            break;
          case 0x18056f294:
            *(int32_t *)(lVar5 + lVar2) = 0xffffffff;
          }
        }
      }
      unaff_EBX = unaff_EBX + 1;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0xe0;
    } while ((int)unaff_EBX < unaff_R15D);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18056f195(uint64_t param_1,int32_t param_2)
void FUN_18056f195(uint64_t param_1,int32_t param_2)

{
  int32_t *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint unaff_EBX;
  longlong *unaff_RDI;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong unaff_R12;
  int unaff_R15D;
  
  uVar6 = (ulonglong)(int)unaff_EBX;
  lVar7 = 0x180000000;
  lVar5 = uVar6 * 0xe0;
  do {
    lVar2 = *unaff_RDI;
    lVar4 = SUB168(SEXT816(unaff_R12) * SEXT816(unaff_RDI[1] - lVar2),8);
    if (uVar6 < (ulonglong)((lVar4 >> 6) - (lVar4 >> 0x3f))) {
      *(uint64_t *)(lVar5 + 0xd0 + lVar2) = _DAT_180c966e8;
      *(int32_t *)(lVar5 + 0xd8 + lVar2) = param_2;
      *(int8_t *)(lVar5 + 0xdc + lVar2) = 0;
      uVar3 = unaff_EBX & 0x8000000f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
      }
      if (uVar3 < 0x10) {
        switch((ulonglong)*(uint *)(lVar7 + 0x56f2c0 + (longlong)(int)uVar3 * 4) + lVar7) {
        case 0x18056f221:
          puVar1 = (int32_t *)(lVar5 + lVar2);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          break;
        case 0x18056f22f:
          *(int32_t *)(lVar5 + lVar2) = 1;
          break;
        default:
          *(int32_t *)(lVar5 + lVar2) = 0;
          break;
        case 0x18056f243:
          func_0x0001805b2c90(lVar2 + 0x10 + lVar5);
          break;
        case 0x18056f251:
          *(uint64_t *)(lVar5 + 0xa0 + lVar2) = 0xffffffffffffffff;
          *(int16_t *)(lVar5 + 200 + lVar2) = 0xff;
          *(uint64_t *)(lVar5 + 0xa8 + lVar2) = 0;
          *(uint64_t *)(lVar5 + 0xb0 + lVar2) = 0;
          *(uint64_t *)(lVar5 + 0xb8 + lVar2) = 0;
          *(uint64_t *)(lVar5 + 0xc0 + lVar2) = 0;
          *(int32_t *)(lVar5 + 0xcc + lVar2) = 0;
          break;
        case 0x18056f294:
          *(int32_t *)(lVar5 + lVar2) = 0xffffffff;
        }
      }
    }
    unaff_EBX = unaff_EBX + 1;
    uVar6 = uVar6 + 1;
    lVar5 = lVar5 + 0xe0;
  } while ((int)unaff_EBX < unaff_R15D);
  return;
}





// 函数: void FUN_18056f340(longlong param_1)
void FUN_18056f340(longlong param_1)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1 + 0xbc0);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  *(uint64_t *)(param_1 + 0x5e4) = 0;
                    // WARNING: Subroutine does not return
  memset(*(uint64_t *)(param_1 + 0x5b8),0,(longlong)(*(int *)(param_1 + 0x5b0) >> 3));
}



uint64_t *
FUN_18056f3a0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a36660;
  _Mtx_destroy_in_situ();
  if (param_1[0x9891] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_18055f380(param_1 + 0x970f);
  FUN_1805fa720(param_1 + 0x8d9a);
  if (param_1[0x8d8a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x8d86] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_18056f670(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x4c538,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18056f480(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18056f480(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &UNK_180a36778;
  *(int32_t *)((longlong)param_1 + 0x24) = 0;
  *(int16_t *)(param_1 + 4) = 0;
  param_1[2] = 2;
  param_1[5] = &UNK_180a36730;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0xffffffffffffffff;
  param_1[0xbc] = 0;
  *(int32_t *)(param_1 + 0xbb) = 0;
  param_1[0xbd] = 0;
  param_1[0xba] = 0;
  param_1[0xbd] = _DAT_180c966e8;
  param_1[0xc1] = 0;
  param_1[0xbc] = param_1 + 9;
  *(int32_t *)(param_1 + 0xbb) = 0x2c40;
  *(int32_t *)(param_1 + 0xc2) = 0;
                    // WARNING: Subroutine does not return
  memset(param_1 + 9,0,0x588,param_4,0xfffffffffffffffe);
}



uint64_t FUN_18056f590(uint64_t param_1,ulonglong param_2)

{
  FUN_18056f670();
  if ((param_2 & 1) != 0) {
    free(param_1,0x6b8);
  }
  return param_1;
}





// 函数: void FUN_18056f5d0(longlong param_1)
void FUN_18056f5d0(longlong param_1)

{
  int32_t uStack_20;
  int32_t uStack_1c;
  int16_t uStack_16;
  
  *(int32_t *)(param_1 + 0x10) = 2;
  *(int32_t *)(param_1 + 0x14) = 0;
  *(int32_t *)(param_1 + 0x18) = uStack_20;
  *(int32_t *)(param_1 + 0x1c) = uStack_1c;
  *(ulonglong *)(param_1 + 0x20) = (ulonglong)uStack_16 << 0x10;
  (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))(param_1 + 0x28);
  (*(code *)**(uint64_t **)(param_1 + 0x28))(param_1 + 0x28);
  *(uint64_t *)(param_1 + 0x60c) = 0;
                    // WARNING: Subroutine does not return
  memset(*(uint64_t *)(param_1 + 0x5e0),0,(longlong)(*(int *)(param_1 + 0x5d8) >> 3));
}





// 函数: void FUN_18056f670(longlong *param_1)
void FUN_18056f670(longlong *param_1)

{
  char cVar1;
  
  *param_1 = (longlong)&UNK_180a36778;
  cVar1 = (**(code **)(param_1[5] + 0x30))(param_1 + 5);
  if (cVar1 != '\0') {
    (**(code **)(param_1[5] + 0x18))(param_1 + 5);
  }
  (**(code **)(*param_1 + 8))(param_1);
  FUN_18056fd20(param_1 + 0xc3);
  if (param_1[0xba] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xba] = 0;
  param_1[5] = (longlong)&UNK_180a36730;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18056f700(longlong param_1)
void FUN_18056f700(longlong param_1)

{
  uint64_t *puVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  uint64_t uVar5;
  int8_t auStack_88 [32];
  longlong *plStack_68;
  uint64_t uStack_60;
  longlong *plStack_58;
  longlong **pplStack_50;
  void *puStack_48;
  int8_t *puStack_40;
  int32_t uStack_38;
  int8_t auStack_30 [16];
  ulonglong uStack_20;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  cVar3 = (**(code **)(*(longlong *)(param_1 + 0x28) + 8))(param_1 + 0x28);
  if (cVar3 != '\0') {
    cVar3 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x10))(param_1 + 0x28,1);
    if ((((cVar3 == '\0') ||
         (cVar3 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x10))(param_1 + 0x28,2,1),
         cVar3 == '\0')) ||
        (cVar3 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x10))(param_1 + 0x28,3,0x100000),
        cVar3 == '\0')) ||
       (cVar3 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x10))(param_1 + 0x28,4,0x40000),
       cVar3 == '\0')) {
      (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))(param_1 + 0x28);
    }
    else {
      plVar4 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0xd0,8,3);
      plStack_68 = plVar4;
      FUN_180049830(plVar4);
      *plVar4 = (longlong)&UNK_180a366a0;
      plVar4[0x18] = param_1;
      plStack_58 = plVar4;
      (**(code **)(*plVar4 + 0x28))();
      uVar5 = _DAT_180c82868;
      puStack_48 = &UNK_1809fdc18;
      puStack_40 = auStack_30;
      auStack_30[0] = 0;
      uStack_38 = 0xf;
      strcpy_s(auStack_30,0x10,&UNK_180a36688);
      uVar5 = FUN_18005e4d0(uVar5,&puStack_48);
      *(uint64_t *)(param_1 + 8) = uVar5;
      puStack_48 = &UNK_18098bcb0;
      puVar1 = *(uint64_t **)(param_1 + 8);
      pcVar2 = *(code **)*puVar1;
      pplStack_50 = &plStack_68;
      plStack_68 = plVar4;
      (**(code **)(*plVar4 + 0x28))(plVar4);
      (*pcVar2)(puVar1,&plStack_68);
      (**(code **)(*plVar4 + 0x38))(plVar4);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18056f8f0(longlong *param_1)
void FUN_18056f8f0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uStackX_8;
  longlong lStackX_10;
  longlong lStackX_18;
  longlong lStackX_20;
  uint64_t uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  lVar3 = FUN_18056fbb0(param_1 + 0xc3);
  cVar2 = (**(code **)(param_1[5] + 0x30))(param_1 + 5);
  while (cVar2 != '\0') {
    uStackX_8 = uStackX_8 & 0xffffffff00000000;
    (**(code **)(param_1[5] + 0x28))(param_1 + 5,lVar3 + 0x590,&uStackX_8,lVar3 + 0x5d0,uVar8);
    if ((int)uStackX_8 - 1U < 0x580) {
      *(int *)(lVar3 + 0x5c8) = (int)uStackX_8 * 8;
      *(int32_t *)(lVar3 + 0x5c4) = 0;
      *(uint64_t *)((longlong)(int)uStackX_8 + *(longlong *)(lVar3 + 0x598)) = 0;
      cVar2 = (**(code **)(*param_1 + 0x18))(param_1,lVar3,lVar3 + 0x5d0);
      if (cVar2 != '\0') {
        lVar4 = _DAT_180c8ed58;
        lStackX_18 = lVar3;
        if (_DAT_180c8ed58 == 0) {
          QueryPerformanceCounter(&lStackX_10);
          lVar4 = lStackX_10;
        }
        *(double *)(lVar3 + 0x5a8) = (double)(lVar4 - _DAT_180c8ed48) * _DAT_180c8ed50;
        FUN_1805603c0(param_1 + 0xc3,&lStackX_18);
        puVar5 = (ulonglong *)param_1[0xcd];
        uVar6 = *puVar5;
        if ((uVar6 == puVar5[1]) && (puVar5[1] = puVar5[8], uVar6 == puVar5[8])) {
          if (puVar5 == (ulonglong *)param_1[0xd5]) {
            lStackX_18 = FUN_18062b1e0(_DAT_180c8ed18,0x5e8,8,3);
                    // WARNING: Subroutine does not return
            memset(lStackX_18,0,0x5e8);
          }
          puVar5 = (ulonglong *)param_1[0xcd];
          puVar5[1] = puVar5[8];
          uVar6 = *puVar5;
          if (uVar6 != puVar5[8]) goto LAB_18056fb2d;
          puVar5 = (ulonglong *)puVar5[0x10];
          uVar6 = *puVar5;
          puVar5[1] = puVar5[8];
          param_1[0xcd] = (longlong)puVar5;
          lVar3 = *(longlong *)(puVar5[0x11] + uVar6 * 8);
          uVar7 = puVar5[0x12];
        }
        else {
LAB_18056fb2d:
          lVar3 = *(longlong *)(puVar5[0x11] + uVar6 * 8);
          uVar7 = puVar5[0x12];
        }
        *puVar5 = uVar7 & uVar6 + 1;
      }
    }
    cVar2 = (**(code **)(param_1[5] + 0x30))(param_1 + 5);
  }
  lStackX_20 = lVar3;
  FUN_1805603c0(param_1 + 0xcd,&lStackX_20);
  plVar1 = param_1 + 0xc3;
  puVar5 = (ulonglong *)*plVar1;
  uVar6 = *puVar5;
  if ((uVar6 == puVar5[1]) && (puVar5[1] = puVar5[8], uVar6 == puVar5[8])) {
    if (puVar5 == (ulonglong *)param_1[0xcb]) {
      do {
        puVar5 = (ulonglong *)param_1[0xcd];
        uVar6 = *puVar5;
        if ((uVar6 == puVar5[1]) && (puVar5[1] = puVar5[8], uVar6 == puVar5[8])) {
          if (puVar5 == (ulonglong *)param_1[0xd5]) {
            return;
          }
          puVar5 = (ulonglong *)param_1[0xcd];
          puVar5[1] = puVar5[8];
          uVar6 = *puVar5;
          if (uVar6 != puVar5[8]) goto LAB_1805700bf;
          puVar5 = (ulonglong *)puVar5[0x10];
          uVar6 = *puVar5;
          puVar5[1] = puVar5[8];
          param_1[0xcd] = (longlong)puVar5;
          uStackX_8 = *(ulonglong *)(puVar5[0x11] + uVar6 * 8);
          uVar7 = puVar5[0x12];
        }
        else {
LAB_1805700bf:
          uStackX_8 = *(ulonglong *)(puVar5[0x11] + uVar6 * 8);
          uVar7 = puVar5[0x12];
        }
        *puVar5 = uVar7 & uVar6 + 1;
        if (uStackX_8 != 0) {
          if (*(longlong *)(uStackX_8 + 0x588) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(uint64_t *)(uStackX_8 + 0x588) = 0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(uStackX_8);
        }
      } while( true );
    }
    puVar5 = (ulonglong *)*plVar1;
    puVar5[1] = puVar5[8];
    uVar6 = *puVar5;
    if (uVar6 == puVar5[8]) {
      puVar5 = (ulonglong *)puVar5[0x10];
      uVar6 = *puVar5;
      puVar5[1] = puVar5[8];
      *plVar1 = (longlong)puVar5;
      uStackX_8 = *(ulonglong *)(puVar5[0x11] + uVar6 * 8);
      *puVar5 = puVar5[0x12] & uVar6 + 1;
      goto LAB_18057001b;
    }
  }
  uStackX_8 = *(ulonglong *)(puVar5[0x11] + uVar6 * 8);
  *puVar5 = puVar5[0x12] & uVar6 + 1;
LAB_18057001b:
  *(int32_t *)(uStackX_8 + 0x5c4) = 0;
  if (*(longlong *)(uStackX_8 + 0x588) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(uStackX_8 + 0x588) = 0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(uStackX_8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18056fbb0(longlong param_1)

{
  uint64_t uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  
  puVar4 = *(ulonglong **)(param_1 + 0x50);
  uVar2 = *puVar4;
  if ((uVar2 == puVar4[1]) && (puVar4[1] = puVar4[8], uVar2 == puVar4[8])) {
    if (puVar4 == *(ulonglong **)(param_1 + 0x90)) {
      uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x5e8,8,3,0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
      memset(uVar1,0,0x5e8);
    }
    puVar4 = *(ulonglong **)(param_1 + 0x50);
    puVar4[1] = puVar4[8];
    uVar2 = *puVar4;
    if (uVar2 == puVar4[8]) {
      puVar4 = (ulonglong *)puVar4[0x10];
      uVar2 = *puVar4;
      puVar4[1] = puVar4[8];
      *(ulonglong **)(param_1 + 0x50) = puVar4;
      uVar1 = *(uint64_t *)(puVar4[0x11] + uVar2 * 8);
      uVar3 = puVar4[0x12];
      goto LAB_18056fd07;
    }
  }
  uVar1 = *(uint64_t *)(puVar4[0x11] + uVar2 * 8);
  uVar3 = puVar4[0x12];
LAB_18056fd07:
  *puVar4 = uVar3 & uVar2 + 1;
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18056fd20(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18056fd20(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  FUN_18056ff70();
  LOCK();
  _DAT_180d48d28 = 0;
  UNLOCK();
  lVar3 = param_1[10];
  do {
    plVar1 = (longlong *)(lVar3 + 0x80);
    if (*(longlong *)(lVar3 + 0x98) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar3 = *plVar1;
  } while (*plVar1 != param_1[10]);
  LOCK();
  _DAT_180d48d28 = 0;
  UNLOCK();
  puVar2 = (uint64_t *)*param_1;
  do {
    plVar1 = puVar2 + 0x10;
    if (puVar2[0x13] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2[0x13],*puVar2,param_3,param_4,uVar4);
    }
    puVar2 = (uint64_t *)*plVar1;
  } while ((uint64_t *)*plVar1 != (uint64_t *)*param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18056fde0(uint64_t *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  byte bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int8_t auStack_48 [24];
  int8_t auStack_30 [24];
  
  puVar8 = (uint64_t *)0x0;
  uVar11 = 0xf;
  uVar10 = 1;
  do {
    bVar9 = (byte)uVar10;
    uVar10 = uVar10 * 2;
    uVar11 = uVar11 | uVar11 >> ((bVar9 & 7) << 3);
  } while (uVar10 < 8);
  param_1[9] = uVar11 + 1;
  if (uVar11 + 1 < 0x1001) {
    puVar4 = (uint64_t *)FUN_180560330();
    if (puVar4 == (uint64_t *)0x0) {
      FUN_180287f70(auStack_30);
                    // WARNING: Subroutine does not return
      _CxxThrowException(auStack_30,&UNK_180bd8a18);
    }
    puVar4[0x10] = puVar4;
  }
  else {
    param_1[9] = 0x800;
    puVar5 = puVar8;
    puVar6 = puVar8;
    puVar7 = puVar8;
    do {
      lVar1 = param_1[9];
      lVar2 = FUN_18062b420(_DAT_180c8ed18,lVar1 * 8 + 0xae,3);
      puVar3 = puVar8;
      if (lVar2 != 0) {
        puVar3 = (uint64_t *)((ulonglong)(-(int)lVar2 & 7) + lVar2);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[0x10] = 0;
        puVar3[0x11] = (ulonglong)(-(int)(puVar3 + 0x14) & 7) + (longlong)(puVar3 + 0x14);
        puVar3[0x12] = lVar1 + -1;
        puVar3[0x13] = lVar2;
      }
      if (puVar3 == (uint64_t *)0x0) {
        FUN_180287f70(auStack_48);
                    // WARNING: Subroutine does not return
        _CxxThrowException(auStack_48,&UNK_180bd8a18);
      }
      puVar4 = puVar3;
      if (puVar5 != (uint64_t *)0x0) {
        puVar6[0x10] = puVar3;
        puVar4 = puVar5;
      }
      puVar7 = (uint64_t *)((longlong)puVar7 + 1);
      puVar3[0x10] = puVar4;
      puVar5 = puVar4;
      puVar6 = puVar3;
    } while (puVar7 != (uint64_t *)0x2);
  }
  *param_1 = puVar4;
  param_1[8] = puVar4;
  LOCK();
  _DAT_180d48d28 = 0;
  UNLOCK();
  return param_1;
}





// 函数: void FUN_18056ff70(longlong *param_1)
void FUN_18056ff70(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  puVar1 = (ulonglong *)*param_1;
  uVar2 = *puVar1;
  if ((uVar2 == puVar1[1]) && (puVar1[1] = puVar1[8], uVar2 == puVar1[8])) {
    if (puVar1 == (ulonglong *)param_1[8]) {
      do {
        puVar1 = (ulonglong *)param_1[10];
        uVar2 = *puVar1;
        if ((uVar2 == puVar1[1]) && (puVar1[1] = puVar1[8], uVar2 == puVar1[8])) {
          if (puVar1 == (ulonglong *)param_1[0x12]) {
            return;
          }
          puVar1 = (ulonglong *)param_1[10];
          puVar1[1] = puVar1[8];
          uVar2 = *puVar1;
          if (uVar2 != puVar1[8]) goto LAB_1805700bf;
          puVar1 = (ulonglong *)puVar1[0x10];
          uVar2 = *puVar1;
          puVar1[1] = puVar1[8];
          param_1[10] = (longlong)puVar1;
          lVar4 = *(longlong *)(puVar1[0x11] + uVar2 * 8);
          uVar3 = puVar1[0x12];
        }
        else {
LAB_1805700bf:
          lVar4 = *(longlong *)(puVar1[0x11] + uVar2 * 8);
          uVar3 = puVar1[0x12];
        }
        *puVar1 = uVar3 & uVar2 + 1;
        if (lVar4 != 0) {
          if (*(longlong *)(lVar4 + 0x588) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(uint64_t *)(lVar4 + 0x588) = 0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar4);
        }
      } while( true );
    }
    puVar1 = (ulonglong *)*param_1;
    puVar1[1] = puVar1[8];
    uVar2 = *puVar1;
    if (uVar2 == puVar1[8]) {
      puVar1 = (ulonglong *)puVar1[0x10];
      uVar2 = *puVar1;
      puVar1[1] = puVar1[8];
      *param_1 = (longlong)puVar1;
      lVar4 = *(longlong *)(puVar1[0x11] + uVar2 * 8);
      *puVar1 = puVar1[0x12] & uVar2 + 1;
      goto LAB_18057001b;
    }
  }
  lVar4 = *(longlong *)(puVar1[0x11] + uVar2 * 8);
  *puVar1 = puVar1[0x12] & uVar2 + 1;
LAB_18057001b:
  *(int32_t *)(lVar4 + 0x5c4) = 0;
  if (*(longlong *)(lVar4 + 0x588) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(lVar4 + 0x588) = 0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar4);
}



uint64_t * FUN_180570140(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a36730;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



