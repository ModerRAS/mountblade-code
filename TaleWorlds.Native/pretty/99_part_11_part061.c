#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_11_part061.c - 10 个函数

// 函数: void FUN_1807bf5f8(void)
void FUN_1807bf5f8(void)

{
  uint64_t *puVar1;
  code *pcVar2;
  int in_EAX;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong unaff_RBP;
  longlong unaff_RDI;
  int iVar8;
  ulonglong unaff_R14;
  
  *(int *)(unaff_RDI + 0x3c8) = in_EAX;
  if ((in_EAX < 1) || (0x20 < *(int *)(unaff_RDI + 0x3c8))) {
    *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) =
         *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
  }
  else {
    iVar3 = FUN_180772fe0();
    if (iVar3 == 0) {
      iVar3 = FUN_18076a440(*(uint64_t *)(unaff_RDI + 0x170),0,0);
      if (iVar3 == 0) {
        *(ulonglong *)(unaff_RDI + 0x3d0) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x3d8) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x3e0) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 1000) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x3f0) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x3f8) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x400) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x408) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x410) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x418) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x420) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x428) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x430) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x438) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x440) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x448) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x450) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x458) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x460) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x468) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x470) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x478) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x480) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x488) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x490) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x498) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x4a0) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x4a8) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x4b0) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x4b8) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x4c0) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x4c8) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x4d0) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x4d8) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x4e0) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x4e8) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x4f0) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x4f8) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x500) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x508) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x510) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x518) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x520) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x528) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x530) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x538) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x540) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x548) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x550) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x558) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x560) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x568) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x570) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x578) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x580) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x588) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x590) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x598) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x5a0) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x5a8) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x5b0) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x5b8) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x5c0) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x5c8) = unaff_R14;
        *(ulonglong *)(unaff_RDI + 0x278) = unaff_R14;
        *(int32_t *)(unaff_RDI + 0xbd8) = 0x3f4ccccd;
        *(int32_t *)(unaff_RDI + 0xbd4) = 0x3f800000;
        *(int8_t *)(unaff_RDI + 0xbea) = 1;
        *(int32_t *)(unaff_RDI + 0x8fc) = 0x1f;
        *(int32_t *)(unaff_RDI + 0x860) = 6;
        *(int32_t *)(unaff_RDI + 0x864) = 0x7d;
        iVar8 = (int)unaff_R14;
        *(int *)(unaff_RDI + 0x8f0) = iVar8;
        *(int *)(unaff_RDI + 0xbd0) = iVar8;
        iVar3 = FUN_180769ed0(*(uint64_t *)(unaff_RDI + 0x170),unaff_RDI + 0x178,1);
        if (iVar3 == 0) {
          lVar4 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                *(int *)(unaff_RDI + 0x8fc) << 3,&unknown_var_7040_ptr,0x542,
                                unaff_R14 & 0xffffffff);
          *(longlong *)(unaff_RDI + 0x848) = lVar4;
          if (lVar4 != 0) {
            if (iVar8 < *(int *)(unaff_RDI + 0x8fc)) {
              *(longlong *)(unaff_R14 + *(longlong *)(unaff_RDI + 0x848)) =
                   unaff_RDI + 0xc20 + (longlong)iVar8 * 0x38;
              puVar1 = *(uint64_t **)(unaff_R14 + *(longlong *)(unaff_RDI + 0x848));
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1[2] = 0;
              puVar1[3] = 0;
              puVar1[4] = 0;
              puVar1[5] = 0;
              puVar1[6] = 0;
              iVar3 = FUN_180769ed0(*(uint64_t *)(unaff_RDI + 0x170),unaff_RBP + 0xb0,1,0x16);
              if (iVar3 == 0) {
                uVar7 = unaff_R14 & 0xffffffff;
                uVar5 = unaff_R14;
                do {
                  if (*(char *)(unaff_RBP + 0xb0 + uVar5) < ' ') {
                    if (0x15 < uVar5) {
                      FUN_1808fcdc8(uVar7,0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    *(int8_t *)(unaff_RBP + 0xb0 + uVar5) = 0;
                  }
                  uVar6 = (int)uVar7 + 1;
                  uVar7 = (ulonglong)uVar6;
                  uVar5 = uVar5 + 1;
                } while (uVar6 < 0x16);
                    // WARNING: Subroutine does not return
                FUN_18076b390(unaff_RBP + 0xd0,0x100,&unknown_var_5872_ptr,unaff_R14 & 0xffffffff);
              }
              *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) =
                   *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
            }
            else {
              iVar3 = FUN_1807697a0(*(uint64_t *)(unaff_RDI + 0x170),unaff_RDI + 0x8ec);
              lVar4 = *(longlong *)(unaff_RDI + 0x170);
              if (iVar3 == 0) {
                iVar3 = FUN_180769720(lVar4,0);
                if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
                  memset(unaff_RDI + 0x290,0,0x100);
                }
                *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) =
                     *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
              }
              else {
                *(uint *)(lVar4 + 0x194) = *(uint *)(lVar4 + 0x194) & 0xfffffffb;
              }
            }
          }
        }
        else {
          *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) =
               *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
        }
      }
      else {
        *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) =
             *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1d0) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807bf683(void)
