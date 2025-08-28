#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part076.c - 2 个函数

// 函数: void FUN_1808dcda0(uint64_t param_1)
void FUN_1808dcda0(uint64_t param_1)

{
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_8016_ptr,0x1dc,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_1808dcde0(uint64_t param_1,uint64_t param_2,uint64_t *param_3,int64_t *param_4)

{
  int32_t uVar1;
  uint64_t *puVar2;
  
  puVar2 = (uint64_t *)
           FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x10,&unknown_var_8016_ptr,0x1d1,0,0,1);
  if (puVar2 == (uint64_t *)0x0) {
    uVar1 = 0x26;
  }
  else {
    (**(code **)(*param_4 + 0x10))(param_4,param_2);
    *puVar2 = param_4;
    uVar1 = 0;
    *(int32_t *)(puVar2 + 1) = 0xffffffff;
    *(int32_t *)((int64_t)puVar2 + 0xc) = 0;
    *param_3 = puVar2;
  }
  return uVar1;
}



uint64_t FUN_1808dce80(uint64_t *param_1,uint64_t param_2,int32_t param_3,int *param_4)

{
  uint64_t uVar1;
  
  if (*(int *)(param_1 + 1) != *(int *)((int64_t)param_1 + 0xc)) {
    uVar1 = FUN_18076a440(*param_1,*(int *)((int64_t)param_1 + 0xc),0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *(int32_t *)(param_1 + 1) = *(int32_t *)((int64_t)param_1 + 0xc);
  }
  uVar1 = FUN_180769ed0(*param_1,param_2,1,param_3,param_4);
  if ((uVar1 & 0xffffffef) == 0) {
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + *param_4;
    *(int *)((int64_t)param_1 + 0xc) = *(int *)((int64_t)param_1 + 0xc) + *param_4;
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



int64_t FUN_1808dcf10(int64_t *param_1,int32_t *param_2,char param_3)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  lVar2 = (**(code **)(*param_1 + 0x10))();
  if ((lVar2 == 0) || (param_3 == '\0')) {
    bVar1 = false;
  }
  else {
    FUN_180768360(lVar2);
    bVar1 = true;
  }
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  lVar3 = (**(code **)(*param_1 + 0x340))(param_1,&uStack_18,0);
  if (lVar3 == 0) {
    uStack_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    lVar3 = (**(code **)(*param_1 + 0x338))(param_1,&uStack_18,0);
    if (lVar3 == 0) {
      uStack_18 = *param_2;
      uStack_14 = param_2[1];
      uStack_10 = param_2[2];
      uStack_c = param_2[3];
      lVar3 = (**(code **)(*param_1 + 0x328))(param_1,&uStack_18,0);
      if (lVar3 == 0) {
        uStack_18 = *param_2;
        uStack_14 = param_2[1];
        uStack_10 = param_2[2];
        uStack_c = param_2[3];
        lVar3 = (**(code **)(*param_1 + 0x330))(param_1,&uStack_18,0);
        if (lVar3 == 0) {
          uStack_18 = *param_2;
          uStack_14 = param_2[1];
          uStack_10 = param_2[2];
          uStack_c = param_2[3];
          lVar3 = (**(code **)(*param_1 + 800))(param_1,&uStack_18,0);
        }
      }
    }
  }
  if (bVar1) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  return lVar3;
}



int64_t FUN_1808dd040(int64_t *param_1,int32_t *param_2,char param_3)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  lVar2 = (**(code **)(*param_1 + 0x10))();
  if ((lVar2 == 0) || (param_3 == '\0')) {
    bVar1 = false;
  }
  else {
    FUN_180768360(lVar2);
    bVar1 = true;
  }
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  lVar3 = (**(code **)(*param_1 + 0x2f0))(param_1,&uStack_18,0);
  if ((lVar3 == 0) || (lVar3 = lVar3 + 0x20, lVar3 == 0)) {
    uStack_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    lVar3 = (**(code **)(*param_1 + 0x270))(param_1,&uStack_18,0);
    if ((lVar3 == 0) || (lVar3 = lVar3 + 0x20, lVar3 == 0)) {
      lVar3 = 0;
    }
  }
  if (bVar1) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  return lVar3;
}



int64_t FUN_1808dd110(int64_t *param_1,int32_t *param_2,char param_3)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  lVar2 = (**(code **)(*param_1 + 0x10))();
  if ((lVar2 == 0) || (param_3 == '\0')) {
    bVar1 = false;
  }
  else {
    FUN_180768360(lVar2);
    bVar1 = true;
  }
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  lVar3 = (**(code **)(*param_1 + 0x318))(param_1,&uStack_18,0);
  if (lVar3 == 0) {
    uStack_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    lVar3 = (**(code **)(*param_1 + 0x310))(param_1,&uStack_18,0);
    if (lVar3 == 0) {
      uStack_18 = *param_2;
      uStack_14 = param_2[1];
      uStack_10 = param_2[2];
      uStack_c = param_2[3];
      lVar3 = (**(code **)(*param_1 + 0x308))(param_1,&uStack_18,0);
      if (lVar3 == 0) {
        uStack_18 = *param_2;
        uStack_14 = param_2[1];
        uStack_10 = param_2[2];
        uStack_c = param_2[3];
        lVar3 = (**(code **)(*param_1 + 0x300))(param_1,&uStack_18,0);
      }
    }
  }
  if (bVar1) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  return lVar3;
}



