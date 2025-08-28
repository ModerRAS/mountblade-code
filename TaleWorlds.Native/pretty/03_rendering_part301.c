#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part301.c - 5 个函数

// 函数: void FUN_18042a450(longlong param_1,int param_2,int param_3,int *param_4,longlong param_5)
void FUN_18042a450(longlong param_1,int param_2,int param_3,int *param_4,longlong param_5)

{
  int8_t *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  longlong lVar6;
  byte *pbVar7;
  ulonglong uVar8;
  byte bVar9;
  int8_t *puVar10;
  byte bVar11;
  byte *pbVar12;
  byte bVar13;
  int8_t auStack_b8 [32];
  int8_t uStack_98;
  int8_t uStack_97;
  int8_t uStack_96;
  int8_t uStack_95;
  int8_t uStack_94;
  int8_t uStack_93;
  int8_t uStack_92;
  int8_t uStack_91;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  int8_t *puStack_68;
  byte abStack_60 [2];
  byte abStack_5e [30];
  ulonglong uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_b8;
  bVar13 = 0;
  lStack_70 = param_5;
  lVar6 = 0;
  pbVar12 = abStack_60;
  iStack_90 = param_3;
  do {
    if (lVar6 == 10) goto LAB_18042ab17;
    pbVar7 = *(byte **)(param_1 + 0xc0);
    lStack_80 = lVar6 + 1;
    pbVar5 = *(byte **)(param_1 + 0xb8);
    if (pbVar5 < pbVar7) {
      bVar11 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      *(byte **)(param_1 + 0xb8) = pbVar5;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
      bVar11 = 0;
    }
    else {
      puVar10 = (int8_t *)(param_1 + 0x38);
      iVar2 = (**(code **)(param_1 + 0x10))
                        (*(uint64_t *)(param_1 + 0x28),puVar10,*(int32_t *)(param_1 + 0x34));
      *(int8_t **)(param_1 + 0xb8) = puVar10;
      if (iVar2 == 0) {
        *(int32_t *)(param_1 + 0x30) = 0;
        *(longlong *)(param_1 + 0xc0) = param_1 + 0x39;
        *puVar10 = 0;
        pbVar7 = *(byte **)(param_1 + 0xc0);
      }
      else {
        pbVar7 = (byte *)(param_1 + 0x38 + (longlong)iVar2);
        *(byte **)(param_1 + 0xc0) = pbVar7;
      }
      bVar11 = **(byte **)(param_1 + 0xb8);
      pbVar5 = *(byte **)(param_1 + 0xb8) + 1;
      *(byte **)(param_1 + 0xb8) = pbVar5;
    }
    if (pbVar5 < pbVar7) {
      bVar9 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      *(byte **)(param_1 + 0xb8) = pbVar5;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
      bVar9 = 0;
    }
    else {
      puVar10 = (int8_t *)(param_1 + 0x38);
      iVar2 = (**(code **)(param_1 + 0x10))
                        (*(uint64_t *)(param_1 + 0x28),puVar10,*(int32_t *)(param_1 + 0x34));
      *(int8_t **)(param_1 + 0xb8) = puVar10;
      if (iVar2 == 0) {
        *(int32_t *)(param_1 + 0x30) = 0;
        *(longlong *)(param_1 + 0xc0) = param_1 + 0x39;
        *puVar10 = 0;
        pbVar7 = *(byte **)(param_1 + 0xc0);
      }
      else {
        pbVar7 = (byte *)(param_1 + 0x38 + (longlong)iVar2);
        *(byte **)(param_1 + 0xc0) = pbVar7;
      }
      bVar9 = **(byte **)(param_1 + 0xb8);
      pbVar5 = *(byte **)(param_1 + 0xb8) + 1;
      *(byte **)(param_1 + 0xb8) = pbVar5;
    }
    *pbVar12 = bVar9;
    if (pbVar5 < pbVar7) {
      bVar9 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      *(byte **)(param_1 + 0xb8) = pbVar5;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
      bVar9 = 0;
    }
    else {
      puVar10 = (int8_t *)(param_1 + 0x38);
      iVar2 = (**(code **)(param_1 + 0x10))
                        (*(uint64_t *)(param_1 + 0x28),puVar10,*(int32_t *)(param_1 + 0x34));
      *(int8_t **)(param_1 + 0xb8) = puVar10;
      if (iVar2 == 0) {
        *(int32_t *)(param_1 + 0x30) = 0;
        *(longlong *)(param_1 + 0xc0) = param_1 + 0x39;
        *puVar10 = 0;
        pbVar7 = *(byte **)(param_1 + 0xc0);
      }
      else {
        pbVar7 = (byte *)(param_1 + 0x38 + (longlong)iVar2);
        *(byte **)(param_1 + 0xc0) = pbVar7;
      }
      bVar9 = **(byte **)(param_1 + 0xb8);
      pbVar5 = *(byte **)(param_1 + 0xb8) + 1;
      *(byte **)(param_1 + 0xb8) = pbVar5;
    }
    pbVar12[1] = bVar9;
    if (pbVar5 < pbVar7) {
      bVar9 = *pbVar5;
      *(byte **)(param_1 + 0xb8) = pbVar5 + 1;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
      bVar9 = 0;
    }
    else {
      puVar10 = (int8_t *)(param_1 + 0x38);
      iVar2 = (**(code **)(param_1 + 0x10))
                        (*(uint64_t *)(param_1 + 0x28),puVar10,*(int32_t *)(param_1 + 0x34));
      *(int8_t **)(param_1 + 0xb8) = puVar10;
      if (iVar2 == 0) {
        *(int32_t *)(param_1 + 0x30) = 0;
        *(longlong *)(param_1 + 0xc0) = param_1 + 0x39;
        *puVar10 = 0;
      }
      else {
        *(longlong *)(param_1 + 0xc0) = param_1 + 0x38 + (longlong)iVar2;
      }
      bVar9 = **(byte **)(param_1 + 0xb8);
      *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
    }
    bVar13 = bVar13 | bVar9;
    pbVar12[2] = bVar9;
    if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_18042a6e0:
      if (*(ulonglong *)(param_1 + 0xc0) <= *(ulonglong *)(param_1 + 0xb8)) goto LAB_18042ab17;
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x20))();
      if (iVar2 != 0) {
        if (*(int *)(param_1 + 0x30) != 0) goto LAB_18042a6e0;
        goto LAB_18042ab17;
      }
    }
    if (*pbVar12 != 8) goto LAB_18042ab17;
    lVar6 = lStack_80;
    pbVar12 = pbVar12 + 3;
  } while (bVar11 != 0);
  *param_4 = ((bVar13 & 0x10) != 0) + 3;
  iStack_8c = 0;
  if (0 < iStack_90) {
    iStack_88 = 0;
    iVar2 = iStack_90;
    do {
      lStack_78 = 0;
      if (0 < lVar6) {
        pbVar12 = abStack_5e;
        puStack_68 = (int8_t *)(iStack_88 + lStack_70);
        do {
          bVar13 = pbVar12[-1];
          if (bVar13 == 0) {
            iVar2 = 0;
            if (0 < param_2) {
              bVar13 = *pbVar12;
              puVar10 = puStack_68;
              do {
                lVar6 = FUN_18042a360(param_1,bVar13,puVar10);
                if (lVar6 == 0) goto LAB_18042ab17;
                iVar2 = iVar2 + 1;
                puVar10 = puVar10 + 4;
              } while (iVar2 < param_2);
            }
          }
          else if (bVar13 == 1) {
            puVar10 = puStack_68;
            iVar2 = param_2;
            if (0 < param_2) {
              do {
                pbVar5 = *(byte **)(param_1 + 0xb8);
                if (pbVar5 < *(byte **)(param_1 + 0xc0)) {
                  bVar13 = *pbVar5;
                  *(byte **)(param_1 + 0xb8) = pbVar5 + 1;
                }
                else if (*(int *)(param_1 + 0x30) == 0) {
                  bVar13 = 0;
                }
                else {
                  puVar1 = (int8_t *)(param_1 + 0x38);
                  iVar3 = (**(code **)(param_1 + 0x10))
                                    (*(uint64_t *)(param_1 + 0x28),puVar1,
                                     *(int32_t *)(param_1 + 0x34));
                  *(int8_t **)(param_1 + 0xb8) = puVar1;
                  if (iVar3 == 0) {
                    *(int32_t *)(param_1 + 0x30) = 0;
                    *(longlong *)(param_1 + 0xc0) = param_1 + 0x39;
                    *puVar1 = 0;
                  }
                  else {
                    *(longlong *)(param_1 + 0xc0) = param_1 + 0x38 + (longlong)iVar3;
                  }
                  bVar13 = **(byte **)(param_1 + 0xb8);
                  *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
                }
                if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_18042a9f0:
                  if (*(ulonglong *)(param_1 + 0xc0) <= *(ulonglong *)(param_1 + 0xb8))
                  goto LAB_18042ab17;
                }
                else {
                  iVar3 = (**(code **)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
                  if (iVar3 != 0) {
                    if (*(int *)(param_1 + 0x30) != 0) goto LAB_18042a9f0;
                    goto LAB_18042ab17;
                  }
                }
                bVar11 = *pbVar12;
                lVar6 = FUN_18042a360(param_1,bVar11,&uStack_94);
                if (lVar6 == 0) goto LAB_18042ab17;
                bVar9 = (byte)iVar2;
                if ((int)(uint)bVar13 <= iVar2) {
                  bVar9 = bVar13;
                }
                uVar8 = (ulonglong)bVar9;
                if (bVar9 != 0) {
                  do {
                    if ((char)bVar11 < '\0') {
                      *puVar10 = (char)_uStack_94;
                    }
                    if ((bVar11 & 0x40) != 0) {
                      puVar10[1] = uStack_93;
                    }
                    if ((bVar11 & 0x20) != 0) {
                      puVar10[2] = uStack_92;
                    }
                    if ((bVar11 & 0x10) != 0) {
                      puVar10[3] = uStack_91;
                    }
                    puVar10 = puVar10 + 4;
                    uVar8 = uVar8 - 1;
                  } while (uVar8 != 0);
                }
                iVar2 = iVar2 - (uint)bVar9;
              } while (0 < iVar2);
            }
          }
          else {
            if (bVar13 != 2) goto LAB_18042ab17;
            puVar10 = puStack_68;
            iVar2 = param_2;
            if (0 < param_2) {
              do {
                pbVar5 = *(byte **)(param_1 + 0xb8);
                if (pbVar5 < *(byte **)(param_1 + 0xc0)) {
                  uVar4 = (uint)*pbVar5;
                  *(byte **)(param_1 + 0xb8) = pbVar5 + 1;
                }
                else if (*(int *)(param_1 + 0x30) == 0) {
                  uVar4 = 0;
                }
                else {
                  puVar1 = (int8_t *)(param_1 + 0x38);
                  iVar3 = (**(code **)(param_1 + 0x10))
                                    (*(uint64_t *)(param_1 + 0x28),puVar1,
                                     *(int32_t *)(param_1 + 0x34));
                  *(int8_t **)(param_1 + 0xb8) = puVar1;
                  if (iVar3 == 0) {
                    *(int32_t *)(param_1 + 0x30) = 0;
                    *(longlong *)(param_1 + 0xc0) = param_1 + 0x39;
                    *puVar1 = 0;
                  }
                  else {
                    *(longlong *)(param_1 + 0xc0) = param_1 + 0x38 + (longlong)iVar3;
                  }
                  uVar4 = (uint)**(byte **)(param_1 + 0xb8);
                  *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
                }
                if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_18042a852:
                  if (*(ulonglong *)(param_1 + 0xc0) <= *(ulonglong *)(param_1 + 0xb8))
                  goto LAB_18042ab17;
                }
                else {
                  iVar3 = (**(code **)(param_1 + 0x20))();
                  if (iVar3 != 0) {
                    if (*(int *)(param_1 + 0x30) != 0) goto LAB_18042a852;
                    goto LAB_18042ab17;
                  }
                }
                if (uVar4 < 0x80) {
                  uVar4 = uVar4 + 1;
                  if (iVar2 < (int)uVar4) goto LAB_18042ab17;
                  iVar3 = 0;
                  if (uVar4 != 0) {
                    bVar13 = *pbVar12;
                    do {
                      lVar6 = FUN_18042a360(param_1,bVar13,puVar10);
                      if (lVar6 == 0) goto LAB_18042ab17;
                      iVar3 = iVar3 + 1;
                      puVar10 = puVar10 + 4;
                    } while (iVar3 < (int)uVar4);
                  }
                }
                else {
                  if (uVar4 == 0x80) {
                    uVar4 = FUN_18041efc0(param_1);
                  }
                  else {
                    uVar4 = uVar4 - 0x7f;
                  }
                  uVar8 = (ulonglong)uVar4;
                  if (iVar2 < (int)uVar4) goto LAB_18042ab17;
                  bVar13 = *pbVar12;
                  lVar6 = FUN_18042a360(param_1,bVar13,&uStack_98);
                  if (lVar6 == 0) goto LAB_18042ab17;
                  if (0 < (int)uVar4) {
                    do {
                      if ((char)bVar13 < '\0') {
                        *puVar10 = (char)_uStack_98;
                      }
                      if ((bVar13 & 0x40) != 0) {
                        puVar10[1] = uStack_97;
                      }
                      if ((bVar13 & 0x20) != 0) {
                        puVar10[2] = uStack_96;
                      }
                      if ((bVar13 & 0x10) != 0) {
                        puVar10[3] = uStack_95;
                      }
                      puVar10 = puVar10 + 4;
                      uVar8 = uVar8 - 1;
                    } while (uVar8 != 0);
                  }
                }
                iVar2 = iVar2 - uVar4;
              } while (0 < iVar2);
            }
          }
          pbVar12 = pbVar12 + 3;
          lStack_78 = lStack_78 + 1;
          lVar6 = lStack_80;
          iVar2 = iStack_90;
        } while (lStack_78 < lStack_80);
      }
      iStack_8c = iStack_8c + 1;
      iStack_88 = iStack_88 + param_2 * 4;
    } while (iStack_8c < iVar2);
  }
