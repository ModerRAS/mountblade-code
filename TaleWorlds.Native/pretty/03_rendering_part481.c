#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part481.c - 10 个函数

// 函数: void FUN_180525fa0(longlong param_1)
void FUN_180525fa0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint64_t uStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  int16_t uStack_48;
  int8_t uStack_46;
  int32_t uStack_44;
  int8_t uStack_40;
  uint64_t uStack_38;
  longlong lStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  uint64_t uStack_10;
  
  if (*(char *)(param_1 + 0x985) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x986) == '\0') {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
               0x48) < render_system_config_ui) && (FUN_1808fcb90(&system_ptr_9f00), render_system_config_ui == -1)) {
    _Mtx_init_in_situ(0x180d49f10,0x102);
    FUN_1808fc820(FUN_180943040);
    FUN_1808fcb30(&system_ptr_9f00);
  }
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z();
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff;
  uStack_46 = 0;
  uStack_44 = 0xffffffff;
  uStack_40 = 1;
  uStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 3;
  uStack_10 = 0;
  uStack_48 = 1;
  lVar1 = *(longlong *)(param_1 + 0x6d8);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x8be) == '\0')) goto LAB_180526122;
  iVar2 = FUN_1802e7bc0(*(uint64_t *)(lVar1 + 0x8a8),&uStack_58);
  if (iVar2 != 0) goto LAB_180526122;
  iVar2 = *(int *)(param_1 + 0x560);
  if (((iVar2 < 0) && (iVar2 = *(int *)(param_1 + 0x564), iVar2 < 0)) ||
     (lVar1 = *(longlong *)((longlong)iVar2 * 0xa60 + 0x3778 + *(longlong *)(param_1 + 0x8d8)),
     lVar1 == 0)) {
LAB_180526103:
    *(int8_t *)(param_1 + 0x985) = 1;
  }
  else {
    iVar2 = FUN_1802e7bc0(*(uint64_t *)(lVar1 + 0x8a8),&uStack_58);
    if (iVar2 == 0) goto LAB_180526103;
  }
  if (*(char *)(param_1 + 0x985) != '\0') {
    FUN_180544640(*(uint64_t *)(param_1 + 0x6d8),1);
  }
