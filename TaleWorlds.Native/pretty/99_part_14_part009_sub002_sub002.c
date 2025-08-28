#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_14_part009_sub002_sub002.c - 1 个函数

// 函数: void FUN_1808eeb60(int32_t param_1,byte *param_2)
void FUN_1808eeb60(int32_t param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int8_t auStack_48 [32];
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_48;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  if ((((system_data_f818 == '\0') || (param_2 == (byte *)0x0)) ||
      (bVar1 = *param_2, (bVar1 & 0xfc) != 0)) || (bVar1 == 0)) goto LAB_1808eebd1;
  if (((bVar1 & 1) != 0) && (iVar3 = *(int *)(param_2 + 8), iVar3 != 0)) {
    if (iVar3 == 1) {
      if (9 < param_2[0x10]) goto LAB_1808eebd1;
      bVar2 = param_2[0x11];
    }
    else {
      if (iVar3 == 2) {
        if (((6 < (byte)(param_2[0x10] - 2)) || (6 < (byte)(param_2[0x11] - 2))) ||
           ((8 < param_2[0x12] || (param_2[0x11] <= param_2[0x10])))) goto LAB_1808eebd1;
        goto LAB_1808eec24;
      }
      if ((iVar3 != 3) || (9 < param_2[0x10])) goto LAB_1808eebd1;
      bVar2 = param_2[0x11];
    }
    if (8 < bVar2) goto LAB_1808eebd1;
  }
LAB_1808eec24:
  if (((bVar1 & 2) != 0) && (iVar3 = *(int *)(param_2 + 0x40), iVar3 != 0)) {
    if (iVar3 == 1) {
      if (9 < param_2[0x48]) goto LAB_1808eebd1;
      bVar1 = param_2[0x49];
    }
    else {
      if (iVar3 == 2) {
        if ((((6 < (byte)(param_2[0x48] - 2)) || (6 < (byte)(param_2[0x49] - 2))) ||
            (8 < param_2[0x4a])) || (param_2[0x49] <= param_2[0x48])) goto LAB_1808eebd1;
        goto LAB_1808eec96;
      }
      if ((iVar3 != 3) || (9 < param_2[0x48])) goto LAB_1808eebd1;
      bVar1 = param_2[0x49];
    }
    if (8 < bVar1) goto LAB_1808eebd1;
  }
LAB_1808eec96:
  iVar3 = FUN_1808f6cb0();
  if (iVar3 == 0) {
    iVar3 = func_0x0001808f0200(param_1);
    if (iVar3 < 0) {
      func_0x0001808f6ce0();
    }
    else {
      FUN_1808edd90(param_2,&uStack_28);
      FUN_1808ef530(param_1,&uStack_28);
      func_0x0001808f6ce0();
    }
  }
LAB_1808eebd1:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_48);
}



int FUN_1808eecf0(int32_t param_1,int8_t *param_2)

{
  int iVar1;
  
  if (system_data_f818 == '\0') {
    return -0x7f6dfffb;
  }
  if (param_2 == (int8_t *)0x0) {
    return -0x7f6dffff;
  }
  iVar1 = FUN_1808f6cb0();
  if (iVar1 == 0) {
    iVar1 = func_0x0001808f0200(param_1);
    if (iVar1 < 0) {
      func_0x0001808f6ce0();
      return -0x7f6dfffd;
    }
    iVar1 = FUN_1808eee30(param_1,param_2[1],*param_2);
    func_0x0001808f6ce0();
    if (-1 < iVar1) {
      return iVar1;
    }
  }
  return -0x7f6dff01;
}



uint64_t FUN_1808eed90(int32_t param_1,int param_2)

{
  int iVar1;
  
  if (system_data_f818 == '\0') {
    return 0x80920005;
  }
  if (2 < param_2 - 1U) {
    return 0x80920001;
  }
  iVar1 = FUN_1808f6cb0();
  if (iVar1 == 0) {
    iVar1 = func_0x0001808f0200(param_1);
    if (iVar1 < 0) {
      func_0x0001808f6ce0();
      return 0x80920003;
    }
    iVar1 = FUN_1808ef960(param_1,param_2);
    func_0x0001808f6ce0();
    if (-1 < iVar1) {
      return 0;
    }
  }
  return 0x809200ff;
}



