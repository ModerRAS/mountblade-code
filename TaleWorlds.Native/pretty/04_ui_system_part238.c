#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part238.c - 4 个函数

// 函数: void FUN_180803d63(int64_t *param_1,int64_t param_2)
void FUN_180803d63(int64_t *param_1,int64_t param_2)

{
  uint uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int32_t *puVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  uint uVar11;
  int32_t uVar12;
  uint64_t *puVar13;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int32_t *unaff_R12;
  int *unaff_R13;
  uint64_t *puVar14;
  uint *unaff_R15;
  uint64_t uVar15;
  
  uVar3 = *(uint64_t *)(unaff_RDI + param_2 * 8);
  puVar13 = (uint64_t *)0x0;
  *(uint64_t *)(unaff_RBP + -0x61) = 0;
  iVar7 = (**(code **)(*param_1 + 0x28))(param_1,uVar3,unaff_RBP + -0x61);
  if (-1 < iVar7) {
    puVar10 = (uint64_t *)(unaff_RDI + 0x728);
    iVar7 = (**(code **)(**(int64_t **)(unaff_RBP + -0x61) + 0x18))
                      (*(int64_t **)(unaff_RBP + -0x61),&unknown_var_7600_ptr,0x17,0,puVar10);
    if (-1 < iVar7) {
      (**(code **)(**(int64_t **)(unaff_RBP + -0x61) + 0x10))();
      plVar4 = (int64_t *)*puVar10;
      *(uint64_t *)(unaff_RBP + -0x59) = 0;
      iVar7 = (**(code **)(*plVar4 + 0x40))(plVar4,unaff_RBP + -0x59);
      if (-1 < iVar7) {
        lVar9 = *(int64_t *)(unaff_RBP + -0x59);
        puVar14 = puVar13;
        if (0x15 < *(ushort *)(lVar9 + 0x10)) {
          puVar14 = (uint64_t *)(uint64_t)*(uint *)(lVar9 + 0x14);
        }
        uVar1 = *(uint *)(lVar9 + 4);
        iVar7 = *unaff_R13;
        iVar8 = *(int *)(unaff_RBP + 0x77);
        uVar11 = (uint)puVar14 & 1;
        *(int32_t *)(unaff_RDI + 0x5c) = 1;
        *(int *)(unaff_RDI + 0x748) = (int)(((float)iVar8 / (float)iVar7) * (float)uVar1);
        uVar1 = uVar11 | 2;
        if (((uint64_t)puVar14 & 2) == 0) {
          uVar1 = uVar11;
        }
        uVar11 = uVar1 | 4;
        if (((uint64_t)puVar14 & 4) == 0) {
          uVar11 = uVar1;
        }
        uVar1 = uVar11 | 8;
        if (((uint64_t)puVar14 & 8) == 0) {
          uVar1 = uVar11;
        }
        uVar11 = uVar1 | 0x10;
        if (((uint64_t)puVar14 & 0x200) == 0) {
          uVar11 = uVar1;
        }
        uVar1 = uVar11 | 0x20;
        if (((uint64_t)puVar14 & 0x400) == 0) {
          uVar1 = uVar11;
        }
        uVar11 = uVar1 | 0x40;
        if (((uint64_t)puVar14 & 0x10) == 0) {
          uVar11 = uVar1;
        }
        uVar1 = uVar11 | 0x80;
        if (((uint64_t)puVar14 & 0x20) == 0) {
          uVar1 = uVar11;
        }
        puVar5 = *(int32_t **)(unaff_RBP + -0x51);
        uVar11 = uVar1 | 8;
        if (((uint64_t)puVar14 & 0x100) == 0) {
          uVar11 = uVar1;
        }
        uVar12 = 5;
        *(uint *)(unaff_RDI + 0x60) = uVar11;
        *puVar5 = 5;
        switch(*(int16_t *)(lVar9 + 2)) {
        case 1:
          uVar12 = 2;
          break;
        case 2:
          uVar12 = 3;
          break;
        default:
          uVar12 = 1;
          break;
        case 4:
          uVar12 = 4;
          break;
        case 5:
          break;
        case 6:
          uVar12 = 6;
          break;
        case 8:
          uVar12 = 7;
          break;
        case 0xc:
          uVar12 = 8;
        }
        *unaff_R12 = uVar12;
        *unaff_R15 = (uint)*(ushort *)(lVar9 + 2);
        *unaff_R13 = *(int *)(lVar9 + 4);
        CoTaskMemFree(lVar9);
        iVar7 = *unaff_R13;
        *(uint64_t *)(unaff_RBP + -0x37) = 0;
        *(uint64_t *)(unaff_RBP + -0x2f) = 0;
        *(uint64_t *)(unaff_RBP + -0x27) = 0;
        *(int16_t *)(unaff_RBP + -0x39) = 0xfffe;
        uVar1 = *unaff_R15;
        *(short *)(unaff_RBP + -0x37) = (short)uVar1;
        uVar6 = (short)uVar1 << 2;
        *(ushort *)(unaff_RBP + -0x2d) = uVar6;
        *(int16_t *)(unaff_RBP + -0x27) = 0x20;
        *(int *)(unaff_RBP + -0x35) = iVar7;
        *(uint *)(unaff_RBP + -0x25) = (uint)puVar14;
        *(int32_t *)(unaff_RBP + -0x2b) = 0x160020;
        *(uint *)(unaff_RBP + -0x31) = (uint)uVar6 * iVar7;
        *(uint64_t *)(unaff_RBP + -0x21) = 0x10000000000003;
        *(uint64_t *)(unaff_RBP + -0x19) = 0x719b3800aa000080;
        lVar9 = ((int64_t)(**(int **)(unaff_RBP + -0x49) * *(int *)(unaff_RDI + 0x748)) * 10000000)
                / (int64_t)iVar7;
        uVar12 = 0;
        iVar7 = (**(code **)(*(int64_t *)*puVar10 + 0x18))((int64_t *)*puVar10,0,0x40000,lVar9,0);
        if (iVar7 == -0x7776fff8) {
          uVar6 = *(ushort *)(unaff_RBP + -0x2b);
          *(int32_t *)(unaff_RDI + 0x60) = 3;
          *unaff_R12 = 3;
          *(int32_t *)(unaff_RBP + -0x25) = 3;
          iVar8 = (int)((uint)uVar6 * 2) >> 3;
          iVar7 = *(int *)(unaff_RBP + -0x35);
          *unaff_R15 = 2;
          *(int16_t *)(unaff_RBP + -0x37) = 2;
          *(short *)(unaff_RBP + -0x2d) = (short)iVar8;
          *(int *)(unaff_RBP + -0x31) = iVar8 * iVar7;
          uVar12 = 0;
          iVar7 = (**(code **)(*(int64_t *)*puVar10 + 0x18))
                            ((int64_t *)*puVar10,0,0x40000,lVar9,0);
        }
        if (-1 < iVar7) {
          lVar9 = CreateEventA(0,0,0,0);
          *(int64_t *)(unaff_RDI + 0x738) = lVar9;
          if ((((lVar9 != 0) &&
               (iVar7 = (**(code **)(*(int64_t *)*puVar10 + 0x68))((int64_t *)*puVar10,lVar9),
               -1 < iVar7)) &&
              (iVar7 = (**(code **)(*(int64_t *)*puVar10 + 0x20))
                                 ((int64_t *)*puVar10,unaff_RDI + 0x750), -1 < iVar7)) &&
             (iVar7 = (**(code **)(*(int64_t *)*puVar10 + 0x70))
                                ((int64_t *)*puVar10,&unknown_var_7800_ptr,unaff_RDI + 0x730), -1 < iVar7)
             ) {
            plVar4 = *(int64_t **)(unaff_RDI + 0x730);
            uVar2 = *(int32_t *)(unaff_RDI + 0x750);
            *(uint64_t *)(unaff_RBP + -0x41) = 0;
            iVar7 = (**(code **)(*plVar4 + 0x18))(plVar4,uVar2,unaff_RBP + -0x41);
            if (((-1 < iVar7) &&
                (iVar7 = (**(code **)(**(int64_t **)(unaff_RDI + 0x730) + 0x20))
                                   (*(int64_t **)(unaff_RDI + 0x730),
                                    *(int32_t *)(unaff_RDI + 0x750),2), -1 < iVar7)) &&
               (iVar7 = (**(code **)(*(int64_t *)*puVar10 + 0x50))(), -1 < iVar7)) {
              iVar7 = (uint)*(ushort *)(unaff_RBP + -0x2d) * *(int *)(unaff_RDI + 0x748);
              uVar15 = CONCAT44(uVar12,0x1bb);
              *(int *)(unaff_RDI + 0x74c) = iVar7;
              lVar9 = FUN_180741d80(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar7,0x20,
                                    &unknown_var_7648_ptr,uVar15);
              *(int64_t *)(unaff_RDI + 0x740) = lVar9;
              if (lVar9 != 0) {
                puVar10 = (uint64_t *)
                          SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x10,&unknown_var_7648_ptr,
                                        0x1d2,uVar15 & 0xffffffff00000000);
                if (puVar10 != (uint64_t *)0x0) {
                  *(int32_t *)(puVar10 + 1) = 0;
                  *puVar10 = &unknown_var_7536_ptr;
                  puVar13 = puVar10;
                }
                *(uint64_t **)(unaff_RDI + 0x758) = puVar13;
                if ((puVar13 != (uint64_t *)0x0) &&
                   (iVar7 = (**(code **)(**(int64_t **)(unaff_RDI + 0x720) + 0x30))(), -1 < iVar7))
                {
                  *(int32_t *)(*(int64_t *)(unaff_RDI + 0x758) + 8) = 1;
                }
              }
            }
          }
        }
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x11) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180803ddf(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_180803ddf(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  uint uVar1;
  int32_t uVar2;
  int32_t *puVar3;
  int64_t *plVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  uint uVar10;
  int32_t uVar11;
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint64_t *unaff_RSI;
  int64_t unaff_RDI;
  int32_t *unaff_R12;
  int *unaff_R13;
  uint64_t uVar12;
  uint *unaff_R15;
  
  uVar12 = (uint64_t)unaff_RBX & 0xffffffff;
  if (0x15 < *(ushort *)(param_3 + 0x10)) {
    uVar12 = (uint64_t)*(uint *)(param_3 + 0x14);
  }
  uVar1 = *(uint *)(param_3 + 4);
  iVar6 = *unaff_R13;
  iVar7 = *(int *)(unaff_RBP + 0x77);
  uVar10 = (uint)uVar12 & 1;
  *(int32_t *)(unaff_RDI + 0x5c) = 1;
  *(int *)(unaff_RDI + 0x748) = (int)(((float)iVar7 / (float)iVar6) * (float)uVar1);
  uVar1 = uVar10 | 2;
  if ((uVar12 & 2) == 0) {
    uVar1 = uVar10;
  }
  uVar10 = uVar1 | 4;
  if ((uVar12 & 4) == 0) {
    uVar10 = uVar1;
  }
  uVar1 = uVar10 | 8;
  if ((uVar12 & 8) == 0) {
    uVar1 = uVar10;
  }
  uVar10 = uVar1 | 0x10;
  if ((uVar12 & 0x200) == 0) {
    uVar10 = uVar1;
  }
  uVar1 = uVar10 | 0x20;
  if ((uVar12 & 0x400) == 0) {
    uVar1 = uVar10;
  }
  uVar10 = uVar1 | 0x40;
  if ((uVar12 & 0x10) == 0) {
    uVar10 = uVar1;
  }
  uVar1 = uVar10 | 0x80;
  if ((uVar12 & 0x20) == 0) {
    uVar1 = uVar10;
  }
  puVar3 = *(int32_t **)(unaff_RBP + -0x51);
  uVar10 = uVar1 | 8;
  if ((uVar12 & 0x100) == 0) {
    uVar10 = uVar1;
  }
  uVar11 = 5;
  *(uint *)(unaff_RDI + 0x60) = uVar10;
  *puVar3 = 5;
  switch(*(int16_t *)(param_3 + 2)) {
  case 1:
    uVar11 = 2;
    break;
  case 2:
    uVar11 = 3;
    break;
  default:
    uVar11 = 1;
    break;
  case 4:
    uVar11 = 4;
    break;
  case 5:
    break;
  case 6:
    uVar11 = 6;
    break;
  case 8:
    uVar11 = 7;
    break;
  case 0xc:
    uVar11 = 8;
  }
  *unaff_R12 = uVar11;
  *unaff_R15 = (uint)*(ushort *)(param_3 + 2);
  *unaff_R13 = *(int *)(param_3 + 4);
  CoTaskMemFree(param_3);
  iVar6 = *unaff_R13;
  *(uint64_t *)(unaff_RBP + -0x37) = 0;
  *(uint64_t *)(unaff_RBP + -0x2f) = 0;
  *(uint64_t *)(unaff_RBP + -0x27) = 0;
  *(int16_t *)(unaff_RBP + -0x39) = 0xfffe;
  uVar1 = *unaff_R15;
  *(short *)(unaff_RBP + -0x37) = (short)uVar1;
  uVar5 = (short)uVar1 << 2;
  *(ushort *)(unaff_RBP + -0x2d) = uVar5;
  *(int16_t *)(unaff_RBP + -0x27) = 0x20;
  *(int *)(unaff_RBP + -0x35) = iVar6;
  *(uint *)(unaff_RBP + -0x25) = (uint)uVar12;
  *(int32_t *)(unaff_RBP + -0x2b) = 0x160020;
  *(uint *)(unaff_RBP + -0x31) = (uint)uVar5 * iVar6;
  *(uint64_t *)(unaff_RBP + -0x21) = 0x10000000000003;
  *(uint64_t *)(unaff_RBP + -0x19) = 0x719b3800aa000080;
  lVar8 = ((int64_t)(**(int **)(unaff_RBP + -0x49) * *(int *)(unaff_RDI + 0x748)) * 10000000) /
          (int64_t)iVar6;
  puVar9 = unaff_RBX;
  iVar6 = (**(code **)(*(int64_t *)*unaff_RSI + 0x18))((int64_t *)*unaff_RSI,0,0x40000,lVar8);
  uVar11 = (int32_t)((uint64_t)puVar9 >> 0x20);
  if (iVar6 == -0x7776fff8) {
    uVar5 = *(ushort *)(unaff_RBP + -0x2b);
    *(int32_t *)(unaff_RDI + 0x60) = 3;
    *unaff_R12 = 3;
    *(int32_t *)(unaff_RBP + -0x25) = 3;
    iVar7 = (int)((uint)uVar5 * 2) >> 3;
    iVar6 = *(int *)(unaff_RBP + -0x35);
    *unaff_R15 = 2;
    *(int16_t *)(unaff_RBP + -0x37) = 2;
    *(short *)(unaff_RBP + -0x2d) = (short)iVar7;
    *(int *)(unaff_RBP + -0x31) = iVar7 * iVar6;
    puVar9 = unaff_RBX;
    iVar6 = (**(code **)(*(int64_t *)*unaff_RSI + 0x18))((int64_t *)*unaff_RSI,0,0x40000,lVar8);
    uVar11 = (int32_t)((uint64_t)puVar9 >> 0x20);
  }
  if (-1 < iVar6) {
    lVar8 = CreateEventA(0,0,0,0);
    *(int64_t *)(unaff_RDI + 0x738) = lVar8;
    if ((((lVar8 != 0) &&
         (iVar6 = (**(code **)(*(int64_t *)*unaff_RSI + 0x68))((int64_t *)*unaff_RSI,lVar8),
         -1 < iVar6)) &&
        (iVar6 = (**(code **)(*(int64_t *)*unaff_RSI + 0x20))
                           ((int64_t *)*unaff_RSI,unaff_RDI + 0x750), -1 < iVar6)) &&
       (iVar6 = (**(code **)(*(int64_t *)*unaff_RSI + 0x70))
                          ((int64_t *)*unaff_RSI,&unknown_var_7800_ptr,unaff_RDI + 0x730), -1 < iVar6)) {
      plVar4 = *(int64_t **)(unaff_RDI + 0x730);
      uVar2 = *(int32_t *)(unaff_RDI + 0x750);
      *(uint64_t **)(unaff_RBP + -0x41) = unaff_RBX;
      iVar6 = (**(code **)(*plVar4 + 0x18))(plVar4,uVar2,unaff_RBP + -0x41);
      if (((-1 < iVar6) &&
          (iVar6 = (**(code **)(**(int64_t **)(unaff_RDI + 0x730) + 0x20))
                             (*(int64_t **)(unaff_RDI + 0x730),*(int32_t *)(unaff_RDI + 0x750),2
                             ), -1 < iVar6)) &&
         (iVar6 = (**(code **)(*(int64_t *)*unaff_RSI + 0x50))(), -1 < iVar6)) {
        iVar6 = (uint)*(ushort *)(unaff_RBP + -0x2d) * *(int *)(unaff_RDI + 0x748);
        *(int *)(unaff_RDI + 0x74c) = iVar6;
        lVar8 = FUN_180741d80(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar6,0x20,&unknown_var_7648_ptr,
                              CONCAT44(uVar11,0x1bb));
        *(int64_t *)(unaff_RDI + 0x740) = lVar8;
        if (lVar8 != 0) {
          puVar9 = (uint64_t *)
                   SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x10,&unknown_var_7648_ptr,0x1d2,
                                 (uint64_t)unaff_RBX & 0xffffffff);
          if (puVar9 != (uint64_t *)0x0) {
            *(int *)(puVar9 + 1) = (int)unaff_RBX;
            *puVar9 = &unknown_var_7536_ptr;
            unaff_RBX = puVar9;
          }
          *(uint64_t **)(unaff_RDI + 0x758) = unaff_RBX;
          if ((unaff_RBX != (uint64_t *)0x0) &&
             (iVar6 = (**(code **)(**(int64_t **)(unaff_RDI + 0x720) + 0x30))(), -1 < iVar6)) {
            *(int32_t *)(*(int64_t *)(unaff_RDI + 0x758) + 8) = 1;
          }
        }
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x11) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1808041e0(void)
void FUN_1808041e0(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x11) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1808041e8(void)
void FUN_1808041e8(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x11) ^ (uint64_t)&stack0x00000000);
}



int64_t FUN_180804260(int64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint auStackX_8 [2];
  uint64_t uStackX_10;
  
  lVar2 = 0;
  lVar4 = param_1 + -8;
  if (param_1 == 0) {
    lVar4 = lVar2;
  }
  iVar1 = WaitForSingleObject(*(uint64_t *)(lVar4 + 0x738),200);
  if (iVar1 == -1) {
    return 0x1c;
  }
  auStackX_8[0] = 0;
  iVar1 = (**(code **)(**(int64_t **)(lVar4 + 0x728) + 0x30))
                    (*(int64_t **)(lVar4 + 0x728),auStackX_8);
  if (iVar1 == -0x7776fffc) {
    *(int8_t *)(lVar4 + 0x311) = 1;
    return 0x31;
  }
  if (iVar1 < 0) {
    return 0x31;
  }
  if (auStackX_8[0] <= (uint)(*(int *)(lVar4 + 0x750) - *(int *)(lVar4 + 0x748))) {
    lVar3 = lVar4 + 8;
    if (lVar4 == 0) {
      lVar3 = lVar2;
    }
    lVar2 = (**(code **)(lVar4 + 0x10))
                      (lVar3,*(uint64_t *)(lVar4 + 0x740),*(int *)(lVar4 + 0x748));
    if ((int)lVar2 == 0) {
      iVar1 = (**(code **)(**(int64_t **)(lVar4 + 0x728) + 0x30))
                        (*(int64_t **)(lVar4 + 0x728),auStackX_8);
      if (iVar1 < 0) {
        return 0x31;
      }
      uStackX_10 = 0;
      iVar1 = (**(code **)(**(int64_t **)(lVar4 + 0x730) + 0x18))
                        (*(int64_t **)(lVar4 + 0x730),*(int32_t *)(lVar4 + 0x748),&uStackX_10);
      if (iVar1 < 0) {
        return 0x31;
      }
                    // WARNING: Subroutine does not return
      memcpy(uStackX_10,*(uint64_t *)(lVar4 + 0x740),(int64_t)*(int *)(lVar4 + 0x74c));
    }
  }
  return lVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



