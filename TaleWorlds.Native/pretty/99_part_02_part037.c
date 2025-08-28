#include "TaleWorlds.Native.Split.h"

// 99_part_02_part037.c - 10 个函数

// 函数: void FUN_1801aa780(longlong param_1)
void FUN_1801aa780(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  longlong lVar11;
  void *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  int8_t auStack_268 [32];
  int8_t uStack_248;
  uint64_t uStack_240;
  void *puStack_228;
  uint64_t *puStack_220;
  int32_t uStack_218;
  uint64_t uStack_210;
  int32_t uStack_208;
  longlong lStack_200;
  uint64_t uStack_1f8;
  uint64_t uStack_1f0;
  int16_t uStack_1e8;
  int8_t uStack_1e6;
  longlong lStack_1e0;
  int *piStack_1d8;
  uint64_t uStack_1d0;
  int16_t uStack_1c8;
  int8_t uStack_1c6;
  void *puStack_1c0;
  uint64_t *puStack_1b8;
  int32_t uStack_1b0;
  uint64_t uStack_1a8;
  void **ppuStack_1a0;
  uint64_t uStack_198;
  longlong lStack_190;
  longlong lStack_180;
  longlong lStack_178;
  uint64_t uStack_170;
  int32_t uStack_168;
  void *puStack_160;
  longlong lStack_158;
  int32_t uStack_148;
  void *puStack_140;
  void *puStack_138;
  int32_t uStack_128;
  uint64_t uStack_120;
  int8_t auStack_118 [24];
  char cStack_100;
  void *puStack_f8;
  longlong lStack_f0;
  int32_t uStack_e0;
  void *puStack_d8;
  int8_t *puStack_d0;
  int iStack_c8;
  int8_t auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_120 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_268;
  uStack_208 = 0;
  puStack_d8 = &unknown_var_3432_ptr;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  iStack_c8 = *(int *)(param_1 + 0x4e8);
  puVar12 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x4e0) != (void *)0x0) {
    puVar12 = *(void **)(param_1 + 0x4e0);
  }
  strcpy_s(auStack_c0,0x80,puVar12);
  puStack_228 = &unknown_var_3456_ptr;
  uStack_210 = 0;
  puStack_220 = (uint64_t *)0x0;
  uStack_218 = 0;
  puVar5 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar5 = 0;
  puStack_220 = puVar5;
  uVar3 = FUN_18064e990(puVar5);
  *puVar5 = 0x6a624f656e656353;
  *(int16_t *)(puVar5 + 1) = 0x2f;
  uStack_218 = 9;
  uStack_208 = 1;
  uStack_210._0_4_ = uVar3;
  if (0 < iStack_c8) {
    if ((iStack_c8 != -9) && (uVar3 < iStack_c8 + 10U)) {
      uStack_248 = 0x13;
      puVar5 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar5,iStack_c8 + 10U,0x10);
      puStack_220 = puVar5;
      uStack_210._0_4_ = FUN_18064e990(puVar5);
    }
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((longlong)puVar5 + 9),puStack_d0,(longlong)(iStack_c8 + 1));
  }
  FUN_180627ce0(param_1 + 0x27c8,&puStack_160,&puStack_228);
  FUN_180624910(&puStack_160);
  if (puVar5 == (uint64_t *)0x0) {
    puVar5 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x16,0x13);
    *(int8_t *)puVar5 = 0;
  }
  else {
    if (0x15 < uVar3) goto LAB_1801aa9b9;
    uStack_248 = 0x13;
    puVar5 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar5,0x16,0x10);
  }
  puStack_220 = puVar5;
  uStack_210._0_4_ = FUN_18064e990(puVar5);
