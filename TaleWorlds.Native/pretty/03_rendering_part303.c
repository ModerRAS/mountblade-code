#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part303.c - 5 个函数

// 函数: void FUN_18042c300(int64_t param_1,uint *param_2,int *param_3,int32_t *param_4)
void FUN_18042c300(int64_t param_1,uint *param_2,int *param_3,int32_t *param_4)

{
  char cVar1;
  int8_t *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int64_t lVar7;
  byte *pbVar8;
  int64_t lVar9;
  byte *pbVar10;
  byte bVar11;
  int8_t uVar12;
  byte bVar13;
  uint uVar14;
  int64_t lVar15;
  uint64_t uVar16;
  byte bVar17;
  uint uVar18;
  int8_t *puVar19;
  int64_t lVar20;
  int8_t auStack_4a8 [48];
  int32_t uStack_478;
  int iStack_474;
  char *pcStack_470;
  int iStack_468;
  int64_t lStack_460;
  int8_t auStack_458 [1024];
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_4a8;
  bVar3 = false;
  lVar7 = FUN_18042bff0(param_1,auStack_458);
  iVar4 = strcmp(lVar7,&unknown_var_9792_ptr);
  if (iVar4 != 0) {
    lVar9 = 0;
    do {
      lVar15 = lVar9 + 1;
      if (*(char *)(lVar7 + lVar9) != (&unknown_var_9804_ptr)[lVar9]) goto LAB_18042c891;
      lVar9 = lVar15;
    } while (lVar15 != 7);
  }
  pcStack_470 = (char *)FUN_18042bff0(param_1,auStack_458);
  if (*pcStack_470 != '\0') {
    do {
      iVar4 = strcmp(pcStack_470,&unknown_var_9832_ptr);
      if (iVar4 == 0) {
        bVar3 = true;
      }
      pcStack_470 = (char *)FUN_18042bff0(param_1,auStack_458);
    } while (*pcStack_470 != '\0');
    if (bVar3) {
      pcStack_470 = (char *)FUN_18042bff0(param_1,auStack_458);
      iVar4 = strncmp(pcStack_470,&unknown_var_9856_ptr,3);
      if (iVar4 == 0) {
        pcStack_470 = pcStack_470 + 3;
        iVar4 = strtol(pcStack_470,&pcStack_470,10);
        cVar1 = *pcStack_470;
        while (cVar1 == ' ') {
          pcStack_470 = pcStack_470 + 1;
          cVar1 = *pcStack_470;
        }
        iStack_468 = iVar4;
        iVar5 = strncmp(pcStack_470,&unknown_var_9828_ptr,3);
        if (iVar5 == 0) {
          pcStack_470 = pcStack_470 + 3;
          uVar6 = strtol(pcStack_470,0,10);
          *param_2 = uVar6;
          *param_3 = iVar4;
          if (param_4 != (int32_t *)0x0) {
            *param_4 = 3;
          }
          if ((((-1 < (int)uVar6) && (-1 < iVar4)) &&
              ((iVar4 == 0 || ((int)uVar6 <= (int)(0x7fffffff / (int64_t)iVar4))))) &&
             ((((-1 < (int)(uVar6 * iVar4) && ((int)(uVar6 * iVar4) < 0x2aaaaaab)) &&
               (iVar5 = uVar6 * 3 * iVar4, -1 < iVar5)) &&
              ((iVar5 < 0x20000000 &&
               (lVar7 = func_0x00018041e220(uVar6,iVar4,3), lStack_460 = lVar7, lVar7 != 0)))))) {
            if (0x7ff7 < uVar6 - 8) {
              iVar5 = 0;
              goto LAB_18042c973;
            }
            lVar9 = 0;
            iStack_474 = 0;
            if (0 < iVar4) {
              uStack_478 = 0;
              do {
                pbVar8 = *(byte **)(param_1 + 0xb8);
                pbVar10 = *(byte **)(param_1 + 0xc0);
                if (pbVar8 < pbVar10) {
                  bVar13 = *pbVar8;
                  pbVar8 = pbVar8 + 1;
                  *(byte **)(param_1 + 0xb8) = pbVar8;
                }
                else if (*(int *)(param_1 + 0x30) == 0) {
                  bVar13 = 0;
                }
                else {
                  FUN_18041ee20(param_1);
                  pbVar10 = *(byte **)(param_1 + 0xc0);
                  bVar13 = **(byte **)(param_1 + 0xb8);
                  pbVar8 = *(byte **)(param_1 + 0xb8) + 1;
                  *(byte **)(param_1 + 0xb8) = pbVar8;
                }
                if (pbVar8 < pbVar10) {
                  bVar17 = *pbVar8;
                  pbVar8 = pbVar8 + 1;
                  *(byte **)(param_1 + 0xb8) = pbVar8;
                }
                else if (*(int *)(param_1 + 0x30) == 0) {
                  bVar17 = 0;
                }
                else {
                  FUN_18041ee20(param_1);
                  pbVar10 = *(byte **)(param_1 + 0xc0);
                  bVar17 = **(byte **)(param_1 + 0xb8);
                  pbVar8 = *(byte **)(param_1 + 0xb8) + 1;
                  *(byte **)(param_1 + 0xb8) = pbVar8;
                }
                if (pbVar8 < pbVar10) {
                  bVar11 = *pbVar8;
                  pbVar8 = pbVar8 + 1;
                  *(byte **)(param_1 + 0xb8) = pbVar8;
                }
                else if (*(int *)(param_1 + 0x30) == 0) {
                  bVar11 = 0;
                }
                else {
                  FUN_18041ee20(param_1);
                  bVar11 = **(byte **)(param_1 + 0xb8);
                  pbVar8 = *(byte **)(param_1 + 0xb8) + 1;
                  *(byte **)(param_1 + 0xb8) = pbVar8;
                }
                iVar4 = uStack_478;
                if (((bVar13 != 2) || (bVar17 != 2)) || ((char)bVar11 < '\0')) {
                  uStack_478._3_1_ = SUB41(iVar4,3);
                  uStack_478._0_3_ = CONCAT12(bVar11,CONCAT11(bVar17,bVar13));
                  if (pbVar8 < *(byte **)(param_1 + 0xc0)) {
                    bVar13 = *pbVar8;
                    *(byte **)(param_1 + 0xb8) = pbVar8 + 1;
                  }
                  else if (*(int *)(param_1 + 0x30) == 0) {
                    bVar13 = 0;
                  }
                  else {
                    FUN_18041ee20(param_1);
                    bVar13 = **(byte **)(param_1 + 0xb8);
                    *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
                  }
                  uStack_478 = CONCAT13(bVar13,(uint32_t)uStack_478);
                  FUN_18042c1d0(lVar7,&uStack_478,3);
                  iVar5 = 0;
                  if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner(lVar9);
                  }
                  iVar4 = 1;
                  do {
                    FUN_18041eef0(param_1,&iStack_474,4);
                    FUN_18042c1d0(lVar7 + ((int64_t)(int)(iVar5 * uVar6 * 3) +
                                          (int64_t)(iVar4 * 3)) * 4,&iStack_474,3);
                    iVar4 = iVar4 + 1;
                    while ((int)uVar6 <= iVar4) {
                      iVar5 = iVar5 + 1;
                      iVar4 = iStack_468;
LAB_18042c973:
                      if (iVar4 <= iVar5) goto LAB_18042c891;
                      iVar4 = 0;
                    }
                  } while( true );
                }
                if (pbVar8 < *(byte **)(param_1 + 0xc0)) {
                  uVar18 = (uint)*pbVar8;
                  *(byte **)(param_1 + 0xb8) = pbVar8 + 1;
                }
                else if (*(int *)(param_1 + 0x30) == 0) {
                  uVar18 = 0;
                }
                else {
                  FUN_18041ee20(param_1);
                  uVar18 = (uint)**(byte **)(param_1 + 0xb8);
                  *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
                }
                if ((uVar18 | (uint)bVar11 << 8) != uVar6) {
LAB_18042c87d:
                    // WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner(lVar7);
                }
                if ((lVar9 == 0) &&
                   ((0x1fffffff < (int)uVar6 ||
                    (lVar9 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)(uVar6 * 4),0x22),
                    lVar9 == 0)))) {
                    // WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner(lVar7);
                }
                lVar15 = 0;
                do {
                  iVar4 = 0;
                  lVar20 = 0;
                  uVar18 = uVar6;
                  lVar7 = lStack_460;
                  while (lStack_460 = lVar7, 0 < (int)uVar18) {
                    pbVar8 = *(byte **)(param_1 + 0xb8);
                    if (pbVar8 < *(byte **)(param_1 + 0xc0)) {
LAB_18042c6e9:
                      bVar13 = *pbVar8;
                      uVar16 = (uint64_t)bVar13;
                      pbVar10 = pbVar8 + 1;
                      *(byte **)(param_1 + 0xb8) = pbVar10;
                      if (bVar13 < 0x81) goto LAB_18042c776;
                      if (pbVar10 < *(byte **)(param_1 + 0xc0)) {
                        bVar17 = *pbVar10;
                        *(byte **)(param_1 + 0xb8) = pbVar8 + 2;
                      }
                      else if (*(int *)(param_1 + 0x30) == 0) {
                        bVar17 = 0;
                      }
                      else {
                        FUN_18041ee20(param_1);
                        bVar17 = **(byte **)(param_1 + 0xb8);
                        *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
                      }
                      uVar16 = (uint64_t)(byte)(bVar13 + 0x80);
                      uVar14 = (uint)(byte)(bVar13 + 0x80);
                      lVar7 = lStack_460;
                      if ((int)uVar18 < (int)uVar14) goto LAB_18042c87d;
                      if (uVar14 != 0) {
                        iVar4 = iVar4 + uVar14;
                        pbVar8 = (byte *)(lVar15 + lVar20 * 4 + lVar9);
                        lVar20 = lVar20 + uVar16;
                        do {
                          *pbVar8 = bVar17;
                          pbVar8 = pbVar8 + 4;
                          uVar16 = uVar16 - 1;
                        } while (uVar16 != 0);
                      }
                    }
                    else {
                      if (*(int *)(param_1 + 0x30) != 0) {
                        FUN_18041ee20();
                        pbVar8 = *(byte **)(param_1 + 0xb8);
                        goto LAB_18042c6e9;
                      }
                      uVar16 = 0;
LAB_18042c776:
                      lVar7 = lStack_460;
                      if ((int)uVar18 < (int)uVar16) goto LAB_18042c87d;
                      if ((char)uVar16 != '\0') {
                        iVar4 = iVar4 + (int)uVar16;
                        puVar19 = (int8_t *)(lVar15 + lVar20 * 4 + lVar9);
                        lVar20 = lVar20 + uVar16;
                        do {
                          puVar2 = *(int8_t **)(param_1 + 0xb8);
                          if (puVar2 < *(int8_t **)(param_1 + 0xc0)) {
                            uVar12 = *puVar2;
                            *(int8_t **)(param_1 + 0xb8) = puVar2 + 1;
                          }
                          else if (*(int *)(param_1 + 0x30) == 0) {
                            uVar12 = 0;
                          }
                          else {
                            FUN_18041ee20(param_1);
                            uVar12 = **(int8_t **)(param_1 + 0xb8);
                            *(int8_t **)(param_1 + 0xb8) = *(int8_t **)(param_1 + 0xb8) + 1;
                          }
                          *puVar19 = uVar12;
                          puVar19 = puVar19 + 4;
                          uVar16 = uVar16 - 1;
                        } while (uVar16 != 0);
                      }
                    }
                    lVar7 = lStack_460;
                    uVar18 = uVar6 - iVar4;
                  }
                  lVar15 = lVar15 + 1;
                } while (lVar15 < 4);
                if (0 < (int)uVar6) {
                  lVar15 = lVar7 + (int64_t)uStack_478 * 4;
                  uVar16 = (uint64_t)uVar6;
                  lVar20 = lVar9;
                  do {
                    FUN_18042c1d0(lVar15,lVar20,3);
                    lVar15 = lVar15 + 0xc;
                    lVar20 = lVar20 + 4;
                    uVar16 = uVar16 - 1;
                  } while (uVar16 != 0);
                }
                uStack_478 = uStack_478 + uVar6 * 3;
                iStack_474 = iStack_474 + 1;
              } while (iStack_474 < iStack_468);
              if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner(lVar9);
              }
            }
          }
        }
      }
    }
  }
