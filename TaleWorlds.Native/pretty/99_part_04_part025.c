#include "TaleWorlds.Native.Split.h"

// 99_part_04_part025.c - 7 个函数

// 函数: void FUN_18026ec20(longlong param_1)
void FUN_18026ec20(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  FUN_1804193f0();
  if (*(longlong *)(param_1 + 8) == *(longlong *)(param_1 + 0x10)) {
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 100) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x74) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x7c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x90) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x98) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0xa8) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0xac) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    fVar4 = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x30) = fVar4;
    *(float *)(param_1 + 0x34) = fVar4;
  }
  else {
    lVar2 = 5;
    FUN_180419ec0(param_1,0x1e);
    pfVar1 = (float *)(param_1 + 0x3c);
    do {
      pfVar1[-1] = fRamfffffffffffffffc * *(float *)(param_1 + 0x28);
      *pfVar1 = fRamfffffffffffffffc * *(float *)(param_1 + 0x28);
      pfVar1[1] = fRamfffffffffffffffc * *(float *)(param_1 + 0x28);
      pfVar1[2] = fRamfffffffffffffffc * *(float *)(param_1 + 0x28);
      pfVar1[3] = fRamfffffffffffffffc * *(float *)(param_1 + 0x28);
      pfVar1[4] = *(float *)(param_1 + 0x28) * fRamfffffffffffffffc;
      pfVar1 = pfVar1 + 6;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  fVar4 = 3.4028235e+38;
  fVar5 = -3.4028235e+38;
  lVar2 = 2;
  *(int32_t *)(param_1 + 0x34) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x30) = 0xff7fffff;
  pfVar1 = (float *)(param_1 + 0x3c);
  do {
    fVar3 = pfVar1[-1];
    if (fVar4 <= pfVar1[-1]) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x34) = fVar3;
    fVar4 = pfVar1[-1];
    if (pfVar1[-1] <= fVar5) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x30) = fVar4;
    fVar5 = *pfVar1;
    if (fVar3 <= *pfVar1) {
      fVar5 = fVar3;
    }
    *(float *)(param_1 + 0x34) = fVar5;
    fVar3 = *pfVar1;
    if (*pfVar1 <= fVar4) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x30) = fVar3;
    fVar4 = pfVar1[1];
    if (fVar5 <= pfVar1[1]) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x34) = fVar4;
    fVar5 = pfVar1[1];
    if (pfVar1[1] <= fVar3) {
      fVar5 = fVar3;
    }
    *(float *)(param_1 + 0x30) = fVar5;
    fVar3 = pfVar1[2];
    if (fVar4 <= pfVar1[2]) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x34) = fVar3;
    fVar4 = pfVar1[2];
    if (pfVar1[2] <= fVar5) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x30) = fVar4;
    fVar5 = pfVar1[3];
    if (fVar3 <= pfVar1[3]) {
      fVar5 = fVar3;
    }
    *(float *)(param_1 + 0x34) = fVar5;
    fVar3 = pfVar1[3];
    if (pfVar1[3] <= fVar4) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x30) = fVar3;
    fVar4 = pfVar1[4];
    if (fVar5 <= pfVar1[4]) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x34) = fVar4;
    fVar5 = pfVar1[4];
    if (pfVar1[4] <= fVar3) {
      fVar5 = fVar3;
    }
    *(float *)(param_1 + 0x30) = fVar5;
    fVar3 = pfVar1[5];
    if (fVar4 <= pfVar1[5]) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x34) = fVar3;
    fVar4 = pfVar1[5];
    if (pfVar1[5] <= fVar5) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x30) = fVar4;
    fVar5 = pfVar1[6];
    if (fVar3 <= pfVar1[6]) {
      fVar5 = fVar3;
    }
    *(float *)(param_1 + 0x34) = fVar5;
    fVar3 = pfVar1[6];
    if (pfVar1[6] <= fVar4) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x30) = fVar3;
    fVar4 = pfVar1[7];
    if (fVar5 <= pfVar1[7]) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x34) = fVar4;
    fVar5 = pfVar1[7];
    if (pfVar1[7] <= fVar3) {
      fVar5 = fVar3;
    }
    *(float *)(param_1 + 0x30) = fVar5;
    fVar3 = pfVar1[8];
    if (fVar4 <= pfVar1[8]) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x34) = fVar3;
    fVar4 = pfVar1[8];
    if (pfVar1[8] <= fVar5) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x30) = fVar4;
    fVar5 = pfVar1[9];
    if (fVar3 <= pfVar1[9]) {
      fVar5 = fVar3;
    }
    *(float *)(param_1 + 0x34) = fVar5;
    fVar3 = pfVar1[9];
    if (pfVar1[9] <= fVar4) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x30) = fVar3;
    fVar4 = pfVar1[10];
    if (fVar5 <= pfVar1[10]) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x34) = fVar4;
    fVar5 = pfVar1[10];
    if (pfVar1[10] <= fVar3) {
      fVar5 = fVar3;
    }
    *(float *)(param_1 + 0x30) = fVar5;
    fVar3 = pfVar1[0xb];
    if (fVar4 <= pfVar1[0xb]) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x34) = fVar3;
    fVar4 = pfVar1[0xb];
    if (pfVar1[0xb] <= fVar5) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x30) = fVar4;
    fVar5 = pfVar1[0xc];
    if (fVar3 <= pfVar1[0xc]) {
      fVar5 = fVar3;
    }
    *(float *)(param_1 + 0x34) = fVar5;
    fVar3 = pfVar1[0xc];
    if (pfVar1[0xc] <= fVar4) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x30) = fVar3;
    fVar4 = pfVar1[0xd];
    if (fVar5 <= pfVar1[0xd]) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x34) = fVar4;
    fVar5 = pfVar1[0xd];
    if (pfVar1[0xd] <= fVar3) {
      fVar5 = fVar3;
    }
    *(float *)(param_1 + 0x30) = fVar5;
    lVar2 = lVar2 + -1;
    pfVar1 = pfVar1 + 0xf;
  } while (lVar2 != 0);
  return;
}



