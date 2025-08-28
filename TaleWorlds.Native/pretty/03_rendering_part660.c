#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part660.c - 11 个函数

// 函数: void FUN_180641c80(void)
void FUN_180641c80(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



int FUN_180641cd0(ushort *param_1,uint64_t *param_2,int param_3,int param_4)

{
  byte bVar1;
  int8_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  ushort uVar6;
  uint uVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  uint64_t *puVar15;
  int iVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t *puVar19;
  uint64_t uVar20;
  byte *pbVar21;
  
  if (param_1 == (ushort *)0x0) {
    return -1;
  }
  pbVar21 = (byte *)((int64_t)param_3 + (int64_t)param_1);
  puVar15 = (uint64_t *)((int64_t)param_4 + (int64_t)param_2);
  if (param_4 == 0) {
    if ((param_3 == 1) && ((byte)*param_1 == 0)) {
      return 0;
    }
  }
  else if (param_3 != 0) {
    puVar10 = param_1;
    puVar14 = param_2;
LAB_180641d60:
    do {
      bVar1 = (byte)*puVar10;
      puVar11 = (ushort *)((int64_t)puVar10 + 1);
      uVar17 = (uint64_t)(bVar1 >> 4);
      iVar16 = 0;
      if (uVar17 == 0xf) {
        uVar7 = 0;
        uVar17 = 0;
        if (puVar11 < pbVar21 + -0xf) {
          do {
            uVar6 = *puVar11;
            puVar11 = (ushort *)((int64_t)puVar11 + 1);
            uVar7 = (int)uVar17 + (uint)(byte)uVar6;
            uVar17 = (uint64_t)uVar7;
            if (pbVar21 + -0xf <= puVar11) {
              iVar16 = -2;
              break;
            }
          } while ((byte)uVar6 == 0xff);
        }
        else {
          iVar16 = -1;
        }
        uVar17 = (uint64_t)uVar7 + 0xf;
        if (((iVar16 == -1) || ((uint64_t *)(uVar17 + (int64_t)puVar14) < puVar14)) ||
           ((ushort *)(uVar17 + (int64_t)puVar11) < puVar11)) goto LAB_180641ffe;
LAB_180641e4a:
        puVar13 = (uint64_t *)(uVar17 + (int64_t)puVar14);
        if (((uint64_t *)((int64_t)puVar15 + -0xc) < puVar13) ||
           (puVar10 = (ushort *)(uVar17 + (int64_t)puVar11), pbVar21 + -8 < puVar10)) {
          if (((byte *)(uVar17 + (int64_t)puVar11) == pbVar21) && (puVar13 <= puVar15)) {
                    // WARNING: Subroutine does not return
            memmove(puVar14,puVar11,uVar17);
          }
LAB_180641ffe:
          return ((int)param_1 - (int)puVar11) + -1;
        }
        lVar12 = (int64_t)puVar11 - (int64_t)puVar14;
        do {
          *puVar14 = *(uint64_t *)((int64_t)puVar14 + lVar12);
          puVar14 = puVar14 + 1;
        } while (puVar14 < puVar13);
        uVar20 = (uint64_t)*puVar10;
        puVar11 = puVar10 + 1;
        puVar8 = (uint64_t *)((int64_t)puVar13 - uVar20);
        uVar18 = (uint64_t)(bVar1 & 0xf);
LAB_180641e92:
        if (uVar18 == 0xf) goto LAB_180641e98;
      }
      else {
        if (pbVar21 + -0x10 <= puVar11 || puVar15 + -4 < puVar14) goto LAB_180641e4a;
        uVar3 = *(int32_t *)((int64_t)puVar10 + 5);
        uVar4 = *(int32_t *)((int64_t)puVar10 + 9);
        uVar5 = *(int32_t *)((int64_t)puVar10 + 0xd);
        uVar18 = (uint64_t)(bVar1 & 0xf);
        *(int32_t *)puVar14 = *(int32_t *)puVar11;
        *(int32_t *)((int64_t)puVar14 + 4) = uVar3;
        *(int32_t *)(puVar14 + 1) = uVar4;
        *(int32_t *)((int64_t)puVar14 + 0xc) = uVar5;
        puVar13 = (uint64_t *)((int64_t)puVar14 + uVar17);
        uVar20 = (uint64_t)*(ushort *)((int64_t)puVar11 + uVar17);
        puVar8 = (uint64_t *)((int64_t)puVar13 - uVar20);
        puVar11 = (ushort *)((int64_t)puVar11 + uVar17) + 1;
        if (uVar18 != 0xf) {
          if ((uVar20 < 8) || (puVar8 < param_2)) goto LAB_180641e92;
          *puVar13 = *puVar8;
          puVar13[1] = puVar8[1];
          *(int16_t *)(puVar13 + 2) = *(int16_t *)(puVar8 + 2);
          puVar14 = (uint64_t *)((int64_t)puVar13 + uVar18 + 4);
          puVar10 = puVar11;
          goto LAB_180641d60;
        }
LAB_180641e98:
        uVar18 = 0;
        do {
          uVar6 = *puVar11;
          puVar11 = (ushort *)((int64_t)puVar11 + 1);
          uVar18 = (uint64_t)((int)uVar18 + (uint)(byte)uVar6);
          if (pbVar21 + -4 <= puVar11) break;
        } while ((byte)uVar6 == 0xff);
        uVar18 = uVar18 + 0xf;
        if ((pbVar21 + -4 <= puVar11) || ((uint64_t *)(uVar18 + (int64_t)puVar13) < puVar13))
        goto LAB_180641ffe;
      }
      if (puVar8 < param_2) goto LAB_180641ffe;
      puVar14 = (uint64_t *)(uVar18 + 4 + (int64_t)puVar13);
      if (uVar20 < 8) {
        *(int32_t *)puVar13 = 0;
        *(int8_t *)puVar13 = *(int8_t *)puVar8;
        *(int8_t *)((int64_t)puVar13 + 1) = *(int8_t *)((int64_t)puVar8 + 1);
        *(int8_t *)((int64_t)puVar13 + 2) = *(int8_t *)((int64_t)puVar8 + 2);
        *(int8_t *)((int64_t)puVar13 + 3) = *(int8_t *)((int64_t)puVar8 + 3);
        uVar7 = *(uint *)(&unknown_var_6608_ptr + uVar20 * 4);
        *(int32_t *)((int64_t)puVar13 + 4) =
             *(int32_t *)((int64_t)puVar8 + (uint64_t)uVar7);
        puVar9 = (uint64_t *)
                 ((int64_t)((int64_t)puVar8 + (uint64_t)uVar7) -
                 (int64_t)*(int *)(&unknown_var_6640_ptr + uVar20 * 4));
      }
      else {
        puVar9 = puVar8 + 1;
        *puVar13 = *puVar8;
      }
      puVar8 = puVar13 + 1;
      puVar10 = puVar11;
      if ((uint64_t *)((int64_t)puVar15 + -0xc) < puVar14) {
        puVar13 = (uint64_t *)((int64_t)puVar15 + -7);
        if ((uint64_t *)((int64_t)puVar15 + -5) < puVar14) goto LAB_180641ffe;
        if (puVar8 < puVar13) {
          puVar19 = puVar8;
          do {
            *puVar19 = *(uint64_t *)((int64_t)puVar19 + ((int64_t)puVar9 - (int64_t)puVar8));
            puVar19 = puVar19 + 1;
          } while (puVar19 < puVar13);
          puVar9 = (uint64_t *)((int64_t)puVar9 + ((int64_t)puVar13 - (int64_t)puVar8));
          puVar8 = puVar13;
        }
        for (; puVar8 < puVar14; puVar8 = (uint64_t *)((int64_t)puVar8 + 1)) {
          uVar2 = *(int8_t *)puVar9;
          puVar9 = (uint64_t *)((int64_t)puVar9 + 1);
          *(int8_t *)puVar8 = uVar2;
        }
      }
      else {
        *puVar8 = *puVar9;
        if (0x10 < uVar18 + 4) {
          puVar8 = puVar13 + 2;
          do {
            *puVar8 = *(uint64_t *)
                       ((int64_t)puVar8 + (int64_t)puVar9 + (8 - (int64_t)(puVar13 + 2)));
            puVar8 = puVar8 + 1;
          } while (puVar8 < puVar14);
        }
      }
    } while( true );
  }
  return -1;
}



int FUN_180641d4a(uint64_t param_1,ushort *param_2)

{
  ushort *puVar1;
  byte bVar2;
  int8_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  ushort uVar7;
  uint uVar8;
  uint64_t *in_RAX;
  uint64_t *puVar9;
  uint64_t *puVar10;
  ushort *puVar11;
  int64_t lVar12;
  uint64_t *unaff_RBX;
  uint64_t *puVar13;
  uint64_t *unaff_RBP;
  int iVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t *puVar17;
  uint64_t uVar18;
  uint64_t *unaff_R12;
  ushort *unaff_R13;
  byte *unaff_R14;
  int unaff_R15D;
  
LAB_180641d60:
  while( true ) {
    bVar2 = (byte)*param_2;
    puVar11 = (ushort *)((int64_t)param_2 + 1);
    uVar15 = (uint64_t)(bVar2 >> 4);
    iVar14 = 0;
    if (uVar15 == 0xf) break;
    if (unaff_R13 <= puVar11 || in_RAX < unaff_RBX) goto LAB_180641e4a;
    uVar4 = *(int32_t *)((int64_t)param_2 + 5);
    uVar5 = *(int32_t *)((int64_t)param_2 + 9);
    uVar6 = *(int32_t *)((int64_t)param_2 + 0xd);
    uVar16 = (uint64_t)(bVar2 & 0xf);
    *(int32_t *)unaff_RBX = *(int32_t *)puVar11;
    *(int32_t *)((int64_t)unaff_RBX + 4) = uVar4;
    *(int32_t *)(unaff_RBX + 1) = uVar5;
    *(int32_t *)((int64_t)unaff_RBX + 0xc) = uVar6;
    puVar13 = (uint64_t *)((int64_t)unaff_RBX + uVar15);
    uVar18 = (uint64_t)*(ushort *)((int64_t)puVar11 + uVar15);
    puVar9 = (uint64_t *)((int64_t)puVar13 - uVar18);
    puVar11 = (ushort *)((int64_t)puVar11 + uVar15) + 1;
    if (uVar16 == 0xf) goto LAB_180641e98;
    if ((uVar18 < 8) || (puVar9 < unaff_R12)) goto LAB_180641e92;
    *puVar13 = *puVar9;
    puVar13[1] = puVar9[1];
    *(int16_t *)(puVar13 + 2) = *(int16_t *)(puVar9 + 2);
    unaff_RBX = (uint64_t *)((int64_t)puVar13 + uVar16 + 4);
    in_RAX = unaff_RBP + -4;
    param_2 = puVar11;
  }
  uVar8 = 0;
  uVar15 = 0;
  if (puVar11 < unaff_R14 + -0xf) {
    do {
      uVar7 = *puVar11;
      puVar11 = (ushort *)((int64_t)puVar11 + 1);
      uVar8 = (int)uVar15 + (uint)(byte)uVar7;
      uVar15 = (uint64_t)uVar8;
      if (unaff_R14 + -0xf <= puVar11) {
        iVar14 = -2;
        break;
      }
    } while ((byte)uVar7 == 0xff);
  }
  else {
    iVar14 = -1;
  }
  uVar15 = (uint64_t)uVar8 + 0xf;
  if (((iVar14 == -1) || ((uint64_t *)(uVar15 + (int64_t)unaff_RBX) < unaff_RBX)) ||
     ((ushort *)(uVar15 + (int64_t)puVar11) < puVar11)) goto LAB_180641ffe;
LAB_180641e4a:
  puVar13 = (uint64_t *)(uVar15 + (int64_t)unaff_RBX);
  if (((uint64_t *)((int64_t)unaff_RBP + -0xc) < puVar13) ||
     (puVar1 = (ushort *)(uVar15 + (int64_t)puVar11), unaff_R14 + -8 < puVar1)) {
    if (((byte *)(uVar15 + (int64_t)puVar11) == unaff_R14) && (puVar13 <= unaff_RBP)) {
                    // WARNING: Subroutine does not return
      memmove(unaff_RBX,puVar11,uVar15);
    }
LAB_180641ffe:
    return (unaff_R15D - (int)puVar11) + -1;
  }
  lVar12 = (int64_t)puVar11 - (int64_t)unaff_RBX;
  do {
    *unaff_RBX = *(uint64_t *)((int64_t)unaff_RBX + lVar12);
    unaff_RBX = unaff_RBX + 1;
  } while (unaff_RBX < puVar13);
  uVar18 = (uint64_t)*puVar1;
  puVar11 = puVar1 + 1;
  puVar9 = (uint64_t *)((int64_t)puVar13 - uVar18);
  uVar16 = (uint64_t)(bVar2 & 0xf);
LAB_180641e92:
  if (uVar16 == 0xf) {
LAB_180641e98:
    uVar16 = 0;
    do {
      uVar7 = *puVar11;
      puVar11 = (ushort *)((int64_t)puVar11 + 1);
      uVar16 = (uint64_t)((int)uVar16 + (uint)(byte)uVar7);
      if (unaff_R14 + -4 <= puVar11) break;
    } while ((byte)uVar7 == 0xff);
    uVar16 = uVar16 + 0xf;
    if ((unaff_R14 + -4 <= puVar11) || ((uint64_t *)(uVar16 + (int64_t)puVar13) < puVar13))
    goto LAB_180641ffe;
  }
  if (puVar9 < unaff_R12) goto LAB_180641ffe;
  unaff_RBX = (uint64_t *)(uVar16 + 4 + (int64_t)puVar13);
  if (uVar18 < 8) {
    *(int32_t *)puVar13 = 0;
    *(int8_t *)puVar13 = *(int8_t *)puVar9;
    *(int8_t *)((int64_t)puVar13 + 1) = *(int8_t *)((int64_t)puVar9 + 1);
    *(int8_t *)((int64_t)puVar13 + 2) = *(int8_t *)((int64_t)puVar9 + 2);
    *(int8_t *)((int64_t)puVar13 + 3) = *(int8_t *)((int64_t)puVar9 + 3);
    uVar8 = *(uint *)(&unknown_var_6608_ptr + uVar18 * 4);
    *(int32_t *)((int64_t)puVar13 + 4) = *(int32_t *)((int64_t)puVar9 + (uint64_t)uVar8);
    puVar10 = (uint64_t *)
              ((int64_t)((int64_t)puVar9 + (uint64_t)uVar8) -
              (int64_t)*(int *)(&unknown_var_6640_ptr + uVar18 * 4));
  }
  else {
    puVar10 = puVar9 + 1;
    *puVar13 = *puVar9;
  }
  puVar9 = puVar13 + 1;
  param_2 = puVar11;
  if ((uint64_t *)((int64_t)unaff_RBP + -0xc) < unaff_RBX) {
    puVar13 = (uint64_t *)((int64_t)unaff_RBP + -7);
    if ((uint64_t *)((int64_t)unaff_RBP + -5) < unaff_RBX) goto LAB_180641ffe;
    if (puVar9 < puVar13) {
      puVar17 = puVar9;
      do {
        *puVar17 = *(uint64_t *)((int64_t)puVar17 + ((int64_t)puVar10 - (int64_t)puVar9));
        puVar17 = puVar17 + 1;
      } while (puVar17 < puVar13);
      puVar10 = (uint64_t *)((int64_t)puVar10 + ((int64_t)puVar13 - (int64_t)puVar9));
      puVar9 = puVar13;
    }
    if (puVar9 < unaff_RBX) {
      do {
        uVar3 = *(int8_t *)puVar10;
        puVar10 = (uint64_t *)((int64_t)puVar10 + 1);
        *(int8_t *)puVar9 = uVar3;
        puVar9 = (uint64_t *)((int64_t)puVar9 + 1);
      } while (puVar9 < unaff_RBX);
      in_RAX = unaff_RBP + -4;
      goto LAB_180641d60;
    }
  }
  else {
    *puVar9 = *puVar10;
    if (0x10 < uVar16 + 4) {
      puVar9 = puVar13 + 2;
      do {
        *puVar9 = *(uint64_t *)
                   ((int64_t)puVar9 + (int64_t)((int64_t)puVar10 + (8 - (int64_t)(puVar13 + 2)))
                   );
        puVar9 = puVar9 + 1;
      } while (puVar9 < unaff_RBX);
    }
  }
  in_RAX = unaff_RBP + -4;
  goto LAB_180641d60;
}





// 函数: void FUN_18064200a(void)
void FUN_18064200a(void)

{
  return;
}





// 函数: void FUN_180642030(int64_t param_1,int64_t param_2)
void FUN_180642030(int64_t param_1,int64_t param_2)

{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  
  uVar2 = *(int64_t *)(param_1 + 0x40000) - *(int64_t *)(param_1 + 0x40008);
  if (0x40000000 < uVar2) {
                    // WARNING: Subroutine does not return
    memset(param_1,0,0x20000);
  }
  lVar3 = uVar2 + 0x10000;
  *(int64_t *)(param_1 + 0x40000) = param_2;
  uVar1 = (int32_t)lVar3;
  *(int32_t *)(param_1 + 0x40020) = uVar1;
  param_2 = param_2 - lVar3;
  *(int32_t *)(param_1 + 0x40018) = uVar1;
  *(int64_t *)(param_1 + 0x40008) = param_2;
  *(int64_t *)(param_1 + 0x40010) = param_2;
  *(int32_t *)(param_1 + 0x4001c) = uVar1;
  return;
}



uint64_t
FUN_180642190(int64_t param_1,uint64_t param_2,uint64_t param_3,uint *param_4,int param_5,
             uint64_t param_6,int param_7)

{
  uint64_t uVar1;
  
  if (((param_7 != 2) || (0 < param_5)) && (*param_4 < 0x7e000001)) {
    *(int64_t *)(param_1 + 0x40000) = *(int64_t *)(param_1 + 0x40000) + (int64_t)(int)*param_4;
    uVar1 = FUN_180642650(param_1);
    if ((int)uVar1 < 1) {
      *(int8_t *)(param_1 + 0x40027) = 1;
    }
    return uVar1;
  }
  return 0;
}



uint64_t
FUN_180642230(int64_t param_1,uint64_t param_2,uint64_t param_3,uint *param_4,int param_5,
             uint64_t param_6,int param_7)

{
  uint64_t uVar1;
  int64_t lVar2;
  
  if (*(int64_t *)(param_1 + 0x40028) == 0) {
    uVar1 = FUN_180642190(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    lVar2 = *(int64_t *)(param_1 + 0x40000) - (uint64_t)*(uint *)(param_1 + 0x4001c);
    if ((uint64_t)(lVar2 - *(int64_t *)(param_1 + 0x40008)) < 0x10000) {
      if ((lVar2 == *(int64_t *)(param_1 + 0x40008)) && (0x1000 < (int)*param_4)) {
                    // WARNING: Subroutine does not return
        memcpy(param_1,*(int64_t *)(param_1 + 0x40028),0x40030);
      }
      if (((param_7 == 2) && (param_5 < 1)) || (0x7e000000 < *param_4)) {
        uVar1 = 0;
      }
      else {
        *(int64_t *)(param_1 + 0x40000) =
             (int64_t)(int)*param_4 + *(int64_t *)(param_1 + 0x40000);
        uVar1 = FUN_180642650(param_1,param_2,param_3,param_4,param_5,0x4000,0x1000,param_7,1,1,
                              *(char *)(param_1 + 0x40026) != '\0');
        if ((int)uVar1 < 1) {
          *(int8_t *)(param_1 + 0x40027) = 1;
        }
      }
    }
    else {
      *(uint64_t *)(param_1 + 0x40028) = 0;
      uVar1 = FUN_180642190(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return uVar1;
}



int32_t
FUN_1806423d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
             int32_t param_5)

{
  int32_t uVar1;
  int32_t uStack0000000000000030;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    *(uint64_t *)(param_1 + 0x40000) = 0xffffffffffffffff;
    *(uint64_t *)(param_1 + 0x40008) = 0;
    *(uint64_t *)(param_1 + 0x40028) = 0;
    *(int32_t *)(param_1 + 0x40024) = 9;
    if ((param_1 & 7) == 0) {
      *(int16_t *)(param_1 + 0x40024) = 0xc;
      uStack0000000000000030 = param_4;
      FUN_180642030();
      uVar1 = FUN_180642230(param_1,param_2,param_3,&stack0x00000030,param_5);
    }
  }
  return uVar1;
}



int32_t FUN_1806423fa(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)

{
  int32_t uVar1;
  uint64_t unaff_RBX;
  int32_t uStack0000000000000078;
  
  uVar1 = 0;
  *(uint64_t *)(param_1 + 0x40000) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x40008) = 0;
  *(uint64_t *)(param_1 + 0x40028) = 0;
  *(int32_t *)(param_1 + 0x40024) = 9;
  if ((unaff_RBX & 7) == 0) {
    *(int16_t *)(param_1 + 0x40024) = 0xc;
    uStack0000000000000078 = param_4;
    FUN_180642030();
    uVar1 = FUN_180642230();
  }
  return uVar1;
}



uint64_t FUN_18064249b(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806424c0(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4)
void FUN_1806424c0(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4)

{
  int64_t lVar1;
  
  lVar1 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x40038,3);
  FUN_1806423d0(lVar1,param_1,param_2,param_3,param_4);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(lVar1);
  }
  return;
}





// 函数: void FUN_180642540(int64_t param_1,int64_t param_2)
void FUN_180642540(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int iVar6;
  uint64_t uVar7;
  int *piVar8;
  uint64_t uVar9;
  
  uVar4 = *(uint64_t *)(param_1 + 0x40008);
  uVar2 = *(uint *)(param_1 + 0x40018);
  uVar9 = *(uint64_t *)(param_1 + 0x40000);
  uVar5 = uVar4;
  if (uVar4 + 4 + (uint64_t)uVar2 <= uVar9) {
    uVar7 = (uint64_t)*(uint *)(param_1 + 0x40020);
    uVar3 = ((int)uVar9 - (int)uVar4) - 3;
    if (*(uint *)(param_1 + 0x40020) < uVar3) {
      piVar8 = (int *)(uVar4 + uVar7);
      do {
        iVar6 = *piVar8;
        piVar8 = (int *)((int64_t)piVar8 + 1);
        lVar1 = (uint64_t)((uint)(iVar6 * -0x61c8864f) >> 0x11) * 4;
        iVar6 = (int)uVar7;
        uVar2 = iVar6 - *(int *)(lVar1 + param_1);
        if (0xffff < uVar2) {
          uVar2 = 0xffff;
        }
        *(short *)(param_1 + 0x20000 + (uVar7 & 0xffff) * 2) = (short)uVar2;
        *(int *)(lVar1 + param_1) = iVar6;
        uVar7 = (uint64_t)(iVar6 + 1U);
      } while (iVar6 + 1U < uVar3);
      uVar2 = *(uint *)(param_1 + 0x40018);
      uVar9 = (uint64_t)*(uint *)(param_1 + 0x40000);
      uVar5 = (uint64_t)*(uint *)(param_1 + 0x40008);
      uVar4 = *(uint64_t *)(param_1 + 0x40008);
    }
  }
  uVar3 = (int)uVar9 - (int)uVar5;
  *(int64_t *)(param_1 + 0x40000) = param_2;
  *(uint64_t *)(param_1 + 0x40008) = param_2 - (uint64_t)uVar3;
  *(uint *)(param_1 + 0x4001c) = uVar2;
  *(uint *)(param_1 + 0x40018) = uVar3;
  *(uint64_t *)(param_1 + 0x40010) = uVar4;
  *(uint *)(param_1 + 0x40020) = uVar3;
  *(uint64_t *)(param_1 + 0x40028) = 0;
  return;
}





// 函数: void FUN_180642578(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180642578(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  int iVar4;
  int in_R10D;
  int *piVar5;
  int32_t in_R11D;
  
  uVar3 = (in_R10D - (int)param_3) - 3;
  if ((uint)param_4 < uVar3) {
    piVar5 = (int *)(param_3 + param_4);
    do {
      iVar4 = *piVar5;
      piVar5 = (int *)((int64_t)piVar5 + 1);
      lVar1 = (uint64_t)((uint)(iVar4 * -0x61c8864f) >> 0x11) * 4;
      iVar4 = (int)param_4;
      uVar2 = iVar4 - *(int *)(lVar1 + param_1);
      if (0xffff < uVar2) {
        uVar2 = 0xffff;
      }
      *(short *)(param_1 + 0x20000 + (param_4 & 0xffff) * 2) = (short)uVar2;
      *(int *)(lVar1 + param_1) = iVar4;
      param_4 = (uint64_t)(iVar4 + 1U);
    } while (iVar4 + 1U < uVar3);
    in_R11D = *(int32_t *)(param_1 + 0x40018);
    in_R10D = *(int *)(param_1 + 0x40000);
    param_3 = (uint64_t)*(uint *)(param_1 + 0x40008);
    unaff_RDI = *(uint64_t *)(param_1 + 0x40008);
  }
  uVar3 = in_R10D - (int)param_3;
  *(int64_t *)(param_1 + 0x40000) = unaff_RSI;
  *(uint64_t *)(param_1 + 0x40008) = unaff_RSI - (uint64_t)uVar3;
  *(int32_t *)(param_1 + 0x4001c) = in_R11D;
  *(uint *)(param_1 + 0x40018) = uVar3;
  *(uint64_t *)(param_1 + 0x40010) = unaff_RDI;
  *(uint *)(param_1 + 0x40020) = uVar3;
  *(uint64_t *)(param_1 + 0x40028) = 0;
  return;
}





