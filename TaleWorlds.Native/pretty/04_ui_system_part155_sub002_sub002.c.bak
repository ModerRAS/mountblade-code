#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part155_sub002_sub002.c - 1 个函数

// 函数: void FUN_18075dbf0(longlong param_1,longlong param_2,uint64_t param_3,int32_t param_4)
void FUN_18075dbf0(longlong param_1,longlong param_2,uint64_t param_3,int32_t param_4)

{
  int iVar1;
  longlong lVar2;
  int8_t *puStackX_8;
  
  if ((*(uint *)(param_1 + 100) >> 8 & 1) == 0) {
    iVar1 = FUN_180743700(*(uint64_t *)(param_1 + 0xa8),&puStackX_8,0x28);
    if (iVar1 == 0) {
      *puStackX_8 = 4;
      *(longlong *)(puStackX_8 + 8) = param_1;
      *(longlong *)(puStackX_8 + 0x10) = param_2;
      *(uint64_t *)(puStackX_8 + 0x18) = param_3;
      *(int32_t *)(puStackX_8 + 0x20) = param_4;
      if (param_2 == 0) {
        lVar2 = *(longlong *)(puStackX_8 + 8);
      }
      else {
        lVar2 = *(longlong *)(puStackX_8 + 0x10);
      }
      LOCK();
      *(uint *)(lVar2 + 100) = *(uint *)(lVar2 + 100) | 0x1000;
      UNLOCK();
      func_0x000180743b40(*(uint64_t *)(param_1 + 0xa8),puStackX_8,1);
    }
  }
  else {
    FUN_18075dcc0();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018075df97)
// WARNING: Removing unreachable block (ram,0x00018075dee5)
// WARNING: Removing unreachable block (ram,0x00018075def4)
// WARNING: Removing unreachable block (ram,0x00018075dded)
// WARNING: Removing unreachable block (ram,0x00018075ddf2)
// WARNING: Removing unreachable block (ram,0x00018075dd85)
// WARNING: Removing unreachable block (ram,0x00018075dd94)
// WARNING: Removing unreachable block (ram,0x00018075de86)
// WARNING: Removing unreachable block (ram,0x00018075df4f)
// WARNING: Removing unreachable block (ram,0x00018075df54)
// WARNING: Removing unreachable block (ram,0x00018075deb1)
// WARNING: Removing unreachable block (ram,0x00018075ddfc)
// WARNING: Removing unreachable block (ram,0x00018075de01)
// WARNING: Removing unreachable block (ram,0x00018075df5e)
// WARNING: Removing unreachable block (ram,0x00018075df63)
// WARNING: Removing unreachable block (ram,0x00018075de39)
// WARNING: Removing unreachable block (ram,0x00018075dfc0)
// WARNING: Removing unreachable block (ram,0x00018075de62)

ulonglong FUN_18075dcc0(longlong param_1,longlong param_2,ulonglong param_3,char param_4,
                       char param_5,int param_6)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint64_t *puVar9;
  uint uVar10;
  uint64_t uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  
  lVar2 = *(longlong *)(param_1 + 0xa8);
  bVar5 = false;
  bVar4 = false;
  if (param_2 == 0) {
    if (param_5 != '\0') {
      FUN_180743160(lVar2,1);
      func_0x000180743c20(*(uint64_t *)(param_1 + 0xa8),1);
    }
    sVar1 = *(short *)(param_1 + 0x1a8);
    if (param_5 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_180743d60(*(uint64_t *)(param_1 + 0xa8),1);
    }
    uVar12 = 0;
    while (sVar1 != 0) {
      uVar10 = 9;
      uVar7 = uVar12;
      uVar14 = uVar12;
      if (0 < *(short *)(param_1 + 0x1a8)) {
        puVar9 = *(uint64_t **)(param_1 + 0x78);
        uVar6 = uVar12;
        if (puVar9 == (uint64_t *)(param_1 + 0x78)) {
          uVar10 = 0x1c;
        }
        else {
          while( true ) {
            uVar7 = puVar9[2];
            if (-1 < (int)uVar6) break;
            puVar9 = (uint64_t *)*puVar9;
            uVar6 = (ulonglong)((int)uVar6 + 1);
          }
          if (uVar7 != 0) {
            uVar14 = *(ulonglong *)(uVar7 + 0x58);
            uVar10 = 0;
          }
        }
      }
      if (uVar10 != 0) goto LAB_18075dfe8;
      FUN_18075dcc0(param_1,uVar14,uVar7,1,0,4);
      sVar1 = *(short *)(param_1 + 0x1a8);
    }
    sVar1 = *(short *)(param_1 + 0x1aa);
    while (sVar1 != 0) {
      uVar10 = 9;
      uVar7 = uVar12;
      uVar14 = uVar12;
      if (0 < *(short *)(param_1 + 0x1aa)) {
        plVar8 = *(longlong **)(param_1 + 400);
        uVar6 = uVar12;
        if (plVar8 == (longlong *)(param_1 + 400)) {
          uVar10 = 0x1c;
        }
        else {
          while( true ) {
            uVar7 = plVar8[2];
            if (-1 < (int)uVar6) break;
            plVar8 = (longlong *)*plVar8;
            uVar6 = (ulonglong)((int)uVar6 + 1);
          }
          if (uVar7 != 0) {
            uVar14 = *(ulonglong *)(uVar7 + 0x60);
            uVar10 = 0;
          }
        }
      }
      if (uVar10 != 0) goto LAB_18075dfe8;
      FUN_18075dcc0(uVar14,param_1,uVar7,1,0,4);
      sVar1 = *(short *)(param_1 + 0x1aa);
    }
LAB_18075dfdf:
    uVar10 = 0;
  }
  else {
    if ((param_5 != '\0') && (lVar2 != 0)) {
      func_0x000180743c20(lVar2,1);
      bVar5 = true;
      if (lVar2 != 0) {
        func_0x000180743c20(lVar2,3);
        bVar4 = true;
      }
    }
    uVar12 = 0;
    *(uint64_t *)(param_1 + 0x70) = 0;
    if ((*(short *)(param_1 + 0x1a8) == 0) || (*(short *)(param_2 + 0x1aa) == 0))
    goto LAB_18075dfdf;
    if (param_3 == 0) {
      uVar7 = uVar12;
      if (0 < *(short *)(param_1 + 0x1a8)) {
        do {
          lVar3 = *(longlong *)(param_1 + 0xa8);
          bVar15 = false;
          if (param_5 != '\0') {
            FUN_180743160(lVar3,1);
            bVar15 = lVar3 != 0;
            if (bVar15) {
              func_0x000180743c20(lVar3,1);
            }
          }
          iVar13 = (int)uVar7;
          param_3 = uVar12;
          uVar10 = 9;
          if (iVar13 < *(short *)(param_1 + 0x1a8)) {
            puVar9 = *(uint64_t **)(param_1 + 0x78);
            uVar7 = uVar12;
            if (puVar9 == (uint64_t *)(param_1 + 0x78)) {
              uVar10 = 0x1c;
            }
            else {
              while( true ) {
                param_3 = puVar9[2];
                if (iVar13 <= (int)uVar7) break;
                puVar9 = (uint64_t *)*puVar9;
                uVar7 = (ulonglong)((int)uVar7 + 1);
              }
              uVar10 = 0;
              if (param_3 == 0) {
                uVar10 = 9;
              }
            }
          }
          if ((param_5 == '\0') || (lVar3 == 0)) {
            if (bVar15) {
              bVar15 = lVar3 == 0;
              goto LAB_18075e172;
            }
          }
          else {
            bVar15 = !bVar15;
LAB_18075e172:
            if (!bVar15) {
                    // WARNING: Subroutine does not return
              FUN_180743d60(lVar3,1);
            }
          }
          if (uVar10 != 0) goto LAB_18075dfe8;
          uVar10 = *(uint *)(param_3 + 0x7c) & 5;
          if (param_6 == 0) {
            bVar15 = uVar10 == 0;
LAB_18075e1bf:
            if (bVar15) goto LAB_18075e1c6;
          }
          else {
            if (param_6 == 1) {
              bVar15 = uVar10 == 1;
              goto LAB_18075e1bf;
            }
            if (param_6 == 2) {
              bVar15 = uVar10 == 4;
              goto LAB_18075e1bf;
            }
            if (param_6 == 3) {
              bVar15 = uVar10 == 5;
              goto LAB_18075e1bf;
            }
LAB_18075e1c6:
            if (*(longlong *)(param_3 + 0x58) == param_2) {
              if (param_3 != 0) goto LAB_18075e20f;
              break;
            }
          }
          uVar7 = (ulonglong)(iVar13 + 1U);
        } while ((int)(iVar13 + 1U) < (int)*(short *)(param_1 + 0x1a8));
      }
LAB_18075e37b:
      uVar10 = 9;
    }
    else {
LAB_18075e20f:
      lVar3 = *(longlong *)(param_3 + 0x58);
      if (lVar3 != param_2) goto LAB_18075e37b;
      if ((lVar3 != 0) || (uVar10 = 0, *(longlong *)(param_3 + 0x60) != 0)) {
        *(uint64_t *)(lVar3 + 0x38) = 0;
        plVar8 = (longlong *)(param_3 + 8);
        **(longlong **)(param_3 + 0x10) = *plVar8;
        *(uint64_t *)(*plVar8 + 8) = *(uint64_t *)(param_3 + 0x10);
        *(longlong **)(param_3 + 0x10) = plVar8;
        *plVar8 = (longlong)plVar8;
        *(short *)(param_1 + 0x1a8) = *(short *)(param_1 + 0x1a8) + -1;
        uVar10 = *(uint *)(param_3 + 0x7c);
        if ((uVar10 & 5) == 0) {
          *(short *)(param_1 + 0x1ac) = *(short *)(param_1 + 0x1ac) + -1;
          uVar10 = *(uint *)(param_3 + 0x7c);
        }
        if ((uVar10 & 1) != 0) {
          *(short *)(param_1 + 0x1b0) = *(short *)(param_1 + 0x1b0) + -1;
        }
        plVar8 = (longlong *)(param_3 + 0x20);
        **(longlong **)(param_3 + 0x28) = *plVar8;
        *(uint64_t *)(*plVar8 + 8) = *(uint64_t *)(param_3 + 0x28);
        *(longlong **)(param_3 + 0x28) = plVar8;
        *plVar8 = (longlong)plVar8;
        *(short *)(param_2 + 0x1aa) = *(short *)(param_2 + 0x1aa) + -1;
        uVar10 = *(uint *)(param_3 + 0x7c);
        if ((uVar10 & 5) == 0) {
          *(short *)(param_2 + 0x1ae) = *(short *)(param_2 + 0x1ae) + -1;
          uVar10 = *(uint *)(param_3 + 0x7c);
        }
        if ((uVar10 & 1) != 0) {
          *(short *)(param_2 + 0x1b2) = *(short *)(param_2 + 0x1b2) + -1;
        }
        if (param_4 == '\0') {
          func_0x000180763140(param_3);
        }
        else {
          if ((param_5 == '\0') && ((*(uint *)(param_1 + 100) >> 8 & 1) == 0)) {
            uVar11 = 0;
          }
          else {
            uVar11 = 1;
          }
          uVar10 = FUN_18078a340(*(longlong *)(param_1 + 0xa8) + 0x720,param_3,uVar11);
          if (uVar10 != 0) goto LAB_18075dfe8;
        }
        uVar10 = func_0x000180763040(param_1);
        if (uVar10 == 0) {
          *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x107b8) + 0x30) = 1;
          if (param_5 != '\0') {
            if ((lVar2 != 0) && (bVar4)) {
                    // WARNING: Subroutine does not return
              FUN_180743d60(lVar2,3);
            }
            if ((lVar2 != 0) && (bVar5)) {
                    // WARNING: Subroutine does not return
              FUN_180743d60(lVar2,1);
            }
          }
          goto LAB_18075dffb;
        }
      }
    }
  }
