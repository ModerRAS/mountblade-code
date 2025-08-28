#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part039.c - 3个函数

// 函数：空初始化函数
// 功能：空函数，无实际操作
void initialize_empty(void)

{
  return;
}



// 函数：状态检查函数
// 功能：循环检查特定状态，最多检查16次，返回状态值
undefined1 check_system_status(void)

{
  undefined1 *status_ptr;
  undefined1 status_value;
  longlong index_offset;
  longlong base_ptr;
  int counter;
  longlong array_offset;
  
  do {
    Sleep(0);
    while ((*(char *)(*(longlong *)(base_ptr + 0x1e0) + 0x15 + array_offset) != '\x02' &&
           (*(char *)(*(longlong *)(base_ptr + 0x1e0) + 0x15 + array_offset) != '\x01'))) {
      index_offset = (longlong)counter;
      array_offset = array_offset + 0x18;
      counter = counter + 1;
      LOCK();
      status_ptr = (undefined1 *)(*(longlong *)(base_ptr + 0x1e0) + index_offset * 0x18 + 0x15);
      status_value = *status_ptr;
      *status_ptr = 0;
      UNLOCK();
      if (0xf < counter) {
        return status_value;
      }
    }
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x000180079699)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数：边界框计算函数
// 功能：计算并更新3D对象的边界框，包括最小最大坐标和中心点计算
float * calculate_bounding_box(float *object_ptr)

{
  float *min_bounds_ptr;
  byte byte_flag;
  longlong *mesh_ptr;
  float *transform_ptr;
  char lock_status;
  float time_value;
  float *current_vertex;
  uint vertex_count;
  ulonglong remaining_vertices;
  bool bool_flag;
  float max_distance;
  float stack_temp_b8;
  float stack_temp_b4;
  float stack_temp_b0;
  undefined4 stack_temp_ac;
  float stack_temp_a8;
  float stack_temp_a4;
  float stack_temp_a0;
  undefined4 stack_temp_9c;
  float *mesh_data_ptr;
  undefined4 stack_temp_90;
  longlong stack_temp_88;
  undefined8 stack_temp_80;
  undefined8 stack_temp_78;
  undefined8 stack_temp_70;
  undefined8 stack_temp_68;
  undefined8 stack_temp_60;
  undefined *stack_temp_58;
  float stack_temp_50;
  float stack_temp_4c;
  undefined *stack_temp_48;
  undefined8 stack_temp_40;
  undefined8 stack_temp_38;
  undefined1 stack_temp_30 [8];
  float *vertex_array_ptr;
  undefined4 stack_temp_20;
  
  uStack_38 = 0xfffffffffffffffe;
  if (((uint)param_1[0x40] & 0x10000) == 0) {
    auStack_30[0] = 0;
    uStack_20 = 0;
    uStack_80 = 0x1800795fa;
    pfStack_28 = param_1;
    FUN_18007f4c0(auStack_30);
    uStack_80 = 0x180079605;
    fVar6 = (float)FUN_1802349a0(0);
    if ((10 < (int)fVar6) ||
       ((int)(*(int *)(*(longlong *)(param_1 + 0x84) + 0x88) +
             (*(int *)(*(longlong *)(param_1 + 0x84) + 0x88) >> 0x1f & 3U)) >> 2 < (int)fVar6)) {
      puStack_48 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 6) != (undefined *)0x0) {
        puStack_48 = *(undefined **)(param_1 + 6);
      }
      uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 0x84) + 0x60));
      puStack_58 = &UNK_1809ffb30;
      uStack_80 = 0x18007967a;
      fStack_50 = fVar6;
      FUN_1800623b0(_DAT_180c86928,0,0x80000000000,3);
    }
    param_1[0x40] = (float)((uint)param_1[0x40] | 0x10000);
    uStack_80 = 0x18007968e;
    FUN_18007f6a0(auStack_30);
  }
  uStack_38 = 0xfffffffffffffffe;
  pfVar7 = param_1;
  if ((*(byte *)((longlong)param_1 + 0xfd) & 0x20) == 0) {
    pfVar7 = (float *)func_0x000180085de0(*(undefined8 *)(param_1 + 0x6c));
  }
  if ((*(longlong *)(pfVar7 + 0x84) != 0) && (((uint)param_1[0x40] & 0x80) == 0)) {
    pfVar1 = param_1 + 0x9d;
    pfVar1[0] = 1e+08;
    pfVar1[1] = 1e+08;
    param_1[0x9f] = 1e+08;
    param_1[0xa0] = 3.4028235e+38;
    param_1[0xa1] = -1e+08;
    param_1[0xa2] = -1e+08;
    param_1[0xa3] = -1e+08;
    param_1[0xa4] = 3.4028235e+38;
    uVar8 = 0;
    param_1[0xa9] = 0.0;
    param_1[0xa5] = 0.0;
    param_1[0xa6] = 0.0;
    param_1[0xa7] = 0.0;
    param_1[0xa8] = 3.4028235e+38;
    uStack_90 = 0;
    pfStack_98 = pfVar7;
    FUN_18007f770(&pfStack_98);
    if (*(int *)(lStack_88 + 0x10) != 0) {
      do {
        pfVar7 = (float *)((longlong)(int)uVar8 * 0x10 + *(longlong *)(lStack_88 + 0x18));
        fStack_a8 = *pfVar7;
        if (*pfVar1 < fStack_a8) {
          fStack_a8 = *pfVar1;
        }
        fStack_a4 = pfVar7[1];
        if (param_1[0x9e] < fStack_a4) {
          fStack_a4 = param_1[0x9e];
        }
        fStack_a0 = pfVar7[2];
        if (param_1[0x9f] < fStack_a0) {
          fStack_a0 = param_1[0x9f];
        }
        *(ulonglong *)pfVar1 = CONCAT44(fStack_a4,fStack_a8);
        *(ulonglong *)(param_1 + 0x9f) = CONCAT44(uStack_9c,fStack_a0);
        fStack_b8 = *pfVar7;
        if (fStack_b8 < param_1[0xa1]) {
          fStack_b8 = param_1[0xa1];
        }
        fStack_b4 = pfVar7[1];
        if (fStack_b4 < param_1[0xa2]) {
          fStack_b4 = param_1[0xa2];
        }
        fStack_b0 = pfVar7[2];
        if (fStack_b0 < param_1[0xa3]) {
          fStack_b0 = param_1[0xa3];
        }
        *(ulonglong *)(param_1 + 0xa1) = CONCAT44(fStack_b4,fStack_b8);
        *(ulonglong *)(param_1 + 0xa3) = CONCAT44(uStack_ac,fStack_b0);
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(lStack_88 + 0x10));
    }
    pfVar7 = *(float **)(param_1 + 0x6e);
    if ((pfVar7 != (float *)0x0) && (((uint)pfVar7[0x4e] & 0x3000) != 0)) {
      uStack_78 = *(undefined8 *)(param_1 + 0x48);
      uStack_70 = *(undefined8 *)(param_1 + 0x4a);
      uStack_68 = *(undefined8 *)(param_1 + 0x4c);
      uStack_60 = *(undefined8 *)(param_1 + 0x4e);
      puStack_58 = *(undefined **)(param_1 + 0x50);
      fStack_50 = param_1[0x52];
      fStack_4c = param_1[0x53];
      puStack_48 = *(undefined **)(param_1 + 0x54);
      uStack_40 = *(undefined8 *)(param_1 + 0x56);
      FUN_180085c10(&uStack_78);
      FUN_18063a240(pfVar1,pfVar1,&uStack_78);
      pfVar7 = *(float **)(param_1 + 0x6e);
      if (((uint)pfVar7[0x4e] & 0x3000) == 0x2000) {
        uStack_78 = *(undefined8 *)(param_1 + 0x48);
        uStack_70 = *(undefined8 *)(param_1 + 0x4a);
        uStack_68 = *(undefined8 *)(param_1 + 0x4c);
        uStack_60 = *(undefined8 *)(param_1 + 0x4e);
        puStack_58 = *(undefined **)(param_1 + 0x50);
        fStack_50 = param_1[0x52];
        fStack_4c = param_1[0x53];
        puStack_48 = *(undefined **)(param_1 + 0x54);
        uStack_40 = *(undefined8 *)(param_1 + 0x56);
        FUN_180085ac0(&uStack_78,0x3fc90fdb);
        FUN_18063a240(pfVar1,pfVar1,&uStack_78);
        uStack_78 = *(undefined8 *)(param_1 + 0x48);
        uStack_70 = *(undefined8 *)(param_1 + 0x4a);
        uStack_68 = *(undefined8 *)(param_1 + 0x4c);
        uStack_60 = *(undefined8 *)(param_1 + 0x4e);
        puStack_58 = *(undefined **)(param_1 + 0x50);
        fStack_50 = param_1[0x52];
        fStack_4c = param_1[0x53];
        puStack_48 = *(undefined **)(param_1 + 0x54);
        uStack_40 = *(undefined8 *)(param_1 + 0x56);
        FUN_180085970(&uStack_78);
        pfVar7 = (float *)FUN_18063a240(pfVar1,pfVar1,&uStack_78);
      }
    }
    pfVar4 = pfStack_98;
    if (param_1[0xa1] < *pfVar1) {
      param_1[0xa9] = 0.0;
      pfVar1[0] = 0.0;
      pfVar1[1] = 0.0;
      param_1[0x9f] = 0.0;
      param_1[0xa0] = 0.0;
      param_1[0xa1] = 0.0;
      param_1[0xa2] = 0.0;
      param_1[0xa3] = 0.0;
      param_1[0xa4] = 0.0;
      param_1[0xa5] = 0.0;
      param_1[0xa6] = 0.0;
      param_1[0xa7] = 0.0;
      param_1[0xa8] = 0.0;
    }
    else {
      param_1[0xa5] = (param_1[0xa1] + *pfVar1) * 0.5;
      param_1[0xa6] = (param_1[0xa2] + param_1[0x9e]) * 0.5;
      param_1[0xa7] = (param_1[0xa3] + param_1[0x9f]) * 0.5;
      param_1[0xa8] = 3.4028235e+38;
      fVar6 = 0.0;
      uVar9 = (ulonglong)*(uint *)(lStack_88 + 0x10);
      if (0 < (int)*(uint *)(lStack_88 + 0x10)) {
        pfVar7 = *(float **)(lStack_88 + 0x18);
        fVar11 = fVar6;
        do {
          fVar6 = (*pfVar7 - param_1[0xa5]) * (*pfVar7 - param_1[0xa5]) +
                  (pfVar7[1] - param_1[0xa6]) * (pfVar7[1] - param_1[0xa6]) +
                  (pfVar7[2] - param_1[0xa7]) * (pfVar7[2] - param_1[0xa7]);
          if (fVar6 <= fVar11) {
            fVar6 = fVar11;
          }
          pfVar7 = pfVar7 + 4;
          uVar9 = uVar9 - 1;
          fVar11 = fVar6;
        } while (uVar9 != 0);
      }
      param_1[0xa9] = SQRT(fVar6);
    }
    if (pfStack_98 != (float *)0x0) {
      while( true ) {
        LOCK();
        cVar5 = *(char *)(pfVar4 + 0x3b);
        bVar10 = cVar5 == '\0';
        if (bVar10) {
          *(char *)(pfVar4 + 0x3b) = '\x01';
          cVar5 = '\0';
        }
        UNLOCK();
        if (bVar10) break;
        fVar6 = (float)_Thrd_id();
        if ((pfVar4[0x3c] == fVar6) || (pfVar4[0x3c] != 0.0)) goto LAB_180075f4f;
        Sleep();
      }
      cVar5 = '\0';
LAB_180075f4f:
      LOCK();
      pfVar1 = pfVar4 + 0x3a;
      fVar6 = *pfVar1;
      pfVar7 = (float *)(ulonglong)(uint)fVar6;
      *pfVar1 = (float)((int)*pfVar1 + -1);
      UNLOCK();
      if (cVar5 == '\0') {
        if ((((fVar6 == 1.4013e-45) && (*(longlong *)(pfStack_98 + 0x84) != 0)) &&
            (pfVar7 = pfStack_98, FUN_1800791a0(pfStack_98), *(char *)(pfVar7 + 0x3f) == '\0')) &&
           ((*(char *)(pfVar7 + 0x3d) == '\0' &&
            (((*(byte *)((longlong)pfVar7 + 0xfd) & 0x20) == 0 ||
             ((*(byte *)((longlong)pfVar7 + 0xfe) & 1) == 0)))))) {
          plVar3 = *(longlong **)(pfVar7 + 0x84);
          pfVar7[0x84] = 0.0;
          pfVar7[0x85] = 0.0;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x38))();
          }
        }
        LOCK();
        bVar2 = *(byte *)(pfVar4 + 0x3b);
        *(byte *)(pfVar4 + 0x3b) = 0;
        pfVar7 = (float *)(ulonglong)bVar2;
        UNLOCK();
      }
    }
  }
  return pfVar7;
}



// WARNING: Removing unreachable block (ram,0x0001800797c0)
// WARNING: Removing unreachable block (ram,0x0001800797c8)
// WARNING: Removing unreachable block (ram,0x0001800797cd)
// WARNING: Removing unreachable block (ram,0x0001800797dd)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