// WARNING: Removing unreachable block (ram,0x00018026e6e6)
// WARNING: Removing unreachable block (ram,0x00018026e6ee)
// WARNING: Removing unreachable block (ram,0x00018026e6f0)
// WARNING: Removing unreachable block (ram,0x00018026e703)
// WARNING: Removing unreachable block (ram,0x00018026e707)
// WARNING: Removing unreachable block (ram,0x00018026e70d)
// WARNING: Removing unreachable block (ram,0x00018026e711)
// WARNING: Removing unreachable block (ram,0x00018026e9f7)
// WARNING: Removing unreachable block (ram,0x00018026ea02)
// WARNING: Removing unreachable block (ram,0x00018026ea0a)
// WARNING: Removing unreachable block (ram,0x00018026ea0c)
// WARNING: Removing unreachable block (ram,0x00018026ea1f)
// WARNING: Removing unreachable block (ram,0x00018026ea23)
// WARNING: Removing unreachable block (ram,0x00018026ea29)
// WARNING: Removing unreachable block (ram,0x00018026ea2d)
// WARNING: Removing unreachable block (ram,0x00018026e8b3)
// WARNING: Removing unreachable block (ram,0x00018026e8c0)
// WARNING: Removing unreachable block (ram,0x00018026e8c8)
// WARNING: Removing unreachable block (ram,0x00018026e8ca)
// WARNING: Removing unreachable block (ram,0x00018026e8dd)
// WARNING: Removing unreachable block (ram,0x00018026e8e1)
// WARNING: Removing unreachable block (ram,0x00018026e8e7)
// WARNING: Removing unreachable block (ram,0x00018026e8eb)
// WARNING: Removing unreachable block (ram,0x00018026e771)
// WARNING: Removing unreachable block (ram,0x00018026e780)
// WARNING: Removing unreachable block (ram,0x00018026e788)
// WARNING: Removing unreachable block (ram,0x00018026e78a)
// WARNING: Removing unreachable block (ram,0x00018026e79d)
// WARNING: Removing unreachable block (ram,0x00018026e7a1)
// WARNING: Removing unreachable block (ram,0x00018026e7a7)
// WARNING: Removing unreachable block (ram,0x00018026e7ab)
// WARNING: Removing unreachable block (ram,0x00018026e815)
// WARNING: Removing unreachable block (ram,0x00018026e820)
// WARNING: Removing unreachable block (ram,0x00018026e828)
// WARNING: Removing unreachable block (ram,0x00018026e82a)
// WARNING: Removing unreachable block (ram,0x00018026e83d)
// WARNING: Removing unreachable block (ram,0x00018026e841)
// WARNING: Removing unreachable block (ram,0x00018026e847)
// WARNING: Removing unreachable block (ram,0x00018026e84b)
// WARNING: Removing unreachable block (ram,0x00018026e956)
// WARNING: Removing unreachable block (ram,0x00018026e961)
// WARNING: Removing unreachable block (ram,0x00018026e969)
// WARNING: Removing unreachable block (ram,0x00018026e96b)
// WARNING: Removing unreachable block (ram,0x00018026e97e)
// WARNING: Removing unreachable block (ram,0x00018026e982)
// WARNING: Removing unreachable block (ram,0x00018026e988)
// WARNING: Removing unreachable block (ram,0x00018026e98c)
// WARNING: Removing unreachable block (ram,0x00018026eaa8)
// WARNING: Removing unreachable block (ram,0x00018026e9a0)
// WARNING: Removing unreachable block (ram,0x00018026e9ac)
// WARNING: Removing unreachable block (ram,0x00018026e9a5)
// WARNING: Removing unreachable block (ram,0x00018026e85f)
// WARNING: Removing unreachable block (ram,0x00018026e86b)
// WARNING: Removing unreachable block (ram,0x00018026e864)
// WARNING: Removing unreachable block (ram,0x00018026e731)
// WARNING: Removing unreachable block (ram,0x00018026e725)
// WARNING: Removing unreachable block (ram,0x00018026e72a)
// WARNING: Removing unreachable block (ram,0x00018026e7bf)
// WARNING: Removing unreachable block (ram,0x00018026e7cb)
// WARNING: Removing unreachable block (ram,0x00018026e7c4)
// WARNING: Removing unreachable block (ram,0x00018026e8ff)
// WARNING: Removing unreachable block (ram,0x00018026e90b)
// WARNING: Removing unreachable block (ram,0x00018026e904)
// WARNING: Removing unreachable block (ram,0x00018026ea41)
// WARNING: Removing unreachable block (ram,0x00018026ea4d)
// WARNING: Removing unreachable block (ram,0x00018026ea46)




