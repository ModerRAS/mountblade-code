#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// 04_ui_system_part282.c - 9 个函数

// 函数: void FUN_180827cb0(int16_t *param_1,int64_t *param_2,uint param_3,uint param_4,int param_5)
void FUN_180827cb0(int16_t *param_1,int64_t *param_2,uint param_3,uint param_4,int param_5)

{
  int32_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar3 = (uint64_t)param_4;
  uVar5 = (uint64_t)param_3;
  if (param_5 == 2) {
    if (param_3 == 2) {
                    // WARNING: Subroutine does not return
      memcpy(param_1,*param_2,uVar3 * 4);
    }
    if (param_3 == 1) {
      if (param_4 != 0) {
        lVar2 = 0;
        do {
          *param_1 = *(int16_t *)(lVar2 + *param_2);
          uVar3 = uVar3 - 1;
          param_1 = param_1 + 1;
          lVar2 = lVar2 + 4;
        } while (uVar3 != 0);
      }
    }
    else if (param_4 != 0) {
      lVar2 = 0;
      do {
        plVar4 = param_2;
        uVar6 = uVar5;
        if (param_3 != 0) {
          do {
            uVar1 = *(int32_t *)(lVar2 + *plVar4);
            *(char *)param_1 = (char)uVar1;
            *(char *)((int64_t)param_1 + 1) = (char)((uint)uVar1 >> 8);
            param_1 = param_1 + 1;
            uVar6 = uVar6 - 1;
            plVar4 = plVar4 + 1;
          } while (uVar6 != 0);
        }
        lVar2 = lVar2 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  else if (param_4 != 0) {
    lVar2 = 0;
    if (param_5 == 3) {
      if (param_3 == 2) {
        do {
          uVar1 = *(int32_t *)(lVar2 + *param_2);
          *(char *)param_1 = (char)uVar1;
          *(char *)((int64_t)param_1 + 1) = (char)((uint)uVar1 >> 8);
          *(char *)(param_1 + 1) = (char)((uint)uVar1 >> 0x10);
          uVar1 = *(int32_t *)(lVar2 + param_2[1]);
          *(char *)((int64_t)param_1 + 3) = (char)uVar1;
          *(char *)(param_1 + 2) = (char)((uint)uVar1 >> 8);
          *(char *)((int64_t)param_1 + 5) = (char)((uint)uVar1 >> 0x10);
          uVar3 = uVar3 - 1;
          param_1 = param_1 + 3;
          lVar2 = lVar2 + 4;
        } while (uVar3 != 0);
      }
      else if (param_3 == 1) {
        do {
          uVar1 = *(int32_t *)(lVar2 + *param_2);
          *(char *)param_1 = (char)uVar1;
          *(char *)((int64_t)param_1 + 1) = (char)((uint)uVar1 >> 8);
          *(char *)(param_1 + 1) = (char)((uint)uVar1 >> 0x10);
          uVar3 = uVar3 - 1;
          param_1 = (int16_t *)((int64_t)param_1 + 3);
          lVar2 = lVar2 + 4;
        } while (uVar3 != 0);
      }
      else {
        do {
          plVar4 = param_2;
          uVar6 = uVar5;
          if (param_3 != 0) {
            do {
              uVar1 = *(int32_t *)(lVar2 + *plVar4);
              *(char *)param_1 = (char)uVar1;
              *(char *)((int64_t)param_1 + 1) = (char)((uint)uVar1 >> 8);
              *(char *)(param_1 + 1) = (char)((uint)uVar1 >> 0x10);
              param_1 = (int16_t *)((int64_t)param_1 + 3);
              uVar6 = uVar6 - 1;
              plVar4 = plVar4 + 1;
            } while (uVar6 != 0);
          }
          lVar2 = lVar2 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    else if (param_5 == 1) {
      if (param_3 == 2) {
        do {
          *(int8_t *)param_1 = *(int8_t *)(lVar2 + *param_2);
          *(int8_t *)((int64_t)param_1 + 1) = *(int8_t *)(lVar2 + param_2[1]);
          uVar3 = uVar3 - 1;
          param_1 = param_1 + 1;
          lVar2 = lVar2 + 4;
        } while (uVar3 != 0);
      }
      else if (param_3 == 1) {
        do {
          *(int8_t *)param_1 = *(int8_t *)(lVar2 + *param_2);
          uVar3 = uVar3 - 1;
          param_1 = (int16_t *)((int64_t)param_1 + 1);
          lVar2 = lVar2 + 4;
        } while (uVar3 != 0);
      }
      else {
        do {
          plVar4 = param_2;
          uVar6 = uVar5;
          if (param_3 != 0) {
            do {
              *(int8_t *)param_1 = *(int8_t *)(lVar2 + *plVar4);
              param_1 = (int16_t *)((int64_t)param_1 + 1);
              uVar6 = uVar6 - 1;
              plVar4 = plVar4 + 1;
            } while (uVar6 != 0);
          }
          lVar2 = lVar2 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    else {
      do {
        plVar4 = param_2;
        uVar6 = uVar5;
        if (param_3 != 0) {
          do {
            uVar1 = *(int32_t *)(lVar2 + *plVar4);
            *(char *)param_1 = (char)uVar1;
            *(char *)((int64_t)param_1 + 1) = (char)((uint)uVar1 >> 8);
            *(char *)(param_1 + 1) = (char)((uint)uVar1 >> 0x10);
            *(char *)((int64_t)param_1 + 3) = (char)((uint)uVar1 >> 0x18);
            param_1 = param_1 + 2;
            uVar6 = uVar6 - 1;
            plVar4 = plVar4 + 1;
          } while (uVar6 != 0);
        }
        lVar2 = lVar2 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}



uint64_t FUN_180827f90(uint64_t param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = (param_1 & 0xffffffff) * 4;
  lVar2 = lVar1 + 1;
  if ((param_1 & 0xffffffff) != 0) {
    lVar2 = lVar1;
  }
  lVar1 = malloc(lVar2);
  if (lVar1 == 0) {
    return 0;
  }
  if (*param_2 != 0) {
    free();
  }
  *param_2 = lVar1;
  *param_3 = lVar1;
  return 1;
}



int FUN_180828010(int64_t param_1,int64_t *param_2)

{
  ushort uVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = *(uint *)*param_2 >> ((byte)(int)param_2[2] & 0x1f);
  uVar1 = *(ushort *)
           (*(int64_t *)(param_1 + 0x30) + (uint64_t)(*(uint *)(param_1 + 0x70) & uVar3) * 2);
  uVar7 = (uint)uVar1;
  if (0x7fff < uVar1) {
    uVar4 = uVar1 & 0x7fff;
    uVar3 = *(uint *)(param_1 + 0x68) & uVar3;
    uVar7 = (uint)*(short *)(param_1 + 0x62);
    uVar3 = uVar3 << 0x10 | uVar3 >> 0x10;
    uVar3 = (uVar3 >> 8 ^ uVar3 << 8) & 0xff00ff ^ uVar3 << 8;
    uVar3 = (uVar3 >> 4 ^ uVar3 << 4) & 0xf0f0f0f ^ uVar3 << 4;
    lVar2 = *(int64_t *)(param_1 + 0x40);
    uVar3 = (uVar3 >> 2 ^ uVar3 * 4) & 0x33333333 ^ uVar3 * 4;
    uVar6 = uVar7 - uVar4;
    uVar8 = (uVar3 >> 1 ^ uVar3 * 2) & 0x55555555 ^ uVar3 * 2;
    puVar5 = (uint *)(lVar2 + (uint64_t)uVar4 * 4);
    for (uVar3 = uVar6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (uVar8 < *puVar5) goto LAB_180828188;
      if (uVar8 < puVar5[1]) {
        uVar7 = (uint)((int64_t)puVar5 + (4 - lVar2) >> 2);
        goto FUN_180828129;
      }
      if (uVar8 < puVar5[2]) {
        uVar7 = (uint)((int64_t)puVar5 + (8 - lVar2) >> 2);
        goto FUN_180828129;
      }
      if (uVar8 < puVar5[3]) {
        uVar7 = (uint)((int64_t)puVar5 + (0xc - lVar2) >> 2);
        goto FUN_180828129;
      }
      puVar5 = puVar5 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (uVar8 < *puVar5) goto LAB_180828188;
      puVar5 = puVar5 + 1;
    }
  }
FUN_180828129:
  uVar3 = (int)*(char *)((uint64_t)(uVar7 & 0x7fff) + *(int64_t *)(param_1 + 0x38)) +
          (int)param_2[2];
  *(uint *)(param_2 + 2) = uVar3 & 7;
  *param_2 = ((int64_t)(int)uVar3 >> 3) + *param_2;
  return (int)*(short *)(*(int64_t *)(param_1 + 0x50) + (uint64_t)(uVar7 - 1) * 2);
LAB_180828188:
  uVar7 = (uint)((int64_t)puVar5 - lVar2 >> 2);
  goto FUN_180828129;
}



int FUN_180828052(uint64_t param_1,uint param_2)

{
  int64_t lVar1;
  int64_t in_RAX;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int64_t unaff_RBX;
  uint uVar5;
  int64_t unaff_RSI;
  uint uVar6;
  int64_t in_R10;
  int64_t *in_R11;
  
  uVar5 = (uint)*(short *)(in_R10 + 0x62);
  uVar3 = param_2 << 0x10 | param_2 >> 0x10;
  uVar3 = (uVar3 >> 8 ^ uVar3 << 8) & 0xff00ff ^ uVar3 << 8;
  uVar3 = (uVar3 >> 4 ^ uVar3 << 4) & 0xf0f0f0f ^ uVar3 << 4;
  lVar1 = *(int64_t *)(in_R10 + 0x40);
  uVar3 = (uVar3 >> 2 ^ uVar3 * 4) & 0x33333333 ^ uVar3 * 4;
  uVar4 = uVar5 - (int)in_RAX;
  uVar6 = (uVar3 >> 1 ^ uVar3 * 2) & 0x55555555 ^ uVar3 * 2;
  puVar2 = (uint *)(lVar1 + in_RAX * 4);
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    if (uVar6 < *puVar2) goto LAB_180828188;
    if (uVar6 < puVar2[1]) {
      uVar5 = (uint)((int64_t)puVar2 + (4 - lVar1) >> 2);
      goto LAB_180828124;
    }
    if (uVar6 < puVar2[2]) {
      uVar5 = (uint)((int64_t)puVar2 + (8 - lVar1) >> 2);
      goto LAB_180828124;
    }
    if (uVar6 < puVar2[3]) {
      uVar5 = (uint)((int64_t)puVar2 + (0xc - lVar1) >> 2);
      goto LAB_180828124;
    }
    puVar2 = puVar2 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    if (uVar6 < *puVar2) goto LAB_180828188;
    puVar2 = puVar2 + 1;
  }
LAB_180828124:
  uVar3 = (int)*(char *)((uint64_t)(uVar5 & 0x7fff) + unaff_RSI) + (int)in_R11[2];
  *(uint *)(in_R11 + 2) = uVar3 & 7;
  *in_R11 = ((int64_t)(int)uVar3 >> 3) + unaff_RBX;
  return (int)*(short *)(*(int64_t *)(in_R10 + 0x50) + (uint64_t)(uVar5 - 1) * 2);
LAB_180828188:
  uVar5 = (uint)((int64_t)puVar2 - lVar1 >> 2);
  goto LAB_180828124;
}



int FUN_180828129(void)

{
  uint in_EAX;
  uint uVar1;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t in_R10;
  int64_t *in_R11;
  
  uVar1 = (int)*(char *)((uint64_t)(in_EAX & 0x7fff) + unaff_RSI) + (int)in_R11[2];
  *(uint *)(in_R11 + 2) = uVar1 & 7;
  *in_R11 = ((int64_t)(int)uVar1 >> 3) + unaff_RBX;
  return (int)*(short *)(*(int64_t *)(in_R10 + 0x50) + (uint64_t)(in_EAX - 1) * 2);
}



int FUN_180828161(void)

{
  uint uVar1;
  int64_t in_RAX;
  uint uVar2;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t in_R9;
  int64_t in_R10;
  int64_t *in_R11;
  
  uVar1 = (uint)((in_RAX - in_R9) + 0xc >> 2);
  uVar2 = (int)*(char *)((uint64_t)(uVar1 & 0x7fff) + unaff_RSI) + (int)in_R11[2];
  *(uint *)(in_R11 + 2) = uVar2 & 7;
  *in_R11 = ((int64_t)(int)uVar2 >> 3) + unaff_RBX;
  return (int)*(short *)(*(int64_t *)(in_R10 + 0x50) + (uint64_t)(uVar1 - 1) * 2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808281a0(uint64_t param_1)
void FUN_1808281a0(uint64_t param_1)

{
  int iVar1;
  int32_t auStack_48 [2];
  int32_t uStack_40;
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_48;
  auStack_48[0] = 0;
  iVar1 = SystemCore_DatabaseManager(param_1,0x18);
  if (iVar1 == 0x564342) {
    uStack_40 = SystemCore_DatabaseManager(param_1,0x10);
    iVar1 = SystemCore_DatabaseManager(param_1,0x18);
    if (iVar1 != -1) {
      iVar1 = SystemCore_DatabaseManager(param_1,1);
      if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
        SystemCore_MemoryManager0();
      }
      if (iVar1 == 1) {
        SystemCore_DatabaseManager(param_1,5);
                    // WARNING: Subroutine does not return
        SystemCore_MemoryManager0();
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_48);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180828690(uint64_t param_1,uint64_t param_2)
void FUN_180828690(uint64_t param_1,uint64_t param_2)

{
  int32_t auStack_48 [4];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_48;
  auStack_48[0] = 0;
                    // WARNING: Subroutine does not return
  memset(param_2,0,0x78);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180828b00(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_180828b00(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t auStack_58 [3];
  uint64_t uStack_40;
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_58;
  auStack_58[0] = param_1;
  uStack_40 = param_3;
  if (0 < *(short *)(param_4 + 0x62)) {
    uVar1 = (int64_t)*(short *)(param_4 + 0x62) * 4;
    uVar2 = uVar1 + 0xf;
    if (uVar2 <= uVar1) {
      uVar2 = 0xffffffffffffff0;
    }
                    // WARNING: Subroutine does not return
    SystemCore_MemoryManager0(uVar2 & 0xfffffffffffffff0);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(GET_SECURITY_COOKIE());
}





// 函数: void FUN_180829160(uint param_1,uint param_2)
void FUN_180829160(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  
  iVar1 = 0;
  uVar4 = param_1;
  if (param_1 != 0) {
    do {
      iVar1 = iVar1 + 1;
      uVar4 = uVar4 >> 1;
    } while (uVar4 != 0);
  }
  iVar1 = (int)param_1 >> ((byte)((int)((iVar1 + -1) * (param_2 - 1)) / (int)param_2) & 0x1f);
  while( true ) {
    iVar3 = 1;
    iVar2 = 1;
    if (0 < (int)param_2) {
      uVar5 = (uint64_t)param_2;
      do {
        iVar2 = iVar2 * iVar1;
        iVar3 = iVar3 * (iVar1 + 1);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if ((iVar2 <= (int)param_1) && ((int)param_1 < iVar3)) break;
    iVar3 = -1;
    if (iVar2 <= (int)param_1) {
      iVar3 = 1;
    }
    iVar1 = iVar3 + iVar1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808291f0(void)
void FUN_1808291f0(void)

{
  int8_t auStack_d8 [32];
  int8_t auStack_b8 [144];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
                    // WARNING: Subroutine does not return
  memset(auStack_b8,0,0x84);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180829400(uint64_t param_1,uint64_t param_2)
void FUN_180829400(uint64_t param_1,uint64_t param_2)

{
  int32_t auStack_48 [4];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_48;
  auStack_48[0] = 0;
  SystemCore_DatabaseManager(param_2,5);
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0(0xffffffffffffff0);
}



int64_t * FUN_1808296c0(int64_t param_1,uint64_t param_2)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int8_t uVar5;
  char cVar6;
  ushort uVar7;
  int32_t uVar8;
  int64_t *plVar9;
  int64_t lVar10;
  int64_t lVar11;
  ushort *puVar12;
  int iVar13;
  int iVar14;
  int64_t lVar15;
  int iVar16;
  int8_t uVar17;
  ushort uVar18;
  char *pcVar19;
  uint64_t uVar20;
  int iVar21;
  
  lVar11 = *(int64_t *)(param_1 + 0x20);
  iVar21 = 0;
  iVar13 = -1;
  plVar9 = (int64_t *)func_0x0001807b1780(1,0x40);
  uVar8 = SystemCore_DatabaseManager(param_2,5);
  *(int32_t *)(plVar9 + 6) = uVar8;
  lVar10 = func_0x0001807b17e0(uVar8);
  iVar16 = 0;
  plVar9[1] = lVar10;
  if (0 < (int)plVar9[6]) {
    do {
      uVar5 = SystemCore_DatabaseManager(param_2,4);
      *(int8_t *)((int64_t)iVar16 + plVar9[1]) = uVar5;
      iVar14 = (int)*(char *)((int64_t)iVar16 + plVar9[1]);
      if (iVar14 <= iVar13) {
        iVar14 = iVar13;
      }
      iVar13 = iVar14;
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)plVar9[6]);
  }
  lVar10 = func_0x0001807b17e0((iVar13 + 1) * 0xb);
  *plVar9 = lVar10;
  iVar16 = 0;
  if (0 < iVar13 + 1) {
    do {
      cVar6 = SystemCore_DatabaseManager(param_2,3);
      lVar10 = (int64_t)iVar16 * 0xb;
      *(char *)(lVar10 + *plVar9) = cVar6 + '\x01';
      uVar5 = SystemCore_DatabaseManager(param_2,2);
      *(int8_t *)(lVar10 + 1 + *plVar9) = uVar5;
      iVar14 = func_0x00018080b960(param_2);
      if (iVar14 < 0) goto LAB_18082997d;
      if (*(char *)(*plVar9 + 1 + lVar10) == '\0') {
        *(int8_t *)(*plVar9 + 2 + lVar10) = 0;
      }
      else {
        uVar5 = SystemCore_DatabaseManager(param_2,8);
        *(int8_t *)(lVar10 + 2 + *plVar9) = uVar5;
      }
      if (*(int *)(lVar11 + 0x18) <= (int)(uint)*(byte *)(*plVar9 + 2 + lVar10)) goto LAB_18082997d;
      iVar14 = 0;
      lVar15 = lVar10;
      if (0 < 1 << (*(byte *)(*plVar9 + 1 + lVar10) & 0x1f)) {
        do {
          cVar6 = SystemCore_DatabaseManager(param_2,8);
          *(char *)(*plVar9 + 3 + lVar15) = cVar6 + -1;
          bVar2 = *(byte *)(*plVar9 + 3 + lVar15);
          if ((*(int *)(lVar11 + 0x18) <= (int)(uint)bVar2) && (bVar2 != 0xff)) goto LAB_18082997d;
          iVar14 = iVar14 + 1;
          lVar15 = lVar15 + 1;
        } while (iVar14 < 1 << (*(byte *)(lVar10 + 1 + *plVar9) & 0x1f));
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar13 + 1);
  }
  iVar13 = SystemCore_DatabaseManager(param_2,2);
  *(int *)(plVar9 + 7) = iVar13 + 1;
  uVar8 = SystemCore_DatabaseManager(param_2,4);
  if (0 < (int)*(uint *)(plVar9 + 6)) {
    uVar20 = (uint64_t)*(uint *)(plVar9 + 6);
    pcVar19 = (char *)plVar9[1];
    do {
      cVar6 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      iVar21 = iVar21 + *(char *)((int64_t)cVar6 * 0xb + *plVar9);
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  lVar11 = func_0x0001807b17e0((iVar21 + 2) * 2);
  plVar9[2] = lVar11;
  lVar11 = func_0x0001807b17e0(iVar21 + 2);
  plVar9[3] = lVar11;
  lVar11 = func_0x0001807b17e0(iVar21);
  plVar9[5] = lVar11;
  lVar11 = func_0x0001807b17e0(iVar21);
  plVar9[4] = lVar11;
  iVar16 = 0;
  iVar13 = 0;
  if (0 < (int)plVar9[6]) {
    lVar11 = 0;
    do {
      iVar16 = iVar16 + *(char *)((int64_t)*(char *)((int64_t)iVar13 + plVar9[1]) * 0xb + *plVar9)
      ;
      if (lVar11 < iVar16) {
        lVar10 = lVar11 * 2 + 4;
        bVar2 = (byte)uVar8 & 0x1f;
        do {
          uVar7 = SystemCore_DatabaseManager(param_2,uVar8);
          *(ushort *)(lVar10 + plVar9[2]) = uVar7;
          if ((int)(1 << bVar2 | 1U >> 0x20 - bVar2) <= (int)(uint)uVar7) goto LAB_18082997d;
          lVar11 = lVar11 + 1;
          lVar10 = lVar10 + 2;
        } while (lVar11 < iVar16);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)plVar9[6]);
  }
  iVar13 = func_0x00018080b960(param_2);
  if (iVar13 == 0) {
    *(int16_t *)plVar9[2] = 0;
    *(short *)(plVar9[2] + 2) = 1 << ((byte)uVar8 & 0x1f);
    uVar4 = iVar16 + 2;
    *(uint *)((int64_t)plVar9 + 0x34) = uVar4;
    iVar13 = 0;
    if (0 < (int)uVar4) {
      do {
        *(char *)((int64_t)iVar13 + plVar9[3]) = (char)iVar13;
        iVar13 = iVar13 + 1;
        uVar4 = *(uint *)((int64_t)plVar9 + 0x34);
      } while (iVar13 < (int)uVar4);
    }
    FUN_180829f10(plVar9[3],plVar9[2],uVar4 & 0xffff);
    iVar13 = 0;
    if (0 < *(int *)((int64_t)plVar9 + 0x34) + -2) {
      do {
        puVar12 = (ushort *)plVar9[2];
        lVar11 = (int64_t)iVar13;
        iVar16 = 0;
        uVar5 = 0;
        iVar21 = 1;
        uVar17 = 1;
        uVar18 = 0;
        iVar14 = 0;
        uVar7 = puVar12[1];
        puVar1 = puVar12 + lVar11 + 2;
        if (0 < iVar13 + 2) {
          do {
            uVar3 = *puVar12;
            if ((uVar18 < uVar3) && (uVar3 < *puVar1)) {
              iVar16 = iVar14;
              uVar18 = uVar3;
            }
            uVar5 = (int8_t)iVar16;
            if ((uVar3 < uVar7) && (*puVar1 < uVar3)) {
              iVar21 = iVar14;
              uVar7 = uVar3;
            }
            uVar17 = (int8_t)iVar21;
            iVar14 = iVar14 + 1;
            puVar12 = puVar12 + 1;
          } while (iVar14 < iVar13 + 2);
        }
        iVar13 = iVar13 + 1;
        *(int8_t *)(lVar11 + plVar9[5]) = uVar5;
        *(int8_t *)(lVar11 + plVar9[4]) = uVar17;
      } while (iVar13 < *(int *)((int64_t)plVar9 + 0x34) + -2);
    }
  }
  else {
LAB_18082997d:
    plVar9 = (int64_t *)0x0;
  }
  return plVar9;
}



int32_t *
FUN_180829a70(int64_t *param_1,uint64_t param_2,int64_t *param_3,int32_t *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int32_t uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int64_t lVar11;
  uint uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint uVar15;
  int64_t lVar16;
  int iVar17;
  int64_t lVar18;
  uint64_t uVar19;
  int64_t lVar20;
  char *pcVar21;
  int iStackX_8;
  int iStack_68;
  int64_t lStack_58;
  
  lVar18 = *(int64_t *)(*(int64_t *)(*param_1 + 0x20) + 0x48);
  iVar4 = *(int *)((int64_t)(int)param_3[7] * 4 + 0x180bec07c);
  iVar5 = SystemCore_DatabaseManager(param_2,1);
  if (iVar5 == 1) {
    iVar5 = 0;
    uVar15 = iVar4 - 1;
    for (uVar6 = uVar15; uVar6 != 0; uVar6 = uVar6 >> 1) {
      iVar5 = iVar5 + 1;
    }
    uVar7 = SystemCore_DatabaseManager(param_2,iVar5);
    iVar5 = 0;
    *param_4 = uVar7;
    for (; uVar15 != 0; uVar15 = uVar15 >> 1) {
      iVar5 = iVar5 + 1;
    }
    uVar7 = SystemCore_DatabaseManager(param_2,iVar5);
    param_4[1] = uVar7;
    iStack_68 = 0;
    iStackX_8 = 2;
    if (0 < (int)param_3[6]) {
      lStack_58 = 0;
      do {
        iVar8 = 0;
        pcVar21 = (char *)(*param_3 + (int64_t)*(char *)(lStack_58 + param_3[1]) * 0xb);
        bVar1 = pcVar21[1];
        iVar5 = (int)*pcVar21;
        iVar17 = 1 << (bVar1 & 0x1f);
        if ((bVar1 != 0) &&
           (iVar8 = FUN_180828010((uint64_t)(byte)pcVar21[2] * 0x78 + lVar18,param_2), iVar8 == -1)
           ) goto LAB_180829eef;
        if (iVar5 == 4) {
          uVar19 = (int64_t)iVar17 - 1;
          uVar13 = (uint64_t)(iVar8 >> (bVar1 & 0x1f));
          uVar14 = (int64_t)uVar13 >> (bVar1 & 0x3f);
          bVar2 = pcVar21[(uVar19 & uVar13) + 3];
          bVar3 = pcVar21[(uVar14 & uVar19) + 3];
          bVar1 = pcVar21[((int64_t)uVar14 >> (bVar1 & 0x3f) & uVar19) + 3];
          if (pcVar21[((int64_t)iVar8 & uVar19) + 3] == 0xff) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_180828010((uint64_t)(byte)pcVar21[((int64_t)iVar8 & uVar19) + 3] * 0x78 +
                                  lVar18,param_2);
          }
          lVar16 = (int64_t)iStackX_8;
          param_4[lVar16] = uVar7;
          if (bVar2 == 0xff) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_180828010((uint64_t)bVar2 * 0x78 + lVar18,param_2);
          }
          param_4[lVar16 + 1] = uVar7;
          if (bVar3 == 0xff) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_180828010((uint64_t)bVar3 * 0x78 + lVar18,param_2);
          }
          param_4[lVar16 + 2] = uVar7;
          if (bVar1 == 0xff) {
            param_4[lVar16 + 3] = 0;
          }
          else {
            uVar7 = FUN_180828010((uint64_t)bVar1 * 0x78 + lVar18,param_2);
            param_4[lVar16 + 3] = uVar7;
          }
        }
        else if (iVar5 == 3) {
          uVar13 = (int64_t)iVar17 - 1;
          uVar14 = (int64_t)iVar8 >> (bVar1 & 0x3f);
          bVar2 = pcVar21[(uVar14 & uVar13) + 3];
          bVar1 = pcVar21[((int64_t)uVar14 >> (bVar1 & 0x3f) & uVar13) + 3];
          if (pcVar21[(uVar13 & (int64_t)iVar8) + 3] == 0xff) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_180828010((uint64_t)(byte)pcVar21[(uVar13 & (int64_t)iVar8) + 3] * 0x78 +
                                  lVar18,param_2);
          }
          lVar16 = (int64_t)iStackX_8;
          param_4[lVar16] = uVar7;
          if (bVar2 == 0xff) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_180828010((uint64_t)bVar2 * 0x78 + lVar18,param_2);
          }
          param_4[lVar16 + 1] = uVar7;
          if (bVar1 == 0xff) {
            param_4[lVar16 + 2] = 0;
          }
          else {
            uVar7 = FUN_180828010((uint64_t)bVar1 * 0x78 + lVar18,param_2);
            param_4[lVar16 + 2] = uVar7;
          }
        }
        else if (0 < iVar5) {
          lVar16 = 0;
          do {
            uVar13 = (uint64_t)iVar8;
            iVar8 = iVar8 >> (bVar1 & 0x1f);
            if (pcVar21[(uVar13 & (int64_t)iVar17 - 1U) + 3] == 0xff) {
              param_4[iStackX_8 + lVar16] = 0;
            }
            else {
              iVar9 = FUN_180828010((uint64_t)(byte)pcVar21[(uVar13 & (int64_t)iVar17 - 1U) + 3] *
                                    0x78 + lVar18,param_2);
              param_4[iStackX_8 + lVar16] = iVar9;
              if (iVar9 == -1) goto LAB_180829eef;
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 < iVar5);
        }
        iStack_68 = iStack_68 + 1;
        iStackX_8 = iStackX_8 + iVar5;
        lStack_58 = lStack_58 + 1;
      } while (iStack_68 < (int)param_3[6]);
    }
    iVar5 = 2;
    if (2 < *(int *)((int64_t)param_3 + 0x34)) {
      lVar18 = 2;
      do {
        lVar16 = param_3[2];
        lVar11 = (int64_t)*(char *)(param_3[5] + -2 + lVar18);
        lVar20 = (int64_t)*(char *)(lVar18 + -2 + param_3[4]);
        uVar15 = (uint)*(ushort *)(lVar16 + lVar11 * 2);
        uVar6 = (param_4[lVar20] & 0x7fff) - (param_4[lVar11] & 0x7fff);
        iVar17 = (int)(((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) *
                      (*(ushort *)(lVar16 + lVar18 * 2) - uVar15)) /
                 (int)(*(ushort *)(lVar16 + lVar20 * 2) - uVar15);
        uVar15 = param_4[lVar18];
        iVar8 = -iVar17;
        if (-1 < (int)uVar6) {
          iVar8 = iVar17;
        }
        uVar6 = (param_4[lVar11] & 0x7fff) + iVar8;
        uVar12 = iVar4 - uVar6;
        if (uVar15 == 0) {
          param_4[lVar18] = uVar6 | 0x8000;
        }
        else {
          uVar10 = uVar6;
          if ((int)uVar12 < (int)uVar6) {
            uVar10 = uVar12;
          }
          if ((int)uVar15 < (int)(uVar10 * 2)) {
            if ((uVar15 & 1) == 0) {
              iVar8 = (int)uVar15 >> 1;
            }
            else {
              iVar8 = -((int)(uVar15 + 1) >> 1);
            }
          }
          else if ((int)uVar6 < (int)uVar12) {
            iVar8 = uVar15 - uVar6;
          }
          else {
            iVar8 = (uVar12 - uVar15) + -1;
          }
          param_4[lVar18] = uVar6 + iVar8;
          param_4[*(char *)(param_3[5] + -2 + lVar18)] =
               param_4[*(char *)(param_3[5] + -2 + lVar18)] & 0x7fff;
          param_4[*(char *)(lVar18 + -2 + param_3[4])] =
               param_4[*(char *)(lVar18 + -2 + param_3[4])] & 0x7fff;
        }
        iVar5 = iVar5 + 1;
        lVar18 = lVar18 + 1;
      } while (iVar5 < *(int *)((int64_t)param_3 + 0x34));
    }
  }
  else {
LAB_180829eef:
    param_4 = (int32_t *)0x0;
  }
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180829f10(uint64_t param_1,uint64_t param_2,ushort param_3)
void FUN_180829f10(uint64_t param_1,uint64_t param_2,ushort param_3)

{
  ushort auStack_68 [12];
  uint64_t uStack_50;
  uint64_t uStack_40;
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_68;
  auStack_68[0] = param_3;
  uStack_50 = param_2;
  uStack_40 = param_1;
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0(param_3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18082a180(int64_t *param_1,uint64_t param_2,int *param_3,uint64_t *param_4,
void FUN_18082a180(int64_t *param_1,uint64_t param_2,int *param_3,uint64_t *param_4,
                  int64_t param_5,int param_6)

{
  char cVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int iVar9;
  int8_t auStack_88 [4];
  int iStack_84;
  int iStack_78;
  uint64_t uStack_68;
  int64_t lStack_58;
  int64_t lStack_50;
  int64_t lStack_48;
  uint64_t *puStack_40;
  uint64_t uStack_38;
  
  uVar6 = GET_SECURITY_COOKIE();
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_88;
  iVar9 = 0;
  lStack_48 = *(int64_t *)(*param_1 + 0x20);
  iStack_78 = param_3[8];
  lStack_50 = (uint64_t)*(byte *)((int64_t)param_3 + 0x25) * 0x78 +
              *(int64_t *)(lStack_48 + 0x48);
  cVar1 = *(char *)(lStack_50 + 100);
  lStack_58 = (int64_t)cVar1;
  iStack_84 = (int)cVar1;
  iVar4 = *(int *)(lStack_48 + (int64_t)(int)param_1[5] * 4);
  puVar7 = (uint64_t *)(int64_t)param_6;
  iVar3 = param_3[7];
  puVar8 = puVar7;
  uStack_68 = param_2;
  puStack_40 = param_4;
  if (*param_3 < 2) {
    iVar4 = iVar4 >> 1;
    if (iVar4 <= iVar3) {
      iVar3 = iVar4;
    }
    iVar3 = iVar3 - param_3[6];
    if ((0 < iVar3) &&
       (puVar8 = (uint64_t *)((int64_t)iVar3 % (int64_t)iStack_78 & 0xffffffff),
       0 < (int64_t)puVar7)) {
      lVar5 = 0;
      puVar8 = param_4;
      do {
        if (*(int *)(param_5 + lVar5 * 4) != 0) {
          iVar9 = iVar9 + 1;
          *puVar8 = param_4[lVar5];
          puVar8 = puVar8 + 1;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int64_t)puVar7);
      if (iVar9 != 0) {
        uVar6 = (int64_t)iVar9 * 8 + 0xf;
        if (uVar6 <= (uint64_t)((int64_t)iVar9 * 8)) {
          uVar6 = 0xffffffffffffff0;
        }
                    // WARNING: Subroutine does not return
        SystemCore_MemoryManager0(uVar6 & 0xfffffffffffffff0);
      }
    }
  }
  else {
    iVar4 = iVar4 * param_6 >> 1;
    if (iVar4 <= iVar3) {
      iVar3 = iVar4;
    }
    iVar3 = iVar3 - param_3[6];
    if (0 < iVar3) {
      iVar4 = cVar1 + -1 + iVar3 / iStack_78;
      uVar2 = (int64_t)iVar4 % (int64_t)iStack_84;
      iVar4 = iVar4 - (int)uVar2;
      uVar6 = (int64_t)iVar4 + 0xf;
      if (uVar6 <= (uint64_t)(int64_t)iVar4) {
        uVar6 = 0xffffffffffffff0;
      }
                    // WARNING: Subroutine does not return
      SystemCore_MemoryManager0(iVar4,uVar2 & 0xffffffff,uVar6 & 0xfffffffffffffff0);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uVar6,puVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



