#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part540.c - 8 个函数

// 函数: void FUN_180561b50(int64_t param_1,int64_t *param_2)
void FUN_180561b50(int64_t param_1,int64_t *param_2)

{
  int8_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  int8_t *puVar8;
  int64_t lVar9;
  int *piVar10;
  uint64_t uVar11;
  int iVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  
  puVar7 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = 6;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar6 = *(int32_t *)(param_1 + 8);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar6;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar6 = *(int32_t *)(param_1 + 0xc);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar6;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar6 = *(int32_t *)(param_1 + 0x10);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar6;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar6 = *(int32_t *)(param_1 + 0x14);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar6;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar6 = *(int32_t *)(param_1 + 0x18);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar6;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar6 = *(int32_t *)(param_1 + 0x1c);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar6;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar6 = *(int32_t *)(param_1 + 0x20);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar6;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar7 + (0x10 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  uVar6 = *(int32_t *)(param_1 + 0x28);
  uVar4 = *(int32_t *)(param_1 + 0x2c);
  uVar5 = *(int32_t *)(param_1 + 0x30);
  *puVar7 = *(int32_t *)(param_1 + 0x24);
  puVar7[1] = uVar6;
  puVar7[2] = uVar4;
  puVar7[3] = uVar5;
  param_2[1] = param_2[1] + 0x10;
  Audio_SoundManager(param_2,param_1 + 0x44);
  System_QueueProcessor(param_2,param_1 + 0x58);
  System_QueueProcessor(param_2,param_1 + 0x78);
  System_QueueProcessor(param_2,param_1 + 0x98);
  System_QueueProcessor(param_2,param_1 + 0xb8);
  System_QueueProcessor(param_2,param_1 + 0xf8);
  puVar7 = (int32_t *)param_2[1];
  uVar6 = *(int32_t *)(param_1 + 0x138);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar6;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar6 = *(int32_t *)(param_1 + 0x13c);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar6;
  param_2[1] = param_2[1] + 4;
  System_QueueProcessor(param_2,param_1 + 0x118);
  puVar7 = (int32_t *)param_2[1];
  uVar6 = *(int32_t *)(param_1 + 0x140);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar6;
  puVar7 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar7;
  uVar6 = *(int32_t *)(param_1 + 0x144);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar6;
  puVar8 = (int8_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar8;
  uVar1 = *(int8_t *)(param_1 + 0x148);
  if ((uint64_t)((*param_2 - (int64_t)puVar8) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar8 + (1 - *param_2));
    puVar8 = (int8_t *)param_2[1];
  }
  *puVar8 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 1);
  param_2[1] = (int64_t)puVar7;
  uVar6 = *(int32_t *)(param_1 + 0x40);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  *puVar7 = uVar6;
  param_2[1] = param_2[1] + 4;
  System_QueueProcessor(param_2,param_1 + 0xd8);
  System_QueueProcessor(param_2,param_1 + 0x170);
  System_QueueProcessor(param_2,param_1 + 400);
  puVar8 = (int8_t *)param_2[1];
  uVar1 = *(int8_t *)(param_1 + 0x1b0);
  if ((uint64_t)((*param_2 - (int64_t)puVar8) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar8 + (1 - *param_2));
    puVar8 = (int8_t *)param_2[1];
  }
  *puVar8 = uVar1;
  puVar8 = (int8_t *)(param_2[1] + 1);
  param_2[1] = (int64_t)puVar8;
  uVar1 = *(int8_t *)(param_1 + 0x1b1);
  if ((uint64_t)((*param_2 - (int64_t)puVar8) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar8 + (1 - *param_2));
    puVar8 = (int8_t *)param_2[1];
  }
  *puVar8 = uVar1;
  puVar8 = (int8_t *)(param_2[1] + 1);
  param_2[1] = (int64_t)puVar8;
  uVar1 = *(int8_t *)(param_1 + 0x1b2);
  if ((uint64_t)((*param_2 - (int64_t)puVar8) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar8 + (1 - *param_2));
    puVar8 = (int8_t *)param_2[1];
  }
  *puVar8 = uVar1;
  puVar7 = (int32_t *)(param_2[1] + 1);
  param_2[1] = (int64_t)puVar7;
  uVar2 = *(uint64_t *)(param_1 + 0x38);
  if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
    puVar7 = (int32_t *)param_2[1];
  }
  uVar14 = 0;
  *puVar7 = 0;
  lVar3 = *param_2;
  lVar9 = param_2[1] + 4;
  param_2[1] = lVar9;
  uVar15 = uVar14;
  if (lVar3 != 0) {
    uVar15 = lVar9 - lVar3;
  }
  if ((uint64_t)((lVar3 - lVar9) + param_2[2]) < 5) {
    System_BufferManager(param_2,(lVar9 - lVar3) + 4);
    lVar9 = param_2[1];
  }
  param_2[1] = lVar9 + 4;
  puVar13 = (uint64_t *)&processed_var_7520_ptr;
  uVar11 = uVar14;
  do {
    if ((puVar13[1] & uVar2) != 0) {
      UtilitiesSystem_ThreadManager(param_2,*puVar13);
      uVar11 = (uint64_t)((int)uVar11 + 1);
    }
    puVar13 = puVar13 + 2;
  } while ((int64_t)puVar13 < 0x1809f9070);
  *(int *)(uVar15 + *param_2) = (int)uVar11;
  lVar3 = *(int64_t *)(param_1 + 0x158);
  lVar9 = *(int64_t *)(param_1 + 0x150);
  piVar10 = (int *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)piVar10) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar10 + (4 - *param_2));
    piVar10 = (int *)param_2[1];
  }
  iVar12 = (int)(lVar3 - lVar9 >> 3);
  *piVar10 = iVar12;
  param_2[1] = param_2[1] + 4;
  if (0 < iVar12) {
    do {
      uVar6 = (**(code **)(**(int64_t **)(*(int64_t *)(param_1 + 0x150) + uVar14 * 8) + 0x18))();
      switch(uVar6) {
      case 0:
        puVar7 = (int32_t *)param_2[1];
        if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 0x11) {
          System_BufferManager(param_2,(int64_t)puVar7 + (0x10 - *param_2));
          puVar7 = (int32_t *)param_2[1];
        }
        *puVar7 = 0xc;
        param_2[1] = param_2[1] + 4;
        puVar13 = (uint64_t *)param_2[1];
        if (puVar13 == (uint64_t *)0x0) {
          puVar7 = (int32_t *)_errno();
          *puVar7 = 0x16;
          _invalid_parameter_noinfo();
        }
        else {
          if ((uint64_t)((*param_2 - (int64_t)puVar13) + param_2[2]) < 0xc) {
                    // WARNING: Subroutine does not return
            memset(puVar13,0);
          }
          *puVar13 = 0x6563616c70736964;
          *(int32_t *)(puVar13 + 1) = 0x746e656d;
        }
        param_2[1] = param_2[1] + 0xc;
        puVar7 = (int32_t *)param_2[1];
        lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x150) + uVar14 * 8);
        if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
          System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
          puVar7 = (int32_t *)param_2[1];
        }
        *puVar7 = 0;
        param_2[1] = param_2[1] + 4;
        FUN_180639f50(param_2,lVar3 + 8);
        uVar6 = *(int32_t *)(lVar3 + 0x18);
        goto code_r0x000180562696;
      case 1:
        puVar7 = (int32_t *)param_2[1];
        if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 0x12) {
          System_BufferManager(param_2,(int64_t)puVar7 + (0x11 - *param_2));
          puVar7 = (int32_t *)param_2[1];
        }
        *puVar7 = 0xd;
        param_2[1] = param_2[1] + 4;
        puVar13 = (uint64_t *)param_2[1];
        if (puVar13 == (uint64_t *)0x0) {
          puVar7 = (int32_t *)_errno();
          *puVar7 = 0x16;
          _invalid_parameter_noinfo();
          param_2[1] = param_2[1] + 0xd;
        }
        else {
          if ((uint64_t)((*param_2 - (int64_t)puVar13) + param_2[2]) < 0xd) {
                    // WARNING: Subroutine does not return
            memset(puVar13,0);
          }
          *puVar13 = 0x766f6d5f64617571;
          *(int32_t *)(puVar13 + 1) = 0x6e656d65;
          *(int8_t *)((int64_t)puVar13 + 0xc) = 0x74;
          param_2[1] = param_2[1] + 0xd;
        }
        goto code_r0x0001805625e4;
      case 2:
        puVar7 = (int32_t *)param_2[1];
        if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 0xf) {
          System_BufferManager(param_2,(int64_t)puVar7 + (0xe - *param_2));
          puVar7 = (int32_t *)param_2[1];
        }
        *puVar7 = 10;
        param_2[1] = param_2[1] + 4;
        puVar13 = (uint64_t *)param_2[1];
        if (puVar13 == (uint64_t *)0x0) {
          puVar7 = (int32_t *)_errno();
          *puVar7 = 0x16;
          _invalid_parameter_noinfo();
        }
        else {
          if ((uint64_t)((*param_2 - (int64_t)puVar13) + param_2[2]) < 10) {
                    // WARNING: Subroutine does not return
            memset(puVar13,0);
          }
          *puVar13 = 0x5f766f6d5f706962;
          *(int16_t *)(puVar13 + 1) = 0x6b69;
        }
        param_2[1] = param_2[1] + 10;
        FUN_180562730(*(uint64_t *)(*(int64_t *)(param_1 + 0x150) + uVar14 * 8),param_2);
        break;
      case 3:
        puVar7 = (int32_t *)param_2[1];
        if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 10) {
          System_BufferManager(param_2,(int64_t)puVar7 + (9 - *param_2));
          puVar7 = (int32_t *)param_2[1];
        }
        *puVar7 = 5;
        param_2[1] = param_2[1] + 4;
        puVar7 = (int32_t *)param_2[1];
        if (puVar7 == (int32_t *)0x0) {
          puVar7 = (int32_t *)_errno();
          *puVar7 = 0x16;
          _invalid_parameter_noinfo();
        }
        else {
          if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
                    // WARNING: Subroutine does not return
            memset(puVar7,0);
          }
          *puVar7 = 0x6e656c62;
          *(int8_t *)(puVar7 + 1) = 100;
        }
        param_2[1] = param_2[1] + 5;
        goto code_r0x00018056241c;
      case 4:
        puVar7 = (int32_t *)param_2[1];
        if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 0x11) {
          System_BufferManager(param_2,(int64_t)puVar7 + (0x10 - *param_2));
          puVar7 = (int32_t *)param_2[1];
        }
        *puVar7 = 0xc;
        param_2[1] = param_2[1] + 4;
        puVar13 = (uint64_t *)param_2[1];
        if (puVar13 == (uint64_t *)0x0) {
          puVar7 = (int32_t *)_errno();
          *puVar7 = 0x16;
          _invalid_parameter_noinfo();
          param_2[1] = param_2[1] + 0xc;
        }
        else {
          if ((uint64_t)((*param_2 - (int64_t)puVar13) + param_2[2]) < 0xc) {
                    // WARNING: Subroutine does not return
            memset(puVar13,0);
          }
          *puVar13 = 0x68635f746e756f6d;
          *(int32_t *)(puVar13 + 1) = 0x65676e61;
          param_2[1] = param_2[1] + 0xc;
        }