// 函数: void FUN_18026ec50(longlong param_1)
void FUN_18026ec50(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  FUN_180419c10();
  if (*(longlong *)(param_1 + 8) == *(longlong *)(param_1 + 0x10)) {
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 100) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x74) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x7c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x90) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x98) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0xa8) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0xac) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    fVar4 = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x30) = fVar4;
    *(float *)(param_1 + 0x34) = fVar4;
  }
  else {
    lVar2 = 5;
    FUN_180419ec0(param_1,0x1e);
    pfVar1 = (float *)(param_1 + 0x3c);
    do {
      pfVar1[-1] = fRamfffffffffffffffc * *(float *)(param_1 + 0x28);
      *pfVar1 = fRamfffffffffffffffc * *(float *)(param_1 + 0x28);
      pfVar1[1] = fRamfffffffffffffffc * *(float *)(param_1 + 0x28);
      pfVar1[2] = fRamfffffffffffffffc * *(float *)(param_1 + 0x28);
      pfVar1[3] = fRamfffffffffffffffc * *(float *)(param_1 + 0x28);
      pfVar1[4] = *(float *)(param_1 + 0x28) * fRamfffffffffffffffc;
      pfVar1 = pfVar1 + 6;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  fVar4 = 3.4028235e+38;
  fVar5 = -3.4028235e+38;
  lVar2 = 2;
  *(int32_t *)(param_1 + 0x34) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x30) = 0xff7fffff;
  pfVar1 = (float *)(param_1 + 0x3c);
  do {
    fVar3 = pfVar1[-1];
    if (fVar4 <= pfVar1[-1]) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x34) = fVar3;
    fVar4 = pfVar1[-1];
    if (pfVar1[-1] <= fVar5) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x30) = fVar4;
    fVar5 = *pfVar1;
    if (fVar3 <= *pfVar1) {
      fVar5 = fVar3;
    }
    *(float *)(param_1 + 0x34) = fVar5;
    fVar3 = *pfVar1;
    if (*pfVar1 <= fVar4) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x30) = fVar3;
    fVar4 = pfVar1[1];
    if (fVar5 <= pfVar1[1]) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x34) = fVar4;
    fVar5 = pfVar1[1];
    if (pfVar1[1] <= fVar3) {
      fVar5 = fVar3;
    }
    *(float *)(param_1 + 0x30) = fVar5;
    fVar3 = pfVar1[2];
    if (fVar4 <= pfVar1[2]) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x34) = fVar3;
    fVar4 = pfVar1[2];
    if (pfVar1[2] <= fVar5) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x30) = fVar4;
    fVar5 = pfVar1[3];
    if (fVar3 <= pfVar1[3]) {
      fVar5 = fVar3;
    }
    *(float *)(param_1 + 0x34) = fVar5;
    fVar3 = pfVar1[3];
    if (pfVar1[3] <= fVar4) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x30) = fVar3;
    fVar4 = pfVar1[4];
    if (fVar5 <= pfVar1[4]) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x34) = fVar4;
    fVar5 = pfVar1[4];
    if (pfVar1[4] <= fVar3) {
      fVar5 = fVar3;
    }
    *(float *)(param_1 + 0x30) = fVar5;
    fVar3 = pfVar1[5];
    if (fVar4 <= pfVar1[5]) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x34) = fVar3;
    fVar4 = pfVar1[5];
    if (pfVar1[5] <= fVar5) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x30) = fVar4;
    fVar5 = pfVar1[6];
    if (fVar3 <= pfVar1[6]) {
      fVar5 = fVar3;
    }
    *(float *)(param_1 + 0x34) = fVar5;
    fVar3 = pfVar1[6];
    if (pfVar1[6] <= fVar4) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x30) = fVar3;
    fVar4 = pfVar1[7];
    if (fVar5 <= pfVar1[7]) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x34) = fVar4;
    fVar5 = pfVar1[7];
    if (pfVar1[7] <= fVar3) {
      fVar5 = fVar3;
    }
    *(float *)(param_1 + 0x30) = fVar5;
    fVar3 = pfVar1[8];
    if (fVar4 <= pfVar1[8]) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x34) = fVar3;
    fVar4 = pfVar1[8];
    if (pfVar1[8] <= fVar5) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x30) = fVar4;
    fVar5 = pfVar1[9];
    if (fVar3 <= pfVar1[9]) {
      fVar5 = fVar3;
    }
    *(float *)(param_1 + 0x34) = fVar5;
    fVar3 = pfVar1[9];
    if (pfVar1[9] <= fVar4) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x30) = fVar3;
    fVar4 = pfVar1[10];
    if (fVar5 <= pfVar1[10]) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x34) = fVar4;
    fVar5 = pfVar1[10];
    if (pfVar1[10] <= fVar3) {
      fVar5 = fVar3;
    }
    *(float *)(param_1 + 0x30) = fVar5;
    fVar3 = pfVar1[0xb];
    if (fVar4 <= pfVar1[0xb]) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x34) = fVar3;
    fVar4 = pfVar1[0xb];
    if (pfVar1[0xb] <= fVar5) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x30) = fVar4;
    fVar5 = pfVar1[0xc];
    if (fVar3 <= pfVar1[0xc]) {
      fVar5 = fVar3;
    }
    *(float *)(param_1 + 0x34) = fVar5;
    fVar3 = pfVar1[0xc];
    if (pfVar1[0xc] <= fVar4) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x30) = fVar3;
    fVar4 = pfVar1[0xd];
    if (fVar5 <= pfVar1[0xd]) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x34) = fVar4;
    fVar5 = pfVar1[0xd];
    if (pfVar1[0xd] <= fVar3) {
      fVar5 = fVar3;
    }
    *(float *)(param_1 + 0x30) = fVar5;
    lVar2 = lVar2 + -1;
    pfVar1 = pfVar1 + 0xf;
  } while (lVar2 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18026ecc0(longlong *param_1,ulonglong param_2)
void FUN_18026ecc0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1[1];
  if (param_2 <= (ulonglong)((param_1[2] - lVar4) / 0x14)) {
    if (param_2 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar4,0,param_2 * 0x14);
    }
    param_1[1] = lVar4;
    return;
  }
  lVar3 = *param_1;
  lVar1 = (lVar4 - lVar3) / 0x14;
  uVar2 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 < lVar1 + param_2) {
    uVar2 = lVar1 + param_2;
  }
  if (uVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar2 * 0x14,(char)param_1[3]);
    lVar3 = *param_1;
    lVar4 = param_1[1];
  }
  if (lVar3 != lVar4) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,lVar3,lVar4 - lVar3);
  }
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,param_2 * 0x14);
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = lVar1;
  param_1[2] = lVar1 + uVar2 * 0x14;
  param_1[1] = lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18026ed0b(void)
