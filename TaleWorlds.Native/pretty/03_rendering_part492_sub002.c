/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part492_sub002.c - 1 个函数
// 函数: void function_52f6f0(int64_t param_1,int64_t param_2,int32_t *param_3,int32_t *param_4,
void function_52f6f0(int64_t param_1,int64_t param_2,int32_t *param_3,int32_t *param_4,
                  int8_t *param_5,int8_t *param_6,float *param_7)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  int32_t uVar6;
  int8_t uVar7;
  uint uVar8;
  uint uVar9;
  uint64_t uVar10;
  int32_t extraout_XMM0_Da;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  *param_5 = 0;
  *param_6 = 0;
  param_7[0] = 0.0;
  param_7[1] = 0.0;
  param_7[2] = 0.0;
  param_7[3] = 0.0;
  *param_3 = 0xffffffff;
  *param_4 = 0xffffffff;
  uVar10 = (uint64_t)*(uint *)(param_2 + 0xac);
  if ((*(uint *)(param_2 + 0xac) >> 0xb & 1) != 0) {
    uVar6 = function_51b9b0(param_1,5,param_2);
    *param_3 = uVar6;
    *param_6 = 1;
    return;
  }
  if (*(int *)(param_1 + 0x564) == -1) {
    cVar5 = Function_0d42bf9b();
    if ((cVar5 == '\0') && (((byte)uVar10 & 0x30) == 0x10)) {
      uVar6 = function_51b9b0(param_1,4,param_2);
      *param_3 = uVar6;
      return;
    }
    cVar5 = Function_0d42bf9b(param_1);
    if (cVar5 == '\0') {
      if (((uVar10 & 0x20) != 0) && (-1 < (char)uVar10)) {
        iVar4 = *(int *)(*(int64_t *)(param_1 + 0x590) + 0x2450);
        if ((iVar4 == -1) || (*(int *)((int64_t)iVar4 * 0x68 + 0x58 + render_system_config) != 0x17)) {
          fVar13 = *(float *)(param_2 + 0x7c) * *(float *)(param_1 + 0x534) +
                   *(float *)(param_2 + 0x78) * *(float *)(param_1 + 0x530) +
                   *(float *)(param_2 + 0x80) * *(float *)(param_1 + 0x538);
          if (fVar13 <= 0.0) {
            if (-0.7 <= fVar13) {
              uVar7 = *(float *)(param_2 + 0x7c) * *(float *)(param_1 + 0x524) +
                      *(float *)(param_2 + 0x78) * *(float *)(param_1 + 0x520) +
                      *(float *)(param_2 + 0x80) * *(float *)(param_1 + 0x528) <= 0.0;
            }
            else {
              uVar7 = 5;
            }
          }
          else {
            uVar7 = 2;
          }
          fVar13 = *(float *)(*(int64_t *)(param_1 + 0x20) + 0x20);
          fVar11 = *(float *)(*(int64_t *)(param_1 + 0x20) + 0x1c);
          uVar6 = function_557850(*(uint64_t *)(param_1 + 0x598),0xffffffff,uVar7,0xff,
                                *(int8_t *)(*(int64_t *)(param_1 + 0x590) + 0x34bc),
                                ((float)*(int *)(param_2 + 0x88) / *(float *)(param_2 + 0xc0)) * 0.1
                                < (float)*(int *)(param_2 + 0x88),0,
                                1.0 < fVar11 * fVar11 + fVar13 * fVar13);
          *param_3 = uVar6;
          *param_5 = 1;
// WARNING: Subroutine does not return
          AdvancedSystemController(*(int32_t *)(*(int64_t *)(param_1 + 0x20) + 0x34));
        }
      }
      uVar6 = Function_472ef99e(extraout_XMM0_Da,param_2);
      uVar6 = function_51b9b0(param_1,uVar6,param_2);
      *param_4 = uVar6;
      if ((*(byte *)(param_2 + 0xac) & 0x10) == 0) {
        return;
      }
      *param_5 = 1;
      fVar13 = *(float *)(param_2 + 0x90);
      if (100.0 <= fVar13) {
        fVar13 = 100.0;
      }
      uVar9 = *(uint *)(param_1 + 0x748) << 0xd ^ *(uint *)(param_1 + 0x748);
      uVar9 = uVar9 ^ uVar9 >> 0x11;
      uVar9 = uVar9 ^ uVar9 << 5;
      *(uint *)(param_1 + 0x748) = uVar9;
      fVar11 = *(float *)(param_2 + 0x6c);
      fVar1 = *(float *)(param_2 + 0x70);
      uVar8 = uVar9 << 0xd ^ uVar9;
      uVar8 = uVar8 ^ uVar8 >> 0x11;
      uVar8 = uVar8 ^ uVar8 << 5;
      fVar2 = *(float *)(param_2 + 0x68);
      *(uint *)(param_1 + 0x748) = uVar8;
      fVar14 = (float)(uVar9 - 1) * fVar13 * 4.6566128e-12 + (float)(uVar9 - 1) * 1.3969838e-10 +
               fVar13 * 0.012 + 0.36;
      fVar12 = (float)(uVar8 - 1) * 1.1641532e-10 - 0.25;
      fVar13 = *(float *)(param_1 + 0x524);
      fVar3 = *(float *)(param_1 + 0x528);
      *param_7 = fVar12 * *(float *)(param_1 + 0x520) + fVar2 * fVar14;
      param_7[1] = fVar12 * fVar13 + fVar11 * fVar14;
      param_7[2] = fVar12 * fVar3 + fVar1 * fVar14;
      param_7[3] = 3.4028235e+38;
      return;
    }
  }
  fVar11 = (float)*(int *)(param_2 + 0x88);
  fVar13 = (fVar11 / *(float *)(param_2 + 0xc0)) * 0.25;
  if (*(int *)(param_2 + 0xb8) == 2) {
    uVar6 = function_51b9b0(param_1,(fVar13 < fVar11) + '\x02',param_2);
    *param_4 = uVar6;
  }
  else {
    uVar6 = function_51b9b0(param_1,(fVar13 < fVar11) + '\x01',param_2);
    *param_4 = uVar6;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address