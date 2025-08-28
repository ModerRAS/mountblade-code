#include "TaleWorlds.Native.Split.h"

// 99_part_03_part031.c - 5 个函数

// 函数: void FUN_1801ea0a0(longlong param_1,uint64_t param_2,longlong param_3,char param_4,uint *param_5)
void FUN_1801ea0a0(longlong param_1,uint64_t param_2,longlong param_3,char param_4,uint *param_5)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint64_t uVar7;
  
  if ((param_4 == '\0') && (param_3 != param_1)) {
    if (*(uint *)(param_3 + 0x20) <= *param_5) {
      if (*param_5 <= *(uint *)(param_3 + 0x20)) {
        if ((ushort)param_5[4] < *(ushort *)(param_3 + 0x30)) goto LAB_1801ea11f;
        if ((ushort)param_5[4] <= *(ushort *)(param_3 + 0x30)) {
          if (param_5[1] < *(uint *)(param_3 + 0x24)) goto LAB_1801ea11f;
          if (param_5[1] <= *(uint *)(param_3 + 0x24)) {
            if (param_5[2] < *(uint *)(param_3 + 0x28)) goto LAB_1801ea11f;
            if (param_5[2] <= *(uint *)(param_3 + 0x28)) {
              if ((param_5[3] < *(uint *)(param_3 + 0x2c)) ||
                 ((param_5[3] <= *(uint *)(param_3 + 0x2c) &&
                  (*(byte *)((longlong)param_5 + 0x12) < *(byte *)(param_3 + 0x32)))))
              goto LAB_1801ea11f;
            }
          }
        }
      }
      uVar7 = 1;
      goto LAB_1801ea122;
    }
  }
LAB_1801ea11f:
  uVar7 = 0;
LAB_1801ea122:
  plVar1 = *(longlong **)(param_1 + 0x28);
  uVar5 = (longlong)(int)plVar1[2] + 0xfU & 0xfffffffffffffff0;
  lVar6 = *plVar1 + uVar5;
  *(int *)(plVar1 + 2) = (int)uVar5 + 0x38;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(uint *)(lVar6 + 0x20) = *param_5;
  *(uint *)(lVar6 + 0x24) = uVar2;
  *(uint *)(lVar6 + 0x28) = uVar3;
  *(uint *)(lVar6 + 0x2c) = uVar4;
  *(uint *)(lVar6 + 0x30) = param_5[4];
  *(int32_t *)(lVar6 + 0x34) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar6,param_3,param_1,uVar7);
}



longlong * FUN_1801ea180(longlong *param_1,longlong *param_2,int8_t *param_3,uint *param_4)

