#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part137.c - 16 个函数

// 函数: void FUN_18034db80(longlong *param_1)
void FUN_18034db80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x78) {
    FUN_180207ea0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18034dbe0(longlong param_1)
void FUN_18034dbe0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    if (*(longlong *)(param_1 + 0x198 + lVar2 * 8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)(param_1 + 0x198 + lVar2 * 8) = 0;
    lVar2 = lVar2 + 1;
  } while (lVar2 < 2);
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ(param_1 + 0xe8);
  plVar1 = *(longlong **)(param_1 + 0xd0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x98));
    *(uint64_t *)(param_1 + 0xd0) = 0;
  }
  *(void **)(param_1 + 0x10) = &unknown_var_720_ptr;
  return;
}





// 函数: void FUN_18034dce0(longlong param_1)
void FUN_18034dce0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)(param_1 + lVar1 * 8) = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 < 2);
  return;
}





// 函数: void FUN_18034dd30(longlong param_1)
void FUN_18034dd30(longlong param_1)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1 + 0x48);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  *(int8_t *)(param_1 + 0x98) = 0;
  iVar1 = _Mtx_unlock(param_1 + 0x48);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}



uint64_t *
FUN_18034dd90(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  param_1[2] = &unknown_var_720_ptr;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[2] = &unknown_var_3480_ptr;
  param_1[3] = param_1 + 5;
  *(int32_t *)(param_1 + 4) = 0;
  *(int8_t *)(param_1 + 5) = 0;
  param_1[0x1a] = 0;
  _Cnd_init_in_situ(param_1 + 0x1d);
  _Mtx_init_in_situ(param_1 + 0x26,2,param_3,param_4,uVar1);
  *(int8_t *)(param_1 + 0x30) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(int32_t *)(param_1 + 0xd) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(int32_t *)((longlong)param_1 + 0x6c) = 0xbf800000;
  *(int32_t *)(param_1 + 0xe) = 0xbf800000;
  *(int32_t *)((longlong)param_1 + 0x74) = 0xbf800000;
  param_1[0xf] = 0xffffffffbf800000;
  param_1[0x31] = 0;
  *(int32_t *)(param_1 + 0x32) = 0;
  *(int8_t *)(param_1 + 0x35) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  LOCK();
  *(int32_t *)((longlong)param_1 + 0x84) = 0;
  UNLOCK();
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  LOCK();
  *(int32_t *)(param_1 + 0x1b) = 0;
  UNLOCK();
  LOCK();
  *(int8_t *)((longlong)param_1 + 0xdc) = 0;
  UNLOCK();
  FUN_18034dd30(param_1 + 0x1d);
  LOCK();
  *(int32_t *)(param_1 + 0x1c) = 0;
  UNLOCK();
  *(int8_t *)((longlong)param_1 + 0x194) = 0;
  return param_1;
}