LAB_1801aa9b9:
  *(uint64_t *)((longlong)puVar5 + 9) = 0x6873656d76616e2f;
  *(int32_t *)((longlong)puVar5 + 0x11) = 0x6e69622e;
  *(int8_t *)((longlong)puVar5 + 0x15) = 0;
  uStack_218 = 0x15;
  puStack_160 = &unknown_var_3456_ptr;
  if (lStack_158 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_158 = 0;
  uStack_148 = 0;
  puStack_160 = &unknown_var_720_ptr;
  FUN_180627ce0(param_1 + 0x27c8,&puStack_140,&puStack_228);
  uStack_208 = 0;
  puStack_228 = &unknown_var_3456_ptr;
  if (puVar5 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar5);
  }
  puStack_220 = (uint64_t *)0x0;
  uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
  puStack_228 = &unknown_var_720_ptr;
  puStack_d8 = &unknown_var_720_ptr;
  uStack_198 = 0;
  lStack_190 = 0;
  puVar12 = &system_buffer_ptr;
  if (puStack_138 != (void *)0x0) {
    puVar12 = puStack_138;
  }
  FUN_18062dee0(&uStack_198,puVar12,&unknown_var_4880_ptr);
  lVar2 = lStack_190;
  lStack_1e0 = 0;
  piStack_1d8 = (int *)0x0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1c6 = 0x10;
  lStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1e6 = 0x10;
  piVar9 = piStack_1d8;
  if (lStack_190 != 0) {
    uVar6 = _ftelli64(lStack_190);
    _fseeki64(lVar2,0,2);
    uVar7 = _ftelli64(lVar2);
    _fseeki64(lVar2,uVar6,0);
    FUN_180639bf0(&lStack_1e0,uVar7);
    fread(piStack_1d8,1,uVar7,lVar2);
    fclose(lVar2);
    lStack_190 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
    FUN_18038c3d0(param_1 + 0x2a68);
    piVar9 = piStack_1d8 + 1;
    if (*piStack_1d8 != 100) {
      if (*piStack_1d8 == 0x314d4e52) {
        piVar9 = piStack_1d8 + 2;
        ppuStack_1a0 = (void **)&lStack_180;
        lStack_180 = 0;
        lStack_178 = 0;
        uStack_170 = 0;
        uStack_168 = 3;
        puStack_1c0 = &unknown_var_3456_ptr;
        uStack_1a8 = 0;
        puStack_1b8 = (uint64_t *)0x0;
        uStack_1b0 = 0;
        piStack_1d8 = piVar9;
        puVar5 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x86,0x13);
        *(int8_t *)puVar5 = 0;
        puStack_1b8 = puVar5;
        uVar4 = FUN_18064e990(puVar5);
        uStack_1a8 = CONCAT44(uStack_1a8._4_4_,uVar4);
        *puVar5 = 0x6563732073696854;
        puVar5[1] = 0x737520736920656e;
        puVar5[2] = 0x6f206e6120676e69;
        puVar5[3] = 0x6d6f63207265646c;
        puVar5[4] = 0x6e6f697373657270;
        puVar5[5] = 0x2074616d726f6620;
        puVar5[6] = 0x7327746920726f66;
        puVar5[7] = 0x7461676976616e20;
        puVar5[8] = 0x6873656d206e6f69;
        puVar5[9] = 0x6877206174616420;
        puVar5[10] = 0x206e616320686369;
        puVar5[0xb] = 0x7320656220746f6e;
        *(int32_t *)(puVar5 + 0xc) = 0x70706968;
        *(int32_t *)((longlong)puVar5 + 100) = 0x202e6465;
        *(int32_t *)(puVar5 + 0xd) = 0x20656854;
        *(int32_t *)((longlong)puVar5 + 0x6c) = 0x6e656373;
        *(int32_t *)(puVar5 + 0xe) = 0x68732065;
        *(int32_t *)((longlong)puVar5 + 0x74) = 0x646c756f;
        *(int32_t *)(puVar5 + 0xf) = 0x20656220;
        *(int32_t *)((longlong)puVar5 + 0x7c) = 0x732d6572;
        *(int32_t *)(puVar5 + 0x10) = 0x64657661;
        *(int16_t *)((longlong)puVar5 + 0x84) = 0x2e;
        uStack_1b0 = 0x85;
        uStack_240 = 0;
        FUN_1803c57f0(&lStack_180,auStack_118,piVar9);
        lVar2 = lStack_180;
        if (cStack_100 == '\0') {
          lVar11 = lStack_178 - lStack_180;
          FUN_180639bf0(&lStack_200,lVar11);
                    // WARNING: Subroutine does not return
          memcpy(uStack_1f8,lVar2,lVar11);
        }
        ppuStack_1a0 = &puStack_f8;
        puStack_f8 = &unknown_var_3456_ptr;
        if (lStack_f0 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_f0 = 0;
        uStack_e0 = 0;
        puStack_f8 = &unknown_var_720_ptr;
        puStack_1c0 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar5);
      }
      piStack_1d8 = piStack_1d8 + 1;
      FUN_180627020(&unknown_var_3976_ptr);
      piVar9 = piStack_1d8;
    }
  }
  piStack_1d8 = piVar9;
  lVar2 = lStack_190;
  uVar10 = 0;
  uVar8 = uVar10;
  uVar13 = uVar10;
  if (*(longlong *)(param_1 + 0x2ea8) - *(longlong *)(param_1 + 0x2ea0) >> 3 != 0) {
    do {
      *(int8_t *)(*(longlong *)(uVar8 + *(longlong *)(param_1 + 0x2ea0)) + 0xc) = 0;
      uVar3 = (int)uVar13 + 1;
      uVar8 = uVar8 + 8;
      uVar13 = (ulonglong)uVar3;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0x2ea8) - *(longlong *)(param_1 + 0x2ea0) >> 3));
  }
  uVar8 = uVar10;
  if (*(longlong *)(param_1 + 0x2ee8) - *(longlong *)(param_1 + 12000) >> 3 != 0) {
    do {
      FUN_18038b160(*(uint64_t *)(uVar8 + *(longlong *)(param_1 + 12000)));
      uVar3 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar3;
      uVar8 = uVar8 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0x2ee8) - *(longlong *)(param_1 + 12000) >> 3));
  }
  lVar14 = 0;
  iVar15 = 0;
  lVar11 = *(longlong *)(param_1 + 0x2ec0);
  if (*(longlong *)(param_1 + 0x2ec8) - lVar11 >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(lVar11 + lVar14);
      if (*(byte *)(plVar1 + 4) < 2) {
        *(int8_t *)(*plVar1 + 0xc) = 1;
        *(int8_t *)(plVar1[1] + 0xc) = 1;
      }
      iVar15 = iVar15 + 1;
      lVar14 = lVar14 + 8;
      lVar11 = *(longlong *)(param_1 + 0x2ec0);
    } while ((ulonglong)(longlong)iVar15 <
             (ulonglong)(*(longlong *)(param_1 + 0x2ec8) - lVar11 >> 3));
  }
  FUN_18038ca20(param_1 + 0x2a68);
  FUN_1801ac9f0(param_1);
  if (((char)uStack_1e8 == '\0') && (lStack_200 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (((char)uStack_1c8 == '\0') && (lStack_1e0 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (lVar2 != 0) {
    fclose(lVar2);
    lStack_190 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  puStack_140 = &unknown_var_3456_ptr;
  if (puStack_138 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_138 = (void *)0x0;
  uStack_128 = 0;
  puStack_140 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_268);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801aaf60(longlong param_1,int8_t param_2)
void FUN_1801aaf60(longlong param_1,int8_t param_2)

{
  uint64_t uVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x60b80);
  if (plVar2 == (longlong *)0x0) {
    uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x1e80,0x10,3);
    plVar2 = (longlong *)FUN_1803af3d0(uVar1);
    *(longlong **)(param_1 + 0x60b80) = plVar2;
  }
  plVar2[0x3be] = (longlong)plVar2;
  (**(code **)(*plVar2 + 0x80))(plVar2,param_1);
  (**(code **)(*plVar2 + 0x78))(plVar2);
  FUN_1803b7760(plVar2,param_1);
  (**(code **)(*plVar2 + 0x10))(plVar2,0,1);
  FUN_1803b2230(plVar2);
  (**(code **)(*plVar2 + 0x88))(plVar2,param_2);
  *(uint64_t *)(*(longlong *)(param_1 + 0x330) + 0x68) = *(uint64_t *)(param_1 + 0x60b80);
  if ((*(char *)(param_1 + 0x2964) != '\0') && (*(int *)(_DAT_180c86920 + 0x690) != 0)) {
    FUN_1801af6d0(param_1);
  }
  return;
}



bool FUN_1801ab040(longlong param_1,int32_t *param_2,int32_t *param_3,longlong param_4,
                  uint64_t param_5,float param_6)

{
  longlong *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  float fStack_1c;
  uint64_t uStack_18;
  
  uVar4 = *param_2;
  uVar2 = param_2[1];
  uVar5 = param_2[2];
  uVar3 = param_2[3];
  uStack_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  uStack_48 = func_0x00018023a1e0(&uStack_58,uStack_58,param_3,param_4,uVar4,uVar5);
  uStack_18 = param_5;
  uStack_30 = uStack_58;
  uStack_2c = uStack_54;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_40 = uVar4;
  uStack_3c = uVar2;
  uStack_38 = uVar5;
  uStack_34 = uVar3;
  uStack_20 = uStack_48;
  if (param_6 <= 0.011) {
    fStack_1c = (float)((uint)fStack_1c & 0xffffff00);
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x28f8) + 0x318) + 0x118))();
    return 0 < *(int *)(param_4 + 0x40);
  }
  fStack_1c = param_6;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28f8) + 0x318);
  (**(code **)(*plVar1 + 0x148))(plVar1,&uStack_40,param_4);
  return 0 < *(int *)(param_4 + 0x40);
}



