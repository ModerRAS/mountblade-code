#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part100.c - 6 个函数

// 函数: void FUN_180727b80(uint64_t param_1)
void FUN_180727b80(uint64_t param_1)

{
                    // WARNING: Subroutine does not return
  memset(param_1,0,0x70);
}



float FUN_180727db0(int param_1,uint64_t param_2,uint param_3,int *param_4)

{
  int64_t lVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint64_t uVar10;
  short sVar11;
  uint uVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar13 = (uint64_t)param_1;
  uVar10 = param_2 & 0xffffffff;
  iVar4 = (int)param_2;
  fVar17 = 0.0;
  if (2 < param_1) {
    lVar6 = uVar13 * 4;
    plVar14 = (int64_t *)(&memory_allocator_3760_ptr + uVar13 * 8);
    do {
      lVar5 = (int64_t)(int)uVar10;
      sVar11 = (short)uVar10;
      if ((int)uVar10 < (int)uVar13) {
        uVar12 = *(uint *)(lVar6 + *(int64_t *)(&memory_allocator_3768_ptr + lVar5 * 8));
        if ((param_3 < *(uint *)(lVar6 + *(int64_t *)(&memory_allocator_3760_ptr + lVar5 * 8))) ||
           (uVar12 <= param_3)) {
          uVar7 = 0;
          if (uVar12 <= param_3) {
            uVar7 = uVar12;
          }
          do {
            uVar9 = (int)uVar10 - 1;
            uVar10 = (uint64_t)uVar9;
          } while (param_3 - uVar7 <
                   *(uint *)(lVar6 + *(int64_t *)(&memory_allocator_3760_ptr + (int64_t)(int)uVar9 * 8)));
          uVar3 = (param_3 < uVar12) - 1;
          sVar2 = uVar3 - (short)uVar9;
          param_3 = (param_3 - uVar7) -
                    *(uint *)(lVar6 + *(int64_t *)(&memory_allocator_3760_ptr + (int64_t)(int)uVar9 * 8));
          goto LAB_180727edb;
        }
        param_3 = param_3 - *(uint *)(lVar6 + *(int64_t *)(&memory_allocator_3760_ptr + lVar5 * 8));
        iVar8 = 0;
      }
      else {
        lVar1 = *plVar14;
        uVar12 = *(uint *)(lVar1 + 4 + lVar5 * 4);
        uVar7 = 0;
        if (uVar12 <= param_3) {
          uVar7 = uVar12;
        }
        uVar7 = param_3 - uVar7;
        if (uVar7 < *(uint *)(lVar6 + lVar1)) {
          uVar10 = uVar13 & 0xffffffff;
          do {
            uVar9 = (int)uVar10 - 1;
            uVar10 = (uint64_t)uVar9;
            uVar9 = *(uint *)(lVar6 + *(int64_t *)(&memory_allocator_3760_ptr + (int64_t)(int)uVar9 * 8));
          } while (uVar7 < uVar9);
        }
        else {
          for (uVar9 = *(uint *)(lVar1 + lVar5 * 4); uVar7 < uVar9;
              uVar9 = *(uint *)(lVar1 + (int64_t)(int)uVar9 * 4)) {
            uVar9 = (int)uVar10 - 1;
            uVar10 = (uint64_t)uVar9;
          }
        }
        uVar3 = (param_3 < uVar12) - 1;
        sVar2 = uVar3 - (short)uVar10;
        param_3 = uVar7 - uVar9;
LAB_180727edb:
        iVar8 = (int)(short)(sVar2 + sVar11 ^ uVar3);
        fVar17 = fVar17 + (float)iVar8 * (float)iVar8;
      }
      iVar4 = (int)uVar10;
      *param_4 = iVar8;
      uVar12 = (int)uVar13 - 1;
      uVar13 = (uint64_t)uVar12;
      param_4 = param_4 + 1;
      plVar14 = plVar14 + -1;
      lVar6 = lVar6 + -4;
    } while (2 < (int)uVar12);
  }
  uVar7 = iVar4 * 2 + 1;
  uVar12 = 0;
  if (uVar7 <= param_3) {
    uVar12 = uVar7;
  }
  uVar12 = param_3 - uVar12;
  uVar9 = uVar12 + 1 >> 1;
  sVar11 = (short)uVar9;
  if (uVar9 != 0) {
    uVar12 = (uint)(ushort)((short)uVar12 + sVar11 * -2 + 1);
  }
  uVar3 = (param_3 < uVar7) - 1;
  iVar4 = (int)(short)((uVar3 - sVar11) + (short)iVar4 ^ uVar3);
  *param_4 = iVar4;
  fVar15 = (float)iVar4;
  iVar4 = (int)(short)(sVar11 + -(short)uVar12 ^ -(short)uVar12);
  param_4[1] = iVar4;
  fVar16 = (float)iVar4;
  return fVar15 * fVar15 + fVar17 + fVar16 * fVar16;
}



