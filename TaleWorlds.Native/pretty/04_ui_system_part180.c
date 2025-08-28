#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part180.c - 3 个函数

// 函数: void FUN_180771090(void)
void FUN_180771090(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c0cc24,0,0x5c);
}



uint64_t
FUN_180771250(int64_t param_1,int param_2,int64_t param_3,int64_t param_4,int param_5,int param_6
             )

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  char cVar8;
  uint64_t uStack_d8;
  uint64_t ******ppppppuStack_d0;
  uint64_t ******ppppppuStack_c8;
  uint64_t uStack_c0;
  uint64_t ******ppppppuStack_b8;
  uint64_t ******ppppppuStack_b0;
  uint64_t uStack_a8;
  int32_t uStack_a0;
  uint64_t uStack_98;
  int32_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  if (param_6 == 1) {
    if (param_4 != 0) {
      **(int32_t **)(param_4 + 8) = **(int32_t **)(param_3 + 8);
      *(int32_t *)(param_4 + 0x20) = *(int32_t *)(param_3 + 0x20);
    }
    if (param_5 != 0) {
      return 0xb;
    }
    if ((*(int64_t *)(param_1 + 0x238) != 0) &&
       ((*(float *)(param_1 + 0x220) != 0.0 || (*(float *)(param_1 + 0x218) != 0.0)))) {
      return 0;
    }
    return 6;
  }
  lVar3 = *(int64_t *)(param_1 + 0x238);
  uVar4 = **(uint64_t **)(param_3 + 0x18);
  uVar5 = **(uint64_t **)(param_4 + 0x18);
  iVar1 = **(int **)(param_3 + 8);
  if (lVar3 != 0) {
    ppppppuStack_c8 = &ppppppuStack_d0;
    ppppppuStack_d0 = &ppppppuStack_d0;
    ppppppuStack_b0 = &ppppppuStack_b8;
    ppppppuStack_b8 = &ppppppuStack_b8;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_d8 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    if (*(int64_t *)(lVar3 + 8) == *(int64_t *)(lVar3 + 0x240)) {
      cVar8 = *(char *)(lVar3 + 0x249);
    }
    else {
      cVar8 = '\0';
      uVar7 = *(uint64_t *)(lVar3 + 0x220);
      *(uint64_t *)(lVar3 + 0x220) = *(uint64_t *)(lVar3 + 0x228);
      *(int8_t *)(lVar3 + 0x248) = *(int8_t *)(lVar3 + 0x249);
      *(uint64_t *)(lVar3 + 0x228) = uVar7;
      *(int64_t *)(lVar3 + 0x240) = *(int64_t *)(lVar3 + 8);
    }
    lVar6 = *(int64_t *)(lVar3 + 0x228);
    *(int8_t *)(lVar3 + 0x249) = 1;
    if (lVar6 != 0) {
      iVar2 = *(int *)(lVar3 + 0x234);
      if (*(uint *)(lVar3 + 0x238) < (uint)(iVar2 * param_2)) {
        uVar7 = 0x1c;
      }
      else {
        if ((uint)(*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x224)) < 2) {
          func_0x000180763630(&uStack_d8,*(uint64_t *)(param_1 + 0xa8),
                              *(int32_t *)(param_1 + 0x218));
          FUN_180765d50(&uStack_d8,*(int32_t *)(param_1 + 0x220),0x40);
        }
        else {
          func_0x000180763630(&uStack_d8,*(uint64_t *)(param_1 + 0xa8),
                              *(int32_t *)(param_1 + 0x220));
        }
        *(int32_t *)(param_1 + 0x218) = *(int32_t *)(param_1 + 0x220);
        uVar7 = FUN_1807636f0(&uStack_d8,lVar6,uVar4,0,iVar2,iVar1,param_2,cVar8 == '\0');
        if ((int)uVar7 == 0) goto LAB_180771466;
      }
      return uVar7;
    }
  }
LAB_180771466:
  if (*(char *)(param_1 + 0x25c) != '\0') {
                    // WARNING: Subroutine does not return
    memset(uVar5,0);
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar5,uVar4,(uint64_t)(uint)(iVar1 * param_2) << 2);
}





// 函数: void FUN_1807714c0(int64_t param_1)
void FUN_1807714c0(int64_t param_1)

