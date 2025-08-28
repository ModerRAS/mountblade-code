/* 函数别名定义: RenderingBufferHandler */
#define RenderingBufferHandler RenderingBufferHandler
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part661.c - 8 个函数
// 函数: void UtilitiesSystem_45a6f(float *param_1,float param_2,float *param_3)
void UtilitiesSystem_45a6f(float *param_1,float param_2,float *param_3)
{
  float fVar1;
  float fVar2;
  float in_XMM2_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float *local_buffer_e0;
  float *local_buffer_e8;
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  *local_buffer_e0 = unaff_XMM11_Da * param_2 + *param_1;
  local_buffer_e0[1] = unaff_XMM9_Da * param_2 + fVar1;
  local_buffer_e0[2] = unaff_XMM10_Da * param_2 + fVar2;
  local_buffer_e0[3] = 3.4028235e+38;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  *local_buffer_e8 = unaff_XMM15_Da * in_XMM2_Da + *param_3;
  local_buffer_e8[1] = unaff_XMM13_Da * in_XMM2_Da + fVar1;
  local_buffer_e8[2] = unaff_XMM14_Da * in_XMM2_Da + fVar2;
  local_buffer_e8[3] = 3.4028235e+38;
  return;
}
uint64_t UtilitiesSystem_45b70(uint64_t *param_1,uint64_t param_2,int16_t param_3)
{
  int16_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  *(int16_t *)(param_1 + 2) = param_3;
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = gethostbyname(param_2);
  if ((lVar2 == 0) || (*(short *)(lVar2 + 0x10) != 2)) {
    uVar3 = inet_addr(param_2);
    if ((int)uVar3 == -1) {
      return uVar3 & 0xffffffffffffff00;
    }
  }
  else {
    uVar3 = (uint64_t)*(uint *)**(uint64_t **)(lVar2 + 0x18);
  }
  *(int *)((int64_t)param_1 + 0x14) = (int)uVar3;
  *(int16_t *)param_1 = 2;
  uVar1 = htons(param_3);
  *(int16_t *)((int64_t)param_1 + 2) = uVar1;
  *(int32_t *)((int64_t)param_1 + 4) = *(int32_t *)((int64_t)param_1 + 0x14);
  return CONCAT71((uint7)(uint3)((uint)*(int32_t *)((int64_t)param_1 + 0x14) >> 8),1);
}
uint64_t SystemBufferProcessor(int64_t param_1,uint param_2,int *param_3)
{
  uint64_t *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  int iVar6;
  iVar6 = param_3[2];
  uVar5 = (uint64_t)param_2;
  if ((iVar6 != 0x20) || (*param_3 != -0x80000000)) {
    iVar3 = *param_3;
    if (((int)param_2 < iVar3) || (param_3[1] < (int)param_2)) {
      UtilitiesSystem_27340(&processed_var_6384_ptr,&processed_var_7176_ptr,iVar3,param_3[1],param_2,&system_handler2_ptr);
      SystemOptimizationProcessor(&processed_var_6256_ptr,*param_3,param_3[1]);
      iVar3 = *param_3;
      iVar6 = param_3[2];
    }
    uVar5 = (uint64_t)(param_2 - iVar3);
  }
  uVar4 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
  uVar2 = *(int *)(param_1 + 0x5c4) + uVar4;
  iVar3 = (uVar2 & 0x1f) - uVar4;
  puVar1 = (uint64_t *)(*(int64_t *)(param_1 + 0x598) + (int64_t)((int)uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | uVar5 << ((byte)iVar3 & 0x3f);
  *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + iVar6;
  *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + iVar6;
  return CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
}
uint64_t UtilitiesSystem_45ce0(int64_t param_1,uint param_2,uint *param_3)
{
  uint64_t *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uVar6 = *param_3;
  if ((param_2 < uVar6) || (param_3[1] < param_2)) {
    UtilitiesSystem_27340(&ui_system_data_1088_ptr,&processed_var_7216_ptr,uVar6,param_3[1],param_2,&system_handler2_ptr);
    SystemOptimizationProcessor(&ui_system_data_1328_ptr,*param_3,param_3[1]);
    uVar6 = *param_3;
  }
  uVar2 = param_3[2];
  uVar5 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
  uVar3 = *(int *)(param_1 + 0x5c4) + uVar5;
  iVar4 = (uVar3 & 0x1f) - uVar5;
  puVar1 = (uint64_t *)(*(int64_t *)(param_1 + 0x598) + (int64_t)((int)uVar3 >> 5) * 4);
  *puVar1 = *puVar1 | (uint64_t)(param_2 - uVar6) << ((byte)iVar4 & 0x3f);
  *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + uVar2;
  *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + uVar2;
  return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
}
uint64_t UtilitiesSystem_45da0(int64_t param_1,int64_t param_2,int64_t *param_3)
{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  lVar6 = *param_3;
  if ((param_2 < lVar6) || (param_3[1] < param_2)) {
    UtilitiesSystem_27340(&ui_system_data_1248_ptr,&processed_var_7136_ptr,lVar6,param_3[1],param_2,&system_handler2_ptr);
    SystemOptimizationProcessor(&ui_system_data_1008_ptr,*param_3,param_3[1]);
    lVar6 = *param_3;
  }
  lVar2 = *(int64_t *)(param_1 + 0x598);
  lVar3 = param_3[2];
  uVar5 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
  iVar4 = *(int *)(param_1 + 0x5c4) + uVar5;
  puVar1 = (uint64_t *)(lVar2 + (int64_t)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | (param_2 - lVar6 & 0xffffffffU) << (((byte)iVar4 & 0x1f) - (char)uVar5 & 0x3f)
  ;
  *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + 0x20;
  *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + 0x20;
  uVar5 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
  iVar4 = *(int *)(param_1 + 0x5c4) + uVar5;
  puVar1 = (uint64_t *)(lVar2 + (int64_t)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | ((uint64_t)(param_2 - lVar6) >> 0x20) <<
                      (((byte)iVar4 & 0x1f) - (char)uVar5 & 0x3f);
  *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + (int)lVar3 + -0x20;
  iVar4 = (int)lVar3 + -0x20;
  *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + iVar4;
  return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
}
uint64_t UtilitiesSystem_45ea0(int64_t param_1,uint64_t param_2,uint64_t *param_3)
{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int iVar4;
  uint uVar5;
  uint64_t uVar6;
  uVar6 = *param_3;
  if ((param_2 < uVar6) || (param_3[1] < param_2)) {
    UtilitiesSystem_27340(&processed_var_928_ptr,&processed_var_7264_ptr,uVar6,param_3[1],param_2,&system_handler2_ptr);
    SystemOptimizationProcessor(&ui_system_data_1168_ptr,*param_3,param_3[1]);
    uVar6 = *param_3;
  }
  lVar2 = *(int64_t *)(param_1 + 0x598);
  uVar3 = param_3[2];
  uVar5 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
  iVar4 = *(int *)(param_1 + 0x5c4) + uVar5;
  puVar1 = (uint64_t *)(lVar2 + (int64_t)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | (param_2 - uVar6 & 0xffffffff) << (((byte)iVar4 & 0x1f) - (char)uVar5 & 0x3f);
  *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + 0x20;
  *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + 0x20;
  uVar5 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
  iVar4 = *(int *)(param_1 + 0x5c4) + uVar5;
  puVar1 = (uint64_t *)(lVar2 + (int64_t)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | (param_2 - uVar6 >> 0x20) << (((byte)iVar4 & 0x1f) - (char)uVar5 & 0x3f);
  *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + (int)uVar3 + -0x20;
  iVar4 = (int)uVar3 + -0x20;
  *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + iVar4;
  return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
}
uint64_t UI_LayoutManager(int64_t param_1,uint64_t param_2,int64_t param_3)
{
  uint64_t *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uVar3 = NetworkSystem_5f6f0(param_3);
  iVar2 = *(int *)(param_3 + 0xc);
  uVar6 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
  uVar4 = *(int *)(param_1 + 0x5c4) + uVar6;
  iVar5 = (uVar4 & 0x1f) - uVar6;
  puVar1 = (uint64_t *)(*(int64_t *)(param_1 + 0x598) + (int64_t)((int)uVar4 >> 5) * 4);
  *puVar1 = *puVar1 | (uint64_t)uVar3 << ((byte)iVar5 & 0x3f);
  *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + iVar2;
  *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + iVar2;
  return CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1);
}
int8_t UtilitiesSystem_46010(uint64_t param_1,int64_t param_2,int param_3)
{
  int iVar1;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0x7ff;
    if (param_3 < 0x7ff) {
      iVar1 = param_3;
    }
  }
  SystemBufferProcessor(param_1,iVar1,&processed_var_6712_ptr);
  if (0 < iVar1) {
    UtilitiesSystem_46370(param_1,param_2,iVar1 * 8);
  }
  return 1;
}
char UtilitiesSystem_46080(uint64_t param_1,int *param_2)
{
  int iVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  if (*param_2 < 1) {
    sVar3 = 0;
  }
  else {
    uVar4 = *param_2 - 1;
    sVar3 = (short)uVar4 + (short)(uVar4 / 0xffdc) * 0x24 + 1;
  }
  cVar2 = SystemBufferProcessor(param_1,sVar3,&processed_var_6744_ptr);
  iVar1 = param_2[1];
  if ((cVar2 == '\0') || (cVar2 = SystemBufferProcessor(param_1,iVar1 == 0,&processed_var_6776_ptr), cVar2 == '\0'))
  {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  if (iVar1 != 0) {
    if ((cVar2 != '\0') && (cVar2 = SystemBufferProcessor(param_1,param_2[1],&processed_var_6728_ptr), cVar2 != '\0')
       ) {
      return '\x01';
    }
    cVar2 = '\0';
  }
  return cVar2;
}
int64_t UtilitiesSystem_46140(int64_t param_1,uint64_t *param_2,int param_3)
{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  iVar2 = *(int *)(param_1 + 0x5c4);
  if (iVar2 + param_3 <= *(int *)(param_1 + 0x5c8)) {
    iVar7 = iVar2 + 0x20;
    uVar5 = iVar2 >> 0x1f & 0x1f;
    iVar2 = iVar2 + uVar5;
    uVar4 = *(uint64_t *)(*(int64_t *)(param_1 + 0x598) + (int64_t)(iVar2 >> 5) * 4);
    *(int *)(param_1 + 0x5c4) = iVar7;
    uVar6 = iVar7 >> 0x1f & 0x1f;
    iVar3 = iVar7 + uVar6;
    uVar1 = *(uint64_t *)(*(int64_t *)(param_1 + 0x598) + (int64_t)(iVar3 >> 5) * 4);
    *(int *)(param_1 + 0x5c4) = iVar7 + param_3 + -0x20;
    uVar4 = uVar4 >> (((byte)iVar2 & 0x1f) - (char)uVar5 & 0x3f) & 0xffffffff;
    *param_2 = (uVar1 >> (((byte)iVar3 & 0x1f) - (char)uVar6 & 0x3f) &
               (1L << ((byte)(param_3 + -0x20) & 0x3f)) - 1U) << 0x20 | uVar4;
    return CONCAT71((int7)(uVar4 >> 8),1);
  }
  return (uint64_t)(uint3)((uint)(iVar2 + param_3) >> 8) << 8;
}
uint64_t UtilitiesSystem_46171(void)
{
  uint64_t uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  uint64_t *unaff_RSI;
  int64_t unaff_RDI;
  int in_R9D;
  int in_R10D;
  int64_t in_R11;
  in_R9D = in_R9D + 0x20;
  uVar5 = in_EAX >> 0x1f & 0x1f;
  iVar2 = in_EAX + uVar5;
  uVar4 = *(uint64_t *)(in_R11 + (int64_t)(iVar2 >> 5) * 4);
  *(int *)(unaff_RDI + 0x5c4) = in_R9D;
  uVar6 = in_R9D >> 0x1f & 0x1f;
  iVar3 = in_R9D + uVar6;
  uVar1 = *(uint64_t *)(in_R11 + (int64_t)(iVar3 >> 5) * 4);
  *(int *)(unaff_RDI + 0x5c4) = in_R9D + in_R10D;
  uVar4 = uVar4 >> (((byte)iVar2 & 0x1f) - (char)uVar5 & 0x3f) & 0xffffffff;
  *unaff_RSI = (uVar1 >> (((byte)iVar3 & 0x1f) - (char)uVar6 & 0x3f) &
               (1L << ((byte)in_R10D & 0x3f)) - 1U) << 0x20 | uVar4;
  return CONCAT71((int7)(uVar4 >> 8),1);
}
int8_t UtilitiesSystem_461f3(void)
{
  return 0;
}
// 函数: void UtilitiesSystem_46200(int64_t param_1,int64_t param_2,uint param_3)
void UtilitiesSystem_46200(int64_t param_1,int64_t param_2,uint param_3)
{
  uint64_t *puVar1;
  int64_t lVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  if ((((int64_t)*(int *)(param_1 + 0x5c4) & 7U) == 0) &&
     (((int64_t)*(int *)(param_2 + 0x5c4) & 7U) == 0)) {
    uVar3 = param_3 >> 3;
    if ((param_3 & 7) != 0) {
      uVar3 = uVar3 + 1;
    }
// WARNING: Subroutine does not return
    memcpy(((int64_t)*(int *)(param_1 + 0x5c4) >> 3) + *(int64_t *)(param_1 + 0x598),
           ((int64_t)*(int *)(param_2 + 0x5c4) >> 3) + *(int64_t *)(param_2 + 0x598),uVar3);
  }
  if (param_3 != 0) {
    lVar2 = *(int64_t *)(param_2 + 0x598);
    iVar6 = *(int *)(param_2 + 0x5c4);
    do {
      iVar4 = *(int *)(param_1 + 0x5c4);
      uVar3 = 0x20;
      if ((int)param_3 < 0x20) {
        uVar3 = param_3;
      }
      bVar7 = (byte)iVar4 & 0x1f;
      iVar8 = iVar6 + uVar3;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0x1f;
        bVar7 = bVar7 - 0x20;
      }
      puVar1 = (uint64_t *)(*(int64_t *)(param_1 + 0x598) + (int64_t)(iVar4 >> 5) * 4);
      bVar5 = (byte)iVar6 & 0x1f;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0x1f;
        bVar5 = bVar5 - 0x20;
      }
      *puVar1 = *puVar1 | (uint64_t)
                          ((int)(1L << ((byte)uVar3 & 0x3f)) - 1U &
                          (uint)(*(uint64_t *)(lVar2 + (int64_t)(iVar6 >> 5) * 4) >>
                                (bVar5 & 0x3f))) << (bVar7 & 0x3f);
      *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + uVar3;
      *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + uVar3;
      param_3 = param_3 - uVar3;
      iVar6 = iVar8;
    } while (param_3 != 0);
  }
  return;
}
// 函数: void UtilitiesSystem_462bd(uint64_t param_1,int64_t param_2)
void UtilitiesSystem_462bd(uint64_t param_1,int64_t param_2)
{
  uint64_t *puVar1;
  int64_t lVar2;
  int iVar3;
  byte bVar4;
  int64_t unaff_RBX;
  int unaff_EDI;
  int iVar5;
  byte bVar6;
  int in_R10D;
  int iVar7;
  lVar2 = *(int64_t *)(param_2 + 0x598);
  do {
    iVar3 = *(int *)(unaff_RBX + 0x5c4);
    iVar5 = 0x20;
    if (unaff_EDI < 0x20) {
      iVar5 = unaff_EDI;
    }
    bVar6 = (byte)iVar3 & 0x1f;
    iVar7 = in_R10D + iVar5;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x1f;
      bVar6 = bVar6 - 0x20;
    }
    puVar1 = (uint64_t *)(*(int64_t *)(unaff_RBX + 0x598) + (int64_t)(iVar3 >> 5) * 4);
    bVar4 = (byte)in_R10D & 0x1f;
    if (in_R10D < 0) {
      in_R10D = in_R10D + 0x1f;
      bVar4 = bVar4 - 0x20;
    }
    *puVar1 = *puVar1 | (uint64_t)
                        ((int)(1L << ((byte)iVar5 & 0x3f)) - 1U &
                        (uint)(*(uint64_t *)(lVar2 + (int64_t)(in_R10D >> 5) * 4) >>
                              (bVar4 & 0x3f))) << (bVar6 & 0x3f);
    *(int *)(unaff_RBX + 0x5c4) = *(int *)(unaff_RBX + 0x5c4) + iVar5;
    *(int *)(unaff_RBX + 0x5c8) = *(int *)(unaff_RBX + 0x5c8) + iVar5;
    unaff_EDI = unaff_EDI - iVar5;
    in_R10D = iVar7;
  } while (unaff_EDI != 0);
  return;
}
// 函数: void UtilitiesSystem_46360(void)
void UtilitiesSystem_46360(void)
{
  return;
}
// 函数: void UtilitiesSystem_46370(int64_t param_1,uint *param_2,uint param_3)
void UtilitiesSystem_46370(int64_t param_1,uint *param_2,uint param_3)
{
  uint64_t *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint *puVar7;
  uint64_t uVar8;
  byte *pbVar9;
  int64_t lVar10;
  if (((int64_t)*(int *)(param_1 + 0x5c4) & 7U) == 0) {
    iVar4 = (int)param_3 >> 3;
    if ((param_3 & 7) != 0) {
      iVar4 = ((int)param_3 >> 3) + 1;
    }
// WARNING: Subroutine does not return
    memcpy(((int64_t)*(int *)(param_1 + 0x5c4) >> 3) + *(int64_t *)(param_1 + 0x598),param_2,
           (int64_t)iVar4);
  }
  if ((int)param_3 < 0x20) {
    lVar10 = 0;
  }
  else {
    uVar6 = param_3 >> 5;
    param_3 = param_3 + uVar6 * -0x20;
    puVar7 = param_2;
    uVar8 = (uint64_t)uVar6;
    do {
      iVar4 = *(int *)(param_1 + 0x5c4);
      bVar5 = (byte)iVar4 & 0x1f;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0x1f;
        bVar5 = bVar5 - 0x20;
      }
      puVar1 = (uint64_t *)(*(int64_t *)(param_1 + 0x598) + (int64_t)(iVar4 >> 5) * 4);
      uVar3 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar1 = *puVar1 | (uint64_t)uVar3 << (bVar5 & 0x3f);
      *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + 0x20;
      *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + 0x20;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    lVar10 = (uint64_t)uVar6 * 4;
  }
  if (0 < (int)param_3) {
    pbVar9 = (byte *)(lVar10 + (int64_t)param_2);
    do {
      iVar4 = *(int *)(param_1 + 0x5c4);
      uVar6 = 8;
      if ((int)param_3 < 8) {
        uVar6 = param_3;
      }
      bVar5 = (byte)iVar4 & 0x1f;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0x1f;
        bVar5 = bVar5 - 0x20;
      }
      param_3 = param_3 - uVar6;
      puVar1 = (uint64_t *)(*(int64_t *)(param_1 + 0x598) + (int64_t)(iVar4 >> 5) * 4);
      bVar2 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      *puVar1 = *puVar1 | (uint64_t)bVar2 << (bVar5 & 0x3f);
      *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + uVar6;
      *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + uVar6;
    } while (0 < (int)param_3);
  }
  return;
}
uint64_t UtilitiesSystem_46500(int64_t param_1,uint *param_2,uint *param_3)
{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uVar1 = param_3[2];
  iVar5 = *(int *)(param_1 + 0x5c4);
  iVar7 = iVar5 + uVar1;
  if (iVar7 <= *(int *)(param_1 + 0x5c8)) {
    uVar6 = iVar5 >> 0x1f & 0x1f;
    iVar5 = iVar5 + uVar6;
    uVar3 = *(uint64_t *)(*(int64_t *)(param_1 + 0x598) + (int64_t)(iVar5 >> 5) * 4);
    *(int *)(param_1 + 0x5c4) = iVar7;
    uVar2 = *param_3;
    uVar6 = uVar2 + ((uint)(uVar3 >> (((byte)iVar5 & 0x1f) - (char)uVar6 & 0x3f)) &
                    (int)(1L << ((byte)uVar1 & 0x3f)) - 1U);
    uVar1 = param_3[1];
    if ((uVar1 < uVar6) || (uVar6 < uVar2)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((uVar6 < uVar2) || (uVar1 < uVar6)) {
      UtilitiesSystem_27340(&ui_system_data_1088_ptr,&processed_var_7416_ptr,uVar2,uVar1,uVar6,&memory_allocator_3712_ptr);
      SystemOptimizationProcessor(&ui_system_data_1328_ptr,*param_3,param_3[1]);
    }
    *param_2 = uVar6;
    if (bVar4) {
      return 1;
    }
  }
  return 0;
}
uint64_t UtilitiesSystem_46534(int64_t param_1,uint param_2)
{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  bool bVar4;
  int in_EAX;
  int iVar5;
  int32_t unaff_EBX;
  uint uVar6;
  uint *unaff_RDI;
  int64_t in_R10;
  byte in_R11B;
  uint *unaff_R14;
  void *plocal_buffer_28;
  iVar5 = in_EAX + (param_2 & 0x1f);
  uVar3 = *(uint64_t *)(*(int64_t *)(param_1 + 0x598) + (int64_t)(iVar5 >> 5) * 4);
  *(int32_t *)(in_R10 + 0x5c4) = unaff_EBX;
  uVar1 = *unaff_RDI;
  uVar6 = uVar1 + ((uint)(uVar3 >> (((byte)iVar5 & 0x1f) - (char)(param_2 & 0x1f) & 0x3f)) &
                  (int)(1L << (in_R11B & 0x3f)) - 1U);
  uVar2 = unaff_RDI[1];
  if ((uVar2 < uVar6) || (uVar6 < uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((uVar6 < uVar1) || (uVar2 < uVar6)) {
    plocal_buffer_28 = &memory_allocator_3712_ptr;
    UtilitiesSystem_27340(&ui_system_data_1088_ptr,&processed_var_7416_ptr,uVar1,uVar2,uVar6);
    SystemOptimizationProcessor(&ui_system_data_1328_ptr,*unaff_RDI,unaff_RDI[1]);
  }
  *unaff_R14 = uVar6;
  if (bVar4) {
    return 1;
  }
  return 0;
}
int8_t UtilitiesSystem_465dd(void)
{
  return 1;
}
uint64_t UtilitiesSystem_46610(uint64_t param_1,uint64_t *param_2,int64_t *param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  uint64_t uVar5;
  uint64_t stack_special_x_20;
  stack_special_x_20 = 0;
  cVar4 = UtilitiesSystem_46140(param_1,&stack_special_x_20,(int)param_3[2]);
  if (cVar4 != '\0') {
    if (((int)param_3[2] == 0x40) && (*param_3 == -0x8000000000000000)) {
      bVar3 = true;
      uVar5 = stack_special_x_20;
    }
    else {
      lVar1 = *param_3;
      lVar2 = param_3[1];
      uVar5 = lVar1 + stack_special_x_20;
      if ((lVar2 < (int64_t)uVar5) || ((int64_t)uVar5 < lVar1)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (((int64_t)uVar5 < lVar1) || (lVar2 < (int64_t)uVar5)) {
        UtilitiesSystem_27340(&ui_system_data_1248_ptr,&processed_var_7320_ptr,lVar1,lVar2,uVar5,&memory_allocator_3712_ptr);
        SystemOptimizationProcessor(&ui_system_data_1008_ptr,*param_3,param_3[1]);
      }
    }
    *param_2 = uVar5;
    if (bVar3) {
      return 1;
    }
  }
  return 0;
}
uint64_t UtilitiesSystem_46644(void)
{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t *unaff_RDI;
  int64_t *unaff_R14;
  bool in_ZF;
  void *plocal_buffer_28;
  int64_t local_buffer_58;
  if ((in_ZF) && (*unaff_RDI == -0x8000000000000000)) {
    bVar3 = true;
  }
  else {
    lVar1 = *unaff_RDI;
    lVar2 = unaff_RDI[1];
    local_buffer_58 = lVar1 + local_buffer_58;
    if ((lVar2 < local_buffer_58) || (local_buffer_58 < lVar1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((local_buffer_58 < lVar1) || (lVar2 < local_buffer_58)) {
      plocal_buffer_28 = &memory_allocator_3712_ptr;
      UtilitiesSystem_27340(&ui_system_data_1248_ptr,&processed_var_7320_ptr,lVar1,lVar2,local_buffer_58);
      SystemOptimizationProcessor(&ui_system_data_1008_ptr,*unaff_RDI,unaff_RDI[1]);
    }
  }
  *unaff_R14 = local_buffer_58;
  if (bVar3) {
    return 1;
  }
  return 0;
}
int8_t UtilitiesSystem_466de(void)
{
  return 1;
}
uint64_t RenderingBufferHandler0(int64_t param_1,float *param_2,float *param_3)
{
  uint64_t uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  fVar5 = param_3[3];
  iVar3 = *(int *)(param_1 + 0x5c4);
  iVar6 = iVar3 + (int)fVar5;
  if (iVar6 <= *(int *)(param_1 + 0x5c8)) {
    uVar4 = iVar3 >> 0x1f & 0x1f;
    iVar3 = iVar3 + uVar4;
    uVar1 = *(uint64_t *)(*(int64_t *)(param_1 + 0x598) + (int64_t)(iVar3 >> 5) * 4);
    *(int *)(param_1 + 0x5c4) = iVar6;
    fVar8 = param_3[2];
    fVar5 = (float)((uint)(uVar1 >> (((byte)iVar3 & 0x1f) - (char)uVar4 & 0x3f)) &
                   (int)(1L << (SUB41(fVar5,0) & 0x3f)) - 1U);
    if (fVar8 == 0.0) {
      *param_2 = fVar5;
      return 1;
    }
    fVar7 = *param_3;
    fVar9 = param_3[1];
    fVar10 = (float)(uint)fVar5 * fVar8 + fVar7;
    fVar5 = fVar7 - fVar8 * 0.5;
    fVar8 = fVar8 * 0.5 + fVar9;
    if ((fVar8 < fVar10) || (fVar10 < fVar5)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((fVar8 < fVar10) || (fVar10 < fVar5)) {
      UtilitiesSystem_27340(&processed_var_6512_ptr,&processed_var_7464_ptr,(double)fVar7,(double)fVar9,(double)fVar10,
                    &memory_allocator_3712_ptr);
      SystemOptimizationProcessor(&processed_var_6592_ptr,(double)*param_3,(double)param_3[1]);
      fVar9 = param_3[1];
      fVar7 = *param_3;
    }
    if ((fVar7 <= fVar10) && (fVar7 = fVar9, fVar10 <= fVar9)) {
      fVar7 = fVar10;
    }
    *param_2 = fVar7;
    if (bVar2) {
      return 1;
    }
  }
  return 0;
}
uint64_t UtilitiesSystem_4679f(float param_1,float param_2,float param_3)
{
  bool bVar1;
  int64_t in_RAX;
  float *unaff_RBX;
  float *unaff_RSI;
  float fVar2;
  float in_XMM4_Da;
  float fVar3;
  void *plocal_buffer_28;
  fVar3 = (float)in_RAX * param_3 + param_2;
  param_1 = param_1 - param_3 * 0.5;
  fVar2 = param_3 * 0.5 + in_XMM4_Da;
  if ((fVar2 < fVar3) || (fVar3 < param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((fVar2 < fVar3) || (fVar3 < param_1)) {
    plocal_buffer_28 = &memory_allocator_3712_ptr;
    UtilitiesSystem_27340(&processed_var_6512_ptr,&processed_var_7464_ptr,(double)param_2,(double)in_XMM4_Da,(double)fVar3);
    SystemOptimizationProcessor(&processed_var_6592_ptr,(double)*unaff_RBX,(double)unaff_RBX[1]);
    in_XMM4_Da = unaff_RBX[1];
    param_2 = *unaff_RBX;
  }
  if ((param_2 <= fVar3) && (param_2 = in_XMM4_Da, fVar3 <= in_XMM4_Da)) {
    param_2 = fVar3;
  }
  *unaff_RSI = param_2;
  if (bVar1) {
    return 1;
  }
  return 0;
}
int8_t UtilitiesSystem_4686d(void)
{
  return 1;
}
int64_t UtilitiesSystem_46890(uint64_t param_1,uint64_t param_2,int param_3,int *param_4)
{
  int iVar1;
  *param_4 = 0;
  SystemSynchronizationProcessor(param_1,param_4,&processed_var_6864_ptr);
  iVar1 = *param_4;
  if ((iVar1 < 0x800) && (iVar1 <= param_3)) {
// WARNING: Subroutine does not return
    memset(param_2,0,(int64_t)iVar1);
  }
  return (uint64_t)(uint7)(int7)(int3)((uint)iVar1 >> 8) << 8;
}
int8_t UtilitiesSystem_46a60(uint64_t param_1,int param_2,uint *param_3)
{
  uint uVar1;
  uint uVar2;
  int8_t uVar3;
  uint astack_special_x_18 [4];
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  local_var_14 = 0xffff;
  local_var_18 = 0;
  astack_special_x_18[0] = 0;
  local_var_10 = 0x10;
  uVar3 = UtilitiesSystem_46500(param_1,astack_special_x_18,&local_var_18);
  if (astack_special_x_18[0] != 0) {
    if (param_2 != 0) {
      uVar1 = (param_2 - 1U) % 0xffdc + 1;
      uVar2 = uVar1 - astack_special_x_18[0];
      if (uVar1 < astack_special_x_18[0]) {
        uVar2 = astack_special_x_18[0] - uVar1;
      }
      if (0x7fee < uVar2) {
        if (uVar1 < 0x7fee) {
          astack_special_x_18[0] = astack_special_x_18[0] - 0xffdc;
        }
        else {
          astack_special_x_18[0] = astack_special_x_18[0] + 0xffdc;
        }
      }
      astack_special_x_18[0] = astack_special_x_18[0] + ((param_2 - 1U) / 0xffdc) * 0xffdc;
    }
    if (astack_special_x_18[0] - 1 < 0x7fed) {
      *param_3 = astack_special_x_18[0] + 0xffdc;
      return uVar3;
    }
  }
  *param_3 = astack_special_x_18[0];
  return uVar3;
}
char UtilitiesSystem_46b50(uint64_t param_1,uint64_t param_2,int32_t *param_3)
{
  char cVar1;
  int aiStackX_18 [2];
  int32_t astack_special_x_20 [2];
  int32_t stack_array_18 [4];
  astack_special_x_20[0] = 0;
  stack_array_18[0] = 0;
  aiStackX_18[0] = 0;
  cVar1 = UtilitiesSystem_46a60(param_1,param_2,astack_special_x_20);
  if (cVar1 == '\0') {
LAB_180646b98:
    cVar1 = '\0';
  }
  else {
    cVar1 = SystemSynchronizationProcessor(param_1,aiStackX_18,&processed_var_6896_ptr);
    if (cVar1 == '\0') goto LAB_180646b98;
    cVar1 = '\x01';
  }
  if (aiStackX_18[0] == 0) {
    if (cVar1 != '\0') {
      cVar1 = SystemSynchronizationProcessor(param_1,stack_array_18,&processed_var_6880_ptr);
      if (cVar1 != '\0') {
        cVar1 = '\x01';
        goto LAB_180646bc3;
      }
    }
    cVar1 = '\0';
  }
LAB_180646bc3:
  *param_3 = astack_special_x_20[0];
  param_3[1] = stack_array_18[0];
  return cVar1;
}
uint64_t UtilitiesSystem_46be0(int64_t param_1,int64_t param_2)
{
  int16_t uVar1;
  int32_t uVar2;
  int iVar3;
  int64_t lVar4;
  lVar4 = socket(2,2,0);
  *(int64_t *)(param_1 + 8) = lVar4;
  if (lVar4 != -1) {
    uVar2 = 0;
    *(uint64_t *)(param_1 + 0x10) = 0;
    *(uint64_t *)(param_1 + 0x18) = 0;
    *(int16_t *)(param_1 + 0x10) = 2;
    if (param_2 != 0) {
      uVar1 = htons(*(int16_t *)(param_2 + 0x10));
      *(int16_t *)(param_1 + 0x12) = uVar1;
      uVar2 = *(int32_t *)(param_2 + 0x14);
    }
    *(int32_t *)(param_1 + 0x14) = uVar2;
    iVar3 = bind(*(uint64_t *)(param_1 + 8),param_1 + 0x10,0x10);
    if (iVar3 != -1) {
      return 1;
    }
    closesocket(*(uint64_t *)(param_1 + 8));
    *(uint64_t *)(param_1 + 8) = 0xffffffffffffffff;
  }
  return 0;
}
uint64_t UtilitiesSystem_46c13(void)
{
  int16_t uVar1;
  int iVar2;
  uint64_t in_RAX;
  int64_t unaff_RBX;
  int16_t unaff_BP;
  int64_t unaff_RSI;
  *(uint64_t *)(unaff_RBX + 0x10) = in_RAX;
  *(uint64_t *)(unaff_RBX + 0x18) = in_RAX;
  *(int16_t *)(unaff_RBX + 0x10) = unaff_BP;
  if (unaff_RSI != 0) {
    uVar1 = htons(*(int16_t *)(unaff_RSI + 0x10));
    *(int16_t *)(unaff_RBX + 0x12) = uVar1;
    in_RAX = (uint64_t)*(uint *)(unaff_RSI + 0x14);
  }
  *(int *)(unaff_RBX + 0x14) = (int)in_RAX;
  iVar2 = bind(*(uint64_t *)(unaff_RBX + 8),unaff_RBX + 0x10,0x10);
  if (iVar2 == -1) {
    closesocket(*(uint64_t *)(unaff_RBX + 8));
    *(uint64_t *)(unaff_RBX + 8) = 0xffffffffffffffff;
    return 0;
  }
  return 1;
}
int8_t UtilitiesSystem_46c5b(void)
{
  int64_t unaff_RBX;
  closesocket(*(uint64_t *)(unaff_RBX + 8));
  *(uint64_t *)(unaff_RBX + 8) = 0xffffffffffffffff;
  return 0;
}
bool UtilitiesSystem_46ca0(int64_t param_1,int param_2,int32_t param_3)
{
  int iVar1;
  int32_t astack_special_x_10 [2];
  int32_t astack_special_x_18 [4];
  iVar1 = -1;
  astack_special_x_18[0] = param_3;
  if (param_2 == 1) {
    astack_special_x_10[0] = param_3;
    iVar1 = ioctlsocket(*(uint64_t *)(param_1 + 8),0x8004667e,astack_special_x_10);
  }
  else {
    if (param_2 == 2) {
      iVar1 = setsockopt(*(uint64_t *)(param_1 + 8),0xffff,0x20,astack_special_x_18,4);
      return iVar1 != -1;
    }
    if (param_2 == 3) {
      iVar1 = setsockopt(*(uint64_t *)(param_1 + 8),0xffff,0x1002,astack_special_x_18,4);
      return iVar1 != -1;
    }
    if (param_2 == 4) {
      iVar1 = setsockopt(*(uint64_t *)(param_1 + 8),0xffff,0x1001,astack_special_x_18,4);
      return iVar1 != -1;
    }
  }
  return iVar1 != -1;
}
// 函数: void UtilitiesSystem_46d90(int64_t param_1)
void UtilitiesSystem_46d90(int64_t param_1)
{
  if (*(int64_t *)(param_1 + 8) != -1) {
    shutdown(*(int64_t *)(param_1 + 8),2);
    closesocket(*(uint64_t *)(param_1 + 8));
    *(uint64_t *)(param_1 + 8) = 0xffffffffffffffff;
  }
  return;
}
int UtilitiesSystem_46dd0(int64_t param_1,int64_t param_2,int32_t param_3,uint64_t param_4)
{
  int iVar1;
  int aiStackX_18 [4];
  int32_t stack_array_18 [2];
  uint64_t local_var_10;
  local_var_10 = *(uint64_t *)(param_2 + 8);
  stack_array_18[0] = param_3;
  iVar1 = WSASendTo(*(uint64_t *)(param_1 + 8),stack_array_18,1,aiStackX_18,0,param_4,0x10,0,0);
  if (iVar1 == -1) {
    iVar1 = WSAGetLastError();
    return -(uint)(iVar1 != 0x2733);
  }
  return aiStackX_18[0];
}
uint64_t UtilitiesSystem_46e40(int64_t param_1,int *param_2,int32_t *param_3,int64_t param_4)
{
  int16_t uVar1;
  uint64_t uVar2;
  uint astack_special_x_8 [2];
  int32_t astack_special_x_10 [4];
  int32_t astack_special_x_20 [2];
  int aiStack_28 [2];
  uint64_t local_var_20;
  local_var_20 = *(uint64_t *)(param_2 + 2);
  aiStack_28[0] = *param_2 >> 3;
  astack_special_x_10[0] = 0x10;
  astack_special_x_8[0] = 0;
  uVar2 = WSARecvFrom(*(uint64_t *)(param_1 + 8),aiStack_28,1,astack_special_x_20,astack_special_x_8,param_4,
                      astack_special_x_10,0,0);
  if ((int)uVar2 != -1) {
    uVar1 = ntohs(*(int16_t *)(param_4 + 2));
    *(int16_t *)(param_4 + 0x10) = uVar1;
    uVar2 = (uint64_t)*(uint *)(param_4 + 4);
    *(uint *)(param_4 + 0x14) = *(uint *)(param_4 + 4);
    if ((astack_special_x_8[0] & 0x8000) == 0) {
      *param_3 = astack_special_x_20[0];
      return CONCAT71((uint7)(uint3)((uint)astack_special_x_20[0] >> 8),1);
    }
  }
  *param_3 = 0;
  return uVar2 & 0xffffffffffffff00;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t UtilitiesSystem_46f40(void)
{
  int64_t lVar1;
  lVar1 = render_system_data_config;
  if (render_system_data_config == 0) {
    if (render_system_control_config == 0) {
      AudioSystem_SoundManager(&system_data_bf18);
    }
    lVar1 = (int64_t)render_system_control_config;
    if (render_system_control_config < 1) {
      lVar1 = 1;
    }
    render_system_data_config = lVar1;
    UtilitiesSystem_502e0(&processed_var_8368_ptr,lVar1);
  }
  return lVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t UtilitiesSystem_46f50(void)
{
  int64_t lVar1;
  lVar1 = render_system_data_config;
  if (render_system_data_config == 0) {
    if (render_system_control_config == 0) {
      AudioSystem_SoundManager(&system_data_bf18);
    }
    lVar1 = (int64_t)render_system_control_config;
    if (render_system_control_config < 1) {
      lVar1 = 1;
    }
    render_system_data_config = lVar1;
    UtilitiesSystem_502e0(&processed_var_8368_ptr,lVar1);
  }
  return lVar1;
}
// 函数: void UtilitiesSystem_46fa6(void)
void UtilitiesSystem_46fa6(void)
{
  return;
}
// 函数: void UtilitiesSystem_46fb0(int8_t *param_1,int8_t *param_2,int64_t param_3)
void UtilitiesSystem_46fb0(int8_t *param_1,int8_t *param_2,int64_t param_3)
{
  if (system_data_f000 == '\0') {
// WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
    memcpy();
    return;
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}