uint64_t *
FUN_18034dec0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_8888_ptr;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x88,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034df10(longlong param_1)
void FUN_18034df10(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint *puVar20;
  int iVar21;
  longlong lVar22;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int8_t auStack_128 [32];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  ulonglong uStack_58;
  uint64_t uStack_30;
  
  if ((*(uint *)(*(longlong *)(param_1 + 0x18) + 0x2ac) & 0x8000) == 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x260);
    if (lVar3 != 0) {
      if (*(char *)(param_1 + 0x84) != '\0') {
        if ((*(byte *)(lVar3 + 0xa8) & 1) == 0) {
          uStack_30 = 0x18034df5c;
          FUN_1802fcbe0(lVar3,*(longlong *)(param_1 + 0x70) + 0x70);
          *(int32_t *)(lVar3 + 0x50) = *(int32_t *)(_DAT_180c86870 + 0x224);
          *(ushort *)(lVar3 + 0xa8) = *(ushort *)(lVar3 + 0xa8) | 1;
        }
        uStack_58 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_128;
        lVar3 = *(longlong *)(param_1 + 0x18);
        iVar21 = 0;
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x260);
        cVar2 = *(char *)(lVar4 + 0x20);
        if ('\0' < cVar2) {
          lVar22 = 0;
          uStack_30 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
          do {
            puVar20 = (uint *)((longlong)(char)iVar21 * 0x100 + *(longlong *)(lVar4 + 0x18));
            do {
              LOCK();
              uVar1 = *puVar20;
              *puVar20 = *puVar20 | 1;
              UNLOCK();
            } while ((uVar1 & 1) != 0);
            uStack_d8 = puVar20[1];
            uStack_d4 = puVar20[2];
            uStack_d0 = puVar20[3];
            uStack_cc = puVar20[4];
            fVar5 = (float)puVar20[5];
            fVar6 = (float)puVar20[6];
            fVar7 = (float)puVar20[7];
            uStack_bc = puVar20[8];
            *puVar20 = 0;
            fStack_c8 = fVar5;
            fStack_c4 = fVar6;
            fStack_c0 = fVar7;
            uStack_78 = uStack_d8;
            uStack_74 = uStack_d4;
            uStack_70 = uStack_d0;
            uStack_6c = uStack_cc;
            fStack_68 = fVar5;
            fStack_64 = fVar6;
            fStack_60 = fVar7;
            uStack_5c = uStack_bc;
            FUN_18063b5f0(&fStack_108,&uStack_d8);
            fVar8 = *(float *)(lVar3 + 0x70);
            fVar9 = *(float *)(lVar3 + 0x74);
            fVar10 = *(float *)(lVar3 + 0x78);
            fVar11 = *(float *)(lVar3 + 0x7c);
            fVar12 = *(float *)(lVar3 + 0x80);
            fVar13 = *(float *)(lVar3 + 0x84);
            fVar14 = *(float *)(lVar3 + 0x88);
            fVar15 = *(float *)(lVar3 + 0x8c);
            fVar16 = *(float *)(lVar3 + 0x90);
            fVar17 = *(float *)(lVar3 + 0x94);
            fVar18 = *(float *)(lVar3 + 0x98);
            fVar19 = *(float *)(lVar3 + 0x9c);
            fStack_b8 = fStack_104 * fVar12 + fStack_108 * fVar8 + fStack_100 * fVar16;
            fStack_b4 = fStack_104 * fVar13 + fStack_108 * fVar9 + fStack_100 * fVar17;
            fStack_b0 = fStack_104 * fVar14 + fStack_108 * fVar10 + fStack_100 * fVar18;
            fStack_ac = fStack_104 * fVar15 + fStack_108 * fVar11 + fStack_100 * fVar19;
            fStack_a8 = fStack_f4 * fVar12 + fStack_f8 * fVar8 + fStack_f0 * fVar16;
            fStack_a4 = fStack_f4 * fVar13 + fStack_f8 * fVar9 + fStack_f0 * fVar17;
            fStack_a0 = fStack_f4 * fVar14 + fStack_f8 * fVar10 + fStack_f0 * fVar18;
            fStack_9c = fStack_f4 * fVar15 + fStack_f8 * fVar11 + fStack_f0 * fVar19;
            fStack_98 = fStack_e4 * fVar12 + fStack_e8 * fVar8 + fStack_e0 * fVar16;
            fStack_94 = fStack_e4 * fVar13 + fStack_e8 * fVar9 + fStack_e0 * fVar17;
            fStack_90 = fStack_e4 * fVar14 + fStack_e8 * fVar10 + fStack_e0 * fVar18;
            fStack_8c = fStack_e4 * fVar15 + fStack_e8 * fVar11 + fStack_e0 * fVar19;
            fStack_88 = fVar6 * fVar12 + fVar5 * fVar8 + fVar7 * fVar16 + *(float *)(lVar3 + 0xa0);
            fStack_84 = fVar6 * fVar13 + fVar5 * fVar9 + fVar7 * fVar17 + *(float *)(lVar3 + 0xa4);
            fStack_80 = fVar6 * fVar14 + fVar5 * fVar10 + fVar7 * fVar18 + *(float *)(lVar3 + 0xa8);
            fStack_7c = fVar6 * fVar15 + fVar5 * fVar11 + fVar7 * fVar19 + *(float *)(lVar3 + 0xac);
            FUN_1802ea790(*(uint64_t *)(lVar22 + *(longlong *)(param_1 + 0x78)),&fStack_b8);
            iVar21 = iVar21 + 1;
            lVar22 = lVar22 + 8;
          } while (iVar21 < cVar2);
        }
                    // WARNING: Subroutine does not return
        FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_128);
      }
      uStack_30 = 0x18034df95;
      FUN_18034ebc0();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034df2d(longlong param_1,longlong param_2)
