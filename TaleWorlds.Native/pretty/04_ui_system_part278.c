#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part278.c - 7 个函数

// 函数: void FUN_1808249f0(longlong *param_1)
void FUN_1808249f0(longlong *param_1)

{
  if (*param_1 != 0) {
    free();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
                    // WARNING: Could not recover jumptable at 0x000180824a27. Too many branches
                    // WARNING: Treating indirect jump as call
  free(param_1);
  return;
}





// 函数: void FUN_180824a30(longlong *param_1)
void FUN_180824a30(longlong *param_1)

{
  if (*param_1 != 0) {
    free();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



uint FUN_180824a90(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 3);
  if (uVar1 == 0) {
    return (uint)*(ushort *)((longlong)param_1 + 0x1c);
  }
  uVar4 = *(uint *)(param_1 + 4);
  if (uVar4 < uVar1) {
    uVar5 = *(uint *)((longlong)param_1 + 0x1c);
    uVar2 = *(uint *)(*param_1 + (ulonglong)*(uint *)((longlong)param_1 + 0x14) * 4);
    do {
      cVar3 = (char)uVar4;
      uVar4 = uVar4 + 8;
      uVar5 = *(uint *)(((ulonglong)(byte)(uVar2 >> (0x18U - cVar3 & 0x3f)) ^
                        (ulonglong)(uVar5 >> 8)) * 4 + 0x180bebc70) ^ (uVar5 & 0xff) << 8;
      *(uint *)(param_1 + 4) = uVar4;
      *(uint *)((longlong)param_1 + 0x1c) = uVar5;
    } while (uVar4 < uVar1);
    return uVar5 & 0xffff;
  }
  return (uint)*(ushort *)((longlong)param_1 + 0x1c);
}



uint FUN_180824ab7(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  longlong in_RAX;
  uint in_R10D;
  uint in_R11D;
  
  uVar1 = *(uint *)(param_1 + param_2 * 4);
  do {
    cVar2 = (char)param_4;
    param_4 = param_4 + 8;
    in_R10D = *(uint *)(((ulonglong)(byte)(uVar1 >> (0x18U - cVar2 & 0x3f)) ^
                        (ulonglong)(in_R10D >> 8)) * 4 + 0x180bebc70) ^ (in_R10D & 0xff) << 8;
    *(uint *)(in_RAX + 0x20) = param_4;
    *(uint *)(in_RAX + 0x1c) = in_R10D;
  } while (param_4 < in_R11D);
  return in_R10D & 0xffff;
}



undefined2 FUN_180824b1d(void)

{
  longlong in_RAX;
  
  return *(undefined2 *)(in_RAX + 0x1c);
}



undefined8
FUN_180824b30(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
             longlong param_5)

{
  longlong lVar1;
  
  *(undefined4 *)(param_2 + 1) = 0x800;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  lVar1 = malloc(0x2000);
  *param_2 = lVar1;
  if (lVar1 == 0) {
    return 0;
  }
  param_2[6] = param_5;
  param_2[5] = param_4;
  lVar1 = param_3[1];
  param_2[7] = *param_3;
  param_2[8] = lVar1;
  lVar1 = param_3[3];
  param_2[9] = param_3[2];
  param_2[10] = lVar1;
  lVar1 = param_3[5];
  param_2[0xb] = param_3[4];
  param_2[0xc] = lVar1;
  param_2[0xd] = param_3[6];
  return 1;
}



undefined8 FUN_180824be0(undefined8 param_1,longlong *param_2,undefined1 *param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStackX_20 [8];
  
  if (param_4 != 0) {
    do {
      if ((int)param_2[3] == 0) {
        if (param_4 == 0) {
          return 1;
        }
        do {
          while( true ) {
            if (param_4 < 4) {
              while( true ) {
                if (param_4 == 0) {
                  return 1;
                }
                iVar3 = FUN_180824d50(param_1,param_2,auStackX_20,8);
                if (iVar3 == 0) break;
                *param_3 = auStackX_20[0];
                param_3 = param_3 + 1;
                param_4 = param_4 - 1;
              }
              return 0;
            }
            uVar1 = *(uint *)((longlong)param_2 + 0x14);
            if (*(uint *)((longlong)param_2 + 0xc) <= uVar1) break;
            uVar2 = *(undefined4 *)(*param_2 + (ulonglong)uVar1 * 4);
            *(uint *)((longlong)param_2 + 0x14) = uVar1 + 1;
            *param_3 = (char)((uint)uVar2 >> 0x18);
            param_3[1] = (char)((uint)uVar2 >> 0x10);
            param_3[2] = (char)((uint)uVar2 >> 8);
            param_3[3] = (char)uVar2;
            param_3 = param_3 + 4;
            param_4 = param_4 - 4;
          }
          iVar3 = FUN_180825a20(param_1,param_2);
        } while (iVar3 != 0);
        return 0;
      }
      iVar3 = FUN_180824d50(param_1,param_2,auStackX_20,8);
      if (iVar3 == 0) {
        return 0;
      }
      *param_3 = auStackX_20[0];
      param_3 = param_3 + 1;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return 1;
}



undefined8 FUN_180824d00(undefined8 param_1,undefined8 param_2,int *param_3,char param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180824d50();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *param_3 = (*param_3 << (0x20U - param_4 & 0x1f)) >> (0x20U - param_4 & 0x1f);
  return 1;
}



undefined8 FUN_180824d50(undefined8 param_1,longlong *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_4 == 0) {
    *param_3 = 0;
    return 1;
  }
  uVar6 = *(uint *)((longlong)param_2 + 0xc);
  uVar1 = *(uint *)((longlong)param_2 + 0x14);
  iVar3 = (int)param_2[3];
  uVar5 = ((int)param_2[2] + (uVar6 - uVar1) * 4) * 8 - iVar3;
  while (uVar5 < param_4) {
    iVar3 = FUN_180825a20(param_1,param_2);
    if (iVar3 == 0) {
      return 0;
    }
    uVar6 = *(uint *)((longlong)param_2 + 0xc);
    uVar1 = *(uint *)((longlong)param_2 + 0x14);
    iVar3 = (int)param_2[3];
    uVar5 = ((int)param_2[2] + (uVar6 - uVar1) * 4) * 8 - iVar3;
  }
  uVar5 = *(uint *)(*param_2 + (ulonglong)uVar1 * 4);
  bVar4 = (byte)iVar3;
  cVar2 = (char)param_4;
  if (uVar1 < uVar6) {
    if (iVar3 == 0) {
      if (param_4 < 0x20) {
        *param_3 = uVar5 >> (0x20U - cVar2 & 0x1f);
        *(uint *)(param_2 + 3) = param_4;
        return 1;
      }
      *param_3 = uVar5;
      func_0x000180825b90(param_2);
      *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
      return 1;
    }
    uVar6 = 0x20 - iVar3;
    uVar5 = 0xffffffffU >> (bVar4 & 0x1f) & uVar5;
    if (uVar6 <= param_4) {
      *param_3 = uVar5;
      iVar3 = param_4 - uVar6;
      func_0x000180825b90(param_2);
      *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
      *(undefined4 *)(param_2 + 3) = 0;
      if (iVar3 == 0) {
        return 1;
      }
      *param_3 = *param_3 << ((byte)iVar3 & 0x1f);
      *param_3 = *param_3 |
                 *(uint *)(*param_2 + (ulonglong)*(uint *)((longlong)param_2 + 0x14) * 4) >>
                 (0x20 - (byte)iVar3 & 0x1f);
      *(int *)(param_2 + 3) = iVar3;
      return 1;
    }
    *param_3 = uVar5 >> ((char)uVar6 - cVar2 & 0x1fU);
  }
  else if (iVar3 == 0) {
    *param_3 = uVar5 >> (0x20U - cVar2 & 0x1f);
  }
  else {
    *param_3 = (0xffffffffU >> (bVar4 & 0x1f) & uVar5) >> ((' ' - bVar4) - cVar2 & 0x1f);
  }
  *(uint *)(param_2 + 3) = (int)param_2[3] + param_4;
  return 1;
}



undefined8 FUN_180824ed0(undefined8 param_1,undefined8 param_2,ulonglong *param_3,uint param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint auStackX_20 [2];
  undefined4 auStack_18 [4];
  
  if (param_4 < 0x21) {
    iVar1 = FUN_180824d50(param_1,param_2,auStackX_20);
    if (iVar1 != 0) {
      uVar2 = (ulonglong)auStackX_20[0];
LAB_180824f4f:
      *param_3 = uVar2;
      return 1;
    }
  }
  else {
    iVar1 = FUN_180824d50(param_1,param_2,auStack_18,param_4 - 0x20);
    if (iVar1 != 0) {
      iVar1 = FUN_180824d50(param_1,param_2,auStackX_20,0x20);
      if (iVar1 != 0) {
        uVar2 = CONCAT44(auStack_18[0],auStackX_20[0]);
        goto LAB_180824f4f;
      }
    }
  }
  return 0;
}



undefined4
FUN_180824f70(undefined8 param_1,longlong *param_2,uint *param_3,int param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int iStackX_20;
  byte bVar3;
  
  if (param_4 == 0) {
    return 1;
  }
  uVar8 = *(uint *)(param_2 + 3);
  uVar10 = (ulonglong)*(uint *)((longlong)param_2 + 0x14);
  iStackX_20 = param_4;
LAB_180824fc5:
  iVar6 = 0;
  do {
    if ((uint)uVar10 < *(uint *)((longlong)param_2 + 0xc)) {
      do {
        uVar1 = *(int *)(*param_2 + uVar10 * 4) << ((byte)uVar8 & 0x1f);
        if (uVar1 != 0) {
          if (uVar1 < 0x10000) {
            if (uVar1 < 0x100) {
              uVar1 = (byte)(&UNK_18097fe20)[uVar1] + 0x18;
            }
            else {
              uVar1 = (byte)(&UNK_18097fe20)[uVar1 >> 8] + 0x10;
            }
          }
          else if (uVar1 < 0x1000000) {
            uVar1 = (byte)(&UNK_18097fe20)[uVar1 >> 0x10] + 8;
          }
          else {
            uVar1 = (uint)(byte)(&UNK_18097fe20)[uVar1 >> 0x18];
          }
          uVar7 = iVar6 + uVar1;
          uVar8 = uVar8 + 1 + uVar1;
          if (uVar8 == 0x20) {
            func_0x000180825b90(param_2);
            uVar10 = (ulonglong)((int)uVar10 + 1);
            uVar8 = 0;
          }
          goto LAB_180825109;
        }
        iVar6 = iVar6 + (0x20 - uVar8);
        func_0x000180825b90(param_2);
        uVar1 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar1;
        uVar8 = 0;
      } while (uVar1 < *(uint *)((longlong)param_2 + 0xc));
    }
    if ((int)param_2[2] != 0) {
      iVar11 = (int)param_2[2] * 8;
      uVar1 = (-1 << (0x20U - (char)iVar11 & 0x1f) & *(uint *)(*param_2 + uVar10 * 4)) <<
              ((byte)uVar8 & 0x1f);
      if (uVar1 != 0) break;
      iVar6 = iVar6 + (iVar11 - uVar8);
      uVar8 = uVar8 + iVar11;
    }
    *(uint *)(param_2 + 3) = uVar8;
    *(int *)((longlong)param_2 + 0x14) = (int)uVar10;
    iVar11 = FUN_180825a20(param_1,param_2);
    if (iVar11 == 0) {
      return 0;
    }
    uVar10 = (ulonglong)*(uint *)((longlong)param_2 + 0x14);
  } while( true );
  if (uVar1 < 0x10000) {
    if (uVar1 < 0x100) {
      uVar1 = (byte)(&UNK_18097fe20)[uVar1] + 0x18;
    }
    else {
      uVar1 = (byte)(&UNK_18097fe20)[uVar1 >> 8] + 0x10;
    }
  }
  else if (uVar1 < 0x1000000) {
    uVar1 = (byte)(&UNK_18097fe20)[uVar1 >> 0x10] + 8;
  }
  else {
    uVar1 = (uint)(byte)(&UNK_18097fe20)[uVar1 >> 0x18];
  }
  uVar7 = iVar6 + uVar1;
  uVar8 = uVar8 + 1 + uVar1;
LAB_180825109:
  if (param_5 != 0) {
    uVar1 = *(uint *)((longlong)param_2 + 0xc);
    uVar4 = ((int)param_2[2] + (uVar1 - (int)uVar10) * 4) * 8 - uVar8;
    while (uVar9 = (uint)uVar10, uVar4 < param_5) {
      *(uint *)(param_2 + 3) = uVar8;
      *(uint *)((longlong)param_2 + 0x14) = uVar9;
      iVar6 = FUN_180825a20(param_1,param_2);
      if (iVar6 == 0) {
        return 0;
      }
      uVar1 = *(uint *)((longlong)param_2 + 0xc);
      uVar10 = (ulonglong)*(uint *)((longlong)param_2 + 0x14);
      uVar4 = ((int)param_2[2] + (uVar1 - *(uint *)((longlong)param_2 + 0x14)) * 4) * 8 - uVar8;
    }
    uVar4 = *(uint *)(*param_2 + uVar10 * 4);
    bVar2 = (byte)uVar8;
    bVar3 = (byte)param_5;
    if (uVar9 < uVar1) {
      if (uVar8 == 0) {
        uVar7 = uVar4 >> (0x20 - bVar3 & 0x1f) | uVar7 << (bVar3 & 0x1f);
        uVar8 = param_5;
      }
      else {
        uVar5 = 0xffffffffU >> (bVar2 & 0x1f) & uVar4;
        uVar1 = 0x20 - uVar8;
        if (param_5 < uVar1) {
          uVar7 = uVar5 >> ((byte)uVar1 - bVar3 & 0x1f) | uVar7 << (bVar3 & 0x1f);
          uVar8 = uVar8 + param_5;
        }
        else {
          uVar12 = param_5 - uVar1;
          uVar7 = uVar7 << ((byte)uVar1 & 0x1f) | uVar5;
          func_0x000180825b90(param_2,uVar4);
          uVar10 = (ulonglong)(uVar9 + 1);
          uVar8 = 0;
          if (uVar12 != 0) {
            uVar7 = *(uint *)(*param_2 + uVar10 * 4) >> (0x20 - (byte)uVar12 & 0x1f) |
                    uVar7 << ((byte)uVar12 & 0x1f);
            uVar8 = uVar12;
          }
        }
      }
    }
    else {
      uVar7 = uVar7 << (bVar3 & 0x1f);
      if (uVar8 == 0) {
        uVar7 = uVar7 | uVar4 >> (0x20 - bVar3 & 0x1f);
        uVar8 = uVar8 + param_5;
      }
      else {
        uVar7 = uVar7 | (0xffffffffU >> (bVar2 & 0x1f) & uVar4) >> ((0x20 - bVar3) - bVar2 & 0x1f);
        uVar8 = uVar8 + param_5;
      }
    }
  }
  iStackX_20 = iStackX_20 + -1;
  *param_3 = uVar7 >> 1 ^ -(uVar7 & 1);
  if (iStackX_20 == 0) {
    *(uint *)(param_2 + 3) = uVar8;
    *(int *)((longlong)param_2 + 0x14) = (int)uVar10;
    return 1;
  }
  param_3 = param_3 + 1;
  goto LAB_180824fc5;
}



undefined8 FUN_1808252a0(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int aiStackX_20 [2];
  uint auStack_28 [4];
  
  auStack_28[0] = 0;
  iVar1 = FUN_180824d50(param_1,param_2,auStack_28,8);
  if ((iVar1 != 0) && (iVar1 = FUN_180824d50(param_1,param_2,aiStackX_20,8), iVar1 != 0)) {
    uVar3 = aiStackX_20[0] << 8 | auStack_28[0];
    iVar1 = FUN_180824d50(param_1,param_2,aiStackX_20,8);
    if (iVar1 != 0) {
      uVar2 = aiStackX_20[0] << 0x10;
      iVar1 = FUN_180824d50(param_1,param_2,aiStackX_20,8);
      if (iVar1 != 0) {
        *param_3 = aiStackX_20[0] << 0x18 | uVar2 | uVar3;
        return 1;
      }
    }
  }
  return 0;
}



undefined8 FUN_180825370(undefined8 param_1,longlong *param_2,int *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  
  *param_3 = 0;
  do {
    uVar3 = (ulonglong)*(uint *)((longlong)param_2 + 0x14);
    if (*(uint *)((longlong)param_2 + 0x14) < *(uint *)((longlong)param_2 + 0xc)) {
      iVar5 = (int)param_2[3];
      do {
        uVar4 = *(int *)(*param_2 + uVar3 * 4) << ((byte)iVar5 & 0x1f);
        if (uVar4 != 0) {
          if (uVar4 < 0x10000) {
            if (uVar4 < 0x100) {
              uVar4 = (byte)(&UNK_18097fe20)[uVar4] + 0x18;
            }
            else {
              uVar4 = (byte)(&UNK_18097fe20)[uVar4 >> 8] + 0x10;
            }
          }
          else if (uVar4 < 0x1000000) {
            uVar4 = (byte)(&UNK_18097fe20)[uVar4 >> 0x10] + 8;
          }
          else {
            uVar4 = (uint)(byte)(&UNK_18097fe20)[uVar4 >> 0x18];
          }
          *param_3 = *param_3 + uVar4;
          *(uint *)(param_2 + 3) = (int)param_2[3] + uVar4 + 1;
          if (0x1f < *(uint *)(param_2 + 3)) {
            func_0x000180825b90(param_2,*(undefined4 *)
                                         (*param_2 +
                                         (ulonglong)*(uint *)((longlong)param_2 + 0x14) * 4));
            *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
            *(undefined4 *)(param_2 + 3) = 0;
          }
          return 1;
        }
        *param_3 = *param_3 + (0x20 - iVar5);
        func_0x000180825b90(param_2,*(undefined4 *)
                                     (*param_2 + (ulonglong)*(uint *)((longlong)param_2 + 0x14) * 4)
                           );
        uVar4 = *(int *)((longlong)param_2 + 0x14) + 1;
        uVar3 = (ulonglong)uVar4;
        *(undefined4 *)(param_2 + 3) = 0;
        *(uint *)((longlong)param_2 + 0x14) = uVar4;
        iVar5 = 0;
      } while (uVar4 < *(uint *)((longlong)param_2 + 0xc));
    }
    if ((int)param_2[2] != 0) {
      iVar5 = (int)param_2[2] * 8;
      uVar4 = (-1 << (0x20U - (char)iVar5 & 0x1f) & *(uint *)(*param_2 + uVar3 * 4)) <<
              ((byte)(int)param_2[3] & 0x1f);
      if (uVar4 != 0) {
        if (0xffff < uVar4) {
          if (uVar4 < 0x1000000) {
            bVar1 = (&UNK_18097fe20)[uVar4 >> 0x10];
            *param_3 = *param_3 + bVar1 + 8;
            *(uint *)(param_2 + 3) = (int)param_2[3] + bVar1 + 9;
            return 1;
          }
          bVar1 = (&UNK_18097fe20)[uVar4 >> 0x18];
          *param_3 = *param_3 + (uint)bVar1;
          *(uint *)(param_2 + 3) = (int)param_2[3] + bVar1 + 1;
          return 1;
        }
        if (uVar4 < 0x100) {
          bVar1 = (&UNK_18097fe20)[uVar4];
          *param_3 = *param_3 + bVar1 + 0x18;
          *(uint *)(param_2 + 3) = (int)param_2[3] + bVar1 + 0x19;
          return 1;
        }
        bVar1 = (&UNK_18097fe20)[uVar4 >> 8];
        *param_3 = *param_3 + bVar1 + 0x10;
        *(uint *)(param_2 + 3) = (int)param_2[3] + bVar1 + 0x11;
        return 1;
      }
      *param_3 = *param_3 + (iVar5 - (int)param_2[3]);
      *(int *)(param_2 + 3) = (int)param_2[3] + iVar5;
    }
    uVar2 = FUN_180825a20(param_1,param_2);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  } while( true );
}



undefined8
FUN_180825560(undefined8 param_1,undefined8 param_2,uint *param_3,longlong param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint auStack_28 [4];
  
  iVar1 = FUN_180824d50(param_1,param_2,auStack_28,8);
  if (iVar1 == 0) {
LAB_18082567c:
    uVar3 = 0;
  }
  else {
    if (param_4 != 0) {
      *(char *)((ulonglong)*param_5 + param_4) = (char)auStack_28[0];
      *param_5 = *param_5 + 1;
    }
    uVar4 = auStack_28[0];
    if ((char)auStack_28[0] < '\0') {
      if (((auStack_28[0] & 0xc0) == 0) || ((auStack_28[0] & 0x20) != 0)) {
        if (((auStack_28[0] & 0xe0) == 0) || ((auStack_28[0] & 0x10) != 0)) {
          if (((auStack_28[0] & 0xf0) == 0) || ((auStack_28[0] & 8) != 0)) {
            if (((auStack_28[0] & 0xf8) == 0) || ((auStack_28[0] & 4) != 0)) {
              if (((auStack_28[0] & 0xfc) == 0) || ((auStack_28[0] & 2) != 0)) {
LAB_18082566e:
                *param_3 = 0xffffffff;
                return 1;
              }
              uVar4 = auStack_28[0] & 1;
              iVar1 = 5;
            }
            else {
              uVar4 = auStack_28[0] & 3;
              iVar1 = 4;
            }
          }
          else {
            uVar4 = auStack_28[0] & 7;
            iVar1 = 3;
          }
        }
        else {
          uVar4 = auStack_28[0] & 0xf;
          iVar1 = 2;
        }
      }
      else {
        uVar4 = auStack_28[0] & 0x1f;
        iVar1 = 1;
      }
      do {
        iVar2 = FUN_180824d50(param_1,param_2,auStack_28,8);
        if (iVar2 == 0) goto LAB_18082567c;
        if (param_4 != 0) {
          *(byte *)((ulonglong)*param_5 + param_4) = (byte)auStack_28[0];
          *param_5 = *param_5 + 1;
        }
        if (((byte)auStack_28[0] & 0xc0) != 0x80) goto LAB_18082566e;
        uVar4 = auStack_28[0] & 0x3f | uVar4 << 6;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    *param_3 = uVar4;
    uVar3 = 1;
  }
  return uVar3;
}



int FUN_1808256a0(undefined8 param_1,undefined8 param_2,ulonglong *param_3,longlong param_4,
                 uint *param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint auStack_28 [4];
  
  iVar1 = FUN_180824d50(param_1,param_2,auStack_28,8);
  if (iVar1 == 0) {
LAB_1808257fe:
    iVar2 = 0;
  }
  else {
    if (param_4 != 0) {
      *(char *)((ulonglong)*param_5 + param_4) = (char)auStack_28[0];
      *param_5 = *param_5 + 1;
    }
    if ((char)auStack_28[0] < '\0') {
      if (((auStack_28[0] & 0xc0) == 0) || ((auStack_28[0] & 0x20) != 0)) {
        if (((auStack_28[0] & 0xe0) == 0) || ((auStack_28[0] & 0x10) != 0)) {
          if (((auStack_28[0] & 0xf0) == 0) || ((auStack_28[0] & 8) != 0)) {
            if (((auStack_28[0] & 0xf8) == 0) || ((auStack_28[0] & 4) != 0)) {
              if (((auStack_28[0] & 0xfc) == 0) || ((auStack_28[0] & 2) != 0)) {
                if (((auStack_28[0] & 0xfe) == 0) || ((auStack_28[0] & 1) != 0)) {
LAB_1808257f0:
                  *param_3 = 0xffffffffffffffff;
                  return 1;
                }
                uVar3 = 0;
                iVar1 = 6;
              }
              else {
                uVar3 = (ulonglong)(auStack_28[0] & 1);
                iVar1 = 5;
              }
            }
            else {
              uVar3 = (ulonglong)(auStack_28[0] & 3);
              iVar1 = 4;
            }
          }
          else {
            uVar3 = (ulonglong)(auStack_28[0] & 7);
            iVar1 = 3;
          }
        }
        else {
          uVar3 = (ulonglong)(auStack_28[0] & 0xf);
          iVar1 = 2;
        }
      }
      else {
        uVar3 = (ulonglong)(auStack_28[0] & 0x1f);
        iVar1 = 1;
      }
      do {
        iVar2 = iVar1;
        iVar1 = FUN_180824d50(param_1,param_2,auStack_28,8);
        if (iVar1 == 0) goto LAB_1808257fe;
        if (param_4 != 0) {
          *(byte *)((ulonglong)*param_5 + param_4) = (byte)auStack_28[0];
          *param_5 = *param_5 + 1;
        }
        if (((byte)auStack_28[0] & 0xc0) != 0x80) goto LAB_1808257f0;
        uVar3 = (ulonglong)(auStack_28[0] & 0x3f) | uVar3 << 6;
        iVar1 = iVar2 + -1;
      } while (iVar2 + -1 != 0);
      *param_3 = uVar3;
    }
    else {
      iVar2 = 1;
      *param_3 = (ulonglong)auStack_28[0];
    }
  }
  return iVar2;
}



undefined8 FUN_180825830(undefined8 param_1,longlong param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  
  if (param_3 == 0) {
    return 1;
  }
  uVar2 = *(uint *)(param_2 + 0x18) & 7;
  if (uVar2 != 0) {
    uVar2 = 8 - uVar2;
    uVar3 = param_3;
    if (uVar2 < param_3) {
      uVar3 = uVar2;
    }
    iVar1 = FUN_180824d50(param_1,param_2,auStackX_20,uVar3);
    if (iVar1 == 0) {
      return 0;
    }
    param_3 = param_3 - uVar3;
  }
  uVar2 = param_3 >> 3;
  if (param_3 >> 3 != 0) {
    do {
      if (*(int *)(param_2 + 0x18) == 0) {
        if (uVar2 != 0) {
          while (3 < uVar2) {
            if (*(uint *)(param_2 + 0x14) < *(uint *)(param_2 + 0xc)) {
              *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) + 1;
              uVar2 = uVar2 - 4;
            }
            else {
              iVar1 = FUN_180825a20(param_1,param_2);
              if (iVar1 == 0) {
                return 0;
              }
            }
          }
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            iVar1 = FUN_180824d50(param_1,param_2,auStackX_18,8);
            if (iVar1 == 0) {
              return 0;
            }
          }
        }
        break;
      }
      iVar1 = FUN_180824d50(param_1,param_2,auStackX_18,8);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    param_3 = param_3 & 7;
  }
  if ((param_3 != 0) && (iVar1 = FUN_180824d50(param_1,param_2,auStackX_20,param_3), iVar1 == 0)) {
    return 0;
  }
  return 1;
}



undefined8 FUN_180825950(undefined8 param_1,longlong param_2,uint param_3)

{
  int iVar1;
  undefined1 auStackX_18 [16];
  
  if (param_3 == 0) {
    return 1;
  }
  while( true ) {
    if (*(int *)(param_2 + 0x18) == 0) {
      if (param_3 == 0) {
        return 1;
      }
      do {
        while( true ) {
          if (param_3 < 4) {
            if (param_3 == 0) {
              return 1;
            }
            do {
              iVar1 = FUN_180824d50(param_1,param_2,auStackX_18,8);
              if (iVar1 == 0) {
                return 0;
              }
              param_3 = param_3 - 1;
            } while (param_3 != 0);
            return 1;
          }
          if (*(uint *)(param_2 + 0xc) <= *(uint *)(param_2 + 0x14)) break;
          *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) + 1;
          param_3 = param_3 - 4;
        }
        iVar1 = FUN_180825a20(param_1,param_2);
      } while (iVar1 != 0);
      return 0;
    }
    iVar1 = FUN_180824d50(param_1,param_2,auStackX_18,8);
    if (iVar1 == 0) break;
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return 1;
    }
  }
  return 0;
}



undefined8 FUN_180825a20(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uStackX_10;
  
  uVar4 = *(uint *)((longlong)param_2 + 0x14);
  uVar5 = *(uint *)((longlong)param_2 + 0xc);
  if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
    memmove(*param_2,*param_2 + (ulonglong)uVar4 * 4,(uVar5 + (((int)param_2[2] != 0) - uVar4)) * 4)
    ;
  }
  uVar4 = *(uint *)(param_2 + 2);
  uVar2 = ((int)param_2[1] - uVar5) * 4 - uVar4;
  uStackX_10 = (ulonglong)uVar2;
  if (uVar2 != 0) {
    lVar1 = *param_2;
    lVar6 = (ulonglong)uVar5 * 4;
    if (uVar4 != 0) {
      uVar5 = *(uint *)(lVar6 + lVar1);
      uVar5 = (uVar5 >> 8 ^ uVar5 << 8) & 0xff00ff ^ uVar5 << 8;
      *(uint *)(lVar6 + lVar1) = uVar5 << 0x10 | uVar5 >> 0x10;
    }
    iVar3 = (*(code *)param_2[5])(param_1,lVar6 + (ulonglong)uVar4 + lVar1,&uStackX_10,param_2[6]);
    if (iVar3 != 0) {
      uVar4 = *(uint *)((longlong)param_2 + 0xc);
      iVar3 = (int)param_2[2];
      uVar5 = (int)uStackX_10 + 3 + iVar3 + uVar4 * 4 >> 2;
      if (uVar4 < uVar5) {
        lVar6 = (ulonglong)uVar4 * 4;
        uVar7 = (ulonglong)(uVar5 - uVar4);
        do {
          lVar6 = lVar6 + 4;
          uVar4 = *(uint *)(*param_2 + -4 + lVar6);
          uVar4 = (uVar4 >> 8 ^ uVar4 << 8) & 0xff00ff ^ uVar4 << 8;
          *(uint *)(*param_2 + -4 + lVar6) = uVar4 << 0x10 | uVar4 >> 0x10;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        uVar4 = *(uint *)((longlong)param_2 + 0xc);
        iVar3 = (int)param_2[2];
      }
      uVar4 = iVar3 + uVar4 * 4 + (int)uStackX_10;
      *(uint *)((longlong)param_2 + 0xc) = uVar4 >> 2;
      *(uint *)(param_2 + 2) = uVar4 & 3;
      return 1;
    }
  }
  return 0;
}





// 函数: void FUN_180825ca0(int *param_1,uint param_2,int param_3,longlong param_4)
void FUN_180825ca0(int *param_1,uint param_2,int param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(int)param_2;
  if (param_3 == 0) {
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
    memcpy(param_4,param_1,(ulonglong)param_2 << 2);
    return;
  }
  if (param_3 == 1) {
    if (0 < (int)param_2) {
      param_4 = param_4 - (longlong)param_1;
      do {
        *(int *)(param_4 + (longlong)param_1) =
             *(int *)(param_4 + -4 + (longlong)param_1) + *param_1;
        param_1 = param_1 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      return;
    }
  }
  else if (param_3 == 2) {
    if (0 < (int)param_2) {
      piVar4 = (int *)(param_4 + -8);
      iVar3 = *(int *)(param_4 + -8);
      do {
        piVar1 = piVar4 + 1;
        piVar4[2] = (*(int *)((longlong)piVar4 + (longlong)param_1 + (8 - param_4)) + *piVar1 * 2) -
                    iVar3;
        lVar5 = lVar5 + -1;
        piVar4 = piVar4 + 1;
        iVar3 = *piVar1;
      } while (lVar5 != 0);
      return;
    }
  }
  else if (param_3 == 3) {
    if (0 < (int)param_2) {
      piVar4 = (int *)(param_4 + -8);
      iVar3 = *(int *)(param_4 + -8);
      do {
        iVar2 = piVar4[1];
        piVar4[2] = *(int *)((longlong)piVar4 + (longlong)param_1 + (8 - param_4)) +
                    iVar2 * 2 + iVar3 * -3 + piVar4[-1] + iVar2;
        lVar5 = lVar5 + -1;
        piVar4 = piVar4 + 1;
        iVar3 = iVar2;
      } while (lVar5 != 0);
      return;
    }
  }
  else if ((param_3 == 4) && (0 < (int)param_2)) {
    iVar3 = *(int *)(param_4 + -4);
    piVar4 = (int *)(param_4 + -4);
    do {
      piVar1 = piVar4 + 1;
      iVar3 = *(int *)(((longlong)param_1 - param_4) + (longlong)piVar1) +
              (((piVar4[-2] + iVar3) * 4 + piVar4[-1] * -6) - piVar4[-3]);
      *piVar1 = iVar3;
      lVar5 = lVar5 + -1;
      piVar4 = piVar1;
    } while (lVar5 != 0);
  }
  return;
}





// 函数: void FUN_180825cbd(longlong param_1,int param_2,int param_3,longlong param_4)
void FUN_180825cbd(longlong param_1,int param_2,int param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong in_R10;
  longlong in_R11;
  
  if (param_3 == 1) {
    if (0 < param_2) {
      piVar4 = (int *)(param_4 + -8);
      iVar3 = *(int *)(param_4 + -8);
      do {
        piVar1 = piVar4 + 1;
        piVar4[2] = (*(int *)((longlong)piVar4 + (param_1 - in_R11) + 8) + *piVar1 * 2) - iVar3;
        in_R10 = in_R10 + -1;
        piVar4 = piVar4 + 1;
        iVar3 = *piVar1;
      } while (in_R10 != 0);
      return;
    }
  }
  else if (param_3 == 2) {
    if (0 < param_2) {
      piVar4 = (int *)(param_4 + -8);
      iVar3 = *(int *)(param_4 + -8);
      do {
        iVar2 = piVar4[1];
        piVar4[2] = *(int *)((longlong)piVar4 + (param_1 - in_R11) + 8) + iVar2 * 2 + iVar3 * -3 +
                    piVar4[-1] + iVar2;
        in_R10 = in_R10 + -1;
        piVar4 = piVar4 + 1;
        iVar3 = iVar2;
      } while (in_R10 != 0);
      return;
    }
  }
  else if ((param_3 == 3) && (0 < param_2)) {
    iVar3 = *(int *)(param_4 + -4);
    piVar4 = (int *)(param_4 + -4);
    do {
      piVar1 = piVar4 + 1;
      iVar3 = *(int *)((param_1 - param_4) + (longlong)piVar1) +
              (((piVar4[-2] + iVar3) * 4 + piVar4[-1] * -6) - piVar4[-3]);
      *piVar1 = iVar3;
      in_R10 = in_R10 + -1;
      piVar4 = piVar1;
    } while (in_R10 != 0);
  }
  return;
}





// 函数: void FUN_180825d28(void)
void FUN_180825d28(void)

{
  return;
}





// 函数: void FUN_180825d2d(longlong param_1,int param_2,undefined8 param_3,longlong param_4)
void FUN_180825d2d(longlong param_1,int param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  int *piVar2;
  longlong in_R10;
  int iVar3;
  longlong in_R11;
  
  if (0 < param_2) {
    piVar2 = (int *)(param_4 + -8);
    iVar3 = *(int *)(param_4 + -8);
    do {
      iVar1 = piVar2[1];
      piVar2[2] = *(int *)((longlong)piVar2 + (param_1 - in_R11) + 8) + iVar1 * 2 + iVar3 * -3 +
                  piVar2[-1] + iVar1;
      in_R10 = in_R10 + -1;
      piVar2 = piVar2 + 1;
      iVar3 = iVar1;
    } while (in_R10 != 0);
    return;
  }
  return;
}





// 函数: void FUN_180825d87(longlong param_1,int param_2,undefined8 param_3,longlong param_4)
void FUN_180825d87(longlong param_1,int param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int *piVar2;
  longlong in_R10;
  int iVar3;
  longlong in_R11;
  
  if (0 < param_2) {
    piVar2 = (int *)(param_4 + -8);
    iVar3 = *(int *)(param_4 + -8);
    do {
      piVar1 = piVar2 + 1;
      piVar2[2] = (*(int *)((longlong)piVar2 + (param_1 - in_R11) + 8) + *piVar1 * 2) - iVar3;
      in_R10 = in_R10 + -1;
      piVar2 = piVar2 + 1;
      iVar3 = *piVar1;
    } while (in_R10 != 0);
    return;
  }
  return;
}