void FUN_1807bf683(void)

{
  uint64_t *puVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong unaff_RBP;
  longlong unaff_RDI;
  int iVar8;
  ulonglong unaff_R14;
  
  *(ulonglong *)(unaff_RDI + 0x3d0) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x3d8) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x3e0) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 1000) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x3f0) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x3f8) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x400) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x408) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x410) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x418) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x420) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x428) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x430) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x438) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x440) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x448) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x450) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x458) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x460) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x468) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x470) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x478) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x480) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x488) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x490) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x498) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x4a0) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x4a8) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x4b0) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x4b8) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x4c0) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x4c8) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x4d0) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x4d8) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x4e0) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x4e8) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x4f0) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x4f8) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x500) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x508) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x510) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x518) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x520) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x528) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x530) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x538) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x540) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x548) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x550) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x558) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x560) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x568) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x570) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x578) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x580) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x588) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x590) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x598) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x5a0) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x5a8) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x5b0) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x5b8) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x5c0) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x5c8) = unaff_R14;
  *(ulonglong *)(unaff_RDI + 0x278) = unaff_R14;
  *(int32_t *)(unaff_RDI + 0xbd8) = 0x3f4ccccd;
  *(int32_t *)(unaff_RDI + 0xbd4) = 0x3f800000;
  *(int8_t *)(unaff_RDI + 0xbea) = 1;
  *(int32_t *)(unaff_RDI + 0x8fc) = 0x1f;
  *(int32_t *)(unaff_RDI + 0x860) = 6;
  *(int32_t *)(unaff_RDI + 0x864) = 0x7d;
  iVar8 = (int)unaff_R14;
  *(int *)(unaff_RDI + 0x8f0) = iVar8;
  *(int *)(unaff_RDI + 0xbd0) = iVar8;
  iVar3 = FUN_180769ed0(*(uint64_t *)(unaff_RDI + 0x170),unaff_RDI + 0x178,1);
  if (iVar3 == 0) {
    lVar4 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int *)(unaff_RDI + 0x8fc) << 3,
                          &unknown_var_7040_ptr,0x542,unaff_R14 & 0xffffffff);
    *(longlong *)(unaff_RDI + 0x848) = lVar4;
    if (lVar4 != 0) {
      if (iVar8 < *(int *)(unaff_RDI + 0x8fc)) {
        *(longlong *)(unaff_R14 + *(longlong *)(unaff_RDI + 0x848)) =
             unaff_RDI + 0xc20 + (longlong)iVar8 * 0x38;
        puVar1 = *(uint64_t **)(unaff_R14 + *(longlong *)(unaff_RDI + 0x848));
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        iVar3 = FUN_180769ed0(*(uint64_t *)(unaff_RDI + 0x170),unaff_RBP + 0xb0,1,0x16);
        if (iVar3 == 0) {
          uVar7 = unaff_R14 & 0xffffffff;
          uVar5 = unaff_R14;
          do {
            if (*(char *)(unaff_RBP + 0xb0 + uVar5) < ' ') {
              if (0x15 < uVar5) {
                FUN_1808fcdc8(uVar7,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              *(int8_t *)(unaff_RBP + 0xb0 + uVar5) = 0;
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
            uVar5 = uVar5 + 1;
          } while (uVar6 < 0x16);
                    // WARNING: Subroutine does not return
          FUN_18076b390(unaff_RBP + 0xd0,0x100,&unknown_var_5872_ptr,unaff_R14 & 0xffffffff);
        }
        *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) =
             *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
      }
      else {
        iVar3 = FUN_1807697a0(*(uint64_t *)(unaff_RDI + 0x170),unaff_RDI + 0x8ec);
        lVar4 = *(longlong *)(unaff_RDI + 0x170);
        if (iVar3 == 0) {
          iVar3 = FUN_180769720(lVar4,0);
          if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
            memset(unaff_RDI + 0x290,0,0x100);
          }
          *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) =
               *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
        }
        else {
          *(uint *)(lVar4 + 0x194) = *(uint *)(lVar4 + 0x194) & 0xfffffffb;
        }
      }
    }
  }
  else {
    *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) =
         *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1d0) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807bf8f8(longlong param_1,int param_2,uint64_t param_3,uint64_t param_4)
