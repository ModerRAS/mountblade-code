#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part154_sub002_sub002.c - 1 个函数

// 函数: void FUN_180758fc3(void)
void FUN_180758fc3(void)

{
  return;
}



uint64_t FUN_180759120(int64_t *param_1,int32_t param_2,int64_t param_3,int64_t param_4,
                       int32_t param_5,uint param_6)

{
  int64_t lVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint uVar6;
  
  lVar1 = *param_1;
  uVar5 = 0;
  uVar6 = 0;
  uVar3 = uVar6;
  if (param_3 != 0) {
    uVar6 = **(uint **)(param_3 + 8);
    uVar3 = *(uint *)(param_3 + 0x20);
  }
  if (param_6 == 1) {
    pcVar2 = *(code **)(*(int64_t *)(lVar1 + 0xe8) + 0xb0);
    if (pcVar2 != (code *)0x0) {
      uVar4 = (*pcVar2)(param_1,param_5,param_2,0,uVar6,uVar3);
      uVar5 = (uint64_t)uVar4;
    }
    if (param_4 != 0) {
      if (*(uint **)(param_4 + 8) != (uint *)0x0) {
        uVar4 = (uint)*(ushort *)(lVar1 + 0x118);
        if (*(ushort *)(lVar1 + 0x118) == 0) {
          uVar4 = uVar6;
        }
        **(uint **)(param_4 + 8) = uVar4;
      }
      uVar6 = *(uint *)(lVar1 + 0xc4);
      if (*(uint *)(lVar1 + 0xc4) == 0) {
        uVar6 = uVar3;
      }
      *(uint *)(param_4 + 0x20) = uVar6;
    }
  }
  else {
    pcVar2 = *(code **)(*(int64_t *)(lVar1 + 0xe8) + 0x48);
    if (pcVar2 != (code *)0x0) {
      param_6 = uVar6;
      uVar5 = (*pcVar2)(param_1,**(uint64_t **)(param_3 + 0x18),**(uint64_t **)(param_4 + 0x18),
                        param_2,uVar6,&param_6);
      **(uint **)(param_4 + 8) = param_6;
    }
  }
  return uVar5;
}



uint64_t
FUN_180759220(int64_t param_1,int64_t param_2,int64_t *param_3,int param_4,int8_t param_5,
             int64_t param_6)

{
  uint64_t uVar1;
  int64_t lStackX_10;
  int8_t *apuStack_18 [2];
  
  if (param_2 == 0) {
    uVar1 = 0x1f;
  }
  else if (((*(int64_t *)(param_1 + 0xe8) == 0) ||
           (*(int *)(*(int64_t *)(param_1 + 0xe8) + 0x28) != 0)) &&
          ((*(int64_t *)(param_2 + 0xe8) == 0 ||
           (*(int *)(*(int64_t *)(param_2 + 0xe8) + 0x2c) != 0)))) {
    uVar1 = FUN_18078a0c0(*(int64_t *)(param_1 + 0xa8) + 0x720,&lStackX_10,1);
    if ((int)uVar1 == 0) {
      if (param_6 == 0) {
        FUN_180765990(lStackX_10,1);
        if (param_4 == 1) {
          *(uint *)(lStackX_10 + 0x7c) = *(uint *)(lStackX_10 + 0x7c) | 1;
        }
        else if (param_4 == 2) {
          *(uint *)(lStackX_10 + 0x7c) = *(uint *)(lStackX_10 + 0x7c) | 4;
        }
        else if (param_4 == 3) {
          *(uint *)(lStackX_10 + 0x7c) = *(uint *)(lStackX_10 + 0x7c) | 5;
        }
      }
      else {
        FUN_1807631a0();
      }
      if (((*(uint *)(param_1 + 100) >> 8 & 1) == 0) && ((*(uint *)(param_2 + 100) >> 8 & 1) == 0))
      {
        uVar1 = FUN_180743700(*(uint64_t *)(param_1 + 0xa8),apuStack_18,0x28,1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        *apuStack_18[0] = param_5;
        *(int64_t *)(apuStack_18[0] + 8) = param_1;
        *(int64_t *)(apuStack_18[0] + 0x10) = param_2;
        *(int64_t *)(apuStack_18[0] + 0x18) = lStackX_10;
        *(int *)(apuStack_18[0] + 0x20) = param_4;
        uVar1 = func_0x000180743b40(*(uint64_t *)(param_1 + 0xa8),apuStack_18[0],1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      else {
        FUN_180759d80(param_1,param_2,param_3,param_4,param_5,lStackX_10,0);
      }
      if (param_3 != (int64_t *)0x0) {
        *param_3 = lStackX_10;
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 5;
  }
  return uVar1;
}



uint64_t
FUN_1807593d0(int64_t param_1,int64_t param_2,int32_t param_3,int32_t param_4,
             int32_t param_5,int8_t param_6)

{
  uint64_t uVar1;
  int8_t *puStackX_8;
  
  if (((*(int64_t *)(param_1 + 0xe8) == 0) || (*(int *)(*(int64_t *)(param_1 + 0xe8) + 0x28) != 0)
      ) && ((*(int64_t *)(param_2 + 0xe8) == 0 ||
            (*(int *)(*(int64_t *)(param_2 + 0xe8) + 0x2c) != 0)))) {
    if ((*(uint *)(param_1 + 100) >> 8 & 1) == 0) {
      uVar1 = FUN_180743700(*(uint64_t *)(param_1 + 0xa8),&puStackX_8,0x28,param_6);
      if ((int)uVar1 == 0) {
        *puStackX_8 = 2;
        *(int64_t *)(puStackX_8 + 8) = param_1;
        *(int64_t *)(puStackX_8 + 0x10) = param_2;
        *(int32_t *)(puStackX_8 + 0x18) = param_3;
        *(int32_t *)(puStackX_8 + 0x1c) = param_4;
        *(int32_t *)(puStackX_8 + 0x20) = param_5;
        uVar1 = func_0x000180743b40(*(uint64_t *)(param_1 + 0xa8),puStackX_8,param_6);
      }
    }
    else {
      uVar1 = FUN_1807594d0();
    }
  }
  else {
    uVar1 = 5;
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x000180759ad5)
// WARNING: Removing unreachable block (ram,0x000180759ae4)
// WARNING: Removing unreachable block (ram,0x000180759af4)
// WARNING: Removing unreachable block (ram,0x000180759b5d)
// WARNING: Removing unreachable block (ram,0x000180759b62)
// WARNING: Removing unreachable block (ram,0x00018075984d)
// WARNING: Removing unreachable block (ram,0x00018075985c)
// WARNING: Removing unreachable block (ram,0x00018075986c)
// WARNING: Removing unreachable block (ram,0x000180759b6c)
// WARNING: Removing unreachable block (ram,0x000180759b71)
// WARNING: Removing unreachable block (ram,0x0001807598d5)
// WARNING: Removing unreachable block (ram,0x0001807598da)
// WARNING: Removing unreachable block (ram,0x0001807598e4)
// WARNING: Removing unreachable block (ram,0x0001807598e9)

uint64_t FUN_1807594d0(uint64_t param_1,uint64_t param_2,int param_3,int param_4,int param_5,
                       char param_6)

{
  short sVar1;
  int64_t lVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint uVar11;
  int iVar12;
  int64_t lVar13;
  int iVar14;
  int64_t *plVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  uint64_t uStackX_8;
  
  iVar16 = 1;
  uStackX_8 = param_2;
  if (1 < param_5) {
    do {
      iVar14 = 0;
      lVar2 = *(int64_t *)(uStackX_8 + 0xa8);
      bVar18 = false;
      if (param_6 != '\0') {
        FUN_180743160(lVar2,1);
        bVar18 = lVar2 != 0;
        if (bVar18) {
          func_0x000180743c20(lVar2,1);
        }
      }
      uVar6 = 0;
      if (*(short *)(uStackX_8 + 0x1ac) < 1) {
        iVar14 = 9;
      }
      else {
        plVar15 = *(int64_t **)(uStackX_8 + 0x78);
        if (plVar15 == (int64_t *)(uStackX_8 + 0x78)) {
          iVar14 = 0x1c;
        }
        else {
          lVar13 = plVar15[2];
          uVar17 = *(uint *)(lVar13 + 0x7c) & 5;
          uVar5 = uVar6;
          while ((uVar11 = (uint)uVar5, (int)uVar11 < 0 || (uVar17 != 0))) {
            plVar15 = (int64_t *)*plVar15;
            lVar13 = plVar15[2];
            uVar17 = *(uint *)(lVar13 + 0x7c) & 5;
            uVar4 = uVar11 + 1;
            if (uVar17 != 0) {
              uVar4 = uVar11;
            }
            uVar5 = (uint64_t)uVar4;
          }
          if (lVar13 != 0) {
            uVar6 = *(uint64_t *)(lVar13 + 0x58);
            iVar14 = 0;
          }
        }
      }
      if ((param_6 == '\0') || (lVar2 == 0)) {
        if (bVar18) {
          bVar18 = lVar2 == 0;
          goto LAB_1807595e2;
        }
      }
      else {
        bVar18 = !bVar18;
LAB_1807595e2:
        if (!bVar18) {
                    // WARNING: Subroutine does not return
          FUN_180743d60(lVar2,1);
        }
      }
    } while ((iVar14 != 9) &&
            (((uVar6 == 0 || ((*(uint *)(uVar6 + 100) >> 6 & 1) != 0)) &&
             (iVar16 = iVar16 + 1, uStackX_8 = uVar6, iVar16 < param_5))));
  }
  uVar5 = 0;
  uVar6 = param_1;
  if (param_5 == 1) {
    if (param_1 != param_2) {
      if (param_3 == 0) {
        return 0x1c;
      }
      goto LAB_180759661;
    }
    if (param_3 != 0) {
      return 0x1c;
    }
  }
  else if (param_3 != 0) goto LAB_180759661;
  lVar2 = *(int64_t *)(param_1 + 0xa8);
  bVar18 = false;
  if (param_6 != '\0') {
    FUN_180743160(lVar2,1);
    bVar18 = lVar2 != 0;
    if (bVar18) {
      func_0x000180743c20(lVar2,1);
    }
  }
  uVar6 = 0;
  if (*(short *)(param_1 + 0x1ac) < 1) {
    uVar5 = 9;
  }
  else {
    plVar15 = *(int64_t **)(param_1 + 0x78);
    if (plVar15 == (int64_t *)(param_1 + 0x78)) {
      uVar5 = 0x1c;
    }
    else {
      lVar13 = plVar15[2];
      uVar17 = *(uint *)(lVar13 + 0x7c) & 5;
      uVar8 = uVar6;
      while ((uVar11 = (uint)uVar8, (int)uVar11 < 0 || (uVar17 != 0))) {
        plVar15 = (int64_t *)*plVar15;
        lVar13 = plVar15[2];
        uVar17 = *(uint *)(lVar13 + 0x7c) & 5;
        uVar4 = uVar11 + 1;
        if (uVar17 != 0) {
          uVar4 = uVar11;
        }
        uVar8 = (uint64_t)uVar4;
      }
      if (lVar13 != 0) {
        uVar6 = *(uint64_t *)(lVar13 + 0x58);
      }
    }
  }
  if ((param_6 == '\0') || (lVar2 == 0)) {
    if (bVar18) {
      bVar18 = lVar2 == 0;
      goto LAB_180759812;
    }
  }
  else {
    bVar18 = !bVar18;
LAB_180759812:
    if (!bVar18) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(lVar2,1);
    }
  }
  if ((int)uVar5 != 0) {
    return uVar5;
  }
LAB_180759661:
  uVar5 = FUN_18075fdb0(param_2,uStackX_8,param_6);
  if ((int)uVar5 == 0) {
    if (param_4 == 0) {
      if (param_6 != '\0') {
        FUN_180743160(*(uint64_t *)(param_1 + 0xa8),1);
        func_0x000180743c20(*(uint64_t *)(param_1 + 0xa8),1);
      }
      sVar1 = *(short *)(param_1 + 0x1ae);
      if (param_6 != '\0') {
                    // WARNING: Subroutine does not return
        FUN_180743d60(*(uint64_t *)(param_1 + 0xa8),1);
      }
      uVar6 = 0;
      uVar5 = uVar6;
      if (0 < sVar1) {
        do {
          uVar8 = uVar6;
          uVar10 = uVar6;
          if ((short)uVar6 < *(short *)(param_1 + 0x1ae)) {
            plVar15 = *(int64_t **)(param_1 + 400);
            if (plVar15 == (int64_t *)(param_1 + 400)) {
              uVar6 = 0x1c;
            }
            else {
              uVar8 = plVar15[2];
              uVar17 = *(uint *)(uVar8 + 0x7c) & 5;
              uVar7 = uVar6;
              while ((uVar11 = (uint)uVar7, (int)uVar11 < 0 || (uVar17 != 0))) {
                plVar15 = (int64_t *)*plVar15;
                uVar8 = plVar15[2];
                uVar17 = *(uint *)(uVar8 + 0x7c) & 5;
                uVar4 = uVar11 + 1;
                if (uVar17 != 0) {
                  uVar4 = uVar11;
                }
                uVar7 = (uint64_t)uVar4;
              }
              if (uVar8 != 0) {
                uVar10 = *(uint64_t *)(uVar8 + 0x60);
              }
            }
          }
          else {
            uVar6 = 9;
          }
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          uVar7 = FUN_18075dcc0(uVar10,param_1,uVar8,0,0,4);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          uVar8 = FUN_180759d80(uVar10,param_2,0,0,(char)uVar7,uVar8,0);
          if ((int)uVar8 != 0) {
            return uVar8;
          }
          uVar17 = (int)uVar5 + 1;
          uVar5 = (uint64_t)uVar17;
        } while ((int)uVar17 < (int)sVar1);
      }
      uVar6 = FUN_180759d80(uStackX_8,param_1,0,0,0,uVar6,0);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      *(uint64_t *)(param_2 + 8) = *(uint64_t *)(param_1 + 8);
      *(uint64_t *)(param_2 + 0x10) = *(uint64_t *)(param_1 + 0x10);
    }
    else {
      iVar16 = 0;
      do {
        uVar5 = uVar6;
        iVar14 = 0;
        lVar2 = *(int64_t *)(uVar5 + 0xa8);
        bVar18 = false;
        if (param_6 != '\0') {
          FUN_180743160(lVar2,1);
          bVar18 = lVar2 != 0;
          if (bVar18) {
            func_0x000180743c20(lVar2,1);
          }
        }
        uVar6 = 0;
        if (*(short *)(uVar5 + 0x1ac) < 1) {
          iVar14 = 9;
        }
        else {
          plVar15 = *(int64_t **)(uVar5 + 0x78);
          if (plVar15 == (int64_t *)(uVar5 + 0x78)) {
            iVar14 = 0x1c;
          }
          else {
            lVar13 = plVar15[2];
            uVar17 = *(uint *)(lVar13 + 0x7c) & 5;
            iVar3 = 0;
            while ((iVar12 = iVar3, iVar12 < 0 || (uVar17 != 0))) {
              plVar15 = (int64_t *)*plVar15;
              lVar13 = plVar15[2];
              uVar17 = *(uint *)(lVar13 + 0x7c) & 5;
              iVar3 = iVar12 + 1;
              if (uVar17 != 0) {
                iVar3 = iVar12;
              }
            }
            if (lVar13 != 0) {
              uVar6 = *(uint64_t *)(lVar13 + 0x58);
              iVar14 = 0;
            }
          }
        }
        if ((param_6 == '\0') || (lVar2 == 0)) {
          if (bVar18) {
            bVar18 = lVar2 == 0;
            goto LAB_180759a33;
          }
        }
        else {
          bVar18 = !bVar18;
LAB_180759a33:
          if (!bVar18) {
                    // WARNING: Subroutine does not return
            FUN_180743d60(lVar2,1);
          }
        }
      } while ((iVar14 != 9) && (iVar16 = iVar16 + 1, iVar16 < param_4));
      if (uVar6 == 0) {
        uVar8 = 0;
        uVar6 = FUN_180759d80(uVar5,param_2,0,0,0,0,param_6);
        iVar16 = (int)uVar6;
      }
      else {
        if (param_6 != '\0') {
          FUN_180743160(*(uint64_t *)(uVar5 + 0xa8),1);
          func_0x000180743c20(*(uint64_t *)(uVar5 + 0xa8),1);
        }
        sVar1 = *(short *)(uVar5 + 0x1ac);
        if (param_6 != '\0') {
                    // WARNING: Subroutine does not return
          FUN_180743d60(*(uint64_t *)(uVar5 + 0xa8),1);
        }
        uVar8 = 0;
        uVar6 = uVar8;
        if (0 < sVar1) {
          do {
            uVar10 = uVar8;
            uVar7 = uVar8;
            if ((short)uVar8 < *(short *)(uVar5 + 0x1ac)) {
              plVar15 = *(int64_t **)(uVar5 + 0x78);
              if (plVar15 == (int64_t *)(uVar5 + 0x78)) {
                uVar8 = 0x1c;
              }
              else {
                uVar10 = plVar15[2];
                uVar17 = *(uint *)(uVar10 + 0x7c) & 5;
                uVar9 = uVar8;
                while ((uVar11 = (uint)uVar9, (int)uVar11 < 0 || (uVar17 != 0))) {
                  plVar15 = (int64_t *)*plVar15;
                  uVar10 = plVar15[2];
                  uVar17 = *(uint *)(uVar10 + 0x7c) & 5;
                  uVar4 = uVar11 + 1;
                  if (uVar17 != 0) {
                    uVar4 = uVar11;
                  }
                  uVar9 = (uint64_t)uVar4;
                }
                if (uVar10 != 0) {
                  uVar7 = *(uint64_t *)(uVar10 + 0x58);
                }
              }
            }
            else {
              uVar8 = 9;
            }
            if ((int)uVar8 != 0) {
              return uVar8;
            }
            uVar9 = FUN_18075dcc0(uVar5,uVar7,uVar10,0,0,4);
            if ((int)uVar9 != 0) {
              return uVar9;
            }
            uVar10 = FUN_180759d80(uStackX_8,uVar7,0,0,(char)uVar9,uVar10,0);
            if ((int)uVar10 != 0) {
              return uVar10;
            }
            uVar17 = (int)uVar6 + 1;
            uVar6 = (uint64_t)uVar17;
          } while ((int)uVar17 < (int)sVar1);
        }
        uVar6 = FUN_180759d80(uVar5,param_2,0,0,0,uVar8,0);
        iVar16 = (int)uVar6;
      }
      if (iVar16 != 0) {
        return uVar6;
      }
      if ((param_3 < 0) && (uVar6 = uVar8, 0 < param_5)) {
        do {
          uVar17 = (uint)uVar6;
          bVar18 = false;
          *(uint64_t *)(param_2 + 8) = *(uint64_t *)(uVar5 + 8);
          *(uint64_t *)(param_2 + 0x10) = *(uint64_t *)(uVar5 + 0x10);
          lVar2 = *(int64_t *)(param_2 + 0xa8);
          if ((param_6 != '\0') && (FUN_180743160(lVar2,1), lVar2 != 0)) {
            func_0x000180743c20(lVar2,1);
            bVar18 = true;
          }
          uVar10 = 0;
          if (*(short *)(param_2 + 0x1ac) < 1) {
            uVar17 = 9;
          }
          else {
            plVar15 = *(int64_t **)(param_2 + 0x78);
            if (plVar15 == (int64_t *)(param_2 + 0x78)) {
              uVar17 = 0x1c;
            }
            else {
              lVar13 = plVar15[2];
              uVar11 = *(uint *)(lVar13 + 0x7c) & 5;
              uVar6 = uVar10;
              while ((uVar7 = uVar6, iVar16 = (int)uVar7, iVar16 < 0 || (uVar11 != 0))) {
                plVar15 = (int64_t *)*plVar15;
                lVar13 = plVar15[2];
                uVar11 = *(uint *)(lVar13 + 0x7c) & 5;
                uVar6 = (uint64_t)(iVar16 + 1);
                if (uVar11 != 0) {
                  uVar6 = uVar7;
                }
              }
              if (lVar13 != 0) {
                uVar10 = *(uint64_t *)(lVar13 + 0x58);
              }
            }
          }
          if ((param_6 == '\0') || (lVar2 == 0)) {
            if (bVar18) {
              bVar18 = lVar2 == 0;
              goto LAB_180759d46;
            }
          }
          else {
            bVar18 = !bVar18;
LAB_180759d46:
            if (!bVar18) {
                    // WARNING: Subroutine does not return
              FUN_180743d60(lVar2,1);
            }
          }
          if ((uVar17 != 0) && (uVar17 != 9)) {
            return (uint64_t)uVar17;
          }
          if ((uVar10 == 0) ||
             (uVar17 = (int)uVar8 + 1, uVar8 = (uint64_t)uVar17, param_5 <= (int)uVar17)) break;
          uVar6 = 0;
          param_2 = uVar10;
        } while( true );
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}



uint64_t FUN_180759d80(int64_t param_1,int64_t param_2,int64_t *param_3,int param_4,
                       uint64_t param_5,int64_t param_6,char param_7)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int8_t uVar11;
  
  cVar6 = param_7;
  lVar1 = *(int64_t *)(param_1 + 0xa8);
  bVar5 = false;
  bVar4 = false;
  if (param_2 == 0) {
    uVar10 = 0x1f;
  }
  else {
    if ((param_7 != '\0') && (lVar1 != 0)) {
      func_0x000180743c20(lVar1,3);
      bVar4 = true;
      if (lVar1 != 0) {
        func_0x000180743c20(lVar1,1);
        bVar5 = true;
      }
    }
    if (param_6 == 0) {
      if ((cVar6 == '\0') && ((*(uint *)(param_1 + 100) >> 8 & 1) == 0)) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
      uVar7 = FUN_18078a0c0(*(int64_t *)(param_1 + 0xa8) + 0x720,&param_6,uVar11);
      uVar10 = (uint64_t)uVar7;
      if (uVar7 != 0) goto LAB_180759fd6;
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    plVar8 = (int64_t *)(param_6 + 8);
    uVar10 = 0;
    *(uint64_t *)(param_6 + 0x10) = *(uint64_t *)(param_1 + 0x80);
    *plVar8 = param_1 + 0x78;
    *(int64_t **)(param_1 + 0x80) = plVar8;
    **(uint64_t **)(param_6 + 0x10) = plVar8;
    *(short *)(param_1 + 0x1a8) = *(short *)(param_1 + 0x1a8) + 1;
    *(short *)(param_1 + 0x1ac) = *(short *)(param_1 + 0x1ac) + (ushort)(param_4 == 0);
    *(short *)(param_1 + 0x1b0) =
         *(short *)(param_1 + 0x1b0) + (ushort)((param_4 - 1U & 0xfffffffd) == 0);
    plVar8 = (int64_t *)(param_6 + 0x20);
    *(uint64_t *)(param_6 + 0x28) = *(uint64_t *)(param_2 + 0x198);
    *plVar8 = param_2 + 400;
    *(int64_t **)(param_2 + 0x198) = plVar8;
    **(uint64_t **)(param_6 + 0x28) = plVar8;
    *(short *)(param_2 + 0x1aa) = *(short *)(param_2 + 0x1aa) + 1;
    *(short *)(param_2 + 0x1ae) = *(short *)(param_2 + 0x1ae) + (ushort)(param_4 == 0);
    *(short *)(param_2 + 0x1b2) =
         *(short *)(param_2 + 0x1b2) + (ushort)((param_4 - 1U & 0xfffffffd) == 0);
    *(int64_t *)(param_6 + 0x58) = param_2;
    *(int64_t *)(param_6 + 0x60) = param_1;
    if (bVar3) {
      FUN_180765990(param_6,1);
    }
    if (param_4 == 1) {
      *(uint *)(param_6 + 0x7c) = *(uint *)(param_6 + 0x7c) | 1;
    }
    else if (param_4 == 2) {
      *(uint *)(param_6 + 0x7c) = *(uint *)(param_6 + 0x7c) | 4;
    }
    else if (param_4 == 3) {
      *(uint *)(param_6 + 0x7c) = *(uint *)(param_6 + 0x7c) | 5;
    }
    uVar9 = uVar10;
    if ((*(short *)(param_1 + 0x1a8) == 1) &&
       (lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x78) + 0x10),
       (*(byte *)(lVar2 + 0x7c) & 4) == 0)) {
      uVar9 = *(uint64_t *)(lVar2 + 0x58);
    }
    *(uint64_t *)(param_1 + 0x70) = uVar9;
    *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0xa8) + 0x107b8) + 0x30) = 1;
    if ((cVar6 != '\0') && (lVar1 != 0)) {
      if (bVar4) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(lVar1,3);
      }
      if ((lVar1 != 0) && (bVar5)) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(lVar1,1);
      }
    }
    if (param_3 != (int64_t *)0x0) {
      *param_3 = param_6;
      uVar10 = 0;
    }
  }
LAB_180759fd6:
  if ((bVar5) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar1,1);
  }
  if ((bVar4) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar1,3);
  }
  return uVar10;
}



uint64_t FUN_180759d94(int64_t param_1,int64_t param_2,uint64_t param_3,int param_4)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int64_t in_RAX;
  int64_t *plVar7;
  uint64_t uVar8;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t uVar9;
  int8_t uVar10;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int64_t *in_stack_00000060;
  int64_t in_stack_00000078;
  char in_stack_00000080;
  
  cVar5 = in_stack_00000080;
  *(uint64_t *)(in_RAX + 8) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  *(uint64_t *)(in_RAX + 0x20) = unaff_R12;
  bVar4 = false;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  bVar3 = false;
  if (param_2 == 0) {
    uVar9 = 0x1f;
  }
  else {
    if ((in_stack_00000080 != '\0') && (unaff_RBX != 0)) {
      func_0x000180743c20();
      bVar3 = true;
      if (unaff_RBX != 0) {
        func_0x000180743c20();
        bVar4 = true;
      }
    }
    if (in_stack_00000078 == 0) {
      if ((cVar5 == '\0') && ((*(uint *)(param_1 + 100) >> 8 & 1) == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
      uVar6 = FUN_18078a0c0(*(int64_t *)(param_1 + 0xa8) + 0x720,&stack0x00000078,uVar10);
      uVar9 = (uint64_t)uVar6;
      if (uVar6 != 0) goto LAB_180759fd6;
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    plVar7 = (int64_t *)(in_stack_00000078 + 8);
    uVar9 = 0;
    *(uint64_t *)(in_stack_00000078 + 0x10) = *(uint64_t *)(param_1 + 0x80);
    *plVar7 = param_1 + 0x78;
    *(int64_t **)(param_1 + 0x80) = plVar7;
    **(uint64_t **)(in_stack_00000078 + 0x10) = plVar7;
    *(short *)(param_1 + 0x1a8) = *(short *)(param_1 + 0x1a8) + 1;
    *(short *)(param_1 + 0x1ac) = *(short *)(param_1 + 0x1ac) + (ushort)(param_4 == 0);
    *(short *)(param_1 + 0x1b0) =
         *(short *)(param_1 + 0x1b0) + (ushort)((param_4 - 1U & 0xfffffffd) == 0);
    plVar7 = (int64_t *)(in_stack_00000078 + 0x20);
    *(uint64_t *)(in_stack_00000078 + 0x28) = *(uint64_t *)(param_2 + 0x198);
    *plVar7 = param_2 + 400;
    *(int64_t **)(param_2 + 0x198) = plVar7;
    **(uint64_t **)(in_stack_00000078 + 0x28) = plVar7;
    *(short *)(param_2 + 0x1aa) = *(short *)(param_2 + 0x1aa) + 1;
    *(short *)(param_2 + 0x1ae) = *(short *)(param_2 + 0x1ae) + (ushort)(param_4 == 0);
    *(short *)(param_2 + 0x1b2) =
         *(short *)(param_2 + 0x1b2) + (ushort)((param_4 - 1U & 0xfffffffd) == 0);
    *(int64_t *)(in_stack_00000078 + 0x58) = param_2;
    *(int64_t *)(in_stack_00000078 + 0x60) = param_1;
    if (bVar2) {
      FUN_180765990(in_stack_00000078,1);
    }
    if (param_4 == 1) {
      *(uint *)(in_stack_00000078 + 0x7c) = *(uint *)(in_stack_00000078 + 0x7c) | 1;
    }
    else if (param_4 == 2) {
      *(uint *)(in_stack_00000078 + 0x7c) = *(uint *)(in_stack_00000078 + 0x7c) | 4;
    }
    else if (param_4 == 3) {
      *(uint *)(in_stack_00000078 + 0x7c) = *(uint *)(in_stack_00000078 + 0x7c) | 5;
    }
    uVar8 = uVar9;
    if ((*(short *)(param_1 + 0x1a8) == 1) &&
       (lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x78) + 0x10),
       (*(byte *)(lVar1 + 0x7c) & 4) == 0)) {
      uVar8 = *(uint64_t *)(lVar1 + 0x58);
    }
    *(uint64_t *)(param_1 + 0x70) = uVar8;
    *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0xa8) + 0x107b8) + 0x30) = 1;
    if ((cVar5 != '\0') && (unaff_RBX != 0)) {
      if (bVar3) {
                    // WARNING: Subroutine does not return
        FUN_180743d60();
      }
      if ((unaff_RBX != 0) && (bVar4)) {
                    // WARNING: Subroutine does not return
        FUN_180743d60();
      }
    }
    if (in_stack_00000060 != (int64_t *)0x0) {
      *in_stack_00000060 = in_stack_00000078;
      uVar9 = 0;
    }
  }