void FUN_18034df2d(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint *puVar20;
  int iVar21;
  longlong unaff_RBX;
  longlong lVar22;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int8_t auStack_100 [32];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  uint uStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_34;
  ulonglong uStack_30;
  uint64_t uStack_8;
  
  lVar3 = *(longlong *)(param_2 + 0x260);
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 0x84) != '\0') {
      if ((*(byte *)(lVar3 + 0xa8) & 1) == 0) {
        uStack_8 = 0x18034df5c;
        FUN_1802fcbe0(lVar3,param_2 + 0x70);
        *(int32_t *)(lVar3 + 0x50) = *(int32_t *)(_DAT_180c86870 + 0x224);
        *(ushort *)(lVar3 + 0xa8) = *(ushort *)(lVar3 + 0xa8) | 1;
      }
      uStack_30 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_100;
      lVar3 = *(longlong *)(unaff_RBX + 0x18);
      iVar21 = 0;
      lVar4 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x260);
      cVar2 = *(char *)(lVar4 + 0x20);
      if ('\0' < cVar2) {
        lVar22 = 0;
        uStack_8 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
        do {
          puVar20 = (uint *)((longlong)(char)iVar21 * 0x100 + *(longlong *)(lVar4 + 0x18));
          do {
            LOCK();
            uVar1 = *puVar20;
            *puVar20 = *puVar20 | 1;
            UNLOCK();
          } while ((uVar1 & 1) != 0);
          uStack_b0 = puVar20[1];
          uStack_ac = puVar20[2];
          uStack_a8 = puVar20[3];
          uStack_a4 = puVar20[4];
          fVar5 = (float)puVar20[5];
          fVar6 = (float)puVar20[6];
          fVar7 = (float)puVar20[7];
          uStack_94 = puVar20[8];
          *puVar20 = 0;
          fStack_a0 = fVar5;
          fStack_9c = fVar6;
          fStack_98 = fVar7;
          uStack_50 = uStack_b0;
          uStack_4c = uStack_ac;
          uStack_48 = uStack_a8;
          uStack_44 = uStack_a4;
          fStack_40 = fVar5;
          fStack_3c = fVar6;
          fStack_38 = fVar7;
          uStack_34 = uStack_94;
          FUN_18063b5f0(&fStack_e0,&uStack_b0);
          fVar8 = *(float *)(lVar3 + 0x70);
          fVar9 = *(float *)(lVar3 + 0x74);
          fVar10 = *(float *)(lVar3 + 0x78);
          fVar11 = *(float *)(lVar3 + 0x7c);
          fVar12 = *(float *)(lVar3 + 0x80);
          fVar13 = *(float *)(lVar3 + 0x84);
          fVar14 = *(float *)(lVar3 + 0x88);
          fVar15 = *(float *)(lVar3 + 0x8c);
          fVar16 = *(float *)(lVar3 + 0x90);
          fVar17 = *(float *)(lVar3 + 0x94);
          fVar18 = *(float *)(lVar3 + 0x98);
          fVar19 = *(float *)(lVar3 + 0x9c);
          fStack_90 = fStack_dc * fVar12 + fStack_e0 * fVar8 + fStack_d8 * fVar16;
          fStack_8c = fStack_dc * fVar13 + fStack_e0 * fVar9 + fStack_d8 * fVar17;
          fStack_88 = fStack_dc * fVar14 + fStack_e0 * fVar10 + fStack_d8 * fVar18;
          fStack_84 = fStack_dc * fVar15 + fStack_e0 * fVar11 + fStack_d8 * fVar19;
          fStack_80 = fStack_cc * fVar12 + fStack_d0 * fVar8 + fStack_c8 * fVar16;
          fStack_7c = fStack_cc * fVar13 + fStack_d0 * fVar9 + fStack_c8 * fVar17;
          fStack_78 = fStack_cc * fVar14 + fStack_d0 * fVar10 + fStack_c8 * fVar18;
          fStack_74 = fStack_cc * fVar15 + fStack_d0 * fVar11 + fStack_c8 * fVar19;
          fStack_70 = fStack_bc * fVar12 + fStack_c0 * fVar8 + fStack_b8 * fVar16;
          fStack_6c = fStack_bc * fVar13 + fStack_c0 * fVar9 + fStack_b8 * fVar17;
          fStack_68 = fStack_bc * fVar14 + fStack_c0 * fVar10 + fStack_b8 * fVar18;
          fStack_64 = fStack_bc * fVar15 + fStack_c0 * fVar11 + fStack_b8 * fVar19;
          fStack_60 = fVar6 * fVar12 + fVar5 * fVar8 + fVar7 * fVar16 + *(float *)(lVar3 + 0xa0);
          fStack_5c = fVar6 * fVar13 + fVar5 * fVar9 + fVar7 * fVar17 + *(float *)(lVar3 + 0xa4);
          fStack_58 = fVar6 * fVar14 + fVar5 * fVar10 + fVar7 * fVar18 + *(float *)(lVar3 + 0xa8);
          fStack_54 = fVar6 * fVar15 + fVar5 * fVar11 + fVar7 * fVar19 + *(float *)(lVar3 + 0xac);
          FUN_1802ea790(*(uint64_t *)(lVar22 + *(longlong *)(unaff_RBX + 0x78)),&fStack_90);
          iVar21 = iVar21 + 1;
          lVar22 = lVar22 + 8;
        } while (iVar21 < cVar2);
      }
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_100);
    }
    uStack_8 = 0x18034df95;
    FUN_18034ebc0();
  }
  return;
}





