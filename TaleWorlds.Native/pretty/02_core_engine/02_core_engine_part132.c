#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part132.c - 5 个函数

// 函数: void FUN_180130155(void)
// 处理渲染对象更新和变换矩阵计算
void update_render_objects(void)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int16_t uVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong engine_context;
  int object_index;
  char cVar10;
  ulonglong iterator;
  uint uVar12;
  int iVar13;
  uint64_t render_state;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float camera_distance;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  int iVar11;
  
  uVar14 = iterator;
  do {
    lVar2 = *(longlong *)(uVar14 + *(longlong *)(engine_context + 0x1c70));
    *(int *)(lVar2 + 0x50) = object_index;
    cVar10 = (char)iterator;
    iVar11 = (int)iterator;
    if ((0 < object_index) && (*(int *)(lVar2 + 0x54) < *(int *)(engine_context + 0x1a90) + -2)) {
      uVar7 = iterator & 0xffffffff;
      uVar14 = iterator;
      if (iVar11 < *(int *)(engine_context + 0x1aa0)) {
        do {
          lVar8 = *(longlong *)(uVar14 + *(longlong *)(engine_context + 0x1aa8));
          if (*(longlong *)(lVar8 + 0x28) == lVar2) {
            *(ulonglong *)(lVar8 + 0x28) = iterator;
            *(char *)(*(longlong *)(uVar14 + *(longlong *)(engine_context + 0x1aa8)) + 0xae) = cVar10;
          }
          uVar12 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar12;
          uVar14 = uVar14 + 8;
        } while ((int)uVar12 < *(int *)(engine_context + 0x1aa0));
      }
      if (lVar2 == *(longlong *)(engine_context + 0x1c88)) {
        *(ulonglong *)(engine_context + 0x1c88) = iterator;
      }
      lVar8 = (longlong)object_index * 8 >> 3;
      lVar2 = *(longlong *)(engine_context + 0x1c70) + lVar8 * 8;
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar2 + 8,(*(int *)(engine_context + 0x1c68) - lVar8) * 8 + -8);
    }
    if ((object_index == 0) || (*(char *)(lVar2 + 0x76) != cVar10)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((*(uint *)(engine_context + 0x19e8) & 0x400) != 0) {
      if ((*(char *)(lVar2 + 0x77) == cVar10) && (bVar4)) {
        if (*(char *)(lVar2 + 0x49) != cVar10) {
          puVar6 = (uint64_t *)(**(code **)(engine_context + 0x1560))(&stack0x000000b0,lVar2);
          uVar1 = *puVar6;
          *(uint64_t *)(lVar2 + 0xd8) = uVar1;
          *(uint64_t *)(lVar2 + 8) = uVar1;
        }
        if (*(char *)(lVar2 + 0x4a) != cVar10) {
          puVar6 = (uint64_t *)(**(code **)(engine_context + 0x1570))(&stack0x000000b8,lVar2);
          uVar1 = *puVar6;
          *(uint64_t *)(lVar2 + 0xe0) = uVar1;
          *(uint64_t *)(lVar2 + 0x10) = uVar1;
        }
      }
      fStack0000000000000030 = *(float *)(lVar2 + 8);
      fStack0000000000000034 = *(float *)(lVar2 + 0xc);
      fStack0000000000000038 = fStack0000000000000030 + *(float *)(lVar2 + 0x10);
      fStack000000000000003c = fStack0000000000000034 + *(float *)(lVar2 + 0x14);
      uVar5 = calculate_bounding_box(&stack0x00000030);
      *(int16_t *)(lVar2 + 0x74) = uVar5;
    }
    *(int32_t *)(lVar2 + 0x6c) = 0x3f800000;
    fVar16 = *(float *)(lVar2 + 8) - *(float *)(lVar2 + 100);
    fVar15 = *(float *)(lVar2 + 0xc) - *(float *)(lVar2 + 0x68);
    if (((*(uint *)(lVar2 + 4) & 0x400) != 0) &&
       (((fVar16 != camera_distance || (fVar15 != camera_distance)) &&
        (uVar9 = iterator & 0xffffffff, uVar7 = iterator, iVar11 < *(int *)(engine_context + 0x1aa0))))
       ) {
      do {
        lVar8 = *(longlong *)(uVar7 + *(longlong *)(engine_context + 0x1aa8));
        if ((*(longlong *)(lVar8 + 0x28) == lVar2) || ((*(uint *)(engine_context + 0x19e8) & 0x400) == 0)
           ) {
          *(float *)(lVar8 + 0x40) = fVar16 + *(float *)(lVar8 + 0x40);
          *(float *)(lVar8 + 0x44) = fVar15 + *(float *)(lVar8 + 0x44);
          *(float *)(lVar8 + 0x228) = fVar16 + *(float *)(lVar8 + 0x228);
          *(float *)(lVar8 + 0x22c) = fVar15 + *(float *)(lVar8 + 0x22c);
          *(float *)(lVar8 + 0x230) = fVar16 + *(float *)(lVar8 + 0x230);
          *(float *)(lVar8 + 0x234) = fVar15 + *(float *)(lVar8 + 0x234);
          *(float *)(lVar8 + 0x238) = fVar16 + *(float *)(lVar8 + 0x238);
          *(float *)(lVar8 + 0x23c) = fVar15 + *(float *)(lVar8 + 0x23c);
          *(float *)(lVar8 + 0x240) = fVar16 + *(float *)(lVar8 + 0x240);
          *(float *)(lVar8 + 0x244) = fVar15 + *(float *)(lVar8 + 0x244);
          *(float *)(lVar8 + 0x248) = fVar16 + *(float *)(lVar8 + 0x248);
          *(float *)(lVar8 + 0x24c) = fVar15 + *(float *)(lVar8 + 0x24c);
          *(float *)(lVar8 + 0x250) = fVar16 + *(float *)(lVar8 + 0x250);
          *(float *)(lVar8 + 0x254) = fVar15 + *(float *)(lVar8 + 0x254);
          *(float *)(lVar8 + 0x100) = fVar16 + *(float *)(lVar8 + 0x100);
          *(float *)(lVar8 + 0x104) = fVar15 + *(float *)(lVar8 + 0x104);
          *(float *)(lVar8 + 0x110) = fVar16 + *(float *)(lVar8 + 0x110);
          *(float *)(lVar8 + 0x114) = fVar15 + *(float *)(lVar8 + 0x114);
          *(float *)(lVar8 + 0x118) = fVar16 + *(float *)(lVar8 + 0x118);
          *(float *)(lVar8 + 0x11c) = fVar15 + *(float *)(lVar8 + 0x11c);
          *(float *)(lVar8 + 0x14c) = fVar16 + *(float *)(lVar8 + 0x14c);
          *(float *)(lVar8 + 0x150) = fVar15 + *(float *)(lVar8 + 0x150);
          *(float *)(lVar8 + 0x154) = fVar16 + *(float *)(lVar8 + 0x154);
          *(float *)(lVar8 + 0x158) = fVar15 + *(float *)(lVar8 + 0x158);
          *(float *)(lVar8 + 0x15c) = fVar16 + *(float *)(lVar8 + 0x15c);
          *(float *)(lVar8 + 0x160) = fVar15 + *(float *)(lVar8 + 0x160);
          *(float *)(lVar8 + 0x164) = fVar16 + *(float *)(lVar8 + 0x164);
          *(float *)(lVar8 + 0x168) = fVar15 + *(float *)(lVar8 + 0x168);
        }
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        uVar7 = uVar7 + 8;
      } while ((int)uVar12 < *(int *)(engine_context + 0x1aa0));
    }
    if ((*(code **)(engine_context + 0x15b8) == (code *)0x0) || (!bVar4)) {
      if (*(short *)(lVar2 + 0x74) == -1) {
        fVar15 = *(float *)(lVar2 + 0x18);
        if (fVar15 == camera_distance) {
          fVar15 = 1.0;
        }
      }
      else {
        fVar15 = *(float *)(*(longlong *)(engine_context + 0x1608) + 0x20 +
                           (longlong)*(short *)(lVar2 + 0x74) * 0x24);
      }
    }
    else {
      fVar15 = (float)(**(code **)(engine_context + 0x15b8))(lVar2);
    }
    fVar16 = *(float *)(lVar2 + 0x18);
    if (((fVar16 != camera_distance) && (fVar15 != fVar16)) &&
       ((*(uint *)(engine_context + 8) & 0x4000) != 0)) {
      if (*(longlong *)(lVar2 + 0x78) == 0) {
        uVar9 = iterator & 0xffffffff;
        uVar7 = iterator;
        lVar8 = SYSTEM_DATA_MANAGER_A;
        if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1aa0) != iVar11) {
          do {
            iVar13 = (int)uVar9;
            lVar3 = *(longlong *)(uVar7 + *(longlong *)(lVar8 + 0x1aa8));
            if (*(longlong *)(lVar3 + 0x28) == lVar2) {
              update_transform_matrix(lVar3,fVar15 / fVar16);
            }
            uVar9 = (ulonglong)(iVar13 + 1U);
            uVar7 = uVar7 + 8;
          } while (iVar13 + 1U != *(uint *)(lVar8 + 0x1aa0));
        }
      }
      else {
        update_transform_matrix(*(longlong *)(lVar2 + 0x78),fVar15 / fVar16);
      }
    }
    *(float *)(lVar2 + 0x18) = fVar15;
    object_index = object_index + 1;
    uVar14 = uVar14 + 8;
  } while (object_index < *(int *)(engine_context + 0x1c68));
  if ((*(uint *)(engine_context + 0x19e8) & 0x400) == 0) {
    *(uint64_t *)(engine_context + 0x1c80) = render_state;
    return;
  }
  if ((*(uint *)(engine_context + 0xc) & 0x800) == 0) {
LAB_180130765:
    uVar14 = get_render_context(*(uint64_t *)(engine_context + 0x118));
LAB_180130774:
    uVar7 = uVar14;
    if (uVar14 == 0) goto LAB_18013078e;
    *(ulonglong *)(engine_context + 0x1c88) = uVar14;
  }
  else {
    uVar14 = iterator;
    if (*(int *)(engine_context + 0x130) != 0) {
      uVar7 = iterator & 0xffffffff;
      if (0 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x1c68)) {
        puVar6 = *(uint64_t **)(SYSTEM_DATA_MANAGER_A + 0x1c70);
        uVar9 = iterator;
        do {
          if (*(int *)*puVar6 == *(int *)(engine_context + 0x130)) {
            uVar14 = (*(uint64_t **)(SYSTEM_DATA_MANAGER_A + 0x1c70))[(int)uVar7];
            break;
          }
          uVar7 = (ulonglong)((int)uVar7 + 1);
          uVar9 = uVar9 + 1;
          puVar6 = puVar6 + 1;
        } while ((longlong)uVar9 < (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1c68));
      }
    }
    uVar7 = uVar14;
    if (uVar14 != 0) {
      if ((*(byte *)(uVar14 + 4) & 8) != 0) goto LAB_180130765;
      goto LAB_180130774;
    }