LAB_180759fd6:
  if ((bVar4) && (unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  if ((bVar3) && (unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return uVar9;
}



// WARNING: Removing unreachable block (ram,0x00018075a015)

int32_t FUN_180759ff4(void)

{
  int64_t unaff_RBX;
  int32_t unaff_EDI;
  
  if (unaff_RBX == 0) {
    return unaff_EDI;
  }
                    // WARNING: Subroutine does not return
  FUN_180743d60();
}



int32_t FUN_18075a010(void)

{
  int64_t unaff_RBX;
  int32_t unaff_EDI;
  
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return unaff_EDI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18075a030(int64_t param_1,int64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  uint uVar5;
  
  *(int64_t *)(*(int64_t *)(param_1 + 0x20) + (int64_t)*(int *)(param_1 + 0xc) * 8) = param_2;
  LOCK();
  *(uint *)(param_2 + 0x5c) = *(uint *)(param_2 + 0x5c) | 0x100000;
  UNLOCK();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 8);
    uVar5 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 8) = iVar1;
    lVar2 = FUN_180742650(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(param_1 + 0x18),
                          iVar1 * 8 + 0x10,&unknown_var_1040_ptr,0x3cd,0);
    if (lVar2 != 0) {
      *(int64_t *)(param_1 + 0x18) = lVar2;
      uVar4 = lVar2 + 0xfU & 0xfffffffffffffff0;
      *(uint64_t *)(param_1 + 0x20) = uVar4;
      uVar3 = (int)uVar4 - (int)lVar2;
      if (uVar5 == uVar3) {
        return 0;
      }
                    // WARNING: Subroutine does not return
      memmove((uint64_t)uVar3 + lVar2,(uint64_t)uVar5 + lVar2,(int64_t)*(int *)(param_1 + 8) << 3
             );
    }
  }
  return 0x26;
}



uint64_t
FUN_18075a100(uint64_t *param_1,uint64_t param_2,int param_3,int32_t param_4,char param_5)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int iVar5;
  
  param_1[1] = param_2;
  iVar5 = *(int *)(param_2 + 0x6d8) * param_3;
  if ((*param_1 != 0) && (uVar2 = FUN_18075f8e0(), (int)uVar2 != 0)) {
    return uVar2;
  }
  if (*(int *)(param_1[1] + 0x107b0) < param_3) {
    lVar3 = FUN_180741e10(param_1[1] + 0x10bd0,iVar5 * 4 + 0x40,&system_buffer_ptr,0,0,0,1);
    if (lVar3 == 0) {
      return 0x26;
    }
    uVar4 = lVar3 + 0x1fU & 0xffffffffffffffe0;
    *param_1 = uVar4;
    *(int64_t *)(uVar4 + 0x18) = lVar3;
    *(uint64_t *)(*param_1 + 0x10) = *param_1 + 0x20;
    *(int32_t *)(*param_1 + 8) = 0;
    *(uint64_t *)*param_1 = 0;
  }
  else {
    if ((*(int64_t *)(param_2 + 0x107a8) == 0) && (uVar2 = FUN_180742e60(), (int)uVar2 != 0)) {
      return uVar2;
    }
    puVar1 = *(uint64_t **)(param_2 + 0x107a8);
    *param_1 = (uint64_t)puVar1;
    *(uint64_t *)(param_2 + 0x107a8) = *puVar1;
  }
  *(int *)(param_1 + 2) = param_3;
  *(int32_t *)((int64_t)param_1 + 0x14) = param_4;
  if (param_5 == '\0') {
    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
    return 0;
  }
                    // WARNING: Subroutine does not return
  memset(*(uint64_t *)(*param_1 + 0x10),0,(int64_t)iVar5 << 2);
}



uint64_t FUN_18075a230(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int *piVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int iVar8;
  code *pcVar9;
  uint64_t uVar10;
  int iVar11;
  int64_t lVar12;
  
  if (param_2 == (uint64_t *)0x0) {
    return 0x1f;
  }
  uVar10 = param_2[1];
  *(uint64_t *)(param_1 + 0xe8) = *param_2;
  *(uint64_t *)(param_1 + 0xf0) = uVar10;
  uVar10 = param_2[3];
  *(uint64_t *)(param_1 + 0xf8) = param_2[2];
  *(uint64_t *)(param_1 + 0x100) = uVar10;
  uVar3 = *(int32_t *)(param_2 + 4);
  uVar4 = *(int32_t *)((int64_t)param_2 + 0x24);
  uVar5 = *(int32_t *)(param_2 + 5);
  uVar6 = *(int32_t *)((int64_t)param_2 + 0x2c);
  *(int32_t *)(param_1 + 0x108) = uVar3;
  *(int32_t *)(param_1 + 0x10c) = uVar4;
  *(int32_t *)(param_1 + 0x110) = uVar5;
  *(int32_t *)(param_1 + 0x114) = uVar6;
  uVar4 = *(int32_t *)(param_2 + 6);
  uVar5 = *(int32_t *)((int64_t)param_2 + 0x34);
  uVar6 = *(int32_t *)(param_2 + 7);
  uVar7 = *(int32_t *)((int64_t)param_2 + 0x3c);
  *(int64_t *)(param_1 + 0x68) = param_1;
  *(int32_t *)(param_1 + 0x60) = 0;
  *(int32_t *)(param_1 + 0x118) = uVar4;
  *(int32_t *)(param_1 + 0x11c) = uVar5;
  *(int32_t *)(param_1 + 0x120) = uVar6;
  *(int32_t *)(param_1 + 0x124) = uVar7;
  LOCK();
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xffffdfff;
  UNLOCK();
  LOCK();
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xffffffbf;
  UNLOCK();
  *(int32_t *)(param_1 + 0xc4) = 0;
  *(int32_t *)(param_1 + 0x1c0) = 0;
  if ((*(uint *)(*(int64_t *)(param_1 + 0xa8) + 0x78) & 0x200000) != 0) {
    FUN_1807623d0(uVar3,0);
  }
  lVar1 = *(int64_t *)(param_1 + 0xe8);
  if (lVar1 == 0) goto LAB_18075a329;
  *(uint64_t *)(param_1 + 0x1e8) = *(uint64_t *)(lVar1 + 0xb8);
  pcVar9 = *(code **)(lVar1 + 0x50);
  if (pcVar9 == (code *)0x0) {
    if (*(int64_t *)(lVar1 + 0x48) != 0) {
      pcVar9 = FUN_180759120;
      goto LAB_18075a2e8;
    }
  }
  else {
LAB_18075a2e8:
    *(code **)(param_1 + 0x128) = pcVar9;
  }
  uVar10 = FUN_180744ae0(*(uint64_t *)(param_1 + 0xa8),0x100010,param_1,0);
  if ((int)uVar10 != 0) {
    return uVar10;
  }
  if (*(int64_t *)(*(int64_t *)(param_1 + 0xe8) + 0x30) != 0) {
    *(int64_t *)(param_1 + 0xb0) = param_1;
    uVar10 = (**(code **)(*(int64_t *)(param_1 + 0xe8) + 0x30))();
    if ((int)uVar10 != 0) {
      return uVar10;
    }
  }
LAB_18075a329:
  lVar1 = *(int64_t *)(param_1 + 0xe8);
  iVar11 = 0;
  lVar12 = 0;
  while( true ) {
    if (lVar1 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(lVar1 + 0x60);
    }
    if (iVar8 <= iVar11) break;
    piVar2 = *(int **)(lVar12 + *(int64_t *)(lVar1 + 0x68));
    if ((*piVar2 == 3) && (piVar2[0xc] == -3)) {
      LOCK();
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 8;
      UNLOCK();
      return 0;
    }
    iVar11 = iVar11 + 1;
    lVar12 = lVar12 + 8;
  }
  return 0;
}



uint64_t FUN_18075a370(int64_t param_1,int param_2)

{
  if (*(int *)(param_1 + 0x208) + 2 < param_2) {
                    // WARNING: Subroutine does not return
    memset(param_1 + 0x100,0,0x108);
  }
  if (0 < *(int *)(param_1 + 0x20c)) {
                    // WARNING: Subroutine does not return
    memset(param_1 + 0x100,0,0x108);
  }
  return 0;
}



