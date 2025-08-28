#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part478.c - 7 个函数

// 函数: void FUN_1805238b0(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_1805238b0(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int32_t uVar8;
  float fVar9;
  int32_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint uVar15;
  int32_t uVar16;
  uint64_t uVar17;
  longlong lStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  int8_t auStack_50 [40];
  
  uStack_58 = 0xfffffffffffffffe;
  uVar5 = 0;
  uVar10 = 0;
  FUN_180507360(param_1,0,param_3,param_4,0);
  *(int32_t *)(param_1 + 0xa58) = 0xbf800000;
  *(longlong *)(param_1 + 0x8d8) = param_2;
  *(uint64_t *)(param_1 + 0x660) = *(uint64_t *)(param_2 + 0x18);
  FUN_18005c830(param_1 + 0x748);
  if ((*(int *)(param_1 + 0x18) != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))();
  }
  *(int32_t *)(param_1 + 0x18) = 0;
  if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
    plVar1 = *(longlong **)(param_1 + 0x8e0);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x38,8,3);
      *plVar1 = param_1;
      *(longlong **)(param_1 + 0x8e0) = plVar1;
    }
    plVar1[6] = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x8e0) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)(param_1 + 0x8e0) = 0;
  }
  *(longlong *)(param_1 + 0x130) = param_1;
  *(uint64_t *)(param_1 + 0x128) = *(uint64_t *)(param_1 + 0x8d8);
  func_0x0001805b0bf0(param_1 + 0x138,param_1);
  *(uint64_t *)(param_1 + 0x280) = 0;
  *(uint64_t *)(param_1 + 0x288) = 0;
  *(uint64_t *)(param_1 + 0x290) = 0;
  *(uint64_t *)(param_1 + 0x298) = 0;
  *(uint64_t *)(param_1 + 0x2b0) = 0;
  *(uint64_t *)(param_1 + 0x2b8) = 0;
  *(uint64_t *)(param_1 + 0x218) = 0x3f80000000000000;
  *(uint64_t *)(param_1 + 0x2a4) = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 0x2ac) = 0;
  *(int32_t *)(param_1 + 0x2c0) = 0xffffffff;
  *(int32_t *)(param_1 + 0x2a0) = 0;
  *(uint64_t *)(param_1 + 0x260) =
       *(uint64_t *)(&system_error_code + (longlong)*(int *)(param_1 + 0x268) * 8);
  func_0x000180590d40(*(uint64_t *)(param_1 + 0x20));
  plVar1 = *(longlong **)(param_1 + 0x5f0);
  *(uint64_t *)(param_1 + 0x5f0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int8_t *)(param_1 + 0x5e8) = 0;
  *(int8_t *)(param_1 + 0x418) = 0;
  *(uint64_t *)(param_1 + 0x45c) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x464) = 0;
  *(uint64_t *)(param_1 + 0x46c) = 0x3f80000000000000;
  *(uint64_t *)(param_1 + 0x474) = 0;
  *(uint64_t *)(param_1 + 0x47c) = 0;
  *(uint64_t *)(param_1 + 0x484) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x48c) = 0;
  *(uint64_t *)(param_1 + 0x494) = 0x3f80000000000000;
  *(uint64_t *)(param_1 + 0x41c) = *(uint64_t *)(param_1 + 0x45c);
  *(uint64_t *)(param_1 + 0x424) = *(uint64_t *)(param_1 + 0x464);
  *(uint64_t *)(param_1 + 0x42c) = *(uint64_t *)(param_1 + 0x46c);
  *(uint64_t *)(param_1 + 0x434) = *(uint64_t *)(param_1 + 0x474);
  *(int32_t *)(param_1 + 0x43c) = *(int32_t *)(param_1 + 0x47c);
  *(int32_t *)(param_1 + 0x440) = *(int32_t *)(param_1 + 0x480);
  *(int32_t *)(param_1 + 0x444) = *(int32_t *)(param_1 + 0x484);
  *(int32_t *)(param_1 + 0x448) = *(int32_t *)(param_1 + 0x488);
  *(int32_t *)(param_1 + 0x44c) = *(int32_t *)(param_1 + 0x48c);
  *(int32_t *)(param_1 + 0x450) = *(int32_t *)(param_1 + 0x490);
  *(int32_t *)(param_1 + 0x454) = *(int32_t *)(param_1 + 0x494);
  *(int32_t *)(param_1 + 0x458) = *(int32_t *)(param_1 + 0x498);
  *(int32_t *)(param_1 + 0x688) = 0xffffffff;
  FUN_18051aff0(param_1,1,param_2 + 0x87a948);
  *(int32_t *)(param_1 + 0x56c) = 0;
  *(int8_t *)(param_1 + 0x674) = 0xff;
  *(int32_t *)(param_1 + 0x980) = 0xffffffff;
  *(int32_t *)(param_1 + 0x740) = 0;
  *(int8_t *)(param_1 + 0x744) = 0;
  *(uint64_t *)(param_1 + 0x7dc) = 0;
  *(uint64_t *)(param_1 + 0x7e4) = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 0x7ec) = 0xffffffff;
  *(int32_t *)(param_1 + 0x890) = 0xffffffff;
  *(int8_t *)(param_1 + 0x984) = 0;
  *(int32_t *)(param_1 + 0x5a0) = 0;
  *(uint64_t *)(param_1 + 0x8e8) = 0;
  *(int32_t *)(param_1 + 0x58c) = 1;
  *(uint64_t *)(param_1 + 0x6b0) = 0;
  lVar4 = *(longlong *)(param_1 + 0x8f8);
  if (lVar4 != 0) {
    FUN_1808fc8a8(lVar4 + 8,0x1f8,5,FUN_18058f420);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar4);
  }
  *(uint64_t *)(param_1 + 0x8f8) = 0;
  lVar4 = *(longlong *)(param_1 + 0x900);
  uVar7 = uVar5;
  if (*(longlong *)(param_1 + 0x908) - lVar4 >> 3 != 0) {
    do {
      lVar4 = *(longlong *)(uVar5 + lVar4);
      if (lVar4 != 0) {
        FUN_18058f420(lVar4);
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar4);
      }
      *(uint64_t *)(uVar5 + *(longlong *)(param_1 + 0x900)) = 0;
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 8;
      lVar4 = *(longlong *)(param_1 + 0x900);
      uVar7 = (ulonglong)uVar6;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0x908) - lVar4 >> 3));
  }
  *(longlong *)(param_1 + 0x908) = lVar4;
  *(uint64_t *)(param_1 + 0x9d8) = 0;
  *(int32_t *)(param_1 + 0x568) = 0;
  *(uint64_t *)(param_1 + 0x988) = 0;
  *(uint64_t *)(param_1 + 0x990) = 0x7f7fffff00000000;
  *(int32_t *)(param_1 + 0x998) = 0;
  *(uint64_t *)(param_1 + 0x4c4) = 0;
  *(uint64_t *)(param_1 + 0x4cc) = 0;
  *(uint64_t *)(param_1 + 0x49c) = 0x3f80000000000000;
  *(int32_t *)(param_1 + 0x4a4) = 0;
  uVar8 = atan2f(0x80000000,0x3f800000);
  *(int32_t *)(param_1 + 0x4ac) = uVar8;
  *(int8_t *)(param_1 + 0x4d4) = 0;
  *(uint64_t *)(param_1 + 0x4b0) = 0;
  *(uint64_t *)(param_1 + 0x4b8) = 0;
  *(int32_t *)(param_1 + 0x4c0) = 0xffffffff;
  *(int32_t *)(param_1 + 0x5f8) = 0;
  *(uint64_t *)(param_1 + 0x608) = 0;
  *(int32_t *)(param_1 + 0x610) = 0;
  *(int32_t *)(param_1 + 0x614) = 0x3f800000;
  *(int32_t *)(param_1 + 0x618) = 0;
  *(int32_t *)(param_1 + 0x61c) = 0;
  *(int16_t *)(param_1 + 0x5fc) = 0;
  *(int32_t *)(param_1 + 0x600) = 0xbf800000;
  if (*(longlong *)(param_1 + 0x728) != 0) {
    FUN_18052adc0(param_1);
  }
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    *(uint64_t *)(*(longlong *)(param_1 + 0x6d8) + 0x940) = 0;
    *(uint64_t *)(*(longlong *)(param_1 + 0x6d8) + 0x948) = 0;
    lVar4 = *(longlong *)(param_1 + 0x6d8);
    if (*(char *)(lVar4 + 0x8be) != '\0') {
      FUN_18053fcb0(lVar4,1);
      uStack_60 = *(int32_t *)(lVar4 + 0x938);
      lStack_68 = lVar4;
      FUN_1804dd4d0(*(longlong *)(lVar4 + 0x930) + 0x2b58,auStack_50,&lStack_68);
    }
    plVar1 = *(longlong **)(param_1 + 0x6d8);
    *(uint64_t *)(param_1 + 0x6d8) = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  *(int8_t *)(param_1 + 0x9f0) = 0;
  *(int32_t *)(param_1 + 0x9e0) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x9e4) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x9e8) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x9ec) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x570) = 1;
  *(int8_t *)(param_1 + 0x604) = 1;
  FUN_180532af0(*(uint64_t *)(param_1 + 0x6e0));
  *(uint64_t *)(param_1 + 0x6e0) = 0;
  FUN_18052e450(param_1,0xffffffff,0,0);
  FUN_18052e130(param_1,0xffffffff);
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x2210,8,8);
  uVar2 = FUN_1805b8300(uVar2,param_1);
  *(uint64_t *)(param_1 + 0x6e0) = uVar2;
  FUN_1805b8920(uVar2);
  *(uint64_t *)(param_1 + 0x4d8) = 0;
  *(uint64_t *)(param_1 + 0x4e0) = 0;
  *(uint64_t *)(param_1 + 0x4e8) = 0;
  *(int32_t *)(param_1 + 0x4f8) = 0xbf800000;
  *(uint64_t *)(param_1 + 0x510) = 7;
  *(int32_t *)(param_1 + 0x518) = 0;
  *(uint64_t *)(param_1 + 0x4f0) = 0;
  *(int32_t *)(param_1 + 0x500) = 0xffffffff;
  *(uint64_t *)(param_1 + 0x504) = 0xfffffffffffffffb;
  *(int32_t *)(param_1 + 0x50c) = 0xffffffff;
  *(int32_t *)(param_1 + 0x4fc) = 0;
  *(int8_t *)(param_1 + 0x51c) = 0;
  *(uint64_t *)(param_1 + 0x574) = 0;
  *(uint64_t *)(param_1 + 0x57c) = 0;
  *(int32_t *)(param_1 + 0x584) = 0;
  *(int8_t *)(param_1 + 0x588) = 0;
  *(uint64_t *)(param_1 + 0x9c8) = 0x461c400047c35000;
  *(uint64_t *)(param_1 + 0x9d0) = 0x7f7fffff47c35000;
  if ((*(int *)(param_1 + 0x720) != 0) &&
     (*(int32_t *)(param_1 + 0x720) = 0, *(char *)(param_1 + 0x984) != '\0')) {
    *(int32_t *)(*(longlong *)(param_1 + 0x738) + 0x1a0) = 0;
  }
  *(int32_t *)(param_1 + 0x920) = 0;
  uVar11 = 0;
  uVar13 = 0x7fc000007fc00000;
  uVar17 = 0x7fc000007fc00000;
  uVar6 = 0;
  uVar15 = 0;
  uVar12 = 0;
  uVar14 = 0;
  puVar3 = (uint64_t *)FUN_1803975b0();
  uVar2 = *puVar3;
  *(uint64_t *)(param_1 + 0x928) = uVar11;
  *(uint64_t *)(param_1 + 0x940) = uVar13;
  *(uint64_t *)(param_1 + 0x948) = uVar17;
  *(ulonglong *)(param_1 + 0x950) = (ulonglong)uVar6;
  *(ulonglong *)(param_1 + 0x958) = (ulonglong)uVar15;
  *(uint64_t *)(param_1 + 0x930) = uVar12;
  *(uint64_t *)(param_1 + 0x938) = uVar14;
  *(uint64_t *)(param_1 + 0x960) = uVar2;
  *(int32_t *)(param_1 + 0x968) = 0;
  *(uint64_t *)(param_1 + 0x970) =
       *(uint64_t *)(&system_error_code + (longlong)*(int *)(param_1 + 0x978) * 8);
  uVar17 = 0;
  uVar2 = 0;
  uVar14 = 0x7fc000007fc00000;
  uVar13 = 0x7fc000007fc00000;
  uVar8 = 0;
  uVar16 = 0;
  uVar11 = 0;
  uVar12 = 0;
  FUN_1803975b0();
  *(int32_t *)(param_1 + 0x920) = 0;
  *(uint64_t *)(param_1 + 0x6b8) =
       *(uint64_t *)(&system_error_code + (longlong)*(int *)(param_1 + 0x6c0) * 8);
  *(longlong *)(param_1 + 0x6c8) =
       *(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x6d0) * 8) + 0x5af310800000;
  _DAT_180bf65b8 = _DAT_180bf65b8 << 0xd ^ _DAT_180bf65b8;
  _DAT_180bf65b8 = _DAT_180bf65b8 >> 0x11 ^ _DAT_180bf65b8;
  _DAT_180bf65b8 = _DAT_180bf65b8 << 5 ^ _DAT_180bf65b8;
  fVar9 = (float)(_DAT_180bf65b8 - 1) * -1.1641532e-09;
  if (0.0 <= fVar9) {
    fVar9 = 0.0;
  }
  *(longlong *)(param_1 + 0x5d8) =
       *(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x5e0) * 8) -
       (longlong)(fVar9 * 100000.0);
  *(uint64_t *)(param_1 + 0x710) =
       *(uint64_t *)(&system_error_code + (longlong)*(int *)(param_1 + 0x718) * 8);
  *(uint64_t *)(param_1 + 0x678) = 0;
  *(int8_t *)(param_1 + 0xa50) = 0;
  *(int32_t *)(param_1 + 0x670) = 0xffffffff;
  *(uint64_t *)(param_1 + 0x520) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x528) = 0;
  *(uint64_t *)(param_1 + 0x530) = 0x3f80000000000000;
  *(uint64_t *)(param_1 + 0x538) = 0;
  *(int32_t *)(param_1 + 0x540) = 0;
  *(int32_t *)(param_1 + 0x544) = 0;
  *(int32_t *)(param_1 + 0x548) = 0x3f800000;
  *(int32_t *)(param_1 + 0x54c) = 0;
  *(int32_t *)(param_1 + 0x550) = 0;
  *(int32_t *)(param_1 + 0x554) = 0;
  *(int32_t *)(param_1 + 0x558) = 0;
  *(int32_t *)(param_1 + 0x55c) = 0x3f800000;
  *(longlong *)(param_1 + 0x690) = param_1;
  *(uint64_t *)(param_1 + 0x6a0) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x6a8) = 0;
  *(uint64_t *)(param_1 + 0xa40) = 0;
  *(uint64_t *)(param_1 + 0xa48) = 0;
  if (*(longlong *)(param_1 + 0x730) == 0) {
    *(uint64_t *)(param_1 + 0x730) = 0;
    lVar4 = *(longlong *)(param_1 + 0x728);
    if (lVar4 != 0) {
      if (*(longlong **)(lVar4 + 0x5e0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar4 + 0x5e0) + 0x38))();
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar4);
    }
    *(uint64_t *)(param_1 + 0x728) = 0;
    lVar4 = *(longlong *)(param_1 + 0x9a0);
    if (lVar4 == 0) {
      *(uint64_t *)(param_1 + 0x9a0) = 0;
      *(uint64_t *)(param_1 + 0x9b0) = *(uint64_t *)(param_1 + 0x9a8);
      *(int16_t *)(param_1 + 0x985) = 0x100;
      *(uint64_t *)(param_1 + 0x680) = 0;
      *(uint64_t *)(param_1 + 0xa20) = 0;
      *(uint64_t *)(param_1 + 0xa28) = 0;
      *(uint64_t *)(param_1 + 0xa30) = 0;
      *(uint64_t *)(param_1 + 0xa38) = 0;
      *(uint64_t *)(param_1 + 0x8f0) = 0;
      *(int32_t *)(param_1 + 0x708) = 0x41400000;
      if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
        *(int8_t *)(param_1 + 0x70c) = 1;
      }
      else {
        *(int8_t *)(param_1 + 0x70c) = 0;
      }
      return;
    }
    FUN_1808fc8a8(lVar4,0x10,0x40,FUN_180534590,uVar10,uVar2,uVar11,uVar12,uVar14,uVar13,uVar8,
                  uVar16,uVar17);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar4);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180524260(longlong param_1)