LAB_18075dfe8:
  uVar12 = (ulonglong)uVar10;
LAB_18075dffb:
  if ((bVar4) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar2,3);
  }
  if ((bVar5) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar2,1);
  }
  return uVar12;
}



// WARNING: Removing unreachable block (ram,0x00018075df97)
// WARNING: Removing unreachable block (ram,0x00018075dee5)
// WARNING: Removing unreachable block (ram,0x00018075def4)
// WARNING: Removing unreachable block (ram,0x00018075dded)
// WARNING: Removing unreachable block (ram,0x00018075ddf2)
// WARNING: Removing unreachable block (ram,0x00018075dd85)
// WARNING: Removing unreachable block (ram,0x00018075dd94)
// WARNING: Removing unreachable block (ram,0x00018075de86)
// WARNING: Removing unreachable block (ram,0x00018075df4f)
// WARNING: Removing unreachable block (ram,0x00018075df54)
// WARNING: Removing unreachable block (ram,0x00018075deb1)
// WARNING: Removing unreachable block (ram,0x00018075ddfc)
// WARNING: Removing unreachable block (ram,0x00018075de01)
// WARNING: Removing unreachable block (ram,0x00018075df5e)
// WARNING: Removing unreachable block (ram,0x00018075df63)
// WARNING: Removing unreachable block (ram,0x00018075de39)
// WARNING: Removing unreachable block (ram,0x00018075dfc0)
// WARNING: Removing unreachable block (ram,0x00018075de62)