float FUN_180727db6(int param_1,uint64_t param_2,uint param_3,int *param_4)

{
  int64_t lVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint64_t uVar10;
  short sVar11;
  uint uVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar13 = (uint64_t)param_1;
  uVar10 = param_2 & 0xffffffff;
  iVar4 = (int)param_2;
  fVar17 = 0.0;
  if (2 < param_1) {
    lVar6 = uVar13 * 4;
    plVar14 = (int64_t *)(&memory_allocator_3760_ptr + uVar13 * 8);
    do {
      lVar5 = (int64_t)(int)uVar10;
      sVar11 = (short)uVar10;
      if ((int)uVar10 < (int)uVar13) {
        uVar12 = *(uint *)(lVar6 + *(int64_t *)(&memory_allocator_3768_ptr + lVar5 * 8));
        if ((param_3 < *(uint *)(lVar6 + *(int64_t *)(&memory_allocator_3760_ptr + lVar5 * 8))) ||
           (uVar12 <= param_3)) {
          uVar7 = 0;
          if (uVar12 <= param_3) {
            uVar7 = uVar12;
          }
          do {
            uVar9 = (int)uVar10 - 1;
            uVar10 = (uint64_t)uVar9;
          } while (param_3 - uVar7 <
                   *(uint *)(lVar6 + *(int64_t *)(&memory_allocator_3760_ptr + (int64_t)(int)uVar9 * 8)));
          uVar3 = (param_3 < uVar12) - 1;
          sVar2 = uVar3 - (short)uVar9;
          param_3 = (param_3 - uVar7) -
                    *(uint *)(lVar6 + *(int64_t *)(&memory_allocator_3760_ptr + (int64_t)(int)uVar9 * 8));
          goto LAB_180727edb;
        }
        param_3 = param_3 - *(uint *)(lVar6 + *(int64_t *)(&memory_allocator_3760_ptr + lVar5 * 8));
        iVar8 = 0;
      }
      else {
        lVar1 = *plVar14;
        uVar12 = *(uint *)(lVar1 + 4 + lVar5 * 4);
        uVar7 = 0;
        if (uVar12 <= param_3) {
          uVar7 = uVar12;
        }
        uVar7 = param_3 - uVar7;
        if (uVar7 < *(uint *)(lVar6 + lVar1)) {
          uVar10 = uVar13 & 0xffffffff;
          do {
            uVar9 = (int)uVar10 - 1;
            uVar10 = (uint64_t)uVar9;
            uVar9 = *(uint *)(lVar6 + *(int64_t *)(&memory_allocator_3760_ptr + (int64_t)(int)uVar9 * 8));
          } while (uVar7 < uVar9);
        }
        else {
          for (uVar9 = *(uint *)(lVar1 + lVar5 * 4); uVar7 < uVar9;
              uVar9 = *(uint *)(lVar1 + (int64_t)(int)uVar9 * 4)) {
            uVar9 = (int)uVar10 - 1;
            uVar10 = (uint64_t)uVar9;
          }
        }
        uVar3 = (param_3 < uVar12) - 1;
        sVar2 = uVar3 - (short)uVar10;
        param_3 = uVar7 - uVar9;
LAB_180727edb:
        iVar8 = (int)(short)(sVar2 + sVar11 ^ uVar3);
        fVar17 = fVar17 + (float)iVar8 * (float)iVar8;
      }
      iVar4 = (int)uVar10;
      *param_4 = iVar8;
      uVar12 = (int)uVar13 - 1;
      uVar13 = (uint64_t)uVar12;
      param_4 = param_4 + 1;
      plVar14 = plVar14 + -1;
      lVar6 = lVar6 + -4;
    } while (2 < (int)uVar12);
  }
  uVar7 = iVar4 * 2 + 1;
  uVar12 = 0;
  if (uVar7 <= param_3) {
    uVar12 = uVar7;
  }
  uVar12 = param_3 - uVar12;
  uVar9 = uVar12 + 1 >> 1;
  sVar11 = (short)uVar9;
  if (uVar9 != 0) {
    uVar12 = (uint)(ushort)((short)uVar12 + sVar11 * -2 + 1);
  }
  uVar3 = (param_3 < uVar7) - 1;
  iVar4 = (int)(short)((uVar3 - sVar11) + (short)iVar4 ^ uVar3);
  *param_4 = iVar4;
  fVar15 = (float)iVar4;
  iVar4 = (int)(short)(sVar11 + -(short)uVar12 ^ -(short)uVar12);
  param_4[1] = iVar4;
  fVar16 = (float)iVar4;
  return fVar15 * fVar15 + fVar17 + fVar16 * fVar16;
}



float FUN_180727dd3(uint64_t param_1,uint64_t param_2,float param_3)