void FUN_180524260(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((((*(uint *)(param_1 + 0x56c) & 0x4000) != 0) && (_DAT_180c92514 != 1)) &&
     (_DAT_180c92514 != 4)) {
    lVar3 = 0x9e0;
    lVar4 = 0x9e8;
    do {
      iVar1 = *(int *)(lVar3 + *(longlong *)(param_1 + 0x8f8));
      if ((iVar1 != -1) &&
         (lVar2 = *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x8f8)),
         (*(uint *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x58 + *(longlong *)(lVar2 + 0xd0)) &
         0x2000) != 0)) {
        FUN_18050c740(param_1,iVar1,8);
      }
      lVar3 = lVar3 + 4;
      lVar4 = lVar4 + 8;
    } while (lVar3 < 0x9e8);
  }
  return;
}





// 函数: void FUN_180524289(void)
void FUN_180524289(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RSI;
  longlong lVar3;
  
  lVar2 = 0x9e0;
  lVar3 = 0x9e8;
  do {
    if ((*(int *)(lVar2 + *(longlong *)(unaff_RSI + 0x8f8)) != -1) &&
       (lVar1 = *(longlong *)(lVar3 + *(longlong *)(unaff_RSI + 0x8f8)),
       (*(uint *)((longlong)*(int *)(lVar1 + 0xf0) * 0xa0 + 0x58 + *(longlong *)(lVar1 + 0xd0)) &
       0x2000) != 0)) {
      FUN_18050c740();
    }
    lVar2 = lVar2 + 4;
    lVar3 = lVar3 + 8;
  } while (lVar2 < 0x9e8);
  return;
}





