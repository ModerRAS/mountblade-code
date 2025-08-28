#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part011_sub002.c - 1 个函数

// 函数: void FUN_1804a5260(void)
void FUN_1804a5260(void)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int8_t auStack_178 [48];
  longlong lStack_148;
  longlong lStack_140;
  int8_t auStack_138 [256];
  ulonglong uStack_38;
  uint64_t uStack_30;
  
  if (_DAT_180c92590 != 0) {
    uStack_30 = 0x1804a5275;
    FUN_18056de00();
  }
  if (_DAT_180c92598 != 0) {
    uStack_30 = 0x1804a5286;
    FUN_1805f6af0();
  }
  uStack_30 = 0x1804a5297;
  cVar3 = (**(code **)(_DAT_180c925c8 + 0x30))(&system_counter_25c8);
  if (cVar3 == '\0') {
    return;
  }
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  uVar9 = 0;
  do {
    puVar7 = puRam0000000180c92bb8;
    uVar11 = *puRam0000000180c92bb8;
    if ((uVar11 == puRam0000000180c92bb8[1]) &&
       (puVar1 = puRam0000000180c92bb8 + 8, puRam0000000180c92bb8[1] = *puVar1,
       puVar2 = puRam0000000180c92bb8, uVar11 == *puVar1)) {
      if (puVar7 == puRam0000000180c92bf8) {
        uVar11 = uVar9;
        uVar13 = uVar9;
        if ((longlong)(uRam0000000180c95b80 - lRam0000000180c95b78) >> 3 != 0) {
          do {
            iVar8 = (int)uVar11;
            if ((*(longlong *)(uVar13 + lRam0000000180c95b78) != 0) &&
               (uVar12 = _DAT_180c92ce0 - (longlong)_DAT_180c92cd8 >> 3, plVar5 = _DAT_180c92cd8,
               uVar11 = uVar9, uVar12 != 0)) {
              do {
                if (*plVar5 == *(longlong *)(uVar13 + lRam0000000180c95b78)) {
                  if ((int)uVar11 != -1) {
                    FUN_18055c930(&system_counter_25a0,uVar11,0);
                    lVar10 = lRam0000000180c95b78 + (longlong)iVar8 * 8;
                    uVar11 = lVar10 + 8;
                    if (uVar11 < uRam0000000180c95b80) {
                    // WARNING: Subroutine does not return
                      memmove(lVar10,uVar11,uRam0000000180c95b80 - uVar11);
                    }
                    uRam0000000180c95b80 = uRam0000000180c95b80 - 8;
                    iVar8 = iVar8 + -1;
                    uVar13 = uVar13 - 8;
                  }
                  break;
                }
                uVar6 = (int)uVar11 + 1;
                uVar11 = (ulonglong)uVar6;
                plVar5 = plVar5 + 1;
              } while ((ulonglong)(longlong)(int)uVar6 < uVar12);
            }
            uVar11 = (ulonglong)(iVar8 + 1U);
            uVar13 = uVar13 + 8;
          } while ((ulonglong)(longlong)(int)(iVar8 + 1U) <
                   (ulonglong)((longlong)(uRam0000000180c95b80 - lRam0000000180c95b78) >> 3));
        }
        uVar11 = uVar9;
        if (_DAT_180c92ce0 - (longlong)_DAT_180c92cd8 >> 3 != 0) {
          do {
            iVar8 = (int)uVar9;
            lVar10 = *(longlong *)(uVar11 + (longlong)_DAT_180c92cd8);
            if (*(char *)(lVar10 + 0x31) == '\0') {
              lVar4 = _DAT_180c8ed58;
              if (_DAT_180c8ed58 == 0) {
                QueryPerformanceCounter(&lStack_140);
                lVar4 = lStack_140;
              }
              if (*(double *)(lVar10 + 0x20) + 20.0 <
                  (double)(lVar4 - _DAT_180c8ed48) * _DAT_180c8ed50) {
                FUN_18055c930(&system_counter_25a0,uVar9,1);
                iVar8 = iVar8 + -1;
                uVar11 = uVar11 - 8;
              }
            }
            uVar9 = (ulonglong)(iVar8 + 1U);
            uVar11 = uVar11 + 8;
          } while ((ulonglong)(longlong)(int)(iVar8 + 1U) <
                   (ulonglong)(_DAT_180c92ce0 - (longlong)_DAT_180c92cd8 >> 3));
        }
                    // WARNING: Subroutine does not return
        FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
      }
      puVar1 = puRam0000000180c92bb8 + 8;
      puRam0000000180c92bb8[1] = *puVar1;
      uVar11 = *puVar2;
      puVar7 = puVar2;
      if (uVar11 != *puVar1) goto LAB_18055c268;
      puVar7 = (ulonglong *)puVar2[0x10];
      uVar11 = *puVar7;
      puVar7[1] = puVar7[8];
      lVar10 = *(longlong *)(puVar7[0x11] + uVar11 * 8);
      uVar13 = puVar7[0x12];
      puRam0000000180c92bb8 = puVar7;
    }
    else {
LAB_18055c268:
      lVar10 = *(longlong *)(puVar7[0x11] + uVar11 * 8);
      uVar13 = puVar7[0x12];
    }
    *puVar7 = uVar13 & uVar11 + 1;
    *(int32_t *)(lVar10 + 0x5c4) = 0;
    cVar3 = FUN_18055cde0(&system_counter_25a0,lVar10,lVar10 + 0x5d0);
    if (cVar3 == '\0') {
                    // WARNING: Subroutine does not return
      memset(auStack_138,0,0x100);
    }
    lStack_148 = lVar10;
    FUN_1805603c0(0x180c92c08,&lStack_148);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





