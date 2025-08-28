#include "TaleWorlds.Native.Split.h"

// 99_part_06_part029_sub001.c - 7 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_06_part029.c - 7 个函数


// 函数: void FUN_1803c05d0(longlong param_1,longlong param_2,uint64_t param_3)
void FUN_1803c05d0(longlong param_1,longlong param_2,uint64_t param_3)

{
  longlong lVar1;
  uint64_t *puVar2;
  char *pcVar3;
  uint64_t *puVar5;
  uint64_t uVar6;
  longlong lVar7;
  void *puVar8;
  uint uVar9;
  uint uVar10;
  void *puVar11;
  char *pcVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((*(longlong *)(lVar1 + 0x268) == 0) ||
     (((*(uint *)(*(longlong *)(lVar1 + 0x268) + 0x2ac) ^ *(uint *)(lVar1 + 0x2ac)) & 0xfedd7fff) !=
      0)) {
    uVar10 = *(uint *)(lVar1 + 0x2ac);
    puVar2 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    *(int32_t *)(puVar2 + 5) = 1;
    puVar2[6] = 0;
    puVar2[8] = 0;
    pcVar3 = "flags";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar2 = &UNK_180a06b78;
    puVar2[2] = pcVar4 + -0x180a06b77;
    uVar9 = uVar10 >> 4 & 0xf;
    if (uVar9 != 0) {
      puVar5 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      puVar5[6] = 0;
      puVar5[8] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &UNK_180a06ba4;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      FUN_180630b20(param_2,puVar5,&system_flag_3a84,&UNK_180a23600);
      FUN_180630c80(param_2,puVar5,&UNK_180a0696c,uVar9);
      if (puVar2[6] == 0) {
        puVar5[10] = 0;
        puVar2[6] = puVar5;
        puVar2[7] = puVar5;
        puVar5[4] = puVar2;
        puVar5[0xb] = 0;
      }
      else {
        puVar5[10] = puVar2[7];
        *(uint64_t **)(puVar2[7] + 0x58) = puVar5;
        puVar2[7] = puVar5;
        puVar5[4] = puVar2;
        puVar5[0xb] = 0;
      }
    }
    if ((uVar10 >> 10 & 1) != 0) {
      puVar5 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &UNK_180a06ba4;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      FUN_180630b20(param_2,puVar5,&system_flag_3a84,&UNK_180a235f8);
      FUN_180630b20(param_2,puVar5,&UNK_180a0696c,&UNK_180a06418);
    }
    if ((uVar10 >> 0xd & 1) != 0) {
      puVar5 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &UNK_180a06ba4;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      FUN_180630b20(param_2,puVar5,&system_flag_3a84,&UNK_180a23808);
      FUN_180630b20(param_2,puVar5,&UNK_180a0696c,&UNK_180a06418);
      if (puVar2[6] == 0) {
        puVar5[10] = 0;
        puVar2[6] = puVar5;
      }
      else {
        puVar5[10] = puVar2[7];
        *(uint64_t **)(puVar2[7] + 0x58) = puVar5;
      }
      puVar2[7] = puVar5;
      puVar5[4] = puVar2;
      puVar5[0xb] = 0;
    }
    if ((uVar10 >> 0x16 & 1) != 0) {
      puVar5 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &UNK_180a06ba4;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      FUN_180630b20(param_2,puVar5,&system_flag_3a84,&UNK_180a237f0);
      FUN_180630b20(param_2,puVar5,&UNK_180a0696c,&UNK_180a06418);
      if (puVar2[6] == 0) {
        puVar5[10] = 0;
        puVar2[6] = puVar5;
      }
      else {
        puVar5[10] = puVar2[7];
        *(uint64_t **)(puVar2[7] + 0x58) = puVar5;
      }
      puVar2[7] = puVar5;
      puVar5[4] = puVar2;
      puVar5[0xb] = 0;
    }
    if ((uVar10 >> 8 & 1) != 0) {
      puVar5 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &UNK_180a06ba4;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      FUN_180630b20(param_2,puVar5,&system_flag_3a84,&UNK_180a237d8);
      FUN_180630b20(param_2,puVar5,&UNK_180a0696c,&UNK_180a06418);
      if (puVar2[6] == 0) {
        puVar5[10] = 0;
        puVar2[6] = puVar5;
      }
      else {
        puVar5[10] = puVar2[7];
        *(uint64_t **)(puVar2[7] + 0x58) = puVar5;
      }
      puVar2[7] = puVar5;
      puVar5[4] = puVar2;
      puVar5[0xb] = 0;
    }
    if ((uVar10 >> 0x12 & 1) != 0) {
      puVar5 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &UNK_180a06ba4;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      FUN_180630b20(param_2,puVar5,&system_flag_3a84,&UNK_180a238b0);
      FUN_180630b20(param_2,puVar5,&UNK_180a0696c,&UNK_180a06418);
      if (puVar2[6] == 0) {
        puVar5[10] = 0;
        puVar2[6] = puVar5;
      }
      else {
        puVar5[10] = puVar2[7];
        *(uint64_t **)(puVar2[7] + 0x58) = puVar5;
      }
      puVar2[7] = puVar5;
      puVar5[4] = puVar2;
      puVar5[0xb] = 0;
    }
    if ((uVar10 >> 0xb & 1) != 0) {
      puVar5 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &UNK_180a06ba4;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      FUN_180630b20(param_2,puVar5,&system_flag_3a84,&UNK_180a237b8);
      FUN_180630b20(param_2,puVar5,&UNK_180a0696c,&UNK_180a06418);
      if (puVar2[6] == 0) {
        puVar5[10] = 0;
        puVar2[6] = puVar5;
      }
      else {
        puVar5[10] = puVar2[7];
        *(uint64_t **)(puVar2[7] + 0x58) = puVar5;
      }
      puVar2[7] = puVar5;
      puVar5[4] = puVar2;
      puVar5[0xb] = 0;
    }
    if ((uVar10 >> 0xc & 1) != 0) {
      puVar5 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &UNK_180a06ba4;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      FUN_180630b20(param_2,puVar5,&system_flag_3a84,&UNK_180a23868);
      FUN_180630b20(param_2,puVar5,&UNK_180a0696c,&UNK_180a06418);
      if (puVar2[6] == 0) {
        puVar5[10] = 0;
        puVar2[6] = puVar5;
      }
      else {
        puVar5[10] = puVar2[7];
        *(uint64_t **)(puVar2[7] + 0x58) = puVar5;
      }
      puVar2[7] = puVar5;
      puVar5[4] = puVar2;
      puVar5[0xb] = 0;
    }
    if ((uVar10 >> 0x10 & 1) != 0) {
      puVar5 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &UNK_180a06ba4;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      FUN_180630b20(param_2,puVar5,&system_flag_3a84,&UNK_180a23850);
      FUN_180630b20(param_2,puVar5,&UNK_180a0696c,&UNK_180a06418);
      if (puVar2[6] == 0) {
        puVar5[10] = 0;
        puVar2[6] = puVar5;
      }
      else {
        puVar5[10] = puVar2[7];
        *(uint64_t **)(puVar2[7] + 0x58) = puVar5;
      }
      puVar2[7] = puVar5;
      puVar5[4] = puVar2;
      puVar5[0xb] = 0;
    }
    if ((int)uVar10 < 0) {
      puVar5 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &UNK_180a06ba4;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      FUN_180630b20(param_2,puVar5,&system_flag_3a84,&UNK_180a23830);
      FUN_180630b20(param_2,puVar5,&UNK_180a0696c,&UNK_180a06418);
      if (puVar2[6] == 0) {
        puVar5[10] = 0;
        puVar2[6] = puVar5;
      }
      else {
        puVar5[10] = puVar2[7];
        *(uint64_t **)(puVar2[7] + 0x58) = puVar5;
      }
      puVar2[7] = puVar5;
      puVar5[4] = puVar2;
      puVar5[0xb] = 0;
    }
    if ((uVar10 >> 0xe & 1) != 0) {
      puVar5 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &UNK_180a06ba4;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      FUN_180630b20(param_2,puVar5,&system_flag_3a84,&UNK_180a23818);
      FUN_180630b20(param_2,puVar5,&UNK_180a0696c,&UNK_180a06418);
      func_0x0001800a1de0(puVar2,puVar5);
    }
    if ((uVar10 >> 0x1a & 1) != 0) {
      puVar5 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &UNK_180a06ba4;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      FUN_180630b20(param_2,puVar5,&system_flag_3a84,&UNK_180a238e0);
      FUN_180630b20(param_2,puVar5,&UNK_180a0696c,&UNK_180a06418);
      func_0x0001800a1de0(puVar2,puVar5);
    }
    if ((uVar10 >> 0x14 & 1) != 0) {
      puVar5 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &UNK_180a06ba4;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      FUN_180630b20(param_2,puVar5,&system_flag_3a84,&UNK_180a238c8);
      FUN_180630b20(param_2,puVar5,&UNK_180a0696c,&UNK_180a06418);
      func_0x0001800a1de0(puVar2,puVar5);
    }
    if ((uVar10 >> 0x13 & 1) != 0) {
      puVar5 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &UNK_180a06ba4;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      FUN_180630b20(param_2,puVar5,&system_flag_3a84,&UNK_180a23890);
      FUN_180630b20(param_2,puVar5,&UNK_180a0696c,&UNK_180a06418);
      func_0x0001800a1de0(puVar2,puVar5);
    }
    if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x268) == 0) {
      func_0x0001802bf540(param_3,puVar2);
    }
    else {
      func_0x0001800a1de0();
    }
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if ((*(longlong *)(lVar1 + 0x268) != 0) &&
     (*(int *)(lVar1 + 0x2c4) == *(int *)(*(longlong *)(lVar1 + 0x268) + 0x2c4))) {
    return;
  }
  uVar10 = *(uint *)(lVar1 + 0x2c4);
  puVar2 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  *(int32_t *)(puVar2 + 5) = 1;
  puVar2[6] = 0;
  puVar2[8] = 0;
  pcVar3 = "visibility_masks";
  do {
    pcVar4 = pcVar3;
    pcVar3 = pcVar4 + 1;
  } while (*pcVar3 != '\0');
  *puVar2 = &UNK_180a238f8;
  puVar2[2] = pcVar4 + -0x180a238f7;
  puVar8 = &UNK_180a06420;
  lVar7 = *(longlong *)(param_1 + 8);
  uVar9 = uVar10 & 4;
  lVar1 = *(longlong *)(lVar7 + 0x268);
  if (lVar1 == 0) {
LAB_1803c1030:
    if (uVar9 != 0) {
LAB_1803c1034:
      uVar6 = FUN_18062f5e0(param_2,1,&UNK_180a23990);
      FUN_180630b20(param_2,uVar6,&system_flag_3a84,&UNK_180a23980);
      puVar11 = &UNK_180a06420;
      if (uVar9 != 0) {
        puVar11 = &UNK_180a06418;
      }
      FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar11);
      func_0x0001800a1de0(puVar2,uVar6);
      lVar7 = *(longlong *)(param_1 + 8);
    }
  }
  else {
    if (uVar9 != (*(uint *)(lVar1 + 0x2c4) & 4)) goto LAB_1803c1034;
    if (lVar1 == 0) goto LAB_1803c1030;
  }
  lVar1 = *(longlong *)(lVar7 + 0x268);
  uVar9 = uVar10 & 2;
  if (lVar1 == 0) {
LAB_1803c10b8:
    if (uVar9 != 0) {
LAB_1803c10bc:
      uVar6 = FUN_18062f5e0(param_2,1,&UNK_180a23990);
      FUN_180630b20(param_2,uVar6,&system_flag_3a84,&UNK_180a23948);
      puVar11 = &UNK_180a06420;
      if (uVar9 != 0) {
        puVar11 = &UNK_180a06418;
      }
      FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar11);
      func_0x0001800a1de0(puVar2,uVar6);
      lVar7 = *(longlong *)(param_1 + 8);
    }
  }
  else {
    if (uVar9 != (*(uint *)(lVar1 + 0x2c4) & 2)) goto LAB_1803c10bc;
    if (lVar1 == 0) goto LAB_1803c10b8;
  }
  lVar1 = *(longlong *)(lVar7 + 0x268);
  uVar10 = uVar10 & 8;
  if (lVar1 == 0) {
LAB_1803c1147:
    if (uVar10 == 0) goto LAB_1803c11a1;
  }
  else if (uVar10 == (*(uint *)(lVar1 + 0x2c4) & 8)) {
    if (lVar1 != 0) goto LAB_1803c11a1;
    goto LAB_1803c1147;
  }
  uVar6 = FUN_18062f5e0(param_2,1,&UNK_180a23990);
  FUN_180630b20(param_2,uVar6,&system_flag_3a84,&UNK_180a23a18);
  if (uVar10 != 0) {
    puVar8 = &UNK_180a06418;
  }
  FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar8);
  func_0x0001800a1de0(puVar2,uVar6);