int64_t FUN_1808dd210(int64_t *param_1,int32_t *param_2,char param_3)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  lVar2 = (**(code **)(*param_1 + 0x10))();
  if ((lVar2 == 0) || (param_3 == '\0')) {
    bVar1 = false;
  }
  else {
    FUN_180768360(lVar2);
    bVar1 = true;
  }
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  lVar3 = (**(code **)(*param_1 + 0x2e8))(param_1,&uStack_18,0);
  if (lVar3 == 0) {
    uStack_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    lVar3 = (**(code **)(*param_1 + 0x2e0))(param_1,&uStack_18,0);
    if (lVar3 == 0) {
      uStack_18 = *param_2;
      uStack_14 = param_2[1];
      uStack_10 = param_2[2];
      uStack_c = param_2[3];
      lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1,&uStack_18,0);
      if (lVar3 == 0) {
        uStack_18 = *param_2;
        uStack_14 = param_2[1];
        uStack_10 = param_2[2];
        uStack_c = param_2[3];
        lVar3 = (**(code **)(*param_1 + 0x2c0))(param_1,&uStack_18,0);
        if (lVar3 == 0) {
          uStack_18 = *param_2;
          uStack_14 = param_2[1];
          uStack_10 = param_2[2];
          uStack_c = param_2[3];
          lVar3 = (**(code **)(*param_1 + 0x2b8))(param_1,&uStack_18,0);
          if (lVar3 == 0) {
            uStack_18 = *param_2;
            uStack_14 = param_2[1];
            uStack_10 = param_2[2];
            uStack_c = param_2[3];
            lVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,&uStack_18,0);
            if (lVar3 == 0) {
              uStack_18 = *param_2;
              uStack_14 = param_2[1];
              uStack_10 = param_2[2];
              uStack_c = param_2[3];
              lVar3 = (**(code **)(*param_1 + 0x2d8))(param_1,&uStack_18,0);
              if (lVar3 == 0) {
                uStack_18 = *param_2;
                uStack_14 = param_2[1];
                uStack_10 = param_2[2];
                uStack_c = param_2[3];
                lVar3 = (**(code **)(*param_1 + 0x2d0))(param_1,&uStack_18,0);
              }
            }
          }
        }
      }
    }
  }
  if (bVar1) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  return lVar3;
}



