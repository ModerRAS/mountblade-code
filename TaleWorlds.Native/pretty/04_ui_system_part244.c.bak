#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part244.c - 2 个函数

// 函数: void FUN_180808700(uint64_t param_1,uint64_t *param_2)
void FUN_180808700(uint64_t param_1,uint64_t *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint64_t uVar6;
  byte bVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  int8_t auStack_98 [32];
  uint *puStack_78;
  uint uStack_68;
  uint uStack_64;
  uint auStack_60 [2];
  longlong lStack_58;
  byte abStack_50 [16];
  ulonglong uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  uVar4 = 0;
  abStack_50[0] = *(byte *)(param_2[1] + 0xfc4);
  abStack_50[1] = *(byte *)(param_2[1] + 0xfc5);
  bVar10 = abStack_50[1] >> 1 & 1;
  uStack_64 = 2;
  uVar8 = 0;
  do {
    iVar3 = FUN_180824d50(param_1,*(uint64_t *)(param_2[1] + 0x78),&uStack_68,8);
    if (iVar3 == 0) goto LAB_180808dec;
    bVar7 = 0;
    if (uStack_68 == 0xff) {
      *(int8_t *)(param_2[1] + 0xfc6) = 0xff;
      *(int32_t *)(param_2[1] + 0xf88) = 1;
      lVar5 = param_2[1];
      iVar3 = *(int *)(lVar5 + 0x1010);
      goto LAB_180808dcf;
    }
    uVar8 = uVar8 + 1;
    abStack_50[uStack_64] = (byte)uStack_68;
    uStack_64 = uStack_64 + 1;
  } while (uVar8 < 2);
  bVar11 = abStack_50[2] >> 4;
  bVar9 = 1;
  switch(bVar11) {
  case 0:
    bVar10 = 1;
    break;
  case 1:
    *(int32_t *)(param_2[1] + 0x558) = 0xc0;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    cVar1 = -2;
    iVar3 = 0x240;
    goto code_r0x0001808087f7;
  case 6:
  case 7:
    bVar7 = bVar11;
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    cVar1 = -8;
    iVar3 = 0x100;
code_r0x0001808087f7:
    *(int *)(param_2[1] + 0x558) = iVar3 << (bVar11 + cVar1 & 0x1f);
  }
  uStack_68 = abStack_50[2] & 0xf;
  uVar8 = 0;
  bVar11 = bVar10;
  switch(uStack_68) {
  case 0:
    lVar5 = param_2[1];
    uVar8 = uVar4;
    bVar11 = bVar9;
    if (*(int *)(lVar5 + 0x1d8) != 0) {
      *(int32_t *)(lVar5 + 0x55c) = *(int32_t *)(lVar5 + 0x200);
      bVar11 = bVar10;
    }
    break;
  case 1:
    *(int32_t *)(param_2[1] + 0x55c) = 0x15888;
    uVar8 = uVar4;
    break;
  case 2:
    *(int32_t *)(param_2[1] + 0x55c) = 0x2b110;
    uVar8 = uVar4;
    break;
  case 3:
    *(int32_t *)(param_2[1] + 0x55c) = 0x2ee00;
    uVar8 = uVar4;
    break;
  case 4:
    *(int32_t *)(param_2[1] + 0x55c) = 8000;
    uVar8 = uVar4;
    break;
  case 5:
    *(int32_t *)(param_2[1] + 0x55c) = 16000;
    uVar8 = uVar4;
    break;
  case 6:
    *(int32_t *)(param_2[1] + 0x55c) = 0x5622;
    uVar8 = uVar4;
    break;
  case 7:
    *(int32_t *)(param_2[1] + 0x55c) = 24000;
    uVar8 = uVar4;
    break;
  case 8:
    *(int32_t *)(param_2[1] + 0x55c) = 32000;
    uVar8 = uVar4;
    break;
  case 9:
    *(int32_t *)(param_2[1] + 0x55c) = 0xac44;
    uVar8 = uVar4;
    break;
  case 10:
    *(int32_t *)(param_2[1] + 0x55c) = 48000;
    uVar8 = uVar4;
    break;
  case 0xb:
    *(int32_t *)(param_2[1] + 0x55c) = 96000;
    uVar8 = uVar4;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
    uVar8 = uStack_68;
    break;
  case 0xf:
    lVar5 = param_2[1];
    if (*(int *)(lVar5 + 0x1010) == 0) {
      (**(code **)(lVar5 + 0x38))(param_2,1,*(uint64_t *)(lVar5 + 0x68));
    }
    *(int32_t *)*param_2 = 2;
    goto LAB_180808dec;
  }
  bVar10 = abStack_50[3] >> 4;
  bVar12 = bVar11;
  if ((bVar10 & 8) == 0) {
    *(uint *)(param_2[1] + 0x560) = bVar10 + 1;
    *(int32_t *)(param_2[1] + 0x564) = 0;
  }
  else {
    *(int32_t *)(param_2[1] + 0x560) = 2;
    uVar4 = bVar10 & 7;
    if ((bVar10 & 7) == 0) {
      *(int32_t *)(param_2[1] + 0x564) = 1;
    }
    else if (uVar4 == 1) {
      *(int32_t *)(param_2[1] + 0x564) = 2;
    }
    else {
      bVar12 = bVar9;
      if (uVar4 == 2) {
        *(int32_t *)(param_2[1] + 0x564) = 3;
        bVar12 = bVar11;
      }
    }
  }
  uStack_68 = abStack_50[3] >> 1 & 7;
  switch(uStack_68) {
  case 0:
    lVar5 = param_2[1];
    if (*(int *)(lVar5 + 0x1d8) == 0) goto code_r0x000180808a48;
    *(int32_t *)(lVar5 + 0x568) = *(int32_t *)(lVar5 + 0x208);
    break;
  case 1:
    *(int32_t *)(param_2[1] + 0x568) = 8;
    break;
  case 2:
    *(int32_t *)(param_2[1] + 0x568) = 0xc;
    break;
  case 3:
  case 7:
code_r0x000180808a48:
    bVar12 = bVar9;
    break;
  case 4:
    *(int32_t *)(param_2[1] + 0x568) = 0x10;
    break;
  case 5:
    *(int32_t *)(param_2[1] + 0x568) = 0x14;
    break;
  case 6:
    *(int32_t *)(param_2[1] + 0x568) = 0x18;
  }
  if ((abStack_50[3] & 1) != 0) {
    bVar12 = 1;
  }
  if (((abStack_50[1] & 1) == 0) &&
     ((lVar5 = param_2[1], *(int *)(lVar5 + 0x1d8) == 0 ||
      (*(int *)(lVar5 + 0x1f0) == *(int *)(lVar5 + 500))))) {
    puStack_78 = &uStack_64;
    iVar3 = FUN_180825560(param_1,*(uint64_t *)(lVar5 + 0x78),&uStack_68,abStack_50);
    if (iVar3 == 0) goto LAB_180808dec;
    lVar5 = param_2[1];
    if (uStack_68 == 0xffffffff) goto LAB_180808af0;
    *(int32_t *)(lVar5 + 0x56c) = 0;
    *(uint *)(param_2[1] + 0x570) = uStack_68;
LAB_180808b2f:
    if (bVar7 != 0) {
      iVar3 = FUN_180824d50(param_1,*(uint64_t *)(param_2[1] + 0x78),&uStack_68,8);
      if (iVar3 == 0) goto LAB_180808dec;
      abStack_50[uStack_64] = (byte)uStack_68;
      uStack_64 = uStack_64 + 1;
      if (bVar7 == 7) {
        iVar3 = FUN_180824d50(param_1,*(uint64_t *)(param_2[1] + 0x78),auStack_60,8);
        if (iVar3 == 0) goto LAB_180808dec;
        abStack_50[uStack_64] = (byte)auStack_60[0];
        uStack_64 = uStack_64 + 1;
        uStack_68 = uStack_68 << 8 | auStack_60[0];
      }
      *(uint *)(param_2[1] + 0x558) = uStack_68 + 1;
    }
    if (uVar8 != 0) {
      iVar3 = FUN_180824d50(param_1,*(uint64_t *)(param_2[1] + 0x78),&uStack_68,8);
      if (iVar3 == 0) goto LAB_180808dec;
      abStack_50[uStack_64] = (byte)uStack_68;
      uStack_64 = uStack_64 + 1;
      if (uVar8 != 0xc) {
        iVar3 = FUN_180824d50(param_1,*(uint64_t *)(param_2[1] + 0x78),auStack_60,8);
        if (iVar3 == 0) goto LAB_180808dec;
        abStack_50[uStack_64] = (byte)auStack_60[0];
        uStack_64 = uStack_64 + 1;
        uStack_68 = uStack_68 << 8 | auStack_60[0];
      }
      if (uVar8 == 0xc) {
        iVar3 = uStack_68 * 1000;
      }
      else {
        if (uVar8 == 0xd) {
          *(uint *)(param_2[1] + 0x55c) = uStack_68;
          goto LAB_180808c6b;
        }
        iVar3 = uStack_68 * 10;
      }
      *(int *)(param_2[1] + 0x55c) = iVar3;
    }
LAB_180808c6b:
    iVar3 = FUN_180824d50(param_1,*(uint64_t *)(param_2[1] + 0x78),&uStack_68,8);
    if (iVar3 == 0) goto LAB_180808dec;
    cVar1 = (char)uStack_68;
    cVar2 = func_0x000180825c70(abStack_50,uStack_64);
    lVar5 = param_2[1];
    if (cVar2 != cVar1) {
      if (*(int *)(lVar5 + 0x1010) == 0) {
        (**(code **)(lVar5 + 0x38))(param_2,1,*(uint64_t *)(lVar5 + 0x68));
        *(int32_t *)*param_2 = 2;
        goto LAB_180808dec;
      }
      goto LAB_180808ddd;
    }
    *(int32_t *)(lVar5 + 0x1cc) = 0;
    lVar5 = param_2[1];
    if (*(int *)(lVar5 + 0x56c) != 0) goto LAB_180808d7e;
    uStack_68 = *(uint *)(lVar5 + 0x570);
    *(int32_t *)(lVar5 + 0x56c) = 1;
    lVar5 = param_2[1];
    uVar8 = *(uint *)(lVar5 + 0x1c8);
    if (uVar8 == 0) {
      if (*(int *)(lVar5 + 0x1d8) == 0) {
        if (uStack_68 != 0) {
          uVar8 = *(uint *)(lVar5 + 0x558);
          goto LAB_180808d73;
        }
        *(uint64_t *)(lVar5 + 0x570) = 0;
        *(int32_t *)(param_2[1] + 0x1cc) = *(int32_t *)(param_2[1] + 0x558);
        goto LAB_180808d7e;
      }
      if (*(uint *)(lVar5 + 0x1f0) == *(uint *)(lVar5 + 500)) {
        *(ulonglong *)(lVar5 + 0x570) = (ulonglong)*(uint *)(lVar5 + 0x1f0) * (ulonglong)uStack_68;
        *(int32_t *)(param_2[1] + 0x1cc) = *(int32_t *)(param_2[1] + 500);
        goto LAB_180808d7e;
      }
    }
    else {
LAB_180808d73:
      *(ulonglong *)(lVar5 + 0x570) = (ulonglong)uVar8 * (ulonglong)uStack_68;
LAB_180808d7e:
      if (bVar12 == 0) goto LAB_180808dec;
    }
    lVar5 = param_2[1];
    if (*(int *)(lVar5 + 0x1010) != 0) {
      *(int *)(lVar5 + 0x1ad0) = *(int *)(lVar5 + 0x1ad0) + 1;
      *(int32_t *)*param_2 = 2;
      goto LAB_180808dec;
    }
    uVar6 = 3;
LAB_180808dd3:
    (**(code **)(lVar5 + 0x38))(param_2,uVar6,*(uint64_t *)(lVar5 + 0x68));
  }
  else {
    puStack_78 = &uStack_64;
    iVar3 = FUN_1808256a0(param_1,*(uint64_t *)(param_2[1] + 0x78),&lStack_58,abStack_50);
    if (iVar3 == 0) goto LAB_180808dec;
    lVar5 = param_2[1];
    if (lStack_58 != -1) {
      *(int32_t *)(lVar5 + 0x56c) = 1;
      *(longlong *)(param_2[1] + 0x570) = lStack_58;
      goto LAB_180808b2f;
    }
LAB_180808af0:
    *(byte *)(lVar5 + 0xfc6) = abStack_50[uStack_64 - 1];
    *(int32_t *)(param_2[1] + 0xf88) = 1;
    lVar5 = param_2[1];
    iVar3 = *(int *)(lVar5 + 0x1010);
LAB_180808dcf:
    if (iVar3 == 0) {
      uVar6 = 1;
      goto LAB_180808dd3;
    }
  }
LAB_180808ddd:
  *(int32_t *)*param_2 = 2;
LAB_180808dec:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180808ec0(uint64_t param_1,uint64_t *param_2)
void FUN_180808ec0(uint64_t param_1,uint64_t *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int8_t auStack_138 [32];
  uint uStack_118;
  uint uStack_114;
  uint auStack_110 [2];
  int iStack_108;
  int32_t uStack_104;
  int iStack_100;
  uint uStack_fc;
  int8_t auStack_ec [164];
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_138;
  iVar1 = FUN_180824d50(param_1,*(uint64_t *)(param_2[1] + 0x78),&iStack_100,1);
  if (iVar1 != 0) {
    uVar5 = (uint)(iStack_100 != 0);
    uStack_114 = uVar5;
    iVar1 = FUN_180824d50(param_1,*(uint64_t *)(param_2[1] + 0x78),&uStack_118,7);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_180824d50(param_1,*(uint64_t *)(param_2[1] + 0x78),auStack_110,0x18),
       iVar1 != 0)) {
      if (uStack_118 == 0) {
        iVar1 = FUN_180809b80(param_1,param_2,iStack_100 != 0,auStack_110[0]);
        if (iVar1 == 0) goto LAB_180809328;
        *(int32_t *)(param_2[1] + 0x1d8) = 1;
        lVar3 = param_2[1];
        if ((*(longlong *)(lVar3 + 0x218) == 0) && (*(longlong *)(lVar3 + 0x220) == 0)) {
          *(int32_t *)(lVar3 + 0x1008) = 0;
          lVar3 = param_2[1];
        }
        if (((*(int *)(lVar3 + 0x1010) == 0) && (*(int *)(lVar3 + 0x340) != 0)) &&
           (*(code **)(lVar3 + 0x30) != (code *)0x0)) {
          (**(code **)(lVar3 + 0x30))(param_2,lVar3 + 0x1e0,*(uint64_t *)(lVar3 + 0x68));
        }
      }
      else {
        if (uStack_118 != 3) {
          iStack_108 = *(int *)(param_2[1] + 0x340 + (ulonglong)uStack_118 * 4);
          uStack_fc = (uint)(iStack_108 == 0);
                    // WARNING: Subroutine does not return
          memset(auStack_ec,0,0xa4);
        }
        *(int32_t *)(param_2[1] + 0x290) = 3;
        *(uint *)(param_2[1] + 0x294) = uVar5;
        *(uint *)(param_2[1] + 0x298) = auStack_110[0];
        *(uint *)(param_2[1] + 0x2a0) = auStack_110[0] / 0x12;
        uVar2 = (ulonglong)*(uint *)(param_2[1] + 0x2a0);
        if (uVar2 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = uVar2 * 0x18;
        }
        lVar3 = realloc(*(uint64_t *)(param_2[1] + 0x2a8),lVar3);
        *(longlong *)(param_2[1] + 0x2a8) = lVar3;
        if (lVar3 == 0) {
          *(int32_t *)*param_2 = 8;
          goto LAB_180809328;
        }
        lVar3 = param_2[1];
        uVar2 = 0;
        if (*(int *)(lVar3 + 0x2a0) != 0) {
          do {
            iVar1 = FUN_180824ed0(param_1,*(uint64_t *)(lVar3 + 0x78),&iStack_108,0x40);
            if (iVar1 == 0) goto LAB_180809328;
            lVar3 = uVar2 * 0x18;
            *(ulonglong *)(lVar3 + *(longlong *)(param_2[1] + 0x2a8)) =
                 CONCAT44(uStack_104,iStack_108);
            iVar1 = FUN_180824ed0(param_1,*(uint64_t *)(param_2[1] + 0x78),&iStack_108,0x40);
            if (iVar1 == 0) goto LAB_180809328;
            *(ulonglong *)(*(longlong *)(param_2[1] + 0x2a8) + 8 + lVar3) =
                 CONCAT44(uStack_104,iStack_108);
            iVar1 = FUN_180824d50(param_1,*(uint64_t *)(param_2[1] + 0x78),&uStack_114,0x10);
            if (iVar1 == 0) goto LAB_180809328;
            uVar4 = (int)uVar2 + 1;
            uVar2 = (ulonglong)uVar4;
            *(uint *)(*(longlong *)(param_2[1] + 0x2a8) + 0x10 + lVar3) = uStack_114;
            lVar3 = param_2[1];
          } while (uVar4 < *(uint *)(lVar3 + 0x2a0));
        }
        iVar1 = auStack_110[0] + *(int *)(lVar3 + 0x2a0) * -0x12;
        if ((iVar1 != 0) &&
           (iVar1 = FUN_180825950(param_1,*(uint64_t *)(lVar3 + 0x78),iVar1), iVar1 == 0))
        goto LAB_180809328;
        *(int32_t *)(param_2[1] + 0x1dc) = 1;
        lVar3 = param_2[1];
        if ((*(int *)(lVar3 + 0x1010) == 0) &&
           ((*(int *)(lVar3 + 0x34c) != 0 && (*(code **)(lVar3 + 0x30) != (code *)0x0)))) {
          (**(code **)(lVar3 + 0x30))(param_2,lVar3 + 0x290,*(uint64_t *)(lVar3 + 0x68));
        }
      }
      if (uVar5 != 0) {
        iVar1 = FUN_180807270(param_1,param_2,param_2[1] + 0x1ac0);
        if (iVar1 == 0) {
          *(uint64_t *)(param_2[1] + 0x1ac0) = 0;
        }
        *(int32_t *)*param_2 = 2;
      }
    }
  }
LAB_180809328:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_138);
}





