#include "TaleWorlds.Native.Split.h"

// 99_part_04_part050.c - 4 个函数

// 函数: void FUN_1802b5c40(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802b5c40(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iStackX_18;
  longlong lStackX_20;
  int32_t uVar12;
  longlong lVar13;
  longlong lVar14;
  
  uVar12 = 0;
  iVar1 = (int)((*(longlong *)(param_1 + 0x90) - *(longlong *)(param_1 + 0x88)) / 0x28);
  lVar5 = (longlong)iVar1;
  if (0 < iVar1) {
    lVar13 = 0;
    do {
      iStackX_18 = 0;
      lVar6 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(lVar13 + 0x10 + lVar6) - *(longlong *)(lVar13 + 8 + lVar6) >> 3 != 0) {
        lStackX_20 = 0;
        lVar14 = lVar13;
        do {
          plVar2 = (longlong *)0x0;
          plVar8 = (longlong *)(lStackX_20 + *(longlong *)(lVar13 + 8 + lVar6));
          plVar7 = (longlong *)param_2[1];
          if (plVar7 < (longlong *)param_2[2]) {
            param_2[1] = (longlong)(plVar7 + 1);
            plVar8 = (longlong *)*plVar8;
            *plVar7 = (longlong)plVar8;
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x28))();
            }
          }
          else {
            plVar3 = (longlong *)*param_2;
            lVar6 = (longlong)plVar7 - (longlong)plVar3 >> 3;
            if (lVar6 == 0) {
              lVar6 = 1;
LAB_1802b5d46:
              plVar2 = (longlong *)
                       FUN_18062b420(_DAT_180c8ed18,lVar6 * 8,(char)param_2[3],param_4,uVar12);
              plVar7 = (longlong *)param_2[1];
              plVar3 = (longlong *)*param_2;
              lVar13 = lVar14;
              plVar10 = plVar2;
            }
            else {
              lVar6 = lVar6 * 2;
              lVar13 = lVar14;
              plVar10 = plVar2;
              if (lVar6 != 0) goto LAB_1802b5d46;
            }
            for (; plVar3 != plVar7; plVar3 = plVar3 + 1) {
              *plVar2 = *plVar3;
              *plVar3 = 0;
              plVar2 = plVar2 + 1;
            }
            plVar8 = (longlong *)*plVar8;
            *plVar2 = (longlong)plVar8;
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x28))();
            }
            plVar7 = (longlong *)param_2[1];
            plVar8 = (longlong *)*param_2;
            if (plVar8 != plVar7) {
              do {
                if ((longlong *)*plVar8 != (longlong *)0x0) {
                  (**(code **)(*(longlong *)*plVar8 + 0x38))();
                }
                plVar8 = plVar8 + 1;
              } while (plVar8 != plVar7);
              plVar8 = (longlong *)*param_2;
            }
            if (plVar8 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(plVar8);
            }
            *param_2 = (longlong)plVar10;
            param_2[1] = (longlong)(plVar2 + 1);
            param_2[2] = (longlong)(plVar10 + lVar6);
            lVar14 = lVar13;
          }
          lVar9 = 0;
          lVar6 = *(longlong *)(param_1 + 0x88);
          lVar4 = *(longlong *)(lStackX_20 + *(longlong *)(lVar13 + 8 + lVar6));
          lVar4 = (longlong)(int)(*(longlong *)(lVar4 + 0xf58) - *(longlong *)(lVar4 + 0xf50) >> 3);
          if (0 < lVar4) {
            do {
              plVar8 = (longlong *)0x0;
              plVar7 = *(longlong **)
                        (*(longlong *)
                          (*(longlong *)
                            (lStackX_20 + *(longlong *)(lVar13 + 8 + *(longlong *)(param_1 + 0x88)))
                          + 0xf50) + lVar9 * 8);
              plVar2 = plVar7;
              if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 0x28))(plVar7);
              }
              plVar3 = (longlong *)param_2[1];
              if (plVar3 < (longlong *)param_2[2]) {
                param_2[1] = (longlong)(plVar3 + 1);
                *plVar3 = (longlong)plVar7;
              }
              else {
                plVar10 = (longlong *)*param_2;
                lVar6 = (longlong)plVar3 - (longlong)plVar10 >> 3;
                if (lVar6 == 0) {
                  lVar6 = 1;
LAB_1802b5ebb:
                  plVar8 = (longlong *)
                           FUN_18062b420(_DAT_180c8ed18,lVar6 * 8,(char)param_2[3],param_4,1,lVar14,
                                         plVar2);
                  plVar3 = (longlong *)param_2[1];
                  plVar10 = (longlong *)*param_2;
                  lVar13 = lVar14;
                  plVar11 = plVar8;
                }
                else {
                  lVar6 = lVar6 * 2;
                  lVar13 = lVar14;
                  plVar11 = plVar8;
                  if (lVar6 != 0) goto LAB_1802b5ebb;
                }
                for (; plVar10 != plVar3; plVar10 = plVar10 + 1) {
                  *plVar8 = *plVar10;
                  *plVar10 = 0;
                  plVar8 = plVar8 + 1;
                }
                *plVar8 = (longlong)plVar7;
                plVar7 = (longlong *)param_2[1];
                plVar2 = (longlong *)*param_2;
                if (plVar2 != plVar7) {
                  do {
                    if ((longlong *)*plVar2 != (longlong *)0x0) {
                      (**(code **)(*(longlong *)*plVar2 + 0x38))();
                    }
                    plVar2 = plVar2 + 1;
                  } while (plVar2 != plVar7);
                  plVar2 = (longlong *)*param_2;
                }
                if (plVar2 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900(plVar2);
                }
                *param_2 = (longlong)plVar11;
                param_2[1] = (longlong)(plVar8 + 1);
                param_2[2] = (longlong)(plVar11 + lVar6);
                lVar14 = lVar13;
              }
              uVar12 = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < lVar4);
            lVar6 = *(longlong *)(param_1 + 0x88);
          }
          iStackX_18 = iStackX_18 + 1;
          lStackX_20 = lStackX_20 + 8;
        } while ((ulonglong)(longlong)iStackX_18 <
                 (ulonglong)
                 (*(longlong *)(lVar13 + 0x10 + lVar6) - *(longlong *)(lVar13 + 8 + lVar6) >> 3));
      }
      lVar13 = lVar13 + 0x28;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



