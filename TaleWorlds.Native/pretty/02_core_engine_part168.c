#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part168.c - 10 个函数

// 函数: void FUN_180151660(longlong param_1)
void FUN_180151660(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  char cVar20;
  undefined4 extraout_XMM0_Da;
  double dVar21;
  double dVar22;
  undefined1 auStack_238 [32];
  undefined8 uStack_218;
  undefined4 **ppuStack_210;
  longlong *plStack_208;
  longlong *plStack_200;
  undefined4 uStack_1f8;
  longlong *plStack_1e8;
  longlong *plStack_1e0;
  longlong lStack_1d8;
  undefined4 *puStack_1d0;
  int iStack_1c8;
  longlong *plStack_1c0;
  longlong *plStack_1b8;
  longlong *plStack_1b0;
  longlong *plStack_1a8;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  longlong lStack_170;
  undefined4 *apuStack_168 [2];
  undefined4 *apuStack_158 [2];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined1 auStack_108 [24];
  longlong lStack_f0;
  undefined1 auStack_d8 [24];
  longlong lStack_c0;
  longlong lStack_a8;
  ulonglong uStack_a0;
  undefined2 uStack_98;
  undefined1 uStack_96;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  undefined4 uStack_46;
  undefined1 uStack_42;
  ulonglong uStack_38;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  uVar6 = *(uint *)(param_1 + 0x98);
  if (0x2d < uVar6) {
LAB_180152731:
    FUN_180626f80(&UNK_180a07378);
    goto code_r0x00018015273d;
  }
  lVar11 = (ulonglong)*(uint *)(&UNK_1801527b4 + (longlong)(int)uVar6 * 4) + 0x180000000;
  switch(uVar6) {
  case 0:
    cVar20 = FUN_1801c9940(_DAT_180c8aa08);
    if (cVar20 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_180062300(_DAT_180c86928,&UNK_180a07340);
    }
    break;
  case 1:
    FUN_1800aa220(_DAT_180c86938,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8));
    break;
  case 2:
    ppuStack_210 = *(undefined4 ***)(param_1 + 0xc0);
    uStack_218 = CONCAT44(uStack_218._4_4_,*(undefined4 *)(param_1 + 0xb0));
    FUN_18029e630(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),*(undefined8 *)(param_1 + 0xa0),
                  *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x38))();
    break;
  case 3:
    plStack_1e0 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
    plStack_1e8 = *(longlong **)(param_1 + 0xc0);
    iVar7 = *(int *)(param_1 + 0xb0);
    iVar18 = *(int *)(param_1 + 0xac);
    iVar17 = *(int *)(param_1 + 0xa8);
    lVar11 = *(longlong *)(param_1 + 0xa0);
    bVar2 = *(byte *)(lVar11 + 0x335);
    uVar6 = *(uint *)(lVar11 + 0x35c);
    uVar19 = 1;
    if (1 < *(ushort *)(lVar11 + 0x32e)) {
      uVar19 = (uint)*(ushort *)(lVar11 + 0x32e);
    }
    lVar11 = FUN_18023a940();
    lStack_1d8 = *(longlong *)(lVar11 + 8);
    uVar16 = (uint)bVar2;
    if ((int)uVar6 < (int)(uint)bVar2) {
      uVar16 = uVar6;
    }
    iVar17 = uVar16 * iVar18 + iVar17;
    ppuStack_210 = &puStack_1d0;
    uStack_218 = uStack_218 & 0xffffffff00000000;
    (**(code **)(*(longlong *)plStack_1e0[0x1080] + 0x70))
              ((longlong *)plStack_1e0[0x1080],lStack_1d8,iVar17,4);
    if (iStack_1c8 == iVar7) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_1d0,plStack_1e8[2],(longlong)(int)(uVar19 * iVar7));
    }
    if (uVar19 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_1d0,plStack_1e8[2],(longlong)iVar7);
    }
    (**(code **)(*(longlong *)plStack_1e0[0x1080] + 0x78))
              ((longlong *)plStack_1e0[0x1080],lStack_1d8,iVar17);
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x38))();
    break;
  case 4:
    uStack_218 = *(ulonglong *)(param_1 + 0xc0);
    FUN_18029e6e0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),*(undefined8 *)(param_1 + 0xa0),
                  *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x38))();
    break;
  case 5:
    uStack_1f8 = *(undefined4 *)(param_1 + 0xb8);
    plStack_200 = (longlong *)CONCAT44(plStack_200._4_4_,*(undefined4 *)(param_1 + 0xb0));
    plStack_208 = (longlong *)CONCAT44(plStack_208._4_4_,*(undefined4 *)(param_1 + 0xb4));
    ppuStack_210 = *(undefined4 ***)(param_1 + 0xa8);
    uStack_218 = CONCAT44(uStack_218._4_4_,*(undefined4 *)(param_1 + 0xc4));
    FUN_18029e450(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),*(undefined8 *)(param_1 + 0xa0),
                  *(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xbc));
    break;
  case 6:
    FUN_18029e500(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),*(undefined8 *)(param_1 + 0xa0),
                  *(undefined8 *)(param_1 + 0xa8));
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x38))();
    (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x38))();
    break;
  case 7:
    ppuStack_210 = (undefined4 **)CONCAT44(ppuStack_210._4_4_,*(undefined4 *)(param_1 + 0xb8));
    uStack_218 = CONCAT44(uStack_218._4_4_,*(undefined4 *)(param_1 + 0xb4));
    FUN_18029e570(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),*(undefined8 *)(param_1 + 0xa0),
                  *(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x38))();
    (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x38))();
    break;
  case 8:
    ppuStack_210 = (undefined4 **)CONCAT71(ppuStack_210._1_7_,*(int *)(param_1 + 0xb0) != 0);
    uStack_218 = CONCAT44(uStack_218._4_4_,*(undefined4 *)(param_1 + 0xac));
    FUN_18029ea30(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),*(undefined8 *)(param_1 + 0xa0),
                  *(undefined4 *)(param_1 + 0xa8),
                  *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x10));
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x38))();
    break;
  case 9:
    FUN_18029ead0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),*(undefined8 *)(param_1 + 0xa0),
                  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x10),
                  *(undefined4 *)(param_1 + 0xb0));
    (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x38))();
    break;
  case 10:
    FUN_18029ead0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),*(undefined8 *)(param_1 + 0xa0),
                  *(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
    break;
  case 0xb:
    lVar11 = *(longlong *)(param_1 + 0xa0);
    lVar14 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(undefined4 *)(lVar11 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
    plVar5 = *(longlong **)(lVar14 + 0x8400);
    ppuStack_210 = apuStack_158;
    uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
    iVar7 = (**(code **)(*plVar5 + 0x70))(plVar5,*(undefined8 *)(lVar11 + 0x10),0,4);
    if (iVar7 < 0) {
      FUN_180220810(iVar7,&UNK_180a17358);
    }
    iVar7 = *(int *)(param_1 + 0xb8);
    if (0 < iVar7) {
      iVar18 = (int)*(undefined8 *)(param_1 + 0xb0);
      if (iVar18 < iVar7) {
        iVar7 = iVar18;
      }
                    // WARNING: Subroutine does not return
      memcpy(apuStack_158[0],**(undefined8 **)(param_1 + 0xa8),(longlong)iVar7);
    }
    plVar5 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
    pcVar4 = *(code **)(*plVar5 + 0x78);
    *(undefined4 *)(lVar11 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
    (*pcVar4)(plVar5,*(undefined8 *)(lVar11 + 0x10),0);
    break;
  case 0xc:
    lVar11 = *(longlong *)(param_1 + 0xa0);
    lVar14 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(undefined4 *)(lVar11 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
    plVar5 = *(longlong **)(lVar14 + 0x8400);
    ppuStack_210 = apuStack_168;
    lVar14 = 0;
    uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
    iVar7 = (**(code **)(*plVar5 + 0x70))(plVar5,*(undefined8 *)(lVar11 + 0x10),0,4);
    if (iVar7 < 0) {
      FUN_180220810(iVar7,&UNK_180a17358);
    }
    uVar12 = *(ulonglong *)(param_1 + 0xb8) >> 6;
    iVar7 = (int)(*(ulonglong *)(param_1 + 0xb0) >> 6);
    uVar6 = (uint)uVar12;
    while (0 < (int)uVar6) {
      puVar13 = *(undefined4 **)(lVar14 + *(longlong *)(param_1 + 0xa8));
      iVar17 = (int)uVar12;
      iVar18 = iVar17;
      if (iVar7 < iVar17) {
        iVar18 = iVar7;
      }
      iVar15 = 0;
      if (3 < iVar18) {
        uVar6 = (iVar18 - 4U >> 2) + 1;
        uVar12 = (ulonglong)uVar6;
        iVar15 = uVar6 * 4;
        do {
          *apuStack_168[0] = *puVar13;
          apuStack_168[0][1] = puVar13[1];
          apuStack_168[0][2] = puVar13[2];
          apuStack_168[0][3] = puVar13[0xc];
          apuStack_168[0][4] = puVar13[4];
          apuStack_168[0][5] = puVar13[5];
          apuStack_168[0][6] = puVar13[6];
          apuStack_168[0][7] = puVar13[0xd];
          apuStack_168[0][8] = puVar13[8];
          apuStack_168[0][9] = puVar13[9];
          apuStack_168[0][10] = puVar13[10];
          apuStack_168[0][0xb] = puVar13[0xe];
          apuStack_168[0][0xc] = puVar13[0x10];
          apuStack_168[0][0xd] = puVar13[0x11];
          apuStack_168[0][0xe] = puVar13[0x12];
          apuStack_168[0][0xf] = puVar13[0x1c];
          apuStack_168[0][0x10] = puVar13[0x14];
          apuStack_168[0][0x11] = puVar13[0x15];
          apuStack_168[0][0x12] = puVar13[0x16];
          apuStack_168[0][0x13] = puVar13[0x1d];
          apuStack_168[0][0x14] = puVar13[0x18];
          apuStack_168[0][0x15] = puVar13[0x19];
          apuStack_168[0][0x16] = puVar13[0x1a];
          apuStack_168[0][0x17] = puVar13[0x1e];
          apuStack_168[0][0x18] = puVar13[0x20];
          apuStack_168[0][0x19] = puVar13[0x21];
          apuStack_168[0][0x1a] = puVar13[0x22];
          apuStack_168[0][0x1b] = puVar13[0x2c];
          apuStack_168[0][0x1c] = puVar13[0x24];
          apuStack_168[0][0x1d] = puVar13[0x25];
          apuStack_168[0][0x1e] = puVar13[0x26];
          apuStack_168[0][0x1f] = puVar13[0x2d];
          apuStack_168[0][0x20] = puVar13[0x28];
          apuStack_168[0][0x21] = puVar13[0x29];
          apuStack_168[0][0x22] = puVar13[0x2a];
          apuStack_168[0][0x23] = puVar13[0x2e];
          apuStack_168[0][0x24] = puVar13[0x30];
          apuStack_168[0][0x25] = puVar13[0x31];
          apuStack_168[0][0x26] = puVar13[0x32];
          apuStack_168[0][0x27] = puVar13[0x3c];
          apuStack_168[0][0x28] = puVar13[0x34];
          apuStack_168[0][0x29] = puVar13[0x35];
          apuStack_168[0][0x2a] = puVar13[0x36];
          apuStack_168[0][0x2b] = puVar13[0x3d];
          apuStack_168[0][0x2c] = puVar13[0x38];
          apuStack_168[0][0x2d] = puVar13[0x39];
          apuStack_168[0][0x2e] = puVar13[0x3a];
          apuStack_168[0][0x2f] = puVar13[0x3e];
          puVar13 = puVar13 + 0x40;
          apuStack_168[0] = apuStack_168[0] + 0x30;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if (iVar15 < iVar18) {
        puVar13 = puVar13 + 2;
        uVar12 = (ulonglong)(uint)(iVar18 - iVar15);
        do {
          *apuStack_168[0] = puVar13[-2];
          apuStack_168[0][1] = puVar13[-1];
          apuStack_168[0][2] = *puVar13;
          apuStack_168[0][3] = puVar13[10];
          apuStack_168[0][4] = puVar13[2];
          apuStack_168[0][5] = puVar13[3];
          apuStack_168[0][6] = puVar13[4];
          apuStack_168[0][7] = puVar13[0xb];
          apuStack_168[0][8] = puVar13[6];
          apuStack_168[0][9] = puVar13[7];
          apuStack_168[0][10] = puVar13[8];
          apuStack_168[0][0xb] = puVar13[0xc];
          puVar13 = puVar13 + 0x10;
          apuStack_168[0] = apuStack_168[0] + 0xc;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      uVar6 = iVar17 - iVar7;
      uVar12 = (ulonglong)uVar6;
      lVar14 = lVar14 + 8;
    }
    plVar5 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
    pcVar4 = *(code **)(*plVar5 + 0x78);
    *(undefined4 *)(lVar11 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
    (*pcVar4)(plVar5,*(undefined8 *)(lVar11 + 0x10),0);
    break;
  case 0xd:
  case 0x1a:
    goto LAB_180152731;
  default:
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))();
    }
    break;
  case 0xf:
    if (*(longlong *)(param_1 + 0xa0) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    break;
  case 0x10:
    uVar10 = *(undefined8 *)(param_1 + 0xa0);
    lVar11 = VirtualQuery(uVar10,auStack_108,0x30);
    lStack_c0 = lStack_f0;
    goto code_r0x000180151fd7;
  case 0x11:
    uVar10 = *(undefined8 *)(param_1 + 0xa0);
    lVar11 = VirtualQuery(uVar10,auStack_d8,0x30);
code_r0x000180151fd7:
    lVar14 = lStack_c0;
    if (lVar11 == 0) {
      lVar14 = 0;
    }
    VirtualFree(uVar10,0,0x8000);
    LOCK();
    lRam0000000180c961a8 = lRam0000000180c961a8 - lVar14;
    UNLOCK();
    break;
  case 0x14:
    FUN_180152870(*(undefined8 *)(param_1 + 0xa0));
    break;
  case 0x15:
    ppuStack_210 = *(undefined4 ***)(param_1 + 200);
    uStack_218 = *(ulonglong *)(param_1 + 0xb8);
    FUN_18029eb90(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),*(undefined8 *)(param_1 + 0xa0),
                  *(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xa8));
    break;
  case 0x16:
    plVar5 = *(longlong **)(param_1 + 0xa0);
    plVar3 = *(longlong **)(param_1 + 0xb0);
    ppuStack_210 = (undefined4 **)
                   CONCAT44(ppuStack_210._4_4_,*(undefined4 *)((longlong)plVar5 + 0x44));
    uStack_218 = CONCAT44(uStack_218._4_4_,(int)plVar5[8]);
    plStack_208 = plVar3;
    plStack_200 = plVar5;
    FUN_1800a4010(_DAT_180c86938,*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac),
                  *(undefined4 *)((longlong)plVar5 + 0x3c));
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    (**(code **)(*plVar5 + 0x38))(plVar5);
    break;
  case 0x17:
    lStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_96 = 3;
    uStack_46 = 0;
    uStack_54 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_42 = 0;
    uStack_94 = 0;
    uStack_8c = 0;
    uStack_84 = 0;
    uStack_7c = 0;
    uStack_74 = 0;
    uStack_6c = 0;
    uStack_64 = 0;
    uStack_5c = 0;
    uVar10 = FUN_18023a940(*(undefined8 *)(_DAT_180c86938 + 0x121e0));
    FUN_1800a5fc0(_DAT_180c86938,uVar10,&lStack_a8);
    if ((((int)uStack_54 == 1) || ((int)uStack_54 - 7U < 2)) && (0 < (int)(uStack_a0 >> 2))) {
      puVar8 = (undefined1 *)(lStack_a8 + 3);
      uVar12 = uStack_a0 >> 2 & 0xffffffff;
      do {
        *puVar8 = 0xff;
        puVar8 = puVar8 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    FUN_1802a8080(*(undefined8 *)(param_1 + 0xb0),&lStack_a8,*(undefined4 *)(param_1 + 0xb8));
    FUN_18006f4c0(*(undefined8 *)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (uStack_98._1_1_ == '\0') {
      if (((char)uStack_98 == '\0') && (lStack_a8 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
    }
    break;
  case 0x18:
    FUN_18029ef00(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),*(undefined8 *)(param_1 + 0xa0));
    break;
  case 0x19:
    if (*(int *)(_DAT_180c8a9c8 + 0x3f0) == 0) {
      lVar11 = _DAT_180c86890 + 0x68;
      lStack_170 = lVar11;
      iVar7 = _Mtx_lock(lVar11);
      if (iVar7 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar7);
      }
      if (*(longlong *)(_DAT_180c86890 + 0x60) != 0) {
        while( true ) {
          pcVar4 = *(code **)(**(longlong **)(_DAT_180c86890 + 0x60) + 0x68);
          if (pcVar4 == (code *)&UNK_1800467f0) {
            cVar20 = (char)(*(longlong **)(_DAT_180c86890 + 0x60))[2] != '\0';
          }
          else {
            cVar20 = (*pcVar4)();
          }
          if (cVar20 != '\0') break;
          uVar10 = FUN_18005e890(_DAT_180c82868);
          FUN_18020ee40(uVar10);
        }
      }
      iVar7 = _Mtx_unlock(lVar11);
      if (iVar7 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar7);
      }
    }
    uVar10 = FUN_180629810();
    *(undefined8 *)(_DAT_180c86890 + 0x1528) = uVar10;
    FUN_180150ae0(*(undefined8 *)(param_1 + 0xa0));
    lVar11 = _DAT_180c86890;
    lVar14 = _DAT_180c86890;
    if (*(char *)(_DAT_180c86890 + 0x12e7) == '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8)
                   + 0x48) < iRam0000000180d49260) &&
         (FUN_1808fcb90(0x180d49260), iRam0000000180d49260 == -1)) {
        dRam0000000180d49268 = *(double *)(lVar11 + 0x1528);
        FUN_1808fcb30(0x180d49260);
      }
      lVar9 = _DAT_180c8ed58;
      if (_DAT_180c8ed58 == 0) {
        QueryPerformanceCounter(&lStack_1d8);
        lVar9 = lStack_1d8;
      }
      lVar14 = _DAT_180c86890;
      dVar21 = (double)(lVar9 - _DAT_180c8ed48) * _DAT_180c8ed50;
      dVar22 = dVar21 - *(double *)(lVar11 + 0x1528);
      *(double *)(lVar11 + 0x1530) = dVar22;
      dVar22 = dVar22 + dRam0000000180d49268;
      dRam0000000180d48d48 = dRam0000000180d48d48 + (dVar21 - dRam0000000180d48d50);
      uRam0000000180d48d44 = uRam0000000180d48d44 + 1;
      uVar12 = (ulonglong)uRam0000000180d48d44;
      dRam0000000180d48d50 = dVar21;
      dRam0000000180d49268 = dVar22;
      if (1.0 < dRam0000000180d48d48) {
        dRam0000000180d48d48 = 0.0;
        uRam0000000180d48d44 = 0;
        dRam0000000180d49268 = 0.0;
        *(double *)(lVar11 + 0x1510) = (double)(float)((double)uVar12 / dVar22);
      }
    }
    if (*(uint *)(lVar14 + 0x2ca8) == (*(uint *)(lVar14 + 0x2ca8) / 10) * 10) {
      *(int *)(lVar14 + 0x1520) = *(int *)(lVar14 + 0x1520) + 1;
      dVar21 = 1000.0 / *(double *)(lVar14 + 0x1510) + *(double *)(lVar14 + 0x1518);
      *(double *)(lVar14 + 0x1518) = dVar21;
      if (100000 < *(int *)(lVar14 + 0x1520)) {
        *(undefined4 *)(lVar14 + 0x1520) = 100;
        *(double *)(lVar14 + 0x1518) = dVar21 * 0.001;
      }
    }
    FUN_18006f4c0(*(undefined8 *)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0xa8) = 0;
    break;
  case 0x1b:
    FUN_1800a3660(_DAT_180c86938);
    break;
  case 0x1c:
    uStack_148 = *(undefined8 *)(param_1 + 0xa0);
    uStack_140 = *(undefined8 *)(param_1 + 0xa8);
    uStack_138 = *(undefined8 *)(param_1 + 0xb0);
    uStack_130 = *(undefined8 *)(param_1 + 0xb8);
    uStack_128 = *(undefined4 *)(param_1 + 0xc0);
    uStack_124 = *(undefined4 *)(param_1 + 0xc4);
    uStack_120 = *(undefined4 *)(param_1 + 200);
    uStack_11c = *(undefined4 *)(param_1 + 0xcc);
    uStack_118 = *(undefined8 *)(param_1 + 0xd0);
    FUN_1800a43c0(_DAT_180c86938,&uStack_148,*(undefined8 *)(param_1 + 0xd8));
    (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x38))();
    break;
  case 0x1d:
    uStack_198 = *(undefined4 *)(param_1 + 0xa0);
    uStack_194 = *(undefined4 *)(param_1 + 0xa4);
    uStack_190 = *(undefined4 *)(param_1 + 0xa8);
    uStack_18c = *(undefined4 *)(param_1 + 0xac);
    uStack_188 = *(undefined8 *)(param_1 + 0xb0);
    uStack_180 = *(undefined4 *)(param_1 + 0xb8);
    FUN_1800a4c50(_DAT_180c86938,&uStack_198,*(undefined8 *)(param_1 + 0xc0));
    break;
  case 0x1e:
  case 0x29:
  case 0x2a:
    break;
  case 0x1f:
    plVar5 = *(longlong **)(param_1 + 0xa0);
    uVar10 = FUN_18031a020(&plStack_1c0,plVar5[0x21],*(undefined4 *)(param_1 + 0xb0));
    FUN_180060b80(plVar5 + 0x20,uVar10);
    if (plStack_1c0 != (longlong *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    *(undefined4 *)(plVar5[0x20] + 0x3a8) = *(undefined4 *)(_DAT_180c86890 + 0x1500);
    *(undefined4 *)((longlong)plVar5 + 0x4c) = 0x14;
    (**(code **)(*plVar5 + 0x38))(plVar5);
    break;
  case 0x20:
    plVar5 = *(longlong **)(param_1 + 0xa0);
    FUN_18031a020(&plStack_1e0,plVar5[0x22],*(undefined4 *)(param_1 + 0xb0));
    plVar3 = plStack_1e0;
    plStack_1b8 = plStack_1e0;
    if (plStack_1e0 != (longlong *)0x0) {
      (**(code **)(*plStack_1e0 + 0x28))(plStack_1e0);
    }
    plStack_1b8 = (longlong *)plVar5[0x23];
    plVar5[0x23] = (longlong)plVar3;
    if (plStack_1b8 != (longlong *)0x0) {
      (**(code **)(*plStack_1b8 + 0x38))();
    }
    *(undefined4 *)((longlong)plVar5 + 0x4c) = 0xd;
    (**(code **)(*plVar5 + 0x38))(plVar5);
    if (plStack_1e0 != (longlong *)0x0) {
      (**(code **)(*plStack_1e0 + 0x38))();
    }
    break;
  case 0x21:
    plVar5 = *(longlong **)(param_1 + 0xa0);
    FUN_18031a020(&plStack_1e8,plVar5[0x24],*(undefined4 *)(param_1 + 0xb0));
    plVar3 = plStack_1e8;
    plStack_1b0 = plStack_1e8;
    if (plStack_1e8 != (longlong *)0x0) {
      (**(code **)(*plStack_1e8 + 0x28))(plStack_1e8);
    }
    plStack_1b0 = (longlong *)plVar5[0x25];
    plVar5[0x25] = (longlong)plVar3;
    if (plStack_1b0 != (longlong *)0x0) {
      (**(code **)(*plStack_1b0 + 0x38))();
    }
    *(undefined4 *)((longlong)plVar5 + 0x4c) = 7;
    plStack_1a8 = (longlong *)plVar5[0x24];
    plVar5[0x24] = 0;
    if (plStack_1a8 != (longlong *)0x0) {
      (**(code **)(*plStack_1a8 + 0x38))();
    }
    (**(code **)(*plVar5 + 0x38))(plVar5);
    if (plStack_1e8 != (longlong *)0x0) {
      (**(code **)(*plStack_1e8 + 0x38))();
    }
    break;
  case 0x22:
    FUN_18031ce00(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8));
    FUN_18031d820(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8));
    break;
  case 0x23:
    FUN_180205470(lVar11,*(undefined8 *)(param_1 + 0xa0));
    break;
  case 0x24:
    FUN_180205470(lVar11,*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x18));
    *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x18) = 0;
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa0) + 0x14);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    break;
  case 0x25:
    FUN_180206cb0(lVar11,*(undefined8 *)(param_1 + 0xa0));
    break;
  case 0x26:
    FUN_180206cb0(lVar11,*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x18));
    *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x18) = 0;
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa0) + 0x10);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    break;
  case 0x27:
    FUN_1801d7420();
    break;
  case 0x28:
    FUN_18005cfc0();
    break;
  case 0x2b:
  case 0x2c:
    if (*(longlong *)(param_1 + 0xa0) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x1d8) = 0;
    }
    break;
  case 0x2d:
    uVar10 = FUN_18023a940(*(undefined8 *)(param_1 + 0xa0));
    FUN_180225ee0(extraout_XMM0_Da,*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0),
                  uVar10);
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x38))();
  }