LAB_1803c11a1:
  func_0x0001802bf540(param_3,puVar2);
  return;
}







// 函数: void FUN_1803c11d0(longlong param_1,longlong param_2,longlong param_3)
void FUN_1803c11d0(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint64_t *puVar5;
  char *pcVar6;
  uint64_t *puVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  void *puVar14;
  uint64_t uVar15;
  void *puStack_50;
  longlong lStack_48;
  int32_t uStack_38;
  char *pcVar7;
  
  uVar15 = 0xfffffffffffffffe;
  lVar9 = *(longlong *)(param_1 + 8);
  lVar13 = *(longlong *)(lVar9 + 0x268);
  if (lVar13 != 0) {
    iVar2 = *(int *)(lVar9 + 0xe0);
    iVar10 = *(int *)(lVar13 + 0xe0);
    if (iVar2 == iVar10) {
      if (iVar2 != 0) {
        pbVar4 = *(byte **)(lVar9 + 0xd8);
        lVar13 = *(longlong *)(lVar13 + 0xd8) - (longlong)pbVar4;
        do {
          pbVar1 = pbVar4 + lVar13;
          iVar10 = (uint)*pbVar4 - (uint)*pbVar1;
          if (iVar10 != 0) break;
          pbVar4 = pbVar4 + 1;
        } while (*pbVar1 != 0);
      }
    }
    else if (iVar2 != 0) goto LAB_1803c1264;
    if (iVar10 == 0) {
      return;
    }
  }
LAB_1803c1264:
  puVar5 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60,lVar13,lVar9,0xfffffffffffffffe);
  uVar12 = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[4] = 0;
  *(int32_t *)(puVar5 + 5) = 1;
  puVar5[6] = 0;
  puVar5[8] = 0;
  pcVar6 = "tags";
  do {
    pcVar7 = pcVar6;
    pcVar6 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  *puVar5 = &UNK_180a23574;
  puVar5[2] = pcVar7 + -0x180a23573;
LAB_1803c12c0:
  do {
    lVar9 = *(longlong *)(param_1 + 8);
    uVar3 = *(uint *)(lVar9 + 0xe0);
    if (uVar12 < uVar3) {
      pcVar6 = (char *)((longlong)(int)uVar12 + *(longlong *)(lVar9 + 0xd8));
      uVar11 = uVar12;
      do {
        if (*pcVar6 == ' ') {
          if (uVar11 != 0xffffffff) goto LAB_1803c12f9;
          break;
        }
        uVar11 = uVar11 + 1;
        pcVar6 = pcVar6 + 1;
      } while (uVar11 < uVar3);
    }
    uVar11 = uVar3;
LAB_1803c12f9:
    if (uVar12 != uVar11) {
      if ((int)uVar11 < (int)uVar12) {
LAB_1803c13fe:
        if (((*(longlong *)(lVar9 + 0x268) != 0) || (puVar5[6] != 0)) || (puVar5[8] != 0)) {
          if (*(longlong *)(param_3 + 0x30) == 0) {
            puVar5[10] = 0;
            *(uint64_t **)(param_3 + 0x30) = puVar5;
          }
          else {
            puVar5[10] = *(uint64_t *)(param_3 + 0x38);
            *(uint64_t **)(*(longlong *)(param_3 + 0x38) + 0x58) = puVar5;
          }
          *(uint64_t **)(param_3 + 0x38) = puVar5;
          puVar5[0xb] = 0;
          puVar5[4] = param_3;
        }
        return;
      }
      puVar8 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60,uVar3,lVar9,uVar15);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[4] = 0;
      *(int32_t *)(puVar8 + 5) = 1;
      puVar8[6] = 0;
      puVar8[8] = 0;
      pcVar6 = "tag";
      do {
        pcVar7 = pcVar6;
        pcVar6 = pcVar7 + 1;
      } while (*pcVar6 != '\0');
      *puVar8 = &UNK_180a23570;
      puVar8[2] = pcVar7 + -0x180a2356f;
      lVar9 = FUN_180629a40(*(longlong *)(param_1 + 8) + 0xd0,&puStack_50,uVar12,uVar11);
      puVar14 = &system_buffer_ptr;
      if (*(void **)(lVar9 + 8) != (void *)0x0) {
        puVar14 = *(void **)(lVar9 + 8);
      }
      FUN_180630b20(param_2,puVar8,&system_flag_3a84,puVar14);
      puStack_50 = &UNK_180a3c3e0;
      if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_48 = 0;
      uStack_38 = 0;
      puStack_50 = &UNK_18098bcb0;
      if (puVar5[6] == 0) {
        puVar8[10] = 0;
        puVar5[6] = puVar8;
      }
      else {
        puVar8[10] = puVar5[7];
        *(uint64_t **)(puVar5[7] + 0x58) = puVar8;
      }
      puVar5[7] = puVar8;
      puVar8[4] = puVar5;
      puVar8[0xb] = 0;
      lVar9 = *(longlong *)(param_1 + 8);
      if (*(uint *)(lVar9 + 0xe0) == uVar11) goto LAB_1803c13fe;
      uVar12 = uVar11 + 1;
      goto LAB_1803c12c0;
    }
    uVar12 = uVar12 + 1;
  } while( true );
}