ulonglong FUN_18075dcce(longlong param_1,longlong param_2,ulonglong param_3,char param_4)

{
  short sVar1;
  longlong lVar2;
  longlong in_RAX;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint64_t *puVar6;
  uint uVar7;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar8;
  uint64_t unaff_R12;
  ulonglong uVar9;
  int iVar10;
  uint64_t unaff_R14;
  ulonglong uVar11;
  longlong lVar12;
  uint64_t unaff_R15;
  bool bVar13;
  longlong lStack0000000000000030;
  char cStack0000000000000080;
  char cStack0000000000000088;
  char in_stack_00000098;
  char in_stack_000000a0;
  int in_stack_000000a8;
  
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  lVar12 = *(longlong *)(param_1 + 0xa8);
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  cStack0000000000000080 = '\0';
  cStack0000000000000088 = '\0';
  lStack0000000000000030 = lVar12;
  if (param_2 == 0) {
    if (in_stack_000000a0 != '\0') {
      FUN_180743160(lVar12,1);
      func_0x000180743c20(*(uint64_t *)(param_1 + 0xa8),1);
    }
    sVar1 = *(short *)(param_1 + 0x1a8);
    if (in_stack_000000a0 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_180743d60(*(uint64_t *)(param_1 + 0xa8),1);
    }
    uVar9 = 0;
    while (sVar1 != 0) {
      uVar7 = 9;
      uVar4 = uVar9;
      uVar11 = uVar9;
      if (0 < *(short *)(param_1 + 0x1a8)) {
        puVar6 = *(uint64_t **)(param_1 + 0x78);
        uVar3 = uVar9;
        if (puVar6 == (uint64_t *)(param_1 + 0x78)) {
          uVar7 = 0x1c;
        }
        else {
          while( true ) {
            uVar4 = puVar6[2];
            if (-1 < (int)uVar3) break;
            puVar6 = (uint64_t *)*puVar6;
            uVar3 = (ulonglong)((int)uVar3 + 1);
          }
          if (uVar4 != 0) {
            uVar11 = *(ulonglong *)(uVar4 + 0x58);
            uVar7 = 0;
          }
        }
      }
      if (uVar7 != 0) goto LAB_18075dfe8;
      FUN_18075dcc0(param_1,uVar11,uVar4,1,0);
      sVar1 = *(short *)(param_1 + 0x1a8);
    }
    sVar1 = *(short *)(param_1 + 0x1aa);
    while (sVar1 != 0) {
      uVar7 = 9;
      uVar4 = uVar9;
      uVar11 = uVar9;
      if (0 < *(short *)(param_1 + 0x1aa)) {
        plVar5 = *(longlong **)(param_1 + 400);
        uVar3 = uVar9;
        if (plVar5 == (longlong *)(param_1 + 400)) {
          uVar7 = 0x1c;
        }
        else {
          while( true ) {
            uVar4 = plVar5[2];
            if (-1 < (int)uVar3) break;
            plVar5 = (longlong *)*plVar5;
            uVar3 = (ulonglong)((int)uVar3 + 1);
          }
          if (uVar4 != 0) {
            uVar11 = *(ulonglong *)(uVar4 + 0x60);
            uVar7 = 0;
          }
        }
      }
      if (uVar7 != 0) goto LAB_18075dfe8;
      FUN_18075dcc0(uVar11,param_1,uVar4,1,0);
      sVar1 = *(short *)(param_1 + 0x1aa);
    }
LAB_18075dfdf:
    uVar7 = 0;
  }
  else {
    if ((in_stack_000000a0 != '\0') && (lVar12 != 0)) {
      func_0x000180743c20(lVar12,1);
      cStack0000000000000080 = '\x01';
      if (lVar12 != 0) {
        func_0x000180743c20(lVar12,3);
        cStack0000000000000088 = '\x01';
      }
    }
    uVar9 = 0;
    *(uint64_t *)(param_1 + 0x70) = 0;
    if ((*(short *)(param_1 + 0x1a8) == 0) || (*(short *)(param_2 + 0x1aa) == 0))
    goto LAB_18075dfdf;
    if (param_3 == 0) {
      uVar4 = uVar9;
      if (0 < *(short *)(param_1 + 0x1a8)) {
        do {
          lVar12 = *(longlong *)(param_1 + 0xa8);
          bVar13 = false;
          if (in_stack_000000a0 != '\0') {
            FUN_180743160(lVar12,1);
            bVar13 = lVar12 != 0;
            if (bVar13) {
              func_0x000180743c20(lVar12,1);
            }
          }
          iVar10 = (int)uVar4;
          param_3 = uVar9;
          uVar7 = 9;
          if (iVar10 < *(short *)(param_1 + 0x1a8)) {
            puVar6 = *(uint64_t **)(param_1 + 0x78);
            uVar4 = uVar9;
            if (puVar6 == (uint64_t *)(param_1 + 0x78)) {
              uVar7 = 0x1c;
            }
            else {
              while( true ) {
                param_3 = puVar6[2];
                if (iVar10 <= (int)uVar4) break;
                puVar6 = (uint64_t *)*puVar6;
                uVar4 = (ulonglong)((int)uVar4 + 1);
              }
              uVar7 = 0;
              if (param_3 == 0) {
                uVar7 = 9;
              }
            }
          }
          if ((in_stack_000000a0 == '\0') || (lVar12 == 0)) {
            if (bVar13) {
              bVar13 = lVar12 == 0;
              goto LAB_18075e172;
            }
          }
          else {
            bVar13 = !bVar13;
LAB_18075e172:
            if (!bVar13) {
                    // WARNING: Subroutine does not return
              FUN_180743d60(lVar12,1);
            }
          }
          if (uVar7 != 0) goto LAB_18075dfe8;
          uVar7 = *(uint *)(param_3 + 0x7c) & 5;
          if (in_stack_000000a8 == 0) {
            bVar13 = uVar7 == 0;
LAB_18075e1bf:
            if (bVar13) goto LAB_18075e1c6;
          }
          else {
            if (in_stack_000000a8 == 1) {
              bVar13 = uVar7 == 1;
              goto LAB_18075e1bf;
            }
            if (in_stack_000000a8 == 2) {
              bVar13 = uVar7 == 4;
              goto LAB_18075e1bf;
            }
            if (in_stack_000000a8 == 3) {
              bVar13 = uVar7 == 5;
              goto LAB_18075e1bf;
            }
LAB_18075e1c6:
            if (*(longlong *)(param_3 + 0x58) == param_2) {
              lVar12 = lStack0000000000000030;
              param_4 = in_stack_00000098;
              if (param_3 != 0) goto LAB_18075e20f;
              break;
            }
          }
          uVar4 = (ulonglong)(iVar10 + 1U);
        } while ((int)(iVar10 + 1U) < (int)*(short *)(param_1 + 0x1a8));
      }
LAB_18075e37b:
      uVar7 = 9;
    }
    else {
LAB_18075e20f:
      lVar2 = *(longlong *)(param_3 + 0x58);
      if (lVar2 != param_2) goto LAB_18075e37b;
      if ((lVar2 != 0) || (uVar7 = 0, *(longlong *)(param_3 + 0x60) != 0)) {
        *(uint64_t *)(lVar2 + 0x38) = 0;
        plVar5 = (longlong *)(param_3 + 8);
        **(longlong **)(param_3 + 0x10) = *plVar5;
        *(uint64_t *)(*plVar5 + 8) = *(uint64_t *)(param_3 + 0x10);
        *(longlong **)(param_3 + 0x10) = plVar5;
        *plVar5 = (longlong)plVar5;
        *(short *)(param_1 + 0x1a8) = *(short *)(param_1 + 0x1a8) + -1;
        uVar7 = *(uint *)(param_3 + 0x7c);
        if ((uVar7 & 5) == 0) {
          *(short *)(param_1 + 0x1ac) = *(short *)(param_1 + 0x1ac) + -1;
          uVar7 = *(uint *)(param_3 + 0x7c);
        }
        if ((uVar7 & 1) != 0) {
          *(short *)(param_1 + 0x1b0) = *(short *)(param_1 + 0x1b0) + -1;
        }
        plVar5 = (longlong *)(param_3 + 0x20);
        **(longlong **)(param_3 + 0x28) = *plVar5;
        *(uint64_t *)(*plVar5 + 8) = *(uint64_t *)(param_3 + 0x28);
        *(longlong **)(param_3 + 0x28) = plVar5;
        *plVar5 = (longlong)plVar5;
        *(short *)(param_2 + 0x1aa) = *(short *)(param_2 + 0x1aa) + -1;
        uVar7 = *(uint *)(param_3 + 0x7c);
        if ((uVar7 & 5) == 0) {
          *(short *)(param_2 + 0x1ae) = *(short *)(param_2 + 0x1ae) + -1;
          uVar7 = *(uint *)(param_3 + 0x7c);
        }
        if ((uVar7 & 1) != 0) {
          *(short *)(param_2 + 0x1b2) = *(short *)(param_2 + 0x1b2) + -1;
        }
        if (param_4 == '\0') {
          func_0x000180763140(param_3);
        }
        else {
          if ((in_stack_000000a0 == '\0') && ((*(uint *)(param_1 + 100) >> 8 & 1) == 0)) {
            uVar8 = 0;
          }
          else {
            uVar8 = 1;
          }
          uVar7 = FUN_18078a340(*(longlong *)(param_1 + 0xa8) + 0x720,param_3,uVar8);
          if (uVar7 != 0) goto LAB_18075dfe8;
        }
        uVar7 = func_0x000180763040(param_1);
        if (uVar7 == 0) {
          *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x107b8) + 0x30) = 1;
          if (in_stack_000000a0 != '\0') {
            if ((lVar12 != 0) && (cStack0000000000000088 != '\0')) {
                    // WARNING: Subroutine does not return
              FUN_180743d60(lVar12,3);
            }
            if ((lVar12 != 0) && (cStack0000000000000080 != '\0')) {
                    // WARNING: Subroutine does not return
              FUN_180743d60(lVar12,1);
            }
          }
          goto LAB_18075dffb;
        }
      }
    }
  }