// 函数: void FUN_1805242fe(void)
void FUN_1805242fe(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180524310(longlong param_1)
void FUN_180524310(longlong param_1)

{
  char cVar1;
  int32_t uVar2;
  int8_t uVar3;
  int *piVar4;
  longlong lVar5;
  uint64_t uVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  int32_t uStack_38;
  int iStack_34;
  uint64_t uStack_30;
  int32_t uStack_28;
  uint64_t uStack_24;
  uint64_t uStack_1c;
  int32_t uStack_14;
  int32_t uStack_10;
  int8_t uStack_c;
  
  if ((*(uint *)(param_1 + 0x56c) >> 0xb & 1) == 0) {
    uVar2 = 0xffffffff;
    fVar8 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x20);
    fVar9 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x1c);
    uVar6 = 2;
    if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x590) + 0x2590) + 0x10) < 5) {
      uVar6 = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x564) != -1) {
      uVar2 = *(int32_t *)
               (*(longlong *)
                 ((longlong)*(int *)(param_1 + 0x564) * 0xa60 + 0x3638 +
                 *(longlong *)(param_1 + 0x8d8)) + 0x20);
    }
    iStack_34 = FUN_180557b40(*(uint64_t *)(param_1 + 0x598),uVar2,0,uVar6,0,0,
                              1.0 < fVar9 * fVar9 + fVar8 * fVar8);
    if (*(int *)(*(longlong *)
                  ((longlong)*(int *)(*(longlong *)(param_1 + 0x590) + 0xac) * 0xe0 + 0x78 +
                  _DAT_180c95fb0) + (longlong)iStack_34 * 8) < 0) {
      return;
    }
    if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
      FUN_1805ed8d0(*(uint64_t *)(param_1 + 0x8e0));
    }
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_14 = 0x3ecccccd;
    uStack_10 = 0x1000000;
    uStack_24 = 0x3f80000000000000;
    uStack_1c = 0xbe4ccccdbe4ccccd;
    uStack_c = 0;
    uStack_38 = 0;
    goto LAB_18052490a;
  }
  lVar5 = 0;
  if ((((*(uint *)(param_1 + 0x56c) >> 0xe & 1) != 0) && (_DAT_180c92514 != 1)) &&
     (_DAT_180c92514 != 4)) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9e8);
    piVar4 = (int *)(*(longlong *)(param_1 + 0x8f8) + 0x9e0);
    do {
      if ((*piVar4 != -1) &&
         ((*(uint *)((longlong)*(int *)(*plVar7 + 0xf0) * 0xa0 + 0x58 +
                    *(longlong *)(*plVar7 + 0xd0)) & 0x2000) != 0)) {
        FUN_180524260(param_1);
        break;
      }
      lVar5 = lVar5 + 1;
      piVar4 = piVar4 + 1;
      plVar7 = plVar7 + 1;
    } while (lVar5 < 2);
  }
  if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
    FUN_1805ed8d0(*(uint64_t *)(param_1 + 0x8e0));
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  cVar1 = func_0x000180522f60();
  if (cVar1 != '\0') {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(int32_t *)(lVar5 + 0x34));
  }
  if (-0.6 <= *(float *)(lVar5 + 0x20)) {
    if (0.7 < *(float *)(lVar5 + 0x20)) {
      fVar8 = (float)atan2f(*(uint *)(lVar5 + 0x1c) ^ 0x80000000,*(int32_t *)(lVar5 + 0x20));
      if (0.5 <= ABS(fVar8)) {
        cVar1 = (fVar8 < 0.0) + '\x03';
      }
      else {
        cVar1 = '\x02';
      }
      uStack_24 = 0x3f80000000000000;
      uStack_1c = 0xbe4ccccdbe4ccccd;
      uStack_30 = 0;
      uStack_14 = 0x3ecccccd;
      uStack_28 = 0;
      uStack_10 = 0x1000000;
      uStack_c = 0;
      uStack_38 = 0;
      uVar2 = func_0x00018052dcc0(*(int32_t *)(lVar5 + 0x20),*(int32_t *)(lVar5 + 0x1c),
                                  *(int8_t *)(*(longlong *)(param_1 + 0x590) + 0x34bc),cVar1);
      goto LAB_18052449f;
    }
    fVar8 = *(float *)(lVar5 + 0x1c);
    uVar6 = *(uint64_t *)(param_1 + 0x598);
    uStack_30 = 0;
    uStack_10 = 0x1000000;
    uStack_c = 0;
    uStack_38 = 0;
    uStack_28 = 0;
    uStack_14 = 0x3ecccccd;
    uStack_24 = 0x3f80000000000000;
    uStack_1c = 0xbe4ccccdbe4ccccd;
    fVar9 = *(float *)(lVar5 + 0x20) * *(float *)(lVar5 + 0x20);
    if (fVar8 < -0.8) {
      uVar3 = 1.0 < fVar8 * fVar8 + fVar9;
      uVar2 = func_0x00018052dcc0(param_1);
      iStack_34 = FUN_180557b40(uVar6,uVar2,0,0,0,0,uVar3);
      FUN_18051ec50(param_1,&uStack_38);
      if (*(int *)(param_1 + 0x1fc) == 2) {
        return;
      }
      if (*(int *)(param_1 + 0x1fc) == 5) {
        return;
      }
      func_0x000180525350(param_1,1);
      return;
    }
    if (0.8 < fVar8) {
      uVar3 = 1.0 < fVar8 * fVar8 + fVar9;
      uVar2 = func_0x00018052dcc0(param_1);
      iStack_34 = FUN_180557b40(uVar6,uVar2,0,1,0,0,uVar3);
      FUN_18051ec50(param_1,&uStack_38);
      if (*(int *)(param_1 + 0x1fc) == 2) {
        return;
      }
      if (*(int *)(param_1 + 0x1fc) == 5) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x590);
      if (lVar5 == 0) {
        return;
      }
      if ((*(uint *)(param_1 + 0x56c) & 0x800) == 0) {
        return;
      }
      if (*(char *)(lVar5 + 0x34bc) == '\0') {
        return;
      }
      *(int8_t *)(lVar5 + 0x34bc) = 0;
      return;
    }
    uVar2 = func_0x00018052dcc0(param_1);
  }
  else {
    uStack_28 = 0;
    uStack_14 = 0x3ecccccd;
    uStack_24 = 0x3f80000000000000;
    uStack_1c = 0xbe4ccccdbe4ccccd;
    uStack_30 = 0;
    uStack_10 = 0x1000000;
    uStack_c = 0;
    uStack_38 = 0;
    if (*(int *)(param_1 + 0x564) == -1) {
      uVar2 = 0xffffffff;
      uStack_24 = 0x3f80000000000000;
      uStack_1c = 0xbe4ccccdbe4ccccd;
    }
    else {
      uVar2 = *(int32_t *)
               (*(longlong *)
                 ((longlong)*(int *)(param_1 + 0x564) * 0xa60 + 0x3638 +
                 *(longlong *)(param_1 + 0x8d8)) + 0x20);
    }
LAB_18052449f:
    uVar6 = *(uint64_t *)(param_1 + 0x598);
  }
  iStack_34 = FUN_180557b40(uVar6,uVar2,0);