void FUN_1807bf8f8(longlong param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong unaff_RBP;
  longlong unaff_RDI;
  ulonglong unaff_R14;
  
  lVar4 = FUN_180742050(*(uint64_t *)(param_1 + 0x1a0),param_2 << 3,param_3,param_4,
                        unaff_R14 & 0xffffffff);
  *(longlong *)(unaff_RDI + 0x848) = lVar4;
  if (lVar4 != 0) {
    if ((int)unaff_R14 < *(int *)(unaff_RDI + 0x8fc)) {
      *(longlong *)(unaff_R14 + *(longlong *)(unaff_RDI + 0x848)) =
           unaff_RDI + 0xc20 + (longlong)(int)unaff_R14 * 0x38;
      puVar1 = *(uint64_t **)(unaff_R14 + *(longlong *)(unaff_RDI + 0x848));
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      iVar3 = FUN_180769ed0(*(uint64_t *)(unaff_RDI + 0x170),unaff_RBP + 0xb0,1,0x16);
      if (iVar3 == 0) {
        uVar7 = unaff_R14 & 0xffffffff;
        uVar5 = unaff_R14;
        do {
          if (*(char *)(unaff_RBP + 0xb0 + uVar5) < ' ') {
            if (0x15 < uVar5) {
              FUN_1808fcdc8(uVar7,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(int8_t *)(unaff_RBP + 0xb0 + uVar5) = 0;
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
          uVar5 = uVar5 + 1;
        } while (uVar6 < 0x16);
                    // WARNING: Subroutine does not return
        FUN_18076b390(unaff_RBP + 0xd0,0x100,&unknown_var_5872_ptr,unaff_R14 & 0xffffffff);
      }
      *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) =
           *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
    }
    else {
      iVar3 = FUN_1807697a0(*(uint64_t *)(unaff_RDI + 0x170),unaff_RDI + 0x8ec);
      lVar4 = *(longlong *)(unaff_RDI + 0x170);
      if (iVar3 == 0) {
        iVar3 = FUN_180769720(lVar4,0);
        if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
          memset(unaff_RDI + 0x290,0,0x100);
        }
        *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) =
             *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
      }
      else {
        *(uint *)(lVar4 + 0x194) = *(uint *)(lVar4 + 0x194) & 0xfffffffb;
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1d0) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c0195(void)
void FUN_1807c0195(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1d0) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c019d(void)
void FUN_1807c019d(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1d0) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c01a5(void)
void FUN_1807c01a5(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1d0) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c01ad(void)
void FUN_1807c01ad(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1d0) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c01c6(void)
void FUN_1807c01c6(void)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) =
       *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1d0) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c05f9(void)
void FUN_1807c05f9(void)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) =
       *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1d0) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c0619(void)
void FUN_1807c0619(void)

{
  code *pcVar1;
  
  FUN_1808fcdc8();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}