// 函数: void FUN_1806425fe(int64_t param_1,uint64_t param_2,int param_3)
void FUN_1806425fe(int64_t param_1,uint64_t param_2,int param_3)

{
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  int in_R10D;
  uint uVar1;
  int32_t in_R11D;
  
  uVar1 = in_R10D - param_3;
  *(int64_t *)(param_1 + 0x40000) = unaff_RSI;
  *(uint64_t *)(param_1 + 0x40008) = unaff_RSI - (uint64_t)uVar1;
  *(int32_t *)(param_1 + 0x4001c) = in_R11D;
  *(uint *)(param_1 + 0x40018) = uVar1;
  *(uint64_t *)(param_1 + 0x40010) = unaff_RDI;
  *(uint *)(param_1 + 0x40020) = uVar1;
  *(uint64_t *)(param_1 + 0x40028) = 0;
  return;
}





// 函数: void FUN_180642650(void)
void FUN_180642650(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



float * FUN_180645340(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = param_3[1];
  fVar1 = param_2[1];
  fVar8 = param_3[2];
  fVar2 = param_2[2];
  param_1[0xc] = (*param_2 + *param_3) * 0.5;
  param_1[0xd] = (fVar9 + fVar1) * 0.5;
  param_1[0xe] = (fVar8 + fVar2) * 0.5;
  param_1[0xf] = 3.4028235e+38;
  fVar9 = param_3[2];
  fVar1 = param_2[2];
  fVar8 = param_3[1];
  fVar2 = param_2[1];
  *param_1 = *param_3 - *param_2;
  param_1[1] = fVar8 - fVar2;
  param_1[2] = fVar9 - fVar1;
  param_1[3] = 3.4028235e+38;
  pfVar6 = param_1;
  func_0x00018023a1e0();
  fVar9 = param_1[1];
  fVar1 = *param_1;
  fVar8 = param_1[2];
  if (0.95 < ABS(fVar9 * param_4[1] + fVar1 * *param_4 + fVar8 * param_4[2])) {
    param_4[0] = 0.0;
    param_4[1] = 1.0;
    param_4[2] = 0.0;
    param_4[3] = 3.4028235e+38;
  }
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar7 = param_4[3];
  param_1[8] = fVar2;
  param_1[9] = fVar3;
  param_1[10] = fVar4;
  param_1[0xb] = fVar7;
  pfVar5 = param_1 + 4;
  fVar7 = fVar3 * fVar8 - fVar4 * fVar9;
  fVar8 = fVar4 * fVar1 - fVar2 * fVar8;
  fVar9 = fVar2 * fVar9 - fVar3 * fVar1;
  *pfVar5 = fVar7;
  param_1[5] = fVar8;
  param_1[6] = fVar9;
  param_1[7] = 3.4028235e+38;
  func_0x00018023a1e0(pfVar5,fVar7,fVar3 * fVar1,fVar8,fVar7,fVar9);
  fVar9 = pfVar5[1];
  fVar1 = pfVar5[2];
  fVar8 = *pfVar5;
  pfVar6[3] = 0.0;
  pfVar6[7] = 0.0;
  pfVar6[0xf] = 1.0;
  pfVar6[8] = fVar1 * pfVar6[1] - fVar9 * pfVar6[2];
  pfVar6[9] = fVar8 * pfVar6[2] - fVar1 * *pfVar6;
  pfVar6[10] = fVar9 * *pfVar6 - fVar8 * pfVar6[1];
  pfVar6[0xb] = 3.4028235e+38;
  pfVar6[0xb] = 0.0;
  return pfVar6;
}



float FUN_180645690(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = param_2[1] - param_3[1];
  fVar3 = param_2[1] - param_1[1];
  fVar5 = param_1[1] - param_3[1];
  fVar1 = *param_2 - *param_3;
  fVar6 = *param_2 - *param_1;
  fVar2 = *param_1 - *param_3;
  fVar1 = fVar4 * fVar4 + fVar1 * fVar1;
  fVar2 = fVar5 * fVar5 + fVar2 * fVar2;
  if ((((fVar6 <= -0.01) || (0.01 <= fVar6)) || (fVar3 <= -0.01)) || (0.01 <= fVar3)) {
    fVar3 = fVar3 * fVar3 + fVar6 * fVar6;
    if (fVar1 < fVar3 + fVar2) {
      fVar4 = SQRT(fVar1);
      if (fVar3 + fVar1 <= fVar2) {
        return fVar4;
      }
      fVar3 = SQRT(fVar3);
      fVar1 = SQRT(fVar2) + fVar4;
      if (fVar1 <= fVar3) {
        return 0.0;
      }
      fVar1 = (fVar3 + fVar1) * 0.5;
      fVar1 = SQRT((fVar1 - fVar4) * fVar1 * (fVar1 - SQRT(fVar2)) * (fVar1 - fVar3));
      return (fVar1 + fVar1) / fVar3;
    }
  }
  else if (fVar1 < fVar2) {
    return SQRT(fVar1);
  }
  return SQRT(fVar2);
}





// 函数: void FUN_1806457f0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
void FUN_1806457f0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6)