{
  *(int32_t *)(param_1 + 0x3a0) = 1;
  *(uint64_t *)(param_1 + 0x398) = 0;
                    // WARNING: Subroutine does not return
  memset(param_1,0,0x100);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180771560(int64_t param_1,uint64_t *param_2,int64_t *param_3)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  if ((param_2 != (uint64_t *)0x0) && (param_3 != (int64_t *)0x0)) {
    iVar1 = *(int *)((int64_t)param_2 + 100);
    if (*(int *)((int64_t)param_2 + 100) < 0x178) {
      iVar1 = 0x178;
    }
    lVar2 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar1,&rendering_buffer_2864_ptr,0x5ea,0);
    if (lVar2 == 0) {
      uVar3 = 0x26;
    }
    else {
      *(int32_t *)(lVar2 + 0x28) = 0;
      *(uint64_t *)(lVar2 + 0x120) = 0;
      *(uint64_t *)(lVar2 + 0x128) = 0;
      *(uint64_t *)(lVar2 + 0x130) = 0;
      *(uint64_t *)(lVar2 + 0x148) = 0;
      *(uint64_t *)(lVar2 + 0x138) = 0;
      *(uint64_t *)(lVar2 + 0x168) = 0;
      uVar3 = param_2[1];
      *(uint64_t *)(lVar2 + 0x30) = *param_2;
      *(uint64_t *)(lVar2 + 0x38) = uVar3;
      uVar3 = param_2[3];
      *(uint64_t *)(lVar2 + 0x40) = param_2[2];
      *(uint64_t *)(lVar2 + 0x48) = uVar3;
      uVar3 = param_2[5];
      *(uint64_t *)(lVar2 + 0x50) = param_2[4];
      *(uint64_t *)(lVar2 + 0x58) = uVar3;
      uVar3 = param_2[7];
      *(uint64_t *)(lVar2 + 0x60) = param_2[6];
      *(uint64_t *)(lVar2 + 0x68) = uVar3;
      uVar3 = param_2[9];
      *(uint64_t *)(lVar2 + 0x70) = param_2[8];
      *(uint64_t *)(lVar2 + 0x78) = uVar3;
      uVar3 = param_2[0xb];
      *(uint64_t *)(lVar2 + 0x80) = param_2[10];
      *(uint64_t *)(lVar2 + 0x88) = uVar3;
      uVar3 = param_2[0xd];
      *(uint64_t *)(lVar2 + 0x90) = param_2[0xc];
      *(uint64_t *)(lVar2 + 0x98) = uVar3;
      uVar3 = param_2[0xf];
      *(uint64_t *)(lVar2 + 0xa0) = param_2[0xe];
      *(uint64_t *)(lVar2 + 0xa8) = uVar3;
      uVar3 = param_2[0x11];
      *(uint64_t *)(lVar2 + 0xb0) = param_2[0x10];
      *(uint64_t *)(lVar2 + 0xb8) = uVar3;
      uVar3 = param_2[0x13];
      *(uint64_t *)(lVar2 + 0xc0) = param_2[0x12];
      *(uint64_t *)(lVar2 + 200) = uVar3;
      uVar3 = param_2[0x15];
      *(uint64_t *)(lVar2 + 0xd0) = param_2[0x14];
      *(uint64_t *)(lVar2 + 0xd8) = uVar3;
      uVar3 = param_2[0x17];
      *(uint64_t *)(lVar2 + 0xe0) = param_2[0x16];
      *(uint64_t *)(lVar2 + 0xe8) = uVar3;
      uVar3 = param_2[0x19];
      *(uint64_t *)(lVar2 + 0xf0) = param_2[0x18];
      *(uint64_t *)(lVar2 + 0xf8) = uVar3;
      uVar3 = param_2[0x1b];
      *(uint64_t *)(lVar2 + 0x100) = param_2[0x1a];
      *(uint64_t *)(lVar2 + 0x108) = uVar3;
      *param_3 = lVar2;
      if (*(int64_t *)(lVar2 + 0x88) == 0) {
        *(void **)(lVar2 + 0x88) = &ui_system_data_1328_ptr;
      }
      *(int64_t *)(lVar2 + 0x10) = *(int64_t *)(param_1 + 0x398) + 0x118e8;
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0x1f;
}



uint64_t FUN_1807715a2(int64_t param_1,int32_t param_2,uint64_t param_3)

{
  int32_t in_EAX;
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
    param_2 = in_EAX;
  }
  lVar1 = SystemCore_TransformationEngine0(*(uint64_t *)(param_1 + 0x1a0),param_2,param_3,0x5ea,0);
  if (lVar1 == 0) {
    uVar2 = 0x26;
  }
  else {
    *(int32_t *)(lVar1 + 0x28) = 0;
    *(uint64_t *)(lVar1 + 0x120) = 0;
    *(uint64_t *)(lVar1 + 0x128) = 0;
    *(uint64_t *)(lVar1 + 0x130) = 0;
    *(uint64_t *)(lVar1 + 0x148) = 0;
    *(uint64_t *)(lVar1 + 0x138) = 0;
    *(uint64_t *)(lVar1 + 0x168) = 0;
    uVar2 = unaff_RBX[1];
    *(uint64_t *)(lVar1 + 0x30) = *unaff_RBX;
    *(uint64_t *)(lVar1 + 0x38) = uVar2;
    uVar2 = unaff_RBX[3];
    *(uint64_t *)(lVar1 + 0x40) = unaff_RBX[2];
    *(uint64_t *)(lVar1 + 0x48) = uVar2;
    uVar2 = unaff_RBX[5];
    *(uint64_t *)(lVar1 + 0x50) = unaff_RBX[4];
    *(uint64_t *)(lVar1 + 0x58) = uVar2;
    uVar2 = unaff_RBX[7];
    *(uint64_t *)(lVar1 + 0x60) = unaff_RBX[6];
    *(uint64_t *)(lVar1 + 0x68) = uVar2;
    uVar2 = unaff_RBX[9];
    *(uint64_t *)(lVar1 + 0x70) = unaff_RBX[8];
    *(uint64_t *)(lVar1 + 0x78) = uVar2;
    uVar2 = unaff_RBX[0xb];
    *(uint64_t *)(lVar1 + 0x80) = unaff_RBX[10];
    *(uint64_t *)(lVar1 + 0x88) = uVar2;
    uVar2 = unaff_RBX[0xd];
    *(uint64_t *)(lVar1 + 0x90) = unaff_RBX[0xc];
    *(uint64_t *)(lVar1 + 0x98) = uVar2;
    uVar2 = unaff_RBX[0xf];
    *(uint64_t *)(lVar1 + 0xa0) = unaff_RBX[0xe];
    *(uint64_t *)(lVar1 + 0xa8) = uVar2;
    uVar2 = unaff_RBX[0x11];
    *(uint64_t *)(lVar1 + 0xb0) = unaff_RBX[0x10];
    *(uint64_t *)(lVar1 + 0xb8) = uVar2;
    uVar2 = unaff_RBX[0x13];
    *(uint64_t *)(lVar1 + 0xc0) = unaff_RBX[0x12];
    *(uint64_t *)(lVar1 + 200) = uVar2;
    uVar2 = unaff_RBX[0x15];
    *(uint64_t *)(lVar1 + 0xd0) = unaff_RBX[0x14];
    *(uint64_t *)(lVar1 + 0xd8) = uVar2;
    uVar2 = unaff_RBX[0x17];
    *(uint64_t *)(lVar1 + 0xe0) = unaff_RBX[0x16];
    *(uint64_t *)(lVar1 + 0xe8) = uVar2;
    uVar2 = unaff_RBX[0x19];
    *(uint64_t *)(lVar1 + 0xf0) = unaff_RBX[0x18];
    *(uint64_t *)(lVar1 + 0xf8) = uVar2;
    uVar2 = unaff_RBX[0x1b];
    *(uint64_t *)(lVar1 + 0x100) = unaff_RBX[0x1a];
    *(uint64_t *)(lVar1 + 0x108) = uVar2;
    *unaff_RDI = lVar1;
    if (*(int64_t *)(lVar1 + 0x88) == 0) {
      *(void **)(lVar1 + 0x88) = &ui_system_data_1328_ptr;
    }
    *(int64_t *)(lVar1 + 0x10) = *(int64_t *)(unaff_RSI + 0x398) + 0x118e8;
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1807716bb(void)

{
  return 0x26;
}



uint64_t FUN_1807716c2(void)

{
  return 0x1f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1807716e0(int64_t param_1,uint64_t **param_2,uint64_t *param_3,int64_t *param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  bool bVar7;
  int iVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  uint64_t *puStack_68;
  int64_t lStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  uVar9 = 0;
  bVar7 = false;
  if (param_4 == (int64_t *)0x0) {
    return 0x1f;
  }
  if (param_2 == (uint64_t **)0x0) {
    if (param_3 == (uint64_t *)0x0) {
      return 0x1f;
    }
    param_2 = &puStack_68;
    puStack_68 = (uint64_t *)0x0;
    lStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    puStack_68 = (uint64_t *)
                 SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                               *(int *)(param_3 + 0xc) * 0x68 + 0xd8,&rendering_buffer_2864_ptr,0x626,0);
    if (puStack_68 == (uint64_t *)0x0) {
      return 0x26;
    }
    uVar6 = param_3[1];
    uStack_58 = CONCAT44(uStack_58._4_4_,0x218);
    *puStack_68 = *param_3;
    puStack_68[1] = uVar6;
    uVar6 = param_3[3];
    puStack_68[2] = param_3[2];
    puStack_68[3] = uVar6;
    uVar6 = param_3[5];
    puStack_68[4] = param_3[4];
    puStack_68[5] = uVar6;
    uVar6 = param_3[7];
    puStack_68[6] = param_3[6];
    puStack_68[7] = uVar6;
    uVar6 = param_3[9];
    puStack_68[8] = param_3[8];
    puStack_68[9] = uVar6;
    uVar6 = param_3[0xb];
    puStack_68[10] = param_3[10];
    puStack_68[0xb] = uVar6;
    uVar6 = param_3[0xd];
    puStack_68[0xc] = param_3[0xc];
    puStack_68[0xd] = uVar6;
    uVar6 = param_3[0xf];
    puStack_68[0xe] = param_3[0xe];
    puStack_68[0xf] = uVar6;
    uVar6 = param_3[0x11];
    puStack_68[0x10] = param_3[0x10];
    puStack_68[0x11] = uVar6;
    uVar6 = param_3[0x13];
    puStack_68[0x12] = param_3[0x12];
    puStack_68[0x13] = uVar6;
    uVar6 = param_3[0x15];
    puStack_68[0x14] = param_3[0x14];
    puStack_68[0x15] = uVar6;
    uVar3 = *(int32_t *)((int64_t)param_3 + 0xb4);
    uVar4 = *(int32_t *)(param_3 + 0x17);
    uVar5 = *(int32_t *)((int64_t)param_3 + 0xbc);
    *(int32_t *)(puStack_68 + 0x16) = *(int32_t *)(param_3 + 0x16);
    *(int32_t *)((int64_t)puStack_68 + 0xb4) = uVar3;
    *(int32_t *)(puStack_68 + 0x17) = uVar4;
    *(int32_t *)((int64_t)puStack_68 + 0xbc) = uVar5;
    uVar3 = *(int32_t *)((int64_t)param_3 + 0xc4);
    uVar4 = *(int32_t *)(param_3 + 0x19);
    uVar5 = *(int32_t *)((int64_t)param_3 + 0xcc);
    *(int32_t *)(puStack_68 + 0x18) = *(int32_t *)(param_3 + 0x18);
    *(int32_t *)((int64_t)puStack_68 + 0xc4) = uVar3;
    *(int32_t *)(puStack_68 + 0x19) = uVar4;
    *(int32_t *)((int64_t)puStack_68 + 0xcc) = uVar5;
    puStack_68[0x1a] = param_3[0x1a];
    puStack_68[0xd] = puStack_68 + 0x1b;
    iVar8 = *(int *)(param_3 + 0xc);
    uVar11 = uVar9;
    uVar13 = uVar9;
    if (0 < iVar8) {
      do {
        uVar12 = (int)uVar13 + 1;
        *(int64_t *)(uVar11 + puStack_68[0xd]) =
             puStack_68[0xd] + ((int64_t)iVar8 + (int64_t)(int)uVar13 * 0xc) * 8;
        puVar1 = *(uint64_t **)(uVar11 + param_3[0xd]);
        uVar6 = puVar1[1];
        puVar2 = *(uint64_t **)(uVar11 + puStack_68[0xd]);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        uVar6 = puVar1[3];
        puVar2[2] = puVar1[2];
        puVar2[3] = uVar6;
        uVar6 = puVar1[5];
        puVar2[4] = puVar1[4];
        puVar2[5] = uVar6;
        uVar6 = puVar1[7];
        puVar2[6] = puVar1[6];
        puVar2[7] = uVar6;
        uVar3 = *(int32_t *)((int64_t)puVar1 + 0x44);
        uVar4 = *(int32_t *)(puVar1 + 9);
        uVar5 = *(int32_t *)((int64_t)puVar1 + 0x4c);
        *(int32_t *)(puVar2 + 8) = *(int32_t *)(puVar1 + 8);
        *(int32_t *)((int64_t)puVar2 + 0x44) = uVar3;
        *(int32_t *)(puVar2 + 9) = uVar4;
        *(int32_t *)((int64_t)puVar2 + 0x4c) = uVar5;
        uVar3 = *(int32_t *)((int64_t)puVar1 + 0x54);
        uVar4 = *(int32_t *)(puVar1 + 0xb);
        uVar5 = *(int32_t *)((int64_t)puVar1 + 0x5c);
        *(int32_t *)(puVar2 + 10) = *(int32_t *)(puVar1 + 10);
        *(int32_t *)((int64_t)puVar2 + 0x54) = uVar3;
        *(int32_t *)(puVar2 + 0xb) = uVar4;
        *(int32_t *)((int64_t)puVar2 + 0x5c) = uVar5;
        iVar8 = *(int *)(param_3 + 0xc);
        uVar11 = uVar11 + 8;
        uVar13 = (uint64_t)uVar12;
      } while ((int)uVar12 < iVar8);
    }
    lStack_60 = (int64_t)puStack_68 + 4;
    if (puStack_68[10] == 0) {
      *(int32_t *)(puStack_68 + 5) = 1;
      *(int32_t *)((int64_t)puStack_68 + 0x2c) = 1;
    }
    bVar7 = true;
  }
  else if ((param_2[1] == (uint64_t *)0x0) && (*param_2 != (uint64_t *)0x0)) {
    param_2[1] = (uint64_t *)((int64_t)*param_2 + 4);
  }
  iVar8 = *(int *)(param_2 + 2);
  if (iVar8 < 0) {
    return 0x1c;
  }
  lVar10 = *param_4;
  if (lVar10 == 0) {
    if (*(int *)(param_2 + 3) == 0x3e9) {
      if (iVar8 < 0x2d8) {
        iVar8 = 0x2d8;
      }
      *(int *)(param_2 + 2) = iVar8;
      uVar9 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar8 + 0x10,&rendering_buffer_2864_ptr,
                            0x667,0);
      if (uVar9 == 0) {
        return 0x26;
      }
      lVar10 = FUN_1807e4c10(uVar9 + 0xf & 0xfffffffffffffff0);
    }
    else {
      if (iVar8 < 0x218) {
        iVar8 = 0x218;
      }
      *(int *)(param_2 + 2) = iVar8;
      uVar9 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar8 + 0x10,&rendering_buffer_2864_ptr,
                            0x676,0);
      if (uVar9 == 0) {
        return 0x26;
      }
      lVar10 = func_0x000180758fe0(uVar9 + 0xf & 0xfffffffffffffff0);
    }
    *(uint64_t *)(lVar10 + 0x130) = uVar9;
    if (lVar10 == 0) {
      *param_4 = 0;
      return 0x26;
    }
  }
  *(uint64_t *)(lVar10 + 0xa8) = *(uint64_t *)(param_1 + 0x398);
  *(int64_t *)(lVar10 + 0xd8) = *(int64_t *)(param_1 + 0x398) + 0x11848;
  *(int32_t *)(lVar10 + 0xe0) = *(int32_t *)(*(int64_t *)(param_1 + 0x398) + 0x116b8);
  iVar8 = FUN_18075a230(lVar10,param_2);
  if (iVar8 == 0) {
    if (bVar7) {
      LOCK();
      *(uint *)(lVar10 + 100) = *(uint *)(lVar10 + 100) | 2;
      UNLOCK();
    }
    *param_4 = lVar10;
    return 0;
  }
  if (uVar9 != 0) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar9,&rendering_buffer_2864_ptr,0x691,1);
  }
  return iVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180771a50(int64_t param_1,uint64_t *param_2,int64_t *param_3)