LAB_18042c891:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_4a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18042c990(int64_t param_1,int *param_2,int *param_3,int *param_4)
void FUN_18042c990(int64_t param_1,int *param_2,int *param_3,int *param_4)

{
  uint64_t *puVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  void *puVar6;
  byte bVar7;
  byte bVar8;
  int *piVar9;
  uint uVar10;
  int *piVar12;
  uint64_t uVar13;
  int8_t auStack_a8 [32];
  int aiStack_88 [2];
  int *piStack_80;
  uint64_t uStack_58;
  uint64_t uVar11;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  uVar11 = 0;
  piVar9 = aiStack_88;
  if (param_2 != (int *)0x0) {
    piVar9 = param_2;
  }
  puVar1 = (uint64_t *)(param_1 + 0xb8);
  puVar6 = &unknown_var_9812_ptr;
  piVar12 = aiStack_88;
  if (param_3 != (int *)0x0) {
    piVar12 = param_3;
  }
  piStack_80 = aiStack_88;
  if (param_4 != (int *)0x0) {
    piStack_80 = param_4;
  }
  iVar2 = FUN_18042a2c0(param_1,&unknown_var_9812_ptr);
  if (iVar2 != 0) {
    if ((*(int64_t *)(param_1 + 0x10) == 0) ||
       (iVar2 = *(int *)(param_1 + 0xc0) - *(int *)puVar1, 0x57 < iVar2)) {
      *puVar1 = *puVar1 + 0x58;
    }
    else {
      puVar6 = (void *)(uint64_t)(0x58 - iVar2);
      *puVar1 = *(uint64_t *)(param_1 + 0xc0);
      (**(code **)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28),puVar6);
    }
    iVar2 = FUN_18041efc0(param_1);
    *piVar9 = iVar2;
    iVar2 = FUN_18041efc0(param_1);
    *piVar12 = iVar2;
    if (*(int64_t *)(param_1 + 0x10) == 0) {
LAB_18042ca75:
      if (*(uint64_t *)(param_1 + 0xc0) <= *puVar1) goto LAB_18042c9f6;
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
      if (iVar2 != 0) {
        if (*(int *)(param_1 + 0x30) == 0) goto LAB_18042c9f6;
        goto LAB_18042ca75;
      }
    }
    iVar2 = *piVar9;
    if ((iVar2 == 0) ||
       (puVar6 = (void *)(0x10000000 % (int64_t)iVar2 & 0xffffffff),
       *piVar12 <= (int)(0x10000000 / (int64_t)iVar2))) {
      uVar13 = uVar11;
      if ((*(int64_t *)(param_1 + 0x10) == 0) ||
         (iVar2 = *(int *)(param_1 + 0xc0) - *(int *)puVar1, 7 < iVar2)) {
        *puVar1 = *puVar1 + 8;
      }
      else {
        puVar6 = (void *)(uint64_t)(8 - iVar2);
        *puVar1 = *(uint64_t *)(param_1 + 0xc0);
        (**(code **)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28),puVar6);
      }
      do {
        if (uVar13 == 10) goto FUN_18042cc47;
        pbVar3 = (byte *)*puVar1;
        pbVar5 = *(byte **)(param_1 + 0xc0);
        if (pbVar3 < pbVar5) {
          bVar7 = *pbVar3;
          pbVar3 = pbVar3 + 1;
          *puVar1 = (uint64_t)pbVar3;
        }
        else if (*(int *)(param_1 + 0x30) == 0) {
          bVar7 = 0;
        }
        else {
          FUN_18041ee20(param_1);
          pbVar5 = *(byte **)(param_1 + 0xc0);
          bVar7 = *(byte *)*puVar1;
          pbVar3 = (byte *)*puVar1 + 1;
          *puVar1 = (uint64_t)pbVar3;
        }
        if (pbVar3 < pbVar5) {
          bVar8 = *pbVar3;
          pbVar3 = pbVar3 + 1;
          *puVar1 = (uint64_t)pbVar3;
        }
        else if (*(int *)(param_1 + 0x30) == 0) {
          bVar8 = 0;
        }
        else {
          FUN_18041ee20(param_1);
          pbVar5 = *(byte **)(param_1 + 0xc0);
          bVar8 = *(byte *)*puVar1;
          pbVar3 = (byte *)*puVar1 + 1;
          *puVar1 = (uint64_t)pbVar3;
        }
        if (pbVar3 < pbVar5) {
          puVar6 = (void *)(uint64_t)*pbVar3;
          pbVar3 = pbVar3 + 1;
          *puVar1 = (uint64_t)pbVar3;
        }
        else if (*(int *)(param_1 + 0x30) == 0) {
          puVar6 = (void *)((uint64_t)puVar6 & 0xffffffffffffff00);
        }
        else {
          FUN_18041ee20(param_1);
          pbVar5 = *(byte **)(param_1 + 0xc0);
          puVar6 = (void *)(uint64_t)*(byte *)*puVar1;
          pbVar3 = (byte *)*puVar1 + 1;
          *puVar1 = (uint64_t)pbVar3;
        }
        if (pbVar3 < pbVar5) {
          bVar4 = *pbVar3;
          *puVar1 = (uint64_t)(pbVar3 + 1);
        }
        else if (*(int *)(param_1 + 0x30) == 0) {
          bVar4 = 0;
        }
        else {
          FUN_18041ee20(param_1,puVar6);
          bVar4 = *(byte *)*puVar1;
          *puVar1 = (uint64_t)((byte *)*puVar1 + 1);
        }
        uVar10 = (uint)uVar11 | (uint)bVar4;
        uVar11 = (uint64_t)uVar10;
        if (*(int64_t *)(param_1 + 0x10) != 0) {
          iVar2 = (**(code **)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
          if (iVar2 == 0) goto LAB_18042cbf7;
          if (*(int *)(param_1 + 0x30) != 0) goto LAB_18042cbeb;
LAB_18042cc23:
          *puVar1 = *(uint64_t *)(param_1 + 200);
          *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 0xd0);
          goto FUN_18042cc47;
        }
LAB_18042cbeb:
        if (*(uint64_t *)(param_1 + 0xc0) <= *puVar1) goto LAB_18042cc23;
LAB_18042cbf7:
        if (bVar8 != 8) goto LAB_18042cc23;
        uVar13 = uVar13 + 1;
      } while (bVar7 != 0);
      *piStack_80 = ((uVar10 & 0x10) != 0) + 3;
      goto FUN_18042cc47;
    }
  }
