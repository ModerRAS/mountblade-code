#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part210.c - 3 个函数

// 函数: void FUN_18018cef0(int64_t param_1,int64_t param_2,int64_t param_3,int param_4)
// 处理大气效果相关的参数验证和错误处理
void process_atmosphere_parameters(int64_t atmosphere_system, int64_t param_2, int64_t param_3, int param_4)

{
  byte *byte_ptr1;
  int int_var1;
  int64_t long_var1;
  int32_t uint_var1;
  int32_t uint_var2;
  int32_t uint_var3;
  uint64_t ulong_var1;
  char *char_ptr1;
  byte *byte_ptr2;
  uint64_t *ulong_ptr1;
  uint64_t *ulong_ptr2;
  int32_t *uint_ptr1;
  int8_t *byte_ptr3;
  char *char_ptr2;
  int64_t long_var2;
  int int_var2;
  int64_t long_var3;
  char *char_ptr3;
  uint64_t ulong_var2;
  int64_t long_var4;
  uint uint_var4;
  char *char_ptr4;
  int8_t local_array1[16];
  int64_t local_long1;
  int local_int1;
  int local_int2;
  int8_t local_array2[8];
  int64_t local_long2;
  uint local_uint1;
  int32_t local_uint2;
  char *char_ptr5;
  char *char_ptr6;
  
  char_ptr5 = (char *)0x0;
  char_ptr6 = "atmosphere";
  do {
    char_ptr4 = char_ptr6;
    char_ptr6 = char_ptr4 + 1;
  } while (*char_ptr6 != '\0');
  for (char_ptr6 = *(char **)(param_2 + 0x30); char_ptr3 = char_ptr5, char_ptr6 != (char *)0x0;
      char_ptr6 = *(char **)(char_ptr6 + 0x58)) {
    char_ptr1 = *(char **)char_ptr6;
    if (char_ptr1 == (char *)0x0) {
      char_ptr1 = (char *)0x180d48d24;
      char_ptr2 = char_ptr5;
    }
    else {
      char_ptr2 = *(char **)(char_ptr6 + 0x10);
    }
    if (char_ptr2 == char_ptr4 + -0x180a0ae9f) {
      char_ptr2 = char_ptr1 + (int64_t)char_ptr2;
      char_ptr3 = char_ptr6;
      if (char_ptr2 <= char_ptr1) break;
      long_var3 = (int64_t)&system_ptr_aea0 - (int64_t)char_ptr1;
      while (*char_ptr1 == char_ptr1[long_var3]) {
        char_ptr1 = char_ptr1 + 1;
        if (char_ptr2 <= char_ptr1) goto LAB_18018cfa6;
      }
    }
  }
LAB_18018cfa6:
  FUN_180142b20(local_array1);
  local_uint1 = *(uint *)(param_3 + 0x10);
  ulong_var2 = (uint64_t)local_uint1;
  if (*(int64_t *)(param_3 + 8) != 0) {
    FUN_1806277c0(local_array2,ulong_var2);
  }
  if (local_uint1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(local_long2,*(uint64_t *)(param_3 + 8),ulong_var2);
  }
  if (local_long2 != 0) {
    *(int8_t *)(ulong_var2 + local_long2) = 0;
  }
  local_uint2 = *(int32_t *)(param_3 + 0x1c);
  FUN_180143610(local_array1,char_ptr3);
  long_var3 = *(int64_t *)(param_1 + 0x3a0);
  long_var1 = *(int64_t *)(param_1 + 0x3a8) - long_var3;
  long_var1 = long_var1 >> 0x3f;
  long_var1 = long_var1 / 0x348 + long_var1;
  char_ptr6 = char_ptr5;
  local_int2 = param_4;
  if (long_var1 != long_var1) {
    do {
      int_var1 = *(int *)(char_ptr6 + long_var3 + 0x18);
      int_var2 = local_int1;
      if (int_var1 == local_int1) {
        if (int_var1 != 0) {
          byte_ptr2 = *(byte **)(char_ptr6 + long_var3 + 0x10);
          long_var4 = local_long1 - (int64_t)byte_ptr2;
          do {
            byte_ptr1 = byte_ptr2 + long_var4;
            int_var2 = (uint)*byte_ptr2 - (uint)*byte_ptr1;
            if (int_var2 != 0) break;
            byte_ptr2 = byte_ptr2 + 1;
          } while (*byte_ptr1 != 0);
        }
LAB_18018d08e:
        if (int_var2 == 0) {
          if ((int64_t)(int)char_ptr5 * 0x348 + long_var3 != 0) {
            if ((param_4 < 0) ||
               ((uint64_t)
                (*(int64_t *)(*system_main_module_state + 0x890) - *(int64_t *)(*system_main_module_state + 0x888) >>
                5) <= (uint64_t)(int64_t)param_4)) {
              FUN_180628ca0();
            }
            ulong_ptr1 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x36,0x13);
            *(int8_t *)ulong_ptr1 = 0;
            FUN_18064e990(ulong_ptr1);
            *ulong_ptr1 = 0x6576616820756f59;
            ulong_ptr1[1] = 0x68742065726f6d20;
            *(int32_t *)(ulong_ptr1 + 2) = 0x6f206e61;
            *(int32_t *)((int64_t)ulong_ptr1 + 0x14) = 0x6120656e;
            *(int32_t *)(ulong_ptr1 + 3) = 0x736f6d74;
            *(int32_t *)((int64_t)ulong_ptr1 + 0x1c) = 0x72656870;
            *(int32_t *)(ulong_ptr1 + 4) = 0x69662065;
            *(int32_t *)((int64_t)ulong_ptr1 + 0x24) = 0x2073656c;
            *(int32_t *)(ulong_ptr1 + 5) = 0x69766168;
            *(int32_t *)((int64_t)ulong_ptr1 + 0x2c) = 0x6e20676e;
            *(int32_t *)(ulong_ptr1 + 6) = 0x20656d61;
            *(int16_t *)((int64_t)ulong_ptr1 + 0x34) = 0x22;
            ulong_ptr2 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x36,0x13);
            *(int8_t *)ulong_ptr2 = 0;
            uint_var4 = FUN_18064e990(ulong_ptr2);
            ulong_var1 = ulong_ptr1[1];
            *ulong_ptr2 = *ulong_ptr1;
            ulong_ptr2[1] = ulong_var1;
            uint_var1 = *(int32_t *)((int64_t)ulong_ptr1 + 0x14);
            uint_var2 = *(int32_t *)(ulong_ptr1 + 3);
            uint_var3 = *(int32_t *)((int64_t)ulong_ptr1 + 0x1c);
            *(int32_t *)(ulong_ptr2 + 2) = *(int32_t *)(ulong_ptr1 + 2);
            *(int32_t *)((int64_t)ulong_ptr2 + 0x14) = uint_var1;
            *(int32_t *)(ulong_ptr2 + 3) = uint_var2;
            *(int32_t *)((int64_t)ulong_ptr2 + 0x1c) = uint_var3;
            uint_var1 = *(int32_t *)((int64_t)ulong_ptr1 + 0x24);
            uint_var2 = *(int32_t *)(ulong_ptr1 + 5);
            uint_var3 = *(int32_t *)((int64_t)ulong_ptr1 + 0x2c);
            *(int32_t *)(ulong_ptr2 + 4) = *(int32_t *)(ulong_ptr1 + 4);
            *(int32_t *)((int64_t)ulong_ptr2 + 0x24) = uint_var1;
            *(int32_t *)(ulong_ptr2 + 5) = uint_var2;
            *(int32_t *)((int64_t)ulong_ptr2 + 0x2c) = uint_var3;
            *(int32_t *)(ulong_ptr2 + 6) = *(int32_t *)(ulong_ptr1 + 6);
            *(int8_t *)((int64_t)ulong_ptr2 + 0x34) = *(int8_t *)((int64_t)ulong_ptr1 + 0x34);
            *(int8_t *)((int64_t)ulong_ptr2 + 0x35) = 0;
            if (local_int1 < 1) {
              uint_ptr1 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x1e,0x13,0x10);
              *(int8_t *)uint_ptr1 = 0;
              FUN_18064e990(uint_ptr1);
              *uint_ptr1 = 0x54202e22;
              uint_ptr1[1] = 0x61206568;
              uint_ptr1[2] = 0x736f6d74;
              uint_ptr1[3] = 0x72656870;
              *(uint64_t *)(uint_ptr1 + 4) = 0x646f6d2074612065;
              uint_ptr1[6] = 0x20656c75;
              *(int16_t *)(uint_ptr1 + 7) = 0x22;
              byte_ptr3 = (int8_t *)0x0;
              if (ulong_ptr2 != (uint64_t *)0x0) {
                byte_ptr3 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,0x36,0x13);
                *byte_ptr3 = 0;
                FUN_18064e990(byte_ptr3);
              }
                    // WARNING: Subroutine does not return
              memcpy(byte_ptr3,ulong_ptr2,0x35);
            }
            if ((local_int1 != -0x35) && (uint_var4 < local_int1 + 0x36U)) {
              ulong_ptr2 = (uint64_t *)
                        FUN_18062b8b0(system_memory_pool_ptr,ulong_ptr2,local_int1 + 0x36U,0x10,0x13);
              FUN_18064e990(ulong_ptr2);
            }
                    // WARNING: Subroutine does not return
            memcpy((int8_t *)((int64_t)ulong_ptr2 + 0x35),local_long1,(int64_t)(local_int1 + 1));
          }
          break;
        }
      }
      else if (int_var1 == 0) goto LAB_18018d08e;
      uint_var4 = (int)char_ptr5 + 1;
      char_ptr5 = (char *)(uint64_t)uint_var4;
      char_ptr6 = char_ptr6 + 0x348;
    } while ((uint64_t)(int64_t)(int)uint_var4 < (uint64_t)(long_var1 - long_var1));
  }
  FUN_180190630(param_1 + 0x3a0,local_array1);
  FUN_1801431d0(local_array1);
  return;
}