{
  uint64_t uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar4 = *param_1 - *param_3;
  fVar7 = param_2[1] - param_1[1];
  fVar8 = param_2[2] - param_1[2];
  fVar9 = *param_2 - *param_1;
  fVar11 = param_4[1] - param_3[1];
  fVar3 = param_1[1] - param_3[1];
  fVar5 = param_1[2] - param_3[2];
  fVar12 = param_4[2] - param_3[2];
  fVar13 = *param_4 - *param_3;
  fVar10 = fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8;
  fVar6 = fVar11 * fVar11 + fVar13 * fVar13 + fVar12 * fVar12;
  fVar2 = fVar3 * fVar11 + fVar4 * fVar13 + fVar5 * fVar12;
  if (1e-05 < fVar10) {
    fVar3 = fVar3 * fVar7 + fVar4 * fVar9 + fVar5 * fVar8;
    if (1e-05 < fVar6) {
      fVar5 = fVar11 * fVar7 + fVar13 * fVar9 + fVar12 * fVar8;
      fVar4 = fVar6 * fVar10 - fVar5 * fVar5;
      if ((fVar4 <= 0.0) || (fVar4 = (fVar5 * fVar2 - fVar3 * fVar6) / fVar4, fVar4 < 0.0)) {
        fVar4 = 0.0;
      }
      else if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
      fVar2 = fVar5 * fVar4 + fVar2;
      if (0.0 <= fVar2) {
        if (fVar2 <= fVar6) {
          fVar2 = fVar2 / fVar6;
        }
        else {
          fVar2 = 1.0;
          fVar4 = (fVar5 - fVar3) / fVar10;
          if (0.0 <= fVar4) goto LAB_180645a5b;
          fVar4 = 0.0;
        }
      }
      else {
        fVar2 = 0.0;
        fVar4 = -(fVar3 / fVar10);
        if (0.0 <= fVar4) {
LAB_180645a5b:
          if (1.0 <= fVar4) {
            fVar4 = 1.0;
          }
        }
        else {
          fVar4 = 0.0;
        }
      }
    }
    else {
      fVar2 = 0.0;
      fVar3 = -(fVar3 / fVar10);
      fVar4 = 0.0;
      if ((0.0 <= fVar3) && (fVar4 = fVar3, 1.0 <= fVar3)) {
        fVar4 = 1.0;
      }
    }
  }
  else {
    if (fVar6 <= 1e-05) {
      uVar1 = *(uint64_t *)(param_1 + 2);
      *(uint64_t *)param_5 = *(uint64_t *)param_1;
      *(uint64_t *)(param_5 + 2) = uVar1;
      fVar3 = *param_3;
      fVar4 = param_3[1];
      fVar2 = param_3[2];
      fVar5 = param_3[3];
      goto LAB_180645b0c;
    }
    fVar2 = fVar2 / fVar6;
    fVar4 = 0.0;
    if (0.0 <= fVar2) {
      if (1.0 <= fVar2) {
        fVar2 = 1.0;
      }
    }
    else {
      fVar2 = 0.0;
    }
  }
  fVar3 = param_1[1];
  fVar5 = param_1[2];
  *param_5 = fVar9 * fVar4 + *param_1;
  param_5[1] = fVar7 * fVar4 + fVar3;
  param_5[2] = fVar8 * fVar4 + fVar5;
  param_5[3] = 3.4028235e+38;
  fVar3 = fVar13 * fVar2 + *param_3;
  fVar4 = fVar11 * fVar2 + param_3[1];
  fVar2 = fVar12 * fVar2 + param_3[2];
  fVar5 = 3.4028235e+38;
LAB_180645b0c:
  *param_6 = fVar3;
  param_6[1] = fVar4;
  param_6[2] = fVar2;
  param_6[3] = fVar5;
  return;
}