// 函数: void FUN_1803c1470(longlong param_1,longlong param_2,longlong param_3)
void FUN_1803c1470(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint64_t *puVar4;
  char *pcVar5;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float afStack_68 [4];
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  char *pcVar6;
  
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x168);
  puVar4 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[4] = 0;
  *(int32_t *)(puVar4 + 5) = 1;
  puVar4[6] = 0;
  puVar4[8] = 0;
  pcVar5 = "transform";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  puVar4[2] = pcVar6 + -0x180a2354f;
  *puVar4 = &UNK_180a23550;
  lVar9 = *(longlong *)(param_1 + 8);
  if (lVar10 == 0) {
    FUN_18062fb40(param_2,puVar4,&UNK_180a16808);
    lVar9 = *(longlong *)(param_1 + 8);
  }
  else {
    lVar1 = *(longlong *)(lVar9 + 0x268);
    if (lVar1 == 0) {
      if ((ABS(*(float *)(lVar9 + 0x60)) < 0.01) && (ABS(*(float *)(lVar9 + 100)) < 0.01)) {
        fVar11 = *(float *)(lVar9 + 0x68);
        goto LAB_1803c1588;
      }
LAB_1803c1590:
      FUN_18062fb40(param_2,puVar4,&UNK_180a16808);
    }
    else {
      if ((0.01 <= ABS(*(float *)(lVar9 + 0x60) - *(float *)(lVar1 + 0x60))) ||
         (0.01 <= ABS(*(float *)(lVar9 + 100) - *(float *)(lVar1 + 100)))) goto LAB_1803c1590;
      fVar11 = *(float *)(lVar9 + 0x68) - *(float *)(lVar1 + 0x68);
LAB_1803c1588:
      if (0.01 <= ABS(fVar11)) goto LAB_1803c1590;
    }
    lVar9 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(lVar9 + 0x268) != 0) {
      cVar3 = func_0x000180285980(lVar9 + 0x30,*(longlong *)(lVar9 + 0x268) + 0x30);
      if (cVar3 == '\0') goto LAB_1803c180c;
    }
  }
  if (*(longlong *)(lVar9 + 0x268) == 0) {
    pfVar7 = (float *)&system_flag_1400;
  }
  else {
    pfVar7 = (float *)(*(longlong *)(lVar9 + 0x268) + 0x30);
  }
  if (((((0.001 <= ABS(*(float *)(lVar9 + 0x30) - *pfVar7)) ||
        (0.001 <= ABS(*(float *)(lVar9 + 0x34) - pfVar7[1]))) ||
       (0.001 <= ABS(*(float *)(lVar9 + 0x38) - pfVar7[2]))) ||
      (((uStack_48._0_4_ = (float)*(uint64_t *)(pfVar7 + 4),
        0.001 <= ABS(*(float *)(lVar9 + 0x40) - (float)uStack_48) ||
        (uStack_48._4_4_ = (float)((ulonglong)*(uint64_t *)(pfVar7 + 4) >> 0x20),
        0.001 <= ABS(*(float *)(lVar9 + 0x44) - uStack_48._4_4_))) ||
       ((uStack_40._0_4_ = (float)*(uint64_t *)(pfVar7 + 6),
        0.001 <= ABS(*(float *)(lVar9 + 0x48) - (float)uStack_40) ||
        ((uStack_38._0_4_ = (float)*(uint64_t *)(pfVar7 + 8),
         0.001 <= ABS(*(float *)(lVar9 + 0x50) - (float)uStack_38) ||
         (uStack_38._4_4_ = (float)((ulonglong)*(uint64_t *)(pfVar7 + 8) >> 0x20),
         0.001 <= ABS(*(float *)(lVar9 + 0x54) - uStack_38._4_4_))))))))) ||
     (uStack_30._0_4_ = (float)*(uint64_t *)(pfVar7 + 10),
     0.001 <= ABS(*(float *)(lVar9 + 0x58) - (float)uStack_30))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((lVar10 == 0) || (!bVar2)) {
    uStack_58 = *(uint64_t *)(lVar9 + 0x30);
    uStack_50 = *(uint64_t *)(lVar9 + 0x38);
    uStack_48 = *(uint64_t *)(lVar9 + 0x40);
    uStack_40 = *(uint64_t *)(lVar9 + 0x48);
    uStack_38 = *(uint64_t *)(lVar9 + 0x50);
    uStack_30 = *(uint64_t *)(lVar9 + 0x58);
    FUN_1802bfc90(&uStack_58,afStack_68);
    cVar3 = FUN_1801be0f0(&uStack_58);
    if (cVar3 == '\0') {
      FUN_180630560(param_2,puVar4,&UNK_180a23520,&uStack_58);
    }
    else {
      FUN_1801c1720(&uStack_58,&fStack_78);
      FUN_18062fb40(param_2,puVar4,&UNK_180a23508,&fStack_78);
    }
    lVar9 = *(longlong *)(param_1 + 8) + 0x30;
    if (lVar10 == 0) {
      FUN_180085020(lVar9,&fStack_78);
      if (((ABS(fStack_78 - 1.0) < 1e-06) && (ABS(fStack_74 - 1.0) < 1e-06)) &&
         (ABS(fStack_70 - 1.0) < 1e-06)) goto LAB_1803c180c;
      pfVar7 = &fStack_78;
    }
    else {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x268);
      if (lVar10 == 0) {
        FUN_180085020(lVar9,&fStack_78);
        pfVar7 = afStack_68;
        afStack_68[0] = 1.0;
        afStack_68[1] = 1.0;
        afStack_68[2] = 1.0;
        afStack_68[3] = 3.4028235e+38;
        pfVar8 = &fStack_78;
      }
      else {
        FUN_180085020(lVar9,afStack_68);
        FUN_180085020(lVar10 + 0x30,&fStack_78);
        pfVar7 = &fStack_78;
        pfVar8 = afStack_68;
      }
      cVar3 = func_0x00018022a7c0(pfVar8,pfVar7);
      if (cVar3 != '\0') goto LAB_1803c180c;
      FUN_180085020(lVar9,afStack_68);
      pfVar7 = afStack_68;
    }
    FUN_18062fb40(param_2,puVar4,&UNK_180a0f108,pfVar7);
  }