// 函数: int64_t FUN_18018d8f0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
// 复制场景对象数据，包括材质、纹理、变换矩阵等属性
int64_t copy_scene_object_data(int64_t dest_object, int64_t src_object, uint64_t param_3, uint64_t param_4)

{
  int64_t *long_ptr1;
  int64_t *long_ptr2;
  int32_t uint_var1;
  int32_t uint_var2;
  int32_t uint_var3;
  uint64_t ulong_var1;
  
  ulong_var1 = 0xfffffffffffffffe;
  FUN_180627be0(dest_object + 8,src_object + 8,param_3,param_4,0xfffffffffffffffe);
  *(int32_t *)(dest_object + 0x28) = *(int32_t *)(src_object + 0x28);
  *(int32_t *)(dest_object + 0x2c) = *(int32_t *)(src_object + 0x2c);
  *(int32_t *)(dest_object + 0x30) = *(int32_t *)(src_object + 0x30);
  *(int32_t *)(dest_object + 0x34) = *(int32_t *)(src_object + 0x34);
  *(int32_t *)(dest_object + 0x38) = *(int32_t *)(src_object + 0x38);
  *(int32_t *)(dest_object + 0x3c) = *(int32_t *)(src_object + 0x3c);
  *(int32_t *)(dest_object + 0x40) = *(int32_t *)(src_object + 0x40);
  FUN_180627be0(dest_object + 0x48,src_object + 0x48);
  long_ptr1 = *(int64_t **)(src_object + 0x68);
  if (long_ptr1 != (int64_t *)0x0) {
    (**(code **)(*long_ptr1 + 0x28))(long_ptr1);
  }
  long_ptr2 = *(int64_t **)(dest_object + 0x68);
  *(int64_t **)(dest_object + 0x68) = long_ptr1;
  if (long_ptr2 != (int64_t *)0x0) {
    (**(code **)(*long_ptr2 + 0x38))();
  }
  FUN_180627be0(dest_object + 0x70,src_object + 0x70,param_3,param_4,ulong_var1);
  long_ptr1 = *(int64_t **)(src_object + 0x90);
  if (long_ptr1 != (int64_t *)0x0) {
    (**(code **)(*long_ptr1 + 0x28))(long_ptr1);
  }
  long_ptr2 = *(int64_t **)(dest_object + 0x90);
  *(int64_t **)(dest_object + 0x90) = long_ptr1;
  if (long_ptr2 != (int64_t *)0x0) {
    (**(code **)(*long_ptr2 + 0x38))();
  }
  *(int32_t *)(dest_object + 0x98) = *(int32_t *)(src_object + 0x98);
  *(int32_t *)(dest_object + 0x9c) = *(int32_t *)(src_object + 0x9c);
  *(int32_t *)(dest_object + 0xa0) = *(int32_t *)(src_object + 0xa0);
  *(int32_t *)(dest_object + 0xa4) = *(int32_t *)(src_object + 0xa4);
  *(int32_t *)(dest_object + 0xa8) = *(int32_t *)(src_object + 0xa8);
  *(int32_t *)(dest_object + 0xac) = *(int32_t *)(src_object + 0xac);
  *(int32_t *)(dest_object + 0xb0) = *(int32_t *)(src_object + 0xb0);
  *(int32_t *)(dest_object + 0xb4) = *(int32_t *)(src_object + 0xb4);
  *(int32_t *)(dest_object + 0xb8) = *(int32_t *)(src_object + 0xb8);
  *(int32_t *)(dest_object + 0xbc) = *(int32_t *)(src_object + 0xbc);
  *(int32_t *)(dest_object + 0xc0) = *(int32_t *)(src_object + 0xc0);
  ulong_var1 = *(uint64_t *)(src_object + 0xcc);
  *(uint64_t *)(dest_object + 0xc4) = *(uint64_t *)(src_object + 0xc4);
  *(uint64_t *)(dest_object + 0xcc) = ulong_var1;
  ulong_var1 = *(uint64_t *)(src_object + 0xdc);
  *(uint64_t *)(dest_object + 0xd4) = *(uint64_t *)(src_object + 0xd4);
  *(uint64_t *)(dest_object + 0xdc) = ulong_var1;
  ulong_var1 = *(uint64_t *)(src_object + 0xec);
  *(uint64_t *)(dest_object + 0xe4) = *(uint64_t *)(src_object + 0xe4);
  *(uint64_t *)(dest_object + 0xec) = ulong_var1;
  ulong_var1 = *(uint64_t *)(src_object + 0xfc);
  *(uint64_t *)(dest_object + 0xf4) = *(uint64_t *)(src_object + 0xf4);
  *(uint64_t *)(dest_object + 0xfc) = ulong_var1;
  uint_var1 = *(int32_t *)(src_object + 0x108);
  uint_var2 = *(int32_t *)(src_object + 0x10c);
  uint_var3 = *(int32_t *)(src_object + 0x110);
  *(int32_t *)(dest_object + 0x104) = *(int32_t *)(src_object + 0x104);
  *(int32_t *)(dest_object + 0x108) = uint_var1;
  *(int32_t *)(dest_object + 0x10c) = uint_var2;
  *(int32_t *)(dest_object + 0x110) = uint_var3;
  *(int32_t *)(dest_object + 0x114) = *(int32_t *)(src_object + 0x114);
  *(int32_t *)(dest_object + 0x118) = *(int32_t *)(src_object + 0x118);
  *(int32_t *)(dest_object + 0x11c) = *(int32_t *)(src_object + 0x11c);
  *(int32_t *)(dest_object + 0x120) = *(int32_t *)(src_object + 0x120);
  *(int32_t *)(dest_object + 0x124) = *(int32_t *)(src_object + 0x124);
  *(int32_t *)(dest_object + 0x128) = *(int32_t *)(src_object + 0x128);
  *(int32_t *)(dest_object + 300) = *(int32_t *)(src_object + 300);
  FUN_180627be0(dest_object + 0x130,src_object + 0x130);
  long_ptr1 = *(int64_t **)(src_object + 0x150);
  if (long_ptr1 != (int64_t *)0x0) {
    (**(code **)(*long_ptr1 + 0x28))(long_ptr1);
  }
  long_ptr2 = *(int64_t **)(dest_object + 0x150);
  *(int64_t **)(dest_object + 0x150) = long_ptr1;
  if (long_ptr2 != (int64_t *)0x0) {
    (**(code **)(*long_ptr2 + 0x38))();
  }
  FUN_180627be0(dest_object + 0x158,src_object + 0x158);
  long_ptr1 = *(int64_t **)(src_object + 0x178);
  if (long_ptr1 != (int64_t *)0x0) {
    (**(code **)(*long_ptr1 + 0x28))(long_ptr1);
  }
  long_ptr2 = *(int64_t **)(dest_object + 0x178);
  *(int64_t **)(dest_object + 0x178) = long_ptr1;
  if (long_ptr2 != (int64_t *)0x0) {
    (**(code **)(*long_ptr2 + 0x38))();
  }
  *(int32_t *)(dest_object + 0x180) = *(int32_t *)(src_object + 0x180);
  FUN_180627be0(dest_object + 0x188,src_object + 0x188);
  long_ptr1 = *(int64_t **)(src_object + 0x1a8);
  if (long_ptr1 != (int64_t *)0x0) {
    (**(code **)(*long_ptr1 + 0x28))(long_ptr1);
  }
  long_ptr2 = *(int64_t **)(dest_object + 0x1a8);
  *(int64_t **)(dest_object + 0x1a8) = long_ptr1;
  if (long_ptr2 != (int64_t *)0x0) {
    (**(code **)(*long_ptr2 + 0x38))();
  }
  long_ptr1 = *(int64_t **)(src_object + 0x1b0);
  if (long_ptr1 != (int64_t *)0x0) {
    (**(code **)(*long_ptr1 + 0x28))(long_ptr1);
  }
  long_ptr2 = *(int64_t **)(dest_object + 0x1b0);
  *(int64_t **)(dest_object + 0x1b0) = long_ptr1;
  if (long_ptr2 != (int64_t *)0x0) {
    (**(code **)(*long_ptr2 + 0x38))();
  }
  *(int32_t *)(dest_object + 0x1b8) = *(int32_t *)(src_object + 0x1b8);
  *(int32_t *)(dest_object + 0x1bc) = *(int32_t *)(src_object + 0x1bc);
  uint_var1 = *(int32_t *)(src_object + 0x1c4);
  uint_var2 = *(int32_t *)(src_object + 0x1c8);
  uint_var3 = *(int32_t *)(src_object + 0x1cc);
  *(int32_t *)(dest_object + 0x1c0) = *(int32_t *)(src_object + 0x1c0);
  *(int32_t *)(dest_object + 0x1c4) = uint_var1;
  *(int32_t *)(dest_object + 0x1c8) = uint_var2;
  *(int32_t *)(dest_object + 0x1cc) = uint_var3;
  *(int32_t *)(dest_object + 0x1d0) = *(int32_t *)(src_object + 0x1d0);
  *(int32_t *)(dest_object + 0x1d4) = *(int32_t *)(src_object + 0x1d4);
  *(int32_t *)(dest_object + 0x1d8) = *(int32_t *)(src_object + 0x1d8);
  *(int32_t *)(dest_object + 0x1dc) = *(int32_t *)(src_object + 0x1dc);
  *(int32_t *)(dest_object + 0x1e0) = *(int32_t *)(src_object + 0x1e0);
  *(int32_t *)(dest_object + 0x1e4) = *(int32_t *)(src_object + 0x1e4);
  *(int32_t *)(dest_object + 0x1e8) = *(int32_t *)(src_object + 0x1e8);
  *(int32_t *)(dest_object + 0x1ec) = *(int32_t *)(src_object + 0x1ec);
  *(int32_t *)(dest_object + 0x1f0) = *(int32_t *)(src_object + 0x1f0);
  *(int32_t *)(dest_object + 500) = *(int32_t *)(src_object + 500);
  *(int32_t *)(dest_object + 0x1f8) = *(int32_t *)(src_object + 0x1f8);
  *(int32_t *)(dest_object + 0x1fc) = *(int32_t *)(src_object + 0x1fc);
  *(int32_t *)(dest_object + 0x200) = *(int32_t *)(src_object + 0x200);
  *(int32_t *)(dest_object + 0x204) = *(int32_t *)(src_object + 0x204);
  *(int32_t *)(dest_object + 0x208) = *(int32_t *)(src_object + 0x208);
  *(int32_t *)(dest_object + 0x20c) = *(int32_t *)(src_object + 0x20c);
  *(int32_t *)(dest_object + 0x210) = *(int32_t *)(src_object + 0x210);
  *(int32_t *)(dest_object + 0x214) = *(int32_t *)(src_object + 0x214);
  *(int32_t *)(dest_object + 0x218) = *(int32_t *)(src_object + 0x218);
  *(int32_t *)(dest_object + 0x21c) = *(int32_t *)(src_object + 0x21c);
  *(int32_t *)(dest_object + 0x220) = *(int32_t *)(src_object + 0x220);
  *(int32_t *)(dest_object + 0x224) = *(int32_t *)(src_object + 0x224);
  *(int32_t *)(dest_object + 0x228) = *(int32_t *)(src_object + 0x228);
  *(int32_t *)(dest_object + 0x22c) = *(int32_t *)(src_object + 0x22c);
  *(int32_t *)(dest_object + 0x230) = *(int32_t *)(src_object + 0x230);
  *(int32_t *)(dest_object + 0x234) = *(int32_t *)(src_object + 0x234);
  FUN_180627be0(dest_object + 0x238,src_object + 0x238);
  long_ptr1 = *(int64_t **)(src_object + 600);
  if (long_ptr1 != (int64_t *)0x0) {
    (**(code **)(*long_ptr1 + 0x28))(long_ptr1);
  }
  long_ptr2 = *(int64_t **)(dest_object + 600);
  *(int64_t **)(dest_object + 600) = long_ptr1;
  if (long_ptr2 != (int64_t *)0x0) {
    (**(code **)(*long_ptr2 + 0x38))();
  }
  FUN_180627be0(dest_object + 0x260,src_object + 0x260);
  long_ptr1 = *(int64_t **)(src_object + 0x280);
  if (long_ptr1 != (int64_t *)0x0) {
    (**(code **)(*long_ptr1 + 0x28))(long_ptr1);
  }
  long_ptr2 = *(int64_t **)(dest_object + 0x280);
  *(int64_t **)(dest_object + 0x280) = long_ptr1;
  if (long_ptr2 != (int64_t *)0x0) {
    (**(code **)(*long_ptr2 + 0x38))();
  }
  *(int32_t *)(dest_object + 0x288) = *(int32_t *)(src_object + 0x288);
  *(int32_t *)(dest_object + 0x28c) = *(int32_t *)(src_object + 0x28c);
  *(int32_t *)(dest_object + 0x290) = *(int32_t *)(src_object + 0x290);
  *(int32_t *)(dest_object + 0x294) = *(int32_t *)(src_object + 0x294);
  *(int32_t *)(dest_object + 0x298) = *(int32_t *)(src_object + 0x298);
  uint_var1 = *(int32_t *)(src_object + 0x2a0);
  uint_var2 = *(int32_t *)(src_object + 0x2a4);
  uint_var3 = *(int32_t *)(src_object + 0x2a8);
  *(int32_t *)(dest_object + 0x29c) = *(int32_t *)(src_object + 0x29c);
  *(int32_t *)(dest_object + 0x2a0) = uint_var1;
  *(int32_t *)(dest_object + 0x2a4) = uint_var2;
  *(int32_t *)(dest_object + 0x2a8) = uint_var3;
  *(int32_t *)(dest_object + 0x2ac) = *(int32_t *)(src_object + 0x2ac);
  *(int32_t *)(dest_object + 0x2b0) = *(int32_t *)(src_object + 0x2b0);
  *(int32_t *)(dest_object + 0x2b4) = *(int32_t *)(src_object + 0x2b4);
  *(int32_t *)(dest_object + 0x2b8) = *(int32_t *)(src_object + 0x2b8);
  *(int32_t *)(dest_object + 700) = *(int32_t *)(src_object + 700);
  *(int32_t *)(dest_object + 0x2c0) = *(int32_t *)(src_object + 0x2c0);
  *(int32_t *)(dest_object + 0x2c4) = *(int32_t *)(src_object + 0x2c4);
  *(int32_t *)(dest_object + 0x2c8) = *(int32_t *)(src_object + 0x2c8);
  *(int32_t *)(dest_object + 0x2cc) = *(int32_t *)(src_object + 0x2cc);
  *(int32_t *)(dest_object + 0x2d0) = *(int32_t *)(src_object + 0x2d0);
  *(int32_t *)(dest_object + 0x2d4) = *(int32_t *)(src_object + 0x2d4);
  *(int32_t *)(dest_object + 0x2d8) = *(int32_t *)(src_object + 0x2d8);
  *(int32_t *)(dest_object + 0x2dc) = *(int32_t *)(src_object + 0x2dc);
  *(int32_t *)(dest_object + 0x2e0) = *(int32_t *)(src_object + 0x2e0);
  *(int32_t *)(dest_object + 0x2e4) = *(int32_t *)(src_object + 0x2e4);
  *(int32_t *)(dest_object + 0x2e8) = *(int32_t *)(src_object + 0x2e8);
  *(int32_t *)(dest_object + 0x2ec) = *(int32_t *)(src_object + 0x2ec);
  *(int32_t *)(dest_object + 0x2f0) = *(int32_t *)(src_object + 0x2f0);
  *(int32_t *)(dest_object + 0x2f4) = *(int32_t *)(src_object + 0x2f4);
  *(int32_t *)(dest_object + 0x2f8) = *(int32_t *)(src_object + 0x2f8);
  *(int32_t *)(dest_object + 0x2fc) = *(int32_t *)(src_object + 0x2fc);
  *(int32_t *)(dest_object + 0x300) = *(int32_t *)(src_object + 0x300);
  *(int8_t *)(dest_object + 0x304) = *(int8_t *)(src_object + 0x304);
  *(int8_t *)(dest_object + 0x305) = *(int8_t *)(src_object + 0x305);
  *(int8_t *)(dest_object + 0x306) = *(int8_t *)(src_object + 0x306);
  *(int32_t *)(dest_object + 0x308) = *(int32_t *)(src_object + 0x308);
  *(int32_t *)(dest_object + 0x30c) = *(int32_t *)(src_object + 0x30c);
  *(int32_t *)(dest_object + 0x310) = *(int32_t *)(src_object + 0x310);
  *(int32_t *)(dest_object + 0x314) = *(int32_t *)(src_object + 0x314);
  *(int8_t *)(dest_object + 0x318) = *(int8_t *)(src_object + 0x318);
  FUN_180627be0(dest_object + 800,src_object + 800);
  *(int32_t *)(dest_object + 0x340) = *(int32_t *)(src_object + 0x340);
  return dest_object;
}