LAB_18042ab17:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18042ab50(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  longlong lVar5;
  
  lVar5 = 0x5c;
  do {
    if (*(ulonglong *)(param_1 + 0xb8) < *(ulonglong *)(param_1 + 0xc0)) {
      *(ulonglong *)(param_1 + 0xb8) = *(ulonglong *)(param_1 + 0xb8) + 1;
    }
    else if (*(int *)(param_1 + 0x30) != 0) {
      FUN_18041ee20(param_1);
      *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + 1;
    }
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar1 = FUN_18041efc0(param_1);
  iVar2 = FUN_18041efc0(param_1);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar3 = (**(code **)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
    if (iVar3 == 0) goto LAB_18042ac0d;
    if (*(int *)(param_1 + 0x30) == 0) {
      return 0;
    }
  }
  if (*(ulonglong *)(param_1 + 0xc0) <= *(ulonglong *)(param_1 + 0xb8)) {
    return 0;
  }
LAB_18042ac0d:
  if ((((-1 < iVar1) && (-1 < iVar2)) &&
      ((iVar2 == 0 || (iVar1 <= (int)(0x7fffffff / (longlong)iVar2))))) &&
     ((iVar3 = iVar2 * iVar1, -1 < iVar3 && (iVar3 < 0x20000000)))) {
    FUN_18041efc0(param_1);
    FUN_18041efc0(param_1);
    FUN_18041efc0(param_1);
    FUN_18041efc0(param_1);
    if (((iVar2 == 0) || (iVar1 <= (int)(0x7fffffff / (longlong)iVar2))) &&
       ((-1 < iVar3 && (iVar3 < 0x20000000)))) {
      uVar4 = FUN_18062b420(system_memory_pool_ptr,(longlong)(iVar3 * 4),0x22);
    }
    else {
      uVar4 = 0;
    }
                    // WARNING: Subroutine does not return
    memset(uVar4,0xff,(longlong)(iVar3 * 4));
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18042ac55(void)
void FUN_18042ac55(void)

{
  uint64_t uVar1;
  int unaff_EBP;
  int unaff_EDI;
  int unaff_R14D;
  
  FUN_18041efc0();
  FUN_18041efc0();
  FUN_18041efc0();
  FUN_18041efc0();
  if ((((unaff_EBP == 0) || (unaff_R14D <= (int)(0x7fffffff / (longlong)unaff_EBP))) &&
      (-1 < unaff_EDI)) && (unaff_EDI < 0x20000000)) {
    uVar1 = FUN_18062b420(system_memory_pool_ptr,(longlong)(unaff_EDI * 4),0x22);
  }
  else {
    uVar1 = 0;
  }
                    // WARNING: Subroutine does not return
  memset(uVar1,0xff,(longlong)(unaff_EDI * 4));
}



uint64_t FUN_18042ad1b(void)

{
  return 0;
}



uint64_t FUN_18042ad40(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  
  pcVar1 = *(char **)(param_1 + 0xb8);
  if (*(char **)(param_1 + 0xc0) <= pcVar1) {
    if (*(int *)(param_1 + 0x30) == 0) {
      return 0;
    }
    FUN_18041ee20();
    pcVar1 = *(char **)(param_1 + 0xb8);
  }
  cVar3 = *pcVar1;
  pcVar1 = pcVar1 + 1;
  *(char **)(param_1 + 0xb8) = pcVar1;
  if (cVar3 == 'G') {
    if (*(char **)(param_1 + 0xc0) <= pcVar1) {
      if (*(int *)(param_1 + 0x30) == 0) {
        return 0;
      }
      FUN_18041ee20(param_1);
      pcVar1 = *(char **)(param_1 + 0xb8);
    }
    cVar3 = *pcVar1;
    pcVar1 = pcVar1 + 1;
    *(char **)(param_1 + 0xb8) = pcVar1;
    if (cVar3 == 'I') {
      if (*(char **)(param_1 + 0xc0) <= pcVar1) {
        if (*(int *)(param_1 + 0x30) == 0) {
          return 0;
        }
        FUN_18041ee20(param_1);
        pcVar1 = *(char **)(param_1 + 0xb8);
      }
      cVar3 = *pcVar1;
      pcVar1 = pcVar1 + 1;
      *(char **)(param_1 + 0xb8) = pcVar1;
      if (cVar3 == 'F') {
        if (*(char **)(param_1 + 0xc0) <= pcVar1) {
          if (*(int *)(param_1 + 0x30) == 0) {
            return 0;
          }
          FUN_18041ee20(param_1);
          pcVar1 = *(char **)(param_1 + 0xb8);
        }
        cVar3 = *pcVar1;
        pcVar2 = pcVar1 + 1;
        *(char **)(param_1 + 0xb8) = pcVar2;
        if (cVar3 == '8') {
          if (pcVar2 < *(char **)(param_1 + 0xc0)) {
            cVar3 = *pcVar2;
            pcVar2 = pcVar1 + 2;
            *(char **)(param_1 + 0xb8) = pcVar2;
          }
          else if (*(int *)(param_1 + 0x30) == 0) {
            cVar3 = '\0';
          }
          else {
            FUN_18041ee20(param_1);
            cVar3 = **(char **)(param_1 + 0xb8);
            pcVar2 = *(char **)(param_1 + 0xb8) + 1;
            *(char **)(param_1 + 0xb8) = pcVar2;
          }
          if ((cVar3 == '9') || (cVar3 == '7')) {
            if (*(char **)(param_1 + 0xc0) <= pcVar2) {
              if (*(int *)(param_1 + 0x30) == 0) {
                return 0;
              }
              FUN_18041ee20(param_1);
              pcVar2 = *(char **)(param_1 + 0xb8);
            }
            cVar3 = *pcVar2;
            *(char **)(param_1 + 0xb8) = pcVar2 + 1;
            if (cVar3 == 'a') {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}





// 函数: void FUN_18042aec0(longlong param_1,longlong param_2,int param_3,int param_4)
void FUN_18042aec0(longlong param_1,longlong param_2,int param_3,int param_4)

{
  int8_t *puVar1;
  int8_t uVar2;
  longlong lVar3;
  int iVar4;
  int8_t *puVar5;
  
  if (0 < param_3) {
    iVar4 = 0;
    lVar3 = (longlong)param_3;
    puVar5 = (int8_t *)(param_2 + 1);
    do {
      puVar1 = *(int8_t **)(param_1 + 0xb8);
      if (puVar1 < *(int8_t **)(param_1 + 0xc0)) {
        uVar2 = *puVar1;
        *(int8_t **)(param_1 + 0xb8) = puVar1 + 1;
      }
      else if (*(int *)(param_1 + 0x30) == 0) {
        uVar2 = 0;
      }
      else {
        FUN_18041ee20(param_1);
        uVar2 = **(int8_t **)(param_1 + 0xb8);
        *(int8_t **)(param_1 + 0xb8) = *(int8_t **)(param_1 + 0xb8) + 1;
      }
      puVar5[1] = uVar2;
      puVar1 = *(int8_t **)(param_1 + 0xb8);
      if (puVar1 < *(int8_t **)(param_1 + 0xc0)) {
        uVar2 = *puVar1;
        *(int8_t **)(param_1 + 0xb8) = puVar1 + 1;
      }
      else if (*(int *)(param_1 + 0x30) == 0) {
        uVar2 = 0;
      }
      else {
        FUN_18041ee20(param_1);
        uVar2 = **(int8_t **)(param_1 + 0xb8);
        *(int8_t **)(param_1 + 0xb8) = *(int8_t **)(param_1 + 0xb8) + 1;
      }
      *puVar5 = uVar2;
      puVar1 = *(int8_t **)(param_1 + 0xb8);
      if (puVar1 < *(int8_t **)(param_1 + 0xc0)) {
        uVar2 = *puVar1;
        *(int8_t **)(param_1 + 0xb8) = puVar1 + 1;
      }
      else if (*(int *)(param_1 + 0x30) == 0) {
        uVar2 = 0;
      }
      else {
        FUN_18041ee20(param_1);
        uVar2 = **(int8_t **)(param_1 + 0xb8);
        *(int8_t **)(param_1 + 0xb8) = *(int8_t **)(param_1 + 0xb8) + 1;
      }
      puVar5[-1] = uVar2;
      uVar2 = 0xff;
      if (param_4 == iVar4) {
        uVar2 = 0;
      }
      iVar4 = iVar4 + 1;
      puVar5[2] = uVar2;
      puVar5 = puVar5 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}





// 函数: void FUN_18042aedf(longlong param_1,longlong param_2,int param_3,int param_4)
void FUN_18042aedf(longlong param_1,longlong param_2,int param_3,int param_4)

{
  int8_t *puVar1;
  int8_t uVar2;
  longlong lVar3;
  int iVar4;
  int8_t *puVar5;
  int unaff_R15D;
  
  lVar3 = (longlong)param_3;
  puVar5 = (int8_t *)(param_2 + 1);
  iVar4 = unaff_R15D;
  do {
    puVar1 = *(int8_t **)(param_1 + 0xb8);
    if (puVar1 < *(int8_t **)(param_1 + 0xc0)) {
      uVar2 = *puVar1;
      *(int8_t **)(param_1 + 0xb8) = puVar1 + 1;
    }
    else if (*(int *)(param_1 + 0x30) == unaff_R15D) {
      uVar2 = 0;
    }
    else {
      FUN_18041ee20(param_1);
      uVar2 = **(int8_t **)(param_1 + 0xb8);
      *(int8_t **)(param_1 + 0xb8) = *(int8_t **)(param_1 + 0xb8) + 1;
    }
    puVar5[1] = uVar2;
    puVar1 = *(int8_t **)(param_1 + 0xb8);
    if (puVar1 < *(int8_t **)(param_1 + 0xc0)) {
      uVar2 = *puVar1;
      *(int8_t **)(param_1 + 0xb8) = puVar1 + 1;
    }
    else if (*(int *)(param_1 + 0x30) == unaff_R15D) {
      uVar2 = 0;
    }
    else {
      FUN_18041ee20(param_1);
      uVar2 = **(int8_t **)(param_1 + 0xb8);
      *(int8_t **)(param_1 + 0xb8) = *(int8_t **)(param_1 + 0xb8) + 1;
    }
    *puVar5 = uVar2;
    puVar1 = *(int8_t **)(param_1 + 0xb8);
    if (puVar1 < *(int8_t **)(param_1 + 0xc0)) {
      uVar2 = *puVar1;
      *(int8_t **)(param_1 + 0xb8) = puVar1 + 1;
    }
    else if (*(int *)(param_1 + 0x30) == unaff_R15D) {
      uVar2 = 0;
    }
    else {
      FUN_18041ee20(param_1);
      uVar2 = **(int8_t **)(param_1 + 0xb8);
      *(int8_t **)(param_1 + 0xb8) = *(int8_t **)(param_1 + 0xb8) + 1;
    }
    puVar5[-1] = uVar2;
    uVar2 = 0xff;
    if (param_4 == iVar4) {
      uVar2 = (int8_t)unaff_R15D;
    }
    iVar4 = iVar4 + 1;
    puVar5[2] = uVar2;
    puVar5 = puVar5 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}





// 函数: void FUN_18042b00e(void)
void FUN_18042b00e(void)

{
  return;
}



uint64_t FUN_18042b010(longlong param_1,int32_t *param_2,int32_t *param_3,int param_4)

{
  char cVar1;
  byte *pbVar2;
  int32_t uVar3;
  char *pcVar4;
  byte bVar5;
  
  pcVar4 = *(char **)(param_1 + 0xb8);
  if (*(char **)(param_1 + 0xc0) <= pcVar4) {
    if (*(int *)(param_1 + 0x30) == 0) {
      return 0;
    }
    FUN_18041ee20();
    pcVar4 = *(char **)(param_1 + 0xb8);
  }
  cVar1 = *pcVar4;
  pcVar4 = pcVar4 + 1;
  *(char **)(param_1 + 0xb8) = pcVar4;
  if (cVar1 == 'G') {
    if (*(char **)(param_1 + 0xc0) <= pcVar4) {
      if (*(int *)(param_1 + 0x30) == 0) {
        return 0;
      }
      FUN_18041ee20(param_1);
      pcVar4 = *(char **)(param_1 + 0xb8);
    }
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    *(char **)(param_1 + 0xb8) = pcVar4;
    if (cVar1 == 'I') {
      if (*(char **)(param_1 + 0xc0) <= pcVar4) {
        if (*(int *)(param_1 + 0x30) == 0) {
          return 0;
        }
        FUN_18041ee20(param_1);
        pcVar4 = *(char **)(param_1 + 0xb8);
      }
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *(char **)(param_1 + 0xb8) = pcVar4;
      if (cVar1 == 'F') {
        if (*(char **)(param_1 + 0xc0) <= pcVar4) {
          if (*(int *)(param_1 + 0x30) == 0) {
            return 0;
          }
          FUN_18041ee20(param_1);
          pcVar4 = *(char **)(param_1 + 0xb8);
        }
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *(char **)(param_1 + 0xb8) = pcVar4;
        if (cVar1 == '8') {
          if (*(char **)(param_1 + 0xc0) <= pcVar4) {
            if (*(int *)(param_1 + 0x30) == 0) {
              return 0;
            }
            FUN_18041ee20(param_1);
            pcVar4 = *(char **)(param_1 + 0xb8);
          }
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          *(char **)(param_1 + 0xb8) = pcVar4;
          if ((cVar1 - 0x37U & 0xfd) == 0) {
            if (*(char **)(param_1 + 0xc0) <= pcVar4) {
              if (*(int *)(param_1 + 0x30) == 0) {
                return 0;
              }
              FUN_18041ee20(param_1);
              pcVar4 = *(char **)(param_1 + 0xb8);
            }
            cVar1 = *pcVar4;
            *(char **)(param_1 + 0xb8) = pcVar4 + 1;
            if (cVar1 == 'a') {
              uVar3 = FUN_18041f0a0(param_1);
              *param_2 = uVar3;
              uVar3 = FUN_18041f0a0();
              param_2[1] = uVar3;
              pbVar2 = *(byte **)(param_1 + 0xb8);
              if (pbVar2 < *(byte **)(param_1 + 0xc0)) {
                bVar5 = *pbVar2;
                *(byte **)(param_1 + 0xb8) = pbVar2 + 1;
              }
              else if (*(int *)(param_1 + 0x30) == 0) {
                bVar5 = 0;
              }
              else {
                FUN_18041ee20(param_1);
                bVar5 = **(byte **)(param_1 + 0xb8);
                *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
              }
              param_2[6] = (uint)bVar5;
              pbVar2 = *(byte **)(param_1 + 0xb8);
              if (pbVar2 < *(byte **)(param_1 + 0xc0)) {
                bVar5 = *pbVar2;
                *(byte **)(param_1 + 0xb8) = pbVar2 + 1;
              }
              else if (*(int *)(param_1 + 0x30) == 0) {
                bVar5 = 0;
              }
              else {
                FUN_18041ee20(param_1);
                bVar5 = **(byte **)(param_1 + 0xb8);
                *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
              }
              param_2[7] = (uint)bVar5;
              pbVar2 = *(byte **)(param_1 + 0xb8);
              if (pbVar2 < *(byte **)(param_1 + 0xc0)) {
                bVar5 = *pbVar2;
                *(byte **)(param_1 + 0xb8) = pbVar2 + 1;
              }
              else if (*(int *)(param_1 + 0x30) == 0) {
                bVar5 = 0;
              }
              else {
                FUN_18041ee20(param_1);
                bVar5 = **(byte **)(param_1 + 0xb8);
                *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
              }
              param_2[8] = (uint)bVar5;
              param_2[9] = 0xffffffff;
              if (param_3 != (int32_t *)0x0) {
                *param_3 = 4;
              }
              if ((param_4 == 0) && ((char)(byte)param_2[6] < '\0')) {
                FUN_18042aec0(param_1,param_2 + 0xc,2 << ((byte)param_2[6] & 7),0xffffffff);
              }
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}