LAB_1803c180c:
  if ((puVar4[6] != 0) || (puVar4[8] != 0)) {
    if (*(longlong *)(param_3 + 0x30) == 0) {
      puVar4[10] = 0;
      *(uint64_t **)(param_3 + 0x30) = puVar4;
    }
    else {
      puVar4[10] = *(uint64_t *)(param_3 + 0x38);
      *(uint64_t **)(*(longlong *)(param_3 + 0x38) + 0x58) = puVar4;
    }
    *(uint64_t **)(param_3 + 0x38) = puVar4;
    puVar4[4] = param_3;
    puVar4[0xb] = 0;
  }
  return;
}







// 函数: void FUN_1803c1870(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
void FUN_1803c1870(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,uint64_t param_6)

{
  longlong *plVar1;
  int iVar2;
  uint64_t *puVar3;
  char *pcVar4;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar9;
  longlong lVar10;
  char *pcVar5;
  ulonglong uVar8;
  
  puVar3 = (uint64_t *)FUN_1804c1300(param_4 + 0x60,0x60);
  uVar8 = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[4] = 0;
  *(int32_t *)(puVar3 + 5) = 1;
  puVar3[6] = 0;
  puVar3[8] = 0;
  pcVar4 = "components";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  *puVar3 = &UNK_180a19c78;
  puVar3[2] = pcVar5 + -0x180a19c77;
  lVar6 = *param_1;
  uVar9 = uVar8;
  if (param_1[1] - lVar6 >> 3 != 0) {
    do {
      lVar10 = 0;
      plVar1 = *(longlong **)(uVar9 + lVar6);
      if ((param_2[1] - *param_2 >> 3 != 0) &&
         ((param_3[1] - *param_3 >> 3 == 0 ||
          (lVar10 = *(longlong *)(uVar9 + *param_3), lVar10 == 0)))) {
        lVar10 = *(longlong *)(uVar9 + *param_2);
      }
      (**(code **)(*plVar1 + 0x70))(plVar1,param_4,puVar3,lVar10,(int)uVar8);
      iVar2 = (**(code **)(*plVar1 + 0x98))(plVar1);
      if (iVar2 == 0) {
        FUN_18027d420(plVar1,param_6);
      }
      lVar6 = *param_1;
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar9 = uVar9 + 8;
    } while ((ulonglong)(longlong)(int)uVar7 < (ulonglong)(param_1[1] - lVar6 >> 3));
  }
  if ((puVar3[6] != 0) || (puVar3[8] != 0)) {
    if (*(longlong *)(param_5 + 0x30) != 0) {
      puVar3[10] = *(uint64_t *)(param_5 + 0x38);
      *(uint64_t **)(*(longlong *)(param_5 + 0x38) + 0x58) = puVar3;
      *(uint64_t **)(param_5 + 0x38) = puVar3;
      puVar3[4] = param_5;
      puVar3[0xb] = 0;
      return;
    }
    puVar3[10] = 0;
    *(uint64_t **)(param_5 + 0x30) = puVar3;
    *(uint64_t **)(param_5 + 0x38) = puVar3;
    puVar3[4] = param_5;
    puVar3[0xb] = 0;
  }
  return;
}