{
  int64_t lVar1;
  short sVar2;
  ushort uVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint unaff_EBP;
  uint *unaff_RSI;
  uint *puVar6;
  uint in_R8D;
  uint uVar7;
  uint uVar8;
  int in_R10D;
  int iVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  uint64_t in_R11;
  int64_t *plVar13;
  float fVar14;
  float fVar15;
  
  lVar5 = in_R11 * 4;
  plVar13 = (int64_t *)(&memory_allocator_3760_ptr + in_R11 * 8);
  do {
    puVar6 = unaff_RSI;
    lVar4 = (int64_t)in_R10D;
    iVar11 = (int)in_R11;
    sVar10 = (short)in_R10D;
    if (in_R10D < iVar11) {
      uVar8 = *(uint *)(lVar5 + *(int64_t *)(&memory_allocator_3768_ptr + lVar4 * 8));
      if ((in_R8D < *(uint *)(lVar5 + *(int64_t *)(&memory_allocator_3760_ptr + lVar4 * 8))) ||
         (uVar8 <= in_R8D)) {
        uVar7 = unaff_EBP;
        if (uVar8 <= in_R8D) {
          uVar7 = uVar8;
        }
        do {
          in_R10D = in_R10D + -1;
        } while (in_R8D - uVar7 <
                 *(uint *)(lVar5 + *(int64_t *)(&memory_allocator_3760_ptr + (int64_t)in_R10D * 8)));
        uVar3 = (in_R8D < uVar8) - 1;
        sVar2 = uVar3 - (short)in_R10D;
        in_R8D = (in_R8D - uVar7) -
                 *(uint *)(lVar5 + *(int64_t *)(&memory_allocator_3760_ptr + (int64_t)in_R10D * 8));
        goto LAB_180727edb;
      }
      in_R8D = in_R8D - *(uint *)(lVar5 + *(int64_t *)(&memory_allocator_3760_ptr + lVar4 * 8));
      uVar8 = unaff_EBP;
    }
    else {
      lVar1 = *plVar13;
      uVar8 = *(uint *)(lVar1 + 4 + lVar4 * 4);
      uVar7 = unaff_EBP;
      if (uVar8 <= in_R8D) {
        uVar7 = uVar8;
      }
      uVar7 = in_R8D - uVar7;
      iVar9 = iVar11;
      if (uVar7 < *(uint *)(lVar5 + lVar1)) {
        do {
          in_R10D = iVar9 + -1;
          uVar12 = *(uint *)(lVar5 + *(int64_t *)(&memory_allocator_3760_ptr + (int64_t)in_R10D * 8));
          iVar9 = in_R10D;
        } while (uVar7 < uVar12);
      }
      else {
        uVar12 = *(uint *)(lVar1 + lVar4 * 4);
        while (uVar7 < uVar12) {
          in_R10D = in_R10D + -1;
          uVar12 = *(uint *)(lVar1 + (int64_t)in_R10D * 4);
        }
      }
      uVar3 = (in_R8D < uVar8) - 1;
      sVar2 = uVar3 - (short)in_R10D;
      in_R8D = uVar7 - uVar12;
LAB_180727edb:
      uVar8 = (uint)(short)(sVar2 + sVar10 ^ uVar3);
      fVar14 = (float)(int)uVar8;
      param_3 = param_3 + fVar14 * fVar14;
    }
    *puVar6 = uVar8;
    in_R11 = (uint64_t)(iVar11 - 1U);
    plVar13 = plVar13 + -1;
    lVar5 = lVar5 + -4;
    unaff_RSI = puVar6 + 1;
    if ((int)(iVar11 - 1U) < 3) {
      uVar8 = in_R10D * 2 + 1;
      if (uVar8 <= in_R8D) {
        unaff_EBP = uVar8;
      }
      uVar7 = in_R8D - unaff_EBP;
      uVar12 = uVar7 + 1 >> 1;
      sVar10 = (short)uVar12;
      if (uVar12 != 0) {
        uVar7 = (uint)(ushort)((short)uVar7 + sVar10 * -2 + 1);
      }
      uVar3 = (in_R8D < uVar8) - 1;
      uVar8 = (uint)(short)((uVar3 - sVar10) + (short)in_R10D ^ uVar3);
      puVar6[1] = uVar8;
      fVar14 = (float)(int)uVar8;
      uVar8 = (uint)(short)(sVar10 + -(short)uVar7 ^ -(short)uVar7);
      puVar6[2] = uVar8;
      fVar15 = (float)(int)uVar8;
      return fVar14 * fVar14 + param_3 + fVar15 * fVar15;
    }
  } while( true );
}



