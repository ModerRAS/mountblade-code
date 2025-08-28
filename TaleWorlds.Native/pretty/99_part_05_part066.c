#include "TaleWorlds.Native.Split.h"

// 99_part_05_part066.c - 4 个函数

// 函数: void FUN_1803a2b10(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
void FUN_1803a2b10(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  undefined4 param_5,longlong param_6)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined *puStack_98;
  undefined1 *puStack_90;
  uint uStack_88;
  ulonglong uStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  longlong *plStack_68;
  undefined *puStack_60;
  longlong lStack_58;
  undefined4 uStack_48;
  undefined8 uStack_40;
  longlong **pplStack_38;
  longlong lVar5;
  
  uStack_40 = 0xfffffffffffffffe;
  iVar6 = 0;
  uVar8 = param_4;
  do {
    iVar9 = iVar6 + -1;
    if ((iVar6 == 0) ||
       (((*(uint *)(param_1 + 0x860 +
                   (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0x3054)
                   * 4) >> ((byte)iVar9 & 0x1f) & 1) != 0 &&
        (iVar9 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x78))))) {
      FUN_1800634b0(param_2,0x40,&UNK_180a22820,uVar8,param_5,iVar6);
      puStack_98 = &UNK_180a3c3e0;
      uStack_80 = 0;
      puStack_90 = (undefined1 *)0x0;
      uStack_88 = 0;
      FUN_1806277c0(&puStack_98,*(undefined4 *)(param_6 + 0x10));
      if (*(int *)(param_6 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_90,*(undefined8 *)(param_6 + 8),*(int *)(param_6 + 0x10) + 1);
      }
      if (*(longlong *)(param_6 + 8) != 0) {
        uStack_88 = 0;
        if (puStack_90 != (undefined1 *)0x0) {
          *puStack_90 = 0;
        }
        uStack_80 = uStack_80 & 0xffffffff;
      }
      uVar7 = uStack_88 + 1;
      FUN_1806277c0(&puStack_98,uVar7);
      *(undefined2 *)(puStack_90 + uStack_88) = 0x2f;
      uStack_88 = uVar7;
      if (param_2 != 0) {
        lVar4 = -1;
        do {
          lVar5 = lVar4;
          lVar4 = lVar5 + 1;
        } while (*(char *)(param_2 + lVar4) != '\0');
        if (0 < (int)lVar4) {
          FUN_1806277c0(&puStack_98,uVar7 + (int)lVar4);
                    // WARNING: Subroutine does not return
          memcpy(puStack_90 + uStack_88,param_2,(longlong)((int)lVar5 + 2));
        }
      }
      cVar2 = FUN_180624af0(&puStack_98);
      if (cVar2 == '\0') {
        if ((0 < *(int *)(param_6 + 0x10)) &&
           (*(char *)(*(longlong *)(param_1 + 0x10) + 0x30) != '\0')) {
          *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x30) = 0;
          FUN_180627020(&UNK_180a227d8);
        }
      }
      else if (iVar6 == 0) {
        FUN_180627910(&puStack_60,param_2);
        FUN_1800b2cd0();
        puStack_60 = &UNK_180a3c3e0;
        if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_58 = 0;
        uStack_48 = 0;
        puStack_60 = &UNK_18098bcb0;
        plStack_78 = plStack_70;
        if (plStack_70 != (longlong *)0x0) {
          (**(code **)(*plStack_70 + 0x28))();
        }
        plVar1 = plStack_78;
        pplStack_38 = &plStack_78;
        plStack_68 = plStack_78;
        if (plStack_78 != (longlong *)0x0) {
          (**(code **)(*plStack_78 + 0x28))(plStack_78);
        }
        plStack_68 = *(longlong **)(param_1 + 0x1c0);
        *(longlong **)(param_1 + 0x1c0) = plVar1;
        if (plStack_68 != (longlong *)0x0) {
          (**(code **)(*plStack_68 + 0x38))();
        }
        if (plStack_78 != (longlong *)0x0) {
          (**(code **)(*plStack_78 + 0x38))();
        }
        if (plStack_70 != (longlong *)0x0) {
          (**(code **)(*plStack_70 + 0x38))();
        }
      }
      else {
        puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined2 *)(puVar3 + 2) = 0;
        *(undefined1 *)((longlong)puVar3 + 0x12) = 3;
        *(undefined4 *)((longlong)puVar3 + 0x62) = 0;
        *(undefined8 *)((longlong)puVar3 + 0x54) = 0;
        *(undefined4 *)((longlong)puVar3 + 0x5c) = 0;
        *(undefined2 *)(puVar3 + 0xc) = 0;
        *(undefined1 *)((longlong)puVar3 + 0x66) = 0;
        *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
        *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
        *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
        *(undefined8 *)((longlong)puVar3 + 0x2c) = 0;
        *(undefined8 *)((longlong)puVar3 + 0x34) = 0;
        *(undefined8 *)((longlong)puVar3 + 0x3c) = 0;
        *(undefined8 *)((longlong)puVar3 + 0x44) = 0;
        *(undefined8 *)((longlong)puVar3 + 0x4c) = 0;
        FUN_1802a7680(&puStack_98,puVar3);
        *(undefined4 *)((longlong)puVar3 + 0x54) = 0xb;
        FUN_1803a39b0(param_1,iVar9,puVar3);
      }
      puStack_98 = &UNK_180a3c3e0;
      if (puStack_90 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_90 = (undefined1 *)0x0;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      puStack_98 = &UNK_18098bcb0;
      uVar8 = param_4 & 0xffffffff;
    }
    iVar6 = iVar6 + 1;
    if (0xf < iVar6) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1803a2e70(longlong param_1)
