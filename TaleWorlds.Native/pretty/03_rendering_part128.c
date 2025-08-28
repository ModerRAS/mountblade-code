#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part128.c - 5 个函数

// 函数: void FUN_180342f3e(int32_t param_1,int64_t param_2)
void FUN_180342f3e(int32_t param_1,int64_t param_2)

{
  int iVar1;
  int32_t *puVar2;
  int16_t *puVar3;
  uint64_t *puVar4;
  int iVar5;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int32_t uVar6;
  
  iVar1 = *(int *)(param_2 + 0x10);
  CoreMemoryPoolProcessor(param_1,iVar1 + 0x14);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar2 = 0x20666923;
  puVar2[1] = 0x5f455355;
  puVar2[2] = 0x53534554;
  puVar2[3] = 0x54414c45;
  puVar2[4] = 0xa4e4f49;
  *(int8_t *)(puVar2 + 5) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x14;
  iVar5 = iVar1 + 0x35;
  CoreMemoryPoolProcessor(0x20666923,iVar5);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar2 = 0x65642309;
  puVar2[1] = 0x656e6966;
  puVar2[2] = 0x6e6f4320;
  puVar2[3] = 0x6e617473;
  puVar2[4] = 0x73685f74;
  puVar2[5] = 0x74756f5f;
  puVar2[6] = 0x5f747570;
  puVar2[7] = 0x65707974;
  *(int16_t *)(puVar2 + 8) = 0x20;
  *(int *)(unaff_RDI + 0x10) = iVar5;
  if (0 < *(int *)(unaff_RSI + 0x1110)) {
    CoreMemoryPoolProcessor(0x65642309,iVar5 + *(int *)(unaff_RSI + 0x1110));
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8),
           *(uint64_t *)(unaff_RSI + 0x1108),(int64_t)(*(int *)(unaff_RSI + 0x1110) + 1));
  }
  uVar6 = CoreMemoryPoolProcessor(0x65642309,iVar1 + 0x37);
  puVar3 = (int16_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar3 = 0xa0a;
  *(int8_t *)(puVar3 + 1) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x37;
  iVar5 = iVar1 + 0x58;
  CoreMemoryPoolProcessor(uVar6,iVar5);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar2 = 0x65642309;
  puVar2[1] = 0x656e6966;
  puVar2[2] = 0x6c754820;
  puVar2[3] = 0x68735f6c;
  puVar2[4] = 0x72656461;
  puVar2[5] = 0x74756f5f;
  puVar2[6] = 0x5f747570;
  puVar2[7] = 0x65707974;
  *(int16_t *)(puVar2 + 8) = 0x20;
  *(int *)(unaff_RDI + 0x10) = iVar5;
  if (0 < *(int *)(unaff_RSI + 0x1240)) {
    CoreMemoryPoolProcessor(0x65642309,iVar5 + *(int *)(unaff_RSI + 0x1240));
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8),
           *(uint64_t *)(unaff_RSI + 0x1238),(int64_t)(*(int *)(unaff_RSI + 0x1240) + 1));
  }
  uVar6 = CoreMemoryPoolProcessor(0x65642309,iVar1 + 0x5a);
  puVar3 = (int16_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar3 = 0xa0a;
  *(int8_t *)(puVar3 + 1) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x5a;
  iVar5 = iVar1 + 0x7d;
  CoreMemoryPoolProcessor(uVar6,iVar5);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
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
    CoreMemoryPoolProcessor(0x65642309,iVar5 + *(int *)(unaff_RSI + 0x1370));
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8),
           *(uint64_t *)(unaff_RSI + 0x1368),(int64_t)(*(int *)(unaff_RSI + 0x1370) + 1));
  }
  uVar6 = CoreMemoryPoolProcessor(0x65642309,iVar1 + 0x7f);
  puVar3 = (int16_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar3 = 0xa0a;
  *(int8_t *)(puVar3 + 1) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x7f;
  iVar5 = iVar1 + 0xa8;
  CoreMemoryPoolProcessor(uVar6,iVar5);
  puVar4 = (uint64_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar4 = 0x656e696665642309;
  puVar4[1] = 0x746172656e654720;
  *(int32_t *)(puVar4 + 2) = 0x685f6465;
  *(int32_t *)((int64_t)puVar4 + 0x14) = 0x5f6c6c75;
  *(int32_t *)(puVar4 + 3) = 0x64616873;
  *(int32_t *)((int64_t)puVar4 + 0x1c) = 0x665f7265;
  puVar4[4] = 0x656d616e5f636e75;
  *(int16_t *)(puVar4 + 5) = 0x20;
  *(int *)(unaff_RDI + 0x10) = iVar5;
  if (0 < *(int *)(unaff_RSI + 0x12d8)) {
    CoreMemoryPoolProcessor(0x5f636e75,iVar5 + *(int *)(unaff_RSI + 0x12d8));
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8),
           *(uint64_t *)(unaff_RSI + 0x12d0),(int64_t)(*(int *)(unaff_RSI + 0x12d8) + 1));
  }
  uVar6 = CoreMemoryPoolProcessor(0x5f636e75,iVar1 + 0xaa);
  puVar3 = (int16_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar3 = 0xa0a;
  *(int8_t *)(puVar3 + 1) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0xaa;
  iVar5 = iVar1 + 0xd5;
  CoreMemoryPoolProcessor(uVar6,iVar5);
  puVar4 = (uint64_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar4 = 0x656e696665642309;
  puVar4[1] = 0x746172656e654720;
  *(int32_t *)(puVar4 + 2) = 0x645f6465;
  *(int32_t *)((int64_t)puVar4 + 0x14) = 0x69616d6f;
  *(int32_t *)(puVar4 + 3) = 0x68735f6e;
  *(int32_t *)((int64_t)puVar4 + 0x1c) = 0x72656461;
  puVar4[4] = 0x616e5f636e75665f;
  *(int32_t *)(puVar4 + 5) = 0x20656d;
  *(int *)(unaff_RDI + 0x10) = iVar5;
  if (0 < *(int *)(unaff_RSI + 0x1408)) {
    CoreMemoryPoolProcessor(0x6e75665f,iVar5 + *(int *)(unaff_RSI + 0x1408));
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8),
           *(uint64_t *)(unaff_RSI + 0x1400),(int64_t)(*(int *)(unaff_RSI + 0x1408) + 1));
  }
  uVar6 = CoreMemoryPoolProcessor(0x6e75665f,iVar1 + 0xd7);
  puVar3 = (int16_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar3 = 0xa0a;
  *(int8_t *)(puVar3 + 1) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0xd7;
  CoreMemoryPoolProcessor(uVar6,iVar1 + 0xe7);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar2 = 0x20666923;
  puVar2[1] = 0x4c4c5548;
  puVar2[2] = 0x4148535f;
  puVar2[3] = 0xa524544;
  *(int8_t *)(puVar2 + 4) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0xe7;
  CoreMemoryPoolProcessor(0x20666923,iVar1 + 0xf8);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar2 = 0x6f645b09;
  puVar2[1] = 0x6e69616d;
  puVar2[2] = 0x72742228;
  puVar2[3] = 0x5d292269;
  *(int16_t *)(puVar2 + 4) = 10;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0xf8;
  CoreMemoryPoolProcessor(0x6f645b09,iVar1 + 0x11a);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar2 = 0x61705b09;
  puVar2[1] = 0x74697472;
  puVar2[2] = 0x696e6f69;
  puVar2[3] = 0x2228676e;
  puVar2[4] = 0x63617266;
  puVar2[5] = 0x6e6f6974;
  puVar2[6] = 0x6f5f6c61;
  puVar2[7] = 0x29226464;
  *(int16_t *)(puVar2 + 8) = 0xa5d;
  *(int8_t *)((int64_t)puVar2 + 0x22) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x11a;
  CoreMemoryPoolProcessor(0x61705b09,iVar1 + 0x13b);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar2 = 0x756f5b09;
  puVar2[1] = 0x74757074;
  puVar2[2] = 0x6f706f74;
  puVar2[3] = 0x79676f6c;
  puVar2[4] = 0x72742228;
  puVar2[5] = 0x676e6169;
  puVar2[6] = 0x635f656c;
  puVar2[7] = 0x5d292277;
  *(int16_t *)(puVar2 + 8) = 10;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x13b;
  CoreMemoryPoolProcessor(0x756f5b09,iVar1 + 0x155);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar2 = 0x756f5b09;
  puVar2[1] = 0x74757074;
  puVar2[2] = 0x746e6f63;
  puVar2[3] = 0x706c6f72;
  *(uint64_t *)(puVar2 + 4) = 0x29332873746e696f;
  *(int16_t *)(puVar2 + 6) = 0xa5d;
  *(int8_t *)((int64_t)puVar2 + 0x1a) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x155;
  iVar5 = iVar1 + 0x16a;
  CoreMemoryPoolProcessor(0x756f5b09,iVar5);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar2 = 0x61705b09;
  puVar2[1] = 0x63686374;
  puVar2[2] = 0x74736e6f;
  puVar2[3] = 0x66746e61;
  puVar2[4] = 0x28636e75;
  *(int16_t *)(puVar2 + 5) = 0x22;
  *(int *)(unaff_RDI + 0x10) = iVar5;
  if (0 < *(int *)(unaff_RSI + 0x11a8)) {
    CoreMemoryPoolProcessor(0x61705b09,iVar5 + *(int *)(unaff_RSI + 0x11a8));
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8),
           *(uint64_t *)(unaff_RSI + 0x11a0),(int64_t)(*(int *)(unaff_RSI + 0x11a8) + 1));
  }
  uVar6 = CoreMemoryPoolProcessor(0x61705b09,iVar1 + 0x16e);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar2 = 0xa5d2922;
  *(int8_t *)(puVar2 + 1) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x16e;
  CoreMemoryPoolProcessor(uVar6,iVar1 + 0x185);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar2 = 0x616d5b09;
  puVar2[1] = 0x73657478;
  puVar2[2] = 0x63616673;
  puVar2[3] = 0x28726f74;
  *(uint64_t *)(puVar2 + 4) = 0xa5d29302e3631;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x185;
  iVar5 = iVar1 + 0x1b1;
  CoreMemoryPoolProcessor(0x616d5b09,iVar5);
  puVar4 = (uint64_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar4 = 0x68735f6c6c754809;
  puVar4[1] = 0x74756f5f72656461;
  *(int32_t *)(puVar4 + 2) = 0x5f747570;
  *(int32_t *)((int64_t)puVar4 + 0x14) = 0x65707974;
  *(int32_t *)(puVar4 + 3) = 0x69616d20;
  *(int32_t *)((int64_t)puVar4 + 0x1c) = 0x73685f6e;
  puVar4[4] = 0x61507475706e4928;
  *(int32_t *)(puVar4 + 5) = 0x3c686374;
  *(int8_t *)((int64_t)puVar4 + 0x2c) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar5;
  if (0 < *(int *)(unaff_RSI + 0x50)) {
    CoreMemoryPoolProcessor(0x706e4928,iVar5 + *(int *)(unaff_RSI + 0x50));
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8),
           *(uint64_t *)(unaff_RSI + 0x48),(int64_t)(*(int *)(unaff_RSI + 0x50) + 1));
  }
  CoreMemoryPoolProcessor(0x706e4928,iVar1 + 499);
  puVar4 = (uint64_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar4 = 0x706e69203e33202c;
  puVar4[1] = 0x2c68637461507475;
  puVar4[2] = 0x6f6320746e697520;
  puVar4[3] = 0x6f705f6c6f72746e;
  *(int32_t *)(puVar4 + 4) = 0x5f746e69;
  *(int32_t *)((int64_t)puVar4 + 0x24) = 0x3a206469;
  *(int32_t *)(puVar4 + 5) = 0x5f565320;
  *(int32_t *)((int64_t)puVar4 + 0x2c) = 0x7074754f;
  *(int32_t *)(puVar4 + 6) = 0x6f437475;
  *(int32_t *)((int64_t)puVar4 + 0x34) = 0x6f72746e;
  *(int32_t *)(puVar4 + 7) = 0x696f506c;
  *(int32_t *)((int64_t)puVar4 + 0x3c) = 0x4449746e;
  *(int16_t *)(puVar4 + 8) = 0xa29;
  *(int8_t *)((int64_t)puVar4 + 0x42) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 499;
  uVar6 = CoreMemoryPoolProcessor(0x5f746e69,iVar1 + 0x1f6);
  *(int32_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8)) = 0xa7b09;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x1f6;
  CoreMemoryPoolProcessor(uVar6,iVar1 + 0x249);
  puVar4 = (uint64_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar4 = 0x6e72757465720909;
  puVar4[1] = 0x746172656e654720;
  puVar4[2] = 0x5f6c6c75685f6465;
  puVar4[3] = 0x665f726564616873;
  puVar4[4] = 0x656d616e5f636e75;
  puVar4[5] = 0x61507475706e6928;
  *(int32_t *)(puVar4 + 6) = 0x2c686374;
  *(int32_t *)((int64_t)puVar4 + 0x34) = 0x6e6f6320;
  *(int32_t *)(puVar4 + 7) = 0x6c6f7274;
  *(int32_t *)((int64_t)puVar4 + 0x3c) = 0x696f705f;
  *(int32_t *)(puVar4 + 8) = 0x695f746e;
  *(int32_t *)((int64_t)puVar4 + 0x44) = 0x203b2964;
  *(int32_t *)(puVar4 + 9) = 0x20202020;
  *(int32_t *)((int64_t)puVar4 + 0x4c) = 0x20202020;
  *(int32_t *)(puVar4 + 10) = 0xa2020;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x249;
  uVar6 = CoreMemoryPoolProcessor(0x695f746e,iVar1 + 0x24c);
  *(int32_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8)) = 0xa7d09;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x24c;
  CoreMemoryPoolProcessor(uVar6,iVar1 + 0x253);
  *(uint64_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8)) =
       0xa6669646e6523;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x253;
  CoreMemoryPoolProcessor(0x646e6523,iVar1 + 0x265);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar2 = 0x20666923;
  puVar2[1] = 0x414d4f44;
  puVar2[2] = 0x535f4e49;
  puVar2[3] = 0x45444148;
  *(int16_t *)(puVar2 + 4) = 0xa52;
  *(int8_t *)((int64_t)puVar2 + 0x12) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x265;
  CoreMemoryPoolProcessor(0x20666923,iVar1 + 0x276);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar2 = 0x6f645b09;
  puVar2[1] = 0x6e69616d;
  puVar2[2] = 0x72742228;
  puVar2[3] = 0x5d292269;
  *(int16_t *)(puVar2 + 4) = 10;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x276;
  CoreMemoryPoolProcessor(0x6f645b09,iVar1 + 0x325);
  puVar4 = (uint64_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
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
  *(int32_t *)(puVar4 + 0x12) = 0x75707475;
  *(int32_t *)((int64_t)puVar4 + 0x94) = 0x79745f74;
  *(int32_t *)(puVar4 + 0x13) = 0x202c6570;
  *(int32_t *)((int64_t)puVar4 + 0x9c) = 0x74203e33;
  *(int32_t *)(puVar4 + 0x14) = 0x6e616972;
  *(int32_t *)((int64_t)puVar4 + 0xa4) = 0x5f656c67;
  *(int32_t *)(puVar4 + 0x15) = 0x63746170;
  *(int32_t *)((int64_t)puVar4 + 0xac) = 0xa2968;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x325;
  uVar6 = CoreMemoryPoolProcessor(0x75707475,iVar1 + 0x328);
  *(int32_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8)) = 0xa7b09;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x328;
  CoreMemoryPoolProcessor(uVar6,iVar1 + 0x38b);
  puVar4 = (uint64_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar4 = 0x6e72757465720909;
  puVar4[1] = 0x746172656e654720;
  puVar4[2] = 0x69616d6f645f6465;
  puVar4[3] = 0x7265646168735f6e;
  puVar4[4] = 0x616e5f636e75665f;
  puVar4[5] = 0x7475706e6928656d;
  puVar4[6] = 0x656379726162202c;
  puVar4[7] = 0x6f635f636972746e;
  *(int32_t *)(puVar4 + 8) = 0x7364726f;
  *(int32_t *)((int64_t)puVar4 + 0x44) = 0x7274202c;
  *(int32_t *)(puVar4 + 9) = 0x676e6169;
  *(int32_t *)((int64_t)puVar4 + 0x4c) = 0x705f656c;
  *(int32_t *)(puVar4 + 10) = 0x68637461;
  *(int32_t *)((int64_t)puVar4 + 0x54) = 0x20203b29;
  *(int32_t *)(puVar4 + 0xb) = 0x20202020;
  *(int32_t *)((int64_t)puVar4 + 0x5c) = 0x20202020;
  *(int32_t *)(puVar4 + 0xc) = 0xa2020;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x38b;
  uVar6 = CoreMemoryPoolProcessor(0x7364726f,iVar1 + 0x38e);
  *(int32_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8)) = 0xa7d09;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x38e;
  CoreMemoryPoolProcessor(uVar6,iVar1 + 0x395);
  *(uint64_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8)) =
       0xa6669646e6523;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x395;
  CoreMemoryPoolProcessor(0x646e6523,iVar1 + 0x39d);
  puVar4 = (uint64_t *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8));
  *puVar4 = 0xa0a6669646e6523;
  *(int8_t *)(puVar4 + 1) = 0;
  *(int *)(unaff_RDI + 0x10) = iVar1 + 0x39d;
  return;
}





