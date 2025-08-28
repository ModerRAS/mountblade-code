#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part057.c - 5 个函数

// 函数: void FUN_1803e0670(longlong param_1,uint64_t param_2,longlong param_3,int32_t param_4)
void FUN_1803e0670(longlong param_1,uint64_t param_2,longlong param_3,int32_t param_4)

{
  longlong lVar1;
  float fVar2;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if ((*(byte *)(param_1 + 0xc0) & 0x80) != 0) {
    uStack_48 = *(uint64_t *)(param_1 + 0x80);
    uStack_40 = *(uint64_t *)(param_1 + 0x88);
    uStack_38 = *(uint64_t *)(param_1 + 0x90);
    uStack_30 = *(uint64_t *)(param_1 + 0x98);
    uStack_28 = *(int32_t *)(param_1 + 0xa0);
    uStack_24 = *(int32_t *)(param_1 + 0xa4);
    uStack_20 = *(int32_t *)(param_1 + 0xa8);
    uStack_1c = *(int32_t *)(param_1 + 0xac);
    uStack_18 = *(int32_t *)(param_1 + 0xb0);
    uStack_14 = *(int32_t *)(param_1 + 0xb4);
    uStack_10 = *(int32_t *)(param_1 + 0xb8);
    uStack_c = *(int32_t *)(param_1 + 0xbc);
    lVar1 = param_3;
    FUN_180084ae0(&uStack_48);
    *(uint64_t *)(lVar1 + 0xc0) = uStack_48;
    *(uint64_t *)(lVar1 + 200) = uStack_40;
    *(uint64_t *)(lVar1 + 0xd0) = uStack_38;
    *(uint64_t *)(lVar1 + 0xd8) = uStack_30;
    *(int32_t *)(lVar1 + 0xe0) = uStack_28;
    *(int32_t *)(lVar1 + 0xe4) = uStack_24;
    *(int32_t *)(lVar1 + 0xe8) = uStack_20;
    *(int32_t *)(lVar1 + 0xec) = uStack_1c;
    *(int32_t *)(lVar1 + 0xf0) = uStack_18;
    *(int32_t *)(lVar1 + 0xf4) = uStack_14;
    *(int32_t *)(lVar1 + 0xf8) = uStack_10;
    *(int32_t *)(lVar1 + 0xfc) = uStack_c;
    FUN_1802864f0(lVar1);
    tanf(*(float *)(param_1 + 0xec) * 0.017453292);
    fVar2 = (float)atanf();
    FUN_180286e40(param_3,fVar2 + fVar2,0x3f800000,0x3dcccccd,*(int32_t *)(param_1 + 0x34));
    return;
  }
  uStack_58 = *(int32_t *)(param_1 + 0xb0);
  uStack_54 = *(int32_t *)(param_1 + 0xb4);
  uStack_50 = *(int32_t *)(param_1 + 0xb8);
  uStack_4c = *(int32_t *)(param_1 + 0xbc);
  FUN_180286300(param_3,*(int32_t *)(param_1 + 0x34),&uStack_58,param_4,
                *(int32_t *)(param_1 + 0x34),0);
  return;
}



uint64_t FUN_1803e07a0(longlong param_1,uint64_t param_2,longlong param_3)

