#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part069.c - 6 个函数

// 函数: void FUN_1805b8050(int64_t param_1,int *param_2)
void FUN_1805b8050(int64_t param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  
  iVar1 = *param_2;
  fVar5 = (float)(*(int64_t *)
                   (&system_error_code +
                   (int64_t)*(int *)(*(int64_t *)(param_1 + 0x1488) + 0x87b790) * 8) -
                 *(int64_t *)(*(int64_t *)(param_1 + 0x1488) + 0x87b788)) * 1e-05;
  iVar2 = FUN_1805bf5a0(param_1,iVar1);
  param_2[3] = (int)fVar5;
  param_2[2] = iVar2;
  if ((iVar2 - 1U < 2) || ((iVar2 == 4 && (*(int *)(param_1 + 0x14a8) == 2)))) {
    iVar2 = *(int *)(param_1 + 0x1c08);
    iVar4 = 0;
    if (0 < iVar2) {
      piVar3 = (int *)(param_1 + 0x1b88);
      do {
        if (*piVar3 == iVar1) break;
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 2;
      } while (iVar4 < iVar2);
      if (0xf < iVar4) {
        return;
      }
    }
    if (iVar4 == iVar2) {
      *(int *)(param_1 + 0x1c08) = iVar2 + 1;
    }
    *(float *)(param_1 + 0x1b8c + (int64_t)iVar4 * 8) = fVar5 + 8.0;
    *(int *)(param_1 + 0x1b88 + (int64_t)iVar4 * 8) = iVar1;
  }
  return;
}



uint64_t FUN_1805b8130(int64_t param_1)

{
  uint64_t uVar1;
  char cVar2;
  int64_t lVar3;
  
  if ((((*(int *)(param_1 + 0x14a8) - 1U & 0xfffffff9) == 0) && (*(int *)(param_1 + 0x14a8) != 7))
     || (*(int *)(param_1 + 0x2160) == 1)) {
    return 1;
  }
  if ((*(uint *)(param_1 + 0x10) & 0x20) == 0) {
    lVar3 = *(int64_t *)(*(int64_t *)(**(int64_t **)(param_1 + 8) + 0x8f8) + 0x9e8);
    *(int64_t *)(param_1 + 0xa8) = lVar3;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
  }
  else {
    lVar3 = *(int64_t *)(param_1 + 0xa8);
  }
  if (((((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x30))) &&
       ((uVar1 = *(uint64_t *)
                  ((int64_t)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar3 + 0xd0)),
        (uVar1 >> 9 & 1) == 0 || (0 < *(short *)(lVar3 + 8))))) &&
      ((((byte)uVar1 >> 1 & 1) != 0 && (-1 < *(int *)(param_1 + 0x14d0))))) &&
     (cVar2 = FUN_1805c79a0(param_1,*(int64_t *)(param_1 + 0x1488) + 0x30a0 +
                                    (int64_t)*(int *)(param_1 + 0x14d0) * 0xa60), cVar2 != '\0')) {
    return 1;
  }
  return 0;
}



uint64_t FUN_1805b8210(int64_t param_1)