bool FUN_1801ab110(longlong param_1,float *param_2,float *param_3,float param_4,longlong param_5)

{
  longlong *plVar1;
  float fVar2;
  int8_t auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint64_t uStack_b8;
  float fStack_b0;
  int32_t uStack_ac;
  int8_t uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int8_t uStack_54;
  uint64_t *puStack_50;
  
  fVar6 = param_3[1] - param_2[1];
  fVar7 = param_3[2] - param_2[2];
  fVar8 = *param_3 - *param_2;
  fVar5 = fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7;
  auVar3 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
  fVar2 = auVar3._0_4_;
  fVar4 = fVar2 * 0.5 * (3.0 - fVar5 * fVar2 * fVar2);
  fVar2 = fVar4 * fVar5;
  if (param_4 <= fVar4 * fVar5) {
    fVar2 = param_4;
  }
  fStack_a0 = *param_2;
  fStack_9c = param_2[1];
  fStack_98 = param_2[2];
  fStack_94 = param_2[3];
  fStack_90 = (fVar8 * fVar4 * fVar2 + *param_2) - *param_2;
  fStack_8c = (fVar6 * fVar4 * fVar2 + param_2[1]) - param_2[1];
  fStack_b0 = (fVar7 * fVar4 * fVar2 + param_2[2]) - param_2[2];
  uStack_b8 = (void *)CONCAT44(fStack_8c,fStack_90);
  uStack_ac = 0x7f7fffff;
  uStack_84 = 0x7f7fffff;
  fStack_88 = fStack_b0;
  uStack_80 = func_0x00018023a1e0(&fStack_90);
  uStack_b8 = &unknown_var_6432_ptr;
  puStack_50 = &uStack_b8;
  uStack_ac = 0x31b789;
  fStack_b0 = 2.8026e-45;
  uStack_a8 = 0;
  fStack_78 = fStack_a0;
  fStack_74 = fStack_9c;
  fStack_70 = fStack_98;
  fStack_6c = fStack_94;
  uStack_54 = 1;
  fStack_68 = fStack_90;
  fStack_64 = fStack_8c;
  fStack_60 = fStack_88;
  uStack_5c = uStack_84;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28f8) + 0x318);
  uStack_58 = uStack_80;
  (**(code **)(*plVar1 + 0x118))(plVar1,&fStack_78,param_5);
  return *(int *)(param_5 + 0x40) == 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1801ab2f0(longlong param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)

