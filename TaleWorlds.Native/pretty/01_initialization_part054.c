#define SystemInitializer FUN_1808fcb90  // 系统初始化器
#define ResourceReleaser FUN_18064e900  // 资源释放器
#define AdvancedMemoryAllocator FUN_18062b420  // 高级内存分配器
#define MemoryPoolAllocator FUN_18062b1e0  // 内存池分配器
#define StateQueryProcessor FUN_180080380  // 状态查询处理器
#define SystemStateUpdater FUN_1800802e0  // 系统状态更新器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part054.c - 4 个函数

// 函数: void FUN_1800792ea(void)
void FUN_1800792ea(void)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  uint64_t *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  char cVar14;
  float *pfVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint64_t uVar29;
  int32_t uVar30;
  longlong lVar31;
  longlong *plVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  longlong unaff_RBX;
  ulonglong uVar37;
  char *pcVar38;
  uint *puVar39;
  int iVar40;
  longlong unaff_RDI;
  int iVar41;
  int iVar42;
  longlong lVar43;
  int32_t *puVar44;
  uint *puVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  bool bVar48;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  uint64_t uStack0000000000000050;
  uint64_t in_stack_00000058;
  
  uVar35 = (int)*(char *)(unaff_RDI + 0xd) + *(int *)(unaff_RDI + 0x18);
  pfVar15 = (float *)**(longlong **)(unaff_RBX + 600);
  lVar43 = (longlong)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc28;
  uVar33 = uVar35 >> 0xd;
  lVar16 = *(longlong *)(lVar43 + 8 + (ulonglong)uVar33 * 8);
  lVar31 = (ulonglong)(uVar35 + uVar33 * -0x2000) * 0x40;
  uVar29 = ((uint64_t *)(lVar16 + lVar31))[1];
  *(uint64_t *)pfVar15 = *(uint64_t *)(lVar16 + lVar31);
  *(uint64_t *)(pfVar15 + 2) = uVar29;
  puVar4 = (uint64_t *)(lVar16 + 0x10 + lVar31);
  uVar29 = puVar4[1];
  *(uint64_t *)(pfVar15 + 4) = *puVar4;
  *(uint64_t *)(pfVar15 + 6) = uVar29;
  puVar4 = (uint64_t *)(lVar16 + 0x20 + lVar31);
  uVar29 = puVar4[1];
  *(uint64_t *)(pfVar15 + 8) = *puVar4;
  *(uint64_t *)(pfVar15 + 10) = uVar29;
  puVar4 = (uint64_t *)(lVar16 + 0x30 + lVar31);
  uVar29 = puVar4[1];
  *(uint64_t *)(pfVar15 + 0xc) = *puVar4;
  *(uint64_t *)(pfVar15 + 0xe) = uVar29;
  lVar16 = *(longlong *)(unaff_RDI + 0x10);
  fVar17 = pfVar15[8];
  fVar18 = pfVar15[9];
  fVar19 = pfVar15[10];
  fVar20 = pfVar15[0xb];
  fVar21 = *pfVar15;
  fVar22 = pfVar15[1];
  fVar23 = pfVar15[2];
  fVar24 = pfVar15[3];
  fVar25 = pfVar15[4];
  fVar26 = pfVar15[5];
  fVar27 = pfVar15[6];
  fVar28 = pfVar15[7];
  fVar5 = *(float *)(lVar16 + 0x374);
  fVar6 = *(float *)(lVar16 + 0x370);
  fVar7 = *(float *)(lVar16 + 0x378);
  fVar8 = *(float *)(lVar16 + 900);
  fVar9 = *(float *)(lVar16 + 0x394);
  fVar10 = *(float *)(lVar16 + 0x380);
  fVar11 = *(float *)(lVar16 + 0x388);
  fVar12 = *(float *)(lVar16 + 0x390);
  fVar13 = *(float *)(lVar16 + 0x398);
  *pfVar15 = fVar5 * fVar25 + fVar6 * fVar21 + fVar7 * fVar17;
  pfVar15[1] = fVar5 * fVar26 + fVar6 * fVar22 + fVar7 * fVar18;
  pfVar15[2] = fVar5 * fVar27 + fVar6 * fVar23 + fVar7 * fVar19;
  pfVar15[3] = fVar5 * fVar28 + fVar6 * fVar24 + fVar7 * fVar20;
  pfVar15[4] = fVar8 * fVar25 + fVar10 * fVar21 + fVar11 * fVar17;
  pfVar15[5] = fVar8 * fVar26 + fVar10 * fVar22 + fVar11 * fVar18;
  pfVar15[6] = fVar8 * fVar27 + fVar10 * fVar23 + fVar11 * fVar19;
  pfVar15[7] = fVar8 * fVar28 + fVar10 * fVar24 + fVar11 * fVar20;
  pfVar15[8] = fVar9 * fVar25 + fVar12 * fVar21 + fVar13 * fVar17;
  pfVar15[9] = fVar9 * fVar26 + fVar12 * fVar22 + fVar13 * fVar18;
  pfVar15[10] = fVar9 * fVar27 + fVar12 * fVar23 + fVar13 * fVar19;
  pfVar15[0xb] = fVar9 * fVar28 + fVar12 * fVar24 + fVar13 * fVar20;
  lVar16 = *(longlong *)(unaff_RBX + 600);
  if (*(int *)(lVar16 + 0x28) != *(int *)(system_main_module_state + 0x224)) {
    iVar40 = *(int *)(lVar16 + 0x1c) + *(int *)(lVar16 + 0x18);
    *(int *)(lVar16 + 0x28) = *(int *)(system_main_module_state + 0x224);
    if (0 < iVar40) {
      uStack0000000000000050 = in_stack_00000058;
      lVar31 = (longlong)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc28;
      uVar30 = StateQueryProcessor(lVar31,iVar40,lVar43,pfVar15,CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da));
      *(int32_t *)(lVar16 + 0x30) = uVar30;
      SystemStateUpdater(lVar31,uVar30);
      if (*(longlong *)(lVar16 + 0x10) == 0) {
        if (*(int *)(lVar16 + 0x18) != 0) {
          *(int32_t *)(lVar16 + 0x2c) = *(int32_t *)(lVar16 + 0x30);
          return;
        }
      }
      else {
        cVar14 = *(char *)(lVar16 + 0x44);
        uVar37 = (ulonglong)cVar14;
        plVar1 = (longlong *)(lVar16 + 0x38);
        iVar40 = (int)cVar14;
        if (*(int *)(lVar16 + 0x40) == (int)cVar14) {
          plVar32 = (longlong *)*plVar1;
        }
        else {
          *(int *)(lVar16 + 0x40) = iVar40;
          if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
            ResourceReleaser();
          }
          *plVar1 = 0;
          if (cVar14 == '\0') {
            plVar32 = (longlong *)0x0;
            *plVar1 = 0;
          }
          else {
            plVar32 = (longlong *)MemoryPoolAllocator(system_memory_pool_ptr,(longlong)cVar14 * 4);
            *plVar1 = (longlong)plVar32;
          }
        }
        if (plVar32 != (longlong *)0x0) {
          iVar41 = 0;
          uVar33 = (uint)cVar14;
          iVar42 = iVar41;
          if ((0 < iVar40) && (0xf < uVar33)) {
            iVar36 = *(int *)(lVar16 + 0x2c);
            plVar2 = (longlong *)((longlong)plVar32 + (longlong)(cVar14 + -1) * 4);
            if ((((longlong *)(lVar16 + 0x2c) < plVar32) || (plVar2 < (longlong *)(lVar16 + 0x2c)))
               && ((plVar1 < plVar32 || (iVar42 = 0, plVar2 < plVar1)))) {
              uVar35 = uVar33 & 0x8000000f;
              if ((int)uVar35 < 0) {
                uVar35 = (uVar35 - 1 | 0xfffffff0) + 1;
              }
              plVar32 = plVar32 + 4;
              iVar34 = 8;
              do {
                *(int *)(plVar32 + -4) = iVar41 + iVar36;
                *(int *)((longlong)plVar32 + -0x1c) = iVar41 + 1 + iVar36;
                *(int *)(plVar32 + -3) = iVar41 + 2 + iVar36;
                *(int *)((longlong)plVar32 + -0x14) = iVar41 + 3 + iVar36;
                iVar41 = iVar41 + 0x10;
                *(int *)(plVar32 + -2) = iVar34 + -4 + iVar36;
                *(int *)((longlong)plVar32 + -0xc) = iVar34 + -3 + iVar36;
                *(int *)(plVar32 + -1) = iVar34 + -2 + iVar36;
                *(int *)((longlong)plVar32 + -4) = iVar34 + -1 + iVar36;
                *(int *)plVar32 = iVar34 + iVar36;
                *(int *)((longlong)plVar32 + 4) = iVar34 + 1 + iVar36;
                *(int *)(plVar32 + 1) = iVar34 + 2 + iVar36;
                *(int *)((longlong)plVar32 + 0xc) = iVar34 + 3 + iVar36;
                *(int *)(plVar32 + 2) = iVar34 + 4 + iVar36;
                *(int *)((longlong)plVar32 + 0x14) = iVar34 + 5 + iVar36;
                *(int *)(plVar32 + 3) = iVar34 + 6 + iVar36;
                *(int *)((longlong)plVar32 + 0x1c) = iVar34 + 7 + iVar36;
                plVar32 = plVar32 + 8;
                iVar34 = iVar34 + 0x10;
                iVar42 = iVar41;
              } while (iVar41 < (int)(uVar33 - uVar35));
            }
          }
          for (lVar31 = (longlong)iVar42; lVar31 < (longlong)uVar37; lVar31 = lVar31 + 1) {
            iVar41 = *(int *)(lVar16 + 0x2c) + iVar42;
            iVar42 = iVar42 + 1;
            *(int *)(*plVar1 + lVar31 * 4) = iVar41;
          }
          iVar42 = *(int *)(lVar16 + 0x18);
          iVar41 = 0;
          if (0 < (longlong)iVar42) {
            lVar31 = 0;
            do {
              iVar36 = *(int *)(lVar16 + 0x30) + iVar41;
              iVar41 = iVar41 + 1;
              pbVar3 = (byte *)(*(longlong *)(lVar16 + 0x10) + lVar31);
              lVar31 = lVar31 + 1;
              *(int *)(*plVar1 + (ulonglong)*pbVar3 * 4) = iVar36;
            } while (lVar31 < iVar42);
          }
        }
        puVar39 = (uint *)((longlong)*(int *)(system_parameter_buffer + 0xc20) * 0x128 +
                          system_parameter_buffer + 0x9d0);
        if (iVar40 == 0) {
          uVar33 = (int)cVar14 - 1;
        }
        else {
          LOCK();
          uVar33 = *puVar39;
          *puVar39 = *puVar39 + (int)cVar14;
          UNLOCK();
          uVar46 = (ulonglong)(uVar33 >> 0xb);
          uVar47 = (ulonglong)(cVar14 + -1 + uVar33 >> 0xb);
          if (uVar46 <= uVar47) {
            pcVar38 = (char *)((longlong)puVar39 + uVar46 + 0x108);
            lVar31 = (uVar47 - uVar46) + 1;
            puVar45 = puVar39 + uVar46 * 2 + 2;
            do {
              iVar42 = (int)uVar46;
              if (*(longlong *)puVar45 == 0) {
                lVar43 = AdvancedMemoryAllocator(system_memory_pool_ptr,0x2000,0x25);
                LOCK();
                bVar48 = *(longlong *)(puVar39 + (longlong)iVar42 * 2 + 2) == 0;
                if (bVar48) {
                  *(longlong *)(puVar39 + (longlong)iVar42 * 2 + 2) = lVar43;
                }
                UNLOCK();
                if (bVar48) {
                  LOCK();
                  *(int8_t *)((longlong)iVar42 + 0x108 + (longlong)puVar39) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar43 != 0) {
                    // WARNING: Subroutine does not return
                    ResourceReleaser();
                  }
                  do {
                  } while (*pcVar38 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar38 != '\0');
              }
              uVar46 = (ulonglong)(iVar42 + 1);
              puVar45 = puVar45 + 2;
              pcVar38 = pcVar38 + 1;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
          }
        }
        puVar44 = *(int32_t **)(lVar16 + 0x38);
        uVar35 = uVar33 >> 0xb;
        *(uint *)(lVar16 + 0x2c) = uVar33;
        if (uVar35 == (int)cVar14 + uVar33 >> 0xb) {
                    // WARNING: Subroutine does not return
          memcpy(*(longlong *)(puVar39 + (ulonglong)uVar35 * 2 + 2) +
                 (ulonglong)(uVar33 + uVar35 * -0x800) * 4,puVar44,(uVar37 & 0xffffffff) << 2);
        }
        if (iVar40 != 0) {
          uVar37 = uVar37 & 0xffffffff;
          do {
            uVar30 = *puVar44;
            puVar44 = puVar44 + 1;
            *(int32_t *)
             (*(longlong *)(puVar39 + (ulonglong)(uVar33 >> 0xb) * 2 + 2) +
             (ulonglong)(uVar33 + (uVar33 >> 0xb) * -0x800) * 4) = uVar30;
            uVar37 = uVar37 - 1;
            uVar33 = uVar33 + 1;
          } while (uVar37 != 0);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180079309(longlong param_1,uint param_2,uint64_t param_3,float *param_4)
void FUN_180079309(longlong param_1,uint param_2,uint64_t param_3,float *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  uint64_t *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  char cVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint64_t uVar28;
  int32_t uVar29;
  uint uVar30;
  longlong lVar31;
  longlong *plVar32;
  longlong lVar33;
  int iVar34;
  int iVar35;
  longlong unaff_RBX;
  ulonglong uVar36;
  char *pcVar37;
  uint *puVar38;
  int iVar39;
  uint uVar40;
  longlong unaff_RDI;
  int iVar41;
  int iVar42;
  int32_t *puVar43;
  uint *puVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  bool bVar47;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  uint64_t uStack0000000000000050;
  uint64_t in_stack_00000058;
  
  param_1 = (longlong)*(int *)(param_1 + 0x250) * 0x128 + param_1;
  lVar15 = *(longlong *)(param_1 + 8 + (ulonglong)(param_2 >> 0xd) * 8);
  lVar31 = (ulonglong)(param_2 + (param_2 >> 0xd) * -0x2000) * 0x40;
  uVar28 = ((uint64_t *)(lVar15 + lVar31))[1];
  *(uint64_t *)param_4 = *(uint64_t *)(lVar15 + lVar31);
  *(uint64_t *)(param_4 + 2) = uVar28;
  puVar4 = (uint64_t *)(lVar15 + 0x10 + lVar31);
  uVar28 = puVar4[1];
  *(uint64_t *)(param_4 + 4) = *puVar4;
  *(uint64_t *)(param_4 + 6) = uVar28;
  puVar4 = (uint64_t *)(lVar15 + 0x20 + lVar31);
  uVar28 = puVar4[1];
  *(uint64_t *)(param_4 + 8) = *puVar4;
  *(uint64_t *)(param_4 + 10) = uVar28;
  puVar4 = (uint64_t *)(lVar15 + 0x30 + lVar31);
  uVar28 = puVar4[1];
  *(uint64_t *)(param_4 + 0xc) = *puVar4;
  *(uint64_t *)(param_4 + 0xe) = uVar28;
  lVar15 = *(longlong *)(unaff_RDI + 0x10);
  fVar16 = param_4[8];
  fVar17 = param_4[9];
  fVar18 = param_4[10];
  fVar19 = param_4[0xb];
  fVar20 = *param_4;
  fVar21 = param_4[1];
  fVar22 = param_4[2];
  fVar23 = param_4[3];
  fVar24 = param_4[4];
  fVar25 = param_4[5];
  fVar26 = param_4[6];
  fVar27 = param_4[7];
  fVar5 = *(float *)(lVar15 + 0x374);
  fVar6 = *(float *)(lVar15 + 0x370);
  fVar7 = *(float *)(lVar15 + 0x378);
  fVar8 = *(float *)(lVar15 + 900);
  fVar9 = *(float *)(lVar15 + 0x394);
  fVar10 = *(float *)(lVar15 + 0x380);
  fVar11 = *(float *)(lVar15 + 0x388);
  fVar12 = *(float *)(lVar15 + 0x390);
  fVar13 = *(float *)(lVar15 + 0x398);
  *param_4 = fVar5 * fVar24 + fVar6 * fVar20 + fVar7 * fVar16;
  param_4[1] = fVar5 * fVar25 + fVar6 * fVar21 + fVar7 * fVar17;
  param_4[2] = fVar5 * fVar26 + fVar6 * fVar22 + fVar7 * fVar18;
  param_4[3] = fVar5 * fVar27 + fVar6 * fVar23 + fVar7 * fVar19;
  param_4[4] = fVar8 * fVar24 + fVar10 * fVar20 + fVar11 * fVar16;
  param_4[5] = fVar8 * fVar25 + fVar10 * fVar21 + fVar11 * fVar17;
  param_4[6] = fVar8 * fVar26 + fVar10 * fVar22 + fVar11 * fVar18;
  param_4[7] = fVar8 * fVar27 + fVar10 * fVar23 + fVar11 * fVar19;
  param_4[8] = fVar9 * fVar24 + fVar12 * fVar20 + fVar13 * fVar16;
  param_4[9] = fVar9 * fVar25 + fVar12 * fVar21 + fVar13 * fVar17;
  param_4[10] = fVar9 * fVar26 + fVar12 * fVar22 + fVar13 * fVar18;
  param_4[0xb] = fVar9 * fVar27 + fVar12 * fVar23 + fVar13 * fVar19;
  lVar15 = *(longlong *)(unaff_RBX + 600);
  if (*(int *)(lVar15 + 0x28) != *(int *)(system_main_module_state + 0x224)) {
    iVar39 = *(int *)(lVar15 + 0x1c) + *(int *)(lVar15 + 0x18);
    *(int *)(lVar15 + 0x28) = *(int *)(system_main_module_state + 0x224);
    if (0 < iVar39) {
      uStack0000000000000050 = in_stack_00000058;
      lVar31 = (longlong)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc28;
      uVar29 = StateQueryProcessor(lVar31,iVar39,param_1,param_4,CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da));
      *(int32_t *)(lVar15 + 0x30) = uVar29;
      SystemStateUpdater(lVar31,uVar29);
      if (*(longlong *)(lVar15 + 0x10) == 0) {
        if (*(int *)(lVar15 + 0x18) != 0) {
          *(int32_t *)(lVar15 + 0x2c) = *(int32_t *)(lVar15 + 0x30);
          return;
        }
      }
      else {
        cVar14 = *(char *)(lVar15 + 0x44);
        uVar36 = (ulonglong)cVar14;
        plVar1 = (longlong *)(lVar15 + 0x38);
        iVar39 = (int)cVar14;
        if (*(int *)(lVar15 + 0x40) == (int)cVar14) {
          plVar32 = (longlong *)*plVar1;
        }
        else {
          *(int *)(lVar15 + 0x40) = iVar39;
          if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
            ResourceReleaser();
          }
          *plVar1 = 0;
          if (cVar14 == '\0') {
            plVar32 = (longlong *)0x0;
            *plVar1 = 0;
          }
          else {
            plVar32 = (longlong *)MemoryPoolAllocator(system_memory_pool_ptr,(longlong)cVar14 * 4);
            *plVar1 = (longlong)plVar32;
          }
        }
        if (plVar32 != (longlong *)0x0) {
          iVar41 = 0;
          uVar40 = (uint)cVar14;
          iVar42 = iVar41;
          if ((0 < iVar39) && (0xf < uVar40)) {
            iVar35 = *(int *)(lVar15 + 0x2c);
            plVar2 = (longlong *)((longlong)plVar32 + (longlong)(cVar14 + -1) * 4);
            if ((((longlong *)(lVar15 + 0x2c) < plVar32) || (plVar2 < (longlong *)(lVar15 + 0x2c)))
               && ((plVar1 < plVar32 || (iVar42 = 0, plVar2 < plVar1)))) {
              uVar30 = uVar40 & 0x8000000f;
              if ((int)uVar30 < 0) {
                uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
              }
              plVar32 = plVar32 + 4;
              iVar34 = 8;
              do {
                *(int *)(plVar32 + -4) = iVar41 + iVar35;
                *(int *)((longlong)plVar32 + -0x1c) = iVar41 + 1 + iVar35;
                *(int *)(plVar32 + -3) = iVar41 + 2 + iVar35;
                *(int *)((longlong)plVar32 + -0x14) = iVar41 + 3 + iVar35;
                iVar41 = iVar41 + 0x10;
                *(int *)(plVar32 + -2) = iVar34 + -4 + iVar35;
                *(int *)((longlong)plVar32 + -0xc) = iVar34 + -3 + iVar35;
                *(int *)(plVar32 + -1) = iVar34 + -2 + iVar35;
                *(int *)((longlong)plVar32 + -4) = iVar34 + -1 + iVar35;
                *(int *)plVar32 = iVar34 + iVar35;
                *(int *)((longlong)plVar32 + 4) = iVar34 + 1 + iVar35;
                *(int *)(plVar32 + 1) = iVar34 + 2 + iVar35;
                *(int *)((longlong)plVar32 + 0xc) = iVar34 + 3 + iVar35;
                *(int *)(plVar32 + 2) = iVar34 + 4 + iVar35;
                *(int *)((longlong)plVar32 + 0x14) = iVar34 + 5 + iVar35;
                *(int *)(plVar32 + 3) = iVar34 + 6 + iVar35;
                *(int *)((longlong)plVar32 + 0x1c) = iVar34 + 7 + iVar35;
                plVar32 = plVar32 + 8;
                iVar34 = iVar34 + 0x10;
                iVar42 = iVar41;
              } while (iVar41 < (int)(uVar40 - uVar30));
            }
          }
          for (lVar31 = (longlong)iVar42; lVar31 < (longlong)uVar36; lVar31 = lVar31 + 1) {
            iVar41 = *(int *)(lVar15 + 0x2c) + iVar42;
            iVar42 = iVar42 + 1;
            *(int *)(*plVar1 + lVar31 * 4) = iVar41;
          }
          iVar42 = *(int *)(lVar15 + 0x18);
          iVar41 = 0;
          if (0 < (longlong)iVar42) {
            lVar31 = 0;
            do {
              iVar35 = *(int *)(lVar15 + 0x30) + iVar41;
              iVar41 = iVar41 + 1;
              pbVar3 = (byte *)(*(longlong *)(lVar15 + 0x10) + lVar31);
              lVar31 = lVar31 + 1;
              *(int *)(*plVar1 + (ulonglong)*pbVar3 * 4) = iVar35;
            } while (lVar31 < iVar42);
          }
        }
        puVar38 = (uint *)((longlong)*(int *)(system_parameter_buffer + 0xc20) * 0x128 +
                          system_parameter_buffer + 0x9d0);
        if (iVar39 == 0) {
          uVar40 = (int)cVar14 - 1;
        }
        else {
          LOCK();
          uVar40 = *puVar38;
          *puVar38 = *puVar38 + (int)cVar14;
          UNLOCK();
          uVar45 = (ulonglong)(uVar40 >> 0xb);
          uVar46 = (ulonglong)(cVar14 + -1 + uVar40 >> 0xb);
          if (uVar45 <= uVar46) {
            pcVar37 = (char *)((longlong)puVar38 + uVar45 + 0x108);
            lVar31 = (uVar46 - uVar45) + 1;
            puVar44 = puVar38 + uVar45 * 2 + 2;
            do {
              iVar42 = (int)uVar45;
              if (*(longlong *)puVar44 == 0) {
                lVar33 = AdvancedMemoryAllocator(system_memory_pool_ptr,0x2000,0x25);
                LOCK();
                bVar47 = *(longlong *)(puVar38 + (longlong)iVar42 * 2 + 2) == 0;
                if (bVar47) {
                  *(longlong *)(puVar38 + (longlong)iVar42 * 2 + 2) = lVar33;
                }
                UNLOCK();
                if (bVar47) {
                  LOCK();
                  *(int8_t *)((longlong)iVar42 + 0x108 + (longlong)puVar38) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar33 != 0) {
                    // WARNING: Subroutine does not return
                    ResourceReleaser();
                  }
                  do {
                  } while (*pcVar37 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar37 != '\0');
              }
              uVar45 = (ulonglong)(iVar42 + 1);
              puVar44 = puVar44 + 2;
              pcVar37 = pcVar37 + 1;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
          }
        }
        puVar43 = *(int32_t **)(lVar15 + 0x38);
        uVar30 = uVar40 >> 0xb;
        *(uint *)(lVar15 + 0x2c) = uVar40;
        if (uVar30 == (int)cVar14 + uVar40 >> 0xb) {
                    // WARNING: Subroutine does not return
          memcpy(*(longlong *)(puVar38 + (ulonglong)uVar30 * 2 + 2) +
                 (ulonglong)(uVar40 + uVar30 * -0x800) * 4,puVar43,(uVar36 & 0xffffffff) << 2);
        }
        if (iVar39 != 0) {
          uVar36 = uVar36 & 0xffffffff;
          do {
            uVar29 = *puVar43;
            puVar43 = puVar43 + 1;
            *(int32_t *)
             (*(longlong *)(puVar38 + (ulonglong)(uVar40 >> 0xb) * 2 + 2) +
             (ulonglong)(uVar40 + (uVar40 >> 0xb) * -0x800) * 4) = uVar29;
            uVar36 = uVar36 - 1;
            uVar40 = uVar40 + 1;
          } while (uVar36 != 0);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007940e(void)
void FUN_18007940e(void)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  char cVar4;
  longlong lVar5;
  int32_t uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong unaff_RBX;
  longlong lVar12;
  ulonglong uVar13;
  char *pcVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int32_t *puVar20;
  uint *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  bool bVar24;
  uint64_t uStack0000000000000050;
  uint64_t in_stack_00000058;
  
  lVar5 = *(longlong *)(unaff_RBX + 600);
  if (*(int *)(lVar5 + 0x28) != *(int *)(system_main_module_state + 0x224)) {
    iVar16 = *(int *)(lVar5 + 0x1c) + *(int *)(lVar5 + 0x18);
    *(int *)(lVar5 + 0x28) = *(int *)(system_main_module_state + 0x224);
    if (0 < iVar16) {
      uStack0000000000000050 = in_stack_00000058;
      lVar12 = (longlong)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc28;
      uVar6 = StateQueryProcessor(lVar12,iVar16);
      *(int32_t *)(lVar5 + 0x30) = uVar6;
      FUN_1800802e0(lVar12,uVar6);
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        if (*(int *)(lVar5 + 0x18) != 0) {
          *(int32_t *)(lVar5 + 0x2c) = *(int32_t *)(lVar5 + 0x30);
          return;
        }
      }
      else {
        cVar4 = *(char *)(lVar5 + 0x44);
        uVar13 = (ulonglong)cVar4;
        plVar1 = (longlong *)(lVar5 + 0x38);
        iVar16 = (int)cVar4;
        if (*(int *)(lVar5 + 0x40) == (int)cVar4) {
          plVar8 = (longlong *)*plVar1;
        }
        else {
          *(int *)(lVar5 + 0x40) = iVar16;
          if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
            ResourceReleaser();
          }
          *plVar1 = 0;
          if (cVar4 == '\0') {
            plVar8 = (longlong *)0x0;
            *plVar1 = 0;
          }
          else {
            plVar8 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,(longlong)cVar4 * 4);
            *plVar1 = (longlong)plVar8;
          }
        }
        if (plVar8 != (longlong *)0x0) {
          iVar18 = 0;
          uVar17 = (uint)cVar4;
          iVar19 = iVar18;
          if ((0 < iVar16) && (0xf < uVar17)) {
            iVar11 = *(int *)(lVar5 + 0x2c);
            plVar2 = (longlong *)((longlong)plVar8 + (longlong)(cVar4 + -1) * 4);
            if ((((longlong *)(lVar5 + 0x2c) < plVar8) || (plVar2 < (longlong *)(lVar5 + 0x2c))) &&
               ((plVar1 < plVar8 || (iVar19 = 0, plVar2 < plVar1)))) {
              uVar7 = uVar17 & 0x8000000f;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
              }
              plVar8 = plVar8 + 4;
              iVar10 = 8;
              do {
                *(int *)(plVar8 + -4) = iVar18 + iVar11;
                *(int *)((longlong)plVar8 + -0x1c) = iVar18 + 1 + iVar11;
                *(int *)(plVar8 + -3) = iVar18 + 2 + iVar11;
                *(int *)((longlong)plVar8 + -0x14) = iVar18 + 3 + iVar11;
                iVar18 = iVar18 + 0x10;
                *(int *)(plVar8 + -2) = iVar10 + -4 + iVar11;
                *(int *)((longlong)plVar8 + -0xc) = iVar10 + -3 + iVar11;
                *(int *)(plVar8 + -1) = iVar10 + -2 + iVar11;
                *(int *)((longlong)plVar8 + -4) = iVar10 + -1 + iVar11;
                *(int *)plVar8 = iVar10 + iVar11;
                *(int *)((longlong)plVar8 + 4) = iVar10 + 1 + iVar11;
                *(int *)(plVar8 + 1) = iVar10 + 2 + iVar11;
                *(int *)((longlong)plVar8 + 0xc) = iVar10 + 3 + iVar11;
                *(int *)(plVar8 + 2) = iVar10 + 4 + iVar11;
                *(int *)((longlong)plVar8 + 0x14) = iVar10 + 5 + iVar11;
                *(int *)(plVar8 + 3) = iVar10 + 6 + iVar11;
                *(int *)((longlong)plVar8 + 0x1c) = iVar10 + 7 + iVar11;
                plVar8 = plVar8 + 8;
                iVar10 = iVar10 + 0x10;
                iVar19 = iVar18;
              } while (iVar18 < (int)(uVar17 - uVar7));
            }
          }
          for (lVar12 = (longlong)iVar19; lVar12 < (longlong)uVar13; lVar12 = lVar12 + 1) {
            iVar18 = *(int *)(lVar5 + 0x2c) + iVar19;
            iVar19 = iVar19 + 1;
            *(int *)(*plVar1 + lVar12 * 4) = iVar18;
          }
          iVar19 = *(int *)(lVar5 + 0x18);
          iVar18 = 0;
          if (0 < (longlong)iVar19) {
            lVar12 = 0;
            do {
              iVar11 = *(int *)(lVar5 + 0x30) + iVar18;
              iVar18 = iVar18 + 1;
              pbVar3 = (byte *)(*(longlong *)(lVar5 + 0x10) + lVar12);
              lVar12 = lVar12 + 1;
              *(int *)(*plVar1 + (ulonglong)*pbVar3 * 4) = iVar11;
            } while (lVar12 < iVar19);
          }
        }
        puVar15 = (uint *)((longlong)*(int *)(system_parameter_buffer + 0xc20) * 0x128 +
                          system_parameter_buffer + 0x9d0);
        if (iVar16 == 0) {
          uVar17 = (int)cVar4 - 1;
        }
        else {
          LOCK();
          uVar17 = *puVar15;
          *puVar15 = *puVar15 + (int)cVar4;
          UNLOCK();
          uVar22 = (ulonglong)(uVar17 >> 0xb);
          uVar23 = (ulonglong)(cVar4 + -1 + uVar17 >> 0xb);
          if (uVar22 <= uVar23) {
            pcVar14 = (char *)((longlong)puVar15 + uVar22 + 0x108);
            lVar12 = (uVar23 - uVar22) + 1;
            puVar21 = puVar15 + uVar22 * 2 + 2;
            do {
              iVar19 = (int)uVar22;
              if (*(longlong *)puVar21 == 0) {
                lVar9 = AdvancedMemoryAllocator(system_memory_pool_ptr,0x2000,0x25);
                LOCK();
                bVar24 = *(longlong *)(puVar15 + (longlong)iVar19 * 2 + 2) == 0;
                if (bVar24) {
                  *(longlong *)(puVar15 + (longlong)iVar19 * 2 + 2) = lVar9;
                }
                UNLOCK();
                if (bVar24) {
                  LOCK();
                  *(int8_t *)((longlong)iVar19 + 0x108 + (longlong)puVar15) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
                    ResourceReleaser();
                  }
                  do {
                  } while (*pcVar14 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar14 != '\0');
              }
              uVar22 = (ulonglong)(iVar19 + 1);
              puVar21 = puVar21 + 2;
              pcVar14 = pcVar14 + 1;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
        }
        puVar20 = *(int32_t **)(lVar5 + 0x38);
        uVar7 = uVar17 >> 0xb;
        *(uint *)(lVar5 + 0x2c) = uVar17;
        if (uVar7 == (int)cVar4 + uVar17 >> 0xb) {
                    // WARNING: Subroutine does not return
          memcpy(*(longlong *)(puVar15 + (ulonglong)uVar7 * 2 + 2) +
                 (ulonglong)(uVar17 + uVar7 * -0x800) * 4,puVar20,(uVar13 & 0xffffffff) << 2);
        }
        if (iVar16 != 0) {
          uVar13 = uVar13 & 0xffffffff;
          do {
            uVar6 = *puVar20;
            puVar20 = puVar20 + 1;
            *(int32_t *)
             (*(longlong *)(puVar15 + (ulonglong)(uVar17 >> 0xb) * 2 + 2) +
             (ulonglong)(uVar17 + (uVar17 >> 0xb) * -0x800) * 4) = uVar6;
            uVar13 = uVar13 - 1;
            uVar17 = uVar17 + 1;
          } while (uVar13 != 0);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * FUN_180079430(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    return (void *)(*(longlong *)(param_1 + 0x1b8) + 0x10);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x48) < init_system_config_ui) {
    SystemInitializer(&system_ptr_9158);
    if (init_system_config_ui == -1) {
      init_system_config_ui = &unknown_var_3432_ptr;
      init_system_config_ui = &system_ptr_9178;


// 函数: void FUN_180079520(longlong param_1)
void FUN_180079520(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((*(byte *)(param_1 + 0xfd) & 0x20) != 0) && (*(longlong *)(param_1 + 0x1e0) != 0)) {
    iVar2 = 0;
    lVar3 = 0;
    do {
      while ((*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x15 + lVar3) == '\x02' ||
             (*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x15 + lVar3) == '\x01'))) {
        Sleep(0);
      }
      lVar1 = (longlong)iVar2;
      lVar3 = lVar3 + 0x18;
      iVar2 = iVar2 + 1;
      LOCK();
      *(int8_t *)(*(longlong *)(param_1 + 0x1e0) + lVar1 * 0x18 + 0x15) = 0;
      UNLOCK();
    } while (iVar2 < 0x10);
  }
  return;
}



int8_t FUN_18007953e(void)

{
  int8_t *puVar1;
  int8_t uVar2;
  longlong lVar3;
  longlong unaff_RBX;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  lVar5 = 0;
  do {
    while ((*(char *)(*(longlong *)(unaff_RBX + 0x1e0) + 0x15 + lVar5) == '\x02' ||
           (*(char *)(*(longlong *)(unaff_RBX + 0x1e0) + 0x15 + lVar5) == '\x01'))) {
      Sleep(0);
    }
    lVar3 = (longlong)iVar4;
    lVar5 = lVar5 + 0x18;
    iVar4 = iVar4 + 1;
    LOCK();
    puVar1 = (int8_t *)(*(longlong *)(unaff_RBX + 0x1e0) + lVar3 * 0x18 + 0x15);
    uVar2 = *puVar1;
    *puVar1 = 0;
    UNLOCK();
  } while (iVar4 < 0x10);
  return uVar2;
}