int32_t FUN_1808eee30(uint64_t param_1,byte param_2,byte param_3)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int32_t uVar5;
  char *pcVar6;
  uint64_t uVar7;
  int64_t lVar8;
  char *pcVar9;
  byte bVar10;
  
  uVar5 = 0;
  pcVar6 = (char *)func_0x0001808f0dd0(param_1,0);
  if (pcVar6 == (char *)0x0) {
    return 0x8001002d;
  }
  if (*pcVar6 != '\0') {
    if (pcVar6[10] == '\0') {
      return 0;
    }
    cVar3 = func_0x0001808f0e30(*(int16_t *)(pcVar6 + 2),*(int16_t *)(pcVar6 + 4));
    pcVar1 = *(char **)(pcVar6 + 0x23c8);
    if (cVar3 == '\0') {
      if (pcVar1 == (char *)0x0) {
        pcVar9 = pcVar6 + 0x2368;
        *(char **)(pcVar6 + 0x23c8) = pcVar9;
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9[2] = '\0';
        pcVar9[3] = '\0';
        pcVar9[4] = '\0';
        pcVar9[5] = '\0';
        pcVar9[6] = '\0';
        pcVar9[7] = '\0';
        pcVar6[0x2370] = '\0';
        pcVar6[0x2371] = '\0';
        pcVar6[0x2372] = '\0';
        pcVar6[0x2373] = '\0';
        pcVar6[0x2374] = '\0';
        pcVar6[0x2375] = '\0';
        pcVar6[0x2376] = '\0';
        pcVar6[0x2377] = '\0';
        pcVar6[0x2378] = '\0';
        pcVar6[0x2379] = '\0';
        pcVar6[0x237a] = '\0';
        pcVar6[0x237b] = '\0';
        pcVar6[0x237c] = '\0';
        pcVar6[0x237d] = '\0';
        pcVar6[0x237e] = '\0';
        pcVar6[0x237f] = '\0';
        pcVar6[0x2380] = '\0';
        pcVar6[0x2381] = '\0';
        pcVar6[0x2382] = '\0';
        pcVar6[0x2383] = '\0';
        pcVar6[0x2384] = '\0';
        pcVar6[0x2385] = '\0';
        pcVar6[0x2386] = '\0';
        pcVar6[0x2387] = '\0';
        pcVar6[0x2388] = '\0';
        pcVar6[0x2389] = '\0';
        pcVar6[0x238a] = '\0';
        pcVar6[0x238b] = '\0';
        pcVar6[0x238c] = '\0';
        pcVar6[0x238d] = '\0';
        pcVar6[0x238e] = '\0';
        pcVar6[0x238f] = '\0';
        pcVar6[0x2390] = '\0';
        pcVar6[0x2391] = '\0';
        pcVar6[0x2392] = '\0';
        pcVar6[0x2393] = '\0';
        pcVar6[0x2394] = '\0';
        pcVar6[0x2395] = '\0';
        pcVar6[0x2396] = '\0';
        pcVar6[0x2397] = '\0';
        bVar2 = true;
      }
      else {
        pcVar9 = *(char **)(pcVar6 + 0x23d0);
        if (pcVar9 == (char *)0x0) {
          lVar8 = 0x2398;
          if (pcVar1 != pcVar6 + 0x2368) {
            lVar8 = 0x2368;
          }
          pcVar9 = pcVar6 + lVar8;
          *(char **)(pcVar6 + 0x23d0) = pcVar9;
        }
        bVar2 = false;
      }
      if (pcVar9 == (char *)0x0) {
        return 0x80010004;
      }
      if (bVar2) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9[2] = '\0';
        pcVar9[3] = '\0';
        pcVar9[4] = '\0';
        pcVar9[5] = '\0';
        pcVar9[6] = '\0';
        pcVar9[7] = '\0';
        pcVar9[8] = '\0';
        pcVar9[9] = '\0';
        pcVar9[10] = '\0';
        pcVar9[0xb] = '\0';
        pcVar9[0xc] = '\0';
        pcVar9[0xd] = '\0';
        pcVar9[0xe] = '\0';
        pcVar9[0xf] = '\0';
        pcVar9[0x10] = '\0';
        pcVar9[0x11] = '\0';
        pcVar9[0x12] = '\0';
        pcVar9[0x13] = '\0';
        pcVar9[0x14] = '\0';
        pcVar9[0x15] = '\0';
        pcVar9[0x16] = '\0';
        pcVar9[0x17] = '\0';
        pcVar9[0x18] = '\0';
        pcVar9[0x19] = '\0';
        pcVar9[0x1a] = '\0';
        pcVar9[0x1b] = '\0';
        pcVar9[0x1c] = '\0';
        pcVar9[0x1d] = '\0';
        pcVar9[0x1e] = '\0';
        pcVar9[0x1f] = '\0';
        pcVar9[0x20] = '\0';
        pcVar9[0x21] = '\0';
        pcVar9[0x22] = '\0';
        pcVar9[0x23] = '\0';
        pcVar9[0x24] = '\0';
        pcVar9[0x25] = '\0';
        pcVar9[0x26] = '\0';
        pcVar9[0x27] = '\0';
        pcVar9[0x28] = '\0';
        pcVar9[0x29] = '\0';
        pcVar9[0x2a] = '\0';
        pcVar9[0x2b] = '\0';
        pcVar9[0x2c] = '\0';
        pcVar9[0x2d] = '\0';
        pcVar9[0x2e] = '\0';
        pcVar9[0x2f] = '\0';
        pcVar9[0] = '\x05';
        pcVar9[1] = '\x01';
        if (pcVar6[10] == '\x06') {
          bVar4 = param_3 >> 1;
          bVar10 = param_2 >> 1;
        }
        else {
          bVar4 = param_3;
          bVar10 = param_2;
          if (pcVar6[10] == '\x05') {
            bVar4 = param_3 >> 2;
            bVar10 = param_2 >> 2;
          }
        }
        pcVar9[4] = bVar10;
        pcVar9[5] = bVar4;
        if ((pcVar9[4] == '\0') && (param_2 != 0)) {
          pcVar9[4] = '\x01';
        }
        if ((bVar4 == 0) && (param_3 != 0)) {
          pcVar9[5] = '\x01';
        }
        uVar5 = FUN_1808f22b0(*(int32_t *)(pcVar6 + 0x14),pcVar9,0x20,FUN_1808efc90);
      }
      else {
        pcVar9[1] = pcVar9[1] | 1;
        *pcVar9 = '\x05';
        if (pcVar6[10] == '\x06') {
          pcVar9[4] = (&unknown_var_1872_ptr)[param_2];
          pcVar9[5] = (&unknown_var_1872_ptr)[param_3];
        }
        else if (pcVar6[10] == '\x05') {
          pcVar9[4] = (&unknown_var_2128_ptr)[param_2];
          pcVar9[5] = (&unknown_var_2128_ptr)[param_3];
        }
        else {
          pcVar9[4] = param_2;
          pcVar9[5] = param_3;
        }
      }
    }
    else {
      if (pcVar1 == (char *)0x0) {
        pcVar9 = pcVar6 + 0x2368;
        *(char **)(pcVar6 + 0x23c8) = pcVar9;
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9[2] = '\0';
        pcVar9[3] = '\0';
        pcVar9[4] = '\0';
        pcVar9[5] = '\0';
        pcVar9[6] = '\0';
        pcVar9[7] = '\0';
        pcVar6[0x2370] = '\0';
        pcVar6[0x2371] = '\0';
        pcVar6[0x2372] = '\0';
        pcVar6[0x2373] = '\0';
        pcVar6[0x2374] = '\0';
        pcVar6[0x2375] = '\0';
        pcVar6[0x2376] = '\0';
        pcVar6[0x2377] = '\0';
        pcVar6[0x2378] = '\0';
        pcVar6[0x2379] = '\0';
        pcVar6[0x237a] = '\0';
        pcVar6[0x237b] = '\0';
        pcVar6[0x237c] = '\0';
        pcVar6[0x237d] = '\0';
        pcVar6[0x237e] = '\0';
        pcVar6[0x237f] = '\0';
        pcVar6[0x2380] = '\0';
        pcVar6[0x2381] = '\0';
        pcVar6[0x2382] = '\0';
        pcVar6[0x2383] = '\0';
        pcVar6[0x2384] = '\0';
        pcVar6[0x2385] = '\0';
        pcVar6[0x2386] = '\0';
        pcVar6[0x2387] = '\0';
        pcVar6[0x2388] = '\0';
        pcVar6[0x2389] = '\0';
        pcVar6[0x238a] = '\0';
        pcVar6[0x238b] = '\0';
        pcVar6[0x238c] = '\0';
        pcVar6[0x238d] = '\0';
        pcVar6[0x238e] = '\0';
        pcVar6[0x238f] = '\0';
        pcVar6[0x2390] = '\0';
        pcVar6[0x2391] = '\0';
        pcVar6[0x2392] = '\0';
        pcVar6[0x2393] = '\0';
        pcVar6[0x2394] = '\0';
        pcVar6[0x2395] = '\0';
        pcVar6[0x2396] = '\0';
        pcVar6[0x2397] = '\0';
        bVar2 = true;
      }
      else {
        pcVar9 = *(char **)(pcVar6 + 0x23d0);
        if (pcVar9 == (char *)0x0) {
          lVar8 = 0x2398;
          if (pcVar1 != pcVar6 + 0x2368) {
            lVar8 = 0x2368;
          }
          pcVar9 = pcVar6 + lVar8;
          *(char **)(pcVar6 + 0x23d0) = pcVar9;
        }
        bVar2 = false;
      }
      if (pcVar9 == (char *)0x0) {
        return 0x80010004;
      }
      if (bVar2) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9[2] = '\0';
        pcVar9[3] = '\0';
        pcVar9[4] = '\0';
        pcVar9[5] = '\0';
        pcVar9[6] = '\0';
        pcVar9[7] = '\0';
        pcVar9[8] = '\0';
        pcVar9[9] = '\0';
        pcVar9[10] = '\0';
        pcVar9[0xb] = '\0';
        pcVar9[0xc] = '\0';
        pcVar9[0xd] = '\0';
        pcVar9[0xe] = '\0';
        pcVar9[0xf] = '\0';
        pcVar9[0x10] = '\0';
        pcVar9[0x11] = '\0';
        pcVar9[0x12] = '\0';
        pcVar9[0x13] = '\0';
        pcVar9[0x14] = '\0';
        pcVar9[0x15] = '\0';
        pcVar9[0x16] = '\0';
        pcVar9[0x17] = '\0';
        pcVar9[0x18] = '\0';
        pcVar9[0x19] = '\0';
        pcVar9[0x1a] = '\0';
        pcVar9[0x1b] = '\0';
        pcVar9[0x1c] = '\0';
        pcVar9[0x1d] = '\0';
        pcVar9[0x1e] = '\0';
        pcVar9[0x1f] = '\0';
        pcVar9[0x20] = '\0';
        pcVar9[0x21] = '\0';
        pcVar9[0x22] = '\0';
        pcVar9[0x23] = '\0';
        pcVar9[0x24] = '\0';
        pcVar9[0x25] = '\0';
        pcVar9[0x26] = '\0';
        pcVar9[0x27] = '\0';
        pcVar9[0x28] = '\0';
        pcVar9[0x29] = '\0';
        pcVar9[0x2a] = '\0';
        pcVar9[0x2b] = '\0';
        pcVar9[0x2c] = '\0';
        pcVar9[0x2d] = '\0';
        pcVar9[0x2e] = '\0';
        pcVar9[0x2f] = '\0';
        pcVar9[0] = '\x02';
        pcVar9[1] = '\x01';
        pcVar9[3] = param_2;
        pcVar9[4] = param_3;
        uVar5 = FUN_1808f22b0(*(int32_t *)(pcVar6 + 0x14),pcVar9,0x30,FUN_1808efc90);
      }
      else {
        pcVar9[1] = pcVar9[1] | 1;
        *pcVar9 = '\x02';
        pcVar9[3] = param_2;
        pcVar9[4] = param_3;
        uVar5 = 0;
      }
    }
    if ((param_2 == 0) && (param_3 == 0)) {
      pcVar6[0x23d8] = '\0';
    }
    else {
      pcVar6[0x23d8] = '\x01';
      uVar7 = FUN_1808f07b0();
      *(uint64_t *)(pcVar6 + 0x23e0) = uVar7;
    }
    return uVar5;
  }
  return 0;
}



