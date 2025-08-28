#include "TaleWorlds.Native.Split.h"

// 03_rendering_part095.c - 6 个函数

// 函数: void FUN_180322e90(uint64_t param_1,int32_t *param_2,longlong param_3)
void FUN_180322e90(uint64_t param_1,int32_t *param_2,longlong param_3)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  uint64_t uVar5;
  void *puVar6;
  int32_t uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint64_t *puVar10;
  void *puVar11;
  longlong *plVar12;
  uint64_t *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  uint uVar16;
  uint64_t *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  int32_t *puVar20;
  uint *puVar21;
  longlong lVar22;
  int8_t auStack_c8 [32];
  uint uStack_a8;
  longlong lStack_a0;
  uint64_t uStack_98;
  int32_t *puStack_90;
  uint uStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong *plStack_70;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong uStack_48;
  
  if (param_3 == 0) {
    return;
  }
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  uVar5 = *(uint64_t *)(param_3 + 0x10);
  param_2[2] = 1;
  uStack_98 = param_1;
  puStack_90 = param_2;
  lStack_78 = param_3;
  uVar7 = FUN_18032b4a0(param_1,param_3);
  *param_2 = uVar7;
  uVar7 = FUN_18032b4a0(param_1,uVar5);
  param_2[1] = uVar7;
  puVar6 = *(void **)(*(longlong *)(param_3 + 0x208) + 0x18);
  puVar11 = &system_buffer_ptr;
  if (puVar6 != (void *)0x0) {
    puVar11 = puVar6;
  }
  (**(code **)(*(longlong *)(param_2 + 4) + 0x10))(param_2 + 4,puVar11);
  puVar1 = (ulonglong *)(param_2 + 0x22);
  uVar14 = *(longlong *)(param_3 + 0x1b0) - *(longlong *)(param_3 + 0x1a8) >> 3;
  uVar18 = uVar14 & 0xffffffff;
  FUN_1800e8140(puVar1,uVar14 & 0xffffffff);
  uVar5 = uStack_98;
  puVar20 = param_2;
  if ((int)uVar14 != 0) {
    lVar22 = 0;
    do {
      lStack_80 = 0;
      FUN_180323340(uVar5,&lStack_80,*(uint64_t *)(lVar22 + *(longlong *)(param_3 + 0x1a8)),
                    0xffffffff);
      lVar19 = lStack_80;
      if (lStack_80 != 0) {
        plVar15 = *(longlong **)(param_2 + 0x24);
        if (plVar15 < *(longlong **)(param_2 + 0x26)) {
          *(longlong **)(param_2 + 0x24) = plVar15 + 1;
          *plVar15 = lStack_80;
        }
        else {
          plVar12 = (longlong *)*puVar1;
          lVar9 = (longlong)plVar15 - (longlong)plVar12 >> 3;
          if (lVar9 == 0) {
            lVar9 = 1;
LAB_180322fe3:
            plVar8 = (longlong *)
                     FUN_18062b420(_DAT_180c8ed18,lVar9 * 8,*(int8_t *)(param_2 + 0x28));
            plVar12 = (longlong *)*puVar1;
            plVar15 = *(longlong **)(param_2 + 0x24);
          }
          else {
            lVar9 = lVar9 * 2;
            if (lVar9 != 0) goto LAB_180322fe3;
            plVar8 = (longlong *)0x0;
          }
          if (plVar12 != plVar15) {
                    // WARNING: Subroutine does not return
            memmove(plVar8,plVar12,(longlong)plVar15 - (longlong)plVar12);
          }
          *plVar8 = lVar19;
          if (*puVar1 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *puVar1 = (ulonglong)plVar8;
          *(longlong **)(param_2 + 0x26) = plVar8 + lVar9;
          *(longlong **)(param_2 + 0x24) = plVar8 + 1;
          param_3 = lStack_78;
        }
      }
      lVar22 = lVar22 + 8;
      uVar18 = uVar18 - 1;
      puVar20 = puStack_90;
      param_1 = uStack_98;
    } while (uVar18 != 0);
  }
  puVar20[0x2a] = *(int32_t *)(param_3 + 0x170);
  puVar20[0x2b] = *(int32_t *)(param_3 + 0x168);
  plVar15 = (longlong *)(puVar20 + 0x1a);
  cVar4 = *(char *)(param_3 + 0x20);
  plStack_70 = plVar15;
  FUN_18033ab50(plVar15,(longlong)cVar4);
  uStack_88 = (uint)cVar4;
  uStack_a8 = 0;
  if (cVar4 != '\0') {
    lStack_a0 = 0;
    do {
      lVar22 = lStack_a0;
      uVar16 = uStack_a8;
      puVar21 = (uint *)((longlong)(char)uStack_a8 * 0x100 + *(longlong *)(lStack_78 + 0x18));
      *(int32_t *)(lStack_a0 + *plVar15) = 1;
      do {
        LOCK();
        uVar3 = *puVar21;
        *puVar21 = *puVar21 | 1;
        UNLOCK();
      } while ((uVar3 & 1) != 0);
      uStack_68 = puVar21[1];
      uStack_64 = puVar21[2];
      uStack_60 = puVar21[3];
      uStack_5c = puVar21[4];
      uStack_58 = puVar21[5];
      uStack_54 = puVar21[6];
      uStack_50 = puVar21[7];
      uStack_4c = puVar21[8];
      *puVar21 = 0;
      lVar19 = *plVar15;
      puVar2 = (uint *)(lStack_a0 + 0x10 + lVar19);
      *puVar2 = uStack_68;
      puVar2[1] = uStack_64;
      puVar2[2] = uStack_60;
      puVar2[3] = uStack_5c;
      puVar2 = (uint *)(lStack_a0 + 0x20 + lVar19);
      *puVar2 = uStack_58;
      puVar2[1] = uStack_54;
      puVar2[2] = uStack_50;
      puVar2[3] = uStack_4c;
      lVar19 = *(longlong *)
                ((longlong)(char)uStack_a8 * 0x1b0 + 0x180 +
                *(longlong *)(*(longlong *)(lStack_78 + 0x208) + 0x140));
      lVar9 = *plVar15;
      *(int32_t *)(lVar9 + 0x40 + lStack_a0) = *(int32_t *)(lVar19 + 0x10);
      puVar6 = *(void **)(lVar19 + 8);
      puVar11 = &system_buffer_ptr;
      if (puVar6 != (void *)0x0) {
        puVar11 = puVar6;
      }
      strcpy_s(*(uint64_t *)(lVar9 + 0x38 + lStack_a0),0x40,puVar11);
      uVar14 = *(longlong *)(puVar21 + 0x2e) - *(longlong *)(puVar21 + 0x2c) >> 3;
      uVar18 = uVar14 & 0xffffffff;
      FUN_1800e8140(*plVar15 + 0x88 + lVar22,uVar14 & 0xffffffff);
      if ((int)uVar14 != 0) {
        lVar19 = 0;
        do {
          puStack_90 = (int32_t *)0x0;
          FUN_180323340(param_1,&puStack_90,*(uint64_t *)(*(longlong *)(puVar21 + 0x2c) + lVar19),
                        uVar16);
          puVar20 = puStack_90;
          if (puStack_90 != (int32_t *)0x0) {
            lVar22 = *plVar15;
            puVar17 = *(uint64_t **)(lStack_a0 + 0x90 + lVar22);
            if (puVar17 < *(uint64_t **)(lStack_a0 + 0x98 + lVar22)) {
              *(uint64_t **)(lStack_a0 + 0x90 + lVar22) = puVar17 + 1;
              *puVar17 = puStack_90;
              uVar16 = uStack_a8;
            }
            else {
              puVar13 = *(uint64_t **)(lStack_a0 + 0x88 + lVar22);
              lVar9 = (longlong)puVar17 - (longlong)puVar13 >> 3;
              if (lVar9 == 0) {
                lVar9 = 1;
LAB_18032321b:
                puVar10 = (uint64_t *)
                          FUN_18062b420(_DAT_180c8ed18,lVar9 * 8,
                                        *(int8_t *)(lStack_a0 + 0xa0 + lVar22));
                puVar17 = *(uint64_t **)(lStack_a0 + 0x90 + lVar22);
                puVar13 = *(uint64_t **)(lStack_a0 + 0x88 + lVar22);
              }
              else {
                lVar9 = lVar9 * 2;
                if (lVar9 != 0) goto LAB_18032321b;
                puVar10 = (uint64_t *)0x0;
              }
              if (puVar13 != puVar17) {
                    // WARNING: Subroutine does not return
                memmove(puVar10,puVar13,(longlong)puVar17 - (longlong)puVar13);
              }
              *puVar10 = puVar20;
              if (*(longlong *)(lStack_a0 + 0x88 + lVar22) != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              *(uint64_t **)(lStack_a0 + 0x88 + lVar22) = puVar10;
              *(uint64_t **)(lStack_a0 + 0x90 + lVar22) = puVar10 + 1;
              *(uint64_t **)(lStack_a0 + 0x98 + lVar22) = puVar10 + lVar9;
              plVar15 = plStack_70;
              uVar16 = uStack_a8;
            }
          }
          lVar19 = lVar19 + 8;
          uVar18 = uVar18 - 1;
          lVar22 = lStack_a0;
          param_1 = uStack_98;
        } while (uVar18 != 0);
      }
      uStack_a8 = uVar16 + 1;
      lStack_a0 = lVar22 + 0xb0;
      param_1 = uStack_98;
    } while (uStack_a8 < uStack_88);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180322eba(uint64_t param_1,int32_t *param_2,longlong param_3)
void FUN_180322eba(uint64_t param_1,int32_t *param_2,longlong param_3)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  uint64_t uVar5;
  void *puVar6;
  longlong lVar7;
  int32_t uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint64_t *puVar11;
  void *puVar12;
  longlong *plVar13;
  uint64_t *puVar14;
  uint64_t unaff_RBX;
  ulonglong uVar15;
  longlong *plVar16;
  uint64_t unaff_RBP;
  uint64_t unaff_RDI;
  uint64_t *puVar17;
  longlong in_R11;
  uint64_t unaff_R12;
  ulonglong uVar18;
  int32_t *puVar19;
  uint64_t unaff_R14;
  uint *puVar20;
  longlong lVar21;
  uint uStackX_20;
  longlong lStack0000000000000028;
  uint64_t uStack0000000000000030;
  int32_t *puStack0000000000000038;
  uint in_stack_00000040;
  longlong in_stack_00000048;
  longlong lStack0000000000000050;
  longlong *in_stack_00000058;
  uint uStack0000000000000060;
  uint uStack0000000000000064;
  uint uStack0000000000000068;
  uint uStack000000000000006c;
  uint uStack0000000000000070;
  uint uStack0000000000000074;
  uint uStack0000000000000078;
  uint uStack000000000000007c;
  ulonglong in_stack_00000080;
  
  *(uint64_t *)(in_R11 + 0x20) = unaff_RBX;
  uVar5 = *(uint64_t *)(param_3 + 0x10);
  *(uint64_t *)(in_R11 + -0x20) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RDI;
  param_2[2] = 1;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R14;
  uStack0000000000000030 = param_1;
  puStack0000000000000038 = param_2;
  lStack0000000000000050 = param_3;
  uVar8 = FUN_18032b4a0(param_1,param_3);
  *param_2 = uVar8;
  uVar8 = FUN_18032b4a0(param_1,uVar5);
  param_2[1] = uVar8;
  puVar6 = *(void **)(*(longlong *)(param_3 + 0x208) + 0x18);
  puVar12 = &system_buffer_ptr;
  if (puVar6 != (void *)0x0) {
    puVar12 = puVar6;
  }
  (**(code **)(*(longlong *)(param_2 + 4) + 0x10))(param_2 + 4,puVar12);
  puVar1 = (ulonglong *)(param_2 + 0x22);
  uVar15 = *(longlong *)(param_3 + 0x1b0) - *(longlong *)(param_3 + 0x1a8) >> 3;
  uVar18 = uVar15 & 0xffffffff;
  FUN_1800e8140(puVar1,uVar15 & 0xffffffff);
  uVar5 = uStack0000000000000030;
  puVar19 = param_2;
  if ((int)uVar15 != 0) {
    lVar21 = 0;
    do {
      in_stack_00000048 = 0;
      FUN_180323340(uVar5,&stack0x00000048,*(uint64_t *)(lVar21 + *(longlong *)(param_3 + 0x1a8)),
                    0xffffffff);
      lVar7 = in_stack_00000048;
      if (in_stack_00000048 != 0) {
        plVar16 = *(longlong **)(param_2 + 0x24);
        if (plVar16 < *(longlong **)(param_2 + 0x26)) {
          *(longlong **)(param_2 + 0x24) = plVar16 + 1;
          *plVar16 = in_stack_00000048;
        }
        else {
          plVar13 = (longlong *)*puVar1;
          lVar10 = (longlong)plVar16 - (longlong)plVar13 >> 3;
          if (lVar10 == 0) {
            lVar10 = 1;
LAB_180322fe3:
            plVar9 = (longlong *)
                     FUN_18062b420(_DAT_180c8ed18,lVar10 * 8,*(int8_t *)(param_2 + 0x28));
            plVar13 = (longlong *)*puVar1;
            plVar16 = *(longlong **)(param_2 + 0x24);
          }
          else {
            lVar10 = lVar10 * 2;
            if (lVar10 != 0) goto LAB_180322fe3;
            plVar9 = (longlong *)0x0;
          }
          if (plVar13 != plVar16) {
                    // WARNING: Subroutine does not return
            memmove(plVar9,plVar13,(longlong)plVar16 - (longlong)plVar13);
          }
          *plVar9 = lVar7;
          if (*puVar1 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *puVar1 = (ulonglong)plVar9;
          *(longlong **)(param_2 + 0x26) = plVar9 + lVar10;
          *(longlong **)(param_2 + 0x24) = plVar9 + 1;
          param_3 = lStack0000000000000050;
        }
      }
      lVar21 = lVar21 + 8;
      uVar18 = uVar18 - 1;
      puVar19 = puStack0000000000000038;
      param_1 = uStack0000000000000030;
    } while (uVar18 != 0);
  }
  puVar19[0x2a] = *(int32_t *)(param_3 + 0x170);
  puVar19[0x2b] = *(int32_t *)(param_3 + 0x168);
  plVar16 = (longlong *)(puVar19 + 0x1a);
  cVar4 = *(char *)(param_3 + 0x20);
  in_stack_00000058 = plVar16;
  FUN_18033ab50(plVar16,(longlong)cVar4);
  in_stack_00000040 = (uint)cVar4;
  uStackX_20 = 0;
  if (cVar4 != '\0') {
    lStack0000000000000028 = 0;
    do {
      puVar20 = (uint *)((longlong)(char)uStackX_20 * 0x100 +
                        *(longlong *)(lStack0000000000000050 + 0x18));
      *(int32_t *)(lStack0000000000000028 + *plVar16) = 1;
      do {
        LOCK();
        uVar3 = *puVar20;
        *puVar20 = *puVar20 | 1;
        UNLOCK();
      } while ((uVar3 & 1) != 0);
      uStack0000000000000060 = puVar20[1];
      uStack0000000000000064 = puVar20[2];
      uStack0000000000000068 = puVar20[3];
      uStack000000000000006c = puVar20[4];
      uStack0000000000000070 = puVar20[5];
      uStack0000000000000074 = puVar20[6];
      uStack0000000000000078 = puVar20[7];
      uStack000000000000007c = puVar20[8];
      *puVar20 = 0;
      lVar21 = *plVar16;
      puVar2 = (uint *)(lStack0000000000000028 + 0x10 + lVar21);
      *puVar2 = uStack0000000000000060;
      puVar2[1] = uStack0000000000000064;
      puVar2[2] = uStack0000000000000068;
      puVar2[3] = uStack000000000000006c;
      puVar2 = (uint *)(lStack0000000000000028 + 0x20 + lVar21);
      *puVar2 = uStack0000000000000070;
      puVar2[1] = uStack0000000000000074;
      puVar2[2] = uStack0000000000000078;
      puVar2[3] = uStack000000000000007c;
      lVar21 = *(longlong *)
                ((longlong)(char)uStackX_20 * 0x1b0 + 0x180 +
                *(longlong *)(*(longlong *)(lStack0000000000000050 + 0x208) + 0x140));
      lVar7 = *plVar16;
      *(int32_t *)(lVar7 + 0x40 + lStack0000000000000028) = *(int32_t *)(lVar21 + 0x10);
      puVar6 = *(void **)(lVar21 + 8);
      puVar12 = &system_buffer_ptr;
      if (puVar6 != (void *)0x0) {
        puVar12 = puVar6;
      }
      strcpy_s(*(uint64_t *)(lVar7 + 0x38 + lStack0000000000000028),0x40,puVar12);
      uVar15 = *(longlong *)(puVar20 + 0x2e) - *(longlong *)(puVar20 + 0x2c) >> 3;
      uVar18 = uVar15 & 0xffffffff;
      FUN_1800e8140(*plVar16 + 0x88 + lStack0000000000000028,uVar15 & 0xffffffff);
      if ((int)uVar15 != 0) {
        lVar21 = 0;
        do {
          puStack0000000000000038 = (int32_t *)0x0;
          FUN_180323340(param_1,&stack0x00000038,
                        *(uint64_t *)(*(longlong *)(puVar20 + 0x2c) + lVar21),uStackX_20);
          puVar19 = puStack0000000000000038;
          if (puStack0000000000000038 != (int32_t *)0x0) {
            lVar7 = *plVar16;
            puVar17 = *(uint64_t **)(lStack0000000000000028 + 0x90 + lVar7);
            if (puVar17 < *(uint64_t **)(lStack0000000000000028 + 0x98 + lVar7)) {
              *(uint64_t **)(lStack0000000000000028 + 0x90 + lVar7) = puVar17 + 1;
              *puVar17 = puStack0000000000000038;
            }
            else {
              puVar14 = *(uint64_t **)(lStack0000000000000028 + 0x88 + lVar7);
              lVar10 = (longlong)puVar17 - (longlong)puVar14 >> 3;
              if (lVar10 == 0) {
                lVar10 = 1;
LAB_18032321b:
                puVar11 = (uint64_t *)
                          FUN_18062b420(_DAT_180c8ed18,lVar10 * 8,
                                        *(int8_t *)(lStack0000000000000028 + 0xa0 + lVar7));
                puVar17 = *(uint64_t **)(lStack0000000000000028 + 0x90 + lVar7);
                puVar14 = *(uint64_t **)(lStack0000000000000028 + 0x88 + lVar7);
              }
              else {
                lVar10 = lVar10 * 2;
                if (lVar10 != 0) goto LAB_18032321b;
                puVar11 = (uint64_t *)0x0;
              }
              if (puVar14 != puVar17) {
                    // WARNING: Subroutine does not return
                memmove(puVar11,puVar14,(longlong)puVar17 - (longlong)puVar14);
              }
              *puVar11 = puVar19;
              if (*(longlong *)(lStack0000000000000028 + 0x88 + lVar7) != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              *(uint64_t **)(lStack0000000000000028 + 0x88 + lVar7) = puVar11;
              *(uint64_t **)(lStack0000000000000028 + 0x90 + lVar7) = puVar11 + 1;
              *(uint64_t **)(lStack0000000000000028 + 0x98 + lVar7) = puVar11 + lVar10;
              plVar16 = in_stack_00000058;
            }
          }
          lVar21 = lVar21 + 8;
          uVar18 = uVar18 - 1;
          param_1 = uStack0000000000000030;
        } while (uVar18 != 0);
      }
      uStackX_20 = uStackX_20 + 1;
      lStack0000000000000028 = lStack0000000000000028 + 0xb0;
      param_1 = uStack0000000000000030;
    } while (uStackX_20 < in_stack_00000040);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000080 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180323335(void)
void FUN_180323335(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180323340(uint64_t param_1,uint64_t *param_2,longlong *param_3,int32_t param_4)
void FUN_180323340(uint64_t param_1,uint64_t *param_2,longlong *param_3,int32_t param_4)

{
  longlong *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  int32_t uVar28;
  longlong lVar29;
  uint64_t *puVar30;
  int32_t *puVar31;
  uint64_t *puVar32;
  uint64_t *puStack_48;
  uint64_t uStack_40;
  longlong *plStack_38;
  
  uStack_40 = 0xfffffffffffffffe;
  puStack_48 = (uint64_t *)0x0;
  iVar27 = (**(code **)(*param_3 + 0x98))(param_3);
  if (iVar27 == 0) {
    lVar29 = (**(code **)(*param_3 + 0x178))(param_3);
    if (lVar29 == 0) {
      return;
    }
    lVar29 = (**(code **)(*param_3 + 0x178))(param_3);
    if ((*(int *)(lVar29 + 0x20) == 0x11) &&
       (iVar27 = strcmp(*(uint64_t *)(lVar29 + 0x18),&unknown_var_7552_ptr), iVar27 == 0)) {
      return;
    }
  }
  else {
    if (iVar27 == 1) {
      FUN_1803235c0(param_1,&puStack_48,param_3);
      puVar30 = puStack_48;
      goto LAB_1803234fc;
    }
    if (iVar27 == 2) {
      FUN_180323810(param_1,&puStack_48,param_3);
      puVar30 = puStack_48;
      goto LAB_1803234fc;
    }
    if (iVar27 == 4) {
      puVar30 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0xf8,8,3);
      puStack_48 = puVar30;
      FUN_180320470(puVar30);
      *puVar30 = &unknown_var_8168_ptr;
      uVar28 = FUN_180339cf0(puVar30);
      plVar1 = (longlong *)param_3[9];
      plStack_38 = plVar1;
      if (plVar1 != (longlong *)0x0) {
        uVar28 = (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      uVar28 = FUN_1800c17c0(uVar28,plVar1 + 9);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
      }
      lVar25 = param_3[10];
      uVar2 = *(int32_t *)((longlong)param_3 + 0x54);
      lVar26 = param_3[0xb];
      uVar3 = *(int32_t *)((longlong)param_3 + 0x5c);
      lVar29 = param_3[0xc];
      lVar13 = param_3[0xd];
      lVar14 = param_3[0xe];
      lVar15 = param_3[0xf];
      lVar16 = param_3[0x10];
      lVar17 = param_3[0x11];
      *(int32_t *)(puVar30 + 2) = 1;
      *(int32_t *)(puVar30 + 0x1e) = uVar28;
      *(int32_t *)((longlong)puVar30 + 0xf4) = param_4;
      *(int *)(puVar30 + 0x16) = (int)lVar25;
      *(int32_t *)((longlong)puVar30 + 0xb4) = uVar2;
      *(int *)(puVar30 + 0x17) = (int)lVar26;
      *(int32_t *)((longlong)puVar30 + 0xbc) = uVar3;
      puVar30[0x18] = lVar29;
      puVar30[0x19] = lVar13;
      puVar30[0x1a] = lVar14;
      puVar30[0x1b] = lVar15;
      puVar30[0x1c] = lVar16;
      puVar30[0x1d] = lVar17;
      *(int32_t *)((longlong)puVar30 + 0x8c) = 4;
      goto LAB_1803234fc;
    }
    if (iVar27 != 6) {
      return;
    }
  }
  puVar30 = (uint64_t *)(**(code **)(*param_3 + 0x1f8))(param_3,param_1);
LAB_1803234fc:
  if (puVar30 != (uint64_t *)0x0) {
    uVar28 = FUN_18032b4a0(param_1,param_3);
    *(int32_t *)(puVar30 + 1) = uVar28;
    uVar28 = FUN_18032b4a0(param_1,param_3[5]);
    *(int32_t *)((longlong)puVar30 + 0xc) = uVar28;
    *(uint *)(puVar30 + 2) = *(uint *)(puVar30 + 2) | 1;
    uVar28 = (**(code **)(*param_3 + 0x98))(param_3);
    *(int32_t *)((longlong)puVar30 + 0x8c) = uVar28;
    puVar31 = (int32_t *)(**(code **)(*param_3 + 0x198))(param_3);
    uVar2 = puVar31[1];
    uVar3 = puVar31[2];
    uVar4 = puVar31[3];
    uVar5 = puVar31[4];
    uVar6 = puVar31[5];
    uVar7 = puVar31[6];
    uVar8 = puVar31[7];
    uVar9 = puVar31[8];
    uVar10 = puVar31[9];
    uVar11 = puVar31[10];
    uVar12 = puVar31[0xb];
    uVar28 = puVar31[0xc];
    *(int32_t *)(puVar30 + 0xb) = *puVar31;
    *(int32_t *)((longlong)puVar30 + 0x5c) = uVar2;
    *(int32_t *)(puVar30 + 0xc) = uVar3;
    *(int32_t *)((longlong)puVar30 + 100) = uVar4;
    *(int32_t *)(puVar30 + 0xd) = uVar5;
    *(int32_t *)((longlong)puVar30 + 0x6c) = uVar6;
    *(int32_t *)(puVar30 + 0xe) = uVar7;
    *(int32_t *)((longlong)puVar30 + 0x74) = uVar8;
    *(int32_t *)(puVar30 + 0xf) = uVar9;
    *(int32_t *)((longlong)puVar30 + 0x7c) = uVar10;
    *(int32_t *)(puVar30 + 0x10) = uVar11;
    *(int32_t *)((longlong)puVar30 + 0x84) = uVar12;
    *(int32_t *)(puVar30 + 0x11) = uVar28;
    uVar28 = (**(code **)(*param_3 + 0x130))(param_3);
    *(int32_t *)((longlong)puVar30 + 0x14) = uVar28;
    puVar32 = (uint64_t *)(**(code **)(*param_3 + 0x158))(param_3);
    uVar18 = puVar32[1];
    uVar19 = puVar32[2];
    uVar20 = puVar32[3];
    uVar21 = puVar32[4];
    uVar22 = puVar32[5];
    uVar23 = puVar32[6];
    uVar24 = puVar32[7];
    puVar30[3] = *puVar32;
    puVar30[4] = uVar18;
    puVar30[5] = uVar19;
    puVar30[6] = uVar20;
    puVar30[7] = uVar21;
    puVar30[8] = uVar22;
    puVar30[9] = uVar23;
    puVar30[10] = uVar24;
    *param_2 = puVar30;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803235c0(uint64_t param_1,longlong *param_2,longlong param_3)
void FUN_1803235c0(uint64_t param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  uint uVar9;
  void *puVar10;
  void *puVar11;
  int8_t auStack_e8 [32];
  longlong *plStack_c8;
  uint64_t uStack_c0;
  longlong **pplStack_b8;
  void *puStack_a8;
  char *pcStack_a0;
  uint uStack_98;
  char acStack_90 [72];
  ulonglong uStack_48;
  
  uStack_c0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x200,8,3);
  lVar6 = FUN_180339920(uVar5);
  *(int32_t *)(lVar6 + 0xb0) = *(int32_t *)(param_3 + 0x30);
  *(int32_t *)(lVar6 + 0xb4) = *(int32_t *)(param_3 + 0xe4);
  *(int32_t *)(lVar6 + 200) = *(int32_t *)(param_3 + 0x168);
  *(int32_t *)(lVar6 + 0xb8) = *(int32_t *)(param_3 + 0xe8);
  *(int32_t *)(lVar6 + 0xbc) = *(int32_t *)(param_3 + 0xec);
  *(int32_t *)(lVar6 + 0xc0) = *(int32_t *)(param_3 + 0xf0);
  *(int32_t *)(lVar6 + 0xc4) = *(int32_t *)(param_3 + 0xf4);
  *(int32_t *)(lVar6 + 0xcc) = *(int32_t *)(param_3 + 0x16c);
  uVar5 = *(uint64_t *)(param_3 + 0xdc);
  *(uint64_t *)(lVar6 + 0xd8) = *(uint64_t *)(param_3 + 0xd4);
  *(uint64_t *)(lVar6 + 0xe0) = uVar5;
  uVar2 = *(int32_t *)(param_3 + 0x15c);
  uVar3 = *(int32_t *)(param_3 + 0x160);
  uVar4 = *(int32_t *)(param_3 + 0x164);
  *(int32_t *)(lVar6 + 0xe8) = *(int32_t *)(param_3 + 0x158);
  *(int32_t *)(lVar6 + 0xec) = uVar2;
  *(int32_t *)(lVar6 + 0xf0) = uVar3;
  *(int32_t *)(lVar6 + 0xf4) = uVar4;
  lVar7 = *(longlong *)(param_3 + 0x108);
  if (lVar7 != 0) {
    if (*(longlong *)(lVar7 + 0x1b0) == 0) {
      lVar7 = lVar7 + 0x10;
    }
    else {
      lVar7 = func_0x000180079240();
    }
    uVar9 = 0;
    puStack_a8 = &unknown_var_3480_ptr;
    pcStack_a0 = acStack_90;
    acStack_90[0] = '\0';
    uStack_98 = *(uint *)(lVar7 + 0x10);
    puVar11 = &system_buffer_ptr;
    if (*(void **)(lVar7 + 8) != (void *)0x0) {
      puVar11 = *(void **)(lVar7 + 8);
    }
    strcpy_s(acStack_90,0x40,puVar11);
    if (pcStack_a0 != (char *)0x0) {
      cVar1 = *pcStack_a0;
      pcVar8 = pcStack_a0;
      for (; (cVar1 != '.' && (uVar9 < uStack_98)); uVar9 = uVar9 + 1) {
        pcVar8 = pcVar8 + 1;
        cVar1 = *pcVar8;
      }
      if (uVar9 != uStack_98) {
        pcStack_a0[(int)uVar9] = '\0';
        uStack_98 = uVar9;
      }
    }
    *(uint *)(lVar6 + 0x160) = uStack_98;
    pcVar8 = "";
    if (pcStack_a0 != (char *)0x0) {
      pcVar8 = pcStack_a0;
    }
    strcpy_s(*(uint64_t *)(lVar6 + 0x158),0x40,pcVar8);
    puStack_a8 = &unknown_var_720_ptr;
  }
  if (*(longlong *)(param_3 + 0x110) != 0) {
    puVar11 = *(void **)(*(longlong *)(param_3 + 0x110) + 0x18);
    puVar10 = &system_buffer_ptr;
    if (puVar11 != (void *)0x0) {
      puVar10 = puVar11;
    }
    (**(code **)(*(longlong *)(lVar6 + 0x1a8) + 0x10))((longlong *)(lVar6 + 0x1a8),puVar10);
    pplStack_b8 = &plStack_c8;
    plStack_c8 = *(longlong **)(param_3 + 0x110);
    if (plStack_c8 != (longlong *)0x0) {
      (**(code **)(*plStack_c8 + 0x28))();
    }
    FUN_180323b30(param_1,&plStack_c8);
  }
  *param_2 = lVar6;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180323810(uint64_t param_1,longlong *param_2,longlong param_3)
void FUN_180323810(uint64_t param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iStackX_20;
  
  lVar1 = FUN_18033a090();
  lVar6 = 0;
  *(int8_t *)(lVar1 + 0xb0) = *(int8_t *)(param_3 + 0xa9);
  lVar3 = *(longlong *)(lVar1 + 0xc0);
  lVar4 = *(longlong *)(lVar1 + 0xb8);
  uVar2 = *(longlong *)(param_3 + 0x38) - *(longlong *)(param_3 + 0x30) >> 3;
  uVar9 = lVar3 - lVar4 >> 3;
  uVar7 = uVar2 & 0xffffffff;
  if (uVar9 < uVar7) {
    uVar8 = (uVar2 & 0xffffffff) - uVar9;
    if ((ulonglong)(*(longlong *)(lVar1 + 200) - lVar3 >> 3) < uVar8) {
      if (uVar9 == 0) {
        uVar9 = 1;
      }
      else {
        uVar9 = uVar9 * 2;
      }
      if (uVar9 < uVar7) {
        uVar9 = uVar7;
      }
      lVar5 = lVar3;
      lVar3 = lVar6;
      if (uVar9 != 0) {
        lVar3 = FUN_18062b420(_DAT_180c8ed18,uVar9 * 8,*(int8_t *)(lVar1 + 0xd0));
        lVar4 = *(longlong *)(lVar1 + 0xb8);
        lVar5 = *(longlong *)(lVar1 + 0xc0);
      }
      if (lVar4 != lVar5) {
                    // WARNING: Subroutine does not return
        memmove(lVar3,lVar4,lVar5 - lVar4);
      }
      if (uVar8 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar3,0,uVar8 * 8);
      }
      if (*(longlong *)(lVar1 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(longlong *)(lVar1 + 0xb8) = lVar3;
      *(ulonglong *)(lVar1 + 200) = lVar3 + uVar9 * 8;
    }
    else if (uVar8 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar3,0,uVar8 * 8);
    }
  }
  else {
    lVar3 = lVar4 + uVar7 * 8;
  }
  *(longlong *)(lVar1 + 0xc0) = lVar3;
  iStackX_20 = (int)uVar2;
  lVar3 = lVar6;
  if (iStackX_20 != 0) {
    do {
      FUN_180323340(param_1,*(longlong *)(lVar1 + 0xb8) + lVar6,
                    *(uint64_t *)(*(longlong *)(param_3 + 0x30) + lVar3),0xffffffff);
      lVar6 = lVar6 + 8;
      uVar7 = uVar7 - 1;
      lVar3 = lVar3 + 8;
    } while (uVar7 != 0);
  }
  *param_2 = lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_1803239f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  uint64_t uVar6;
  uint auStack_40 [2];
  uint *puStack_38;
  int8_t auStack_30 [24];
  
  uVar6 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = _Mtx_lock(param_1 + 0xb78);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    uVar3 = FUN_18032b4a0(param_1);
    lVar1 = *(longlong *)(param_1 + 0xb50);
    for (puVar5 = *(uint **)(lVar1 + ((ulonglong)uVar3 % (ulonglong)*(uint *)(param_1 + 0xb58)) * 8)
        ; puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 4)) {
      if (uVar3 == *puVar5) {
        lVar4 = *(longlong *)(param_1 + 0xb58);
        goto LAB_180323a8e;
      }
    }
    lVar4 = *(longlong *)(param_1 + 0xb58);
    puVar5 = *(uint **)(lVar1 + lVar4 * 8);
LAB_180323a8e:
    if (puVar5 == *(uint **)(lVar1 + lVar4 * 8)) {
      uVar6 = FUN_18062b1e0(_DAT_180c8ed18,0x10,8,3,uVar6);
      puVar5 = (uint *)FUN_180320830(uVar6);
      *puVar5 = uVar3;
      FUN_180056f10(puVar5 + 2,param_2);
      auStack_40[0] = uVar3;
      puStack_38 = puVar5;
      FUN_18033b220(param_1 + 0xb48,auStack_30,auStack_40);
    }
    iVar2 = _Mtx_unlock(param_1 + 0xb78);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
  return uVar3;
}