{
  uint64_t uVar1;
  char cVar2;
  int64_t lVar3;
  
  if ((((*(int *)(param_1 + 0x14a8) - 2U & 0xfffffff9) != 0) || (*(int *)(param_1 + 0x14a8) == 8))
     || (*(int *)(param_1 + 0x2160) != 0)) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x10) & 0x20) == 0) {
    lVar3 = *(int64_t *)(*(int64_t *)(**(int64_t **)(param_1 + 8) + 0x8f8) + 0x9e8);
    *(int64_t *)(param_1 + 0xa8) = lVar3;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
  }
  else {
    lVar3 = *(int64_t *)(param_1 + 0xa8);
  }
  if (((((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x30))) &&
       ((uVar1 = *(uint64_t *)
                  ((int64_t)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar3 + 0xd0)),
        (uVar1 >> 9 & 1) == 0 || (0 < *(short *)(lVar3 + 8))))) &&
      ((((byte)uVar1 >> 1 & 1) != 0 && (-1 < *(int *)(param_1 + 0x14d0))))) &&
     (cVar2 = FUN_1805c79a0(param_1,*(int64_t *)(param_1 + 0x1488) + 0x30a0 +
                                    (int64_t)*(int *)(param_1 + 0x14d0) * 0xa60), cVar2 != '\0')) {
    return 0;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805b8300(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1805b8300(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int32_t uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_1;
  param_1[0xc] = 0;
  *(uint64_t *)((int64_t)param_1 + 0x124) = 0;
  *(int32_t *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 5) = 0;
  *(int32_t *)((int64_t)param_1 + 0x2c) = 0xbf800000;
  param_1[6] = 0;
  *(int32_t *)(param_1 + 7) = 0xffffffff;
  FUN_1805b6780(param_1 + 0x2f,param_1,param_3,param_4,0xfffffffffffffffe);
  param_1[0x26a] = param_1;
  *(int32_t *)((int64_t)param_1 + 0x135c) = 0;
  param_1[0x26c] = 0x3f800000;
  *(int32_t *)(param_1 + 0x26d) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x272) = 0x41c64e6d;
  *(int32_t *)(param_1 + 0x274) = 1;
  uVar1 = system_system_data_config;
  param_1[0x273] = system_system_data_config;
  *(int32_t *)(param_1 + 0x276) = 1;
  param_1[0x275] = uVar1;
  *(int32_t *)(param_1 + 0x279) = 1;
  param_1[0x278] = uVar1;
  param_1[0x282] = 0;
  param_1[0x27b] = 0;
  param_1[0x27e] = 0;
  param_1[0x27f] = 0;
  param_1[0x280] = 0;
  param_1[0x281] = 0;
  param_1[0x27c] = 0;
  param_1[0x27d] = 0;
  param_1[0x282] = param_1[0x27e];
  *(int32_t *)(param_1 + 0x283) = 0;
  *(int32_t *)(param_1 + 0x287) = 1;
  param_1[0x286] = uVar1;
  *(int32_t *)(param_1 + 0x289) = 1;
  param_1[0x288] = uVar1;
  *(int32_t *)(param_1 + 0x28c) = 1;
  param_1[0x28b] = uVar1;
  *(int32_t *)(param_1 + 0x28f) = 1;
  param_1[0x28e] = uVar1;
  *(int32_t *)(param_1 + 0x293) = 1;
  param_1[0x292] = uVar1;
  *(int32_t *)(param_1 + 0x299) = 1;
  param_1[0x298] = uVar1;
  *(uint64_t *)((int64_t)param_1 + 0x14dc) = 0;
  param_1[0x2a5] = 0;
  param_1[0x29e] = 0;
  param_1[0x2a1] = 0;
  param_1[0x2a2] = 0;
  param_1[0x2a3] = 0;
  param_1[0x2a4] = 0;
  param_1[0x29f] = 0;
  param_1[0x2a0] = 0;
  param_1[0x2a5] = param_1[0x2a1];
  *(int32_t *)(param_1 + 0x2a6) = 0;
  param_1[0x2a7] = 0;
  *(uint64_t *)((int64_t)param_1 + 0x1554) = 0;
  param_1[0x2b2] = 0;
  param_1[0x2b1] = 0;
  param_1[0x2b2] = 0;
  param_1[0x2ac] = 0x3f80000000000000;
  *(int32_t *)(param_1 + 0x2ad) = 0;
  uVar2 = atan2f(0x80000000,0x3f800000);
  *(int32_t *)(param_1 + 0x2ae) = uVar2;
  *(int8_t *)(param_1 + 0x2b3) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x1574) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x157c) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1584) = 0xffffffff;
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x2b4,0,0x58);
}






// 函数: void FUN_1805b88c0(int64_t *param_1)
void FUN_1805b88c0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  
  lVar2 = param_1[2];
  lVar1 = param_1[4];
  plVar3 = (int64_t *)param_1[5];
  while (lVar2 != param_1[6]) {
    lVar2 = lVar2 + 0x48;
    if (lVar2 == lVar1) {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      lVar1 = lVar2 + 0x120;
    }
  }
  if (*param_1 != 0) {
    plVar3 = (int64_t *)param_1[5];
    while (plVar3 < (int64_t *)(param_1[9] + 8)) {
      lVar1 = *plVar3;
      plVar3 = plVar3 + 1;
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *param_1 = 0;
  }
  return;
}






// 函数: void FUN_1805b88e0(int64_t *param_1)
void FUN_1805b88e0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  
  lVar2 = param_1[2];
  lVar1 = param_1[4];
  plVar3 = (int64_t *)param_1[5];
  while (lVar2 != param_1[6]) {
    lVar2 = lVar2 + 0x48;
    if (lVar2 == lVar1) {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      lVar1 = lVar2 + 0x120;
    }
  }
  if (*param_1 != 0) {
    plVar3 = (int64_t *)param_1[5];
    while (plVar3 < (int64_t *)(param_1[9] + 8)) {
      lVar1 = *plVar3;
      plVar3 = plVar3 + 1;
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *param_1 = 0;
  }
  return;
}