code_r0x00018015273d:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_238);
}





// 函数: void FUN_180152870(longlong *param_1)
void FUN_180152870(longlong *param_1)

{
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x11) == '\0') {
    if (((char)param_1[2] == '\0') && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_1);
}





// 函数: void FUN_1801528b0(longlong param_1)
void FUN_1801528b0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x68) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x68) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x48) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x48) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x28) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 8) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180152990(longlong *param_1)
void FUN_180152990(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x98) {
    FUN_1801528b0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180152a00(longlong *param_1)
void FUN_180152a00(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x98) {
    FUN_1801528b0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180152a20(undefined8 *param_1)
void FUN_180152a20(undefined8 *param_1)

{
  FUN_180152990();
  *param_1 = &UNK_180a3c3e0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180152a80(longlong *param_1)
void FUN_180152a80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    FUN_180152a20(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180152ae0(longlong *param_1)
void FUN_180152ae0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    FUN_180152a20(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180152b00(undefined8 *param_1)
void FUN_180152b00(undefined8 *param_1)

{
  FUN_180152a80();
  *param_1 = &UNK_180a3c3e0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180152b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180152b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined *puStack_50;
  undefined4 *puStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  puStack_50 = &UNK_180a3c3e0;
  uStack_38 = 0;
  puStack_48 = (undefined4 *)0x0;
  uStack_40 = 0;
  puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x12,0x13,param_4,0xfffffffffffffffe);
  *(undefined1 *)puVar2 = 0;
  puStack_48 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  *puVar2 = 0x69676e45;
  puVar2[1] = 0x4d20656e;
  puVar2[2] = 0x6c75646f;
  puVar2[3] = 0x6e692065;
  *(undefined2 *)(puVar2 + 4) = 0x69;
  uStack_40 = 0x11;
  FUN_1800ae520(param_1,&puStack_50);
  puStack_50 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



undefined8 FUN_180153890(undefined8 param_1,ulonglong param_2)

{
  FUN_1801538d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x1010);
  }
  return param_1;
}