int32_t FUN_1808ef100(uint64_t param_1,byte param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  int32_t uVar3;
  char *pcVar4;
  int64_t lVar5;
  char *pcVar6;
  
  pcVar4 = (char *)func_0x0001808f0dd0(param_1,1);
  if (pcVar4 == (char *)0x0) {
    uVar3 = 0x8001002d;
  }
  else {
    uVar3 = 0;
    if ((*pcVar4 != '\0') &&
       (cVar2 = func_0x0001808f0e30(*(int16_t *)(pcVar4 + 2),*(int16_t *)(pcVar4 + 4)),
       cVar2 != '\0')) {
      pcVar4[8] = pcVar4[8] & 0xf3;
      pcVar4[8] = pcVar4[8] | (param_3 * '\x02' | param_2) << 2;
      if (*(char **)(pcVar4 + 0x23c8) == (char *)0x0) {
        pcVar6 = pcVar4 + 0x2368;
        *(char **)(pcVar4 + 0x23c8) = pcVar6;
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6[2] = '\0';
        pcVar6[3] = '\0';
        pcVar6[4] = '\0';
        pcVar6[5] = '\0';
        pcVar6[6] = '\0';
        pcVar6[7] = '\0';
        pcVar4[0x2370] = '\0';
        pcVar4[0x2371] = '\0';
        pcVar4[0x2372] = '\0';
        pcVar4[0x2373] = '\0';
        pcVar4[0x2374] = '\0';
        pcVar4[0x2375] = '\0';
        pcVar4[0x2376] = '\0';
        pcVar4[0x2377] = '\0';
        pcVar4[0x2378] = '\0';
        pcVar4[0x2379] = '\0';
        pcVar4[0x237a] = '\0';
        pcVar4[0x237b] = '\0';
        pcVar4[0x237c] = '\0';
        pcVar4[0x237d] = '\0';
        pcVar4[0x237e] = '\0';
        pcVar4[0x237f] = '\0';
        pcVar4[0x2380] = '\0';
        pcVar4[0x2381] = '\0';
        pcVar4[0x2382] = '\0';
        pcVar4[0x2383] = '\0';
        pcVar4[0x2384] = '\0';
        pcVar4[0x2385] = '\0';
        pcVar4[0x2386] = '\0';
        pcVar4[0x2387] = '\0';
        pcVar4[0x2388] = '\0';
        pcVar4[0x2389] = '\0';
        pcVar4[0x238a] = '\0';
        pcVar4[0x238b] = '\0';
        pcVar4[0x238c] = '\0';
        pcVar4[0x238d] = '\0';
        pcVar4[0x238e] = '\0';
        pcVar4[0x238f] = '\0';
        pcVar4[0x2390] = '\0';
        pcVar4[0x2391] = '\0';
        pcVar4[0x2392] = '\0';
        pcVar4[0x2393] = '\0';
        pcVar4[0x2394] = '\0';
        pcVar4[0x2395] = '\0';
        pcVar4[0x2396] = '\0';
        pcVar4[0x2397] = '\0';
        bVar1 = true;
      }
      else {
        pcVar6 = *(char **)(pcVar4 + 0x23d0);
        if (pcVar6 == (char *)0x0) {
          lVar5 = 0x2398;
          if (*(char **)(pcVar4 + 0x23c8) != pcVar4 + 0x2368) {
            lVar5 = 0x2368;
          }
          pcVar6 = pcVar4 + lVar5;
          *(char **)(pcVar4 + 0x23d0) = pcVar6;
        }
        bVar1 = false;
      }
      if (pcVar6 == (char *)0x0) {
        uVar3 = 0x80010004;
      }
      else if (bVar1) {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6[2] = '\0';
        pcVar6[3] = '\0';
        pcVar6[4] = '\0';
        pcVar6[5] = '\0';
        pcVar6[6] = '\0';
        pcVar6[7] = '\0';
        pcVar6[8] = '\0';
        pcVar6[9] = '\0';
        pcVar6[10] = '\0';
        pcVar6[0xb] = '\0';
        pcVar6[0xc] = '\0';
        pcVar6[0xd] = '\0';
        pcVar6[0xe] = '\0';
        pcVar6[0xf] = '\0';
        pcVar6[0x10] = '\0';
        pcVar6[0x11] = '\0';
        pcVar6[0x12] = '\0';
        pcVar6[0x13] = '\0';
        pcVar6[0x14] = '\0';
        pcVar6[0x15] = '\0';
        pcVar6[0x16] = '\0';
        pcVar6[0x17] = '\0';
        pcVar6[0x18] = '\0';
        pcVar6[0x19] = '\0';
        pcVar6[0x1a] = '\0';
        pcVar6[0x1b] = '\0';
        pcVar6[0x1c] = '\0';
        pcVar6[0x1d] = '\0';
        pcVar6[0x1e] = '\0';
        pcVar6[0x1f] = '\0';
        pcVar6[0x20] = '\0';
        pcVar6[0x21] = '\0';
        pcVar6[0x22] = '\0';
        pcVar6[0x23] = '\0';
        pcVar6[0x24] = '\0';
        pcVar6[0x25] = '\0';
        pcVar6[0x26] = '\0';
        pcVar6[0x27] = '\0';
        pcVar6[0x28] = '\0';
        pcVar6[0x29] = '\0';
        pcVar6[0x2a] = '\0';
        pcVar6[0x2b] = '\0';
        pcVar6[0x2c] = '\0';
        pcVar6[0x2d] = '\0';
        pcVar6[0x2e] = '\0';
        pcVar6[0x2f] = '\0';
        pcVar6[1] = pcVar6[1] | 0x80;
        *pcVar6 = '\x02';
        pcVar6[8] = pcVar4[8];
        uVar3 = FUN_1808f22b0(*(int32_t *)(pcVar4 + 0x14),pcVar6,0x30,FUN_1808efc90);
      }
      else {
        pcVar6[1] = pcVar6[1] | 0x80;
        *pcVar6 = '\x02';
        pcVar6[8] = pcVar4[8];
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}



int32_t FUN_1808ef250(uint64_t param_1,char *param_2)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  int32_t uVar4;
  char *pcVar5;
  int64_t lVar6;
  char *pcVar7;
  uint64_t uVar8;
  char cStackX_18;
  char cStackX_19;
  char acStackX_1a [6];
  
  uVar4 = 0;
  pcVar5 = (char *)func_0x0001808f0dd0(param_1,0);
  if (pcVar5 == (char *)0x0) {
    return 0x8001002d;
  }
  if (*pcVar5 != '\0') {
    cStackX_18 = *param_2;
    cStackX_19 = param_2[1];
    acStackX_1a[0] = param_2[2];
    cVar3 = func_0x0001808f0e30(*(int16_t *)(pcVar5 + 2),*(int16_t *)(pcVar5 + 4));
    pcVar1 = *(char **)(pcVar5 + 0x23c8);
    if (cVar3 == '\0') {
      if (pcVar1 == (char *)0x0) {
        pcVar7 = pcVar5 + 0x2368;
        *(char **)(pcVar5 + 0x23c8) = pcVar7;
        bVar2 = true;
        pcVar7[0] = '\0';
        pcVar7[1] = '\0';
        pcVar7[2] = '\0';
        pcVar7[3] = '\0';
        pcVar7[4] = '\0';
        pcVar7[5] = '\0';
        pcVar7[6] = '\0';
        pcVar7[7] = '\0';
        pcVar5[0x2370] = '\0';
        pcVar5[0x2371] = '\0';
        pcVar5[0x2372] = '\0';
        pcVar5[0x2373] = '\0';
        pcVar5[0x2374] = '\0';
        pcVar5[0x2375] = '\0';
        pcVar5[0x2376] = '\0';
        pcVar5[0x2377] = '\0';
        pcVar5[0x2378] = '\0';
        pcVar5[0x2379] = '\0';
        pcVar5[0x237a] = '\0';
        pcVar5[0x237b] = '\0';
        pcVar5[0x237c] = '\0';
        pcVar5[0x237d] = '\0';
        pcVar5[0x237e] = '\0';
        pcVar5[0x237f] = '\0';
        pcVar5[0x2380] = '\0';
        pcVar5[0x2381] = '\0';
        pcVar5[0x2382] = '\0';
        pcVar5[0x2383] = '\0';
        pcVar5[0x2384] = '\0';
        pcVar5[0x2385] = '\0';
        pcVar5[0x2386] = '\0';
        pcVar5[0x2387] = '\0';
        pcVar5[0x2388] = '\0';
        pcVar5[0x2389] = '\0';
        pcVar5[0x238a] = '\0';
        pcVar5[0x238b] = '\0';
        pcVar5[0x238c] = '\0';
        pcVar5[0x238d] = '\0';
        pcVar5[0x238e] = '\0';
        pcVar5[0x238f] = '\0';
        pcVar5[0x2390] = '\0';
        pcVar5[0x2391] = '\0';
        pcVar5[0x2392] = '\0';
        pcVar5[0x2393] = '\0';
        pcVar5[0x2394] = '\0';
        pcVar5[0x2395] = '\0';
        pcVar5[0x2396] = '\0';
        pcVar5[0x2397] = '\0';
      }
      else {
        pcVar7 = *(char **)(pcVar5 + 0x23d0);
        if (pcVar7 == (char *)0x0) {
          lVar6 = 0x2398;
          if (pcVar1 != pcVar5 + 0x2368) {
            lVar6 = 0x2368;
          }
          pcVar7 = pcVar5 + lVar6;
          *(char **)(pcVar5 + 0x23d0) = pcVar7;
        }
        bVar2 = false;
      }
      if (pcVar7 != (char *)0x0) {
        if (pcVar5[0xc] == '\0') {
          uVar8 = 0xff;
        }
        else {
          uVar8 = 0xd;
          if (pcVar5[0xc] == '\x01') {
            uVar8 = 0x80;
          }
        }
        FUN_1808efa90(&cStackX_18,&cStackX_19,acStackX_1a,uVar8,0);
        if (bVar2) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7[4] = '\0';
          pcVar7[5] = '\0';
          pcVar7[6] = '\0';
          pcVar7[7] = '\0';
          pcVar7[8] = '\0';
          pcVar7[9] = '\0';
          pcVar7[10] = '\0';
          pcVar7[0xb] = '\0';
          pcVar7[0xc] = '\0';
          pcVar7[0xd] = '\0';
          pcVar7[0xe] = '\0';
          pcVar7[0xf] = '\0';
          pcVar7[0x10] = '\0';
          pcVar7[0x11] = '\0';
          pcVar7[0x12] = '\0';
          pcVar7[0x13] = '\0';
          pcVar7[0x14] = '\0';
          pcVar7[0x15] = '\0';
          pcVar7[0x16] = '\0';
          pcVar7[0x17] = '\0';
          pcVar7[0x18] = '\0';
          pcVar7[0x19] = '\0';
          pcVar7[0x1a] = '\0';
          pcVar7[0x1b] = '\0';
          pcVar7[0x1c] = '\0';
          pcVar7[0x1d] = '\0';
          pcVar7[0x1e] = '\0';
          pcVar7[0x1f] = '\0';
          pcVar7[0x20] = '\0';
          pcVar7[0x21] = '\0';
          pcVar7[0x22] = '\0';
          pcVar7[0x23] = '\0';
          pcVar7[0x24] = '\0';
          pcVar7[0x25] = '\0';
          pcVar7[0x26] = '\0';
          pcVar7[0x27] = '\0';
          pcVar7[0x28] = '\0';
          pcVar7[0x29] = '\0';
          pcVar7[0x2a] = '\0';
          pcVar7[0x2b] = '\0';
          pcVar7[0x2c] = '\0';
          pcVar7[0x2d] = '\0';
          pcVar7[0x2e] = '\0';
          pcVar7[0x2f] = '\0';
          pcVar7[6] = cStackX_18;
          pcVar7[7] = cStackX_19;
          pcVar7[8] = acStackX_1a[0];
          pcVar7[0] = '\x05';
          pcVar7[1] = '\x02';
          uVar4 = FUN_1808f22b0(*(int32_t *)(pcVar5 + 0x14),pcVar7,0x20,FUN_1808efc90);
          return uVar4;
        }
        pcVar7[1] = pcVar7[1] | 2;
        pcVar7[6] = cStackX_18;
        pcVar7[7] = cStackX_19;
        pcVar7[8] = acStackX_1a[0];
        *pcVar7 = '\x05';
        return 0;
      }
    }
    else {
      if (pcVar1 == (char *)0x0) {
        pcVar7 = pcVar5 + 0x2368;
        *(char **)(pcVar5 + 0x23c8) = pcVar7;
        bVar2 = true;
        pcVar7[0] = '\0';
        pcVar7[1] = '\0';
        pcVar7[2] = '\0';
        pcVar7[3] = '\0';
        pcVar7[4] = '\0';
        pcVar7[5] = '\0';
        pcVar7[6] = '\0';
        pcVar7[7] = '\0';
        pcVar5[0x2370] = '\0';
        pcVar5[0x2371] = '\0';
        pcVar5[0x2372] = '\0';
        pcVar5[0x2373] = '\0';
        pcVar5[0x2374] = '\0';
        pcVar5[0x2375] = '\0';
        pcVar5[0x2376] = '\0';
        pcVar5[0x2377] = '\0';
        pcVar5[0x2378] = '\0';
        pcVar5[0x2379] = '\0';
        pcVar5[0x237a] = '\0';
        pcVar5[0x237b] = '\0';
        pcVar5[0x237c] = '\0';
        pcVar5[0x237d] = '\0';
        pcVar5[0x237e] = '\0';
        pcVar5[0x237f] = '\0';
        pcVar5[0x2380] = '\0';
        pcVar5[0x2381] = '\0';
        pcVar5[0x2382] = '\0';
        pcVar5[0x2383] = '\0';
        pcVar5[0x2384] = '\0';
        pcVar5[0x2385] = '\0';
        pcVar5[0x2386] = '\0';
        pcVar5[0x2387] = '\0';
        pcVar5[0x2388] = '\0';
        pcVar5[0x2389] = '\0';
        pcVar5[0x238a] = '\0';
        pcVar5[0x238b] = '\0';
        pcVar5[0x238c] = '\0';
        pcVar5[0x238d] = '\0';
        pcVar5[0x238e] = '\0';
        pcVar5[0x238f] = '\0';
        pcVar5[0x2390] = '\0';
        pcVar5[0x2391] = '\0';
        pcVar5[0x2392] = '\0';
        pcVar5[0x2393] = '\0';
        pcVar5[0x2394] = '\0';
        pcVar5[0x2395] = '\0';
        pcVar5[0x2396] = '\0';
        pcVar5[0x2397] = '\0';
      }
      else {
        pcVar7 = *(char **)(pcVar5 + 0x23d0);
        if (pcVar7 == (char *)0x0) {
          lVar6 = 0x2398;
          if (pcVar1 != pcVar5 + 0x2368) {
            lVar6 = 0x2368;
          }
          pcVar7 = pcVar5 + lVar6;
          *(char **)(pcVar5 + 0x23d0) = pcVar7;
        }
        bVar2 = false;
      }
      if (pcVar7 != (char *)0x0) {
        if (pcVar5[0xc] == '\0') {
          uVar8 = 0xff;
        }
        else {
          uVar8 = 0x40;
          if (pcVar5[0xc] == '\x01') {
            uVar8 = 0x80;
          }
        }
        FUN_1808efa90(&cStackX_18,&cStackX_19,acStackX_1a,uVar8,1);
        if (bVar2) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7[4] = '\0';
          pcVar7[5] = '\0';
          pcVar7[6] = '\0';
          pcVar7[7] = '\0';
          pcVar7[8] = '\0';
          pcVar7[9] = '\0';
          pcVar7[10] = '\0';
          pcVar7[0xb] = '\0';
          pcVar7[0xc] = '\0';
          pcVar7[0xd] = '\0';
          pcVar7[0xe] = '\0';
          pcVar7[0xf] = '\0';
          pcVar7[0x10] = '\0';
          pcVar7[0x11] = '\0';
          pcVar7[0x12] = '\0';
          pcVar7[0x13] = '\0';
          pcVar7[0x14] = '\0';
          pcVar7[0x15] = '\0';
          pcVar7[0x16] = '\0';
          pcVar7[0x17] = '\0';
          pcVar7[0x18] = '\0';
          pcVar7[0x19] = '\0';
          pcVar7[0x1a] = '\0';
          pcVar7[0x1b] = '\0';
          pcVar7[0x1c] = '\0';
          pcVar7[0x1d] = '\0';
          pcVar7[0x1e] = '\0';
          pcVar7[0x1f] = '\0';
          pcVar7[0x20] = '\0';
          pcVar7[0x21] = '\0';
          pcVar7[0x22] = '\0';
          pcVar7[0x23] = '\0';
          pcVar7[0x24] = '\0';
          pcVar7[0x25] = '\0';
          pcVar7[0x26] = '\0';
          pcVar7[0x27] = '\0';
          pcVar7[0x28] = '\0';
          pcVar7[0x29] = '\0';
          pcVar7[0x2a] = '\0';
          pcVar7[0x2b] = '\0';
          pcVar7[0x2c] = '\0';
          pcVar7[0x2d] = '\0';
          pcVar7[0x2e] = '\0';
          pcVar7[0x2f] = '\0';
          pcVar7[0x2d] = cStackX_18;
          pcVar7[0x2e] = cStackX_19;
          pcVar7[0x2f] = acStackX_1a[0];
          *pcVar7 = '\x02';
          pcVar7[2] = '\x04';
          uVar4 = FUN_1808f22b0(*(int32_t *)(pcVar5 + 0x14),pcVar7,0x30,FUN_1808efc90);
          return uVar4;
        }
        pcVar7[2] = pcVar7[2] | 4;
        pcVar7[0x2d] = cStackX_18;
        pcVar7[0x2e] = cStackX_19;
        pcVar7[0x2f] = acStackX_1a[0];
        *pcVar7 = '\x02';
        return 0;
      }
    }
    uVar4 = 0x80010004;
  }
  return uVar4;
}