uint64_t
FUN_18075a760(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
             float param_7,float param_8,int param_9,int param_10,int param_11,float *param_12,
             int32_t *param_13)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int64_t lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float afStack_2a8 [44];
  uint64_t uStack_1f8;
  uint64_t uStack_1f0;
  uint64_t uStack_1e8;
  uint64_t uStack_1e0;
  float fStack_1d8;
  int32_t uStack_1d4;
  float fStack_1d0;
  int32_t uStack_1cc;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  uint64_t uStack_1b8;
  int64_t lStack_1b0;
  int64_t lStack_1a8;
  int64_t lStack_1a0;
  uint64_t uStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  int64_t lStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  
  *param_13 = 0;
  if (1000 < param_9) {
    return 0;
  }
  if (param_9 == 1000) {
LAB_18075ce56:
    if (param_11 == 3) {
                    // WARNING: Subroutine does not return
      memset(param_12,0,(int64_t)(param_10 * 2) << 2);
    }
    if ((param_11 == 4) || ((8 < param_10 && (param_10 != 0xc)))) {
                    // WARNING: Subroutine does not return
      memset(param_12,0,(int64_t)(param_10 * 2) << 2);
    }
    switch(param_10) {
    case 1:
      fVar12 = param_3 * param_3 * 0.5;
      *(uint64_t *)param_12 =
           CONCAT44(SQRT(param_2 * param_2 + fVar12 + param_6 * param_6 * 0.25),
                    SQRT(param_1 * param_1 + fVar12 + param_5 * param_5 * 0.25));
      *param_13 = 1;
      break;
    case 2:
      fVar12 = param_3 * param_3 * 0.5;
      *param_12 = SQRT(param_1 * param_1 + fVar12 + param_5 * param_5 * 0.25);
      param_12[1] = 0.0;
      param_12[2] = 0.0;
      param_12[3] = SQRT(param_2 * param_2 + fVar12 + param_6 * param_6 * 0.25);
      *param_13 = 2;
      break;
    case 4:
      *param_12 = param_1;
      param_12[1] = 0.0;
      param_12[2] = param_5 * 0.5;
      param_12[3] = 0.0;
      param_12[4] = 0.0;
      param_12[5] = param_2;
      param_12[6] = 0.0;
      param_12[7] = param_6 * 0.5;
      *param_13 = 4;
      break;
    case 6:
      param_3 = param_3 * 0.5;
      param_4 = param_4 * 0.5;
      param_5 = param_5 * 0.5;
      if (param_11 == 2) {
        *param_12 = param_1;
        param_12[1] = param_3;
        param_12[2] = 0.0;
        param_12[3] = param_5;
        param_5 = 0.0;
        fVar9 = param_3;
        fVar10 = param_4;
        fVar11 = 0.0;
        fVar12 = param_6 * 0.5;
        afStack_2a8[5] = param_4;
        param_3 = param_2;
      }
      else {
        afStack_2a8[5] = 0.0;
        *param_12 = param_1;
        param_12[1] = 0.0;
        param_12[2] = param_3;
        param_12[3] = param_4;
        fVar12 = 0.0;
        fVar9 = param_2;
        fVar10 = param_6 * 0.5;
        fVar11 = param_4;
      }
      param_12[4] = param_5;
      param_12[5] = afStack_2a8[5];
      param_12[6] = 0.0;
      param_12[7] = fVar9;
      param_12[8] = param_3;
      param_12[9] = fVar11;
      param_12[10] = fVar12;
      param_12[0xb] = fVar10;
      *param_13 = 6;
      break;
    case 8:
      *param_12 = param_1;
      param_12[1] = 0.0;
      param_12[2] = param_3 * 0.5;
      param_12[3] = param_4 * 0.5;
      param_12[4] = param_5 * 0.5;
      param_12[5] = 0.0;
      param_12[6] = param_7 * 0.75;
      param_12[7] = 0.0;
      param_12[8] = 0.0;
      param_12[9] = param_2;
      param_12[10] = param_3 * 0.5;
      param_12[0xb] = param_4 * 0.5;
      param_12[0xc] = 0.0;
      param_12[0xd] = param_6 * 0.5;
      param_12[0xe] = 0.0;
      param_12[0xf] = param_8 * 0.75;
      *param_13 = 8;
      break;
    case 0xc:
      *param_12 = param_1;
      param_12[1] = 0.0;
      param_12[2] = param_3 * 0.5;
      param_12[3] = param_4 * 0.5;
      param_12[4] = param_5 * 0.5;
      param_12[5] = 0.0;
      param_12[6] = param_7 * 0.75;
      param_12[7] = 0.0;
      param_12[8] = 0.0;
      param_12[9] = 0.0;
      param_12[10] = 0.0;
      param_12[0xb] = 0.0;
      param_12[0xc] = 0.0;
      param_12[0xd] = param_2;
      param_12[0xe] = param_3 * 0.5;
      param_12[0xf] = param_4 * 0.5;
      param_12[0x10] = 0.0;
      param_12[0x11] = param_6 * 0.5;
      param_12[0x12] = 0.0;
      param_12[0x13] = param_8 * 0.75;
      param_12[0x14] = 0.0;
      param_12[0x15] = 0.0;
      param_12[0x16] = 0.0;
      param_12[0x17] = 0.0;
      *param_13 = 0xc;
    }
  }
  else {
    switch(param_9) {
    case 2:
      switch(param_10) {
      case 1:
        *param_12 = SQRT(param_3 * param_3 * 0.5 + param_1 * param_1 + param_5 * param_5 * 0.25);
        *param_13 = 1;
        break;
      case 2:
        fVar11 = param_3 * param_3 * 0.5;
        fVar12 = param_5 * param_5 * 0.25;
        *(uint64_t *)param_12 =
             CONCAT44(SQRT(param_2 * param_2 + fVar11 + fVar12),
                      SQRT(param_1 * param_1 + fVar11 + fVar12));
        *param_13 = 2;
        break;
      case 4:
        *param_12 = param_1;
        param_12[1] = 0.0;
        param_12[2] = param_5 * 0.5;
        param_12[3] = 0.0;
        *param_13 = 4;
        break;
      case 6:
        *param_12 = param_1;
        param_12[1] = param_2;
        param_12[2] = param_3;
        param_12[3] = param_4;
        *(uint64_t *)(param_12 + 4) = CONCAT44(param_6,param_5);
        *param_13 = 6;
        break;
      case 8:
        *param_12 = param_1;
        param_12[1] = param_2;
        param_12[2] = param_3;
        param_12[3] = param_4;
        param_12[4] = param_5;
        param_12[5] = param_6;
        param_12[6] = param_7;
        param_12[7] = param_8;
        *param_13 = 8;
        break;
      case 0xc:
        *param_12 = param_1;
        param_12[1] = param_2;
        param_12[2] = param_3;
        param_12[3] = param_4;
        param_12[4] = param_5;
        param_12[5] = param_6;
        param_12[6] = param_7;
        param_12[7] = param_8;
        param_12[8] = 0.0;
        param_12[9] = 0.0;
        param_12[10] = 0.0;
        param_12[0xb] = 0.0;
        *param_13 = 0xc;
      }
      break;
    case 3:
      goto LAB_18075ce56;
    case 4:
      if (param_11 == 3) {
                    // WARNING: Subroutine does not return
        memset(param_12,0,(int64_t)(param_10 * 4) << 2);
      }
      if ((param_11 == 4) || ((8 < param_10 && (param_10 != 0xc)))) {
                    // WARNING: Subroutine does not return
        memset(param_12,0,(int64_t)(param_10 * 4) << 2);
      }
      switch(param_10) {
      case 1:
        *param_12 = param_1 + param_3;
        param_12[1] = param_2 + param_3;
        param_12[2] = param_5;
        param_12[3] = param_6;
        *param_13 = 1;
        break;
      case 2:
        *param_12 = param_1;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        param_12[3] = param_2;
        param_12[4] = param_5;
        param_12[5] = 0.0;
        param_12[6] = 0.0;
        param_12[7] = param_6;
        *param_13 = 2;
        break;
      case 4:
        *param_12 = param_1;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        param_12[3] = 0.0;
        param_12[4] = 0.0;
        param_12[5] = param_2;
        param_12[6] = 0.0;
        param_12[7] = 0.0;
        param_12[8] = 0.0;
        param_12[9] = 0.0;
        param_12[10] = param_5 * 0.5;
        param_12[0xb] = 0.0;
        param_12[0xc] = 0.0;
        param_12[0xd] = 0.0;
        param_12[0xe] = 0.0;
        param_12[0xf] = param_6 * 0.5;
        *param_13 = 4;
        break;
      case 6:
        param_3 = param_3 * 0.5;
        param_4 = param_4 * 0.25;
        if (param_11 == 2) {
          *param_12 = param_1;
          param_12[1] = param_3;
          param_12[2] = 0.0;
          param_12[3] = 0.0;
          param_12[4] = 0.0;
          param_12[5] = param_4;
          param_12[6] = 0.0;
          param_12[7] = param_3;
          param_12[8] = param_2;
          param_12[9] = 0.0;
          param_12[10] = 0.0;
          param_12[0xb] = param_4;
          param_12[0xc] = 0.0;
          param_12[0xd] = 0.0;
          param_12[0xe] = 0.0;
          param_12[0xf] = param_5;
          param_12[0x10] = 0.0;
          param_12[0x11] = param_4;
          param_12[0x12] = 0.0;
          param_12[0x13] = 0.0;
          param_12[0x14] = 0.0;
          param_12[0x15] = 0.0;
          param_12[0x16] = param_6;
          param_12[0x17] = param_4;
          *param_13 = 6;
        }
        else {
          *param_12 = param_1;
          param_12[1] = 0.0;
          param_12[2] = param_3;
          param_12[3] = param_4;
          param_12[4] = 0.0;
          param_12[5] = 0.0;
          param_12[6] = 0.0;
          param_12[7] = param_2;
          param_12[8] = param_3;
          param_12[9] = param_4;
          param_12[10] = 0.0;
          param_12[0xb] = 0.0;
          param_12[0xc] = 0.0;
          param_12[0xd] = 0.0;
          param_12[0xe] = 0.0;
          param_12[0xf] = param_4;
          param_12[0x10] = param_5;
          param_12[0x11] = 0.0;
          param_12[0x12] = 0.0;
          param_12[0x13] = 0.0;
          param_12[0x14] = 0.0;
          param_12[0x15] = param_4;
          param_12[0x16] = 0.0;
          param_12[0x17] = param_6;
          *param_13 = 6;
        }
        break;
      case 8:
        param_4 = param_4 * 0.25;
        *param_12 = param_1;
        param_12[1] = 0.0;
        param_12[2] = param_3 * 0.5;
        param_12[3] = param_4;
        param_12[4] = 0.0;
        param_12[5] = 0.0;
        param_12[6] = param_7 * 0.5;
        param_12[7] = 0.0;
        param_12[8] = 0.0;
        param_12[9] = param_2;
        param_12[10] = param_3 * 0.5;
        param_12[0xb] = param_4;
        param_12[0xc] = 0.0;
        param_12[0xd] = 0.0;
        param_12[0xe] = 0.0;
        param_12[0xf] = param_8 * 0.5;
        param_12[0x10] = 0.0;
        param_12[0x11] = 0.0;
        param_12[0x12] = 0.0;
        param_12[0x13] = param_4;
        param_12[0x14] = param_5;
        param_12[0x15] = 0.0;
        param_12[0x16] = param_7 * 0.5;
        param_12[0x17] = 0.0;
        param_12[0x18] = 0.0;
        param_12[0x19] = 0.0;
        param_12[0x1a] = 0.0;
        param_12[0x1b] = param_4;
        param_12[0x1c] = 0.0;
        param_12[0x1d] = param_6;
        param_12[0x1e] = 0.0;
        param_12[0x1f] = param_8 * 0.5;
        *param_13 = 8;
        break;
      case 0xc:
        param_4 = param_4 * 0.25;
        *(uint64_t *)param_12 = (uint64_t)(uint)param_1;
        *(uint64_t *)(param_12 + 2) = CONCAT44(param_4,param_3 * 0.5);
        param_12[4] = 0.0;
        param_12[5] = 0.0;
        *(uint64_t *)(param_12 + 6) = (uint64_t)(uint)(param_7 * 0.5);
        param_12[8] = 0.0;
        param_12[9] = 0.0;
        param_12[10] = 0.0;
        param_12[0xb] = 0.0;
        *(uint64_t *)(param_12 + 0xc) = (uint64_t)(uint)param_2 << 0x20;
        *(uint64_t *)(param_12 + 0xe) = CONCAT44(param_4,param_3 * 0.5);
        param_12[0x10] = 0.0;
        param_12[0x11] = 0.0;
        *(uint64_t *)(param_12 + 0x12) = (uint64_t)(uint)(param_8 * 0.5) << 0x20;
        param_12[0x14] = 0.0;
        param_12[0x15] = 0.0;
        param_12[0x16] = 0.0;
        param_12[0x17] = 0.0;
        param_12[0x18] = 0.0;
        param_12[0x19] = 0.0;
        *(uint64_t *)(param_12 + 0x1a) = (uint64_t)(uint)param_4 << 0x20;
        *(uint64_t *)(param_12 + 0x1c) = (uint64_t)(uint)param_5;
        *(uint64_t *)(param_12 + 0x1e) = (uint64_t)(uint)(param_7 * 0.5);
        param_12[0x20] = 0.0;
        param_12[0x21] = 0.0;
        param_12[0x22] = 0.0;
        param_12[0x23] = 0.0;
        param_12[0x24] = 0.0;
        param_12[0x25] = 0.0;
        *(uint64_t *)(param_12 + 0x26) = (uint64_t)(uint)param_4 << 0x20;
        *(uint64_t *)(param_12 + 0x28) = (uint64_t)(uint)param_6 << 0x20;
        *(uint64_t *)(param_12 + 0x2a) = (uint64_t)(uint)(param_8 * 0.5) << 0x20;
        param_12[0x2c] = 0.0;
        param_12[0x2d] = 0.0;
        param_12[0x2e] = 0.0;
        param_12[0x2f] = 0.0;
        *param_13 = 0xc;
      }
      break;
    case 5:
      if (param_11 == 3) {
        param_10 = param_10 * 5;
code_r0x00018075c539:
                    // WARNING: Subroutine does not return
        memset(param_12,0,(int64_t)param_10 << 2);
      }
      if ((param_11 == 4) || ((8 < param_10 && (param_10 != 0xc)))) {
                    // WARNING: Subroutine does not return
        memset(param_12,0,(int64_t)(param_10 * 5) << 2);
      }
      switch(param_10) {
      case 1:
        *param_12 = param_1;
        param_12[1] = param_2;
        param_12[2] = param_3;
        param_12[3] = param_5;
        param_12[4] = param_6;
        *param_13 = 1;
        break;
      case 2:
        *param_12 = param_1;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        param_12[3] = param_2;
        param_12[4] = param_3 * 0.5;
        param_12[5] = param_3 * 0.5;
        param_12[6] = param_5;
        param_12[7] = 0.0;
        *(uint64_t *)(param_12 + 8) = (uint64_t)(uint)param_6 << 0x20;
        *param_13 = 2;
        break;
      case 4:
        *param_12 = param_1;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        param_12[3] = 0.0;
        param_12[4] = 0.0;
        param_12[5] = param_2;
        param_12[6] = 0.0;
        param_12[7] = 0.0;
        param_12[8] = param_3 * 0.5;
        param_12[9] = param_3 * 0.5;
        param_12[10] = 0.0;
        param_12[0xb] = 0.0;
        param_12[0xc] = 0.0;
        param_12[0xd] = 0.0;
        param_12[0xe] = param_5;
        param_12[0xf] = 0.0;
        param_12[0x10] = 0.0;
        param_12[0x11] = 0.0;
        param_12[0x12] = 0.0;
        param_12[0x13] = param_6;
        *param_13 = 4;
        break;
      case 6:
        if (param_11 == 2) {
          *param_12 = param_1;
          param_12[1] = 0.0;
          param_12[2] = 0.0;
          param_12[3] = 0.0;
          param_12[4] = 0.0;
          param_12[5] = 0.0;
          param_12[6] = 0.0;
          param_12[7] = 0.0;
          param_12[8] = param_2;
          param_12[9] = 0.0;
          param_12[10] = 0.0;
          param_12[0xb] = 0.0;
          param_12[0xc] = 0.0;
          param_12[0xd] = param_3;
          param_12[0xe] = 0.0;
          param_12[0xf] = 0.0;
          param_12[0x10] = 0.0;
          param_12[0x11] = 0.0;
          param_12[0x12] = 0.0;
          param_12[0x13] = 0.0;
          param_12[0x14] = 0.0;
          param_12[0x15] = param_5;
          param_12[0x16] = 0.0;
          param_12[0x17] = 0.0;
          param_12[0x18] = 0.0;
          param_12[0x19] = 0.0;
          param_12[0x1a] = 0.0;
          param_12[0x1b] = 0.0;
          *(uint64_t *)(param_12 + 0x1c) = (uint64_t)(uint)param_6;
          *param_13 = 6;
        }
        else {
          *param_12 = param_1;
          param_12[1] = 0.0;
          param_12[2] = 0.0;
          param_12[3] = 0.0;
          param_12[4] = 0.0;
          param_12[5] = 0.0;
          param_12[6] = 0.0;
          param_12[7] = param_2;
          param_12[8] = 0.0;
          param_12[9] = 0.0;
          param_12[10] = 0.0;
          param_12[0xb] = 0.0;
          param_12[0xc] = 0.0;
          param_12[0xd] = 0.0;
          param_12[0xe] = param_3;
          param_12[0xf] = 0.0;
          param_12[0x10] = 0.0;
          param_12[0x11] = 0.0;
          param_12[0x12] = 0.0;
          param_12[0x13] = 0.0;
          param_12[0x14] = 0.0;
          param_12[0x15] = 0.0;
          param_12[0x16] = param_5;
          param_12[0x17] = 0.0;
          param_12[0x18] = 0.0;
          param_12[0x19] = 0.0;
          param_12[0x1a] = 0.0;
          param_12[0x1b] = 0.0;
          *(uint64_t *)(param_12 + 0x1c) = (uint64_t)(uint)param_6 << 0x20;
          *param_13 = 6;
        }
        break;
      case 8:
        *(uint64_t *)param_12 = (uint64_t)(uint)param_1;
        param_12[2] = 0.0;
        param_12[3] = 0.0;
        param_12[4] = 0.0;
        param_12[5] = 0.0;
        *(uint64_t *)(param_12 + 6) = (uint64_t)(uint)(param_7 * 0.5);
        *(uint64_t *)(param_12 + 8) = (uint64_t)(uint)param_2 << 0x20;
        param_12[10] = 0.0;
        param_12[0xb] = 0.0;
        param_12[0xc] = 0.0;
        param_12[0xd] = 0.0;
        *(uint64_t *)(param_12 + 0xe) = (uint64_t)(uint)(param_8 * 0.5) << 0x20;
        param_12[0x10] = 0.0;
        param_12[0x11] = 0.0;
        *(uint64_t *)(param_12 + 0x12) = (uint64_t)(uint)param_3;
        param_12[0x14] = 0.0;
        param_12[0x15] = 0.0;
        param_12[0x16] = 0.0;
        param_12[0x17] = 0.0;
        param_12[0x18] = 0.0;
        param_12[0x19] = 0.0;
        param_12[0x1a] = 0.0;
        param_12[0x1b] = 0.0;
        *(uint64_t *)(param_12 + 0x1c) = (uint64_t)(uint)param_5;
        *(uint64_t *)(param_12 + 0x1e) = (uint64_t)(uint)(param_7 * 0.5);
        param_12[0x20] = 0.0;
        param_12[0x21] = 0.0;
        param_12[0x22] = 0.0;
        param_12[0x23] = 0.0;
        *(uint64_t *)(param_12 + 0x24) = (uint64_t)(uint)param_6 << 0x20;
        *(uint64_t *)(param_12 + 0x26) = (uint64_t)(uint)(param_8 * 0.5) << 0x20;
        *param_13 = 8;
        break;
      case 0xc:
        *(uint64_t *)param_12 = (uint64_t)(uint)param_1;
        param_12[2] = 0.0;
        param_12[3] = 0.0;
        param_12[4] = 0.0;
        param_12[5] = 0.0;
        *(uint64_t *)(param_12 + 6) = (uint64_t)(uint)(param_7 * 0.5);
        param_12[8] = 0.0;
        param_12[9] = 0.0;
        param_12[10] = 0.0;
        param_12[0xb] = 0.0;
        *(uint64_t *)(param_12 + 0xc) = (uint64_t)(uint)param_2 << 0x20;
        param_12[0xe] = 0.0;
        param_12[0xf] = 0.0;
        param_12[0x10] = 0.0;
        param_12[0x11] = 0.0;
        *(uint64_t *)(param_12 + 0x12) = (uint64_t)(uint)(param_8 * 0.5) << 0x20;
        param_12[0x14] = 0.0;
        param_12[0x15] = 0.0;
        param_12[0x16] = 0.0;
        param_12[0x17] = 0.0;
        param_12[0x18] = 0.0;
        param_12[0x19] = 0.0;
        *(uint64_t *)(param_12 + 0x1a) = (uint64_t)(uint)param_3;
        param_12[0x1c] = 0.0;
        param_12[0x1d] = 0.0;
        param_12[0x1e] = 0.0;
        param_12[0x1f] = 0.0;
        param_12[0x20] = 0.0;
        param_12[0x21] = 0.0;
        param_12[0x22] = 0.0;
        param_12[0x23] = 0.0;
        param_12[0x24] = 0.0;
        param_12[0x25] = 0.0;
        param_12[0x26] = 0.0;
        param_12[0x27] = 0.0;
        *(uint64_t *)(param_12 + 0x28) = (uint64_t)(uint)param_5;
        *(uint64_t *)(param_12 + 0x2a) = (uint64_t)(uint)(param_7 * 0.5);
        param_12[0x2c] = 0.0;
        param_12[0x2d] = 0.0;
        param_12[0x2e] = 0.0;
        param_12[0x2f] = 0.0;
        param_12[0x30] = 0.0;
        param_12[0x31] = 0.0;
        param_12[0x32] = 0.0;
        param_12[0x33] = 0.0;
        *(uint64_t *)(param_12 + 0x34) = (uint64_t)(uint)param_6 << 0x20;
        *(uint64_t *)(param_12 + 0x36) = (uint64_t)(uint)(param_8 * 0.5) << 0x20;
        param_12[0x38] = 0.0;
        param_12[0x39] = 0.0;
        param_12[0x3a] = 0.0;
        param_12[0x3b] = 0.0;
        *param_13 = 0xc;
      }
      break;
    case 6:
      if (param_11 == 3) {
        param_10 = param_10 * 6;
        goto code_r0x00018075c539;
      }
      if ((param_11 == 4) || ((8 < param_10 && (param_10 != 0xc)))) {
                    // WARNING: Subroutine does not return
        memset(param_12,0,(int64_t)(param_10 * 6) << 2);
      }
      switch(param_10) {
      case 1:
        *param_12 = param_1;
        param_12[1] = param_2;
        param_12[2] = param_3;
        param_12[3] = param_4;
        *(uint64_t *)(param_12 + 4) = CONCAT44(param_6,param_5);
        *param_13 = 1;
        break;
      case 2:
        *param_12 = param_1;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        param_12[3] = param_2;
        param_12[4] = param_3 * 0.5;
        param_12[5] = param_3 * 0.5;
        param_12[6] = param_4 * 0.5;
        param_12[7] = param_4 * 0.5;
        param_12[8] = param_5;
        param_12[9] = 0.0;
        param_12[10] = 0.0;
        param_12[0xb] = param_6;
        *param_13 = 2;
        break;
      case 4:
        *param_12 = param_1;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        param_12[3] = 0.0;
        param_12[4] = 0.0;
        param_12[5] = param_2;
        param_12[6] = 0.0;
        param_12[7] = 0.0;
        param_12[8] = param_3 * 0.5;
        param_12[9] = param_3 * 0.5;
        param_12[10] = 0.0;
        param_12[0xb] = 0.0;
        param_12[0xc] = param_4 * 0.5;
        param_12[0xd] = param_4 * 0.5;
        param_12[0xe] = 0.0;
        param_12[0xf] = 0.0;
        param_12[0x10] = 0.0;
        param_12[0x11] = 0.0;
        param_12[0x12] = param_5;
        param_12[0x13] = 0.0;
        param_12[0x14] = 0.0;
        param_12[0x15] = 0.0;
        param_12[0x16] = 0.0;
        param_12[0x17] = param_6;
        *param_13 = 4;
        break;
      case 6:
        if (param_11 == 2) {
          *param_12 = param_1;
          param_12[1] = 0.0;
          param_12[2] = 0.0;
          param_12[3] = 0.0;
          param_12[4] = 0.0;
          param_12[5] = 0.0;
          param_12[6] = 0.0;
          param_12[7] = 0.0;
          param_12[8] = param_2;
          param_12[9] = 0.0;
          param_12[10] = 0.0;
          param_12[0xb] = 0.0;
          param_12[0xc] = 0.0;
          param_12[0xd] = param_3;
          param_12[0xe] = 0.0;
          param_12[0xf] = 0.0;
          param_12[0x10] = 0.0;
          param_12[0x11] = 0.0;
          param_12[0x12] = 0.0;
          param_12[0x13] = 0.0;
          param_12[0x14] = 0.0;
          param_12[0x15] = 0.0;
          param_12[0x16] = 0.0;
          param_12[0x17] = param_4;
          param_12[0x18] = 0.0;
          param_12[0x19] = 0.0;
          param_12[0x1a] = 0.0;
          param_12[0x1b] = param_5;
          param_12[0x1c] = 0.0;
          param_12[0x1d] = 0.0;
          param_12[0x1e] = 0.0;
          param_12[0x1f] = 0.0;
          param_12[0x20] = 0.0;
          param_12[0x21] = 0.0;
          param_12[0x22] = param_6;
          param_12[0x23] = 0.0;
          *param_13 = 6;
        }
        else {
          *param_12 = param_1;
          param_12[1] = 0.0;
          param_12[2] = 0.0;
          param_12[3] = 0.0;
          param_12[4] = 0.0;
          param_12[5] = 0.0;
          param_12[6] = 0.0;
          param_12[7] = param_2;
          param_12[8] = 0.0;
          param_12[9] = 0.0;
          param_12[10] = 0.0;
          param_12[0xb] = 0.0;
          param_12[0xc] = 0.0;
          param_12[0xd] = 0.0;
          param_12[0xe] = param_3;
          param_12[0xf] = 0.0;
          param_12[0x10] = 0.0;
          param_12[0x11] = 0.0;
          param_12[0x12] = 0.0;
          param_12[0x13] = 0.0;
          param_12[0x14] = 0.0;
          param_12[0x15] = param_4;
          param_12[0x16] = 0.0;
          param_12[0x17] = 0.0;
          param_12[0x18] = 0.0;
          param_12[0x19] = 0.0;
          param_12[0x1a] = 0.0;
          param_12[0x1b] = 0.0;
          param_12[0x1c] = param_5;
          param_12[0x1d] = 0.0;
          param_12[0x1e] = 0.0;
          param_12[0x1f] = 0.0;
          param_12[0x20] = 0.0;
          param_12[0x21] = 0.0;
          param_12[0x22] = 0.0;
          param_12[0x23] = param_6;
          *param_13 = 6;
        }
        break;
      case 8:
        uStack_1f8 = (uint64_t)(uint)param_6 << 0x20;
        uStack_1f0 = (uint64_t)(uint)(param_8 * 0.5) << 0x20;
        *(uint64_t *)param_12 = (uint64_t)(uint)param_1;
        param_12[2] = 0.0;
        param_12[3] = 0.0;
        param_12[4] = 0.0;
        param_12[5] = 0.0;
        *(uint64_t *)(param_12 + 6) = (uint64_t)(uint)(param_7 * 0.5);
        *(uint64_t *)(param_12 + 8) = (uint64_t)(uint)param_2 << 0x20;
        param_12[10] = 0.0;
        param_12[0xb] = 0.0;
        param_12[0xc] = 0.0;
        param_12[0xd] = 0.0;
        *(uint64_t *)(param_12 + 0xe) = (uint64_t)(uint)(param_8 * 0.5) << 0x20;
        param_12[0x10] = 0.0;
        param_12[0x11] = 0.0;
        *(uint64_t *)(param_12 + 0x12) = (uint64_t)(uint)param_3;
        param_12[0x14] = 0.0;
        param_12[0x15] = 0.0;
        param_12[0x16] = 0.0;
        param_12[0x17] = 0.0;
        param_12[0x18] = 0.0;
        param_12[0x19] = 0.0;
        *(uint64_t *)(param_12 + 0x1a) = (uint64_t)(uint)param_4 << 0x20;
        param_12[0x1c] = 0.0;
        param_12[0x1d] = 0.0;
        param_12[0x1e] = 0.0;
        param_12[0x1f] = 0.0;
        param_12[0x20] = 0.0;
        param_12[0x21] = 0.0;
        param_12[0x22] = 0.0;
        param_12[0x23] = 0.0;
        *(uint64_t *)(param_12 + 0x24) = (uint64_t)(uint)param_5;
        *(uint64_t *)(param_12 + 0x26) = (uint64_t)(uint)(param_7 * 0.5);
        param_12[0x28] = 0.0;
        param_12[0x29] = 0.0;
        param_12[0x2a] = 0.0;
        param_12[0x2b] = 0.0;
        *(uint64_t *)(param_12 + 0x2c) = uStack_1f8;
        *(uint64_t *)(param_12 + 0x2e) = uStack_1f0;
        *param_13 = 8;
        break;
      case 0xc:
        lVar8 = 2;
        afStack_2a8[1] = 0.0;
        afStack_2a8[2] = 0.0;
        afStack_2a8[8] = 0.0;
        afStack_2a8[9] = 0.0;
        afStack_2a8[10] = 0.0;
        afStack_2a8[0xb] = 0.0;
        afStack_2a8[0x14] = 0.0;
        afStack_2a8[0x15] = 0.0;
        afStack_2a8[0x16] = 0.0;
        afStack_2a8[0x17] = 0.0;
        afStack_2a8[0x1c] = 0.0;
        afStack_2a8[0x1d] = 0.0;
        afStack_2a8[0x1e] = 0.0;
        afStack_2a8[0x1f] = 0.0;
        afStack_2a8[0x20] = 0.0;
        afStack_2a8[0x21] = 0.0;
        afStack_2a8[0x22] = 0.0;
        afStack_2a8[0x23] = 0.0;
        afStack_2a8[0x28] = 0.0;
        afStack_2a8[0x29] = 0.0;
        afStack_2a8[0x2a] = 0.0;
        afStack_2a8[0x2b] = 0.0;
        uStack_1f8 = 0;
        uStack_1f0 = 0;
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        fStack_1d8 = param_5;
        uStack_1b8 = 0;
        lStack_1b0 = 0;
        uStack_198 = 0;
        uStack_190 = 0;
        afStack_2a8[0] = param_1;
        afStack_2a8[6] = param_7 * 0.5;
        afStack_2a8[0xd] = param_2;
        afStack_2a8[0x13] = param_8 * 0.5;
        afStack_2a8[0x1a] = param_3;
        afStack_2a8[0x27] = param_4;
        fStack_1d0 = param_7 * 0.5;
        afStack_2a8[3] = 0.0;
        afStack_2a8[4] = 0.0;
        afStack_2a8[5] = 0.0;
        afStack_2a8[7] = 0.0;
        afStack_2a8[0xc] = 0.0;
        afStack_2a8[0xe] = 0.0;
        afStack_2a8[0xf] = 0.0;
        afStack_2a8[0x10] = 0.0;
        afStack_2a8[0x11] = 0.0;
        afStack_2a8[0x12] = 0.0;
        afStack_2a8[0x18] = 0.0;
        afStack_2a8[0x19] = 0.0;
        afStack_2a8[0x1b] = 0.0;
        afStack_2a8[0x24] = 0.0;
        afStack_2a8[0x25] = 0.0;
        afStack_2a8[0x26] = 0.0;
        uStack_1d4 = 0;
        uStack_1cc = 0;
        lStack_1a8 = (uint64_t)(uint)param_6 << 0x20;
        lStack_1a0 = (uint64_t)(uint)(param_8 * 0.5) << 0x20;
        pfVar6 = afStack_2a8;
        do {
          pfVar7 = pfVar6;
          pfVar5 = param_12;
          uVar1 = *(uint64_t *)(pfVar7 + 2);
          uVar2 = *(uint64_t *)(pfVar7 + 4);
          uVar3 = *(uint64_t *)(pfVar7 + 6);
          *(uint64_t *)pfVar5 = *(uint64_t *)pfVar7;
          *(uint64_t *)(pfVar5 + 2) = uVar1;
          uVar1 = *(uint64_t *)(pfVar7 + 8);
          uVar4 = *(uint64_t *)(pfVar7 + 10);
          *(uint64_t *)(pfVar5 + 4) = uVar2;
          *(uint64_t *)(pfVar5 + 6) = uVar3;
          uVar2 = *(uint64_t *)(pfVar7 + 0xc);
          uVar3 = *(uint64_t *)(pfVar7 + 0xe);
          *(uint64_t *)(pfVar5 + 8) = uVar1;
          *(uint64_t *)(pfVar5 + 10) = uVar4;
          uVar1 = *(uint64_t *)(pfVar7 + 0x10);
          uVar4 = *(uint64_t *)(pfVar7 + 0x12);
          *(uint64_t *)(pfVar5 + 0xc) = uVar2;
          *(uint64_t *)(pfVar5 + 0xe) = uVar3;
          uVar2 = *(uint64_t *)(pfVar7 + 0x14);
          uVar3 = *(uint64_t *)(pfVar7 + 0x16);
          *(uint64_t *)(pfVar5 + 0x10) = uVar1;
          *(uint64_t *)(pfVar5 + 0x12) = uVar4;
          uVar1 = *(uint64_t *)(pfVar7 + 0x18);
          uVar4 = *(uint64_t *)(pfVar7 + 0x1a);
          *(uint64_t *)(pfVar5 + 0x14) = uVar2;
          *(uint64_t *)(pfVar5 + 0x16) = uVar3;
          uVar2 = *(uint64_t *)(pfVar7 + 0x1c);
          uVar3 = *(uint64_t *)(pfVar7 + 0x1e);
          *(uint64_t *)(pfVar5 + 0x18) = uVar1;
          *(uint64_t *)(pfVar5 + 0x1a) = uVar4;
          *(uint64_t *)(pfVar5 + 0x1c) = uVar2;
          *(uint64_t *)(pfVar5 + 0x1e) = uVar3;
          lVar8 = lVar8 + -1;
          param_12 = pfVar5 + 0x20;
          pfVar6 = pfVar7 + 0x20;
        } while (lVar8 != 0);
        uVar1 = *(uint64_t *)(pfVar7 + 0x22);
        uVar2 = *(uint64_t *)(pfVar7 + 0x24);
        uVar3 = *(uint64_t *)(pfVar7 + 0x26);
        *(uint64_t *)(pfVar5 + 0x20) = *(uint64_t *)(pfVar7 + 0x20);
        *(uint64_t *)(pfVar5 + 0x22) = uVar1;
        *(uint64_t *)(pfVar5 + 0x24) = uVar2;
        *(uint64_t *)(pfVar5 + 0x26) = uVar3;
        *param_13 = 0xc;
      }
      break;
    case 7:
      if (param_11 == 3) {
        param_10 = param_10 * 8;
        goto code_r0x00018075c539;
      }
      if ((param_11 == 4) || ((8 < param_10 && (param_10 != 0xc)))) {
                    // WARNING: Subroutine does not return
        memset(param_12,0,(int64_t)(param_10 * 8) << 2);
      }
      switch(param_10) {
      case 1:
        *param_12 = param_1;
        param_12[1] = param_2;
        param_12[2] = param_3;
        param_12[3] = param_4;
        param_12[4] = param_5;
        param_12[5] = param_6;
        param_12[6] = param_7;
        param_12[7] = param_8;
        *param_13 = 1;
        break;
      case 2:
        *param_12 = param_1;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        param_12[3] = param_2;
        param_12[4] = param_3 * 0.5;
        param_12[5] = param_3 * 0.5;
        param_12[6] = param_4 * 0.5;
        param_12[7] = param_4 * 0.5;
        param_12[8] = param_5;
        param_12[9] = 0.0;
        param_12[10] = 0.0;
        param_12[0xb] = param_6;
        param_12[0xc] = param_7;
        param_12[0xd] = 0.0;
        param_12[0xe] = 0.0;
        param_12[0xf] = param_8;
        *param_13 = 2;
        break;
      case 4:
        *param_12 = param_1;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        param_12[3] = 0.0;
        param_12[4] = 0.0;
        param_12[5] = param_2;
        param_12[6] = 0.0;
        param_12[7] = 0.0;
        param_12[8] = param_3 * 0.5;
        param_12[9] = param_3 * 0.5;
        param_12[10] = 0.0;
        param_12[0xb] = 0.0;
        param_12[0xc] = param_4 * 0.5;
        param_12[0xd] = param_4 * 0.5;
        param_12[0xe] = 0.0;
        param_12[0xf] = 0.0;
        param_12[0x10] = 0.0;
        param_12[0x11] = 0.0;
        param_12[0x12] = param_5 * 0.5;
        param_12[0x13] = 0.0;
        param_12[0x14] = 0.0;
        param_12[0x15] = 0.0;
        param_12[0x16] = 0.0;
        param_12[0x17] = param_6 * 0.5;
        param_12[0x18] = 0.0;
        param_12[0x19] = 0.0;
        param_12[0x1a] = param_7 * 0.5;
        param_12[0x1b] = 0.0;
        param_12[0x1c] = 0.0;
        param_12[0x1d] = 0.0;
        param_12[0x1e] = 0.0;
        param_12[0x1f] = param_8 * 0.5;
        *param_13 = 4;
        break;
      case 6:
        if (param_11 == 2) {
          afStack_2a8[7] = 0.0;
          afStack_2a8[0x1c] = 0.0;
          afStack_2a8[0x27] = param_7 * 0.5;
          afStack_2a8[0x1b] = param_5;
          afStack_2a8[0x22] = param_6;
          afStack_2a8[0xe] = 0.0;
          afStack_2a8[0x15] = 0.0;
          afStack_2a8[0x23] = 0.0;
          afStack_2a8[0x28] = 0.0;
          afStack_2a8[0x2b] = 0.0;
          uStack_1f8 = (uint64_t)(uint)(param_8 * 0.5);
          uStack_1f0 = (uint64_t)(uint)(param_8 * 0.5);
          afStack_2a8[8] = param_2;
          afStack_2a8[0xd] = param_3;
          afStack_2a8[0x17] = param_4;
        }
        else {
          afStack_2a8[8] = 0.0;
          afStack_2a8[0x1b] = 0.0;
          afStack_2a8[0x23] = param_6;
          afStack_2a8[0x2b] = param_8 * 0.5;
          afStack_2a8[0x1c] = param_5;
          afStack_2a8[0x28] = param_7 * 0.5;
          afStack_2a8[0xd] = 0.0;
          afStack_2a8[0x17] = 0.0;
          afStack_2a8[0x22] = 0.0;
          afStack_2a8[0x27] = 0.0;
          uStack_1f8 = 0;
          uStack_1f0 = (uint64_t)(uint)afStack_2a8[0x2b] << 0x20;
          afStack_2a8[7] = param_2;
          afStack_2a8[0xe] = param_3;
          afStack_2a8[0x15] = param_4;
        }
        afStack_2a8[0x24] = param_7 * 0.5;
        *(uint64_t *)param_12 = (uint64_t)(uint)param_1;
        param_12[2] = 0.0;
        param_12[3] = 0.0;
        param_12[4] = 0.0;
        param_12[5] = 0.0;
        *(uint64_t *)(param_12 + 6) = (uint64_t)(uint)afStack_2a8[7] << 0x20;
        *(uint64_t *)(param_12 + 8) = (uint64_t)(uint)afStack_2a8[8];
        param_12[10] = 0.0;
        param_12[0xb] = 0.0;
        *(uint64_t *)(param_12 + 0xc) = (uint64_t)(uint)afStack_2a8[0xd] << 0x20;
        *(uint64_t *)(param_12 + 0xe) = (uint64_t)(uint)afStack_2a8[0xe];
        param_12[0x10] = 0.0;
        param_12[0x11] = 0.0;
        param_12[0x12] = 0.0;
        param_12[0x13] = 0.0;
        *(uint64_t *)(param_12 + 0x14) = (uint64_t)(uint)afStack_2a8[0x15] << 0x20;
        *(uint64_t *)(param_12 + 0x16) = (uint64_t)(uint)afStack_2a8[0x17] << 0x20;
        param_12[0x18] = 0.0;
        param_12[0x19] = 0.0;
        *(uint64_t *)(param_12 + 0x1a) = (uint64_t)(uint)afStack_2a8[0x1b] << 0x20;
        *(uint64_t *)(param_12 + 0x1c) = (uint64_t)(uint)afStack_2a8[0x1c];
        param_12[0x1e] = 0.0;
        param_12[0x1f] = 0.0;
        param_12[0x20] = 0.0;
        param_12[0x21] = 0.0;
        *(uint64_t *)(param_12 + 0x22) = CONCAT44(afStack_2a8[0x23],afStack_2a8[0x22]);
        *(uint64_t *)(param_12 + 0x24) = (uint64_t)(uint)afStack_2a8[0x24];
        *(uint64_t *)(param_12 + 0x26) = (uint64_t)(uint)afStack_2a8[0x27] << 0x20;
        *(uint64_t *)(param_12 + 0x28) = (uint64_t)(uint)afStack_2a8[0x28];
        *(uint64_t *)(param_12 + 0x2a) = (uint64_t)(uint)afStack_2a8[0x2b] << 0x20;
        *(uint64_t *)(param_12 + 0x2c) = uStack_1f8;
        *(uint64_t *)(param_12 + 0x2e) = uStack_1f0;
        *param_13 = 6;
        break;
      case 8:
        afStack_2a8[0] = param_1;
        afStack_2a8[4] = 0.0;
        afStack_2a8[5] = 0.0;
        afStack_2a8[6] = 0.0;
        afStack_2a8[7] = 0.0;
        afStack_2a8[0xc] = 0.0;
        afStack_2a8[0xd] = 0.0;
        afStack_2a8[0xe] = 0.0;
        afStack_2a8[0xf] = 0.0;
        lVar8 = 2;
        afStack_2a8[0x14] = 0.0;
        afStack_2a8[0x15] = 0.0;
        afStack_2a8[0x16] = 0.0;
        afStack_2a8[0x17] = 0.0;
        afStack_2a8[0x1c] = 0.0;
        afStack_2a8[0x1d] = 0.0;
        afStack_2a8[0x1e] = 0.0;
        afStack_2a8[0x1f] = 0.0;
        afStack_2a8[0x24] = param_5;
        afStack_2a8[0x28] = 0.0;
        afStack_2a8[0x29] = 0.0;
        afStack_2a8[0x2a] = 0.0;
        afStack_2a8[0x2b] = 0.0;
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        afStack_2a8[0x20] = 0.0;
        afStack_2a8[0x21] = 0.0;
        afStack_2a8[0x22] = 0.0;
        afStack_2a8[0x23] = 0.0;
        fStack_1d0 = param_7;
        afStack_2a8[9] = param_2;
        afStack_2a8[0x12] = param_3;
        afStack_2a8[0x1b] = param_4;
        afStack_2a8[1] = 0.0;
        afStack_2a8[2] = 0.0;
        afStack_2a8[3] = 0.0;
        afStack_2a8[8] = 0.0;
        afStack_2a8[10] = 0.0;
        afStack_2a8[0xb] = 0.0;
        afStack_2a8[0x10] = 0.0;
        afStack_2a8[0x11] = 0.0;
        afStack_2a8[0x13] = 0.0;
        afStack_2a8[0x18] = 0.0;
        afStack_2a8[0x19] = 0.0;
        afStack_2a8[0x1a] = 0.0;
        afStack_2a8[0x25] = 0.0;
        afStack_2a8[0x26] = 0.0;
        afStack_2a8[0x27] = 0.0;
        uStack_1f8 = (uint64_t)(uint)param_6 << 0x20;
        uStack_1f0 = 0;
        fStack_1d8 = 0.0;
        uStack_1d4 = 0;
        uStack_1cc = 0;
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        lStack_1b0 = (uint64_t)(uint)param_8 << 0x20;
        pfVar6 = afStack_2a8;
        do {
          uVar1 = *(uint64_t *)(pfVar6 + 2);
          uVar2 = *(uint64_t *)(pfVar6 + 4);
          uVar3 = *(uint64_t *)(pfVar6 + 6);
          *(uint64_t *)param_12 = *(uint64_t *)pfVar6;
          *(uint64_t *)(param_12 + 2) = uVar1;
          uVar1 = *(uint64_t *)(pfVar6 + 8);
          uVar4 = *(uint64_t *)(pfVar6 + 10);
          *(uint64_t *)(param_12 + 4) = uVar2;
          *(uint64_t *)(param_12 + 6) = uVar3;
          uVar2 = *(uint64_t *)(pfVar6 + 0xc);
          uVar3 = *(uint64_t *)(pfVar6 + 0xe);
          *(uint64_t *)(param_12 + 8) = uVar1;
          *(uint64_t *)(param_12 + 10) = uVar4;
          uVar1 = *(uint64_t *)(pfVar6 + 0x10);
          uVar4 = *(uint64_t *)(pfVar6 + 0x12);
          *(uint64_t *)(param_12 + 0xc) = uVar2;
          *(uint64_t *)(param_12 + 0xe) = uVar3;
          uVar2 = *(uint64_t *)(pfVar6 + 0x14);
          uVar3 = *(uint64_t *)(pfVar6 + 0x16);
          *(uint64_t *)(param_12 + 0x10) = uVar1;
          *(uint64_t *)(param_12 + 0x12) = uVar4;
          uVar1 = *(uint64_t *)(pfVar6 + 0x18);
          uVar4 = *(uint64_t *)(pfVar6 + 0x1a);
          *(uint64_t *)(param_12 + 0x14) = uVar2;
          *(uint64_t *)(param_12 + 0x16) = uVar3;
          uVar2 = *(uint64_t *)(pfVar6 + 0x1c);
          uVar3 = *(uint64_t *)(pfVar6 + 0x1e);
          *(uint64_t *)(param_12 + 0x18) = uVar1;
          *(uint64_t *)(param_12 + 0x1a) = uVar4;
          *(uint64_t *)(param_12 + 0x1c) = uVar2;
          *(uint64_t *)(param_12 + 0x1e) = uVar3;
          lVar8 = lVar8 + -1;
          param_12 = param_12 + 0x20;
          pfVar6 = pfVar6 + 0x20;
        } while (lVar8 != 0);
        *param_13 = 8;
        break;
      case 0xc:
        afStack_2a8[0] = param_1;
        afStack_2a8[4] = 0.0;
        afStack_2a8[5] = 0.0;
        afStack_2a8[6] = 0.0;
        afStack_2a8[7] = 0.0;
        afStack_2a8[0x10] = 0.0;
        afStack_2a8[0x11] = 0.0;
        afStack_2a8[0x12] = 0.0;
        afStack_2a8[0x13] = 0.0;
        lVar8 = 3;
        afStack_2a8[0x1c] = 0.0;
        afStack_2a8[0x1d] = 0.0;
        afStack_2a8[0x1e] = 0.0;
        afStack_2a8[0x1f] = 0.0;
        afStack_2a8[0x28] = 0.0;
        afStack_2a8[0x29] = 0.0;
        afStack_2a8[0x2a] = 0.0;
        afStack_2a8[0x2b] = 0.0;
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        uStack_198 = 0;
        uStack_190 = 0;
        afStack_2a8[8] = 0.0;
        afStack_2a8[9] = 0.0;
        afStack_2a8[10] = 0.0;
        afStack_2a8[0xb] = 0.0;
        afStack_2a8[0x14] = 0.0;
        afStack_2a8[0x15] = 0.0;
        afStack_2a8[0x16] = 0.0;
        afStack_2a8[0x17] = 0.0;
        afStack_2a8[0x20] = 0.0;
        afStack_2a8[0x21] = 0.0;
        afStack_2a8[0x22] = 0.0;
        afStack_2a8[0x23] = 0.0;
        uStack_1f8 = 0;
        uStack_1f0 = 0;
        uStack_158 = 0;
        uStack_150 = 0;
        fStack_1d8 = param_5;
        afStack_2a8[0xd] = param_2;
        afStack_2a8[0x1a] = param_3;
        afStack_2a8[0x27] = param_4;
        afStack_2a8[1] = 0.0;
        afStack_2a8[2] = 0.0;
        afStack_2a8[3] = 0.0;
        afStack_2a8[0xc] = 0.0;
        afStack_2a8[0xe] = 0.0;
        afStack_2a8[0xf] = 0.0;
        afStack_2a8[0x18] = 0.0;
        afStack_2a8[0x19] = 0.0;
        afStack_2a8[0x1b] = 0.0;
        afStack_2a8[0x24] = 0.0;
        afStack_2a8[0x25] = 0.0;
        afStack_2a8[0x26] = 0.0;
        uStack_1d4 = 0;
        fStack_1d0 = 0.0;
        uStack_1cc = 0;
        uStack_1b8 = 0;
        lStack_1b0 = 0;
        lStack_1a8 = (uint64_t)(uint)param_6 << 0x20;
        lStack_1a0 = 0;
        uStack_188 = 0;
        uStack_180 = 0;
        uStack_178 = 0;
        uStack_170 = (uint64_t)(uint)param_7;
        uStack_168 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        lStack_140 = (uint64_t)(uint)param_8 << 0x20;
        uStack_138 = 0;
        uStack_130 = 0;
        pfVar6 = afStack_2a8;
        do {
          uVar1 = *(uint64_t *)(pfVar6 + 2);
          uVar2 = *(uint64_t *)(pfVar6 + 4);
          uVar3 = *(uint64_t *)(pfVar6 + 6);
          *(uint64_t *)param_12 = *(uint64_t *)pfVar6;
          *(uint64_t *)(param_12 + 2) = uVar1;
          uVar1 = *(uint64_t *)(pfVar6 + 8);
          uVar4 = *(uint64_t *)(pfVar6 + 10);
          *(uint64_t *)(param_12 + 4) = uVar2;
          *(uint64_t *)(param_12 + 6) = uVar3;
          uVar2 = *(uint64_t *)(pfVar6 + 0xc);
          uVar3 = *(uint64_t *)(pfVar6 + 0xe);
          *(uint64_t *)(param_12 + 8) = uVar1;
          *(uint64_t *)(param_12 + 10) = uVar4;
          uVar1 = *(uint64_t *)(pfVar6 + 0x10);
          uVar4 = *(uint64_t *)(pfVar6 + 0x12);
          *(uint64_t *)(param_12 + 0xc) = uVar2;
          *(uint64_t *)(param_12 + 0xe) = uVar3;
          uVar2 = *(uint64_t *)(pfVar6 + 0x14);
          uVar3 = *(uint64_t *)(pfVar6 + 0x16);
          *(uint64_t *)(param_12 + 0x10) = uVar1;
          *(uint64_t *)(param_12 + 0x12) = uVar4;
          uVar1 = *(uint64_t *)(pfVar6 + 0x18);
          uVar4 = *(uint64_t *)(pfVar6 + 0x1a);
          *(uint64_t *)(param_12 + 0x14) = uVar2;
          *(uint64_t *)(param_12 + 0x16) = uVar3;
          uVar2 = *(uint64_t *)(pfVar6 + 0x1c);
          uVar3 = *(uint64_t *)(pfVar6 + 0x1e);
          *(uint64_t *)(param_12 + 0x18) = uVar1;
          *(uint64_t *)(param_12 + 0x1a) = uVar4;
          *(uint64_t *)(param_12 + 0x1c) = uVar2;
          *(uint64_t *)(param_12 + 0x1e) = uVar3;
          lVar8 = lVar8 + -1;
          param_12 = param_12 + 0x20;
          pfVar6 = pfVar6 + 0x20;
        } while (lVar8 != 0);
        *param_13 = 0xc;
      }
      break;
    case 8:
      if (param_11 == 3) {
        param_10 = param_10 * 0xc;
        goto code_r0x00018075c539;
      }
      if ((param_11 == 4) || ((8 < param_10 && (param_10 != 0xc)))) {
                    // WARNING: Subroutine does not return
        memset(param_12,0,(int64_t)(param_10 * 0xc) << 2);
      }
      switch(param_10) {
      case 1:
        *param_12 = param_1;
        param_12[1] = param_2;
        param_12[2] = param_3;
        param_12[3] = param_4;
        param_12[4] = param_5;
        param_12[5] = param_6;
        param_12[6] = param_7;
        param_12[7] = param_8;
        param_12[8] = 0.0;
        param_12[9] = 0.0;
        param_12[10] = 0.0;
        param_12[0xb] = 0.0;
        *param_13 = 1;
        break;
      case 2:
        *param_12 = param_1;
        param_12[1] = 0.0;
        param_12[2] = 0.0;
        param_12[3] = param_2;
        param_12[4] = param_3 * 0.5;
        param_12[5] = param_3 * 0.5;
        param_12[6] = param_4 * 0.5;
        param_12[7] = param_4 * 0.5;
        param_12[8] = param_5;
        param_12[9] = 0.0;
        param_12[10] = 0.0;
        param_12[0xb] = param_6;
        param_12[0xc] = param_7;
        param_12[0xd] = 0.0;
        param_12[0xe] = 0.0;
        param_12[0xf] = param_8;
        param_12[0x10] = 0.0;
        param_12[0x11] = 0.0;
        param_12[0x12] = 0.0;
        param_12[0x13] = 0.0;
        param_12[0x14] = 0.0;
        param_12[0x15] = 0.0;
        param_12[0x16] = 0.0;
        param_12[0x17] = 0.0;
        *param_13 = 2;
        break;
      case 4:
        *(uint64_t *)param_12 = (uint64_t)(uint)param_1;
        param_12[2] = 0.0;
        param_12[3] = 0.0;
        *(uint64_t *)(param_12 + 4) = (uint64_t)(uint)param_2 << 0x20;
        param_12[6] = 0.0;
        param_12[7] = 0.0;
        *(uint64_t *)(param_12 + 8) = CONCAT44(param_3 * 0.5,param_3 * 0.5);
        param_12[10] = 0.0;
        param_12[0xb] = 0.0;
        *(uint64_t *)(param_12 + 0xc) = CONCAT44(param_4 * 0.5,param_4 * 0.5);
        param_12[0xe] = 0.0;
        param_12[0xf] = 0.0;
        param_12[0x10] = 0.0;
        param_12[0x11] = 0.0;
        *(uint64_t *)(param_12 + 0x12) = (uint64_t)(uint)(param_5 * 0.5);
        param_12[0x14] = 0.0;
        param_12[0x15] = 0.0;
        *(uint64_t *)(param_12 + 0x16) = (uint64_t)(uint)(param_6 * 0.5) << 0x20;
        param_12[0x18] = 0.0;
        param_12[0x19] = 0.0;
        *(uint64_t *)(param_12 + 0x1a) = (uint64_t)(uint)(param_7 * 0.5);
        param_12[0x1c] = 0.0;
        param_12[0x1d] = 0.0;
        *(uint64_t *)(param_12 + 0x1e) = (uint64_t)(uint)(param_8 * 0.5) << 0x20;
        param_12[0x20] = 0.0;
        param_12[0x21] = 0.0;
        param_12[0x22] = 0.0;
        param_12[0x23] = 0.0;
        param_12[0x24] = 0.0;
        param_12[0x25] = 0.0;
        param_12[0x26] = 0.0;
        param_12[0x27] = 0.0;
        param_12[0x28] = 0.0;
        param_12[0x29] = 0.0;
        param_12[0x2a] = 0.0;
        param_12[0x2b] = 0.0;
        param_12[0x2c] = 0.0;
        param_12[0x2d] = 0.0;
        param_12[0x2e] = 0.0;
        param_12[0x2f] = 0.0;
        *param_13 = 4;
        break;
      case 6:
        afStack_2a8[0] = param_1;
        afStack_2a8[0x10] = 0.0;
        afStack_2a8[0x11] = 0.0;
        afStack_2a8[0x12] = 0.0;
        afStack_2a8[0x13] = 0.0;
        afStack_2a8[1] = 0.0;
        afStack_2a8[2] = 0.0;
        afStack_2a8[0x25] = 0.0;
        afStack_2a8[0x26] = 0.0;
        if (param_11 == 2) {
          afStack_2a8[4] = 0.0;
          afStack_2a8[5] = 0.0;
          afStack_2a8[6] = 0.0;
          afStack_2a8[7] = 0.0;
          lVar8 = 2;
          afStack_2a8[0x1c] = 0.0;
          afStack_2a8[0x1d] = 0.0;
          afStack_2a8[0x1e] = 0.0;
          afStack_2a8[0x1f] = 0.0;
          afStack_2a8[3] = 0.0;
          afStack_2a8[0x1b] = param_5;
          afStack_2a8[0x24] = param_7 * 0.5;
          afStack_2a8[0x27] = param_7 * 0.5;
          afStack_2a8[9] = 0.0;
          afStack_2a8[10] = 0.0;
          afStack_2a8[0x22] = param_6;
          afStack_2a8[8] = param_2;
          fStack_1d8 = 0.0;
          uStack_1d4 = 0;
          fStack_1d0 = 0.0;
          uStack_1cc = 0;
          uStack_1b8 = 0;
          lStack_1b0 = 0;
          uStack_198 = 0;
          uStack_190 = 0;
          afStack_2a8[0xd] = param_3;
          afStack_2a8[0x17] = param_4;
          afStack_2a8[0xb] = 0.0;
          afStack_2a8[0xc] = 0.0;
          afStack_2a8[0xe] = 0.0;
          afStack_2a8[0xf] = 0.0;
          afStack_2a8[0x14] = 0.0;
          afStack_2a8[0x15] = 0.0;
          afStack_2a8[0x16] = 0.0;
          afStack_2a8[0x18] = 0.0;
          afStack_2a8[0x19] = 0.0;
          afStack_2a8[0x1a] = 0.0;
          afStack_2a8[0x20] = 0.0;
          afStack_2a8[0x21] = 0.0;
          afStack_2a8[0x23] = 0.0;
          afStack_2a8[0x28] = 0.0;
          afStack_2a8[0x29] = 0.0;
          afStack_2a8[0x2a] = 0.0;
          afStack_2a8[0x2b] = 0.0;
          uStack_1f8 = (uint64_t)(uint)(param_8 * 0.5);
          uStack_1f0 = (uint64_t)(uint)(param_8 * 0.5);
          uStack_1e8 = 0;
          uStack_1e0 = 0;
          uStack_1c8 = 0;
          uStack_1c0 = 0;
          lStack_1a8 = 0;
          lStack_1a0 = 0;
          pfVar6 = afStack_2a8;
          do {
            pfVar5 = param_12 + 0x20;
            uVar1 = *(uint64_t *)(pfVar6 + 2);
            uVar2 = *(uint64_t *)(pfVar6 + 4);
            uVar3 = *(uint64_t *)(pfVar6 + 6);
            pfVar7 = pfVar6 + 0x20;
            *(uint64_t *)param_12 = *(uint64_t *)pfVar6;
            *(uint64_t *)(param_12 + 2) = uVar1;
            uVar1 = *(uint64_t *)(pfVar6 + 8);
            uVar4 = *(uint64_t *)(pfVar6 + 10);
            *(uint64_t *)(param_12 + 4) = uVar2;
            *(uint64_t *)(param_12 + 6) = uVar3;
            uVar2 = *(uint64_t *)(pfVar6 + 0xc);
            uVar3 = *(uint64_t *)(pfVar6 + 0xe);
            *(uint64_t *)(param_12 + 8) = uVar1;
            *(uint64_t *)(param_12 + 10) = uVar4;
            uVar1 = *(uint64_t *)(pfVar6 + 0x10);
            uVar4 = *(uint64_t *)(pfVar6 + 0x12);
            *(uint64_t *)(param_12 + 0xc) = uVar2;
            *(uint64_t *)(param_12 + 0xe) = uVar3;
            uVar2 = *(uint64_t *)(pfVar6 + 0x14);
            uVar3 = *(uint64_t *)(pfVar6 + 0x16);
            *(uint64_t *)(param_12 + 0x10) = uVar1;
            *(uint64_t *)(param_12 + 0x12) = uVar4;
            uVar1 = *(uint64_t *)(pfVar6 + 0x18);
            uVar4 = *(uint64_t *)(pfVar6 + 0x1a);
            *(uint64_t *)(param_12 + 0x14) = uVar2;
            *(uint64_t *)(param_12 + 0x16) = uVar3;
            uVar2 = *(uint64_t *)(pfVar6 + 0x1c);
            uVar3 = *(uint64_t *)(pfVar6 + 0x1e);
            *(uint64_t *)(param_12 + 0x18) = uVar1;
            *(uint64_t *)(param_12 + 0x1a) = uVar4;
            *(uint64_t *)(param_12 + 0x1c) = uVar2;
            *(uint64_t *)(param_12 + 0x1e) = uVar3;
            lVar8 = lVar8 + -1;
            param_12 = pfVar5;
            pfVar6 = pfVar7;
          } while (lVar8 != 0);
        }
        else {
          lVar8 = 2;
          afStack_2a8[8] = 0.0;
          afStack_2a8[9] = 0.0;
          afStack_2a8[10] = 0.0;
          afStack_2a8[0xb] = 0.0;
          afStack_2a8[0x18] = 0.0;
          afStack_2a8[0x19] = 0.0;
          afStack_2a8[0x1a] = 0.0;
          afStack_2a8[0x1b] = 0.0;
          afStack_2a8[0x23] = param_6;
          afStack_2a8[3] = 0.0;
          afStack_2a8[4] = 0.0;
          afStack_2a8[0x1c] = param_5;
          afStack_2a8[5] = 0.0;
          afStack_2a8[6] = 0.0;
          afStack_2a8[0x2b] = param_8 * 0.5;
          afStack_2a8[0x24] = param_7 * 0.5;
          afStack_2a8[0x28] = param_7 * 0.5;
          uStack_1e8 = 0;
          uStack_1e0 = 0;
          uStack_1c8 = 0;
          uStack_1c0 = 0;
          lStack_1a8 = 0;
          lStack_1a0 = 0;
          afStack_2a8[7] = param_2;
          afStack_2a8[0xe] = param_3;
          afStack_2a8[0x15] = param_4;
          afStack_2a8[0xc] = 0.0;
          afStack_2a8[0xd] = 0.0;
          afStack_2a8[0xf] = 0.0;
          afStack_2a8[0x14] = 0.0;
          afStack_2a8[0x16] = 0.0;
          afStack_2a8[0x17] = 0.0;
          afStack_2a8[0x1d] = 0.0;
          afStack_2a8[0x1e] = 0.0;
          afStack_2a8[0x1f] = 0.0;
          afStack_2a8[0x20] = 0.0;
          afStack_2a8[0x21] = 0.0;
          afStack_2a8[0x22] = 0.0;
          afStack_2a8[0x27] = 0.0;
          afStack_2a8[0x29] = 0.0;
          afStack_2a8[0x2a] = 0.0;
          uStack_1f8 = 0;
          uStack_1f0 = (uint64_t)(uint)(param_8 * 0.5) << 0x20;
          fStack_1d8 = 0.0;
          uStack_1d4 = 0;
          fStack_1d0 = 0.0;
          uStack_1cc = 0;
          uStack_1b8 = 0;
          lStack_1b0 = 0;
          uStack_198 = 0;
          uStack_190 = 0;
          pfVar6 = afStack_2a8;
          do {
            pfVar5 = param_12 + 0x20;
            uVar1 = *(uint64_t *)(pfVar6 + 2);
            uVar2 = *(uint64_t *)(pfVar6 + 4);
            uVar3 = *(uint64_t *)(pfVar6 + 6);
            pfVar7 = pfVar6 + 0x20;
            *(uint64_t *)param_12 = *(uint64_t *)pfVar6;
            *(uint64_t *)(param_12 + 2) = uVar1;
            uVar1 = *(uint64_t *)(pfVar6 + 8);
            uVar4 = *(uint64_t *)(pfVar6 + 10);
            *(uint64_t *)(param_12 + 4) = uVar2;
            *(uint64_t *)(param_12 + 6) = uVar3;
            uVar2 = *(uint64_t *)(pfVar6 + 0xc);
            uVar3 = *(uint64_t *)(pfVar6 + 0xe);
            *(uint64_t *)(param_12 + 8) = uVar1;
            *(uint64_t *)(param_12 + 10) = uVar4;
            uVar1 = *(uint64_t *)(pfVar6 + 0x10);
            uVar4 = *(uint64_t *)(pfVar6 + 0x12);
            *(uint64_t *)(param_12 + 0xc) = uVar2;
            *(uint64_t *)(param_12 + 0xe) = uVar3;
            uVar2 = *(uint64_t *)(pfVar6 + 0x14);
            uVar3 = *(uint64_t *)(pfVar6 + 0x16);
            *(uint64_t *)(param_12 + 0x10) = uVar1;
            *(uint64_t *)(param_12 + 0x12) = uVar4;
            uVar1 = *(uint64_t *)(pfVar6 + 0x18);
            uVar4 = *(uint64_t *)(pfVar6 + 0x1a);
            *(uint64_t *)(param_12 + 0x14) = uVar2;
            *(uint64_t *)(param_12 + 0x16) = uVar3;
            uVar2 = *(uint64_t *)(pfVar6 + 0x1c);
            uVar3 = *(uint64_t *)(pfVar6 + 0x1e);
            *(uint64_t *)(param_12 + 0x18) = uVar1;
            *(uint64_t *)(param_12 + 0x1a) = uVar4;
            *(uint64_t *)(param_12 + 0x1c) = uVar2;
            *(uint64_t *)(param_12 + 0x1e) = uVar3;
            lVar8 = lVar8 + -1;
            param_12 = pfVar5;
            pfVar6 = pfVar7;
          } while (lVar8 != 0);
        }
        uVar1 = *(uint64_t *)(pfVar7 + 2);
        uVar2 = *(uint64_t *)(pfVar7 + 4);
        uVar3 = *(uint64_t *)(pfVar7 + 6);
        *(uint64_t *)pfVar5 = *(uint64_t *)pfVar7;
        *(uint64_t *)(pfVar5 + 2) = uVar1;
        *(uint64_t *)(pfVar5 + 4) = uVar2;
        *(uint64_t *)(pfVar5 + 6) = uVar3;
        *param_13 = 6;
        break;
      case 8:
        afStack_2a8[0] = param_1;
        afStack_2a8[4] = 0.0;
        afStack_2a8[5] = 0.0;
        afStack_2a8[6] = 0.0;
        afStack_2a8[7] = 0.0;
        afStack_2a8[0xc] = 0.0;
        afStack_2a8[0xd] = 0.0;
        afStack_2a8[0xe] = 0.0;
        afStack_2a8[0xf] = 0.0;
        lVar8 = 3;
        afStack_2a8[0x14] = 0.0;
        afStack_2a8[0x15] = 0.0;
        afStack_2a8[0x16] = 0.0;
        afStack_2a8[0x17] = 0.0;
        afStack_2a8[0x1c] = 0.0;
        afStack_2a8[0x1d] = 0.0;
        afStack_2a8[0x1e] = 0.0;
        afStack_2a8[0x1f] = 0.0;
        afStack_2a8[0x24] = param_5;
        afStack_2a8[0x28] = 0.0;
        afStack_2a8[0x29] = 0.0;
        afStack_2a8[0x2a] = 0.0;
        afStack_2a8[0x2b] = 0.0;
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        fStack_1d0 = param_7;
        afStack_2a8[0x20] = 0.0;
        afStack_2a8[0x21] = 0.0;
        afStack_2a8[0x22] = 0.0;
        afStack_2a8[0x23] = 0.0;
        uStack_198 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_130 = 0;
        afStack_2a8[9] = param_2;
        afStack_2a8[0x12] = param_3;
        afStack_2a8[0x1b] = param_4;
        afStack_2a8[1] = 0.0;
        afStack_2a8[2] = 0.0;
        afStack_2a8[3] = 0.0;
        afStack_2a8[8] = 0.0;
        afStack_2a8[10] = 0.0;
        afStack_2a8[0xb] = 0.0;
        afStack_2a8[0x10] = 0.0;
        afStack_2a8[0x11] = 0.0;
        afStack_2a8[0x13] = 0.0;
        afStack_2a8[0x18] = 0.0;
        afStack_2a8[0x19] = 0.0;
        afStack_2a8[0x1a] = 0.0;
        afStack_2a8[0x25] = 0.0;
        afStack_2a8[0x26] = 0.0;
        afStack_2a8[0x27] = 0.0;
        uStack_1f8 = (uint64_t)(uint)param_6 << 0x20;
        uStack_1f0 = 0;
        fStack_1d8 = 0.0;
        uStack_1d4 = 0;
        uStack_1cc = 0;
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        lStack_1b0 = (uint64_t)(uint)param_8 << 0x20;
        lStack_1a8 = 0;
        lStack_1a0 = 0;
        uStack_188 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        lStack_140 = 0;
        pfVar6 = afStack_2a8;
        do {
          uVar1 = *(uint64_t *)(pfVar6 + 2);
          uVar2 = *(uint64_t *)(pfVar6 + 4);
          uVar3 = *(uint64_t *)(pfVar6 + 6);
          *(uint64_t *)param_12 = *(uint64_t *)pfVar6;
          *(uint64_t *)(param_12 + 2) = uVar1;
          uVar1 = *(uint64_t *)(pfVar6 + 8);
          uVar4 = *(uint64_t *)(pfVar6 + 10);
          *(uint64_t *)(param_12 + 4) = uVar2;
          *(uint64_t *)(param_12 + 6) = uVar3;
          uVar2 = *(uint64_t *)(pfVar6 + 0xc);
          uVar3 = *(uint64_t *)(pfVar6 + 0xe);
          *(uint64_t *)(param_12 + 8) = uVar1;
          *(uint64_t *)(param_12 + 10) = uVar4;
          uVar1 = *(uint64_t *)(pfVar6 + 0x10);
          uVar4 = *(uint64_t *)(pfVar6 + 0x12);
          *(uint64_t *)(param_12 + 0xc) = uVar2;
          *(uint64_t *)(param_12 + 0xe) = uVar3;
          uVar2 = *(uint64_t *)(pfVar6 + 0x14);
          uVar3 = *(uint64_t *)(pfVar6 + 0x16);
          *(uint64_t *)(param_12 + 0x10) = uVar1;
          *(uint64_t *)(param_12 + 0x12) = uVar4;
          uVar1 = *(uint64_t *)(pfVar6 + 0x18);
          uVar4 = *(uint64_t *)(pfVar6 + 0x1a);
          *(uint64_t *)(param_12 + 0x14) = uVar2;
          *(uint64_t *)(param_12 + 0x16) = uVar3;
          uVar2 = *(uint64_t *)(pfVar6 + 0x1c);
          uVar3 = *(uint64_t *)(pfVar6 + 0x1e);
          *(uint64_t *)(param_12 + 0x18) = uVar1;
          *(uint64_t *)(param_12 + 0x1a) = uVar4;
          *(uint64_t *)(param_12 + 0x1c) = uVar2;
          *(uint64_t *)(param_12 + 0x1e) = uVar3;
          lVar8 = lVar8 + -1;
          param_12 = param_12 + 0x20;
          pfVar6 = pfVar6 + 0x20;
        } while (lVar8 != 0);
        *param_13 = 8;
        break;
      case 0xc:
        afStack_2a8[0] = param_1;
        afStack_2a8[4] = 0.0;
        afStack_2a8[5] = 0.0;
        afStack_2a8[6] = 0.0;
        afStack_2a8[7] = 0.0;
        afStack_2a8[0x10] = 0.0;
        afStack_2a8[0x11] = 0.0;
        afStack_2a8[0x12] = 0.0;
        afStack_2a8[0x13] = 0.0;
        lVar8 = 4;
        afStack_2a8[0x1c] = 0.0;
        afStack_2a8[0x1d] = 0.0;
        afStack_2a8[0x1e] = 0.0;
        afStack_2a8[0x1f] = 0.0;
        afStack_2a8[0x28] = 0.0;
        afStack_2a8[0x29] = 0.0;
        afStack_2a8[0x2a] = 0.0;
        afStack_2a8[0x2b] = 0.0;
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        uStack_198 = 0;
        uStack_190 = 0;
        uStack_158 = 0;
        uStack_150 = 0;
        afStack_2a8[8] = 0.0;
        afStack_2a8[9] = 0.0;
        afStack_2a8[10] = 0.0;
        afStack_2a8[0xb] = 0.0;
        afStack_2a8[0x14] = 0.0;
        afStack_2a8[0x15] = 0.0;
        afStack_2a8[0x16] = 0.0;
        afStack_2a8[0x17] = 0.0;
        afStack_2a8[0x20] = 0.0;
        afStack_2a8[0x21] = 0.0;
        afStack_2a8[0x22] = 0.0;
        afStack_2a8[0x23] = 0.0;
        uStack_1f8 = 0;
        uStack_1f0 = 0;
        fStack_1d8 = param_5;
        uStack_128 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        afStack_2a8[0xd] = param_2;
        afStack_2a8[0x1a] = param_3;
        afStack_2a8[0x27] = param_4;
        afStack_2a8[1] = 0.0;
        afStack_2a8[2] = 0.0;
        afStack_2a8[3] = 0.0;
        afStack_2a8[0xc] = 0.0;
        afStack_2a8[0xe] = 0.0;
        afStack_2a8[0xf] = 0.0;
        afStack_2a8[0x18] = 0.0;
        afStack_2a8[0x19] = 0.0;
        afStack_2a8[0x1b] = 0.0;
        afStack_2a8[0x24] = 0.0;
        afStack_2a8[0x25] = 0.0;
        afStack_2a8[0x26] = 0.0;
        uStack_1d4 = 0;
        fStack_1d0 = 0.0;
        uStack_1cc = 0;
        uStack_1b8 = 0;
        lStack_1b0 = 0;
        lStack_1a8 = (uint64_t)(uint)param_6 << 0x20;
        lStack_1a0 = 0;
        uStack_188 = 0;
        uStack_180 = 0;
        uStack_178 = 0;
        uStack_170 = (uint64_t)(uint)param_7;
        uStack_168 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        lStack_140 = (uint64_t)(uint)param_8 << 0x20;
        uStack_138 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        pfVar6 = afStack_2a8;
        do {
          pfVar7 = pfVar6;
          pfVar5 = param_12;
          uVar1 = *(uint64_t *)(pfVar7 + 2);
          uVar2 = *(uint64_t *)(pfVar7 + 4);
          uVar3 = *(uint64_t *)(pfVar7 + 6);
          *(uint64_t *)pfVar5 = *(uint64_t *)pfVar7;
          *(uint64_t *)(pfVar5 + 2) = uVar1;
          uVar1 = *(uint64_t *)(pfVar7 + 8);
          uVar4 = *(uint64_t *)(pfVar7 + 10);
          *(uint64_t *)(pfVar5 + 4) = uVar2;
          *(uint64_t *)(pfVar5 + 6) = uVar3;
          uVar2 = *(uint64_t *)(pfVar7 + 0xc);
          uVar3 = *(uint64_t *)(pfVar7 + 0xe);
          *(uint64_t *)(pfVar5 + 8) = uVar1;
          *(uint64_t *)(pfVar5 + 10) = uVar4;
          uVar1 = *(uint64_t *)(pfVar7 + 0x10);
          uVar4 = *(uint64_t *)(pfVar7 + 0x12);
          *(uint64_t *)(pfVar5 + 0xc) = uVar2;
          *(uint64_t *)(pfVar5 + 0xe) = uVar3;
          uVar2 = *(uint64_t *)(pfVar7 + 0x14);
          uVar3 = *(uint64_t *)(pfVar7 + 0x16);
          *(uint64_t *)(pfVar5 + 0x10) = uVar1;
          *(uint64_t *)(pfVar5 + 0x12) = uVar4;
          uVar1 = *(uint64_t *)(pfVar7 + 0x18);
          uVar4 = *(uint64_t *)(pfVar7 + 0x1a);
          *(uint64_t *)(pfVar5 + 0x14) = uVar2;
          *(uint64_t *)(pfVar5 + 0x16) = uVar3;
          uVar2 = *(uint64_t *)(pfVar7 + 0x1c);
          uVar3 = *(uint64_t *)(pfVar7 + 0x1e);
          *(uint64_t *)(pfVar5 + 0x18) = uVar1;
          *(uint64_t *)(pfVar5 + 0x1a) = uVar4;
          *(uint64_t *)(pfVar5 + 0x1c) = uVar2;
          *(uint64_t *)(pfVar5 + 0x1e) = uVar3;
          lVar8 = lVar8 + -1;
          param_12 = pfVar5 + 0x20;
          pfVar6 = pfVar7 + 0x20;
        } while (lVar8 != 0);
        uVar1 = *(uint64_t *)(pfVar7 + 0x22);
        uVar2 = *(uint64_t *)(pfVar7 + 0x24);
        uVar3 = *(uint64_t *)(pfVar7 + 0x26);
        *(uint64_t *)(pfVar5 + 0x20) = *(uint64_t *)(pfVar7 + 0x20);
        *(uint64_t *)(pfVar5 + 0x22) = uVar1;
        uVar1 = *(uint64_t *)(pfVar7 + 0x28);
        uVar4 = *(uint64_t *)(pfVar7 + 0x2a);
        *(uint64_t *)(pfVar5 + 0x24) = uVar2;
        *(uint64_t *)(pfVar5 + 0x26) = uVar3;
        uVar2 = *(uint64_t *)(pfVar7 + 0x2c);
        uVar3 = *(uint64_t *)(pfVar7 + 0x2e);
        *(uint64_t *)(pfVar5 + 0x28) = uVar1;
        *(uint64_t *)(pfVar5 + 0x2a) = uVar4;
        *(uint64_t *)(pfVar5 + 0x2c) = uVar2;
        *(uint64_t *)(pfVar5 + 0x2e) = uVar3;
        *param_13 = 0xc;
      }
    }
  }
  return 0;
}



