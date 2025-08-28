#include "TaleWorlds.Native.Split.h"

// 99_part_09_part087.c - 1 个函数

// 函数: void FUN_1805f8240(uint64_t *param_1,int param_2,int param_3)
void FUN_1805f8240(uint64_t *param_1,int param_2,int param_3)

{
  float *pfVar1;
  char cVar2;
  float fVar3;
  longlong lVar4;
  float *pfVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int8_t auVar13 [16];
  
  if (param_2 < param_3) {
    uVar9 = (ulonglong)param_2;
    lVar10 = uVar9 * 0xd080;
    lVar8 = uVar9 * 8 + 4;
    uVar12 = (ulonglong)(uint)(param_3 - param_2);
    do {
      if (*(char *)*param_1 == '\0') {
LAB_1805f82de:
        *(int8_t *)param_1[3] = 1;
        lVar7 = *(longlong *)param_1[4];
        pfVar5 = (float *)param_1[5];
        fVar3 = *(float *)(lVar7 + 0x1a10 + lVar10);
        if (((*pfVar5 <= fVar3 && fVar3 != *pfVar5) ||
            (pfVar5[1] < *(float *)(lVar7 + 0x1a14 + lVar10))) ||
           (pfVar5[2] < *(float *)(lVar7 + 0x1a18 + lVar10))) {
          pcVar6 = (char *)param_1[6];
          do {
            do {
            } while (*pcVar6 != '\0');
            LOCK();
            cVar2 = *pcVar6;
            if (cVar2 == '\0') {
              *pcVar6 = '\x01';
            }
            UNLOCK();
          } while (cVar2 != '\0');
          auVar13 = maxps(*(int8_t (*) [16])param_1[5],
                          *(int8_t (*) [16])(lVar7 + 0x1a10 + lVar10));
          *(int8_t (*) [16])param_1[5] = auVar13;
          *pcVar6 = '\0';
          fVar3 = *(float *)(lVar7 + 0x1a10 + lVar10);
        }
        pfVar5 = (float *)param_1[7];
        if (((fVar3 < *pfVar5) ||
            (pfVar1 = (float *)(lVar7 + 0x1a14 + lVar10),
            *pfVar1 <= pfVar5[1] && pfVar5[1] != *pfVar1)) ||
           (pfVar1 = (float *)(lVar7 + 0x1a18 + lVar10),
           *pfVar1 <= pfVar5[2] && pfVar5[2] != *pfVar1)) {
          pcVar6 = (char *)param_1[6];
          do {
            do {
            } while (*pcVar6 != '\0');
            LOCK();
            cVar2 = *pcVar6;
            if (cVar2 == '\0') {
              *pcVar6 = '\x01';
            }
            UNLOCK();
          } while (cVar2 != '\0');
          auVar13 = minps(*(int8_t (*) [16])param_1[7],
                          *(int8_t (*) [16])(lVar7 + 0x1a10 + lVar10));
          *(int8_t (*) [16])param_1[7] = auVar13;
          *pcVar6 = '\0';
        }
      }
      else {
        lVar7 = 0;
        if (0 < *(int *)param_1[1]) {
          plVar11 = *(longlong **)param_1[2];
          do {
            lVar4 = *(longlong *)(*plVar11 + 0x5960);
            if ((uVar9 < (ulonglong)(*(longlong *)(*plVar11 + 0x5968) - lVar4 >> 3)) &&
               ((*(byte *)(lVar4 + lVar8) & 4) != 0)) goto LAB_1805f82de;
            lVar7 = lVar7 + 1;
            plVar11 = plVar11 + 1;
          } while (lVar7 < *(int *)param_1[1]);
        }
        if (*(char *)*param_1 == '\0') goto LAB_1805f82de;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 8;
      lVar10 = lVar10 + 0xd080;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