LAB_18075dfe8:
  uVar9 = (ulonglong)uVar7;
LAB_18075dffb:
  if ((cStack0000000000000088 != '\0') && (lStack0000000000000030 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lStack0000000000000030,3);
  }
  if ((cStack0000000000000080 != '\0') && (lStack0000000000000030 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lStack0000000000000030,1);
  }
  return uVar9;
}



// WARNING: Removing unreachable block (ram,0x00018075e041)

int32_t FUN_18075e020(void)

{
  longlong unaff_RBX;
  int32_t unaff_R13D;
  
  if (unaff_RBX == 0) {
    return unaff_R13D;
  }
                    // WARNING: Subroutine does not return
  FUN_180743d60();
}



int32_t FUN_18075e03c(void)

{
  longlong unaff_RBX;
  int32_t unaff_R13D;
  
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return unaff_R13D;
}



ulonglong FUN_18075e059(void)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  uint uVar5;
  longlong unaff_RBX;
  char unaff_BPL;
  uint uVar6;
  ulonglong unaff_RDI;
  uint64_t uVar7;
  longlong unaff_R12;
  ulonglong uVar8;
  int iVar9;
  longlong unaff_R14;
  bool bVar10;
  longlong in_stack_00000030;
  char in_stack_00000080;
  char in_stack_00000088;
  char in_stack_00000098;
  char in_stack_000000a0;
  int in_stack_000000a8;
  
  if ((in_stack_000000a0 != '\0') && (unaff_R14 != 0)) {
    func_0x000180743c20();
    in_stack_00000080 = '\x01';
    if (unaff_R14 != 0) {
      func_0x000180743c20();
      in_stack_00000088 = '\x01';
    }
  }
  uVar8 = 0;
  *(uint64_t *)(unaff_RBX + 0x70) = 0;
  uVar6 = 0;
  uVar5 = uVar6;
  if ((*(short *)(unaff_RBX + 0x1a8) == 0) || (*(short *)(unaff_R12 + 0x1aa) == 0))
  goto LAB_18075dfe8;
  if (unaff_RDI == 0) {
    uVar3 = uVar8;
    if (0 < *(short *)(unaff_RBX + 0x1a8)) {
      do {
        lVar2 = *(longlong *)(unaff_RBX + 0xa8);
        bVar10 = false;
        if (in_stack_000000a0 != '\0') {
          FUN_180743160(lVar2,1);
          bVar10 = lVar2 != 0;
          if (bVar10) {
            func_0x000180743c20(lVar2,1);
          }
        }
        iVar9 = (int)uVar3;
        unaff_RDI = uVar8;
        uVar5 = 9;
        if (iVar9 < *(short *)(unaff_RBX + 0x1a8)) {
          puVar4 = *(uint64_t **)(unaff_RBX + 0x78);
          uVar3 = uVar8;
          if (puVar4 == (uint64_t *)(unaff_RBX + 0x78)) {
            uVar5 = 0x1c;
          }
          else {
            while( true ) {
              unaff_RDI = puVar4[2];
              if (iVar9 <= (int)uVar3) break;
              puVar4 = (uint64_t *)*puVar4;
              uVar3 = (ulonglong)((int)uVar3 + 1);
            }
            uVar5 = uVar6;
            if (unaff_RDI == 0) {
              uVar5 = 9;
            }
          }
        }
        if ((in_stack_000000a0 == '\0') || (lVar2 == 0)) {
          if (bVar10) {
            bVar10 = lVar2 == 0;
            goto LAB_18075e172;
          }
        }
        else {
          bVar10 = !bVar10;
LAB_18075e172:
          if (!bVar10) {
                    // WARNING: Subroutine does not return
            FUN_180743d60(lVar2,1);
          }
        }
        if (uVar5 != 0) goto LAB_18075dfe8;
        uVar5 = *(uint *)(unaff_RDI + 0x7c) & 5;
        if (in_stack_000000a8 == 0) {
          bVar10 = uVar5 == 0;
LAB_18075e1bf:
          if (bVar10) goto LAB_18075e1c6;
        }
        else {
          if (in_stack_000000a8 == 1) {
            bVar10 = uVar5 == 1;
            goto LAB_18075e1bf;
          }
          if (in_stack_000000a8 == 2) {
            bVar10 = uVar5 == 4;
            goto LAB_18075e1bf;
          }
          if (in_stack_000000a8 == 3) {
            bVar10 = uVar5 == 5;
            goto LAB_18075e1bf;
          }
LAB_18075e1c6:
          if (*(longlong *)(unaff_RDI + 0x58) == unaff_R12) {
            unaff_R14 = in_stack_00000030;
            unaff_BPL = in_stack_00000098;
            if (unaff_RDI != 0) goto LAB_18075e20f;
            break;
          }
        }
        uVar3 = (ulonglong)(iVar9 + 1U);
      } while ((int)(iVar9 + 1U) < (int)*(short *)(unaff_RBX + 0x1a8));
    }
LAB_18075e37b:
    uVar5 = 9;
  }
  else {
LAB_18075e20f:
    lVar2 = *(longlong *)(unaff_RDI + 0x58);
    if (lVar2 != unaff_R12) goto LAB_18075e37b;
    if ((lVar2 != 0) || (uVar5 = 0, *(longlong *)(unaff_RDI + 0x60) != 0)) {
      *(uint64_t *)(lVar2 + 0x38) = 0;
      plVar1 = (longlong *)(unaff_RDI + 8);
      **(longlong **)(unaff_RDI + 0x10) = *plVar1;
      *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(unaff_RDI + 0x10);
      *(longlong **)(unaff_RDI + 0x10) = plVar1;
      *plVar1 = (longlong)plVar1;
      *(short *)(unaff_RBX + 0x1a8) = *(short *)(unaff_RBX + 0x1a8) + -1;
      uVar5 = *(uint *)(unaff_RDI + 0x7c);
      if ((uVar5 & 5) == 0) {
        *(short *)(unaff_RBX + 0x1ac) = *(short *)(unaff_RBX + 0x1ac) + -1;
        uVar5 = *(uint *)(unaff_RDI + 0x7c);
      }
      if ((uVar5 & 1) != 0) {
        *(short *)(unaff_RBX + 0x1b0) = *(short *)(unaff_RBX + 0x1b0) + -1;
      }
      plVar1 = (longlong *)(unaff_RDI + 0x20);
      **(longlong **)(unaff_RDI + 0x28) = *plVar1;
      *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(unaff_RDI + 0x28);
      *(longlong **)(unaff_RDI + 0x28) = plVar1;
      *plVar1 = (longlong)plVar1;
      *(short *)(unaff_R12 + 0x1aa) = *(short *)(unaff_R12 + 0x1aa) + -1;
      uVar5 = *(uint *)(unaff_RDI + 0x7c);
      if ((uVar5 & 5) == 0) {
        *(short *)(unaff_R12 + 0x1ae) = *(short *)(unaff_R12 + 0x1ae) + -1;
        uVar5 = *(uint *)(unaff_RDI + 0x7c);
      }
      if ((uVar5 & 1) != 0) {
        *(short *)(unaff_R12 + 0x1b2) = *(short *)(unaff_R12 + 0x1b2) + -1;
      }
      if (unaff_BPL == '\0') {
        func_0x000180763140(unaff_RDI);
      }
      else {
        if ((in_stack_000000a0 == '\0') && ((*(uint *)(unaff_RBX + 100) >> 8 & 1) == 0)) {
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
        }
        uVar5 = FUN_18078a340(*(longlong *)(unaff_RBX + 0xa8) + 0x720,unaff_RDI,uVar7);
        if (uVar5 != 0) goto LAB_18075dfe8;
      }
      uVar5 = func_0x000180763040();
      if (uVar5 == 0) {
        *(int32_t *)(*(longlong *)(*(longlong *)(unaff_RBX + 0xa8) + 0x107b8) + 0x30) = 1;
        if (in_stack_000000a0 != '\0') {
          if ((unaff_R14 != 0) && (in_stack_00000088 != '\0')) {
                    // WARNING: Subroutine does not return
            FUN_180743d60(unaff_R14,3);
          }
          if ((unaff_R14 != 0) && (in_stack_00000080 != '\0')) {
                    // WARNING: Subroutine does not return
            FUN_180743d60(unaff_R14,1);
          }
        }
        goto LAB_18075dffb;
      }
    }
  }