{
  void *puVar1;
  
  puVar1 = &system_buffer_ptr;
  if (*(void **)(param_3 + 0x158) != (void *)0x0) {
    puVar1 = *(void **)(param_3 + 0x158);
  }
  (**(code **)(*(longlong *)(param_1 + 0x118) + 0x10))((longlong *)(param_1 + 0x118),puVar1);
  puVar1 = &system_buffer_ptr;
  if (*(void **)(param_3 + 0x1b0) != (void *)0x0) {
    puVar1 = *(void **)(param_3 + 0x1b0);
  }
  (**(code **)(*(longlong *)(param_1 + 0x138) + 0x10))((longlong *)(param_1 + 0x138),puVar1);
  FUN_1803e0bc0(param_1);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1803e0820(longlong param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  longlong lVar5;
  longlong lVar6;
  void *puVar7;
  
  uVar4 = FUN_18062b1e0(system_memory_pool_ptr,0x200,8,3);
  lVar5 = FUN_180339920(uVar4);
  *(int32_t *)(lVar5 + 0x10) = 0;
  uVar4 = *(uint64_t *)(param_1 + 0x48);
  *(uint64_t *)(lVar5 + 0x18) = *(uint64_t *)(param_1 + 0x40);
  *(uint64_t *)(lVar5 + 0x20) = uVar4;
  uVar4 = *(uint64_t *)(param_1 + 0x58);
  *(uint64_t *)(lVar5 + 0x28) = *(uint64_t *)(param_1 + 0x50);
  *(uint64_t *)(lVar5 + 0x30) = uVar4;
  uVar4 = *(uint64_t *)(param_1 + 0x68);
  *(uint64_t *)(lVar5 + 0x38) = *(uint64_t *)(param_1 + 0x60);
  *(uint64_t *)(lVar5 + 0x40) = uVar4;
  uVar1 = *(int32_t *)(param_1 + 0x74);
  uVar2 = *(int32_t *)(param_1 + 0x78);
  uVar3 = *(int32_t *)(param_1 + 0x7c);
  *(int32_t *)(lVar5 + 0x48) = *(int32_t *)(param_1 + 0x70);
  *(int32_t *)(lVar5 + 0x4c) = uVar1;
  *(int32_t *)(lVar5 + 0x50) = uVar2;
  *(int32_t *)(lVar5 + 0x54) = uVar3;
  *(int32_t *)(lVar5 + 0xb0) = *(int32_t *)(param_1 + 0x30);
  *(int32_t *)(lVar5 + 0xb4) = *(int32_t *)(param_1 + 0xe4);
  uVar4 = *(uint64_t *)(param_1 + 0xdc);
  *(uint64_t *)(lVar5 + 0xd8) = *(uint64_t *)(param_1 + 0xd4);
  *(uint64_t *)(lVar5 + 0xe0) = uVar4;
  uVar1 = *(int32_t *)(param_1 + 0x15c);
  uVar2 = *(int32_t *)(param_1 + 0x160);
  uVar3 = *(int32_t *)(param_1 + 0x164);
  *(int32_t *)(lVar5 + 0xe8) = *(int32_t *)(param_1 + 0x158);
  *(int32_t *)(lVar5 + 0xec) = uVar1;
  *(int32_t *)(lVar5 + 0xf0) = uVar2;
  *(int32_t *)(lVar5 + 0xf4) = uVar3;
  if (*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x1b0) == 0) {
    lVar6 = *(longlong *)(param_1 + 0x108) + 0x10;
  }
  else {
    lVar6 = func_0x000180079240();
  }
  puVar7 = &system_buffer_ptr;
  if (*(void **)(lVar6 + 8) != (void *)0x0) {
    puVar7 = *(void **)(lVar6 + 8);
  }
  (**(code **)(*(longlong *)(lVar5 + 0x150) + 0x10))((longlong *)(lVar5 + 0x150),puVar7);
  puVar7 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x140) != (void *)0x0) {
    puVar7 = *(void **)(param_1 + 0x140);
  }
  (**(code **)(*(longlong *)(lVar5 + 0x1a8) + 0x10))((longlong *)(lVar5 + 0x1a8),puVar7);
  return lVar5;
}