// 函数: void FUN_1805b8900(int64_t *param_1)
void FUN_1805b8900(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  
  lVar2 = param_1[2];
  lVar1 = param_1[4];
  plVar3 = (int64_t *)param_1[5];
  while (lVar2 != param_1[6]) {
    lVar2 = lVar2 + 0x48;
    if (lVar2 == lVar1) {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      lVar1 = lVar2 + 0x120;
    }
  }
  if (*param_1 != 0) {
    plVar3 = (int64_t *)param_1[5];
    while (plVar3 < (int64_t *)(param_1[9] + 8)) {
      lVar1 = *plVar3;
      plVar3 = plVar3 + 1;
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *param_1 = 0;
  }
  return;
}






// 函数: void FUN_1805b8920(int64_t *param_1)
void FUN_1805b8920(int64_t *param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int32_t uVar4;
  int8_t auVar5 [16];
  float fVar6;
  float fVar7;
  uint64_t uStackX_8;
  
  lVar1 = *(int64_t *)(*param_1 + 0x8d8);
  param_1[0x291] = lVar1;
  *(int32_t *)(param_1 + 0x294) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1794) = 0;
  *(int16_t *)((int64_t)param_1 + 0x13bc) = 1;
  *(int32_t *)(param_1 + 0x277) = 0x3e4ccccd;
  *(int32_t *)(param_1 + 0x285) = 0x3e4ccccd;
  *(int32_t *)(param_1 + 0x28d) = 0x3e4ccccd;
  *(float *)(param_1 + 0x28a) = (2.0 - *(float *)(lVar1 + 0x98d9d8)) * 0.25;
  *(int32_t *)((int64_t)param_1 + 0x146c) = 0x3e4ccccd;
  *(int32_t *)((int64_t)param_1 + 0x1454) = 0x3e4ccccd;
  *(int32_t *)((int64_t)param_1 + 0x2154) = 0xffffffff;
  *(int32_t *)(param_1 + 0x42b) = 0x7149f2ca;
  param_1[0x28e] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x28f] * 8);
  param_1[0x273] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x274] * 8);
  param_1[0x275] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x276] * 8);
  param_1[0x288] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x289] * 8);
  param_1[0x28b] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x28c] * 8);
  param_1[0x286] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x287] * 8);
  param_1[0x2e9] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ea] * 8);
  param_1[0x2eb] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ec] * 8);
  param_1[0x2dc] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2dd] * 8);
  param_1[0x2de] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2df] * 8);
  param_1[0x2e0] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2e1] * 8);
  param_1[0x2e2] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2e3] * 8);
  *(uint64_t *)((int64_t)param_1 + 0x16d4) = 0;
  param_1[0x2ef] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2f0] * 8) + -0x2540a5c00;
  *(int32_t *)(param_1 + 0x2f1) = 0;
  lVar1 = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ee] * 8);
  param_1[0x2ed] = lVar1 + -0x8000000000000000;
  param_1[0x292] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x293] * 8);
  param_1[0x42d] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x42e] * 8);
  param_1[0x42f] = 0x7fc000007fc00000;
  param_1[0x430] = 0x7fc000007fc00000;
  *(int16_t *)(param_1 + 0x431) = 0;
  *(int8_t *)((int64_t)param_1 + 0x218a) = 1;
  *(int32_t *)((int64_t)param_1 + 0x1484) = 0;
  *(int32_t *)((int64_t)param_1 + 0x13d4) = 0;
  param_1[0x295] = 7;
  *(int32_t *)(param_1 + 0x296) = 0x3c23d70a;
  param_1[0x2e5] = -1;
  *(int32_t *)(param_1 + 0x284) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1424) = 0xfffe7960;
  *(uint64_t *)((int64_t)param_1 + 0x14b4) = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 0x29a) = 0xffffffff;
  param_1[0x298] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x299] * 8);
  *(int32_t *)(param_1 + 0x2e6) = 0;
  *(int32_t *)((int64_t)param_1 + 0x178c) = 0;
  uStackX_8._4_4_ = (float)((uint64_t)*(uint64_t *)(*param_1 + 0x49c) >> 0x20);
  uStackX_8._0_4_ = (float)*(uint64_t *)(*param_1 + 0x49c);
  fVar6 = uStackX_8._4_4_ * uStackX_8._4_4_ + (float)uStackX_8 * (float)uStackX_8;
  auVar5 = rsqrtss(ZEXT416((uint)((float)uStackX_8 * (float)uStackX_8)),ZEXT416((uint)fVar6));
  fVar7 = auVar5._0_4_;
  fVar7 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
  uStackX_8._4_4_ = uStackX_8._4_4_ * fVar7;
  uStackX_8 = CONCAT44(uStackX_8._4_4_,(float)uStackX_8 * fVar7);
  param_1[0x2b1] = 0;
  param_1[0x2b2] = 0;
  param_1[0x2ac] = uStackX_8;
  *(int32_t *)(param_1 + 0x2ad) = 0;
  uVar4 = atan2f(lVar1 + -0x8000000000000000,uStackX_8._4_4_);
  *(int32_t *)(param_1 + 0x2ae) = uVar4;
  *(int8_t *)(param_1 + 0x2b3) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x1574) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x157c) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1584) = 0xffffffff;
  *(int32_t *)((int64_t)param_1 + 0x159c) = 0;
  param_1[0x413] = 0;
  plVar2 = (int64_t *)FUN_1803975b0();
  lVar1 = *plVar2;
  param_1[0x414] = 0;
  param_1[0x417] = 0x7fc000007fc00000;
  param_1[0x418] = 0x7fc000007fc00000;
  *(int32_t *)(param_1 + 0x419) = 0;
  *(int32_t *)((int64_t)param_1 + 0x20cc) = 0;
  *(int32_t *)(param_1 + 0x41a) = 0;
  *(int32_t *)((int64_t)param_1 + 0x20d4) = 0;
  param_1[0x415] = 0;
  param_1[0x416] = 0;
  param_1[0x41b] = lVar1;
  *(int32_t *)(param_1 + 0x41c) = 0;
  *(int32_t *)(param_1 + 0x41d) = 0;
  plVar2 = (int64_t *)param_1[0x41e];
  param_1[0x41e] = 0;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  param_1[0x41f] = 0x7fc000007fc00000;
  param_1[0x420] = 0x7fc000007fc00000;
  *(int32_t *)(param_1 + 0x421) = 0xffffffff;
  *(int32_t *)((int64_t)param_1 + 0x214c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2f2) = 5;
  FUN_1805d82f0(param_1 + 0x2f3);
  FUN_1805d7e10(param_1 + 0x387);
  *(int32_t *)(param_1 + 0x412) = 0;
  param_1[0x408] = 0;
  param_1[0x409] = 0;
  param_1[0x40a] = 0;
  param_1[0x40b] = 0;
  param_1[0x40c] = 0;
  param_1[0x40d] = 0;
  param_1[0x40e] = 0;
  param_1[0x40f] = 0;
  param_1[0x410] = 0;
  param_1[0x411] = 0;
  *(int32_t *)((int64_t)param_1 + 0x1c0c) = 0xffffffff;
  *(int32_t *)((int64_t)param_1 + 0x1c14) = 0xffffffff;
  *(int32_t *)((int64_t)param_1 + 0x1c1c) = 0xffffffff;
  *(int32_t *)((int64_t)param_1 + 0x1c24) = 0xffffffff;
  *(int32_t *)((int64_t)param_1 + 0x1c2c) = 0;
  *(int32_t *)(param_1 + 0x404) = 0xffffffff;
  *(int32_t *)(param_1 + 0x42a) = 0;
  *(int32_t *)((int64_t)param_1 + 0x21a4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x215c) = 0;
  if ((int)param_1[0x403] != 0) {
    *(int32_t *)(param_1 + 0x403) = 0;
    FUN_180508010(param_1);
  }
  *(int32_t *)((int64_t)param_1 + 0x201c) = 0xffffffff;
  *(int8_t *)((int64_t)param_1 + 0x2024) = 0;
  *(int32_t *)(param_1 + 0x405) = 0;
  *(int8_t *)(param_1 + 0x29b) = 0;
  *(int32_t *)(param_1 + 0x29d) = 0;
  plVar2 = (int64_t *)FUN_1803975b0();
  lVar1 = *plVar2;
  param_1[0x29e] = 0;
  param_1[0x2a1] = 0x7fc000007fc00000;
  param_1[0x2a2] = 0x7fc000007fc00000;
  *(int32_t *)(param_1 + 0x2a3) = 0;
  *(int32_t *)((int64_t)param_1 + 0x151c) = 0;
  *(int32_t *)(param_1 + 0x2a4) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1524) = 0;
  param_1[0x29f] = 0;
  param_1[0x2a0] = 0;
  param_1[0x2a5] = lVar1;
  *(int32_t *)(param_1 + 0x2a6) = 0;
  puVar3 = (uint64_t *)FUN_1803975b0();
  *(uint64_t *)((int64_t)param_1 + 0x14dc) = *puVar3;
  plVar2 = (int64_t *)FUN_1803975b0();
  param_1[0x2a7] = *plVar2;
  puVar3 = (uint64_t *)FUN_1803975b0();
  *(uint64_t *)((int64_t)param_1 + 0x1554) = *puVar3;
  *(uint64_t *)((int64_t)param_1 + 0x154c) = 0xffffffffffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x1544) = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 0x2a8) = 0xffffffff;
  *(int32_t *)((int64_t)param_1 + 0x14e4) = 0xffffffff;
  *(int32_t *)(param_1 + 0x434) = 0xbf800000;
  FUN_1805e4ab0(param_1 + 0x2f,*(uint64_t *)(param_1[0x291] + 0x18));
  *(uint64_t *)((int64_t)param_1 + 0x135c) = 0x3f80000000000000;
  *(uint64_t *)((int64_t)param_1 + 0x1364) = 0x7f7fffff00000000;
  *(int32_t *)(param_1 + 0x26b) = 0xffffffff;
  *(int32_t *)(param_1 + 0x269) = 0;
  *(int8_t *)((int64_t)param_1 + 0x137c) = 0;
  param_1[0x270] = 0;
  param_1[0x271] = 0;
  FUN_18005c830(param_1 + 0x272);
  *(int32_t *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 5) = 0;
  *(int32_t *)((int64_t)param_1 + 0x2c) = 0xbf800000;
  param_1[6] = 0;
  *(int32_t *)(param_1 + 7) = 0xffffffff;
  *(int16_t *)(param_1 + 0x26) = 0;
  *(int8_t *)(param_1 + 0x2e) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x218c) = 0x7f7fffff7f7fffff;
  *(uint64_t *)((int64_t)param_1 + 0x2194) = 0x7f7fffff7f7fffff;
  *(int8_t *)((int64_t)param_1 + 0x219c) = 0;
  param_1[0x426] = -1;
  *(int32_t *)((int64_t)param_1 + 0x173c) = 0xffffffff;
  *(int32_t *)(param_1 + 0x290) = 0;
  *(int8_t *)((int64_t)param_1 + 0x13be) = 0;
  *(int32_t *)(param_1 + 0x2bf) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x15fc) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2c0) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x1604) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2c1) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x160c) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2c2) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x1614) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2c3) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x161c) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2c4) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x1624) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2c5) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x162c) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2c6) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x1634) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2c7) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x163c) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2c8) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x1644) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2c9) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x164c) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2ca) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x1654) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2cb) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x165c) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2cc) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x1664) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2cd) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x166c) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2ce) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x1674) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2cf) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x167c) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2d0) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x1684) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2d1) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x168c) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2d2) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x1694) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2d3) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x169c) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2d4) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x16a4) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2d5) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x16ac) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2d6) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x16b4) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2d7) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x16bc) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2d8) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x16c4) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2d9) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x16cc) = 0xbf800000;
  *(int32_t *)(param_1 + 0x2da) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x13c) = 0xffffffff;
  *(int32_t *)((int64_t)param_1 + 0x144) = 0xffffffff;
  *(int32_t *)((int64_t)param_1 + 0x14c) = 0xffffffff;
  *(int32_t *)((int64_t)param_1 + 0x154) = 0xffffffff;
  *(int32_t *)(param_1 + 0x2e8) = 0;
  *(int8_t *)((int64_t)param_1 + 0x14a4) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1b6c) = 0;
  if ((char)param_1[0x386] != '\0') {
    func_0x000180508000(param_1,&memory_allocator_3272_ptr,&memory_allocator_3232_ptr,&processed_var_6344_ptr,&processed_var_6416_ptr);
    *(int8_t *)(param_1 + 0x386) = 0;
    *(int32_t *)((int64_t)param_1 + 0x1c0c) = 0xffffffff;
    *(int32_t *)((int64_t)param_1 + 0x1c14) = 0xffffffff;
    *(int32_t *)((int64_t)param_1 + 0x1c1c) = 0xffffffff;
    *(int32_t *)((int64_t)param_1 + 0x1c24) = 0xffffffff;
    *(int32_t *)((int64_t)param_1 + 0x1c2c) = 0;
    *(int32_t *)((int64_t)param_1 + 0x200c) = 0;
    *(int8_t *)(param_1 + 0x389) = 0;
    param_1[0x387] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x388] * 8);
  }
  param_1[0x36f] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x370] * 8);
  *(int32_t *)(param_1 + 0x371) = 0xffffffff;
  *(int32_t *)(param_1 + 0x372) = 0xffffffff;
  *(int32_t *)(param_1 + 0x373) = 0xffffffff;
  *(int32_t *)(param_1 + 0x374) = 0xffffffff;
  *(int32_t *)(param_1 + 0x375) = 0xffffffff;
  *(int32_t *)(param_1 + 0x376) = 0xffffffff;
  *(int32_t *)(param_1 + 0x377) = 0xffffffff;
  *(int32_t *)(param_1 + 0x378) = 0xffffffff;
  *(int32_t *)(param_1 + 0x379) = 0xffffffff;
  *(int32_t *)(param_1 + 0x37a) = 0xffffffff;
  *(int32_t *)(param_1 + 0x37b) = 0xffffffff;
  *(int32_t *)(param_1 + 0x37c) = 0xffffffff;
  *(int32_t *)(param_1 + 0x37d) = 0xffffffff;
  *(int32_t *)(param_1 + 0x37e) = 0xffffffff;
  *(int32_t *)(param_1 + 0x37f) = 0xffffffff;
  *(int32_t *)(param_1 + 0x380) = 0xffffffff;
  *(int32_t *)(param_1 + 0x381) = 0;
  lVar1 = *(int64_t *)(*param_1 + 0x738);
  if (lVar1 != 0) {
    FUN_1805af0d0(lVar1,*param_1,1);
  }
  return;
}