// 函数: void FUN_18034df90(void)
void FUN_18034df90(void)

{
  FUN_18034ebc0();
  return;
}





// 函数: void FUN_18034df9a(void)
void FUN_18034df9a(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034dfa0(longlong param_1)
void FUN_18034dfa0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  uint uVar6;
  ulonglong *puVar8;
  ulonglong uVar9;
  int8_t auStack_1a8 [64];
  char cStack_168;
  int32_t uStack_164;
  uint64_t uStack_e0;
  ulonglong uStack_58;
  ulonglong *puVar7;
  
  uStack_e0 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1a8;
  puVar5 = (ulonglong *)0x0;
  uStack_164 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x260);
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (lVar2 == 0) {
    if (lVar1 != 0) {
      cStack_168 = *(char *)(lVar1 + 0x20);
      uVar9 = (ulonglong)cStack_168;
      if (cStack_168 != '\0') {
        puVar3 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,uVar9 * 8 + 0x10,3);
        *puVar3 = uVar9 << 0x20 | 8;
        puVar7 = puVar5;
        puVar8 = puVar3 + 2;
        do {
          *puVar8 = 0;
          uVar6 = (int)puVar7 + 1;
          puVar7 = (ulonglong *)(ulonglong)uVar6;
          puVar8 = puVar8 + 1;
          puVar5 = puVar3 + 2;
        } while ((ulonglong)(longlong)(int)uVar6 < uVar9);
      }
      *(ulonglong **)(param_1 + 0x78) = puVar5;
                    // WARNING: Subroutine does not return
      memset(puVar5,0,uVar9 * 8);
    }
  }
  else if (lVar1 == 0) {
    uVar9 = *(ulonglong *)(lVar2 + -0x10);
    uVar4 = uVar9 >> 0x20;
    if ((int)(uVar9 >> 0x20) != 0) {
      do {
        if (*(longlong **)((longlong)puVar5 + lVar2) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)puVar5 + lVar2) + 0x38))();
        }
        puVar5 = (ulonglong *)(ulonglong)(uint)((int)puVar5 + (int)uVar9);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar2 + -0x10);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_1a8);
}





// 函数: void FUN_18034e490(longlong param_1)
void FUN_18034e490(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar2 + 0x2ac);
  *(uint *)(lVar2 + 0x2ac) = uVar1 | 0x40000;
  FUN_1802ee810(lVar2,uVar1);
  FUN_1802ee990(lVar2,uVar1);
  if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) != 0) {
    FUN_18034dfa0(param_1,0);
    FUN_18034ebc0(param_1);
  }
  return;
}