void FUN_1803a2e70(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  
  lVar7 = *(longlong *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x5d4) = *(undefined4 *)(lVar7 + 0x154);
  *(undefined4 *)(param_1 + 0x5d8) = *(undefined4 *)(lVar7 + 0x158);
  if ((undefined8 *)(param_1 + 0x1c8) != (undefined8 *)(lVar7 + 0x100)) {
    FUN_18017b480((undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(lVar7 + 0x100),
                  *(undefined8 *)(lVar7 + 0x108));
    lVar7 = *(longlong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(lVar7 + 0x1de8);
  *(int *)(param_1 + 0x5d0) = 1 << ((byte)*(undefined4 *)(param_1 + 0x28) & 0x1f);
  fVar11 = (float)(uint)(1 << ((byte)*(undefined4 *)(param_1 + 0x20) & 0x1f));
  *(float *)(param_1 + 0x388) = fVar11;
  fVar12 = *(float *)(lVar7 + 0x1c);
  *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_1 + 0x84c);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x850);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x854);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x858);
  *(float *)(param_1 + 0x3a0) = fVar12 / fVar11;
  *(float *)(param_1 + 0x3c8) = (float)*(int *)(param_1 + 0x848);
  if (*(longlong *)(param_1 + 0x138) != 0) {
    *(float *)(param_1 + 0x5c0) = 1.0 / (float)*(ushort *)(*(longlong *)(param_1 + 0x138) + 0x32c);
  }
  *(undefined1 *)(param_1 + 0x5e1) = *(undefined1 *)(lVar7 + 0x1c43);
  *(undefined8 *)(param_1 + 0x5e8) = *(undefined8 *)(lVar7 + 0x1c48);
  *(undefined8 *)(param_1 + 0x5f0) = *(undefined8 *)(lVar7 + 0x1c50);
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    *(float *)(param_1 + 0x5c4) = 1.0 / (float)*(ushort *)(*(longlong *)(param_1 + 0x1c0) + 0x32c);
  }
  puVar8 = (undefined8 *)0x0;
  if (0 < *(int *)(lVar7 + 0x78)) {
    pfVar10 = (float *)(param_1 + 0x580);
    plVar9 = (longlong *)(param_1 + 0x710);
    puVar4 = puVar8;
    do {
      uVar3 = (uint)puVar4;
      if (*plVar9 != 0) {
        uVar1 = *(ushort *)(*plVar9 + 0x5c);
        if (uVar1 == 0) {
          fVar12 = 0.0;
        }
        else {
          fVar12 = 1.0 / (float)uVar1;
        }
        *pfVar10 = fVar12;
        uVar6 = uVar3 & 3;
        uVar2 = uVar3;
        if ((int)uVar3 < 0) {
          uVar2 = uVar3 + 3;
          uVar6 = uVar6 - 4;
        }
        *(float *)(param_1 + ((ulonglong)uVar6 + ((longlong)((int)uVar2 >> 2) + 0x50) * 4) * 4) =
             fVar12;
      }
      lVar7 = *(longlong *)(param_1 + 0x10);
      puVar4 = (undefined8 *)(ulonglong)(uVar3 + 1);
      plVar9 = plVar9 + 1;
      pfVar10 = pfVar10 + 1;
    } while ((int)(uVar3 + 1) < *(int *)(lVar7 + 0x78));
  }
  *(undefined1 *)(param_1 + 0x5e0) = *(undefined1 *)(lVar7 + 0x1e50);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x7c);
  FUN_1800b9f60(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x80);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x88);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x90);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x98);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa8);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb0);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb8);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xc0);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 200);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xd0);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xd8);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xe0);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xe8);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xf0);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xf8);
  if (*(longlong *)(param_1 + 0x138) != 0) {
    *(float *)(param_1 + 0x380) = 1.0 / (float)*(ushort *)(*(longlong *)(param_1 + 0x138) + 0x32c);
  }
  *(float *)(param_1 + 900) = 1.0 / (float)*(ushort *)(*(longlong *)(param_1 + 0x1c0) + 0x32c);
  *(undefined8 *)(param_1 + 0x540) = *(undefined8 *)(param_1 + 0x820);
  *(undefined8 *)(param_1 + 0x548) = *(undefined8 *)(param_1 + 0x828);
  *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(param_1 + 0x830);
  *(undefined8 *)(param_1 + 0x558) = *(undefined8 *)(param_1 + 0x838);
  *(undefined8 *)(param_1 + 0x560) = *(undefined8 *)(param_1 + 0x840);
  *(undefined8 *)(param_1 + 0x568) = *(undefined8 *)(param_1 + 0x848);
  *(undefined8 *)(param_1 + 0x570) = *(undefined8 *)(param_1 + 0x850);
  *(undefined8 *)(param_1 + 0x578) = *(undefined8 *)(param_1 + 0x858);
  fVar12 = (float)(uint)(1 << ((byte)*(undefined4 *)(param_1 + 0x20) & 0x1f));
  *(float *)(param_1 + 0x388) = fVar12;
  *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_1 + 0x5c8);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_1 + 0x5cc);
  *(float *)(param_1 + 0x38c) = (float)(uint)(1 << ((byte)*(undefined4 *)(param_1 + 0x28) & 0x1f));
  lVar7 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(lVar7 + 0x1df0) != 0) {
    uVar5 = (ulonglong)
            ((*(int *)(*(longlong *)(lVar7 + 0x1df0) + 0x18) * *(int *)(param_1 + 0x18) +
             *(int *)(param_1 + 0x1c)) * 0x10);
    if (uVar5 < (ulonglong)(*(longlong *)(lVar7 + 0x1d98) - *(longlong *)(lVar7 + 0x1d90) >> 3)) {
      puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x1d90) + uVar5 * 8);
    }
    if (puVar8 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x480) = *puVar8;
      *(undefined8 *)(param_1 + 0x488) = puVar8[1];
      *(undefined8 *)(param_1 + 0x490) = puVar8[2];
      *(undefined8 *)(param_1 + 0x498) = puVar8[3];
      *(undefined8 *)(param_1 + 0x4a0) = puVar8[4];
      *(undefined8 *)(param_1 + 0x4a8) = puVar8[5];
      *(undefined8 *)(param_1 + 0x4b0) = puVar8[6];
      *(undefined8 *)(param_1 + 0x4b8) = puVar8[7];
      *(undefined8 *)(param_1 + 0x4c0) = puVar8[8];
      *(undefined8 *)(param_1 + 0x4c8) = puVar8[9];
      *(undefined8 *)(param_1 + 0x4d0) = puVar8[10];
      *(undefined8 *)(param_1 + 0x4d8) = puVar8[0xb];
      *(undefined8 *)(param_1 + 0x4e0) = puVar8[0xc];
      *(undefined8 *)(param_1 + 0x4e8) = puVar8[0xd];
      *(undefined8 *)(param_1 + 0x4f0) = puVar8[0xe];
      *(undefined8 *)(param_1 + 0x4f8) = puVar8[0xf];
    }
  }
  *(float *)(param_1 + 0x3c0) = fVar12;
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_1 + 0x5d4);
  *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_1 + 0x5d8);
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  *(undefined4 *)(param_1 + 0x3bc) = 0;
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x200,0,0x140);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a3410(longlong param_1,longlong param_2,ulonglong *param_3)
void FUN_1803a3410(longlong param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ushort *puVar5;
  longlong lVar6;
  float *pfVar7;
  int iVar8;
  undefined1 *puVar9;
  ulonglong *puVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_a08 [32];
  float fStack_9e8;
  int iStack_9d8;
  ulonglong uStack_9d0;
  undefined1 auStack_9c8 [8];
  longlong *plStack_9c0;
  ulonglong uStack_9b8;
  ulonglong uStack_9b0;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  longlong lStack_998;
  float *pfStack_990;
  longlong lStack_988;
  ulonglong *puStack_980;
  int iStack_978;
  undefined4 uStack_974;
  longlong lStack_970;
  longlong lStack_968;
  undefined8 uStack_960;
  undefined1 auStack_958 [2304];
  ulonglong uStack_58;
  
  uStack_960 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_a08;
  uVar2 = 1 << ((byte)*(undefined4 *)(param_1 + 0x28) & 0x1f);
  iVar16 = uVar2 + 1;
  fVar17 = *(float *)(*(longlong *)(param_1 + 0x10) + 0x1c) / (float)uVar2;
  lStack_998 = param_2;
  lStack_988 = param_1;
  puStack_980 = param_3;
  if (*(char *)(param_2 + 0x2910) == '\0') {
    fStack_9e8 = fVar17;
    FUN_1803a4b80(param_3,fVar17,*(undefined4 *)(param_1 + 0x28),iVar16);
    iStack_9d8 = iVar16 * iVar16;
    *(undefined4 *)((longlong)param_3 + 0x14) =
         *(undefined4 *)(*(longlong *)(param_2 + 0x60b80) + 0x154);
    *(undefined4 *)(param_3 + 3) = *(undefined4 *)(*(longlong *)(param_2 + 0x60b80) + 0x158);
    if (*(longlong *)(param_1 + 0x818) == 0) {
                    // WARNING: Subroutine does not return
      memcpy(*param_3,*(undefined8 *)(param_1 + 0x870),
             (longlong)(*(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x70)) << 2);
    }
    puVar9 = auStack_958;
    lVar11 = 0x60;
    do {
      func_0x0001800adfc0(puVar9);
      puVar9 = puVar9 + 0x18;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    FUN_1800adfe0(*(undefined8 *)(param_1 + 0x818),auStack_958);
    lStack_968 = **(longlong **)(param_1 + 0x818);
    fVar17 = *(float *)(*(longlong *)(param_2 + 0x60b80) + 0x154);
    iVar16 = *(int *)(param_1 + 0x70);
    lVar11 = (longlong)iVar16;
    fVar18 = (*(float *)(*(longlong *)(param_2 + 0x60b80) + 0x158) - fVar17) * 1.5259022e-05;
    uStack_9d0 = *param_3;
    iVar8 = 0;
    if (0 < iVar16) {
      iVar14 = 0;
      lVar15 = 0;
      lStack_970 = lVar11 * 4;
      pfStack_990 = (float *)(uStack_9d0 + 8);
      do {
        iVar13 = 0;
        if (3 < iVar16) {
          lVar6 = (longlong)(iVar8 + iVar16 * 2);
          puVar5 = (ushort *)(lStack_968 + lVar6 * 2);
          uVar2 = (iVar16 - 4U >> 2) + 1;
          uVar4 = (ulonglong)uVar2;
          iVar13 = uVar2 * 4;
          pfVar7 = pfStack_990;
          do {
            pfVar7[-2] = (float)puVar5[lVar15 - lVar6] * fVar18 + fVar17;
            pfVar7[-1] = (float)puVar5[(lVar15 - lVar6) + lVar11] * fVar18 + fVar17;
            *pfVar7 = (float)*puVar5 * fVar18 + fVar17;
            pfVar7[1] = (float)puVar5[(iVar8 + iVar16 * 3) - lVar6] * fVar18 + fVar17;
            puVar5 = puVar5 + iVar16 * 4;
            pfVar7 = pfVar7 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (iVar13 < iVar16) {
          pfVar7 = (float *)(uStack_9d0 + (longlong)(iVar14 + iVar13) * 4);
          puVar5 = (ushort *)(lStack_968 + (longlong)(iVar13 * iVar16 + iVar8) * 2);
          uVar4 = (ulonglong)(uint)(iVar16 - iVar13);
          do {
            *pfVar7 = (float)*puVar5 * fVar18 + fVar17;
            pfVar7 = pfVar7 + 1;
            puVar5 = puVar5 + lVar11;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        iVar8 = iVar8 + 1;
        lVar15 = lVar15 + 1;
        iVar14 = iVar14 + iVar16;
        pfStack_990 = pfStack_990 + lVar11;
        param_2 = lStack_998;
        param_3 = puStack_980;
        param_1 = lStack_988;
      } while (iVar8 < iVar16);
    }
    if (*(char *)(param_2 + 0x2963) != '\0') {
      fVar17 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0x3ec4);
      puVar1 = *(ulonglong **)(_DAT_180c8aa00 + 0x20);
      uStack_9a8 = 0x3f800000;
      uStack_9a4 = 0x40000000;
      uStack_99c = 3;
      uStack_9b8 = 1;
      plStack_9c0 = (longlong *)&DAT_180be0000;
      uStack_9b0 = 0;
      uStack_9a0 = 0;
      iVar16 = 0;
      lVar11 = (longlong)iStack_9d8;
      lStack_998 = lVar11;
      if (0 < iStack_9d8) {
        lVar15 = 0;
        do {
          pfVar7 = (float *)(*param_3 + lVar15 * 4);
          puVar10 = puVar1;
          if (fVar17 < *pfVar7 || fVar17 == *pfVar7) {
            puVar10 = *(ulonglong **)(*(longlong *)(param_1 + 0x878) + lVar15 * 8);
          }
          for (puVar3 = (undefined8 *)plStack_9c0[(ulonglong)puVar10 % (uStack_9b8 & 0xffffffff)];
              puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)puVar3[2]) {
            if (puVar10 == (ulonglong *)*puVar3) goto LAB_1803a37f8;
          }
          puVar3 = (undefined8 *)plStack_9c0[uStack_9b8];
LAB_1803a37f8:
          if (puVar3 == (undefined8 *)plStack_9c0[uStack_9b8]) {
            uVar4 = (ulonglong)puVar10 % (uStack_9b8 & 0xffffffff);
            for (puVar3 = (undefined8 *)plStack_9c0[uVar4]; puStack_980 = puVar10,
                iStack_978 = iVar16, puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)puVar3[2])
            {
              if (puVar10 == (ulonglong *)*puVar3) goto LAB_1803a38be;
            }
            puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x18,(undefined1)uStack_99c);
            *puVar3 = puStack_980;
            puVar3[1] = CONCAT44(uStack_974,iStack_978);
            puVar3[2] = 0;
            fStack_9e8 = 1.4013e-45;
            FUN_18066c220(&uStack_9a8,&uStack_9d0,uStack_9b8 & 0xffffffff,uStack_9b0 & 0xffffffff);
            if ((char)uStack_9d0 != '\0') {
              uVar4 = (ulonglong)puVar10 % (uStack_9d0 >> 0x20);
              FUN_18033db70(auStack_9c8);
            }
            puVar3[2] = plStack_9c0[uVar4];
            plStack_9c0[uVar4] = (longlong)puVar3;
            uStack_9b0 = uStack_9b0 + 1;
            lVar11 = lStack_998;
LAB_1803a38be:
            *(char *)(lVar15 + param_3[4]) = (char)iVar16;
            iVar16 = iVar16 + 1;
            param_1 = lStack_988;
          }
          else {
            *(undefined1 *)(lVar15 + param_3[4]) = *(undefined1 *)(puVar3 + 1);
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 < lVar11);
      }
      param_3[8] = param_3[7];
      FUN_180057340(param_3 + 7,(longlong)iVar16);
      puVar3 = (undefined8 *)*plStack_9c0;
      plVar12 = plStack_9c0;
      if (puVar3 == (undefined8 *)0x0) {
        plVar12 = plStack_9c0 + 1;
        lVar11 = *plVar12;
        while (lVar11 == 0) {
          plVar12 = plVar12 + 1;
          lVar11 = *plVar12;
        }
        puVar3 = (undefined8 *)*plVar12;
      }
      if (puVar3 != (undefined8 *)plStack_9c0[uStack_9b8]) {
        do {
          *(undefined8 *)(param_3[7] + (longlong)*(int *)(puVar3 + 1) * 8) = *puVar3;
          puVar3 = (undefined8 *)puVar3[2];
          while (puVar3 == (undefined8 *)0x0) {
            plVar12 = plVar12 + 1;
            puVar3 = (undefined8 *)*plVar12;
          }
        } while (puVar3 != (undefined8 *)plStack_9c0[uStack_9b8]);
      }
      FUN_18015b4f0(auStack_9c8);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_a08);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a39b0(longlong param_1,int param_2,longlong param_3)
void FUN_1803a39b0(longlong param_1,int param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2;
  *(longlong *)(param_1 + 0x710 + lVar2 * 8) = param_3;
  if (param_3 != 0) {
    puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x12) = 3;
    *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x66) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined8 **)(param_1 + 0x790 + lVar2 * 8) = puVar1;
    *(undefined2 *)(puVar1 + 0xc) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 0x80008;
    *(undefined4 *)((longlong)puVar1 + 0x62) = 0x1020001;
    *(undefined4 *)((longlong)puVar1 + 0x54) = 0xb;
    FUN_1802a1bc0(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 0x790 + lVar2 * 8);
    if (puVar1 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      memset(*puVar1,0,
             (longlong)
             (int)((uint)*(ushort *)((longlong)puVar1 + 0x5e) *
                  (uint)*(ushort *)((longlong)puVar1 + 0x5c)));
    }
  }
  return;
}