byte FUN_1803e09a0(uint64_t param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  byte bVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = 0.0001;
  bVar8 = 0;
  cVar4 = func_0x000180285f10(param_2 + 0x18,param_3 + 0x18,0x38d1b717);
  if (cVar4 == '\0') {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
    bVar8 = 1;
  }
  cVar4 = func_0x000180274d30(param_2 + 0x58,param_3 + 0x58);
  if (cVar4 == '\0') {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
    bVar8 = 1;
  }
  if (*(int *)(param_2 + 0x14) != *(int *)(param_3 + 0x14)) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
    bVar8 = 1;
  }
  fVar10 = *(float *)(param_2 + 0xb0) - *(float *)(param_3 + 0xb0);
  if ((fVar10 <= -0.0001) || (fVar11 <= fVar10)) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
    bVar8 = 1;
  }
  fVar10 = *(float *)(param_2 + 0xb4) - *(float *)(param_3 + 0xb4);
  if ((fVar10 <= -0.0001) || (fVar11 <= fVar10)) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
    bVar8 = 1;
  }
  if (((fVar11 <= ABS(*(float *)(param_2 + 0xd8) - *(float *)(param_3 + 0xd8))) ||
      (fVar11 <= ABS(*(float *)(param_2 + 0xdc) - *(float *)(param_3 + 0xdc)))) ||
     (fVar11 <= ABS(*(float *)(param_2 + 0xe0) - *(float *)(param_3 + 0xe0)))) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
    bVar8 = bVar8 | 1;
  }
  if (((fVar11 <= ABS(*(float *)(param_2 + 0xe8) - *(float *)(param_3 + 0xe8))) ||
      (fVar11 <= ABS(*(float *)(param_2 + 0xec) - *(float *)(param_3 + 0xec)))) ||
     (fVar11 <= ABS(*(float *)(param_2 + 0xf0) - *(float *)(param_3 + 0xf0)))) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
    bVar8 = bVar8 | 1;
  }
  iVar3 = *(int *)(param_2 + 0x160);
  iVar7 = *(int *)(param_3 + 0x160);
  if (iVar3 == iVar7) {
    if (iVar3 != 0) {
      pbVar5 = *(byte **)(param_2 + 0x158);
      lVar9 = *(longlong *)(param_3 + 0x158) - (longlong)pbVar5;
      do {
        pbVar1 = pbVar5 + lVar9;
        iVar7 = (uint)*pbVar5 - (uint)*pbVar1;
        if (iVar7 != 0) break;
        pbVar5 = pbVar5 + 1;
      } while (*pbVar1 != 0);
    }
LAB_1803e0b4d:
    if (iVar7 != 0) goto LAB_1803e0b4f;
  }
  else {
    if (iVar3 == 0) goto LAB_1803e0b4d;
LAB_1803e0b4f:
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
    bVar8 = bVar8 | 1;
  }
  iVar3 = *(int *)(param_2 + 0x1b8);
  if (iVar3 == *(int *)(param_3 + 0x1b8)) {
    if (iVar3 != 0) {
      pcVar6 = *(char **)(param_2 + 0x1b0);
      lVar9 = *(longlong *)(param_3 + 0x1b0) - (longlong)pcVar6;
      do {
        cVar4 = *pcVar6;
        cVar2 = pcVar6[lVar9];
        if (cVar4 != cVar2) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (cVar4 == cVar2) {
        return bVar8;
      }
      goto LAB_1803e0ba8;
    }
  }
  else if (iVar3 != 0) goto LAB_1803e0ba8;
  if (*(int *)(param_3 + 0x1b8) == 0) {
    return bVar8;
  }
LAB_1803e0ba8:
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
  return bVar8 | 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e0bc0(longlong param_1,uint64_t param_2,longlong *param_3,longlong *param_4)
void FUN_1803e0bc0(longlong param_1,uint64_t param_2,longlong *param_3,longlong *param_4)

{
  byte bVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong lVar4;
  int8_t uVar5;
  uint64_t *puVar6;
  longlong *plVar7;
  byte bVar8;
  uint uVar9;
  void *puVar10;
  longlong lVar11;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  
  if (*(int *)(param_1 + 0x418) < 1) {
    plStackX_10 = *(longlong **)(param_1 + 0x400);
    *(uint64_t *)(param_1 + 0x400) = 0;
  }
  else {
    param_3 = (longlong *)(param_1 + 0x408);
    param_4 = (longlong *)CONCAT71((int7)((ulonglong)param_4 >> 8),1);
    puVar6 = (uint64_t *)
             FUN_1800b08e0(system_resource_state,&plStackX_10,param_3,param_4,0,0xfffffffffffffffe);
    uVar3 = *puVar6;
    *puVar6 = 0;
    plVar7 = *(longlong **)(param_1 + 0x400);
    *(uint64_t *)(param_1 + 0x400) = uVar3;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x38))();
    }
  }
  if (plStackX_10 != (longlong *)0x0) {
    (**(code **)(*plStackX_10 + 0x38))();
  }
  if (*(int *)(param_1 + 0x128) < 1) {
    plStackX_20 = *(longlong **)(param_1 + 0x108);
    *(uint64_t *)(param_1 + 0x108) = 0;
  }
  else {
    param_3 = (longlong *)(param_1 + 0x118);
    puVar6 = (uint64_t *)FUN_1800b33d0(system_resource_state,&plStackX_18);
    uVar3 = *puVar6;
    *puVar6 = 0;
    plVar7 = *(longlong **)(param_1 + 0x108);
    *(uint64_t *)(param_1 + 0x108) = uVar3;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x38))();
    }
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
    if (*(longlong *)(param_1 + 0x108) == 0) goto LAB_1803e0d25;
    puVar6 = (uint64_t *)FUN_1800763c0(*(longlong *)(param_1 + 0x108),&plStackX_20);
    uVar3 = *puVar6;
    *puVar6 = 0;
    plVar7 = *(longlong **)(param_1 + 0x108);
    *(uint64_t *)(param_1 + 0x108) = uVar3;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x38))();
    }
  }
  if (plStackX_20 != (longlong *)0x0) {
    (**(code **)(*plStackX_20 + 0x38))();
  }
