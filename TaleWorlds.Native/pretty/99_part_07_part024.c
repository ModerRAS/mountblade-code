#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part024.c - 1 个函数

// 函数: void FUN_1804b3150(longlong *param_1,longlong param_2)
void FUN_1804b3150(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  ulonglong uVar4;
  char *pcVar5;
  longlong lVar6;
  uint64_t *puVar7;
  longlong lVar8;
  uint64_t *puVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  ulonglong uVar14;
  void *puStack_70;
  longlong lStack_68;
  int iStack_60;
  uint64_t uStack_58;
  void *puStack_50;
  longlong lStack_48;
  int32_t uStack_40;
  ulonglong uStack_38;
  char *pcVar13;
  
  pcVar10 = "name";
  do {
    pcVar11 = pcVar10;
    pcVar10 = pcVar11 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = (char *)0x0;
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar2 = (char *)*puVar9;
    if (pcVar2 == (char *)0x0) {
      pcVar2 = (char *)0x180d48d24;
      pcVar5 = pcVar10;
    }
    else {
      pcVar5 = (char *)puVar9[2];
    }
    if (pcVar5 == pcVar11 + -0x180a03a83) {
      pcVar5 = pcVar5 + (longlong)pcVar2;
      if (pcVar5 <= pcVar2) {
LAB_1804b31f4:
        lVar6 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar6 = puVar9[1];
        }
        (**(code **)(param_1[4] + 0x10))(param_1 + 4,lVar6,pcVar5,puVar9,0xfffffffffffffffe);
        break;
      }
      lVar6 = (longlong)&system_data_3a84 - (longlong)pcVar2;
      while (*pcVar2 == pcVar2[lVar6]) {
        pcVar2 = pcVar2 + 1;
        if (pcVar5 <= pcVar2) goto LAB_1804b31f4;
      }
    }
  }
  lVar6 = FUN_1800b6de0(system_resource_state,param_1 + 4,1);
  param_1[8] = lVar6;
  uVar12 = 0;
  puStack_70 = &unknown_var_3456_ptr;
  uStack_58 = 0;
  lStack_68 = 0;
  iStack_60 = 0;
  pcVar11 = "cover_type1";
  do {
    pcVar2 = pcVar11;
    pcVar11 = pcVar2 + 1;
  } while (*pcVar11 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar11 = (char *)*puVar9;
    if (pcVar11 == (char *)0x0) {
      pcVar11 = (char *)0x180d48d24;
      pcVar5 = pcVar10;
    }
    else {
      pcVar5 = (char *)puVar9[2];
    }
    if (pcVar5 == pcVar2 + -0x180a2e4af) {
      pcVar5 = pcVar11 + (longlong)pcVar5;
      if (pcVar5 <= pcVar11) {
LAB_1804b32c0:
        lVar6 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar6 = puVar9[1];
        }
        FUN_180627c50(&puStack_70,lVar6);
        pcVar11 = pcVar10;
        if (0 < iStack_60) {
          pcVar11 = (char *)FUN_1800b6de0(system_resource_state,&puStack_70,1);
        }
        param_1[9] = (longlong)pcVar11;
        break;
      }
      lVar6 = (longlong)&unknown_var_6320_ptr - (longlong)pcVar11;
      while (*pcVar11 == pcVar11[lVar6]) {
        pcVar11 = pcVar11 + 1;
        if (pcVar5 <= pcVar11) goto LAB_1804b32c0;
      }
    }
  }
  pcVar11 = "cover_type2";
  do {
    pcVar2 = pcVar11;
    pcVar11 = pcVar2 + 1;
  } while (*pcVar11 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar11 = (char *)*puVar9;
    if (pcVar11 == (char *)0x0) {
      pcVar11 = (char *)0x180d48d24;
      pcVar5 = pcVar10;
    }
    else {
      pcVar5 = (char *)puVar9[2];
    }
    if (pcVar5 == pcVar2 + -0x180a2e49f) {
      pcVar5 = pcVar5 + (longlong)pcVar11;
      if (pcVar5 <= pcVar11) {
LAB_1804b3360:
        lVar6 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar6 = puVar9[1];
        }
        (**(code **)(puStack_70 + 0x10))(&puStack_70,lVar6);
        pcVar11 = pcVar10;
        if (0 < iStack_60) {
          pcVar11 = (char *)FUN_1800b6de0(system_resource_state,&puStack_70,1);
        }
        param_1[10] = (longlong)pcVar11;
        break;
      }
      lVar6 = (longlong)&unknown_var_6304_ptr - (longlong)pcVar11;
      while (*pcVar11 == pcVar11[lVar6]) {
        pcVar11 = pcVar11 + 1;
        if (pcVar5 <= pcVar11) goto LAB_1804b3360;
      }
    }
  }
  pcVar11 = "cover_type3";
  do {
    pcVar2 = pcVar11;
    pcVar11 = pcVar2 + 1;
  } while (*pcVar11 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar11 = (char *)*puVar9;
    if (pcVar11 == (char *)0x0) {
      pcVar11 = (char *)0x180d48d24;
      pcVar5 = pcVar10;
    }
    else {
      pcVar5 = (char *)puVar9[2];
    }
    if (pcVar5 == pcVar2 + -0x180a2e677) {
      pcVar5 = pcVar11 + (longlong)pcVar5;
      if (pcVar5 <= pcVar11) {
LAB_1804b3400:
        lVar6 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar6 = puVar9[1];
        }
        (**(code **)(puStack_70 + 0x10))(&puStack_70,lVar6);
        pcVar11 = pcVar10;
        if (0 < iStack_60) {
          pcVar11 = (char *)FUN_1800b6de0(system_resource_state,&puStack_70,1);
        }
        param_1[0xb] = (longlong)pcVar11;
        break;
      }
      lVar6 = (longlong)&unknown_var_6776_ptr - (longlong)pcVar11;
      while (*pcVar11 == pcVar11[lVar6]) {
        pcVar11 = pcVar11 + 1;
        if (pcVar5 <= pcVar11) goto LAB_1804b3400;
      }
    }
  }
  pcVar11 = "cover_type4";
  do {
    pcVar2 = pcVar11;
    pcVar11 = pcVar2 + 1;
  } while (*pcVar11 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar11 = (char *)*puVar9;
    if (pcVar11 == (char *)0x0) {
      pcVar11 = (char *)0x180d48d24;
      pcVar5 = pcVar10;
    }
    else {
      pcVar5 = (char *)puVar9[2];
    }
    if (pcVar5 == pcVar2 + -0x180a2e667) {
      pcVar5 = pcVar5 + (longlong)pcVar11;
      if (pcVar5 <= pcVar11) {
LAB_1804b34a0:
        lVar6 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar6 = puVar9[1];
        }
        (**(code **)(puStack_70 + 0x10))(&puStack_70,lVar6);
        pcVar11 = pcVar10;
        if (0 < iStack_60) {
          pcVar11 = (char *)FUN_1800b6de0(system_resource_state,&puStack_70,1);
        }
        param_1[0xc] = (longlong)pcVar11;
        break;
      }
      lVar6 = (longlong)&unknown_var_6760_ptr - (longlong)pcVar11;
      while (*pcVar11 == pcVar11[lVar6]) {
        pcVar11 = pcVar11 + 1;
        if (pcVar5 <= pcVar11) goto LAB_1804b34a0;
      }
    }
  }
  pcVar11 = "cover_all";
  do {
    pcVar2 = pcVar11;
    pcVar11 = pcVar2 + 1;
  } while (*pcVar11 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar11 = (char *)*puVar9;
    if (pcVar11 == (char *)0x0) {
      pcVar11 = (char *)0x180d48d24;
      pcVar5 = pcVar10;
    }
    else {
      pcVar5 = (char *)puVar9[2];
    }
    if (pcVar5 == pcVar2 + -0x180a2e697) {
      pcVar5 = pcVar5 + (longlong)pcVar11;
      if (pcVar5 <= pcVar11) {
LAB_1804b3540:
        lVar6 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar6 = puVar9[1];
        }
        (**(code **)(puStack_70 + 0x10))(&puStack_70,lVar6);
        pcVar11 = pcVar10;
        if (0 < iStack_60) {
          pcVar11 = (char *)FUN_1800b6de0(system_resource_state,&puStack_70,1);
        }
        param_1[0xd] = (longlong)pcVar11;
        break;
      }
      lVar6 = (longlong)&unknown_var_6808_ptr - (longlong)pcVar11;
      while (*pcVar11 == pcVar11[lVar6]) {
        pcVar11 = pcVar11 + 1;
        if (pcVar5 <= pcVar11) goto LAB_1804b3540;
      }
    }
  }
  pcVar11 = "style_tags";
  do {
    pcVar2 = pcVar11;
    pcVar11 = pcVar2 + 1;
  } while (*pcVar11 != '\0');
  puVar9 = *(uint64_t **)(param_2 + 0x30);
  do {
    if (puVar9 == (uint64_t *)0x0) goto LAB_1804b398e;
    pcVar11 = (char *)*puVar9;
    if (pcVar11 == (char *)0x0) {
      pcVar11 = (char *)0x180d48d24;
      pcVar5 = pcVar10;
    }
    else {
      pcVar5 = (char *)puVar9[2];
    }
    if (pcVar5 == pcVar2 + -0x180a2e687) {
      pcVar5 = pcVar11 + (longlong)pcVar5;
      if (pcVar5 <= pcVar11) {
LAB_1804b35e1:
        pcVar11 = "style_tag";
        do {
          pcVar2 = pcVar11;
          pcVar11 = pcVar2 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = (char *)puVar9[6];
        for (pcVar5 = pcVar11; pcVar5 != (char *)0x0; pcVar5 = *(char **)(pcVar5 + 0x58)) {
          pcVar3 = *(char **)pcVar5;
          if (pcVar3 == (char *)0x0) {
            pcVar3 = (char *)0x180d48d24;
            pcVar1 = pcVar10;
          }
          else {
            pcVar1 = *(char **)(pcVar5 + 0x10);
          }
          if (pcVar1 == pcVar2 + -0x180a2e627) {
            pcVar1 = pcVar1 + (longlong)pcVar3;
            pcVar13 = pcVar10;
            if (pcVar1 <= pcVar3) {
LAB_1804b3660:
              do {
                uVar12 = (int)pcVar13 + 1;
                pcVar2 = "style_tag";
                do {
                  pcVar3 = pcVar2;
                  pcVar2 = pcVar3 + 1;
                } while (*pcVar2 != '\0');
                while( true ) {
                  do {
                    pcVar5 = *(char **)(pcVar5 + 0x58);
                    if (pcVar5 == (char *)0x0) goto LAB_1804b36c5;
                    pcVar2 = *(char **)pcVar5;
                    if (pcVar2 == (char *)0x0) {
                      pcVar2 = (char *)0x180d48d24;
                      pcVar1 = pcVar10;
                    }
                    else {
                      pcVar1 = *(char **)(pcVar5 + 0x10);
                    }
                  } while (pcVar1 != pcVar3 + -0x180a2e627);
                  pcVar1 = pcVar1 + (longlong)pcVar2;
                  pcVar13 = (char *)(ulonglong)uVar12;
                  if (pcVar1 <= pcVar2) break;
                  lVar6 = (longlong)&unknown_var_6696_ptr - (longlong)pcVar2;
                  while (*pcVar2 == pcVar2[lVar6]) {
                    pcVar2 = pcVar2 + 1;
                    if (pcVar1 <= pcVar2) goto LAB_1804b3660;
                  }
                }
              } while( true );
            }
            lVar6 = (longlong)&unknown_var_6696_ptr - (longlong)pcVar3;
            while (*pcVar3 == pcVar3[lVar6]) {
              pcVar3 = pcVar3 + 1;
              if (pcVar1 <= pcVar3) goto LAB_1804b3660;
            }
          }
        }
LAB_1804b36c5:
        pcVar2 = "style_tag";
        do {
          pcVar5 = pcVar2;
          pcVar2 = pcVar5 + 1;
        } while (*pcVar2 != '\0');
        for (; pcVar2 = pcVar10, pcVar11 != (char *)0x0; pcVar11 = *(char **)(pcVar11 + 0x58)) {
          pcVar3 = *(char **)pcVar11;
          if (pcVar3 == (char *)0x0) {
            pcVar3 = (char *)0x180d48d24;
            pcVar1 = pcVar10;
          }
          else {
            pcVar1 = *(char **)(pcVar11 + 0x10);
          }
          if (pcVar1 == pcVar5 + -0x180a2e627) {
            pcVar1 = pcVar1 + (longlong)pcVar3;
            pcVar2 = pcVar11;
            if (pcVar1 <= pcVar3) break;
            lVar6 = (longlong)&unknown_var_6696_ptr - (longlong)pcVar3;
            while (*pcVar3 == pcVar3[lVar6]) {
              pcVar3 = pcVar3 + 1;
              if (pcVar1 <= pcVar3) goto LAB_1804b372f;
            }
          }
        }
LAB_1804b372f:
        if ((int)uVar12 < 1) goto LAB_1804b398e;
        uVar14 = (ulonglong)uVar12;
        do {
          pcVar11 = (char *)0x0;
          puStack_50 = &unknown_var_3456_ptr;
          uStack_38 = 0;
          lStack_48 = 0;
          uStack_40 = 0;
          pcVar10 = "name";
          do {
            pcVar5 = pcVar10;
            pcVar10 = pcVar5 + 1;
          } while (*pcVar10 != '\0');
          for (puVar9 = *(uint64_t **)(pcVar2 + 0x40); puVar9 != (uint64_t *)0x0;
              puVar9 = (uint64_t *)puVar9[6]) {
            pcVar10 = (char *)*puVar9;
            if (pcVar10 == (char *)0x0) {
              pcVar10 = (char *)0x180d48d24;
              pcVar3 = pcVar11;
            }
            else {
              pcVar3 = (char *)puVar9[2];
            }
            if (pcVar3 == pcVar5 + -0x180a03a83) {
              pcVar3 = pcVar10 + (longlong)pcVar3;
              if (pcVar3 <= pcVar10) {
LAB_1804b37d0:
                lVar6 = 0x180d48d24;
                if (puVar9[1] != 0) {
                  lVar6 = puVar9[1];
                }
                FUN_180627c50(&puStack_50,lVar6);
                break;
              }
              lVar6 = (longlong)&system_data_3a84 - (longlong)pcVar10;
              while (*pcVar10 == pcVar10[lVar6]) {
                pcVar10 = pcVar10 + 1;
                if (pcVar3 <= pcVar10) goto LAB_1804b37d0;
              }
            }
          }
          uVar4 = param_1[1];
          if (uVar4 < (ulonglong)param_1[2]) {
            param_1[1] = uVar4 + 0x20;
            FUN_180627ae0(uVar4,&puStack_50);
          }
          else {
            lVar6 = *param_1;
            lVar8 = (longlong)(uVar4 - lVar6) >> 5;
            if (lVar8 == 0) {
              lVar8 = 1;
LAB_1804b3837:
              pcVar11 = (char *)FUN_18062b420(system_memory_pool_ptr,lVar8 << 5,(char)param_1[3]);
              uVar4 = param_1[1];
              lVar6 = *param_1;
            }
            else {
              lVar8 = lVar8 * 2;
              if (lVar8 != 0) goto LAB_1804b3837;
            }
            lVar6 = FUN_180059780(lVar6,uVar4,pcVar11);
            FUN_180627ae0(lVar6,&puStack_50);
            puVar9 = (uint64_t *)param_1[1];
            puVar7 = (uint64_t *)*param_1;
            if (puVar7 != puVar9) {
              do {
                (**(code **)*puVar7)(puVar7,0);
                puVar7 = puVar7 + 4;
              } while (puVar7 != puVar9);
              puVar7 = (uint64_t *)*param_1;
            }
            if (puVar7 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(puVar7);
            }
            *param_1 = (longlong)pcVar11;
            param_1[1] = lVar6 + 0x20;
            param_1[2] = (longlong)(pcVar11 + lVar8 * 0x20);
          }
          pcVar10 = "style_tag";
          do {
            pcVar11 = pcVar10;
            pcVar10 = pcVar11 + 1;
          } while (*pcVar10 != '\0');
          for (pcVar10 = *(char **)(pcVar2 + 0x58); pcVar2 = (char *)0x0, pcVar10 != (char *)0x0;
              pcVar10 = *(char **)(pcVar10 + 0x58)) {
            pcVar5 = *(char **)pcVar10;
            if (pcVar5 == (char *)0x0) {
              pcVar3 = (char *)0x0;
              pcVar5 = (char *)0x180d48d24;
            }
            else {
              pcVar3 = *(char **)(pcVar10 + 0x10);
            }
            if (pcVar3 == pcVar11 + -0x180a2e627) {
              pcVar3 = pcVar3 + (longlong)pcVar5;
              pcVar2 = pcVar10;
              if (pcVar3 <= pcVar5) break;
              lVar6 = (longlong)&unknown_var_6696_ptr - (longlong)pcVar5;
              while (*pcVar5 == pcVar5[lVar6]) {
                pcVar5 = pcVar5 + 1;
                if (pcVar3 <= pcVar5) goto LAB_1804b394f;
              }
            }
          }
LAB_1804b394f:
          puStack_50 = &unknown_var_3456_ptr;
          if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_48 = 0;
          uStack_38 = uStack_38 & 0xffffffff00000000;
          puStack_50 = &unknown_var_720_ptr;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
LAB_1804b398e:
        puStack_70 = &unknown_var_3456_ptr;
        if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        return;
      }
      lVar6 = (longlong)&unknown_var_6792_ptr - (longlong)pcVar11;
      while (*pcVar11 == pcVar11[lVar6]) {
        pcVar11 = pcVar11 + 1;
        if (pcVar5 <= pcVar11) goto LAB_1804b35e1;
      }
    }
    puVar9 = (uint64_t *)puVar9[0xb];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_1804b39e0(longlong param_1,longlong *param_2,uint64_t param_3,int param_4,uint param_5,
             uint param_6,uint64_t param_7,char param_8,uint64_t param_9)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong *plVar4;
  uint64_t uStack_50;
  float fStack_48;
  float fStack_44;
  uint64_t uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x40 + (longlong)param_4 * 8);
  if (lVar1 != 0) {
    uVar3 = FUN_18062b1e0(system_memory_pool_ptr,0x3d0,8,0x16);
    plVar4 = (longlong *)FUN_180275090(uVar3);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    FUN_180275a60(lVar1,plVar4,1);
    uStack_50 = (longlong *)*param_2;
    *param_2 = (longlong)plVar4;
    if (uStack_50 != (longlong *)0x0) {
      (**(code **)(*uStack_50 + 0x38))();
    }
    if (param_8 == '\0') {
      FUN_1804b4d20(param_3,*param_2,param_1 + 0x70 + (longlong)param_4 * 0x30,param_7,0,param_9,1);
    }
    fStack_44 = (float)(param_5 >> 0x18) * 0.003921569;
    uStack_50 = (longlong *)
                CONCAT44((float)(param_5 >> 8 & 0xff) * 0.003921569,
                         (float)(param_5 >> 0x10 & 0xff) * 0.003921569);
    fStack_48 = (float)(param_5 & 0xff) * 0.003921569;
    (**(code **)(*(longlong *)*param_2 + 0x108))((longlong *)*param_2,&uStack_50);
    lVar1 = *param_2;
    uStack_50 = (longlong *)
                CONCAT44((float)(param_6 >> 8 & 0xff) * 0.003921569,
                         (float)(param_6 >> 0x10 & 0xff) * 0.003921569);
    plVar4 = *(longlong **)(lVar1 + 0x38);
    if (plVar4 < *(longlong **)(lVar1 + 0x40)) {
      do {
        lVar2 = *plVar4;
        *(longlong **)(lVar2 + 0x248) = uStack_50;
        *(ulonglong *)(lVar2 + 0x250) =
             CONCAT44((float)(param_6 >> 0x18) * 0.003921569,(float)(param_6 & 0xff) * 0.003921569);
        plVar4 = plVar4 + 2;
      } while (plVar4 < *(longlong **)(lVar1 + 0x40));
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_1804b3c30(longlong param_1,longlong *param_2,uint64_t param_3,ulonglong param_4,uint param_5,
             uint64_t param_6,char param_7,uint64_t param_8)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong *plVar4;
  int32_t uVar5;
  uint64_t uStack_50;
  float fStack_48;
  float fStack_44;
  uint64_t uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    uVar3 = FUN_18062b1e0(system_memory_pool_ptr,0x3d0,8,0x16);
    plVar4 = (longlong *)FUN_180275090(uVar3);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    FUN_180275a60(lVar1,plVar4,1);
    uStack_50 = (longlong *)*param_2;
    *param_2 = (longlong)plVar4;
    if (uStack_50 != (longlong *)0x0) {
      (**(code **)(*uStack_50 + 0x38))();
    }
    uVar5 = 1;
    FUN_180283cb0(*param_2,1);
    if (param_7 == '\0') {
      FUN_1804b4d20(param_3,*param_2,param_1 + 0x28,param_6,0,param_8,uVar5);
    }
    fStack_44 = (float)((param_4 & 0xffffffff) >> 0x18) * 0.003921569;
    uStack_50 = (longlong *)
                CONCAT44((float)((param_4 & 0xffffffff) >> 8 & 0xff) * 0.003921569,
                         (float)(param_4 >> 0x10 & 0xff) * 0.003921569);
    fStack_48 = (float)(param_4 & 0xff) * 0.003921569;
    (**(code **)(*(longlong *)*param_2 + 0x108))((longlong *)*param_2,&uStack_50);
    lVar1 = *param_2;
    uStack_50 = (longlong *)
                CONCAT44((float)(param_5 >> 8 & 0xff) * 0.003921569,
                         (float)(param_5 >> 0x10 & 0xff) * 0.003921569);
    plVar4 = *(longlong **)(lVar1 + 0x38);
    if (plVar4 < *(longlong **)(lVar1 + 0x40)) {
      do {
        lVar2 = *plVar4;
        *(longlong **)(lVar2 + 0x248) = uStack_50;
        *(ulonglong *)(lVar2 + 0x250) =
             CONCAT44((float)(param_5 >> 0x18) * 0.003921569,(float)(param_5 & 0xff) * 0.003921569);
        plVar4 = plVar4 + 2;
      } while (plVar4 < *(longlong **)(lVar1 + 0x40));
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




