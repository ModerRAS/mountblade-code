#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part078.c - 9 个函数

// 函数: void FUN_1803f4d50(longlong *param_1)
void FUN_1803f4d50(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  param_1 = (longlong *)*param_1;
  uVar1 = 0;
  uVar3 = uVar1;
  if (param_1[1] - *param_1 >> 5 != 0) {
    do {
      FUN_1803ee190(param_1[4],uVar1 * 0x20 + *param_1);
      uVar2 = (int)uVar3 + 1;
      uVar1 = (ulonglong)(int)uVar2;
      uVar3 = (ulonglong)uVar2;
    } while (uVar1 < (ulonglong)(param_1[1] - *param_1 >> 5));
  }
  LOCK();
  *(int *)(param_1[4] + 0x430) = *(int *)(param_1[4] + 0x430) + (int)param_1[5];
  UNLOCK();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1803f4dc0(longlong *param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_3 == 3) {
    lVar4 = 0x180c070e0;
  }
  else if (param_3 == 4) {
    lVar4 = *param_1;
  }
  else {
    if (param_3 == 0) {
      lVar4 = *param_1;
      if (lVar4 != 0) {
        FUN_18005d580(lVar4);
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar4);
      }
    }
    else {
      if (param_3 == 1) {
        plVar2 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,0x30,8,system_allocation_flags,0xfffffffffffffffe);
        param_2 = (longlong *)*param_2;
        lVar4 = param_2[1] - *param_2 >> 5;
        uVar1 = *(uint *)(param_2 + 3);
        *(uint *)(plVar2 + 3) = uVar1;
        if (lVar4 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = FUN_18062b420(system_memory_pool_ptr,lVar4 << 5,uVar1 & 0xff);
        }
        *plVar2 = lVar3;
        plVar2[1] = lVar3;
        plVar2[2] = lVar4 * 0x20 + lVar3;
        lVar4 = *plVar2;
        lVar3 = param_2[1];
        for (lVar5 = *param_2; lVar5 != lVar3; lVar5 = lVar5 + 0x20) {
          FUN_180627ae0(lVar4,lVar5);
          lVar4 = lVar4 + 0x20;
        }
        plVar2[1] = lVar4;
        plVar2[4] = param_2[4];
        *(int *)(plVar2 + 5) = (int)param_2[5];
        *param_1 = (longlong)plVar2;
        return 0;
      }
      if (param_3 == 2) {
        *param_1 = *param_2;
        *param_2 = 0;
        return 0;
      }
    }
    lVar4 = 0;
  }
  return lVar4;
}