void FUN_18026ed0b(void)

{
  longlong in_RAX;
  longlong lVar1;
  longlong unaff_RBX;
  ulonglong uVar2;
  longlong *unaff_RDI;
  longlong in_R9;
  longlong unaff_R14;
  
  lVar1 = SUB168(SEXT816(in_RAX) * SEXT816(unaff_R14 - in_R9),8);
  lVar1 = (lVar1 >> 3) - (lVar1 >> 0x3f);
  uVar2 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 < (ulonglong)(lVar1 + unaff_RBX)) {
    uVar2 = lVar1 + unaff_RBX;
  }
  if (uVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar2 * 0x14,(char)unaff_RDI[3]);
    in_R9 = *unaff_RDI;
    unaff_R14 = unaff_RDI[1];
  }
  if (in_R9 != unaff_R14) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,in_R9,unaff_R14 - in_R9);
  }
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,unaff_RBX * 0x14);
  }
  if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RDI = lVar1;
  unaff_RDI[2] = lVar1 + uVar2 * 0x14;
  unaff_RDI[1] = lVar1;
  return;
}






// 函数: void FUN_18026ee00(void)
void FUN_18026ee00(void)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  uint64_t unaff_R14;
  
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *(uint64_t *)(unaff_RDI + 8) = unaff_R14;
  return;
}