LAB_18052490a:
  FUN_18051ec50(param_1,&uStack_38);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180524930(longlong param_1,int8_t param_2,char param_3)
void FUN_180524930(longlong param_1,int8_t param_2,char param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint64_t *puVar6;
  longlong lVar7;
  uint64_t *puVar8;
  int32_t uVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  uint64_t *puVar13;
  longlong lVar14;
  longlong lVar15;
  int iStackX_18;
  int32_t uStack_58;
  int iStack_54;
  uint64_t uStack_50;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int8_t uStack_2c;
  
  if (param_3 == '\0') {
    lVar5 = *(longlong *)(param_1 + 0x590);
    iVar11 = *(int *)(lVar5 + 0x2450);
    lVar14 = (longlong)iVar11;
    if (((iVar11 == -1) || (*(int *)(lVar14 * 0x68 + 0x58 + _DAT_180c96150) < 0x18)) ||
       (0x1b < *(int *)(lVar14 * 0x68 + 0x58 + _DAT_180c96150))) {
      if (((*(uint *)(param_1 + 0x56c) & 0x800) == 0) || (*(char *)(lVar5 + 0x34bc) == '\0')) {
        iStackX_18._0_1_ = 0;
      }
      else {
        iStackX_18._0_1_ = 1;
      }
      lVar15 = *(longlong *)(param_1 + 0x598);
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x20);
      fVar2 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x1c);
      bVar12 = 1.0 < fVar2 * fVar2 + fVar1 * fVar1;
      if (*(int *)(param_1 + 0x564) == -1) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = *(int32_t *)
                 (*(longlong *)
                   ((longlong)*(int *)(param_1 + 0x564) * 0xa60 + 0x3638 +
                   *(longlong *)(param_1 + 0x8d8)) + 0x20);
      }
      iVar11 = -1;
    }
    else {
      lVar15 = *(longlong *)(param_1 + 0x598);
      puVar6 = *(uint64_t **)(lVar15 + 0xf0);
      piVar10 = (int *)*puVar6;
      puVar13 = puVar6;
      if (piVar10 == (int *)0x0) {
        piVar10 = (int *)puVar6[1];
        puVar8 = puVar6;
        while (puVar13 = puVar8 + 1, piVar10 == (int *)0x0) {
          piVar10 = (int *)puVar8[2];
          puVar8 = puVar13;
        }
      }
      while (piVar10 != (int *)puVar6[*(longlong *)(lVar15 + 0xf8)]) {
        iVar3 = piVar10[1];
        if ((iVar11 == iVar3) ||
           (((lVar14 != -1 && (iVar3 != -1)) &&
            ((lVar7 = *(longlong *)((longlong)*(int *)(lVar5 + 0xac) * 0xe0 + _DAT_180c95fb0 + 0x78)
             , iVar4 = *(int *)(lVar7 + 4 + lVar14 * 8),
             iVar4 == *(int *)(lVar7 + 4 + (longlong)iVar3 * 8) && (iVar4 != -1)))))) {
          iStackX_18._0_1_ = (byte)*piVar10 & 1;
          iVar11 = (*piVar10 >> 1 & 7U) - 1;
          goto LAB_180524a5a;
        }
        piVar10 = *(int **)(piVar10 + 2);
        while (piVar10 == (int *)0x0) {
          puVar8 = puVar13 + 1;
          puVar13 = puVar13 + 1;
          piVar10 = (int *)*puVar8;
        }
      }
      iVar11 = iStackX_18;
LAB_180524a5a:
      if (((*(uint *)(param_1 + 0x56c) & 0x800) != 0) && (iVar11 == -1)) {
                    // WARNING: Subroutine does not return
        FUN_1808fd400(*(int32_t *)(*(longlong *)(param_1 + 0x20) + 0x34));
      }
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x20);
      fVar2 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x1c);
      bVar12 = 1.0 < fVar2 * fVar2 + fVar1 * fVar1;
      if (*(int *)(param_1 + 0x564) == -1) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = *(int32_t *)
                 (*(longlong *)
                   ((longlong)*(int *)(param_1 + 0x564) * 0xa60 + 0x3638 +
                   *(longlong *)(param_1 + 0x8d8)) + 0x20);
      }
    }
    iStack_54 = FUN_180557b40(lVar15,uVar9,2,iVar11,param_2,(byte)iStackX_18,bVar12);
    if (iStack_54 != -1) {
      uStack_48 = 0;
      uStack_34 = 0x3ecccccd;
      uStack_50 = 0;
      uStack_30 = 0x1000000;
      uStack_2c = 0;
      uStack_58 = 0;
      uStack_44 = 0;
      uStack_40 = 0x3f800000;
      uStack_3c = 0xbe4ccccd;
      uStack_38 = 0xbe4ccccd;
      if ((_DAT_180c92514 == 1) || (_DAT_180c92514 == 4)) {
        uStack_50 = 0x2000;
      }
      FUN_18051ec50(param_1,&uStack_58);
      if ((*(uint *)(param_1 + 0x56c) & 0x800) == 0) {
        return;
      }
      if (*(byte *)(*(longlong *)(param_1 + 0x590) + 0x34bc) == (byte)iStackX_18) {
        return;
      }
      func_0x000180525350(param_1,(byte)iStackX_18);
      return;
    }
  }
  uStack_30 = 0x1000000;
  uStack_48 = 0;
  uStack_58 = 0;
  uStack_34 = 0x3ecccccd;
  uStack_44 = 0;
  uStack_40 = 0x3f800000;
  uStack_3c = 0xbe4ccccd;
  uStack_38 = 0xbe4ccccd;
  uStack_2c = 0;
  iStack_54 = 0xffffffff;
  uStack_50 = 0x2021;
  FUN_18051ec50(param_1,&uStack_58);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180524955(longlong param_1)