int32_t FUN_1808ef530(uint64_t param_1,byte *param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int32_t uVar4;
  char *pcVar5;
  int64_t lVar6;
  char *pcVar7;
  byte bVar8;
  
  uVar4 = 0;
  pcVar5 = (char *)func_0x0001808f0dd0(param_1,0);
  if (pcVar5 == (char *)0x0) {
    return 0x8001002d;
  }
  if (*pcVar5 != '\0') {
    cVar2 = func_0x0001808f0e30(*(int16_t *)(pcVar5 + 2),*(int16_t *)(pcVar5 + 4));
    if ((cVar2 != '\0') && (pcVar5[0xb] != '\0')) {
      if (*(char **)(pcVar5 + 0x23c8) == (char *)0x0) {
        pcVar7 = pcVar5 + 0x2368;
        *(char **)(pcVar5 + 0x23c8) = pcVar7;
        pcVar7[0] = '\0';
        pcVar7[1] = '\0';
        pcVar7[2] = '\0';
        pcVar7[3] = '\0';
        pcVar7[4] = '\0';
        pcVar7[5] = '\0';
        pcVar7[6] = '\0';
        pcVar7[7] = '\0';
        pcVar5[0x2370] = '\0';
        pcVar5[0x2371] = '\0';
        pcVar5[0x2372] = '\0';
        pcVar5[0x2373] = '\0';
        pcVar5[0x2374] = '\0';
        pcVar5[0x2375] = '\0';
        pcVar5[0x2376] = '\0';
        pcVar5[0x2377] = '\0';
        pcVar5[0x2378] = '\0';
        pcVar5[0x2379] = '\0';
        pcVar5[0x237a] = '\0';
        pcVar5[0x237b] = '\0';
        pcVar5[0x237c] = '\0';
        pcVar5[0x237d] = '\0';
        pcVar5[0x237e] = '\0';
        pcVar5[0x237f] = '\0';
        pcVar5[0x2380] = '\0';
        pcVar5[0x2381] = '\0';
        pcVar5[0x2382] = '\0';
        pcVar5[0x2383] = '\0';
        pcVar5[0x2384] = '\0';
        pcVar5[0x2385] = '\0';
        pcVar5[0x2386] = '\0';
        pcVar5[0x2387] = '\0';
        pcVar5[0x2388] = '\0';
        pcVar5[0x2389] = '\0';
        pcVar5[0x238a] = '\0';
        pcVar5[0x238b] = '\0';
        pcVar5[0x238c] = '\0';
        pcVar5[0x238d] = '\0';
        pcVar5[0x238e] = '\0';
        pcVar5[0x238f] = '\0';
        pcVar5[0x2390] = '\0';
        pcVar5[0x2391] = '\0';
        pcVar5[0x2392] = '\0';
        pcVar5[0x2393] = '\0';
        pcVar5[0x2394] = '\0';
        pcVar5[0x2395] = '\0';
        pcVar5[0x2396] = '\0';
        pcVar5[0x2397] = '\0';
        bVar1 = true;
      }
      else {
        pcVar7 = *(char **)(pcVar5 + 0x23d0);
        if (pcVar7 == (char *)0x0) {
          lVar6 = 0x2398;
          if (*(char **)(pcVar5 + 0x23c8) != pcVar5 + 0x2368) {
            lVar6 = 0x2368;
          }
          pcVar7 = pcVar5 + lVar6;
          *(char **)(pcVar5 + 0x23d0) = pcVar7;
        }
        bVar1 = false;
      }
      if (pcVar7 == (char *)0x0) {
        return 0x80010004;
      }
      if (bVar1) {
        bVar8 = 0;
        pcVar7[0] = '\0';
        pcVar7[1] = '\0';
        pcVar7[2] = '\0';
        pcVar7[3] = '\0';
        pcVar7[4] = '\0';
        pcVar7[5] = '\0';
        pcVar7[6] = '\0';
        pcVar7[7] = '\0';
        pcVar7[8] = '\0';
        pcVar7[9] = '\0';
        pcVar7[10] = '\0';
        pcVar7[0xb] = '\0';
        pcVar7[0xc] = '\0';
        pcVar7[0xd] = '\0';
        pcVar7[0xe] = '\0';
        pcVar7[0xf] = '\0';
        pcVar7[0x10] = '\0';
        pcVar7[0x11] = '\0';
        pcVar7[0x12] = '\0';
        pcVar7[0x13] = '\0';
        pcVar7[0x14] = '\0';
        pcVar7[0x15] = '\0';
        pcVar7[0x16] = '\0';
        pcVar7[0x17] = '\0';
        pcVar7[0x18] = '\0';
        pcVar7[0x19] = '\0';
        pcVar7[0x1a] = '\0';
        pcVar7[0x1b] = '\0';
        pcVar7[0x1c] = '\0';
        pcVar7[0x1d] = '\0';
        pcVar7[0x1e] = '\0';
        pcVar7[0x1f] = '\0';
        pcVar7[0x20] = '\0';
        pcVar7[0x21] = '\0';
        pcVar7[0x22] = '\0';
        pcVar7[0x23] = '\0';
        pcVar7[0x24] = '\0';
        pcVar7[0x25] = '\0';
        pcVar7[0x26] = '\0';
        pcVar7[0x27] = '\0';
        pcVar7[0x28] = '\0';
        pcVar7[0x29] = '\0';
        pcVar7[0x2a] = '\0';
        pcVar7[0x2b] = '\0';
        pcVar7[0x2c] = '\0';
        pcVar7[0x2d] = '\0';
        pcVar7[0x2e] = '\0';
        pcVar7[0x2f] = '\0';
        *pcVar7 = '\x02';
        bVar3 = *param_2;
        if ((bVar3 & 1) != 0) {
          pcVar7[1] = '\b';
          bVar8 = 8;
          pcVar7[0x16] = param_2[1];
          *(uint64_t *)(pcVar7 + 0x17) = *(uint64_t *)(param_2 + 2);
          *(int16_t *)(pcVar7 + 0x1f) = *(int16_t *)(param_2 + 10);
          bVar3 = *param_2;
        }
        if ((bVar3 & 2) != 0) {
          pcVar7[1] = bVar8 | 4;
          pcVar7[0xb] = param_2[0xc];
          *(uint64_t *)(pcVar7 + 0xc) = *(uint64_t *)(param_2 + 0xd);
          *(int16_t *)(pcVar7 + 0x14) = *(int16_t *)(param_2 + 0x15);
        }
        uVar4 = FUN_1808f22b0(*(int32_t *)(pcVar5 + 0x14),pcVar7,0x30,FUN_1808efc90);
      }
      else {
        *pcVar7 = '\x02';
        bVar3 = *param_2;
        if ((bVar3 & 1) != 0) {
          pcVar7[1] = pcVar7[1] | 8;
          pcVar7[0x16] = param_2[1];
          *(uint64_t *)(pcVar7 + 0x17) = *(uint64_t *)(param_2 + 2);
          *(int16_t *)(pcVar7 + 0x1f) = *(int16_t *)(param_2 + 10);
          bVar3 = *param_2;
        }
        uVar4 = 0;
        if ((bVar3 & 2) != 0) {
          pcVar7[1] = pcVar7[1] | 4;
          pcVar7[0xb] = param_2[0xc];
          *(uint64_t *)(pcVar7 + 0xc) = *(uint64_t *)(param_2 + 0xd);
          *(int16_t *)(pcVar7 + 0x14) = *(int16_t *)(param_2 + 0x15);
        }
      }
    }
  }
  bVar3 = *param_2;
  if ((bVar3 & 1) != 0) {
    pcVar5[0x23f1] = param_2[1];
    *(uint64_t *)(pcVar5 + 0x23f2) = *(uint64_t *)(param_2 + 2);
    *(int16_t *)(pcVar5 + 0x23fa) = *(int16_t *)(param_2 + 10);
    bVar3 = *param_2;
  }
  if ((bVar3 & 2) != 0) {
    pcVar5[0x23fc] = param_2[0xc];
    *(uint64_t *)(pcVar5 + 0x23fd) = *(uint64_t *)(param_2 + 0xd);
    *(int16_t *)(pcVar5 + 0x2405) = *(int16_t *)(param_2 + 0x15);
  }
  return uVar4;
}