// 函数: void FUN_18034e500(longlong param_1,longlong param_2)
void FUN_18034e500(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  
  if (((*(int *)(param_2 + 0x10) == 0xf) &&
      (iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_dd30), iVar2 == 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x260), lVar1 != 0)) {
    if (*(char *)(param_1 + 0x84) == '\0') {
      if (*(short *)(lVar1 + 0x40) == 3) {
        if (*(float *)(lVar1 + 0x3c) < 0.0) {
          fVar3 = 0.1;
        }
        else {
          fVar3 = *(float *)(lVar1 + 0x3c) + 1.1920929e-07;
        }
        *(float *)(lVar1 + 0x34) = fVar3;
        *(int16_t *)(lVar1 + 0x40) = 4;
        if ((*(longlong *)(lVar1 + 0x130) != 0) || (*(longlong *)(lVar1 + 0x138) != 0)) {
          (**(code **)(lVar1 + 0x138))(*(longlong *)(lVar1 + 0x130),lVar1);
        }
      }
    }
    else if (*(short *)(lVar1 + 0x40) == 0) {
      *(int32_t *)(lVar1 + 0x1e8) = 0;
      *(int32_t *)(lVar1 + 0x1ec) = 0;
      *(int32_t *)(lVar1 + 0x1f0) = 0;
      *(int32_t *)(lVar1 + 500) = 0;
      FUN_1802fedf0(lVar1,&system_data_02f0,&system_data_02f0);
    }
    *(ushort *)(lVar1 + 0xa8) = *(ushort *)(lVar1 + 0xa8) & 0xfff7;
  }
  return;
}





// 函数: void FUN_18034e532(void)
void FUN_18034e532(void)

{
  longlong lVar1;
  longlong in_RAX;
  longlong unaff_RDI;
  float fVar2;
  
  lVar1 = *(longlong *)(in_RAX + 0x260);
  if (lVar1 != 0) {
    if (*(char *)(unaff_RDI + 0x84) == '\0') {
      if (*(short *)(lVar1 + 0x40) == 3) {
        if (*(float *)(lVar1 + 0x3c) < 0.0) {
          fVar2 = 0.1;
        }
        else {
          fVar2 = *(float *)(lVar1 + 0x3c) + 1.1920929e-07;
        }
        *(float *)(lVar1 + 0x34) = fVar2;
        *(int16_t *)(lVar1 + 0x40) = 4;
        if ((*(longlong *)(lVar1 + 0x130) != 0) || (*(longlong *)(lVar1 + 0x138) != 0)) {
          (**(code **)(lVar1 + 0x138))(*(longlong *)(lVar1 + 0x130),lVar1);
        }
      }
    }
    else if (*(short *)(lVar1 + 0x40) == 0) {
      *(int32_t *)(lVar1 + 0x1e8) = 0;
      *(int32_t *)(lVar1 + 0x1ec) = 0;
      *(int32_t *)(lVar1 + 0x1f0) = 0;
      *(int32_t *)(lVar1 + 500) = 0;
      FUN_1802fedf0(lVar1,&system_data_02f0,&system_data_02f0);
    }
    *(ushort *)(lVar1 + 0xa8) = *(ushort *)(lVar1 + 0xa8) & 0xfff7;
  }
  return;
}





// 函数: void FUN_18034e5e1(void)
void FUN_18034e5e1(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034e5f0(uint64_t param_1)
void FUN_18034e5f0(uint64_t param_1)

{
  int8_t auStack_118 [32];
  int32_t uStack_f8;
  uint64_t uStack_f0;
  void **appuStack_e8 [2];
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [72];
  void *apuStack_78 [11];
  int32_t uStack_20;
  ulonglong uStack_18;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_118;
  uStack_f8 = 0;
  puStack_d8 = &unknown_var_3480_ptr;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 0xf;
  strcpy_s(auStack_c0,0x40,&system_data_dd30);
  FUN_1800b8300(apuStack_78,&puStack_d8);
  uStack_20 = 3;
  uStack_f8 = 1;
  FUN_180180730(param_1,appuStack_e8,apuStack_78);
  uStack_f8 = 0;
  appuStack_e8[0] = apuStack_78;
  apuStack_78[0] = &unknown_var_720_ptr;
  puStack_d8 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_118);
}