LAB_1803e0d25:
  if (*(int *)(param_1 + 0x148) < 1) {
    plVar7 = *(longlong **)(param_1 + 0x110);
    *(uint64_t *)(param_1 + 0x110) = 0;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x38))();
    }
  }
  else {
    puVar10 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x140) != (void *)0x0) {
      puVar10 = *(void **)(param_1 + 0x140);
    }
    plVar7 = (longlong *)FUN_1802abc50(system_resource_state + 0x1d0,puVar10);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7);
    }
    plStackX_10 = *(longlong **)(param_1 + 0x110);
    *(longlong **)(param_1 + 0x110) = plVar7;
    if (plStackX_10 != (longlong *)0x0) {
      (**(code **)(*plStackX_10 + 0x38))();
    }
    if ((*(longlong *)(param_1 + 0x110) != 0) &&
       (lVar4 = *(longlong *)(param_1 + 0x108), lVar4 != 0)) {
      if (*(longlong *)(param_1 + 0x110) != *(longlong *)(lVar4 + 0x1b8)) {
        if (*(char *)(lVar4 + 0xb1) != '\0') {
          plStackX_10 = (longlong *)(param_1 + 0x110);
          plStackX_18 = param_3;
          plStackX_20 = param_4;
                    // WARNING: Subroutine does not return
          FUN_1808fd200();
        }
        FUN_180080810(lVar4 + 0x1b8);
        lVar2 = *(longlong *)(lVar4 + 0x1b8);
        if (lVar2 != 0) {
          lVar11 = 0;
          bVar1 = *(byte *)(lVar4 + 0xfd);
          bVar8 = (byte)((uint)*(int32_t *)(*(longlong *)(lVar2 + 0x1e0) + 0x1588) >> 0x1b) << 7;
          *(byte *)(lVar4 + 0xfd) = bVar8 | bVar1 & 0x7f;
          uVar9 = *(uint *)(lVar2 + 0x138) & 0x3000;
          if (uVar9 == 0x1000) {
            *(int8_t *)(lVar4 + 0xf7) = 1;
          }
          else {
            uVar5 = 0;
            if (uVar9 == 0x2000) {
              uVar5 = 2;
            }
            *(int8_t *)(lVar4 + 0xf7) = uVar5;
          }
          bVar8 = bVar8 | bVar1 & 0x77;
          *(byte *)(lVar4 + 0xfd) = bVar8;
          plVar7 = (longlong *)(lVar2 + 0xb8);
          do {
            if (0xf < lVar11) break;
            if ((*plVar7 != 0) && (*(int *)(*plVar7 + 0x36c) != 0)) {
              bVar8 = bVar8 | 8;
              *(byte *)(lVar4 + 0xfd) = bVar8;
            }
            lVar11 = lVar11 + 1;
            plVar7 = plVar7 + 1;
          } while ((bVar8 & 8) == 0);
          FUN_1800781e0(lVar4);
        }
      }
      return;
    }
  }
  return;
}