code_r0x00018056241c:
        puVar7 = (int32_t *)param_2[1];
        lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x150) + uVar14 * 8);
        if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
          System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
          puVar7 = (int32_t *)param_2[1];
        }
        *puVar7 = 0;
        param_2[1] = param_2[1] + 4;
        puVar7 = (int32_t *)param_2[1];
        uVar6 = *(int32_t *)(lVar3 + 8);
        if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
          System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
          puVar7 = (int32_t *)param_2[1];
        }
        *puVar7 = uVar6;
        param_2[1] = param_2[1] + 4;
        uVar6 = *(int32_t *)(lVar3 + 0xc);
        goto code_r0x000180562696;
      case 5:
        puVar7 = (int32_t *)param_2[1];
        if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 0x10) {
          System_BufferManager(param_2,(int64_t)puVar7 + (0xf - *param_2));
          puVar7 = (int32_t *)param_2[1];
        }
        *puVar7 = 0xb;
        param_2[1] = param_2[1] + 4;
        puVar13 = (uint64_t *)param_2[1];
        if (puVar13 == (uint64_t *)0x0) {
          puVar7 = (int32_t *)_errno();
          *puVar7 = 0x16;
          _invalid_parameter_noinfo();
        }
        else {
          if ((uint64_t)((*param_2 - (int64_t)puVar13) + param_2[2]) < 0xb) {
                    // WARNING: Subroutine does not return
            memset(puVar13,0);
          }
          *puVar13 = 0x6977735f646e6168;
          *(int16_t *)(puVar13 + 1) = 0x6374;
          *(int8_t *)((int64_t)puVar13 + 10) = 0x68;
        }
        param_2[1] = param_2[1] + 0xb;