int32_t FUN_1808ef750(uint64_t param_1,uint64_t param_2)

{
  char cVar1;
  int32_t uVar2;
  char *pcVar3;
  
  uVar2 = 0;
  pcVar3 = (char *)func_0x0001808f0dd0(param_1,0);
  if (pcVar3 == (char *)0x0) {
    return 0x8001002d;
  }
  if ((*pcVar3 != '\0') &&
     (cVar1 = func_0x0001808f0e30(*(int16_t *)(pcVar3 + 2),*(int16_t *)(pcVar3 + 4)),
     cVar1 != '\0')) {
    uVar2 = FUN_1808ef7d0(pcVar3,(param_2 & 4) == 0);
  }
  return uVar2;
}



int32_t FUN_1808ef7d0(char *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int32_t uVar3;
  char *pcVar4;
  int64_t lVar5;
  char cVar6;
  
  if (param_1 == (char *)0x0) {
    return 0x8001002d;
  }
  cVar6 = (char)param_2;
  uVar3 = 0;
  if (*param_1 != '\0') {
    cVar2 = func_0x0001808f0e30(*(int16_t *)(param_1 + 2),*(int16_t *)(param_1 + 4));
    if (cVar2 != '\0') {
      if (*(char **)(param_1 + 0x23c8) == (char *)0x0) {
        pcVar4 = param_1 + 0x2368;
        *(char **)(param_1 + 0x23c8) = pcVar4;
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4[4] = '\0';
        pcVar4[5] = '\0';
        pcVar4[6] = '\0';
        pcVar4[7] = '\0';
        param_1[0x2370] = '\0';
        param_1[0x2371] = '\0';
        param_1[0x2372] = '\0';
        param_1[0x2373] = '\0';
        param_1[0x2374] = '\0';
        param_1[0x2375] = '\0';
        param_1[0x2376] = '\0';
        param_1[0x2377] = '\0';
        param_1[0x2378] = '\0';
        param_1[0x2379] = '\0';
        param_1[0x237a] = '\0';
        param_1[0x237b] = '\0';
        param_1[0x237c] = '\0';
        param_1[0x237d] = '\0';
        param_1[0x237e] = '\0';
        param_1[0x237f] = '\0';
        param_1[0x2380] = '\0';
        param_1[0x2381] = '\0';
        param_1[0x2382] = '\0';
        param_1[0x2383] = '\0';
        param_1[0x2384] = '\0';
        param_1[0x2385] = '\0';
        param_1[0x2386] = '\0';
        param_1[0x2387] = '\0';
        param_1[0x2388] = '\0';
        param_1[0x2389] = '\0';
        param_1[0x238a] = '\0';
        param_1[0x238b] = '\0';
        param_1[0x238c] = '\0';
        param_1[0x238d] = '\0';
        param_1[0x238e] = '\0';
        param_1[0x238f] = '\0';
        param_1[0x2390] = '\0';
        param_1[0x2391] = '\0';
        param_1[0x2392] = '\0';
        param_1[0x2393] = '\0';
        param_1[0x2394] = '\0';
        param_1[0x2395] = '\0';
        param_1[0x2396] = '\0';
        param_1[0x2397] = '\0';
        bVar1 = true;
      }
      else {
        pcVar4 = *(char **)(param_1 + 0x23d0);
        if (pcVar4 == (char *)0x0) {
          lVar5 = 0x2398;
          if (*(char **)(param_1 + 0x23c8) != param_1 + 0x2368) {
            lVar5 = 0x2368;
          }
          pcVar4 = param_1 + lVar5;
          *(char **)(param_1 + 0x23d0) = pcVar4;
        }
        bVar1 = false;
      }
      if (pcVar4 == (char *)0x0) {
        return 0x80010004;
      }
      if (bVar1) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4[4] = '\0';
        pcVar4[5] = '\0';
        pcVar4[6] = '\0';
        pcVar4[7] = '\0';
        pcVar4[8] = '\0';
        pcVar4[9] = '\0';
        pcVar4[10] = '\0';
        pcVar4[0xb] = '\0';
        pcVar4[0xc] = '\0';
        pcVar4[0xd] = '\0';
        pcVar4[0xe] = '\0';
        pcVar4[0xf] = '\0';
        pcVar4[0x10] = '\0';
        pcVar4[0x11] = '\0';
        pcVar4[0x12] = '\0';
        pcVar4[0x13] = '\0';
        pcVar4[0x14] = '\0';
        pcVar4[0x15] = '\0';
        pcVar4[0x16] = '\0';
        pcVar4[0x17] = '\0';
        pcVar4[0x18] = '\0';
        pcVar4[0x19] = '\0';
        pcVar4[0x1a] = '\0';
        pcVar4[0x1b] = '\0';
        pcVar4[0x1c] = '\0';
        pcVar4[0x1d] = '\0';
        pcVar4[0x1e] = '\0';
        pcVar4[0x1f] = '\0';
        pcVar4[0x20] = '\0';
        pcVar4[0x21] = '\0';
        pcVar4[0x22] = '\0';
        pcVar4[0x23] = '\0';
        pcVar4[0x24] = '\0';
        pcVar4[0x25] = '\0';
        pcVar4[0x26] = '\0';
        pcVar4[0x27] = '\0';
        pcVar4[0x28] = '\0';
        pcVar4[0x29] = '\0';
        pcVar4[0x2a] = '\0';
        pcVar4[0x2b] = '\0';
        pcVar4[0x2c] = '\0';
        pcVar4[0x2d] = '\0';
        pcVar4[0x2e] = '\0';
        pcVar4[0x2f] = '\0';
        *pcVar4 = '\x02';
        pcVar4[2] = '\x03';
        pcVar4[9] = cVar6;
        if (param_2 == 1) {
          pcVar4[10] = '\x10';
        }
        if (param_1[10] == '\0') {
          pcVar4[10] = pcVar4[10] | 0x80;
        }
        uVar3 = FUN_1808f22b0(*(int32_t *)(param_1 + 0x14),pcVar4,0x30,FUN_1808efc90);
      }
      else {
        pcVar4[2] = pcVar4[2] | 3;
        *pcVar4 = '\x02';
        pcVar4[9] = cVar6;
        if (param_2 == 0) {
          pcVar4[10] = '\0';
        }
        else if (param_2 == 1) {
          pcVar4[10] = '\x10';
        }
        uVar3 = 0;
        if (param_1[10] == '\0') {
          pcVar4[10] = pcVar4[10] | 0x80;
        }
      }
    }
  }
  if (param_2 == 0) {
    param_1[9] = cVar6;
    return uVar3;
  }
  if (param_2 == 1) {
    param_1[9] = cVar6;
  }
  return uVar3;
}