// 函数: void FUN_1803c187a(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)
void FUN_1803c187a(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  uint64_t *puVar3;
  char *pcVar4;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar9;
  longlong lVar10;
  uint64_t in_stack_00000078;
  longlong in_stack_00000080;
  uint64_t in_stack_00000088;
  char *pcVar5;
  ulonglong uVar8;
  
  puVar3 = (uint64_t *)FUN_1804c1300(param_4 + 0x60,0x60);
  uVar8 = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[4] = 0;
  *(int32_t *)(puVar3 + 5) = 1;
  puVar3[6] = 0;
  puVar3[8] = 0;
  pcVar4 = "components";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  *puVar3 = &UNK_180a19c78;
  puVar3[2] = pcVar5 + -0x180a19c77;
  lVar6 = *param_1;
  uVar9 = uVar8;
  if (param_1[1] - lVar6 >> 3 != 0) {
    do {
      lVar10 = 0;
      plVar1 = *(longlong **)(uVar9 + lVar6);
      if ((param_2[1] - *param_2 >> 3 != 0) &&
         ((param_3[1] - *param_3 >> 3 == 0 ||
          (lVar10 = *(longlong *)(uVar9 + *param_3), lVar10 == 0)))) {
        lVar10 = *(longlong *)(uVar9 + *param_2);
      }
      (**(code **)(*plVar1 + 0x70))(plVar1,in_stack_00000078,puVar3,lVar10,(int)uVar8);
      iVar2 = (**(code **)(*plVar1 + 0x98))(plVar1);
      if (iVar2 == 0) {
        FUN_18027d420(plVar1,in_stack_00000088);
      }
      lVar6 = *param_1;
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar9 = uVar9 + 8;
    } while ((ulonglong)(longlong)(int)uVar7 < (ulonglong)(param_1[1] - lVar6 >> 3));
  }
  if ((puVar3[6] != 0) || (puVar3[8] != 0)) {
    if (*(longlong *)(in_stack_00000080 + 0x30) != 0) {
      puVar3[10] = *(uint64_t *)(in_stack_00000080 + 0x38);
      *(uint64_t **)(*(longlong *)(in_stack_00000080 + 0x38) + 0x58) = puVar3;
      *(uint64_t **)(in_stack_00000080 + 0x38) = puVar3;
      puVar3[4] = in_stack_00000080;
      puVar3[0xb] = 0;
      return;
    }
    puVar3[10] = 0;
    *(uint64_t **)(in_stack_00000080 + 0x30) = puVar3;
    *(uint64_t **)(in_stack_00000080 + 0x38) = puVar3;
    puVar3[4] = in_stack_00000080;
    puVar3[0xb] = 0;
  }
  return;
}