char FUN_1802b6000(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lStackX_8;
  longlong *plStackX_10;
  longlong lStackX_18;
  int32_t uVar10;
  uint64_t uVar11;
  
  uVar11 = 0xfffffffffffffffe;
  uVar10 = 0;
  cVar3 = '\0';
  iVar8 = (int)((*(longlong *)(param_1 + 0x90) - *(longlong *)(param_1 + 0x88)) / 0x28);
  lVar6 = (longlong)iVar8;
  if (0 < iVar8) {
    lStackX_8 = 0;
    lVar7 = 8;
    lStackX_18 = lVar6;
    do {
      if (cVar3 != '\0') {
        return cVar3;
      }
      iVar8 = 0;
      lVar2 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(lVar7 + 8 + lVar2) - *(longlong *)(lVar7 + lVar2) >> 3 != 0) {
        lVar9 = 0;
        do {
          lVar6 = lStackX_18;
          if (cVar3 != '\0') break;
          lVar6 = *(longlong *)(lVar9 + *(longlong *)(lVar7 + lVar2));
          if ((*(int *)(lVar6 + 0x1060) == -1) || (*(int *)(lVar6 + 0x1064) == -1)) {
            cVar3 = '\0';
          }
          else {
            cVar3 = '\x01';
          }
          iVar5 = 0;
          iVar4 = (int)(*(longlong *)(lVar6 + 0xf58) - *(longlong *)(lVar6 + 0xf50) >> 3);
          if (0 < iVar4) {
            do {
              if (cVar3 != '\0') break;
              plVar1 = (longlong *)
                       FUN_1802bf4f0(*(uint64_t *)
                                      (lVar9 + *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x88)))
                                     ,&plStackX_10,iVar5,param_4,uVar10,uVar11);
              if ((*(int *)(*plVar1 + 0x1060) == -1) || (*(int *)(*plVar1 + 0x1064) == -1)) {
                cVar3 = '\0';
              }
              else {
                cVar3 = '\x01';
              }
              uVar10 = 0;
              if (plStackX_10 != (longlong *)0x0) {
                (**(code **)(*plStackX_10 + 0x38))();
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar4);
          }
          iVar8 = iVar8 + 1;
          lVar9 = lVar9 + 8;
          lVar2 = *(longlong *)(param_1 + 0x88);
          lVar6 = lStackX_18;
        } while ((ulonglong)(longlong)iVar8 <
                 (ulonglong)(*(longlong *)(lVar7 + 8 + lVar2) - *(longlong *)(lVar7 + lVar2) >> 3));
      }
      lStackX_8 = lStackX_8 + 1;
      lVar7 = lVar7 + 0x28;
    } while (lStackX_8 < lVar6);
  }
  return cVar3;
}