LAB_180526122:
  if (lStack_30 == 0) {
    iVar2 = _Mtx_unlock(0x180d49f10);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805261b0(longlong param_1,float param_2)
void FUN_1805261b0(longlong param_1,float param_2)

{
  float fVar1;
  longlong *plVar2;
  ushort *puVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  byte bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  int32_t uStack_20;
  
  if ((*(longlong *)(param_1 + 0x590) != 0) && (*(int *)(param_1 + 0x568) == 1)) {
    iVar9 = 0;
    if ((*(uint *)(param_1 + 0x56c) & 0x80018) != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1f0) + 0x590);
      uVar7 = *(uint *)(*(longlong *)(param_1 + 0x1f0) + 0x56c) >> 0xe & 1;
      if (((int)plVar2[(ulonglong)uVar7 * 9 + 0x48a] != -1) &&
         (*(int *)((longlong)(int)plVar2[(ulonglong)uVar7 * 9 + 0x48a] * 0x68 + 0x58 +
                  render_system_ui) == 0x14)) {
        fVar11 = (float)(**(code **)(*plVar2 + 0x80))(plVar2,uVar7);
        fVar1 = *(float *)(param_1 + 0x1f8);
        if (fVar11 < fVar1) {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1f0) + 0x590);
          fVar11 = render_system_ui * param_2 + fVar11;
          if (fVar1 <= fVar11) {
            fVar11 = fVar1;
          }
          (**(code **)(*plVar2 + 0x88))(plVar2,uVar7,fVar11);
        }
      }
      uStack_20 = *(int32_t *)(param_1 + 0x18c);
      uStack_48 = *(uint64_t *)(param_1 + 0x164);
      uStack_40 = *(uint64_t *)(param_1 + 0x16c);
      uStack_38 = *(uint64_t *)(param_1 + 0x174);
      uStack_30 = *(uint64_t *)(param_1 + 0x17c);
      if (param_2 < *(float *)(param_1 + 0x1e8)) {
        uStack_28 = *(uint64_t *)(param_1 + 0x184);
        FUN_1805b2f90((uint64_t *)(param_1 + 0x138),param_2,&uStack_48);
        uStack_28 = *(uint64_t *)(param_1 + 0x1dc);
        uStack_38 = *(uint64_t *)(param_1 + 0x1cc);
        uStack_30 = *(uint64_t *)(param_1 + 0x1d4);
        uStack_20 = *(int32_t *)(param_1 + 0x1e4);
        uStack_48 = *(uint64_t *)(param_1 + 0x1bc);
        uStack_40 = *(uint64_t *)(param_1 + 0x1c4);
        FUN_1805b2f90(param_1 + 400,param_2,&uStack_48,*(int32_t *)(param_1 + 0x1e8));
        *(float *)(param_1 + 0x1e8) = *(float *)(param_1 + 0x1e8) - param_2;
      }
      else {
        *(uint64_t *)(param_1 + 0x138) = uStack_48;
        *(uint64_t *)(param_1 + 0x140) = uStack_40;
        *(int32_t *)(param_1 + 0x1e8) = 0;
        *(uint64_t *)(param_1 + 0x148) = uStack_38;
        *(uint64_t *)(param_1 + 0x150) = uStack_30;
        *(uint64_t *)(param_1 + 0x158) = *(uint64_t *)(param_1 + 0x184);
        *(int32_t *)(param_1 + 0x160) = uStack_20;
        *(uint64_t *)(param_1 + 400) = *(uint64_t *)(param_1 + 0x1bc);
        *(uint64_t *)(param_1 + 0x198) = *(uint64_t *)(param_1 + 0x1c4);
        *(uint64_t *)(param_1 + 0x1a0) = *(uint64_t *)(param_1 + 0x1cc);
        *(uint64_t *)(param_1 + 0x1a8) = *(uint64_t *)(param_1 + 0x1d4);
        *(uint64_t *)(param_1 + 0x1b0) = *(uint64_t *)(param_1 + 0x1dc);
        *(int32_t *)(param_1 + 0x1b8) = *(int32_t *)(param_1 + 0x1e4);
      }
    }
    if ((*(byte *)(param_1 + 0x56c) & 0x40) != 0) {
      puVar3 = *(ushort **)(param_1 + 0x730);
      bVar10 = (byte)puVar3[0x40];
      if (bVar10 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x20);
        fVar11 = *(float *)(lVar4 + 0x1c0) - *(float *)(lVar4 + 0x1b0);
        fVar15 = *(float *)(lVar4 + 0x1c4) - *(float *)(lVar4 + 0x1b4);
        fVar1 = *(float *)(lVar4 + 0x1d0);
        puVar8 = puVar3;
        do {
          if (*(int *)((ulonglong)*puVar8 * 0xa60 + 0x3608 + *(longlong *)(param_1 + 0x8d8)) == 1) {
            lVar4 = *(longlong *)
                     ((ulonglong)*puVar8 * 0xa60 + 0x30c0 + *(longlong *)(param_1 + 0x8d8));
            lVar5 = *(longlong *)(param_1 + 0x20);
            fVar16 = *(float *)(lVar4 + 0x1c4) - *(float *)(lVar4 + 0x1b4);
            fVar12 = *(float *)(lVar4 + 0x1c0) - *(float *)(lVar4 + 0x1b0);
            fVar17 = *(float *)(lVar4 + 0xc) - *(float *)(lVar5 + 0xc);
            fVar13 = *(float *)(lVar4 + 0x14) - *(float *)(lVar5 + 0x14);
            fVar14 = *(float *)(lVar4 + 0x10) - *(float *)(lVar5 + 0x10);
            fVar12 = SQRT(fVar12 * fVar12 + fVar16 * fVar16) +
                     *(float *)(lVar4 + 0x1d0) + *(float *)(lVar4 + 0x1d0) +
                     SQRT(fVar11 * fVar11 + fVar15 * fVar15) + fVar1 + fVar1;
            bVar6 = fVar12 * fVar12 < fVar17 * fVar17 + fVar14 * fVar14 + fVar13 * fVar13;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            iVar9 = iVar9 + -1;
            *puVar8 = puVar3[(ulonglong)bVar10 - 1];
            *(char *)(puVar3 + 0x40) = (char)puVar3[0x40] + -1;
            bVar10 = (byte)puVar3[0x40];
            puVar8 = puVar8 + -1;
          }
          iVar9 = iVar9 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar9 < (int)(uint)bVar10);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805261dd(longlong param_1)
void FUN_1805261dd(longlong param_1)

{
  float fVar1;
  uint64_t uVar2;
  int32_t uVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort *puVar6;
  longlong lVar7;
  bool bVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint uVar12;
  longlong in_RAX;
  ushort *puVar13;
  longlong unaff_RBX;
  uint64_t unaff_RSI;
  int iVar14;
  uint64_t unaff_RDI;
  byte bVar15;
  uint64_t unaff_R14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float unaff_XMM6_Da;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RDI;
  iVar14 = 0;
  if ((*(uint *)(param_1 + 0x56c) & 0x80018) != 0) {
    *(uint64_t *)(in_RAX + 8) = unaff_RSI;
    lVar4 = *(longlong *)(param_1 + 0x1f0);
    *(uint64_t *)(in_RAX + 0x18) = unaff_R14;
    plVar5 = *(longlong **)(lVar4 + 0x590);
    uVar12 = *(uint *)(lVar4 + 0x56c) >> 0xe & 1;
    if (((int)plVar5[(ulonglong)uVar12 * 9 + 0x48a] != -1) &&
       (*(int *)((longlong)(int)plVar5[(ulonglong)uVar12 * 9 + 0x48a] * 0x68 + 0x58 + render_system_ui
                ) == 0x14)) {
      fVar16 = (float)(**(code **)(*plVar5 + 0x80))(plVar5,uVar12);
      fVar1 = *(float *)(param_1 + 0x1f8);
      if (fVar16 < fVar1) {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x1f0) + 0x590);
        fVar16 = render_system_ui * unaff_XMM6_Da + fVar16;
        if (fVar1 <= fVar16) {
          fVar16 = fVar1;
        }
        (**(code **)(*plVar5 + 0x88))(plVar5,uVar12,fVar16);
      }
    }
    uVar3 = *(int32_t *)(unaff_RBX + 0x18c);
    uVar2 = *(uint64_t *)(unaff_RBX + 0x16c);
    uVar9 = *(uint64_t *)(unaff_RBX + 0x174);
    uVar10 = *(uint64_t *)(unaff_RBX + 0x17c);
    if (unaff_XMM6_Da < *(float *)(param_1 + 0x1e8)) {
      FUN_1805b2f90((uint64_t *)(param_1 + 0x138));
      FUN_1805b2f90(unaff_RBX + 400);
      *(float *)(param_1 + 0x1e8) = *(float *)(param_1 + 0x1e8) - unaff_XMM6_Da;
    }
    else {
      *(uint64_t *)(param_1 + 0x138) = *(uint64_t *)(unaff_RBX + 0x164);
      *(uint64_t *)(param_1 + 0x140) = uVar2;
      *(int32_t *)(param_1 + 0x1e8) = 0;
      uVar2 = *(uint64_t *)(unaff_RBX + 0x184);
      *(uint64_t *)(param_1 + 0x148) = uVar9;
      *(uint64_t *)(param_1 + 0x150) = uVar10;
      uVar9 = *(uint64_t *)(unaff_RBX + 0x1cc);
      uVar10 = *(uint64_t *)(unaff_RBX + 0x1d4);
      *(uint64_t *)(param_1 + 0x158) = uVar2;
      uVar2 = *(uint64_t *)(unaff_RBX + 0x1bc);
      uVar11 = *(uint64_t *)(unaff_RBX + 0x1c4);
      *(int32_t *)(param_1 + 0x160) = uVar3;
      *(uint64_t *)(unaff_RBX + 400) = uVar2;
      *(uint64_t *)(unaff_RBX + 0x198) = uVar11;
      *(uint64_t *)(unaff_RBX + 0x1a0) = uVar9;
      *(uint64_t *)(unaff_RBX + 0x1a8) = uVar10;
      *(uint64_t *)(unaff_RBX + 0x1b0) = *(uint64_t *)(unaff_RBX + 0x1dc);
      *(int32_t *)(unaff_RBX + 0x1b8) = *(int32_t *)(unaff_RBX + 0x1e4);
    }
  }
  if ((*(byte *)(unaff_RBX + 0x56c) & 0x40) != 0) {
    puVar6 = *(ushort **)(unaff_RBX + 0x730);
    bVar15 = (byte)puVar6[0x40];
    if (bVar15 != 0) {
      lVar4 = *(longlong *)(unaff_RBX + 0x20);
      fVar16 = *(float *)(lVar4 + 0x1c0) - *(float *)(lVar4 + 0x1b0);
      fVar20 = *(float *)(lVar4 + 0x1c4) - *(float *)(lVar4 + 0x1b4);
      fVar1 = *(float *)(lVar4 + 0x1d0);
      puVar13 = puVar6;
      do {
        if (*(int *)((ulonglong)*puVar13 * 0xa60 + 0x3608 + *(longlong *)(unaff_RBX + 0x8d8)) == 1)
        {
          lVar4 = *(longlong *)
                   ((ulonglong)*puVar13 * 0xa60 + 0x30c0 + *(longlong *)(unaff_RBX + 0x8d8));
          lVar7 = *(longlong *)(unaff_RBX + 0x20);
          fVar21 = *(float *)(lVar4 + 0x1c4) - *(float *)(lVar4 + 0x1b4);
          fVar17 = *(float *)(lVar4 + 0x1c0) - *(float *)(lVar4 + 0x1b0);
          fVar22 = *(float *)(lVar4 + 0xc) - *(float *)(lVar7 + 0xc);
          fVar18 = *(float *)(lVar4 + 0x14) - *(float *)(lVar7 + 0x14);
          fVar19 = *(float *)(lVar4 + 0x10) - *(float *)(lVar7 + 0x10);
          fVar17 = SQRT(fVar17 * fVar17 + fVar21 * fVar21) +
                   *(float *)(lVar4 + 0x1d0) + *(float *)(lVar4 + 0x1d0) +
                   SQRT(fVar16 * fVar16 + fVar20 * fVar20) + fVar1 + fVar1;
          bVar8 = fVar17 * fVar17 < fVar22 * fVar22 + fVar19 * fVar19 + fVar18 * fVar18;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          iVar14 = iVar14 + -1;
          *puVar13 = puVar6[(ulonglong)bVar15 - 1];
          *(char *)(puVar6 + 0x40) = (char)puVar6[0x40] + -1;
          bVar15 = (byte)puVar6[0x40];
          puVar13 = puVar13 + -1;
        }
        iVar14 = iVar14 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar14 < (int)(uint)bVar15);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805261f3(longlong param_1)
void FUN_1805261f3(longlong param_1)

{
  float fVar1;
  uint64_t uVar2;
  int32_t uVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort *puVar6;
  longlong lVar7;
  bool bVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint uVar12;
  longlong in_RAX;
  ushort *puVar13;
  longlong unaff_RBX;
  uint64_t unaff_RSI;
  int unaff_EDI;
  byte bVar14;
  uint64_t unaff_R14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float unaff_XMM6_Da;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RSI;
  lVar4 = *(longlong *)(param_1 + 0x1f0);
  *(uint64_t *)(in_RAX + 0x18) = unaff_R14;
  plVar5 = *(longlong **)(lVar4 + 0x590);
  uVar12 = *(uint *)(lVar4 + 0x56c) >> 0xe & 1;
  if (((int)plVar5[(ulonglong)uVar12 * 9 + 0x48a] != -1) &&
     (*(int *)((longlong)(int)plVar5[(ulonglong)uVar12 * 9 + 0x48a] * 0x68 + 0x58 + render_system_ui)
      == 0x14)) {
    fVar15 = (float)(**(code **)(*plVar5 + 0x80))(plVar5,uVar12);
    fVar1 = *(float *)(param_1 + 0x1f8);
    if (fVar15 < fVar1) {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x1f0) + 0x590);
      fVar15 = render_system_ui * unaff_XMM6_Da + fVar15;
      if (fVar1 <= fVar15) {
        fVar15 = fVar1;
      }
      (**(code **)(*plVar5 + 0x88))(plVar5,uVar12,fVar15);
    }
  }
  uVar3 = *(int32_t *)(unaff_RBX + 0x18c);
  uVar2 = *(uint64_t *)(unaff_RBX + 0x16c);
  uVar9 = *(uint64_t *)(unaff_RBX + 0x174);
  uVar10 = *(uint64_t *)(unaff_RBX + 0x17c);
  if (unaff_XMM6_Da < *(float *)(param_1 + 0x1e8)) {
    FUN_1805b2f90((uint64_t *)(param_1 + 0x138));
    FUN_1805b2f90(unaff_RBX + 400);
    *(float *)(param_1 + 0x1e8) = *(float *)(param_1 + 0x1e8) - unaff_XMM6_Da;
  }
  else {
    *(uint64_t *)(param_1 + 0x138) = *(uint64_t *)(unaff_RBX + 0x164);
    *(uint64_t *)(param_1 + 0x140) = uVar2;
    *(int *)(param_1 + 0x1e8) = unaff_EDI;
    uVar2 = *(uint64_t *)(unaff_RBX + 0x184);
    *(uint64_t *)(param_1 + 0x148) = uVar9;
    *(uint64_t *)(param_1 + 0x150) = uVar10;
    uVar9 = *(uint64_t *)(unaff_RBX + 0x1cc);
    uVar10 = *(uint64_t *)(unaff_RBX + 0x1d4);
    *(uint64_t *)(param_1 + 0x158) = uVar2;
    uVar2 = *(uint64_t *)(unaff_RBX + 0x1bc);
    uVar11 = *(uint64_t *)(unaff_RBX + 0x1c4);
    *(int32_t *)(param_1 + 0x160) = uVar3;
    *(uint64_t *)(unaff_RBX + 400) = uVar2;
    *(uint64_t *)(unaff_RBX + 0x198) = uVar11;
    *(uint64_t *)(unaff_RBX + 0x1a0) = uVar9;
    *(uint64_t *)(unaff_RBX + 0x1a8) = uVar10;
    *(uint64_t *)(unaff_RBX + 0x1b0) = *(uint64_t *)(unaff_RBX + 0x1dc);
    *(int32_t *)(unaff_RBX + 0x1b8) = *(int32_t *)(unaff_RBX + 0x1e4);
  }
  if ((*(byte *)(unaff_RBX + 0x56c) & 0x40) != 0) {
    puVar6 = *(ushort **)(unaff_RBX + 0x730);
    bVar14 = (byte)puVar6[0x40];
    if (bVar14 != 0) {
      lVar4 = *(longlong *)(unaff_RBX + 0x20);
      fVar15 = *(float *)(lVar4 + 0x1c0) - *(float *)(lVar4 + 0x1b0);
      fVar19 = *(float *)(lVar4 + 0x1c4) - *(float *)(lVar4 + 0x1b4);
      fVar1 = *(float *)(lVar4 + 0x1d0);
      puVar13 = puVar6;
      do {
        if (*(int *)((ulonglong)*puVar13 * 0xa60 + 0x3608 + *(longlong *)(unaff_RBX + 0x8d8)) == 1)
        {
          lVar4 = *(longlong *)
                   ((ulonglong)*puVar13 * 0xa60 + 0x30c0 + *(longlong *)(unaff_RBX + 0x8d8));
          lVar7 = *(longlong *)(unaff_RBX + 0x20);
          fVar20 = *(float *)(lVar4 + 0x1c4) - *(float *)(lVar4 + 0x1b4);
          fVar16 = *(float *)(lVar4 + 0x1c0) - *(float *)(lVar4 + 0x1b0);
          fVar21 = *(float *)(lVar4 + 0xc) - *(float *)(lVar7 + 0xc);
          fVar17 = *(float *)(lVar4 + 0x14) - *(float *)(lVar7 + 0x14);
          fVar18 = *(float *)(lVar4 + 0x10) - *(float *)(lVar7 + 0x10);
          fVar16 = SQRT(fVar16 * fVar16 + fVar20 * fVar20) +
                   *(float *)(lVar4 + 0x1d0) + *(float *)(lVar4 + 0x1d0) +
                   SQRT(fVar15 * fVar15 + fVar19 * fVar19) + fVar1 + fVar1;
          bVar8 = fVar16 * fVar16 < fVar21 * fVar21 + fVar18 * fVar18 + fVar17 * fVar17;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          unaff_EDI = unaff_EDI + -1;
          *puVar13 = puVar6[(ulonglong)bVar14 - 1];
          *(char *)(puVar6 + 0x40) = (char)puVar6[0x40] + -1;
          bVar14 = (byte)puVar6[0x40];
          puVar13 = puVar13 + -1;
        }
        unaff_EDI = unaff_EDI + 1;
        puVar13 = puVar13 + 1;
      } while (unaff_EDI < (int)(uint)bVar14);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180526205(longlong param_1)
void FUN_180526205(longlong param_1)

{
  float fVar1;
  uint64_t uVar2;
  int32_t uVar3;
  longlong *plVar4;
  ushort *puVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint uVar12;
  longlong in_RAX;
  ushort *puVar13;
  longlong unaff_RBX;
  uint64_t *unaff_RSI;
  int unaff_EDI;
  byte bVar14;
  uint64_t unaff_R14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float unaff_XMM6_Da;
  
  *(uint64_t *)(in_RAX + 0x18) = unaff_R14;
  plVar4 = *(longlong **)(param_1 + 0x590);
  uVar12 = *(uint *)(param_1 + 0x56c) >> 0xe & 1;
  if (((int)plVar4[(ulonglong)uVar12 * 9 + 0x48a] != -1) &&
     (*(int *)((longlong)(int)plVar4[(ulonglong)uVar12 * 9 + 0x48a] * 0x68 + 0x58 + render_system_ui)
      == 0x14)) {
    fVar15 = (float)(**(code **)(*plVar4 + 0x80))(plVar4,uVar12);
    fVar1 = *(float *)(unaff_RSI + 0x18);
    if (fVar15 < fVar1) {
      fVar15 = render_system_ui * unaff_XMM6_Da + fVar15;
      if (fVar1 <= fVar15) {
        fVar15 = fVar1;
      }
      (**(code **)(**(longlong **)(unaff_RSI[0x17] + 0x590) + 0x88))
                (*(longlong **)(unaff_RSI[0x17] + 0x590),uVar12,fVar15);
    }
  }
  uVar3 = *(int32_t *)(unaff_RBX + 0x18c);
  uVar2 = *(uint64_t *)(unaff_RBX + 0x16c);
  uVar9 = *(uint64_t *)(unaff_RBX + 0x174);
  uVar10 = *(uint64_t *)(unaff_RBX + 0x17c);
  if (unaff_XMM6_Da < *(float *)(unaff_RSI + 0x16)) {
    FUN_1805b2f90();
    FUN_1805b2f90(unaff_RBX + 400);
    *(float *)(unaff_RSI + 0x16) = *(float *)(unaff_RSI + 0x16) - unaff_XMM6_Da;
  }
  else {
    *unaff_RSI = *(uint64_t *)(unaff_RBX + 0x164);
    unaff_RSI[1] = uVar2;
    *(int *)(unaff_RSI + 0x16) = unaff_EDI;
    uVar2 = *(uint64_t *)(unaff_RBX + 0x184);
    unaff_RSI[2] = uVar9;
    unaff_RSI[3] = uVar10;
    uVar9 = *(uint64_t *)(unaff_RBX + 0x1cc);
    uVar10 = *(uint64_t *)(unaff_RBX + 0x1d4);
    unaff_RSI[4] = uVar2;
    uVar2 = *(uint64_t *)(unaff_RBX + 0x1bc);
    uVar11 = *(uint64_t *)(unaff_RBX + 0x1c4);
    *(int32_t *)(unaff_RSI + 5) = uVar3;
    *(uint64_t *)(unaff_RBX + 400) = uVar2;
    *(uint64_t *)(unaff_RBX + 0x198) = uVar11;
    *(uint64_t *)(unaff_RBX + 0x1a0) = uVar9;
    *(uint64_t *)(unaff_RBX + 0x1a8) = uVar10;
    *(uint64_t *)(unaff_RBX + 0x1b0) = *(uint64_t *)(unaff_RBX + 0x1dc);
    *(int32_t *)(unaff_RBX + 0x1b8) = *(int32_t *)(unaff_RBX + 0x1e4);
  }
  if ((*(byte *)(unaff_RBX + 0x56c) & 0x40) != 0) {
    puVar5 = *(ushort **)(unaff_RBX + 0x730);
    bVar14 = (byte)puVar5[0x40];
    if (bVar14 != 0) {
      lVar6 = *(longlong *)(unaff_RBX + 0x20);
      fVar15 = *(float *)(lVar6 + 0x1c0) - *(float *)(lVar6 + 0x1b0);
      fVar19 = *(float *)(lVar6 + 0x1c4) - *(float *)(lVar6 + 0x1b4);
      fVar1 = *(float *)(lVar6 + 0x1d0);
      puVar13 = puVar5;
      do {
        if (*(int *)((ulonglong)*puVar13 * 0xa60 + 0x3608 + *(longlong *)(unaff_RBX + 0x8d8)) == 1)
        {
          lVar6 = *(longlong *)
                   ((ulonglong)*puVar13 * 0xa60 + 0x30c0 + *(longlong *)(unaff_RBX + 0x8d8));
          lVar7 = *(longlong *)(unaff_RBX + 0x20);
          fVar20 = *(float *)(lVar6 + 0x1c4) - *(float *)(lVar6 + 0x1b4);
          fVar16 = *(float *)(lVar6 + 0x1c0) - *(float *)(lVar6 + 0x1b0);
          fVar21 = *(float *)(lVar6 + 0xc) - *(float *)(lVar7 + 0xc);
          fVar17 = *(float *)(lVar6 + 0x14) - *(float *)(lVar7 + 0x14);
          fVar18 = *(float *)(lVar6 + 0x10) - *(float *)(lVar7 + 0x10);
          fVar16 = SQRT(fVar16 * fVar16 + fVar20 * fVar20) +
                   *(float *)(lVar6 + 0x1d0) + *(float *)(lVar6 + 0x1d0) +
                   SQRT(fVar15 * fVar15 + fVar19 * fVar19) + fVar1 + fVar1;
          bVar8 = fVar16 * fVar16 < fVar21 * fVar21 + fVar18 * fVar18 + fVar17 * fVar17;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          unaff_EDI = unaff_EDI + -1;
          *puVar13 = puVar5[(ulonglong)bVar14 - 1];
          *(char *)(puVar5 + 0x40) = (char)puVar5[0x40] + -1;
          bVar14 = (byte)puVar5[0x40];
          puVar13 = puVar13 + -1;
        }
        unaff_EDI = unaff_EDI + 1;
        puVar13 = puVar13 + 1;
      } while (unaff_EDI < (int)(uint)bVar14);
    }
  }
  return;
}





// 函数: void FUN_1805262b2(uint64_t param_1,uint64_t param_2)
void FUN_1805262b2(uint64_t param_1,uint64_t param_2)

{
  float fVar1;
  uint64_t uVar2;
  ushort *puVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int32_t in_EAX;
  ushort *puVar10;
  longlong unaff_RBX;
  int32_t *unaff_RSI;
  int unaff_EDI;
  byte bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int32_t in_XMM0_Dc;
  int32_t in_XMM0_Dd;
  float fVar15;
  int32_t in_XMM1_Dc;
  int32_t in_XMM1_Dd;
  float fVar16;
  float fVar17;
  float fVar18;
  
  *unaff_RSI = (int)param_1;
  unaff_RSI[1] = (int)((ulonglong)param_1 >> 0x20);
  unaff_RSI[2] = in_XMM0_Dc;
  unaff_RSI[3] = in_XMM0_Dd;
  unaff_RSI[0x2c] = unaff_EDI;
  uVar2 = *(uint64_t *)(unaff_RBX + 0x184);
  unaff_RSI[4] = (int)param_2;
  unaff_RSI[5] = (int)((ulonglong)param_2 >> 0x20);
  unaff_RSI[6] = in_XMM1_Dc;
  unaff_RSI[7] = in_XMM1_Dd;
  uVar7 = *(uint64_t *)(unaff_RBX + 0x1cc);
  uVar8 = *(uint64_t *)(unaff_RBX + 0x1d4);
  *(uint64_t *)(unaff_RSI + 8) = uVar2;
  uVar2 = *(uint64_t *)(unaff_RBX + 0x1bc);
  uVar9 = *(uint64_t *)(unaff_RBX + 0x1c4);
  unaff_RSI[10] = in_EAX;
  *(uint64_t *)(unaff_RBX + 400) = uVar2;
  *(uint64_t *)(unaff_RBX + 0x198) = uVar9;
  *(uint64_t *)(unaff_RBX + 0x1a0) = uVar7;
  *(uint64_t *)(unaff_RBX + 0x1a8) = uVar8;
  *(uint64_t *)(unaff_RBX + 0x1b0) = *(uint64_t *)(unaff_RBX + 0x1dc);
  *(int32_t *)(unaff_RBX + 0x1b8) = *(int32_t *)(unaff_RBX + 0x1e4);
  if ((*(byte *)(unaff_RBX + 0x56c) & 0x40) != 0) {
    puVar3 = *(ushort **)(unaff_RBX + 0x730);
    bVar11 = (byte)puVar3[0x40];
    if (bVar11 != 0) {
      lVar4 = *(longlong *)(unaff_RBX + 0x20);
      fVar12 = *(float *)(lVar4 + 0x1c0) - *(float *)(lVar4 + 0x1b0);
      fVar16 = *(float *)(lVar4 + 0x1c4) - *(float *)(lVar4 + 0x1b4);
      fVar1 = *(float *)(lVar4 + 0x1d0);
      puVar10 = puVar3;
      do {
        if (*(int *)((ulonglong)*puVar10 * 0xa60 + 0x3608 + *(longlong *)(unaff_RBX + 0x8d8)) == 1)
        {
          lVar4 = *(longlong *)
                   ((ulonglong)*puVar10 * 0xa60 + 0x30c0 + *(longlong *)(unaff_RBX + 0x8d8));
          lVar5 = *(longlong *)(unaff_RBX + 0x20);
          fVar17 = *(float *)(lVar4 + 0x1c4) - *(float *)(lVar4 + 0x1b4);
          fVar13 = *(float *)(lVar4 + 0x1c0) - *(float *)(lVar4 + 0x1b0);
          fVar18 = *(float *)(lVar4 + 0xc) - *(float *)(lVar5 + 0xc);
          fVar14 = *(float *)(lVar4 + 0x14) - *(float *)(lVar5 + 0x14);
          fVar15 = *(float *)(lVar4 + 0x10) - *(float *)(lVar5 + 0x10);
          fVar13 = SQRT(fVar13 * fVar13 + fVar17 * fVar17) +
                   *(float *)(lVar4 + 0x1d0) + *(float *)(lVar4 + 0x1d0) +
                   SQRT(fVar12 * fVar12 + fVar16 * fVar16) + fVar1 + fVar1;
          bVar6 = fVar13 * fVar13 < fVar18 * fVar18 + fVar15 * fVar15 + fVar14 * fVar14;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          unaff_EDI = unaff_EDI + -1;
          *puVar10 = puVar3[(ulonglong)bVar11 - 1];
          *(char *)(puVar3 + 0x40) = (char)puVar3[0x40] + -1;
          bVar11 = (byte)puVar3[0x40];
          puVar10 = puVar10 + -1;
        }
        unaff_EDI = unaff_EDI + 1;
        puVar10 = puVar10 + 1;
      } while (unaff_EDI < (int)(uint)bVar11);
    }
  }
  return;
}





// 函数: void FUN_18052639d(void)
void FUN_18052639d(void)

{
  float fVar1;
  ushort *puVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  ushort *puVar6;
  longlong unaff_RBX;
  int unaff_EDI;
  byte bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((*(byte *)(unaff_RBX + 0x56c) & 0x40) != 0) {
    puVar2 = *(ushort **)(unaff_RBX + 0x730);
    bVar7 = (byte)puVar2[0x40];
    if (bVar7 != 0) {
      lVar3 = *(longlong *)(unaff_RBX + 0x20);
      fVar8 = *(float *)(lVar3 + 0x1c0) - *(float *)(lVar3 + 0x1b0);
      fVar12 = *(float *)(lVar3 + 0x1c4) - *(float *)(lVar3 + 0x1b4);
      fVar1 = *(float *)(lVar3 + 0x1d0);
      puVar6 = puVar2;
      do {
        if (*(int *)((ulonglong)*puVar6 * 0xa60 + 0x3608 + *(longlong *)(unaff_RBX + 0x8d8)) == 1) {
          lVar3 = *(longlong *)
                   ((ulonglong)*puVar6 * 0xa60 + 0x30c0 + *(longlong *)(unaff_RBX + 0x8d8));
          lVar4 = *(longlong *)(unaff_RBX + 0x20);
          fVar13 = *(float *)(lVar3 + 0x1c4) - *(float *)(lVar3 + 0x1b4);
          fVar9 = *(float *)(lVar3 + 0x1c0) - *(float *)(lVar3 + 0x1b0);
          fVar14 = *(float *)(lVar3 + 0xc) - *(float *)(lVar4 + 0xc);
          fVar10 = *(float *)(lVar3 + 0x14) - *(float *)(lVar4 + 0x14);
          fVar11 = *(float *)(lVar3 + 0x10) - *(float *)(lVar4 + 0x10);
          fVar9 = SQRT(fVar9 * fVar9 + fVar13 * fVar13) +
                  *(float *)(lVar3 + 0x1d0) + *(float *)(lVar3 + 0x1d0) +
                  SQRT(fVar8 * fVar8 + fVar12 * fVar12) + fVar1 + fVar1;
          bVar5 = fVar9 * fVar9 < fVar14 * fVar14 + fVar11 * fVar11 + fVar10 * fVar10;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          unaff_EDI = unaff_EDI + -1;
          *puVar6 = puVar2[(ulonglong)bVar7 - 1];
          *(char *)(puVar2 + 0x40) = (char)puVar2[0x40] + -1;
          bVar7 = (byte)puVar2[0x40];
          puVar6 = puVar6 + -1;
        }
        unaff_EDI = unaff_EDI + 1;
        puVar6 = puVar6 + 1;
      } while (unaff_EDI < (int)(uint)bVar7);
    }
  }
  return;
}





// 函数: void FUN_180526509(void)
void FUN_180526509(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180526520(longlong param_1,uint64_t param_2,uint64_t param_3)
void FUN_180526520(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong lVar3;
  
  if ((system_status_flag == 1) || (system_status_flag == 4)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if (-1 < *(int *)(param_1 + 0x564)) {
    lVar3 = *(longlong *)(param_1 + 0x8d8) + 0x30a0 + (longlong)*(int *)(param_1 + 0x564) * 0xa60;
    FUN_18051b660(lVar3,param_2,*(longlong *)(param_1 + 0x8d8) + 0x87a948);
    FUN_180510e50(lVar3,0x3dcac083,uVar2);
    FUN_1805113f0(lVar3,0x3dcac083);
    FUN_1805af580(param_3,lVar3);
    FUN_18052f590(lVar3,0x3dcac083,param_2,0);
    FUN_180526710(lVar3,0x3dcac083);
    (**(code **)**(uint64_t **)(lVar3 + 0x590))
              (*(uint64_t **)(lVar3 + 0x590),0x3dcac083,*(uint64_t *)(lVar3 + 0x658));
    lVar1 = *(longlong *)(param_1 + 0x8d8);
    if (*(char *)(lVar3 + 0x984) != '\0') {
      if (-1 < *(int *)(lVar3 + 0x564)) {
        func_0x00018051a670(lVar3);
      }
      FUN_18051b210(lVar3,lVar1 + 0x87a948);
      FUN_18051b660(lVar3);
    }
  }
  if (*(int *)(param_1 + 0x560) < 0) {
    FUN_18051b660(param_1);
    FUN_180510e50(param_1,0x3dcac083,uVar2);
    FUN_1805113f0(param_1,0x3dcac083);
    FUN_1805af580(param_2,param_1);
    FUN_18052f590(param_1,0x3dcac083,param_2,0);
    FUN_180526710(param_1,0x3dcac083);
    (**(code **)**(uint64_t **)(param_1 + 0x590))
              (*(uint64_t **)(param_1 + 0x590),0x3dcac083,*(uint64_t *)(param_1 + 0x658));
    lVar1 = *(longlong *)(param_1 + 0x8d8);
    if (*(char *)(param_1 + 0x984) != '\0') {
      if (-1 < *(int *)(param_1 + 0x564)) {
        func_0x00018051a670(param_1);
      }
      FUN_18051b210(param_1,lVar1 + 0x87a948);
      FUN_18051b660(param_1);
    }
  }
  return;
}





// 函数: void FUN_180526541(longlong param_1,uint64_t param_2,uint64_t param_3)
void FUN_180526541(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  longlong lVar1;
  int in_EAX;
  longlong unaff_RBX;
  uint64_t uVar2;
  longlong lVar3;
  
  if ((in_EAX == 1) || (in_EAX == 4)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if (-1 < *(int *)(param_1 + 0x564)) {
    lVar3 = *(longlong *)(param_1 + 0x8d8) + 0x30a0 + (longlong)*(int *)(param_1 + 0x564) * 0xa60;
    FUN_18051b660(lVar3,param_2,*(longlong *)(param_1 + 0x8d8) + 0x87a948);
    FUN_180510e50(lVar3,0x3dcac083,uVar2);
    FUN_1805113f0(lVar3,0x3dcac083);
    FUN_1805af580(param_3,lVar3);
    FUN_18052f590(lVar3,0x3dcac083);
    FUN_180526710(lVar3,0x3dcac083);
    (**(code **)**(uint64_t **)(lVar3 + 0x590))
              (*(uint64_t **)(lVar3 + 0x590),0x3dcac083,*(uint64_t *)(lVar3 + 0x658));
    lVar1 = *(longlong *)(unaff_RBX + 0x8d8);
    if (*(char *)(lVar3 + 0x984) != '\0') {
      if (-1 < *(int *)(lVar3 + 0x564)) {
        func_0x00018051a670(lVar3);
      }
      FUN_18051b210(lVar3,lVar1 + 0x87a948);
      FUN_18051b660(lVar3);
    }
  }
  if (*(int *)(unaff_RBX + 0x560) < 0) {
    FUN_18051b660();
    FUN_180510e50();
    FUN_1805113f0();
    FUN_1805af580();
    FUN_18052f590();
    FUN_180526710();
    (**(code **)**(uint64_t **)(unaff_RBX + 0x590))
              (*(uint64_t **)(unaff_RBX + 0x590),0x3dcac083,*(uint64_t *)(unaff_RBX + 0x658));
    if (*(char *)(unaff_RBX + 0x984) != '\0') {
      if (-1 < *(int *)(unaff_RBX + 0x564)) {
        func_0x00018051a670();
      }
      FUN_18051b210();
      FUN_18051b660();
    }
  }
  return;
}