{
  ulonglong uVar1;
  uint64_t *puVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  uint64_t uVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  
  if ((char)param_2 == '\0') {
    puVar2 = *(uint64_t **)(param_1 + 0x318);
    if (puVar2 != (uint64_t *)0x0) {
      lVar5 = __RTCastToVoid(puVar2,param_2,param_3,param_4,0xfffffffffffffffe);
      in_RAX = (**(code **)*puVar2)(puVar2,0);
      if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar5);
      }
    }
    *(uint64_t *)(param_1 + 0x318) = 0;
  }
  else if (*(longlong *)(param_1 + 0x318) == 0) {
    if (*(char *)(param_1 + 0x315) == '\0') {
      uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x238,8,3);
      plVar3 = (longlong *)FUN_1803c8700(uVar4);
      *(longlong **)(param_1 + 0x318) = plVar3;
    }
    else {
      plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0xb8,8,3);
      FUN_1801c26f0(plVar3);
      *plVar3 = (longlong)&unknown_var_7144_ptr;
      *(longlong **)(param_1 + 0x318) = plVar3;
    }
    uStack_30 = *(int32_t *)(param_1 + 0x60b70);
    uStack_2c = *(int32_t *)(param_1 + 0x60b74);
    uStack_28 = 0x447a0000;
    uStack_24 = 0x7f7fffff;
    uStack_20 = *(int32_t *)(param_1 + 0x60b68);
    uStack_1c = *(int32_t *)(param_1 + 0x60b6c);
    uStack_18 = 0xc47a0000;
    uStack_14 = 0x7f7fffff;
    in_RAX = (**(code **)(*plVar3 + 8))(plVar3,&uStack_20,&uStack_30);
    lVar5 = *(longlong *)(param_1 + 0x318);
    lVar6 = lVar5 + 0x90;
    if (lVar6 != param_1 + 0x608d0) {
      if (*(code **)(lVar5 + 0xa0) != (code *)0x0) {
        (**(code **)(lVar5 + 0xa0))(lVar6,0,0);
      }
      pcVar7 = *(code **)(param_1 + 0x608e0);
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(lVar6,param_1 + 0x608d0,1);
        pcVar7 = *(code **)(param_1 + 0x608e0);
      }
      *(code **)(lVar5 + 0xa0) = pcVar7;
      uVar1 = *(ulonglong *)(param_1 + 0x608e8);
      *(ulonglong *)(lVar5 + 0xa8) = uVar1;
      return uVar1 & 0xffffffffffffff00;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