int64_t FUN_1808dd3b0(int64_t *param_1,int32_t *param_2,char param_3)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  lVar2 = (**(code **)(*param_1 + 0x10))();
  if ((lVar2 == 0) || (param_3 == '\0')) {
    bVar1 = false;
  }
  else {
    FUN_180768360(lVar2);
    bVar1 = true;
  }
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  lVar3 = (**(code **)(*param_1 + 0x340))(param_1,&uStack_18,0);
  if (lVar3 == 0) {
    uStack_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    lVar3 = (**(code **)(*param_1 + 0x338))(param_1,&uStack_18,0);
    if (lVar3 == 0) {
      uStack_18 = *param_2;
      uStack_14 = param_2[1];
      uStack_10 = param_2[2];
      uStack_c = param_2[3];
      lVar3 = (**(code **)(*param_1 + 0x328))(param_1,&uStack_18,0);
      if (lVar3 == 0) {
        uStack_18 = *param_2;
        uStack_14 = param_2[1];
        uStack_10 = param_2[2];
        uStack_c = param_2[3];
        lVar3 = (**(code **)(*param_1 + 0x330))(param_1,&uStack_18,0);
        if (lVar3 == 0) {
          uStack_18 = *param_2;
          uStack_14 = param_2[1];
          uStack_10 = param_2[2];
          uStack_c = param_2[3];
          lVar3 = (**(code **)(*param_1 + 0x2f8))(param_1,&uStack_18,0);
          if (lVar3 == 0) {
            uStack_18 = *param_2;
            uStack_14 = param_2[1];
            uStack_10 = param_2[2];
            uStack_c = param_2[3];
            lVar3 = (**(code **)(*param_1 + 800))(param_1,&uStack_18,0);
          }
        }
      }
    }
  }
  if (bVar1) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  return lVar3;
}



int64_t FUN_1808dd500(int64_t *param_1,int32_t *param_2,char param_3)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  lVar2 = (**(code **)(*param_1 + 0x10))();
  if ((lVar2 == 0) || (param_3 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FUN_180768360(lVar2);
  }
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  lVar3 = (**(code **)(*param_1 + 0x318))(param_1,&uStack_18,0);
  if (lVar3 == 0) {
    uStack_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    lVar3 = (**(code **)(*param_1 + 0x310))(param_1,&uStack_18,0);
  }
  if (bVar1) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  return lVar3;
}



int64_t FUN_1808dd5c0(int64_t *param_1,int32_t *param_2,char param_3)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  lVar2 = (**(code **)(*param_1 + 0x10))();
  if ((lVar2 == 0) || (param_3 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FUN_180768360(lVar2);
  }
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  lVar3 = (**(code **)(*param_1 + 0x2c0))(param_1,&uStack_18,0);
  if (lVar3 == 0) {
    uStack_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    lVar3 = (**(code **)(*param_1 + 0x2b8))(param_1,&uStack_18,0);
  }
  if (bVar1) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  return lVar3;
}



int64_t FUN_1808dd680(int64_t *param_1,int32_t *param_2,char param_3)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  lVar2 = (**(code **)(*param_1 + 0x10))();
  if ((lVar2 == 0) || (param_3 == '\0')) {
    bVar1 = false;
  }
  else {
    FUN_180768360(lVar2);
    bVar1 = true;
  }
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  lVar3 = (**(code **)(*param_1 + 0x128))(param_1,&uStack_18,0);
  if (lVar3 == 0) {
    uStack_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    lVar3 = (**(code **)(*param_1 + 0x150))(param_1,&uStack_18,0);
    if (lVar3 == 0) {
      uStack_18 = *param_2;
      uStack_14 = param_2[1];
      uStack_10 = param_2[2];
      uStack_c = param_2[3];
      lVar3 = (**(code **)(*param_1 + 0x140))(param_1,&uStack_18,0);
      if (lVar3 == 0) {
        uStack_18 = *param_2;
        uStack_14 = param_2[1];
        uStack_10 = param_2[2];
        uStack_c = param_2[3];
        lVar3 = (**(code **)(*param_1 + 0x278))(param_1,&uStack_18,0);
        if (lVar3 == 0) {
          uStack_18 = *param_2;
          uStack_14 = param_2[1];
          uStack_10 = param_2[2];
          uStack_c = param_2[3];
          lVar3 = (**(code **)(*param_1 + 0x2f8))(param_1,&uStack_18,0);
          if (lVar3 == 0) {
            uStack_18 = *param_2;
            uStack_14 = param_2[1];
            uStack_10 = param_2[2];
            uStack_c = param_2[3];
            lVar3 = (**(code **)(*param_1 + 0x280))(param_1,&uStack_18,0);
            if (lVar3 == 0) {
              uStack_18 = *param_2;
              uStack_14 = param_2[1];
              uStack_10 = param_2[2];
              uStack_c = param_2[3];
              lVar3 = (**(code **)(*param_1 + 0x288))(param_1,&uStack_18,0);
              if (lVar3 == 0) {
                uStack_18 = *param_2;
                uStack_14 = param_2[1];
                uStack_10 = param_2[2];
                uStack_c = param_2[3];
                lVar3 = (**(code **)(*param_1 + 0x290))(param_1,&uStack_18,0);
              }
            }
          }
        }
      }
    }
  }
  if (bVar1) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  return lVar3;
}