// 函数: void FUN_180645988(float *param_1,uint64_t param_2,float param_3,float param_4)
void FUN_180645988(float *param_1,uint64_t param_2,float param_3,float param_4)

{
  float fVar1;
  float *in_R8;
  float fVar2;
  float unaff_XMM6_Da;
  float fVar3;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float *in_stack_000000e0;
  float *in_stack_000000e8;
  
  fVar2 = unaff_XMM13_Da * unaff_XMM9_Da + unaff_XMM15_Da * unaff_XMM11_Da +
          unaff_XMM14_Da * unaff_XMM10_Da;
  fVar3 = unaff_XMM6_Da * unaff_XMM12_Da - fVar2 * fVar2;
  if ((fVar3 <= 0.0) || (fVar3 = (fVar2 * param_3 - param_4 * unaff_XMM6_Da) / fVar3, fVar3 < 0.0))
  {
    fVar3 = 0.0;
  }
  else if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  param_3 = fVar2 * fVar3 + param_3;
  if (0.0 <= param_3) {
    if (param_3 <= unaff_XMM6_Da) {
      param_3 = param_3 / unaff_XMM6_Da;
      goto LAB_180645a66;
    }
    param_3 = 1.0;
    fVar3 = (fVar2 - param_4) / unaff_XMM12_Da;
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
      goto LAB_180645a66;
    }
  }
  else {
    param_3 = 0.0;
    fVar3 = -(param_4 / unaff_XMM12_Da);
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
      goto LAB_180645a66;
    }
  }
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
LAB_180645a66:
  fVar2 = param_1[1];
  fVar1 = param_1[2];
  *in_stack_000000e0 = unaff_XMM11_Da * fVar3 + *param_1;
  in_stack_000000e0[1] = unaff_XMM9_Da * fVar3 + fVar2;
  in_stack_000000e0[2] = unaff_XMM10_Da * fVar3 + fVar1;
  in_stack_000000e0[3] = 3.4028235e+38;
  fVar3 = in_R8[1];
  fVar2 = in_R8[2];
  *in_stack_000000e8 = unaff_XMM15_Da * param_3 + *in_R8;
  in_stack_000000e8[1] = unaff_XMM13_Da * param_3 + fVar3;
  in_stack_000000e8[2] = unaff_XMM14_Da * param_3 + fVar2;
  in_stack_000000e8[3] = 3.4028235e+38;
  return;
}