LAB_18075dfe8:
  uVar8 = (ulonglong)uVar5;
LAB_18075dffb:
  if ((in_stack_00000088 != '\0') && (in_stack_00000030 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(in_stack_00000030,3);
  }
  if ((in_stack_00000080 != '\0') && (in_stack_00000030 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(in_stack_00000030,1);
  }
  return uVar8;
}



ulonglong FUN_18075e390(longlong param_1,int32_t param_2,uint64_t param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    uVar2 = FUN_180743cc0(*(uint64_t *)(param_1 + 0xa8),0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar1 = (**(code **)(param_1 + 0x1f0))(param_1,param_2,param_3);
    uVar2 = FUN_180743da0(*(uint64_t *)(param_1 + 0xa8));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (uVar1 != 0) {
      return (ulonglong)uVar1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18075e410(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    func_0x000180743c20(lVar1,7);
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    iVar3 = func_0x00018078b840(*(uint64_t *)(param_1 + 0xa8));
    if (iVar3 != 0) goto LAB_18075e4a6;
  }
  lVar2 = *(longlong *)(param_1 + 0x208);
  iVar3 = 0;
  *(uint64_t *)(param_1 + 0x210) = 0;
  *(uint64_t *)(param_1 + 0x208) = 0;
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_1040_ptr,0x170d,1);
  }
LAB_18075e4a6:
  if ((lVar1 != 0) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar1,7);
  }
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18075e41d(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong unaff_RSI;
  
  if (unaff_RSI != 0) {
    func_0x000180743c20();
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    iVar2 = func_0x00018078b840(*(uint64_t *)(param_1 + 0xa8));
    if (iVar2 != 0) goto LAB_18075e4a6;
  }
  lVar1 = *(longlong *)(param_1 + 0x208);
  iVar2 = 0;
  *(uint64_t *)(param_1 + 0x210) = 0;
  *(uint64_t *)(param_1 + 0x208) = 0;
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_1040_ptr,0x170d,1);
  }
