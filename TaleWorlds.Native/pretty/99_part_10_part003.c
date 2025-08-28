#include "TaleWorlds.Native.Split.h"

// 99_part_10_part003.c - 1 个函数

// 函数: void FUN_1806a4347(void)
void FUN_1806a4347(void)

{
  uint64_t uVar1;
  uint64_t *in_R9;
  uint64_t *unaff_R13;
  
  uVar1 = in_R9[1];
  *unaff_R13 = *in_R9;
  unaff_R13[1] = uVar1;
  return;
}



longlong * FUN_1806a4370(longlong param_1,longlong *param_2,uint *param_3,longlong *param_4)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint64_t uVar4;
  void *puVar5;
  int32_t *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  void *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uStackX_18;
  
  uVar2 = *param_3;
  uVar3 = (uint)((int)param_4[1] - (int)*param_4) / uVar2;
  if ((int)(*(longlong *)(param_3 + 6) - *(longlong *)(param_3 + 4) >> 3) == 0) {
    lVar12 = *param_4;
    lVar9 = param_4[1];
  }
  else {
    uStackX_18 = 0;
    plVar1 = (longlong *)(param_1 + 400);
    lVar12 = *plVar1;
    *(longlong *)(param_1 + 0x198) = lVar12;
    if (uVar3 != 0) {
      do {
        lVar12 = (ulonglong)(uStackX_18 * uVar2) + *param_4;
        if (lVar12 == 0) {
          if ((uVar2 != 0) && (uVar8 = (ulonglong)uVar2, uVar2 != 0)) {
            do {
              puVar6 = (int32_t *)FUN_1806a5c40(plVar1,4);
              *puVar6 = 0;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
        }
        else if (uVar2 != 0) {
          uVar4 = FUN_1806a5c40(plVar1,uVar2);
                    // WARNING: Subroutine does not return
          memcpy(uVar4,lVar12,(ulonglong)uVar2);
        }
        lVar9 = *(longlong *)(param_3 + 4);
        uVar8 = 0;
        if ((int)(*(longlong *)(param_3 + 6) - lVar9 >> 3) != 0) {
          do {
            uVar11 = *(ulonglong *)(lVar9 + uVar8 * 8);
            if ((int)uVar11 != 1) {
              lVar9 = -1;
              puVar5 = *(void **)((uVar11 >> 0x20) + lVar12);
              puVar10 = &DAT_18098bc73;
              if (puVar5 != (void *)0x0) {
                puVar10 = puVar5;
              }
              puVar5 = &DAT_18098bc73;
              if (puVar10 != (void *)0x0) {
                puVar5 = puVar10;
              }
              do {
                lVar9 = lVar9 + 1;
              } while (puVar5[lVar9] != '\0');
              uVar7 = (int)lVar9 + 1;
              if (puVar10 == (void *)0x0) {
                uVar11 = (ulonglong)uVar7;
                if ((uVar7 != 0) && (uVar7 != 0)) {
                  do {
                    puVar6 = (int32_t *)FUN_1806a5c40(plVar1,4);
                    *puVar6 = 0;
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
              }
              else if (uVar7 != 0) {
                uVar4 = FUN_1806a5c40(plVar1,uVar7);
                    // WARNING: Subroutine does not return
                memcpy(uVar4,puVar10,uVar7);
              }
            }
            lVar9 = *(longlong *)(param_3 + 4);
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while (uVar7 < (uint)(*(longlong *)(param_3 + 6) - lVar9 >> 3));
        }
        uStackX_18 = uStackX_18 + 1;
      } while (uStackX_18 < uVar3);
      lVar12 = *plVar1;
    }
    lVar9 = (ulonglong)(uint)(*(int *)(param_1 + 0x198) - (int)lVar12) + lVar12;
    *param_4 = lVar12;
    param_4[1] = lVar9;
  }
  *param_2 = lVar12;
  param_2[1] = lVar9;
  return param_2;
}



longlong * FUN_1806a43bd(uint64_t param_1,int param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  uint in_EAX;
  uint64_t uVar2;
  void *puVar3;
  int32_t *puVar4;
  uint uVar5;
  uint64_t unaff_RBX;
  ulonglong uVar6;
  longlong lVar7;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  void *puVar8;
  longlong *unaff_RDI;
  ulonglong uVar9;
  longlong in_R11;
  int iVar10;
  ulonglong unaff_R12;
  uint64_t unaff_R13;
  longlong lVar11;
  uint64_t unaff_R14;
  longlong unaff_R15;
  uint uStackX_20;
  longlong in_stack_00000080;
  longlong *in_stack_00000088;
  uint uStack0000000000000090;
  longlong *in_stack_00000098;
  
  *(uint64_t *)(in_R11 + -0x40) = unaff_R14;
  plVar1 = (longlong *)(param_4 + 400);
  lVar11 = *plVar1;
  *(longlong *)(param_4 + 0x198) = lVar11;
  if (param_2 != 0) {
    *(uint64_t *)(in_R11 + -0x20) = unaff_RBX;
    *(uint64_t *)(in_R11 + -0x28) = unaff_RBP;
    *(uint64_t *)(in_R11 + -0x30) = unaff_RSI;
    *(uint64_t *)(in_R11 + -0x38) = unaff_R13;
    uStack0000000000000090 = in_EAX;
    do {
      iVar10 = (int)unaff_R12;
      lVar11 = (ulonglong)(uStack0000000000000090 * iVar10) + *unaff_RDI;
      if (lVar11 == 0) {
        if ((iVar10 != 0) && (uVar6 = unaff_R12, iVar10 != 0)) {
          do {
            puVar4 = (int32_t *)FUN_1806a5c40(plVar1,4);
            *puVar4 = 0;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      else if (iVar10 != 0) {
        uVar2 = FUN_1806a5c40(plVar1,unaff_R12 & 0xffffffff);
                    // WARNING: Subroutine does not return
        memcpy(uVar2,lVar11);
      }
      lVar7 = *(longlong *)(unaff_R15 + 0x10);
      uVar6 = 0;
      if ((int)(*(longlong *)(unaff_R15 + 0x18) - lVar7 >> 3) != 0) {
        do {
          uVar9 = *(ulonglong *)(lVar7 + uVar6 * 8);
          if ((int)uVar9 != 1) {
            lVar7 = -1;
            puVar3 = *(void **)((uVar9 >> 0x20) + lVar11);
            puVar8 = &DAT_18098bc73;
            if (puVar3 != (void *)0x0) {
              puVar8 = puVar3;
            }
            puVar3 = &DAT_18098bc73;
            if (puVar8 != (void *)0x0) {
              puVar3 = puVar8;
            }
            do {
              lVar7 = lVar7 + 1;
            } while (puVar3[lVar7] != '\0');
            uVar5 = (int)lVar7 + 1;
            if (puVar8 == (void *)0x0) {
              uVar9 = (ulonglong)uVar5;
              if ((uVar5 != 0) && (uVar5 != 0)) {
                do {
                  puVar4 = (int32_t *)FUN_1806a5c40(plVar1,4);
                  *puVar4 = 0;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
            }
            else if (uVar5 != 0) {
              uVar2 = FUN_1806a5c40(plVar1,uVar5);
                    // WARNING: Subroutine does not return
              memcpy(uVar2,puVar8,uVar5);
            }
          }
          lVar7 = *(longlong *)(unaff_R15 + 0x10);
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          unaff_RDI = in_stack_00000098;
        } while (uVar5 < (uint)(*(longlong *)(unaff_R15 + 0x18) - lVar7 >> 3));
      }
      uStack0000000000000090 = uStack0000000000000090 + 1;
    } while (uStack0000000000000090 < uStackX_20);
    lVar11 = *plVar1;
    param_3 = in_stack_00000088;
    param_4 = in_stack_00000080;
  }
  lVar7 = (ulonglong)(uint)(*(int *)(param_4 + 0x198) - (int)lVar11) + lVar11;
  *unaff_RDI = lVar11;
  unaff_RDI[1] = lVar7;
  *param_3 = lVar11;
  param_3[1] = lVar7;
  return param_3;
}



longlong * FUN_1806a43de(void *param_1)

{
  uint in_EAX;
  uint64_t uVar1;
  void *puVar2;
  int32_t *puVar3;
  uint uVar4;
  uint64_t unaff_RBX;
  ulonglong uVar5;
  longlong lVar6;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  void *puVar7;
  longlong *unaff_RDI;
  ulonglong uVar8;
  longlong in_R11;
  int iVar9;
  ulonglong unaff_R12;
  uint64_t unaff_R13;
  longlong lVar10;
  longlong *unaff_R14;
  longlong unaff_R15;
  void *extraout_XMM0_Qa;
  void *extraout_XMM0_Qa_00;
  uint uStackX_20;
  longlong in_stack_00000080;
  longlong *in_stack_00000088;
  uint in_stack_00000090;
  longlong *in_stack_00000098;
  
  *(uint64_t *)(in_R11 + -0x20) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x30) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R13;
  do {
    iVar9 = (int)unaff_R12;
    lVar10 = (ulonglong)(in_EAX * iVar9) + *unaff_RDI;
    if (lVar10 == 0) {
      if ((iVar9 != 0) && (uVar5 = unaff_R12, iVar9 != 0)) {
        do {
          puVar3 = (int32_t *)FUN_1806a5c40(param_1,4);
          *puVar3 = 0;
          uVar5 = uVar5 - 1;
          param_1 = extraout_XMM0_Qa;
        } while (uVar5 != 0);
      }
    }
    else if (iVar9 != 0) {
      uVar1 = FUN_1806a5c40(param_1,unaff_R12 & 0xffffffff);
                    // WARNING: Subroutine does not return
      memcpy(uVar1,lVar10);
    }
    lVar6 = *(longlong *)(unaff_R15 + 0x10);
    uVar5 = 0;
    if ((int)(*(longlong *)(unaff_R15 + 0x18) - lVar6 >> 3) != 0) {
      do {
        uVar8 = *(ulonglong *)(lVar6 + uVar5 * 8);
        if ((int)uVar8 != 1) {
          lVar6 = -1;
          param_1 = *(void **)((uVar8 >> 0x20) + lVar10);
          puVar7 = &DAT_18098bc73;
          if (param_1 != (void *)0x0) {
            puVar7 = param_1;
          }
          puVar2 = &DAT_18098bc73;
          if (puVar7 != (void *)0x0) {
            puVar2 = puVar7;
          }
          do {
            lVar6 = lVar6 + 1;
          } while (puVar2[lVar6] != '\0');
          uVar4 = (int)lVar6 + 1;
          if (puVar7 == (void *)0x0) {
            uVar8 = (ulonglong)uVar4;
            if ((uVar4 != 0) && (uVar4 != 0)) {
              do {
                puVar3 = (int32_t *)FUN_1806a5c40(param_1,4);
                *puVar3 = 0;
                uVar8 = uVar8 - 1;
                param_1 = extraout_XMM0_Qa_00;
              } while (uVar8 != 0);
            }
          }
          else if (uVar4 != 0) {
            uVar1 = FUN_1806a5c40(param_1,uVar4);
                    // WARNING: Subroutine does not return
            memcpy(uVar1,puVar7,uVar4);
          }
        }
        lVar6 = *(longlong *)(unaff_R15 + 0x10);
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        unaff_RDI = in_stack_00000098;
      } while (uVar4 < (uint)(*(longlong *)(unaff_R15 + 0x18) - lVar6 >> 3));
    }
    in_EAX = in_stack_00000090 + 1;
    in_stack_00000090 = in_EAX;
  } while (in_EAX < uStackX_20);
  lVar10 = *unaff_R14;
  lVar6 = (ulonglong)(uint)(*(int *)(in_stack_00000080 + 0x198) - (int)lVar10) + lVar10;
  *unaff_RDI = lVar10;
  unaff_RDI[1] = lVar6;
  *in_stack_00000088 = lVar10;
  in_stack_00000088[1] = lVar6;
  return in_stack_00000088;
}



longlong * FUN_1806a456b(longlong param_1,uint64_t param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  longlong *unaff_RDI;
  
  lVar1 = (ulonglong)(uint)(*(int *)(param_4 + 0x198) - (int)param_1) + param_1;
  *unaff_RDI = param_1;
  unaff_RDI[1] = lVar1;
  *param_3 = param_1;
  param_3[1] = lVar1;
  return param_3;
}



uint64_t * FUN_1806a4585(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  uint64_t *unaff_RDI;
  
  uVar1 = unaff_RDI[1];
  *param_3 = *unaff_RDI;
  param_3[1] = uVar1;
  return param_3;
}



longlong FUN_1806a45c0(longlong param_1,uint64_t *param_2,int8_t *param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  byte *pbVar6;
  char *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  
  uVar12 = 0;
  uVar9 = 0x1505;
  if (*(int *)(param_1 + 0x24) == 0) {
    *param_3 = 0;
  }
  else {
    uVar11 = 0x1505;
    pbVar6 = (byte *)*param_2;
    bVar3 = *pbVar6;
    pbVar2 = pbVar6;
    while (bVar3 != 0) {
      pbVar2 = pbVar2 + 1;
      uVar11 = uVar11 * 0x21 ^ (uint)bVar3;
      bVar3 = *pbVar2;
    }
    uVar12 = (ulonglong)(*(int *)(param_1 + 0x24) - 1U & uVar11);
    uVar11 = *(uint *)(*(longlong *)(param_1 + 0x18) + uVar12 * 4);
    uVar8 = (ulonglong)uVar11;
    bVar13 = uVar11 == 0xffffffff;
    if (!bVar13) {
      do {
        pcVar7 = *(char **)(*(longlong *)(param_1 + 8) + uVar8 * 0x10);
        lVar10 = (longlong)pbVar6 - (longlong)pcVar7;
        do {
          cVar4 = *pcVar7;
          cVar5 = pcVar7[lVar10];
          if (cVar4 != cVar5) break;
          pcVar7 = pcVar7 + 1;
        } while (cVar5 != '\0');
      } while ((cVar4 != cVar5) &&
              (uVar11 = *(uint *)(*(longlong *)(param_1 + 0x10) + uVar8 * 4),
              uVar8 = (ulonglong)uVar11, uVar11 != 0xffffffff));
      bVar13 = (int)uVar8 == -1;
    }
    *param_3 = !bVar13;
    if (!bVar13) goto LAB_1806a4719;
  }
  if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x20)) {
    uVar11 = *(uint *)(param_1 + 0x24);
    if (uVar11 == 0) {
      uVar1 = 0x10;
LAB_1806a46b4:
      FUN_1806a6390(param_1,uVar1);
    }
    else {
      uVar1 = uVar11 * 2;
      if (uVar11 < uVar1) goto LAB_1806a46b4;
    }
    pbVar2 = (byte *)*param_2;
    bVar3 = *pbVar2;
    while (bVar3 != 0) {
      pbVar2 = pbVar2 + 1;
      uVar9 = uVar9 * 0x21 ^ (uint)bVar3;
      bVar3 = *pbVar2;
    }
    uVar12 = (ulonglong)(*(int *)(param_1 + 0x24) - 1U & uVar9);
  }
  uVar9 = *(uint *)(param_1 + 0x2c);
  uVar8 = (ulonglong)uVar9;
  *(uint *)(param_1 + 0x2c) = uVar9 + 1;
  *(int32_t *)(*(longlong *)(param_1 + 0x10) + uVar8 * 4) =
       *(int32_t *)(*(longlong *)(param_1 + 0x18) + uVar12 * 4);
  *(uint *)(*(longlong *)(param_1 + 0x18) + uVar12 * 4) = uVar9;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
LAB_1806a4719:
  return uVar8 * 0x10 + *(longlong *)(param_1 + 8);
}



longlong FUN_1806a45ea(int param_1,uint64_t *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong unaff_RBX;
  uint unaff_EDI;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  uint64_t unaff_R14;
  uint64_t *unaff_R15;
  bool bVar11;
  
  pbVar5 = (byte *)*param_2;
  bVar2 = *pbVar5;
  pbVar1 = pbVar5;
  uVar9 = unaff_EDI;
  while (bVar2 != 0) {
    pbVar1 = pbVar1 + 1;
    uVar9 = uVar9 * 0x21 ^ (uint)bVar2;
    bVar2 = *pbVar1;
  }
  uVar10 = (ulonglong)(param_1 - 1U & uVar9);
  uVar9 = *(uint *)(*(longlong *)(unaff_RBX + 0x18) + uVar10 * 4);
  uVar7 = (ulonglong)uVar9;
  bVar11 = uVar9 == 0xffffffff;
  if (!bVar11) {
    do {
      pcVar6 = *(char **)(*(longlong *)(unaff_RBX + 8) + uVar7 * 0x10);
      lVar8 = (longlong)pbVar5 - (longlong)pcVar6;
      do {
        cVar3 = *pcVar6;
        cVar4 = pcVar6[lVar8];
        if (cVar3 != cVar4) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar4 != '\0');
    } while ((cVar3 != cVar4) &&
            (uVar9 = *(uint *)(*(longlong *)(unaff_RBX + 0x10) + uVar7 * 4),
            uVar7 = (ulonglong)uVar9, uVar9 != 0xffffffff));
    bVar11 = (int)uVar7 == -1;
  }
  *(bool *)unaff_R14 = !bVar11;
  if (bVar11) {
    if (*(int *)(unaff_RBX + 0x34) == *(int *)(unaff_RBX + 0x20)) {
      uVar9 = *(uint *)(unaff_RBX + 0x24);
      if ((uVar9 == 0) || (uVar9 < uVar9 * 2)) {
        FUN_1806a6390();
      }
      pbVar1 = (byte *)*unaff_R15;
      bVar2 = *pbVar1;
      while (bVar2 != 0) {
        pbVar1 = pbVar1 + 1;
        unaff_EDI = unaff_EDI * 0x21 ^ (uint)bVar2;
        bVar2 = *pbVar1;
      }
      uVar10 = (ulonglong)(*(int *)(unaff_RBX + 0x24) - 1U & unaff_EDI);
    }
    uVar9 = *(uint *)(unaff_RBX + 0x2c);
    uVar7 = (ulonglong)uVar9;
    *(uint *)(unaff_RBX + 0x2c) = uVar9 + 1;
    *(int32_t *)(*(longlong *)(unaff_RBX + 0x10) + uVar7 * 4) =
         *(int32_t *)(*(longlong *)(unaff_RBX + 0x18) + uVar10 * 4);
    *(uint *)(*(longlong *)(unaff_RBX + 0x18) + uVar10 * 4) = uVar9;
    *(int *)(unaff_RBX + 0x34) = *(int *)(unaff_RBX + 0x34) + 1;
    *(int *)(unaff_RBX + 0x30) = *(int *)(unaff_RBX + 0x30) + 1;
  }
  return uVar7 * 0x10 + *(longlong *)(unaff_RBX + 8);
}



longlong FUN_1806a462b(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint unaff_EDI;
  longlong lVar8;
  uint in_R9D;
  ulonglong in_R10;
  uint64_t unaff_R14;
  uint64_t *unaff_R15;
  
  do {
    pcVar6 = *(char **)(*(longlong *)(unaff_RBX + 8) + (ulonglong)in_R9D * 0x10);
    lVar8 = unaff_RBP - (longlong)pcVar6;
    do {
      cVar1 = *pcVar6;
      cVar2 = pcVar6[lVar8];
      if (cVar1 != cVar2) break;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if ((cVar1 == cVar2) ||
       (in_R9D = *(uint *)(*(longlong *)(unaff_RBX + 0x10) + (ulonglong)in_R9D * 4),
       in_R9D == 0xffffffff)) {
      *(bool *)unaff_R14 = in_R9D != 0xffffffff;
      if (in_R9D != 0xffffffff) {
        uVar7 = (ulonglong)in_R9D;
      }
      else {
        if (*(int *)(unaff_RBX + 0x34) == *(int *)(unaff_RBX + 0x20)) {
          uVar4 = *(uint *)(unaff_RBX + 0x24);
          if ((uVar4 == 0) || (uVar4 < uVar4 * 2)) {
            FUN_1806a6390();
          }
          pbVar5 = (byte *)*unaff_R15;
          bVar3 = *pbVar5;
          while (bVar3 != 0) {
            pbVar5 = pbVar5 + 1;
            unaff_EDI = unaff_EDI * 0x21 ^ (uint)bVar3;
            bVar3 = *pbVar5;
          }
          in_R10 = (ulonglong)(*(int *)(unaff_RBX + 0x24) - 1U & unaff_EDI);
        }
        uVar4 = *(uint *)(unaff_RBX + 0x2c);
        uVar7 = (ulonglong)uVar4;
        *(uint *)(unaff_RBX + 0x2c) = uVar4 + 1;
        *(int32_t *)(*(longlong *)(unaff_RBX + 0x10) + uVar7 * 4) =
             *(int32_t *)(*(longlong *)(unaff_RBX + 0x18) + in_R10 * 4);
        *(uint *)(*(longlong *)(unaff_RBX + 0x18) + in_R10 * 4) = uVar4;
        *(int *)(unaff_RBX + 0x34) = *(int *)(unaff_RBX + 0x34) + 1;
        *(int *)(unaff_RBX + 0x30) = *(int *)(unaff_RBX + 0x30) + 1;
      }
      return uVar7 * 0x10 + *(longlong *)(unaff_RBX + 8);
    }
  } while( true );
}



longlong FUN_1806a4681(void)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  uint unaff_EDI;
  uint in_R9D;
  ulonglong in_R10;
  uint64_t unaff_R14;
  uint64_t *unaff_R15;
  bool in_ZF;
  
  *(bool *)unaff_R14 = !in_ZF;
  if (in_ZF) {
    if (*(int *)(unaff_RBX + 0x34) == *(int *)(unaff_RBX + 0x20)) {
      uVar2 = *(uint *)(unaff_RBX + 0x24);
      if ((uVar2 == 0) || (uVar2 < uVar2 * 2)) {
        FUN_1806a6390();
      }
      pbVar3 = (byte *)*unaff_R15;
      bVar1 = *pbVar3;
      while (bVar1 != 0) {
        pbVar3 = pbVar3 + 1;
        unaff_EDI = unaff_EDI * 0x21 ^ (uint)bVar1;
        bVar1 = *pbVar3;
      }
      in_R10 = (ulonglong)(*(int *)(unaff_RBX + 0x24) - 1U & unaff_EDI);
    }
    uVar2 = *(uint *)(unaff_RBX + 0x2c);
    uVar4 = (ulonglong)uVar2;
    *(uint *)(unaff_RBX + 0x2c) = uVar2 + 1;
    *(int32_t *)(*(longlong *)(unaff_RBX + 0x10) + uVar4 * 4) =
         *(int32_t *)(*(longlong *)(unaff_RBX + 0x18) + in_R10 * 4);
    *(uint *)(*(longlong *)(unaff_RBX + 0x18) + in_R10 * 4) = uVar2;
    *(int *)(unaff_RBX + 0x34) = *(int *)(unaff_RBX + 0x34) + 1;
    *(int *)(unaff_RBX + 0x30) = *(int *)(unaff_RBX + 0x30) + 1;
  }
  else {
    uVar4 = (ulonglong)in_R9D;
  }
  return uVar4 * 0x10 + *(longlong *)(unaff_RBX + 8);
}



longlong FUN_1806a468e(void)

{
  longlong unaff_RBX;
  uint in_R9D;
  
  return (ulonglong)in_R9D * 0x10 + *(longlong *)(unaff_RBX + 8);
}



bool FUN_1806a4730(longlong param_1,uint64_t *param_2)

{
  int32_t uVar1;
  longlong *plVar2;
  longlong *plVar3;
  int32_t *puVar4;
  longlong lVar5;
  int8_t auStackX_8 [8];
  int8_t auStackX_10 [8];
  int32_t uStackX_18;
  int32_t uStackX_1c;
  void *puStack_98;
  uint64_t uStack_90;
  int8_t auStack_88 [112];
  
  plVar2 = *(longlong **)(param_1 + 0x40);
  plVar3 = (longlong *)(**(code **)(*plVar2 + 0x18))(plVar2);
  (**(code **)(*plVar3 + 8))(plVar3,auStack_88,param_2);
  (**(code **)(*plVar2 + 0x20))(plVar2);
  lVar5 = param_1 + -8;
  puVar4 = (int32_t *)FUN_1806a74b0(lVar5,auStackX_8,param_2[1]);
  uVar1 = *puVar4;
  puVar4 = (int32_t *)FUN_1806a74b0(lVar5,auStackX_10,*param_2);
  uStackX_18 = *puVar4;
  puStack_98 = &UNK_18094a6e0;
  uStack_90 = CONCAT44(uVar1,uStackX_18);
  uStackX_1c = uVar1;
  FUN_1806a39a0(lVar5,&puStack_98,2);
  return *(char *)(param_1 + 0x1b0) == '\0';
}



bool FUN_1806a47f0(longlong param_1,uint64_t *param_2,uint64_t param_3)

{
  int32_t uVar1;
  int32_t *puVar2;
  int8_t auStackX_8 [8];
  int8_t auStackX_10 [8];
  int32_t uStackX_18;
  int32_t uStackX_1c;
  void *puStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))();
  puVar2 = (int32_t *)FUN_1806a74b0(param_1,auStackX_8,param_2[1]);
  uVar1 = *puVar2;
  puVar2 = (int32_t *)FUN_1806a74b0(param_1,auStackX_10,*param_2);
  uStackX_18 = *puVar2;
  puStack_38 = &UNK_18094a740;
  uStack_30 = CONCAT44(uVar1,uStackX_18);
  uStackX_1c = uVar1;
  uStack_28 = param_3;
  FUN_1806a39a0(param_1,&puStack_38,6);
  return *(char *)(param_1 + 0x1b8) == '\0';
}