uint64_t FUN_1801ab4c0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x2901) != '\0') {
    return 0;
  }
  plVar1 = (longlong *)FUN_1801b4a60();
  if ((plVar1[1] - *plVar1 & 0xfffffffffffffff8U) == 0) {
    FUN_1801af550(param_1,*(uint64_t *)(param_1 + 0x60b68),*(uint64_t *)(param_1 + 0x60b70));
    return 1;
  }
  FUN_1801af550(param_1,CONCAT44(*(float *)((longlong)plVar1 + 0x34) - 20.0,
                                 *(float *)(plVar1 + 6) - 20.0),
                CONCAT44(*(float *)((longlong)plVar1 + 0x3c) + 20.0,*(float *)(plVar1 + 7) + 20.0));
  return 1;
}



uint64_t
FUN_1801ab580(longlong param_1,longlong param_2,byte *param_3,byte *param_4,uint64_t param_5,
             int8_t param_6,int32_t param_7,char param_8)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int8_t uVar4;
  
  if (((param_4[0x1bd8] & 2) == 0) || ((*(uint *)(param_2 + 0x2ac) & 0x200) != 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  uVar1 = FUN_1801b8840(param_1 + 0x2998,param_4,param_2,uVar4,param_6,param_7);
  uVar3 = (ulonglong)uVar1;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    if (param_4 == param_3) {
      *(uint *)(*(longlong *)(param_2 + 0x10) + 0x130) = uVar1;
    }
    if ((*(byte *)(param_2 + 0x2e8) & 0xb) != 0xb) {
      uVar3 = 0;
    }
  }
  if ((*param_4 & 0x40) == 0) {
    uVar2 = uVar3;
    if ((*(uint *)(param_2 + 0x2c4) & 8) != 0) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
    if ((*(uint *)(param_2 + 0x2c4) & 0x10) == 0) {
      uVar2 = uVar3;
    }
  }
  if (param_8 != '\0') {
    uVar2 = 1;
  }
  if ((param_4[0x23] != 0) && (*(char *)(param_2 + 0x2e4) == '\x01')) {
    uVar2 = 0;
  }
  return CONCAT71((int7)(uVar2 >> 8),(int)uVar2 != 0);
}






