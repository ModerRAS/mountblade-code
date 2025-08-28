#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part016.c - 7 个函数

// 函数: void FUN_1804efa70(ulonglong *param_1)
void FUN_1804efa70(ulonglong *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_1[0x11] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1804efac0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  FUN_18035b1b0();
  uVar8 = *(uint64_t *)(param_2 + 0x50);
  *(uint64_t *)(param_1 + 0x48) = *(uint64_t *)(param_2 + 0x48);
  *(uint64_t *)(param_1 + 0x50) = uVar8;
  uVar8 = *(uint64_t *)(param_2 + 0x60);
  *(uint64_t *)(param_1 + 0x58) = *(uint64_t *)(param_2 + 0x58);
  *(uint64_t *)(param_1 + 0x60) = uVar8;
  uVar5 = *(int32_t *)(param_2 + 0x6c);
  uVar6 = *(int32_t *)(param_2 + 0x70);
  uVar7 = *(int32_t *)(param_2 + 0x74);
  *(int32_t *)(param_1 + 0x68) = *(int32_t *)(param_2 + 0x68);
  *(int32_t *)(param_1 + 0x6c) = uVar5;
  *(int32_t *)(param_1 + 0x70) = uVar6;
  *(int32_t *)(param_1 + 0x74) = uVar7;
  uVar5 = *(int32_t *)(param_2 + 0x7c);
  uVar6 = *(int32_t *)(param_2 + 0x80);
  uVar7 = *(int32_t *)(param_2 + 0x84);
  plVar1 = (longlong *)(param_1 + 0x88);
  *(int32_t *)(param_1 + 0x78) = *(int32_t *)(param_2 + 0x78);
  *(int32_t *)(param_1 + 0x7c) = uVar5;
  *(int32_t *)(param_1 + 0x80) = uVar6;
  *(int32_t *)(param_1 + 0x84) = uVar7;
  if (plVar1 != (longlong *)(param_2 + 0x88)) {
    lVar9 = *plVar1;
    lVar2 = *(longlong *)(param_2 + 0x90);
    lVar3 = *(longlong *)(param_2 + 0x88);
    lVar11 = lVar2 - lVar3;
    uVar12 = lVar11 >> 3;
    if ((ulonglong)(*(longlong *)(param_1 + 0x98) - lVar9 >> 3) < uVar12) {
      if (uVar12 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = FUN_18062b420(system_memory_pool_ptr,uVar12 * 8,*(int8_t *)(param_1 + 0xa0));
      }
      if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
        memmove(lVar9,lVar3,lVar11);
      }
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar2 = lVar9 + uVar12 * 8;
      *plVar1 = lVar9;
      *(longlong *)(param_1 + 0x90) = lVar2;
      *(longlong *)(param_1 + 0x98) = lVar2;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x90);
      uVar10 = lVar4 - lVar9 >> 3;
      if (uVar10 < uVar12) {
        lVar11 = uVar10 * 8 + lVar3;
        if (lVar3 != lVar11) {
                    // WARNING: Subroutine does not return
          memmove(lVar9,lVar3);
        }
        if (lVar11 != lVar2) {
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar11,lVar2 - lVar11);
        }
        *(longlong *)(param_1 + 0x90) = lVar4;
      }
      else {
        if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
          memmove(lVar9,lVar3,lVar11);
        }
        *(longlong *)(param_1 + 0x90) = lVar9;
      }
    }
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804efb11(longlong param_1)
void FUN_1804efb11(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  longlong *unaff_RBX;
  longlong *unaff_RSI;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar1 = unaff_RSI[1];
  lVar2 = *unaff_RSI;
  lVar5 = lVar1 - lVar2;
  uVar6 = lVar5 >> 3;
  if ((ulonglong)(in_RAX - param_1 >> 3) < uVar6) {
    if (uVar6 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_18062b420(system_memory_pool_ptr,uVar6 * 8,(char)unaff_RBX[3]);
    }
    if (lVar2 != lVar1) {
                    // WARNING: Subroutine does not return
      memmove(lVar3,lVar2,lVar5);
    }
    if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar1 = lVar3 + uVar6 * 8;
    *unaff_RBX = lVar3;
    unaff_RBX[1] = lVar1;
    unaff_RBX[2] = lVar1;
  }
  else {
    lVar3 = unaff_RBX[1];
    uVar4 = lVar3 - param_1 >> 3;
    if (uVar4 < uVar6) {
      lVar5 = uVar4 * 8 + lVar2;
      if (lVar2 != lVar5) {
                    // WARNING: Subroutine does not return
        memmove(param_1,lVar2);
      }
      if (lVar5 != lVar1) {
                    // WARNING: Subroutine does not return
        memmove(lVar3,lVar5,lVar1 - lVar5);
      }
      unaff_RBX[1] = lVar3;
    }
    else {
      if (lVar2 != lVar1) {
                    // WARNING: Subroutine does not return
        memmove(param_1,lVar2,lVar5);
      }
      unaff_RBX[1] = param_1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804efb40(void)
void FUN_1804efb40(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R14;
  
  if (unaff_R14 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(system_memory_pool_ptr,unaff_R14 * 8,(char)unaff_RBX[3]);
  }
  if (unaff_RSI != unaff_RBP) {
                    // WARNING: Subroutine does not return
    memmove(lVar2);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar1 = lVar2 + unaff_R14 * 8;
  *unaff_RBX = lVar2;
  unaff_RBX[1] = lVar1;
  unaff_RBX[2] = lVar1;
  return;
}






// 函数: void FUN_1804efba1(longlong param_1)
void FUN_1804efba1(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_R14;
  
  lVar2 = *(longlong *)(unaff_RBX + 8);
  uVar3 = lVar2 - param_1 >> 3;
  if (uVar3 < unaff_R14) {
    lVar1 = uVar3 * 8 + unaff_RSI;
    if (unaff_RSI != lVar1) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    if (lVar1 != unaff_RBP) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar1,unaff_RBP - lVar1);
    }
    *(longlong *)(unaff_RBX + 8) = lVar2;
  }
  else {
    if (unaff_RSI != unaff_RBP) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    *(longlong *)(unaff_RBX + 8) = param_1;
  }
  return;
}






// 函数: void FUN_1804efc1c(void)
void FUN_1804efc1c(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1804efc30(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  longlong lVar6;
  longlong lVar7;
  uint64_t uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  FUN_18063e690();
  uVar5 = *(uint64_t *)(param_2 + 0x50);
  *(uint64_t *)(param_1 + 0x48) = *(uint64_t *)(param_2 + 0x48);
  *(uint64_t *)(param_1 + 0x50) = uVar5;
  uVar5 = *(uint64_t *)(param_2 + 0x60);
  *(uint64_t *)(param_1 + 0x58) = *(uint64_t *)(param_2 + 0x58);
  *(uint64_t *)(param_1 + 0x60) = uVar5;
  uVar2 = *(int32_t *)(param_2 + 0x6c);
  uVar3 = *(int32_t *)(param_2 + 0x70);
  uVar4 = *(int32_t *)(param_2 + 0x74);
  *(int32_t *)(param_1 + 0x68) = *(int32_t *)(param_2 + 0x68);
  *(int32_t *)(param_1 + 0x6c) = uVar2;
  *(int32_t *)(param_1 + 0x70) = uVar3;
  *(int32_t *)(param_1 + 0x74) = uVar4;
  uVar2 = *(int32_t *)(param_2 + 0x7c);
  uVar3 = *(int32_t *)(param_2 + 0x80);
  uVar4 = *(int32_t *)(param_2 + 0x84);
  *(int32_t *)(param_1 + 0x78) = *(int32_t *)(param_2 + 0x78);
  *(int32_t *)(param_1 + 0x7c) = uVar2;
  *(int32_t *)(param_1 + 0x80) = uVar3;
  *(int32_t *)(param_1 + 0x84) = uVar4;
  lVar7 = *(longlong *)(param_2 + 0x90) - *(longlong *)(param_2 + 0x88) >> 3;
  uVar1 = *(uint *)(param_2 + 0xa0);
  *(uint *)(param_1 + 0xa0) = uVar1;
  if (lVar7 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_18062b420(system_memory_pool_ptr,lVar7 * 8,uVar1 & 0xff,param_4,uVar8);
  }
  *(longlong *)(param_1 + 0x88) = lVar6;
  *(longlong *)(param_1 + 0x90) = lVar6;
  *(longlong *)(param_1 + 0x98) = lVar6 + lVar7 * 8;
  lVar7 = *(longlong *)(param_1 + 0x88);
  lVar6 = *(longlong *)(param_2 + 0x88);
  if (lVar6 != *(longlong *)(param_2 + 0x90)) {
                    // WARNING: Subroutine does not return
    memmove(lVar7,lVar6,*(longlong *)(param_2 + 0x90) - lVar6);
  }
  *(longlong *)(param_1 + 0x90) = lVar7;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x0001804f086f)
// WARNING: Removing unreachable block (ram,0x0001804f0879)
// WARNING: Removing unreachable block (ram,0x0001804f087e)
// WARNING: Removing unreachable block (ram,0x0001804f0888)
// WARNING: Removing unreachable block (ram,0x0001804f088d)
// WARNING: Removing unreachable block (ram,0x0001804f08b6)
// WARNING: Removing unreachable block (ram,0x0001804f08c0)
// WARNING: Removing unreachable block (ram,0x0001804f08ca)
// WARNING: Removing unreachable block (ram,0x0001804f08d0)
// WARNING: Removing unreachable block (ram,0x0001804f08c5)
// WARNING: Removing unreachable block (ram,0x0001804f08bb)
// WARNING: Removing unreachable block (ram,0x0001804f0892)
// WARNING: Removing unreachable block (ram,0x0001804f0895)
// WARNING: Removing unreachable block (ram,0x0001804f0897)
// WARNING: Removing unreachable block (ram,0x0001804f08d5)
// WARNING: Removing unreachable block (ram,0x0001804f0899)
// WARNING: Removing unreachable block (ram,0x0001804f08b4)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804efd10(longlong param_1,int32_t *param_2,int32_t *param_3,int8_t *param_4,
void FUN_1804efd10(longlong param_1,int32_t *param_2,int32_t *param_3,int8_t *param_4,
                  int8_t *param_5,int param_6,int32_t param_7,int32_t param_8,
                  longlong param_9,longlong param_10,int param_11,char param_12,int32_t param_13,
                  char param_14)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  byte bVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  int8_t auVar17 [16];
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
  int8_t auStack_1d8 [32];
  int iStack_1b8;
  char cStack_1b0;
  int32_t uStack_1a8;
  int iStack_1a0;
  int32_t uStack_198;
  int32_t uStack_190;
  int8_t uStack_188;
  char cStack_180;
  int8_t uStack_178;
  int32_t *puStack_170;
  int32_t *puStack_168;
  int8_t *puStack_160;
  char cStack_158;
  char cStack_157;
  int8_t uStack_156;
  int32_t uStack_154;
  int iStack_150;
  longlong lStack_148;
  int iStack_140;
  int iStack_13c;
  int8_t *puStack_138;
  int8_t *puStack_130;
  int32_t *puStack_128;
  int32_t *puStack_120;
  uint64_t uStack_118;
  ulonglong uStack_a8;
  
  uStack_118 = 0xfffffffffffffffe;
  uStack_a8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1d8;
  puStack_138 = param_5;
  iStack_150 = param_6;
  lVar13 = 0;
  iVar15 = 0;
  uStack_154 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_10 + 0x8f8) + 0x9f0);
  uStack_156 = *(int8_t *)(param_9 + 0x7f);
  lStack_148 = param_1;
  puStack_130 = param_4;
  puStack_128 = param_3;
  puStack_120 = param_2;
  cStack_157 = FUN_1805a3ab0(param_9 + 0x28);
  bVar12 = (byte)((uint)*(int32_t *)(param_10 + 0x564) >> 0x1f) ^ 1;
  if (((param_12 != '\0') ||
      ((cStack_157 != '\0' && ((bVar12 != 0 || (-1 < *(int *)(param_9 + 0x564))))))) &&
     ((lVar1 == 0 ||
      ((*(ulonglong *)((longlong)*(int *)(lVar1 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar1 + 0xd0))
        >> 0x1c & 1) == 0)))) goto LAB_1804f0a7d;
  if (-1 < param_6) {
    lVar13 = *(longlong *)(param_9 + 0x8f8) + 8 + (longlong)param_6 * 0x1f8;
  }
  if ((param_12 != '\0') &&
     (((lVar13 == 0 || (*(int *)(lVar13 + 0x30) < 1)) ||
      (((*(ulonglong *)
          ((longlong)*(int *)(lVar13 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar13 + 0xd0)) & 0x200)
        != 0 && (*(short *)(lVar13 + 8) < 1)))))) goto LAB_1804f0a7d;
  plVar2 = *(longlong **)(param_10 + 0x590);
  iVar11 = (int)plVar2[0x493];
  if (iVar11 == -1) {
    cStack_158 = -1;
    iVar11 = -1;
  }
  else {
    cStack_158 = *(char *)((longlong)iVar11 * 0x68 + 0x60 + system_system_config);
    lVar7 = (longlong)iVar11 * 0x68;
    iVar11 = *(int *)(lVar7 + 0x5c + system_system_config);
    iVar15 = *(int *)(lVar7 + 0x58 + system_system_config);
    if (iVar15 == 0x13) {
      if ((param_14 == '\0') || (param_12 != '\0')) {
        if (1 < (byte)(cStack_158 - 5U)) goto LAB_1804f0a7d;
        if ((cStack_158 != '\x05') ||
           (iVar15 = 4,
           0.2 <= (float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_10 + 0x248) * 8) -
                         *(longlong *)(param_10 + 0x240)) * 1e-05)) {
          iVar15 = 3;
        }
      }
      else {
        if (param_11 == 0) {
          if (iVar11 != 0) goto LAB_1804f0a7d;
        }
        else if (param_11 == 1) {
          if (iVar11 != 1) goto LAB_1804f0a7d;
        }
        else if (param_11 == 2) {
          if (iVar11 != 3) goto LAB_1804f0a7d;
        }
        else if ((param_11 != 3) || (iVar11 != 2)) goto LAB_1804f0a7d;
        cVar5 = FUN_18052d960(param_10);
        if (cVar5 == '\0') goto LAB_1804f0a7d;
        iVar15 = 5;
      }
      lVar1 = system_system_data_config;
      iVar11 = *(int *)(param_10 + 0x18);
      iStack_140 = iVar11;
      if ((iVar11 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x30))(iVar11);
      }
      uStack_154 = 1;
      iVar14 = *(int *)(param_9 + 0x18);
      iStack_13c = iVar14;
      if ((iVar14 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x30))(iVar14);
      }
      uStack_154 = 3;
      uStack_188 = iVar15 == 4;
      puStack_160 = puStack_130;
      puStack_168 = puStack_128;
      puStack_170 = puStack_120;
      uStack_178 = uStack_156;
      cStack_180 = cStack_157;
      uStack_190 = param_8;
      uStack_198 = param_7;
      iStack_1a0 = param_11;
      uStack_1a8 = param_13;
      cStack_1b0 = param_12;
      iStack_1b8 = iStack_150;
      (**(code **)(lVar1 + 0x1f8))(*(int32_t *)(lStack_148 + 0x98d928),iVar14,iVar11,iVar15);
      uStack_154 = 1;
      if ((iVar14 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x18))(iVar14);
      }
      uStack_154 = 0;
      if ((iVar11 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x18))(iVar11);
      }
      goto LAB_1804f0a7d;
    }
  }
  iVar14 = *(int *)(*(longlong *)(param_9 + 0x590) + 0x2498);
  uVar9 = (ulonglong)iVar14;
  if (iVar14 == -1) {
    iVar14 = 0;
  }
  else {
    uVar9 = uVar9 * 0x68;
    iVar14 = *(int *)(uVar9 + 0x58 + system_system_config);
  }
  fVar26 = 3.4028235e+38;
  fVar25 = 3.4028235e+38;
  if (iVar15 == 2) {
    uVar10 = *(uint *)((longlong)*(int *)(lVar1 + 0xf0) * 0xa0 + 0x58 + *(longlong *)(lVar1 + 0xd0))
             & 0x300;
    uVar6 = 0xb1;
    if (uVar10 != 0x100) {
      uVar6 = 0xa1;
    }
    uVar3 = uVar6 + 1;
    if (bVar12 == 0) {
      uVar3 = uVar6;
    }
    uVar6 = 0xb3;
    if (uVar10 != 0x100) {
      uVar6 = 0xa3;
    }
    uVar4 = uVar6 + 1;
    if (bVar12 == 0) {
      uVar4 = uVar6;
    }
    fVar25 = *(float *)(&system_data_6380 + (ulonglong)uVar4 * 4);
    if (iVar11 == 7) {
      uVar6 = 0xb5;
      if (uVar10 != 0x100) {
        uVar6 = 0xa5;
      }
      uVar4 = uVar6 + 1;
      if (bVar12 == 0) {
        uVar4 = uVar6;
      }
      fVar23 = *(float *)(&system_data_6380 + (ulonglong)uVar4 * 4);
      uVar9 = 0xb7;
      uVar6 = 0xa7;
    }
    else if (iVar11 == 6) {
      uVar6 = 0xb9;
      if (uVar10 != 0x100) {
        uVar6 = 0xa9;
      }
      uVar4 = uVar6 + 1;
      if (bVar12 == 0) {
        uVar4 = uVar6;
      }
      fVar23 = *(float *)(&system_data_6380 + (ulonglong)uVar4 * 4);
      uVar9 = 0xbb;
      uVar6 = 0xab;
    }
    else {
      uVar6 = 0xbd;
      if (uVar10 != 0x100) {
        uVar6 = 0xad;
      }
      uVar4 = uVar6 + 1;
      if (bVar12 == 0) {
        uVar4 = uVar6;
      }
      fVar23 = *(float *)(&system_data_6380 + (ulonglong)uVar4 * 4);
      uVar9 = 0xbf;
      uVar6 = 0xaf;
    }
    if (uVar10 != 0x100) {
      uVar9 = (ulonglong)uVar6;
    }
    uVar8 = (ulonglong)((int)uVar9 + 1);
    if (bVar12 == 0) {
      uVar8 = uVar9;
    }
    fVar24 = *(float *)(&system_data_6380 + uVar8 * 4);
    if ((((*(uint *)(param_10 + 0x56c) & 0x800) == 0) || (plVar2 == (longlong *)0x0)) ||
       (fVar26 = *(float *)(&system_data_6380 + (ulonglong)uVar3 * 4),
       *(char *)((longlong)plVar2 + 0x34bc) == '\0')) {
      fVar24 = fVar24 * system_system_config;
      fVar25 = fVar25 * system_system_config;
      fVar23 = fVar23 * system_system_config;
      fVar26 = *(float *)(&system_data_6380 + (ulonglong)uVar3 * 4) * system_system_config;
    }
  }
  else if (iVar15 == 1) {
    if ((((lVar13 != 0) && (0 < *(int *)(lVar13 + 0x30))) &&
        ((uVar9 = (longlong)*(int *)(lVar13 + 0xf0) * 0xa0,
         (*(ulonglong *)(uVar9 + 0x50 + *(longlong *)(lVar13 + 0xd0)) & 0x200) == 0 ||
         (0 < *(short *)(lVar13 + 8))))) || (iVar14 != 0x14)) goto LAB_1804f0a7d;
    if (iVar11 == 6) {
      uVar8 = (ulonglong)bVar12;
      fVar25 = *(float *)(uVar8 * 4 + 0x180c9653c);
      fVar23 = *(float *)(uVar8 * 4 + 0x180c96524);
      fVar24 = *(float *)(uVar8 * 4 + 0x180c9652c);
      fVar26 = *(float *)(uVar8 * 4 + 0x180c96534);
    }
    else if (iVar11 == 7) {
      uVar8 = (ulonglong)bVar12;
      uVar9 = 0x180000000;
      fVar25 = *(float *)(uVar8 * 4 + 0x180c9655c);
      fVar23 = *(float *)(uVar8 * 4 + 0x180c96544);
      fVar24 = *(float *)(uVar8 * 4 + 0x180c9654c);
      fVar26 = *(float *)(uVar8 * 4 + 0x180c96554);
    }
    else if (iVar11 == 4) {
      uVar8 = (ulonglong)bVar12;
      uVar9 = 0x180000000;
      fVar25 = *(float *)(uVar8 * 4 + 0x180c9657c);
      fVar23 = *(float *)(uVar8 * 4 + 0x180c96564);
      fVar24 = *(float *)(uVar8 * 4 + 0x180c9656c);
      fVar26 = *(float *)(uVar8 * 4 + 0x180c96574);
    }
    else {
      fVar23 = 3.4028235e+38;
      fVar24 = 3.4028235e+38;
      if (iVar11 == 5) {
        uVar8 = (ulonglong)bVar12;
        uVar9 = 0x180000000;
        fVar25 = *(float *)(uVar8 * 4 + 0x180c9659c);
        fVar23 = *(float *)(uVar8 * 4 + 0x180c96584);
        fVar24 = *(float *)(uVar8 * 4 + 0x180c9658c);
        fVar26 = *(float *)(uVar8 * 4 + 0x180c96594);
      }
    }
  }
  else {
    fVar27 = 100.0;
    fVar24 = -100.0;
    if (param_11 - 2U < 2) {
      fVar25 = -system_system_config;
      fVar26 = system_system_config;
      if (param_11 == 2) {
        if (iVar11 - 7U < 2) {
          fVar23 = -system_system_config;
          fVar24 = system_system_config;
        }
        else {
          fVar23 = system_system_config;
          fVar24 = system_system_config;
          if (iVar11 != 6) goto LAB_1804f0a7d;
        }
      }
      else {
        fVar23 = 100.0;
        if (param_11 == 3) {
          if ((iVar11 - 6U & 0xfffffffd) == 0) {
            fVar23 = -system_system_config;
            fVar24 = system_system_config;
          }
          else {
            if (iVar11 != 7) goto LAB_1804f0a7d;
            fVar24 = -system_system_config;
            fVar23 = -system_system_config;
          }
        }
      }
    }
    else {
      fVar23 = -system_system_config;
      fVar24 = system_system_config;
      if (param_11 == 0) {
        if ((iVar11 - 4U & 0xfffffffb) == 0) {
          uVar9 = 0x180000000;
          fVar26 = *(float *)((ulonglong)bVar12 * 4 + 0x180c965a4);
          fVar25 = *(float *)((ulonglong)bVar12 * 4 + 0x180c965ac);
          fVar27 = fVar23;
        }
        else if (iVar11 == 5) {
          uVar9 = 0x180000000;
          fVar25 = *(float *)((ulonglong)bVar12 * 4 + 0x180c965bc);
          fVar26 = *(float *)((ulonglong)bVar12 * 4 + 0x180c965b4);
          goto LAB_1804f03fa;
        }
      }
      else if ((iVar11 == 5) || (iVar11 == 8)) {
        uVar9 = 0x180000000;
        fVar26 = *(float *)((ulonglong)bVar12 * 4 + 0x180c965c4);
        fVar25 = *(float *)((ulonglong)bVar12 * 4 + 0x180c965cc);
        fVar27 = fVar23;
      }
      else if (iVar11 == 4) {
        uVar9 = 0x180000000;
        fVar25 = *(float *)((ulonglong)bVar12 * 4 + 0x180c965dc);
        fVar26 = *(float *)((ulonglong)bVar12 * 4 + 0x180c965d4);
        goto LAB_1804f03fa;
      }
      fVar23 = fVar27;
      if (iVar11 - 6U < 2) {
        fVar25 = (float)(**(code **)(*plVar2 + 0xa0))(plVar2,1);
        if ((fVar25 < 0.4) || (0.6 <= fVar25)) goto LAB_1804f0a7d;
        uVar8 = (ulonglong)bVar12;
        uVar9 = 0x180000000;
        fVar25 = *(float *)(uVar8 * 4 + 0x180c965fc);
        fVar23 = *(float *)(uVar8 * 4 + 0x180c965e4);
        fVar24 = *(float *)(uVar8 * 4 + 0x180c965ec);
        fVar26 = *(float *)(uVar8 * 4 + 0x180c965f4);
      }
    }
  }