int32_t FUN_1808ef960(uint64_t param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int32_t uVar3;
  char *pcVar4;
  int64_t lVar5;
  char *pcVar6;
  
  uVar3 = 0;
  pcVar4 = (char *)func_0x0001808f0dd0(param_1,0);
  if (pcVar4 == (char *)0x0) {
    return 0x8001002d;
  }
  pcVar4[6] = param_2;
  if (*pcVar4 != '\0') {
    cVar2 = func_0x0001808f0e30(*(int16_t *)(pcVar4 + 2),*(int16_t *)(pcVar4 + 4));
    if (cVar2 != '\0') {
      if (*(char **)(pcVar4 + 0x23c8) == (char *)0x0) {
        pcVar6 = pcVar4 + 0x2368;
        *(char **)(pcVar4 + 0x23c8) = pcVar6;
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6[2] = '\0';
        pcVar6[3] = '\0';
        pcVar6[4] = '\0';
        pcVar6[5] = '\0';
        pcVar6[6] = '\0';
        pcVar6[7] = '\0';
        pcVar4[0x2370] = '\0';
        pcVar4[0x2371] = '\0';
        pcVar4[0x2372] = '\0';
        pcVar4[0x2373] = '\0';
        pcVar4[0x2374] = '\0';
        pcVar4[0x2375] = '\0';
        pcVar4[0x2376] = '\0';
        pcVar4[0x2377] = '\0';
        pcVar4[0x2378] = '\0';
        pcVar4[0x2379] = '\0';
        pcVar4[0x237a] = '\0';
        pcVar4[0x237b] = '\0';
        pcVar4[0x237c] = '\0';
        pcVar4[0x237d] = '\0';
        pcVar4[0x237e] = '\0';
        pcVar4[0x237f] = '\0';
        pcVar4[0x2380] = '\0';
        pcVar4[0x2381] = '\0';
        pcVar4[0x2382] = '\0';
        pcVar4[0x2383] = '\0';
        pcVar4[0x2384] = '\0';
        pcVar4[0x2385] = '\0';
        pcVar4[0x2386] = '\0';
        pcVar4[0x2387] = '\0';
        pcVar4[0x2388] = '\0';
        pcVar4[0x2389] = '\0';
        pcVar4[0x238a] = '\0';
        pcVar4[0x238b] = '\0';
        pcVar4[0x238c] = '\0';
        pcVar4[0x238d] = '\0';
        pcVar4[0x238e] = '\0';
        pcVar4[0x238f] = '\0';
        pcVar4[0x2390] = '\0';
        pcVar4[0x2391] = '\0';
        pcVar4[0x2392] = '\0';
        pcVar4[0x2393] = '\0';
        pcVar4[0x2394] = '\0';
        pcVar4[0x2395] = '\0';
        pcVar4[0x2396] = '\0';
        pcVar4[0x2397] = '\0';
        bVar1 = true;
      }
      else {
        pcVar6 = *(char **)(pcVar4 + 0x23d0);
        if (pcVar6 == (char *)0x0) {
          lVar5 = 0x2398;
          if (*(char **)(pcVar4 + 0x23c8) != pcVar4 + 0x2368) {
            lVar5 = 0x2368;
          }
          pcVar6 = pcVar4 + lVar5;
          *(char **)(pcVar4 + 0x23d0) = pcVar6;
        }
        bVar1 = false;
      }
      if (pcVar6 == (char *)0x0) {
        return 0x80010004;
      }
      if (bVar1) {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6[2] = '\0';
        pcVar6[3] = '\0';
        pcVar6[4] = '\0';
        pcVar6[5] = '\0';
        pcVar6[6] = '\0';
        pcVar6[7] = '\0';
        pcVar6[8] = '\0';
        pcVar6[9] = '\0';
        pcVar6[10] = '\0';
        pcVar6[0xb] = '\0';
        pcVar6[0xc] = '\0';
        pcVar6[0xd] = '\0';
        pcVar6[0xe] = '\0';
        pcVar6[0xf] = '\0';
        pcVar6[0x10] = '\0';
        pcVar6[0x11] = '\0';
        pcVar6[0x12] = '\0';
        pcVar6[0x13] = '\0';
        pcVar6[0x14] = '\0';
        pcVar6[0x15] = '\0';
        pcVar6[0x16] = '\0';
        pcVar6[0x17] = '\0';
        pcVar6[0x18] = '\0';
        pcVar6[0x19] = '\0';
        pcVar6[0x1a] = '\0';
        pcVar6[0x1b] = '\0';
        pcVar6[0x1c] = '\0';
        pcVar6[0x1d] = '\0';
        pcVar6[0x1e] = '\0';
        pcVar6[0x1f] = '\0';
        pcVar6[0x20] = '\0';
        pcVar6[0x21] = '\0';
        pcVar6[0x22] = '\0';
        pcVar6[0x23] = '\0';
        pcVar6[0x24] = '\0';
        pcVar6[0x25] = '\0';
        pcVar6[0x26] = '\0';
        pcVar6[0x27] = '\0';
        pcVar6[0x28] = '\0';
        pcVar6[0x29] = '\0';
        pcVar6[0x2a] = '\0';
        pcVar6[0x2b] = '\0';
        pcVar6[0x2c] = '\0';
        pcVar6[0x2d] = '\0';
        pcVar6[0x2e] = '\0';
        pcVar6[0x2f] = '\0';
        *pcVar6 = '\x02';
        uVar3 = FUN_1808f22b0(*(int32_t *)(pcVar4 + 0x14),pcVar6,0x30,FUN_1808efc90);
      }
    }
  }
  return uVar3;
}