// 函数: void FUN_18026ee40(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_18026ee40(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  float *param_5)

{
  float *pfVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  float fVar4;
  uint64_t uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = param_4 * 2;
  while (lVar6 = lVar8 + 2, lVar6 < param_3) {
    fVar4 = *(float *)(param_1 + -0x14 + lVar6 * 0x14);
    pfVar1 = (float *)(param_1 + lVar6 * 0x14);
    lVar7 = lVar8 + 1;
    if (fVar4 < *pfVar1 || fVar4 == *pfVar1) {
      lVar7 = lVar6;
    }
    puVar2 = (uint64_t *)(param_1 + lVar7 * 0x14);
    uVar5 = puVar2[1];
    puVar3 = (uint64_t *)(param_1 + param_4 * 0x14);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    *(int32_t *)(param_1 + 0x10 + param_4 * 0x14) =
         *(int32_t *)(param_1 + 0x10 + lVar7 * 0x14);
    param_4 = lVar7;
    lVar8 = lVar7 * 2;
  }
  lVar7 = param_4;
  if (lVar6 == param_3) {
    puVar3 = (uint64_t *)(param_1 + -0x14 + lVar6 * 0x14);
    uVar5 = puVar3[1];
    lVar7 = lVar8 + 1;
    puVar2 = (uint64_t *)(param_1 + param_4 * 0x14);
    *puVar2 = *puVar3;
    puVar2[1] = uVar5;
    *(int32_t *)(param_1 + 0x10 + param_4 * 0x14) = *(int32_t *)(param_1 + -4 + lVar6 * 0x14);
  }
  while ((param_2 < lVar7 &&
         (lVar8 = lVar7 + -1 >> 1, pfVar1 = (float *)(param_1 + lVar8 * 0x14),
         *pfVar1 <= *param_5 && *param_5 != *pfVar1))) {
    puVar2 = (uint64_t *)(param_1 + lVar8 * 0x14);
    uVar5 = puVar2[1];
    puVar3 = (uint64_t *)(param_1 + lVar7 * 0x14);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    *(int32_t *)(param_1 + 0x10 + lVar7 * 0x14) = *(int32_t *)(param_1 + 0x10 + lVar8 * 0x14);
    lVar7 = lVar8;
  }
  uVar5 = *(uint64_t *)(param_5 + 2);
  puVar2 = (uint64_t *)(param_1 + lVar7 * 0x14);
  *puVar2 = *(uint64_t *)param_5;
  puVar2[1] = uVar5;
  *(float *)(param_1 + 0x10 + lVar7 * 0x14) = param_5[4];
  return;
}