float FUN_180727f29(uint64_t param_1,uint64_t param_2,float param_3)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  uint unaff_EBP;
  int *unaff_RSI;
  uint in_R8D;
  uint uVar4;
  short in_R10W;
  uint8_t in_register_00000092;
  short sVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = (int)CONCAT62(in_register_00000092,in_R10W) * 2 + 1;
  if (uVar1 <= in_R8D) {
    unaff_EBP = uVar1;
  }
  uVar4 = in_R8D - unaff_EBP;
  uVar6 = uVar4 + 1 >> 1;
  sVar5 = (short)uVar6;
  if (uVar6 != 0) {
    uVar4 = (uint)(ushort)((short)uVar4 + sVar5 * -2 + 1);
  }
  uVar3 = (in_R8D < uVar1) - 1;
  iVar2 = (int)(short)((uVar3 - sVar5) + in_R10W ^ uVar3);
  *unaff_RSI = iVar2;
  fVar7 = (float)iVar2;
  iVar2 = (int)(short)(sVar5 + -(short)uVar4 ^ -(short)uVar4);
  unaff_RSI[1] = iVar2;
  fVar8 = (float)iVar2;
  return fVar7 * fVar7 + param_3 + fVar8 * fVar8;
}



float FUN_180727f4b(uint param_1,uint64_t param_2,float param_3,short param_4)

{
  int iVar1;
  ushort uVar2;
  int *unaff_RSI;
  uint in_R8D;
  ushort uVar3;
  short in_R10W;
  short in_R11W;
  float fVar4;
  float fVar5;
  
  uVar3 = -(param_4 + in_R11W * -2 + 1);
  uVar2 = (in_R8D < param_1) - 1;
  iVar1 = (int)(short)((uVar2 - in_R11W) + in_R10W ^ uVar2);
  *unaff_RSI = iVar1;
  fVar4 = (float)iVar1;
  iVar1 = (int)(short)(in_R11W + uVar3 ^ uVar3);
  unaff_RSI[1] = iVar1;
  fVar5 = (float)iVar1;
  return fVar4 * fVar4 + param_3 + fVar5 * fVar5;
}



float FUN_180727fc0(int *param_1,int param_2,int param_3,uint64_t param_4)

{
  uint uVar1;
  int64_t lVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint uVar10;
  int iVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  uint64_t uVar15;
  int64_t *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  iVar14 = param_3 + 1;
  iVar11 = iVar14;
  if (param_2 < iVar14) {
    iVar11 = param_2;
  }
  if (iVar14 < param_2) {
    iVar14 = param_2;
  }
  iVar4 = param_3;
  if (param_2 < param_3) {
    iVar4 = param_2;
  }
  iVar5 = param_3;
  if (param_3 < param_2) {
    iVar5 = param_2;
  }
  uVar6 = FUN_18070f540(param_4,*(int *)(*(int64_t *)(&memory_allocator_3760_ptr + (int64_t)iVar4 * 8) +
                                        (int64_t)iVar5 * 4) +
                                *(int *)(*(int64_t *)(&memory_allocator_3760_ptr + (int64_t)iVar11 * 8) +
                                        (int64_t)iVar14 * 4));
  uVar15 = (uint64_t)param_2;
  fVar19 = 0.0;
  if (2 < param_2) {
    lVar9 = uVar15 * 4;
    plVar16 = (int64_t *)(&memory_allocator_3760_ptr + uVar15 * 8);
    do {
      lVar8 = (int64_t)param_3;
      iVar14 = (int)uVar15;
      sVar12 = (short)param_3;
      if (param_3 < iVar14) {
        uVar1 = *(uint *)(lVar9 + *(int64_t *)(&memory_allocator_3768_ptr + lVar8 * 8));
        if ((uVar6 < *(uint *)(lVar9 + *(int64_t *)(&memory_allocator_3760_ptr + lVar8 * 8))) ||
           (uVar1 <= uVar6)) {
          uVar10 = 0;
          if (uVar1 <= uVar6) {
            uVar10 = uVar1;
          }
          do {
            param_3 = param_3 + -1;
          } while (uVar6 - uVar10 <
                   *(uint *)(lVar9 + *(int64_t *)(&memory_allocator_3760_ptr + (int64_t)param_3 * 8)));
          uVar7 = (uVar6 < uVar1) - 1;
          sVar3 = uVar7 - (short)param_3;
          uVar6 = (uVar6 - uVar10) -
                  *(uint *)(lVar9 + *(int64_t *)(&memory_allocator_3760_ptr + (int64_t)param_3 * 8));
          goto LAB_180727edb;
        }
        uVar6 = uVar6 - *(uint *)(lVar9 + *(int64_t *)(&memory_allocator_3760_ptr + lVar8 * 8));
        iVar11 = 0;
      }
      else {
        lVar2 = *plVar16;
        uVar1 = *(uint *)(lVar2 + 4 + lVar8 * 4);
        uVar10 = 0;
        if (uVar1 <= uVar6) {
          uVar10 = uVar1;
        }
        uVar10 = uVar6 - uVar10;
        iVar11 = iVar14;
        if (uVar10 < *(uint *)(lVar9 + lVar2)) {
          do {
            param_3 = iVar11 + -1;
            uVar13 = *(uint *)(lVar9 + *(int64_t *)(&memory_allocator_3760_ptr + (int64_t)param_3 * 8));
            iVar11 = param_3;
          } while (uVar10 < uVar13);
        }
        else {
          uVar13 = *(uint *)(lVar2 + lVar8 * 4);
          while (uVar10 < uVar13) {
            param_3 = param_3 + -1;
            uVar13 = *(uint *)(lVar2 + (int64_t)param_3 * 4);
          }
        }
        uVar7 = (uVar6 < uVar1) - 1;
        sVar3 = uVar7 - (short)param_3;
        uVar6 = uVar10 - uVar13;
LAB_180727edb:
        iVar11 = (int)(short)(sVar3 + sVar12 ^ uVar7);
        fVar19 = fVar19 + (float)iVar11 * (float)iVar11;
      }
      *param_1 = iVar11;
      uVar15 = (uint64_t)(iVar14 - 1U);
      param_1 = param_1 + 1;
      plVar16 = plVar16 + -1;
      lVar9 = lVar9 + -4;
    } while (2 < (int)(iVar14 - 1U));
  }
  uVar1 = param_3 * 2 + 1;
  uVar10 = 0;
  if (uVar1 <= uVar6) {
    uVar10 = uVar1;
  }
  uVar10 = uVar6 - uVar10;
  uVar13 = uVar10 + 1 >> 1;
  sVar12 = (short)uVar13;
  if (uVar13 != 0) {
    uVar10 = (uint)(ushort)((short)uVar10 + sVar12 * -2 + 1);
  }
  uVar7 = (uVar6 < uVar1) - 1;
  iVar14 = (int)(short)((uVar7 - sVar12) + (short)param_3 ^ uVar7);
  *param_1 = iVar14;
  fVar17 = (float)iVar14;
  iVar14 = (int)(short)(sVar12 + -(short)uVar10 ^ -(short)uVar10);
  param_1[1] = iVar14;
  fVar18 = (float)iVar14;
  return fVar17 * fVar17 + fVar19 + fVar18 * fVar18;
}