// 函数: int64_t FUN_18018dff0(uint64_t param_1,int64_t param_2)
// 在场景对象数组中查找指定名称的对象
int64_t find_scene_object_by_name(uint64_t param_1, int64_t name_data)

{
  byte *byte_ptr1;
  int int_var1;
  int int_var2;
  int64_t long_var1;
  int int_var3;
  byte *byte_ptr2;
  int int_var4;
  int64_t long_var2;
  uint64_t *ulong_ptr1;
  uint64_t ulong_var1;
  uint64_t ulong_var2;
  
  ulong_var1 = 0;
  long_var1 = *(int64_t *)(core_system_data_resource + 0x3a0);
  int_var3 = (int)((*(int64_t *)(core_system_data_resource + 0x3a8) - long_var1) / 0x348);
  if (0 < int_var3) {
    int_var1 = *(int *)(name_data + 0x10);
    ulong_ptr1 = (uint64_t *)(long_var1 + 0x10);
    ulong_var2 = ulong_var1;
    do {
      int_var2 = *(int *)(ulong_ptr1 + 1);
      int_var4 = int_var1;
      if (int_var2 == int_var1) {
        if (int_var2 != 0) {
          byte_ptr2 = (byte *)*ulong_ptr1;
          long_var2 = *(int64_t *)(name_data + 8) - (int64_t)byte_ptr2;
          do {
            byte_ptr1 = byte_ptr2 + long_var2;
            int_var4 = (uint)*byte_ptr2 - (uint)*byte_ptr1;
            if (int_var4 != 0) break;
            byte_ptr2 = byte_ptr2 + 1;
          } while (*byte_ptr1 != 0);
        }
LAB_18018e08d:
        if (int_var4 == 0) {
          return (int64_t)(int)ulong_var2 * 0x348 + long_var1;
        }
      }
      else if (int_var2 == 0) goto LAB_18018e08d;
      ulong_var2 = (uint64_t)((int)ulong_var2 + 1);
      ulong_var1 = ulong_var1 + 1;
      ulong_ptr1 = ulong_ptr1 + 0x69;
    } while ((int64_t)ulong_var1 < (int64_t)int_var3);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address