// 函数: void FUN_1803e0e00(longlong param_1,float *param_2)
void FUN_1803e0e00(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  fVar26 = param_2[8] * param_2[8] + param_2[9] * param_2[9] + param_2[10] * param_2[10];
  fVar27 = param_2[4] * param_2[4] + param_2[5] * param_2[5] + param_2[6] * param_2[6];
  fVar28 = *param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2];
  if ((*(byte *)(param_1 + 0xc0) & 0x80) == 0) {
    if (fVar27 <= fVar28) {
      if (fVar27 <= fVar26) {
        fVar26 = fVar27;
      }
    }
    else if (fVar28 <= fVar26) {
      fVar26 = fVar28;
    }
    if (fVar26 != 1.0) {
      fVar26 = SQRT(fVar26);
    }
    fVar27 = fVar26 * *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x3c) = fVar26 * *(float *)(param_1 + 0x38);
    *(float *)(param_1 + 0x34) = fVar27;
    fVar27 = fVar27 / fVar26;
    *(float *)(param_1 + 0x40) = fVar27;
    *(int32_t *)(param_1 + 0x44) = 0;
    *(int32_t *)(param_1 + 0x48) = 0;
    *(int32_t *)(param_1 + 0x4c) = 0;
    *(int32_t *)(param_1 + 0x50) = 0;
    *(float *)(param_1 + 0x54) = fVar27;
    *(int32_t *)(param_1 + 0x58) = 0;
    *(int32_t *)(param_1 + 0x5c) = 0;
    *(int32_t *)(param_1 + 0x60) = 0;
    *(int32_t *)(param_1 + 100) = 0;
    *(float *)(param_1 + 0x68) = fVar27;
    *(int32_t *)(param_1 + 0x6c) = 0;
    fVar10 = *param_2;
    fVar11 = param_2[1];
    fVar12 = param_2[2];
    fVar13 = param_2[3];
    fVar14 = param_2[4];
    fVar15 = param_2[5];
    fVar16 = param_2[6];
    fVar17 = param_2[7];
    fVar25 = param_2[8];
    fVar18 = param_2[9];
    fVar19 = param_2[10];
    fVar20 = param_2[0xb];
    fVar26 = *(float *)(param_1 + 0x44);
    fVar27 = *(float *)(param_1 + 0x40);
    fVar28 = *(float *)(param_1 + 0x48);
    fVar1 = *(float *)(param_1 + 0x54);
    fVar2 = *(float *)(param_1 + 100);
    fVar3 = *(float *)(param_1 + 0x74);
    fVar4 = *(float *)(param_1 + 0x50);
    fVar5 = *(float *)(param_1 + 0x58);
    fVar6 = *(float *)(param_1 + 0x60);
    fVar7 = *(float *)(param_1 + 0x68);
    fVar8 = *(float *)(param_1 + 0x70);
    fVar9 = *(float *)(param_1 + 0x78);
    fVar21 = param_2[0xc];
    fVar22 = param_2[0xd];
    fVar23 = param_2[0xe];
    fVar24 = param_2[0xf];
    *(float *)(param_1 + 0x80) = fVar26 * fVar14 + fVar27 * fVar10 + fVar28 * fVar25;
    *(float *)(param_1 + 0x84) = fVar26 * fVar15 + fVar27 * fVar11 + fVar28 * fVar18;
    *(float *)(param_1 + 0x88) = fVar26 * fVar16 + fVar27 * fVar12 + fVar28 * fVar19;
    *(float *)(param_1 + 0x8c) = fVar26 * fVar17 + fVar27 * fVar13 + fVar28 * fVar20;
    *(float *)(param_1 + 0x90) = fVar1 * fVar14 + fVar4 * fVar10 + fVar5 * fVar25;
    *(float *)(param_1 + 0x94) = fVar1 * fVar15 + fVar4 * fVar11 + fVar5 * fVar18;
    *(float *)(param_1 + 0x98) = fVar1 * fVar16 + fVar4 * fVar12 + fVar5 * fVar19;
    *(float *)(param_1 + 0x9c) = fVar1 * fVar17 + fVar4 * fVar13 + fVar5 * fVar20;
    *(float *)(param_1 + 0xa0) = fVar2 * fVar14 + fVar6 * fVar10 + fVar7 * fVar25;
    *(float *)(param_1 + 0xa4) = fVar2 * fVar15 + fVar6 * fVar11 + fVar7 * fVar18;
    *(float *)(param_1 + 0xa8) = fVar2 * fVar16 + fVar6 * fVar12 + fVar7 * fVar19;
    *(float *)(param_1 + 0xac) = fVar2 * fVar17 + fVar6 * fVar13 + fVar7 * fVar20;
    *(float *)(param_1 + 0xb0) = fVar3 * fVar14 + fVar8 * fVar10 + fVar9 * fVar25 + fVar21;
    *(float *)(param_1 + 0xb4) = fVar3 * fVar15 + fVar8 * fVar11 + fVar9 * fVar18 + fVar22;
    *(float *)(param_1 + 0xb8) = fVar3 * fVar16 + fVar8 * fVar12 + fVar9 * fVar19 + fVar23;
    *(float *)(param_1 + 0xbc) = fVar3 * fVar17 + fVar8 * fVar13 + fVar9 * fVar20 + fVar24;
  }
  else {
    if (fVar27 <= fVar28) {
      if (fVar27 <= fVar26) {
        fVar26 = fVar27;
      }
    }
    else if (fVar28 <= fVar26) {
      fVar26 = fVar28;
    }
    if (fVar26 != 1.0) {
      fVar26 = SQRT(fVar26);
    }
    fVar27 = *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x68) = fVar27;
    *(uint64_t *)(param_1 + 0x60) = 0;
    *(int32_t *)(param_1 + 0x50) = 0;
    *(float *)(param_1 + 0x34) = fVar27 * fVar26;
    *(float *)(param_1 + 0x3c) = fVar26 * *(float *)(param_1 + 0x38);
    fVar25 = (float)tanf(*(float *)(param_1 + 0xec) * 0.017453292);
    fVar25 = fVar25 * fVar27;
    *(int32_t *)(param_1 + 0x58) = 0;
    *(uint64_t *)(param_1 + 0x44) = 0;
    *(float *)(param_1 + 0x54) = fVar25;
    *(float *)(param_1 + 0x40) = fVar25;
    fVar2 = *param_2;
    fVar3 = param_2[1];
    fVar4 = param_2[2];
    fVar5 = param_2[3];
    fVar6 = param_2[4];
    fVar7 = param_2[5];
    fVar8 = param_2[6];
    fVar9 = param_2[7];
    fVar10 = param_2[8];
    fVar11 = param_2[9];
    fVar12 = param_2[10];
    fVar13 = param_2[0xb];
    fVar26 = *(float *)(param_1 + 0x78);
    fVar28 = *(float *)(param_1 + 0x74);
    fVar1 = *(float *)(param_1 + 0x70);
    fVar14 = param_2[0xc];
    fVar15 = param_2[0xd];
    fVar16 = param_2[0xe];
    fVar17 = param_2[0xf];
    *(float *)(param_1 + 0x80) = fVar25 * fVar2 + fVar6 * 0.0 + fVar10 * 0.0;
    *(float *)(param_1 + 0x84) = fVar25 * fVar3 + fVar7 * 0.0 + fVar11 * 0.0;
    *(float *)(param_1 + 0x88) = fVar25 * fVar4 + fVar8 * 0.0 + fVar12 * 0.0;
    *(float *)(param_1 + 0x8c) = fVar25 * fVar5 + fVar9 * 0.0 + fVar13 * 0.0;
    *(float *)(param_1 + 0x90) = fVar25 * fVar6 + fVar2 * 0.0 + fVar10 * 0.0;
    *(float *)(param_1 + 0x94) = fVar25 * fVar7 + fVar3 * 0.0 + fVar11 * 0.0;
    *(float *)(param_1 + 0x98) = fVar25 * fVar8 + fVar4 * 0.0 + fVar12 * 0.0;
    *(float *)(param_1 + 0x9c) = fVar25 * fVar9 + fVar5 * 0.0 + fVar13 * 0.0;
    *(float *)(param_1 + 0xa0) = fVar27 * fVar10 + fVar2 * 0.0 + fVar6 * 0.0;
    *(float *)(param_1 + 0xa4) = fVar27 * fVar11 + fVar3 * 0.0 + fVar7 * 0.0;
    *(float *)(param_1 + 0xa8) = fVar27 * fVar12 + fVar4 * 0.0 + fVar8 * 0.0;
    *(float *)(param_1 + 0xac) = fVar27 * fVar13 + fVar5 * 0.0 + fVar9 * 0.0;
    *(float *)(param_1 + 0xb0) = fVar28 * fVar6 + fVar1 * fVar2 + fVar26 * fVar10 + fVar14;
    *(float *)(param_1 + 0xb4) = fVar28 * fVar7 + fVar1 * fVar3 + fVar26 * fVar11 + fVar15;
    *(float *)(param_1 + 0xb8) = fVar28 * fVar8 + fVar1 * fVar4 + fVar26 * fVar12 + fVar16;
    *(float *)(param_1 + 0xbc) = fVar28 * fVar9 + fVar1 * fVar5 + fVar26 * fVar13 + fVar17;
  }
  return;
}