uint64_t FUN_1802b61b0(uint64_t param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  void *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  char *pcVar11;
  char *pcVar12;
  int aiStackX_18 [2];
  int aiStackX_20 [2];
  int32_t uVar13;
  longlong *plStack_50;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar13 = 0;
  pcVar12 = "emitters";
  do {
    pcVar11 = pcVar12;
    pcVar12 = pcVar11 + 1;
  } while (*pcVar12 != '\0');
  puVar8 = *(uint64_t **)(param_2 + 0x30);
joined_r0x0001802b61f6:
  if (puVar8 == (uint64_t *)0x0) {
    return 1;
  }
  pcVar12 = (char *)*puVar8;
  if (pcVar12 == (char *)0x0) {
    pcVar3 = (char *)0x0;
    pcVar12 = (char *)0x180d48d24;
  }
  else {
    pcVar3 = (char *)puVar8[2];
  }
  if (pcVar3 == pcVar11 + -0x180a1804f) {
    pcVar3 = pcVar3 + (longlong)pcVar12;
    if (pcVar3 <= pcVar12) {
LAB_1802b6237:
      pcVar12 = "emitter";
      do {
        pcVar11 = pcVar12;
        pcVar12 = pcVar11 + 1;
      } while (*pcVar12 != '\0');
      puVar8 = (uint64_t *)puVar8[6];
      do {
        if (puVar8 == (uint64_t *)0x0) {
          return 1;
        }
        pcVar12 = (char *)*puVar8;
        if (pcVar12 == (char *)0x0) {
          pcVar3 = (char *)0x0;
          pcVar12 = (char *)0x180d48d24;
        }
        else {
          pcVar3 = (char *)puVar8[2];
        }
        if (pcVar3 == pcVar11 + -0x180a18047) {
          pcVar3 = pcVar3 + (longlong)pcVar12;
          if (pcVar3 <= pcVar12) goto LAB_1802b62c0;
          lVar6 = (longlong)&unknown_var_5080_ptr - (longlong)pcVar12;
          while (*pcVar12 == pcVar12[lVar6]) {
            pcVar12 = pcVar12 + 1;
            if (pcVar3 <= pcVar12) goto LAB_1802b62c0;
          }
        }
        puVar8 = (uint64_t *)puVar8[0xb];
      } while( true );
    }
    lVar6 = (longlong)&unknown_var_5088_ptr - (longlong)pcVar12;
    while (*pcVar12 == pcVar12[lVar6]) {
      pcVar12 = pcVar12 + 1;
      if (pcVar3 <= pcVar12) goto LAB_1802b6237;
    }
  }
  puVar8 = (uint64_t *)puVar8[0xb];
  goto joined_r0x0001802b61f6;
LAB_1802b62c0:
  aiStackX_18[0] = -1;
  pcVar12 = "_index_";
  do {
    pcVar11 = pcVar12;
    pcVar12 = pcVar11 + 1;
  } while (*pcVar12 != '\0');
  puVar9 = (uint64_t *)puVar8[8];
  do {
    if (puVar9 == (uint64_t *)0x0) {
      return 0;
    }
    pcVar12 = (char *)*puVar9;
    if (pcVar12 == (char *)0x0) {
      pcVar3 = (char *)0x0;
      pcVar12 = (char *)0x180d48d24;
    }
    else {
      pcVar3 = (char *)puVar9[2];
    }
    if (pcVar3 == pcVar11 + -0x180a1692f) {
      pcVar3 = pcVar12 + (longlong)pcVar3;
      if (pcVar3 <= pcVar12) break;
      lVar6 = (longlong)&unknown_var_9168_ptr - (longlong)pcVar12;
      while (*pcVar12 == pcVar12[lVar6]) {
        pcVar12 = pcVar12 + 1;
        if (pcVar3 <= pcVar12) goto LAB_1802b6334;
      }
    }
    puVar9 = (uint64_t *)puVar9[6];
  } while( true );
LAB_1802b6334:
  pcVar12 = (char *)0x180d48d24;
  if ((char *)puVar9[1] != (char *)0x0) {
    pcVar12 = (char *)puVar9[1];
  }
  uVar4 = 0xffffffffffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while (pcVar12[uVar4] != '\0');
  if (((uVar4 < 3) || (*pcVar12 != '0')) ||
     (puVar7 = &unknown_var_5412_ptr, (pcVar12[1] + 0xa8U & 0xdf) != 0)) {
    puVar7 = &unknown_var_2208_ptr;
  }
  FUN_18010cbc0(pcVar12,puVar7,aiStackX_18,puVar9,uVar13);
  iVar2 = func_0x0001802c0080(param_1,0);
  if ((iVar2 <= aiStackX_18[0]) || (aiStackX_18[0] < 0)) {
    return 0;
  }
  pcVar12 = "children";
  do {
    pcVar11 = pcVar12;
    pcVar12 = pcVar11 + 1;
  } while (*pcVar12 != '\0');
  puVar9 = (uint64_t *)puVar8[6];
LAB_1802b63c0:
  if (puVar9 == (uint64_t *)0x0) goto LAB_1802b661d;
  pcVar12 = (char *)*puVar9;
  if (pcVar12 == (char *)0x0) {
    pcVar3 = (char *)0x0;
    pcVar12 = (char *)0x180d48d24;
  }
  else {
    pcVar3 = (char *)puVar9[2];
  }
  if (pcVar3 == pcVar11 + -0x180a18037) {
    pcVar3 = pcVar3 + (longlong)pcVar12;
    if (pcVar3 <= pcVar12) {
LAB_1802b6410:
      pcVar12 = "emitter";
      do {
        pcVar11 = pcVar12;
        pcVar12 = pcVar11 + 1;
      } while (*pcVar12 != '\0');
      for (puVar9 = (uint64_t *)puVar9[6]; puVar9 != (uint64_t *)0x0;
          puVar9 = (uint64_t *)puVar9[0xb]) {
        pcVar12 = (char *)*puVar9;
        if (pcVar12 == (char *)0x0) {
          pcVar3 = (char *)0x0;
          pcVar12 = (char *)0x180d48d24;
        }
        else {
          pcVar3 = (char *)puVar9[2];
        }
        if (pcVar3 == pcVar11 + -0x180a18047) {
          pcVar3 = pcVar3 + (longlong)pcVar12;
          if (pcVar3 <= pcVar12) {
LAB_1802b6470:
            do {
              aiStackX_20[0] = -1;
              pcVar12 = "_index_";
              do {
                pcVar11 = pcVar12;
                pcVar12 = pcVar11 + 1;
              } while (*pcVar12 != '\0');
              puVar10 = (uint64_t *)puVar9[8];
LAB_1802b6490:
              if (puVar10 != (uint64_t *)0x0) {
                pcVar12 = (char *)*puVar10;
                if (pcVar12 == (char *)0x0) {
                  pcVar3 = (char *)0x0;
                  pcVar12 = (char *)0x180d48d24;
                }
                else {
                  pcVar3 = (char *)puVar10[2];
                }
                if (pcVar3 != pcVar11 + -0x180a1692f) goto LAB_1802b6586;
                pcVar3 = pcVar3 + (longlong)pcVar12;
                if (pcVar12 < pcVar3) {
                  lVar6 = (longlong)&unknown_var_9168_ptr - (longlong)pcVar12;
                  while (*pcVar12 == pcVar12[lVar6]) {
                    pcVar12 = pcVar12 + 1;
                    if (pcVar3 <= pcVar12) goto LAB_1802b64e4;
                  }
                  goto LAB_1802b6586;
                }
LAB_1802b64e4:
                pcVar12 = (char *)0x180d48d24;
                if ((char *)puVar10[1] != (char *)0x0) {
                  pcVar12 = (char *)puVar10[1];
                }
                uVar4 = 0xffffffffffffffff;
                do {
                  uVar4 = uVar4 + 1;
                } while (pcVar12[uVar4] != '\0');
                if (((uVar4 < 3) || (*pcVar12 != '0')) ||
                   (puVar7 = &unknown_var_5412_ptr, (pcVar12[1] + 0xa8U & 0xdf) != 0)) {
                  puVar7 = &unknown_var_2208_ptr;
                }
                FUN_18010cbc0(pcVar12,puVar7,aiStackX_20,puVar10,uVar13);
              }
              plVar5 = (longlong *)FUN_1802b5be0(param_1,&plStack_50,0,aiStackX_18[0]);
              if (((ulonglong)(longlong)aiStackX_20[0] <
                   (ulonglong)(*(longlong *)(*plVar5 + 0xf58) - *(longlong *)(*plVar5 + 0xf50) >> 3)
                  ) && (-1 < aiStackX_20[0])) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              uVar13 = 0;
              if (plStack_50 != (longlong *)0x0) {
                (**(code **)(*plStack_50 + 0x38))();
              }
              if (bVar1) {
                return 0;
              }
              pcVar12 = "emitter";
              do {
                pcVar11 = pcVar12;
                pcVar12 = pcVar11 + 1;
              } while (*pcVar12 != '\0');
              while( true ) {
                do {
                  puVar9 = (uint64_t *)puVar9[0xb];
                  if (puVar9 == (uint64_t *)0x0) goto LAB_1802b661d;
                  pcVar12 = (char *)*puVar9;
                  if (pcVar12 == (char *)0x0) {
                    pcVar3 = (char *)0x0;
                    pcVar12 = (char *)0x180d48d24;
                  }
                  else {
                    pcVar3 = (char *)puVar9[2];
                  }
                } while (pcVar3 != pcVar11 + -0x180a18047);
                pcVar3 = pcVar3 + (longlong)pcVar12;
                if (pcVar3 <= pcVar12) break;
                lVar6 = (longlong)&unknown_var_5080_ptr - (longlong)pcVar12;
                while (*pcVar12 == pcVar12[lVar6]) {
                  pcVar12 = pcVar12 + 1;
                  if (pcVar3 <= pcVar12) goto LAB_1802b6470;
                }
              }
            } while( true );
          }
          lVar6 = (longlong)&unknown_var_5080_ptr - (longlong)pcVar12;
          while (*pcVar12 == pcVar12[lVar6]) {
            pcVar12 = pcVar12 + 1;
            if (pcVar3 <= pcVar12) goto LAB_1802b6470;
          }
        }
      }
LAB_1802b661d:
      pcVar12 = "emitter";
      do {
        pcVar11 = pcVar12;
        pcVar12 = pcVar11 + 1;
      } while (*pcVar12 != '\0');
      while( true ) {
        do {
          puVar8 = (uint64_t *)puVar8[0xb];
          if (puVar8 == (uint64_t *)0x0) {
            return 1;
          }
          pcVar12 = (char *)*puVar8;
          if (pcVar12 == (char *)0x0) {
            pcVar3 = (char *)0x0;
            pcVar12 = (char *)0x180d48d24;
          }
          else {
            pcVar3 = (char *)puVar8[2];
          }
        } while (pcVar3 != pcVar11 + -0x180a18047);
        pcVar3 = pcVar3 + (longlong)pcVar12;
        if (pcVar3 <= pcVar12) break;
        lVar6 = (longlong)&unknown_var_5080_ptr - (longlong)pcVar12;
        while (*pcVar12 == pcVar12[lVar6]) {
          pcVar12 = pcVar12 + 1;
          if (pcVar3 <= pcVar12) goto LAB_1802b62c0;
        }
      }
      goto LAB_1802b62c0;
    }
    lVar6 = (longlong)&unknown_var_5064_ptr - (longlong)pcVar12;
    while (*pcVar12 == pcVar12[lVar6]) {
      pcVar12 = pcVar12 + 1;
      if (pcVar3 <= pcVar12) goto LAB_1802b6410;
    }
  }
  puVar9 = (uint64_t *)puVar9[0xb];
  goto LAB_1802b63c0;
LAB_1802b6586:
  puVar10 = (uint64_t *)puVar10[6];
  goto LAB_1802b6490;
}



