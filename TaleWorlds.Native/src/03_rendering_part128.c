#include "TaleWorlds.Native.Split.h"

// 03_rendering_part128.c - 5 个函数

// 函数: void FUN_180342f3e(undefined4 param_1,longlong param_2)
void FUN_180342f3e(undefined4 param_1,longlong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar6;
  
  iVar1 = *(int *)(param_2 + 0x10);
  FUN_1806277c0(param_1,iVar1 + 0x14);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar2 = 0x20666923;
  puVar2[1] = 0x5f455355;
  puVar2[2] = 0x53534554;
  puVar2[3] = 0x54414c45;
  puVar2[4] = 0xa4e4f49;
  *(undefined1 *)(puVar2 + 5) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x14;
  iVar5 = iVar1 + 0x35;
  FUN_1806277c0(0x20666923,iVar5);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar2 = 0x65642309;
  puVar2[1] = 0x656e6966;
  puVar2[2] = 0x6e6f4320;
  puVar2[3] = 0x6e617473;
  puVar2[4] = 0x73685f74;
  puVar2[5] = 0x74756f5f;
  puVar2[6] = 0x5f747570;
  puVar2[7] = 0x65707974;
  *(undefined2 *)(puVar2 + 8) = 0x20;
  *(int *)(unaff_RDI + 0x10) = iVar5;
  if (0 < *(int *)(unaff_RSI + 0x1110)) {
    FUN_1806277c0(0x65642309,iVar5 + *(int *)(unaff_RSI + 0x1110));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8),
           *(undefined8 *)(unaff_RSI + 0x1108),(longlong)(*(int *)(unaff_RSI + 0x1110) + 1));
  }
  uVar6 = FUN_1806277c0(0x65642309,iVar1 + 0x37);
  puVar3 = (undefined2 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar3 = 0xa0a;
  *(undefined1 *)(puVar3 + 1) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x37;
  iVar5 = iVar1 + 0x58;
  FUN_1806277c0(uVar6,iVar5);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar2 = 0x65642309;
  puVar2[1] = 0x656e6966;
  puVar2[2] = 0x6c754820;
  puVar2[3] = 0x68735f6c;
  puVar2[4] = 0x72656461;
  puVar2[5] = 0x74756f5f;
  puVar2[6] = 0x5f747570;
  puVar2[7] = 0x65707974;
  *(undefined2 *)(puVar2 + 8) = 0x20;
  *(int *)(unaff_RDI + 0x10) = iVar5;
  if (0 < *(int *)(unaff_RSI + 0x1240)) {
    FUN_1806277c0(0x65642309,iVar5 + *(int *)(unaff_RSI + 0x1240));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8),
           *(undefined8 *)(unaff_RSI + 0x1238),(longlong)(*(int *)(unaff_RSI + 0x1240) + 1));
  }
  uVar6 = FUN_1806277c0(0x65642309,iVar1 + 0x5a);
  puVar3 = (undefined2 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar3 = 0xa0a;
  *(undefined1 *)(puVar3 + 1) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x5a;
  iVar5 = iVar1 + 0x7d;
  FUN_1806277c0(uVar6,iVar5);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar2 = 0x65642309;
  puVar2[1] = 0x656e6966;
  puVar2[2] = 0x6d6f4420;
  puVar2[3] = 0x5f6e6961;
  puVar2[4] = 0x64616873;
  puVar2[5] = 0x6f5f7265;
  puVar2[6] = 0x75707475;
  puVar2[7] = 0x79745f74;
  puVar2[8] = 0x206570;
  *(int *)(unaff_RDI + 0x10) = iVar5;
  if (0 < *(int *)(unaff_RSI + 0x1370)) {
    FUN_1806277c0(0x65642309,iVar5 + *(int *)(unaff_RSI + 0x1370));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8),
           *(undefined8 *)(unaff_RSI + 0x1368),(longlong)(*(int *)(unaff_RSI + 0x1370) + 1));
  }
  uVar6 = FUN_1806277c0(0x65642309,iVar1 + 0x7f);
  puVar3 = (undefined2 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar3 = 0xa0a;
  *(undefined1 *)(puVar3 + 1) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x7f;
  iVar5 = iVar1 + 0xa8;
  FUN_1806277c0(uVar6,iVar5);
  puVar4 = (undefined8 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar4 = 0x656e696665642309;
  puVar4[1] = 0x746172656e654720;
  *(undefined4 *)(puVar4 + 2) = 0x685f6465;
  *(undefined4 *)((longlong)puVar4 + 0x14) = 0x5f6c6c75;
  *(undefined4 *)(puVar4 + 3) = 0x64616873;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 0x665f7265;
  puVar4[4] = 0x656d616e5f636e75;
  *(undefined2 *)(puVar4 + 5) = 0x20;
  *(int *)(unaff_RDI + 0x10) = iVar5;
  if (0 < *(int *)(unaff_RSI + 0x12d8)) {
    FUN_1806277c0(0x5f636e75,iVar5 + *(int *)(unaff_RSI + 0x12d8));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8),
           *(undefined8 *)(unaff_RSI + 0x12d0),(longlong)(*(int *)(unaff_RSI + 0x12d8) + 1));
  }
  uVar6 = FUN_1806277c0(0x5f636e75,iVar1 + 0xaa);
  puVar3 = (undefined2 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar3 = 0xa0a;
  *(undefined1 *)(puVar3 + 1) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0xaa;
  iVar5 = iVar1 + 0xd5;
  FUN_1806277c0(uVar6,iVar5);
  puVar4 = (undefined8 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar4 = 0x656e696665642309;
  puVar4[1] = 0x746172656e654720;
  *(undefined4 *)(puVar4 + 2) = 0x645f6465;
  *(undefined4 *)((longlong)puVar4 + 0x14) = 0x69616d6f;
  *(undefined4 *)(puVar4 + 3) = 0x68735f6e;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 0x72656461;
  puVar4[4] = 0x616e5f636e75665f;
  *(undefined4 *)(puVar4 + 5) = 0x20656d;
  *(int *)(unaff_RDI + 0x10) = iVar5;
  if (0 < *(int *)(unaff_RSI + 0x1408)) {
    FUN_1806277c0(0x6e75665f,iVar5 + *(int *)(unaff_RSI + 0x1408));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8),
           *(undefined8 *)(unaff_RSI + 0x1400),(longlong)(*(int *)(unaff_RSI + 0x1408) + 1));
  }
  uVar6 = FUN_1806277c0(0x6e75665f,iVar1 + 0xd7);
  puVar3 = (undefined2 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar3 = 0xa0a;
  *(undefined1 *)(puVar3 + 1) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0xd7;
  FUN_1806277c0(uVar6,iVar1 + 0xe7);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar2 = 0x20666923;
  puVar2[1] = 0x4c4c5548;
  puVar2[2] = 0x4148535f;
  puVar2[3] = 0xa524544;
  *(undefined1 *)(puVar2 + 4) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0xe7;
  FUN_1806277c0(0x20666923,iVar1 + 0xf8);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar2 = 0x6f645b09;
  puVar2[1] = 0x6e69616d;
  puVar2[2] = 0x72742228;
  puVar2[3] = 0x5d292269;
  *(undefined2 *)(puVar2 + 4) = 10;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0xf8;
  FUN_1806277c0(0x6f645b09,iVar1 + 0x11a);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar2 = 0x61705b09;
  puVar2[1] = 0x74697472;
  puVar2[2] = 0x696e6f69;
  puVar2[3] = 0x2228676e;
  puVar2[4] = 0x63617266;
  puVar2[5] = 0x6e6f6974;
  puVar2[6] = 0x6f5f6c61;
  puVar2[7] = 0x29226464;
  *(undefined2 *)(puVar2 + 8) = 0xa5d;
  *(undefined1 *)((longlong)puVar2 + 0x22) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x11a;
  FUN_1806277c0(0x61705b09,iVar1 + 0x13b);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar2 = 0x756f5b09;
  puVar2[1] = 0x74757074;
  puVar2[2] = 0x6f706f74;
  puVar2[3] = 0x79676f6c;
  puVar2[4] = 0x72742228;
  puVar2[5] = 0x676e6169;
  puVar2[6] = 0x635f656c;
  puVar2[7] = 0x5d292277;
  *(undefined2 *)(puVar2 + 8) = 10;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x13b;
  FUN_1806277c0(0x756f5b09,iVar1 + 0x155);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar2 = 0x756f5b09;
  puVar2[1] = 0x74757074;
  puVar2[2] = 0x746e6f63;
  puVar2[3] = 0x706c6f72;
  *(undefined8 *)(puVar2 + 4) = 0x29332873746e696f;
  *(undefined2 *)(puVar2 + 6) = 0xa5d;
  *(undefined1 *)((longlong)puVar2 + 0x1a) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x155;
  iVar5 = iVar1 + 0x16a;
  FUN_1806277c0(0x756f5b09,iVar5);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar2 = 0x61705b09;
  puVar2[1] = 0x63686374;
  puVar2[2] = 0x74736e6f;
  puVar2[3] = 0x66746e61;
  puVar2[4] = 0x28636e75;
  *(undefined2 *)(puVar2 + 5) = 0x22;
  *(int *)(unaff_RDI + 0x10) = iVar5;
  if (0 < *(int *)(unaff_RSI + 0x11a8)) {
    FUN_1806277c0(0x61705b09,iVar5 + *(int *)(unaff_RSI + 0x11a8));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8),
           *(undefined8 *)(unaff_RSI + 0x11a0),(longlong)(*(int *)(unaff_RSI + 0x11a8) + 1));
  }
  uVar6 = FUN_1806277c0(0x61705b09,iVar1 + 0x16e);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar2 = 0xa5d2922;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x16e;
  FUN_1806277c0(uVar6,iVar1 + 0x185);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar2 = 0x616d5b09;
  puVar2[1] = 0x73657478;
  puVar2[2] = 0x63616673;
  puVar2[3] = 0x28726f74;
  *(undefined8 *)(puVar2 + 4) = 0xa5d29302e3631;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x185;
  iVar5 = iVar1 + 0x1b1;
  FUN_1806277c0(0x616d5b09,iVar5);
  puVar4 = (undefined8 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar4 = 0x68735f6c6c754809;
  puVar4[1] = 0x74756f5f72656461;
  *(undefined4 *)(puVar4 + 2) = 0x5f747570;
  *(undefined4 *)((longlong)puVar4 + 0x14) = 0x65707974;
  *(undefined4 *)(puVar4 + 3) = 0x69616d20;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 0x73685f6e;
  puVar4[4] = 0x61507475706e4928;
  *(undefined4 *)(puVar4 + 5) = 0x3c686374;
  *(undefined1 *)((longlong)puVar4 + 0x2c) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar5;
  if (0 < *(int *)(unaff_RSI + 0x50)) {
    FUN_1806277c0(0x706e4928,iVar5 + *(int *)(unaff_RSI + 0x50));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8),
           *(undefined8 *)(unaff_RSI + 0x48),(longlong)(*(int *)(unaff_RSI + 0x50) + 1));
  }
  FUN_1806277c0(0x706e4928,iVar1 + 499);
  puVar4 = (undefined8 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar4 = 0x706e69203e33202c;
  puVar4[1] = 0x2c68637461507475;
  puVar4[2] = 0x6f6320746e697520;
  puVar4[3] = 0x6f705f6c6f72746e;
  *(undefined4 *)(puVar4 + 4) = 0x5f746e69;
  *(undefined4 *)((longlong)puVar4 + 0x24) = 0x3a206469;
  *(undefined4 *)(puVar4 + 5) = 0x5f565320;
  *(undefined4 *)((longlong)puVar4 + 0x2c) = 0x7074754f;
  *(undefined4 *)(puVar4 + 6) = 0x6f437475;
  *(undefined4 *)((longlong)puVar4 + 0x34) = 0x6f72746e;
  *(undefined4 *)(puVar4 + 7) = 0x696f506c;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x4449746e;
  *(undefined2 *)(puVar4 + 8) = 0xa29;
  *(undefined1 *)((longlong)puVar4 + 0x42) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 499;
  uVar6 = FUN_1806277c0(0x5f746e69,iVar1 + 0x1f6);
  *(undefined4 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8)) = 0xa7b09;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x1f6;
  FUN_1806277c0(uVar6,iVar1 + 0x249);
  puVar4 = (undefined8 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar4 = 0x6e72757465720909;
  puVar4[1] = 0x746172656e654720;
  puVar4[2] = 0x5f6c6c75685f6465;
  puVar4[3] = 0x665f726564616873;
  puVar4[4] = 0x656d616e5f636e75;
  puVar4[5] = 0x61507475706e6928;
  *(undefined4 *)(puVar4 + 6) = 0x2c686374;
  *(undefined4 *)((longlong)puVar4 + 0x34) = 0x6e6f6320;
  *(undefined4 *)(puVar4 + 7) = 0x6c6f7274;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x696f705f;
  *(undefined4 *)(puVar4 + 8) = 0x695f746e;
  *(undefined4 *)((longlong)puVar4 + 0x44) = 0x203b2964;
  *(undefined4 *)(puVar4 + 9) = 0x20202020;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = 0x20202020;
  *(undefined4 *)(puVar4 + 10) = 0xa2020;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x249;
  uVar6 = FUN_1806277c0(0x695f746e,iVar1 + 0x24c);
  *(undefined4 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8)) = 0xa7d09;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x24c;
  FUN_1806277c0(uVar6,iVar1 + 0x253);
  *(undefined8 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8)) =
       0xa6669646e6523;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x253;
  FUN_1806277c0(0x646e6523,iVar1 + 0x265);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar2 = 0x20666923;
  puVar2[1] = 0x414d4f44;
  puVar2[2] = 0x535f4e49;
  puVar2[3] = 0x45444148;
  *(undefined2 *)(puVar2 + 4) = 0xa52;
  *(undefined1 *)((longlong)puVar2 + 0x12) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x265;
  FUN_1806277c0(0x20666923,iVar1 + 0x276);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar2 = 0x6f645b09;
  puVar2[1] = 0x6e69616d;
  puVar2[2] = 0x72742228;
  puVar2[3] = 0x5d292269;
  *(undefined2 *)(puVar2 + 4) = 10;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x276;
  FUN_1806277c0(0x6f645b09,iVar1 + 0x325);
  puVar4 = (undefined8 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar4 = 0x5f6e69616d6f4409;
  puVar4[1] = 0x6f5f726564616873;
  puVar4[2] = 0x79745f7475707475;
  puVar4[3] = 0x5f6e69616d206570;
  puVar4[4] = 0x74736e6f43287364;
  puVar4[5] = 0x6f5f73685f746e61;
  puVar4[6] = 0x79745f7475707475;
  puVar4[7] = 0x7475706e69206570;
  puVar4[8] = 0x3374616f6c66202c;
  puVar4[9] = 0x6e65637972616220;
  puVar4[10] = 0x6f6f635f63697274;
  puVar4[0xb] = 0x5653203a20736472;
  puVar4[0xc] = 0x4c6e69616d6f445f;
  puVar4[0xd] = 0x2c6e6f697461636f;
  puVar4[0xe] = 0x4f2074736e6f6320;
  puVar4[0xf] = 0x7461507475707475;
  puVar4[0x10] = 0x5f6c6c75483c6863;
  puVar4[0x11] = 0x6f5f726564616873;
  *(undefined4 *)(puVar4 + 0x12) = 0x75707475;
  *(undefined4 *)((longlong)puVar4 + 0x94) = 0x79745f74;
  *(undefined4 *)(puVar4 + 0x13) = 0x202c6570;
  *(undefined4 *)((longlong)puVar4 + 0x9c) = 0x74203e33;
  *(undefined4 *)(puVar4 + 0x14) = 0x6e616972;
  *(undefined4 *)((longlong)puVar4 + 0xa4) = 0x5f656c67;
  *(undefined4 *)(puVar4 + 0x15) = 0x63746170;
  *(undefined4 *)((longlong)puVar4 + 0xac) = 0xa2968;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x325;
  uVar6 = FUN_1806277c0(0x75707475,iVar1 + 0x328);
  *(undefined4 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8)) = 0xa7b09;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x328;
  FUN_1806277c0(uVar6,iVar1 + 0x38b);
  puVar4 = (undefined8 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar4 = 0x6e72757465720909;
  puVar4[1] = 0x746172656e654720;
  puVar4[2] = 0x69616d6f645f6465;
  puVar4[3] = 0x7265646168735f6e;
  puVar4[4] = 0x616e5f636e75665f;
  puVar4[5] = 0x7475706e6928656d;
  puVar4[6] = 0x656379726162202c;
  puVar4[7] = 0x6f635f636972746e;
  *(undefined4 *)(puVar4 + 8) = 0x7364726f;
  *(undefined4 *)((longlong)puVar4 + 0x44) = 0x7274202c;
  *(undefined4 *)(puVar4 + 9) = 0x676e6169;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = 0x705f656c;
  *(undefined4 *)(puVar4 + 10) = 0x68637461;
  *(undefined4 *)((longlong)puVar4 + 0x54) = 0x20203b29;
  *(undefined4 *)(puVar4 + 0xb) = 0x20202020;
  *(undefined4 *)((longlong)puVar4 + 0x5c) = 0x20202020;
  *(undefined4 *)(puVar4 + 0xc) = 0xa2020;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x38b;
  uVar6 = FUN_1806277c0(0x7364726f,iVar1 + 0x38e);
  *(undefined4 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8)) = 0xa7d09;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x38e;
  FUN_1806277c0(uVar6,iVar1 + 0x395);
  *(undefined8 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8)) =
       0xa6669646e6523;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x395;
  FUN_1806277c0(0x646e6523,iVar1 + 0x39d);
  puVar4 = (undefined8 *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + *(longlong *)(unaff_RDI + 8));
  *puVar4 = 0xa0a6669646e6523;
  *(undefined1 *)(puVar4 + 1) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x39d;
  return;
}