{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  
  iVar1 = *(int *)((int64_t)param_2 + 0x9c);
  if (*(int *)((int64_t)param_2 + 0x9c) < 0x418) {
    iVar1 = 0x418;
  }
  lVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar1,&rendering_buffer_2864_ptr,0x6ae,0);
  if (lVar3 != 0) {
    lVar3 = FUN_180786350(lVar3);
    if (lVar3 != 0) {
      uVar2 = param_2[1];
      *(uint64_t *)(lVar3 + 0x328) = *param_2;
      *(uint64_t *)(lVar3 + 0x330) = uVar2;
      uVar2 = param_2[3];
      *(uint64_t *)(lVar3 + 0x338) = param_2[2];
      *(uint64_t *)(lVar3 + 0x340) = uVar2;
      uVar2 = param_2[5];
      *(uint64_t *)(lVar3 + 0x348) = param_2[4];
      *(uint64_t *)(lVar3 + 0x350) = uVar2;
      uVar2 = param_2[7];
      *(uint64_t *)(lVar3 + 0x358) = param_2[6];
      *(uint64_t *)(lVar3 + 0x360) = uVar2;
      uVar2 = param_2[9];
      *(uint64_t *)(lVar3 + 0x368) = param_2[8];
      *(uint64_t *)(lVar3 + 0x370) = uVar2;
      uVar2 = param_2[0xb];
      *(uint64_t *)(lVar3 + 0x378) = param_2[10];
      *(uint64_t *)(lVar3 + 0x380) = uVar2;
      uVar2 = param_2[0xd];
      *(uint64_t *)(lVar3 + 0x388) = param_2[0xc];
      *(uint64_t *)(lVar3 + 0x390) = uVar2;
      uVar2 = param_2[0xf];
      *(uint64_t *)(lVar3 + 0x398) = param_2[0xe];
      *(uint64_t *)(lVar3 + 0x3a0) = uVar2;
      uVar2 = param_2[0x11];
      *(uint64_t *)(lVar3 + 0x3a8) = param_2[0x10];
      *(uint64_t *)(lVar3 + 0x3b0) = uVar2;
      uVar2 = param_2[0x13];
      *(uint64_t *)(lVar3 + 0x3b8) = param_2[0x12];
      *(uint64_t *)(lVar3 + 0x3c0) = uVar2;
      uVar2 = param_2[0x15];
      *(uint64_t *)(lVar3 + 0x3c8) = param_2[0x14];
      *(uint64_t *)(lVar3 + 0x3d0) = uVar2;
      uVar2 = param_2[0x17];
      *(uint64_t *)(lVar3 + 0x3d8) = param_2[0x16];
      *(uint64_t *)(lVar3 + 0x3e0) = uVar2;
      uVar2 = param_2[0x19];
      *(uint64_t *)(lVar3 + 1000) = param_2[0x18];
      *(uint64_t *)(lVar3 + 0x3f0) = uVar2;
      uVar2 = param_2[0x1b];
      *(uint64_t *)(lVar3 + 0x3f8) = param_2[0x1a];
      *(uint64_t *)(lVar3 + 0x400) = uVar2;
      uVar2 = param_2[0x1d];
      *(uint64_t *)(lVar3 + 0x408) = param_2[0x1c];
      *(uint64_t *)(lVar3 + 0x410) = uVar2;
      *(uint64_t *)(lVar3 + 0x48) = *(uint64_t *)(param_1 + 0x398);
      *(void **)(lVar3 + 0x10) = &memory_allocator_3056_ptr;
      *(void **)(lVar3 + 0x30) = &rendering_buffer_2080_ptr;
      *(void **)(lVar3 + 0x38) = &rendering_buffer_2064_ptr;
      *(code **)(lVar3 + 0x18) = FUN_180747d20;
      *(void **)(lVar3 + 0x20) = &processed_var_5216_ptr;
      *(code **)(lVar3 + 0x28) = _guard_check_icall;
      *param_3 = lVar3;
      return 0;
    }
  }
  *param_3 = 0;
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_180771ed0(int64_t param_1,int *param_2,int32_t *param_3,int32_t param_4,
             uint64_t param_5)

