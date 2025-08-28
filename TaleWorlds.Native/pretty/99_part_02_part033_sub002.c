#include "TaleWorlds.Native.Split.h"

// 99_part_02_part033_sub002.c - 1 个函数

// 函数: void FUN_1801a5ca0(int64_t param_1,int64_t param_2)
void FUN_1801a5ca0(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  char *pcVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  float *pfVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar6 = "camera_data";
  do {
    pcVar7 = pcVar6;
    pcVar6 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  puVar4 = *(uint64_t **)(param_2 + 0x30);
  if (puVar4 == (uint64_t *)0x0) {
    return;
  }
  do {
    pcVar6 = (char *)*puVar4;
    if (pcVar6 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar6 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar4[2];
    }
    if (pcVar2 == pcVar7 + -0x180a0b63f) {
      pcVar2 = pcVar2 + (int64_t)pcVar6;
      if (pcVar2 <= pcVar6) {
FUN_1801a5d17:
        pcVar6 = "near_plane";
        do {
          pcVar7 = pcVar6;
          pcVar6 = pcVar7 + 1;
        } while (*pcVar6 != '\0');
        for (puVar1 = (uint64_t *)puVar4[8]; puVar1 != (uint64_t *)0x0;
            puVar1 = (uint64_t *)puVar1[6]) {
          pcVar6 = (char *)*puVar1;
          if (pcVar6 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar6 = (char *)0x180d48d24;
          }
          else {
            pcVar2 = (char *)puVar1[2];
          }
          if (pcVar2 == pcVar7 + -0x180a0b66f) {
            pcVar2 = pcVar2 + (int64_t)pcVar6;
            if (pcVar2 <= pcVar6) {
LAB_1801a5d96:
              lVar3 = 0x180d48d24;
              if (puVar1[1] != 0) {
                lVar3 = puVar1[1];
              }
              goto LAB_1801a5db1;
            }
            lVar3 = (int64_t)&memory_allocator_3408_ptr - (int64_t)pcVar6;
            while (*pcVar6 == pcVar6[lVar3]) {
              pcVar6 = pcVar6 + 1;
              if (pcVar2 <= pcVar6) goto LAB_1801a5d96;
            }
          }
        }
        lVar3 = 0;
LAB_1801a5db1:
        if ((param_1 + 0x607d4 != 0) && (lVar3 != 0)) {
          AdvancedSystemOptimizer(lVar3,&system_data_6430,param_1 + 0x607d4);
        }
        pfVar5 = (float *)(param_1 + 0x607d8);
        pcVar6 = "far_plane";
        do {
          pcVar7 = pcVar6;
          pcVar6 = pcVar7 + 1;
        } while (*pcVar6 != '\0');
        puVar4 = (uint64_t *)puVar4[8];
        do {
          if (puVar4 == (uint64_t *)0x0) {
            lVar3 = 0;
LAB_1801a5e49:
            if ((pfVar5 != (float *)0x0) && (lVar3 != 0)) {
              AdvancedSystemOptimizer(lVar3,&system_data_6430,pfVar5);
            }
            if (5000.0 < *pfVar5 || *pfVar5 == 5000.0) {
              return;
            }
            *pfVar5 = 5000.0;
            return;
          }
          pcVar6 = (char *)*puVar4;
          if (pcVar6 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar6 = (char *)0x180d48d24;
          }
          else {
            pcVar2 = (char *)puVar4[2];
          }
          if (pcVar2 == pcVar7 + -0x180a0b65f) {
            pcVar2 = pcVar2 + (int64_t)pcVar6;
            if (pcVar2 <= pcVar6) {
LAB_1801a5e31:
              lVar3 = 0x180d48d24;
              if (puVar4[1] != 0) {
                lVar3 = puVar4[1];
              }
              goto LAB_1801a5e49;
            }
            lVar3 = (int64_t)&memory_allocator_3392_ptr - (int64_t)pcVar6;
            while (*pcVar6 == pcVar6[lVar3]) {
              pcVar6 = pcVar6 + 1;
              if (pcVar2 <= pcVar6) goto LAB_1801a5e31;
            }
          }
          puVar4 = (uint64_t *)puVar4[6];
        } while( true );
      }
      lVar3 = (int64_t)&memory_allocator_3360_ptr - (int64_t)pcVar6;
      while (*pcVar6 == pcVar6[lVar3]) {
        pcVar6 = pcVar6 + 1;
        if (pcVar2 <= pcVar6) goto FUN_1801a5d17;
      }
    }
    puVar4 = (uint64_t *)puVar4[0xb];
    if (puVar4 == (uint64_t *)0x0) {
      return;
    }
  } while( true );
}