uint64_t FUN_18075a7bb(void)

{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int32_t in_EAX;
  int iVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  int64_t lVar17;
  uint64_t unaff_RBX;
  uint64_t *unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t in_R11;
  int32_t *unaff_R14;
  uint64_t unaff_R15;
  bool in_ZF;
  float fVar18;
  float fVar19;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float fVar20;
  float fVar21;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fVar22;
  float fVar23;
  uint64_t uStackX_20;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  int32_t uStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  int32_t uStack0000000000000064;
  float fStack000000000000006c;
  float fStack0000000000000074;
  float fStack000000000000007c;
  uint64_t in_stack_00000080;
  uint64_t in_stack_00000088;
  uint64_t in_stack_00000090;
  uint64_t in_stack_00000098;
  uint64_t in_stack_000000a0;
  uint64_t in_stack_000000a8;
  uint64_t in_stack_000000b0;
  uint64_t in_stack_000000b8;
  uint64_t in_stack_000000c0;
  uint64_t in_stack_000000c8;
  uint64_t in_stack_000000d0;
  uint64_t in_stack_000000d8;
  uint64_t in_stack_000000e0;
  uint64_t in_stack_000000e8;
  uint64_t in_stack_000000f0;
  uint64_t in_stack_000000f8;
  uint64_t in_stack_00000100;
  uint64_t in_stack_00000108;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RBX;
  iVar12 = *(int *)(unaff_RBP + 0x43);
  *(uint64_t *)(in_R11 + 0x10) = unaff_RSI;
  *(uint64_t *)(in_R11 + 0x20) = unaff_R15;
  *(int32_t *)(in_R11 + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x1c) = unaff_XMM6_Dd;
  fStack000000000000002c = (float)unaff_RDI;
  fStack0000000000000028 = (float)((uint64_t)unaff_RDI >> 0x20);
  if (in_ZF) {
LAB_18075ce56:
    iVar4 = *(int *)(unaff_RBP + 0x44);
    if (iVar4 == 3) {
                    // WARNING: Subroutine does not return
      memset(unaff_RBP[0x45],0,(int64_t)(iVar12 * 2) << 2);
    }
    if ((iVar4 == 4) || ((8 < iVar12 && (iVar12 != 0xc)))) {
                    // WARNING: Subroutine does not return
      memset(unaff_RBP[0x45],0,(int64_t)(iVar12 * 2) << 2);
    }
    switch(iVar12) {
    case 1:
      fVar20 = unaff_XMM8_Da * unaff_XMM8_Da * 0.5;
      *(float *)(unaff_RBP + 0x46) =
           SQRT(unaff_XMM7_Da * unaff_XMM7_Da + fVar20 +
                *(float *)(unaff_RBP + 0x3e) * *(float *)(unaff_RBP + 0x3e) * 0.25);
      *(float *)((int64_t)unaff_RBP + 0x234) =
           SQRT(unaff_XMM9_Da * unaff_XMM9_Da + fVar20 +
                *(float *)(unaff_RBP + 0x3f) * *(float *)(unaff_RBP + 0x3f) * 0.25);
      *(uint64_t *)unaff_RBP[0x45] = unaff_RBP[0x46];
      *unaff_R14 = 1;
      break;
    case 2:
      pfVar5 = (float *)unaff_RBP[0x45];
      fVar21 = unaff_XMM8_Da * unaff_XMM8_Da * 0.5;
      fVar20 = *(float *)(unaff_RBP + 0x3f);
      *pfVar5 = SQRT(unaff_XMM7_Da * unaff_XMM7_Da + fVar21 +
                     *(float *)(unaff_RBP + 0x3e) * *(float *)(unaff_RBP + 0x3e) * 0.25);
      pfVar5[1] = fStack000000000000002c;
      pfVar5[2] = fStack0000000000000028;
      pfVar5[3] = SQRT(unaff_XMM9_Da * unaff_XMM9_Da + fVar21 + fVar20 * fVar20 * 0.25);
      *unaff_R14 = 2;
      break;
    case 4:
      pfVar5 = (float *)unaff_RBP[0x45];
      fVar20 = *(float *)(unaff_RBP + 0x3e);
      fVar21 = *(float *)(unaff_RBP + 0x3f);
      *pfVar5 = unaff_XMM7_Da;
      pfVar5[1] = fStack000000000000002c;
      pfVar5[2] = fVar20 * 0.5;
      pfVar5[3] = fStack000000000000002c;
      pfVar5[4] = fStack0000000000000028;
      pfVar5[5] = unaff_XMM9_Da;
      pfVar5[6] = fStack000000000000002c;
      pfVar5[7] = fVar21 * 0.5;
      *unaff_R14 = 4;
      break;
    case 6:
      fVar20 = *(float *)(unaff_RBP + 0x3f);
      pfVar5 = (float *)unaff_RBP[0x45];
      fVar21 = unaff_XMM8_Da * 0.5;
      fVar23 = unaff_XMM10_Da * 0.5;
      fVar19 = *(float *)(unaff_RBP + 0x3e) * 0.5;
      if (iVar4 == 2) {
        *pfVar5 = unaff_XMM7_Da;
        pfVar5[1] = fVar21;
        pfVar5[2] = fStack000000000000002c;
        pfVar5[3] = fVar19;
        fVar18 = fVar21;
        fVar22 = fVar23;
        fVar6 = fStack000000000000002c;
        fVar20 = fVar20 * 0.5;
        fVar19 = fStack000000000000002c;
        fVar21 = unaff_XMM9_Da;
        fStack0000000000000028 = fStack000000000000002c;
      }
      else {
        *pfVar5 = unaff_XMM7_Da;
        pfVar5[1] = fStack000000000000002c;
        pfVar5[2] = fVar21;
        pfVar5[3] = fVar23;
        fVar18 = unaff_XMM9_Da;
        fVar22 = fVar20 * 0.5;
        fVar6 = fVar23;
        fVar20 = fStack000000000000002c;
        fVar23 = fStack000000000000002c;
      }
      pfVar5[4] = fVar19;
      pfVar5[5] = fVar23;
      pfVar5[6] = fStack0000000000000028;
      pfVar5[7] = fVar18;
      pfVar5[8] = fVar21;
      pfVar5[9] = fVar6;
      pfVar5[10] = fVar20;
      pfVar5[0xb] = fVar22;
      *unaff_R14 = 6;
      break;
    case 8:
      pfVar5 = (float *)unaff_RBP[0x45];
      fVar20 = *(float *)(unaff_RBP + 0x3e);
      fVar21 = *(float *)(unaff_RBP + 0x3f);
      fVar19 = *(float *)(unaff_RBP + 0x40);
      fVar23 = *(float *)(unaff_RBP + 0x41);
      *pfVar5 = unaff_XMM7_Da;
      pfVar5[1] = fStack000000000000002c;
      pfVar5[2] = unaff_XMM8_Da * 0.5;
      pfVar5[3] = unaff_XMM10_Da * 0.5;
      pfVar5[4] = fVar20 * 0.5;
      pfVar5[5] = fStack000000000000002c;
      pfVar5[6] = fVar19 * 0.75;
      pfVar5[7] = fStack000000000000002c;
      pfVar5[8] = fStack0000000000000028;
      pfVar5[9] = unaff_XMM9_Da;
      pfVar5[10] = unaff_XMM8_Da * 0.5;
      pfVar5[0xb] = unaff_XMM10_Da * 0.5;
      pfVar5[0xc] = fStack000000000000002c;
      pfVar5[0xd] = fVar21 * 0.5;
      pfVar5[0xe] = fStack000000000000002c;
      pfVar5[0xf] = fVar23 * 0.75;
      *unaff_R14 = 8;
      break;
    case 0xc:
      pfVar5 = (float *)unaff_RBP[0x45];
      fVar20 = *(float *)(unaff_RBP + 0x3e);
      fVar21 = *(float *)(unaff_RBP + 0x40);
      fVar19 = *(float *)(unaff_RBP + 0x3f);
      fVar23 = *(float *)(unaff_RBP + 0x41);
      *pfVar5 = unaff_XMM7_Da;
      pfVar5[1] = fStack000000000000002c;
      pfVar5[2] = unaff_XMM8_Da * 0.5;
      pfVar5[3] = unaff_XMM10_Da * 0.5;
      pfVar5[4] = fVar20 * 0.5;
      pfVar5[5] = fStack000000000000002c;
      pfVar5[6] = fVar21 * 0.75;
      pfVar5[7] = fStack000000000000002c;
      pfVar5[8] = 0.0;
      pfVar5[9] = 0.0;
      pfVar5[10] = 0.0;
      pfVar5[0xb] = 0.0;
      pfVar5[0xc] = fStack000000000000002c;
      pfVar5[0xd] = unaff_XMM9_Da;
      pfVar5[0xe] = unaff_XMM8_Da * 0.5;
      pfVar5[0xf] = unaff_XMM10_Da * 0.5;
      pfVar5[0x10] = fStack000000000000002c;
      pfVar5[0x11] = fVar19 * 0.5;
      pfVar5[0x12] = fStack000000000000002c;
      pfVar5[0x13] = fVar23 * 0.75;
      pfVar5[0x14] = 0.0;
      pfVar5[0x15] = 0.0;
      pfVar5[0x16] = 0.0;
      pfVar5[0x17] = 0.0;
      *unaff_R14 = 0xc;
    }
  }
  else {
    switch(in_EAX) {
    case 2:
      switch(iVar12) {
      case 1:
        *(float *)unaff_RBP[0x45] =
             SQRT(unaff_XMM8_Da * unaff_XMM8_Da * 0.5 + unaff_XMM7_Da * unaff_XMM7_Da +
                  *(float *)(unaff_RBP + 0x3e) * *(float *)(unaff_RBP + 0x3e) * 0.25);
        *unaff_R14 = 1;
        break;
      case 2:
        fVar21 = unaff_XMM8_Da * unaff_XMM8_Da * 0.5;
        fVar20 = *(float *)(unaff_RBP + 0x3e) * *(float *)(unaff_RBP + 0x3e) * 0.25;
        *(float *)(unaff_RBP + 0x46) = SQRT(unaff_XMM7_Da * unaff_XMM7_Da + fVar21 + fVar20);
        *(float *)((int64_t)unaff_RBP + 0x234) =
             SQRT(unaff_XMM9_Da * unaff_XMM9_Da + fVar21 + fVar20);
        *(uint64_t *)unaff_RBP[0x45] = unaff_RBP[0x46];
        *unaff_R14 = 2;
        break;
      case 4:
        fVar20 = *(float *)(unaff_RBP + 0x3e);
        pfVar5 = (float *)unaff_RBP[0x45];
        *pfVar5 = unaff_XMM7_Da;
        pfVar5[1] = fStack000000000000002c;
        pfVar5[2] = fVar20 * 0.5;
        pfVar5[3] = fStack000000000000002c;
        *unaff_R14 = 4;
        break;
      case 6:
        pfVar5 = (float *)unaff_RBP[0x45];
        uVar2 = *(int32_t *)(unaff_RBP + 0x3f);
        uVar3 = *(int32_t *)(unaff_RBP + 0x3e);
        *pfVar5 = unaff_XMM7_Da;
        pfVar5[1] = unaff_XMM9_Da;
        pfVar5[2] = unaff_XMM8_Da;
        pfVar5[3] = unaff_XMM10_Da;
        *(uint64_t *)(pfVar5 + 4) = CONCAT44(uVar2,uVar3);
        *unaff_R14 = 6;
        break;
      case 8:
        pfVar5 = (float *)unaff_RBP[0x45];
        fVar20 = *(float *)(unaff_RBP + 0x3e);
        fVar21 = *(float *)(unaff_RBP + 0x3f);
        fVar19 = *(float *)(unaff_RBP + 0x40);
        fVar23 = *(float *)(unaff_RBP + 0x41);
        *pfVar5 = unaff_XMM7_Da;
        pfVar5[1] = unaff_XMM9_Da;
        pfVar5[2] = unaff_XMM8_Da;
        pfVar5[3] = unaff_XMM10_Da;
        pfVar5[4] = fVar20;
        pfVar5[5] = fVar21;
        pfVar5[6] = fVar19;
        pfVar5[7] = fVar23;
        *unaff_R14 = 8;
        break;
      case 0xc:
        pfVar5 = (float *)unaff_RBP[0x45];
        fVar20 = *(float *)(unaff_RBP + 0x3e);
        fVar21 = *(float *)(unaff_RBP + 0x3f);
        fVar19 = *(float *)(unaff_RBP + 0x40);
        fVar23 = *(float *)(unaff_RBP + 0x41);
        *pfVar5 = unaff_XMM7_Da;
        pfVar5[1] = unaff_XMM9_Da;
        pfVar5[2] = unaff_XMM8_Da;
        pfVar5[3] = unaff_XMM10_Da;
        pfVar5[4] = fVar20;
        pfVar5[5] = fVar21;
        pfVar5[6] = fVar19;
        pfVar5[7] = fVar23;
        pfVar5[8] = 0.0;
        pfVar5[9] = 0.0;
        pfVar5[10] = 0.0;
        pfVar5[0xb] = 0.0;
        *unaff_R14 = 0xc;
      }
      break;
    case 3:
      goto LAB_18075ce56;
    case 4:
      iVar4 = *(int *)(unaff_RBP + 0x44);
      if (iVar4 == 3) {
                    // WARNING: Subroutine does not return
        memset(unaff_RBP[0x45],0,(int64_t)(iVar12 * 4) << 2);
      }
      if ((iVar4 == 4) || ((8 < iVar12 && (iVar12 != 0xc)))) {
                    // WARNING: Subroutine does not return
        memset(unaff_RBP[0x45],0,(int64_t)(iVar12 * 4) << 2);
      }
      switch(iVar12) {
      case 1:
        fVar20 = *(float *)(unaff_RBP + 0x3e);
        fVar21 = *(float *)(unaff_RBP + 0x3f);
        pfVar5 = (float *)unaff_RBP[0x45];
        *pfVar5 = unaff_XMM7_Da + unaff_XMM8_Da;
        pfVar5[1] = unaff_XMM9_Da + unaff_XMM8_Da;
        pfVar5[2] = fVar20;
        pfVar5[3] = fVar21;
        *unaff_R14 = 1;
        break;
      case 2:
        pfVar5 = (float *)unaff_RBP[0x45];
        fVar20 = *(float *)(unaff_RBP + 0x3e);
        fVar21 = *(float *)(unaff_RBP + 0x3f);
        *pfVar5 = unaff_XMM7_Da;
        pfVar5[1] = fStack000000000000002c;
        pfVar5[2] = fStack0000000000000028;
        pfVar5[3] = unaff_XMM9_Da;
        pfVar5[4] = fVar20;
        pfVar5[5] = fStack000000000000002c;
        pfVar5[6] = fStack0000000000000028;
        pfVar5[7] = fVar21;
        *unaff_R14 = 2;
        break;
      case 4:
        pfVar5 = (float *)unaff_RBP[0x45];
        fVar20 = *(float *)(unaff_RBP + 0x3e);
        fVar21 = *(float *)(unaff_RBP + 0x3f);
        *pfVar5 = unaff_XMM7_Da;
        pfVar5[1] = fStack000000000000002c;
        pfVar5[2] = fStack0000000000000028;
        pfVar5[3] = fStack000000000000002c;
        pfVar5[4] = fStack0000000000000028;
        pfVar5[5] = unaff_XMM9_Da;
        pfVar5[6] = fStack000000000000002c;
        pfVar5[7] = fStack0000000000000028;
        pfVar5[8] = fStack000000000000002c;
        pfVar5[9] = fStack0000000000000028;
        pfVar5[10] = fVar20 * 0.5;
        pfVar5[0xb] = fStack000000000000002c;
        pfVar5[0xc] = fStack0000000000000028;
        pfVar5[0xd] = fStack000000000000002c;
        pfVar5[0xe] = fStack0000000000000028;
        pfVar5[0xf] = fVar21 * 0.5;
        *unaff_R14 = 4;
        break;
      case 6:
        fVar19 = unaff_XMM8_Da * 0.5;
        pfVar5 = (float *)unaff_RBP[0x45];
        fVar23 = unaff_XMM10_Da * 0.25;
        fVar20 = *(float *)(unaff_RBP + 0x3e);
        fVar21 = *(float *)(unaff_RBP + 0x3f);
        if (iVar4 == 2) {
          *pfVar5 = unaff_XMM7_Da;
          pfVar5[1] = fVar19;
          pfVar5[2] = fStack000000000000002c;
          pfVar5[3] = fStack0000000000000028;
          pfVar5[4] = fStack000000000000002c;
          pfVar5[5] = fVar23;
          pfVar5[6] = fStack000000000000002c;
          pfVar5[7] = fVar19;
          pfVar5[8] = unaff_XMM9_Da;
          pfVar5[9] = fStack000000000000002c;
          pfVar5[10] = fStack0000000000000028;
          pfVar5[0xb] = fVar23;
          pfVar5[0xc] = fStack000000000000002c;
          pfVar5[0xd] = fStack0000000000000028;
          pfVar5[0xe] = fStack000000000000002c;
          pfVar5[0xf] = fVar20;
          pfVar5[0x10] = fStack000000000000002c;
          pfVar5[0x11] = fVar23;
          pfVar5[0x12] = fStack000000000000002c;
          pfVar5[0x13] = fStack0000000000000028;
          pfVar5[0x14] = fStack000000000000002c;
          pfVar5[0x15] = fStack0000000000000028;
          pfVar5[0x16] = fVar21;
          pfVar5[0x17] = fVar23;
          *unaff_R14 = 6;
        }
        else {
          *pfVar5 = unaff_XMM7_Da;
          pfVar5[1] = fStack000000000000002c;
          pfVar5[2] = fVar19;
          pfVar5[3] = fVar23;
          pfVar5[4] = fStack000000000000002c;
          pfVar5[5] = fStack0000000000000028;
          pfVar5[6] = fStack000000000000002c;
          pfVar5[7] = unaff_XMM9_Da;
          pfVar5[8] = fVar19;
          pfVar5[9] = fVar23;
          pfVar5[10] = fStack000000000000002c;
          pfVar5[0xb] = fStack0000000000000028;
          pfVar5[0xc] = fStack000000000000002c;
          pfVar5[0xd] = fStack0000000000000028;
          pfVar5[0xe] = fStack000000000000002c;
          pfVar5[0xf] = fVar23;
          pfVar5[0x10] = fVar20;
          pfVar5[0x11] = fStack000000000000002c;
          pfVar5[0x12] = fStack0000000000000028;
          pfVar5[0x13] = fStack000000000000002c;
          pfVar5[0x14] = fStack0000000000000028;
          pfVar5[0x15] = fVar23;
          pfVar5[0x16] = fStack000000000000002c;
          pfVar5[0x17] = fVar21;
          *unaff_R14 = 6;
        }
        break;
      case 8:
        pfVar5 = (float *)unaff_RBP[0x45];
        fVar22 = unaff_XMM10_Da * 0.25;
        fVar20 = *(float *)(unaff_RBP + 0x40);
        fVar21 = *(float *)(unaff_RBP + 0x41);
        fVar19 = *(float *)(unaff_RBP + 0x3e);
        fVar23 = *(float *)(unaff_RBP + 0x3f);
        *pfVar5 = unaff_XMM7_Da;
        pfVar5[1] = fStack000000000000002c;
        pfVar5[2] = unaff_XMM8_Da * 0.5;
        pfVar5[3] = fVar22;
        pfVar5[4] = fStack000000000000002c;
        pfVar5[5] = fStack0000000000000028;
        pfVar5[6] = fVar20 * 0.5;
        pfVar5[7] = fStack000000000000002c;
        pfVar5[8] = fStack0000000000000028;
        pfVar5[9] = unaff_XMM9_Da;
        pfVar5[10] = unaff_XMM8_Da * 0.5;
        pfVar5[0xb] = fVar22;
        pfVar5[0xc] = fStack000000000000002c;
        pfVar5[0xd] = fStack0000000000000028;
        pfVar5[0xe] = fStack000000000000002c;
        pfVar5[0xf] = fVar21 * 0.5;
        pfVar5[0x10] = fStack000000000000002c;
        pfVar5[0x11] = fStack0000000000000028;
        pfVar5[0x12] = fStack000000000000002c;
        pfVar5[0x13] = fVar22;
        *(float *)(unaff_RBP + -0xe) = fStack000000000000002c;
        *(float *)(unaff_RBP + -0xd) = fStack000000000000002c;
        fVar6 = *(float *)(unaff_RBP + -0xe);
        fVar18 = *(float *)(unaff_RBP + -0xd);
        pfVar5[0x14] = fVar19;
        pfVar5[0x15] = fStack000000000000002c;
        pfVar5[0x16] = fVar20 * 0.5;
        pfVar5[0x17] = fStack000000000000002c;
        *(uint64_t *)((int64_t)unaff_RBP + -0x7c) = unaff_RDI;
        fVar20 = *(float *)((int64_t)unaff_RBP + -0x7c);
        fVar19 = *(float *)(unaff_RBP + -0xf);
        pfVar5[0x18] = *(float *)(unaff_RBP + -0x10);
        pfVar5[0x19] = fVar20;
        pfVar5[0x1a] = fVar19;
        pfVar5[0x1b] = fVar22;
        pfVar5[0x1c] = fVar6;
        pfVar5[0x1d] = fVar23;
        pfVar5[0x1e] = fVar18;
        pfVar5[0x1f] = fVar21 * 0.5;
        *unaff_R14 = 8;
        break;
      case 0xc:
        puVar13 = (uint64_t *)unaff_RBP[0x45];
        fVar19 = unaff_XMM10_Da * 0.25;
        fVar20 = *(float *)(unaff_RBP + 0x40);
        fVar21 = *(float *)(unaff_RBP + 0x41);
        *(int32_t *)(unaff_RBP + -0xe) = *(int32_t *)(unaff_RBP + 0x3e);
        unaff_RBP[-0xc] = 0;
        unaff_RBP[-0xb] = 0;
        *(int32_t *)((int64_t)unaff_RBP + -0x3c) = *(int32_t *)(unaff_RBP + 0x3f);
        unaff_RBP[-6] = 0;
        unaff_RBP[-5] = 0;
        *(float *)((int64_t)unaff_RBP + -0x74) = fVar19;
        *(float *)((int64_t)unaff_RBP + -0x44) = fVar19;
        unaff_RBP[-0x10] = unaff_RDI;
        *(float *)(unaff_RBP + -0xf) = fStack000000000000002c;
        *(float *)((int64_t)unaff_RBP + -0x6c) = fStack000000000000002c;
        *(float *)((int64_t)unaff_RBP + -100) = fStack000000000000002c;
        unaff_RBP[-10] = unaff_RDI;
        *(float *)(unaff_RBP + -9) = fStack000000000000002c;
        *(float *)(unaff_RBP + -8) = fStack000000000000002c;
        *(float *)(unaff_RBP + -7) = fStack000000000000002c;
        *(float *)(unaff_RBP + -0xd) = fVar20 * 0.5;
        *(float *)((int64_t)unaff_RBP + -0x34) = fVar21 * 0.5;
        *puVar13 = CONCAT44(fStack000000000000002c,unaff_XMM7_Da);
        puVar13[1] = CONCAT44(fVar19,unaff_XMM8_Da * 0.5);
        puVar13[2] = unaff_RDI;
        puVar13[3] = CONCAT44(fStack000000000000002c,fVar20 * 0.5);
        puVar13[4] = 0;
        puVar13[5] = 0;
        puVar13[6] = CONCAT44(unaff_XMM9_Da,fStack000000000000002c);
        puVar13[7] = CONCAT44(fVar19,unaff_XMM8_Da * 0.5);
        puVar13[8] = unaff_RDI;
        puVar13[9] = CONCAT44(fVar21 * 0.5,fStack000000000000002c);
        puVar13[10] = 0;
        puVar13[0xb] = 0;
        puVar13[0xc] = in_stack_00000080;
        puVar13[0xd] = in_stack_00000088;
        puVar13[0xe] = in_stack_00000090;
        puVar13[0xf] = in_stack_00000098;
        puVar13[0x10] = in_stack_000000a0;
        puVar13[0x11] = in_stack_000000a8;
        puVar13[0x12] = in_stack_000000b0;
        puVar13[0x13] = in_stack_000000b8;
        puVar13[0x14] = in_stack_000000c0;
        puVar13[0x15] = in_stack_000000c8;
        puVar13[0x16] = in_stack_000000d0;
        puVar13[0x17] = in_stack_000000d8;
        *unaff_R14 = 0xc;
      }
      break;
    case 5:
      iVar4 = *(int *)(unaff_RBP + 0x44);
      if (iVar4 == 3) {
        iVar12 = iVar12 * 5;
code_r0x00018075c539:
                    // WARNING: Subroutine does not return
        memset(unaff_RBP[0x45],0,(int64_t)iVar12 << 2);
      }
      if ((iVar4 == 4) || ((8 < iVar12 && (iVar12 != 0xc)))) {
                    // WARNING: Subroutine does not return
        memset(unaff_RBP[0x45],0,(int64_t)(iVar12 * 5) << 2);
      }
      switch(iVar12) {
      case 1:
        pfVar5 = (float *)unaff_RBP[0x45];
        fVar20 = *(float *)(unaff_RBP + 0x3e);
        fVar21 = *(float *)(unaff_RBP + 0x3f);
        *pfVar5 = unaff_XMM7_Da;
        pfVar5[1] = unaff_XMM9_Da;
        pfVar5[2] = unaff_XMM8_Da;
        pfVar5[3] = fVar20;
        pfVar5[4] = fVar21;
        *unaff_R14 = 1;
        break;
      case 2:
        pfVar5 = (float *)unaff_RBP[0x45];
        fVar20 = *(float *)(unaff_RBP + 0x3e);
        uVar1 = *(uint *)(unaff_RBP + 0x3f);
        *pfVar5 = unaff_XMM7_Da;
        pfVar5[1] = fStack000000000000002c;
        pfVar5[2] = fStack0000000000000028;
        pfVar5[3] = unaff_XMM9_Da;
        pfVar5[4] = unaff_XMM8_Da * 0.5;
        pfVar5[5] = unaff_XMM8_Da * 0.5;
        pfVar5[6] = fVar20;
        pfVar5[7] = fStack000000000000002c;
        *(uint64_t *)(pfVar5 + 8) = (uint64_t)uVar1 << 0x20;
        *unaff_R14 = 2;
        break;
      case 4:
        pfVar5 = (float *)unaff_RBP[0x45];
        fVar20 = *(float *)(unaff_RBP + 0x3e);
        fVar21 = *(float *)(unaff_RBP + 0x3f);
        *pfVar5 = unaff_XMM7_Da;
        pfVar5[1] = fStack000000000000002c;
        pfVar5[2] = fStack0000000000000028;
        pfVar5[3] = fStack000000000000002c;
        pfVar5[4] = fStack0000000000000028;
        pfVar5[5] = unaff_XMM9_Da;
        pfVar5[6] = fStack000000000000002c;
        pfVar5[7] = fStack0000000000000028;
        pfVar5[8] = unaff_XMM8_Da * 0.5;
        pfVar5[9] = unaff_XMM8_Da * 0.5;
        pfVar5[10] = fStack000000000000002c;
        pfVar5[0xb] = fStack0000000000000028;
        pfVar5[0xc] = fStack000000000000002c;
        pfVar5[0xd] = fStack0000000000000028;
        pfVar5[0xe] = fVar20;
        pfVar5[0xf] = fStack000000000000002c;
        pfVar5[0x10] = fStack0000000000000028;
        pfVar5[0x11] = fStack000000000000002c;
        pfVar5[0x12] = fStack0000000000000028;
        pfVar5[0x13] = fVar21;
        *unaff_R14 = 4;
        break;
      case 6:
        fVar20 = *(float *)(unaff_RBP + 0x3e);
        pfVar5 = (float *)unaff_RBP[0x45];
        if (iVar4 == 2) {
          *pfVar5 = unaff_XMM7_Da;
          pfVar5[1] = fStack000000000000002c;
          pfVar5[2] = fStack0000000000000028;
          pfVar5[3] = fStack000000000000002c;
          pfVar5[4] = 0.0;
          pfVar5[5] = 0.0;
          pfVar5[6] = 0.0;
          pfVar5[7] = 0.0;
          pfVar5[8] = unaff_XMM9_Da;
          pfVar5[9] = fStack000000000000002c;
          pfVar5[10] = fStack0000000000000028;
          pfVar5[0xb] = fStack000000000000002c;
          pfVar5[0xc] = fStack0000000000000028;
          pfVar5[0xd] = unaff_XMM8_Da;
          pfVar5[0xe] = fStack000000000000002c;
          pfVar5[0xf] = fStack0000000000000028;
          pfVar5[0x10] = 0.0;
          pfVar5[0x11] = 0.0;
          pfVar5[0x12] = 0.0;
          pfVar5[0x13] = 0.0;
          pfVar5[0x14] = fStack000000000000002c;
          pfVar5[0x15] = fVar20;
          pfVar5[0x16] = fStack000000000000002c;
          pfVar5[0x17] = fStack0000000000000028;
          uVar1 = *(uint *)(unaff_RBP + 0x3f);
          pfVar5[0x18] = 0.0;
          pfVar5[0x19] = 0.0;
          pfVar5[0x1a] = 0.0;
          pfVar5[0x1b] = 0.0;
          *(uint64_t *)(pfVar5 + 0x1c) = (uint64_t)uVar1;
          *unaff_R14 = 6;
        }
        else {
          uVar1 = *(uint *)(unaff_RBP + 0x3f);
          *pfVar5 = unaff_XMM7_Da;
          pfVar5[1] = fStack000000000000002c;
          pfVar5[2] = fStack0000000000000028;
          pfVar5[3] = fStack000000000000002c;
          pfVar5[4] = fStack0000000000000028;
          pfVar5[5] = fStack000000000000002c;
          pfVar5[6] = fStack0000000000000028;
          pfVar5[7] = unaff_XMM9_Da;
          pfVar5[8] = 0.0;
          pfVar5[9] = 0.0;
          pfVar5[10] = 0.0;
          pfVar5[0xb] = 0.0;
          pfVar5[0xc] = fStack000000000000002c;
          pfVar5[0xd] = fStack0000000000000028;
          pfVar5[0xe] = unaff_XMM8_Da;
          pfVar5[0xf] = fStack000000000000002c;
          pfVar5[0x10] = 0.0;
          pfVar5[0x11] = 0.0;
          pfVar5[0x12] = 0.0;
          pfVar5[0x13] = 0.0;
          pfVar5[0x14] = fStack000000000000002c;
          pfVar5[0x15] = fStack0000000000000028;
          pfVar5[0x16] = fVar20;
          pfVar5[0x17] = fStack000000000000002c;
          pfVar5[0x18] = 0.0;
          pfVar5[0x19] = 0.0;
          pfVar5[0x1a] = 0.0;
          pfVar5[0x1b] = 0.0;
          *(uint64_t *)(pfVar5 + 0x1c) = (uint64_t)uVar1 << 0x20;
          *unaff_R14 = 6;
        }
        break;
      case 8:
        puVar13 = (uint64_t *)unaff_RBP[0x45];
        fVar20 = *(float *)(unaff_RBP + 0x40);
        fVar21 = *(float *)(unaff_RBP + 0x41);
        *(int32_t *)(unaff_RBP + -0xe) = *(int32_t *)(unaff_RBP + 0x3e);
        unaff_RBP[-0x10] = 0;
        unaff_RBP[-0xf] = 0;
        unaff_RBP[-0xc] = 0;
        unaff_RBP[-0xb] = 0;
        *(float *)(unaff_RBP + -0xd) = fVar20 * 0.5;
        *(int32_t *)((int64_t)unaff_RBP + -0x4c) = *(int32_t *)(unaff_RBP + 0x3f);
        *(float *)((int64_t)unaff_RBP + -0x44) = fVar21 * 0.5;
        *(float *)((int64_t)unaff_RBP + -0x6c) = fStack000000000000002c;
        *(float *)((int64_t)unaff_RBP + -100) = fStack000000000000002c;
        *(float *)(unaff_RBP + -10) = fStack000000000000002c;
        *(float *)(unaff_RBP + -9) = fStack000000000000002c;
        *puVar13 = CONCAT44(fStack000000000000002c,unaff_XMM7_Da);
        puVar13[1] = CONCAT44(fStack000000000000002c,fStack0000000000000028);
        puVar13[2] = CONCAT44(fStack000000000000002c,fStack0000000000000028);
        puVar13[3] = CONCAT44(fStack000000000000002c,fVar20 * 0.5);
        puVar13[4] = CONCAT44(unaff_XMM9_Da,fStack0000000000000028);
        puVar13[5] = unaff_RDI;
        puVar13[6] = unaff_RDI;
        puVar13[7] = CONCAT44(fVar21 * 0.5,fStack000000000000002c);
        puVar13[8] = unaff_RDI;
        puVar13[9] = CONCAT44(fStack000000000000002c,unaff_XMM8_Da);
        puVar13[10] = 0;
        puVar13[0xb] = 0;
        puVar13[0xc] = in_stack_00000080;
        puVar13[0xd] = in_stack_00000088;
        puVar13[0xe] = in_stack_00000090;
        puVar13[0xf] = in_stack_00000098;
        puVar13[0x10] = in_stack_000000a0;
        puVar13[0x11] = in_stack_000000a8;
        puVar13[0x12] = in_stack_000000b0;
        puVar13[0x13] = in_stack_000000b8;
        *unaff_R14 = 8;
        break;
      case 0xc:
        puVar13 = (uint64_t *)unaff_RBP[0x45];
        fVar20 = *(float *)(unaff_RBP + 0x40);
        fVar21 = *(float *)(unaff_RBP + 0x41);
        unaff_RBP[-0xe] = 0;
        unaff_RBP[-0xd] = 0;
        unaff_RBP[-0xc] = 0;
        unaff_RBP[-0xb] = 0;
        unaff_RBP[-10] = 0;
        unaff_RBP[-9] = 0;
        unaff_RBP[-6] = 0;
        unaff_RBP[-5] = 0;
        *(int32_t *)(unaff_RBP + -8) = *(int32_t *)(unaff_RBP + 0x3e);
        *(int32_t *)((int64_t)unaff_RBP + -0xc) = *(int32_t *)(unaff_RBP + 0x3f);
        unaff_RBP[-4] = 0;
        unaff_RBP[-3] = 0;
        *unaff_RBP = 0;
        unaff_RBP[1] = 0;
        *(float *)(unaff_RBP + -0xf) = unaff_XMM8_Da;
        *(float *)(unaff_RBP + -7) = fVar20 * 0.5;
        *(float *)((int64_t)unaff_RBP + -4) = fVar21 * 0.5;
        unaff_RBP[-0x10] = unaff_RDI;
        *(float *)((int64_t)unaff_RBP + -0x74) = fStack000000000000002c;
        *(float *)((int64_t)unaff_RBP + -0x3c) = fStack000000000000002c;
        *(float *)((int64_t)unaff_RBP + -0x34) = fStack000000000000002c;
        *(float *)(unaff_RBP + -2) = fStack000000000000002c;
        *(float *)(unaff_RBP + -1) = fStack000000000000002c;
        *puVar13 = CONCAT44(fStack000000000000002c,unaff_XMM7_Da);
        puVar13[1] = CONCAT44(fStack000000000000002c,fStack0000000000000028);
        puVar13[2] = CONCAT44(fStack000000000000002c,fStack0000000000000028);
        puVar13[3] = CONCAT44(fStack000000000000002c,fVar20 * 0.5);
        puVar13[4] = 0;
        puVar13[5] = 0;
        puVar13[6] = CONCAT44(unaff_XMM9_Da,fStack000000000000002c);
        puVar13[7] = unaff_RDI;
        puVar13[8] = unaff_RDI;
        puVar13[9] = CONCAT44(fVar21 * 0.5,fStack000000000000002c);
        puVar13[10] = 0;
        puVar13[0xb] = 0;
        puVar13[0xc] = in_stack_00000080;
        puVar13[0xd] = in_stack_00000088;
        puVar13[0xe] = in_stack_00000090;
        puVar13[0xf] = in_stack_00000098;
        puVar13[0x10] = in_stack_000000a0;
        puVar13[0x11] = in_stack_000000a8;
        puVar13[0x12] = in_stack_000000b0;
        puVar13[0x13] = in_stack_000000b8;
        puVar13[0x14] = in_stack_000000c0;
        puVar13[0x15] = in_stack_000000c8;
        puVar13[0x16] = in_stack_000000d0;
        puVar13[0x17] = in_stack_000000d8;
        puVar13[0x18] = in_stack_000000e0;
        puVar13[0x19] = in_stack_000000e8;
        puVar13[0x1a] = in_stack_000000f0;
        puVar13[0x1b] = in_stack_000000f8;
        puVar13[0x1c] = in_stack_00000100;
        puVar13[0x1d] = in_stack_00000108;
        *unaff_R14 = 0xc;
      }
      break;
    case 6:
      iVar4 = *(int *)(unaff_RBP + 0x44);
      if (iVar4 == 3) {
        iVar12 = iVar12 * 6;
        goto code_r0x00018075c539;
      }
      if ((iVar4 == 4) || ((8 < iVar12 && (iVar12 != 0xc)))) {
                    // WARNING: Subroutine does not return
        memset(unaff_RBP[0x45],0,(int64_t)(iVar12 * 6) << 2);
      }
      switch(iVar12) {
      case 1:
        pfVar5 = (float *)unaff_RBP[0x45];
        uVar2 = *(int32_t *)(unaff_RBP + 0x3f);
        uVar3 = *(int32_t *)(unaff_RBP + 0x3e);
        *pfVar5 = unaff_XMM7_Da;
        pfVar5[1] = unaff_XMM9_Da;
        pfVar5[2] = unaff_XMM8_Da;
        pfVar5[3] = unaff_XMM10_Da;
        *(uint64_t *)(pfVar5 + 4) = CONCAT44(uVar2,uVar3);
        *unaff_R14 = 1;
        break;
      case 2:
        pfVar5 = (float *)unaff_RBP[0x45];
        fVar20 = *(float *)(unaff_RBP + 0x3e);
        fVar21 = *(float *)(unaff_RBP + 0x3f);
        *pfVar5 = unaff_XMM7_Da;
        pfVar5[1] = fStack000000000000002c;
        pfVar5[2] = fStack0000000000000028;
        pfVar5[3] = unaff_XMM9_Da;
        pfVar5[4] = unaff_XMM8_Da * 0.5;
        pfVar5[5] = unaff_XMM8_Da * 0.5;
        pfVar5[6] = unaff_XMM10_Da * 0.5;
        pfVar5[7] = unaff_XMM10_Da * 0.5;
        pfVar5[8] = fVar20;
        pfVar5[9] = fStack000000000000002c;
        pfVar5[10] = fStack0000000000000028;
        pfVar5[0xb] = fVar21;
        *unaff_R14 = 2;
        break;
      case 4:
        pfVar5 = (float *)unaff_RBP[0x45];
        fVar20 = *(float *)(unaff_RBP + 0x3e);
        fVar21 = *(float *)(unaff_RBP + 0x3f);
        *pfVar5 = unaff_XMM7_Da;
        pfVar5[1] = fStack000000000000002c;
        pfVar5[2] = fStack0000000000000028;
        pfVar5[3] = fStack000000000000002c;
        pfVar5[4] = fStack0000000000000028;
        pfVar5[5] = unaff_XMM9_Da;
        pfVar5[6] = fStack000000000000002c;
        pfVar5[7] = fStack0000000000000028;
        pfVar5[8] = unaff_XMM8_Da * 0.5;
        pfVar5[9] = unaff_XMM8_Da * 0.5;
        pfVar5[10] = fStack000000000000002c;
        pfVar5[0xb] = fStack0000000000000028;
        pfVar5[0xc] = unaff_XMM10_Da * 0.5;
        pfVar5[0xd] = unaff_XMM10_Da * 0.5;
        pfVar5[0xe] = fStack000000000000002c;
        pfVar5[0xf] = fStack0000000000000028;
        pfVar5[0x10] = fStack000000000000002c;
        pfVar5[0x11] = fStack0000000000000028;
        pfVar5[0x12] = fVar20;
        pfVar5[0x13] = fStack000000000000002c;
        pfVar5[0x14] = fStack0000000000000028;
        pfVar5[0x15] = fStack000000000000002c;
        pfVar5[0x16] = fStack0000000000000028;
        pfVar5[0x17] = fVar21;
        *unaff_R14 = 4;
        break;
      case 6:
        fVar20 = *(float *)(unaff_RBP + 0x3f);
        pfVar5 = (float *)unaff_RBP[0x45];
        if (iVar4 == 2) {
          fVar21 = *(float *)(unaff_RBP + 0x3e);
          *pfVar5 = unaff_XMM7_Da;
          pfVar5[1] = fStack000000000000002c;
          pfVar5[2] = fStack0000000000000028;
          pfVar5[3] = fStack000000000000002c;
          pfVar5[4] = 0.0;
          pfVar5[5] = 0.0;
          pfVar5[6] = 0.0;
          pfVar5[7] = 0.0;
          pfVar5[8] = unaff_XMM9_Da;
          pfVar5[9] = fStack000000000000002c;
          pfVar5[10] = fStack0000000000000028;
          pfVar5[0xb] = fStack000000000000002c;
          pfVar5[0xc] = fStack0000000000000028;
          pfVar5[0xd] = unaff_XMM8_Da;
          pfVar5[0xe] = fStack000000000000002c;
          pfVar5[0xf] = fStack0000000000000028;
          unaff_RBP[-0x10] = unaff_RDI;
          pfVar5[0x10] = 0.0;
          pfVar5[0x11] = 0.0;
          pfVar5[0x12] = 0.0;
          pfVar5[0x13] = 0.0;
          *(float *)(unaff_RBP + -0xf) = fStack000000000000002c;
          fVar18 = *(float *)(unaff_RBP + -0x10);
          fVar22 = *(float *)((int64_t)unaff_RBP + -0x7c);
          fVar7 = *(float *)(unaff_RBP + -0xf);
          pfVar5[0x14] = fStack000000000000002c;
          pfVar5[0x15] = fStack0000000000000028;
          pfVar5[0x16] = fStack000000000000002c;
          pfVar5[0x17] = unaff_XMM10_Da;
          unaff_RBP[-0xc] = unaff_RDI;
          *(float *)((int64_t)unaff_RBP + -0x54) = fStack000000000000002c;
          fVar19 = *(float *)(unaff_RBP + -0xc);
          fVar23 = *(float *)((int64_t)unaff_RBP + -0x5c);
          fVar6 = *(float *)((int64_t)unaff_RBP + -0x54);
          pfVar5[0x18] = fVar18;
          pfVar5[0x19] = fVar22;
          pfVar5[0x1a] = fVar7;
          pfVar5[0x1b] = fVar21;
          pfVar5[0x1c] = 0.0;
          pfVar5[0x1d] = 0.0;
          pfVar5[0x1e] = 0.0;
          pfVar5[0x1f] = 0.0;
          pfVar5[0x20] = fVar19;
          pfVar5[0x21] = fVar23;
          pfVar5[0x22] = fVar20;
          pfVar5[0x23] = fVar6;
          *unaff_R14 = 6;
        }
        else {
          fVar21 = *(float *)(unaff_RBP + 0x3e);
          *(uint64_t *)((int64_t)unaff_RBP + -100) = unaff_RDI;
          *pfVar5 = unaff_XMM7_Da;
          pfVar5[1] = fStack000000000000002c;
          pfVar5[2] = fStack0000000000000028;
          pfVar5[3] = fStack000000000000002c;
          pfVar5[4] = fStack0000000000000028;
          pfVar5[5] = fStack000000000000002c;
          pfVar5[6] = fStack0000000000000028;
          pfVar5[7] = unaff_XMM9_Da;
          pfVar5[8] = 0.0;
          pfVar5[9] = 0.0;
          pfVar5[10] = 0.0;
          pfVar5[0xb] = 0.0;
          pfVar5[0xc] = fStack000000000000002c;
          pfVar5[0xd] = fStack0000000000000028;
          pfVar5[0xe] = unaff_XMM8_Da;
          pfVar5[0xf] = fStack000000000000002c;
          *(uint64_t *)((int64_t)unaff_RBP + -0x5c) = unaff_RDI;
          fVar18 = *(float *)(unaff_RBP + -0xc);
          fVar22 = *(float *)((int64_t)unaff_RBP + -0x5c);
          fVar7 = *(float *)(unaff_RBP + -0xb);
          pfVar5[0x10] = 0.0;
          pfVar5[0x11] = 0.0;
          pfVar5[0x12] = 0.0;
          pfVar5[0x13] = 0.0;
          *(uint64_t *)((int64_t)unaff_RBP + -0x6c) = unaff_RDI;
          pfVar5[0x14] = fStack000000000000002c;
          pfVar5[0x15] = unaff_XMM10_Da;
          pfVar5[0x16] = fStack000000000000002c;
          pfVar5[0x17] = fStack0000000000000028;
          fVar19 = *(float *)((int64_t)unaff_RBP + -0x6c);
          fVar23 = *(float *)(unaff_RBP + -0xd);
          fVar6 = *(float *)((int64_t)unaff_RBP + -100);
          pfVar5[0x18] = 0.0;
          pfVar5[0x19] = 0.0;
          pfVar5[0x1a] = 0.0;
          pfVar5[0x1b] = 0.0;
          pfVar5[0x1c] = fVar21;
          pfVar5[0x1d] = fVar19;
          pfVar5[0x1e] = fVar23;
          pfVar5[0x1f] = fVar6;
          pfVar5[0x20] = fVar18;
          pfVar5[0x21] = fVar22;
          pfVar5[0x22] = fVar7;
          pfVar5[0x23] = fVar20;
          *unaff_R14 = 6;
        }
        break;
      case 8:
        puVar13 = (uint64_t *)unaff_RBP[0x45];
        fVar20 = *(float *)(unaff_RBP + 0x40);
        fVar21 = *(float *)(unaff_RBP + 0x41);
        unaff_RBP[-0xe] = 0;
        unaff_RBP[-0xd] = 0;
        *(int32_t *)(unaff_RBP + -10) = *(int32_t *)(unaff_RBP + 0x3e);
        unaff_RBP[-0xc] = 0;
        unaff_RBP[-0xb] = 0;
        unaff_RBP[-8] = 0;
        unaff_RBP[-7] = 0;
        *(float *)((int64_t)unaff_RBP + -0x74) = unaff_XMM10_Da;
        *(float *)(unaff_RBP + -9) = fVar20 * 0.5;
        *(int32_t *)((int64_t)unaff_RBP + -0x2c) = *(int32_t *)(unaff_RBP + 0x3f);
        *(float *)((int64_t)unaff_RBP + -0x24) = fVar21 * 0.5;
        unaff_RBP[-0x10] = unaff_RDI;
        *(float *)(unaff_RBP + -0xf) = fStack000000000000002c;
        *(float *)((int64_t)unaff_RBP + -0x4c) = fStack000000000000002c;
        *(float *)((int64_t)unaff_RBP + -0x44) = fStack000000000000002c;
        *(float *)(unaff_RBP + -6) = fStack000000000000002c;
        *(float *)(unaff_RBP + -5) = fStack000000000000002c;
        *puVar13 = CONCAT44(fStack000000000000002c,unaff_XMM7_Da);
        puVar13[1] = CONCAT44(fStack000000000000002c,fStack0000000000000028);
        puVar13[2] = CONCAT44(fStack000000000000002c,fStack0000000000000028);
        puVar13[3] = CONCAT44(fStack000000000000002c,fVar20 * 0.5);
        puVar13[4] = CONCAT44(unaff_XMM9_Da,fStack0000000000000028);
        puVar13[5] = unaff_RDI;
        puVar13[6] = unaff_RDI;
        puVar13[7] = CONCAT44(fVar21 * 0.5,fStack000000000000002c);
        puVar13[8] = unaff_RDI;
        puVar13[9] = CONCAT44(fStack000000000000002c,unaff_XMM8_Da);
        puVar13[10] = 0;
        puVar13[0xb] = 0;
        puVar13[0xc] = in_stack_00000080;
        puVar13[0xd] = in_stack_00000088;
        puVar13[0xe] = in_stack_00000090;
        puVar13[0xf] = in_stack_00000098;
        puVar13[0x10] = in_stack_000000a0;
        puVar13[0x11] = in_stack_000000a8;
        puVar13[0x12] = in_stack_000000b0;
        puVar13[0x13] = in_stack_000000b8;
        puVar13[0x14] = in_stack_000000c0;
        puVar13[0x15] = in_stack_000000c8;
        puVar13[0x16] = in_stack_000000d0;
        puVar13[0x17] = in_stack_000000d8;
        *unaff_R14 = 8;
        break;
      case 0xc:
        lVar17 = 2;
        uStack0000000000000044 = 0;
        fStack000000000000004c = 0.0;
        fStack0000000000000074 = 0.0;
        fStack000000000000007c = 0.0;
        unaff_RBP[-0xe] = 0;
        unaff_RBP[-0xd] = 0;
        unaff_RBP[-0xc] = 0;
        unaff_RBP[-0xb] = 0;
        unaff_RBP[-8] = 0;
        unaff_RBP[-7] = 0;
        unaff_RBP[-6] = 0;
        unaff_RBP[-5] = 0;
        unaff_RBP[-4] = 0;
        unaff_RBP[-3] = 0;
        *unaff_RBP = 0;
        unaff_RBP[1] = 0;
        *(int32_t *)(unaff_RBP + -2) = *(int32_t *)(unaff_RBP + 0x3e);
        *(int32_t *)((int64_t)unaff_RBP + 0x24) = *(int32_t *)(unaff_RBP + 0x3f);
        unaff_RBP[2] = 0;
        unaff_RBP[3] = 0;
        unaff_RBP[6] = 0;
        unaff_RBP[7] = 0;
        fStack000000000000006c = *(float *)(unaff_RBP + 0x41) * 0.5;
        *(float *)(unaff_RBP + -0xf) = unaff_XMM8_Da;
        *(float *)((int64_t)unaff_RBP + -0x44) = unaff_XMM10_Da;
        *(float *)(unaff_RBP + -1) = *(float *)(unaff_RBP + 0x40) * 0.5;
        *(float *)((int64_t)unaff_RBP + 0x2c) = *(float *)(unaff_RBP + 0x41) * 0.5;
        fStack0000000000000034 = fStack000000000000002c;
        fStack000000000000003c = fStack000000000000002c;
        unaff_RBP[-0x10] = unaff_RDI;
        *(float *)((int64_t)unaff_RBP + -0x74) = fStack000000000000002c;
        unaff_RBP[-10] = unaff_RDI;
        *(float *)(unaff_RBP + -9) = fStack000000000000002c;
        *(float *)((int64_t)unaff_RBP + -0xc) = fStack000000000000002c;
        *(float *)((int64_t)unaff_RBP + -4) = fStack000000000000002c;
        *(float *)(unaff_RBP + 4) = fStack000000000000002c;
        *(float *)(unaff_RBP + 5) = fStack000000000000002c;
        puVar13 = (uint64_t *)unaff_RBP[0x45];
        puVar15 = &uStackX_20;
        do {
          puVar16 = puVar15;
          puVar14 = puVar13;
          uVar8 = puVar16[1];
          uVar9 = puVar16[2];
          uVar10 = puVar16[3];
          *puVar14 = *puVar16;
          puVar14[1] = uVar8;
          uVar8 = puVar16[4];
          uVar11 = puVar16[5];
          puVar14[2] = uVar9;
          puVar14[3] = uVar10;
          uVar9 = puVar16[6];
          uVar10 = puVar16[7];
          puVar14[4] = uVar8;
          puVar14[5] = uVar11;
          uVar8 = puVar16[8];
          uVar11 = puVar16[9];
          puVar14[6] = uVar9;
          puVar14[7] = uVar10;
          uVar9 = puVar16[10];
          uVar10 = puVar16[0xb];
          puVar14[8] = uVar8;
          puVar14[9] = uVar11;
          uVar8 = puVar16[0xc];
          uVar11 = puVar16[0xd];
          puVar14[10] = uVar9;
          puVar14[0xb] = uVar10;
          uVar9 = puVar16[0xe];
          uVar10 = puVar16[0xf];
          puVar14[0xc] = uVar8;
          puVar14[0xd] = uVar11;
          puVar14[0xe] = uVar9;
          puVar14[0xf] = uVar10;
          lVar17 = lVar17 + -1;
          puVar13 = puVar14 + 0x10;
          puVar15 = puVar16 + 0x10;
        } while (lVar17 != 0);
        uVar8 = puVar16[0x11];
        uVar9 = puVar16[0x12];
        uVar10 = puVar16[0x13];
        puVar14[0x10] = puVar16[0x10];
        puVar14[0x11] = uVar8;
        puVar14[0x12] = uVar9;
        puVar14[0x13] = uVar10;
        *unaff_R14 = 0xc;
      }
      break;
    case 7:
      iVar4 = *(int *)(unaff_RBP + 0x44);
      if (iVar4 == 3) {
        iVar12 = iVar12 * 8;
        goto code_r0x00018075c539;
      }
      if ((iVar4 == 4) || ((8 < iVar12 && (iVar12 != 0xc)))) {
                    // WARNING: Subroutine does not return
        memset(unaff_RBP[0x45],0,(int64_t)(iVar12 * 8) << 2);
      }
      switch(iVar12) {
      case 1:
        pfVar5 = (float *)unaff_RBP[0x45];
        fVar20 = *(float *)(unaff_RBP + 0x3e);
        fVar21 = *(float *)(unaff_RBP + 0x3f);
        fVar19 = *(float *)(unaff_RBP + 0x40);
        fVar23 = *(float *)(unaff_RBP + 0x41);
        *pfVar5 = unaff_XMM7_Da;
        pfVar5[1] = unaff_XMM9_Da;
        pfVar5[2] = unaff_XMM8_Da;
        pfVar5[3] = unaff_XMM10_Da;
        pfVar5[4] = fVar20;
        pfVar5[5] = fVar21;
        pfVar5[6] = fVar19;
        pfVar5[7] = fVar23;
        *unaff_R14 = 1;
        break;
      case 2:
        pfVar5 = (float *)unaff_RBP[0x45];
        fVar20 = *(float *)(unaff_RBP + 0x3e);
        fVar21 = *(float *)(unaff_RBP + 0x40);
        fVar19 = *(float *)(unaff_RBP + 0x3f);
        fVar23 = *(float *)(unaff_RBP + 0x41);
        *pfVar5 = unaff_XMM7_Da;
        pfVar5[1] = fStack000000000000002c;
        pfVar5[2] = fStack0000000000000028;
        pfVar5[3] = unaff_XMM9_Da;
        pfVar5[4] = unaff_XMM8_Da * 0.5;
        pfVar5[5] = unaff_XMM8_Da * 0.5;
        pfVar5[6] = unaff_XMM10_Da * 0.5;
        pfVar5[7] = unaff_XMM10_Da * 0.5;
        pfVar5[8] = fVar20;
        pfVar5[9] = fStack000000000000002c;
        pfVar5[10] = fStack0000000000000028;
        pfVar5[0xb] = fVar19;
        pfVar5[0xc] = fVar21;
        pfVar5[0xd] = fStack000000000000002c;
        pfVar5[0xe] = fStack0000000000000028;
        pfVar5[0xf] = fVar23;
        *unaff_R14 = 2;
        break;
      case 4:
        pfVar5 = (float *)unaff_RBP[0x45];
        fVar20 = *(float *)(unaff_RBP + 0x3e);
        fVar21 = *(float *)(unaff_RBP + 0x3f);
        fVar19 = *(float *)(unaff_RBP + 0x40);
        fVar23 = *(float *)(unaff_RBP + 0x41);
        *(uint64_t *)((int64_t)unaff_RBP + -0x74) = unaff_RDI;
        *pfVar5 = unaff_XMM7_Da;
        pfVar5[1] = fStack000000000000002c;
        pfVar5[2] = fStack0000000000000028;
        pfVar5[3] = fStack000000000000002c;
        pfVar5[4] = fStack0000000000000028;
        pfVar5[5] = unaff_XMM9_Da;
        pfVar5[6] = fStack000000000000002c;
        pfVar5[7] = fStack0000000000000028;
        pfVar5[8] = unaff_XMM8_Da * 0.5;
        pfVar5[9] = unaff_XMM8_Da * 0.5;
        pfVar5[10] = fStack000000000000002c;
        pfVar5[0xb] = fStack0000000000000028;
        pfVar5[0xc] = unaff_XMM10_Da * 0.5;
        pfVar5[0xd] = unaff_XMM10_Da * 0.5;
        pfVar5[0xe] = fStack000000000000002c;
        pfVar5[0xf] = fStack0000000000000028;
        unaff_RBP[-0x10] = unaff_RDI;
        pfVar5[0x10] = fStack000000000000002c;
        pfVar5[0x11] = fStack0000000000000028;
        pfVar5[0x12] = fVar20 * 0.5;
        pfVar5[0x13] = fStack000000000000002c;
        *(uint64_t *)((int64_t)unaff_RBP + -0x6c) = unaff_RDI;
        fVar20 = *(float *)(unaff_RBP + -0x10);
        fVar6 = *(float *)((int64_t)unaff_RBP + -0x7c);
        fVar18 = *(float *)((int64_t)unaff_RBP + -0x74);
        pfVar5[0x14] = fStack0000000000000028;
        pfVar5[0x15] = fStack000000000000002c;
        pfVar5[0x16] = fStack0000000000000028;
        pfVar5[0x17] = fVar21 * 0.5;
        fVar21 = *(float *)(unaff_RBP + -0xe);
        fVar22 = *(float *)((int64_t)unaff_RBP + -0x6c);
        fVar7 = *(float *)(unaff_RBP + -0xd);
        pfVar5[0x18] = fVar20;
        pfVar5[0x19] = fVar6;
        pfVar5[0x1a] = fVar19 * 0.5;
        pfVar5[0x1b] = fVar18;
        pfVar5[0x1c] = fVar21;
        pfVar5[0x1d] = fVar22;
        pfVar5[0x1e] = fVar7;
        pfVar5[0x1f] = fVar23 * 0.5;
        *unaff_R14 = 4;
        break;
      case 6:
        *(uint64_t *)((int64_t)unaff_RBP + -0x4c) = unaff_RDI;
        if (iVar4 == 2) {
          fStack0000000000000034 = 0.0;
          fStack0000000000000038 = 0.0;
          fStack000000000000003c = 0.0;
          unaff_RBP[-0xe] = 0;
          unaff_RBP[-0xd] = 0;
          *(int32_t *)((int64_t)unaff_RBP + -0x74) = *(int32_t *)(unaff_RBP + 0x3e);
          *(float *)(unaff_RBP + -10) = *(float *)(unaff_RBP + 0x40) * 0.5;
          *(float *)((int64_t)unaff_RBP + -0x44) = *(float *)(unaff_RBP + 0x40) * 0.5;
          *(int32_t *)(unaff_RBP + -0xb) = *(int32_t *)(unaff_RBP + 0x3f);
          *(float *)(unaff_RBP + -6) = *(float *)(unaff_RBP + 0x41) * 0.5;
          *(float *)(unaff_RBP + -5) = *(float *)(unaff_RBP + 0x41) * 0.5;
          unaff_RBP[-0x10] = unaff_RDI;
          *(float *)(unaff_RBP + -0xf) = fStack000000000000002c;
          unaff_RBP[-0xc] = unaff_RDI;
          *(float *)((int64_t)unaff_RBP + -0x54) = fStack000000000000002c;
          unaff_RBP[-8] = 0;
          unaff_RBP[-7] = 0;
          *(float *)((int64_t)unaff_RBP + -0x2c) = fStack000000000000002c;
          *(float *)((int64_t)unaff_RBP + -0x24) = fStack000000000000002c;
          fStack0000000000000040 = unaff_XMM9_Da;
          fStack0000000000000048 = fStack0000000000000028;
          fStack000000000000004c = fStack000000000000002c;
          fStack0000000000000054 = unaff_XMM8_Da;
          fStack0000000000000058 = fStack000000000000002c;
          fStack000000000000005c = fStack0000000000000028;
          fStack0000000000000074 = fStack0000000000000028;
          fStack000000000000007c = unaff_XMM10_Da;
        }
        else {
          fStack0000000000000040 = 0.0;
          fStack0000000000000048 = 0.0;
          fStack000000000000004c = 0.0;
          unaff_RBP[-0x10] = 0;
          unaff_RBP[-0xf] = 0;
          *(int32_t *)((int64_t)unaff_RBP + -0x54) = *(int32_t *)(unaff_RBP + 0x3f);
          *(int32_t *)(unaff_RBP + -0xe) = *(int32_t *)(unaff_RBP + 0x3e);
          *(float *)((int64_t)unaff_RBP + -0x34) = *(float *)(unaff_RBP + 0x41) * 0.5;
          *(float *)((int64_t)unaff_RBP + -0x24) = *(float *)(unaff_RBP + 0x41) * 0.5;
          *(float *)(unaff_RBP + -10) = *(float *)(unaff_RBP + 0x40) * 0.5;
          *(float *)(unaff_RBP + -8) = *(float *)(unaff_RBP + 0x40) * 0.5;
          *(uint64_t *)((int64_t)unaff_RBP + -0x6c) = unaff_RDI;
          *(uint64_t *)((int64_t)unaff_RBP + -100) = unaff_RDI;
          *(uint64_t *)((int64_t)unaff_RBP + -0x5c) = unaff_RDI;
          *(float *)((int64_t)unaff_RBP + -0x44) = fStack000000000000002c;
          *(uint64_t *)((int64_t)unaff_RBP + -0x3c) = unaff_RDI;
          unaff_RBP[-6] = unaff_RDI;
          *(float *)(unaff_RBP + -5) = fStack000000000000002c;
          fStack0000000000000034 = fStack000000000000002c;
          fStack0000000000000038 = fStack0000000000000028;
          fStack000000000000003c = unaff_XMM9_Da;
          fStack0000000000000054 = fStack0000000000000028;
          fStack0000000000000058 = unaff_XMM8_Da;
          fStack000000000000005c = fStack000000000000002c;
          fStack0000000000000074 = unaff_XMM10_Da;
          fStack000000000000007c = fStack0000000000000028;
        }
        puVar13 = (uint64_t *)unaff_RBP[0x45];
        *puVar13 = CONCAT44(fStack000000000000002c,unaff_XMM7_Da);
        puVar13[1] = CONCAT44(fStack000000000000002c,fStack0000000000000028);
        puVar13[2] = CONCAT44(fStack0000000000000034,fStack0000000000000038);
        puVar13[3] = CONCAT44(fStack000000000000003c,fStack0000000000000038);
        puVar13[4] = CONCAT44(fStack000000000000004c,fStack0000000000000040);
        puVar13[5] = CONCAT44(fStack000000000000004c,fStack0000000000000048);
        puVar13[6] = CONCAT44(fStack0000000000000054,fStack000000000000005c);
        puVar13[7] = CONCAT44(fStack000000000000005c,fStack0000000000000058);
        puVar13[8] = 0;
        puVar13[9] = 0;
        puVar13[10] = CONCAT44(fStack0000000000000074,fStack000000000000002c);
        puVar13[0xb] = CONCAT44(fStack000000000000007c,fStack000000000000002c);
        puVar13[0xc] = in_stack_00000080;
        puVar13[0xd] = in_stack_00000088;
        puVar13[0xe] = in_stack_00000090;
        puVar13[0xf] = in_stack_00000098;
        puVar13[0x10] = in_stack_000000a0;
        puVar13[0x11] = in_stack_000000a8;
        puVar13[0x12] = in_stack_000000b0;
        puVar13[0x13] = in_stack_000000b8;
        puVar13[0x14] = in_stack_000000c0;
        puVar13[0x15] = in_stack_000000c8;
        puVar13[0x16] = in_stack_000000d0;
        puVar13[0x17] = in_stack_000000d8;
        *unaff_R14 = 6;
        break;
      case 8:
        fStack0000000000000034 = 0.0;
        fStack000000000000003c = 0.0;
        fStack0000000000000054 = 0.0;
        fStack000000000000005c = 0.0;
        lVar17 = 2;
        fStack0000000000000074 = 0.0;
        fStack000000000000007c = 0.0;
        unaff_RBP[-0xe] = 0;
        unaff_RBP[-0xd] = 0;
        *(int32_t *)(unaff_RBP + -10) = *(int32_t *)(unaff_RBP + 0x3e);
        unaff_RBP[-8] = 0;
        unaff_RBP[-7] = 0;
        unaff_RBP[-4] = 0;
        unaff_RBP[-3] = 0;
        unaff_RBP[-0xc] = 0;
        unaff_RBP[-0xb] = 0;
        *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RBP + 0x40);
        *(int32_t *)((int64_t)unaff_RBP + -0x2c) = *(int32_t *)(unaff_RBP + 0x3f);
        *(int32_t *)((int64_t)unaff_RBP + 0x1c) = *(int32_t *)(unaff_RBP + 0x41);
        *(float *)((int64_t)unaff_RBP + -0x74) = unaff_XMM10_Da;
        fStack000000000000006c = fStack000000000000002c;
        unaff_RBP[-0x10] = unaff_RDI;
        *(float *)(unaff_RBP + -0xf) = fStack000000000000002c;
        *(uint64_t *)((int64_t)unaff_RBP + -0x4c) = unaff_RDI;
        *(float *)((int64_t)unaff_RBP + -0x44) = fStack000000000000002c;
        *(float *)(unaff_RBP + -6) = fStack000000000000002c;
        unaff_RBP[-5] = unaff_RDI;
        unaff_RBP[-2] = unaff_RDI;
        *(float *)((int64_t)unaff_RBP + -4) = fStack000000000000002c;
        *unaff_RBP = 0;
        unaff_RBP[1] = 0;
        unaff_RBP[2] = unaff_RDI;
        *(float *)(unaff_RBP + 3) = fStack000000000000002c;
        puVar13 = (uint64_t *)unaff_RBP[0x45];
        puVar15 = &uStackX_20;
        do {
          uVar8 = puVar15[1];
          uVar9 = puVar15[2];
          uVar10 = puVar15[3];
          *puVar13 = *puVar15;
          puVar13[1] = uVar8;
          uVar8 = puVar15[4];
          uVar11 = puVar15[5];
          puVar13[2] = uVar9;
          puVar13[3] = uVar10;
          uVar9 = puVar15[6];
          uVar10 = puVar15[7];
          puVar13[4] = uVar8;
          puVar13[5] = uVar11;
          uVar8 = puVar15[8];
          uVar11 = puVar15[9];
          puVar13[6] = uVar9;
          puVar13[7] = uVar10;
          uVar9 = puVar15[10];
          uVar10 = puVar15[0xb];
          puVar13[8] = uVar8;
          puVar13[9] = uVar11;
          uVar8 = puVar15[0xc];
          uVar11 = puVar15[0xd];
          puVar13[10] = uVar9;
          puVar13[0xb] = uVar10;
          uVar9 = puVar15[0xe];
          uVar10 = puVar15[0xf];
          puVar13[0xc] = uVar8;
          puVar13[0xd] = uVar11;
          puVar13[0xe] = uVar9;
          puVar13[0xf] = uVar10;
          lVar17 = lVar17 + -1;
          puVar13 = puVar13 + 0x10;
          puVar15 = puVar15 + 0x10;
        } while (lVar17 != 0);
        *unaff_R14 = 8;
        break;
      case 0xc:
        fStack0000000000000034 = 0.0;
        fStack000000000000003c = 0.0;
        uStack0000000000000064 = 0;
        fStack000000000000006c = 0.0;
        lVar17 = 3;
        unaff_RBP[-0xe] = 0;
        unaff_RBP[-0xd] = 0;
        unaff_RBP[-8] = 0;
        unaff_RBP[-7] = 0;
        unaff_RBP[-4] = 0;
        unaff_RBP[-3] = 0;
        *unaff_RBP = 0;
        unaff_RBP[1] = 0;
        *(int32_t *)((int64_t)unaff_RBP + 0x24) = *(int32_t *)(unaff_RBP + 0x3f);
        unaff_RBP[6] = 0;
        unaff_RBP[7] = 0;
        *(int32_t *)(unaff_RBP + 0xb) = *(int32_t *)(unaff_RBP + 0x40);
        uStack0000000000000044 = 0;
        fStack000000000000004c = 0.0;
        fStack0000000000000074 = 0.0;
        fStack000000000000007c = 0.0;
        unaff_RBP[-0xc] = 0;
        unaff_RBP[-0xb] = 0;
        unaff_RBP[-6] = 0;
        unaff_RBP[-5] = 0;
        unaff_RBP[0xe] = 0;
        unaff_RBP[0xf] = 0;
        *(int32_t *)(unaff_RBP + -2) = *(int32_t *)(unaff_RBP + 0x3e);
        *(int32_t *)((int64_t)unaff_RBP + 0x8c) = *(int32_t *)(unaff_RBP + 0x41);
        *(float *)(unaff_RBP + -0xf) = unaff_XMM8_Da;
        *(float *)((int64_t)unaff_RBP + -0x44) = unaff_XMM10_Da;
        unaff_RBP[-0x10] = unaff_RDI;
        *(float *)((int64_t)unaff_RBP + -0x74) = fStack000000000000002c;
        unaff_RBP[-10] = unaff_RDI;
        *(float *)(unaff_RBP + -9) = fStack000000000000002c;
        *(uint64_t *)((int64_t)unaff_RBP + -0xc) = unaff_RDI;
        *(float *)((int64_t)unaff_RBP + -4) = fStack000000000000002c;
        unaff_RBP[2] = 0;
        unaff_RBP[3] = 0;
        *(float *)(unaff_RBP + 4) = fStack000000000000002c;
        unaff_RBP[5] = unaff_RDI;
        unaff_RBP[8] = 0;
        unaff_RBP[9] = 0;
        unaff_RBP[10] = unaff_RDI;
        *(float *)((int64_t)unaff_RBP + 0x5c) = fStack000000000000002c;
        unaff_RBP[0xc] = 0;
        unaff_RBP[0xd] = 0;
        unaff_RBP[0x10] = unaff_RDI;
        *(float *)(unaff_RBP + 0x11) = fStack000000000000002c;
        unaff_RBP[0x12] = 0;
        unaff_RBP[0x13] = 0;
        puVar13 = (uint64_t *)unaff_RBP[0x45];
        puVar15 = &uStackX_20;
        do {
          uVar8 = puVar15[1];
          uVar9 = puVar15[2];
          uVar10 = puVar15[3];
          *puVar13 = *puVar15;
          puVar13[1] = uVar8;
          uVar8 = puVar15[4];
          uVar11 = puVar15[5];
          puVar13[2] = uVar9;
          puVar13[3] = uVar10;
          uVar9 = puVar15[6];
          uVar10 = puVar15[7];
          puVar13[4] = uVar8;
          puVar13[5] = uVar11;
          uVar8 = puVar15[8];
          uVar11 = puVar15[9];
          puVar13[6] = uVar9;
          puVar13[7] = uVar10;
          uVar9 = puVar15[10];
          uVar10 = puVar15[0xb];
          puVar13[8] = uVar8;
          puVar13[9] = uVar11;
          uVar8 = puVar15[0xc];
          uVar11 = puVar15[0xd];
          puVar13[10] = uVar9;
          puVar13[0xb] = uVar10;
          uVar9 = puVar15[0xe];
          uVar10 = puVar15[0xf];
          puVar13[0xc] = uVar8;
          puVar13[0xd] = uVar11;
          puVar13[0xe] = uVar9;
          puVar13[0xf] = uVar10;
          lVar17 = lVar17 + -1;
          puVar13 = puVar13 + 0x10;
          puVar15 = puVar15 + 0x10;
        } while (lVar17 != 0);
        *unaff_R14 = 0xc;
      }
      break;
    case 8:
      iVar4 = *(int *)(unaff_RBP + 0x44);
      if (iVar4 == 3) {
        iVar12 = iVar12 * 0xc;
        goto code_r0x00018075c539;
      }
      if ((iVar4 == 4) || ((8 < iVar12 && (iVar12 != 0xc)))) {
                    // WARNING: Subroutine does not return
        memset(unaff_RBP[0x45],0,(int64_t)(iVar12 * 0xc) << 2);
      }
      switch(iVar12) {
      case 1:
        fVar20 = *(float *)(unaff_RBP + 0x3f);
        fVar21 = *(float *)(unaff_RBP + 0x3e);
        fVar19 = *(float *)(unaff_RBP + 0x40);
        fVar23 = *(float *)(unaff_RBP + 0x41);
        pfVar5 = (float *)unaff_RBP[0x45];
        *pfVar5 = unaff_XMM7_Da;
        pfVar5[1] = unaff_XMM9_Da;
        pfVar5[2] = unaff_XMM8_Da;
        pfVar5[3] = unaff_XMM10_Da;
        pfVar5[4] = fVar21;
        pfVar5[5] = fVar20;
        pfVar5[6] = fVar19;
        pfVar5[7] = fVar23;
        pfVar5[8] = 0.0;
        pfVar5[9] = 0.0;
        pfVar5[10] = 0.0;
        pfVar5[0xb] = 0.0;
        *unaff_R14 = 1;
        break;
      case 2:
        pfVar5 = (float *)unaff_RBP[0x45];
        fVar20 = *(float *)(unaff_RBP + 0x3e);
        fVar21 = *(float *)(unaff_RBP + 0x40);
        fVar19 = *(float *)(unaff_RBP + 0x3f);
        fVar23 = *(float *)(unaff_RBP + 0x41);
        *pfVar5 = unaff_XMM7_Da;
        pfVar5[1] = fStack000000000000002c;
        pfVar5[2] = fStack0000000000000028;
        pfVar5[3] = unaff_XMM9_Da;
        pfVar5[4] = unaff_XMM8_Da * 0.5;
        pfVar5[5] = unaff_XMM8_Da * 0.5;
        pfVar5[6] = unaff_XMM10_Da * 0.5;
        pfVar5[7] = unaff_XMM10_Da * 0.5;
        pfVar5[8] = fVar20;
        pfVar5[9] = fStack000000000000002c;
        pfVar5[10] = fStack0000000000000028;
        pfVar5[0xb] = fVar19;
        pfVar5[0xc] = fVar21;
        pfVar5[0xd] = fStack000000000000002c;
        pfVar5[0xe] = fStack0000000000000028;
        pfVar5[0xf] = fVar23;
        pfVar5[0x10] = 0.0;
        pfVar5[0x11] = 0.0;
        pfVar5[0x12] = 0.0;
        pfVar5[0x13] = 0.0;
        pfVar5[0x14] = 0.0;
        pfVar5[0x15] = 0.0;
        pfVar5[0x16] = 0.0;
        pfVar5[0x17] = 0.0;
        *unaff_R14 = 2;
        break;
      case 4:
        puVar13 = (uint64_t *)unaff_RBP[0x45];
        fVar20 = *(float *)(unaff_RBP + 0x3e);
        fVar21 = *(float *)(unaff_RBP + 0x3f);
        *(float *)(unaff_RBP + -0xf) = *(float *)(unaff_RBP + 0x40) * 0.5;
        unaff_RBP[-0x10] = unaff_RDI;
        *(uint64_t *)((int64_t)unaff_RBP + -0x74) = unaff_RDI;
        *(float *)((int64_t)unaff_RBP + -100) = *(float *)(unaff_RBP + 0x41) * 0.5;
        unaff_RBP[-0xc] = 0;
        unaff_RBP[-0xb] = 0;
        unaff_RBP[-8] = 0;
        unaff_RBP[-7] = 0;
        *(uint64_t *)((int64_t)unaff_RBP + -0x6c) = unaff_RDI;
        unaff_RBP[-10] = 0;
        unaff_RBP[-9] = 0;
        unaff_RBP[-6] = 0;
        unaff_RBP[-5] = 0;
        *puVar13 = CONCAT44(fStack000000000000002c,unaff_XMM7_Da);
        puVar13[1] = CONCAT44(fStack000000000000002c,fStack0000000000000028);
        puVar13[2] = CONCAT44(unaff_XMM9_Da,fStack0000000000000028);
        puVar13[3] = unaff_RDI;
        puVar13[4] = CONCAT44(unaff_XMM8_Da * 0.5,unaff_XMM8_Da * 0.5);
        puVar13[5] = unaff_RDI;
        puVar13[6] = CONCAT44(unaff_XMM10_Da * 0.5,unaff_XMM10_Da * 0.5);
        puVar13[7] = unaff_RDI;
        puVar13[8] = unaff_RDI;
        puVar13[9] = CONCAT44(fStack000000000000002c,fVar20 * 0.5);
        puVar13[10] = CONCAT44(fStack000000000000002c,fStack0000000000000028);
        puVar13[0xb] = CONCAT44(fVar21 * 0.5,fStack0000000000000028);
        puVar13[0xc] = in_stack_00000080;
        puVar13[0xd] = in_stack_00000088;
        puVar13[0xe] = in_stack_00000090;
        puVar13[0xf] = in_stack_00000098;
        puVar13[0x10] = in_stack_000000a0;
        puVar13[0x11] = in_stack_000000a8;
        puVar13[0x12] = in_stack_000000b0;
        puVar13[0x13] = in_stack_000000b8;
        puVar13[0x14] = in_stack_000000c0;
        puVar13[0x15] = in_stack_000000c8;
        puVar13[0x16] = in_stack_000000d0;
        puVar13[0x17] = in_stack_000000d8;
        *unaff_R14 = 4;
        break;
      case 6:
        uStack0000000000000064 = 0;
        fStack000000000000006c = 0.0;
        *(uint64_t *)((int64_t)unaff_RBP + -0x4c) = unaff_RDI;
        if (iVar4 == 2) {
          fStack0000000000000034 = 0.0;
          fStack000000000000003c = 0.0;
          lVar17 = 2;
          unaff_RBP[-0xe] = 0;
          unaff_RBP[-0xd] = 0;
          *(int32_t *)((int64_t)unaff_RBP + -0x74) = *(int32_t *)(unaff_RBP + 0x3e);
          *(float *)(unaff_RBP + -10) = *(float *)(unaff_RBP + 0x40) * 0.5;
          *(float *)((int64_t)unaff_RBP + -0x44) = *(float *)(unaff_RBP + 0x40) * 0.5;
          *(int32_t *)(unaff_RBP + -0xb) = *(int32_t *)(unaff_RBP + 0x3f);
          *(float *)(unaff_RBP + -6) = *(float *)(unaff_RBP + 0x41) * 0.5;
          *(float *)(unaff_RBP + -5) = *(float *)(unaff_RBP + 0x41) * 0.5;
          unaff_RBP[-2] = 0;
          unaff_RBP[-1] = 0;
          unaff_RBP[2] = 0;
          unaff_RBP[3] = 0;
          unaff_RBP[6] = 0;
          unaff_RBP[7] = 0;
          unaff_RBP[-0x10] = unaff_RDI;
          *(float *)(unaff_RBP + -0xf) = fStack000000000000002c;
          unaff_RBP[-0xc] = unaff_RDI;
          *(float *)((int64_t)unaff_RBP + -0x54) = fStack000000000000002c;
          unaff_RBP[-8] = 0;
          unaff_RBP[-7] = 0;
          *(float *)((int64_t)unaff_RBP + -0x2c) = fStack000000000000002c;
          *(float *)((int64_t)unaff_RBP + -0x24) = fStack000000000000002c;
          unaff_RBP[-4] = 0;
          unaff_RBP[-3] = 0;
          *unaff_RBP = 0;
          unaff_RBP[1] = 0;
          unaff_RBP[4] = 0;
          unaff_RBP[5] = 0;
          puVar13 = (uint64_t *)unaff_RBP[0x45];
          puVar15 = &uStackX_20;
          do {
            puVar14 = puVar13 + 0x10;
            uVar8 = puVar15[1];
            uVar9 = puVar15[2];
            uVar10 = puVar15[3];
            puVar16 = puVar15 + 0x10;
            *puVar13 = *puVar15;
            puVar13[1] = uVar8;
            uVar8 = puVar15[4];
            uVar11 = puVar15[5];
            puVar13[2] = uVar9;
            puVar13[3] = uVar10;
            uVar9 = puVar15[6];
            uVar10 = puVar15[7];
            puVar13[4] = uVar8;
            puVar13[5] = uVar11;
            uVar8 = puVar15[8];
            uVar11 = puVar15[9];
            puVar13[6] = uVar9;
            puVar13[7] = uVar10;
            uVar9 = puVar15[10];
            uVar10 = puVar15[0xb];
            puVar13[8] = uVar8;
            puVar13[9] = uVar11;
            uVar8 = puVar15[0xc];
            uVar11 = puVar15[0xd];
            puVar13[10] = uVar9;
            puVar13[0xb] = uVar10;
            uVar9 = puVar15[0xe];
            uVar10 = puVar15[0xf];
            puVar13[0xc] = uVar8;
            puVar13[0xd] = uVar11;
            puVar13[0xe] = uVar9;
            puVar13[0xf] = uVar10;
            lVar17 = lVar17 + -1;
            puVar13 = puVar14;
            puVar15 = puVar16;
          } while (lVar17 != 0);
        }
        else {
          lVar17 = 2;
          uStack0000000000000044 = 0;
          fStack000000000000004c = 0.0;
          unaff_RBP[-0x10] = 0;
          unaff_RBP[-0xf] = 0;
          *(int32_t *)((int64_t)unaff_RBP + -0x54) = *(int32_t *)(unaff_RBP + 0x3f);
          *(int32_t *)(unaff_RBP + -0xe) = *(int32_t *)(unaff_RBP + 0x3e);
          *(float *)((int64_t)unaff_RBP + -0x34) = *(float *)(unaff_RBP + 0x41) * 0.5;
          *(float *)((int64_t)unaff_RBP + -0x24) = *(float *)(unaff_RBP + 0x41) * 0.5;
          *(float *)(unaff_RBP + -10) = *(float *)(unaff_RBP + 0x40) * 0.5;
          *(float *)(unaff_RBP + -8) = *(float *)(unaff_RBP + 0x40) * 0.5;
          unaff_RBP[-4] = 0;
          unaff_RBP[-3] = 0;
          *unaff_RBP = 0;
          unaff_RBP[1] = 0;
          unaff_RBP[4] = 0;
          unaff_RBP[5] = 0;
          fStack000000000000005c = fStack000000000000002c;
          *(uint64_t *)((int64_t)unaff_RBP + -0x6c) = unaff_RDI;
          *(uint64_t *)((int64_t)unaff_RBP + -100) = unaff_RDI;
          *(uint64_t *)((int64_t)unaff_RBP + -0x5c) = unaff_RDI;
          *(float *)((int64_t)unaff_RBP + -0x44) = fStack000000000000002c;
          *(uint64_t *)((int64_t)unaff_RBP + -0x3c) = unaff_RDI;
          unaff_RBP[-6] = unaff_RDI;
          *(float *)(unaff_RBP + -5) = fStack000000000000002c;
          unaff_RBP[-2] = 0;
          unaff_RBP[-1] = 0;
          unaff_RBP[2] = 0;
          unaff_RBP[3] = 0;
          unaff_RBP[6] = 0;
          unaff_RBP[7] = 0;
          puVar13 = (uint64_t *)unaff_RBP[0x45];
          puVar15 = &uStackX_20;
          do {
            puVar14 = puVar13 + 0x10;
            uVar8 = puVar15[1];
            uVar9 = puVar15[2];
            uVar10 = puVar15[3];
            puVar16 = puVar15 + 0x10;
            *puVar13 = *puVar15;
            puVar13[1] = uVar8;
            uVar8 = puVar15[4];
            uVar11 = puVar15[5];
            puVar13[2] = uVar9;
            puVar13[3] = uVar10;
            uVar9 = puVar15[6];
            uVar10 = puVar15[7];
            puVar13[4] = uVar8;
            puVar13[5] = uVar11;
            uVar8 = puVar15[8];
            uVar11 = puVar15[9];
            puVar13[6] = uVar9;
            puVar13[7] = uVar10;
            uVar9 = puVar15[10];
            uVar10 = puVar15[0xb];
            puVar13[8] = uVar8;
            puVar13[9] = uVar11;
            uVar8 = puVar15[0xc];
            uVar11 = puVar15[0xd];
            puVar13[10] = uVar9;
            puVar13[0xb] = uVar10;
            uVar9 = puVar15[0xe];
            uVar10 = puVar15[0xf];
            puVar13[0xc] = uVar8;
            puVar13[0xd] = uVar11;
            puVar13[0xe] = uVar9;
            puVar13[0xf] = uVar10;
            lVar17 = lVar17 + -1;
            puVar13 = puVar14;
            puVar15 = puVar16;
          } while (lVar17 != 0);
        }
        uVar8 = puVar16[1];
        uVar9 = puVar16[2];
        uVar10 = puVar16[3];
        *puVar14 = *puVar16;
        puVar14[1] = uVar8;
        puVar14[2] = uVar9;
        puVar14[3] = uVar10;
        *unaff_R14 = 6;
        break;
      case 8:
        fStack0000000000000034 = 0.0;
        fStack000000000000003c = 0.0;
        fStack0000000000000054 = 0.0;
        fStack000000000000005c = 0.0;
        lVar17 = 3;
        fStack0000000000000074 = 0.0;
        fStack000000000000007c = 0.0;
        unaff_RBP[-0xe] = 0;
        unaff_RBP[-0xd] = 0;
        *(int32_t *)(unaff_RBP + -10) = *(int32_t *)(unaff_RBP + 0x3e);
        unaff_RBP[-8] = 0;
        unaff_RBP[-7] = 0;
        unaff_RBP[-4] = 0;
        unaff_RBP[-3] = 0;
        *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RBP + 0x40);
        unaff_RBP[-0xc] = 0;
        unaff_RBP[-0xb] = 0;
        *(int32_t *)((int64_t)unaff_RBP + 0x1c) = *(int32_t *)(unaff_RBP + 0x41);
        *(int32_t *)((int64_t)unaff_RBP + -0x2c) = *(int32_t *)(unaff_RBP + 0x3f);
        unaff_RBP[6] = 0;
        unaff_RBP[7] = 0;
        unaff_RBP[10] = 0;
        unaff_RBP[0xb] = 0;
        unaff_RBP[0xe] = 0;
        unaff_RBP[0xf] = 0;
        unaff_RBP[0x12] = 0;
        unaff_RBP[0x13] = 0;
        *(float *)((int64_t)unaff_RBP + -0x74) = unaff_XMM10_Da;
        fStack000000000000006c = fStack000000000000002c;
        unaff_RBP[-0x10] = unaff_RDI;
        *(float *)(unaff_RBP + -0xf) = fStack000000000000002c;
        *(uint64_t *)((int64_t)unaff_RBP + -0x4c) = unaff_RDI;
        *(float *)((int64_t)unaff_RBP + -0x44) = fStack000000000000002c;
        *(float *)(unaff_RBP + -6) = fStack000000000000002c;
        unaff_RBP[-5] = unaff_RDI;
        unaff_RBP[-2] = unaff_RDI;
        *(float *)((int64_t)unaff_RBP + -4) = fStack000000000000002c;
        *unaff_RBP = 0;
        unaff_RBP[1] = 0;
        unaff_RBP[2] = unaff_RDI;
        *(float *)(unaff_RBP + 3) = fStack000000000000002c;
        unaff_RBP[4] = 0;
        unaff_RBP[5] = 0;
        unaff_RBP[8] = 0;
        unaff_RBP[9] = 0;
        unaff_RBP[0xc] = 0;
        unaff_RBP[0xd] = 0;
        unaff_RBP[0x10] = 0;
        unaff_RBP[0x11] = 0;
        puVar13 = (uint64_t *)unaff_RBP[0x45];
        puVar15 = &uStackX_20;
        do {
          uVar8 = puVar15[1];
          uVar9 = puVar15[2];
          uVar10 = puVar15[3];
          *puVar13 = *puVar15;
          puVar13[1] = uVar8;
          uVar8 = puVar15[4];
          uVar11 = puVar15[5];
          puVar13[2] = uVar9;
          puVar13[3] = uVar10;
          uVar9 = puVar15[6];
          uVar10 = puVar15[7];
          puVar13[4] = uVar8;
          puVar13[5] = uVar11;
          uVar8 = puVar15[8];
          uVar11 = puVar15[9];
          puVar13[6] = uVar9;
          puVar13[7] = uVar10;
          uVar9 = puVar15[10];
          uVar10 = puVar15[0xb];
          puVar13[8] = uVar8;
          puVar13[9] = uVar11;
          uVar8 = puVar15[0xc];
          uVar11 = puVar15[0xd];
          puVar13[10] = uVar9;
          puVar13[0xb] = uVar10;
          uVar9 = puVar15[0xe];
          uVar10 = puVar15[0xf];
          puVar13[0xc] = uVar8;
          puVar13[0xd] = uVar11;
          puVar13[0xe] = uVar9;
          puVar13[0xf] = uVar10;
          lVar17 = lVar17 + -1;
          puVar13 = puVar13 + 0x10;
          puVar15 = puVar15 + 0x10;
        } while (lVar17 != 0);
        *unaff_R14 = 8;
        break;
      case 0xc:
        fStack0000000000000034 = 0.0;
        fStack000000000000003c = 0.0;
        uStack0000000000000064 = 0;
        fStack000000000000006c = 0.0;
        lVar17 = 4;
        unaff_RBP[-0xe] = 0;
        unaff_RBP[-0xd] = 0;
        unaff_RBP[-8] = 0;
        unaff_RBP[-7] = 0;
        unaff_RBP[-4] = 0;
        unaff_RBP[-3] = 0;
        *unaff_RBP = 0;
        unaff_RBP[1] = 0;
        *(int32_t *)((int64_t)unaff_RBP + 0x24) = *(int32_t *)(unaff_RBP + 0x3f);
        unaff_RBP[6] = 0;
        unaff_RBP[7] = 0;
        *(int32_t *)(unaff_RBP + 0xb) = *(int32_t *)(unaff_RBP + 0x40);
        unaff_RBP[0xe] = 0;
        unaff_RBP[0xf] = 0;
        uStack0000000000000044 = 0;
        fStack000000000000004c = 0.0;
        fStack0000000000000074 = 0.0;
        fStack000000000000007c = 0.0;
        unaff_RBP[-0xc] = 0;
        unaff_RBP[-0xb] = 0;
        unaff_RBP[-6] = 0;
        unaff_RBP[-5] = 0;
        *(int32_t *)((int64_t)unaff_RBP + 0x8c) = *(int32_t *)(unaff_RBP + 0x41);
        *(int32_t *)(unaff_RBP + -2) = *(int32_t *)(unaff_RBP + 0x3e);
        unaff_RBP[0x14] = 0;
        unaff_RBP[0x15] = 0;
        unaff_RBP[0x18] = 0;
        unaff_RBP[0x19] = 0;
        unaff_RBP[0x1c] = 0;
        unaff_RBP[0x1d] = 0;
        unaff_RBP[0x20] = 0;
        unaff_RBP[0x21] = 0;
        unaff_RBP[0x24] = 0;
        unaff_RBP[0x25] = 0;
        unaff_RBP[0x28] = 0;
        unaff_RBP[0x29] = 0;
        *(float *)(unaff_RBP + -0xf) = unaff_XMM8_Da;
        *(float *)((int64_t)unaff_RBP + -0x44) = unaff_XMM10_Da;
        unaff_RBP[-0x10] = unaff_RDI;
        *(float *)((int64_t)unaff_RBP + -0x74) = fStack000000000000002c;
        unaff_RBP[-10] = unaff_RDI;
        *(float *)(unaff_RBP + -9) = fStack000000000000002c;
        *(uint64_t *)((int64_t)unaff_RBP + -0xc) = unaff_RDI;
        *(float *)((int64_t)unaff_RBP + -4) = fStack000000000000002c;
        unaff_RBP[2] = 0;
        unaff_RBP[3] = 0;
        *(float *)(unaff_RBP + 4) = fStack000000000000002c;
        unaff_RBP[5] = unaff_RDI;
        unaff_RBP[8] = 0;
        unaff_RBP[9] = 0;
        unaff_RBP[10] = unaff_RDI;
        *(float *)((int64_t)unaff_RBP + 0x5c) = fStack000000000000002c;
        unaff_RBP[0xc] = 0;
        unaff_RBP[0xd] = 0;
        unaff_RBP[0x10] = unaff_RDI;
        *(float *)(unaff_RBP + 0x11) = fStack000000000000002c;
        unaff_RBP[0x12] = 0;
        unaff_RBP[0x13] = 0;
        unaff_RBP[0x16] = 0;
        unaff_RBP[0x17] = 0;
        unaff_RBP[0x1a] = 0;
        unaff_RBP[0x1b] = 0;
        unaff_RBP[0x1e] = 0;
        unaff_RBP[0x1f] = 0;
        unaff_RBP[0x22] = 0;
        unaff_RBP[0x23] = 0;
        unaff_RBP[0x26] = 0;
        unaff_RBP[0x27] = 0;
        unaff_RBP[0x2a] = 0;
        unaff_RBP[0x2b] = 0;
        puVar13 = (uint64_t *)unaff_RBP[0x45];
        puVar15 = &uStackX_20;
        do {
          puVar16 = puVar15;
          puVar14 = puVar13;
          uVar8 = puVar16[1];
          uVar9 = puVar16[2];
          uVar10 = puVar16[3];
          *puVar14 = *puVar16;
          puVar14[1] = uVar8;
          uVar8 = puVar16[4];
          uVar11 = puVar16[5];
          puVar14[2] = uVar9;
          puVar14[3] = uVar10;
          uVar9 = puVar16[6];
          uVar10 = puVar16[7];
          puVar14[4] = uVar8;
          puVar14[5] = uVar11;
          uVar8 = puVar16[8];
          uVar11 = puVar16[9];
          puVar14[6] = uVar9;
          puVar14[7] = uVar10;
          uVar9 = puVar16[10];
          uVar10 = puVar16[0xb];
          puVar14[8] = uVar8;
          puVar14[9] = uVar11;
          uVar8 = puVar16[0xc];
          uVar11 = puVar16[0xd];
          puVar14[10] = uVar9;
          puVar14[0xb] = uVar10;
          uVar9 = puVar16[0xe];
          uVar10 = puVar16[0xf];
          puVar14[0xc] = uVar8;
          puVar14[0xd] = uVar11;
          puVar14[0xe] = uVar9;
          puVar14[0xf] = uVar10;
          lVar17 = lVar17 + -1;
          puVar13 = puVar14 + 0x10;
          puVar15 = puVar16 + 0x10;
        } while (lVar17 != 0);
        uVar8 = puVar16[0x11];
        uVar9 = puVar16[0x12];
        uVar10 = puVar16[0x13];
        puVar14[0x10] = puVar16[0x10];
        puVar14[0x11] = uVar8;
        uVar8 = puVar16[0x14];
        uVar11 = puVar16[0x15];
        puVar14[0x12] = uVar9;
        puVar14[0x13] = uVar10;
        uVar9 = puVar16[0x16];
        uVar10 = puVar16[0x17];
        puVar14[0x14] = uVar8;
        puVar14[0x15] = uVar11;
        puVar14[0x16] = uVar9;
        puVar14[0x17] = uVar10;
        *unaff_R14 = 0xc;
      }
    }
  }
  return 0;
}