{
  int32_t uVar1;
  int64_t lVar2;
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0x1f;
  }
  else if (*param_2 == 1) {
    lVar2 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x108,&rendering_buffer_2864_ptr,0x2fb,0);
    if (lVar2 == 0) {
      uVar1 = 0x26;
    }
    else {
      *(int32_t *)(lVar2 + 0x18) = 0xffffffff;
      *(int64_t *)lVar2 = lVar2;
      *(int64_t *)(lVar2 + 8) = lVar2;
      *(uint64_t *)(lVar2 + 0x10) = 0;
      *(uint64_t *)(lVar2 + 0x100) = param_5;
      *(int *)(lVar2 + 0x20) = *param_2;
      *(uint64_t *)(lVar2 + 0x28) = *(uint64_t *)(param_2 + 2);
      *(int *)(lVar2 + 0x30) = param_2[4];
      *(int *)(lVar2 + 0x38) = param_2[6];
      *(int *)(lVar2 + 0x34) = param_2[5];
      *(uint64_t *)(lVar2 + 0x40) = *(uint64_t *)(param_2 + 8);
      *(uint64_t *)(lVar2 + 0x48) = *(uint64_t *)(param_2 + 10);
      *(uint64_t *)(lVar2 + 0x50) = *(uint64_t *)(param_2 + 0xc);
      *(uint64_t *)(lVar2 + 0x58) = *(uint64_t *)(param_2 + 0xe);
      *(uint64_t *)(lVar2 + 0x60) = *(uint64_t *)(param_2 + 0x10);
      *(uint64_t *)(lVar2 + 0x68) = *(uint64_t *)(param_2 + 0x12);
      *(uint64_t *)(lVar2 + 0x70) = *(uint64_t *)(param_2 + 0x14);
      *(uint64_t *)(lVar2 + 0x78) = *(uint64_t *)(param_2 + 0x16);
      *(int *)(lVar2 + 0x80) = param_2[0x18];
      *(int *)(lVar2 + 0x84) = param_2[0x19];
      *(uint64_t *)(lVar2 + 0x88) = *(uint64_t *)(param_2 + 0x1a);
      *(int *)(lVar2 + 0x94) = param_2[0x1d];
      *(uint64_t *)(lVar2 + 0xa0) = *(uint64_t *)(param_2 + 0x20);
      *(uint64_t *)(lVar2 + 0xa8) = *(uint64_t *)(param_2 + 0x22);
      *(uint64_t *)(lVar2 + 0xb0) = *(uint64_t *)(param_2 + 0x24);
      *(uint64_t *)(lVar2 + 0xb8) = *(uint64_t *)(param_2 + 0x26);
      *(uint64_t *)(lVar2 + 0xc0) = *(uint64_t *)(param_2 + 0x28);
      *(uint64_t *)(lVar2 + 200) = *(uint64_t *)(param_2 + 0x2a);
      *(uint64_t *)(lVar2 + 0xd0) = *(uint64_t *)(param_2 + 0x2c);
      *(uint64_t *)(lVar2 + 0xd8) = *(uint64_t *)(param_2 + 0x2e);
      *(uint64_t *)(lVar2 + 0xe0) = *(uint64_t *)(param_2 + 0x30);
      *(uint64_t *)(lVar2 + 0xe8) = *(uint64_t *)(param_2 + 0x32);
      *(uint64_t *)(lVar2 + 0xf0) = *(uint64_t *)(param_2 + 0x34);
      *(uint64_t *)(lVar2 + 0xf8) = *(uint64_t *)(param_2 + 0x36);
      *(int32_t *)(lVar2 + 0x90) = *(int32_t *)(param_1 + 0x3a0);
      *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x3a0) + 1;
      *(uint64_t *)(lVar2 + 0x98) = *(uint64_t *)(param_2 + 0x1e);
      func_0x000180755660(lVar2,param_1 + 0x180,param_1 + 0x180,param_4);
      if (param_3 != (int32_t *)0x0) {
        *param_3 = *(int32_t *)(lVar2 + 0x90);
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0x38;
  }
  return uVar1;
}