// 函数: void FUN_18034e700(longlong param_1)
void FUN_18034e700(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar2 + 0x2ac);
  *(uint *)(lVar2 + 0x2ac) = uVar1 | 0x40000;
  FUN_1802ee810(lVar2,uVar1);
  FUN_1802ee990(lVar2,uVar1);
  if ((*(uint *)(*(longlong *)(param_1 + 0x18) + 0x2ac) & 0x8000) == 0) {
    FUN_18034dfa0(param_1,1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034e770(longlong param_1)
void FUN_18034e770(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint *puVar20;
  int iVar21;
  longlong lVar22;
  int8_t auStack_128 [32];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  ulonglong uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_128;
  lVar3 = *(longlong *)(param_1 + 0x18);
  iVar21 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x260);
  cVar2 = *(char *)(lVar4 + 0x20);
  if ('\0' < cVar2) {
    lVar22 = 0;
    do {
      puVar20 = (uint *)((longlong)(char)iVar21 * 0x100 + *(longlong *)(lVar4 + 0x18));
      do {
        LOCK();
        uVar1 = *puVar20;
        *puVar20 = *puVar20 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      uStack_d8 = puVar20[1];
      uStack_d4 = puVar20[2];
      uStack_d0 = puVar20[3];
      uStack_cc = puVar20[4];
      fVar5 = (float)puVar20[5];
      fVar6 = (float)puVar20[6];
      fVar7 = (float)puVar20[7];
      uStack_bc = puVar20[8];
      *puVar20 = 0;
      fStack_c8 = fVar5;
      fStack_c4 = fVar6;
      fStack_c0 = fVar7;
      uStack_78 = uStack_d8;
      uStack_74 = uStack_d4;
      uStack_70 = uStack_d0;
      uStack_6c = uStack_cc;
      fStack_68 = fVar5;
      fStack_64 = fVar6;
      fStack_60 = fVar7;
      uStack_5c = uStack_bc;
      FUN_18063b5f0(&fStack_108,&uStack_d8);
      fVar8 = *(float *)(lVar3 + 0x70);
      fVar9 = *(float *)(lVar3 + 0x74);
      fVar10 = *(float *)(lVar3 + 0x78);
      fVar11 = *(float *)(lVar3 + 0x7c);
      fVar12 = *(float *)(lVar3 + 0x80);
      fVar13 = *(float *)(lVar3 + 0x84);
      fVar14 = *(float *)(lVar3 + 0x88);
      fVar15 = *(float *)(lVar3 + 0x8c);
      fVar16 = *(float *)(lVar3 + 0x90);
      fVar17 = *(float *)(lVar3 + 0x94);
      fVar18 = *(float *)(lVar3 + 0x98);
      fVar19 = *(float *)(lVar3 + 0x9c);
      fStack_b8 = fStack_104 * fVar12 + fStack_108 * fVar8 + fStack_100 * fVar16;
      fStack_b4 = fStack_104 * fVar13 + fStack_108 * fVar9 + fStack_100 * fVar17;
      fStack_b0 = fStack_104 * fVar14 + fStack_108 * fVar10 + fStack_100 * fVar18;
      fStack_ac = fStack_104 * fVar15 + fStack_108 * fVar11 + fStack_100 * fVar19;
      fStack_a8 = fStack_f4 * fVar12 + fStack_f8 * fVar8 + fStack_f0 * fVar16;
      fStack_a4 = fStack_f4 * fVar13 + fStack_f8 * fVar9 + fStack_f0 * fVar17;
      fStack_a0 = fStack_f4 * fVar14 + fStack_f8 * fVar10 + fStack_f0 * fVar18;
      fStack_9c = fStack_f4 * fVar15 + fStack_f8 * fVar11 + fStack_f0 * fVar19;
      fStack_98 = fStack_e4 * fVar12 + fStack_e8 * fVar8 + fStack_e0 * fVar16;
      fStack_94 = fStack_e4 * fVar13 + fStack_e8 * fVar9 + fStack_e0 * fVar17;
      fStack_90 = fStack_e4 * fVar14 + fStack_e8 * fVar10 + fStack_e0 * fVar18;
      fStack_8c = fStack_e4 * fVar15 + fStack_e8 * fVar11 + fStack_e0 * fVar19;
      fStack_88 = fVar6 * fVar12 + fVar5 * fVar8 + fVar7 * fVar16 + *(float *)(lVar3 + 0xa0);
      fStack_84 = fVar6 * fVar13 + fVar5 * fVar9 + fVar7 * fVar17 + *(float *)(lVar3 + 0xa4);
      fStack_80 = fVar6 * fVar14 + fVar5 * fVar10 + fVar7 * fVar18 + *(float *)(lVar3 + 0xa8);
      fStack_7c = fVar6 * fVar15 + fVar5 * fVar11 + fVar7 * fVar19 + *(float *)(lVar3 + 0xac);
      FUN_1802ea790(*(uint64_t *)(lVar22 + *(longlong *)(param_1 + 0x78)),&fStack_b8);
      iVar21 = iVar21 + 1;
      lVar22 = lVar22 + 8;
    } while (iVar21 < cVar2);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_128);
}