// 函数: void FUN_1801ab660(void)
void FUN_1801ab660(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






// 函数: void FUN_1801ac1c0(longlong param_1,char param_2)
void FUN_1801ac1c0(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x448);
  if (lVar1 != 0) {
    *(int32_t *)(lVar1 + 0x2150) = *(int32_t *)(*(longlong *)(lVar1 + 0x2148) + 0x3054);
    FUN_180379810(lVar1);
    FUN_1803769d0(lVar1);
    if (param_2 != '\0') {
      FUN_1800b8500(*(longlong *)(param_1 + 0x448) + 0x21e0);
    }
    FUN_1800b8500(param_1 + 0x81b0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ac240(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801ac240(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  uint64_t uVar12;
  
  uVar12 = 0xfffffffffffffffe;
  if ((*(longlong *)(param_1 + 0x60b80) != 0) && (*(longlong *)(param_1 + 0x448) != 0)) {
    plVar11 = (longlong *)
              (((longlong)*(int *)(param_1 + 0x3054) + 0x10b) * 0x20 +
              *(longlong *)(param_1 + 0x448));
    iVar9 = 0;
    lVar6 = *plVar11;
    if (plVar11[1] - lVar6 >> 3 != 0) {
      lVar10 = 0;
      do {
        plVar8 = *(longlong **)(lVar6 + lVar10);
        lVar6 = *plVar8;
        *(int8_t *)(lVar6 + 0x141) = 1;
        *(longlong *)(lVar6 + 0x148) =
             (*(longlong *)(lVar6 + 0x88) - *(longlong *)(lVar6 + 0x80)) / 0x28;
        lVar6 = *plVar8;
        *(uint64_t *)(lVar6 + 0x88) = *(uint64_t *)(lVar6 + 0x80);
        FUN_18037ef00();
        *(uint64_t *)(lVar6 + 0xb0) = *(uint64_t *)(lVar6 + 0xa8);
        FUN_18037ef00();
        plVar8 = (longlong *)(lVar6 + 0xd0);
        FUN_180080ca0(plVar8,0);
        lVar2 = *(longlong *)(lVar6 + 0xd8);
        lVar3 = *plVar8;
        uVar1 = *(uint *)(lVar6 + 0xe8);
        lVar5 = lVar2 - lVar3;
        lVar7 = lVar5 >> 2;
        if (lVar7 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = FUN_18062b420(_DAT_180c8ed18,lVar7 * 4,uVar1 & 0xff,param_4,uVar12,0,0,0,uVar1);
        }
        lVar7 = lVar4 + lVar7 * 4;
        if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar3,lVar5,param_4,uVar12,lVar4,lVar7,lVar7);
        }
        lVar2 = *plVar8;
        *plVar8 = lVar4;
        *(longlong *)(lVar6 + 0xd8) = lVar7;
        *(longlong *)(lVar6 + 0xe0) = lVar7;
        *(uint *)(lVar6 + 0xe8) = uVar1;
        if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 8;
        lVar6 = *plVar11;
      } while ((ulonglong)(longlong)iVar9 < (ulonglong)(plVar11[1] - lVar6 >> 3));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ac450(longlong param_1)
void FUN_1801ac450(longlong param_1)

{
  int iVar1;
  int32_t uVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t uVar5;
  longlong lVar6;
  uint64_t in_stack_ffffffffffffffa8;
  int32_t uVar7;
  longlong *plVar8;
  longlong alStack_40 [2];
  void *puStack_30;
  code *pcStack_28;
  
  uVar7 = (int32_t)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  iVar1 = *(int *)(_DAT_180c86920 + 0xe0);
  if (*(int *)(param_1 + 0x450) != iVar1) {
    if ((*(longlong *)(param_1 + 0x60b80) != 0) && (*(longlong *)(param_1 + 0x448) != 0)) {
      FUN_180374e60();
      (**(code **)(**(longlong **)(param_1 + 0x60b80) + 0x10))
                (*(longlong **)(param_1 + 0x60b80),0,0);
      lVar3 = *(longlong *)(param_1 + 0x60b28);
      lVar4 = *(longlong *)(param_1 + 0x60b20);
      uVar2 = *(int32_t *)(param_1 + 0x3054);
      if (*(longlong *)(param_1 + 0x448) == 0) {
        uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x2370,8,3);
        FUN_180373a60(uVar5,param_1);
      }
      uVar5 = CONCAT44(uVar7,uVar2);
      FUN_18039cb40();
      lVar6 = *(longlong *)(param_1 + 0x448);
      if (lVar6 == 0) {
        uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x2370,8,3,uVar5);
        lVar6 = FUN_180373a60(uVar5,param_1);
      }
      FUN_18037ae40(lVar6,param_1 + 0x81b0);
      puStack_30 = &unknown_var_8832_ptr;
      pcStack_28 = FUN_1801bbc00;
      plVar8 = alStack_40;
      uVar5 = 0xffffffffffffffff;
      alStack_40[0] = param_1;
      FUN_18015b810();
      lVar6 = *(longlong *)(param_1 + 0x448);
      if (lVar6 == 0) {
        uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x2370,8,3,uVar5,plVar8);
        lVar6 = FUN_180373a60(uVar5,param_1);
      }
      FUN_1803786b0(lVar6,*(uint64_t *)(param_1 + 0x60b80),lVar3 - lVar4 >> 3 & 0xffffffff);
      FUN_1801ac1c0(param_1,1);
      *(int *)(param_1 + 0x28b4) = *(int *)(param_1 + 0x28b4) + 1;
      FUN_1803b07c0(*(uint64_t *)(param_1 + 0x60b80));
      FUN_1801ac240(param_1);
    }
    *(int *)(param_1 + 0x450) = iVar1;
  }
  return;
}






// 函数: void FUN_1801ac640(void)
void FUN_1801ac640(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






// 函数: void FUN_1801ac9f0(longlong param_1)
void FUN_1801ac9f0(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  func_0x0001801c0ee0(param_1 + 0x28c8);
  lVar5 = *(longlong *)(param_1 + 12000);
  iVar8 = 0;
  if (*(longlong *)(param_1 + 0x2ee8) - lVar5 >> 3 != 0) {
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(lVar7 + lVar5);
      *(int *)(lVar5 + 300) = iVar8;
      FUN_180388630();
      if (((0.57357645 < *(float *)(lVar5 + 0xd8)) || (*(byte *)(lVar5 + 0xa8) < 4)) ||
         (0.57357645 < *(float *)(lVar5 + 0xe4))) {
        *(byte *)(lVar5 + 0x139) = *(byte *)(lVar5 + 0x139) & 0xf7;
      }
      else {
        bVar1 = false;
        plVar2 = (longlong *)(lVar5 + 0xb0);
        iVar4 = 0;
        lVar6 = 0;
        do {
          if ((*plVar2 != 0) && (iVar4 = iVar4 + 1, 2 < iVar4)) {
            bVar1 = true;
            break;
          }
          lVar6 = lVar6 + 1;
          plVar2 = plVar2 + 1;
        } while (lVar6 < 4);
        bVar3 = *(byte *)(lVar5 + 0x139) & 0xf7;
        if (!bVar1) {
          bVar3 = *(byte *)(lVar5 + 0x139) | 8;
        }
        *(byte *)(lVar5 + 0x139) = bVar3;
      }
      lVar5 = *(longlong *)(param_1 + 12000);
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((ulonglong)(longlong)iVar8 < (ulonglong)(*(longlong *)(param_1 + 0x2ee8) - lVar5 >> 3))
    ;
  }
  return;
}






// 函数: void FUN_1801aca2f(uint64_t param_1,longlong param_2)
void FUN_1801aca2f(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong unaff_RBP;
  longlong lVar7;
  int unaff_EDI;
  
  lVar7 = 0;
  do {
    lVar1 = *(longlong *)(lVar7 + param_2);
    *(int *)(lVar1 + 300) = unaff_EDI;
    FUN_180388630();
    if (((0.57357645 < *(float *)(lVar1 + 0xd8)) || (*(byte *)(lVar1 + 0xa8) < 4)) ||
       (0.57357645 < *(float *)(lVar1 + 0xe4))) {
      *(byte *)(lVar1 + 0x139) = *(byte *)(lVar1 + 0x139) & 0xf7;
    }
    else {
      bVar2 = false;
      plVar3 = (longlong *)(lVar1 + 0xb0);
      iVar5 = 0;
      lVar6 = 0;
      do {
        if ((*plVar3 != 0) && (iVar5 = iVar5 + 1, 2 < iVar5)) {
          bVar2 = true;
          break;
        }
        lVar6 = lVar6 + 1;
        plVar3 = plVar3 + 1;
      } while (lVar6 < 4);
      bVar4 = *(byte *)(lVar1 + 0x139) & 0xf7;
      if (!bVar2) {
        bVar4 = *(byte *)(lVar1 + 0x139) | 8;
      }
      *(byte *)(lVar1 + 0x139) = bVar4;
    }
    param_2 = *(longlong *)(unaff_RBP + 12000);
    unaff_EDI = unaff_EDI + 1;
    lVar7 = lVar7 + 8;
    if ((ulonglong)(*(longlong *)(unaff_RBP + 0x2ee8) - param_2 >> 3) <=
        (ulonglong)(longlong)unaff_EDI) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1801acb11(void)
void FUN_1801acb11(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




