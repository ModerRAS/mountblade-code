#include "TaleWorlds.Native.Split.h"

// 99_part_06_part075.c - 5 个函数

// 函数: void FUN_1803efe50(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
void FUN_1803efe50(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined1 auStack_438 [48];
  undefined4 uStack_408;
  undefined1 auStack_400 [8];
  longlong lStack_3f8;
  uint uStack_3f0;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined1 uStack_3c0;
  undefined *puStack_3b8;
  longlong lStack_3b0;
  uint uStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined4 uStack_368;
  undefined8 uStack_360;
  undefined **ppuStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2d0;
  longlong *plStack_2c8;
  longlong lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_288;
  ulonglong uStack_58;
  
  uStack_288 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_438;
  uStack_2b8 = param_5;
  uStack_408 = 0;
  ppuStack_318 = &puStack_310;
  puStack_310 = &UNK_180a3c3e0;
  uStack_2f8 = 0;
  uStack_308 = 0;
  uStack_300 = 0;
  uStack_2d0 = param_4;
  plStack_2c8 = param_1;
  lStack_2c0 = param_2;
  uStack_3c0 = (**(code **)(*param_1 + 0x38))(param_1,param_2 + 0x48,&puStack_310);
  FUN_1806279c0(auStack_400,param_1 + 0x40);
  puStack_3b8 = &UNK_180a3c3e0;
  uStack_3a0 = 0;
  lStack_3b0 = 0;
  uStack_3a8 = 0;
  uStack_408 = 1;
  uVar5 = (ulonglong)uStack_3f0;
  if (lStack_3f8 != 0) {
    FUN_1806277c0(&puStack_3b8,uVar5);
  }
  if (uStack_3f0 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lStack_3b0,lStack_3f8,uVar5);
  }
  uStack_3a8 = uStack_3f0;
  if (lStack_3b0 != 0) {
    *(undefined1 *)(uVar5 + lStack_3b0) = 0;
  }
  uStack_3a0._4_4_ = uStack_3e4;
  FUN_1806277c0(&puStack_3b8,4);
  *(undefined4 *)((ulonglong)uStack_3a8 + lStack_3b0) = 0x20542d20;
  *(undefined1 *)((undefined4 *)((ulonglong)uStack_3a8 + lStack_3b0) + 1) = 0;
  if (lStack_3f8 == 0) {
    lStack_3f8 = lStack_3b0;
    _uStack_3e8 = CONCAT44(uStack_3a0._4_4_,(undefined4)uStack_3a0);
    uStack_3a8 = 0;
    uStack_408 = 0;
    lStack_3b0 = 0;
    uStack_3a0 = 0;
    puStack_3b8 = &UNK_18098bcb0;
    uStack_3f0 = 4;
    uVar3 = FUN_1803ef110(param_1,*(undefined4 *)(param_2 + 0xa4));
    FUN_180627f00(auStack_400,uVar3);
    uVar1 = uStack_3f0;
    puStack_3b8 = &UNK_180a3c3e0;
    uStack_3a0 = 0;
    lStack_3b0 = 0;
    uStack_3a8 = 0;
    uStack_408 = 2;
    uVar5 = (ulonglong)uStack_3f0;
    if (lStack_3f8 != 0) {
      FUN_1806277c0(&puStack_3b8,uVar5);
    }
    if (uVar1 == 0) {
      uStack_3a8 = uVar1;
      if (lStack_3b0 != 0) {
        *(undefined1 *)(uVar5 + lStack_3b0) = 0;
      }
      uStack_3a0._4_4_ = uStack_3e4;
      uVar4 = 4;
      FUN_1806277c0(&puStack_3b8,4);
      lVar2 = lStack_3b0;
      *(undefined4 *)((ulonglong)uStack_3a8 + lStack_3b0) = 0x334f2d20;
      *(undefined1 *)((undefined4 *)((ulonglong)uStack_3a8 + lStack_3b0) + 1) = 0;
      if (lStack_3f8 == 0) {
        lStack_3f8 = lStack_3b0;
        uStack_3e8 = (undefined4)uStack_3a0;
        uStack_3e4 = uStack_3a0._4_4_;
        uStack_3a8 = 0;
        lStack_3b0 = 0;
        uStack_3a0 = 0;
        puStack_3b8 = &UNK_18098bcb0;
        puStack_378 = &UNK_180a3c3e0;
        uStack_360 = 0;
        uStack_370 = 0;
        uStack_368 = 0;
        uStack_408 = 4;
        uStack_3f0 = uVar4;
        if (lVar2 != 0) {
          FUN_1806277c0(&puStack_378,4);
        }
                    // WARNING: Subroutine does not return
        memcpy(uStack_370,lStack_3f8,4);
      }
      uStack_3a8 = uVar4;
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
                    // WARNING: Subroutine does not return
    memcpy(lStack_3b0,lStack_3f8,uVar5);
  }
  uStack_3a8 = 4;
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Removing unreachable block (ram,0x0001803f1599)
// WARNING: Removing unreachable block (ram,0x0001803f15a5)
// WARNING: Removing unreachable block (ram,0x0001803f15ac)
// WARNING: Removing unreachable block (ram,0x0001803f15be)
// WARNING: Removing unreachable block (ram,0x0001803f15ed)
// WARNING: Removing unreachable block (ram,0x0001803f15f7)
// WARNING: Removing unreachable block (ram,0x0001803f15ff)
// WARNING: Removing unreachable block (ram,0x0001803f1682)
// WARNING: Removing unreachable block (ram,0x0001803f1692)
// WARNING: Removing unreachable block (ram,0x0001803f16a2)
// WARNING: Removing unreachable block (ram,0x0001803f16ae)
// WARNING: Removing unreachable block (ram,0x0001803f16b5)
// WARNING: Removing unreachable block (ram,0x0001803f16e8)
// WARNING: Removing unreachable block (ram,0x0001803f16f0)
// WARNING: Removing unreachable block (ram,0x0001803f1773)
// WARNING: Removing unreachable block (ram,0x0001803f1783)
// WARNING: Removing unreachable block (ram,0x0001803f1787)
// WARNING: Removing unreachable block (ram,0x0001803f1793)
// WARNING: Removing unreachable block (ram,0x0001803f179f)
// WARNING: Removing unreachable block (ram,0x0001803f17a6)
// WARNING: Removing unreachable block (ram,0x0001803f17e3)
// WARNING: Removing unreachable block (ram,0x0001803f17eb)
// WARNING: Removing unreachable block (ram,0x0001803f186e)
// WARNING: Removing unreachable block (ram,0x0001803f187e)
// WARNING: Removing unreachable block (ram,0x0001803f1882)
// WARNING: Removing unreachable block (ram,0x0001803f234f)
// WARNING: Removing unreachable block (ram,0x0001803f188e)
// WARNING: Removing unreachable block (ram,0x0001803f189a)
// WARNING: Removing unreachable block (ram,0x0001803f18a1)
// WARNING: Removing unreachable block (ram,0x0001803f18dc)
// WARNING: Removing unreachable block (ram,0x0001803f18e4)
// WARNING: Removing unreachable block (ram,0x0001803f196f)
// WARNING: Removing unreachable block (ram,0x0001803f1980)
// WARNING: Removing unreachable block (ram,0x0001803f1984)
// WARNING: Removing unreachable block (ram,0x0001803f1991)
// WARNING: Removing unreachable block (ram,0x0001803f199f)
// WARNING: Removing unreachable block (ram,0x0001803f19a7)
// WARNING: Removing unreachable block (ram,0x0001803f1a01)
// WARNING: Removing unreachable block (ram,0x0001803f1a0a)
// WARNING: Removing unreachable block (ram,0x0001803f1ab1)
// WARNING: Removing unreachable block (ram,0x0001803f1a98)
// WARNING: Removing unreachable block (ram,0x0001803f1ab4)
// WARNING: Removing unreachable block (ram,0x0001803f1aee)
// WARNING: Removing unreachable block (ram,0x0001803f1b10)
// WARNING: Removing unreachable block (ram,0x0001803f1b51)
// WARNING: Removing unreachable block (ram,0x0001803f1b55)
// WARNING: Removing unreachable block (ram,0x0001803f1b8e)
// WARNING: Removing unreachable block (ram,0x0001803f1b96)
// WARNING: Removing unreachable block (ram,0x0001803f1bce)
// WARNING: Removing unreachable block (ram,0x0001803f1bd2)
// WARNING: Removing unreachable block (ram,0x0001803f1bdc)
// WARNING: Removing unreachable block (ram,0x0001803f1c10)
// WARNING: Removing unreachable block (ram,0x0001803f1c16)
// WARNING: Removing unreachable block (ram,0x0001803f1c4a)
// WARNING: Removing unreachable block (ram,0x0001803f1c53)
// WARNING: Removing unreachable block (ram,0x0001803f1c57)
// WARNING: Removing unreachable block (ram,0x0001803f1c61)
// WARNING: Removing unreachable block (ram,0x0001803f1c65)
// WARNING: Removing unreachable block (ram,0x0001803f1c2a)
// WARNING: Removing unreachable block (ram,0x0001803f1c33)
// WARNING: Removing unreachable block (ram,0x0001803f1c37)
// WARNING: Removing unreachable block (ram,0x0001803f1bf0)
// WARNING: Removing unreachable block (ram,0x0001803f1bf9)
// WARNING: Removing unreachable block (ram,0x0001803f1bfd)
// WARNING: Removing unreachable block (ram,0x0001803f1c76)
// WARNING: Removing unreachable block (ram,0x0001803f1c89)
// WARNING: Removing unreachable block (ram,0x0001803f1cd3)
// WARNING: Removing unreachable block (ram,0x0001803f1ce4)
// WARNING: Removing unreachable block (ram,0x0001803f1ce8)
// WARNING: Removing unreachable block (ram,0x0001803f1cf5)
// WARNING: Removing unreachable block (ram,0x0001803f1d03)
// WARNING: Removing unreachable block (ram,0x0001803f1d0b)
// WARNING: Removing unreachable block (ram,0x0001803f1d6f)
// WARNING: Removing unreachable block (ram,0x0001803f1d78)
// WARNING: Removing unreachable block (ram,0x0001803f1ddc)
// WARNING: Removing unreachable block (ram,0x0001803f1de2)
// WARNING: Removing unreachable block (ram,0x0001803f1dec)
// WARNING: Removing unreachable block (ram,0x0001803f1df0)
// WARNING: Removing unreachable block (ram,0x0001803f1e01)
// WARNING: Removing unreachable block (ram,0x0001803f1e31)
// WARNING: Removing unreachable block (ram,0x0001803f1e35)
// WARNING: Removing unreachable block (ram,0x0001803f1e4d)
// WARNING: Removing unreachable block (ram,0x0001803f1e50)
// WARNING: Removing unreachable block (ram,0x0001803f1e6a)
// WARNING: Removing unreachable block (ram,0x0001803f1e74)
// WARNING: Removing unreachable block (ram,0x0001803f1e78)
// WARNING: Removing unreachable block (ram,0x0001803f1e82)
// WARNING: Removing unreachable block (ram,0x0001803f1e85)
// WARNING: Removing unreachable block (ram,0x0001803f1e97)
// WARNING: Removing unreachable block (ram,0x0001803f1ede)
// WARNING: Removing unreachable block (ram,0x0001803f1eef)
// WARNING: Removing unreachable block (ram,0x0001803f1ef3)
// WARNING: Removing unreachable block (ram,0x0001803f1f00)
// WARNING: Removing unreachable block (ram,0x0001803f1f0e)
// WARNING: Removing unreachable block (ram,0x0001803f1f16)
// WARNING: Removing unreachable block (ram,0x0001803f1f57)
// WARNING: Removing unreachable block (ram,0x0001803f1f60)
// WARNING: Removing unreachable block (ram,0x0001803f1fd5)
// WARNING: Removing unreachable block (ram,0x0001803f1fd9)
// WARNING: Removing unreachable block (ram,0x0001803f2024)
// WARNING: Removing unreachable block (ram,0x0001803f2035)
// WARNING: Removing unreachable block (ram,0x0001803f2039)
// WARNING: Removing unreachable block (ram,0x0001803f2046)
// WARNING: Removing unreachable block (ram,0x0001803f2054)
// WARNING: Removing unreachable block (ram,0x0001803f205c)
// WARNING: Removing unreachable block (ram,0x0001803f2093)
// WARNING: Removing unreachable block (ram,0x0001803f209c)
// WARNING: Removing unreachable block (ram,0x0001803f215f)
// WARNING: Removing unreachable block (ram,0x0001803f2169)
// WARNING: Removing unreachable block (ram,0x0001803f216d)
// WARNING: Removing unreachable block (ram,0x0001803f2184)
// WARNING: Removing unreachable block (ram,0x0001803f218b)
// WARNING: Removing unreachable block (ram,0x0001803f219b)
// WARNING: Removing unreachable block (ram,0x0001803f219e)
// WARNING: Removing unreachable block (ram,0x0001803f21e2)
// WARNING: Removing unreachable block (ram,0x0001803f21ee)
// WARNING: Removing unreachable block (ram,0x0001803f21f2)
// WARNING: Removing unreachable block (ram,0x0001803f2204)
// WARNING: Removing unreachable block (ram,0x0001803f2212)
// WARNING: Removing unreachable block (ram,0x0001803f221a)
// WARNING: Removing unreachable block (ram,0x0001803f2229)
// WARNING: Removing unreachable block (ram,0x0001803f2255)
// WARNING: Removing unreachable block (ram,0x0001803f225f)
// WARNING: Removing unreachable block (ram,0x0001803f2268)
// WARNING: Removing unreachable block (ram,0x0001803f22df)
// WARNING: Removing unreachable block (ram,0x0001803f22ed)
// WARNING: Removing unreachable block (ram,0x0001803f233a)
// WARNING: Removing unreachable block (ram,0x0001803f234b)
// WARNING: Removing unreachable block (ram,0x0001803f235c)
// WARNING: Removing unreachable block (ram,0x0001803f236a)
// WARNING: Removing unreachable block (ram,0x0001803f2372)
// WARNING: Removing unreachable block (ram,0x0001803f23bc)
// WARNING: Removing unreachable block (ram,0x0001803f2441)
// WARNING: Removing unreachable block (ram,0x0001803f2445)
// WARNING: Removing unreachable block (ram,0x0001803f2455)
// WARNING: Removing unreachable block (ram,0x0001803f2466)
// WARNING: Removing unreachable block (ram,0x0001803f246a)
// WARNING: Removing unreachable block (ram,0x0001803f2471)
// WARNING: Removing unreachable block (ram,0x0001803f2474)
// WARNING: Removing unreachable block (ram,0x0001803f2486)
// WARNING: Removing unreachable block (ram,0x0001803f24a2)
// WARNING: Removing unreachable block (ram,0x0001803f24a6)
// WARNING: Removing unreachable block (ram,0x0001803f24b0)
// WARNING: Removing unreachable block (ram,0x0001803f24b4)
// WARNING: Removing unreachable block (ram,0x0001803f24bc)
// WARNING: Removing unreachable block (ram,0x0001803f24c0)
// WARNING: Removing unreachable block (ram,0x0001803f24fa)
// WARNING: Removing unreachable block (ram,0x0001803f24ff)
// WARNING: Removing unreachable block (ram,0x0001803f251b)
// WARNING: Removing unreachable block (ram,0x0001803f2520)
// WARNING: Removing unreachable block (ram,0x0001803f2531)
// WARNING: Removing unreachable block (ram,0x0001803f2536)
// WARNING: Removing unreachable block (ram,0x0001803f253f)
// WARNING: Removing unreachable block (ram,0x0001803f254e)
// WARNING: Removing unreachable block (ram,0x0001803f2553)
// WARNING: Removing unreachable block (ram,0x0001803f257f)
// WARNING: Removing unreachable block (ram,0x0001803f257a)
// WARNING: Removing unreachable block (ram,0x0001803f23b3)
// WARNING: Removing unreachable block (ram,0x0001803f14a2)
// WARNING: Removing unreachable block (ram,0x0001803f14ae)
// WARNING: Removing unreachable block (ram,0x0001803f14b5)
// WARNING: Removing unreachable block (ram,0x0001803f14f0)
// WARNING: Removing unreachable block (ram,0x0001803f14f8)
// WARNING: Removing unreachable block (ram,0x0001803f1579)
// WARNING: Removing unreachable block (ram,0x0001803f1584)
// WARNING: Removing unreachable block (ram,0x0001803f1588)
// WARNING: Removing unreachable block (ram,0x0001803f1696)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f1170(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
void FUN_1803f1170(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined1 auStack_458 [48];
  undefined4 uStack_428;
  undefined1 auStack_420 [8];
  longlong lStack_418;
  uint uStack_410;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined1 uStack_3e0;
  undefined *puStack_3d8;
  longlong lStack_3d0;
  uint uStack_3c8;
  undefined8 uStack_3c0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined4 uStack_388;
  undefined8 uStack_380;
  undefined **ppuStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2d0;
  longlong *plStack_2c8;
  longlong lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_288;
  ulonglong uStack_58;
  
  uStack_288 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_458;
  uStack_2b8 = param_5;
  uStack_428 = 0;
  ppuStack_318 = &puStack_310;
  puStack_310 = &UNK_180a3c3e0;
  uStack_2f8 = 0;
  uStack_308 = 0;
  uStack_300 = 0;
  uStack_2d0 = param_4;
  plStack_2c8 = param_1;
  lStack_2c0 = param_2;
  uStack_3e0 = (**(code **)(*param_1 + 0x38))(param_1,param_2 + 0x48,&puStack_310);
  FUN_1806279c0(auStack_420,param_1 + 0x40);
  puStack_3d8 = &UNK_180a3c3e0;
  uStack_3c0 = 0;
  lStack_3d0 = 0;
  uStack_3c8 = 0;
  uStack_428 = 1;
  uVar5 = (ulonglong)uStack_410;
  if (lStack_418 != 0) {
    FUN_1806277c0(&puStack_3d8,uVar5);
  }
  if (uStack_410 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lStack_3d0,lStack_418,uVar5);
  }
  uStack_3c8 = uStack_410;
  if (lStack_3d0 != 0) {
    *(undefined1 *)(uVar5 + lStack_3d0) = 0;
  }
  uStack_3c0._4_4_ = uStack_404;
  FUN_1806277c0(&puStack_3d8,4);
  *(undefined4 *)((ulonglong)uStack_3c8 + lStack_3d0) = 0x20542d20;
  *(undefined1 *)((undefined4 *)((ulonglong)uStack_3c8 + lStack_3d0) + 1) = 0;
  if (lStack_418 == 0) {
    lStack_418 = lStack_3d0;
    _uStack_408 = CONCAT44(uStack_3c0._4_4_,(undefined4)uStack_3c0);
    uStack_3c8 = 0;
    uStack_428 = 0;
    lStack_3d0 = 0;
    uStack_3c0 = 0;
    puStack_3d8 = &UNK_18098bcb0;
    uStack_410 = 4;
    uVar3 = FUN_1803ef110(param_1,*(undefined4 *)(param_2 + 0xa4));
    FUN_180627f00(auStack_420,uVar3);
    uVar1 = uStack_410;
    puStack_3d8 = &UNK_180a3c3e0;
    uStack_3c0 = 0;
    lStack_3d0 = 0;
    uStack_3c8 = 0;
    uStack_428 = 2;
    uVar5 = (ulonglong)uStack_410;
    if (lStack_418 != 0) {
      FUN_1806277c0(&puStack_3d8,uVar5);
    }
    if (uVar1 == 0) {
      uStack_3c8 = uVar1;
      if (lStack_3d0 != 0) {
        *(undefined1 *)(uVar5 + lStack_3d0) = 0;
      }
      uStack_3c0._4_4_ = uStack_404;
      uVar4 = 4;
      FUN_1806277c0(&puStack_3d8,4);
      lVar2 = lStack_3d0;
      *(undefined4 *)((ulonglong)uStack_3c8 + lStack_3d0) = 0x334f2d20;
      *(undefined1 *)((undefined4 *)((ulonglong)uStack_3c8 + lStack_3d0) + 1) = 0;
      if (lStack_418 == 0) {
        lStack_418 = lStack_3d0;
        uStack_408 = (undefined4)uStack_3c0;
        uStack_404 = uStack_3c0._4_4_;
        uStack_3c8 = 0;
        lStack_3d0 = 0;
        uStack_3c0 = 0;
        puStack_3d8 = &UNK_18098bcb0;
        puStack_398 = &UNK_180a3c3e0;
        uStack_380 = 0;
        uStack_390 = 0;
        uStack_388 = 0;
        uStack_428 = 4;
        uStack_410 = uVar4;
        if (lVar2 != 0) {
          FUN_1806277c0(&puStack_398,4);
        }
                    // WARNING: Subroutine does not return
        memcpy(uStack_390,lStack_418,4);
      }
      uStack_3c8 = uVar4;
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
                    // WARNING: Subroutine does not return
    memcpy(lStack_3d0,lStack_418,uVar5);
  }
  uStack_3c8 = 4;
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f25b0(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
void FUN_1803f25b0(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong *param_5)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  undefined *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  int iVar10;
  longlong *plVar11;
  undefined *puVar12;
  longlong lVar13;
  undefined *puVar14;
  undefined1 auStack_348 [32];
  undefined4 uStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  int iStack_310;
  ulonglong uStack_308;
  longlong lStack_300;
  longlong lStack_2f8;
  undefined **ppuStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  ulonglong uStack_2d8;
  ulonglong uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined1 *puStack_2b8;
  ulonglong uStack_2b0;
  ulonglong uStack_2a8;
  undefined1 uStack_2a0;
  undefined7 uStack_29f;
  undefined8 uStack_290;
  ulonglong uStack_288;
  undefined *apuStack_278 [68];
  ulonglong uStack_58;
  
  uStack_2e8 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_348;
  uStack_328 = 0;
  ppuStack_2f0 = &puStack_320;
  puStack_320 = &UNK_180a3c3e0;
  uStack_308 = 0;
  puStack_318 = (undefined *)0x0;
  iStack_310 = 0;
  lStack_300 = param_4;
  lStack_2f8 = param_2;
  cVar2 = (**(code **)(*param_1 + 0x38))(param_1,param_2 + 0x48,&puStack_320);
  puVar5 = &DAT_18098bc73;
  if ((undefined *)param_1[0x41] != (undefined *)0x0) {
    puVar5 = (undefined *)param_1[0x41];
  }
  (**(code **)(*param_5 + 0x10))(param_5,puVar5);
  FUN_180627f00(param_5,&UNK_180a25ebc);
  uVar3 = FUN_1803ef110(param_1,*(undefined4 *)(param_2 + 0xa4));
  FUN_180627f00(param_5,uVar3);
  FUN_180627f00(param_5,&UNK_180a25ec4);
  FUN_180627f00(param_5,&DAT_180a02030);
  FUN_180627e90(param_5,param_2 + 0x80);
  FUN_180627f00(param_5,&UNK_180a25ed0);
  FUN_180627f00(param_5,&UNK_180a25e58);
  FUN_180627f00(param_5,&UNK_180a25e70);
  FUN_180627f00(param_5,&DAT_180a0206c);
  if ((cVar2 != '\0') && (iStack_310 != 0)) {
    puVar5 = &DAT_18098bc73;
    if (puStack_318 != (undefined *)0x0) {
      puVar5 = puStack_318;
    }
    FUN_180628040(param_5,&UNK_180a25e80,puVar5);
  }
  iVar10 = 0;
  lVar13 = *param_3;
  lVar6 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_3[1] - lVar13),8) +
          (param_3[1] - lVar13);
  if (lVar6 >> 6 != lVar6 >> 0x3f) {
    lVar6 = 0;
    do {
      puVar5 = *(undefined **)(lVar6 + 0x60 + lVar13);
      puVar14 = &DAT_18098bc73;
      if (puVar5 != (undefined *)0x0) {
        puVar14 = puVar5;
      }
      puVar5 = *(undefined **)(lVar6 + 8 + lVar13);
      puVar12 = &DAT_18098bc73;
      if (puVar5 != (undefined *)0x0) {
        puVar12 = puVar5;
      }
      FUN_180628040(param_5,&UNK_180a25e90,puVar12,puVar14);
      iVar10 = iVar10 + 1;
      lVar6 = lVar6 + 0x78;
      lVar13 = *param_3;
      lVar7 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_3[1] - lVar13),8) +
              (param_3[1] - lVar13);
      param_4 = lStack_300;
    } while ((ulonglong)(longlong)iVar10 < (ulonglong)((lVar7 >> 6) - (lVar7 >> 0x3f)));
  }
  puVar5 = &DAT_18098bc73;
  if (*(undefined **)(param_4 + 8) != (undefined *)0x0) {
    puVar5 = *(undefined **)(param_4 + 8);
  }
  plVar11 = param_1 + 0x88;
  uStack_2b0 = 0;
  uStack_2a8 = 0xf;
  puStack_2c0 = (undefined *)((ulonglong)puStack_2c0 & 0xffffffffffffff00);
  uStack_328 = 1;
  FUN_1803f45e0(&puStack_2c0,param_1[0x8a] + 1);
  if (0xf < (ulonglong)param_1[0x8b]) {
    plVar11 = (longlong *)*plVar11;
  }
  FUN_1803f5400(&puStack_2c0,plVar11,param_1[0x8a]);
  FUN_1803f5400(&puStack_2c0,&DAT_1809fcfb8,1);
  lVar13 = -1;
  do {
    lVar13 = lVar13 + 1;
  } while (puVar5[lVar13] != '\0');
  puVar4 = (ulonglong *)FUN_1803f5400(&puStack_2c0,puVar5);
  puStack_2e0 = (undefined *)*puVar4;
  uStack_2d8 = puVar4[1];
  uStack_2d0 = puVar4[2];
  uStack_2c8 = puVar4[3];
  puVar4[2] = 0;
  puVar4[3] = 0xf;
  *(undefined1 *)puVar4 = 0;
  uStack_328 = 3;
  FUN_1803f3a40(&uStack_2a0,&puStack_2e0,&DAT_180a0209c);
  uStack_328 = 1;
  if (0xf < uStack_2c8) {
    uVar8 = uStack_2c8 + 1;
    puVar5 = puStack_2e0;
    if (0xfff < uVar8) {
      uVar8 = uStack_2c8 + 0x28;
      puVar5 = *(undefined **)(puStack_2e0 + -8);
      if ((undefined *)0x1f < puStack_2e0 + (-8 - (longlong)puVar5)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(puVar5,uVar8);
  }
  uStack_2d0 = 0;
  uStack_2c8 = 0xf;
  puStack_2e0 = (undefined *)((ulonglong)puStack_2e0 & 0xffffffffffffff00);
  uStack_328 = 0;
  if (0xf < uStack_2a8) {
    uVar8 = uStack_2a8 + 1;
    if ((0xfff < uVar8) &&
       (uVar8 = uStack_2a8 + 0x28,
       (undefined *)0x1f < puStack_2c0 + (-8 - *(longlong *)(puStack_2c0 + -8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(0,uVar8);
  }
  uStack_2b0 = 0;
  uStack_2a8 = 0xf;
  puStack_2c0 = (undefined *)((ulonglong)puStack_2c0 & 0xffffffffffffff00);
  FUN_180627f00(param_5,&DAT_180a02080);
  puVar9 = &uStack_2a0;
  if (0xf < uStack_288) {
    puVar9 = (undefined1 *)CONCAT71(uStack_29f,uStack_2a0);
  }
  FUN_180627f00(param_5,puVar9);
  FUN_180627f00(param_5,&DAT_1809fc8e4);
  lVar13 = FUN_180624440(apuStack_278,lStack_2f8 + 0x60);
  puStack_2c0 = &UNK_180a3c3e0;
  uStack_2a8 = 0;
  puStack_2b8 = (undefined1 *)0x0;
  uStack_2b0 = uStack_2b0 & 0xffffffff00000000;
  FUN_1806277c0(&puStack_2c0,*(undefined4 *)(lVar13 + 0x10));
  if (0 < *(int *)(lVar13 + 0x10)) {
    puVar5 = &DAT_18098bc73;
    if (*(undefined **)(lVar13 + 8) != (undefined *)0x0) {
      puVar5 = *(undefined **)(lVar13 + 8);
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_2b8,puVar5,(longlong)(*(int *)(lVar13 + 0x10) + 1));
  }
  if ((*(longlong *)(lVar13 + 8) != 0) &&
     (uStack_2b0 = uStack_2b0 & 0xffffffff00000000, puStack_2b8 != (undefined1 *)0x0)) {
    *puStack_2b8 = 0;
  }
  puStack_2e0 = &UNK_180a3c3e0;
  uStack_2c8 = 0;
  uStack_2d8 = 0;
  uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
  uStack_328 = 8;
  uVar1 = *(uint *)(param_5 + 2);
  uVar8 = (ulonglong)uVar1;
  if (param_5[1] != 0) {
    FUN_1806277c0(&puStack_2e0,uVar8);
  }
  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uStack_2d8,param_5[1],uVar8);
  }
  uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
  if (uStack_2d8 != 0) {
    *(undefined1 *)(uVar8 + uStack_2d8) = 0;
  }
  uStack_2c8._4_4_ = *(uint *)((longlong)param_5 + 0x1c);
  if ((int)uStack_2b0 < 1) {
    FUN_18005d190(param_5,&puStack_2e0);
    uStack_328 = 0;
    puStack_2e0 = &UNK_180a3c3e0;
    if (uStack_2d8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_2d8 = 0;
    uStack_2c8 = (ulonglong)uStack_2c8._4_4_ << 0x20;
    puStack_2e0 = &UNK_18098bcb0;
    puStack_2c0 = &UNK_180a3c3e0;
    if (puStack_2b8 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_2b8 = (undefined1 *)0x0;
    uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
    puStack_2c0 = &UNK_18098bcb0;
    apuStack_278[0] = &UNK_18098bcb0;
    if (0xf < uStack_288) {
      uVar8 = uStack_288 + 1;
      lVar6 = CONCAT71(uStack_29f,uStack_2a0);
      lVar13 = lVar6;
      if (0xfff < uVar8) {
        uVar8 = uStack_288 + 0x28;
        lVar13 = *(longlong *)(lVar6 + -8);
        if (0x1f < (lVar6 - lVar13) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar13,uVar8);
    }
    uStack_290 = 0;
    uStack_288 = 0xf;
    uStack_2a0 = 0;
    ppuStack_2f0 = &puStack_320;
    puStack_320 = &UNK_180a3c3e0;
    if (puStack_318 == (undefined *)0x0) {
      puStack_318 = (undefined *)0x0;
      uStack_308 = uStack_308 & 0xffffffff00000000;
      puStack_320 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_348);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_1806277c0(&puStack_2e0,(int)uStack_2b0);
                    // WARNING: Subroutine does not return
  memcpy((uStack_2d0 & 0xffffffff) + uStack_2d8,puStack_2b8,(longlong)((int)uStack_2b0 + 1));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f2bc0(longlong param_1)
void FUN_1803f2bc0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined1 auStack_188 [32];
  undefined *puStack_168;
  longlong lStack_160;
  undefined4 uStack_158;
  ulonglong uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined4 uStack_138;
  ulonglong uStack_130;
  undefined *puStack_128;
  longlong lStack_120;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  longlong alStack_f0 [4];
  undefined4 uStack_d0;
  undefined1 uStack_c4;
  undefined1 auStack_a0 [80];
  undefined8 *puStack_50;
  undefined2 uStack_48;
  ulonglong uStack_38;
  
  uStack_108 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  uVar1 = *(undefined4 *)(param_1 + 0x574);
  puStack_148 = &UNK_180a3c3e0;
  uStack_130 = 0;
  puStack_140 = (undefined *)0x0;
  uStack_138 = 0;
  lVar2 = FUN_18004b100(&puStack_128);
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(lVar2 + 8) != (undefined *)0x0) {
    puVar4 = *(undefined **)(lVar2 + 8);
  }
  FUN_180628040(&puStack_148,&UNK_180a25ee0,puVar4);
  puStack_128 = &UNK_180a3c3e0;
  if (lStack_120 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_120 = 0;
  uStack_110 = 0;
  puStack_128 = &UNK_18098bcb0;
  FUN_180637560(&puStack_f8);
  uStack_48 = 1;
  uStack_d0 = 0;
  uStack_c4 = 0;
  puStack_f8 = &UNK_1809fe6d8;
  puVar4 = &DAT_18098bc73;
  if (puStack_140 != (undefined *)0x0) {
    puVar4 = puStack_140;
  }
  (**(code **)(alStack_f0[0] + 0x10))(alStack_f0,puVar4);
  puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 2) = 0;
  FUN_18062dee0(puVar3,puVar4,&DAT_1809fc7ec);
  puStack_50 = puVar3;
  if (puVar3[1] == 0) {
    uStack_48._0_1_ = 1;
  }
  else {
    uStack_48._0_1_ = 0;
    uStack_48._1_1_ = '\x01';
    puStack_168 = &UNK_180a3c3e0;
    uStack_150 = 0;
    lStack_160 = 0;
    uStack_158 = 0;
    FUN_180628040(&puStack_168,&UNK_180a25ef0,*(undefined4 *)(param_1 + 0x430),uVar1);
    if (*(int *)(param_1 + 0x434) != 0) {
      FUN_180628040(&puStack_168,&UNK_180a25ef8,*(undefined4 *)(param_1 + 0x434));
    }
    (**(code **)(puStack_f8 + 0x78))(&puStack_f8,&puStack_168);
    puStack_168 = &UNK_180a3c3e0;
    if (lStack_160 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_160 = 0;
    uStack_150 = uStack_150 & 0xffffffff00000000;
    puStack_168 = &UNK_18098bcb0;
  }
  puStack_f8 = &UNK_180a3cf50;
  if (uStack_48._1_1_ != '\0') {
    FUN_180639250(&puStack_f8);
  }
  puStack_100 = auStack_a0;
  _Mtx_destroy_in_situ(auStack_a0);
  FUN_1805065c0(&puStack_f8);
  puStack_148 = &UNK_180a3c3e0;
  if (puStack_140 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_140 = (undefined *)0x0;
  uStack_130 = uStack_130 & 0xffffffff00000000;
  puStack_148 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_188);
}






// 函数: void FUN_1803f2e40(char *param_1)
void FUN_1803f2e40(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_180067070(param_1 + 0x28);
    FUN_180067070(param_1 + 8);
  }
  return;
}