int64_t FUN_1808dd820(int64_t *param_1,int32_t *param_2,char param_3)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  lVar2 = (**(code **)(*param_1 + 0x10))();
  if ((lVar2 == 0) || (param_3 == '\0')) {
    bVar1 = false;
  }
  else {
    FUN_180768360(lVar2);
    bVar1 = true;
  }
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  lVar3 = (**(code **)(*param_1 + 0x340))(param_1,&uStack_18,0);
  if ((lVar3 == 0) || (lVar3 = lVar3 + 0x48, lVar3 == 0)) {
    uStack_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    lVar3 = (**(code **)(*param_1 + 0x338))(param_1,&uStack_18,0);
    if ((lVar3 == 0) || (lVar3 = lVar3 + 0x48, lVar3 == 0)) {
      uStack_18 = *param_2;
      uStack_14 = param_2[1];
      uStack_10 = param_2[2];
      uStack_c = param_2[3];
      lVar3 = (**(code **)(*param_1 + 0x328))(param_1,&uStack_18,0);
      if ((lVar3 == 0) || (lVar3 = lVar3 + 0x48, lVar3 == 0)) {
        uStack_18 = *param_2;
        uStack_14 = param_2[1];
        uStack_10 = param_2[2];
        uStack_c = param_2[3];
        lVar3 = (**(code **)(*param_1 + 0x330))(param_1,&uStack_18,0);
        if ((lVar3 == 0) || (lVar3 = lVar3 + 0x48, lVar3 == 0)) {
          uStack_18 = *param_2;
          uStack_14 = param_2[1];
          uStack_10 = param_2[2];
          uStack_c = param_2[3];
          lVar3 = (**(code **)(*param_1 + 800))(param_1,&uStack_18,0);
          if ((lVar3 == 0) || (lVar3 = lVar3 + 0x48, lVar3 == 0)) {
            uStack_18 = *param_2;
            uStack_14 = param_2[1];
            uStack_10 = param_2[2];
            uStack_c = param_2[3];
            lVar3 = (**(code **)(*param_1 + 0x128))(param_1,&uStack_18,0);
            if ((lVar3 == 0) || (lVar3 = lVar3 + 0x30, lVar3 == 0)) {
              lVar3 = 0;
            }
          }
        }
      }
    }
  }
  if (bVar1) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  return lVar3;
}



int64_t FUN_1808dd9a0(int64_t *param_1,int32_t *param_2,char param_3)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  lVar2 = (**(code **)(*param_1 + 0x10))();
  if ((lVar2 == 0) || (param_3 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FUN_180768360(lVar2);
  }
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  lVar3 = (**(code **)(*param_1 + 0x2a8))(param_1,&uStack_18,0);
  if (lVar3 == 0) {
    uStack_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    lVar3 = (**(code **)(*param_1 + 0x2a0))(param_1,&uStack_18,0);
  }
  if (bVar1) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  return lVar3;
}