// 函数: void FUN_180728050(int64_t param_1,int param_2,int param_3,int64_t *param_4)
void FUN_180728050(int64_t param_1,int param_2,int param_3,int64_t *param_4)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  
  iVar7 = param_2 + -1;
  iVar16 = param_3 + 1;
  iVar11 = iVar16;
  if (param_2 < iVar16) {
    iVar11 = param_2;
  }
  if (iVar16 < param_2) {
    iVar16 = param_2;
  }
  puVar8 = (uint *)(param_1 + (int64_t)iVar7 * 4);
  uVar12 = *puVar8;
  uVar15 = uVar12 >> 0x1f;
  iVar6 = (uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f);
  iVar13 = param_2 - iVar7;
  do {
    iVar7 = iVar7 + -1;
    puVar8 = puVar8 + -1;
    iVar14 = iVar13 + 1;
    iVar3 = iVar14;
    if (iVar6 <= iVar14) {
      iVar3 = iVar6;
    }
    iVar4 = iVar14;
    if (iVar14 <= iVar6) {
      iVar4 = iVar6;
    }
    uVar12 = *puVar8;
    uVar15 = uVar15 + *(int *)(*(int64_t *)(&memory_allocator_3760_ptr + (int64_t)iVar3 * 8) +
                              (int64_t)iVar4 * 4);
    iVar6 = iVar6 + ((uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f));
    if ((int)uVar12 < 0) {
      iVar3 = iVar13;
      if (iVar6 + 1 <= iVar14) {
        iVar3 = iVar6;
      }
      if (iVar14 <= iVar6 + 1) {
        iVar13 = iVar6;
      }
      uVar15 = uVar15 + *(int *)(*(int64_t *)(&memory_allocator_3768_ptr + (int64_t)iVar3 * 8) + 4 +
                                (int64_t)iVar13 * 4);
    }
    iVar13 = iVar14;
  } while (0 < iVar7);
  iVar7 = param_3;
  if (param_2 < param_3) {
    iVar7 = param_2;
  }
  if (param_3 < param_2) {
    param_3 = param_2;
  }
  uVar9 = *(int *)(*(int64_t *)(&memory_allocator_3760_ptr + (int64_t)iVar7 * 8) + (int64_t)param_3 * 4) +
          *(int *)(*(int64_t *)(&memory_allocator_3760_ptr + (int64_t)iVar11 * 8) + (int64_t)iVar16 * 4);
  uVar12 = *(uint *)(param_4 + 4);
  uVar10 = uVar9 - 1;
  iVar16 = 0x1f;
  if (uVar10 != 0) {
    for (; uVar10 >> iVar16 == 0; iVar16 = iVar16 + -1) {
    }
  }
  if (iVar16 + 1 < 9) {
    uVar10 = uVar12 / uVar9;
    if (uVar15 == 0) {
      uVar10 = uVar12 - ((uVar9 - uVar15) + -1) * uVar10;
    }
    else {
      *(int *)((int64_t)param_4 + 0x24) =
           *(int *)((int64_t)param_4 + 0x24) + (uVar12 - (uVar9 - uVar15) * uVar10);
    }
    *(uint *)(param_4 + 4) = uVar10;
    if (*(uint *)(param_4 + 4) < 0x800001) {
      uVar12 = *(uint *)((int64_t)param_4 + 0x24);
      do {
        if (uVar12 >> 0x17 == 0xff) {
          *(int *)(param_4 + 5) = (int)param_4[5] + 1;
        }
        else {
          cVar2 = (char)((int)uVar12 >> 0x1f);
          if (-1 < *(int *)((int64_t)param_4 + 0x2c)) {
            if (*(int *)((int64_t)param_4 + 0xc) + *(uint *)((int64_t)param_4 + 0x1c) <
                *(uint *)(param_4 + 1)) {
              *(char *)((uint64_t)*(uint *)((int64_t)param_4 + 0x1c) + *param_4) =
                   (char)*(int *)((int64_t)param_4 + 0x2c) - cVar2;
              *(int *)((int64_t)param_4 + 0x1c) = *(int *)((int64_t)param_4 + 0x1c) + 1;
              uVar15 = 0;
            }
            else {
              uVar15 = 0xffffffff;
            }
            *(uint *)(param_4 + 6) = *(uint *)(param_4 + 6) | uVar15;
          }
          if ((int)param_4[5] != 0) {
            uVar15 = *(uint *)((int64_t)param_4 + 0x1c);
            do {
              if (*(int *)((int64_t)param_4 + 0xc) + uVar15 < *(uint *)(param_4 + 1)) {
                *(char *)((uint64_t)uVar15 + *param_4) = -1 - cVar2;
                *(int *)((int64_t)param_4 + 0x1c) = *(int *)((int64_t)param_4 + 0x1c) + 1;
                uVar15 = *(uint *)((int64_t)param_4 + 0x1c);
                uVar9 = 0;
              }
              else {
                uVar9 = 0xffffffff;
              }
              *(uint *)(param_4 + 6) = *(uint *)(param_4 + 6) | uVar9;
              plVar1 = param_4 + 5;
              *(int *)plVar1 = (int)*plVar1 + -1;
            } while ((int)*plVar1 != 0);
          }
          *(uint *)((int64_t)param_4 + 0x2c) = uVar12 >> 0x17 & 0xff;
        }
        *(int *)(param_4 + 4) = (int)param_4[4] << 8;
        *(int *)(param_4 + 3) = (int)param_4[3] + 8;
        uVar12 = (*(uint *)((int64_t)param_4 + 0x24) & 0x7fffff) << 8;
        *(uint *)((int64_t)param_4 + 0x24) = uVar12;
      } while (*(uint *)(param_4 + 4) < 0x800001);
    }
    return;
  }
  iVar16 = iVar16 + -7;
  bVar5 = (byte)iVar16;
  uVar10 = (uVar10 >> (bVar5 & 0x1f)) + 1;
  uVar9 = uVar12 / uVar10;
  iVar11 = uVar10 - (uVar15 >> (bVar5 & 0x1f));
  if (uVar15 >> (bVar5 & 0x1f) == 0) {
    uVar9 = uVar12 - (iVar11 + -1) * uVar9;
  }
  else {
    *(int *)((int64_t)param_4 + 0x24) =
         *(int *)((int64_t)param_4 + 0x24) + (uVar12 - iVar11 * uVar9);
  }
  *(uint *)(param_4 + 4) = uVar9;
  FUN_180705530(param_4,(uint64_t)uVar12 % (uint64_t)uVar10);
  iVar11 = *(int *)((int64_t)param_4 + 0x14);
  uVar12 = *(uint *)(param_4 + 2);
  if (0x20 < (uint)(iVar11 + iVar16)) {
    do {
      if ((uint)(*(int *)((int64_t)param_4 + 0x1c) + *(int *)((int64_t)param_4 + 0xc)) <
          *(uint *)(param_4 + 1)) {
        iVar7 = *(int *)((int64_t)param_4 + 0xc) + 1;
        *(int *)((int64_t)param_4 + 0xc) = iVar7;
        *(char *)((uint64_t)(*(uint *)(param_4 + 1) - iVar7) + *param_4) = (char)uVar12;
        uVar9 = 0;
      }
      else {
        uVar9 = 0xffffffff;
      }
      *(uint *)(param_4 + 6) = *(uint *)(param_4 + 6) | uVar9;
      iVar11 = iVar11 + -8;
      uVar12 = uVar12 >> 8;
    } while (7 < iVar11);
  }
  *(int *)(param_4 + 3) = (int)param_4[3] + iVar16;
  *(uint *)(param_4 + 2) = ((1 << (bVar5 & 0x1f)) - 1U & uVar15) << ((byte)iVar11 & 0x1f) | uVar12;
  *(int *)((int64_t)param_4 + 0x14) = iVar11 + iVar16;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180728160(uint64_t param_1,uint64_t param_2,uint64_t param_3,int param_4)