// 函数: void FUN_1803437c9(void)
void FUN_1803437c9(void)

{
  return;
}





// 函数: void FUN_1803437e0(uint64_t param_1,int64_t param_2,int64_t param_3)
void FUN_1803437e0(uint64_t param_1,int64_t param_2,int64_t param_3)

{
  int iVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (*(char *)(param_3 + 0x10f9) == '\0') {
    iVar4 = iVar1 + 0x20;
    CoreMemoryPoolProcessor(param_2,iVar4);
    puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar2 = 0x66656423;
    puVar2[1] = 0x20656e69;
    puVar2[2] = 0x65786950;
    puVar2[3] = 0x68735f6c;
    puVar2[4] = 0x72656461;
    puVar2[5] = 0x706e695f;
    puVar2[6] = 0x745f7475;
    puVar2[7] = 0x20657079;
    *(int8_t *)(puVar2 + 8) = 0;
    *(int *)(param_2 + 0x10) = iVar4;
    if (0 < *(int *)(param_3 + 0x50)) {
      CoreMemoryPoolProcessor(param_2,iVar4 + *(int *)(param_3 + 0x50));
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
             *(uint64_t *)(param_3 + 0x48),(int64_t)(*(int *)(param_3 + 0x50) + 1));
    }
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x21);
    *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 10;
    *(int *)(param_2 + 0x10) = iVar1 + 0x21;
    return;
  }
  CoreMemoryPoolProcessor(param_2,iVar1 + 0x14);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar2 = 0x20666923;
  puVar2[1] = 0x5f455355;
  puVar2[2] = 0x53534554;
  puVar2[3] = 0x54414c45;
  puVar2[4] = 0xa4e4f49;
  *(int8_t *)(puVar2 + 5) = 0;
  *(int *)(param_2 + 0x10) = iVar1 + 0x14;
  iVar4 = iVar1 + 0x35;
  CoreMemoryPoolProcessor(param_2,iVar4);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar2 = 0x65642320;
  puVar2[1] = 0x656e6966;
  puVar2[2] = 0x78695020;
  puVar2[3] = 0x735f6c65;
  puVar2[4] = 0x65646168;
  puVar2[5] = 0x6e695f72;
  puVar2[6] = 0x5f747570;
  puVar2[7] = 0x65707974;
  *(int16_t *)(puVar2 + 8) = 0x20;
  *(int *)(param_2 + 0x10) = iVar4;
  if (0 < *(int *)(param_3 + 0x1370)) {
    CoreMemoryPoolProcessor(param_2,iVar4 + *(int *)(param_3 + 0x1370));
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
           *(uint64_t *)(param_3 + 0x1368),(int64_t)(*(int *)(param_3 + 0x1370) + 1));
  }
  CoreMemoryPoolProcessor(param_2,iVar1 + 0x3c);
  *(uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) =
       0xa65736c65230a;
  *(int *)(param_2 + 0x10) = iVar1 + 0x3c;
  iVar4 = iVar1 + 0x5d;
  CoreMemoryPoolProcessor(param_2,iVar4);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar2 = 0x65642320;
  puVar2[1] = 0x656e6966;
  puVar2[2] = 0x78695020;
  puVar2[3] = 0x735f6c65;
  puVar2[4] = 0x65646168;
  puVar2[5] = 0x6e695f72;
  puVar2[6] = 0x5f747570;
  puVar2[7] = 0x65707974;
  *(int16_t *)(puVar2 + 8) = 0x20;
  *(int *)(param_2 + 0x10) = iVar4;
  if (0 < *(int *)(param_3 + 0x50)) {
    CoreMemoryPoolProcessor(param_2,iVar4 + *(int *)(param_3 + 0x50));
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
           *(uint64_t *)(param_3 + 0x48),(int64_t)(*(int *)(param_3 + 0x50) + 1));
  }
  CoreMemoryPoolProcessor(param_2,iVar1 + 0x66);
  puVar3 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar3 = 0xa6669646e65230a;
  *(int16_t *)(puVar3 + 1) = 10;
  *(int *)(param_2 + 0x10) = iVar1 + 0x66;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180343a00(uint64_t param_1,int64_t param_2,uint64_t param_3)
