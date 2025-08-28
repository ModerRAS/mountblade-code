#include "TaleWorlds.Native.Split.h"

// 99_part_11_part057.c - 1 个函数

// 函数: void FUN_1807bb100(longlong *param_1,char param_2,undefined1 param_3)
void FUN_1807bb100(longlong *param_1,char param_2,undefined1 param_3)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  char cVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  undefined1 auStack_188 [32];
  undefined4 uStack_168;
  undefined4 uStack_160;
  undefined1 uStack_158;
  byte bStack_148;
  byte bStack_147;
  byte bStack_146;
  int iStack_144;
  undefined1 auStack_138 [256];
  ulonglong uStack_38;
  ulonglong uVar9;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  if ((param_1[1] != 0) && (*(char *)((longlong)param_1 + 0x24) == '\0')) {
    lVar4 = *param_1;
    fVar13 = *(float *)(param_1 + 4);
    if (fVar13 < *(float *)(lVar4 + 0x3bec) || fVar13 == *(float *)(lVar4 + 0x3bec)) {
LAB_1807bb170:
      if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
        cVar10 = '\0';
        uVar7 = *(uint *)(param_1 + 2);
        uVar11 = 0;
        if (uVar7 < *(uint *)((longlong)param_1 + 0x14)) {
          while( true ) {
            if (cVar10 == '\x04') goto LAB_1807bb1c0;
            cVar10 = cVar10 + '\x01';
            bVar6 = *(byte *)((ulonglong)uVar7 + param_1[1]);
            uVar11 = uVar11 * 0x80 + (bVar6 & 0x7f);
            uVar7 = uVar7 + 1;
            *(uint *)(param_1 + 2) = uVar7;
            if (-1 < (char)bVar6) break;
            if (*(uint *)((longlong)param_1 + 0x14) <= uVar7) goto LAB_1807bb1c0;
          }
          lVar4 = *param_1;
          *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
          fVar13 = (float)uVar11 + *(float *)(param_1 + 4);
          *(float *)(param_1 + 4) = fVar13;
          goto LAB_1807bb1ea;
        }
LAB_1807bb1c0:
        *(undefined1 *)((longlong)param_1 + 0x24) = 1;
      }
      else {
LAB_1807bb1ea:
        if (fVar13 < *(float *)(lVar4 + 0x3bec) || fVar13 == *(float *)(lVar4 + 0x3bec)) {
          uVar7 = *(uint *)(param_1 + 2);
          uVar11 = *(uint *)((longlong)param_1 + 0x14);
          *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
          if (uVar11 <= uVar7) goto LAB_1807bb1c0;
          lVar3 = param_1[1];
          bVar6 = *(byte *)((ulonglong)uVar7 + lVar3);
          uVar8 = uVar7 + 1;
          uVar9 = (ulonglong)uVar8;
          *(uint *)(param_1 + 2) = uVar8;
          if (bVar6 < 0xf0) {
            bVar5 = bVar6;
            if (bVar6 < 0x80) {
              bVar5 = *(byte *)((longlong)param_1 + 0x26);
            }
            uStack_160 = CONCAT31(uStack_160._1_3_,param_3);
            lVar3 = (ulonglong)(bVar5 & 0xf) * 0x378;
            uStack_168 = CONCAT31(uStack_168._1_3_,param_2);
            *(longlong **)(lVar4 + 0x440 + lVar3) = param_1;
            FUN_1807ba570(lVar3 + *param_1 + 0x428,bVar5,CONCAT31((int3)(uVar8 >> 8),bVar6 < 0x80));
            bVar6 = bVar5;
          }
          else if (bVar6 == 0xf0) {
            cVar10 = '\0';
            iVar12 = 0;
            if (uVar8 < uVar11) {
              do {
                if (cVar10 == '\x04') goto LAB_1807bb47c;
                cVar10 = cVar10 + '\x01';
                bVar5 = *(byte *)(uVar9 + param_1[1]);
                uVar7 = (int)uVar9 + 1;
                *(uint *)(param_1 + 2) = uVar7;
                iVar12 = iVar12 * 0x80 + (bVar5 & 0x7f);
                if (-1 < (char)bVar5) {
                  *(uint *)(param_1 + 2) = uVar7 + iVar12;
                  goto LAB_1807bb778;
                }
                uVar9 = (ulonglong)uVar7;
              } while (uVar7 < uVar11);
              *(undefined1 *)((longlong)param_1 + 0x24) = 1;
            }
            else {
LAB_1807bb47c:
              *(undefined1 *)((longlong)param_1 + 0x24) = 1;
            }
          }
          else if (bVar6 == 0xf7) {
            cVar10 = '\0';
            if (uVar11 <= uVar8) goto LAB_1807bb47c;
            do {
              if (cVar10 == '\x04') goto LAB_1807bb47c;
              cVar10 = cVar10 + '\x01';
              cVar2 = *(char *)(uVar9 + param_1[1]);
              uVar7 = (int)uVar9 + 1;
              *(uint *)(param_1 + 2) = uVar7;
              if (-1 < cVar2) goto LAB_1807bb778;
              uVar9 = (ulonglong)uVar7;
            } while (uVar7 < uVar11);
            *(undefined1 *)((longlong)param_1 + 0x24) = 1;
          }
          else if (bVar6 == 0xff) {
            if (uVar8 < uVar11) {
              uVar1 = *(undefined1 *)(uVar9 + lVar3);
              cVar10 = '\0';
              uVar7 = uVar7 + 2;
              uVar9 = (ulonglong)uVar7;
              uVar8 = 0;
              *(uint *)(param_1 + 2) = uVar7;
              if (uVar7 < uVar11) {
LAB_1807bb271:
                if (cVar10 != '\x04') {
                  cVar10 = cVar10 + '\x01';
                  bVar5 = *(byte *)(uVar9 + param_1[1]);
                  uVar8 = uVar8 * 0x80 + (bVar5 & 0x7f);
                  iVar12 = (int)uVar9;
                  uVar7 = iVar12 + 1;
                  uVar9 = (ulonglong)uVar7;
                  *(uint *)(param_1 + 2) = uVar7;
                  if ((char)bVar5 < '\0') goto code_r0x0001807bb29c;
                  switch(uVar1) {
                  case 0:
                    if (uVar8 == 0) {
                      *(int *)(*param_1 + 0x3bac) = (int)param_1[3];
                      break;
                    }
                    if (uVar8 < 5) {
                      FUN_1807bb8a0(param_1,*param_1 + 0x3bac,uVar8);
                      break;
                    }
                    if (uVar11 <= uVar7) goto LAB_1807bb47c;
                    if (uVar11 < uVar7 + uVar8) {
                      uVar8 = uVar11 - uVar7;
                    }
                  default:
                    *(uint *)(param_1 + 2) = uVar7 + uVar8;
                    break;
                  case 1:
                    iStack_144 = (int)*(float *)(*param_1 + 0x3bf4);
                    FUN_1807b8f20(param_1,&DAT_180a064c8,uVar8);
                    if (param_2 != '\0') {
                      uStack_158 = 0;
                      uStack_160 = 1;
                      uStack_168 = 4;
                      FUN_180772fe0(*param_1,7,&UNK_18097c258);
                    }
                    break;
                  case 2:
                    FUN_1807b8f20(param_1,&UNK_18097c268,uVar8);
                    break;
                  case 3:
                    // WARNING: Subroutine does not return
                    FUN_18076b390(auStack_138,0x100,&UNK_18097c278,(int)param_1[3]);
                  case 4:
                    FUN_1807b8f20(param_1,&UNK_18097c288,uVar8);
                    break;
                  case 5:
                    FUN_1807b8f20(param_1,&UNK_18097c294,uVar8);
                    break;
                  case 6:
                    FUN_1807b8f20(param_1,&UNK_18097c29c,uVar8);
                    break;
                  case 7:
                    FUN_1807b8f20(param_1,&UNK_18097c2a8,uVar8);
                    break;
                  case 8:
                    FUN_1807b8f20(param_1,&UNK_18097c2b8,uVar8);
                    break;
                  case 9:
                    FUN_1807b8f20(param_1,&UNK_18097c2c8,uVar8);
                    break;
                  case 0x20:
                    if (uVar7 < uVar11) goto code_r0x0001807bb4a3;
                    goto LAB_1807bb47c;
                  case 0x21:
                    if (uVar8 != 0) {
                      if (uVar7 < uVar11) {
                        *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)(uVar9 + lVar3);
code_r0x0001807bb4a3:
                        *(int *)(param_1 + 2) = iVar12 + 2;
                      }
                      else {
                        *(undefined1 *)((longlong)param_1 + 0x24) = 1;
                      }
                    }
                    break;
                  case 0x2f:
                    goto LAB_1807bb47c;
                  case 0x51:
                    FUN_1807bb8a0(param_1,&bStack_148,uVar8);
                    *(uint *)(*param_1 + 0x3be8) = (uint)bStack_148 << 0x10;
                    *(uint *)(*param_1 + 0x3be8) =
                         *(uint *)(*param_1 + 0x3be8) | (uint)bStack_147 << 8;
                    *(uint *)(*param_1 + 0x3be8) = *(uint *)(*param_1 + 0x3be8) | (uint)bStack_146;
                    func_0x0001807b9040(*param_1);
                    break;
                  case 0x54:
                    if (uVar11 <= uVar7) goto LAB_1807bb47c;
                    *(undefined1 *)(*param_1 + 0x3bd4) = *(undefined1 *)(uVar9 + lVar3);
                    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
                    if (*(uint *)((longlong)param_1 + 0x14) <= *(uint *)(param_1 + 2))
                    goto LAB_1807bb47c;
                    *(undefined1 *)(*param_1 + 0x3bd5) =
                         *(undefined1 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]);
                    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
                    if (*(uint *)((longlong)param_1 + 0x14) <= *(uint *)(param_1 + 2))
                    goto LAB_1807bb47c;
                    *(undefined1 *)(*param_1 + 0x3bd6) =
                         *(undefined1 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]);
                    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
                    if (*(uint *)((longlong)param_1 + 0x14) <= *(uint *)(param_1 + 2))
                    goto LAB_1807bb47c;
                    *(undefined1 *)(*param_1 + 0x3bd7) =
                         *(undefined1 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]);
                    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
                    if (*(uint *)((longlong)param_1 + 0x14) <= *(uint *)(param_1 + 2))
                    goto LAB_1807bb47c;
                    *(undefined1 *)(*param_1 + 0x3bd8) =
                         *(undefined1 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]);
                    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
                    break;
                  case 0x58:
                    if (uVar11 <= uVar7) goto LAB_1807bb47c;
                    *(undefined1 *)(*param_1 + 0x3bd9) = *(undefined1 *)(uVar9 + lVar3);
                    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
                    if (*(uint *)((longlong)param_1 + 0x14) <= *(uint *)(param_1 + 2))
                    goto LAB_1807bb47c;
                    *(undefined1 *)(*param_1 + 0x3bda) =
                         *(undefined1 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]);
                    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
                    if (*(uint *)((longlong)param_1 + 0x14) <= *(uint *)(param_1 + 2))
                    goto LAB_1807bb47c;
                    *(undefined1 *)(*param_1 + 0x3bdb) =
                         *(undefined1 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]);
                    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
                    if (*(uint *)((longlong)param_1 + 0x14) <= *(uint *)(param_1 + 2))
                    goto LAB_1807bb47c;
                    *(undefined1 *)(*param_1 + 0x3bdc) =
                         *(undefined1 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]);
                    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
                    break;
                  case 0x59:
                    if (uVar11 <= uVar7) goto LAB_1807bb47c;
                    *(undefined1 *)(*param_1 + 0x3bdd) = *(undefined1 *)(uVar9 + lVar3);
                    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
                    if (*(uint *)((longlong)param_1 + 0x14) <= *(uint *)(param_1 + 2))
                    goto LAB_1807bb47c;
                    *(undefined1 *)(*param_1 + 0x3bde) =
                         *(undefined1 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]);
                    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
                    break;
                  case 0x7f:
                    FUN_1807b8f20(param_1,&UNK_18097c2d8,uVar8);
                  }
                  goto LAB_1807bb778;
                }
              }
              goto LAB_1807bb47c;
            }
            *(undefined1 *)((longlong)param_1 + 0x24) = 1;
          }
          goto LAB_1807bb778;
        }
        *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
      }
    }
  }
LAB_1807bb79f:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_188);
code_r0x0001807bb29c:
  if (uVar11 <= uVar7) goto code_r0x0001807bb2a1;
  goto LAB_1807bb271;
code_r0x0001807bb2a1:
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
LAB_1807bb778:
  *(byte *)((longlong)param_1 + 0x26) = bVar6;
  if (*(char *)((longlong)param_1 + 0x24) != '\0') goto LAB_1807bb79f;
  lVar4 = *param_1;
  fVar13 = *(float *)(param_1 + 4);
  if (*(float *)(lVar4 + 0x3bec) <= fVar13 && fVar13 != *(float *)(lVar4 + 0x3bec))
  goto LAB_1807bb79f;
  goto LAB_1807bb170;
}



undefined8 FUN_1807bb8a0(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 <= uVar1) {
    *(undefined1 *)(param_1 + 0x24) = 1;
    return 0x10;
  }
  if (uVar2 < uVar1 + param_3) {
    param_3 = uVar2 - uVar1;
  }
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(param_2,(ulonglong)uVar1 + *(longlong *)(param_1 + 8),(longlong)param_3);
  }
  *(uint *)(param_1 + 0x10) = uVar1 + param_3;
  return 0;
}