void FUN_180728160(uint64_t param_1,uint64_t param_2,uint64_t param_3,int param_4)

{
  int8_t auStack_e8 [16];
  uint64_t uStack_d8;
  
  uStack_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_e8;
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0(param_1,(int64_t)param_4 * 4 + 0xc,0xffffffffffffff0);
}





// 函数: void FUN_180728660(int64_t param_1,int64_t param_2,uint64_t param_3,int param_4,
void FUN_180728660(int64_t param_1,int64_t param_2,uint64_t param_3,int param_4,
                  int32_t param_5)

{
  uint uVar1;
  int16_t uVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x90c) != *(int *)(param_1 + 0x10b4)) {
    *(int *)(param_1 + 0x1064) = *(int *)(param_1 + 0x918) << 7;
    *(int32_t *)(param_1 + 0x10ac) = 0x10000;
    *(int32_t *)(param_1 + 0x10b0) = 0x10000;
    *(int32_t *)(param_1 + 0x10b4) = *(int32_t *)(param_1 + 0x90c);
    *(int32_t *)(param_1 + 0x10bc) = 0x14;
    *(int32_t *)(param_1 + 0x10b8) = 2;
  }
  if (param_4 != 0) {
    FUN_180728720(param_1,param_2,param_3,param_5);
    *(int *)(param_1 + 0x1058) = *(int *)(param_1 + 0x1058) + 1;
    return;
  }
  iVar3 = 0;
  *(int *)(param_1 + 0x105c) = (int)*(char *)(param_1 + 0xae5);
  if (*(char *)(param_1 + 0xae5) == '\x02') {
    uVar5 = (uint64_t)*(int *)(param_1 + 0x914);
    iVar6 = 0;
    if (0 < *(int *)(param_2 + -4 + uVar5 * 4)) {
      do {
        iVar7 = (int)uVar5;
        if (iVar6 == iVar7) break;
        uVar1 = *(uint *)(param_1 + 0x914);
        uVar5 = (uint64_t)uVar1;
        lVar4 = (int64_t)((iVar7 - iVar6) * 5);
        iVar7 = (int)*(short *)(param_2 + 0x5e + lVar4 * 2) +
                (int)*(short *)(param_2 + 0x5c + lVar4 * 2) +
                (int)*(short *)(param_2 + 0x5a + lVar4 * 2) +
                (int)*(short *)(param_2 + 0x58 + lVar4 * 2) +
                (int)*(short *)(param_2 + 0x56 + lVar4 * 2);
        if (iVar3 < iVar7) {
          lVar4 = (int64_t)((short)(*(short *)(param_1 + 0x914) - (short)iVar6) * 5 + -5);
          *(uint64_t *)(param_1 + 0x1068) = *(uint64_t *)(param_2 + 0x60 + lVar4 * 2);
          *(int16_t *)(param_1 + 0x1070) = *(int16_t *)(param_2 + 0x68 + lVar4 * 2);
          *(int *)(param_1 + 0x1064) =
               *(int *)(param_2 + -4 + (int64_t)(int)(uVar1 - iVar6) * 4) << 8;
          iVar3 = iVar7;
        }
        iVar6 = iVar6 + 1;
      } while (*(int *)(param_1 + 0x91c) * iVar6 < *(int *)(param_2 + -4 + (int64_t)(int)uVar1 * 4)
              );
    }
    *(uint64_t *)(param_1 + 0x1068) = 0;
    *(int16_t *)(param_1 + 0x1070) = 0;
    *(short *)(param_1 + 0x106c) = (short)iVar3;
    if (iVar3 < 0x2ccd) {
      iVar6 = 1;
      if (1 < iVar3) {
        iVar6 = iVar3;
      }
      iVar3 = (int)(short)(0xb33400 / (int64_t)iVar6);
      *(short *)(param_1 + 0x1068) = (short)(*(short *)(param_1 + 0x1068) * iVar3 >> 10);
      *(short *)(param_1 + 0x106a) = (short)(*(short *)(param_1 + 0x106a) * iVar3 >> 10);
      *(short *)(param_1 + 0x106c) = (short)(*(short *)(param_1 + 0x106c) * iVar3 >> 10);
      *(short *)(param_1 + 0x106e) = (short)(*(short *)(param_1 + 0x106e) * iVar3 >> 10);
      uVar2 = (int16_t)(*(short *)(param_1 + 0x1070) * iVar3 >> 10);
    }
    else {
      if (iVar3 < 0x3cce) goto LAB_180729492;
      iVar6 = 1;
      if (1 < iVar3) {
        iVar6 = iVar3;
      }
      iVar3 = (int)(short)(0xf334000 / (int64_t)iVar6);
      *(short *)(param_1 + 0x1068) = (short)(*(short *)(param_1 + 0x1068) * iVar3 >> 0xe);
      *(short *)(param_1 + 0x106a) = (short)(*(short *)(param_1 + 0x106a) * iVar3 >> 0xe);
      *(short *)(param_1 + 0x106c) = (short)(*(short *)(param_1 + 0x106c) * iVar3 >> 0xe);
      *(short *)(param_1 + 0x106e) = (short)(*(short *)(param_1 + 0x106e) * iVar3 >> 0xe);
      uVar2 = (int16_t)(*(short *)(param_1 + 0x1070) * iVar3 >> 0xe);
    }
  }
  else {
    uVar2 = 0;
    *(int *)(param_1 + 0x1064) = *(short *)(param_1 + 0x90c) * 0x1200;
    *(uint64_t *)(param_1 + 0x1068) = 0;
  }
  *(int16_t *)(param_1 + 0x1070) = uVar2;