LAB_1804f03fa:
  fVar20 = *(float *)(*(longlong *)(param_9 + 0x20) + 0x10) -
           *(float *)(*(longlong *)(param_10 + 0x20) + 0x10);
  fVar19 = *(float *)(*(longlong *)(param_9 + 0x20) + 0xc) -
           *(float *)(*(longlong *)(param_10 + 0x20) + 0xc);
  fVar18 = fVar19 * fVar19 + fVar20 * fVar20;
  auVar17 = rsqrtss(ZEXT416((uint)(fVar20 * fVar20)),ZEXT416((uint)fVar18));
  fVar27 = auVar17._0_4_;
  fVar22 = fVar27 * 0.5 * (3.0 - fVar18 * fVar27 * fVar27);
  fVar27 = *(float *)(*(longlong *)(param_10 + 0x590) + 0x258c);
  fVar18 = *(float *)(*(longlong *)(param_10 + 0x590) + 0x2588);
  fVar21 = fVar18 * *(float *)(param_10 + 0x524) + fVar27 * *(float *)(param_10 + 0x534);
  fVar27 = fVar27 * *(float *)(param_10 + 0x530) + fVar18 * *(float *)(param_10 + 0x520);
  fVar18 = fVar27 * fVar27 + fVar21 * fVar21;
  if ((fVar18 <= 0.98010004) || (1.0201 <= fVar18)) {
    auVar17 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
    fVar16 = auVar17._0_4_;
    fVar18 = fVar16 * 0.5 * (3.0 - fVar18 * fVar16 * fVar16);
    fVar27 = fVar18 * fVar27;
    fVar21 = fVar18 * fVar21;
  }
  fVar18 = (float)atan2f(uVar9,fVar22 * fVar20 * fVar21 + fVar27 * fVar22 * fVar19);
  fVar27 = fVar24;
  if (fVar24 <= fVar23) {
    fVar27 = fVar23;
  }
  if (fVar23 <= fVar24) {
    fVar24 = fVar23;
  }
  if ((fVar24 <= fVar18) && (fVar18 < fVar27)) {
    if (fVar26 <= fVar25) {
      fVar25 = fVar26;
    }
                    // WARNING: Subroutine does not return
    FUN_1808fd400(fVar25);
  }