{
  uint uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  if ((param_2 == plVar2) || (param_2 == param_1)) {
    if (param_1[4] != 0) {
      if (*(uint *)(plVar2 + 4) < *param_4) {
LAB_1801ea2ee:
        *param_3 = 0;
        return plVar2;
      }
      if (*(uint *)(plVar2 + 4) <= *param_4) {
        if (*(ushort *)(plVar2 + 6) < (ushort)param_4[4]) goto LAB_1801ea2ee;
        if (*(ushort *)(plVar2 + 6) <= (ushort)param_4[4]) {
          if (*(uint *)((longlong)plVar2 + 0x24) < param_4[1]) goto LAB_1801ea2ee;
          if (*(uint *)((longlong)plVar2 + 0x24) <= param_4[1]) {
            if (*(uint *)(plVar2 + 5) < param_4[2]) goto LAB_1801ea2ee;
            if (*(uint *)(plVar2 + 5) <= param_4[2]) {
              if ((*(uint *)((longlong)plVar2 + 0x2c) < param_4[3]) ||
                 ((*(uint *)((longlong)plVar2 + 0x2c) <= param_4[3] &&
                  (*(byte *)((longlong)plVar2 + 0x32) < *(byte *)((longlong)param_4 + 0x12)))))
              goto LAB_1801ea2ee;
            }
          }
        }
      }
    }
    goto LAB_1801ea302;
  }
  plVar2 = (longlong *)func_0x00018066bd70(param_2);
  uVar1 = *param_4;
  if (uVar1 <= *(uint *)(param_2 + 4)) {
    if (uVar1 < *(uint *)(param_2 + 4)) goto LAB_1801ea302;
    if ((ushort)param_4[4] <= *(ushort *)(param_2 + 6)) {
      if ((ushort)param_4[4] < *(ushort *)(param_2 + 6)) goto LAB_1801ea302;
      if (param_4[1] <= *(uint *)((longlong)param_2 + 0x24)) {
        if (param_4[1] < *(uint *)((longlong)param_2 + 0x24)) goto LAB_1801ea302;
        if (param_4[2] <= *(uint *)(param_2 + 5)) {
          if (param_4[2] < *(uint *)(param_2 + 5)) goto LAB_1801ea302;
          if ((param_4[3] <= *(uint *)((longlong)param_2 + 0x2c)) &&
             ((param_4[3] < *(uint *)((longlong)param_2 + 0x2c) ||
              (*(byte *)((longlong)param_4 + 0x12) <= *(byte *)((longlong)param_2 + 0x32)))))
          goto LAB_1801ea302;
        }
      }
    }
  }
  if (*(uint *)(plVar2 + 4) <= uVar1) {
    if (uVar1 <= *(uint *)(plVar2 + 4)) {
      if ((ushort)param_4[4] < *(ushort *)(plVar2 + 6)) goto LAB_1801ea26e;
      if ((ushort)param_4[4] <= *(ushort *)(plVar2 + 6)) {
        if (param_4[1] < *(uint *)((longlong)plVar2 + 0x24)) goto LAB_1801ea26e;
        if (param_4[1] <= *(uint *)((longlong)plVar2 + 0x24)) {
          if (param_4[2] < *(uint *)(plVar2 + 5)) goto LAB_1801ea26e;
          if (param_4[2] <= *(uint *)(plVar2 + 5)) {
            if ((param_4[3] < *(uint *)((longlong)plVar2 + 0x2c)) ||
               ((param_4[3] <= *(uint *)((longlong)plVar2 + 0x2c) &&
                (*(byte *)((longlong)param_4 + 0x12) < *(byte *)((longlong)plVar2 + 0x32)))))
            goto LAB_1801ea26e;
          }
        }
      }
    }
LAB_1801ea302:
    *param_3 = 0;
    return (longlong *)0x0;
  }
LAB_1801ea26e:
  if (*param_2 != 0) {
    *param_3 = 1;
    return plVar2;
  }
  *param_3 = 0;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ea320(longlong param_1,uint64_t param_2,longlong param_3,char param_4,uint *param_5)
void FUN_1801ea320(longlong param_1,uint64_t param_2,longlong param_3,char param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int32_t uVar5;
  
  if ((param_4 == '\0') && (param_3 != param_1)) {
    if (*(uint *)(param_3 + 0x20) <= *param_5) {
      if (*param_5 <= *(uint *)(param_3 + 0x20)) {
        if ((ushort)param_5[4] < *(ushort *)(param_3 + 0x30)) goto LAB_1801ea3a1;
        if ((ushort)param_5[4] <= *(ushort *)(param_3 + 0x30)) {
          if (param_5[1] < *(uint *)(param_3 + 0x24)) goto LAB_1801ea3a1;
          if (param_5[1] <= *(uint *)(param_3 + 0x24)) {
            if (param_5[2] < *(uint *)(param_3 + 0x28)) goto LAB_1801ea3a1;
            if (param_5[2] <= *(uint *)(param_3 + 0x28)) {
              if ((param_5[3] < *(uint *)(param_3 + 0x2c)) ||
                 ((param_5[3] <= *(uint *)(param_3 + 0x2c) &&
                  (*(byte *)((longlong)param_5 + 0x12) < *(byte *)(param_3 + 0x32)))))
              goto LAB_1801ea3a1;
            }
          }
        }
      }
      uVar5 = 1;
      goto LAB_1801ea3a3;
    }
  }
LAB_1801ea3a1:
  uVar5 = 0;
LAB_1801ea3a3:
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0x38,*(int8_t *)(param_1 + 0x28));
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(uint *)(lVar4 + 0x20) = *param_5;
  *(uint *)(lVar4 + 0x24) = uVar1;
  *(uint *)(lVar4 + 0x28) = uVar2;
  *(uint *)(lVar4 + 0x2c) = uVar3;
  *(uint *)(lVar4 + 0x30) = param_5[4];
  *(int32_t *)(lVar4 + 0x34) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,param_3,param_1,uVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1801ea410(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,longlong param_4)

{
  byte bVar1;
  bool bVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  byte *pbVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  bVar2 = true;
  puVar4 = (uint64_t *)param_1[2];
  puVar3 = param_1;
  while (puVar4 != (uint64_t *)0x0) {
    puVar3 = puVar4;
    if (*(int *)(puVar4 + 6) == 0) {
      bVar2 = false;
LAB_1801ea460:
      puVar4 = (uint64_t *)*puVar4;
    }
    else {
      if (*(int *)(param_4 + 0x10) == 0) {
        bVar2 = true;
      }
      else {
        pbVar5 = (byte *)puVar4[5];
        lVar8 = *(longlong *)(param_4 + 8) - (longlong)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar8];
          if (bVar1 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar6);
      }
      if (!bVar2) goto LAB_1801ea460;
      puVar4 = (uint64_t *)puVar4[1];
    }
  }
  puVar4 = puVar3;
  if (bVar2) {
    if (puVar3 != (uint64_t *)param_1[1]) {
      puVar4 = (uint64_t *)func_0x00018066b9a0(puVar3);
      goto LAB_1801ea480;
    }
  }
  else {
LAB_1801ea480:
    if (*(int *)(param_4 + 0x10) == 0) {
LAB_1801ea5bb:
      *param_2 = puVar4;
      *(int8_t *)(param_2 + 1) = 0;
      return param_2;
    }
    if (*(int *)(puVar4 + 6) != 0) {
      pbVar5 = *(byte **)(param_4 + 8);
      lVar8 = puVar4[5] - (longlong)pbVar5;
      do {
        bVar1 = *pbVar5;
        uVar6 = (uint)pbVar5[lVar8];
        if (bVar1 != uVar6) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_1801ea5bb;
    }
  }
  if (puVar3 != param_1) {
    if (*(int *)(puVar3 + 6) == 0) {
LAB_1801ea4f7:
      uVar9 = 1;
      goto LAB_1801ea540;
    }
    if (*(int *)(param_4 + 0x10) != 0) {
      pbVar5 = (byte *)puVar3[5];
      lVar8 = *(longlong *)(param_4 + 8) - (longlong)pbVar5;
      do {
        bVar1 = *pbVar5;
        uVar6 = (uint)pbVar5[lVar8];
        if (bVar1 != uVar6) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_1801ea4f7;
    }
  }
  uVar9 = 0;
LAB_1801ea540:
  lVar8 = FUN_18062b420(_DAT_180c8ed18,0x70,*(int8_t *)(param_1 + 5));
  FUN_180627ae0(lVar8 + 0x20,param_4);
  lVar7 = lVar8 + 0x40;
  *(uint64_t *)(lVar8 + 0x68) = 0;
  *(uint64_t *)(lVar8 + 0x58) = 0;
  *(int32_t *)(lVar8 + 0x68) = 3;
  *(longlong *)lVar7 = lVar7;
  *(longlong *)(lVar8 + 0x48) = lVar7;
  *(uint64_t *)(lVar8 + 0x50) = 0;
  *(int8_t *)(lVar8 + 0x58) = 0;
  *(uint64_t *)(lVar8 + 0x60) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar8,puVar3,param_1,uVar9,uVar10,lVar7);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1801ea5e0(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,int *param_4)

{
  bool bVar1;
  uint64_t *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  bVar1 = true;
  puVar6 = param_1;
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    puVar2 = (uint64_t *)param_1[2];
    do {
      puVar6 = puVar2;
      if ((*param_4 < *(int *)(puVar6 + 4)) ||
         ((*param_4 <= *(int *)(puVar6 + 4) &&
          (*(byte *)(param_4 + 1) < *(byte *)((longlong)puVar6 + 0x24))))) {
        bVar1 = true;
        puVar2 = (uint64_t *)puVar6[1];
      }
      else {
        bVar1 = false;
        puVar2 = (uint64_t *)*puVar6;
      }
    } while (puVar2 != (uint64_t *)0x0);
  }
  puVar2 = puVar6;
  if (bVar1) {
    if (puVar6 == (uint64_t *)param_1[1]) {
      iVar4 = *param_4;
      goto LAB_1801ea684;
    }
    puVar2 = (uint64_t *)func_0x00018066b9a0(puVar6);
  }
  iVar4 = *param_4;
  if ((iVar4 <= *(int *)(puVar2 + 4)) &&
     ((iVar4 < *(int *)(puVar2 + 4) ||
      (*(byte *)(param_4 + 1) <= *(byte *)((longlong)puVar2 + 0x24))))) {
    *param_2 = puVar2;
    *(int8_t *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_1801ea684:
  if ((puVar6 == param_1) ||
     ((iVar4 < *(int *)(puVar6 + 4) ||
      ((iVar4 <= *(int *)(puVar6 + 4) &&
       (*(byte *)(param_4 + 1) < *(byte *)((longlong)puVar6 + 0x24))))))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  lVar3 = FUN_18062b420(_DAT_180c8ed18,0x58,*(int8_t *)(param_1 + 5));
  *(uint64_t *)(lVar3 + 0x20) = *(uint64_t *)param_4;
  lVar5 = lVar3 + 0x28;
  *(uint64_t *)(lVar3 + 0x40) = 0;
  *(int32_t *)(lVar3 + 0x50) = 3;
  *(longlong *)lVar5 = lVar5;
  *(longlong *)(lVar3 + 0x30) = lVar5;
  *(uint64_t *)(lVar3 + 0x38) = 0;
  *(int8_t *)(lVar3 + 0x40) = 0;
  *(uint64_t *)(lVar3 + 0x48) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar3,puVar6,param_1,uVar7,uVar8,lVar5);
}



uint64_t * FUN_1801ea730(uint64_t *param_1,int8_t *param_2,uint *param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  bool bVar3;
  
  bVar3 = true;
  puVar2 = param_1;
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    puVar1 = (uint64_t *)param_1[2];
    do {
      puVar2 = puVar1;
      if (*param_3 < *(uint *)(puVar2 + 4)) {
LAB_1801ea7ae:
        puVar1 = (uint64_t *)puVar2[1];
        bVar3 = true;
      }
      else {
        if (*param_3 <= *(uint *)(puVar2 + 4)) {
          if ((ushort)param_3[4] < *(ushort *)(puVar2 + 6)) goto LAB_1801ea7ae;
          if ((ushort)param_3[4] <= *(ushort *)(puVar2 + 6)) {
            if (param_3[1] < *(uint *)((longlong)puVar2 + 0x24)) goto LAB_1801ea7ae;
            if (param_3[1] <= *(uint *)((longlong)puVar2 + 0x24)) {
              if (param_3[2] < *(uint *)(puVar2 + 5)) goto LAB_1801ea7ae;
              if (param_3[2] <= *(uint *)(puVar2 + 5)) {
                if ((param_3[3] < *(uint *)((longlong)puVar2 + 0x2c)) ||
                   ((param_3[3] <= *(uint *)((longlong)puVar2 + 0x2c) &&
                    (*(byte *)((longlong)param_3 + 0x12) < *(byte *)((longlong)puVar2 + 0x32)))))
                goto LAB_1801ea7ae;
              }
            }
          }
        }
        puVar1 = (uint64_t *)*puVar2;
        bVar3 = false;
      }
    } while (puVar1 != (uint64_t *)0x0);
  }
  puVar1 = puVar2;
  if (bVar3) {
    if (puVar2 == (uint64_t *)param_1[1]) {
      *param_2 = 1;
      return puVar2;
    }
    puVar1 = (uint64_t *)func_0x00018066b9a0(puVar2);
  }
  if (*param_3 <= *(uint *)(puVar1 + 4)) {
    if (*(uint *)(puVar1 + 4) <= *param_3) {
      if (*(ushort *)(puVar1 + 6) < (ushort)param_3[4]) goto LAB_1801ea849;
      if (*(ushort *)(puVar1 + 6) <= (ushort)param_3[4]) {
        if (*(uint *)((longlong)puVar1 + 0x24) < param_3[1]) goto LAB_1801ea849;
        if (*(uint *)((longlong)puVar1 + 0x24) <= param_3[1]) {
          if (*(uint *)(puVar1 + 5) < param_3[2]) goto LAB_1801ea849;
          if (*(uint *)(puVar1 + 5) <= param_3[2]) {
            if ((*(uint *)((longlong)puVar1 + 0x2c) < param_3[3]) ||
               ((*(uint *)((longlong)puVar1 + 0x2c) <= param_3[3] &&
                (*(byte *)((longlong)puVar1 + 0x32) < *(byte *)((longlong)param_3 + 0x12)))))
            goto LAB_1801ea849;
          }
        }
      }
    }
    *param_2 = 0;
    return puVar1;
  }
LAB_1801ea849:
  *param_2 = 1;
  return puVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1801ea860(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,ulonglong *param_4)

{
  ulonglong *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  uint64_t *puVar8;
  longlong lVar9;
  bool bVar10;
  uint64_t uVar11;
  uint uStack_18;
  ushort uStack_14;
  
  uVar4 = *param_4;
  puVar1 = param_4 + 1;
  uVar5 = *puVar1;
  uStack_14 = (ushort)(param_4[2] >> 0x20);
  uStack_18 = (uint)param_4[2];
  bVar10 = true;
  puVar8 = (uint64_t *)param_1[2];
  puVar6 = param_1;
  while (puVar8 != (uint64_t *)0x0) {
    puVar6 = puVar8;
    if ((*param_4 < (ulonglong)puVar8[4]) ||
       ((*param_4 <= (ulonglong)puVar8[4] &&
        ((*puVar1 < (ulonglong)puVar8[5] ||
         ((*puVar1 <= (ulonglong)puVar8[5] &&
          ((uStack_18 < *(uint *)(puVar8 + 6) ||
           ((uStack_18 <= *(uint *)(puVar8 + 6) &&
            (uStack_14 < *(ushort *)((longlong)puVar8 + 0x34))))))))))))) {
      bVar10 = true;
      puVar8 = (uint64_t *)puVar8[1];
    }
    else {
      bVar10 = false;
      puVar8 = (uint64_t *)*puVar8;
    }
  }
  puVar8 = puVar6;
  if (bVar10) {
    if (puVar6 == (uint64_t *)param_1[1]) goto LAB_1801ea94d;
    puVar8 = (uint64_t *)func_0x00018066b9a0(puVar6);
  }
  if ((*param_4 <= (ulonglong)puVar8[4]) &&
     ((*param_4 < (ulonglong)puVar8[4] ||
      ((*puVar1 <= (ulonglong)puVar8[5] &&
       ((*puVar1 < (ulonglong)puVar8[5] ||
        ((uStack_18 <= *(uint *)(puVar8 + 6) &&
         ((uStack_18 < *(uint *)(puVar8 + 6) || (uStack_14 <= *(ushort *)((longlong)puVar8 + 0x34)))
         )))))))))) {
    *param_2 = puVar8;
    *(int8_t *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_1801ea94d:
  lVar9 = FUN_18062b420(_DAT_180c8ed18,0x38,*(int8_t *)(param_1 + 5));
  uVar2 = *(int32_t *)((longlong)param_4 + 4);
  uVar7 = param_4[1];
  uVar3 = *(int32_t *)((longlong)param_4 + 0xc);
  *(int *)(lVar9 + 0x20) = (int)*param_4;
  *(int32_t *)(lVar9 + 0x24) = uVar2;
  *(int *)(lVar9 + 0x28) = (int)uVar7;
  *(int32_t *)(lVar9 + 0x2c) = uVar3;
  *(ulonglong *)(lVar9 + 0x30) = param_4[2];
  if (((puVar6 == param_1) || (uVar4 < (ulonglong)puVar6[4])) ||
     ((uVar4 <= (ulonglong)puVar6[4] &&
      ((uVar5 < (ulonglong)puVar6[5] ||
       ((uVar5 <= (ulonglong)puVar6[5] &&
        ((uStack_18 < *(uint *)(puVar6 + 6) ||
         ((uStack_18 <= *(uint *)(puVar6 + 6) && (uStack_14 < *(ushort *)((longlong)puVar6 + 0x34)))
         )))))))))) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar9,puVar6,param_1,uVar11);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1801ea9f0(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint *param_4)

{
  bool bVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint uVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  bVar1 = true;
  puVar5 = param_1;
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    puVar2 = (uint64_t *)param_1[2];
    do {
      puVar5 = puVar2;
      if ((*param_4 < *(uint *)(puVar5 + 4)) ||
         ((*param_4 <= *(uint *)(puVar5 + 4) && (param_4[1] < *(uint *)((longlong)puVar5 + 0x24)))))
      {
        bVar1 = true;
        puVar2 = (uint64_t *)puVar5[1];
      }
      else {
        bVar1 = false;
        puVar2 = (uint64_t *)*puVar5;
      }
    } while (puVar2 != (uint64_t *)0x0);
  }
  puVar2 = puVar5;
  if (bVar1) {
    if (puVar5 == (uint64_t *)param_1[1]) {
      uVar4 = *param_4;
      goto LAB_1801eaa92;
    }
    puVar2 = (uint64_t *)func_0x00018066b9a0(puVar5);
  }
  uVar4 = *param_4;
  if ((uVar4 <= *(uint *)(puVar2 + 4)) &&
     ((uVar4 < *(uint *)(puVar2 + 4) || (param_4[1] <= *(uint *)((longlong)puVar2 + 0x24))))) {
    *param_2 = puVar2;
    *(int8_t *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_1801eaa92:
  uVar6 = 0;
  if (((puVar5 != param_1) && (*(uint *)(puVar5 + 4) <= uVar4)) &&
     ((*(uint *)(puVar5 + 4) < uVar4 || (*(uint *)((longlong)puVar5 + 0x24) <= param_4[1])))) {
    uVar6 = 1;
  }
  lVar3 = FUN_18062b420(_DAT_180c8ed18,0x48,*(int8_t *)(param_1 + 5));
  *(uint64_t *)(lVar3 + 0x20) = *(uint64_t *)param_4;
  puVar2 = (uint64_t *)(lVar3 + 0x28);
  *puVar2 = &UNK_18098bcb0;
  *(uint64_t *)(lVar3 + 0x30) = 0;
  *(int32_t *)(lVar3 + 0x38) = 0;
  *puVar2 = &UNK_180a3c3e0;
  *(uint64_t *)(lVar3 + 0x40) = 0;
  *(uint64_t *)(lVar3 + 0x30) = 0;
  *(int32_t *)(lVar3 + 0x38) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar3,puVar5,param_1,uVar6,uVar7,puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801eab50(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_1801eab50(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  uint *param_5)

{
  longlong lVar1;
  uint64_t uVar2;
  
  uVar2 = 0;
  if (((char)param_4 == '\0') && (param_3 != param_1)) {
    if ((*(uint *)(param_3 + 0x20) <= *param_5) &&
       ((*(uint *)(param_3 + 0x20) < *param_5 || (*(uint *)(param_3 + 0x24) <= param_5[1])))) {
      uVar2 = 1;
    }
  }
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x48,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  *(uint64_t *)(lVar1 + 0x20) = *(uint64_t *)param_5;
  *(uint64_t *)(lVar1 + 0x28) = &UNK_18098bcb0;
  *(uint64_t *)(lVar1 + 0x30) = 0;
  *(int32_t *)(lVar1 + 0x38) = 0;
  *(uint64_t *)(lVar1 + 0x28) = &UNK_180a3c3e0;
  *(uint64_t *)(lVar1 + 0x40) = 0;
  *(uint64_t *)(lVar1 + 0x30) = 0;
  *(int32_t *)(lVar1 + 0x38) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1,param_3,param_1,uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1801eac40(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,longlong param_4)

{
  byte bVar1;
  bool bVar2;
  uint64_t *puVar3;
  longlong lVar4;
  uint64_t *puVar5;
  byte *pbVar6;
  uint uVar7;
  longlong lVar8;
  uint64_t uVar9;
  
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0x48,*(int8_t *)(param_1 + 5),param_4,0xfffffffffffffffe)
  ;
  *(uint64_t *)(lVar4 + 0x20) = &UNK_18098bcb0;
  uVar9 = 0;
  *(uint64_t *)(lVar4 + 0x28) = 0;
  *(int32_t *)(lVar4 + 0x30) = 0;
  *(uint64_t *)(lVar4 + 0x20) = &UNK_180a3c3e0;
  *(uint64_t *)(lVar4 + 0x38) = 0;
  *(uint64_t *)(lVar4 + 0x28) = 0;
  *(int32_t *)(lVar4 + 0x30) = 0;
  *(int32_t *)(lVar4 + 0x30) = *(int32_t *)(param_4 + 0x10);
  *(uint64_t *)(lVar4 + 0x28) = *(uint64_t *)(param_4 + 8);
  *(int32_t *)(lVar4 + 0x3c) = *(int32_t *)(param_4 + 0x1c);
  *(int32_t *)(lVar4 + 0x38) = *(int32_t *)(param_4 + 0x18);
  *(int32_t *)(param_4 + 0x10) = 0;
  *(uint64_t *)(param_4 + 8) = 0;
  *(uint64_t *)(param_4 + 0x18) = 0;
  *(int16_t *)(lVar4 + 0x40) = *(int16_t *)(param_4 + 0x20);
  bVar2 = true;
  puVar5 = (uint64_t *)param_1[2];
  puVar3 = param_1;
  while (puVar5 != (uint64_t *)0x0) {
    puVar3 = puVar5;
    if (*(int *)(puVar5 + 6) == 0) {
      bVar2 = false;
LAB_1801ead10:
      puVar5 = (uint64_t *)*puVar5;
    }
    else {
      if (*(int *)(lVar4 + 0x30) == 0) {
        bVar2 = true;
      }
      else {
        pbVar6 = (byte *)puVar5[5];
        lVar8 = *(longlong *)(lVar4 + 0x28) - (longlong)pbVar6;
        do {
          bVar1 = *pbVar6;
          uVar7 = (uint)pbVar6[lVar8];
          if (bVar1 != uVar7) break;
          pbVar6 = pbVar6 + 1;
        } while (uVar7 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar7);
      }
      if (!bVar2) goto LAB_1801ead10;
      puVar5 = (uint64_t *)puVar5[1];
    }
  }
  puVar5 = puVar3;
  if (bVar2) {
    if (puVar3 != (uint64_t *)param_1[1]) {
      puVar5 = (uint64_t *)func_0x00018066b9a0(puVar3);
      goto LAB_1801ead30;
    }
  }
  else {
LAB_1801ead30:
    if (*(int *)(lVar4 + 0x30) == 0) {
LAB_1801eae0d:
      FUN_18008ea80();
      *param_2 = puVar5;
      *(int8_t *)(param_2 + 1) = 0;
      return param_2;
    }
    if (*(int *)(puVar5 + 6) != 0) {
      pbVar6 = *(byte **)(lVar4 + 0x28);
      lVar8 = puVar5[5] - (longlong)pbVar6;
      do {
        bVar1 = *pbVar6;
        uVar7 = (uint)pbVar6[lVar8];
        if (bVar1 != uVar7) break;
        pbVar6 = pbVar6 + 1;
      } while (uVar7 != 0);
      if ((int)(bVar1 - uVar7) < 1) goto LAB_1801eae0d;
    }
  }
  if (puVar3 == param_1) goto LAB_1801eadad;
  if (*(int *)(puVar3 + 6) != 0) {
    if (*(int *)(lVar4 + 0x30) == 0) goto LAB_1801eadad;
    pbVar6 = (byte *)puVar3[5];
    lVar8 = *(longlong *)(lVar4 + 0x28) - (longlong)pbVar6;
    do {
      bVar1 = *pbVar6;
      uVar7 = (uint)pbVar6[lVar8];
      if (bVar1 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if (0 < (int)(bVar1 - uVar7)) goto LAB_1801eadad;
  }
  uVar9 = 1;
LAB_1801eadad:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,puVar3,param_1,uVar9);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1801eae40(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,longlong param_4)

{
  byte bVar1;
  longlong *plVar2;
  bool bVar3;
  uint64_t *puVar4;
  longlong lVar5;
  uint64_t *puVar6;
  byte *pbVar7;
  uint uVar8;
  longlong lVar9;
  uint64_t uVar10;
  
  lVar5 = FUN_18062b420(_DAT_180c8ed18,0x48,*(int8_t *)(param_1 + 5),param_4,0xfffffffffffffffe)
  ;
  *(uint64_t *)(lVar5 + 0x20) = &UNK_18098bcb0;
  uVar10 = 0;
  *(uint64_t *)(lVar5 + 0x28) = 0;
  *(int32_t *)(lVar5 + 0x30) = 0;
  *(uint64_t *)(lVar5 + 0x20) = &UNK_180a3c3e0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x28) = 0;
  *(int32_t *)(lVar5 + 0x30) = 0;
  *(int32_t *)(lVar5 + 0x30) = *(int32_t *)(param_4 + 0x10);
  *(uint64_t *)(lVar5 + 0x28) = *(uint64_t *)(param_4 + 8);
  *(int32_t *)(lVar5 + 0x3c) = *(int32_t *)(param_4 + 0x1c);
  *(int32_t *)(lVar5 + 0x38) = *(int32_t *)(param_4 + 0x18);
  *(int32_t *)(param_4 + 0x10) = 0;
  *(uint64_t *)(param_4 + 8) = 0;
  *(uint64_t *)(param_4 + 0x18) = 0;
  plVar2 = *(longlong **)(param_4 + 0x20);
  *(longlong **)(lVar5 + 0x40) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  bVar3 = true;
  puVar6 = (uint64_t *)param_1[2];
  puVar4 = param_1;
  while (puVar6 != (uint64_t *)0x0) {
    puVar4 = puVar6;
    if (*(int *)(puVar6 + 6) == 0) {
      bVar3 = false;
LAB_1801eaf10:
      puVar6 = (uint64_t *)*puVar6;
    }
    else {
      if (*(int *)(lVar5 + 0x30) == 0) {
        bVar3 = true;
      }
      else {
        pbVar7 = (byte *)puVar6[5];
        lVar9 = *(longlong *)(lVar5 + 0x28) - (longlong)pbVar7;
        do {
          bVar1 = *pbVar7;
          uVar8 = (uint)pbVar7[lVar9];
          if (bVar1 != uVar8) break;
          pbVar7 = pbVar7 + 1;
        } while (uVar8 != 0);
        bVar3 = 0 < (int)(bVar1 - uVar8);
      }
      if (!bVar3) goto LAB_1801eaf10;
      puVar6 = (uint64_t *)puVar6[1];
    }
  }
  puVar6 = puVar4;
  if (bVar3) {
    if (puVar4 != (uint64_t *)param_1[1]) {
      puVar6 = (uint64_t *)func_0x00018066b9a0(puVar4);
      goto LAB_1801eaf30;
    }
  }
  else {
LAB_1801eaf30:
    if (*(int *)(lVar5 + 0x30) == 0) {
LAB_1801eb00d:
      FUN_1800c2c20();
      *param_2 = puVar6;
      *(int8_t *)(param_2 + 1) = 0;
      return param_2;
    }
    if (*(int *)(puVar6 + 6) != 0) {
      pbVar7 = *(byte **)(lVar5 + 0x28);
      lVar9 = puVar6[5] - (longlong)pbVar7;
      do {
        bVar1 = *pbVar7;
        uVar8 = (uint)pbVar7[lVar9];
        if (bVar1 != uVar8) break;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
      if ((int)(bVar1 - uVar8) < 1) goto LAB_1801eb00d;
    }
  }
  if (puVar4 == param_1) goto LAB_1801eafad;
  if (*(int *)(puVar4 + 6) != 0) {
    if (*(int *)(lVar5 + 0x30) == 0) goto LAB_1801eafad;
    pbVar7 = (byte *)puVar4[5];
    lVar9 = *(longlong *)(lVar5 + 0x28) - (longlong)pbVar7;
    do {
      bVar1 = *pbVar7;
      uVar8 = (uint)pbVar7[lVar9];
      if (bVar1 != uVar8) break;
      pbVar7 = pbVar7 + 1;
    } while (uVar8 != 0);
    if (0 < (int)(bVar1 - uVar8)) goto LAB_1801eafad;
  }
  uVar10 = 1;
LAB_1801eafad:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar5,puVar4,param_1,uVar10);
}






// 函数: void FUN_1801eb040(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801eb040(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x18);
  if (puVar1 != (uint64_t *)0x0) {
    FUN_18004b790(param_1 + 8,*puVar1,param_3,param_4,0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  return;
}






// 函数: void FUN_1801eb070(longlong param_1)
void FUN_1801eb070(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x38))();
  }
  *(uint64_t *)(param_1 + 0x50) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(int32_t *)(param_1 + 0x68) = 0;
  *(uint64_t *)(param_1 + 0x50) = &UNK_18098bcb0;
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1801eb0f0(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c03440;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x30,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1801eb1e0(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c034c0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar2 = *param_1;
    if (lVar2 != 0) {
      FUN_1801d7360(lVar2);
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x68,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      *puVar3 = *puVar1;
      FUN_180627ae0(puVar3 + 1,puVar1 + 1);
      FUN_180627ae0(puVar3 + 5,puVar1 + 5);
      FUN_180627ae0(puVar3 + 9,puVar1 + 9);
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