longlong * FUN_1803f4f30(float *param_1,longlong *param_2,uint64_t *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint64_t auStack_48 [2];
  uint64_t uStack_38;
  ulonglong uStack_30;
  
  uStack_38 = 0xfffffffffffffffe;
  puVar4 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar4 = (uint64_t *)*param_3;
  }
  uVar10 = 0xcbf29ce484222325;
  for (uVar5 = 0; uVar5 < (ulonglong)param_3[2]; uVar5 = uVar5 + 1) {
    uVar10 = (uVar10 ^ *(byte *)(uVar5 + (longlong)puVar4)) * 0x100000001b3;
  }
  uVar5 = *(ulonglong *)(param_1 + 0xc) & uVar10;
  uStack_30 = uVar5;
  if (*(longlong *)(*(longlong *)(param_1 + 6) + uVar5 * 0x10) == *(longlong *)(param_1 + 2)) {
    lVar7 = *(longlong *)(param_1 + 2);
  }
  else {
    lVar7 = **(longlong **)(*(longlong *)(param_1 + 6) + 8 + uVar5 * 0x10);
  }
  do {
    if (lVar7 == *(longlong *)(*(longlong *)(param_1 + 6) + uVar5 * 0x10)) {
      lVar1 = *param_4;
      if (lVar7 != lVar1) {
        *(longlong *)param_4[1] = lVar1;
        **(longlong **)(lVar1 + 8) = lVar7;
        **(uint64_t **)(lVar7 + 8) = param_4;
        lVar2 = *(longlong *)(lVar7 + 8);
        *(uint64_t *)(lVar7 + 8) = *(uint64_t *)(lVar1 + 8);
        *(longlong *)(lVar1 + 8) = param_4[1];
        param_4[1] = lVar2;
      }
      lVar1 = *(longlong *)(param_1 + 6);
      lVar2 = *(longlong *)(lVar1 + uVar5 * 0x10);
      if (lVar2 == *(longlong *)(param_1 + 2)) {
        *(longlong **)(lVar1 + uVar5 * 0x10) = param_4;
        *(longlong **)(*(longlong *)(param_1 + 6) + 8 + uVar5 * 0x10) = param_4;
      }
      else if (lVar2 == lVar7) {
        *(longlong **)(lVar1 + uVar5 * 0x10) = param_4;
      }
      else {
        plVar6 = (longlong *)**(uint64_t **)(lVar1 + 8 + uVar5 * 0x10);
        *(longlong **)(lVar1 + 8 + uVar5 * 0x10) = plVar6;
        if (plVar6 != param_4) {
          *(uint64_t *)(*(longlong *)(param_1 + 6) + 8 + uVar5 * 0x10) =
               *(uint64_t *)(*(longlong *)(*(longlong *)(param_1 + 6) + 8 + uVar5 * 0x10) + 8);
        }
      }
      uVar5 = *(ulonglong *)(param_1 + 0xe);
      fVar8 = (float)*(longlong *)(param_1 + 4);
      if (*(longlong *)(param_1 + 4) < 0) {
        fVar8 = fVar8 + 1.8446744e+19;
      }
      fVar9 = (float)(longlong)uVar5;
      if ((longlong)uVar5 < 0) {
        fVar9 = fVar9 + 1.8446744e+19;
      }
      if (*param_1 <= fVar8 / fVar9 && fVar8 / fVar9 != *param_1) {
        if (uVar5 < 0x200) {
          uVar5 = uVar5 * 8;
        }
        else {
          auStack_48[0] = 0x7fffffffffffffff;
          if (uVar5 < 0xfffffffffffffff) {
            uVar5 = uVar5 * 2;
          }
        }
        plVar11 = param_4;
        FUN_1803f3480(param_1);
        plVar6 = *(longlong **)(param_1 + 2);
        if ((longlong *)*plVar6 != plVar6) {
          lVar7 = plVar6[1];
          do {
            lVar1 = **(longlong **)(param_1 + 2);
            FUN_1803f4f30(param_1,auStack_48,lVar1 + 0x10,lVar1,uVar10,uVar5,plVar11);
          } while (lVar1 != lVar7);
        }
      }
      *param_2 = (longlong)param_4;
      *(int8_t *)(param_2 + 1) = 1;
      return param_2;
    }
    lVar7 = *(longlong *)(lVar7 + 8);
    plVar6 = (longlong *)(lVar7 + 0x10);
    if (0xf < *(ulonglong *)(lVar7 + 0x28)) {
      plVar6 = (longlong *)*plVar6;
    }
    puVar4 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar4 = (uint64_t *)*param_3;
    }
  } while ((param_3[2] != *(longlong *)(lVar7 + 0x20)) ||
          (iVar3 = memcmp(puVar4,plVar6), iVar3 != 0));
  *(longlong *)param_4[1] = *param_4;
  lVar1 = param_4[1];
  *(longlong *)(*param_4 + 8) = lVar1;
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + -1;
  FUN_1803f3690(lVar1,param_4);
  *param_2 = lVar7;
  *(int8_t *)(param_2 + 1) = 0;
  return param_2;
}



longlong FUN_1803f5220(void)