LAB_18075e4a6:
  if ((unaff_RSI != 0) && (unaff_RSI != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return iVar2;
}



int32_t FUN_18075e4b5(void)

{
  int32_t unaff_EBX;
  longlong unaff_RSI;
  
  if (unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return unaff_EBX;
}



uint64_t
FUN_18075e660(longlong param_1,longlong param_2,uint *param_3,uint *param_4,int32_t *param_5,
             int32_t *param_6)

{
  uint64_t uVar1;
  uint uVar2;
  uint uVar3;
  void *puVar4;
  
  if (param_2 != 0) {
    puVar4 = *(void **)(param_1 + 0xf0);
    if (puVar4 == (void *)0x0) {
      if (*(longlong *)(param_1 + 0xe8) == 0) {
        puVar4 = &system_buffer_ptr;
      }
      else {
        puVar4 = (void *)(*(longlong *)(param_1 + 0xe8) + 4);
      }
    }
    func_0x00018076b450(param_2,puVar4,0x20);
  }
  uVar3 = 0;
  if (param_3 != (uint *)0x0) {
    uVar2 = uVar3;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0xe8) + 0x24);
    }
    *param_3 = uVar2;
  }
  if (param_4 != (uint *)0x0) {
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      uVar3 = (uint)*(ushort *)(param_1 + 0x118);
    }
    *param_4 = uVar3;
  }
  if (param_5 != (int32_t *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (int32_t *)0x0) {
    *param_6 = 0;
  }
  if (((*(code **)(param_1 + 0x120) == (code *)0x0) || ((*(byte *)(param_1 + 0x11a) & 0x20) == 0))
     || (uVar1 = (**(code **)(param_1 + 0x120))(param_1 + 0xb0,0x20), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}



ulonglong FUN_18075e740(longlong param_1,int param_2,ulonglong *param_3,ulonglong *param_4,
                       char param_5,char param_6)

{
  longlong lVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  uVar10 = 0;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  bVar11 = false;
  uVar7 = 0;
  if (param_6 != '\0') {
    FUN_180743160(lVar1,1);
    bVar11 = lVar1 != 0;
    if (bVar11) {
      func_0x000180743c20(lVar1,1);
    }
  }
  if (param_5 == '\0') {
    sVar2 = *(short *)(param_1 + 0x1a8);
  }
  else {
    sVar2 = *(short *)(param_1 + 0x1ac);
  }
  if (param_2 < sVar2) {
    plVar8 = *(longlong **)(param_1 + 0x78);
    if (plVar8 == (longlong *)(param_1 + 0x78)) {
      uVar6 = 0x1c;
    }
    else {
      uVar7 = plVar8[2];
      uVar9 = -(uint)(param_5 != '\0') & 5;
      uVar4 = *(uint *)(uVar7 + 0x7c) & uVar9;
      uVar6 = uVar10;
      while ((uVar5 = (uint)uVar6, (int)uVar5 < param_2 || (uVar6 = uVar10, uVar4 != 0))) {
        plVar8 = (longlong *)*plVar8;
        uVar7 = plVar8[2];
        uVar4 = *(uint *)(uVar7 + 0x7c) & uVar9;
        uVar3 = uVar5 + 1;
        if (uVar4 != 0) {
          uVar3 = uVar5;
        }
        uVar6 = (ulonglong)uVar3;
      }
    }
  }
  else {
    uVar6 = 9;
    uVar7 = uVar10;
  }
  if (param_4 != (ulonglong *)0x0) {
    *param_4 = uVar7;
  }
  if (param_3 != (ulonglong *)0x0) {
    if (uVar7 != 0) {
      uVar10 = *(ulonglong *)(uVar7 + 0x58);
    }
    *param_3 = uVar10;
  }
  if ((param_6 == '\0') || (lVar1 == 0)) {
    if ((bVar11) && (lVar1 != 0)) goto LAB_18075e85a;
  }
  else if (bVar11) {
LAB_18075e85a:
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar1,1);
  }
  return uVar6;
}



uint64_t FUN_18075e890(longlong *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int iVar6;
  
  if ((((param_1 != (longlong *)0x0) && (param_2 != (int *)0x0)) && (param_3 != 0)) &&
     ((lVar2 = *param_1, lVar2 != 0 && (iVar1 = *param_2, 0 < iVar1)))) {
    lVar3 = *(longlong *)(lVar2 + 0xa8);
    if (lVar3 == 0) {
      return 0x1c;
    }
    if (*(int *)(lVar3 + 0x11400) <= iVar1) {
      iVar1 = *(int *)(lVar3 + 0x11400);
    }
    iVar6 = 0;
    *param_2 = iVar1;
    if (0 < iVar1) {
      puVar4 = (uint64_t *)(param_3 + 0x18);
      puVar5 = (uint64_t *)(lVar3 + 0x11098);
      do {
        puVar4[-3] = puVar5[-3];
        *(int32_t *)(puVar4 + -2) = *(int32_t *)(puVar5 + -2);
        *(uint64_t *)((longlong)puVar4 + -0xc) = *puVar5;
        *(int32_t *)((longlong)puVar4 + -4) = *(int32_t *)(puVar5 + 1);
        *puVar4 = puVar5[6];
        *(int32_t *)(puVar4 + 1) = *(int32_t *)(puVar5 + 7);
        *(uint64_t *)((longlong)puVar4 + 0xc) = puVar5[3];
        *(int32_t *)((longlong)puVar4 + 0x14) = *(int32_t *)(puVar5 + 4);
        if (((*(byte *)(lVar3 + 0x78) & 4) != 0) && (0x6c < **(uint **)(lVar2 + 0xe8))) {
          *(uint *)(puVar4 + -2) = *(uint *)(puVar4 + -2) ^ 0x80000000;
          *(uint *)((longlong)puVar4 + -4) = *(uint *)((longlong)puVar4 + -4) ^ 0x80000000;
          *(uint *)(puVar4 + 1) = *(uint *)(puVar4 + 1) ^ 0x80000000;
          *(uint *)((longlong)puVar4 + 0x14) = *(uint *)((longlong)puVar4 + 0x14) ^ 0x80000000;
        }
        iVar6 = iVar6 + 1;
        puVar5 = puVar5 + 0xe;
        puVar4 = puVar4 + 6;
      } while (iVar6 < *param_2);
    }
    return 0;
  }
  return 0x1f;
}



ulonglong FUN_18075e9c0(longlong param_1,uint64_t *param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  uint uVar9;
  uint64_t *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if (lVar3 != 0) {
    func_0x000180743c20(lVar3,7);
  }
  uVar4 = *(ulonglong *)(param_1 + 0x210);
  uVar14 = 0;
  if ((uVar4 == 0) || (uVar12 = uVar4, *(char *)(uVar4 + 0x212) == '\0')) {
    uVar12 = uVar14;
  }
  if ((uVar4 == 0) || (uVar15 = uVar4 + 0x214, *(char *)(uVar4 + 0x426) == '\0')) {
    uVar15 = uVar14;
  }
  if (param_2 == (uint64_t *)0x0) {
    if (param_3 != (uint64_t *)0x0) {
LAB_18075ea51:
      if (uVar15 == 0) goto LAB_18075eb30;
LAB_18075ea5a:
      lVar11 = 2;
      if (param_2 != (uint64_t *)0x0) {
        lVar13 = 2;
        puVar10 = (uint64_t *)(uVar12 + 0x100);
        do {
          puVar1 = param_2 + 0x10;
          uVar8 = puVar10[1];
          puVar2 = puVar10 + 0x10;
          *param_2 = *puVar10;
          param_2[1] = uVar8;
          uVar8 = puVar10[3];
          param_2[2] = puVar10[2];
          param_2[3] = uVar8;
          uVar8 = puVar10[5];
          param_2[4] = puVar10[4];
          param_2[5] = uVar8;
          uVar8 = puVar10[7];
          param_2[6] = puVar10[6];
          param_2[7] = uVar8;
          uVar8 = puVar10[9];
          param_2[8] = puVar10[8];
          param_2[9] = uVar8;
          uVar8 = puVar10[0xb];
          param_2[10] = puVar10[10];
          param_2[0xb] = uVar8;
          uVar5 = *(int32_t *)((longlong)puVar10 + 100);
          uVar6 = *(int32_t *)(puVar10 + 0xd);
          uVar7 = *(int32_t *)((longlong)puVar10 + 0x6c);
          *(int32_t *)(param_2 + 0xc) = *(int32_t *)(puVar10 + 0xc);
          *(int32_t *)((longlong)param_2 + 100) = uVar5;
          *(int32_t *)(param_2 + 0xd) = uVar6;
          *(int32_t *)((longlong)param_2 + 0x6c) = uVar7;
          uVar8 = puVar10[0xf];
          param_2[0xe] = puVar10[0xe];
          param_2[0xf] = uVar8;
          lVar13 = lVar13 + -1;
          puVar10 = puVar2;
          param_2 = puVar1;
        } while (lVar13 != 0);
        *puVar1 = *puVar2;
      }
      if (param_3 != (uint64_t *)0x0) {
        puVar10 = (uint64_t *)(uVar15 + 0x100);
        do {
          puVar1 = param_3 + 0x10;
          uVar8 = puVar10[1];
          puVar2 = puVar10 + 0x10;
          *param_3 = *puVar10;
          param_3[1] = uVar8;
          uVar8 = puVar10[3];
          param_3[2] = puVar10[2];
          param_3[3] = uVar8;
          uVar8 = puVar10[5];
          param_3[4] = puVar10[4];
          param_3[5] = uVar8;
          uVar8 = puVar10[7];
          param_3[6] = puVar10[6];
          param_3[7] = uVar8;
          uVar8 = puVar10[9];
          param_3[8] = puVar10[8];
          param_3[9] = uVar8;
          uVar8 = puVar10[0xb];
          param_3[10] = puVar10[10];
          param_3[0xb] = uVar8;
          uVar5 = *(int32_t *)((longlong)puVar10 + 100);
          uVar6 = *(int32_t *)(puVar10 + 0xd);
          uVar7 = *(int32_t *)((longlong)puVar10 + 0x6c);
          *(int32_t *)(param_3 + 0xc) = *(int32_t *)(puVar10 + 0xc);
          *(int32_t *)((longlong)param_3 + 100) = uVar5;
          *(int32_t *)(param_3 + 0xd) = uVar6;
          *(int32_t *)((longlong)param_3 + 0x6c) = uVar7;
          uVar8 = puVar10[0xf];
          param_3[0xe] = puVar10[0xe];
          param_3[0xf] = uVar8;
          lVar11 = lVar11 + -1;
          puVar10 = puVar2;
          param_3 = puVar1;
        } while (lVar11 != 0);
        *puVar1 = *puVar2;
      }
      goto LAB_18075eb37;
    }
    uVar9 = 0x1f;
  }
  else {
    if (uVar12 != 0) {
      if (param_3 != (uint64_t *)0x0) goto LAB_18075ea51;
      goto LAB_18075ea5a;
    }
LAB_18075eb30:
    uVar9 = 1;
  }
  uVar14 = (ulonglong)uVar9;
LAB_18075eb37:
  if ((lVar3 != 0) && (lVar3 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar3,7);
  }
  return uVar14;
}



int32_t FUN_18075eb70(longlong param_1,int *param_2,char param_3,char param_4)

{
  short sVar1;
  int32_t uVar2;
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0x1f;
  }
  else {
    if (param_4 != '\0') {
      FUN_180743160(*(uint64_t *)(param_1 + 0xa8),1);
      func_0x000180743c20(*(uint64_t *)(param_1 + 0xa8),1);
    }
    if (param_3 == '\0') {
      sVar1 = *(short *)(param_1 + 0x1a8);
    }
    else {
      sVar1 = *(short *)(param_1 + 0x1ac);
    }
    *param_2 = (int)sVar1;
    if (param_4 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_180743d60(*(uint64_t *)(param_1 + 0xa8),1);
    }
    uVar2 = 0;
  }
  return uVar2;
}