LAB_1804f0a7d:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_a8 ^ (ulonglong)auStack_1d8);
}






// 函数: void FUN_1804f0ad0(longlong param_1,char param_2)
void FUN_1804f0ad0(longlong param_1,char param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar6 = 0;
  if (param_2 == '\0') {
    uVar2 = *(uint *)(param_1 + 0x52ed94);
    if (0 < (int)uVar2) {
      piVar4 = (int *)(param_1 + 0x30b0);
      uVar5 = uVar6;
      uVar9 = uVar6;
      do {
        if (-1 < *piVar4) goto LAB_1804f0b29;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 0x298;
      } while ((longlong)uVar5 < (longlong)(int)uVar2);
    }
    uVar9 = (ulonglong)uVar2;
LAB_1804f0b29:
    if ((int)uVar9 < *(int *)(param_1 + 0x52ed94)) {
      do {
        lVar8 = (longlong)(int)uVar9;
        lVar10 = param_1 + 0x30a0 + lVar8 * 0xa60;
        if ((*(int *)(lVar10 + 0x568) - 3U < 2) && (*(char *)(lVar10 + 0xa50) == '\0')) {
          FUN_1804ec4e0(*(uint64_t *)(lVar10 + 0x8d8),lVar10,0xffffffff,param_1 + 0x87a948,0);
          if ((*(int *)(lVar10 + 0x720) != 3) &&
             (*(int32_t *)(lVar10 + 0x720) = 3, *(char *)(lVar10 + 0x984) != '\0')) {
            *(int32_t *)(*(longlong *)(lVar10 + 0x738) + 0x1a0) = 3;
          }
          *(uint64_t *)(lVar10 + 0x710) =
               *(uint64_t *)(&system_error_code + (longlong)*(int *)(lVar10 + 0x718) * 8);
          *(int8_t *)(lVar10 + 0xa50) = 1;
          *(int8_t *)(*(longlong *)(lVar10 + 0x738) + 0x199) = 0;
        }
        sVar1 = *(short *)(param_1 + 0x52dda0 + lVar8 * 2);
        psVar3 = (short *)(param_1 + 0x52dda0 + lVar8 * 2);
        if (sVar1 == -1) {
          for (; (lVar8 < *(int *)(param_1 + 0x52ed94) && (*psVar3 == -1)); psVar3 = psVar3 + 1) {
            uVar9 = (ulonglong)((int)uVar9 + 1);
            lVar8 = lVar8 + 1;
          }
        }
        else {
          uVar9 = (ulonglong)(uint)(int)sVar1;
        }
      } while ((int)uVar9 < *(int *)(param_1 + 0x52ed94));
    }
  }
  uVar2 = *(uint *)(param_1 + 0x52ed94);
  if (0 < (int)uVar2) {
    piVar4 = (int *)(param_1 + 0x30b0);
    uVar9 = uVar6;
    do {
      if (-1 < *piVar4) goto LAB_1804f0c6d;
      uVar9 = (ulonglong)((int)uVar9 + 1);
      uVar6 = uVar6 + 1;
      piVar4 = piVar4 + 0x298;
    } while ((longlong)uVar6 < (longlong)(int)uVar2);
  }
  uVar9 = (ulonglong)uVar2;
LAB_1804f0c6d:
  if ((int)uVar9 < *(int *)(param_1 + 0x52ed94)) {
    do {
      lVar8 = (longlong)(int)uVar9;
      FUN_18051aff0(param_1 + 0x30a0 + lVar8 * 0xa60,param_2,param_1 + 0x87a948);
      sVar1 = *(short *)(param_1 + 0x52dda0 + lVar8 * 2);
      psVar3 = (short *)(param_1 + 0x52dda0 + lVar8 * 2);
      if (sVar1 == -1) {
        for (; (lVar8 < *(int *)(param_1 + 0x52ed94) && (*psVar3 == -1)); psVar3 = psVar3 + 1) {
          uVar9 = (ulonglong)((int)uVar9 + 1);
          lVar8 = lVar8 + 1;
        }
      }
      else {
        uVar9 = (ulonglong)(uint)(int)sVar1;
      }
    } while ((int)uVar9 < *(int *)(param_1 + 0x52ed94));
  }
  lVar8 = *(longlong *)(param_1 + 0x87bd10) - *(longlong *)(param_1 + 0x87bd08);
  lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
  iVar7 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  while (iVar7 = iVar7 + -1, -1 < iVar7) {
    FUN_1804f7af0(param_1,iVar7,0);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1804cd320(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x3c0) + 0x2d30);
  }
  *(int8_t *)(param_1 + 0x87a940) = 1;
  return;
}






