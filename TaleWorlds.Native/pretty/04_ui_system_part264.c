#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part264.c - 7 个函数
// 函数: void NetworkProtocol_18caf(uint64_t param_1,int64_t param_2)
void NetworkProtocol_18caf(uint64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int *piVar9;
  int64_t lVar10;
  int iVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t unaff_RBX;
  int iVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int iStackX_20;
  int iStackX_24;
  int64_t local_buffer_60;
  uint64_t local_var_1f0;
  lVar1 = param_2 + 0x98;
  SystemFunction_00018082fe60(lVar1,*(int32_t *)(param_2 + 0x84));
  SystemFunction_0001808311f0(unaff_RBX + 0x210);
  iVar3 = NetworkProtocol_1a6e0();
  if (iVar3 == 0) {
    iVar14 = 0;
    bVar2 = false;
    iStackX_20 = 0;
    iStackX_24 = 0;
    iVar3 = NetworkProtocol_2f920();
    if (-1 < iVar3) {
      SystemFunction_00018082fe10(&local_buffer_00000070);
      iVar3 = 0;
      iVar5 = 0;
LAB_180818dc0:
      do {
        if ((*(int *)(unaff_RBX + 0x80) < 3) ||
           (iVar4 = SystemFunction_00018082f9e0(&local_buffer_00000070,&local_buffer_00000048), iVar4 < 1)) {
LAB_180818e5f:
          if (iVar14 != 0) {
            *(uint64_t *)(unaff_RBX + 0x78) = 0xffffffffffffffff;
            goto LAB_180819016;
          }
          lVar17 = NetworkProtocol_1a120();
          if (lVar17 < 0) {
            uVar8 = NetworkProtocol_18bd0();
            *(uint64_t *)(unaff_RBX + 0x78) = uVar8;
            goto LAB_180819016;
          }
          iVar3 = iStackX_20;
          if (*(int *)(unaff_RBX + 0x80) < 3) {
LAB_180818ed4:
            iVar6 = SystemFunction_00018082f880(&local_buffer_00000028);
            iVar4 = *(int *)(unaff_RBX + 0x40);
            iVar11 = 0;
            lVar12 = 0;
            if (0 < iVar4) {
              piVar9 = *(int **)(unaff_RBX + 0x58);
              do {
                if (*piVar9 == iVar6) break;
                iVar11 = iVar11 + 1;
                lVar12 = lVar12 + 1;
                piVar9 = piVar9 + 1;
              } while (iVar11 < iVar4);
            }
            iVar5 = iStackX_24;
            if (iVar11 == iVar4) goto LAB_180818dc0;
            *(int *)(unaff_RBX + 0x88) = iVar11;
            *(int *)(unaff_RBX + 0x84) = iVar6;
            SystemFunction_00018082fe60(lVar1,iVar6);
            SystemFunction_00018082fe60(&local_buffer_00000070,iVar6);
            *(int32_t *)(unaff_RBX + 0x80) = 3;
            bVar2 = lVar17 <= *(int64_t *)(*(int64_t *)(unaff_RBX + 0x50) + lVar12 * 8);
          }
          else {
            iVar5 = SystemFunction_00018082f880(&local_buffer_00000028);
            if ((*(int *)(unaff_RBX + 0x84) != iVar5) &&
               (iVar5 = SystemFunction_00018082f7f0(&local_buffer_00000028), iVar5 != 0)) {
              NetworkProtocol_19940();
              NetworkProtocol_2f8b0();
            }
            if (*(int *)(unaff_RBX + 0x80) < 3) goto LAB_180818ed4;
          }
          NetworkProtocol_2fa20();
          NetworkProtocol_2fa20();
          iStackX_24 = SystemFunction_00018082f810(&local_buffer_00000028);
          iVar5 = iStackX_24;
          goto LAB_180818dc0;
        }
        if (*(int64_t *)
             (*(int64_t *)(unaff_RBX + 0x68) + 0x20 + (int64_t)*(int *)(unaff_RBX + 0x88) * 0x28)
            == 0) {
          SystemFunction_00018082f9e0(lVar1,0);
          goto LAB_180818e5f;
        }
        iVar4 = NetworkProtocol_317a0(*(int64_t *)(unaff_RBX + 0x68) +
                              (int64_t)*(int *)(unaff_RBX + 0x88) * 0x28,&local_buffer_00000048);
        if (iVar4 < 0) {
          SystemFunction_00018082f9e0(lVar1,0);
          iVar4 = 0;
        }
        else if ((iVar5 == 0) || (bVar2)) {
          if (iVar14 != 0) {
            iVar3 = iVar3 + (iVar4 + iVar14 >> 2);
            iStackX_20 = iVar3;
          }
        }
        else {
          SystemFunction_00018082f9e0(lVar1,0);
        }
        iVar14 = iVar4;
      } while (local_buffer_60 == -1);
      lVar12 = (int64_t)*(int *)(unaff_RBX + 0x88);
      lVar1 = *(int64_t *)(unaff_RBX + 0x60);
      lVar15 = local_buffer_60 -
               *(int64_t *)(lVar1 + (int64_t)(*(int *)(unaff_RBX + 0x88) * 2) * 8);
      lVar17 = 0;
      if (-1 < lVar15) {
        lVar17 = lVar15;
      }
      lVar16 = 0;
      lVar10 = 0;
      lVar15 = 0;
      if (1 < lVar12) {
        plVar7 = (int64_t *)(lVar1 + 0x18);
        lVar13 = (lVar12 - 2U >> 1) + 1;
        lVar15 = lVar13 * 2;
        do {
          lVar16 = lVar16 + plVar7[-2];
          lVar10 = lVar10 + *plVar7;
          plVar7 = plVar7 + 4;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      if (lVar15 < lVar12) {
        lVar17 = lVar17 + *(int64_t *)(lVar1 + 8 + lVar15 * 0x10);
      }
      lVar17 = lVar16 + (lVar10 - iVar3) + lVar17;
      *(int64_t *)(unaff_RBX + 0x78) = lVar17;
      if (lVar17 < 0) {
        *(uint64_t *)(unaff_RBX + 0x78) = 0;
      }
LAB_180819016:
      NetworkProtocol_2f8b0();
      *(uint64_t *)(unaff_RBX + 0x8c) = 0;
    }
  }
  else {
    *(uint64_t *)(unaff_RBX + 0x78) = 0xffffffffffffffff;
    NetworkProtocol_2f8b0();
    NetworkProtocol_19940();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_1f0 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_18d15(void)
void NetworkProtocol_18d15(void)
{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int *piVar9;
  int64_t lVar10;
  int iVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t unaff_RBX;
  int iVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int iStackX_20;
  int iStackX_24;
  int64_t local_buffer_60;
  uint64_t local_var_1f0;
  iVar14 = 0;
  bVar1 = false;
  iStackX_20 = 0;
  iStackX_24 = 0;
  iVar2 = NetworkProtocol_2f920();
  if (-1 < iVar2) {
    SystemFunction_00018082fe10(&local_buffer_00000070);
    iVar2 = 0;
    iVar4 = 0;
LAB_180818dc0:
    do {
      if ((*(int *)(unaff_RBX + 0x80) < 3) ||
         (iVar3 = SystemFunction_00018082f9e0(&local_buffer_00000070,&local_buffer_00000048), iVar3 < 1)) {
LAB_180818e5f:
        if (iVar14 != 0) {
          *(uint64_t *)(unaff_RBX + 0x78) = 0xffffffffffffffff;
          goto LAB_180819016;
        }
        lVar6 = NetworkProtocol_1a120();
        if (lVar6 < 0) {
          uVar8 = NetworkProtocol_18bd0();
          *(uint64_t *)(unaff_RBX + 0x78) = uVar8;
          goto LAB_180819016;
        }
        iVar2 = iStackX_20;
        if (*(int *)(unaff_RBX + 0x80) < 3) {
LAB_180818ed4:
          iVar5 = SystemFunction_00018082f880(&local_buffer_00000028);
          iVar3 = *(int *)(unaff_RBX + 0x40);
          iVar11 = 0;
          lVar17 = 0;
          if (0 < iVar3) {
            piVar9 = *(int **)(unaff_RBX + 0x58);
            do {
              if (*piVar9 == iVar5) break;
              iVar11 = iVar11 + 1;
              lVar17 = lVar17 + 1;
              piVar9 = piVar9 + 1;
            } while (iVar11 < iVar3);
          }
          iVar4 = iStackX_24;
          if (iVar11 == iVar3) goto LAB_180818dc0;
          *(int *)(unaff_RBX + 0x88) = iVar11;
          *(int *)(unaff_RBX + 0x84) = iVar5;
          SystemFunction_00018082fe60();
          SystemFunction_00018082fe60(&local_buffer_00000070,iVar5);
          *(int32_t *)(unaff_RBX + 0x80) = 3;
          bVar1 = lVar6 <= *(int64_t *)(*(int64_t *)(unaff_RBX + 0x50) + lVar17 * 8);
        }
        else {
          iVar4 = SystemFunction_00018082f880(&local_buffer_00000028);
          if ((*(int *)(unaff_RBX + 0x84) != iVar4) &&
             (iVar4 = SystemFunction_00018082f7f0(&local_buffer_00000028), iVar4 != 0)) {
            NetworkProtocol_19940();
            NetworkProtocol_2f8b0();
          }
          if (*(int *)(unaff_RBX + 0x80) < 3) goto LAB_180818ed4;
        }
        NetworkProtocol_2fa20();
        NetworkProtocol_2fa20();
        iStackX_24 = SystemFunction_00018082f810(&local_buffer_00000028);
        iVar4 = iStackX_24;
        goto LAB_180818dc0;
      }
      if (*(int64_t *)
           (*(int64_t *)(unaff_RBX + 0x68) + 0x20 + (int64_t)*(int *)(unaff_RBX + 0x88) * 0x28) ==
          0) {
        SystemFunction_00018082f9e0();
        goto LAB_180818e5f;
      }
      iVar3 = NetworkProtocol_317a0(*(int64_t *)(unaff_RBX + 0x68) +
                            (int64_t)*(int *)(unaff_RBX + 0x88) * 0x28,&local_buffer_00000048);
      if (iVar3 < 0) {
        SystemFunction_00018082f9e0();
        iVar3 = 0;
      }
      else if ((iVar4 == 0) || (bVar1)) {
        if (iVar14 != 0) {
          iVar2 = iVar2 + (iVar3 + iVar14 >> 2);
          iStackX_20 = iVar2;
        }
      }
      else {
        SystemFunction_00018082f9e0();
      }
      iVar14 = iVar3;
    } while (local_buffer_60 == -1);
    lVar12 = (int64_t)*(int *)(unaff_RBX + 0x88);
    lVar6 = *(int64_t *)(unaff_RBX + 0x60);
    lVar15 = local_buffer_60 -
             *(int64_t *)(lVar6 + (int64_t)(*(int *)(unaff_RBX + 0x88) * 2) * 8);
    lVar17 = 0;
    if (-1 < lVar15) {
      lVar17 = lVar15;
    }
    lVar16 = 0;
    lVar10 = 0;
    lVar15 = 0;
    if (1 < lVar12) {
      plVar7 = (int64_t *)(lVar6 + 0x18);
      lVar13 = (lVar12 - 2U >> 1) + 1;
      lVar15 = lVar13 * 2;
      do {
        lVar16 = lVar16 + plVar7[-2];
        lVar10 = lVar10 + *plVar7;
        plVar7 = plVar7 + 4;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    if (lVar15 < lVar12) {
      lVar17 = lVar17 + *(int64_t *)(lVar6 + 8 + lVar15 * 0x10);
    }
    lVar17 = lVar16 + (lVar10 - iVar2) + lVar17;
    *(int64_t *)(unaff_RBX + 0x78) = lVar17;
    if (lVar17 < 0) {
      *(uint64_t *)(unaff_RBX + 0x78) = 0;
    }
LAB_180819016:
    NetworkProtocol_2f8b0();
    *(uint64_t *)(unaff_RBX + 0x8c) = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_1f0 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_18d76(void)
void NetworkProtocol_18d76(void)
{
  uint64_t local_var_1f0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_1f0 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_18d7e(void)
void NetworkProtocol_18d7e(void)
{
  uint64_t local_var_1f0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_1f0 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_18d9a(void)
void NetworkProtocol_18d9a(void)
{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int *piVar6;
  int64_t lVar7;
  int iVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t unaff_RBX;
  int unaff_EBP;
  int unaff_ESI;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int unaff_R12D;
  uint unaff_R13D;
  int iStackX_20;
  int iStackX_24;
  int64_t local_buffer_60;
  uint64_t local_var_1f0;
  SystemFunction_00018082fe10(&local_buffer_00000070);
LAB_180818dc0:
  while ((2 < *(int *)(unaff_RBX + 0x80) &&
         (iVar1 = SystemFunction_00018082f9e0(&local_buffer_00000070,&local_buffer_00000048), 0 < iVar1))) {
    if (*(int64_t *)
         (*(int64_t *)(unaff_RBX + 0x68) + 0x20 + (int64_t)*(int *)(unaff_RBX + 0x88) * 0x28) == 0
       ) {
      SystemFunction_00018082f9e0();
      break;
    }
    iVar1 = NetworkProtocol_317a0(*(int64_t *)(unaff_RBX + 0x68) +
                          (int64_t)*(int *)(unaff_RBX + 0x88) * 0x28,&local_buffer_00000048);
    if (iVar1 < 0) {
      SystemFunction_00018082f9e0();
      iVar1 = 0;
    }
    else if ((unaff_ESI == 0) || (unaff_R13D != 0)) {
      if (unaff_EBP != 0) {
        unaff_R12D = unaff_R12D + (iVar1 + unaff_EBP >> 2);
        iStackX_20 = unaff_R12D;
      }
    }
    else {
      SystemFunction_00018082f9e0();
    }
    unaff_EBP = iVar1;
    if (local_buffer_60 != -1) {
      lVar9 = (int64_t)*(int *)(unaff_RBX + 0x88);
      lVar3 = *(int64_t *)(unaff_RBX + 0x60);
      lVar11 = local_buffer_60 -
               *(int64_t *)(lVar3 + (int64_t)(*(int *)(unaff_RBX + 0x88) * 2) * 8);
      lVar13 = 0;
      if (-1 < lVar11) {
        lVar13 = lVar11;
      }
      lVar12 = 0;
      lVar7 = 0;
      lVar11 = 0;
      if (1 < lVar9) {
        plVar4 = (int64_t *)(lVar3 + 0x18);
        lVar10 = (lVar9 - 2U >> 1) + 1;
        lVar11 = lVar10 * 2;
        do {
          lVar12 = lVar12 + plVar4[-2];
          lVar7 = lVar7 + *plVar4;
          plVar4 = plVar4 + 4;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if (lVar11 < lVar9) {
        lVar13 = lVar13 + *(int64_t *)(lVar3 + 8 + lVar11 * 0x10);
      }
      lVar13 = lVar12 + (lVar7 - unaff_R12D) + lVar13;
      *(int64_t *)(unaff_RBX + 0x78) = lVar13;
      if (lVar13 < 0) {
        *(uint64_t *)(unaff_RBX + 0x78) = 0;
      }
LAB_180818d56:
      NetworkProtocol_2f8b0();
      *(uint64_t *)(unaff_RBX + 0x8c) = 0;
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_1f0 ^ (uint64_t)&local_buffer_00000000);
    }
  }
  if (unaff_EBP != 0) {
    *(uint64_t *)(unaff_RBX + 0x78) = 0xffffffffffffffff;
    goto LAB_180818d56;
  }
  lVar3 = NetworkProtocol_1a120();
  if (lVar3 < 0) {
    uVar5 = NetworkProtocol_18bd0();
    *(uint64_t *)(unaff_RBX + 0x78) = uVar5;
    goto LAB_180818d56;
  }
  unaff_R12D = iStackX_20;
  if (*(int *)(unaff_RBX + 0x80) < 3) {
LAB_180818ed4:
    iVar2 = SystemFunction_00018082f880(&local_buffer_00000028);
    iVar1 = *(int *)(unaff_RBX + 0x40);
    iVar8 = 0;
    lVar13 = 0;
    if (0 < iVar1) {
      piVar6 = *(int **)(unaff_RBX + 0x58);
      do {
        if (*piVar6 == iVar2) break;
        iVar8 = iVar8 + 1;
        lVar13 = lVar13 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar8 < iVar1);
    }
    unaff_ESI = iStackX_24;
    if (iVar8 == iVar1) goto LAB_180818dc0;
    *(int *)(unaff_RBX + 0x88) = iVar8;
    *(int *)(unaff_RBX + 0x84) = iVar2;
    SystemFunction_00018082fe60();
    SystemFunction_00018082fe60(&local_buffer_00000070,iVar2);
    *(int32_t *)(unaff_RBX + 0x80) = 3;
    unaff_R13D = (uint)(lVar3 <= *(int64_t *)(*(int64_t *)(unaff_RBX + 0x50) + lVar13 * 8));
  }
  else {
    iVar1 = SystemFunction_00018082f880(&local_buffer_00000028);
    if ((*(int *)(unaff_RBX + 0x84) != iVar1) &&
       (iVar1 = SystemFunction_00018082f7f0(&local_buffer_00000028), iVar1 != 0)) {
      NetworkProtocol_19940();
      NetworkProtocol_2f8b0();
    }
    if (*(int *)(unaff_RBX + 0x80) < 3) goto LAB_180818ed4;
  }
  NetworkProtocol_2fa20();
  NetworkProtocol_2fa20();
  unaff_ESI = SystemFunction_00018082f810(&local_buffer_00000028);
  iStackX_24 = unaff_ESI;
  goto LAB_180818dc0;
}
// 函数: void NetworkProtocol_19035(void)
void NetworkProtocol_19035(void)
{
  uint64_t local_var_1f0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_1f0 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_19060(void)
void NetworkProtocol_19060(void)
{
  NetworkProtocol_190b0();
  return;
}
uint64_t NetworkProtocol_190b0(uint64_t param_1,int64_t param_2,short *param_3,int param_4,int param_5,
                       int param_6,int param_7,int32_t *param_8,code *param_9,uint64_t param_10
                       )
{
  uint uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  short *psVar9;
  int64_t lVar10;
  char cVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t alStack_40 [3];
  if (*(int *)(param_2 + 0x80) < 2) {
LAB_18081942d:
    uVar5 = 0xffffff7d;
  }
  else {
    do {
      if (*(int *)(param_2 + 0x80) == 4) {
        uVar5 = NetworkProtocol_31150(param_2 + 0x210,alStack_40);
        iVar3 = (int)uVar5;
        if (iVar3 != 0) {
          if (iVar3 < 1) {
            return uVar5;
          }
          lVar10 = *(int64_t *)(param_2 + 0x68);
          if ((*(int *)(param_2 + 8) != 0) && (2 < *(int *)(param_2 + 0x80))) {
            lVar10 = lVar10 + (int64_t)*(int *)(param_2 + 0x88) * 0x28;
          }
          uVar1 = *(uint *)(lVar10 + 4);
          uVar5 = (uint64_t)uVar1;
          param_4 = param_4 / (int)(uVar1 * param_6);
          if (param_4 < iVar3) {
            iVar3 = param_4;
          }
          if (0 < iVar3) {
            if (param_9 != (code *)0x0) {
              (*param_9)(alStack_40[0],uVar1,iVar3,param_10);
            }
            lVar10 = (int64_t)iVar3;
            lVar14 = (int64_t)(int)uVar1;
            if (param_6 == 1) {
              if (0 < lVar10) {
                lVar13 = 0;
                lVar12 = lVar13;
                do {
                  if (0 < (int)uVar1) {
                    lVar8 = lVar13;
                    cVar11 = -0x80;
                    if (param_7 != 0) {
                      cVar11 = '\0';
                    }
                    do {
                      iVar6 = (int)ROUND(*(float *)(*(int64_t *)(alStack_40[0] + lVar8 * 8) +
                                                   lVar12 * 4) * 128.0);
                      if (iVar6 < 0x80) {
                        if (iVar6 < -0x80) {
                          iVar6 = -0x80;
                        }
                      }
                      else {
                        iVar6 = 0x7f;
                      }
                      lVar8 = lVar8 + 1;
                      *(char *)param_3 = (char)iVar6 + cVar11;
                      param_3 = (short *)((int64_t)param_3 + 1);
                    } while (lVar8 < lVar14);
                  }
                  lVar12 = lVar12 + 1;
                } while (lVar12 < lVar10);
              }
            }
            else {
              lVar12 = 0;
              iVar6 = 0x8000;
              if (param_7 != 0) {
                iVar6 = 0;
              }
              if (param_5 == 0) {
                if (0 < (int)uVar1) {
                  lVar13 = lVar12;
                  if (param_7 == 0) {
                    do {
                      lVar8 = *(int64_t *)(lVar13 + alStack_40[0]);
                      lVar7 = lVar12;
                      psVar9 = param_3;
                      if (0 < lVar10) {
                        do {
                          iVar4 = (int)ROUND(*(float *)(lVar8 + lVar7 * 4) * 32768.0);
                          if (iVar4 < 0x8000) {
                            sVar2 = (short)iVar4;
                            if (iVar4 < -0x8000) {
                              sVar2 = -0x8000;
                            }
                          }
                          else {
                            sVar2 = 0x7fff;
                          }
                          lVar7 = lVar7 + 1;
                          *psVar9 = sVar2 + (short)iVar6;
                          psVar9 = psVar9 + lVar14;
                        } while (lVar7 < lVar10);
                      }
                      param_3 = param_3 + 1;
                      uVar5 = uVar5 - 1;
                      lVar13 = lVar13 + 8;
                    } while (uVar5 != 0);
                  }
                  else {
                    do {
                      lVar8 = *(int64_t *)(lVar13 + alStack_40[0]);
                      lVar7 = lVar12;
                      psVar9 = param_3;
                      if (0 < lVar10) {
                        do {
                          iVar6 = (int)ROUND(*(float *)(lVar8 + lVar7 * 4) * 32768.0);
                          if (iVar6 < 0x8000) {
                            sVar2 = (short)iVar6;
                            if (iVar6 < -0x8000) {
                              sVar2 = -0x8000;
                            }
                          }
                          else {
                            sVar2 = 0x7fff;
                          }
                          *psVar9 = sVar2;
                          lVar7 = lVar7 + 1;
                          psVar9 = psVar9 + lVar14;
                        } while (lVar7 < lVar10);
                      }
                      param_3 = param_3 + 1;
                      uVar5 = uVar5 - 1;
                      lVar13 = lVar13 + 8;
                    } while (uVar5 != 0);
                  }
                }
              }
              else {
                lVar13 = lVar12;
                if (0 < lVar10) {
                  do {
                    lVar8 = lVar12;
                    if (0 < (int)uVar1) {
                      do {
                        iVar4 = (int)ROUND(*(float *)(*(int64_t *)(alStack_40[0] + lVar8 * 8) +
                                                     lVar13 * 4) * 32768.0);
                        if (iVar4 < 0x8000) {
                          if (iVar4 < -0x8000) {
                            iVar4 = -0x8000;
                          }
                        }
                        else {
                          iVar4 = 0x7fff;
                        }
                        lVar8 = lVar8 + 1;
                        *(char *)param_3 = (char)((uint)(iVar4 + iVar6) >> 8);
                        *(char *)((int64_t)param_3 + 1) = (char)(iVar4 + iVar6);
                        param_3 = param_3 + 1;
                      } while (lVar8 < lVar14);
                    }
                    lVar13 = lVar13 + 1;
                  } while (lVar13 < lVar10);
                }
              }
            }
            SystemFunction_0001808311d0(param_2 + 0x210,iVar3);
            *(int64_t *)(param_2 + 0x78) = *(int64_t *)(param_2 + 0x78) + lVar10;
            if (param_8 != (int32_t *)0x0) {
              *param_8 = *(int32_t *)(param_2 + 0x88);
            }
            return (uint64_t)(uVar1 * param_6 * iVar3);
          }
          goto LAB_18081942d;
        }
      }
      uVar5 = NetworkProtocol_19980(param_1,param_2,0,1,1);
      if ((int)uVar5 == -2) {
        return 0;
      }
    } while (0 < (int)uVar5);
  }
  return uVar5;
}
int NetworkProtocol_19460(uint64_t param_1,int64_t *param_2,uint64_t param_3,int64_t param_4,
                 int64_t param_5,uint64_t param_6,int param_7,int *param_8,int param_9,
                 int param_10)
{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int *piVar11;
  int64_t alStackX_10 [2];
  int32_t astack_special_x_20 [2];
  int32_t uVar12;
  uint64_t local_var_b8;
  int64_t lStack_b0;
  int8_t stack_array_a8 [8];
  int iStack_a0;
  int iStack_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  iVar6 = (int)param_2[0x3f];
  alStackX_10[0] = param_5;
  local_var_b8 = 0xffffffffffffffff;
  if ((param_8 == (int *)0x0) || (piVar11 = param_8, iVar4 = param_9, param_9 == 0)) {
LAB_1808194d1:
    lStack_b0 = 0;
    astack_special_x_20[0] = 0;
    lVar10 = param_5;
    if (param_4 < param_5) {
      do {
        lVar8 = param_4;
        if (0x2133 < lVar10 - param_4) {
          lVar8 = (lVar10 + param_4) / 2;
        }
        if (*param_2 == 0) {
          return -0x81;
        }
        if (((code *)param_2[99] == (code *)0x0) ||
           (iVar4 = (*(code *)param_2[99])(*param_2,lVar8,0), iVar4 == -1)) {
          return -0x80;
        }
        param_2[2] = lVar8;
        SystemFunction_0001808301d0(param_2 + 4);
        lVar7 = NetworkProtocol_1a120(param_1,param_2,stack_array_a8,local_var_b8);
        if (lVar7 == -0x80) {
          return -0x80;
        }
        if ((-1 < lVar7) &&
           (iVar5 = SystemFunction_00018082f880(stack_array_a8), piVar11 = param_8, iVar4 = param_9,
           param_8 != (int *)0x0)) {
          while (iVar4 != 0) {
            if (*piVar11 == iVar5) {
              param_4 = (int64_t)iStack_a0 + iStack_90 + lVar7;
              lVar8 = lVar10;
              goto LAB_180819751;
            }
            piVar11 = piVar11 + 1;
            iVar4 = iVar4 + -1;
          }
        }
        if (-1 < lVar7) {
          alStackX_10[0] = lVar7;
        }
LAB_180819751:
        lVar10 = lVar8;
      } while (param_4 < lVar8);
    }
    lVar10 = alStackX_10[0];
    param_2[2] = alStackX_10[0];
    if (iVar6 + 1 != iVar6) {
      do {
        alStackX_10[0] = CONCAT44(alStackX_10[0]._4_4_,iVar6);
        lVar8 = NetworkProtocol_1a260(param_1,param_2,param_8,param_9,alStackX_10,&local_var_b8);
        param_2[2] = lVar8;
      } while ((int)alStackX_10[0] != iVar6);
      if ((lVar8 != lVar10) && (iVar6 = NetworkProtocol_1a6e0(param_2,lVar10), iVar6 != 0)) {
        return iVar6;
      }
    }
    uVar12 = 0;
    iVar6 = NetworkProtocol_19d70(param_1,param_2,&local_var_88,&local_var_60,&lStack_b0,astack_special_x_20,0);
    if (iVar6 == 0) {
      param_8 = (int *)param_2[2];
      lVar7 = param_2[0x3f];
      lVar9 = NetworkProtocol_1a430(param_1,param_2,&local_var_88);
      lVar3 = lStack_b0;
      iVar4 = param_10;
      lVar8 = (int64_t)param_10;
      iVar6 = NetworkProtocol_19460(param_1,param_2,lVar10,param_2[2],param_5,param_6,
                            CONCAT44(uVar12,param_7),lStack_b0,astack_special_x_20[0],param_10 + 1);
      if (iVar6 == 0) {
        if (lVar3 != 0) {
// WARNING: Subroutine does not return
          RenderingSystem_CoreProcessor0(param_1,lVar3);
        }
        lVar8 = lVar8 + 1;
        *(int64_t *)(param_2[9] + lVar8 * 8) = lVar10;
        *(int *)(param_2[0xb] + lVar8 * 4) = (int)lVar7;
        *(int **)(param_2[10] + lVar8 * 8) = param_8;
        lVar10 = param_2[0xd];
        puVar1 = (uint64_t *)(lVar10 + lVar8 * 0x28);
        *puVar1 = local_var_88;
        puVar1[1] = local_var_80;
        puVar1 = (uint64_t *)(lVar10 + 0x10 + lVar8 * 0x28);
        *puVar1 = local_var_78;
        puVar1[1] = local_var_70;
        *(uint64_t *)(lVar10 + 0x20 + lVar8 * 0x28) = local_var_68;
        lVar10 = param_2[0xe];
        puVar1 = (uint64_t *)(lVar8 * 0x20 + lVar10);
        *puVar1 = local_var_60;
        puVar1[1] = local_var_58;
        puVar1 = (uint64_t *)(lVar8 * 0x20 + 0x10 + lVar10);
        *puVar1 = local_var_50;
        puVar1[1] = local_var_48;
        lVar10 = (int64_t)(iVar4 * 2);
        *(uint64_t *)(param_2[0xc] + 8 + lVar10 * 8) = local_var_b8;
        *(int64_t *)(param_2[0xc] + 0x10 + lVar10 * 8) = lVar9;
        plVar2 = (int64_t *)(param_2[0xc] + 0x18 + lVar10 * 8);
        *plVar2 = *plVar2 - lVar9;
LAB_18081991a:
        iVar6 = 0;
      }
    }
    return iVar6;
  }
LAB_1808194c3:
  iVar4 = iVar4 + -1;
  if (*piVar11 != param_7) goto code_r0x0001808194c9;
  if (param_7 != iVar6) {
    do {
      param_7 = iVar6;
      lVar10 = NetworkProtocol_1a260(param_1,param_2,param_8,param_9,&param_7,&param_6);
      param_2[2] = lVar10;
    } while (param_7 != iVar6);
  }
  iVar6 = param_10;
  lVar10 = (int64_t)param_10;
  *(int *)(param_2 + 8) = param_10 + 1;
  if (param_2[9] != 0) {
// WARNING: Subroutine does not return
    RenderingSystem_CoreProcessor0(param_1);
  }
  if (param_2[0xb] != 0) {
// WARNING: Subroutine does not return
    RenderingSystem_CoreProcessor0(param_1);
  }
  if (param_2[10] != 0) {
// WARNING: Subroutine does not return
    RenderingSystem_CoreProcessor0(param_1);
  }
  lVar8 = SystemCore_c4200(param_1,(int)param_2[8] * 8 + 8);
  param_2[9] = lVar8;
  if (lVar8 == 0) {
    return -0x8b;
  }
  lVar8 = SystemCore_c4260(param_1,param_2[0xd],(int)param_2[8] * 0x28);
  param_2[0xd] = lVar8;
  if (lVar8 == 0) {
    return -0x8b;
  }
  lVar8 = SystemCore_c4260(param_1,param_2[0xe],(int)param_2[8] << 5);
  param_2[0xe] = lVar8;
  if (lVar8 == 0) {
    return -0x8b;
  }
  lVar8 = SystemCore_c4200(param_1,(int)param_2[8] << 2);
  param_2[0xb] = lVar8;
  if (lVar8 == 0) {
    return -0x8b;
  }
  lVar8 = SystemCore_c4200(param_1,(int)param_2[8] << 3);
  param_2[10] = lVar8;
  if (lVar8 == 0) {
    return -0x8b;
  }
  lVar8 = SystemCore_c4200(param_1,(int)param_2[8] << 4);
  param_2[0xc] = lVar8;
  if (lVar8 == 0) {
    return -0x8b;
  }
  *(int64_t *)(param_2[9] + 8 + lVar10 * 8) = param_5;
  *(uint64_t *)(param_2[9] + lVar10 * 8) = param_3;
  *(uint64_t *)(param_2[0xc] + 8 + (int64_t)(iVar6 * 2) * 8) = param_6;
  goto LAB_18081991a;
code_r0x0001808194c9:
  piVar11 = piVar11 + 1;
  if (iVar4 == 0) goto LAB_1808194d1;
  goto LAB_1808194c3;
}