int32_t FUN_18075ec10(longlong param_1,int *param_2,char param_3,char param_4)

{
  short sVar1;
  int32_t uVar2;
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0x1f;
  }
  else {
    if (param_4 != '\0') {
      FUN_180743160(*(uint64_t *)(param_1 + 0xa8),1);
      func_0x000180743c20(*(uint64_t *)(param_1 + 0xa8),1);
    }
    if (param_3 == '\0') {
      sVar1 = *(short *)(param_1 + 0x1aa);
    }
    else {
      sVar1 = *(short *)(param_1 + 0x1ae);
    }
    *param_2 = (int)sVar1;
    if (param_4 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_180743d60(*(uint64_t *)(param_1 + 0xa8),1);
    }
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t
FUN_18075ece0(longlong param_1,uint param_2,int param_3,uint *param_4,int *param_5,
             int32_t *param_6)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int32_t uVar4;
  uint auStackX_8 [2];
  uint auStackX_10 [2];
  int iStackX_18;
  int32_t auStackX_20 [2];
  int32_t auStack_88 [2];
  int32_t uStack_80;
  int32_t uStack_7c;
  uint *puStack_78;
  int32_t *puStack_70;
  uint64_t uStack_68;
  int iStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  uint *puStack_50;
  int32_t *puStack_48;
  uint64_t uStack_40;
  int iStack_38;
  int32_t uStack_34;
  
  auStackX_10[0] = param_2;
  iStackX_18 = param_3;
  if (((param_2 == 0) && (auStackX_10[0] = param_2, iStackX_18 = param_3, param_3 == 0)) &&
     ((lVar3 = *(longlong *)(param_1 + 0xe8), lVar3 == 0 ||
      (((*(int *)(lVar3 + 0x28) != 0 || (*(longlong *)(lVar3 + 0x48) != 0)) ||
       (auStackX_10[0] = param_2, iStackX_18 = param_3, *(int *)(param_1 + 0x100) == 0x3e9)))))) {
    if (*(ushort *)(param_1 + 0x118) == 0) {
      if (*(longlong *)(param_1 + 0x138) == 0) {
        if ((int)*(short *)(param_1 + 0x1a8) - (int)*(short *)(param_1 + 0x1b0) < 2) {
          auStackX_10[0] = *(uint *)(param_1 + 0x1c0);
          iStackX_18 = 0;
          if (auStackX_10[0] == 0) {
            auStackX_10[0] = 1;
            iStackX_18 = 2;
          }
        }
        else {
          iVar2 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x1193c);
          if (iVar2 == 1) {
            auStackX_10[0] = *(uint *)(*(longlong *)(param_1 + 0xa8) + 0x6d4);
            iStackX_18 = iVar2;
          }
          else {
            auStackX_10[0] = param_2;
            iStackX_18 = param_3;
            auStackX_10[0] = func_0x0001807462a0(iVar2);
            iStackX_18 = iVar2;
          }
        }
      }
      else {
        auStackX_10[0] = *(uint *)(param_1 + 0x148);
        iStackX_18 = *(int *)(param_1 + 0x14c);
      }
    }
    else {
      auStackX_10[0] = (uint)*(ushort *)(param_1 + 0x118);
      iStackX_18 = *(int *)(param_1 + 0xc4);
    }
  }
  if ((*(longlong *)(param_1 + 0x128) == 0) || ((*(uint *)(param_1 + 100) & 1) != 0)) {
    if (param_6 != (int32_t *)0x0) {
      *param_6 = 6;
    }
  }
  else {
    uStack_54 = 0;
    uStack_40 = 0;
    uStack_34 = 0;
    uStack_7c = 0;
    uStack_68 = 0;
    uStack_5c = 0;
    if ((*(longlong *)(param_1 + 0x138) != 0) || (uVar4 = 1, *(longlong *)(param_1 + 0x158) != 0)) {
      uVar4 = 0;
    }
    auStackX_20[0] = 0;
    auStack_88[0] = 0;
    if ((ABS(*(float *)(param_1 + 0x1c4)) < 2e-05) &&
       (*(float *)(param_1 + 0x1c4) == *(float *)(param_1 + 0x1d0))) {
      uVar4 = 1;
    }
    lVar3 = *(longlong *)(param_1 + 0xe8);
    if (lVar3 == 0) {
      uStack_58 = 1;
    }
    else {
      uStack_58 = *(int32_t *)(lVar3 + 0x28);
    }
    puStack_48 = auStackX_20;
    puStack_50 = auStackX_10;
    iStack_38 = iStackX_18;
    if (lVar3 == 0) {
      uStack_80 = 1;
    }
    else {
      uStack_80 = *(int32_t *)(lVar3 + 0x2c);
    }
    puStack_70 = auStack_88;
    puStack_78 = auStackX_8;
    plVar1 = (longlong *)(param_1 + 0xb0);
    iStack_60 = iStackX_18;
    *plVar1 = param_1;
    auStackX_8[0] = auStackX_10[0];
    if (param_6 == (int32_t *)0x0) {
      (**(code **)(param_1 + 0x128))(plVar1,0,&uStack_58,&uStack_80,0,1);
      auStackX_10[0] = 0x20;
      iStackX_18 = iStack_60;
      if ((int)auStackX_8[0] < 0x20) {
        auStackX_10[0] = auStackX_8[0];
      }
    }
    else {
      uVar4 = (**(code **)(param_1 + 0x128))
                        (plVar1,*(int16_t *)(param_1 + 0x5a),&uStack_58,&uStack_80,uVar4,1);
      *param_6 = uVar4;
      auStackX_10[0] = 0x20;
      iStackX_18 = iStack_60;
      if ((int)auStackX_8[0] < 0x20) {
        auStackX_10[0] = auStackX_8[0];
      }
    }
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = auStackX_10[0];
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iStackX_18;
  }
  return 0;
}