uint64_t * FUN_1802b6690(uint64_t *param_1)

{
  longlong *plVar1;
  
  *param_1 = &unknown_var_3552_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_6328_ptr;
  param_1[3] = &unknown_var_720_ptr;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 5) = 0;
  param_1[3] = &unknown_var_3456_ptr;
  param_1[6] = 0;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 5) = 0;
  param_1[9] = &unknown_var_720_ptr;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xb) = 0;
  param_1[9] = &unknown_var_3456_ptr;
  param_1[0xc] = 0;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(int32_t *)(param_1 + 0x14) = 3;
  FUN_18026d890(param_1 + 0x15);
  *(int32_t *)(param_1 + 8) = 0;
  plVar1 = (longlong *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  param_1[2] = 0;
  param_1[0x10] = param_1;
  *(int32_t *)(param_1 + 7) = 0xffffffff;
  *(int32_t *)(param_1 + 0xe) = 0;
  *(int8_t *)((longlong)param_1 + 0x3c) = 0;
  return param_1;
}



uint64_t *
FUN_1802b67a0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_6328_ptr;
  FUN_18026d9d0(param_1 + 0x15);
  FUN_1802b6f60();
  FUN_180226750(param_1 + 0xf);
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x38))();
  }
  param_1[9] = &unknown_var_3456_ptr;
  if (param_1[10] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xc) = 0;
  param_1[9] = &unknown_var_720_ptr;
  param_1[3] = &unknown_var_3456_ptr;
  if (param_1[4] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[4] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  param_1[3] = &unknown_var_720_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x108,param_3,param_4,uVar1);
  }
  return param_1;
}