{
  int *piVar1;
  longlong lVar2;
  longlong in_R9;
  
  lVar2 = FUN_1803f4cb0();
  FUN_18018b350(lVar2 + 0x10,in_R9);
  *(uint64_t *)(lVar2 + 0x30) = 0;
  *(uint64_t *)(lVar2 + 0x38) = 0;
  if (*(longlong *)(in_R9 + 0x28) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(in_R9 + 0x28) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(uint64_t *)(lVar2 + 0x30) = *(uint64_t *)(in_R9 + 0x20);
  *(uint64_t *)(lVar2 + 0x38) = *(uint64_t *)(in_R9 + 0x28);
  return lVar2;
}



longlong * FUN_1803f52c0(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  plVar3 = param_3 + 2;
  if (0xf < (ulonglong)param_3[5]) {
    plVar3 = (longlong *)*plVar3;
  }
  uVar5 = 0;
  uVar6 = 0xcbf29ce484222325;
  if (param_3[4] != 0) {
    do {
      pbVar1 = (byte *)(uVar5 + (longlong)plVar3);
      uVar5 = uVar5 + 1;
      uVar6 = (uVar6 ^ *pbVar1) * 0x100000001b3;
    } while (uVar5 < (ulonglong)param_3[4]);
  }
  lVar4 = (*(ulonglong *)(param_1 + 0x30) & uVar6) * 0x10;
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar4);
  if ((longlong *)plVar3[1] == param_3) {
    if ((longlong *)*plVar3 == param_3) {
      *plVar3 = *(longlong *)(param_1 + 8);
      *(uint64_t *)(lVar4 + 8 + *(longlong *)(param_1 + 0x18)) = *(uint64_t *)(param_1 + 8);
    }
    else {
      plVar3[1] = param_3[1];
    }
  }
  else if ((longlong *)*plVar3 == param_3) {
    *plVar3 = *param_3;
  }
  lVar4 = *param_3;
  *(longlong *)param_3[1] = lVar4;
  lVar2 = *param_3;
  *(longlong *)(lVar2 + 8) = param_3[1];
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  FUN_1803f3690(lVar2,param_3);
  *param_2 = lVar4;
  return param_2;
}






// 函数: void FUN_1803f53b0(longlong *param_1)
void FUN_1803f53b0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  LOCK();
  plVar1 = param_1 + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)*param_1)();
    LOCK();
    piVar2 = (int *)((longlong)param_1 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return;
}






// 函数: void FUN_1803f5400(uint64_t *param_1,uint64_t param_2,ulonglong param_3)
void FUN_1803f5400(uint64_t *param_1,uint64_t param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = param_1[3];
  lVar3 = param_1[2];
  if (param_3 <= uVar2 - lVar3) {
    param_1[2] = lVar3 + param_3;
    if (0xf < uVar2) {
      param_1 = (uint64_t *)*param_1;
    }
                    // WARNING: Subroutine does not return
    memmove((longlong)param_1 + lVar3);
  }
  if (param_3 <= 0x7fffffffffffffffU - lVar3) {
    uVar6 = lVar3 + param_3 | 0xf;
    uVar7 = 0x7fffffffffffffff;
    if (((uVar6 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) &&
       (uVar1 = (uVar2 >> 1) + uVar2, uVar7 = uVar6, uVar6 < uVar1)) {
      uVar7 = uVar1;
    }
    uVar5 = FUN_180067110(uVar7 + 1);
    param_1[2] = lVar3 + param_3;
    param_1[3] = uVar7;
    if (0xf < uVar2) {
                    // WARNING: Subroutine does not return
      memcpy(uVar5,*param_1,lVar3);
    }
                    // WARNING: Subroutine does not return
    memcpy(uVar5,param_1,lVar3);
  }
  FUN_1800670f0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}






// 函数: void FUN_1803f546e(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_1803f546e(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  ulonglong uVar1;
  uint64_t uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  ulonglong unaff_RBP;
  uint64_t *unaff_RDI;
  longlong unaff_R14;
  
  uVar3 = unaff_R14 + param_3 | 0xf;
  if (((uVar3 <= unaff_RBX) && (unaff_RBP <= unaff_RBX - (unaff_RBP >> 1))) &&
     (uVar1 = (unaff_RBP >> 1) + unaff_RBP, unaff_RBX = uVar3, uVar3 < uVar1)) {
    unaff_RBX = uVar1;
  }
  uVar2 = FUN_180067110(unaff_RBX + 1);
  unaff_RDI[2] = unaff_R14 + param_3;
  unaff_RDI[3] = unaff_RBX;
  if (0xf < unaff_RBP) {
                    // WARNING: Subroutine does not return
    memcpy(uVar2,*unaff_RDI);
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar2);
}