uint64_t FUN_180771f21(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t unaff_RBP;
  int32_t *unaff_RSI;
  int32_t *unaff_RDI;
  int32_t unaff_R14D;
  uint64_t in_stack_00000060;
  
  lVar1 = SystemCore_TransformationEngine0(*(uint64_t *)(param_1 + 0x1a0),0x108,param_3,param_4,0);
  if (lVar1 == 0) {
    uVar2 = 0x26;
  }
  else {
    *(int32_t *)(lVar1 + 0x18) = 0xffffffff;
    *(int64_t *)lVar1 = lVar1;
    *(int64_t *)(lVar1 + 8) = lVar1;
    *(uint64_t *)(lVar1 + 0x10) = 0;
    *(uint64_t *)(lVar1 + 0x100) = in_stack_00000060;
    *(int32_t *)(lVar1 + 0x20) = *unaff_RDI;
    *(uint64_t *)(lVar1 + 0x28) = *(uint64_t *)(unaff_RDI + 2);
    *(int32_t *)(lVar1 + 0x30) = unaff_RDI[4];
    *(int32_t *)(lVar1 + 0x38) = unaff_RDI[6];
    *(int32_t *)(lVar1 + 0x34) = unaff_RDI[5];
    *(uint64_t *)(lVar1 + 0x40) = *(uint64_t *)(unaff_RDI + 8);
    *(uint64_t *)(lVar1 + 0x48) = *(uint64_t *)(unaff_RDI + 10);
    *(uint64_t *)(lVar1 + 0x50) = *(uint64_t *)(unaff_RDI + 0xc);
    *(uint64_t *)(lVar1 + 0x58) = *(uint64_t *)(unaff_RDI + 0xe);
    *(uint64_t *)(lVar1 + 0x60) = *(uint64_t *)(unaff_RDI + 0x10);
    *(uint64_t *)(lVar1 + 0x68) = *(uint64_t *)(unaff_RDI + 0x12);
    *(uint64_t *)(lVar1 + 0x70) = *(uint64_t *)(unaff_RDI + 0x14);
    *(uint64_t *)(lVar1 + 0x78) = *(uint64_t *)(unaff_RDI + 0x16);
    *(int32_t *)(lVar1 + 0x80) = unaff_RDI[0x18];
    *(int32_t *)(lVar1 + 0x84) = unaff_RDI[0x19];
    *(uint64_t *)(lVar1 + 0x88) = *(uint64_t *)(unaff_RDI + 0x1a);
    *(int32_t *)(lVar1 + 0x94) = unaff_RDI[0x1d];
    *(uint64_t *)(lVar1 + 0xa0) = *(uint64_t *)(unaff_RDI + 0x20);
    *(uint64_t *)(lVar1 + 0xa8) = *(uint64_t *)(unaff_RDI + 0x22);
    *(uint64_t *)(lVar1 + 0xb0) = *(uint64_t *)(unaff_RDI + 0x24);
    *(uint64_t *)(lVar1 + 0xb8) = *(uint64_t *)(unaff_RDI + 0x26);
    *(uint64_t *)(lVar1 + 0xc0) = *(uint64_t *)(unaff_RDI + 0x28);
    *(uint64_t *)(lVar1 + 200) = *(uint64_t *)(unaff_RDI + 0x2a);
    *(uint64_t *)(lVar1 + 0xd0) = *(uint64_t *)(unaff_RDI + 0x2c);
    *(uint64_t *)(lVar1 + 0xd8) = *(uint64_t *)(unaff_RDI + 0x2e);
    *(uint64_t *)(lVar1 + 0xe0) = *(uint64_t *)(unaff_RDI + 0x30);
    *(uint64_t *)(lVar1 + 0xe8) = *(uint64_t *)(unaff_RDI + 0x32);
    *(uint64_t *)(lVar1 + 0xf0) = *(uint64_t *)(unaff_RDI + 0x34);
    *(uint64_t *)(lVar1 + 0xf8) = *(uint64_t *)(unaff_RDI + 0x36);
    *(int32_t *)(lVar1 + 0x90) = *(int32_t *)(unaff_RBP + 0x3a0);
    *(int *)(unaff_RBP + 0x3a0) = *(int *)(unaff_RBP + 0x3a0) + 1;
    *(uint64_t *)(lVar1 + 0x98) = *(uint64_t *)(unaff_RDI + 0x1e);
    func_0x000180755660(lVar1,unaff_RBP + 0x180,unaff_RBP + 0x180,unaff_R14D);
    if (unaff_RSI != (int32_t *)0x0) {
      *unaff_RSI = *(int32_t *)(lVar1 + 0x90);
    }
    uVar2 = 0;
  }
  return uVar2;
}





// 函数: void FUN_1807720e7(void)
void FUN_1807720e7(void)

{
  return;
}