LAB_18042c9f6:
  *puVar1 = *(uint64_t *)(param_1 + 200);
  *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 0xd0);
FUN_18042cc47:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_a8);
}





// 函数: void FUN_18042ca9c(void)
void FUN_18042ca9c(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int64_t unaff_RBX;
  byte bVar5;
  byte bVar6;
  uint64_t *unaff_RDI;
  uint uVar7;
  uint64_t unaff_R13;
  int64_t unaff_R15;
  int *in_stack_00000028;
  uint64_t in_stack_00000050;
  
  if ((*(uint64_t *)(unaff_RBX + 0x10) == unaff_R13) ||
     (iVar3 = *(int *)(unaff_RBX + 0xc0) - (int)*unaff_RDI, 7 < iVar3)) {
    *unaff_RDI = *unaff_RDI + 8;
  }
  else {
    *unaff_RDI = *(uint64_t *)(unaff_RBX + 0xc0);
    (**(code **)(unaff_RBX + 0x18))(*(uint64_t *)(unaff_RBX + 0x28),8 - iVar3);
  }
  do {
    if (unaff_R15 == 10) goto LAB_18042cc3d;
    pbVar1 = (byte *)*unaff_RDI;
    unaff_R15 = unaff_R15 + 1;
    pbVar4 = *(byte **)(unaff_RBX + 0xc0);
    if (pbVar1 < pbVar4) {
      bVar5 = *pbVar1;
      pbVar1 = pbVar1 + 1;
      *unaff_RDI = (uint64_t)pbVar1;
    }
    else if (*(int *)(unaff_RBX + 0x30) == 0) {
      bVar5 = 0;
    }
    else {
      FUN_18041ee20();
      pbVar4 = *(byte **)(unaff_RBX + 0xc0);
      bVar5 = *(byte *)*unaff_RDI;
      pbVar1 = (byte *)*unaff_RDI + 1;
      *unaff_RDI = (uint64_t)pbVar1;
    }
    if (pbVar1 < pbVar4) {
      bVar6 = *pbVar1;
      pbVar1 = pbVar1 + 1;
      *unaff_RDI = (uint64_t)pbVar1;
    }
    else if (*(int *)(unaff_RBX + 0x30) == 0) {
      bVar6 = 0;
    }
    else {
      FUN_18041ee20();
      pbVar4 = *(byte **)(unaff_RBX + 0xc0);
      bVar6 = *(byte *)*unaff_RDI;
      pbVar1 = (byte *)*unaff_RDI + 1;
      *unaff_RDI = (uint64_t)pbVar1;
    }
    if (pbVar1 < pbVar4) {
      pbVar1 = pbVar1 + 1;
      *unaff_RDI = (uint64_t)pbVar1;
    }
    else if (*(int *)(unaff_RBX + 0x30) != 0) {
      FUN_18041ee20();
      pbVar4 = *(byte **)(unaff_RBX + 0xc0);
      pbVar1 = (byte *)(*unaff_RDI + 1);
      *unaff_RDI = (uint64_t)pbVar1;
    }
    if (pbVar1 < pbVar4) {
      bVar2 = *pbVar1;
      *unaff_RDI = (uint64_t)(pbVar1 + 1);
    }
    else if (*(int *)(unaff_RBX + 0x30) == 0) {
      bVar2 = 0;
    }
    else {
      FUN_18041ee20();
      bVar2 = *(byte *)*unaff_RDI;
      *unaff_RDI = (uint64_t)((byte *)*unaff_RDI + 1);
    }
    uVar7 = (uint)unaff_R13 | (uint)bVar2;
    unaff_R13 = (uint64_t)uVar7;
    if (*(int64_t *)(unaff_RBX + 0x10) != 0) {
      iVar3 = (**(code **)(unaff_RBX + 0x20))(*(uint64_t *)(unaff_RBX + 0x28));
      if (iVar3 == 0) goto LAB_18042cbf7;
      if (*(int *)(unaff_RBX + 0x30) != 0) goto LAB_18042cbeb;
LAB_18042cc23:
      *unaff_RDI = *(uint64_t *)(unaff_RBX + 200);
      *(uint64_t *)(unaff_RBX + 0xc0) = *(uint64_t *)(unaff_RBX + 0xd0);
      goto LAB_18042cc3d;
    }
LAB_18042cbeb:
    if (*(uint64_t *)(unaff_RBX + 0xc0) <= *unaff_RDI) goto LAB_18042cc23;
LAB_18042cbf7:
    if (bVar6 != 8) goto LAB_18042cc23;
  } while (bVar5 != 0);
  *in_stack_00000028 = ((uVar7 & 0x10) != 0) + 3;
LAB_18042cc3d:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18042cc47(void)
void FUN_18042cc47(void)

{
  uint64_t in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18042cc70(int64_t param_1,char *param_2)
void FUN_18042cc70(int64_t param_1,char *param_2)

{
  int8_t *puVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  code *pcVar5;
  
LAB_18042cc90:
  do {
    if (*(int64_t *)(param_1 + 0x10) != 0) {
      iVar4 = (**(code **)(param_1 + 0x20))();
      if (iVar4 == 0) goto LAB_18042ccc1;
      if (*(int *)(param_1 + 0x30) != 0) goto LAB_18042ccad;
LAB_18042cd5f:
      if (*(int64_t *)(param_1 + 0x10) != 0) {
        iVar4 = (**(code **)(param_1 + 0x20))();
        if (iVar4 == 0) goto LAB_18042cd90;
        if (*(int *)(param_1 + 0x30) == 0) {
          return;
        }
      }
      if (*(uint64_t *)(param_1 + 0xc0) <= *(uint64_t *)(param_1 + 0xb8)) {
        return;
      }
LAB_18042cd90:
      if (*param_2 != '#') {
        return;
      }
LAB_18042cda0:
      pcVar5 = *(code **)(param_1 + 0x10);
      if (pcVar5 == (code *)0x0) {
LAB_18042cdca:
        if (*(uint64_t *)(param_1 + 0xc0) <= *(uint64_t *)(param_1 + 0xb8)) goto LAB_18042cc90;
      }
      else {
        iVar4 = (**(code **)(param_1 + 0x20))();
        if (iVar4 != 0) {
          if (*(int *)(param_1 + 0x30) != 0) {
            pcVar5 = *(code **)(param_1 + 0x10);
            goto LAB_18042cdca;
          }
          goto LAB_18042cc90;
        }
        pcVar5 = *(code **)(param_1 + 0x10);
      }
      if ((*param_2 == '\n') || (*param_2 == '\r')) goto LAB_18042cc90;
      pcVar3 = *(char **)(param_1 + 0xb8);
      if (pcVar3 < *(char **)(param_1 + 0xc0)) {
        cVar2 = *pcVar3;
        *(char **)(param_1 + 0xb8) = pcVar3 + 1;
        *param_2 = cVar2;
      }
      else if (*(int *)(param_1 + 0x30) == 0) {
        *param_2 = '\0';
      }
      else {
        puVar1 = (int8_t *)(param_1 + 0x38);
        iVar4 = (*pcVar5)(*(uint64_t *)(param_1 + 0x28),puVar1,*(int32_t *)(param_1 + 0x34));
        *(int8_t **)(param_1 + 0xb8) = puVar1;
        if (iVar4 == 0) {
          *(int32_t *)(param_1 + 0x30) = 0;
          *(int64_t *)(param_1 + 0xc0) = param_1 + 0x39;
          *puVar1 = 0;
        }
        else {
          *(int64_t *)(param_1 + 0xc0) = param_1 + 0x38 + (int64_t)iVar4;
        }
        cVar2 = **(char **)(param_1 + 0xb8);
        *(char **)(param_1 + 0xb8) = *(char **)(param_1 + 0xb8) + 1;
        *param_2 = cVar2;
      }
      goto LAB_18042cda0;
    }
LAB_18042ccad:
    if (*(uint64_t *)(param_1 + 0xc0) <= *(uint64_t *)(param_1 + 0xb8)) goto LAB_18042cd5f;
LAB_18042ccc1:
    if ((*param_2 != ' ') && (4 < (byte)(*param_2 - 9U))) goto LAB_18042cd5f;
    pcVar3 = *(char **)(param_1 + 0xb8);
    if (pcVar3 < *(char **)(param_1 + 0xc0)) {
      cVar2 = *pcVar3;
      *(char **)(param_1 + 0xb8) = pcVar3 + 1;
      *param_2 = cVar2;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
      *param_2 = '\0';
    }
    else {
      puVar1 = (int8_t *)(param_1 + 0x38);
      iVar4 = (**(code **)(param_1 + 0x10))
                        (*(uint64_t *)(param_1 + 0x28),puVar1,*(int32_t *)(param_1 + 0x34));
      *(int8_t **)(param_1 + 0xb8) = puVar1;
      if (iVar4 == 0) {
        *(int32_t *)(param_1 + 0x30) = 0;
        *(int64_t *)(param_1 + 0xc0) = param_1 + 0x39;
        *puVar1 = 0;
      }
      else {
        *(int64_t *)(param_1 + 0xc0) = param_1 + 0x38 + (int64_t)iVar4;
      }
      cVar2 = **(char **)(param_1 + 0xb8);
      *(char **)(param_1 + 0xb8) = *(char **)(param_1 + 0xb8) + 1;
      *param_2 = cVar2;
    }
  } while( true );
}



int FUN_18042ce90(int64_t param_1,char *param_2)

{
  int8_t *puVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    if (*(int64_t *)(param_1 + 0x10) == 0) {
LAB_18042ced1:
      if (*(uint64_t *)(param_1 + 0xc0) <= *(uint64_t *)(param_1 + 0xb8)) {
        return iVar5;
      }
    }
    else {
      iVar4 = (**(code **)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
      if (iVar4 != 0) {
        if (*(int *)(param_1 + 0x30) == 0) {
          return iVar5;
        }
        goto LAB_18042ced1;
      }
    }
    if (9 < (byte)(*param_2 - 0x30U)) {
      return iVar5;
    }
    pcVar3 = *(char **)(param_1 + 0xb8);
    iVar5 = *param_2 + -0x30 + iVar5 * 10;
    if (pcVar3 < *(char **)(param_1 + 0xc0)) {
      cVar2 = *pcVar3;
      *(char **)(param_1 + 0xb8) = pcVar3 + 1;
      *param_2 = cVar2;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
      *param_2 = '\0';
    }
    else {
      puVar1 = (int8_t *)(param_1 + 0x38);
      iVar4 = (**(code **)(param_1 + 0x10))
                        (*(uint64_t *)(param_1 + 0x28),puVar1,*(int32_t *)(param_1 + 0x34));
      *(int8_t **)(param_1 + 0xb8) = puVar1;
      if (iVar4 == 0) {
        *(int32_t *)(param_1 + 0x30) = 0;
        *(int64_t *)(param_1 + 0xc0) = param_1 + 0x39;
        *puVar1 = 0;
      }
      else {
        *(int64_t *)(param_1 + 0xc0) = param_1 + 0x38 + (int64_t)iVar4;
      }
      cVar2 = **(char **)(param_1 + 0xb8);
      *(char **)(param_1 + 0xb8) = *(char **)(param_1 + 0xb8) + 1;
      *param_2 = cVar2;
    }
  } while( true );
}



bool FUN_18042cfb0(int64_t param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4)

{
  int32_t uVar1;
  int iVar2;
  char *pcVar3;
  int8_t *puVar4;
  char cVar5;
  char *pcVar6;
  int32_t *puVar7;
  char cVar8;
  int32_t *puVar9;
  int32_t *puVar10;
  int8_t auStackX_8 [8];
  int32_t auStackX_10 [2];
  
  pcVar3 = *(char **)(param_1 + 200);
  *(char **)(param_1 + 0xb8) = pcVar3;
  pcVar6 = *(char **)(param_1 + 0xd0);
  puVar9 = auStackX_10;
  if (param_2 != (int32_t *)0x0) {
    puVar9 = param_2;
  }
  puVar10 = auStackX_10;
  if (param_3 != (int32_t *)0x0) {
    puVar10 = param_3;
  }
  *(char **)(param_1 + 0xc0) = pcVar6;
  puVar7 = auStackX_10;
  if (param_4 != (int32_t *)0x0) {
    puVar7 = param_4;
  }
  if (pcVar3 < pcVar6) {
    cVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    *(char **)(param_1 + 0xb8) = pcVar3;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    cVar8 = '\0';
  }
  else {
    FUN_18041ee20(param_1);
    pcVar6 = *(char **)(param_1 + 0xc0);
    cVar8 = **(char **)(param_1 + 0xb8);
    pcVar3 = *(char **)(param_1 + 0xb8) + 1;
    *(char **)(param_1 + 0xb8) = pcVar3;
  }
  if (pcVar3 < pcVar6) {
    cVar5 = *pcVar3;
    *(char **)(param_1 + 0xb8) = pcVar3 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    cVar5 = '\0';
  }
  else {
    FUN_18041ee20(param_1);
    cVar5 = **(char **)(param_1 + 0xb8);
    *(char **)(param_1 + 0xb8) = *(char **)(param_1 + 0xb8) + 1;
  }
  if ((cVar8 != 'P') || (1 < (byte)(cVar5 - 0x35U))) {
    *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 200);
    *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 0xd0);
    return false;
  }
  uVar1 = 1;
  if (cVar5 == '6') {
    uVar1 = 3;
  }
  *puVar7 = uVar1;
  puVar4 = *(int8_t **)(param_1 + 0xb8);
  if (*(int8_t **)(param_1 + 0xc0) <= puVar4) {
    if (*(int *)(param_1 + 0x30) == 0) {
      auStackX_8[0] = 0;
      goto LAB_18042d0df;
    }
    FUN_18041ee20(param_1);
    puVar4 = *(int8_t **)(param_1 + 0xb8);
  }
  auStackX_8[0] = *puVar4;
  *(int8_t **)(param_1 + 0xb8) = puVar4 + 1;
LAB_18042d0df:
  FUN_18042cc70(param_1,auStackX_8);
  uVar1 = FUN_18042ce90(param_1,auStackX_8);
  *puVar9 = uVar1;
  FUN_18042cc70(param_1,auStackX_8);
  uVar1 = FUN_18042ce90(param_1,auStackX_8);
  *puVar10 = uVar1;
  FUN_18042cc70(param_1,auStackX_8);
  iVar2 = FUN_18042ce90(param_1,auStackX_8);
  return iVar2 < 0x100;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