// 函数: void FUN_1803f5547(void)
void FUN_1803f5547(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f5570(char *param_1,uint param_2)
void FUN_1803f5570(char *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char *pcVar3;
  int8_t auStack_68 [32];
  int32_t uStack_48;
  uint64_t uStack_40;
  char *pcStack_38;
  char acStack_1c [4];
  ulonglong uStack_18;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_68;
  uStack_48 = 0;
  pcVar3 = acStack_1c + 1;
  uVar2 = (ulonglong)param_2;
  do {
    pcVar3 = pcVar3 + -1;
    uVar1 = uVar2 / 10;
    *pcVar3 = (char)uVar2 + (char)uVar1 * -10 + '0';
    uVar2 = uVar1;
  } while ((int)uVar1 != 0);
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\x0f';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  *param_1 = (char)uVar1;
  pcStack_38 = param_1;
  if (pcVar3 != acStack_1c + 1) {
    FUN_1800671b0(param_1,pcVar3,acStack_1c + (1 - (longlong)pcVar3));
  }
  uStack_48 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1803f5640(uint64_t *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint64_t *puVar12;
  int8_t auStack_90 [24];
  int8_t auStack_78 [24];
  int8_t auStack_60 [24];
  int8_t auStack_48 [32];
  
  puVar5 = (uint64_t *)0x0;
  uVar6 = 0xf;
  uVar11 = 0xf;
  uVar7 = 1;
  uVar10 = 1;
  do {
    uVar11 = uVar11 | uVar11 >> (((byte)uVar10 & 7) << 3);
    uVar10 = uVar10 * 2;
  } while (uVar10 < 8);
  param_1[9] = uVar11 + 1;
  if (uVar11 + 1 < 0x401) {
    puVar4 = (uint64_t *)FUN_1801ee700();
    if (puVar4 == (uint64_t *)0x0) {
      FUN_180287f70(auStack_78);
                    // WARNING: Subroutine does not return
      _CxxThrowException(auStack_78,&unknown_var_2600_ptr);
    }
    puVar4[0x10] = puVar4;
  }
  else {
    param_1[9] = 0x200;
    puVar8 = puVar5;
    puVar9 = puVar5;
    puVar12 = puVar5;
    do {
      lVar1 = param_1[9];
      lVar2 = FUN_18062b420(system_memory_pool_ptr,lVar1 * 0x10 + 0xaa,3);
      puVar3 = puVar5;
      if (lVar2 != 0) {
        puVar3 = (uint64_t *)((ulonglong)(-(int)lVar2 & 7) + lVar2);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[0x10] = 0;
        puVar3[0x11] = (ulonglong)(-(int)(puVar3 + 0x14) & 3) + (longlong)(puVar3 + 0x14);
        puVar3[0x12] = lVar1 + -1;
        puVar3[0x13] = lVar2;
      }
      if (puVar3 == (uint64_t *)0x0) {
        FUN_180287f70(auStack_90);
                    // WARNING: Subroutine does not return
        _CxxThrowException(auStack_90,&unknown_var_2600_ptr);
      }
      puVar4 = puVar3;
      if (puVar8 != (uint64_t *)0x0) {
        puVar9[0x10] = puVar3;
        puVar4 = puVar8;
      }
      puVar3[0x10] = puVar4;
      puVar12 = (uint64_t *)((longlong)puVar12 + 1);
      puVar8 = puVar4;
      puVar9 = puVar3;
    } while (puVar12 != (uint64_t *)0x2);
  }
  *param_1 = puVar4;
  param_1[8] = puVar4;
  LOCK();
  system_system_config_config = 0;
  UNLOCK();
  do {
    uVar6 = uVar6 | uVar6 >> (((byte)uVar7 & 7) << 3);
    uVar7 = uVar7 * 2;
  } while (uVar7 < 8);
  param_1[0x13] = uVar6 + 1;
  if (uVar6 + 1 < 0x401) {
    puVar4 = (uint64_t *)FUN_1801ee610();
    if (puVar4 == (uint64_t *)0x0) {
      FUN_180287f70(auStack_48);
                    // WARNING: Subroutine does not return
      _CxxThrowException(auStack_48,&unknown_var_2600_ptr);
    }
    puVar4[0x10] = puVar4;
  }
  else {
    param_1[0x13] = 0x200;
    puVar8 = puVar5;
    puVar9 = puVar5;
    puVar12 = puVar5;
    do {
      lVar1 = param_1[0x13];
      lVar2 = FUN_18062b420(system_memory_pool_ptr,lVar1 * 8 + 0xaa,3);
      puVar3 = puVar5;
      if (lVar2 != 0) {
        puVar3 = (uint64_t *)((ulonglong)(-(int)lVar2 & 7) + lVar2);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[0x10] = 0;
        puVar3[0x11] = (ulonglong)(-(int)(puVar3 + 0x14) & 3) + (longlong)(puVar3 + 0x14);
        puVar3[0x12] = lVar1 + -1;
        puVar3[0x13] = lVar2;
      }
      if (puVar3 == (uint64_t *)0x0) {
        FUN_180287f70(auStack_60);
                    // WARNING: Subroutine does not return
        _CxxThrowException(auStack_60,&unknown_var_2600_ptr);
      }
      puVar4 = puVar3;
      if (puVar9 != (uint64_t *)0x0) {
        puVar12[0x10] = puVar3;
        puVar4 = puVar9;
      }
      puVar3[0x10] = puVar4;
      puVar8 = (uint64_t *)((longlong)puVar8 + 1);
      puVar9 = puVar4;
      puVar12 = puVar3;
    } while (puVar8 != (uint64_t *)0x2);
  }
  param_1[10] = puVar4;
  param_1[0x12] = puVar4;
  LOCK();
  system_system_config_config = 0;
  UNLOCK();
  return param_1;
}



ulonglong FUN_1803f5970(uint64_t param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = param_2;
  if (0x7f < param_2) {
    uVar2 = param_2 - 0x80 | 0xe000;
  }
  uVar1 = MapVirtualKeyA(uVar2,3);
  switch((int)uVar1) {
  case 0xc:
    if (param_2 < 0x80) {
      return 0x65;
    }
    break;
  case 0xd:
    uVar1 = uVar1 & 0xffffffff;
    if (0x7f < param_2) {
      uVar1 = 0x6c;
    }
    break;
  case 0x21:
    if (param_2 < 0x80) {
      return 0x69;
    }
    break;
  case 0x22:
    if (param_2 < 0x80) {
      return 99;
    }
    break;
  case 0x23:
    if (param_2 < 0x80) {
      return 0x61;
    }
    break;
  case 0x24:
    if (param_2 < 0x80) {
      return 0x67;
    }
    break;
  case 0x25:
    if (param_2 < 0x80) {
      return 100;
    }
    break;
  case 0x26:
    if (param_2 < 0x80) {
      return 0x68;
    }
    break;
  case 0x27:
    if (param_2 < 0x80) {
      return 0x66;
    }
    break;
  case 0x28:
    if (param_2 < 0x80) {
      return 0x62;
    }
    break;
  case 0x2d:
    if (param_2 < 0x80) {
      return 0x60;
    }
    break;
  case 0x2e:
    if (param_2 < 0x80) {
      return 0x6e;
    }
  }
  return uVar1;
}



uint64_t FUN_1803f5b20(uint64_t param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x70,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1803f5b70(uint64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x70,8,3,0xfffffffffffffffe);
  FUN_1803456e0(puVar1,param_2,param_1);
  *puVar1 = &unknown_var_2376_ptr;
  return puVar1;
}



uint64_t *
FUN_1803f5bd0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_2896_ptr;
  FUN_1801f9920();
  if ((param_2 & 1) != 0) {
    free(param_1,0x470,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f5c20(longlong param_1,longlong param_2)
void FUN_1803f5c20(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  uint64_t *puVar12;
  int iVar13;
  int8_t auStack_1c8 [32];
  int aiStack_1a8 [2];
  int iStack_1a0;
  int iStack_19c;
  uint64_t uStack_198;
  longlong *plStack_190;
  int iStack_188;
  int iStack_184;
  int32_t uStack_180;
  int32_t uStack_17c;
  int32_t uStack_178;
  int32_t uStack_174;
  int32_t uStack_170;
  int32_t uStack_16c;
  int32_t uStack_168;
  int16_t uStack_164;
  int8_t uStack_162;
  int32_t uStack_161;
  int16_t uStack_15d;
  int32_t uStack_158;
  int8_t uStack_154;
  longlong *plStack_150;
  longlong *plStack_148;
  uint64_t uStack_140;
  int8_t auStack_138 [8];
  int8_t auStack_130 [28];
  uint64_t uStack_114;
  uint64_t uStack_10c;
  void *puStack_f8;
  int8_t *puStack_f0;
  int32_t uStack_e8;
  int8_t auStack_e0 [136];
  ulonglong uStack_58;
  
  uStack_140 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1c8;
  cVar9 = (**(code **)(**(longlong **)(param_2 + 0x3580) + 0x78))();
  if (cVar9 == '\0') goto LAB_1803f606d;
  FUN_1801f9270(param_1,param_2);
  uStack_180 = 1;
  uStack_17c = 1;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_168 = 0x3f800000;
  uStack_164 = 0x100;
  uStack_161 = 0;
  uStack_15d = 0;
  uStack_158 = 0xffffffff;
  uStack_154 = 0;
  uStack_178 = *(int32_t *)(param_1 + 0x70);
  uStack_162 = 1;
  FUN_1802c8e90(*(uint64_t *)(param_2 + 0x99b8),&plStack_190);
  lVar11 = FUN_18023a940(plStack_190);
  lVar5 = *(longlong *)(system_parameter_buffer + 0x7ab8);
  iStack_1a0 = *(int *)(param_2 + 0x3588);
  iStack_19c = *(int *)(param_2 + 0x358c);
  iVar4 = *(int *)(SYSTEM_STATE_MANAGER + 0x540);
  iVar13 = 2;
  if (iVar4 != 3) {
    if (iVar4 == 2) {
      iVar13 = 1;
    }
    else {
      iVar13 = 0;
      if ((iVar4 != 1) && (iVar13 = 2, iVar4 == 4)) {
        iVar13 = 3;
      }
    }
  }
  puVar1 = (ulonglong *)(param_1 + 0x460);
  iStack_188 = iStack_1a0;
  iStack_184 = iStack_19c;
  if ((((*(int *)puVar1 != iStack_1a0) || (*(int *)(param_1 + 0x464) != iStack_19c)) ||
      (*(int *)(param_1 + 0x46c) != iVar13)) || (*(char *)(param_1 + 0x469) != '\0')) {
    if (*(longlong *)(lVar5 + 0xc0) == 0) {
      (**(code **)(**(longlong **)(lVar11 + 8) + 0x50))(*(longlong **)(lVar11 + 8),auStack_130);
      uStack_114 = 3;
      uStack_10c = 0x20000;
      (**(code **)(**(longlong **)(lVar5 + 200) + 0x28))
                (*(longlong **)(lVar5 + 200),auStack_130,0,lVar5 + 0xc0);
    }
    *(int8_t *)(param_1 + 0x469) = 0;
    *(int *)(param_1 + 0x46c) = iVar13;
    puStack_f8 = &unknown_var_3432_ptr;
    puStack_f0 = auStack_e0;
    auStack_e0[0] = 0;
    uStack_e8 = 4;
    strcpy_s(auStack_e0,0x80,&unknown_var_2736_ptr);
    lVar11 = *(longlong *)(param_1 + 0x428);
    if (((lVar11 == 0) || (cVar9 = func_0x0001800ba3b0(lVar11 + 0x108,&iStack_188), cVar9 == '\0'))
       || (*(int *)(lVar11 + 0x380) == 0)) {
      puVar12 = (uint64_t *)FUN_1800b1230(system_resource_state,&plStack_148,&puStack_f8,&iStack_188);
      uVar6 = *puVar12;
      *puVar12 = 0;
      plStack_150 = *(longlong **)(param_1 + 0x428);
      *(uint64_t *)(param_1 + 0x428) = uVar6;
      if (plStack_150 != (longlong *)0x0) {
        (**(code **)(*plStack_150 + 0x38))();
      }
      if (plStack_148 != (longlong *)0x0) {
        (**(code **)(*plStack_148 + 0x38))();
      }
    }
    _Thrd_id();
    puStack_f8 = &unknown_var_720_ptr;
    uVar8 = CONCAT44(iStack_19c,iStack_1a0);
    *puVar1 = uVar8;
    cVar9 = *(char *)(lVar5 + 0xd8);
    if (cVar9 != '\0') {
      if (*(longlong *)(lVar5 + 0xe8) != 0) {
        FUN_1802aa4b0(lVar5);
        if (*(longlong *)(lVar5 + 0xe8) != 0) {
          NVSDK_NGX_D3D11_ReleaseFeature();
        }
        *(uint64_t *)(lVar5 + 0xe8) = 0;
        cVar9 = *(char *)(lVar5 + 0xd8);
      }
      fVar2 = *(float *)(param_2 + 0x148);
      fVar3 = *(float *)(param_2 + 0x144);
      if (cVar9 != '\0') {
        aiStack_1a8[0] = 0;
        uVar10 = (**(code **)(**(longlong **)(lVar5 + 0xe0) + 0x58))
                           (*(longlong **)(lVar5 + 0xe0),&unknown_var_3760_ptr,aiStack_1a8);
        if (((uVar10 & 0xfff00000) != 0xbad00000) && (aiStack_1a8[0] != 0)) {
          *(int8_t *)(lVar5 + 0xd9) = 1;
          if ((*(char *)(lVar5 + 0xd8) != '\0') && (-1 < *(int *)(SYSTEM_STATE_MANAGER + 0x540) + -1)) {
            FUN_1802aa800(lVar5,&uStack_198,&iStack_1a0);
            uVar8 = uStack_198;
          }
          uStack_198 = uVar8;
          uVar6 = *(uint64_t *)(lVar5 + 0xd0);
          uVar7 = *(uint64_t *)(lVar5 + 0xe0);
          NVSDK_NGX_Parameter_SetUI(uVar7,&system_data_9e30,uStack_198 & 0xffffffff);
          NVSDK_NGX_Parameter_SetUI(uVar7,&system_data_9e38,uStack_198._4_4_);
          NVSDK_NGX_Parameter_SetUI(uVar7,&unknown_var_4184_ptr,iStack_1a0);
          NVSDK_NGX_Parameter_SetUI(uVar7,&unknown_var_4112_ptr,iStack_19c);
          NVSDK_NGX_Parameter_SetF(uVar7,&unknown_var_4032_ptr,1.0 / (fVar2 - fVar3));
          NVSDK_NGX_Parameter_SetI(uVar7,&unknown_var_4056_ptr,iVar13);
          NVSDK_NGX_Parameter_SetI(uVar7,&unknown_var_4000_ptr,0x3b);
          NVSDK_NGX_D3D11_CreateFeature(uVar6,1,uVar7,lVar5 + 0xe8);
          goto LAB_1803f604a;
        }
      }
      *(int8_t *)(lVar5 + 0xd9) = 0;
    }
LAB_1803f604a:
    FUN_1802aa800(lVar5,auStack_138,puVar1,iVar13);
  }
  if (plStack_190 != (longlong *)0x0) {
    (**(code **)(*plStack_190 + 0x38))();
  }
LAB_1803f606d:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_1c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f60b0(longlong *param_1,uint64_t param_2,longlong param_3)
void FUN_1803f60b0(longlong *param_1,uint64_t param_2,longlong param_3)

{
  void *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  void **ppuVar6;
  void *puVar7;
  int8_t auStack_1d8 [32];
  longlong lStack_1b8;
  longlong lStack_1b0;
  int8_t uStack_1a8;
  int32_t uStack_190;
  int32_t uStack_188;
  int8_t auStack_178 [8];
  void **ppuStack_170;
  longlong *plStack_168;
  uint64_t uStack_160;
  void ***pppuStack_158;
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  void *puStack_e0;
  uint uStack_d8;
  uint8_t auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_160 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1d8;
  cVar2 = (**(code **)(**(longlong **)(param_3 + 0x3580) + 0x78))();
  if (cVar2 != '\0') {
    puStack_e8 = &unknown_var_3432_ptr;
    puStack_e0 = auStack_d0;
    auStack_d0[0] = 0;
    uStack_d8 = 0xc;
    strcpy_s(auStack_d0,0x80,&system_data_eb68);
    puVar7 = &system_buffer_ptr;
    if ((void *)param_1[3] != (void *)0x0) {
      puVar7 = (void *)param_1[3];
    }
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (puVar7[lVar5] != '\0');
    iVar3 = (int)lVar5;
    if ((0 < iVar3) && (uStack_d8 + iVar3 < 0x7f)) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_e0 + uStack_d8,puVar7,(longlong)(iVar3 + 1));
    }
    puVar7 = &system_buffer_ptr;
    if (puStack_e0 != (void *)0x0) {
      puVar7 = puStack_e0;
    }
    FUN_1802c22a0(auStack_178,puVar7);
    puVar7 = &system_buffer_ptr;
    if ((void *)param_1[3] != (void *)0x0) {
      puVar7 = (void *)param_1[3];
    }
    ppuStack_170 = &puStack_148;
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    if (puVar7 != (void *)0x0) {
      FUN_180049bf0(&puStack_148,puVar7);
      FUN_1802c2560(*(longlong *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_148);
    }
    puVar7 = *(void **)(system_parameter_buffer + 0x7ab8);
    if ((puVar7 == (void *)0x0) || (puVar7[0xd9] == '\0')) {
      FUN_180080810(param_1 + 0x85,param_1 + 0x27);
    }
    else {
      uStack_188 = *(int32_t *)(param_3 + 0x12c04);
      uStack_190 = *(int32_t *)(param_3 + 0x12c00);
      uStack_1a8 = (int8_t)param_1[0x8d];
      lStack_1b0 = param_1[0x2a];
      lStack_1b8 = param_1[0x29];
      uVar4 = FUN_1802aa550(puVar7,param_1[0x27],param_1[0x85],param_1[0x28]);
      FUN_1802c8e90(*(uint64_t *)(param_3 + 0x99b8),&plStack_168);
      lVar5 = FUN_18023a940(plStack_168);
      (**(code **)(**(longlong **)(puVar7 + 0xd0) + 0x178))
                (*(longlong **)(puVar7 + 0xd0),*(uint64_t *)(puVar7 + 0xc0),
                 *(uint64_t *)(lVar5 + 8));
      ppuVar6 = (void **)FUN_18062b1e0(system_memory_pool_ptr,0xd0,8,3);
      puVar1 = *(void **)(puVar7 + 0xc0);
      ppuStack_170 = ppuVar6;
      FUN_180049830(ppuVar6);
      *ppuVar6 = &unknown_var_2752_ptr;
      ppuVar6[0x18] = puVar7;
      ppuVar6[0x19] = puVar1;
      pppuStack_158 = &ppuStack_170;
      ppuStack_170 = ppuVar6;
      (**(code **)(*ppuVar6 + 0x28))(ppuVar6);
      FUN_18005e370(system_context_ptr,&ppuStack_170);
      if ((uVar4 & 0xfff00000) == 0xbad00000) {
        *(int8_t *)((longlong)param_1 + 0x469) = 1;
        (**(code **)(*param_1 + 0x38))(param_1,param_3);
      }
      *(int8_t *)(param_1 + 0x8d) = 0;
      if (plStack_168 != (longlong *)0x0) {
        (**(code **)(*plStack_168 + 0x38))();
      }
    }
    FUN_1802c2ac0(&puStack_148);
    system_system_data_config = system_system_data_config + -1;
    (**(code **)(*system_system_data_config + 0x20))();
    puStack_e8 = &unknown_var_720_ptr;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_1d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f63f0(longlong param_1)
void FUN_1803f63f0(longlong param_1)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int32_t uVar6;
  int16_t *apuStack_30 [5];
  
  lVar1 = system_message_buffer;
  uVar2 = *(uint64_t *)(param_1 + 200);
  apuStack_30[0] = (int16_t *)0x0;
  plVar3 = *(longlong **)(*(longlong *)(system_message_buffer + 0x1cd8) + 0x8400);
  iVar5 = (**(code **)(*plVar3 + 0x70))(plVar3,uVar2,0,1,0,apuStack_30,0xfffffffffffffffe);
  if (iVar5 < 0) {
    uVar6 = (**(code **)(**(longlong **)(lVar1 + 0x1d78) + 0x138))();
                    // WARNING: Subroutine does not return
    FUN_180062300(system_message_context,&unknown_var_3992_ptr,uVar6);
  }
  if (apuStack_30[0] != (int16_t *)0x0) {
    uVar6 = func_0x0001800adf40(*apuStack_30[0]);
    plVar3 = *(longlong **)(*(longlong *)(lVar1 + 0x1cd8) + 0x8400);
    (**(code **)(*plVar3 + 0x78))(plVar3,uVar2,0);
    lVar4 = *(longlong *)(param_1 + 0xc0);
    lVar1 = lVar4 + 0x70;
    iVar5 = _Mtx_lock(lVar1);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
    *(int32_t *)(lVar4 + 0x68) = uVar6;
    iVar5 = _Mtx_unlock(lVar1);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
  }
  return;
}



uint64_t * FUN_1803f6500(uint64_t *param_1,ulonglong param_2)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_3952_ptr;
  if ((longlong *)param_1[0x8c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x8c] + 0x38))();
  }
  FUN_1808fc8a8(param_1 + 0x8a,8,2,FUN_180045af0,uVar1);
  FUN_1801f9920(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x478);
  }
  return param_1;
}