LAB_18013078e:
    uVar14 = *(ulonglong *)(engine_context + 0x1c88);
    if (uVar14 == 0) {
      uVar14 = **(ulonglong **)(engine_context + 0x1c70);
      *(ulonglong *)(engine_context + 0x1c88) = uVar14;
    }
  }
  if (*(longlong *)(engine_context + 0x1b78) != 0) {
    uVar14 = *(ulonglong *)(*(longlong *)(engine_context + 0x1b78) + 0x28);
  }
  *(ulonglong *)(engine_context + 0x1c80) = uVar14;
  if (*(char *)(engine_context + 0x1dd0) == cVar10) {
    if (*(int *)(engine_context + 0x1b2c) != iVar11) {
      do {
        if (*(char *)(SYSTEM_DATA_MANAGER_A + 0x120 + iterator) != '\0') {
          return;
        }
        iterator = iterator + 1;
      } while ((longlong)iterator < 5);
    }
  }
  else {
    if (uVar7 != 0) goto LAB_180130808;
    uVar7 = *(ulonglong *)(engine_context + 0x1c88);
  }
  if (uVar7 == 0) {
    return;
  }
LAB_180130808:
  if ((uVar7 != *(ulonglong *)(engine_context + 0x1c80)) && ((*(byte *)(uVar7 + 4) & 8) == 0)) {
    *(ulonglong *)(engine_context + 0x1c80) = uVar7;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801306c9(void)
// 更新渲染上下文状态
void update_render_context(void)

{
  ulonglong uVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong engine_context;
  ulonglong iterator;
  uint64_t render_state;
  
  if ((*(uint *)(engine_context + 0x19e8) & 0x400) == 0) {
    *(uint64_t *)(engine_context + 0x1c80) = render_state;
    return;
  }
  if ((*(uint *)(engine_context + 0xc) & 0x800) == 0) {
LAB_180130765:
    uVar1 = get_render_context(*(uint64_t *)(engine_context + 0x118));
LAB_180130774:
    uVar3 = uVar1;
    if (uVar1 == 0) goto LAB_18013078e;
    *(ulonglong *)(engine_context + 0x1c88) = uVar1;
  }
  else {
    uVar1 = iterator;
    if (*(int *)(engine_context + 0x130) != 0) {
      uVar3 = iterator & 0xffffffff;
      if (0 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x1c68)) {
        puVar2 = *(uint64_t **)(SYSTEM_DATA_MANAGER_A + 0x1c70);
        uVar4 = iterator;
        do {
          if (*(int *)*puVar2 == *(int *)(engine_context + 0x130)) {
            uVar1 = (*(uint64_t **)(SYSTEM_DATA_MANAGER_A + 0x1c70))[(int)uVar3];
            break;
          }
          uVar3 = (ulonglong)((int)uVar3 + 1);
          uVar4 = uVar4 + 1;
          puVar2 = puVar2 + 1;
        } while ((longlong)uVar4 < (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1c68));
      }
    }
    uVar3 = uVar1;
    if (uVar1 != 0) {
      if ((*(byte *)(uVar1 + 4) & 8) != 0) goto LAB_180130765;
      goto LAB_180130774;
    }
LAB_18013078e:
    uVar1 = *(ulonglong *)(engine_context + 0x1c88);
    if (uVar1 == 0) {
      uVar1 = **(ulonglong **)(engine_context + 0x1c70);
      *(ulonglong *)(engine_context + 0x1c88) = uVar1;
    }
  }
  if (*(longlong *)(engine_context + 0x1b78) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(engine_context + 0x1b78) + 0x28);
  }
  *(ulonglong *)(engine_context + 0x1c80) = uVar1;
  if (*(char *)(engine_context + 0x1dd0) == (char)iterator) {
    if (*(int *)(engine_context + 0x1b2c) != (int)iterator) {
      do {
        if (*(char *)(SYSTEM_DATA_MANAGER_A + 0x120 + iterator) != '\0') {
          return;
        }
        iterator = iterator + 1;
      } while ((longlong)iterator < 5);
    }
  }
  else {
    if (uVar3 != 0) goto LAB_180130808;
    uVar3 = *(ulonglong *)(engine_context + 0x1c88);
  }
  if (uVar3 == 0) {
    return;
  }
