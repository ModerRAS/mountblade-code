#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part064.c - 22 个函数

// 函数: void FUN_18009c68a(void)
void FUN_18009c68a(void)

{
  longlong lVar1;
  int32_t *unaff_RSI;
  longlong unaff_RDI;
  
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x28,*(int8_t *)(unaff_RDI + 0x28));
  *(int32_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(int32_t *)(lVar1 + 0x24) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18009c6a1(void)
void FUN_18009c6a1(void)

{
  longlong lVar1;
  int32_t *unaff_RSI;
  longlong unaff_RDI;
  
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x28,*(int8_t *)(unaff_RDI + 0x28));
  *(int32_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(int32_t *)(lVar1 + 0x24) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18009c6a5(void)
void FUN_18009c6a5(void)

{
  longlong lVar1;
  int32_t *unaff_RSI;
  longlong unaff_RDI;
  
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x28,*(int8_t *)(unaff_RDI + 0x28));
  *(int32_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(int32_t *)(lVar1 + 0x24) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}





// 函数: void FUN_18009c6e7(void)
void FUN_18009c6e7(void)

{
  uint64_t unaff_RBX;
  uint64_t *unaff_R14;
  
  *unaff_R14 = unaff_RBX;
  return;
}





// 函数: void FUN_18009c700(int *param_1,int *param_2,uint64_t *param_3)
void FUN_18009c700(int *param_1,int *param_2,uint64_t *param_3)

{
  int iVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  
  if (param_1 != param_2) {
    iVar8 = 0;
    lVar6 = (longlong)param_2 - (longlong)param_1 >> 2;
    for (lVar2 = lVar6; lVar2 != 0; lVar2 = lVar2 >> 1) {
      iVar8 = iVar8 + 1;
    }
    FUN_18009d4f0(param_1,param_2,(longlong)(iVar8 + -1) * 2,param_3);
    if (lVar6 < 0x1d) {
      FUN_18009d290(param_1,param_2,param_3);
    }
    else {
      piVar9 = param_1 + 0x1c;
      FUN_18009d290(param_1,piVar9,param_3);
      if (piVar9 != param_2) {
LAB_18009c790:
        iVar8 = *piVar9;
        piVar7 = piVar9;
        do {
          puVar5 = (uint64_t *)param_3[2];
          iVar1 = piVar7[-1];
          puVar3 = puVar5;
          puVar4 = param_3;
          if (puVar5 == (uint64_t *)0x0) {
LAB_18009c7dc:
            puVar4 = param_3;
          }
          else {
            do {
              if (*(int *)(puVar3 + 4) < iVar1) {
                puVar3 = (uint64_t *)*puVar3;
              }
              else {
                puVar4 = puVar3;
                puVar3 = (uint64_t *)puVar3[1];
              }
            } while (puVar3 != (uint64_t *)0x0);
            if ((puVar4 == param_3) || (iVar1 < *(int *)(puVar4 + 4))) goto LAB_18009c7dc;
          }
          puVar3 = param_3;
          if (puVar5 == (uint64_t *)0x0) {
LAB_18009c810:
            puVar3 = param_3;
          }
          else {
            do {
              if (*(int *)(puVar5 + 4) < iVar8) {
                puVar5 = (uint64_t *)*puVar5;
              }
              else {
                puVar3 = puVar5;
                puVar5 = (uint64_t *)puVar5[1];
              }
            } while (puVar5 != (uint64_t *)0x0);
            if ((puVar3 == param_3) || (iVar8 < *(int *)(puVar3 + 4))) goto LAB_18009c810;
          }
          if (*(float *)((longlong)puVar3 + 0x24) <= *(float *)((longlong)puVar4 + 0x24))
          goto LAB_18009c82a;
          *piVar7 = iVar1;
          piVar7 = piVar7 + -1;
        } while( true );
      }
    }
  }
  return;
LAB_18009c82a:
  piVar9 = piVar9 + 1;
  *piVar7 = iVar8;
  if (piVar9 == param_2) {
    return;
  }
  goto LAB_18009c790;
}





// 函数: void FUN_18009c718(longlong param_1,int *param_2,uint64_t *param_3)
void FUN_18009c718(longlong param_1,int *param_2,uint64_t *param_3)

{
  int iVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  
  iVar8 = 0;
  lVar6 = (longlong)param_2 - param_1 >> 2;
  for (lVar2 = lVar6; lVar2 != 0; lVar2 = lVar2 >> 1) {
    iVar8 = iVar8 + 1;
  }
  FUN_18009d4f0(param_1,param_2,(longlong)(iVar8 + -1) * 2,param_3);
  if (lVar6 < 0x1d) {
    FUN_18009d290(param_1,param_2,param_3);
  }
  else {
    piVar9 = (int *)(param_1 + 0x70);
    FUN_18009d290(param_1,piVar9,param_3);
    if (piVar9 != param_2) {
LAB_18009c790:
      iVar8 = *piVar9;
      piVar7 = piVar9;
      do {
        puVar5 = (uint64_t *)param_3[2];
        iVar1 = piVar7[-1];
        puVar3 = puVar5;
        puVar4 = param_3;
        if (puVar5 == (uint64_t *)0x0) {
LAB_18009c7dc:
          puVar4 = param_3;
        }
        else {
          do {
            if (*(int *)(puVar3 + 4) < iVar1) {
              puVar3 = (uint64_t *)*puVar3;
            }
            else {
              puVar4 = puVar3;
              puVar3 = (uint64_t *)puVar3[1];
            }
          } while (puVar3 != (uint64_t *)0x0);
          if ((puVar4 == param_3) || (iVar1 < *(int *)(puVar4 + 4))) goto LAB_18009c7dc;
        }
        puVar3 = param_3;
        if (puVar5 == (uint64_t *)0x0) {
LAB_18009c810:
          puVar3 = param_3;
        }
        else {
          do {
            if (*(int *)(puVar5 + 4) < iVar8) {
              puVar5 = (uint64_t *)*puVar5;
            }
            else {
              puVar3 = puVar5;
              puVar5 = (uint64_t *)puVar5[1];
            }
          } while (puVar5 != (uint64_t *)0x0);
          if ((puVar3 == param_3) || (iVar8 < *(int *)(puVar3 + 4))) goto LAB_18009c810;
        }
        if (*(float *)((longlong)puVar3 + 0x24) <= *(float *)((longlong)puVar4 + 0x24))
        goto LAB_18009c82a;
        *piVar7 = iVar1;
        piVar7 = piVar7 + -1;
      } while( true );
    }
  }
  return;
LAB_18009c82a:
  piVar9 = piVar9 + 1;
  *piVar7 = iVar8;
  if (piVar9 == param_2) {
    return;
  }
  goto LAB_18009c790;
}





// 函数: void FUN_18009c76a(uint64_t param_1)
void FUN_18009c76a(uint64_t param_1)

{
  int iVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *unaff_RBX;
  int *unaff_RBP;
  longlong unaff_RDI;
  int *piVar6;
  int *piVar7;
  
  piVar7 = (int *)(unaff_RDI + 0x70);
  FUN_18009d290(param_1,piVar7);
joined_r0x00018009c77e:
  if (piVar7 == unaff_RBP) {
    return;
  }
  iVar1 = *piVar7;
  piVar6 = piVar7;
  do {
    puVar5 = (uint64_t *)unaff_RBX[2];
    iVar2 = piVar6[-1];
    puVar3 = puVar5;
    puVar4 = unaff_RBX;
    if (puVar5 == (uint64_t *)0x0) {
LAB_18009c7dc:
      puVar4 = unaff_RBX;
    }
    else {
      do {
        if (*(int *)(puVar3 + 4) < iVar2) {
          puVar3 = (uint64_t *)*puVar3;
        }
        else {
          puVar4 = puVar3;
          puVar3 = (uint64_t *)puVar3[1];
        }
      } while (puVar3 != (uint64_t *)0x0);
      if ((puVar4 == unaff_RBX) || (iVar2 < *(int *)(puVar4 + 4))) goto LAB_18009c7dc;
    }
    puVar3 = unaff_RBX;
    if (puVar5 == (uint64_t *)0x0) {
LAB_18009c810:
      puVar3 = unaff_RBX;
    }
    else {
      do {
        if (*(int *)(puVar5 + 4) < iVar1) {
          puVar5 = (uint64_t *)*puVar5;
        }
        else {
          puVar3 = puVar5;
          puVar5 = (uint64_t *)puVar5[1];
        }
      } while (puVar5 != (uint64_t *)0x0);
      if ((puVar3 == unaff_RBX) || (iVar1 < *(int *)(puVar3 + 4))) goto LAB_18009c810;
    }
    if (*(float *)((longlong)puVar3 + 0x24) <= *(float *)((longlong)puVar4 + 0x24)) break;
    *piVar6 = iVar2;
    piVar6 = piVar6 + -1;
  } while( true );
  piVar7 = piVar7 + 1;
  *piVar6 = iVar1;
  goto joined_r0x00018009c77e;
}





// 函数: void FUN_18009c83f(void)
void FUN_18009c83f(void)

{
  return;
}





// 函数: void FUN_18009c853(void)
void FUN_18009c853(void)

{
  return;
}





// 函数: void FUN_18009c854(void)
void FUN_18009c854(void)

{
  FUN_18009d290();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18009c860(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_18009c860(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  longlong param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int32_t uVar4;
  longlong lVar5;
  
  if (((char)param_4 == '\0') && (param_3 != param_1)) {
    if (*(int *)(param_3 + 0x30) == 0) {
LAB_18009c8cb:
      uVar4 = 1;
      goto LAB_18009c8d4;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar2 = *(byte **)(param_3 + 0x28);
      lVar5 = *(longlong *)(param_5 + 8) - (longlong)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar3 = (uint)pbVar2[lVar5];
        if (bVar1 != uVar3) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar1 - uVar3) < 1) goto LAB_18009c8cb;
    }
  }
  uVar4 = 0;
LAB_18009c8d4:
  lVar5 = FUN_18062b420(_DAT_180c8ed18,0x48,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  FUN_180627ae0(lVar5 + 0x20,param_5);
  *(int32_t *)(lVar5 + 0x40) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar5,param_3,param_1,uVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18009c940(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,longlong param_4)

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
LAB_18009c990:
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
      if (!bVar2) goto LAB_18009c990;
      puVar4 = (uint64_t *)puVar4[1];
    }
  }
  puVar4 = puVar3;
  if (bVar2) {
    if (puVar3 != (uint64_t *)param_1[1]) {
      puVar4 = (uint64_t *)func_0x00018066b9a0(puVar3);
      goto LAB_18009c9b0;
    }
  }
  else {
LAB_18009c9b0:
    if (*(int *)(param_4 + 0x10) == 0) {
LAB_18009cae7:
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
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18009cae7;
    }
  }
  if (puVar3 != param_1) {
    if (*(int *)(puVar3 + 6) == 0) {
LAB_18009ca27:
      uVar9 = 1;
      goto LAB_18009ca70;
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
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18009ca27;
    }
  }
  uVar9 = 0;
LAB_18009ca70:
  lVar8 = FUN_18062b420(_DAT_180c8ed18,0x70,*(int8_t *)(param_1 + 5));
  FUN_180627ae0(lVar8 + 0x20,param_4);
  lVar7 = lVar8 + 0x40;
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



// 函数: void FUN_18009cb10(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_18009cb10(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  longlong param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint64_t uVar6;
  
  if (((char)param_4 == '\0') && (param_3 != param_1)) {
    if (*(int *)(param_3 + 0x30) == 0) {
LAB_18009cb7a:
      uVar6 = 1;
      goto LAB_18009cb85;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar2 = *(byte **)(param_3 + 0x28);
      lVar5 = *(longlong *)(param_5 + 8) - (longlong)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar3 = (uint)pbVar2[lVar5];
        if (bVar1 != uVar3) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar1 - uVar3) < 1) goto LAB_18009cb7a;
    }
  }
  uVar6 = 0;