code_r0x0001805625e4:
        puVar7 = (int32_t *)param_2[1];
        lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x150) + uVar14 * 8);
        if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
          System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
          puVar7 = (int32_t *)param_2[1];
        }
        *puVar7 = 0;
        param_2[1] = param_2[1] + 4;
        puVar7 = (int32_t *)param_2[1];
        uVar6 = *(int32_t *)(lVar3 + 8);
        if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
          System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
          puVar7 = (int32_t *)param_2[1];
        }
        *puVar7 = uVar6;
        param_2[1] = param_2[1] + 4;
        puVar7 = (int32_t *)param_2[1];
        uVar6 = *(int32_t *)(lVar3 + 0xc);
        if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
          System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
          puVar7 = (int32_t *)param_2[1];
        }
        *puVar7 = uVar6;
        param_2[1] = param_2[1] + 4;
        uVar6 = *(int32_t *)(lVar3 + 0x10);
code_r0x000180562696:
        puVar7 = (int32_t *)param_2[1];
        if ((uint64_t)((*param_2 - (int64_t)puVar7) + param_2[2]) < 5) {
          System_BufferManager(param_2,(int64_t)puVar7 + (4 - *param_2));
          puVar7 = (int32_t *)param_2[1];
        }
        *puVar7 = uVar6;
        param_2[1] = param_2[1] + 4;
      }
      uVar14 = uVar14 + 1;
    } while ((int64_t)uVar14 < (int64_t)iVar12);
  }
  return;
}