LAB_180130808:
  if ((uVar3 != *(ulonglong *)(engine_context + 0x1c80)) && ((*(byte *)(uVar3 + 4) & 8) == 0)) {
    *(ulonglong *)(engine_context + 0x1c80) = uVar3;
  }
  return;
}





// 函数: void FUN_1801306f3(void)
// 重置渲染状态
void reset_render_state(void)

{
  longlong engine_context;
  uint64_t render_state;
  
  *(uint64_t *)(engine_context + 0x1c80) = render_state;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: int * FUN_180130830(longlong param_1,int param_2,uint64_t *param_3,uint64_t *param_4,
//                    uint param_5)
// 创建或获取渲染对象
int * create_render_object(longlong render_context,int object_id,uint64_t *position,uint64_t *orientation,
                   uint render_flags)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int16_t uVar4;
  int *render_object;
  int iVar6;
  uint64_t *puVar7;
  float fVar8;
  int *piStackX_8;
  int *piStack_38;
  float fStack_30;
  float fStack_2c;
  
  lVar3 = SYSTEM_DATA_MANAGER_A;
  if (render_context != 0) {
    if ((*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1b78) != 0) &&
       (*(longlong *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1b78) + 0x3a0) == render_context)) {
      render_flags = render_flags | 0xc;
    }
    uVar2 = render_flags | 8;
    if ((*(uint *)(render_context + 0xc) & 0x40200) != 0x40200) {
      uVar2 = render_flags;
    }
    render_flags = uVar2;
    if ((*(uint *)(render_context + 0xc) & 0x1000) != 0) {
      render_flags = uVar2 | 4;
    }
  }
  iVar6 = 0;
  iVar1 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1c68);
  if (0 < iVar1) {
    puVar7 = *(uint64_t **)(SYSTEM_DATA_MANAGER_A + 0x1c70);
    do {
      if (*(int *)*puVar7 == object_id) {
        render_object = (int *)(*(uint64_t **)(SYSTEM_DATA_MANAGER_A + 0x1c70))[iVar6];
        goto LAB_1801308eb;
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar6 < iVar1);
  }
  render_object = (int *)0x0;
LAB_1801308eb:
  if (render_object == (int *)0x0) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    piStackX_8 = (int *)allocate_render_object(0xf0,SYSTEM_DATA_MANAGER_B,iVar1,orientation,0xfffffffffffffffe);
    if (piStackX_8 == (int *)0x0) {
      render_object = (int *)0x0;
    }
    else {
      piStack_38 = piStackX_8;
      render_object = (int *)initialize_render_object(piStackX_8);
    }
    *render_object = object_id;
    render_object[0x14] = *(int *)(lVar3 + 0x1c68);
    *(uint64_t *)(render_object + 0x19) = *position;
    *(uint64_t *)(render_object + 2) = *position;
    *(uint64_t *)(render_object + 4) = *orientation;
    piStack_38 = *(int **)(render_object + 2);
    fStack_30 = (float)render_object[2] + (float)render_object[4];
    fStack_2c = (float)render_object[3] + (float)render_object[5];
    piStackX_8 = render_object;
    uVar4 = calculate_bounding_box(&piStack_38);
    *(int16_t *)(render_object + 0x1d) = uVar4;
    add_to_render_list(lVar3 + 0x1c68,&piStackX_8);
    fVar8 = (float)render_object[4] + (float)render_object[2];
    if ((float)render_object[4] + (float)render_object[2] <= *(float *)(lVar3 + 0x1a20)) {
      fVar8 = *(float *)(lVar3 + 0x1a20);
    }
    *(float *)(lVar3 + 0x1a20) = fVar8;
    fVar8 = (float)render_object[5] + (float)render_object[3];
    if ((float)render_object[5] + (float)render_object[3] <= *(float *)(lVar3 + 0x1a24)) {
      fVar8 = *(float *)(lVar3 + 0x1a24);
    }
    *(float *)(lVar3 + 0x1a24) = fVar8;
    if ((short)render_object[0x1d] != -1) {
      render_object[6] = *(int *)(*(longlong *)(lVar3 + 0x1608) + 0x20 +
                          (longlong)(short)render_object[0x1d] * 0x24);
    }
  }
  else {
    if (*(char *)((longlong)render_object + 0x49) == '\0') {
      *(uint64_t *)(render_object + 2) = *position;
    }
    if (*(char *)((longlong)render_object + 0x4a) == '\0') {
      *(uint64_t *)(render_object + 4) = *orientation;
    }
  }
  *(longlong *)(render_object + 0x1e) = render_context;
  render_object[1] = render_flags;
  render_object[0x15] = *(int *)(lVar3 + 0x1a90);
  if (render_context != 0) {
    *(int8_t *)(render_context + 0xae) = 1;
  }
  return render_object;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180130a80(longlong param_1)