// 函数: void FUN_18026ef40(float *param_1,float *param_2,float *param_3,int8_t param_4)
void FUN_18026ef40(float *param_1,float *param_2,float *param_3,int8_t param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  uint64_t uStack_48;
  uint64_t uStack_40;
  float fStack_38;
  
  lVar14 = (longlong)param_2 - (longlong)param_1;
  lVar8 = lVar14 / 0x14;
  if (1 < lVar8) {
    lVar12 = (lVar8 + -2 >> 1) + 1;
    pfVar11 = param_1 + lVar12 * 5;
    lVar13 = lVar12 * 2 + 2;
    do {
      uVar4 = *(uint64_t *)(pfVar11 + -5);
      uVar5 = *(uint64_t *)(pfVar11 + -3);
      fVar1 = pfVar11[-1];
      pfVar11 = pfVar11 + -5;
      lVar12 = lVar12 + -1;
      lVar13 = lVar13 + -2;
      lVar7 = lVar12;
      lVar10 = lVar13;
      while (lVar10 < lVar8) {
        lVar9 = lVar10 + -1;
        if (param_1[lVar10 * 5 + -5] < param_1[lVar10 * 5] ||
            param_1[lVar10 * 5 + -5] == param_1[lVar10 * 5]) {
          lVar9 = lVar10;
        }
        uVar6 = *(uint64_t *)(param_1 + lVar9 * 5 + 2);
        *(uint64_t *)(param_1 + lVar7 * 5) = *(uint64_t *)(param_1 + lVar9 * 5);
        *(uint64_t *)(param_1 + lVar7 * 5 + 2) = uVar6;
        param_1[lVar7 * 5 + 4] = param_1[lVar9 * 5 + 4];
        lVar7 = lVar9;
        lVar10 = lVar9 * 2 + 2;
      }
      if (lVar10 == lVar8) {
        uVar6 = *(uint64_t *)(param_1 + lVar10 * 5 + -5 + 2);
        *(uint64_t *)(param_1 + lVar7 * 5) = *(uint64_t *)(param_1 + lVar10 * 5 + -5);
        *(uint64_t *)(param_1 + lVar7 * 5 + 2) = uVar6;
        param_1[lVar7 * 5 + 4] = param_1[lVar10 * 5 + -1];
        lVar7 = lVar10 + -1;
      }
      if (lVar12 < lVar7) {
        uStack_48._0_4_ = (float)uVar4;
        do {
          lVar10 = lVar7 + -1 >> 1;
          if ((float)uStack_48 < param_1[lVar10 * 5] || (float)uStack_48 == param_1[lVar10 * 5])
          break;
          uVar6 = *(uint64_t *)(param_1 + lVar10 * 5 + 2);
          *(uint64_t *)(param_1 + lVar7 * 5) = *(uint64_t *)(param_1 + lVar10 * 5);
          *(uint64_t *)(param_1 + lVar7 * 5 + 2) = uVar6;
          param_1[lVar7 * 5 + 4] = param_1[lVar10 * 5 + 4];
          lVar7 = lVar10;
        } while (lVar12 < lVar10);
      }
      *(uint64_t *)(param_1 + lVar7 * 5) = uVar4;
      *(uint64_t *)(param_1 + lVar7 * 5 + 2) = uVar5;
      param_1[lVar7 * 5 + 4] = fVar1;
    } while (lVar12 != 0);
  }
  pfVar11 = param_2;
  if (param_2 < param_3) {
    do {
      if (*pfVar11 <= *param_1 && *param_1 != *pfVar11) {
        fStack_38 = pfVar11[4];
        uStack_48 = *(uint64_t *)pfVar11;
        uStack_40 = *(uint64_t *)(pfVar11 + 2);
        fVar1 = param_1[1];
        fVar2 = param_1[2];
        fVar3 = param_1[3];
        *pfVar11 = *param_1;
        pfVar11[1] = fVar1;
        pfVar11[2] = fVar2;
        pfVar11[3] = fVar3;
        pfVar11[4] = param_1[4];
        FUN_18026ee40(param_1,0,lVar8,0,&uStack_48,param_4);
      }
      pfVar11 = pfVar11 + 5;
    } while (pfVar11 < param_3);
  }
  if (1 < lVar8) {
    param_2 = param_2 + -5;
    do {
      uVar4 = *(uint64_t *)param_2;
      uVar5 = *(uint64_t *)(param_2 + 2);
      fVar1 = param_2[4];
      lVar8 = 0;
      uVar6 = *(uint64_t *)(param_1 + 2);
      lVar13 = 2;
      *(uint64_t *)param_2 = *(uint64_t *)param_1;
      *(uint64_t *)(param_2 + 2) = uVar6;
      param_2[4] = param_1[4];
      lVar12 = lVar14 / 0x14 + -1;
      bVar15 = lVar12 == 2;
      lVar14 = lVar8;
      if (2 < lVar12) {
        do {
          lVar8 = lVar13 + -1;
          if (param_1[lVar13 * 5 + -5] < param_1[lVar13 * 5] ||
              param_1[lVar13 * 5 + -5] == param_1[lVar13 * 5]) {
            lVar8 = lVar13;
          }
          uVar6 = *(uint64_t *)(param_1 + lVar8 * 5 + 2);
          lVar13 = lVar8 * 2 + 2;
          *(uint64_t *)(param_1 + lVar14 * 5) = *(uint64_t *)(param_1 + lVar8 * 5);
          *(uint64_t *)(param_1 + lVar14 * 5 + 2) = uVar6;
          param_1[lVar14 * 5 + 4] = param_1[lVar8 * 5 + 4];
          bVar15 = lVar13 == lVar12;
          lVar14 = lVar8;
        } while (lVar13 < lVar12);
      }
      if (bVar15) {
        uVar6 = *(uint64_t *)(param_1 + lVar13 * 5 + -5 + 2);
        *(uint64_t *)(param_1 + lVar8 * 5) = *(uint64_t *)(param_1 + lVar13 * 5 + -5);
        *(uint64_t *)(param_1 + lVar8 * 5 + 2) = uVar6;
        param_1[lVar8 * 5 + 4] = param_1[lVar13 * 5 + -1];
        lVar8 = lVar13 + -1;
      }
      if (0 < lVar8) {
        uStack_48._0_4_ = (float)uVar4;
        do {
          lVar14 = lVar8 + -1 >> 1;
          if ((float)uStack_48 < param_1[lVar14 * 5] || (float)uStack_48 == param_1[lVar14 * 5])
          break;
          uVar6 = *(uint64_t *)(param_1 + lVar14 * 5 + 2);
          *(uint64_t *)(param_1 + lVar8 * 5) = *(uint64_t *)(param_1 + lVar14 * 5);
          *(uint64_t *)(param_1 + lVar8 * 5 + 2) = uVar6;
          param_1[lVar8 * 5 + 4] = param_1[lVar14 * 5 + 4];
          lVar8 = lVar14;
        } while (0 < lVar14);
      }
      param_2 = param_2 + -5;
      lVar14 = (longlong)param_2 + (0x14 - (longlong)param_1);
      *(uint64_t *)(param_1 + lVar8 * 5) = uVar4;
      *(uint64_t *)(param_1 + lVar8 * 5 + 2) = uVar5;
      param_1[lVar8 * 5 + 4] = fVar1;
    } while (0x27 < lVar14);
  }
  return;
}