// 函数: void FUN_180562730(int64_t param_1,int64_t *param_2)
void FUN_180562730(int64_t param_1,int64_t *param_2)

{
  int32_t uVar1;
  int32_t *puVar2;
  
  puVar2 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = 0;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 8);
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x1c);
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x20);
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0xc);
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x10);
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x14);
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x18);
  if ((uint64_t)((*param_2 - (int64_t)puVar2) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    *(int32_t *)param_2[1] = uVar1;
  }
  else {
    *puVar2 = uVar1;
  }
  param_2[1] = param_2[1] + 4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180562920(int64_t *param_1,int64_t param_2,uint64_t param_3,int8_t param_4)
void FUN_180562920(int64_t *param_1,int64_t param_2,uint64_t param_3,int8_t param_4)

{
  ushort uVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int64_t lVar6;
  uint *puVar7;
  int32_t *puVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  uint uVar11;
  int64_t lVar12;
  
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  uVar2 = **(int32_t **)(param_2 + 8);
  *(int32_t **)(param_2 + 8) = *(int32_t **)(param_2 + 8) + 1;
  *(int32_t *)(param_1 + 9) = uVar2;
  uVar2 = **(int32_t **)(param_2 + 8);
  *(int32_t *)((int64_t)param_1 + 0x4c) = uVar2;
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 10) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  lVar10 = (int64_t)**(int **)(param_2 + 8);
  *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
  FUN_18049b770(param_1,lVar10,uVar2,param_4,0xfffffffffffffffe);
  lVar6 = 0;
  iVar5 = 0;
  lVar12 = lVar6;
  if (0 < lVar10) {
    do {
      lVar3 = *param_1;
      uVar11 = **(uint **)(param_2 + 8);
      *(uint **)(param_2 + 8) = *(uint **)(param_2 + 8) + 1;
      *(short *)(lVar12 + 0x24 + lVar3) = (short)uVar11;
      if ((short)uVar11 != 0) {
        lVar10 = lVar6;
        if ((uVar11 & 0xffff) != 0) {
          lVar10 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(uVar11 & 0xffff) * 4,4);
          uVar11 = (uint)*(ushort *)(lVar12 + 0x24 + lVar3);
        }
        *(int64_t *)(lVar12 + 0x1c + lVar3) = lVar10;
        if ((uint64_t)(uVar11 & 0xffff) != 0) {
          lVar6 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)(uVar11 & 0xffff) << 4,4);
          uVar11 = (uint)*(ushort *)(lVar12 + 0x24 + lVar3);
          lVar10 = *(int64_t *)(lVar12 + 0x1c + lVar3);
        }
        *(int64_t *)(lVar12 + 0x14 + lVar3) = lVar6;
                    // WARNING: Subroutine does not return
        memcpy(lVar10,*(uint64_t *)(param_2 + 8),(uint64_t)(uVar11 & 0xffff) << 2);
      }
      lVar3 = *param_1;
      *(int16_t *)(lVar12 + 0x10 + lVar3) = **(int16_t **)(param_2 + 8);
      lVar4 = *(int64_t *)(param_2 + 8);
      puVar7 = (uint *)(lVar4 + 2);
      *(uint **)(param_2 + 8) = puVar7;
      if (*(short *)(lVar12 + 0x10 + lVar3) != 0) {
        *(int8_t *)(lVar12 + 0x12 + lVar3) = *(int8_t *)puVar7;
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 1;
        *(int8_t *)(lVar12 + 0x13 + lVar3) = **(int8_t **)(param_2 + 8);
        puVar8 = (int32_t *)(*(int64_t *)(param_2 + 8) + 1);
        *(int32_t **)(param_2 + 8) = puVar8;
        *(int32_t *)(lVar12 + 8 + lVar3) = *puVar8;
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
        *(int32_t *)(lVar12 + 0xc + lVar3) = **(int32_t **)(param_2 + 8);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
        uVar1 = *(ushort *)(lVar12 + 0x10 + lVar3);
        if (uVar1 != 0) {
          iVar5 = (uint)uVar1 *
                  ((*(byte *)(lVar12 + 0x12 + lVar3) + 1) * 3 +
                  (uint)*(byte *)(lVar12 + 0x13 + lVar3)) + -1;
          iVar5 = (((int)(iVar5 + (iVar5 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
          iVar5 = ((int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3) + 4;
        }
        if (iVar5 != 0) {
          lVar6 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar5,4);
        }
        *(int64_t *)(lVar12 + lVar3) = lVar6;
                    // WARNING: Subroutine does not return
        memcpy(lVar6,*(uint64_t *)(param_2 + 8),(int64_t)iVar5);
      }
      lVar3 = *param_1;
      uVar11 = *puVar7;
      *(int64_t *)(param_2 + 8) = lVar4 + 6;
      *(short *)(lVar12 + 0x48 + lVar3) = (short)uVar11;
      if ((short)uVar11 != 0) {
        lVar10 = lVar6;
        if ((uVar11 & 0xffff) != 0) {
          lVar10 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(uVar11 & 0xffff) * 4,4);
          uVar11 = (uint)*(ushort *)(lVar12 + 0x48 + lVar3);
        }
        *(int64_t *)(lVar12 + 0x40 + lVar3) = lVar10;
        if ((uint64_t)(uVar11 & 0xffff) != 0) {
          lVar6 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)(uVar11 & 0xffff) << 4,4);
          uVar11 = (uint)*(ushort *)(lVar12 + 0x48 + lVar3);
          lVar10 = *(int64_t *)(lVar12 + 0x40 + lVar3);
        }
        *(int64_t *)(lVar12 + 0x38 + lVar3) = lVar6;
                    // WARNING: Subroutine does not return
        memcpy(lVar10,*(uint64_t *)(param_2 + 8),(uint64_t)(uVar11 & 0xffff) << 2);
      }
      lVar3 = *param_1;
      uVar11 = **(uint **)(param_2 + 8);
      *(uint **)(param_2 + 8) = *(uint **)(param_2 + 8) + 1;
      *(short *)(lVar12 + 0x36 + lVar3) = (short)uVar11;
      if ((short)uVar11 != 0) {
        lVar10 = lVar6;
        if ((uVar11 & 0xffff) != 0) {
          lVar10 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(uVar11 & 0xffff) * 4,4);
          uVar11 = (uint)*(ushort *)(lVar12 + 0x36 + lVar3);
        }
        *(int64_t *)(lVar12 + 0x2e + lVar3) = lVar10;
        if ((uint64_t)(uVar11 & 0xffff) != 0) {
          lVar6 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)(uVar11 & 0xffff) << 4,4);
          uVar11 = (uint)*(ushort *)(lVar12 + 0x36 + lVar3);
          lVar10 = *(int64_t *)(lVar12 + 0x2e + lVar3);
        }
        *(int64_t *)(lVar12 + 0x26 + lVar3) = lVar6;
                    // WARNING: Subroutine does not return
        memcpy(lVar10,*(uint64_t *)(param_2 + 8),(uint64_t)(uVar11 & 0xffff) << 2);
      }
      lVar10 = lVar10 + -1;
      lVar12 = lVar12 + 0x4a;
    } while (lVar10 != 0);
  }
  FUN_180562d60(param_1 + 4,param_2);
  puVar9 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,4);
  *puVar9 = 0;
  *(int32_t *)(puVar9 + 1) = 0xffffffff;
  *(int32_t *)((int64_t)puVar9 + 0xc) = 0;
  *(int8_t *)(puVar9 + 2) = 0;
  puVar9[3] = 0;
  *(int8_t *)(puVar9 + 4) = 0;
  param_1[7] = (int64_t)puVar9;
  FUN_180562e50(puVar9,param_2,param_1);
  *(int32_t *)((int64_t)param_1 + 0x54) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180562d60(uint64_t *param_1,int64_t param_2)