void FUN_180524955(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint64_t *puVar3;
  longlong lVar4;
  uint64_t *puVar5;
  int iVar6;
  int *piVar7;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint64_t *puVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  int32_t uVar12;
  
  iVar6 = *(int *)(param_1 + 0x2450);
  lVar9 = (longlong)iVar6;
  if (((iVar6 == -1) || (*(int *)(lVar9 * 0x68 + 0x58 + _DAT_180c96150) < 0x18)) ||
     (0x1b < *(int *)(lVar9 * 0x68 + 0x58 + _DAT_180c96150))) {
    if (((*(uint *)(unaff_RSI + 0x56c) & 0x800) == 0) || (*(char *)(param_1 + 0x34bc) == '\0')) {
      bVar10 = 0;
    }
    else {
      bVar10 = 1;
    }
    lVar11 = *(longlong *)(unaff_RSI + 0x598);
    if (*(int *)(unaff_RSI + 0x564) == -1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = *(int32_t *)
                (*(longlong *)
                  ((longlong)*(int *)(unaff_RSI + 0x564) * 0xa60 + 0x3638 +
                  *(longlong *)(unaff_RSI + 0x8d8)) + 0x20);
    }
    iVar6 = -1;
  }
  else {
    lVar11 = *(longlong *)(unaff_RSI + 0x598);
    puVar3 = *(uint64_t **)(lVar11 + 0xf0);
    piVar7 = (int *)*puVar3;
    puVar8 = puVar3;
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)puVar3[1];
      puVar5 = puVar3;
      while (puVar8 = puVar5 + 1, piVar7 == (int *)0x0) {
        piVar7 = (int *)puVar5[2];
        puVar5 = puVar8;
      }
    }
    while (piVar7 != (int *)puVar3[*(longlong *)(lVar11 + 0xf8)]) {
      iVar1 = piVar7[1];
      if ((iVar6 == iVar1) ||
         (((lVar9 != -1 && (iVar1 != -1)) &&
          ((lVar4 = *(longlong *)((longlong)*(int *)(param_1 + 0xac) * 0xe0 + _DAT_180c95fb0 + 0x78)
           , iVar2 = *(int *)(lVar4 + 4 + lVar9 * 8),
           iVar2 == *(int *)(lVar4 + 4 + (longlong)iVar1 * 8) && (iVar2 != -1)))))) {
        bVar10 = (byte)*piVar7 & 1;
        iVar6 = (*piVar7 >> 1 & 7U) - 1;
        goto LAB_180524a5a;
      }
      piVar7 = *(int **)(piVar7 + 2);
      while (piVar7 == (int *)0x0) {
        puVar5 = puVar8 + 1;
        puVar8 = puVar8 + 1;
        piVar7 = (int *)*puVar5;
      }
    }
    bVar10 = *(byte *)(unaff_RBP + 0x38);
    iVar6 = *(int *)(unaff_RBP + 0x38);