uint64_t FUN_1808dda60(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint uVar8;
  uint uVar9;
  uint64_t uVar10;
  uint auStackX_20 [2];
  uint auStack_28 [4];
  uint64_t uVar7;
  
  uVar10 = 0;
  auStackX_20[0] = 0;
  uVar3 = FUN_1808de7f0(param_1,auStackX_20);
  if ((int)uVar3 == 0) {
    uVar8 = auStackX_20[0] & 1;
    uVar9 = auStackX_20[0] >> 1;
    if (uVar9 != 0) {
      uVar4 = param_1[2];
      uVar5 = uVar10;
      uVar7 = uVar10;
      do {
        uVar6 = (uint)uVar5;
        if (uVar4 != 0) {
          return 0x1c;
        }
        if (0xffff < uVar6) {
          return 0x1c;
        }
        if (uVar6 == 0) {
          plVar1 = (int64_t *)*param_1;
          uVar6 = 0;
          if (*plVar1 == 0) {
            uVar3 = 0x1c;
LAB_1808ddb33:
            if ((int)uVar3 == 0) {
              uVar6 = auStackX_20[0] & 0xffff;
            }
          }
          else {
            if (plVar1[2] == 0) {
LAB_1808ddb17:
              uVar3 = FUN_180769ed0(*plVar1,auStackX_20,1,2,0);
              goto LAB_1808ddb33;
            }
            auStack_28[0] = 0;
            uVar3 = func_0x00018076a7d0(*plVar1,auStack_28);
            if ((int)uVar3 == 0) {
              if ((uint64_t)plVar1[2] < (uint64_t)auStack_28[0] + 2) {
                uVar3 = 0x11;
                goto LAB_1808ddb33;
              }
              goto LAB_1808ddb17;
            }
          }
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
        *(uint *)(param_1 + 3) = uVar6;
        auStack_28[0] = 0;
        uVar3 = func_0x00018076a7d0(*(uint64_t *)*param_1,auStack_28);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        param_1[2] = (uint64_t)auStack_28[0];
        *(uint64_t *)(*param_1 + 0x10) =
             (uint64_t)*(uint *)(param_1 + 3) + (uint64_t)auStack_28[0];
        if (param_1[2] == 0) {
          return 0x1c;
        }
        uVar3 = FUN_18076a440(*(uint64_t *)*param_1,(uint64_t)*(uint *)(param_1 + 3) + param_1[2]
                              ,0);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        lVar2 = param_1[1];
        uVar4 = uVar10;
        if (lVar2 != 0) {
          uVar4 = (uint64_t)*(uint *)(lVar2 + 4) + *(int64_t *)(lVar2 + 8);
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (uint64_t)uVar6;
        *(uint64_t *)(*param_1 + 0x10) = uVar4;
        uVar5 = (uint64_t)(-uVar8 & *(uint *)(param_1 + 3));
        *(int32_t *)(param_1 + 3) = 0;
        param_1[2] = 0;
        uVar4 = uVar10;
      } while ((int)uVar6 < (int)uVar9);
    }
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t FUN_1808dda85(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t *unaff_RBX;
  uint uVar6;
  uint64_t uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint64_t unaff_R15;
  uint in_stack_00000030;
  uint in_stack_00000078;
  
  uVar10 = (uint)unaff_R15;
  uVar7 = unaff_R15 & 0xffffffff;
  uVar8 = in_stack_00000078 & 1;
  uVar9 = in_stack_00000078 >> 1;
  if (uVar9 != 0) {
    uVar5 = unaff_R15 & 0xffffffff;
    uVar3 = unaff_RBX[2];
    do {
      uVar6 = (uint)uVar5;
      if (uVar3 != 0) {
        return 0x1c;
      }
      if (0xffff < uVar6) {
        return 0x1c;
      }
      if (uVar6 == 0) {
        plVar1 = (int64_t *)*unaff_RBX;
        uVar6 = uVar10;
        if (*plVar1 == 0) {
          uVar4 = 0x1c;
LAB_1808ddb33:
          if ((int)uVar4 == 0) {
            uVar6 = in_stack_00000078 & 0xffff;
          }
        }
        else {
          if (plVar1[2] == unaff_R15) {
LAB_1808ddb17:
            uVar4 = FUN_180769ed0(*plVar1,&stack0x00000078,1);
            goto LAB_1808ddb33;
          }
          in_stack_00000030 = uVar10;
          uVar4 = func_0x00018076a7d0(*plVar1,&stack0x00000030);
          if ((int)uVar4 == 0) {
            if ((uint64_t)plVar1[2] < (uint64_t)in_stack_00000030 + 2) {
              uVar4 = 0x11;
              goto LAB_1808ddb33;
            }
            goto LAB_1808ddb17;
          }
        }
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
      *(uint *)(unaff_RBX + 3) = uVar6;
      in_stack_00000030 = uVar10;
      uVar4 = func_0x00018076a7d0(*(uint64_t *)*unaff_RBX,&stack0x00000030);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      unaff_RBX[2] = (uint64_t)in_stack_00000030;
      *(uint64_t *)(*unaff_RBX + 0x10) =
           (uint64_t)*(uint *)(unaff_RBX + 3) + (uint64_t)in_stack_00000030;
      if (unaff_RBX[2] == 0) {
        return 0x1c;
      }
      uVar4 = FUN_18076a440(*(uint64_t *)*unaff_RBX,
                            (uint64_t)*(uint *)(unaff_RBX + 3) + unaff_RBX[2],0);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      lVar2 = unaff_RBX[1];
      uVar3 = unaff_R15;
      if (lVar2 != 0) {
        uVar3 = (uint64_t)*(uint *)(lVar2 + 4) + *(int64_t *)(lVar2 + 8);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar6;
      *(uint64_t *)(*unaff_RBX + 0x10) = uVar3;
      uVar5 = (uint64_t)(-uVar8 & *(uint *)(unaff_RBX + 3));
      *(uint *)(unaff_RBX + 3) = uVar10;
      unaff_RBX[2] = unaff_R15;
      uVar3 = unaff_R15;
    } while ((int)uVar6 < (int)uVar9);
  }
  return 0;
}






// 函数: void FUN_1808ddbf2(void)
void FUN_1808ddbf2(void)

{
  return;
}



uint64_t FUN_1808ddc20(int64_t *param_1,int *param_2,int param_3,int param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint auStackX_8 [2];
  
  if ((param_1[1] == 0) || (*(int *)(param_1[1] + 0x18) == 0)) {
    return 0x1c;
  }
  auStackX_8[0] = 0;
  uVar1 = func_0x00018076a7d0(*(uint64_t *)*param_1,auStackX_8);
  if ((int)uVar1 == 0) {
    if ((uint64_t)auStackX_8[0] <
        (uint64_t)*(uint *)(param_1[1] + 4) + *(int64_t *)(param_1[1] + 8)) {
      do {
        uVar1 = FUN_1808de4c0(param_1,param_2);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if (*param_2 == param_4) {
          if (param_2[6] != param_3) {
            return 0xd;
          }
          *(int64_t *)(param_2 + 4) = param_1[1];
          param_1[1] = (int64_t)param_2;
          *(uint64_t *)(*param_1 + 0x10) = (uint64_t)(uint)param_2[1] + *(int64_t *)(param_2 + 2)
          ;
          return 0;
        }
        uVar2 = ((uint64_t)(param_2[1] + 1) & 0xfffffffe) + *(int64_t *)(param_2 + 2);
        uVar1 = FUN_18076a440(*(uint64_t *)*param_1,uVar2 & 0xffffffff,0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      } while (uVar2 < (uint64_t)*(uint *)(param_1[1] + 4) + *(int64_t *)(param_1[1] + 8));
    }
    uVar1 = 0x12;
  }
  return uVar1;
}



uint64_t FUN_1808ddc74(uint64_t param_1,uint64_t param_2)

{
  int64_t in_RAX;
  uint64_t uVar1;
  int *unaff_RBX;
  int unaff_EBP;
  uint64_t uVar2;
  int64_t *unaff_RDI;
  int unaff_R14D;
  
  if (param_2 < (uint64_t)*(uint *)(in_RAX + 4) + *(int64_t *)(in_RAX + 8)) {
    do {
      uVar1 = FUN_1808de4c0();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*unaff_RBX == unaff_EBP) {
        if (unaff_RBX[6] != unaff_R14D) {
          return 0xd;
        }
        *(int64_t *)(unaff_RBX + 4) = unaff_RDI[1];
        unaff_RDI[1] = (int64_t)unaff_RBX;
        *(uint64_t *)(*unaff_RDI + 0x10) =
             (uint64_t)(uint)unaff_RBX[1] + *(int64_t *)(unaff_RBX + 2);
        return 0;
      }
      uVar2 = ((uint64_t)(unaff_RBX[1] + 1) & 0xfffffffe) + *(int64_t *)(unaff_RBX + 2);
      uVar1 = FUN_18076a440(*(uint64_t *)*unaff_RDI,uVar2 & 0xffffffff,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    } while (uVar2 < (uint64_t)*(uint *)(unaff_RDI[1] + 4) + *(int64_t *)(unaff_RDI[1] + 8));
  }
  return 0x12;
}