void FUN_180562d60(uint64_t *param_1,int64_t param_2)

{
  int16_t uVar1;
  int iVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  
  uVar1 = **(int16_t **)(param_2 + 8);
  *(int16_t *)(param_1 + 2) = uVar1;
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 2;
  if (*(short *)(param_1 + 2) != 0) {
    uVar4 = 0;
    *(int8_t *)((int64_t)param_1 + 0x12) = **(int8_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 1;
    *(int8_t *)((int64_t)param_1 + 0x13) = **(int8_t **)(param_2 + 8);
    puVar3 = (int32_t *)(*(int64_t *)(param_2 + 8) + 1);
    *(int32_t **)(param_2 + 8) = puVar3;
    *(int32_t *)(param_1 + 1) = *puVar3;
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
    *(int32_t *)((int64_t)param_1 + 0xc) = **(int32_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
    if (*(ushort *)(param_1 + 2) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = ((uint)*(byte *)((int64_t)param_1 + 0x12) +
               (uint)*(byte *)((int64_t)param_1 + 0x12) * 2 +
              (uint)*(byte *)((int64_t)param_1 + 0x13)) * (uint)*(ushort *)(param_1 + 2) + -1;
      iVar2 = (((int)(iVar2 + (iVar2 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
      iVar2 = ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) + 4;
    }
    if (iVar2 != 0) {
      uVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar2,
                            CONCAT71((uint7)(byte)((ushort)uVar1 >> 8),4));
    }
    *param_1 = uVar4;
                    // WARNING: Subroutine does not return
    memcpy(uVar4,*(uint64_t *)(param_2 + 8),(int64_t)iVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180562da2(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180562da2(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int8_t *in_RAX;
  int32_t *puVar2;
  int64_t unaff_RBX;
  uint64_t *unaff_RDI;
  
  *(int8_t *)((int64_t)unaff_RDI + 0x13) = *in_RAX;
  puVar2 = (int32_t *)(*(int64_t *)(param_2 + 8) + 1);
  *(int32_t **)(param_2 + 8) = puVar2;
  *(int32_t *)(unaff_RDI + 1) = *puVar2;
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)((int64_t)unaff_RDI + 0xc) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  if (*(ushort *)(unaff_RDI + 2) == 0) {
    iVar1 = (int)param_4;
  }
  else {
    iVar1 = ((uint)*(byte *)((int64_t)unaff_RDI + 0x12) +
             (uint)*(byte *)((int64_t)unaff_RDI + 0x12) * 2 +
            (uint)*(byte *)((int64_t)unaff_RDI + 0x13)) * (uint)*(ushort *)(unaff_RDI + 2) + -1;
    iVar1 = (((int)(iVar1 + (iVar1 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
    iVar1 = ((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3) + 4;
  }
  if (iVar1 != 0) {
    param_4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar1,4);
  }
  *unaff_RDI = param_4;
                    // WARNING: Subroutine does not return
  memcpy(param_4,*(uint64_t *)(unaff_RBX + 8),(int64_t)iVar1);
}





// 函数: void FUN_180562e44(void)
void FUN_180562e44(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180562e50(uint64_t *param_1,int64_t param_2,uint64_t param_3)
void FUN_180562e50(uint64_t *param_1,int64_t param_2,uint64_t param_3)

{
  int32_t uVar1;
  int iVar2;
  uint64_t uVar3;
  
  *param_1 = param_3;
  uVar1 = **(int32_t **)(param_2 + 8);
  *(int32_t *)(param_1 + 1) = uVar1;
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)((int64_t)param_1 + 0xc) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int8_t *)(param_1 + 2) = **(int8_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 1;
  *(int8_t *)(param_1 + 4) = **(int8_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 1;
  iVar2 = (int)*(char *)(param_1 + 4) * (int)*(char *)(param_1 + 2) *
          *(int *)((int64_t)param_1 + 0xc) + -1;
  iVar2 = (((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
  iVar2 = ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) + 2;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar2,
                          CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),4));
  }
  param_1[3] = uVar3;
                    // WARNING: Subroutine does not return
  memcpy(uVar3,*(uint64_t *)(param_2 + 8),(int64_t)iVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180562f10(int64_t param_1)
void FUN_180562f10(int64_t param_1)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
  *puVar1 = &processed_var_7752_ptr;
  *(int32_t *)(puVar1 + 1) = *(int32_t *)(param_1 + 8);
  *(int32_t *)((int64_t)puVar1 + 0xc) = *(int32_t *)(param_1 + 0xc);
  *(int32_t *)(puVar1 + 2) = *(int32_t *)(param_1 + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