// 函数: void FUN_1803e0e9a(longlong param_1,uint64_t param_2,float param_3,float param_4)
void FUN_1803e0e9a(longlong param_1,uint64_t param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  longlong in_RAX;
  float *unaff_RBX;
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  bool in_CF;
  float fVar21;
  float in_XMM4_Da;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RSI;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM9_Dd;
  if (in_CF) {
    if (in_XMM4_Da <= param_3) {
      param_3 = in_XMM4_Da;
    }
  }
  else if (param_4 <= param_3) {
    param_3 = param_4;
  }
  if (param_3 != 1.0) {
    param_3 = SQRT(param_3);
  }
  fVar1 = *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x68) = fVar1;
  *(uint64_t *)(param_1 + 0x60) = 0;
  *(int32_t *)(param_1 + 0x50) = 0;
  *(float *)(param_1 + 0x34) = fVar1 * param_3;
  *(float *)(param_1 + 0x3c) = param_3 * *(float *)(param_1 + 0x38);
  fVar21 = (float)tanf(*(float *)(param_1 + 0xec) * 0.017453292);
  fVar21 = fVar21 * fVar1;
  *(int32_t *)(unaff_RDI + 0x58) = 0;
  *(uint64_t *)(unaff_RDI + 0x44) = 0;
  *(float *)(unaff_RDI + 0x54) = fVar21;
  *(float *)(unaff_RDI + 0x40) = fVar21;
  fVar5 = *unaff_RBX;
  fVar6 = unaff_RBX[1];
  fVar7 = unaff_RBX[2];
  fVar8 = unaff_RBX[3];
  fVar9 = unaff_RBX[4];
  fVar10 = unaff_RBX[5];
  fVar11 = unaff_RBX[6];
  fVar12 = unaff_RBX[7];
  fVar13 = unaff_RBX[8];
  fVar14 = unaff_RBX[9];
  fVar15 = unaff_RBX[10];
  fVar16 = unaff_RBX[0xb];
  fVar2 = *(float *)(unaff_RDI + 0x78);
  fVar3 = *(float *)(unaff_RDI + 0x74);
  fVar4 = *(float *)(unaff_RDI + 0x70);
  fVar17 = unaff_RBX[0xc];
  fVar18 = unaff_RBX[0xd];
  fVar19 = unaff_RBX[0xe];
  fVar20 = unaff_RBX[0xf];
  *(float *)(unaff_RDI + 0x80) = fVar21 * fVar5 + fVar9 * 0.0 + fVar13 * 0.0;
  *(float *)(unaff_RDI + 0x84) = fVar21 * fVar6 + fVar10 * 0.0 + fVar14 * 0.0;
  *(float *)(unaff_RDI + 0x88) = fVar21 * fVar7 + fVar11 * 0.0 + fVar15 * 0.0;
  *(float *)(unaff_RDI + 0x8c) = fVar21 * fVar8 + fVar12 * 0.0 + fVar16 * 0.0;
  *(float *)(unaff_RDI + 0x90) = fVar21 * fVar9 + fVar5 * 0.0 + fVar13 * 0.0;
  *(float *)(unaff_RDI + 0x94) = fVar21 * fVar10 + fVar6 * 0.0 + fVar14 * 0.0;
  *(float *)(unaff_RDI + 0x98) = fVar21 * fVar11 + fVar7 * 0.0 + fVar15 * 0.0;
  *(float *)(unaff_RDI + 0x9c) = fVar21 * fVar12 + fVar8 * 0.0 + fVar16 * 0.0;
  *(float *)(unaff_RDI + 0xa0) = fVar1 * fVar13 + fVar5 * 0.0 + fVar9 * 0.0;
  *(float *)(unaff_RDI + 0xa4) = fVar1 * fVar14 + fVar6 * 0.0 + fVar10 * 0.0;
  *(float *)(unaff_RDI + 0xa8) = fVar1 * fVar15 + fVar7 * 0.0 + fVar11 * 0.0;
  *(float *)(unaff_RDI + 0xac) = fVar1 * fVar16 + fVar8 * 0.0 + fVar12 * 0.0;
  *(float *)(unaff_RDI + 0xb0) = fVar3 * fVar9 + fVar4 * fVar5 + fVar2 * fVar13 + fVar17;
  *(float *)(unaff_RDI + 0xb4) = fVar3 * fVar10 + fVar4 * fVar6 + fVar2 * fVar14 + fVar18;
  *(float *)(unaff_RDI + 0xb8) = fVar3 * fVar11 + fVar4 * fVar7 + fVar2 * fVar15 + fVar19;
  *(float *)(unaff_RDI + 0xbc) = fVar3 * fVar12 + fVar4 * fVar8 + fVar2 * fVar16 + fVar20;
  return;
}






