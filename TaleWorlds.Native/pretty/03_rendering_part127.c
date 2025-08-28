#include "TaleWorlds.Native.Split.h"

// 03_rendering_part127.c - 1 个函数

// 函数: void FUN_180342f20(uint64_t param_1,int64_t param_2,int64_t param_3)
void FUN_180342f20(uint64_t param_1,int64_t param_2,int64_t param_3)

{
  int iVar1;
  int32_t *puVar2;
  int16_t *puVar3;
  uint64_t *puVar4;
  int iVar5;
  
  if (*(char *)(param_3 + 0x10f9) != '\0') {
    iVar1 = *(int *)(param_2 + 0x10);
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x14);
    puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar2 = 0x20666923;
    puVar2[1] = 0x5f455355;
    puVar2[2] = 0x53534554;
    puVar2[3] = 0x54414c45;
    puVar2[4] = 0xa4e4f49;
    *(int8_t *)(puVar2 + 5) = 0;
    *(int *)(param_2 + 0x10) = iVar1 + 0x14;
    iVar5 = iVar1 + 0x35;
    CoreMemoryPoolProcessor(param_2,iVar5);
    puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar2 = 0x65642309;
    puVar2[1] = 0x656e6966;
    puVar2[2] = 0x6e6f4320;
    puVar2[3] = 0x6e617473;
    puVar2[4] = 0x73685f74;
    puVar2[5] = 0x74756f5f;
    puVar2[6] = 0x5f747570;
    puVar2[7] = 0x65707974;
    *(int16_t *)(puVar2 + 8) = 0x20;
    *(int *)(param_2 + 0x10) = iVar5;
    if (0 < *(int *)(param_3 + 0x1110)) {
      CoreMemoryPoolProcessor(param_2,iVar5 + *(int *)(param_3 + 0x1110));
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
             *(uint64_t *)(param_3 + 0x1108),(int64_t)(*(int *)(param_3 + 0x1110) + 1));
    }
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x37);
    puVar3 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar3 = 0xa0a;
    *(int8_t *)(puVar3 + 1) = 0;
    *(int *)(param_2 + 0x10) = iVar1 + 0x37;
    iVar5 = iVar1 + 0x58;
    CoreMemoryPoolProcessor(param_2,iVar5);
    puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar2 = 0x65642309;
    puVar2[1] = 0x656e6966;
    puVar2[2] = 0x6c754820;
    puVar2[3] = 0x68735f6c;
    puVar2[4] = 0x72656461;
    puVar2[5] = 0x74756f5f;
    puVar2[6] = 0x5f747570;
    puVar2[7] = 0x65707974;
    *(int16_t *)(puVar2 + 8) = 0x20;
    *(int *)(param_2 + 0x10) = iVar5;
    if (0 < *(int *)(param_3 + 0x1240)) {
      CoreMemoryPoolProcessor(param_2,iVar5 + *(int *)(param_3 + 0x1240));
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
             *(uint64_t *)(param_3 + 0x1238),(int64_t)(*(int *)(param_3 + 0x1240) + 1));
    }
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x5a);
    puVar3 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar3 = 0xa0a;
    *(int8_t *)(puVar3 + 1) = 0;
    *(int *)(param_2 + 0x10) = iVar1 + 0x5a;
    iVar5 = iVar1 + 0x7d;
    CoreMemoryPoolProcessor(param_2,iVar5);
    puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar2 = 0x65642309;
    puVar2[1] = 0x656e6966;
    puVar2[2] = 0x6d6f4420;
    puVar2[3] = 0x5f6e6961;
    puVar2[4] = 0x64616873;
    puVar2[5] = 0x6f5f7265;
    puVar2[6] = 0x75707475;
    puVar2[7] = 0x79745f74;
    puVar2[8] = 0x206570;
    *(int *)(param_2 + 0x10) = iVar5;
    if (0 < *(int *)(param_3 + 0x1370)) {
      CoreMemoryPoolProcessor(param_2,iVar5 + *(int *)(param_3 + 0x1370));
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
             *(uint64_t *)(param_3 + 0x1368),(int64_t)(*(int *)(param_3 + 0x1370) + 1));
    }
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x7f);
    puVar3 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar3 = 0xa0a;
    *(int8_t *)(puVar3 + 1) = 0;
    *(int *)(param_2 + 0x10) = iVar1 + 0x7f;
    iVar5 = iVar1 + 0xa8;
    CoreMemoryPoolProcessor(param_2,iVar5);
    puVar4 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar4 = 0x656e696665642309;
    puVar4[1] = 0x746172656e654720;
    *(int32_t *)(puVar4 + 2) = 0x685f6465;
    *(int32_t *)((int64_t)puVar4 + 0x14) = 0x5f6c6c75;
    *(int32_t *)(puVar4 + 3) = 0x64616873;
    *(int32_t *)((int64_t)puVar4 + 0x1c) = 0x665f7265;
    puVar4[4] = 0x656d616e5f636e75;
    *(int16_t *)(puVar4 + 5) = 0x20;
    *(int *)(param_2 + 0x10) = iVar5;
    if (0 < *(int *)(param_3 + 0x12d8)) {
      CoreMemoryPoolProcessor(param_2,iVar5 + *(int *)(param_3 + 0x12d8));
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
             *(uint64_t *)(param_3 + 0x12d0),(int64_t)(*(int *)(param_3 + 0x12d8) + 1));
    }
    CoreMemoryPoolProcessor(param_2,iVar1 + 0xaa);
    puVar3 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar3 = 0xa0a;
    *(int8_t *)(puVar3 + 1) = 0;
    *(int *)(param_2 + 0x10) = iVar1 + 0xaa;
    iVar5 = iVar1 + 0xd5;
    CoreMemoryPoolProcessor(param_2,iVar5);
    puVar4 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar4 = 0x656e696665642309;
    puVar4[1] = 0x746172656e654720;
    *(int32_t *)(puVar4 + 2) = 0x645f6465;
    *(int32_t *)((int64_t)puVar4 + 0x14) = 0x69616d6f;
    *(int32_t *)(puVar4 + 3) = 0x68735f6e;
    *(int32_t *)((int64_t)puVar4 + 0x1c) = 0x72656461;
    puVar4[4] = 0x616e5f636e75665f;
    *(int32_t *)(puVar4 + 5) = 0x20656d;
    *(int *)(param_2 + 0x10) = iVar5;
    if (0 < *(int *)(param_3 + 0x1408)) {
      CoreMemoryPoolProcessor(param_2,iVar5 + *(int *)(param_3 + 0x1408));
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
             *(uint64_t *)(param_3 + 0x1400),(int64_t)(*(int *)(param_3 + 0x1408) + 1));
    }
    CoreMemoryPoolProcessor(param_2,iVar1 + 0xd7);
    puVar3 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar3 = 0xa0a;
    *(int8_t *)(puVar3 + 1) = 0;
    *(int *)(param_2 + 0x10) = iVar1 + 0xd7;
    CoreMemoryPoolProcessor(param_2,iVar1 + 0xe7);
    puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar2 = 0x20666923;
    puVar2[1] = 0x4c4c5548;
    puVar2[2] = 0x4148535f;
    puVar2[3] = 0xa524544;
    *(int8_t *)(puVar2 + 4) = 0;
    *(int *)(param_2 + 0x10) = iVar1 + 0xe7;
    CoreMemoryPoolProcessor(param_2,iVar1 + 0xf8);
    puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar2 = 0x6f645b09;
    puVar2[1] = 0x6e69616d;
    puVar2[2] = 0x72742228;
    puVar2[3] = 0x5d292269;
    *(int16_t *)(puVar2 + 4) = 10;
    *(int *)(param_2 + 0x10) = iVar1 + 0xf8;
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x11a);
    puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
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
    *(int *)(param_2 + 0x10) = iVar1 + 0x11a;
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x13b);
    puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar2 = 0x756f5b09;
    puVar2[1] = 0x74757074;
    puVar2[2] = 0x6f706f74;
    puVar2[3] = 0x79676f6c;
    puVar2[4] = 0x72742228;
    puVar2[5] = 0x676e6169;
    puVar2[6] = 0x635f656c;
    puVar2[7] = 0x5d292277;
    *(int16_t *)(puVar2 + 8) = 10;
    *(int *)(param_2 + 0x10) = iVar1 + 0x13b;
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x155);
    puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar2 = 0x756f5b09;
    puVar2[1] = 0x74757074;
    puVar2[2] = 0x746e6f63;
    puVar2[3] = 0x706c6f72;
    *(uint64_t *)(puVar2 + 4) = 0x29332873746e696f;
    *(int16_t *)(puVar2 + 6) = 0xa5d;
    *(int8_t *)((int64_t)puVar2 + 0x1a) = 0;
    *(int *)(param_2 + 0x10) = iVar1 + 0x155;
    iVar5 = iVar1 + 0x16a;
    CoreMemoryPoolProcessor(param_2,iVar5);
    puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar2 = 0x61705b09;
    puVar2[1] = 0x63686374;
    puVar2[2] = 0x74736e6f;
    puVar2[3] = 0x66746e61;
    puVar2[4] = 0x28636e75;
    *(int16_t *)(puVar2 + 5) = 0x22;
    *(int *)(param_2 + 0x10) = iVar5;
    if (0 < *(int *)(param_3 + 0x11a8)) {
      CoreMemoryPoolProcessor(param_2,iVar5 + *(int *)(param_3 + 0x11a8));
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
             *(uint64_t *)(param_3 + 0x11a0),(int64_t)(*(int *)(param_3 + 0x11a8) + 1));
    }
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x16e);
    puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar2 = 0xa5d2922;
    *(int8_t *)(puVar2 + 1) = 0;
    *(int *)(param_2 + 0x10) = iVar1 + 0x16e;
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x185);
    puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar2 = 0x616d5b09;
    puVar2[1] = 0x73657478;
    puVar2[2] = 0x63616673;
    puVar2[3] = 0x28726f74;
    *(uint64_t *)(puVar2 + 4) = 0xa5d29302e3631;
    *(int *)(param_2 + 0x10) = iVar1 + 0x185;
    iVar5 = iVar1 + 0x1b1;
    CoreMemoryPoolProcessor(param_2,iVar5);
    puVar4 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar4 = 0x68735f6c6c754809;
    puVar4[1] = 0x74756f5f72656461;
    *(int32_t *)(puVar4 + 2) = 0x5f747570;
    *(int32_t *)((int64_t)puVar4 + 0x14) = 0x65707974;
    *(int32_t *)(puVar4 + 3) = 0x69616d20;
    *(int32_t *)((int64_t)puVar4 + 0x1c) = 0x73685f6e;
    puVar4[4] = 0x61507475706e4928;
    *(int32_t *)(puVar4 + 5) = 0x3c686374;
    *(int8_t *)((int64_t)puVar4 + 0x2c) = 0;
    *(int *)(param_2 + 0x10) = iVar5;
    if (0 < *(int *)(param_3 + 0x50)) {
      CoreMemoryPoolProcessor(param_2,iVar5 + *(int *)(param_3 + 0x50));
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
             *(uint64_t *)(param_3 + 0x48),(int64_t)(*(int *)(param_3 + 0x50) + 1));
    }
    CoreMemoryPoolProcessor(param_2,iVar1 + 499);
    puVar4 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
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
    *(int *)(param_2 + 0x10) = iVar1 + 499;
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x1f6);
    *(int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 0xa7b09;
    *(int *)(param_2 + 0x10) = iVar1 + 0x1f6;
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x249);
    puVar4 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
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
    *(int *)(param_2 + 0x10) = iVar1 + 0x249;
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x24c);
    *(int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 0xa7d09;
    *(int *)(param_2 + 0x10) = iVar1 + 0x24c;
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x253);
    *(uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) =
         0xa6669646e6523;
    *(int *)(param_2 + 0x10) = iVar1 + 0x253;
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x265);
    puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar2 = 0x20666923;
    puVar2[1] = 0x414d4f44;
    puVar2[2] = 0x535f4e49;
    puVar2[3] = 0x45444148;
    *(int16_t *)(puVar2 + 4) = 0xa52;
    *(int8_t *)((int64_t)puVar2 + 0x12) = 0;
    *(int *)(param_2 + 0x10) = iVar1 + 0x265;
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x276);
    puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar2 = 0x6f645b09;
    puVar2[1] = 0x6e69616d;
    puVar2[2] = 0x72742228;
    puVar2[3] = 0x5d292269;
    *(int16_t *)(puVar2 + 4) = 10;
    *(int *)(param_2 + 0x10) = iVar1 + 0x276;
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x325);
    puVar4 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
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
    *(int *)(param_2 + 0x10) = iVar1 + 0x325;
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x328);
    *(int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 0xa7b09;
    *(int *)(param_2 + 0x10) = iVar1 + 0x328;
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x38b);
    puVar4 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
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
    *(int *)(param_2 + 0x10) = iVar1 + 0x38b;
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x38e);
    *(int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 0xa7d09;
    *(int *)(param_2 + 0x10) = iVar1 + 0x38e;
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x395);
    *(uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) =
         0xa6669646e6523;
    *(int *)(param_2 + 0x10) = iVar1 + 0x395;
    CoreMemoryPoolProcessor(param_2,iVar1 + 0x39d);
    puVar4 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar4 = 0xa0a6669646e6523;
    *(int8_t *)(puVar4 + 1) = 0;
    *(int *)(param_2 + 0x10) = iVar1 + 0x39d;
  }
  return;
}