// 函数: void FUN_180645a20(float *param_1,uint64_t param_2,float *param_3,float param_4)
void FUN_180645a20(float *param_1,uint64_t param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float in_XMM4_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float *in_stack_000000e0;
  float *in_stack_000000e8;
  
  fVar3 = -(param_4 / unaff_XMM12_Da);
  if (in_XMM4_Da <= fVar3) {
    if (unaff_XMM8_Da <= fVar3) {
      fVar3 = unaff_XMM8_Da;
    }
  }
  else {
    fVar3 = 0.0;
  }
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  *in_stack_000000e0 = unaff_XMM11_Da * fVar3 + *param_1;
  in_stack_000000e0[1] = unaff_XMM9_Da * fVar3 + fVar1;
  in_stack_000000e0[2] = unaff_XMM10_Da * fVar3 + fVar2;
  in_stack_000000e0[3] = 3.4028235e+38;
  fVar3 = param_3[1];
  fVar1 = param_3[2];
  *in_stack_000000e8 = unaff_XMM15_Da * 0.0 + *param_3;
  in_stack_000000e8[1] = unaff_XMM13_Da * 0.0 + fVar3;
  in_stack_000000e8[2] = unaff_XMM14_Da * 0.0 + fVar1;
  in_stack_000000e8[3] = 3.4028235e+38;
  return;
}