// 函数: void FUN_1803e0fc4(longlong param_1,float *param_2,float param_3,float param_4)
void FUN_1803e0fc4(longlong param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float in_XMM4_Da;
  
  if (param_4 <= in_XMM4_Da) {
    if (param_4 <= param_3) {
      param_3 = param_4;
    }
  }
  else if (in_XMM4_Da <= param_3) {
    param_3 = in_XMM4_Da;
  }
  if (param_3 != 1.0) {
    param_3 = SQRT(param_3);
  }
  fVar28 = param_3 * *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x3c) = param_3 * *(float *)(param_1 + 0x38);
  *(float *)(param_1 + 0x34) = fVar28;
  fVar28 = fVar28 / param_3;
  *(float *)(param_1 + 0x40) = fVar28;
  *(int32_t *)(param_1 + 0x44) = 0;
  *(int32_t *)(param_1 + 0x48) = 0;
  *(int32_t *)(param_1 + 0x4c) = 0;
  *(int32_t *)(param_1 + 0x50) = 0;
  *(float *)(param_1 + 0x54) = fVar28;
  *(int32_t *)(param_1 + 0x58) = 0;
  *(int32_t *)(param_1 + 0x5c) = 0;
  *(int32_t *)(param_1 + 0x60) = 0;
  *(int32_t *)(param_1 + 100) = 0;
  *(float *)(param_1 + 0x68) = fVar28;
  *(int32_t *)(param_1 + 0x6c) = 0;
  fVar12 = *param_2;
  fVar13 = param_2[1];
  fVar14 = param_2[2];
  fVar15 = param_2[3];
  fVar16 = param_2[4];
  fVar17 = param_2[5];
  fVar18 = param_2[6];
  fVar19 = param_2[7];
  fVar20 = param_2[8];
  fVar21 = param_2[9];
  fVar22 = param_2[10];
  fVar23 = param_2[0xb];
  fVar28 = *(float *)(param_1 + 0x44);
  fVar1 = *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x54);
  fVar4 = *(float *)(param_1 + 100);
  fVar5 = *(float *)(param_1 + 0x74);
  fVar6 = *(float *)(param_1 + 0x50);
  fVar7 = *(float *)(param_1 + 0x58);
  fVar8 = *(float *)(param_1 + 0x60);
  fVar9 = *(float *)(param_1 + 0x68);
  fVar10 = *(float *)(param_1 + 0x70);
  fVar11 = *(float *)(param_1 + 0x78);
  fVar24 = param_2[0xc];
  fVar25 = param_2[0xd];
  fVar26 = param_2[0xe];
  fVar27 = param_2[0xf];
  *(float *)(param_1 + 0x80) = fVar28 * fVar16 + fVar1 * fVar12 + fVar2 * fVar20;
  *(float *)(param_1 + 0x84) = fVar28 * fVar17 + fVar1 * fVar13 + fVar2 * fVar21;
  *(float *)(param_1 + 0x88) = fVar28 * fVar18 + fVar1 * fVar14 + fVar2 * fVar22;
  *(float *)(param_1 + 0x8c) = fVar28 * fVar19 + fVar1 * fVar15 + fVar2 * fVar23;
  *(float *)(param_1 + 0x90) = fVar3 * fVar16 + fVar6 * fVar12 + fVar7 * fVar20;
  *(float *)(param_1 + 0x94) = fVar3 * fVar17 + fVar6 * fVar13 + fVar7 * fVar21;
  *(float *)(param_1 + 0x98) = fVar3 * fVar18 + fVar6 * fVar14 + fVar7 * fVar22;
  *(float *)(param_1 + 0x9c) = fVar3 * fVar19 + fVar6 * fVar15 + fVar7 * fVar23;
  *(float *)(param_1 + 0xa0) = fVar4 * fVar16 + fVar8 * fVar12 + fVar9 * fVar20;
  *(float *)(param_1 + 0xa4) = fVar4 * fVar17 + fVar8 * fVar13 + fVar9 * fVar21;
  *(float *)(param_1 + 0xa8) = fVar4 * fVar18 + fVar8 * fVar14 + fVar9 * fVar22;
  *(float *)(param_1 + 0xac) = fVar4 * fVar19 + fVar8 * fVar15 + fVar9 * fVar23;
  *(float *)(param_1 + 0xb0) = fVar5 * fVar16 + fVar10 * fVar12 + fVar11 * fVar20 + fVar24;
  *(float *)(param_1 + 0xb4) = fVar5 * fVar17 + fVar10 * fVar13 + fVar11 * fVar21 + fVar25;
  *(float *)(param_1 + 0xb8) = fVar5 * fVar18 + fVar10 * fVar14 + fVar11 * fVar22 + fVar26;
  *(float *)(param_1 + 0xbc) = fVar5 * fVar19 + fVar10 * fVar15 + fVar11 * fVar23 + fVar27;
  return;
}



uint64_t *
FUN_1803e1170(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,0xf,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (uint64_t *)param_2[1];
  *puVar1 = 0x6f635f746867696c;
  puVar1[1] = 0x746e656e6f706d;
  *(int32_t *)(param_2 + 2) = 0xf;
  return param_2;
}






