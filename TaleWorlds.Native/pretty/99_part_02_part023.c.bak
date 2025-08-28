#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part023.c - 11 个函数

// 函数: void FUN_1800fc8e0(longlong param_1,uint64_t param_2,longlong param_3,char param_4,
void FUN_1800fc8e0(longlong param_1,uint64_t param_2,longlong param_3,char param_4,
                  ulonglong *param_5)

{
  longlong lVar1;
  int32_t uVar2;
  
  if (((param_4 == '\0') && (param_3 != param_1)) && (*(ulonglong *)(param_3 + 0x20) <= *param_5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  lVar1 = FUN_18062b420(system_memory_pool_ptr,0x30,*(int8_t *)(param_1 + 0x28));
  *(ulonglong *)(lVar1 + 0x20) = *param_5;
  *(uint64_t *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1,param_3,param_1,uVar2);
}



int32_t * FUN_1800fc980(int32_t *param_1,longlong *param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  longlong lVar9;
  int32_t *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int8_t auStack_e8 [16];
  int8_t auStack_d8 [28];
  int8_t auStack_bc [180];
  
  pfVar8 = (float *)(**(code **)(*param_3 + 0x90))(param_3,auStack_d8);
  lVar9 = (**(code **)(*param_2 + 0x98))(param_2,auStack_bc);
  puVar10 = (int32_t *)FUN_1800fcb90(pfVar8,auStack_e8,lVar9);
  fVar1 = pfVar8[3];
  fVar2 = *pfVar8;
  fVar3 = pfVar8[2];
  fVar4 = pfVar8[1];
  fVar15 = *(float *)(lVar9 + 0x10) + *(float *)(lVar9 + 0x10);
  fVar12 = *(float *)(lVar9 + 0x14) + *(float *)(lVar9 + 0x14);
  fVar5 = pfVar8[4];
  fVar14 = *(float *)(lVar9 + 0x18) + *(float *)(lVar9 + 0x18);
  fVar6 = pfVar8[5];
  fVar7 = pfVar8[6];
  *param_1 = *puVar10;
  param_1[1] = puVar10[1];
  fVar13 = fVar1 * fVar1 - 0.5;
  param_1[2] = puVar10[2];
  param_1[3] = puVar10[3];
  fVar11 = fVar2 * fVar15 + fVar4 * fVar12 + fVar3 * fVar14;
  param_1[4] = (fVar4 * fVar14 - fVar3 * fVar12) * fVar1 + fVar13 * fVar15 + fVar2 * fVar11 + fVar5;
  param_1[5] = (fVar3 * fVar15 - fVar2 * fVar14) * fVar1 + fVar13 * fVar12 + fVar4 * fVar11 + fVar6;
  param_1[6] = (fVar2 * fVar12 - fVar4 * fVar15) * fVar1 + fVar13 * fVar14 + fVar3 * fVar11 + fVar7;
  return param_1;
}



float * FUN_1800fcb90(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_3;
  fVar2 = param_1[3];
  fVar3 = param_1[1];
  fVar4 = *param_1;
  fVar5 = param_3[1];
  fVar6 = param_1[2];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  *param_2 = (fVar4 * fVar8 + fVar1 * fVar2 + fVar3 * fVar7) - fVar6 * fVar5;
  param_2[1] = (fVar3 * fVar8 + fVar5 * fVar2 + fVar6 * fVar1) - fVar7 * fVar4;
  param_2[3] = ((fVar8 * fVar2 - fVar4 * fVar1) - fVar5 * fVar3) - fVar6 * fVar7;
  param_2[2] = (fVar6 * fVar8 + fVar7 * fVar2 + fVar5 * fVar4) - fVar3 * fVar1;
  return param_2;
}



uint64_t * FUN_1800fcd00(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_7288_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



uint64_t * FUN_1800fcd50(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_7760_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



uint64_t *
FUN_1800fcd90(uint64_t *param_1,uint64_t param_2,int32_t param_3,int32_t param_4)

{
  FUN_180049830();
  *param_1 = &unknown_var_7616_ptr;
  param_1[0x18] = param_2;
  *(int32_t *)(param_1 + 0x2001a) = param_3;
  *(int32_t *)((longlong)param_1 + 0x1000d4) = param_4;
  return param_1;
}






// 函数: void FUN_1800fce00(longlong param_1)
void FUN_1800fce00(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint64_t uStackX_8;
  
  lVar2 = *(longlong *)(param_1 + 0xc0);
  uVar4 = (ulonglong)*(int *)(param_1 + 0x1000d0);
  if ((ulonglong)(*(longlong *)(lVar2 + 0x360) - *(longlong *)(lVar2 + 0x358) >> 2) <= uVar4) {
    *(uint *)(lVar2 + 0x120) = *(uint *)(lVar2 + 0x120) & 0xfffffffd;
    return;
  }
  iVar1 = *(int *)(*(longlong *)(lVar2 + 0x358) + uVar4 * 4);
  _seekg___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12__JH_Z
            (lVar2 + 0x128,(longlong)*(int *)(*(longlong *)(lVar2 + 0x338) + uVar4 * 4),0);
  _read___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_PEAD_J_Z
            (*(longlong *)(param_1 + 0xc0) + 0x128,param_1 + 0xd0,(longlong)iVar1);
  FUN_18066c4d0(*(longlong *)(param_1 + 0xc0) + 0x2f8,param_1 + 0xd0,iVar1,0,0);
  uStackX_8 = 0;
  lVar3 = func_0x00018066c530(*(longlong *)(param_1 + 0xc0) + 0x2f8,&uStackX_8);
  lVar2 = *(longlong *)(param_1 + 0xc0);
  *(longlong *)(param_1 + 200) = lVar3;
  if (lVar3 == 0) {
    *(uint *)(lVar2 + 0x120) = *(uint *)(lVar2 + 0x120) & 0xfffffffd;
  }
  else {
    FUN_1800fe640(lVar2,*(uint64_t *)(lVar2 + 0x240 + (longlong)*(int *)(param_1 + 0x1000d4) * 8),
                  lVar3);
  }
  *(int8_t *)((longlong)*(int *)(param_1 + 0x1000d4) + 0x288 + *(longlong *)(param_1 + 0xc0)) =
       1;
  return;
}






// 函数: void FUN_1800fce4c(uint64_t param_1,longlong param_2,longlong param_3)
void FUN_1800fce4c(uint64_t param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong in_RAX;
  longlong lVar3;
  longlong unaff_RSI;
  uint64_t in_stack_00000040;
  
  iVar1 = *(int *)(param_2 + param_3 * 4);
  _seekg___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12__JH_Z
            (param_1,(longlong)*(int *)(in_RAX + param_3 * 4),0);
  _read___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_PEAD_J_Z
            (*(longlong *)(unaff_RSI + 0xc0) + 0x128,unaff_RSI + 0xd0,(longlong)iVar1);
  FUN_18066c4d0(*(longlong *)(unaff_RSI + 0xc0) + 0x2f8,unaff_RSI + 0xd0,iVar1,0,0);
  in_stack_00000040 = 0;
  lVar3 = func_0x00018066c530(*(longlong *)(unaff_RSI + 0xc0) + 0x2f8,&stack0x00000040);
  lVar2 = *(longlong *)(unaff_RSI + 0xc0);
  *(longlong *)(unaff_RSI + 200) = lVar3;
  if (lVar3 == 0) {
    *(uint *)(lVar2 + 0x120) = *(uint *)(lVar2 + 0x120) & 0xfffffffd;
  }
  else {
    FUN_1800fe640(lVar2,*(uint64_t *)
                         (lVar2 + 0x240 + (longlong)*(int *)(unaff_RSI + 0x1000d4) * 8),lVar3);
  }
  *(int8_t *)
   ((longlong)*(int *)(unaff_RSI + 0x1000d4) + 0x288 + *(longlong *)(unaff_RSI + 0xc0)) = 1;
  return;
}






// 函数: void FUN_1800fceeb(longlong param_1)
void FUN_1800fceeb(longlong param_1)

{
  longlong unaff_RSI;
  
  FUN_1800fe640(param_1,*(uint64_t *)
                         (param_1 + 0x240 + (longlong)*(int *)(unaff_RSI + 0x1000d4) * 8));
  *(int8_t *)
   ((longlong)*(int *)(unaff_RSI + 0x1000d4) + 0x288 + *(longlong *)(unaff_RSI + 0xc0)) = 1;
  return;
}



uint64_t FUN_1800fcf30(uint64_t param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180049470();
  if ((param_2 & 1) != 0) {
    free(param_1,0x1000d8,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800fcf80(longlong param_1)
void FUN_1800fcf80(longlong param_1)

{
  uint64_t *puVar1;
  longlong *plVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint64_t auStack_18 [2];
  
  puVar1 = *(uint64_t **)(param_1 + 0x9680);
  if ((void *)*puVar1 == &unknown_var_7560_ptr) {
    bVar4 = (byte)(*(uint *)(puVar1 + 0x24) >> 1) & 1;
  }
  else {
    bVar4 = (**(code **)((void *)*puVar1 + 0x18))(puVar1);
  }
  if (bVar4 != 0) {
    lVar7 = *(longlong *)(system_message_buffer + 0x1cd8);
    lVar6 = FUN_18023a940(puVar1[0x47]);
    plVar2 = *(longlong **)(lVar7 + 0x8400);
    iVar5 = (**(code **)(*plVar2 + 0x70))(plVar2,*(uint64_t *)(lVar6 + 8),0,4,0,auStack_18);
    if (iVar5 < 0) {
      FUN_180220810(iVar5,&unknown_var_1856_ptr);
    }
    if (iVar5 < 0) {
      *(uint *)(puVar1 + 0x24) = *(uint *)(puVar1 + 0x24) & 0xfffffffd;
    }
    else {
      if (0 < *(int *)(puVar1 + 0x53)) {
                    // WARNING: Subroutine does not return
        memcpy(auStack_18[0],*(uint64_t *)puVar1[(longlong)*(int *)(puVar1 + 0x52) + 0x48],
               (longlong)(*(int *)((longlong)puVar1 + 0x294) * 4));
      }
      plVar2 = *(longlong **)(*(longlong *)(system_message_buffer + 0x1cd8) + 0x8400);
      pcVar3 = *(code **)(*plVar2 + 0x78);
      lVar7 = FUN_18023a940(puVar1[0x47]);
      (*pcVar3)(plVar2,*(uint64_t *)(lVar7 + 8),0);
      *(int8_t *)((longlong)*(int *)(puVar1 + 0x52) + 0x288 + (longlong)puVar1) = 0;
      iVar5 = *(int *)(puVar1 + 0x52) + 1;
      *(int *)(puVar1 + 0x52) =
           iVar5 + (iVar5 / 3 + (iVar5 >> 0x1f) +
                   (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                   -3;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800fcfc0(void)
void FUN_1800fcfc0(void)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  longlong in_RAX;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RBX;
  uint64_t in_stack_00000030;
  
  lVar5 = *(longlong *)(in_RAX + 0x1cd8);
  lVar4 = FUN_18023a940();
  plVar1 = *(longlong **)(lVar5 + 0x8400);
  iVar3 = (**(code **)(*plVar1 + 0x70))(plVar1,*(uint64_t *)(lVar4 + 8),0,4,0);
  if (iVar3 < 0) {
    FUN_180220810(iVar3,&unknown_var_1856_ptr);
  }
  if (iVar3 < 0) {
    *(uint *)(unaff_RBX + 0x120) = *(uint *)(unaff_RBX + 0x120) & 0xfffffffd;
  }
  else {
    if (0 < *(int *)(unaff_RBX + 0x298)) {
                    // WARNING: Subroutine does not return
      memcpy(in_stack_00000030,
             **(uint64_t **)(unaff_RBX + 0x240 + (longlong)*(int *)(unaff_RBX + 0x290) * 8),
             (longlong)(*(int *)(unaff_RBX + 0x294) * 4));
    }
    plVar1 = *(longlong **)(*(longlong *)(system_message_buffer + 0x1cd8) + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x78);
    lVar5 = FUN_18023a940(*(uint64_t *)(unaff_RBX + 0x238));
    (*pcVar2)(plVar1,*(uint64_t *)(lVar5 + 8),0);
    *(int8_t *)((longlong)*(int *)(unaff_RBX + 0x290) + 0x288 + unaff_RBX) = 0;
    iVar3 = *(int *)(unaff_RBX + 0x290) + 1;
    *(int *)(unaff_RBX + 0x290) =
         iVar3 + (iVar3 / 3 + (iVar3 >> 0x1f) +
                 (int)(((longlong)iVar3 / 3 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                 -3;
  }
  return;
}






// 函数: void FUN_1800fd10b(void)
void FUN_1800fd10b(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1800fd120(uint64_t *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint64_t uVar4;
  longlong lVar5;
  
  lVar5 = 0;
  *param_1 = &unknown_var_7760_ptr;
  *param_1 = &unknown_var_7560_ptr;
  plVar2 = param_1 + 1;
  *plVar2 = (longlong)&system_state_ptr;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *plVar2 = (longlong)&unknown_var_2008_ptr;
  param_1[2] = param_1 + 4;
  *(int32_t *)(param_1 + 3) = 0;
  *(int8_t *)(param_1 + 4) = 0;
  plVar1 = param_1 + 0x25;
  *plVar1 = (longlong)&unknown_var_7528_ptr;
  __0__basic_ios_DU__char_traits_D_std___std__IEAA_XZ(param_1 + 0x3b);
  __0__basic_istream_DU__char_traits_D_std___std__QEAA_PEAV__basic_streambuf_DU__char_traits_D_std___1__N_Z
            (plVar1,param_1 + 0x27,0,0);
  *(void **)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1) = &unknown_var_7544_ptr;
  *(int *)((longlong)*(int *)(*plVar1 + 4) + -4 + (longlong)plVar1) = *(int *)(*plVar1 + 4) + -0xb0;
  FUN_18009ec20(param_1 + 0x27);
  param_1[0x47] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  plVar1 = param_1 + 0x4d;
  *plVar1 = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(int32_t *)(param_1 + 0x50) = 3;
  *(int32_t *)(param_1 + 0x5e) = 0;
  param_1[0x5d] = system_error_code;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(int32_t *)(param_1 + 0x6a) = 3;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(int32_t *)(param_1 + 0x6e) = 3;
  *(int32_t *)(param_1 + 0x24) = 0;
  (**(code **)(*plVar2 + 0x10))(plVar2,&system_buffer_ptr);
  param_1[0x54] = 0;
  FUN_1800feb90(plVar1);
  do {
    param_1[lVar5 + 0x48] = 0;
    plVar2 = *(longlong **)(*plVar1 + lVar5 * 8);
    *(uint64_t *)(*plVar1 + lVar5 * 8) = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    *(int8_t *)((longlong)param_1 + lVar5 + 0x288) = 0;
    lVar5 = lVar5 + 1;
  } while (lVar5 < 3);
  uVar4 = func_0x00018066d300();
  iVar3 = FUN_18066c3b0(param_1 + 0x5f,uVar4,0,0,9);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
  }
  return param_1;
}



uint64_t * FUN_1800fd330(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_7560_ptr;
  if (param_1[0x6b] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x67] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180057830();
  if ((longlong *)param_1[0x4c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4c] + 0x38))();
  }
  if ((longlong *)param_1[0x4b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4b] + 0x38))();
  }
  if ((longlong *)param_1[0x47] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x47] + 0x38))();
  }
  FUN_1800fd430(param_1 + 0x25);
  param_1[1] = &system_state_ptr;
  *param_1 = &unknown_var_7760_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x378);
  }
  return param_1;
}






// 函数: void FUN_1800fd430(longlong *param_1)
void FUN_1800fd430(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = param_1 + 0x16;
  *(void **)((longlong)*(int *)(*param_1 + 4) + -0xb0 + (longlong)plVar1) = &unknown_var_7544_ptr;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -0xb4 + (longlong)plVar1) =
       *(int *)(*param_1 + 4) + -0xb0;
  FUN_18009fb60(param_1 + 2);
  __1__basic_istream_DU__char_traits_D_std___std__UEAA_XZ(param_1 + 3);
                    // WARNING: Could not recover jumptable at 0x0001800fd4a2. Too many branches
                    // WARNING: Treating indirect jump as call
  __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(plVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800fd4b0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800fd4b0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (system_context_ptr != 0) {
    FUN_18005e770(system_context_ptr,param_1 + 0x268,0,param_4,0xfffffffffffffffe);
    FUN_18005e630(system_context_ptr);
  }
  plVar3 = *(longlong **)(param_1 + 0x238);
  *(uint64_t *)(param_1 + 0x238) = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar3 = *(longlong **)(param_1 + 0x260);
  *(uint64_t *)(param_1 + 0x260) = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar3 = (longlong *)(param_1 + 0x240);
  lVar2 = 3;
  while (plVar1 = (longlong *)*plVar3, plVar1 == (longlong *)0x0) {
    *plVar3 = 0;
    plVar3 = plVar3 + 1;
    lVar2 = lVar2 + -1;
    if (lVar2 == 0) {
      return;
    }
  }
  if (((char)plVar1[3] == '\0') && (*plVar1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800fd5a0(longlong param_1,longlong param_2,uint64_t param_3,float param_4)
void FUN_1800fd5a0(longlong param_1,longlong param_2,uint64_t param_3,float param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  uint64_t *puVar4;
  void *puVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint64_t uVar11;
  int8_t auStack_1b8 [32];
  uint64_t uStack_198;
  int8_t uStack_190;
  int8_t uStack_188;
  longlong *plStack_178;
  longlong *plStack_170;
  int32_t uStack_168;
  int32_t uStack_164;
  int32_t uStack_158;
  int32_t uStack_14c;
  int8_t uStack_148;
  int8_t uStack_146;
  longlong *plStack_140;
  uint64_t uStack_130;
  longlong **pplStack_128;
  void *puStack_120;
  int8_t *puStack_118;
  int32_t uStack_110;
  int8_t auStack_108 [16];
  void *apuStack_f8 [20];
  ulonglong uStack_58;
  
  uStack_130 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1b8;
  if (((*(uint *)(param_1 + 0x120) & 1) != 0) && ((*(uint *)(param_1 + 0x120) & 2) == 0)) {
    puVar5 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar5 = *(void **)(param_2 + 8);
    }
    (**(code **)(*(longlong *)(param_1 + 8) + 0x10))((longlong *)(param_1 + 8),puVar5);
    plVar1 = (longlong *)(param_1 + 0x128);
    if ((*(byte *)((longlong)*(int *)(*plVar1 + 4) + 0x138 + param_1) & 6) == 0) {
      FUN_1800feb10(plVar1);
    }
    puVar5 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      puVar5 = *(void **)(param_1 + 0x10);
    }
    lVar3 = FUN_1800c4800(param_1 + 0x138,puVar5,0x21);
    if (lVar3 == 0) {
      _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
                ((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1,2);
    }
    else {
      _clear___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
                ((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1,0);
    }
    if (((((*(int *)((longlong)*(int *)(*plVar1 + 4) + 0x138 + param_1) == 0) &&
          (_read___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_PEAD_J_Z
                     (plVar1,param_1 + 0x2b8,0x20),
          *(int *)((longlong)*(int *)(*plVar1 + 4) + 0x138 + param_1) == 0)) &&
         (*(char *)(param_1 + 0x2b8) == 'D')) &&
        ((*(char *)(param_1 + 0x2b9) == 'K' && (*(char *)(param_1 + 0x2ba) == 'I')))) &&
       (*(char *)(param_1 + 699) == 'F')) {
      FUN_1800fdee0(param_1);
      FUN_1800fdd80(param_1);
      plVar1 = (longlong *)(param_1 + 0x238);
      lVar3 = *plVar1;
      uVar7 = 0;
      if (((lVar3 != 0) && (*(uint *)(param_1 + 0x298) != (uint)*(ushort *)(lVar3 + 0x32e))) &&
         (*(uint *)(param_1 + 0x294) != (uint)*(ushort *)(lVar3 + 0x32c))) {
        FUN_18023b050(lVar3,0);
        plStack_178 = (longlong *)*plVar1;
        *plVar1 = 0;
        if (plStack_178 != (longlong *)0x0) {
          (**(code **)(*plStack_178 + 0x38))();
        }
      }
      puVar6 = (uint64_t *)(param_1 + 0x240);
      lVar3 = 3;
      do {
        puVar4 = (uint64_t *)*puVar6;
        if (puVar4 == (uint64_t *)0x0) {
          puVar4 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x20,8,3);
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          *(int16_t *)(puVar4 + 3) = 0;
          *(int8_t *)((longlong)puVar4 + 0x1a) = 3;
          *puVar6 = puVar4;
        }
        if ((ulonglong)puVar4[2] <
            (ulonglong)(longlong)(*(int *)(param_1 + 0x298) * *(int *)(param_1 + 0x294) * 4)) {
          System_BufferManager(puVar4);
        }
        puVar6 = puVar6 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      if (*plVar1 == 0) {
        FUN_18009ebb0(&uStack_168);
        uStack_168 = *(int32_t *)(param_1 + 0x294);
        uStack_164 = *(int32_t *)(param_1 + 0x298);
        uStack_158 = 1;
        uStack_14c = 3;
        uStack_146 = 1;
        uStack_148 = 1;
        puStack_120 = &system_config_ptr;
        puStack_118 = auStack_108;
        auStack_108[0] = 0;
        uStack_110 = 0xb;
        strcpy_s(auStack_108,0x10,&unknown_var_7480_ptr);
        uVar11 = FUN_180049b30(apuStack_f8,&puStack_120);
        uVar11 = FUN_1800b2450(uVar11,&plStack_178,apuStack_f8,&uStack_168);
        FUN_180060b80(plVar1,uVar11);
        if (plStack_178 != (longlong *)0x0) {
          (**(code **)(*plStack_178 + 0x38))();
        }
        apuStack_f8[0] = &system_state_ptr;
        puStack_120 = &system_state_ptr;
        if (plStack_140 != (longlong *)0x0) {
          (**(code **)(*plStack_140 + 0x38))();
        }
      }
      FUN_1800fe2d0(param_1);
      if (*(uint *)(*plVar1 + 0x160) < 3) {
        *(int32_t *)(param_1 + 0x124) = 0;
        *(int32_t *)(param_1 + 0x290) = 0;
        *(uint *)(param_1 + 0x120) = *(uint *)(param_1 + 0x120) | 2;
        *(uint64_t *)(param_1 + 0x2a8) = 0x47efffffe0000000;
        *(double *)(param_1 + 0x2a0) = (double)(1.0 / param_4);
        uStack_188 = 1;
        uStack_190 = 0;
        uStack_198 = 0;
        uVar11 = FUN_1801580f0(system_system_data_config,&plStack_170,&system_config_ptr,param_3);
        FUN_180060b80(param_1 + 0x260,uVar11);
        uVar9 = uVar7;
        uVar10 = uVar7;
        if (plStack_170 != (longlong *)0x0) {
          (**(code **)(*plStack_170 + 0x38))();
        }
        do {
          uVar11 = FUN_18062b1e0(system_memory_pool_ptr,0x1000d8,8,3);
          uVar11 = FUN_1800fcd90(uVar11,param_1,*(int32_t *)(param_1 + 0x124),uVar9);
          FUN_180056f10(*(longlong *)(param_1 + 0x268) + uVar10,uVar11);
          lVar3 = system_context_ptr;
          pplStack_128 = &plStack_178;
          plStack_178 = *(longlong **)(uVar7 + *(longlong *)(param_1 + 0x268));
          if (plStack_178 != (longlong *)0x0) {
            (**(code **)(*plStack_178 + 0x28))();
          }
          FUN_18005e3e0(lVar3,&plStack_178);
          *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
          uVar8 = (int)uVar9 + 1;
          uVar7 = uVar7 + 8;
          uVar9 = (ulonglong)uVar8;
          uVar10 = uVar10 + 8;
        } while ((int)uVar8 < 3);
        FUN_18020f150(*(uint64_t *)(*(longlong *)(system_context_ptr + 8) + 0x10));
        uVar11 = FUN_180629810();
        *(uint64_t *)(param_1 + 0x2b0) = uVar11;
        if ((*(longlong **)(param_1 + 0x260) != (longlong *)0x0) &&
           (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x260) + 0xd8))(), cVar2 != '\0')) {
          (**(code **)(**(longlong **)(param_1 + 0x260) + 0x60))();
        }
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_1b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1800fda70(uint64_t *param_1)

{
  int32_t uVar1;
  uint64_t *puVar2;
  code *pcVar3;
  byte bVar4;
  uint64_t uVar5;
  longlong lVar6;
  longlong *plVar7;
  char *pcVar8;
  int iVar9;
  longlong lVar10;
  char cVar11;
  double dVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong lStackX_20;
  longlong lStack_78;
  longlong *plStack_70;
  longlong alStack_68 [2];
  longlong **pplStack_58;
  longlong **pplStack_50;
  
  alStack_68[1] = 0xfffffffffffffffe;
  lVar10 = system_system_data_config;
  if (system_system_data_config == 0) {
    QueryPerformanceCounter(&lStackX_20);
    lVar10 = lStackX_20;
  }
  lVar6 = system_system_data_config;
  param_1[0x55] = (double)(lVar10 - system_system_data_config) * system_system_data_config;
  if ((void *)*param_1 == &unknown_var_7560_ptr) {
    bVar4 = (byte)(*(uint *)(param_1 + 0x24) >> 1) & 1;
  }
  else {
    bVar4 = (**(code **)((void *)*param_1 + 0x18))(param_1);
    lVar6 = system_system_data_config;
  }
  if (bVar4 == 0) {
    uVar5 = 7;
  }
  else {
    if ((double)param_1[0x55] - (double)param_1[0x56] < (double)param_1[0x54]) {
      do {
        lVar10 = lVar6;
        if (lVar6 == 0) {
          QueryPerformanceCounter(&lStack_78);
          lVar6 = lStack_78;
          lVar10 = system_system_data_config;
        }
        dVar12 = (double)(lVar6 - system_system_data_config) * system_system_data_config;
        param_1[0x55] = dVar12;
        lVar6 = lVar10;
      } while (dVar12 - (double)param_1[0x56] < (double)param_1[0x54]);
    }
    plVar7 = *(longlong **)(param_1[0x4d] + (longlong)*(int *)(param_1 + 0x52) * 8);
    if (plVar7 != (longlong *)0x0) {
      if (*(code **)(*plVar7 + 0x68) == (code *)&unknown_var_9696_ptr) {
        cVar11 = (char)plVar7[2] != '\0';
      }
      else {
        cVar11 = (**(code **)(*plVar7 + 0x68))();
      }
      lVar10 = system_context_ptr;
      if (cVar11 == '\0') {
        pplStack_58 = &plStackX_10;
        plStackX_10 = *(longlong **)(param_1[0x4d] + (longlong)*(int *)(param_1 + 0x52) * 8);
        if (plStackX_10 != (longlong *)0x0) {
          (**(code **)(*plStackX_10 + 0x28))();
        }
        FUN_18005e6a0(lVar10,&plStackX_10,0);
      }
    }
    iVar9 = 0;
    lVar10 = 0;
    pcVar8 = (char *)(param_1 + 0x51);
    do {
      if (*pcVar8 == '\0') {
        plVar7 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,0x1000d8,8,3);
        uVar1 = *(int32_t *)((longlong)param_1 + 0x124);
        pplStack_58 = (longlong **)plVar7;
        FUN_180049830(plVar7);
        *plVar7 = (longlong)&unknown_var_7616_ptr;
        plVar7[0x18] = (longlong)param_1;
        *(int32_t *)(plVar7 + 0x2001a) = uVar1;
        *(int *)((longlong)plVar7 + 0x1000d4) = iVar9;
        lVar6 = param_1[0x4d];
        plStack_70 = plVar7;
        (**(code **)(*plVar7 + 0x28))(plVar7);
        plStack_70 = *(longlong **)(lVar10 + lVar6);
        *(longlong **)(lVar10 + lVar6) = plVar7;
        if (plStack_70 != (longlong *)0x0) {
          (**(code **)(*plStack_70 + 0x38))();
        }
        lVar6 = system_context_ptr;
        pplStack_58 = &plStackX_8;
        plStackX_8 = *(longlong **)(lVar10 + param_1[0x4d]);
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x28))();
        }
        pplStack_50 = &plStackX_8;
        puVar2 = *(uint64_t **)(*(longlong *)(lVar6 + 8) + 0x10);
        pcVar3 = *(code **)*puVar2;
        pplStack_58 = &plStackX_18;
        plStackX_18 = plStackX_8;
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x28))();
        }
        (*pcVar3)(puVar2,&plStackX_18);
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x38))();
        }
        *(int *)((longlong)param_1 + 0x124) = *(int *)((longlong)param_1 + 0x124) + 1;
      }
      iVar9 = iVar9 + 1;
      pcVar8 = pcVar8 + 1;
      lVar10 = lVar10 + 8;
    } while (iVar9 < 3);
    lVar10 = system_system_data_config;
    if (system_system_data_config == 0) {
      QueryPerformanceCounter(alStack_68);
      lVar10 = alStack_68[0];
    }
    param_1[0x56] = (double)(lVar10 - system_system_data_config) * system_system_data_config;
    uVar5 = 10;
  }
  return uVar5;
}






// 函数: void FUN_1800fdd80(void)
void FUN_1800fdd80(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