LAB_18009cb85:
  lVar5 = FUN_18062b420(_DAT_180c8ed18,0x70,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  FUN_180627ae0(lVar5 + 0x20,param_5);
  lVar4 = lVar5 + 0x40;
  *(uint64_t *)(lVar5 + 0x58) = 0;
  *(int32_t *)(lVar5 + 0x68) = 3;
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar5 + 0x48) = lVar4;
  *(uint64_t *)(lVar5 + 0x50) = 0;
  *(int8_t *)(lVar5 + 0x58) = 0;
  *(uint64_t *)(lVar5 + 0x60) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar5,param_3,param_1,uVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18009cc10(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,longlong param_4)

{
  byte bVar1;
  bool bVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  byte *pbVar5;
  uint uVar6;
  longlong lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  bVar2 = true;
  puVar4 = (uint64_t *)param_1[2];
  puVar3 = param_1;
  while (puVar4 != (uint64_t *)0x0) {
    puVar3 = puVar4;
    if (*(int *)(puVar4 + 6) == 0) {
      bVar2 = false;
LAB_18009cc60:
      puVar4 = (uint64_t *)*puVar4;
    }
    else {
      if (*(int *)(param_4 + 0x10) == 0) {
        bVar2 = true;
      }
      else {
        pbVar5 = (byte *)puVar4[5];
        lVar7 = *(longlong *)(param_4 + 8) - (longlong)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar7];
          if (bVar1 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar6);
      }
      if (!bVar2) goto LAB_18009cc60;
      puVar4 = (uint64_t *)puVar4[1];
    }
  }
  puVar4 = puVar3;
  if (bVar2) {
    if (puVar3 != (uint64_t *)param_1[1]) {
      puVar4 = (uint64_t *)func_0x00018066b9a0(puVar3);
      goto LAB_18009cc80;
    }
  }
  else {
LAB_18009cc80:
    if (*(int *)(param_4 + 0x10) == 0) {
LAB_18009cdb6:
      *param_2 = puVar4;
      *(int8_t *)(param_2 + 1) = 0;
      return param_2;
    }
    if (*(int *)(puVar4 + 6) != 0) {
      pbVar5 = *(byte **)(param_4 + 8);
      lVar7 = puVar4[5] - (longlong)pbVar5;
      do {
        bVar1 = *pbVar5;
        uVar6 = (uint)pbVar5[lVar7];
        if (bVar1 != uVar6) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18009cdb6;
    }
  }
  if (puVar3 != param_1) {
    if (*(int *)(puVar3 + 6) == 0) {
LAB_18009ccf7:
      uVar8 = 1;
      goto LAB_18009cd40;
    }
    if (*(int *)(param_4 + 0x10) != 0) {
      pbVar5 = (byte *)puVar3[5];
      lVar7 = *(longlong *)(param_4 + 8) - (longlong)pbVar5;
      do {
        bVar1 = *pbVar5;
        uVar6 = (uint)pbVar5[lVar7];
        if (bVar1 != uVar6) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18009ccf7;
    }
  }
  uVar8 = 0;
LAB_18009cd40:
  lVar7 = FUN_18062b420(_DAT_180c8ed18,0x60,*(int8_t *)(param_1 + 5));
  FUN_180627ae0(lVar7 + 0x20,param_4);
  *(uint64_t *)(lVar7 + 0x40) = 0;
  *(uint64_t *)(lVar7 + 0x48) = 0;
  *(uint64_t *)(lVar7 + 0x50) = 0;
  *(int32_t *)(lVar7 + 0x58) = 3;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,puVar3,param_1,uVar8,uVar9,(uint64_t *)(lVar7 + 0x40));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18009cde0(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_18009cde0(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  longlong param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  uint64_t uVar5;
  
  if (((char)param_4 == '\0') && (param_3 != param_1)) {
    if (*(int *)(param_3 + 0x30) == 0) {
LAB_18009ce4a:
      uVar5 = 1;
      goto LAB_18009ce55;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar2 = *(byte **)(param_3 + 0x28);
      lVar4 = *(longlong *)(param_5 + 8) - (longlong)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar3 = (uint)pbVar2[lVar4];
        if (bVar1 != uVar3) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar1 - uVar3) < 1) goto LAB_18009ce4a;
    }
  }
  uVar5 = 0;
LAB_18009ce55:
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0x60,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  FUN_180627ae0(lVar4 + 0x20,param_5);
  *(uint64_t *)(lVar4 + 0x40) = 0;
  *(uint64_t *)(lVar4 + 0x48) = 0;
  *(uint64_t *)(lVar4 + 0x50) = 0;
  *(int32_t *)(lVar4 + 0x58) = 3;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,param_3,param_1,uVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18009cee0(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_18009cee0(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  longlong param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  uint64_t uVar5;
  
  if (((char)param_4 == '\0') && (param_3 != param_1)) {
    if (*(int *)(param_3 + 0x30) == 0) {
LAB_18009cf4a:
      uVar5 = 1;
      goto LAB_18009cf55;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar2 = *(byte **)(param_3 + 0x28);
      lVar4 = *(longlong *)(param_5 + 8) - (longlong)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar3 = (uint)pbVar2[lVar4];
        if (bVar1 != uVar3) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar1 - uVar3) < 1) goto LAB_18009cf4a;
    }
  }
  uVar5 = 0;
LAB_18009cf55:
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0x48,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  FUN_180627ae0(lVar4 + 0x20,param_5);
  *(int8_t *)(lVar4 + 0x40) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,param_3,param_1,uVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18009cfc0(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_18009cfc0(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  longlong param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  uint64_t uVar5;
  
  if (((char)param_4 == '\0') && (param_3 != param_1)) {
    if (*(int *)(param_3 + 0x30) == 0) {
LAB_18009d02a:
      uVar5 = 1;
      goto LAB_18009d035;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar2 = *(byte **)(param_3 + 0x28);
      lVar4 = *(longlong *)(param_5 + 8) - (longlong)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar3 = (uint)pbVar2[lVar4];
        if (bVar1 != uVar3) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar1 - uVar3) < 1) goto LAB_18009d02a;
    }
  }
  uVar5 = 0;
LAB_18009d035:
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0x1c0,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  FUN_180627ae0(lVar4 + 0x20,param_5);
  FUN_18009ad10(lVar4 + 0x40);
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,param_3,param_1,uVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18009d0a0(longlong param_1,uint64_t param_2,longlong param_3,char param_4,int *param_5)
void FUN_18009d0a0(longlong param_1,uint64_t param_2,longlong param_3,char param_4,int *param_5)

{
  longlong lVar1;
  int32_t uVar2;
  
  if (((param_4 == '\0') && (param_3 != param_1)) && (*(int *)(param_3 + 0x20) <= *param_5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x28,*(int8_t *)(param_1 + 0x28));
  *(int *)(lVar1 + 0x20) = *param_5;
  *(int32_t *)(lVar1 + 0x24) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1,param_3,param_1,uVar2);
}





// 函数: void FUN_18009d140(longlong *param_1,longlong *param_2,longlong param_3)
void FUN_18009d140(longlong *param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  byte *pbVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  float extraout_XMM0_Da;
  int8_t auStackX_8 [8];
  longlong *plStackX_10;
  longlong lStackX_18;
  int8_t auStackX_20 [8];
  
  if ((param_1 != param_2) &&
     (plVar10 = param_1 + 1, plStackX_10 = param_2, lStackX_18 = param_3, plVar10 != param_2)) {
    do {
      lVar2 = *plVar10;
      lVar9 = param_3;
      plVar11 = plVar10;
      plVar8 = plVar10;
      while (plVar11 != param_1) {
        lVar3 = plVar11[-1];
        plVar11 = plVar11 + -1;
        plVar5 = (longlong *)FUN_180058080(param_3 + 0x90,auStackX_8,lVar2 + 0x20);
        plVar5 = (longlong *)FUN_180058080(*(int32_t *)(*plVar5 + 0x40),auStackX_20,lVar3 + 0x20)
        ;
        if (extraout_XMM0_Da == *(float *)(*plVar5 + 0x40)) {
          if (*(int *)(lVar2 + 0x30) == 0) {
            bVar4 = false;
          }
          else if (*(int *)(lVar3 + 0x30) == 0) {
            bVar4 = true;
          }
          else {
            pbVar6 = *(byte **)(lVar2 + 0x28);
            lVar9 = *(longlong *)(lVar3 + 0x28) - (longlong)pbVar6;
            do {
              bVar1 = *pbVar6;
              uVar7 = (uint)pbVar6[lVar9];
              if (bVar1 != uVar7) break;
              pbVar6 = pbVar6 + 1;
            } while (uVar7 != 0);
            bVar4 = 0 < (int)(bVar1 - uVar7);
          }
        }
        else {
          bVar4 = *(float *)(*plVar5 + 0x40) < extraout_XMM0_Da;
        }
        param_2 = plStackX_10;
        lVar9 = lStackX_18;
        if (!bVar4) break;
        *plVar8 = lVar3;
        plVar8 = plVar8 + -1;
      }
      plVar10 = plVar10 + 1;
      *plVar8 = lVar2;
      param_3 = lVar9;
    } while (plVar10 != param_2);
  }
  return;
}





// 函数: void FUN_18009d15b(longlong *param_1,longlong *param_2,longlong param_3)
void FUN_18009d15b(longlong *param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  byte *pbVar6;
  uint uVar7;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  longlong *plVar8;
  longlong lVar9;
  longlong in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  longlong *plVar10;
  uint64_t unaff_R15;
  longlong *plVar11;
  float extraout_XMM0_Da;
  longlong *in_stack_00000078;
  longlong in_stack_00000080;
  
  *(uint64_t *)(in_R11 + -0x38) = unaff_R14;
  plVar10 = param_1 + 1;
  if (plVar10 != param_2) {
    *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
    *(uint64_t *)(in_R11 + -0x20) = unaff_RSI;
    *(uint64_t *)(in_R11 + -0x28) = unaff_RDI;
    *(uint64_t *)(in_R11 + -0x30) = unaff_R12;
    *(uint64_t *)(in_R11 + -0x40) = unaff_R15;
    do {
      lVar2 = *plVar10;
      lVar9 = param_3;
      plVar11 = plVar10;
      plVar8 = plVar10;
      while (plVar11 != param_1) {
        lVar3 = plVar11[-1];
        plVar11 = plVar11 + -1;
        plVar5 = (longlong *)FUN_180058080(param_3 + 0x90,&stack0x00000070,lVar2 + 0x20);
        plVar5 = (longlong *)
                 FUN_180058080(*(int32_t *)(*plVar5 + 0x40),&stack0x00000088,lVar3 + 0x20);
        if (extraout_XMM0_Da == *(float *)(*plVar5 + 0x40)) {
          if (*(int *)(lVar2 + 0x30) == 0) {
            bVar4 = false;
          }
          else if (*(int *)(lVar3 + 0x30) == 0) {
            bVar4 = true;
          }
          else {
            pbVar6 = *(byte **)(lVar2 + 0x28);
            lVar9 = *(longlong *)(lVar3 + 0x28) - (longlong)pbVar6;
            do {
              bVar1 = *pbVar6;
              uVar7 = (uint)pbVar6[lVar9];
              if (bVar1 != uVar7) break;
              pbVar6 = pbVar6 + 1;
            } while (uVar7 != 0);
            bVar4 = 0 < (int)(bVar1 - uVar7);
          }
        }
        else {
          bVar4 = *(float *)(*plVar5 + 0x40) < extraout_XMM0_Da;
        }
        param_2 = in_stack_00000078;
        lVar9 = in_stack_00000080;
        if (!bVar4) break;
        *plVar8 = lVar3;
        plVar8 = plVar8 + -1;
      }
      plVar10 = plVar10 + 1;
      *plVar8 = lVar2;
      param_3 = lVar9;
    } while (plVar10 != param_2);
  }
  return;
}





// 函数: void FUN_18009d175(void)
void FUN_18009d175(void)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *in_RAX;
  longlong *plVar5;
  byte *pbVar6;
  uint uVar7;
  longlong unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  longlong *plVar8;
  longlong lVar9;
  longlong in_R11;
  uint64_t unaff_R12;
  longlong *unaff_R13;
  longlong *unaff_R14;
  uint64_t unaff_R15;
  longlong *plVar10;
  float extraout_XMM0_Da;
  longlong *in_stack_00000078;
  longlong in_stack_00000080;
  
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x40) = unaff_R15;
  do {
    lVar2 = *unaff_R14;
    lVar9 = unaff_RBX;
    plVar10 = unaff_R14;
    plVar8 = unaff_R14;
    while (plVar10 != unaff_R13) {
      lVar3 = plVar10[-1];
      plVar10 = plVar10 + -1;
      FUN_180058080(unaff_RBX + 0x90,&stack0x00000070,lVar2 + 0x20);
      plVar5 = (longlong *)FUN_180058080(unaff_RBX + 0x90,&stack0x00000088,lVar3 + 0x20);
      if (extraout_XMM0_Da == *(float *)(*plVar5 + 0x40)) {
        if (*(int *)(lVar2 + 0x30) == 0) {
          bVar4 = false;
        }
        else if (*(int *)(lVar3 + 0x30) == 0) {
          bVar4 = true;
        }
        else {
          pbVar6 = *(byte **)(lVar2 + 0x28);
          lVar9 = *(longlong *)(lVar3 + 0x28) - (longlong)pbVar6;
          do {
            bVar1 = *pbVar6;
            uVar7 = (uint)pbVar6[lVar9];
            if (bVar1 != uVar7) break;
            pbVar6 = pbVar6 + 1;
          } while (uVar7 != 0);
          bVar4 = 0 < (int)(bVar1 - uVar7);
        }
      }
      else {
        bVar4 = *(float *)(*plVar5 + 0x40) < extraout_XMM0_Da;
      }
      in_RAX = in_stack_00000078;
      lVar9 = in_stack_00000080;
      if (!bVar4) break;
      *plVar8 = lVar3;
      plVar8 = plVar8 + -1;
    }
    unaff_R14 = unaff_R14 + 1;
    *plVar8 = lVar2;
    unaff_RBX = lVar9;
    if (unaff_R14 == in_RAX) {
      return;
    }
  } while( true );
}