// 函数: void FUN_1803437c9(void)
void FUN_1803437c9(void)

{
  return;
}





// 函数: void FUN_1803437e0(undefined8 param_1,longlong param_2,longlong param_3)
void FUN_1803437e0(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (*(char *)(param_3 + 0x10f9) == '\0') {
    iVar4 = iVar1 + 0x20;
    FUN_1806277c0(param_2,iVar4);
    puVar2 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar2 = 0x66656423;
    puVar2[1] = 0x20656e69;
    puVar2[2] = 0x65786950;
    puVar2[3] = 0x68735f6c;
    puVar2[4] = 0x72656461;
    puVar2[5] = 0x706e695f;
    puVar2[6] = 0x745f7475;
    puVar2[7] = 0x20657079;
    *(undefined1 *)(puVar2 + 8) = 0;
    *(int *)(param_2 + 0x10) = iVar4;
    if (0 < *(int *)(param_3 + 0x50)) {
      FUN_1806277c0(param_2,iVar4 + *(int *)(param_3 + 0x50));
                    // WARNING: Subroutine does not return
      memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
             *(undefined8 *)(param_3 + 0x48),(longlong)(*(int *)(param_3 + 0x50) + 1));
    }
    FUN_1806277c0(param_2,iVar1 + 0x21);
    *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 10;
    *(int *)(param_2 + 0x10) = iVar1 + 0x21;
    return;
  }
  FUN_1806277c0(param_2,iVar1 + 0x14);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x20666923;
  puVar2[1] = 0x5f455355;
  puVar2[2] = 0x53534554;
  puVar2[3] = 0x54414c45;
  puVar2[4] = 0xa4e4f49;
  *(undefined1 *)(puVar2 + 5) = 0;
  *(int *)(param_2 + 0x10) = iVar1 + 0x14;
  iVar4 = iVar1 + 0x35;
  FUN_1806277c0(param_2,iVar4);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x65642320;
  puVar2[1] = 0x656e6966;
  puVar2[2] = 0x78695020;
  puVar2[3] = 0x735f6c65;
  puVar2[4] = 0x65646168;
  puVar2[5] = 0x6e695f72;
  puVar2[6] = 0x5f747570;
  puVar2[7] = 0x65707974;
  *(undefined2 *)(puVar2 + 8) = 0x20;
  *(int *)(param_2 + 0x10) = iVar4;
  if (0 < *(int *)(param_3 + 0x1370)) {
    FUN_1806277c0(param_2,iVar4 + *(int *)(param_3 + 0x1370));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
           *(undefined8 *)(param_3 + 0x1368),(longlong)(*(int *)(param_3 + 0x1370) + 1));
  }
  FUN_1806277c0(param_2,iVar1 + 0x3c);
  *(undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
       0xa65736c65230a;
  *(int *)(param_2 + 0x10) = iVar1 + 0x3c;
  iVar4 = iVar1 + 0x5d;
  FUN_1806277c0(param_2,iVar4);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x65642320;
  puVar2[1] = 0x656e6966;
  puVar2[2] = 0x78695020;
  puVar2[3] = 0x735f6c65;
  puVar2[4] = 0x65646168;
  puVar2[5] = 0x6e695f72;
  puVar2[6] = 0x5f747570;
  puVar2[7] = 0x65707974;
  *(undefined2 *)(puVar2 + 8) = 0x20;
  *(int *)(param_2 + 0x10) = iVar4;
  if (0 < *(int *)(param_3 + 0x50)) {
    FUN_1806277c0(param_2,iVar4 + *(int *)(param_3 + 0x50));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
           *(undefined8 *)(param_3 + 0x48),(longlong)(*(int *)(param_3 + 0x50) + 1));
  }
  FUN_1806277c0(param_2,iVar1 + 0x66);
  puVar3 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar3 = 0xa6669646e65230a;
  *(undefined2 *)(puVar3 + 1) = 10;
  *(int *)(param_2 + 0x10) = iVar1 + 0x66;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180343a00(undefined8 param_1,longlong param_2,undefined8 param_3)
