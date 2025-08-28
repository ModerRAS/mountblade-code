#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 01_initialization_part030.c - 1 个函数
// 函数: void SystemSecurity_Manager(uint64_t *param_1,uint64_t *param_2)
void SystemSecurity_Manager(uint64_t *param_1,uint64_t *param_2)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  puVar4 = (uint64_t *)param_1[1];
  if (puVar4 < (uint64_t *)param_1[2]) {
    param_1[1] = (uint64_t)(puVar4 + 1);
    *puVar4 = *param_2;
    return;
  }
  puVar3 = (uint64_t *)*param_1;
  lVar1 = (int64_t)puVar4 - (int64_t)puVar3 >> 3;
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = lVar1 * 2;
    if (lVar1 == 0) {
      puVar2 = (uint64_t *)0x0;
      goto LAB_18005eb20;
    }
  }
  puVar2 = (uint64_t *)SystemMemoryManager(system_memory_pool_ptr,lVar1 * 8,(char)param_1[3]);
  puVar3 = (uint64_t *)*param_1;
  puVar4 = (uint64_t *)param_1[1];
LAB_18005eb20:
  if (puVar3 != puVar4) {
// WARNING: Subroutine does not return
    memmove(puVar2,puVar3,(int64_t)puVar4 - (int64_t)puVar3);
  }
  *puVar2 = *param_2;
  if (*param_1 != 0) {
// WARNING: Subroutine does not return
    SystemCoreProcessor();
  }
  *param_1 = (uint64_t)puVar2;
  param_1[1] = (uint64_t)(puVar2 + 1);
  param_1[2] = (uint64_t)(puVar2 + lVar1);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_05eb80(int64_t param_1)
{
  int64_t *plVar1;
  uint *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint uVar11;
  bool bVar12;
  char acStackX_8 [16];
  uVar5 = GetCurrentThreadId();
  uVar11 = (uVar5 >> 0x10 ^ uVar5) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar10 = (uint64_t)(uVar11 >> 0x10 ^ uVar11);
  puVar7 = *(uint64_t **)(param_1 + 0x30);
  for (puVar3 = puVar7; uVar6 = uVar10, puVar3 != (uint64_t *)0x0; puVar3 = (uint64_t *)puVar3[2])
  {
    while( true ) {
      uVar6 = uVar6 & *puVar3 - 1;
      uVar11 = *(uint *)(uVar6 * 0x10 + puVar3[1]);
      if (uVar11 == uVar5) {
        lVar8 = *(int64_t *)(puVar3[1] + 8 + uVar6 * 0x10);
        if (puVar3 == puVar7) {
          return lVar8;
        }
        do {
          uVar10 = uVar10 & *puVar7 - 1;
          if (*(int *)(puVar7[1] + uVar10 * 0x10) == 0) {
            puVar2 = (uint *)(puVar7[1] + uVar10 * 0x10);
            LOCK();
            bVar12 = *puVar2 == 0;
            if (bVar12) {
              *puVar2 = uVar5;
            }
            UNLOCK();
            if (bVar12) {
              *(int64_t *)(puVar7[1] + 8 + uVar10 * 0x10) = lVar8;
              return lVar8;
            }
          }
          uVar10 = uVar10 + 1;
        } while( true );
      }
      if (uVar11 == 0) break;
      uVar6 = uVar6 + 1;
    }
  }
  LOCK();
  plVar1 = (int64_t *)(param_1 + 0x38);
  lVar8 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  uVar6 = lVar8 + 1;
  do {
    if (*puVar7 >> 1 <= uVar6) {
      LOCK();
      puVar2 = (uint *)(param_1 + 600);
      uVar11 = *puVar2;
      *puVar2 = *puVar2 | 1;
      UNLOCK();
      if ((uVar11 & 1) == 0) {
        puVar3 = *(uint64_t **)(param_1 + 0x30);
        puVar7 = puVar3;
        uVar9 = *puVar3;
        if (*puVar3 >> 1 <= uVar6) {
          do {
            uVar4 = uVar9;
            uVar9 = uVar4 * 2;
          } while ((uVar4 & 0x7fffffffffffffff) <= uVar6);
          puVar7 = (uint64_t *)SystemMemoryManager(system_memory_pool_ptr,uVar4 * 0x20 + 0x1f,10);
          if (puVar7 == (uint64_t *)0x0) {
            LOCK();
            *(int64_t *)(param_1 + 0x38) = *(int64_t *)(param_1 + 0x38) + -1;
            UNLOCK();
            *(int32_t *)(param_1 + 600) = 0;
            return 0;
          }
          *puVar7 = uVar9;
          puVar7[1] = (uint64_t)(-(int)(puVar7 + 3) & 7) + (int64_t)(puVar7 + 3);
          lVar8 = 0;
          for (; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(uint64_t *)(lVar8 + 8 + puVar7[1]) = 0;
            *(int32_t *)(lVar8 + puVar7[1]) = 0;
            lVar8 = lVar8 + 0x10;
          }
          puVar7[2] = (uint64_t)puVar3;
          *(uint64_t **)(param_1 + 0x30) = puVar7;
        }
        *(int32_t *)(param_1 + 600) = 0;
      }
    }
    if (uVar6 < (*puVar7 >> 2) + (*puVar7 >> 1)) {
      lVar8 = function_05ee30(param_1,0,acStackX_8);
      if (lVar8 == 0) {
        LOCK();
        *(int64_t *)(param_1 + 0x38) = *(int64_t *)(param_1 + 0x38) + -1;
        UNLOCK();
        return 0;
      }
      if (acStackX_8[0] != '\0') {
        LOCK();
        *(int64_t *)(param_1 + 0x38) = *(int64_t *)(param_1 + 0x38) + -1;
        UNLOCK();
      }
      do {
        uVar10 = uVar10 & *puVar7 - 1;
        if (*(int *)(puVar7[1] + uVar10 * 0x10) == 0) {
          puVar2 = (uint *)(puVar7[1] + uVar10 * 0x10);
          LOCK();
          bVar12 = *puVar2 == 0;
          if (bVar12) {
            *puVar2 = uVar5;
          }
          UNLOCK();
          if (bVar12) {
            *(int64_t *)(puVar7[1] + 8 + uVar10 * 0x10) = lVar8;
            return lVar8;
          }
        }
        uVar10 = uVar10 + 1;
      } while( true );
    }
    puVar7 = *(uint64_t **)(param_1 + 0x30);
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_05ec11(void)
{
  int64_t *plVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t unaff_RSI;
  uint64_t *unaff_RDI;
  int64_t unaff_R14;
  int unaff_R15D;
  bool bVar10;
  char local_buffer_50;
  LOCK();
  plVar1 = (int64_t *)(unaff_R14 + 0x38);
  lVar7 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  uVar9 = lVar7 + 1;
  while( true ) {
    if (*unaff_RDI >> 1 <= uVar9) {
      LOCK();
      puVar2 = (uint *)(unaff_R14 + 600);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 | 1;
      UNLOCK();
      if ((uVar4 & 1) == 0) {
        puVar5 = *(uint64_t **)(unaff_R14 + 0x30);
        unaff_RDI = puVar5;
        uVar8 = *puVar5;
        if (*puVar5 >> 1 <= uVar9) {
          do {
            uVar6 = uVar8;
            uVar8 = uVar6 * 2;
          } while ((uVar6 & 0x7fffffffffffffff) <= uVar9);
          unaff_RDI = (uint64_t *)SystemMemoryManager(system_memory_pool_ptr,uVar6 * 0x20 + 0x1f,10);
          if (unaff_RDI == (uint64_t *)0x0) {
            LOCK();
            *(int64_t *)(unaff_R14 + 0x38) = *(int64_t *)(unaff_R14 + 0x38) + -1;
            UNLOCK();
            *(int32_t *)(unaff_R14 + 600) = 0;
            return 0;
          }
          *unaff_RDI = uVar8;
          unaff_RDI[1] = (uint64_t)(-(int)(unaff_RDI + 3) & 7) + (int64_t)(unaff_RDI + 3);
          lVar7 = 0;
          for (; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(uint64_t *)(lVar7 + 8 + unaff_RDI[1]) = 0;
            *(int32_t *)(lVar7 + unaff_RDI[1]) = 0;
            lVar7 = lVar7 + 0x10;
          }
          unaff_RDI[2] = (uint64_t)puVar5;
          *(uint64_t **)(unaff_R14 + 0x30) = unaff_RDI;
        }
        *(int32_t *)(unaff_R14 + 600) = 0;
      }
    }
    if (uVar9 < (*unaff_RDI >> 2) + (*unaff_RDI >> 1)) break;
    unaff_RDI = *(uint64_t **)(unaff_R14 + 0x30);
  }
  lVar7 = function_05ee30();
  if (lVar7 == 0) {
    LOCK();
    *(int64_t *)(unaff_R14 + 0x38) = *(int64_t *)(unaff_R14 + 0x38) + -1;
    UNLOCK();
    return 0;
  }
  if (local_buffer_50 != '\0') {
    LOCK();
    *(int64_t *)(unaff_R14 + 0x38) = *(int64_t *)(unaff_R14 + 0x38) + -1;
    UNLOCK();
  }
  do {
    uVar9 = unaff_RSI & *unaff_RDI - 1;
    if (*(int *)(unaff_RDI[1] + uVar9 * 0x10) == 0) {
      piVar3 = (int *)(unaff_RDI[1] + uVar9 * 0x10);
      LOCK();
      bVar10 = *piVar3 == 0;
      if (bVar10) {
        *piVar3 = unaff_R15D;
      }
      UNLOCK();
      if (bVar10) {
        *(int64_t *)(unaff_RDI[1] + 8 + uVar9 * 0x10) = lVar7;
        return lVar7;
      }
    }
    unaff_RSI = uVar9 + 1;
  } while( true );
}
uint64_t function_05ecfc(uint64_t param_1,uint64_t param_2,int64_t *param_3)
{
  int *piVar1;
  uint64_t uVar2;
  int64_t in_RAX;
  uint64_t unaff_RSI;
  uint64_t uVar3;
  int64_t *unaff_RDI;
  int unaff_R15D;
  bool bVar4;
  uVar2 = *(uint64_t *)(param_3[1] + 8 + in_RAX * 0x10);
  if (param_3 == unaff_RDI) {
    return uVar2;
  }
  do {
    uVar3 = unaff_RSI & *unaff_RDI - 1U;
    if (*(int *)(unaff_RDI[1] + uVar3 * 0x10) == 0) {
      piVar1 = (int *)(unaff_RDI[1] + uVar3 * 0x10);
      LOCK();
      bVar4 = *piVar1 == 0;
      if (bVar4) {
        *piVar1 = unaff_R15D;
      }
      UNLOCK();
      if (bVar4) {
        *(uint64_t *)(unaff_RDI[1] + 8 + uVar3 * 0x10) = uVar2;
        return uVar2;
      }
    }
    unaff_RSI = uVar3 + 1;
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_05ed54(void)
{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t *unaff_RDI;
  int32_t uVar8;
  int64_t unaff_R12;
  int64_t unaff_R14;
  int unaff_R15D;
  bool bVar9;
  char local_buffer_50;
  while( true ) {
    do {
      uVar8 = (int32_t)unaff_R12;
      *(int32_t *)(unaff_R14 + 600) = uVar8;
      do {
        do {
          if (unaff_RBP < (*unaff_RDI >> 2) + (*unaff_RDI >> 1)) {
            lVar6 = function_05ee30();
            if (lVar6 == 0) {
              LOCK();
              *(int64_t *)(unaff_R14 + 0x38) = *(int64_t *)(unaff_R14 + 0x38) + -1;
              UNLOCK();
              return 0;
            }
            if (local_buffer_50 != (char)unaff_R12) {
              LOCK();
              *(int64_t *)(unaff_R14 + 0x38) = *(int64_t *)(unaff_R14 + 0x38) + -1;
              UNLOCK();
            }
            do {
              uVar7 = unaff_RSI & *unaff_RDI - 1;
              if (*(int *)(unaff_RDI[1] + uVar7 * 0x10) == 0) {
                piVar2 = (int *)(unaff_RDI[1] + uVar7 * 0x10);
                LOCK();
                bVar9 = *piVar2 == 0;
                if (bVar9) {
                  *piVar2 = unaff_R15D;
                }
                UNLOCK();
                if (bVar9) {
                  *(int64_t *)(unaff_RDI[1] + 8 + uVar7 * 0x10) = lVar6;
                  return lVar6;
                }
              }
              unaff_RSI = uVar7 + 1;
            } while( true );
          }
          unaff_RDI = *(uint64_t **)(unaff_R14 + 0x30);
        } while (unaff_RBP < *unaff_RDI >> 1);
        LOCK();
        puVar1 = (uint *)(unaff_R14 + 600);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 1;
        UNLOCK();
      } while ((uVar3 & 1) != 0);
      puVar4 = *(uint64_t **)(unaff_R14 + 0x30);
      unaff_RDI = puVar4;
      uVar7 = *puVar4;
    } while (unaff_RBP < *puVar4 >> 1);
    do {
      uVar5 = uVar7;
      uVar7 = uVar5 * 2;
    } while ((uVar5 & 0x7fffffffffffffff) <= unaff_RBP);
    unaff_RDI = (uint64_t *)SystemMemoryManager(system_memory_pool_ptr,uVar5 * 0x20 + 0x1f,10);
    if (unaff_RDI == (uint64_t *)0x0) break;
    *unaff_RDI = uVar7;
    unaff_RDI[1] = (uint64_t)(-(int)(unaff_RDI + 3) & 7) + (int64_t)(unaff_RDI + 3);
    lVar6 = unaff_R12;
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(int64_t *)(lVar6 + 8 + unaff_RDI[1]) = unaff_R12;
      *(int32_t *)(lVar6 + unaff_RDI[1]) = uVar8;
      lVar6 = lVar6 + 0x10;
    }
    unaff_RDI[2] = (uint64_t)puVar4;
    *(uint64_t **)(unaff_R14 + 0x30) = unaff_RDI;
  }
  LOCK();
  *(int64_t *)(unaff_R14 + 0x38) = *(int64_t *)(unaff_R14 + 0x38) + -1;
  UNLOCK();
  *(int32_t *)(unaff_R14 + 600) = uVar8;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_05ee30(int64_t *param_1,char param_2,int8_t *param_3)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  bool bVar9;
  puVar6 = (uint64_t *)0x0;
  puVar2 = (uint64_t *)*param_1;
  do {
    if (puVar2 == (uint64_t *)0x0) {
      *param_3 = 0;
      if (param_2 == '\0') {
        puVar2 = (uint64_t *)SystemMemoryManager(system_memory_pool_ptr,0x68,10,0,0xfffffffffffffffe);
        if (puVar2 == (uint64_t *)0x0) {
          return (uint64_t *)0x0;
        }
        puVar2[1] = 0;
        *(int8_t *)(puVar2 + 2) = 0;
        puVar2[3] = 0;
        *puVar2 = &processed_var_9040_ptr;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        *(int8_t *)(puVar2 + 9) = 0;
        puVar2[10] = param_1;
        *puVar2 = &processed_var_9024_ptr;
        puVar2[0xb] = 0x20;
        puVar2[0xc] = 0;
        function_05f430(puVar2);
      }
      else {
        puVar2 = (uint64_t *)SystemMemoryManager(system_memory_pool_ptr,0x88,10,0,0xfffffffffffffffe);
        if (puVar2 == (uint64_t *)0x0) {
          return (uint64_t *)0x0;
        }
        puVar2[1] = 0;
        *(int8_t *)(puVar2 + 2) = 0;
        puVar2[3] = 0;
        *puVar2 = &processed_var_9040_ptr;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        *(int8_t *)(puVar2 + 9) = 1;
        puVar2[10] = param_1;
        *puVar2 = &processed_var_9008_ptr;
        puVar2[0xb] = 0;
        puVar2[0xc] = 0;
        puVar2[0xd] = 0x10;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        puVar2[0x10] = 0;
        uVar7 = param_1[4] - 1U | param_1[4] - 1U >> 1;
        uVar7 = uVar7 | uVar7 >> 2;
        uVar7 = uVar7 | uVar7 >> 4;
        uVar8 = 1;
        do {
          uVar7 = uVar7 | uVar7 >> (((byte)uVar8 & 7) << 3);
          uVar8 = uVar8 * 2;
        } while (uVar8 < 8);
        uVar8 = uVar7 + 1 >> 1;
        if ((uint64_t)puVar2[0xd] < uVar8) {
          puVar2[0xd] = uVar8;
        }
        function_05f340(puVar2,0);
      }
      puVar5 = puVar6;
      if (puVar2 != (uint64_t *)0x0) {
        LOCK();
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        UNLOCK();
        lVar3 = *param_1;
        do {
          puVar5 = (uint64_t *)(lVar3 + 8);
          if (lVar3 == 0) {
            puVar5 = puVar6;
          }
          puVar2[1] = puVar5;
          LOCK();
          lVar4 = *param_1;
          bVar9 = lVar3 == lVar4;
          if (bVar9) {
            *param_1 = (int64_t)puVar2;
            lVar4 = lVar3;
          }
          UNLOCK();
          lVar3 = lVar4;
          puVar5 = puVar2;
        } while (!bVar9);
      }
      return puVar5;
    }
    if ((*(char *)(puVar2 + 2) != '\0') && (*(char *)(puVar2 + 9) == param_2)) {
      LOCK();
      bVar9 = *(char *)(puVar2 + 2) == '\x01';
      if (bVar9) {
        *(char *)(puVar2 + 2) = '\0';
      }
      UNLOCK();
      if (bVar9) {
        *param_3 = 1;
        return puVar2;
      }
    }
    plVar1 = puVar2 + 1;
    puVar2 = (uint64_t *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      puVar2 = puVar6;
    }
  } while( true );
}
uint64_t function_05f040(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  char cVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uVar1 = *(uint64_t *)(param_1 + 0x20);
  uVar7 = (uint64_t)((uint)uVar1 & 0x1f);
  if ((uVar1 & 0x1f) == 0) {
    uVar6 = 0;
    if (*(int64_t *)(param_1 + 0x40) == 0) {
LAB_18005f0e6:
      if ((((*(int64_t *)(param_1 + 0x28) - uVar1) - 0x20 < 0x8000000000000001) ||
          (((*(int64_t *)(param_1 + 0x80) == 0 ||
            (*(int64_t *)(param_1 + 0x60) == *(int64_t *)(param_1 + 0x68))) &&
           (cVar2 = function_05f340(param_1,*(uint64_t *)(param_1 + 0x60),uVar7,param_4,
                                  0xfffffffffffffffe), cVar2 == '\0')))) ||
         (lVar3 = function_05ff50(*(uint64_t *)(param_1 + 0x50)), lVar3 == 0)) {
        return 0;
      }
      do {
        *(int8_t *)(lVar3 + 0x110 + uVar6) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x20);
      if (*(int64_t *)(param_1 + 0x40) == 0) {
        *(int64_t *)(lVar3 + 0x100) = lVar3;
      }
      else {
        *(uint64_t *)(lVar3 + 0x100) = *(uint64_t *)(*(int64_t *)(param_1 + 0x40) + 0x100);
        *(int64_t *)(*(int64_t *)(param_1 + 0x40) + 0x100) = lVar3;
      }
      *(int64_t *)(param_1 + 0x40) = lVar3;
      *(int64_t *)(param_1 + 0x60) = *(int64_t *)(param_1 + 0x60) + 1;
    }
    else {
      uVar4 = uVar6;
      do {
        if (*(char *)(*(int64_t *)(*(int64_t *)(param_1 + 0x40) + 0x100) + 0x110 + uVar4) == '\0')
        goto LAB_18005f0e6;
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x20);
      lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x40) + 0x100);
      *(int64_t *)(param_1 + 0x40) = lVar3;
      do {
        *(int8_t *)(lVar3 + 0x110 + uVar6) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x20);
    }
    param_2 = (int64_t *)*param_2;
    **(int64_t **)(param_1 + 0x40) = (int64_t)param_2;
    if (param_2 != (int64_t *)0x0) {
      (**(code **)(*param_2 + 0x28))();
    }
    puVar5 = (uint64_t *)
             (*(int64_t *)(param_1 + 0x70) * 0x10 +
             *(int64_t *)(*(int64_t *)(param_1 + 0x58) + 0x10));
    *puVar5 = uVar1;
    puVar5[1] = *(uint64_t *)(param_1 + 0x40);
    *(uint64_t *)(*(int64_t *)(param_1 + 0x58) + 8) = *(uint64_t *)(param_1 + 0x70);
    *(uint64_t *)(param_1 + 0x70) =
         *(int64_t *)(param_1 + 0x68) - 1U & *(int64_t *)(param_1 + 0x70) + 1U;
  }
  else {
    param_2 = (int64_t *)*param_2;
    *(int64_t **)(*(int64_t *)(param_1 + 0x40) + uVar7 * 8) = param_2;
    if (param_2 != (int64_t *)0x0) {
      (**(code **)(*param_2 + 0x28))();
    }
  }
  *(uint64_t *)(param_1 + 0x20) = uVar1 + 1;
  return 1;
}
uint64_t function_05f220(int64_t param_1,int64_t *param_2)
{
  uint64_t uVar1;
  char cVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint64_t stack_special_x_18;
  int64_t *plStackX_20;
  uVar1 = *(uint64_t *)(param_1 + 0x20);
  uVar4 = (uint64_t)((uint)uVar1 & 0x1f);
  if ((uVar1 & 0x1f) != 0) {
    param_2 = (int64_t *)*param_2;
    *(int64_t **)(*(int64_t *)(param_1 + 0x40) + uVar4 * 8) = param_2;
    if (param_2 != (int64_t *)0x0) {
      (**(code **)(*param_2 + 0x28))();
    }
LAB_18005f30a:
    *(uint64_t *)(param_1 + 0x20) = uVar1 + 1;
    return 1;
  }
  if (0x8000000000000000 < (*(int64_t *)(param_1 + 0x28) - uVar1) - 0x20) {
    cVar2 = function_060080(param_1,&stack_special_x_18,uVar1,uVar4,0xfffffffffffffffe);
    if (cVar2 != '\0') {
      plVar3 = (int64_t *)function_05ff50(*(uint64_t *)(param_1 + 0x50));
      if (plVar3 != (int64_t *)0x0) {
        plVar3[0x21] = 0;
        param_2 = (int64_t *)*param_2;
        *plVar3 = (int64_t)param_2;
        if (param_2 != (int64_t *)0x0) {
          plStackX_20 = plVar3;
          (**(code **)(*param_2 + 0x28))();
        }
        *(int64_t **)(stack_special_x_18 + 8) = plVar3;
        *(int64_t **)(param_1 + 0x40) = plVar3;
        goto LAB_18005f30a;
      }
      plVar3 = *(int64_t **)(param_1 + 0x60);
      plVar3[1] = *plVar3 - 1U & plVar3[1] - 1U;
      *(uint64_t *)(stack_special_x_18 + 8) = 0;
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_05f340(int64_t param_1,int64_t param_2)
{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  lVar2 = *(int64_t *)(param_1 + 0x68);
  *(int64_t *)(param_1 + 0x68) = lVar2 * 2;
  puVar4 = (uint64_t *)SystemMemoryManager(system_memory_pool_ptr,lVar2 * 0x20 + 0x27,10);
  if (puVar4 == (uint64_t *)0x0) {
    *(uint64_t *)(param_1 + 0x68) = *(uint64_t *)(param_1 + 0x68) >> 1;
    return 0;
  }
  lVar9 = 0;
  puVar7 = (uint64_t *)((uint64_t)(-(int)(puVar4 + 4) & 7) + (int64_t)(puVar4 + 4));
  if (*(int64_t *)(param_1 + 0x60) != 0) {
    uVar5 = *(int64_t *)(param_1 + 0x70) - *(int64_t *)(param_1 + 0x60) & lVar2 - 1U;
    puVar8 = puVar7;
    do {
      lVar9 = lVar9 + 1;
      uVar6 = uVar5 + 1 & lVar2 - 1U;
      puVar1 = (uint64_t *)(*(int64_t *)(param_1 + 0x78) + uVar5 * 0x10);
      uVar3 = puVar1[1];
      *puVar8 = *puVar1;
      puVar8[1] = uVar3;
      uVar5 = uVar6;
      puVar8 = puVar8 + 2;
    } while (uVar6 != *(uint64_t *)(param_1 + 0x70));
  }
  *puVar4 = *(uint64_t *)(param_1 + 0x68);
  puVar4[1] = param_2 + -1;
  puVar4[2] = puVar7;
  uVar3 = *(uint64_t *)(param_1 + 0x80);
  puVar4[3] = uVar3;
  *(int64_t *)(param_1 + 0x70) = lVar9;
  *(uint64_t **)(param_1 + 0x78) = puVar7;
  *(uint64_t **)(param_1 + 0x80) = puVar4;
  *(uint64_t **)(param_1 + 0x58) = puVar4;
  return CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_05f430(int64_t param_1)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  plVar1 = *(int64_t **)(param_1 + 0x60);
  if (plVar1 == (int64_t *)0x0) {
    lVar3 = *(int64_t *)(param_1 + 0x58);
    lVar8 = lVar3;
    lVar9 = 0;
  }
  else {
    lVar8 = *plVar1;
    lVar3 = *(int64_t *)(param_1 + 0x58);
    lVar9 = lVar8;
  }
  puVar4 = (uint64_t *)SystemMemoryManager(system_memory_pool_ptr,(lVar3 + lVar8 * 2) * 8 + 0x36,10);
  puVar10 = puVar4;
  if (puVar4 != (uint64_t *)0x0) {
    puVar11 = (uint64_t *)((uint64_t)(-(int)(puVar4 + 5) & 7) + (int64_t)(puVar4 + 5));
    puVar10 = (uint64_t *)
              ((uint64_t)(-(int)(puVar11 + lVar8 * 2) & 7) + (int64_t)(puVar11 + lVar8 * 2));
    if (plVar1 != (int64_t *)0x0) {
      uVar2 = plVar1[1];
      uVar7 = uVar2;
      puVar6 = puVar10;
      do {
        uVar7 = *plVar1 - 1U & uVar7 + 1;
        *puVar6 = *(uint64_t *)(plVar1[3] + uVar7 * 8);
        puVar6 = puVar6 + 1;
      } while (uVar7 != uVar2);
    }
    if (lVar8 != 0) {
      puVar6 = puVar10 + lVar9;
      puVar5 = puVar11;
      do {
        *puVar5 = 1;
        *puVar6 = puVar5;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    puVar4[4] = plVar1;
    puVar4[2] = puVar11;
    puVar4[3] = puVar10;
    *puVar4 = *(uint64_t *)(param_1 + 0x58);
    puVar4[1] = *(int64_t *)(param_1 + 0x58) - 1U & lVar9 - 1U;
    puVar10 = (uint64_t *)CONCAT71((int7)(lVar9 - 1U >> 8),1);
    *(uint64_t **)(param_1 + 0x60) = puVar4;
    *(int64_t *)(param_1 + 0x58) = *(int64_t *)(param_1 + 0x58) << 1;
  }
  return puVar10;
}
uint64_t function_05f490(void)
{
  uint64_t uVar1;
  int64_t in_RAX;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  uint64_t *in_R9;
  uint64_t *puVar5;
  uint64_t *puVar6;
  puVar6 = (uint64_t *)((uint64_t)(-(int)in_RAX & 7) + in_RAX);
  puVar5 = (uint64_t *)
           ((uint64_t)(-(int)(puVar6 + unaff_RBX * 2) & 7) + (int64_t)(puVar6 + unaff_RBX * 2));
  if (unaff_RDI != (int64_t *)0x0) {
    uVar1 = unaff_RDI[1];
    uVar4 = uVar1;
    puVar3 = puVar5;
    do {
      uVar4 = *unaff_RDI - 1U & uVar4 + 1;
      *puVar3 = *(uint64_t *)(unaff_RDI[3] + uVar4 * 8);
      puVar3 = puVar3 + 1;
    } while (uVar4 != uVar1);
  }
  if (unaff_RBX != 0) {
    puVar3 = puVar5 + unaff_RBP;
    puVar2 = puVar6;
    do {
      *puVar2 = 1;
      *puVar3 = puVar2;
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 2;
      unaff_RBX = unaff_RBX + -1;
    } while (unaff_RBX != 0);
  }
  in_R9[4] = unaff_RDI;
  in_R9[2] = puVar6;
  in_R9[3] = puVar5;
  *in_R9 = *(uint64_t *)(unaff_RSI + 0x58);
  in_R9[1] = *(int64_t *)(unaff_RSI + 0x58) - 1U & unaff_RBP - 1U;
  *(uint64_t **)(unaff_RSI + 0x60) = in_R9;
  *(int64_t *)(unaff_RSI + 0x58) = *(int64_t *)(unaff_RSI + 0x58) << 1;
  return CONCAT71((int7)(unaff_RBP - 1U >> 8),1);
}