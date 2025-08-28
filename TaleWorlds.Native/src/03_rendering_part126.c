#include "TaleWorlds.Native.Split.h"

// 03_rendering_part126.c - 2 个函数

// 函数: void FUN_180341be0(void)
void FUN_180341be0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_138 [32];
  undefined *puStack_118;
  undefined *puStack_110;
  uint uStack_108;
  ulonglong uStack_100;
  undefined4 uStack_f8;
  undefined *puStack_f0;
  undefined1 *puStack_e8;
  uint uStack_e0;
  ulonglong uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  int iStack_a0;
  undefined auStack_98 [16];
  char acStack_88 [16];
  char acStack_78 [16];
  char acStack_68 [16];
  char acStack_58 [16];
  char acStack_48 [16];
  ulonglong uStack_38;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  iVar14 = 0;
  uStack_f8 = 0;
  puStack_118 = &UNK_180a3c3e0;
  uStack_100 = 0;
  puStack_110 = (undefined *)0x0;
  uStack_108 = 0;
  FUN_1806277c0(&puStack_118,3);
  *(undefined4 *)(puStack_110 + uStack_108) = 0xa2f2f;
  uStack_108 = 3;
  FUN_1806277c0(&puStack_118,0x57);
  puVar2 = (undefined8 *)(puStack_110 + uStack_108);
  *puVar2 = 0x2073696854202f2f;
  puVar2[1] = 0x20736920656c6966;
  puVar2[2] = 0x6e6567206f747561;
  puVar2[3] = 0x202e646574617265;
  puVar2[4] = 0x65746172656e6547;
  puVar2[5] = 0x6874697720746920;
  *(undefined4 *)(puVar2 + 6) = 0x73657220;
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0x6372756f;
  *(undefined4 *)(puVar2 + 7) = 0x732e7365;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x65646168;
  *(undefined4 *)(puVar2 + 8) = 0x65672e72;
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0x6172656e;
  *(undefined4 *)(puVar2 + 9) = 0x735f6574;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = 0x65646168;
  *(undefined4 *)(puVar2 + 10) = 0xa207372;
  *(undefined1 *)((longlong)puVar2 + 0x54) = 0;
  uStack_108 = 0x57;
  FUN_1806277c0(&puStack_118,0x5b);
  *(undefined4 *)(puStack_110 + uStack_108) = 0xa0a2f2f;
  *(undefined1 *)((longlong)(puStack_110 + uStack_108) + 4) = 0;
  uVar5 = 0xbc;
  uStack_108 = 0x5b;
  FUN_1806277c0(&puStack_118,0xbc);
  puVar2 = (undefined8 *)(puStack_110 + uStack_108);
  *puVar2 = 0x206665646e666923;
  puVar2[1] = 0x4954494e49464544;
  puVar2[2] = 0x444148535f534e4f;
  puVar2[3] = 0x554f5345525f5245;
  puVar2[4] = 0x49444e495f454352;
  puVar2[5] = 0xa4853525f534543;
  puVar2[6] = 0x20656e6966656423;
  puVar2[7] = 0x4954494e49464544;
  *(undefined4 *)(puVar2 + 8) = 0x5f534e4f;
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0x44414853;
  *(undefined4 *)(puVar2 + 9) = 0x525f5245;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = 0x554f5345;
  puVar2[10] = 0x49444e495f454352;
  puVar2[0xb] = 0xa4853525f534543;
  *(undefined2 *)(puVar2 + 0xc) = 10;
  plVar12 = (longlong *)&UNK_1809939e0;
  lVar11 = -1;
  iVar13 = iVar14;
  do {
    uVar7 = uVar5 + 0xb;
    uStack_108 = uVar5;
    FUN_1806277c0(&puStack_118,uVar7);
    *(undefined8 *)(puStack_110 + uStack_108) = 0x20656e6966656423;
    *(undefined4 *)((longlong)(puStack_110 + uStack_108) + 8) = 0x5f6c69;
    lVar1 = *plVar12;
    lVar9 = lVar11;
    uStack_108 = uVar7;
    if (lVar1 != 0) {
      do {
        lVar10 = lVar9;
        lVar9 = lVar10 + 1;
      } while (*(char *)(lVar1 + lVar9) != '\0');
      if (0 < (int)lVar9) {
        FUN_1806277c0(&puStack_118,uVar7 + (int)lVar9);
                    // WARNING: Subroutine does not return
        memcpy(puStack_110 + uStack_108,lVar1,(longlong)((int)lVar10 + 2));
      }
    }
    FUN_1806277c0(&puStack_118,uVar5 + 0xc);
    *(undefined2 *)(puStack_110 + uStack_108) = 0x20;
    uStack_108 = uVar5 + 0xc;
    FUN_180060680(acStack_88,&UNK_1809fd0a0,iVar13);
    uVar7 = uStack_108;
    lVar1 = lVar11;
    do {
      lVar9 = lVar1;
      lVar1 = lVar9 + 1;
    } while (acStack_88[lVar9 + 1] != '\0');
    iVar6 = (int)(lVar9 + 1);
    if (0 < iVar6) {
      FUN_1806277c0(&puStack_118,uStack_108 + iVar6);
                    // WARNING: Subroutine does not return
      memcpy(puStack_110 + uStack_108,acStack_88,(longlong)((int)lVar9 + 2));
    }
    uVar5 = uStack_108 + 1;
    FUN_1806277c0(&puStack_118,uVar5);
    *(undefined2 *)(puStack_110 + uStack_108) = 10;
    iVar13 = iVar13 + 1;
    plVar12 = plVar12 + 1;
  } while (iVar13 < 0x10);
  uVar7 = uVar7 + 2;
  uStack_108 = uVar5;
  FUN_1806277c0(&puStack_118,uVar7);
  *(undefined2 *)(puStack_110 + uStack_108) = 10;
  plVar12 = (longlong *)&UNK_180993980;
  iVar13 = iVar14;
  do {
    uVar5 = uVar7 + 10;
    uStack_108 = uVar7;
    FUN_1806277c0(&puStack_118,uVar5);
    puVar2 = (undefined8 *)(puStack_110 + uStack_108);
    *puVar2 = 0x20656e6966656423;
    *(undefined2 *)(puVar2 + 1) = 0x5f73;
    *(undefined1 *)((longlong)puVar2 + 10) = 0;
    lVar1 = *plVar12;
    lVar9 = lVar11;
    uStack_108 = uVar5;
    if (lVar1 != 0) {
      do {
        lVar10 = lVar9;
        lVar9 = lVar10 + 1;
      } while (*(char *)(lVar1 + lVar9) != '\0');
      if (0 < (int)lVar9) {
        FUN_1806277c0(&puStack_118,uVar5 + (int)lVar9);
                    // WARNING: Subroutine does not return
        memcpy(puStack_110 + uStack_108,lVar1,(longlong)((int)lVar10 + 2));
      }
    }
    FUN_1806277c0(&puStack_118,uVar7 + 0xc);
    *(undefined2 *)(puStack_110 + uStack_108) = 0x7320;
    *(undefined1 *)((longlong)(puStack_110 + uStack_108) + 2) = 0;
    uStack_108 = uVar7 + 0xc;
    FUN_180060680(acStack_78,&UNK_1809fd0a0,iVar13);
    uVar5 = uStack_108;
    lVar1 = lVar11;
    do {
      lVar9 = lVar1;
      lVar1 = lVar9 + 1;
    } while (acStack_78[lVar9 + 1] != '\0');
    iVar6 = (int)(lVar9 + 1);
    if (0 < iVar6) {
      FUN_1806277c0(&puStack_118,uStack_108 + iVar6);
                    // WARNING: Subroutine does not return
      memcpy(puStack_110 + uStack_108,acStack_78,(longlong)((int)lVar9 + 2));
    }
    uVar7 = uStack_108 + 1;
    FUN_1806277c0(&puStack_118,uVar7);
    *(undefined2 *)(puStack_110 + uStack_108) = 10;
    iVar13 = iVar13 + 1;
    plVar12 = plVar12 + 1;
  } while (iVar13 < 9);
  uVar8 = uVar5 + 2;
  uStack_108 = uVar7;
  FUN_1806277c0(&puStack_118,uVar8);
  *(undefined2 *)(puStack_110 + uStack_108) = 10;
  uVar5 = uVar5 + 0x32;
  uStack_108 = uVar8;
  FUN_1806277c0(&puStack_118,uVar5);
  puVar2 = (undefined8 *)(puStack_110 + uStack_108);
  *puVar2 = 0x6966656420666923;
  puVar2[1] = 0x5f4553552864656e;
  puVar2[2] = 0x3158544345524944;
  puVar2[3] = 0x6564207c7c202931;
  *(undefined4 *)(puVar2 + 4) = 0x656e6966;
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0x53552864;
  *(undefined4 *)(puVar2 + 5) = 0x4e475f45;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xa0a294d;
  *(undefined1 *)(puVar2 + 6) = 0;
  plVar12 = (longlong *)&UNK_180993690;
  iVar13 = iVar14;
  do {
    uVar7 = uVar5 + 10;
    uStack_108 = uVar5;
    FUN_1806277c0(&puStack_118,uVar7);
    puVar2 = (undefined8 *)(puStack_110 + uStack_108);
    *puVar2 = 0x20656e6966656423;
    *(undefined2 *)(puVar2 + 1) = 0x5f74;
    *(undefined1 *)((longlong)puVar2 + 10) = 0;
    lVar1 = *plVar12;
    lVar9 = lVar11;
    uStack_108 = uVar7;
    if (lVar1 != 0) {
      do {
        lVar10 = lVar9;
        lVar9 = lVar10 + 1;
      } while (*(char *)(lVar1 + lVar9) != '\0');
      if (0 < (int)lVar9) {
        FUN_1806277c0(&puStack_118,uVar7 + (int)lVar9);
                    // WARNING: Subroutine does not return
        memcpy(puStack_110 + uStack_108,lVar1,(longlong)((int)lVar10 + 2));
      }
    }
    FUN_1806277c0(&puStack_118,uVar5 + 0xc);
    *(undefined2 *)(puStack_110 + uStack_108) = 0x7420;
    *(undefined1 *)((longlong)(puStack_110 + uStack_108) + 2) = 0;
    uStack_108 = uVar5 + 0xc;
    FUN_180060680(acStack_68,&UNK_1809fd0a0,iVar13);
    uVar7 = uStack_108;
    lVar1 = lVar11;
    do {
      lVar9 = lVar1;
      lVar1 = lVar9 + 1;
    } while (acStack_68[lVar9 + 1] != '\0');
    iVar6 = (int)(lVar9 + 1);
    if (0 < iVar6) {
      FUN_1806277c0(&puStack_118,uStack_108 + iVar6);
                    // WARNING: Subroutine does not return
      memcpy(puStack_110 + uStack_108,acStack_68,(longlong)((int)lVar9 + 2));
    }
    uVar5 = uStack_108 + 1;
    FUN_1806277c0(&puStack_118,uVar5);
    *(undefined2 *)(puStack_110 + uStack_108) = 10;
    iVar13 = iVar13 + 1;
    plVar12 = plVar12 + 1;
  } while (iVar13 < 0x5d);
  uVar7 = uVar7 + 2;
  uStack_108 = uVar5;
  FUN_1806277c0(&puStack_118,uVar7);
  *(undefined2 *)(puStack_110 + uStack_108) = 10;
  plVar12 = (longlong *)&UNK_180993650;
  iVar13 = iVar14;
  do {
    uVar5 = uVar7 + 10;
    uStack_108 = uVar7;
    FUN_1806277c0(&puStack_118,uVar5);
    puVar2 = (undefined8 *)(puStack_110 + uStack_108);
    *puVar2 = 0x20656e6966656423;
    *(undefined2 *)(puVar2 + 1) = 0x5f75;
    *(undefined1 *)((longlong)puVar2 + 10) = 0;
    lVar1 = *plVar12;
    lVar9 = lVar11;
    uStack_108 = uVar5;
    if (lVar1 != 0) {
      do {
        lVar10 = lVar9;
        lVar9 = lVar10 + 1;
      } while (*(char *)(lVar1 + lVar9) != '\0');
      if (0 < (int)lVar9) {
        FUN_1806277c0(&puStack_118,uVar5 + (int)lVar9);
                    // WARNING: Subroutine does not return
        memcpy(puStack_110 + uStack_108,lVar1,(longlong)((int)lVar10 + 2));
      }
    }
    FUN_1806277c0(&puStack_118,uVar7 + 0xc);
    *(undefined2 *)(puStack_110 + uStack_108) = 0x7520;
    *(undefined1 *)((longlong)(puStack_110 + uStack_108) + 2) = 0;
    uStack_108 = uVar7 + 0xc;
    FUN_180060680(acStack_58,&UNK_1809fd0a0,iVar13);
    uVar5 = uStack_108;
    lVar1 = lVar11;
    do {
      lVar9 = lVar1;
      lVar1 = lVar9 + 1;
    } while (acStack_58[lVar9 + 1] != '\0');
    iVar6 = (int)(lVar9 + 1);
    if (0 < iVar6) {
      FUN_1806277c0(&puStack_118,uStack_108 + iVar6);
                    // WARNING: Subroutine does not return
      memcpy(puStack_110 + uStack_108,acStack_58,(longlong)((int)lVar9 + 2));
    }
    uVar7 = uStack_108 + 1;
    FUN_1806277c0(&puStack_118,uVar7);
    *(undefined2 *)(puStack_110 + uStack_108) = 10;
    iVar13 = iVar13 + 1;
    plVar12 = plVar12 + 1;
  } while (iVar13 < 7);
  uVar8 = uVar5 + 2;
  uStack_108 = uVar7;
  FUN_1806277c0(&puStack_118,uVar8);
  *(undefined2 *)(puStack_110 + uStack_108) = 10;
  uVar5 = uVar5 + 10;
  uStack_108 = uVar8;
  FUN_1806277c0(&puStack_118,uVar5);
  *(undefined8 *)(puStack_110 + uStack_108) = 0xa0a6669646e6523;
  *(undefined1 *)((longlong)(puStack_110 + uStack_108) + 8) = 0;
  plVar12 = (longlong *)&UNK_1809935e0;
  do {
    uVar7 = uVar5 + 10;
    uStack_108 = uVar5;
    FUN_1806277c0(&puStack_118,uVar7);
    puVar2 = (undefined8 *)(puStack_110 + uStack_108);
    *puVar2 = 0x20656e6966656423;
    *(undefined2 *)(puVar2 + 1) = 0x5f62;
    *(undefined1 *)((longlong)puVar2 + 10) = 0;
    lVar1 = *plVar12;
    lVar9 = lVar11;
    uStack_108 = uVar7;
    if (lVar1 != 0) {
      do {
        lVar10 = lVar9;
        lVar9 = lVar10 + 1;
      } while (*(char *)(lVar1 + lVar9) != '\0');
      if (0 < (int)lVar9) {
        FUN_1806277c0(&puStack_118,uVar7 + (int)lVar9);
                    // WARNING: Subroutine does not return
        memcpy(puStack_110 + uStack_108,lVar1,(longlong)((int)lVar10 + 2));
      }
    }
    FUN_1806277c0(&puStack_118,uVar5 + 0xc);
    *(undefined2 *)(puStack_110 + uStack_108) = 0x6220;
    *(undefined1 *)((longlong)(puStack_110 + uStack_108) + 2) = 0;
    uStack_108 = uVar5 + 0xc;
    FUN_180060680(acStack_48,&UNK_1809fd0a0,iVar14);
    uVar7 = uStack_108;
    lVar1 = lVar11;
    do {
      lVar9 = lVar1;
      lVar1 = lVar9 + 1;
    } while (acStack_48[lVar9 + 1] != '\0');
    iVar13 = (int)(lVar9 + 1);
    if (0 < iVar13) {
      FUN_1806277c0(&puStack_118,uStack_108 + iVar13);
                    // WARNING: Subroutine does not return
      memcpy(puStack_110 + uStack_108,acStack_48,(longlong)((int)lVar9 + 2));
    }
    uVar5 = uStack_108 + 1;
    FUN_1806277c0(&puStack_118,uVar5);
    *(undefined2 *)(puStack_110 + uStack_108) = 10;
    iVar14 = iVar14 + 1;
    plVar12 = plVar12 + 1;
  } while (iVar14 < 0xe);
  uStack_108 = uVar5;
  FUN_1806277c0(&puStack_118,uVar7 + 0x34);
  puVar2 = (undefined8 *)(puStack_110 + uStack_108);
  *puVar2 = 0x206669646e65230a;
  puVar2[1] = 0x4e49464544202f2f;
  *(undefined4 *)(puVar2 + 2) = 0x4f495449;
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0x535f534e;
  *(undefined4 *)(puVar2 + 3) = 0x45444148;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x45525f52;
  *(undefined4 *)(puVar2 + 4) = 0x52554f53;
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0x495f4543;
  *(undefined4 *)(puVar2 + 5) = 0x4349444e;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x525f5345;
  *(undefined4 *)(puVar2 + 6) = 0xa4853;
  puStack_b0 = &UNK_1809fdc18;
  puStack_a8 = auStack_98;
  auStack_98[0] = 0;
  iStack_a0 = 6;
  uStack_108 = uVar7 + 0x34;
  strcpy_s(auStack_98,0x10,&UNK_180a3c07c);
  uStack_f8 = 1;
  puStack_f0 = &UNK_180a3c3e0;
  uStack_d8 = 0;
  puStack_e8 = (undefined1 *)0x0;
  uStack_e0 = 0;
  FUN_1806277c0(&puStack_f0,iStack_a0);
  if (0 < iStack_a0) {
    puVar3 = &DAT_18098bc73;
    if (puStack_a8 != (undefined *)0x0) {
      puVar3 = puStack_a8;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_e8,puVar3,(longlong)(iStack_a0 + 1));
  }
  if ((puStack_a8 != (undefined *)0x0) && (uStack_e0 = 0, puStack_e8 != (undefined1 *)0x0)) {
    *puStack_e8 = 0;
  }
  uStack_f8 = 0;
  puStack_b0 = &UNK_18098bcb0;
  iVar13 = uStack_e0 + 0x37;
  FUN_1806277c0(&puStack_f0,iVar13);
  puVar2 = (undefined8 *)(puStack_e8 + uStack_e0);
  *puVar2 = 0x2f73726564616853;
  puVar2[1] = 0x2f73656372756f53;
  puVar2[2] = 0x6974696e69666564;
  puVar2[3] = 0x646168735f736e6f;
  *(undefined4 *)(puVar2 + 4) = 0x725f7265;
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0x756f7365;
  *(undefined4 *)(puVar2 + 5) = 0x5f656372;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x69646e69;
  puVar2[6] = 0x6873722e736563;
  uStack_d0 = 0;
  lStack_c8 = 0;
  puVar4 = &DAT_18098bc73;
  if (puStack_e8 != (undefined1 *)0x0) {
    puVar4 = puStack_e8;
  }
  uStack_e0 = iVar13;
  FUN_18062dee0(&uStack_d0,puVar4,&DAT_1809fc7ec);
  lVar11 = lStack_c8;
  puVar3 = &DAT_18098bc73;
  if (puStack_110 != (undefined *)0x0) {
    puVar3 = puStack_110;
  }
  fwrite(puVar3,(longlong)(int)uStack_108,1,lStack_c8);
  if (lVar11 != 0) {
    fclose(lVar11);
    lStack_c8 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
    lVar11 = 0;
  }
  if (lVar11 != 0) {
    fclose(lVar11);
    lStack_c8 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  puStack_f0 = &UNK_180a3c3e0;
  if (puStack_e8 == (undefined1 *)0x0) {
    puStack_e8 = (undefined1 *)0x0;
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
    puStack_f0 = &UNK_18098bcb0;
    puStack_118 = &UNK_180a3c3e0;
    if (puStack_110 == (undefined *)0x0) {
      puStack_110 = (undefined *)0x0;
      uStack_100 = uStack_100 & 0xffffffff00000000;
      puStack_118 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_138);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803427a0(void)
void FUN_1803427a0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 auStack_f8 [32];
  undefined *puStack_d8;
  undefined *puStack_d0;
  uint uStack_c8;
  ulonglong uStack_c0;
  undefined4 uStack_b8;
  undefined *puStack_b0;
  undefined1 *puStack_a8;
  uint uStack_a0;
  ulonglong uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  int iStack_60;
  undefined auStack_58 [16];
  char acStack_48 [16];
  ulonglong uStack_38;
  
  uStack_78 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  iVar12 = 0;
  uStack_b8 = 0;
  puStack_d8 = &UNK_180a3c3e0;
  uStack_c0 = 0;
  puStack_d0 = (undefined *)0x0;
  uStack_c8 = 0;
  FUN_1806277c0(&puStack_d8,0x53);
  puVar2 = (undefined8 *)(puStack_d0 + uStack_c8);
  *puVar2 = 0x206665646e666923;
  puVar2[1] = 0x525f524544414853;
  puVar2[2] = 0x5f454352554f5345;
  puVar2[3] = 0x5f53454349444e49;
  puVar2[4] = 0x485f544355525453;
  puVar2[5] = 0x656e69666564230a;
  *(undefined4 *)(puVar2 + 6) = 0x41485320;
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0x5f524544;
  *(undefined4 *)(puVar2 + 7) = 0x4f534552;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x45435255;
  *(undefined4 *)(puVar2 + 8) = 0x444e495f;
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0x53454349;
  *(undefined4 *)(puVar2 + 9) = 0x5254535f;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = 0x5f544355;
  *(undefined4 *)(puVar2 + 10) = 0xa0a48;
  uStack_c8 = 0x53;
  FUN_1806277c0(&puStack_d8,0x66);
  puVar3 = (undefined4 *)(puStack_d0 + uStack_c8);
  *puVar3 = 0x64666923;
  puVar3[1] = 0x5f206665;
  puVar3[2] = 0x6c70635f;
  puVar3[3] = 0x6c707375;
  puVar3[4] = 0xa7375;
  uStack_c8 = 0x66;
  FUN_1806277c0(&puStack_d8,0x86);
  puVar3 = (undefined4 *)(puStack_d0 + uStack_c8);
  *puVar3 = 0x6f696e75;
  puVar3[1] = 0x6873206e;
  puVar3[2] = 0x72656461;
  puVar3[3] = 0x7365725f;
  puVar3[4] = 0x6372756f;
  puVar3[5] = 0x6e695f65;
  puVar3[6] = 0x65636964;
  puVar3[7] = 0xa7b0a73;
  *(undefined1 *)(puVar3 + 8) = 0;
  uStack_c8 = 0x86;
  FUN_1806277c0(&puStack_d8,0x8d);
  *(undefined8 *)(puStack_d0 + uStack_c8) = 0xa6669646e6523;
  uVar6 = 0xa9;
  uStack_c8 = 0x8d;
  FUN_1806277c0(&puStack_d8,0xa9);
  puVar3 = (undefined4 *)(puStack_d0 + uStack_c8);
  *puVar3 = 0x72747309;
  puVar3[1] = 0x20746375;
  puVar3[2] = 0x6f736572;
  puVar3[3] = 0x65637275;
  *(undefined8 *)(puVar3 + 4) = 0x73656369646e695f;
  puVar3[6] = 0xa7b090a;
  *(undefined1 *)(puVar3 + 7) = 0;
  plVar13 = (longlong *)&UNK_180993690;
  lVar11 = -1;
  do {
    uVar7 = uVar6 + 9;
    uStack_c8 = uVar6;
    FUN_1806277c0(&puStack_d8,uVar7);
    *(undefined8 *)(puStack_d0 + uStack_c8) = 0x7420746e69750909;
    *(undefined2 *)((longlong)(puStack_d0 + uStack_c8) + 8) = 0x5f;
    lVar1 = *plVar13;
    lVar9 = lVar11;
    uStack_c8 = uVar7;
    if (lVar1 != 0) {
      do {
        lVar10 = lVar9;
        lVar9 = lVar10 + 1;
      } while (*(char *)(lVar1 + lVar9) != '\0');
      if (0 < (int)lVar9) {
        FUN_1806277c0(&puStack_d8,uVar7 + (int)lVar9);
                    // WARNING: Subroutine does not return
        memcpy(puStack_d0 + uStack_c8,lVar1,(longlong)((int)lVar10 + 2));
      }
    }
    uVar7 = uVar6 + 10;
    FUN_1806277c0(&puStack_d8,uVar7);
    *(undefined2 *)(puStack_d0 + uStack_c8) = 0x3b;
    uVar6 = uVar6 + 0xb;
    uStack_c8 = uVar7;
    FUN_1806277c0(&puStack_d8,uVar6);
    *(undefined2 *)(puStack_d0 + uStack_c8) = 10;
    plVar13 = plVar13 + 1;
  } while ((longlong)plVar13 < 0x180993978);
  do {
    uStack_c8 = uVar6;
    FUN_1806277c0(&puStack_d8,uVar6 + 0x11);
    puVar3 = (undefined4 *)(puStack_d0 + uStack_c8);
    *puVar3 = 0x69750909;
    puVar3[1] = 0x7420746e;
    puVar3[2] = 0x7265745f;
    puVar3[3] = 0x6e696172;
    *(undefined2 *)(puVar3 + 4) = 0x5f;
    uStack_c8 = uVar6 + 0x11;
    FUN_180060680(acStack_48,&UNK_1809fd0a0,iVar12);
    uVar6 = uStack_c8;
    lVar1 = lVar11;
    do {
      lVar9 = lVar1;
      lVar1 = lVar9 + 1;
    } while (acStack_48[lVar9 + 1] != '\0');
    iVar8 = (int)(lVar9 + 1);
    if (0 < iVar8) {
      FUN_1806277c0(&puStack_d8,uStack_c8 + iVar8);
                    // WARNING: Subroutine does not return
      memcpy(puStack_d0 + uStack_c8,acStack_48,(longlong)((int)lVar9 + 2));
    }
    uVar7 = uStack_c8 + 1;
    FUN_1806277c0(&puStack_d8,uVar7);
    *(undefined2 *)(puStack_d0 + uStack_c8) = 0x3b;
    uVar6 = uVar6 + 2;
    uStack_c8 = uVar7;
    FUN_1806277c0(&puStack_d8,uVar6);
    *(undefined2 *)(puStack_d0 + uStack_c8) = 10;
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0x23);
  plVar13 = (longlong *)&UNK_180993650;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 9;
    uStack_c8 = uVar7;
    FUN_1806277c0(&puStack_d8,uVar6);
    *(undefined8 *)(puStack_d0 + uStack_c8) = 0x7520746e69750909;
    *(undefined2 *)((longlong)(puStack_d0 + uStack_c8) + 8) = 0x5f;
    lVar1 = *plVar13;
    lVar9 = lVar11;
    uStack_c8 = uVar6;
    if (lVar1 != 0) {
      do {
        lVar10 = lVar9;
        lVar9 = lVar10 + 1;
      } while (*(char *)(lVar1 + lVar9) != '\0');
      if (0 < (int)lVar9) {
        FUN_1806277c0(&puStack_d8,uVar6 + (int)lVar9);
                    // WARNING: Subroutine does not return
        memcpy(puStack_d0 + uStack_c8,lVar1,(longlong)((int)lVar10 + 2));
      }
    }
    FUN_1806277c0(&puStack_d8,uVar7 + 10);
    *(undefined2 *)(puStack_d0 + uStack_c8) = 0x3b;
    uVar6 = uVar7 + 0xb;
    uStack_c8 = uVar7 + 10;
    FUN_1806277c0(&puStack_d8,uVar6);
    *(undefined2 *)(puStack_d0 + uStack_c8) = 10;
    plVar13 = plVar13 + 1;
  } while ((longlong)plVar13 < 0x180993688);
  uStack_c8 = uVar6;
  FUN_1806277c0(&puStack_d8,uVar7 + 0xf);
  *(undefined4 *)(puStack_d0 + uStack_c8) = 0xa3b7d09;
  *(undefined1 *)((longlong)(puStack_d0 + uStack_c8) + 4) = 0;
  uStack_c8 = uVar7 + 0xf;
  FUN_1806277c0(&puStack_d8,uVar7 + 0x22);
  puVar3 = (undefined4 *)(puStack_d0 + uStack_c8);
  *puVar3 = 0x64666923;
  puVar3[1] = 0x5f206665;
  puVar3[2] = 0x6c70635f;
  puVar3[3] = 0x6c707375;
  puVar3[4] = 0xa7375;
  uStack_c8 = uVar7 + 0x22;
  FUN_1806277c0(&puStack_d8,uVar7 + 0x8d);
  puVar2 = (undefined8 *)(puStack_d0 + uStack_c8);
  *puVar2 = 0x6c6120746e697509;
  puVar2[1] = 0x656369646e695f6c;
  puVar2[2] = 0x6f725f6c67725b73;
  puVar2[3] = 0x5f726573755f7273;
  puVar2[4] = 0x5f73656369646e69;
  puVar2[5] = 0x202b206c61746f74;
  puVar2[6] = 0x72736f725f6c6772;
  puVar2[7] = 0x6e6961727265745f;
  puVar2[8] = 0x657275747865745f;
  puVar2[9] = 0x206c61746f745f73;
  *(undefined4 *)(puVar2 + 10) = 0x6772202b;
  *(undefined4 *)((longlong)puVar2 + 0x54) = 0x77725f6c;
  *(undefined4 *)(puVar2 + 0xb) = 0x695f7273;
  *(undefined4 *)((longlong)puVar2 + 0x5c) = 0x6369646e;
  puVar2[0xc] = 0x6c61746f745f7365;
  *(undefined4 *)(puVar2 + 0xd) = 0xa3b5d;
  uStack_c8 = uVar7 + 0x8d;
  FUN_1806277c0(&puStack_d8,uVar7 + 0x90);
  *(undefined4 *)(puStack_d0 + uStack_c8) = 0xa3b7d;
  uStack_c8 = uVar7 + 0x90;
  FUN_1806277c0(&puStack_d8,uVar7 + 0x97);
  *(undefined8 *)(puStack_d0 + uStack_c8) = 0xa6669646e6523;
  uStack_c8 = uVar7 + 0x97;
  FUN_1806277c0(&puStack_d8,uVar7 + 0xc3);
  puVar2 = (undefined8 *)(puStack_d0 + uStack_c8);
  *puVar2 = 0x206669646e65230a;
  puVar2[1] = 0x4544414853202f2f;
  *(undefined4 *)(puVar2 + 2) = 0x45525f52;
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0x52554f53;
  *(undefined4 *)(puVar2 + 3) = 0x495f4543;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x4349444e;
  puVar2[4] = 0x43555254535f5345;
  *(undefined4 *)(puVar2 + 5) = 0xa485f54;
  *(undefined1 *)((longlong)puVar2 + 0x2c) = 0;
  puStack_70 = &UNK_1809fdc18;
  puStack_68 = auStack_58;
  auStack_58[0] = 0;
  iStack_60 = 6;
  uStack_c8 = uVar7 + 0xc3;
  strcpy_s(auStack_58,0x10,&UNK_180a3c07c);
  uStack_b8 = 1;
  puStack_b0 = &UNK_180a3c3e0;
  uStack_98 = 0;
  puStack_a8 = (undefined1 *)0x0;
  uStack_a0 = 0;
  FUN_1806277c0(&puStack_b0,iStack_60);
  if (0 < iStack_60) {
    puVar4 = &DAT_18098bc73;
    if (puStack_68 != (undefined *)0x0) {
      puVar4 = puStack_68;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_a8,puVar4,(longlong)(iStack_60 + 1));
  }
  if ((puStack_68 != (undefined *)0x0) && (uStack_a0 = 0, puStack_a8 != (undefined1 *)0x0)) {
    *puStack_a8 = 0;
  }
  uStack_b8 = 0;
  puStack_70 = &UNK_18098bcb0;
  iVar12 = uStack_a0 + 0x28;
  FUN_1806277c0(&puStack_b0,iVar12);
  puVar2 = (undefined8 *)(puStack_a8 + uStack_a0);
  *puVar2 = 0x2f73726564616853;
  puVar2[1] = 0x725f726564616873;
  *(undefined4 *)(puVar2 + 2) = 0x756f7365;
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0x5f656372;
  *(undefined4 *)(puVar2 + 3) = 0x69646e69;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x5f736563;
  puVar2[4] = 0x682e746375727473;
  *(undefined1 *)(puVar2 + 5) = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  puVar5 = &DAT_18098bc73;
  if (puStack_a8 != (undefined1 *)0x0) {
    puVar5 = puStack_a8;
  }
  uStack_a0 = iVar12;
  FUN_18062dee0(&uStack_90,puVar5,&DAT_1809fc7ec);
  lVar11 = lStack_88;
  puVar4 = &DAT_18098bc73;
  if (puStack_d0 != (undefined *)0x0) {
    puVar4 = puStack_d0;
  }
  fwrite(puVar4,(longlong)(int)uStack_c8,1,lStack_88);
  if (lVar11 != 0) {
    fclose(lVar11);
    lStack_88 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
    lVar11 = 0;
  }
  if (lVar11 != 0) {
    fclose(lVar11);
    lStack_88 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  puStack_b0 = &UNK_180a3c3e0;
  if (puStack_a8 == (undefined1 *)0x0) {
    puStack_a8 = (undefined1 *)0x0;
    uStack_98 = uStack_98 & 0xffffffff00000000;
    puStack_b0 = &UNK_18098bcb0;
    puStack_d8 = &UNK_180a3c3e0;
    if (puStack_d0 == (undefined *)0x0) {
      puStack_d0 = (undefined *)0x0;
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      puStack_d8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_f8);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





