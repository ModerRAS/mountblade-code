#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part031.c - 6 个函数

// 函数: void FUN_1804fe960(uint64_t param_1,char param_2,uint64_t param_3,int32_t *param_4,
void FUN_1804fe960(uint64_t param_1,char param_2,uint64_t param_3,int32_t *param_4,
                  uint64_t param_5,uint64_t param_6)

{
  code *pcVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong *plVar5;
  uint64_t uVar6;
  int8_t auStack_198 [32];
  void *puStack_178;
  void *puStack_170;
  int32_t uStack_168;
  void *puStack_160;
  longlong lStack_158;
  int32_t uStack_148;
  void *puStack_140;
  longlong lStack_138;
  int32_t uStack_128;
  uint64_t *puStack_120;
  uint64_t *puStack_118;
  uint64_t uStack_110;
  int32_t uStack_108;
  uint64_t uStack_100;
  int8_t *puStack_f8;
  longlong alStack_e8 [8];
  void *puStack_a8;
  int8_t auStack_90 [88];
  ulonglong uStack_38;
  
  uStack_100 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_198;
  uStack_168 = 0;
  FUN_180637560(alStack_e8);
  plVar5 = (longlong *)(**(code **)(alStack_e8[0] + 0x70))(alStack_e8,&unknown_var_4032_ptr);
  if (param_2 == '\0') {
    (**(code **)(*plVar5 + 0x70))(plVar5,&unknown_var_5104_ptr);
  }
  else {
    (**(code **)(*plVar5 + 0x70))(plVar5,&system_data_c8e4);
    FUN_180627910(&puStack_160,&unknown_var_4080_ptr);
    puStack_120 = (uint64_t *)0x0;
    puStack_118 = (uint64_t *)0x0;
    uStack_110 = 0;
    uStack_108 = 3;
    if (lStack_158 != 0) {
      FUN_180057980(&puStack_160,&puStack_120,&system_data_d518);
    }
    puVar3 = puStack_120;
    pcVar1 = *(code **)(alStack_e8[0] + 0x78);
    uVar6 = FUN_180627ae0(&puStack_140,puStack_120);
    uStack_168 = 1;
    FUN_180628a40(&puStack_140);
    plVar5 = (longlong *)(*pcVar1)(alStack_e8,uVar6);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x70))(plVar5,&unknown_var_1532_ptr);
    (**(code **)(*plVar5 + 0x50))(plVar5,*param_4);
    puVar4 = puStack_118;
    uStack_168 = 0;
    puStack_140 = &system_data_buffer_ptr;
    if (lStack_138 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_138 = 0;
    uStack_128 = 0;
    puStack_140 = &system_state_ptr;
    puVar2 = puVar3;
    if (1 < (ulonglong)((longlong)puStack_118 - (longlong)puVar3 >> 5)) {
      (**(code **)(alStack_e8[0] + 0x70))(alStack_e8,&system_temp_buffer);
      puStack_178 = (void *)param_6;
      FUN_180500cf0(alStack_e8,&puStack_120,1,param_5);
    }
    for (; puVar2 != puVar4; puVar2 = puVar2 + 4) {
      (**(code **)*puVar2)(puVar2,0);
    }
    if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar3);
    }
    puStack_160 = &system_data_buffer_ptr;
    if (lStack_158 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_158 = 0;
    uStack_148 = 0;
    puStack_160 = &system_state_ptr;
  }
  puStack_170 = &system_buffer_ptr;
  if (puStack_a8 != (void *)0x0) {
    puStack_170 = puStack_a8;
  }
  puStack_178 = &unknown_var_5184_ptr;
  FUN_1800623b0(system_message_context,0,0x40000000000,0xc);
  puStack_f8 = auStack_90;
  _Mtx_destroy_in_situ(auStack_90);
  FUN_1805065c0(alStack_e8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_198);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804fec00(uint64_t param_1,char param_2,uint64_t param_3,int8_t *param_4,
void FUN_1804fec00(uint64_t param_1,char param_2,uint64_t param_3,int8_t *param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8)

{
  code *pcVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong *plVar5;
  uint64_t uVar6;
  int8_t auStack_1a8 [32];
  void *puStack_188;
  void *puStack_180;
  uint64_t uStack_178;
  int32_t uStack_168;
  int8_t *puStack_160;
  int8_t *puStack_158;
  void *puStack_150;
  longlong lStack_148;
  int32_t uStack_138;
  void *puStack_130;
  longlong lStack_128;
  int32_t uStack_118;
  uint64_t *puStack_110;
  uint64_t *puStack_108;
  uint64_t uStack_100;
  int32_t uStack_f8;
  uint64_t uStack_f0;
  longlong alStack_e8 [8];
  void *puStack_a8;
  int8_t auStack_90 [88];
  ulonglong uStack_38;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1a8;
  puStack_160 = (int8_t *)param_8;
  uStack_168 = 0;
  puStack_158 = param_4;
  FUN_180637560(alStack_e8);
  plVar5 = (longlong *)(**(code **)(alStack_e8[0] + 0x70))(alStack_e8,&unknown_var_4544_ptr);
  if (param_2 == '\0') {
    (**(code **)(*plVar5 + 0x70))(plVar5,&unknown_var_5104_ptr);
  }
  else {
    (**(code **)(*plVar5 + 0x70))(plVar5,&system_data_c8e4);
    FUN_180627910(&puStack_150,&unknown_var_4608_ptr);
    puStack_110 = (uint64_t *)0x0;
    puStack_108 = (uint64_t *)0x0;
    uStack_100 = 0;
    uStack_f8 = 3;
    if (lStack_148 != 0) {
      FUN_180057980(&puStack_150,&puStack_110,&system_data_d518);
    }
    puVar3 = puStack_110;
    pcVar1 = *(code **)(alStack_e8[0] + 0x78);
    uVar6 = FUN_180627ae0(&puStack_130,puStack_110);
    uStack_168 = 1;
    FUN_180628a40(&puStack_130);
    plVar5 = (longlong *)(*pcVar1)(alStack_e8,uVar6);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x70))(plVar5,&unknown_var_1532_ptr);
    (**(code **)(*plVar5 + 0x30))(plVar5,*puStack_158);
    puVar4 = puStack_108;
    uStack_168 = 0;
    puStack_130 = &system_data_buffer_ptr;
    if (lStack_128 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_128 = 0;
    uStack_118 = 0;
    puStack_130 = &system_state_ptr;
    puVar2 = puVar3;
    if (1 < (ulonglong)((longlong)puStack_108 - (longlong)puVar3 >> 5)) {
      (**(code **)(alStack_e8[0] + 0x70))(alStack_e8,&system_temp_buffer);
      uStack_178 = puStack_160;
      puStack_180 = (void *)param_7;
      puStack_188 = (void *)param_6;
      FUN_1805018c0(alStack_e8,&puStack_110);
    }
    for (; puVar2 != puVar4; puVar2 = puVar2 + 4) {
      (**(code **)*puVar2)(puVar2,0);
    }
    if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar3);
    }
    puStack_150 = &system_data_buffer_ptr;
    if (lStack_148 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_148 = 0;
    uStack_138 = 0;
    puStack_150 = &system_state_ptr;
  }
  puStack_180 = &system_buffer_ptr;
  if (puStack_a8 != (void *)0x0) {
    puStack_180 = puStack_a8;
  }
  puStack_188 = &unknown_var_5184_ptr;
  FUN_1800623b0(system_message_context,0,0x40000000000,0xc);
  puStack_160 = auStack_90;
  _Mtx_destroy_in_situ(auStack_90);
  FUN_1805065c0(alStack_e8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804feec0(uint64_t param_1,char param_2,uint64_t param_3,int32_t *param_4,
void FUN_1804feec0(uint64_t param_1,char param_2,uint64_t param_3,int32_t *param_4,
                  uint64_t param_5)

{
  code *pcVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong *plVar5;
  uint64_t uVar6;
  int8_t auStack_198 [32];
  void *puStack_178;
  void *puStack_170;
  int32_t uStack_168;
  void *puStack_160;
  longlong lStack_158;
  int32_t uStack_148;
  void *puStack_140;
  longlong lStack_138;
  int32_t uStack_128;
  uint64_t *puStack_120;
  uint64_t *puStack_118;
  uint64_t uStack_110;
  int32_t uStack_108;
  uint64_t uStack_100;
  int8_t *puStack_f8;
  longlong alStack_e8 [8];
  void *puStack_a8;
  int8_t auStack_90 [88];
  ulonglong uStack_38;
  
  uStack_100 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_198;
  uStack_168 = 0;
  FUN_180637560(alStack_e8);
  plVar5 = (longlong *)(**(code **)(alStack_e8[0] + 0x70))(alStack_e8,&unknown_var_4376_ptr);
  if (param_2 == '\0') {
    (**(code **)(*plVar5 + 0x70))(plVar5,&unknown_var_5104_ptr);
  }
  else {
    (**(code **)(*plVar5 + 0x70))(plVar5,&system_data_c8e4);
    FUN_180627910(&puStack_160,&unknown_var_4424_ptr);
    puStack_120 = (uint64_t *)0x0;
    puStack_118 = (uint64_t *)0x0;
    uStack_110 = 0;
    uStack_108 = 3;
    if (lStack_158 != 0) {
      FUN_180057980(&puStack_160,&puStack_120,&system_data_d518);
    }
    puVar3 = puStack_120;
    pcVar1 = *(code **)(alStack_e8[0] + 0x78);
    uVar6 = FUN_180627ae0(&puStack_140,puStack_120);
    uStack_168 = 1;
    FUN_180628a40(&puStack_140);
    plVar5 = (longlong *)(*pcVar1)(alStack_e8,uVar6);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x70))(plVar5,&unknown_var_1532_ptr);
    (**(code **)(*plVar5 + 0x28))(plVar5,*param_4);
    puVar4 = puStack_118;
    uStack_168 = 0;
    puStack_140 = &system_data_buffer_ptr;
    if (lStack_138 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_138 = 0;
    uStack_128 = 0;
    puStack_140 = &system_state_ptr;
    puVar2 = puVar3;
    if (1 < (ulonglong)((longlong)puStack_118 - (longlong)puVar3 >> 5)) {
      (**(code **)(alStack_e8[0] + 0x70))(alStack_e8,&system_temp_buffer);
      FUN_180500bd0(alStack_e8,&puStack_120,1,param_5);
    }
    for (; puVar2 != puVar4; puVar2 = puVar2 + 4) {
      (**(code **)*puVar2)(puVar2,0);
    }
    if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar3);
    }
    puStack_160 = &system_data_buffer_ptr;
    if (lStack_158 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_158 = 0;
    uStack_148 = 0;
    puStack_160 = &system_state_ptr;
  }
  puStack_170 = &system_buffer_ptr;
  if (puStack_a8 != (void *)0x0) {
    puStack_170 = puStack_a8;
  }
  puStack_178 = &unknown_var_5184_ptr;
  FUN_1800623b0(system_message_context,0,0x40000000000,0xc);
  puStack_f8 = auStack_90;
  _Mtx_destroy_in_situ(auStack_90);
  FUN_1805065c0(alStack_e8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_198);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804ff150(uint64_t param_1,char param_2,uint64_t param_3,uint64_t param_4,
void FUN_1804ff150(uint64_t param_1,char param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  longlong *plVar3;
  uint64_t *puVar4;
  int8_t auStack_148 [32];
  void *puStack_128;
  void *puStack_120;
  void *puStack_118;
  longlong lStack_110;
  int32_t uStack_100;
  uint64_t *puStack_f8;
  uint64_t *puStack_f0;
  uint64_t uStack_e8;
  int32_t uStack_e0;
  uint64_t uStack_d8;
  int8_t *puStack_d0;
  longlong alStack_c8 [8];
  void *puStack_88;
  int8_t auStack_70 [88];
  ulonglong uStack_18;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_148;
  FUN_180637560(alStack_c8);
  plVar3 = (longlong *)(**(code **)(alStack_c8[0] + 0x70))(alStack_c8,&unknown_var_4456_ptr);
  if (param_2 == '\0') {
    (**(code **)(*plVar3 + 0x70))(plVar3,&unknown_var_5104_ptr);
  }
  else {
    (**(code **)(*plVar3 + 0x70))(plVar3,&system_data_c8e4);
    FUN_180627910(&puStack_118,&unknown_var_4504_ptr);
    puStack_f8 = (uint64_t *)0x0;
    puStack_f0 = (uint64_t *)0x0;
    uStack_e8 = 0;
    uStack_e0 = 3;
    if (lStack_110 != 0) {
      FUN_180057980(&puStack_118,&puStack_f8,&system_data_d518);
    }
    puStack_128 = (void *)param_5;
    FUN_180500ee0(alStack_c8,&puStack_f8);
    puVar2 = puStack_f0;
    puVar1 = puStack_f8;
    for (puVar4 = puStack_f8; puVar4 != puVar2; puVar4 = puVar4 + 4) {
      (**(code **)*puVar4)(puVar4,0);
    }
    if (puVar1 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar1);
    }
    puStack_118 = &system_data_buffer_ptr;
    if (lStack_110 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_110 = 0;
    uStack_100 = 0;
    puStack_118 = &system_state_ptr;
  }
  puStack_120 = &system_buffer_ptr;
  if (puStack_88 != (void *)0x0) {
    puStack_120 = puStack_88;
  }
  puStack_128 = &unknown_var_5184_ptr;
  FUN_1800623b0(system_message_context,0,0x40000000000,0xc);
  puStack_d0 = auStack_70;
  _Mtx_destroy_in_situ(auStack_70);
  FUN_1805065c0(alStack_c8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_148);
}






// 函数: void FUN_1804ff330(float *param_1,float *param_2,float param_3,longlong *param_4)
void FUN_1804ff330(float *param_1,float *param_2,float param_3,longlong *param_4)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uStackX_8;
  int iStackX_c;
  
  uVar3 = 0;
  *param_4 = 0;
  param_4[4] = *(longlong *)param_2;
  *(float *)(param_4 + 5) = param_3 * param_3;
  fVar7 = *param_2;
  fVar5 = param_2[1];
  fVar8 = ((fVar7 - param_3) - *param_1) * param_1[5];
  if (fVar8 <= 0.0) {
    fVar8 = fVar8 - 0.9999999;
  }
  fVar6 = param_1[5] * ((fVar5 - param_3) - param_1[1]);
  uStackX_8 = (uint)fVar8;
  if (fVar6 <= 0.0) {
    fVar6 = fVar6 - 0.9999999;
  }
  iStackX_c = (int)fVar6;
  if ((int)uStackX_8 < 0) {
    uStackX_8 = 0;
  }
  else {
    if ((int)((int)param_1[2] - 1U) < (int)uStackX_8) {
      uStackX_8 = (int)param_1[2] - 1U;
    }
    uVar3 = (ulonglong)uStackX_8;
  }
  if (iStackX_c < 0) {
    iStackX_c = 0;
  }
  else if ((int)param_1[3] + -1 < iStackX_c) {
    iStackX_c = (int)param_1[3] + -1;
  }
  iVar2 = iStackX_c;
  uVar1 = CONCAT44(iStackX_c,uStackX_8);
  param_4[2] = uVar1;
  fVar7 = ((fVar7 + param_3) - *param_1) * param_1[5];
  if (fVar7 <= 0.0) {
    fVar7 = fVar7 - 0.9999999;
  }
  fVar5 = ((fVar5 + param_3) - param_1[1]) * param_1[5];
  uStackX_8 = (uint)fVar7;
  if (fVar5 <= 0.0) {
    fVar5 = fVar5 - 0.9999999;
  }
  iStackX_c = (int)fVar5;
  if ((int)uStackX_8 < 0) {
    uStackX_8 = 0;
  }
  else if ((int)param_1[2] + -1 < (int)uStackX_8) {
    uStackX_8 = (int)param_1[2] + -1;
  }
  if (iStackX_c < 0) {
    iStackX_c = 0;
  }
  else if ((int)param_1[3] + -1 < iStackX_c) {
    iStackX_c = (int)param_1[3] + -1;
  }
  param_4[3] = CONCAT44(iStackX_c,uStackX_8);
  param_4[1] = uVar1;
  lVar4 = *(longlong *)
           ((longlong)(iVar2 * (int)param_1[2] + (int)uVar3) * 9 + *(longlong *)(param_1 + 6));
  *param_4 = lVar4;
  if (lVar4 == 0) {
    do {
      if ((int)uVar3 == (int)param_4[3]) {
        iVar2 = (int)(uVar1 >> 0x20);
        if (iVar2 == *(int *)((longlong)param_4 + 0x1c)) break;
        *(int *)((longlong)param_4 + 0xc) = iVar2 + 1;
        iVar2 = (int)param_4[2];
      }
      else {
        iVar2 = (int)uVar3 + 1;
      }
      *(int *)(param_4 + 1) = iVar2;
      uVar3 = param_4[1];
      lVar4 = *(longlong *)
               ((longlong)((int)(uVar3 >> 0x20) * (int)param_1[2] + (int)uVar3) * 9 +
               *(longlong *)(param_1 + 6));
      if (lVar4 == 0) {
        lVar4 = *param_4;
      }
      else {
        *param_4 = lVar4;
      }
      uVar1 = uVar3;
    } while (lVar4 == 0);
    if (lVar4 == 0) {
      return;
    }
  }
  fVar7 = *(float *)(param_4 + 4) - *(float *)(lVar4 + 8);
  fVar5 = *(float *)((longlong)param_4 + 0x24) - *(float *)(lVar4 + 0xc);
  if (param_3 * param_3 < fVar7 * fVar7 + fVar5 * fVar5) {
    FUN_1804ff550(param_1,param_4);
  }
  return;
}



uint64_t FUN_1804ff550(longlong param_1,longlong *param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  
  plVar5 = param_2;
  cVar2 = FUN_180500b50();
  if (cVar2 != '\0') {
    fVar1 = *(float *)(plVar5 + 5);
    lVar6 = *plVar5;
    do {
      fVar8 = *(float *)(param_2 + 4) - *(float *)(lVar6 + 8);
      fVar9 = *(float *)((longlong)param_2 + 0x24) - *(float *)(lVar6 + 0xc);
      if (fVar8 * fVar8 + fVar9 * fVar9 <= fVar1) {
        return 1;
      }
      lVar6 = *(longlong *)(lVar6 + 0x18);
      bVar7 = lVar6 != 0;
      *param_2 = lVar6;
      if (lVar6 == 0) {
        uVar4 = (ulonglong)*(uint *)(param_2 + 1);
        do {
          if ((int)uVar4 == (int)param_2[3]) {
            if (*(int *)((longlong)param_2 + 0xc) == *(int *)((longlong)param_2 + 0x1c)) break;
            *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 1;
            iVar3 = (int)param_2[2];
          }
          else {
            iVar3 = (int)uVar4 + 1;
          }
          *(int *)(param_2 + 1) = iVar3;
          uVar4 = param_2[1];
          lVar6 = *(longlong *)
                   ((longlong)((int)(uVar4 >> 0x20) * *(int *)(param_1 + 8) + (int)uVar4) * 9 +
                   *(longlong *)(param_1 + 0x18));
          bVar7 = lVar6 != 0;
          *param_2 = lVar6;
        } while (lVar6 == 0);
      }
    } while (bVar7);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804ff630(void)
void FUN_1804ff630(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18062b420(system_memory_pool_ptr,0x2a5e8,10);
  if (lVar1 == 0) {
    return;
  }
  *(uint64_t *)(lVar1 + 0x2000) = 0;
  *(uint64_t *)(lVar1 + 0x2008) = 0;
  *(int32_t *)(lVar1 + 0x2030) = 0;
  *(uint64_t *)(lVar1 + 0x2038) = 0;
  *(int16_t *)(lVar1 + 0x2040) = 0x100;
  *(uint64_t *)(lVar1 + 0x4048) = 0;
  *(uint64_t *)(lVar1 + 0x4050) = 0;
  *(int32_t *)(lVar1 + 0x4078) = 0;
  *(uint64_t *)(lVar1 + 0x4080) = 0;
  *(int16_t *)(lVar1 + 0x4088) = 0x100;
  *(uint64_t *)(lVar1 + 0x6090) = 0;
  *(uint64_t *)(lVar1 + 0x6098) = 0;
  *(int32_t *)(lVar1 + 0x60c0) = 0;
  *(uint64_t *)(lVar1 + 0x60c8) = 0;
  *(int16_t *)(lVar1 + 0x60d0) = 0x100;
  *(uint64_t *)(lVar1 + 0x80d8) = 0;
  *(uint64_t *)(lVar1 + 0x80e0) = 0;
  *(int32_t *)(lVar1 + 0x8108) = 0;
  *(uint64_t *)(lVar1 + 0x8110) = 0;
  *(int16_t *)(lVar1 + 0x8118) = 0x100;
  *(uint64_t *)(lVar1 + 0xa120) = 0;
  *(uint64_t *)(lVar1 + 0xa128) = 0;
  *(int32_t *)(lVar1 + 0xa150) = 0;
  *(uint64_t *)(lVar1 + 0xa158) = 0;
  *(int16_t *)(lVar1 + 0xa160) = 0x100;
  *(uint64_t *)(lVar1 + 0xc168) = 0;
  *(uint64_t *)(lVar1 + 0xc170) = 0;
  *(int32_t *)(lVar1 + 0xc198) = 0;
  *(uint64_t *)(lVar1 + 0xc1a0) = 0;
  *(int16_t *)(lVar1 + 0xc1a8) = 0x100;
  *(uint64_t *)(lVar1 + 0xe1b0) = 0;
  *(uint64_t *)(lVar1 + 0xe1b8) = 0;
  *(int32_t *)(lVar1 + 0xe1e0) = 0;
  *(uint64_t *)(lVar1 + 0xe1e8) = 0;
  *(int16_t *)(lVar1 + 0xe1f0) = 0x100;
  *(uint64_t *)(lVar1 + 0x101f8) = 0;
  *(uint64_t *)(lVar1 + 0x10200) = 0;
  *(int32_t *)(lVar1 + 0x10228) = 0;
  *(uint64_t *)(lVar1 + 0x10230) = 0;
  *(int16_t *)(lVar1 + 0x10238) = 0x100;
  *(uint64_t *)(lVar1 + 0x12240) = 0;
  *(uint64_t *)(lVar1 + 0x12248) = 0;
  *(int32_t *)(lVar1 + 0x12270) = 0;
  *(uint64_t *)(lVar1 + 0x12278) = 0;
  *(int16_t *)(lVar1 + 0x12280) = 0x100;
  *(uint64_t *)(lVar1 + 0x14288) = 0;
  *(uint64_t *)(lVar1 + 0x14290) = 0;
  *(int32_t *)(lVar1 + 0x142b8) = 0;
  *(uint64_t *)(lVar1 + 0x142c0) = 0;
  *(int16_t *)(lVar1 + 0x142c8) = 0x100;
  *(uint64_t *)(lVar1 + 0x162d0) = 0;
  *(uint64_t *)(lVar1 + 0x162d8) = 0;
  *(int32_t *)(lVar1 + 0x16300) = 0;
  *(uint64_t *)(lVar1 + 0x16308) = 0;
  *(int16_t *)(lVar1 + 0x16310) = 0x100;
  *(uint64_t *)(lVar1 + 0x18318) = 0;
  *(uint64_t *)(lVar1 + 0x18320) = 0;
  *(int32_t *)(lVar1 + 0x18348) = 0;
  *(uint64_t *)(lVar1 + 0x18350) = 0;
  *(int16_t *)(lVar1 + 0x18358) = 0x100;
  *(uint64_t *)(lVar1 + 0x1a360) = 0;
  *(uint64_t *)(lVar1 + 0x1a368) = 0;
  *(int32_t *)(lVar1 + 0x1a390) = 0;
  *(uint64_t *)(lVar1 + 0x1a398) = 0;
  *(int16_t *)(lVar1 + 0x1a3a0) = 0x100;
  *(uint64_t *)(lVar1 + 0x1c3a8) = 0;
  *(uint64_t *)(lVar1 + 0x1c3b0) = 0;
  *(int32_t *)(lVar1 + 0x1c3d8) = 0;
  *(uint64_t *)(lVar1 + 0x1c3e0) = 0;
  *(int16_t *)(lVar1 + 0x1c3e8) = 0x100;
  *(uint64_t *)(lVar1 + 0x1e3f0) = 0;
  *(uint64_t *)(lVar1 + 0x1e3f8) = 0;
  *(int32_t *)(lVar1 + 0x1e420) = 0;
  *(uint64_t *)(lVar1 + 0x1e428) = 0;
  *(int16_t *)(lVar1 + 0x1e430) = 0x100;
  *(uint64_t *)(lVar1 + 0x20438) = 0;
  *(uint64_t *)(lVar1 + 0x20440) = 0;
  *(int32_t *)(lVar1 + 0x20468) = 0;
  *(uint64_t *)(lVar1 + 0x20470) = 0;
  *(int16_t *)(lVar1 + 0x20478) = 0x100;
  *(uint64_t *)(lVar1 + 0x22480) = 0;
  *(uint64_t *)(lVar1 + 0x22488) = 0;
  *(int32_t *)(lVar1 + 0x224b0) = 0;
  *(uint64_t *)(lVar1 + 0x224b8) = 0;
  *(int16_t *)(lVar1 + 0x224c0) = 0x100;
  *(uint64_t *)(lVar1 + 0x244c8) = 0;
  *(uint64_t *)(lVar1 + 0x244d0) = 0;
  *(int32_t *)(lVar1 + 0x244f8) = 0;
  *(uint64_t *)(lVar1 + 0x24500) = 0;
  *(int16_t *)(lVar1 + 0x24508) = 0x100;
  *(uint64_t *)(lVar1 + 0x26510) = 0;
  *(uint64_t *)(lVar1 + 0x26518) = 0;
  *(int32_t *)(lVar1 + 0x26540) = 0;
  *(uint64_t *)(lVar1 + 0x26548) = 0;
  *(int16_t *)(lVar1 + 0x26550) = 0x100;
  *(uint64_t *)(lVar1 + 0x28558) = 0;
  *(uint64_t *)(lVar1 + 0x28560) = 0;
  *(int32_t *)(lVar1 + 0x28588) = 0;
  *(uint64_t *)(lVar1 + 0x28590) = 0;
  *(int16_t *)(lVar1 + 0x28598) = 0x100;
  *(uint64_t *)(lVar1 + 0x2a5a0) = 0;
  *(uint64_t *)(lVar1 + 0x2a5a8) = 0;
  *(int32_t *)(lVar1 + 0x2a5d0) = 0;
  *(uint64_t *)(lVar1 + 0x2a5d8) = 0;
  *(int16_t *)(lVar1 + 0x2a5e0) = 0x100;
  return;
}



uint64_t * FUN_1804ff950(uint64_t *param_1,longlong param_2)

{
  uint64_t *puVar1;
  int iVar2;
  longlong *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  longlong lVar9;
  int iVar10;
  
  *param_1 = &unknown_var_5552_ptr;
  *(int32_t *)(param_1 + 1) = *(int32_t *)(param_2 + 8);
  *(int32_t *)((longlong)param_1 + 0xc) = *(int32_t *)(param_2 + 0xc);
  *param_1 = &unknown_var_5584_ptr;
  param_1[2] = *(uint64_t *)(param_2 + 0x10);
  uVar7 = *(uint64_t *)(param_2 + 0x20);
  param_1[3] = *(uint64_t *)(param_2 + 0x18);
  param_1[4] = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 0x30);
  param_1[5] = *(uint64_t *)(param_2 + 0x28);
  param_1[6] = uVar7;
  uVar4 = *(int32_t *)(param_2 + 0x3c);
  uVar5 = *(int32_t *)(param_2 + 0x40);
  uVar6 = *(int32_t *)(param_2 + 0x44);
  *(int32_t *)(param_1 + 7) = *(int32_t *)(param_2 + 0x38);
  *(int32_t *)((longlong)param_1 + 0x3c) = uVar4;
  *(int32_t *)(param_1 + 8) = uVar5;
  *(int32_t *)((longlong)param_1 + 0x44) = uVar6;
  uVar7 = *(uint64_t *)(param_2 + 0x50);
  param_1[9] = *(uint64_t *)(param_2 + 0x48);
  param_1[10] = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 0x60);
  param_1[0xb] = *(uint64_t *)(param_2 + 0x58);
  param_1[0xc] = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 0x70);
  param_1[0xd] = *(uint64_t *)(param_2 + 0x68);
  param_1[0xe] = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 0x80);
  param_1[0xf] = *(uint64_t *)(param_2 + 0x78);
  param_1[0x10] = uVar7;
  *(int32_t *)(param_1 + 0x11) = *(int32_t *)(param_2 + 0x88);
  uVar7 = *(uint64_t *)(param_2 + 0x94);
  *(uint64_t *)((longlong)param_1 + 0x8c) = *(uint64_t *)(param_2 + 0x8c);
  *(uint64_t *)((longlong)param_1 + 0x94) = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 0xa4);
  *(uint64_t *)((longlong)param_1 + 0x9c) = *(uint64_t *)(param_2 + 0x9c);
  *(uint64_t *)((longlong)param_1 + 0xa4) = uVar7;
  *(int32_t *)((longlong)param_1 + 0xac) = *(int32_t *)(param_2 + 0xac);
  uVar4 = *(int32_t *)(param_2 + 0xb4);
  uVar5 = *(int32_t *)(param_2 + 0xb8);
  uVar6 = *(int32_t *)(param_2 + 0xbc);
  *(int32_t *)(param_1 + 0x16) = *(int32_t *)(param_2 + 0xb0);
  *(int32_t *)((longlong)param_1 + 0xb4) = uVar4;
  *(int32_t *)(param_1 + 0x17) = uVar5;
  *(int32_t *)((longlong)param_1 + 0xbc) = uVar6;
  *(int32_t *)(param_1 + 0x18) = *(int32_t *)(param_2 + 0xc0);
  *(int32_t *)((longlong)param_1 + 0xc4) = *(int32_t *)(param_2 + 0xc4);
  *(int8_t *)(param_1 + 0x19) = *(int8_t *)(param_2 + 200);
  plVar3 = *(longlong **)(param_2 + 0xd0);
  param_1[0x1a] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))();
  }
  plVar3 = *(longlong **)(param_2 + 0xd8);
  param_1[0x1b] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))();
  }
  plVar3 = *(longlong **)(param_2 + 0xe0);
  param_1[0x1c] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))();
  }
  param_1[0x1d] = *(uint64_t *)(param_2 + 0xe8);
  param_1[0x1e] = *(uint64_t *)(param_2 + 0xf0);
  FUN_1804ffe50(param_1 + 0x20,param_2 + 0x100);
  param_1[0x50] = *(uint64_t *)(param_2 + 0x280);
  *(int32_t *)(param_1 + 0x51) = *(int32_t *)(param_2 + 0x288);
  uVar7 = *(uint64_t *)(param_2 + 0x298);
  param_1[0x52] = *(uint64_t *)(param_2 + 0x290);
  param_1[0x53] = uVar7;
  *(int32_t *)(param_1 + 0x54) = *(int32_t *)(param_2 + 0x2a0);
  *(int32_t *)((longlong)param_1 + 0x2a4) = *(int32_t *)(param_2 + 0x2a4);
  uVar7 = *(uint64_t *)(param_2 + 0x2b0);
  param_1[0x55] = *(uint64_t *)(param_2 + 0x2a8);
  param_1[0x56] = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 0x2c0);
  param_1[0x57] = *(uint64_t *)(param_2 + 0x2b8);
  param_1[0x58] = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 0x2d0);
  param_1[0x59] = *(uint64_t *)(param_2 + 0x2c8);
  param_1[0x5a] = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 0x2e0);
  param_1[0x5b] = *(uint64_t *)(param_2 + 0x2d8);
  param_1[0x5c] = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 0x2f0);
  param_1[0x5d] = *(uint64_t *)(param_2 + 0x2e8);
  param_1[0x5e] = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 0x300);
  param_1[0x5f] = *(uint64_t *)(param_2 + 0x2f8);
  param_1[0x60] = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 0x310);
  param_1[0x61] = *(uint64_t *)(param_2 + 0x308);
  param_1[0x62] = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 800);
  param_1[99] = *(uint64_t *)(param_2 + 0x318);
  param_1[100] = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 0x330);
  param_1[0x65] = *(uint64_t *)(param_2 + 0x328);
  param_1[0x66] = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 0x340);
  param_1[0x67] = *(uint64_t *)(param_2 + 0x338);
  param_1[0x68] = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 0x350);
  param_1[0x69] = *(uint64_t *)(param_2 + 0x348);
  param_1[0x6a] = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 0x360);
  param_1[0x6b] = *(uint64_t *)(param_2 + 0x358);
  param_1[0x6c] = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 0x370);
  param_1[0x6d] = *(uint64_t *)(param_2 + 0x368);
  param_1[0x6e] = uVar7;
  param_1[0x6f] = *(uint64_t *)(param_2 + 0x378);
  *(int32_t *)(param_1 + 0x70) = *(int32_t *)(param_2 + 0x380);
  uVar7 = *(uint64_t *)(param_2 + 0x38c);
  *(uint64_t *)((longlong)param_1 + 900) = *(uint64_t *)(param_2 + 900);
  *(uint64_t *)((longlong)param_1 + 0x38c) = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 0x39c);
  *(uint64_t *)((longlong)param_1 + 0x394) = *(uint64_t *)(param_2 + 0x394);
  *(uint64_t *)((longlong)param_1 + 0x39c) = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 0x3ac);
  *(uint64_t *)((longlong)param_1 + 0x3a4) = *(uint64_t *)(param_2 + 0x3a4);
  *(uint64_t *)((longlong)param_1 + 0x3ac) = uVar7;
  uVar7 = *(uint64_t *)(param_2 + 0x3bc);
  *(uint64_t *)((longlong)param_1 + 0x3b4) = *(uint64_t *)(param_2 + 0x3b4);
  *(uint64_t *)((longlong)param_1 + 0x3bc) = uVar7;
  *(int16_t *)((longlong)param_1 + 0x3c4) = *(int16_t *)(param_2 + 0x3c4);
  param_1[0x79] = *(uint64_t *)(param_2 + 0x3c8);
  *(int8_t *)(param_1 + 0x7a) = *(int8_t *)(param_2 + 0x3d0);
  *(int8_t *)((longlong)param_1 + 0x3d1) = *(int8_t *)(param_2 + 0x3d1);
  *(int8_t *)((longlong)param_1 + 0x3d2) = *(int8_t *)(param_2 + 0x3d2);
  puVar8 = (uint64_t *)(param_2 + 0x3d4);
  iVar2 = *(int *)(param_2 + 0xbd4);
  *(int *)((longlong)param_1 + 0xbd4) = iVar2;
  iVar10 = 0;
  if (0 < iVar2) {
    lVar9 = (longlong)param_1 + (0x3d4 - (longlong)puVar8);
    do {
      uVar7 = puVar8[1];
      *(uint64_t *)(lVar9 + (longlong)puVar8) = *puVar8;
      ((uint64_t *)(lVar9 + (longlong)puVar8))[1] = uVar7;
      uVar7 = puVar8[3];
      puVar1 = (uint64_t *)(lVar9 + 0x10 + (longlong)puVar8);
      *puVar1 = puVar8[2];
      puVar1[1] = uVar7;
      uVar7 = puVar8[5];
      puVar1 = (uint64_t *)(lVar9 + 0x20 + (longlong)puVar8);
      *puVar1 = puVar8[4];
      puVar1[1] = uVar7;
      uVar7 = puVar8[7];
      puVar1 = (uint64_t *)(lVar9 + 0x30 + (longlong)puVar8);
      *puVar1 = puVar8[6];
      puVar1[1] = uVar7;
      iVar10 = iVar10 + 1;
      puVar8 = puVar8 + 8;
    } while (iVar10 < *(int *)((longlong)param_1 + 0xbd4));
  }
  return param_1;
}



longlong * FUN_1804ffc70(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (longlong *)param_2[1];
  param_1[1] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(int32_t *)((longlong)param_1 + 0x14) = *(int32_t *)((longlong)param_2 + 0x14);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1804ffcd0(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (param_2[1] - *param_2) / 0xcb0;
  uVar1 = *(uint *)(param_2 + 3);
  *(uint *)(param_1 + 3) = uVar1;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_18062b420(system_memory_pool_ptr,lVar2 * 0xcb0,uVar1 & 0xff,param_4,0xfffffffffffffffe);
  }
  *param_1 = lVar3;
  param_1[1] = lVar3;
  param_1[2] = lVar2 * 0xcb0 + lVar3;
  lVar2 = *param_2;
  if (lVar2 != param_2[1]) {
                    // WARNING: Subroutine does not return
    memmove(*param_1,lVar2,param_2[1] - lVar2);
  }
  param_1[1] = *param_1;
  lVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar2;
  lVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar2;
  lVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = lVar2;
  return param_1;
}