uint64_t FUN_18075d3e7(void)

{
  return 0;
}



uint64_t FUN_18075d580(int64_t *param_1,int64_t *param_2)

{
  uint64_t uVar1;
  
  if ((*param_2 != 0) && (uVar1 = FUN_18075f8e0(param_2), (int)uVar1 != 0)) {
    return uVar1;
  }
  *param_2 = *param_1;
  *(int *)(param_2 + 2) = (int)param_1[2];
  param_2[1] = param_1[1];
  *(int32_t *)((int64_t)param_2 + 0x14) = *(int32_t *)((int64_t)param_1 + 0x14);
  *(int *)(param_2 + 3) = (int)param_1[3];
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18075d5e0(void)

{
  (**(code **)(ui_system_config + 0x10))();
  return 0;
}



uint64_t FUN_18075d600(int64_t param_1,char param_2,char param_3)

{
  short sVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  int iVar7;
  int8_t *puStackX_20;
  
  if ((param_2 != '\0') || (param_3 != '\0')) {
    if ((*(uint *)(param_1 + 100) >> 8 & 1) != 0) {
      if (param_2 != '\0') {
        sVar1 = *(short *)(param_1 + 0x1a8);
        iVar7 = 0;
        if (0 < sVar1) {
          do {
            if (*(short *)(param_1 + 0x1a8) < 1) {
              return 9;
            }
            puVar6 = *(uint64_t **)(param_1 + 0x78);
            if (puVar6 == (uint64_t *)(param_1 + 0x78)) {
              return 0x1c;
            }
            for (iVar3 = 0; lVar2 = puVar6[2], iVar3 < 0; iVar3 = iVar3 + 1) {
              puVar6 = (uint64_t *)*puVar6;
            }
            if (lVar2 == 0) {
              return 9;
            }
            uVar4 = FUN_18075dcc0(param_1,*(uint64_t *)(lVar2 + 0x58),lVar2,1,0,4);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < sVar1);
        }
      }
      if (param_3 != '\0') {
        sVar1 = *(short *)(param_1 + 0x1aa);
        iVar7 = 0;
        if (0 < sVar1) {
          do {
            if (*(short *)(param_1 + 0x1aa) < 1) {
              return 9;
            }
            plVar5 = *(int64_t **)(param_1 + 400);
            if (plVar5 == (int64_t *)(param_1 + 400)) {
              return 0x1c;
            }
            for (iVar3 = 0; lVar2 = plVar5[2], iVar3 < 0; iVar3 = iVar3 + 1) {
              plVar5 = (int64_t *)*plVar5;
            }
            if (lVar2 == 0) {
              return 9;
            }
            uVar4 = FUN_18075dcc0(*(uint64_t *)(lVar2 + 0x60),param_1,lVar2,1,0,4);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < sVar1);
        }
      }
      return 0;
    }
    uVar4 = FUN_180743700(*(uint64_t *)(param_1 + 0xa8),&puStackX_20,0x18,1);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    LOCK();
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x1000;
    UNLOCK();
    *puStackX_20 = 5;
    *(int64_t *)(puStackX_20 + 8) = param_1;
    puStackX_20[0x10] = param_2;
    puStackX_20[0x11] = param_3;
    puStackX_20[0x12] = 0;
    uVar4 = func_0x000180743b40(*(uint64_t *)(param_1 + 0xa8),puStackX_20,1);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  return 0;
}



uint64_t FUN_18075d62d(int64_t param_1)

{
  short sVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  uint64_t *puVar5;
  int64_t unaff_RBX;
  char unaff_BPL;
  char unaff_DIL;
  int iVar6;
  int32_t uStack0000000000000028;
  
  if (unaff_DIL != '\0') {
    sVar1 = *(short *)(param_1 + 0x1a8);
    iVar6 = 0;
    if (0 < sVar1) {
      do {
        if (*(short *)(unaff_RBX + 0x1a8) < 1) {
          return 9;
        }
        puVar5 = *(uint64_t **)(unaff_RBX + 0x78);
        if (puVar5 == (uint64_t *)(unaff_RBX + 0x78)) {
          return 0x1c;
        }
        for (iVar2 = 0; iVar2 < 0; iVar2 = iVar2 + 1) {
          puVar5 = (uint64_t *)*puVar5;
        }
        if (puVar5[2] == 0) {
          return 9;
        }
        uStack0000000000000028 = 4;
        uVar3 = FUN_18075dcc0();
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < sVar1);
    }
  }
  if (unaff_BPL != '\0') {
    sVar1 = *(short *)(unaff_RBX + 0x1aa);
    iVar6 = 0;
    if (0 < sVar1) {
      do {
        if (*(short *)(unaff_RBX + 0x1aa) < 1) {
          return 9;
        }
        plVar4 = *(int64_t **)(unaff_RBX + 400);
        if (plVar4 == (int64_t *)(unaff_RBX + 400)) {
          return 0x1c;
        }
        for (iVar2 = 0; iVar2 < 0; iVar2 = iVar2 + 1) {
          plVar4 = (int64_t *)*plVar4;
        }
        if (plVar4[2] == 0) {
          return 9;
        }
        uStack0000000000000028 = 4;
        uVar3 = FUN_18075dcc0(*(uint64_t *)(plVar4[2] + 0x60));
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < sVar1);
    }
  }
  return 0;
}



uint64_t FUN_18075d714(void)

{
  return 9;
}



uint64_t FUN_18075d72b(void)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint uVar3;
  int64_t unaff_RBX;
  int unaff_ESI;
  int unaff_EDI;
  int64_t in_R10;
  uint unaff_R14D;
  int32_t uStack0000000000000028;
  
  while( true ) {
    if (in_R10 == 0) {
      return 9;
    }
    uStack0000000000000028 = 4;
    uVar2 = FUN_18075dcc0(*(uint64_t *)(in_R10 + 0x60));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    unaff_EDI = unaff_EDI + 1;
    if (unaff_ESI <= unaff_EDI) {
      return (uint64_t)unaff_R14D;
    }
    if (*(short *)(unaff_RBX + 0x1aa) <= (short)unaff_R14D) break;
    plVar1 = *(int64_t **)(unaff_RBX + 400);
    uVar3 = unaff_R14D;
    if (plVar1 == (int64_t *)(unaff_RBX + 400)) {
      return 0x1c;
    }
    for (; in_R10 = plVar1[2], (int)uVar3 < 0; uVar3 = uVar3 + 1) {
      plVar1 = (int64_t *)*plVar1;
    }
  }
  return 9;
}



uint64_t FUN_18075d772(int64_t param_1)

{
  uint64_t uVar1;
  int64_t unaff_RBX;
  int8_t unaff_BPL;
  int8_t unaff_DIL;
  int8_t *in_stack_00000068;
  
  uVar1 = FUN_180743700(*(uint64_t *)(param_1 + 0xa8),&stack0x00000068,0x18,1);
  if ((int)uVar1 == 0) {
    LOCK();
    *(uint *)(unaff_RBX + 100) = *(uint *)(unaff_RBX + 100) | 0x1000;
    UNLOCK();
    *in_stack_00000068 = 5;
    *(int64_t *)(in_stack_00000068 + 8) = unaff_RBX;
    in_stack_00000068[0x10] = unaff_DIL;
    in_stack_00000068[0x11] = unaff_BPL;
    in_stack_00000068[0x12] = 0;
    uVar1 = func_0x000180743b40(*(uint64_t *)(unaff_RBX + 0xa8),in_stack_00000068,1);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x00018075dab4)
// WARNING: Removing unreachable block (ram,0x00018075dac3)
// WARNING: Removing unreachable block (ram,0x00018075dad1)
// WARNING: Removing unreachable block (ram,0x00018075d8c4)
// WARNING: Removing unreachable block (ram,0x00018075d8d3)
// WARNING: Removing unreachable block (ram,0x00018075d8e1)
// WARNING: Removing unreachable block (ram,0x00018075d917)
// WARNING: Removing unreachable block (ram,0x00018075d91c)
// WARNING: Removing unreachable block (ram,0x00018075db07)
// WARNING: Removing unreachable block (ram,0x00018075db0c)
// WARNING: Removing unreachable block (ram,0x00018075d971)
// WARNING: Removing unreachable block (ram,0x00018075d976)
// WARNING: Removing unreachable block (ram,0x00018075db63)
// WARNING: Removing unreachable block (ram,0x00018075db68)

uint64_t FUN_18075d7f0(int64_t param_1,char param_2,char param_3,char param_4,char param_5)

{
  short sVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  uint uVar10;
  uint64_t uVar11;
  int iStackX_10;
  
  if (param_2 != '\0') {
    iVar7 = 0;
    uVar10 = -(uint)(param_4 != '\0') & 5;
    if (param_5 != '\0') {
      FUN_180743160(*(uint64_t *)(param_1 + 0xa8),1);
      func_0x000180743c20(*(uint64_t *)(param_1 + 0xa8));
    }
    if (param_4 == '\0') {
      sVar1 = *(short *)(param_1 + 0x1a8);
    }
    else {
      sVar1 = *(short *)(param_1 + 0x1ac);
    }
    if (param_5 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_180743d60(*(uint64_t *)(param_1 + 0xa8),1);
    }
    iStackX_10 = 0;
    if (0 < sVar1) {
      do {
        lVar6 = 0;
        uVar11 = 0;
        if (param_4 == '\0') {
          sVar3 = *(short *)(param_1 + 0x1a8);
        }
        else {
          sVar3 = *(short *)(param_1 + 0x1ac);
        }
        if (iVar7 < sVar3) {
          plVar9 = *(int64_t **)(param_1 + 0x78);
          if (plVar9 == (int64_t *)(param_1 + 0x78)) {
            uVar11 = 0x1c;
            goto LAB_18075d910;
          }
          lVar6 = plVar9[2];
          uVar4 = *(uint *)(lVar6 + 0x7c) & uVar10;
          iVar2 = 0;
          while ((iVar5 = iVar2, iVar5 < iVar7 || (uVar4 != 0))) {
            plVar9 = (int64_t *)*plVar9;
            lVar6 = plVar9[2];
            uVar4 = *(uint *)(lVar6 + 0x7c) & uVar10;
            iVar2 = iVar5 + 1;
            if (uVar4 != 0) {
              iVar2 = iVar5;
            }
          }
          if (lVar6 == 0) goto LAB_18075d910;
          uVar8 = *(uint64_t *)(lVar6 + 0x58);
        }
        else {
          uVar11 = 9;
LAB_18075d910:
          uVar8 = 0;
        }
        if ((int)uVar11 != 0) {
          return uVar11;
        }
        if ((*(uint *)(lVar6 + 0x7c) & uVar10) == 0) {
          uVar11 = FUN_18075dcc0(param_1,uVar8,lVar6,1,0,4);
          if ((int)uVar11 != 0) {
            return uVar11;
          }
        }
        else {
          iVar7 = iVar7 + 1;
        }
        iStackX_10 = iStackX_10 + 1;
      } while (iStackX_10 < sVar1);
    }
  }
  if (param_3 != '\0') {
    iVar7 = 0;
    uVar10 = -(uint)(param_4 != '\0') & 5;
    if (param_5 != '\0') {
      FUN_180743160(*(uint64_t *)(param_1 + 0xa8),1);
      func_0x000180743c20(*(uint64_t *)(param_1 + 0xa8));
    }
    if (param_4 == '\0') {
      sVar1 = *(short *)(param_1 + 0x1aa);
    }
    else {
      sVar1 = *(short *)(param_1 + 0x1ae);
    }
    if (param_5 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_180743d60(*(uint64_t *)(param_1 + 0xa8),1);
    }
    iStackX_10 = 0;
    if (0 < sVar1) {
      do {
        lVar6 = 0;
        uVar11 = 0;
        if (param_4 == '\0') {
          sVar3 = *(short *)(param_1 + 0x1aa);
        }
        else {
          sVar3 = *(short *)(param_1 + 0x1ae);
        }
        if (iVar7 < sVar3) {
          plVar9 = *(int64_t **)(param_1 + 400);
          if (plVar9 == (int64_t *)(param_1 + 400)) {
            uVar11 = 0x1c;
            goto LAB_18075db00;
          }
          lVar6 = plVar9[2];
          uVar4 = *(uint *)(lVar6 + 0x7c) & uVar10;
          iVar2 = 0;
          while ((iVar5 = iVar2, iVar5 < iVar7 || (uVar4 != 0))) {
            plVar9 = (int64_t *)*plVar9;
            lVar6 = plVar9[2];
            uVar4 = *(uint *)(lVar6 + 0x7c) & uVar10;
            iVar2 = iVar5 + 1;
            if (uVar4 != 0) {
              iVar2 = iVar5;
            }
          }
          if (lVar6 == 0) goto LAB_18075db00;
          uVar8 = *(uint64_t *)(lVar6 + 0x60);
        }
        else {
          uVar11 = 9;
LAB_18075db00:
          uVar8 = 0;
        }
        if ((int)uVar11 != 0) {
          return uVar11;
        }
        if ((*(uint *)(lVar6 + 0x7c) & uVar10) == 0) {
          uVar11 = FUN_18075dcc0(uVar8,param_1,lVar6,1,0,4);
          if ((int)uVar11 != 0) {
            return uVar11;
          }
        }
        else {
          iVar7 = iVar7 + 1;
        }
        iStackX_10 = iStackX_10 + 1;
      } while (iStackX_10 < sVar1);
    }
  }
  return 0;
}