LAB_180729492:
                    // WARNING: Subroutine does not return
  memcpy(param_1 + 0x1072,param_2 + 0x40,(int64_t)*(int *)(param_1 + 0x924) * 2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180728720(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
void FUN_180728720(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int32_t auStack_c8 [18];
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_50;
  
  uStack_50 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  uVar1 = (int64_t)(*(int *)(param_1 + 0x918) + *(int *)(param_1 + 0x920)) * 4;
  uVar2 = uVar1 + 0xf;
  if (uVar2 <= uVar1) {
    uVar2 = 0xffffffffffffff0;
  }
  auStack_c8[0] = param_4;
  uStack_80 = param_3;
  uStack_78 = param_2;
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0(uVar2 & 0xfffffffffffffff0);
}





// 函数: void FUN_1807290a0(int64_t param_1,int64_t param_2,int param_3)
void FUN_1807290a0(int64_t param_1,int64_t param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  int iVar5;
  int64_t lVar6;
  uint uVar7;
  int iVar8;
  int aiStackX_8 [2];
  int aiStackX_20 [2];
  
  if (*(int *)(param_1 + 0x1058) != 0) {
    FUN_18072aa30(param_1 + 0x10a0,param_1 + 0x10a4,param_2,param_3);
    *(int32_t *)(param_1 + 0x1094) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x1094) != 0) {
    FUN_18072aa30(aiStackX_8,aiStackX_20,param_2,param_3);
    iVar3 = *(int *)(param_1 + 0x10a4);
    if (iVar3 < aiStackX_20[0]) {
      *(int *)(param_1 + 0x10a0) =
           *(int *)(param_1 + 0x10a0) >> ((char)aiStackX_20[0] - (char)iVar3 & 0x1fU);
    }
    else if (aiStackX_20[0] < iVar3) {
      aiStackX_8[0] = aiStackX_8[0] >> ((char)iVar3 - (char)aiStackX_20[0] & 0x1fU);
    }
    uVar2 = *(uint *)(param_1 + 0x10a0);
    if ((int)uVar2 < aiStackX_8[0]) {
      if (uVar2 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        iVar3 = 0x1f - iVar3;
      }
      iVar8 = uVar2 << ((byte)(iVar3 + -1) & 0x1f);
      iVar5 = 0x18 - (iVar3 + -1);
      *(int *)(param_1 + 0x10a0) = iVar8;
      iVar3 = 0;
      if (0 < iVar5) {
        iVar3 = iVar5;
      }
      aiStackX_8[0] = aiStackX_8[0] >> ((byte)iVar3 & 0x1f);
      iVar3 = 1;
      if (1 < aiStackX_8[0]) {
        iVar3 = aiStackX_8[0];
      }
      uVar2 = iVar8 / iVar3;
      if ((int)uVar2 < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        uVar7 = 0x1f - iVar3;
        iVar3 = 0x18 - uVar7;
        if (iVar3 != 0) {
          if (iVar3 < 0) {
            bVar1 = -(byte)iVar3 & 0x1f;
            uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
          }
          else {
            bVar1 = (byte)iVar3 & 0x1f;
            uVar2 = uVar2 >> bVar1 | uVar2 << 0x20 - bVar1;
          }
        }
        iVar3 = 0x8000;
        if ((uVar7 & 1) == 0) {
          iVar3 = 0xb486;
        }
        iVar3 = iVar3 >> ((byte)((int)uVar7 >> 1) & 0x1f);
        iVar3 = (int)((uint64_t)(uVar2 & 0x7f) * (int64_t)iVar3 * 0xd5 >> 0x10) + iVar3;
      }
      uVar2 = iVar3 * 0x10;
      if (0 < param_3) {
        lVar6 = 0;
        do {
          uVar4 = (uint64_t)uVar2;
          uVar2 = uVar2 + ((iVar3 * -0x10 + 0x10000) / param_3) * 4;
          *(short *)(param_2 + lVar6 * 2) =
               (short)((int64_t)*(short *)(param_2 + lVar6 * 2) * uVar4 >> 0x10);
          if (0x10000 < (int)uVar2) break;
          lVar6 = lVar6 + 1;
        } while (lVar6 < param_3);
      }
    }
  }
  *(int32_t *)(param_1 + 0x1094) = 0;
  return;
}