// 初始化渲染对象属性
void initialize_render_attributes(longlong render_object)

{
  uint uVar1;
  int32_t *puVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  float *pfVar10;
  uint64_t *puVar11;
  float *pfVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  uint64_t extraout_XMM0_Qa;
  uint64_t uStackX_8;
  
  lVar5 = SYSTEM_DATA_MANAGER_A;
  uVar1 = *(uint *)(render_object + 0xc);
  *(int32_t *)(render_object + 0x3c) = 0xffffffff;
  puVar2 = (int32_t *)**(uint64_t **)(lVar5 + 0x1c70);
  if ((*(uint *)(lVar5 + 0x19e8) & 0x400) == 0) {
    *(int32_t **)(render_object + 0x28) = puVar2;
    *(int32_t *)(render_object + 0x30) = *puVar2;
    *(bool *)(render_object + 0xae) = *(longlong *)(puVar2 + 0x1e) == render_object;
    return;
  }
  uVar13 = 0;
  *(int8_t *)(render_object + 0xae) = 0;
  if (((uVar1 & 0x6000000) != 0) && (*(char *)(render_object + 0xb5) != '\0')) {
    *(uint64_t *)(render_object + 0x28) = 0;
    *(int32_t *)(render_object + 0x30) = 0;
  }
  if ((((*(int *)(lVar5 + 0x1bec) == 0) && (*(longlong *)(render_object + 0x28) == 0)) &&
      ((*(longlong *)(render_object + 0x398) == 0 ||
       (lVar7 = *(longlong *)(*(longlong *)(render_object + 0x398) + 0x28),
       *(longlong *)(render_object + 0x28) = lVar7, lVar7 == 0)))) && (*(int *)(render_object + 0x30) != 0)) {
    lVar7 = allocate_render_buffer();
    *(longlong *)(render_object + 0x28) = lVar7;
    if (lVar7 == 0) {
      if ((*(float *)(render_object + 0x34) != 3.4028235e+38) &&
         (*(float *)(render_object + 0x38) != 3.4028235e+38)) {
        uVar8 = create_render_object(render_object,*(int32_t *)(render_object + 8),(float *)(render_object + 0x34),
                              render_object + 0x48,0);
        *(uint64_t *)(render_object + 0x28) = uVar8;
      }
    }
  }
  if (*(int *)(lVar5 + 0x1bec) != 0) {
    puVar9 = (int32_t *)allocate_render_buffer(*(int32_t *)(lVar5 + 0x1c3c));
    *(int32_t **)(render_object + 0x28) = puVar9;
    *(int32_t *)(render_object + 0x30) = *(int32_t *)(lVar5 + 0x1c3c);
    goto LAB_180130c8e;
  }
  if ((uVar1 & 0x11000000) == 0) {
    if ((uVar1 >> 0x19 & 1) != 0) {
      puVar9 = *(int32_t **)(lVar5 + 0x1c80);
      goto LAB_180130c8a;
    }
    cVar6 = check_render_state();
    if (cVar6 != '\0') {
      puVar9 = (int32_t *)
               create_render_object(extraout_XMM0_Qa,*(int32_t *)(render_object + 8),render_object + 0x40,
                             render_object + 0x48,0);
      *(int32_t **)(render_object + 0x28) = puVar9;
      goto LAB_180130c8e;
    }
    if ((((*(longlong *)(lVar5 + 0x1b78) != 0) &&
         (*(longlong *)(*(longlong *)(lVar5 + 0x1b78) + 0x3a0) == render_object)) &&
        (-256000.0 < *(float *)(SYSTEM_DATA_MANAGER_A + 0x118) ||
         *(float *)(SYSTEM_DATA_MANAGER_A + 0x118) == -256000.0)) &&
       (-256000.0 < *(float *)(SYSTEM_DATA_MANAGER_A + 0x11c) ||
        *(float *)(SYSTEM_DATA_MANAGER_A + 0x11c) == -256000.0)) {
      if ((*(longlong *)(render_object + 0x28) != 0) &&
         (*(longlong *)(*(longlong *)(render_object + 0x28) + 0x78) == render_object)) {
        uVar8 = create_render_object(extraout_XMM0_Qa,*(int32_t *)(render_object + 8),render_object + 0x40,
                              render_object + 0x48,0);
        *(uint64_t *)(render_object + 0x28) = uVar8;
      }
      puVar9 = *(int32_t **)(render_object + 0x28);
      goto LAB_180130c8e;
    }
    puVar9 = *(int32_t **)(render_object + 0x28);
    if (puVar9 != (int32_t *)0x0) {
      if ((render_object == *(longlong *)(puVar9 + 0x1e)) && (*(int *)(lVar5 + 0x1b2c) == 0)) {
        update_render_state(extraout_XMM0_Qa,**(uint64_t **)(lVar5 + 0x1c70));
        puVar9 = *(int32_t **)(render_object + 0x28);
      }
      goto LAB_180130c8e;
    }
LAB_180130c93:
    *(int32_t **)(render_object + 0x28) = puVar2;
    puVar9 = puVar2;
  }
  else {
    puVar9 = *(int32_t **)(*(longlong *)(render_object + 0x398) + 0x28);
LAB_180130c8a:
    *(int32_t **)(render_object + 0x28) = puVar9;
LAB_180130c8e:
    if (puVar9 == (int32_t *)0x0) goto LAB_180130c93;
  }
  if ((uVar1 & 0x6000000) == 0) {
    if ((((puVar9 == (int32_t *)0x0) || (render_object == *(longlong *)(puVar9 + 0x1e))) ||
        (*(longlong *)(puVar9 + 0x1e) == 0)) || ((uVar1 >> 0x18 & 1) != 0)) {
      if ((*(int *)(render_object + 0x3c) < 0) && ((uVar1 >> 0x18 & 1) == 0)) {
        *(int *)(render_object + 0x3c) = (int)*(short *)(puVar9 + 0x1d);
      }
    }
    else {
      if (((*(byte *)(render_object + 0x432) & 1) == 0) || ((*(byte *)(render_object + 0x432) & 2) != 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((((*(uint *)(render_object + 0xc) & 0x20000000) == 0) ||
          (*(int *)(lVar5 + 0x1a90) <= (int)puVar9[0x15])) || (!bVar3)) {
        cVar6 = update_render_state(render_object,**(uint64_t **)(lVar5 + 0x1c70));
        if (cVar6 == '\0') {
          uVar8 = create_render_object(render_object,*(int32_t *)(render_object + 8),render_object + 0x40,render_object + 0x48,4
                               );
          *(uint64_t *)(render_object + 0x28) = uVar8;
        }
      }
      else {
        *(longlong *)(puVar9 + 0x1e) = render_object;
        **(int32_t **)(render_object + 0x28) = *(int32_t *)(render_object + 8);
        *(int32_t *)(*(longlong *)(render_object + 0x28) + 0x60) = 0;
      }
    }
    goto LAB_180130e8e;
  }
  if ((uVar1 & 0x2000000) == 0) {
    puVar11 = (uint64_t *)
              ((longlong)(*(int *)(lVar5 + 0x1bc0) + -1) * 0x30 + 0x28 +
              *(longlong *)(lVar5 + 0x1bc8));
  }
  else {
    puVar11 = (uint64_t *)(lVar5 + 0x118);
  }
  uVar8 = *puVar11;
  if (((*(char *)(lVar5 + 0x1d06) == '\0') && (*(char *)(lVar5 + 0x1d07) != '\0')) &&
     (*(longlong *)(lVar5 + 0x1c98) != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uStackX_8._0_4_ = (float)uVar8;
  if (((float)uStackX_8 < -256000.0) ||
     (uStackX_8._4_4_ = (float)((ulonglong)uVar8 >> 0x20), uStackX_8._4_4_ < -256000.0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(char *)(render_object + 0xb5) == '\0') && ((uVar1 & 0x2000000) == 0)) {
LAB_180130d35:
    *(int *)(render_object + 0x3c) = (int)*(short *)(*(longlong *)(render_object + 0x28) + 0x74);
  }
  else {
    if (bVar3) {
      if (!bVar4) goto LAB_180130d35;
      pfVar10 = (float *)&uStackX_8;
      uStackX_8 = *puVar11;
    }
    else {
      uStackX_8 = uVar8;
      pfVar10 = (float *)transform_coordinates(&uStackX_8);
    }
    if (0 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x1600)) {
      pfVar12 = *(float **)(SYSTEM_DATA_MANAGER_A + 0x1608);
      uVar15 = uVar13;
      do {
        iVar14 = (int)uVar15;
        if ((((*pfVar12 <= *pfVar10) && (pfVar12[1] <= pfVar10[1])) &&
            (*pfVar10 < *pfVar12 + pfVar12[2])) && (pfVar10[1] < pfVar12[1] + pfVar12[3]))
        goto LAB_180130dd5;
        uVar15 = (ulonglong)(iVar14 + 1);
        uVar13 = uVar13 + 1;
        pfVar12 = pfVar12 + 9;
      } while ((longlong)uVar13 < (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1600));
    }
    iVar14 = -1;
LAB_180130dd5:
    *(int *)(render_object + 0x3c) = iVar14;
  }
LAB_180130e8e:
  *(bool *)(render_object + 0xae) = render_object == *(longlong *)(*(int32_t **)(render_object + 0x28) + 0x1e);
  *(int32_t *)(render_object + 0x30) = **(int32_t **)(render_object + 0x28);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180130ae3(uint64_t param_1)
// 更新渲染对象变换
void update_render_transform(uint64_t render_object)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  uint64_t uVar6;
  float *pfVar7;
  longlong in_RCX;
  uint64_t *puVar8;
  float *pfVar9;
  longlong engine_context;
  uint render_flags;
  int iVar10;
  ulonglong iterator;
  ulonglong uVar11;
  longlong render_context;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  uint64_t extraout_XMM0_Qa_05;
  float fStack0000000000000060;
  float fStack0000000000000064;
  
  *(int8_t *)(in_RCX + 0xae) = 0;
  cVar4 = (char)iterator;
  iVar10 = (int)iterator;
  if (((render_flags & 0x6000000) != 0) && (*(char *)(in_RCX + 0xb5) != cVar4)) {
    *(ulonglong *)(in_RCX + 0x28) = iterator;
    *(int *)(in_RCX + 0x30) = iVar10;
  }
  if ((((*(int *)(render_context + 0x1bec) == iVar10) && (*(longlong *)(in_RCX + 0x28) == 0)) &&
      ((*(longlong *)(in_RCX + 0x398) == 0 ||
       (lVar5 = *(longlong *)(*(longlong *)(in_RCX + 0x398) + 0x28),
       *(longlong *)(in_RCX + 0x28) = lVar5, lVar5 == 0)))) && (*(int *)(in_RCX + 0x30) != 0)) {
    lVar5 = allocate_render_buffer();
    *(longlong *)(engine_context + 0x28) = lVar5;
    render_object = extraout_XMM0_Qa;
    if (lVar5 == 0) {
      render_object = 0x7f7fffff;
      if ((*(float *)(engine_context + 0x34) != 3.4028235e+38) &&
         (*(float *)(engine_context + 0x38) != 3.4028235e+38)) {
        uVar6 = create_render_object(0x7f7fffff,*(int32_t *)(engine_context + 8),(float *)(engine_context + 0x34),
                              engine_context + 0x48);
        *(uint64_t *)(engine_context + 0x28) = uVar6;
        render_object = extraout_XMM0_Qa_00;
      }
    }
  }
  if (*(int *)(render_context + 0x1bec) != iVar10) {
    lVar5 = allocate_render_buffer(*(int32_t *)(render_context + 0x1c3c));
    *(longlong *)(engine_context + 0x28) = lVar5;
    *(int32_t *)(engine_context + 0x30) = *(int32_t *)(render_context + 0x1c3c);
    render_object = extraout_XMM0_Qa_01;
    goto LAB_180130c8e;
  }
  if ((render_flags & 0x11000000) == 0) {
    if ((render_flags >> 0x19 & 1) != 0) {
      lVar5 = *(longlong *)(render_context + 0x1c80);
      goto LAB_180130c8a;
    }
    cVar3 = check_render_state();
    if (cVar3 != '\0') {
      lVar5 = create_render_object(extraout_XMM0_Qa_02,*(int32_t *)(engine_context + 8),engine_context + 0x40,
                            engine_context + 0x48);
      *(longlong *)(engine_context + 0x28) = lVar5;
      render_object = extraout_XMM0_Qa_03;
      goto LAB_180130c8e;
    }
    render_object = extraout_XMM0_Qa_02;
    if ((((*(longlong *)(render_context + 0x1b78) != 0) &&
         (*(longlong *)(*(longlong *)(render_context + 0x1b78) + 0x3a0) == engine_context)) &&
        (-256000.0 < *(float *)(SYSTEM_DATA_MANAGER_A + 0x118) ||
         *(float *)(SYSTEM_DATA_MANAGER_A + 0x118) == -256000.0)) &&
       (-256000.0 < *(float *)(SYSTEM_DATA_MANAGER_A + 0x11c) ||
        *(float *)(SYSTEM_DATA_MANAGER_A + 0x11c) == -256000.0)) {
      if ((*(longlong *)(engine_context + 0x28) != 0) &&
         (*(longlong *)(*(longlong *)(engine_context + 0x28) + 0x78) == engine_context)) {
        uVar6 = create_render_object(extraout_XMM0_Qa_02,*(int32_t *)(engine_context + 8),engine_context + 0x40,
                              engine_context + 0x48);
        *(uint64_t *)(engine_context + 0x28) = uVar6;
        render_object = extraout_XMM0_Qa_04;
      }
      lVar5 = *(longlong *)(engine_context + 0x28);
      goto LAB_180130c8e;
    }
    lVar5 = *(longlong *)(engine_context + 0x28);
    if (lVar5 != 0) {
      if ((engine_context == *(longlong *)(lVar5 + 0x78)) && (*(int *)(render_context + 0x1b2c) == iVar10)) {
        render_object = update_render_state(extraout_XMM0_Qa_02,**(uint64_t **)(render_context + 0x1c70));
        lVar5 = *(longlong *)(engine_context + 0x28);
      }
      goto LAB_180130c8e;
    }
LAB_180130c93:
    *(longlong *)(engine_context + 0x28) = render_context;
    lVar5 = render_context;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(engine_context + 0x398) + 0x28);
LAB_180130c8a:
    *(longlong *)(engine_context + 0x28) = lVar5;
LAB_180130c8e:
    if (lVar5 == 0) goto LAB_180130c93;
  }
  if ((render_flags & 0x6000000) == 0) {
    if ((((lVar5 == 0) || (engine_context == *(longlong *)(lVar5 + 0x78))) ||
        (*(longlong *)(lVar5 + 0x78) == 0)) || ((render_flags >> 0x18 & 1) != 0)) {
      if ((*(int *)(engine_context + 0x3c) < iVar10) && ((render_flags >> 0x18 & 1) == 0)) {
        *(int *)(engine_context + 0x3c) = (int)*(short *)(lVar5 + 0x74);
      }
    }
    else {
      if (((*(byte *)(engine_context + 0x432) & 1) == 0) || ((*(byte *)(engine_context + 0x432) & 2) != 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if ((((*(uint *)(engine_context + 0xc) & 0x20000000) == 0) ||
          (*(int *)(render_context + 0x1a90) <= *(int *)(lVar5 + 0x54))) || (!bVar1)) {
        cVar4 = update_render_state(render_object,**(uint64_t **)(render_context + 0x1c70));
        if (cVar4 == '\0') {
          uVar6 = create_render_object(extraout_XMM0_Qa_05,*(int32_t *)(engine_context + 8),engine_context + 0x40,
                                engine_context + 0x48,4);
          *(uint64_t *)(engine_context + 0x28) = uVar6;
        }
      }
      else {
        *(longlong *)(lVar5 + 0x78) = engine_context;
        **(int32_t **)(engine_context + 0x28) = *(int32_t *)(engine_context + 8);
        *(int *)(*(longlong *)(engine_context + 0x28) + 0x60) = iVar10;
      }
    }
    goto LAB_180130e8e;
  }
  if ((render_flags & 0x2000000) == 0) {
    puVar8 = (uint64_t *)
             ((longlong)(*(int *)(render_context + 0x1bc0) + -1) * 0x30 + 0x28 +
             *(longlong *)(render_context + 0x1bc8));
  }
  else {
    puVar8 = (uint64_t *)(render_context + 0x118);
  }
  uVar6 = *puVar8;
  if (((*(char *)(render_context + 0x1d06) == cVar4) && (*(char *)(render_context + 0x1d07) != cVar4)) &&
     (*(ulonglong *)(render_context + 0x1c98) != iterator)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  fStack0000000000000060 = (float)uVar6;
  if ((fStack0000000000000060 < -256000.0) ||
     (fStack0000000000000064 = (float)((ulonglong)uVar6 >> 0x20), fStack0000000000000064 < -256000.0
     )) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((*(char *)(engine_context + 0xb5) == cVar4) && ((render_flags & 0x2000000) == 0)) {
LAB_180130d35:
    *(int *)(engine_context + 0x3c) = (int)*(short *)(*(longlong *)(engine_context + 0x28) + 0x74);
  }
  else {
    if (bVar1) {
      if (!bVar2) goto LAB_180130d35;
      pfVar7 = &stack0x00000060;
      _fStack0000000000000060 = *puVar8;
    }
    else {
      _fStack0000000000000060 = uVar6;
      pfVar7 = (float *)transform_coordinates(&stack0x00000060);
    }
    if (0 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x1600)) {
      pfVar9 = *(float **)(SYSTEM_DATA_MANAGER_A + 0x1608);
      uVar11 = iterator;
      do {
        iVar10 = (int)uVar11;
        if ((((*pfVar9 <= *pfVar7) && (pfVar9[1] <= pfVar7[1])) && (*pfVar7 < *pfVar9 + pfVar9[2]))
           && (pfVar7[1] < pfVar9[1] + pfVar9[3])) goto LAB_180130dd5;
        uVar11 = (ulonglong)(iVar10 + 1);
        iterator = iterator + 1;
        pfVar9 = pfVar9 + 9;
      } while ((longlong)iterator < (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1600));
    }
    iVar10 = -1;
LAB_180130dd5:
    *(int *)(engine_context + 0x3c) = iVar10;
  }
LAB_180130e8e:
  *(bool *)(engine_context + 0xae) =
       engine_context == *(longlong *)(*(int32_t **)(engine_context + 0x28) + 0x1e);
  *(int32_t *)(engine_context + 0x30) = **(int32_t **)(engine_context + 0x28);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 外部函数声明
extern int16_t FUN_180130ec0(uint64_t *param_1);
extern void FUN_18013d860(longlong param_1, uint64_t *param_2);
extern void func_0x000180124d50(longlong param_1, float param_2);
extern uint64_t FUN_18012fe00(uint64_t param_1);
extern int * FUN_18011fd90(int *param_1);
extern int * func_0x000180120ce0(int param_1, uint64_t param_2, int param_3, uint64_t *param_4, longlong param_5);
extern char FUN_18012fbd0(uint64_t param_1, uint64_t param_2);
extern char func_0x00018012fb90(void);
extern longlong func_0x00018012fb00(void);
extern longlong func_0x00018012fb00(int param_1);
extern uint64_t func_0x000180131890(uint64_t *param_1);

// 全局变量
extern longlong SYSTEM_DATA_MANAGER_A;

// 常量定义
#define MAX_RENDER_DISTANCE 256000.0f
#define DEFAULT_RENDER_SCALE 1.0f
#define INVALID_RENDER_INDEX -1

// 简化实现说明：
// 原始实现包含复杂的内存操作和状态管理
// 此处为简化版本，保留了核心功能结构