LAB_180524a5a:
    if (((*(uint *)(unaff_RSI + 0x56c) & 0x800) != 0) && (iVar6 == -1)) {
                    // WARNING: Subroutine does not return
      FUN_1808fd400(*(int32_t *)(*(longlong *)(unaff_RSI + 0x20) + 0x34));
    }
    if (*(int *)(unaff_RSI + 0x564) == -1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = *(int32_t *)
                (*(longlong *)
                  ((longlong)*(int *)(unaff_RSI + 0x564) * 0xa60 + 0x3638 +
                  *(longlong *)(unaff_RSI + 0x8d8)) + 0x20);
    }
  }
  iVar6 = FUN_180557b40(lVar11,uVar12,2,iVar6);
  if (iVar6 == -1) {
    *(int32_t *)(unaff_RBP + -0x10) = 0x1000000;
    *(int32_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x38) = 0;
    *(int32_t *)(unaff_RBP + -0x14) = 0x3ecccccd;
    *(int32_t *)(unaff_RBP + -0x24) = 0;
    *(int32_t *)(unaff_RBP + -0x20) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0x1c) = 0xbe4ccccd;
    *(int32_t *)(unaff_RBP + -0x18) = 0xbe4ccccd;
    *(int8_t *)(unaff_RBP + -0xc) = 0;
    *(int32_t *)(unaff_RBP + -0x34) = 0xffffffff;
    *(uint64_t *)(unaff_RBP + -0x30) = 0x2021;
    FUN_18051ec50(0x3ecccccd,unaff_RBP + -0x38);
  }
  else {
    *(int *)(unaff_RBP + -0x34) = iVar6;
    iVar6 = _DAT_180c92514;
    *(int32_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x14) = 0x3ecccccd;
    *(uint64_t *)(unaff_RBP + -0x30) = 0;
    *(int32_t *)(unaff_RBP + -0x10) = 0x1000000;
    *(int8_t *)(unaff_RBP + -0xc) = 0;
    *(int32_t *)(unaff_RBP + -0x38) = 0;
    *(int32_t *)(unaff_RBP + -0x24) = 0;
    *(int32_t *)(unaff_RBP + -0x20) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0x1c) = 0xbe4ccccd;
    *(int32_t *)(unaff_RBP + -0x18) = 0xbe4ccccd;
    if ((iVar6 == 1) || (iVar6 == 4)) {
      *(uint64_t *)(unaff_RBP + -0x30) = 0x2000;
    }
    uVar12 = FUN_18051ec50(0x3ecccccd,unaff_RBP + -0x38);
    if (((*(uint *)(unaff_RSI + 0x56c) & 0x800) != 0) &&
       (*(byte *)(*(longlong *)(unaff_RSI + 0x590) + 0x34bc) != bVar10)) {
      func_0x000180525350(uVar12,bVar10);
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