void FUN_180343a00(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  undefined4 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  uint uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined *puStack_88;
  undefined *puStack_80;
  int iStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 *puStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [16];
  ulonglong uStack_38;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  uStack_c8 = 0;
  FUN_180343ee0(param_1,&puStack_88);
  puStack_60 = &UNK_1809fdc18;
  puStack_58 = auStack_48;
  auStack_48[0] = 0;
  uStack_50 = 6;
  strcpy_s(auStack_48,0x10,&UNK_180a3c07c);
  uStack_c8 = 2;
  FUN_1806279c0(&puStack_c0,&puStack_60);
  uStack_c8 = 0;
  puStack_60 = &UNK_18098bcb0;
  uVar3 = uStack_b0 + 0x10;
  FUN_1806277c0(&puStack_c0,uVar3);
  puVar1 = (undefined4 *)(puStack_b8 + uStack_b0);
  *puVar1 = 0x64616853;
  puVar1[1] = 0x2f737265;
  puVar1[2] = 0x72756f53;
  puVar1[3] = 0x2f736563;
  *(undefined1 *)(puVar1 + 4) = 0;
  uStack_b0 = uVar3;
  FUN_180627be0(param_2,param_3);
  iVar4 = *(int *)(param_2 + 0x10) + 0x10;
  FUN_1806277c0(param_2,iVar4);
  puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar1 = 0x6e6f635f;
  puVar1[1] = 0x6e617473;
  puVar1[2] = 0x756f5f74;
  puVar1[3] = 0x74757074;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(int *)(param_2 + 0x10) = iVar4;
  if (0 < iVar4) {
    FUN_1806277c0(&puStack_c0,iVar4 + uStack_b0);
                    // WARNING: Subroutine does not return
    memcpy(puStack_b8 + uStack_b0,*(undefined8 *)(param_2 + 8),
           (longlong)(*(int *)(param_2 + 0x10) + 1));
  }
  iVar4 = uStack_b0 + 3;
  FUN_1806277c0(&puStack_c0,iVar4);
  *(undefined4 *)(puStack_b8 + uStack_b0) = 0x73722e;
  uStack_a0 = 0;
  lStack_98 = 0;
  puVar2 = &DAT_18098bc73;
  if (puStack_b8 != (undefined *)0x0) {
    puVar2 = puStack_b8;
  }
  uStack_b0 = iVar4;
  FUN_18062dee0(&uStack_a0,puVar2,&DAT_1809fc7ec);
  lVar5 = lStack_98;
  puVar2 = &DAT_18098bc73;
  if (puStack_80 != (undefined *)0x0) {
    puVar2 = puStack_80;
  }
  fwrite(puVar2,(longlong)iStack_78,1,lStack_98);
  if (lVar5 != 0) {
    fclose(lVar5);
    lStack_98 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    fclose(lVar5);
    lStack_98 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  puStack_c0 = &UNK_180a3c3e0;
  if (puStack_b8 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_b8 = (undefined *)0x0;
  uStack_a8 = 0;
  puStack_c0 = &UNK_18098bcb0;
  puStack_88 = &UNK_180a3c3e0;
  if (puStack_80 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_80 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_88 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180343c70(undefined8 param_1,longlong param_2,undefined8 param_3)
void FUN_180343c70(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined4 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  uint uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined *puStack_88;
  undefined *puStack_80;
  int iStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 *puStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [16];
  ulonglong uStack_38;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  uStack_c8 = 0;
  FUN_180343fc0(param_1,&puStack_88);
  puStack_60 = &UNK_1809fdc18;
  puStack_58 = auStack_48;
  auStack_48[0] = 0;
  uStack_50 = 6;
  strcpy_s(auStack_48,0x10,&UNK_180a3c07c);
  uStack_c8 = 2;
  FUN_1806279c0(&puStack_c0,&puStack_60);
  uStack_c8 = 0;
  puStack_60 = &UNK_18098bcb0;
  uVar4 = uStack_b0 + 0x10;
  FUN_1806277c0(&puStack_c0,uVar4);
  puVar1 = (undefined4 *)(puStack_b8 + uStack_b0);
  *puVar1 = 0x64616853;
  puVar1[1] = 0x2f737265;
  puVar1[2] = 0x72756f53;
  puVar1[3] = 0x2f736563;
  *(undefined1 *)(puVar1 + 4) = 0;
  uStack_b0 = uVar4;
  FUN_180627be0(param_2,param_3);
  iVar5 = *(int *)(param_2 + 0x10) + 9;
  FUN_1806277c0(param_2,iVar5);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x6172647265766f5f;
  *(undefined2 *)(puVar2 + 1) = 0x77;
  *(int *)(param_2 + 0x10) = iVar5;
  if (0 < iVar5) {
    FUN_1806277c0(&puStack_c0,iVar5 + uStack_b0);
                    // WARNING: Subroutine does not return
    memcpy(puStack_b8 + uStack_b0,*(undefined8 *)(param_2 + 8),
           (longlong)(*(int *)(param_2 + 0x10) + 1));
  }
  iVar5 = uStack_b0 + 3;
  FUN_1806277c0(&puStack_c0,iVar5);
  *(undefined4 *)(puStack_b8 + uStack_b0) = 0x73722e;
  uStack_a0 = 0;
  lStack_98 = 0;
  puVar3 = &DAT_18098bc73;
  if (puStack_b8 != (undefined *)0x0) {
    puVar3 = puStack_b8;
  }
  uStack_b0 = iVar5;
  FUN_18062dee0(&uStack_a0,puVar3,&DAT_1809fc7ec);
  lVar6 = lStack_98;
  puVar3 = &DAT_18098bc73;
  if (puStack_80 != (undefined *)0x0) {
    puVar3 = puStack_80;
  }
  fwrite(puVar3,(longlong)iStack_78,1,lStack_98);
  if (lVar6 != 0) {
    fclose(lVar6);
    lStack_98 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
    lVar6 = 0;
  }
  if (lVar6 != 0) {
    fclose(lVar6);
    lStack_98 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  puStack_c0 = &UNK_180a3c3e0;
  if (puStack_b8 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_b8 = (undefined *)0x0;
  uStack_a8 = 0;
  puStack_c0 = &UNK_18098bcb0;
  puStack_88 = &UNK_180a3c3e0;
  if (puStack_80 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_80 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_88 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_e8);
}



undefined8 *
FUN_180343ee0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  iVar1 = *(int *)(param_2 + 2);
  FUN_1806277c0(param_2,iVar1 + 0x1d,param_3,param_4,1,0xfffffffffffffffe);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]);
  *puVar2 = 0x66656423;
  puVar2[1] = 0x20656e69;
  puVar2[2] = 0x534e4f43;
  puVar2[3] = 0x544e4154;
  *(undefined8 *)(puVar2 + 4) = 0x5f54555054554f5f;
  puVar2[6] = 0x53534150;
  *(undefined2 *)(puVar2 + 7) = 10;
  *(int *)(param_2 + 2) = iVar1 + 0x1d;
  uVar3 = FUN_18033eb00(puVar2,param_2,param_3);
  uVar3 = FUN_18033f560(uVar3,param_2,param_3);
  uVar3 = FUN_180342f20(uVar3,param_2,param_3);
  FUN_1803440a0(uVar3,param_2,param_3);
  return param_2;
}



undefined8 *
FUN_180343fc0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  iVar1 = *(int *)(param_2 + 2);
  FUN_1806277c0(param_2,iVar1 + 0x16,param_3,param_4,1,0xfffffffffffffffe);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]);
  *puVar2 = 0x66656423;
  puVar2[1] = 0x20656e69;
  puVar2[2] = 0x5245564f;
  puVar2[3] = 0x57415244;
  puVar2[4] = 0x5341505f;
  *(undefined2 *)(puVar2 + 5) = 0xa53;
  *(undefined1 *)((longlong)puVar2 + 0x16) = 0;
  *(int *)(param_2 + 2) = iVar1 + 0x16;
  uVar3 = FUN_18033eb00(puVar2,param_2,param_3);
  uVar3 = FUN_18033f560(uVar3,param_2,param_3);
  uVar3 = FUN_180342f20(uVar3,param_2,param_3);
  FUN_1803447a0(uVar3,param_2,param_3);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