// 函数: void FUN_1802b68a0(longlong *param_1)
void FUN_1802b68a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    FUN_180057830();
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



longlong * FUN_1802b68c0(longlong *param_1,longlong param_2,uint64_t param_3)

{
  longlong lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 8) = 3;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(int32_t *)(param_1 + 0xc) = 3;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x10) = 3;
  lVar1 = FUN_1802bf8f0(*(uint64_t *)(param_2 + 0x260),param_3,param_3,param_2,0xfffffffffffffffe)
  ;
  *param_1 = lVar1;
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802b6970(longlong param_1,int32_t param_2,int32_t param_3)
void FUN_1802b6970(longlong param_1,int32_t param_2,int32_t param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar4 = 0;
  iVar1 = (int)((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28)) / 0x90);
  lVar8 = (longlong)iVar1;
  if (0 < iVar1) {
    lVar9 = 0;
    do {
      pcVar5 = (char *)(*(longlong *)(param_1 + 0x28) + lVar9);
      if ((*(longlong *)(pcVar5 + 0x20) != 0) &&
         (lVar7 = (longlong)iVar4 * 0x40 + *(longlong *)(param_1 + 8),
         FUN_1802aeb00(pcVar5,param_2,lVar7,lVar7,param_3), *pcVar5 == '\0')) {
        FUN_1802b13d0(pcVar5);
        piVar6 = *(int **)(param_1 + 0x70);
        if (piVar6 < *(int **)(param_1 + 0x78)) {
          *(int **)(param_1 + 0x70) = piVar6 + 1;
          *piVar6 = iVar4;
        }
        else {
          piVar3 = *(int **)(param_1 + 0x68);
          lVar7 = (longlong)piVar6 - (longlong)piVar3 >> 2;
          if (lVar7 == 0) {
            lVar7 = 1;
LAB_1802b6a52:
            piVar2 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar7 * 4,*(int8_t *)(param_1 + 0x80));
            piVar3 = *(int **)(param_1 + 0x68);
            piVar6 = *(int **)(param_1 + 0x70);
          }
          else {
            lVar7 = lVar7 * 2;
            if (lVar7 != 0) goto LAB_1802b6a52;
            piVar2 = (int *)0x0;
          }
          if (piVar3 != piVar6) {
                    // WARNING: Subroutine does not return
            memmove(piVar2,piVar3,(longlong)piVar6 - (longlong)piVar3);
          }
          *piVar2 = iVar4;
          if (*(longlong *)(param_1 + 0x68) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(int **)(param_1 + 0x68) = piVar2;
          *(int **)(param_1 + 0x78) = piVar2 + lVar7;
          *(int **)(param_1 + 0x70) = piVar2 + 1;
        }
      }
      iVar4 = iVar4 + 1;
      lVar9 = lVar9 + 0x90;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802b69be(void)
void FUN_1802b69be(void)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  longlong unaff_RBX;
  int unaff_EBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  char *pcVar4;
  int *piVar5;
  longlong in_R11;
  longlong unaff_R12;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  longlong lVar6;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RDI;
  *(uint64_t *)(in_R11 + 0x20) = unaff_R15;
  lVar6 = 0;
  *(uint64_t *)(in_R11 + 8) = unaff_RSI;
  *(uint64_t *)(in_R11 + 0x18) = unaff_R14;
  do {
    pcVar4 = (char *)(*(longlong *)(unaff_RBX + 0x28) + lVar6);
    if (*(longlong *)(pcVar4 + 0x20) != 0) {
      FUN_1802aeb00(pcVar4);
      if (*pcVar4 == '\0') {
        FUN_1802b13d0(pcVar4);
        piVar5 = *(int **)(unaff_RBX + 0x70);
        if (piVar5 < *(int **)(unaff_RBX + 0x78)) {
          *(int **)(unaff_RBX + 0x70) = piVar5 + 1;
          *piVar5 = unaff_EBP;
        }
        else {
          piVar3 = *(int **)(unaff_RBX + 0x68);
          lVar1 = (longlong)piVar5 - (longlong)piVar3 >> 2;
          if (lVar1 == 0) {
            lVar1 = 1;
LAB_1802b6a52:
            piVar2 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 4,*(int8_t *)(unaff_RBX + 0x80)
                                         );
            piVar3 = *(int **)(unaff_RBX + 0x68);
            piVar5 = *(int **)(unaff_RBX + 0x70);
          }
          else {
            lVar1 = lVar1 * 2;
            if (lVar1 != 0) goto LAB_1802b6a52;
            piVar2 = (int *)0x0;
          }
          if (piVar3 != piVar5) {
                    // WARNING: Subroutine does not return
            memmove(piVar2,piVar3,(longlong)piVar5 - (longlong)piVar3);
          }
          *piVar2 = unaff_EBP;
          if (*(longlong *)(unaff_RBX + 0x68) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(int **)(unaff_RBX + 0x68) = piVar2;
          *(int **)(unaff_RBX + 0x78) = piVar2 + lVar1;
          *(int **)(unaff_RBX + 0x70) = piVar2 + 1;
        }
      }
    }
    unaff_EBP = unaff_EBP + 1;
    lVar6 = lVar6 + 0x90;
    unaff_R12 = unaff_R12 + -1;
    if (unaff_R12 == 0) {
      return;
    }
  } while( true );
}