ulonglong FUN_18075ef40(longlong param_1,int param_2,ulonglong *param_3,ulonglong *param_4,
                       char param_5,char param_6)

{
  longlong lVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  uVar10 = 0;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  bVar11 = false;
  uVar7 = 0;
  if (param_6 != '\0') {
    FUN_180743160(lVar1,1);
    bVar11 = lVar1 != 0;
    if (bVar11) {
      func_0x000180743c20(lVar1,1);
    }
  }
  if (param_5 == '\0') {
    sVar2 = *(short *)(param_1 + 0x1aa);
  }
  else {
    sVar2 = *(short *)(param_1 + 0x1ae);
  }
  if (param_2 < sVar2) {
    plVar8 = *(longlong **)(param_1 + 400);
    if (plVar8 == (longlong *)(param_1 + 400)) {
      uVar6 = 0x1c;
    }
    else {
      uVar7 = plVar8[2];
      uVar9 = -(uint)(param_5 != '\0') & 5;
      uVar4 = *(uint *)(uVar7 + 0x7c) & uVar9;
      uVar6 = uVar10;
      while ((uVar5 = (uint)uVar6, (int)uVar5 < param_2 || (uVar6 = uVar10, uVar4 != 0))) {
        plVar8 = (longlong *)*plVar8;
        uVar7 = plVar8[2];
        uVar4 = *(uint *)(uVar7 + 0x7c) & uVar9;
        uVar3 = uVar5 + 1;
        if (uVar4 != 0) {
          uVar3 = uVar5;
        }
        uVar6 = (ulonglong)uVar3;
      }
    }
  }
  else {
    uVar6 = 9;
    uVar7 = uVar10;
  }
  if (param_4 != (ulonglong *)0x0) {
    *param_4 = uVar7;
  }
  if (param_3 != (ulonglong *)0x0) {
    if (uVar7 != 0) {
      uVar10 = *(ulonglong *)(uVar7 + 0x60);
    }
    *param_3 = uVar10;
  }
  if ((param_6 == '\0') || (lVar1 == 0)) {
    if ((bVar11) && (lVar1 != 0)) goto LAB_18075f05a;
  }
  else if (bVar11) {
LAB_18075f05a:
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar1,1);
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