// 函数: void FUN_1803c18fc(uint64_t param_1,longlong param_2,longlong param_3)
void FUN_1803c18fc(uint64_t param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong unaff_RBX;
  int unaff_EBP;
  longlong *unaff_R14;
  uint64_t in_stack_00000078;
  longlong in_stack_00000080;
  uint64_t in_stack_00000088;
  
  do {
    plVar1 = *(longlong **)(param_3 + param_2);
    (**(code **)(*plVar1 + 0x70))(plVar1,in_stack_00000078);
    iVar2 = (**(code **)(*plVar1 + 0x98))(plVar1);
    if (iVar2 == 0) {
      FUN_18027d420(plVar1,in_stack_00000088);
    }
    param_2 = *unaff_R14;
    unaff_EBP = unaff_EBP + 1;
    param_3 = param_3 + 8;
  } while ((ulonglong)(longlong)unaff_EBP < (ulonglong)(unaff_R14[1] - param_2 >> 3));
  if ((*(longlong *)(unaff_RBX + 0x30) != 0) || (*(longlong *)(unaff_RBX + 0x40) != 0)) {
    if (*(longlong *)(in_stack_00000080 + 0x30) != 0) {
      *(uint64_t *)(unaff_RBX + 0x50) = *(uint64_t *)(in_stack_00000080 + 0x38);
      *(longlong *)(*(longlong *)(in_stack_00000080 + 0x38) + 0x58) = unaff_RBX;
      *(longlong *)(in_stack_00000080 + 0x38) = unaff_RBX;
      *(longlong *)(unaff_RBX + 0x20) = in_stack_00000080;
      *(uint64_t *)(unaff_RBX + 0x58) = 0;
      return;
    }
    *(uint64_t *)(unaff_RBX + 0x50) = 0;
    *(longlong *)(in_stack_00000080 + 0x30) = unaff_RBX;
    *(longlong *)(in_stack_00000080 + 0x38) = unaff_RBX;
    *(longlong *)(unaff_RBX + 0x20) = in_stack_00000080;
    *(uint64_t *)(unaff_RBX + 0x58) = 0;
  }
  return;
}