// 函数: void FUN_18009d27e(void)
void FUN_18009d27e(void)

{
  return;
}





// 函数: void FUN_18009d28a(void)
void FUN_18009d28a(void)

{
  return;
}





// 函数: void FUN_18009d290(int *param_1,int *param_2,uint64_t *param_3)
void FUN_18009d290(int *param_1,int *param_2,uint64_t *param_3)

{
  int iVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  if (param_1 != param_2) {
    for (piVar8 = param_1 + 1; piVar8 != param_2; piVar8 = piVar8 + 1) {
      iVar1 = *piVar8;
      piVar7 = piVar8;
      piVar6 = piVar8;
      while (piVar6 != param_1) {
        puVar5 = (uint64_t *)param_3[2];
        piVar6 = piVar6 + -1;
        iVar2 = *piVar6;
        puVar3 = puVar5;
        puVar4 = param_3;
        if (puVar5 == (uint64_t *)0x0) {
LAB_18009d31f:
          puVar4 = param_3;
        }
        else {
          do {
            if (*(int *)(puVar3 + 4) < iVar2) {
              puVar3 = (uint64_t *)*puVar3;
            }
            else {
              puVar4 = puVar3;
              puVar3 = (uint64_t *)puVar3[1];
            }
          } while (puVar3 != (uint64_t *)0x0);
          if ((puVar4 == param_3) || (iVar2 < *(int *)(puVar4 + 4))) goto LAB_18009d31f;
        }
        puVar3 = param_3;
        if (puVar5 == (uint64_t *)0x0) {
LAB_18009d358:
          puVar3 = param_3;
        }
        else {
          do {
            if (*(int *)(puVar5 + 4) < iVar1) {
              puVar5 = (uint64_t *)*puVar5;
            }
            else {
              puVar3 = puVar5;
              puVar5 = (uint64_t *)puVar5[1];
            }
          } while (puVar5 != (uint64_t *)0x0);
          if ((puVar3 == param_3) || (iVar1 < *(int *)(puVar3 + 4))) goto LAB_18009d358;
        }
        if (*(float *)((longlong)puVar3 + 0x24) <= *(float *)((longlong)puVar4 + 0x24)) break;
        *piVar7 = iVar2;
        piVar7 = piVar7 + -1;
      }
      *piVar7 = iVar1;
    }
  }
  return;
}