void FUN_180343a00(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  int32_t *puVar1;
  void *puVar2;
  uint uVar3;
  int iVar4;
  int64_t lVar5;
  int8_t auStack_e8 [32];
  int32_t uStack_c8;
  void *puStack_c0;
  void *puStack_b8;
  uint uStack_b0;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  int64_t lStack_98;
  void *puStack_88;
  void *puStack_80;
  int iStack_78;
  int32_t uStack_70;
  uint64_t uStack_68;
  void *puStack_60;
  int8_t *puStack_58;
  int32_t uStack_50;
  int8_t auStack_48 [16];
  uint64_t uStack_38;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_e8;
  uStack_c8 = 0;
  FUN_180343ee0(param_1,&puStack_88);
  puStack_60 = &system_config_ptr;
  puStack_58 = auStack_48;
  auStack_48[0] = 0;
  uStack_50 = 6;
  strcpy_s(auStack_48,0x10,&rendering_buffer_2588_ptr);
  uStack_c8 = 2;
  SystemCore_EncryptionEngine0(&puStack_c0,&puStack_60);
  uStack_c8 = 0;
  puStack_60 = &system_state_ptr;
  uVar3 = uStack_b0 + 0x10;
  CoreMemoryPoolProcessor(&puStack_c0,uVar3);
  puVar1 = (int32_t *)(puStack_b8 + uStack_b0);
  *puVar1 = 0x64616853;
  puVar1[1] = 0x2f737265;
  puVar1[2] = 0x72756f53;
  puVar1[3] = 0x2f736563;
  *(int8_t *)(puVar1 + 4) = 0;
  uStack_b0 = uVar3;
  SystemCore_ConfigurationHandler0(param_2,param_3);
  iVar4 = *(int *)(param_2 + 0x10) + 0x10;
  CoreMemoryPoolProcessor(param_2,iVar4);
  puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar1 = 0x6e6f635f;
  puVar1[1] = 0x6e617473;
  puVar1[2] = 0x756f5f74;
  puVar1[3] = 0x74757074;
  *(int8_t *)(puVar1 + 4) = 0;
  *(int *)(param_2 + 0x10) = iVar4;
  if (0 < iVar4) {
    CoreMemoryPoolProcessor(&puStack_c0,iVar4 + uStack_b0);
                    // WARNING: Subroutine does not return
    memcpy(puStack_b8 + uStack_b0,*(uint64_t *)(param_2 + 8),
           (int64_t)(*(int *)(param_2 + 0x10) + 1));
  }
  iVar4 = uStack_b0 + 3;
  CoreMemoryPoolProcessor(&puStack_c0,iVar4);
  *(int32_t *)(puStack_b8 + uStack_b0) = 0x73722e;
  uStack_a0 = 0;
  lStack_98 = 0;
  puVar2 = &system_buffer_ptr;
  if (puStack_b8 != (void *)0x0) {
    puVar2 = puStack_b8;
  }
  uStack_b0 = iVar4;
  FUN_18062dee0(&uStack_a0,puVar2,&system_data_c7ec);
  lVar5 = lStack_98;
  puVar2 = &system_buffer_ptr;
  if (puStack_80 != (void *)0x0) {
    puVar2 = puStack_80;
  }
  fwrite(puVar2,(int64_t)iStack_78,1,lStack_98);
  if (lVar5 != 0) {
    fclose(lVar5);
    lStack_98 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    fclose(lVar5);
    lStack_98 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  puStack_c0 = &system_data_buffer_ptr;
  if (puStack_b8 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  puStack_b8 = (void *)0x0;
  uStack_a8 = 0;
  puStack_c0 = &system_state_ptr;
  puStack_88 = &system_data_buffer_ptr;
  if (puStack_80 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  puStack_80 = (void *)0x0;
  uStack_70 = 0;
  puStack_88 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180343c70(uint64_t param_1,int64_t param_2,uint64_t param_3)
void FUN_180343c70(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  void *puVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  int8_t auStack_e8 [32];
  int32_t uStack_c8;
  void *puStack_c0;
  void *puStack_b8;
  uint uStack_b0;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  int64_t lStack_98;
  void *puStack_88;
  void *puStack_80;
  int iStack_78;
  int32_t uStack_70;
  uint64_t uStack_68;
  void *puStack_60;
  int8_t *puStack_58;
  int32_t uStack_50;
  int8_t auStack_48 [16];
  uint64_t uStack_38;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_e8;
  uStack_c8 = 0;
  FUN_180343fc0(param_1,&puStack_88);
  puStack_60 = &system_config_ptr;
  puStack_58 = auStack_48;
  auStack_48[0] = 0;
  uStack_50 = 6;
  strcpy_s(auStack_48,0x10,&rendering_buffer_2588_ptr);
  uStack_c8 = 2;
  SystemCore_EncryptionEngine0(&puStack_c0,&puStack_60);
  uStack_c8 = 0;
  puStack_60 = &system_state_ptr;
  uVar4 = uStack_b0 + 0x10;
  CoreMemoryPoolProcessor(&puStack_c0,uVar4);
  puVar1 = (int32_t *)(puStack_b8 + uStack_b0);
  *puVar1 = 0x64616853;
  puVar1[1] = 0x2f737265;
  puVar1[2] = 0x72756f53;
  puVar1[3] = 0x2f736563;
  *(int8_t *)(puVar1 + 4) = 0;
  uStack_b0 = uVar4;
  SystemCore_ConfigurationHandler0(param_2,param_3);
  iVar5 = *(int *)(param_2 + 0x10) + 9;
  CoreMemoryPoolProcessor(param_2,iVar5);
  puVar2 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar2 = 0x6172647265766f5f;
  *(int16_t *)(puVar2 + 1) = 0x77;
  *(int *)(param_2 + 0x10) = iVar5;
  if (0 < iVar5) {
    CoreMemoryPoolProcessor(&puStack_c0,iVar5 + uStack_b0);
                    // WARNING: Subroutine does not return
    memcpy(puStack_b8 + uStack_b0,*(uint64_t *)(param_2 + 8),
           (int64_t)(*(int *)(param_2 + 0x10) + 1));
  }
  iVar5 = uStack_b0 + 3;
  CoreMemoryPoolProcessor(&puStack_c0,iVar5);
  *(int32_t *)(puStack_b8 + uStack_b0) = 0x73722e;
  uStack_a0 = 0;
  lStack_98 = 0;
  puVar3 = &system_buffer_ptr;
  if (puStack_b8 != (void *)0x0) {
    puVar3 = puStack_b8;
  }
  uStack_b0 = iVar5;
  FUN_18062dee0(&uStack_a0,puVar3,&system_data_c7ec);
  lVar6 = lStack_98;
  puVar3 = &system_buffer_ptr;
  if (puStack_80 != (void *)0x0) {
    puVar3 = puStack_80;
  }
  fwrite(puVar3,(int64_t)iStack_78,1,lStack_98);
  if (lVar6 != 0) {
    fclose(lVar6);
    lStack_98 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
    lVar6 = 0;
  }
  if (lVar6 != 0) {
    fclose(lVar6);
    lStack_98 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  puStack_c0 = &system_data_buffer_ptr;
  if (puStack_b8 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  puStack_b8 = (void *)0x0;
  uStack_a8 = 0;
  puStack_c0 = &system_state_ptr;
  puStack_88 = &system_data_buffer_ptr;
  if (puStack_80 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  puStack_80 = (void *)0x0;
  uStack_70 = 0;
  puStack_88 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_e8);
}



uint64_t *
FUN_180343ee0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int32_t *puVar2;
  int32_t uVar3;
  
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  iVar1 = *(int *)(param_2 + 2);
  CoreMemoryPoolProcessor(param_2,iVar1 + 0x1d,param_3,param_4,1,0xfffffffffffffffe);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 2) + param_2[1]);
  *puVar2 = 0x66656423;
  puVar2[1] = 0x20656e69;
  puVar2[2] = 0x534e4f43;
  puVar2[3] = 0x544e4154;
  *(uint64_t *)(puVar2 + 4) = 0x5f54555054554f5f;
  puVar2[6] = 0x53534150;
  *(int16_t *)(puVar2 + 7) = 10;
  *(int *)(param_2 + 2) = iVar1 + 0x1d;
  uVar3 = FUN_18033eb00(puVar2,param_2,param_3);
  uVar3 = FUN_18033f560(uVar3,param_2,param_3);
  uVar3 = FUN_180342f20(uVar3,param_2,param_3);
  FUN_1803440a0(uVar3,param_2,param_3);
  return param_2;
}



uint64_t *
FUN_180343fc0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int32_t *puVar2;
  int32_t uVar3;
  
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  iVar1 = *(int *)(param_2 + 2);
  CoreMemoryPoolProcessor(param_2,iVar1 + 0x16,param_3,param_4,1,0xfffffffffffffffe);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 2) + param_2[1]);
  *puVar2 = 0x66656423;
  puVar2[1] = 0x20656e69;
  puVar2[2] = 0x5245564f;
  puVar2[3] = 0x57415244;
  puVar2[4] = 0x5341505f;
  *(int16_t *)(puVar2 + 5) = 0xa53;
  *(int8_t *)((int64_t)puVar2 + 0x16) = 0;
  *(int *)(param_2 + 2) = iVar1 + 0x16;
  uVar3 = FUN_18033eb00(puVar2,param_2,param_3);
  uVar3 = FUN_18033f560(uVar3,param_2,param_3);
  uVar3 = FUN_180342f20(uVar3,param_2,param_3);
  FUN_1803447a0(uVar3,param_2,param_3);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