char FUN_1805b93a0(int64_t param_1,char param_2,uint64_t *param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6)

{
  char cVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  char cVar6;
  float fStackX_20;
  float fStackX_24;
  
  cVar1 = *(char *)(param_1 + 0x14d8);
  *(bool *)param_6 = param_2 != cVar1;
  if ((((param_2 != cVar1) || (*(float *)(param_3 + 3) != *(float *)(param_1 + 0x1508))) ||
      (*(float *)((int64_t)param_3 + 0x1c) != *(float *)(param_1 + 0x150c))) ||
     (((fStackX_20 = (float)param_4, fStackX_20 != *(float *)(param_1 + 0x14dc) ||
       (fStackX_24 = (float)((uint64_t)param_4 >> 0x20), fStackX_24 != *(float *)(param_1 + 0x14e0)
       )) || (((float)param_5 != *(float *)(param_1 + 0x1538) ||
              (param_5._4_4_ != *(float *)(param_1 + 0x153c))))))) {
    cVar6 = '\x01';
  }
  else {
    cVar6 = '\0';
  }
  if (param_2 != cVar1) {
    *(char *)(param_1 + 0x14d8) = param_2;
  }
  if (cVar6 != '\0') {
    *(uint64_t *)(param_1 + 0x14f0) = *param_3;
    uVar5 = param_3[4];
    *(uint64_t *)(param_1 + 0x1508) = param_3[3];
    *(uint64_t *)(param_1 + 0x1510) = uVar5;
    uVar2 = *(int32_t *)((int64_t)param_3 + 0x2c);
    uVar3 = *(int32_t *)(param_3 + 6);
    uVar4 = *(int32_t *)((int64_t)param_3 + 0x34);
    *(int32_t *)(param_1 + 0x1518) = *(int32_t *)(param_3 + 5);
    *(int32_t *)(param_1 + 0x151c) = uVar2;
    *(int32_t *)(param_1 + 0x1520) = uVar3;
    *(int32_t *)(param_1 + 0x1524) = uVar4;
    *(uint64_t *)(param_1 + 0x14f8) = param_3[1];
    *(uint64_t *)(param_1 + 0x1500) = param_3[2];
    *(uint64_t *)(param_1 + 0x1528) = param_3[7];
    *(int32_t *)(param_1 + 0x1530) = *(int32_t *)(param_3 + 8);
    *(uint64_t *)(param_1 + 0x1538) = param_5;
    *(uint64_t *)(param_1 + 0x14dc) = param_4;
    FUN_180508010(param_1);
  }
  return cVar6;
}






