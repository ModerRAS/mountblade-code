/* 函数别名定义: RenderingGeometryProcessor */
#define RenderingGeometryProcessor RenderingGeometryProcessor
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part296_sub002_sub002.c - 1 个函数
// 函数: void UISystem_25040(void)
void UISystem_25040(void)
{
  ushort uVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint64_t *unaff_RBX;
  int unaff_EBP;
  int iVar7;
  uint uVar8;
  int8_t uVar9;
  uint unaff_R12D;
  int32_t unaff_R14D;
  int unaff_R15D;
  ushort astack_special_x_20 [4];
  uint64_t local_var_a00;
  do {
    iVar5 = *(int *)(unaff_RBX + 2);
    uVar8 = *(uint *)((int64_t)unaff_RBX + 0x14);
    if (iVar5 < 0x10) {
      do {
        pbVar2 = (byte *)*unaff_RBX;
        if (pbVar2 < (byte *)unaff_RBX[1]) {
          bVar4 = *pbVar2;
          *unaff_RBX = pbVar2 + 1;
        }
        else {
          bVar4 = 0;
        }
        bVar3 = (byte)iVar5;
        iVar5 = iVar5 + 8;
        uVar8 = uVar8 | (uint)bVar4 << (bVar3 & 0x1f);
        *(int *)(unaff_RBX + 2) = iVar5;
        *(uint *)((int64_t)unaff_RBX + 0x14) = uVar8;
      } while (iVar5 < 0x19);
    }
    uVar1 = astack_special_x_20[uVar8 & 0x1ff];
    if (uVar1 == 0) {
      uVar8 = UISystem_24980();
    }
    else {
      *(uint *)((int64_t)unaff_RBX + 0x14) = uVar8 >> ((byte)(uVar1 >> 9) & 0x1f);
      uVar8 = uVar1 & 0x1ff;
      *(uint *)(unaff_RBX + 2) = iVar5 - (uint)(uVar1 >> 9);
    }
    if (0x12 < uVar8) goto LAB_180425272;
    if (0xf < (int)uVar8) {
      iVar5 = *(int *)(unaff_RBX + 2);
      uVar9 = 0;
      if (uVar8 == 0x10) {
        if (iVar5 < 2) {
          uVar8 = *(uint *)((int64_t)unaff_RBX + 0x14);
          do {
            pbVar2 = (byte *)*unaff_RBX;
            if (pbVar2 < (byte *)unaff_RBX[1]) {
              uVar6 = (uint)*pbVar2;
              *unaff_RBX = pbVar2 + 1;
            }
            else {
              uVar6 = 0;
            }
            bVar4 = (byte)iVar5;
            iVar5 = iVar5 + 8;
            uVar8 = uVar6 << (bVar4 & 0x1f) | uVar8;
            *(int *)(unaff_RBX + 2) = iVar5;
            *(uint *)((int64_t)unaff_RBX + 0x14) = uVar8;
          } while (iVar5 < 0x19);
        }
        else {
          uVar8 = *(uint *)((int64_t)unaff_RBX + 0x14);
        }
        iVar7 = (uVar8 & 3) + 3;
        *(uint *)((int64_t)unaff_RBX + 0x14) = uVar8 >> 2;
        *(int *)(unaff_RBX + 2) = iVar5 + -2;
        if (unaff_EBP == 0) goto LAB_180425272;
        uVar9 = (&local_buffer_0000082f)[unaff_EBP];
      }
      else {
        if (uVar8 == 0x11) {
          if (iVar5 < 3) {
            uVar8 = *(uint *)((int64_t)unaff_RBX + 0x14);
            do {
              pbVar2 = (byte *)*unaff_RBX;
              if (pbVar2 < (byte *)unaff_RBX[1]) {
                uVar6 = (uint)*pbVar2;
                *unaff_RBX = pbVar2 + 1;
              }
              else {
                uVar6 = 0;
              }
              bVar4 = (byte)iVar5;
              iVar5 = iVar5 + 8;
              uVar8 = uVar6 << (bVar4 & 0x1f) | uVar8;
              *(int *)(unaff_RBX + 2) = iVar5;
              *(uint *)((int64_t)unaff_RBX + 0x14) = uVar8;
            } while (iVar5 < 0x19);
          }
          else {
            uVar8 = *(uint *)((int64_t)unaff_RBX + 0x14);
          }
          *(uint *)((int64_t)unaff_RBX + 0x14) = uVar8 >> 3;
          iVar7 = (uVar8 & 7) + 3;
          iVar5 = iVar5 + -3;
        }
        else {
          if (iVar5 < 7) {
            uVar8 = *(uint *)((int64_t)unaff_RBX + 0x14);
            do {
              pbVar2 = (byte *)*unaff_RBX;
              if (pbVar2 < (byte *)unaff_RBX[1]) {
                uVar6 = (uint)*pbVar2;
                *unaff_RBX = pbVar2 + 1;
              }
              else {
                uVar6 = 0;
              }
              bVar4 = (byte)iVar5;
              iVar5 = iVar5 + 8;
              uVar8 = uVar6 << (bVar4 & 0x1f) | uVar8;
              *(int *)(unaff_RBX + 2) = iVar5;
              *(uint *)((int64_t)unaff_RBX + 0x14) = uVar8;
            } while (iVar5 < 0x19);
          }
          else {
            uVar8 = *(uint *)((int64_t)unaff_RBX + 0x14);
          }
          *(uint *)((int64_t)unaff_RBX + 0x14) = uVar8 >> 7;
          iVar7 = (uVar8 & 0x7f) + 0xb;
          iVar5 = iVar5 + -7;
        }
        *(int *)(unaff_RBX + 2) = iVar5;
      }
      if (iVar7 <= unaff_R15D - unaff_EBP) {
// WARNING: Subroutine does not return
        memset(&local_buffer_00000830 + unaff_EBP,uVar9,iVar7);
      }
      goto LAB_180425272;
    }
    (&local_buffer_00000830)[unaff_EBP] = (char)uVar8;
    unaff_EBP = unaff_EBP + 1;
  } while (unaff_EBP < unaff_R15D);
  if ((unaff_EBP == unaff_R15D) &&
     (iVar5 = UISystem_24710((int64_t)unaff_RBX + 0x34,&local_buffer_00000830,unaff_R12D), iVar5 != 0)) {
    UISystem_24710(unaff_RBX + 0x103,&local_buffer_00000830 + unaff_R12D,unaff_R14D);
  }
LAB_180425272:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_a00 ^ (uint64_t)&local_buffer_00000000);
}
uint64_t UISystem_252a0(int64_t *param_1)
{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int64_t lVar5;
  uint uVar6;
  uint64_t uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  byte abStackX_8 [8];
  uVar6 = *(uint *)(param_1 + 2);
  uVar10 = uVar6 & 7;
  if (uVar10 != 0) {
    uVar2 = *(uint *)((int64_t)param_1 + 0x14);
    if ((int)uVar6 < (int)uVar10) {
      do {
        pbVar8 = (byte *)*param_1;
        if (pbVar8 < (byte *)param_1[1]) {
          bVar3 = *pbVar8;
          *param_1 = (int64_t)(pbVar8 + 1);
        }
        else {
          bVar3 = 0;
        }
        bVar4 = (byte)uVar6;
        uVar6 = uVar6 + 8;
        uVar2 = (uint)bVar3 << (bVar4 & 0x1f) | uVar2;
        *(uint *)(param_1 + 2) = uVar6;
        *(uint *)((int64_t)param_1 + 0x14) = uVar2;
      } while ((int)uVar6 < 0x19);
    }
    uVar6 = uVar6 - uVar10;
    *(uint *)((int64_t)param_1 + 0x14) = uVar2 >> (sbyte)uVar10;
    *(uint *)(param_1 + 2) = uVar6;
  }
  iVar9 = 0;
  if (0 < (int)uVar6) {
    pbVar8 = abStackX_8;
    uVar7 = (uint64_t)*(uint *)((int64_t)param_1 + 0x14);
    do {
      iVar9 = iVar9 + 1;
      uVar6 = uVar6 - 8;
      *pbVar8 = *(byte *)((int64_t)param_1 + 0x14);
      pbVar8 = pbVar8 + 1;
      *(int *)((int64_t)param_1 + 0x14) = (int)(uVar7 >> 8);
      uVar7 = uVar7 >> 8;
    } while (0 < (int)uVar6);
    *(uint *)(param_1 + 2) = uVar6;
  }
  lVar5 = (int64_t)iVar9;
  if (lVar5 < 4) {
    pbVar8 = (byte *)param_1[1];
    do {
      pbVar1 = (byte *)*param_1;
      if (pbVar1 < pbVar8) {
        bVar3 = *pbVar1;
        *param_1 = (int64_t)(pbVar1 + 1);
      }
      else {
        bVar3 = 0;
      }
      abStackX_8[lVar5] = bVar3;
      lVar5 = lVar5 + 1;
    } while (lVar5 < 4);
  }
  uVar6 = (uint)abStackX_8[1] * 0x100 + (uint)abStackX_8[0];
  if (((uint)abStackX_8[3] * 0x100 + (uint)abStackX_8[2] == (uVar6 ^ 0xffff)) &&
     (*param_1 + (uint64_t)uVar6 <= (uint64_t)param_1[1])) {
    if (((uint64_t)param_1[5] < (uint64_t)uVar6 + param_1[3]) &&
       (iVar9 = UISystem_24a70(param_1), iVar9 == 0)) {
      return 0;
    }
// WARNING: Subroutine does not return
    memcpy(param_1[3],*param_1,(uint64_t)uVar6);
  }
  return 0;
}
uint64_t UISystem_25400(uint64_t *param_1,int param_2)
{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  if (param_2 != 0) {
    pbVar1 = (byte *)*param_1;
    if (pbVar1 < (byte *)param_1[1]) {
      bVar2 = *pbVar1;
      pbVar1 = pbVar1 + 1;
      *param_1 = pbVar1;
    }
    else {
      bVar2 = 0;
    }
    if (pbVar1 < (byte *)param_1[1]) {
      bVar3 = *pbVar1;
      *param_1 = pbVar1 + 1;
    }
    else {
      bVar3 = 0;
    }
    uVar4 = (uint)bVar2 * 0x100 + (uint)bVar3;
    if (((uVar4 != (uVar4 / 0x1f) * 0x1f) || ((bVar3 & 0x20) != 0)) || ((bVar2 & 0xf) != 8)) {
      return 0;
    }
  }
  param_1[2] = 0;
  do {
    iVar5 = *(int *)(param_1 + 2);
    uVar4 = *(uint *)((int64_t)param_1 + 0x14);
    if (iVar5 < 1) {
      do {
        pbVar1 = (byte *)*param_1;
        if (pbVar1 < (byte *)param_1[1]) {
          uVar6 = (uint)*pbVar1;
          *param_1 = pbVar1 + 1;
        }
        else {
          uVar6 = 0;
        }
        bVar2 = (byte)iVar5;
        iVar5 = iVar5 + 8;
        uVar4 = uVar6 << (bVar2 & 0x1f) | uVar4;
        *(int *)(param_1 + 2) = iVar5;
        *(uint *)((int64_t)param_1 + 0x14) = uVar4;
      } while (iVar5 < 0x19);
    }
    uVar6 = uVar4 >> 1;
    *(uint *)((int64_t)param_1 + 0x14) = uVar6;
    iVar5 = iVar5 + -1;
    *(int *)(param_1 + 2) = iVar5;
    if (iVar5 < 2) {
      do {
        pbVar1 = (byte *)*param_1;
        if (pbVar1 < (byte *)param_1[1]) {
          bVar2 = *pbVar1;
          *param_1 = pbVar1 + 1;
        }
        else {
          bVar2 = 0;
        }
        bVar3 = (byte)iVar5;
        iVar5 = iVar5 + 8;
        uVar6 = (uint)bVar2 << (bVar3 & 0x1f) | uVar6;
        *(int *)(param_1 + 2) = iVar5;
        *(uint *)((int64_t)param_1 + 0x14) = uVar6;
      } while (iVar5 < 0x19);
    }
    *(uint *)((int64_t)param_1 + 0x14) = uVar6 >> 2;
    *(int *)(param_1 + 2) = iVar5 + -2;
    uVar6 = uVar6 & 3;
    if (uVar6 == 0) {
      iVar5 = UISystem_252a0(param_1);
    }
    else {
      if (uVar6 == 3) {
        return 0;
      }
      if (uVar6 == 1) {
        iVar5 = UISystem_24710((int64_t)param_1 + 0x34,&ui_system_data_1088_ptr,0x120);
        if (iVar5 == 0) {
          return 0;
        }
        iVar5 = UISystem_24710(param_1 + 0x103,&ui_system_data_1056_ptr);
      }
      else {
        iVar5 = UISystem_24e10(param_1);
      }
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = UISystem_24b10(param_1);
    }
    if (iVar5 == 0) {
      return 0;
    }
  } while ((uVar4 & 1) == 0);
  return 1;
}
uint64_t UISystem_255c0(int64_t param_1)
{
  char *pcVar1;
  char cVar2;
  int64_t lVar3;
  lVar3 = 0;
  while( true ) {
    pcVar1 = *(char **)(param_1 + 0xb8);
    if (pcVar1 < *(char **)(param_1 + 0xc0)) {
      cVar2 = *pcVar1;
      *(char **)(param_1 + 0xb8) = pcVar1 + 1;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
      cVar2 = '\0';
    }
    else {
      RenderingGeometryProcessor0(param_1);
      cVar2 = **(char **)(param_1 + 0xb8);
      *(char **)(param_1 + 0xb8) = *(char **)(param_1 + 0xb8) + 1;
    }
    if (cVar2 != (&processed_var_6272_ptr)[lVar3]) break;
    lVar3 = lVar3 + 1;
    if (7 < lVar3) {
      return 1;
    }
  }
  return 0;
}
int UISystem_25660(int param_1,int param_2,int param_3)
{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uVar5 = param_1 - param_3;
  uVar6 = (uVar5 + param_2) - param_3;
  uVar1 = (uVar5 + param_2) - param_1;
  uVar4 = (int)uVar1 >> 0x1f;
  iVar7 = (uVar1 ^ uVar4) - uVar4;
  iVar3 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  uVar1 = (int)uVar6 >> 0x1f;
  iVar2 = (uVar6 ^ uVar1) - uVar1;
  if ((iVar7 <= iVar3) && (iVar7 <= iVar2)) {
    return param_1;
  }
  if (iVar3 <= iVar2) {
    param_3 = param_2;
  }
  return param_3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t
UISystem_256d0(int64_t *param_1,byte *param_2,uint param_3,int param_4,uint param_5,uint param_6,
             int param_7,int param_8)
{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int8_t uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  char cVar69;
  uint uVar70;
  uint uVar71;
  int16_t *puVar72;
  int64_t lVar73;
  uint64_t uVar74;
  byte bVar75;
  uint uVar76;
  byte *pbVar77;
  int64_t lVar78;
  int iVar79;
  byte *pbVar80;
  byte *pbVar81;
  int64_t lVar82;
  byte *pbVar83;
  int8_t *puVar84;
  int8_t *puVar85;
  int64_t lVar86;
  char *pcVar87;
  char *pcVar88;
  int16_t *puVar89;
  uint uVar90;
  int iVar91;
  uint uVar92;
  int64_t lVar93;
  uint uVar94;
  int8_t *puVar95;
  int64_t lVar96;
  int64_t lVar97;
  uint stack_special_x_8;
  uint local_var_a8;
  uint local_var_a4;
  int64_t lStack_80;
  uVar92 = 0;
  local_var_a8 = param_5;
  iVar91 = (param_7 == 0x10) + 1;
  iVar79 = iVar91 * param_4;
  uVar70 = iVar79 * param_5;
  iVar5 = *(int *)(*param_1 + 8);
  stack_special_x_8 = iVar5 * iVar91;
  if (((((int)param_5 < 0) || ((int)param_6 < 0)) ||
      ((param_6 != 0 && ((int)(0x7fffffff / (int64_t)(int)param_6) < (int)param_5)))) ||
     ((((int)(param_5 * param_6) < 0 || (iVar79 < 0)) ||
      ((iVar79 != 0 && ((int)(0x7fffffff / (int64_t)iVar79) < (int)(param_5 * param_6))))))) {
    puVar72 = (int16_t *)0x0;
  }
  else {
    puVar72 = (int16_t *)
              CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)(iVar79 * param_5 * param_6),
                            CONCAT71((uint7)(uint3)(stack_special_x_8 >> 8),0x22));
  }
  param_1[3] = (int64_t)puVar72;
  if (puVar72 != (int16_t *)0x0) {
    uVar71 = iVar5 * param_5;
    uVar90 = uVar71 * param_7 + 7 >> 3;
    if ((uVar90 + 1) * param_6 <= param_3) {
      local_var_a4 = 0;
      if (param_6 != 0) {
        lVar97 = (int64_t)(int)stack_special_x_8;
        lVar93 = (int64_t)iVar79;
        lStack_80 = lVar97;
LAB_180425840:
        bVar75 = *param_2;
        param_2 = param_2 + 1;
        puVar84 = (int8_t *)((uint64_t)(local_var_a4 * uVar70) + (int64_t)puVar72);
        if (4 < bVar75) {
          return 0;
        }
        puVar85 = puVar84;
        if (param_7 < 8) {
          stack_special_x_8 = 1;
          lVar97 = 1;
          lStack_80 = 1;
          puVar85 = puVar84 + (param_4 * param_5 - uVar90);
          local_var_a8 = uVar90;
        }
        if (local_var_a4 == 0) {
          bVar75 = (&processed_var_660_ptr)[bVar75];
        }
        if (0 < lVar97) {
          puVar95 = puVar85 + (-(int64_t)param_2 - (uint64_t)uVar70);
          lVar96 = (int64_t)puVar85 - (int64_t)param_2;
          pbVar80 = param_2;
          lVar82 = lVar97;
          do {
            switch(bVar75) {
            case 0:
              goto code_r0x000180425900;
            case 1:
              goto code_r0x000180425920;
            case 2:
              goto code_r0x000180425940;
            case 3:
              goto code_r0x000180425960;
            case 4:
              goto code_r0x000180425980;
            case 5:
              goto code_r0x0001804259e1;
            case 6:
              goto code_r0x000180425a00;
            }
            pbVar80 = pbVar80 + 1;
            lVar82 = lVar82 + -1;
          } while (lVar82 != 0);
        }
        goto LAB_1804259c8;
      }
LAB_1804261db:
      if (param_7 < 8) {
        if (param_6 != 0) {
          do {
            pcVar88 = (char *)((uint64_t)(uVar92 * uVar70) + (int64_t)puVar72);
            pbVar80 = (byte *)(((uint64_t)(uVar92 * uVar70) - (uint64_t)uVar90) +
                               (uint64_t)(param_4 * param_5) + (int64_t)puVar72);
            if (param_8 == 0) {
              cVar69 = (&processed_var_648_ptr)[param_7];
            }
            else {
              cVar69 = '\x01';
            }
            if (param_7 == 4) {
              pcVar87 = pcVar88;
              uVar94 = uVar71;
              if (1 < (int)uVar71) {
                uVar74 = (uint64_t)(uVar71 >> 1);
                uVar94 = uVar71 + (uVar71 >> 1) * -2;
                do {
                  *pcVar87 = (*pbVar80 >> 4) * cVar69;
                  bVar75 = *pbVar80;
                  pbVar80 = pbVar80 + 1;
                  pcVar87[1] = (bVar75 & 0xf) * cVar69;
                  pcVar87 = pcVar87 + 2;
                  uVar74 = uVar74 - 1;
                } while (uVar74 != 0);
              }
              if (0 < (int)uVar94) {
                *pcVar87 = (*pbVar80 >> 4) * cVar69;
              }
            }
            else {
              pcVar87 = pcVar88;
              if (param_7 == 2) {
                uVar94 = uVar71;
                if (3 < (int)uVar71) {
                  uVar74 = (uint64_t)(uVar71 >> 2);
                  uVar94 = uVar71 + (uVar71 >> 2) * -4;
                  do {
                    *pcVar87 = (*pbVar80 >> 6) * cVar69;
                    pcVar87[1] = (*pbVar80 >> 4 & 3) * cVar69;
                    pcVar87[2] = (*pbVar80 >> 2 & 3) * cVar69;
                    bVar75 = *pbVar80;
                    pbVar80 = pbVar80 + 1;
                    pcVar87[3] = (bVar75 & 3) * cVar69;
                    pcVar87 = pcVar87 + 4;
                    uVar74 = uVar74 - 1;
                  } while (uVar74 != 0);
                }
                if (0 < (int)uVar94) {
                  *pcVar87 = (*pbVar80 >> 6) * cVar69;
                  pcVar87 = pcVar87 + 1;
                }
                if (1 < (int)uVar94) {
                  *pcVar87 = (*pbVar80 >> 4 & 3) * cVar69;
                  pcVar87 = pcVar87 + 1;
                }
                if (2 < (int)uVar94) {
                  bVar75 = *pbVar80 >> 2 & 3;
LAB_18042654c:
                  *pcVar87 = bVar75 * cVar69;
                }
              }
              else if (param_7 == 1) {
                uVar94 = uVar71;
                if (7 < (int)uVar71) {
                  uVar74 = (uint64_t)(uVar71 >> 3);
                  uVar94 = uVar71 + (uVar71 >> 3) * -8;
                  do {
                    *pcVar87 = -((char)*pbVar80 >> 7) * cVar69;
                    pcVar87[1] = (*pbVar80 >> 6 & 1) * cVar69;
                    pcVar87[2] = (*pbVar80 >> 5 & 1) * cVar69;
                    pcVar87[3] = (*pbVar80 >> 4 & 1) * cVar69;
                    pcVar87[4] = (*pbVar80 >> 3 & 1) * cVar69;
                    pcVar87[5] = (*pbVar80 >> 2 & 1) * cVar69;
                    pcVar87[6] = (*pbVar80 >> 1 & 1) * cVar69;
                    bVar75 = *pbVar80;
                    pbVar80 = pbVar80 + 1;
                    pcVar87[7] = (bVar75 & 1) * cVar69;
                    pcVar87 = pcVar87 + 8;
                    uVar74 = uVar74 - 1;
                  } while (uVar74 != 0);
                }
                if (0 < (int)uVar94) {
                  *pcVar87 = -((char)*pbVar80 >> 7) * cVar69;
                  pcVar87 = pcVar87 + 1;
                }
                if (1 < (int)uVar94) {
                  *pcVar87 = (*pbVar80 >> 6 & 1) * cVar69;
                  pcVar87 = pcVar87 + 1;
                }
                if (2 < (int)uVar94) {
                  *pcVar87 = (*pbVar80 >> 5 & 1) * cVar69;
                  pcVar87 = pcVar87 + 1;
                }
                if (3 < (int)uVar94) {
                  *pcVar87 = (*pbVar80 >> 4 & 1) * cVar69;
                  pcVar87 = pcVar87 + 1;
                }
                if (4 < (int)uVar94) {
                  *pcVar87 = (*pbVar80 >> 3 & 1) * cVar69;
                  pcVar87 = pcVar87 + 1;
                }
                if (5 < (int)uVar94) {
                  *pcVar87 = (*pbVar80 >> 2 & 1) * cVar69;
                  pcVar87 = pcVar87 + 1;
                }
                if (6 < (int)uVar94) {
                  bVar75 = *pbVar80 >> 1 & 1;
                  goto LAB_18042654c;
                }
              }
            }
            if (iVar5 != param_4) {
              lVar97 = (int64_t)(int)param_5 + -1;
              if (iVar5 == 1) {
                for (; -1 < lVar97; lVar97 = lVar97 + -1) {
                  pcVar88[lVar97 * 2 + 1] = -1;
                  pcVar88[lVar97 * 2] = pcVar88[lVar97];
                }
              }
              else if (-1 < lVar97) {
                pcVar87 = pcVar88 + lVar97 * 4 + 2;
                pcVar88 = pcVar88 + lVar97 * 3 + 1;
                do {
                  lVar97 = lVar97 + -1;
                  pcVar87[1] = -1;
                  *pcVar87 = pcVar88[1];
                  pcVar87[-1] = *pcVar88;
                  pcVar87[-2] = pcVar88[-1];
                  pcVar87 = pcVar87 + -4;
                  pcVar88 = pcVar88 + -3;
                } while (-1 < lVar97);
              }
            }
            uVar92 = uVar92 + 1;
            if (param_6 <= uVar92) {
              return 1;
            }
          } while( true );
        }
      }
      else if ((param_7 == 0x10) && (param_6 = param_4 * param_5 * param_6, param_6 != 0)) {
        uVar74 = (uint64_t)param_6;
        puVar89 = puVar72;
        do {
          uVar4 = *(int8_t *)puVar72;
          puVar72 = puVar72 + 1;
          *puVar89 = CONCAT11(uVar4,*(int8_t *)((int64_t)puVar89 + 1));
          uVar74 = uVar74 - 1;
          puVar89 = puVar89 + 1;
        } while (uVar74 != 0);
      }
      return 1;
    }
  }
  return 0;
code_r0x000180425a00:
  do {
    pbVar80[lVar96] = *pbVar80;
    pbVar80 = pbVar80 + 1;
    lVar82 = lVar82 + -1;
  } while (lVar82 != 0);
  goto LAB_1804259c8;
code_r0x0001804259e1:
  do {
    pbVar80[lVar96] = *pbVar80;
    pbVar80 = pbVar80 + 1;
    lVar82 = lVar82 + -1;
  } while (lVar82 != 0);
  goto LAB_1804259c8;
code_r0x000180425980:
  do {
    cVar69 = UISystem_25660(0,pbVar80[(int64_t)puVar95],0);
    pbVar80[lVar96] = cVar69 + *pbVar80;
    pbVar80 = pbVar80 + 1;
    lVar82 = lVar82 + -1;
  } while (lVar82 != 0);
  goto LAB_1804259c8;
code_r0x000180425960:
  do {
    pbVar80[lVar96] = (pbVar80[(int64_t)puVar95] >> 1) + *pbVar80;
    lVar82 = lVar82 + -1;
    pbVar80 = pbVar80 + 1;
  } while (lVar82 != 0);
LAB_1804259c8:
  lVar82 = 0;
  if (param_7 == 8) {
    if (iVar5 != param_4) {
      puVar85[iVar5] = 0xff;
    }
    lVar96 = (int64_t)param_4;
    lVar73 = (int64_t)iVar5;
  }
  else if (param_7 == 0x10) {
    if (iVar5 != param_4) {
      *(int16_t *)(puVar85 + lVar97) = 0xffff;
    }
    lVar96 = lVar93;
    lVar73 = (int64_t)(int)stack_special_x_8;
  }
  else {
    lVar96 = 1;
    lVar73 = 1;
  }
  param_2 = param_2 + lVar73;
  pbVar80 = puVar85 + (lVar96 - (uint64_t)uVar70);
  pbVar81 = puVar85 + lVar96;
  if ((param_7 < 8) || (iVar5 == param_4)) {
    uVar94 = (local_var_a8 - 1) * stack_special_x_8;
    if (bVar75 < 7) {
      lVar96 = (int64_t)(int)uVar94;
      switch(bVar75) {
      case 0:
// WARNING: Subroutine does not return
        memcpy(pbVar81,param_2,lVar96);
      case 1:
        if (0 < (int)uVar94) {
          pbVar80 = param_2;
          do {
            pbVar80[(int64_t)pbVar81 - (int64_t)param_2] =
                 pbVar80[(int64_t)(pbVar81 + (-(int64_t)param_2 - lVar97))] + *pbVar80;
            pbVar80 = pbVar80 + 1;
            lVar96 = lVar96 + -1;
          } while (lVar96 != 0);
        }
        break;
      case 2:
        lVar73 = lVar82;
        if ((0 < (int)uVar94) && (0x3f < uVar94)) {
          iVar79 = uVar94 - 1;
          lVar73 = 0;
          if (((param_2 + iVar79 < pbVar81) || (pbVar81 + iVar79 < param_2)) &&
             ((pbVar80 + iVar79 < pbVar81 || (pbVar81 + iVar79 < pbVar80)))) {
            uVar76 = uVar94 & 0x8000003f;
            if ((int)uVar76 < 0) {
              uVar76 = (uVar76 - 1 | 0xffffffc0) + 1;
            }
            lVar78 = (int64_t)pbVar80 - (int64_t)param_2;
            lVar86 = (int64_t)pbVar81 - (int64_t)param_2;
            pbVar77 = param_2;
            lVar73 = lVar82;
            do {
              bVar75 = pbVar77[1];
              bVar6 = pbVar77[2];
              bVar7 = pbVar77[3];
              bVar8 = pbVar77[4];
              bVar9 = pbVar77[5];
              bVar10 = pbVar77[6];
              bVar11 = pbVar77[7];
              bVar12 = pbVar77[8];
              bVar13 = pbVar77[9];
              bVar14 = pbVar77[10];
              bVar15 = pbVar77[0xb];
              bVar16 = pbVar77[0xc];
              bVar17 = pbVar77[0xd];
              bVar18 = pbVar77[0xe];
              bVar19 = pbVar77[0xf];
              lVar73 = lVar73 + 0x40;
              pbVar1 = pbVar77 + lVar78;
              bVar20 = pbVar1[1];
              bVar21 = pbVar1[2];
              bVar22 = pbVar1[3];
              bVar23 = pbVar1[4];
              bVar24 = pbVar1[5];
              bVar25 = pbVar1[6];
              bVar26 = pbVar1[7];
              bVar27 = pbVar1[8];
              bVar28 = pbVar1[9];
              bVar29 = pbVar1[10];
              bVar30 = pbVar1[0xb];
              bVar31 = pbVar1[0xc];
              bVar32 = pbVar1[0xd];
              bVar33 = pbVar1[0xe];
              bVar34 = pbVar1[0xf];
              pbVar83 = pbVar77 + lVar78 + 0x10;
              bVar35 = *pbVar83;
              bVar36 = pbVar83[1];
              bVar37 = pbVar83[2];
              bVar38 = pbVar83[3];
              bVar39 = pbVar83[4];
              bVar40 = pbVar83[5];
              bVar41 = pbVar83[6];
              bVar42 = pbVar83[7];
              bVar43 = pbVar83[8];
              bVar44 = pbVar83[9];
              bVar45 = pbVar83[10];
              bVar46 = pbVar83[0xb];
              bVar47 = pbVar83[0xc];
              bVar48 = pbVar83[0xd];
              bVar49 = pbVar83[0xe];
              bVar50 = pbVar83[0xf];
              pbVar83 = pbVar77 + 0x40;
              bVar51 = pbVar77[0x10];
              bVar52 = pbVar77[0x11];
              bVar53 = pbVar77[0x12];
              bVar54 = pbVar77[0x13];
              bVar55 = pbVar77[0x14];
              bVar56 = pbVar77[0x15];
              bVar57 = pbVar77[0x16];
              bVar58 = pbVar77[0x17];
              bVar59 = pbVar77[0x18];
              bVar60 = pbVar77[0x19];
              bVar61 = pbVar77[0x1a];
              bVar62 = pbVar77[0x1b];
              bVar63 = pbVar77[0x1c];
              bVar64 = pbVar77[0x1d];
              bVar65 = pbVar77[0x1e];
              bVar66 = pbVar77[0x1f];
              pbVar2 = pbVar77 + lVar86;
              *pbVar2 = *pbVar1 + *pbVar77;
              pbVar2[1] = bVar20 + bVar75;
              pbVar2[2] = bVar21 + bVar6;
              pbVar2[3] = bVar22 + bVar7;
              pbVar2[4] = bVar23 + bVar8;
              pbVar2[5] = bVar24 + bVar9;
              pbVar2[6] = bVar25 + bVar10;
              pbVar2[7] = bVar26 + bVar11;
              pbVar2[8] = bVar27 + bVar12;
              pbVar2[9] = bVar28 + bVar13;
              pbVar2[10] = bVar29 + bVar14;
              pbVar2[0xb] = bVar30 + bVar15;
              pbVar2[0xc] = bVar31 + bVar16;
              pbVar2[0xd] = bVar32 + bVar17;
              pbVar2[0xe] = bVar33 + bVar18;
              pbVar2[0xf] = bVar34 + bVar19;
              bVar75 = pbVar77[0x20];
              bVar6 = pbVar77[0x21];
              bVar7 = pbVar77[0x22];
              bVar8 = pbVar77[0x23];
              bVar9 = pbVar77[0x24];
              bVar10 = pbVar77[0x25];
              bVar11 = pbVar77[0x26];
              bVar12 = pbVar77[0x27];
              bVar13 = pbVar77[0x28];
              bVar14 = pbVar77[0x29];
              bVar15 = pbVar77[0x2a];
              bVar16 = pbVar77[0x2b];
              bVar17 = pbVar77[0x2c];
              bVar18 = pbVar77[0x2d];
              bVar19 = pbVar77[0x2e];
              bVar20 = pbVar77[0x2f];
              pbVar1 = pbVar83 + lVar78 + -0x20;
              bVar21 = *pbVar1;
              bVar22 = pbVar1[1];
              bVar23 = pbVar1[2];
              bVar24 = pbVar1[3];
              bVar25 = pbVar1[4];
              bVar26 = pbVar1[5];
              bVar27 = pbVar1[6];
              bVar28 = pbVar1[7];
              bVar29 = pbVar1[8];
              bVar30 = pbVar1[9];
              bVar31 = pbVar1[10];
              bVar32 = pbVar1[0xb];
              bVar33 = pbVar1[0xc];
              bVar34 = pbVar1[0xd];
              bVar67 = pbVar1[0xe];
              bVar68 = pbVar1[0xf];
              pbVar1 = pbVar83 + lVar86 + -0x30;
              *pbVar1 = bVar35 + bVar51;
              pbVar1[1] = bVar36 + bVar52;
              pbVar1[2] = bVar37 + bVar53;
              pbVar1[3] = bVar38 + bVar54;
              pbVar1[4] = bVar39 + bVar55;
              pbVar1[5] = bVar40 + bVar56;
              pbVar1[6] = bVar41 + bVar57;
              pbVar1[7] = bVar42 + bVar58;
              pbVar1[8] = bVar43 + bVar59;
              pbVar1[9] = bVar44 + bVar60;
              pbVar1[10] = bVar45 + bVar61;
              pbVar1[0xb] = bVar46 + bVar62;
              pbVar1[0xc] = bVar47 + bVar63;
              pbVar1[0xd] = bVar48 + bVar64;
              pbVar1[0xe] = bVar49 + bVar65;
              pbVar1[0xf] = bVar50 + bVar66;
              bVar35 = pbVar77[0x30];
              bVar36 = pbVar77[0x31];
              bVar37 = pbVar77[0x32];
              bVar38 = pbVar77[0x33];
              bVar39 = pbVar77[0x34];
              bVar40 = pbVar77[0x35];
              bVar41 = pbVar77[0x36];
              bVar42 = pbVar77[0x37];
              bVar43 = pbVar77[0x38];
              bVar44 = pbVar77[0x39];
              bVar45 = pbVar77[0x3a];
              bVar46 = pbVar77[0x3b];
              bVar47 = pbVar77[0x3c];
              bVar48 = pbVar77[0x3d];
              bVar49 = pbVar77[0x3e];
              bVar50 = pbVar77[0x3f];
              pbVar77 = pbVar83 + lVar78 + -0x10;
              bVar51 = *pbVar77;
              bVar52 = pbVar77[1];
              bVar53 = pbVar77[2];
              bVar54 = pbVar77[3];
              bVar55 = pbVar77[4];
              bVar56 = pbVar77[5];
              bVar57 = pbVar77[6];
              bVar58 = pbVar77[7];
              bVar59 = pbVar77[8];
              bVar60 = pbVar77[9];
              bVar61 = pbVar77[10];
              bVar62 = pbVar77[0xb];
              bVar63 = pbVar77[0xc];
              bVar64 = pbVar77[0xd];
              bVar65 = pbVar77[0xe];
              bVar66 = pbVar77[0xf];
              pbVar77 = pbVar83 + lVar86 + -0x20;
              *pbVar77 = bVar21 + bVar75;
              pbVar77[1] = bVar22 + bVar6;
              pbVar77[2] = bVar23 + bVar7;
              pbVar77[3] = bVar24 + bVar8;
              pbVar77[4] = bVar25 + bVar9;
              pbVar77[5] = bVar26 + bVar10;
              pbVar77[6] = bVar27 + bVar11;
              pbVar77[7] = bVar28 + bVar12;
              pbVar77[8] = bVar29 + bVar13;
              pbVar77[9] = bVar30 + bVar14;
              pbVar77[10] = bVar31 + bVar15;
              pbVar77[0xb] = bVar32 + bVar16;
              pbVar77[0xc] = bVar33 + bVar17;
              pbVar77[0xd] = bVar34 + bVar18;
              pbVar77[0xe] = bVar67 + bVar19;
              pbVar77[0xf] = bVar68 + bVar20;
              pbVar77 = pbVar83 + lVar86 + -0x10;
              *pbVar77 = bVar51 + bVar35;
              pbVar77[1] = bVar52 + bVar36;
              pbVar77[2] = bVar53 + bVar37;
              pbVar77[3] = bVar54 + bVar38;
              pbVar77[4] = bVar55 + bVar39;
              pbVar77[5] = bVar56 + bVar40;
              pbVar77[6] = bVar57 + bVar41;
              pbVar77[7] = bVar58 + bVar42;
              pbVar77[8] = bVar59 + bVar43;
              pbVar77[9] = bVar60 + bVar44;
              pbVar77[10] = bVar61 + bVar45;
              pbVar77[0xb] = bVar62 + bVar46;
              pbVar77[0xc] = bVar63 + bVar47;
              pbVar77[0xd] = bVar64 + bVar48;
              pbVar77[0xe] = bVar65 + bVar49;
              pbVar77[0xf] = bVar66 + bVar50;
              pbVar77 = pbVar83;
            } while (lVar73 < (int)(uVar94 - uVar76));
          }
        }
        if (lVar73 < lVar96) {
          pbVar77 = param_2 + lVar73;
          lVar96 = lVar96 - lVar73;
          do {
            pbVar77[(int64_t)pbVar81 - (int64_t)param_2] =
                 pbVar77[(int64_t)pbVar80 - (int64_t)param_2] + *pbVar77;
            pbVar77 = pbVar77 + 1;
            lVar96 = lVar96 + -1;
          } while (lVar96 != 0);
        }
        break;
      case 3:
        if (0 < (int)uVar94) {
          pbVar77 = pbVar80;
          do {
            pbVar83 = pbVar77 + (int64_t)(pbVar81 + (-(int64_t)pbVar80 - lVar97));
            bVar75 = *pbVar77;
            pbVar77 = pbVar77 + 1;
            pbVar77[(int64_t)(pbVar81 + (-1 - (int64_t)pbVar80))] =
                 (char)((uint)*pbVar83 + (uint)bVar75 >> 1) +
                 pbVar77[(int64_t)(param_2 + (-1 - (int64_t)pbVar80))];
            lVar96 = lVar96 + -1;
          } while (lVar96 != 0);
        }
        break;
      case 4:
        if (0 < (int)uVar94) {
          pbVar77 = pbVar81 + -lVar97;
          do {
            cVar69 = UISystem_25660(*pbVar77,(pbVar80 + (lVar97 - (int64_t)pbVar81))
                                            [(int64_t)pbVar77],
                                   pbVar77[(int64_t)pbVar80 - (int64_t)pbVar81]);
            pbVar77[lVar97] = cVar69 + (param_2 + (lVar97 - (int64_t)pbVar81))[(int64_t)pbVar77];
            pbVar77 = pbVar77 + 1;
            lVar96 = lVar96 + -1;
          } while (lVar96 != 0);
        }
        break;
      case 5:
        if (0 < (int)uVar94) {
          pbVar80 = param_2;
          do {
            pbVar80[(int64_t)pbVar81 - (int64_t)param_2] =
                 (pbVar80[(int64_t)(pbVar81 + (-(int64_t)param_2 - lVar97))] >> 1) + *pbVar80;
            lVar96 = lVar96 + -1;
            pbVar80 = pbVar80 + 1;
          } while (lVar96 != 0);
        }
        break;
      case 6:
        if (0 < (int)uVar94) {
          pbVar80 = param_2;
          do {
            pbVar80[(int64_t)pbVar81 - (int64_t)param_2] =
                 pbVar80[(int64_t)(pbVar81 + (-(int64_t)param_2 - lVar97))] + *pbVar80;
            pbVar80 = pbVar80 + 1;
            lVar96 = lVar96 + -1;
          } while (lVar96 != 0);
        }
      }
    }
    param_2 = param_2 + (int)uVar94;
  }
  else {
    switch(bVar75) {
    case 0:
      if (param_5 - 1 != 0) {
        uVar74 = (uint64_t)(param_5 - 1);
        do {
          if (0 < lVar97) {
            pbVar80 = pbVar81;
            lVar82 = lVar97;
            do {
              *pbVar80 = pbVar80[(int64_t)param_2 - (int64_t)pbVar81];
              pbVar80 = pbVar80 + 1;
              lVar82 = lVar82 + -1;
            } while (lVar82 != 0);
          }
          pbVar81[lVar97] = 0xff;
          param_2 = param_2 + (int)stack_special_x_8;
          pbVar81 = pbVar81 + lVar93;
          uVar74 = uVar74 - 1;
        } while (uVar74 != 0);
      }
      break;
    case 1:
      if (param_5 - 1 != 0) {
        uVar74 = (uint64_t)(param_5 - 1);
        do {
          if (0 < lVar97) {
            pbVar80 = param_2;
            lVar82 = lVar97;
            do {
              pbVar80[(int64_t)pbVar81 - (int64_t)param_2] =
                   pbVar80[(int64_t)(pbVar81 + (-(int64_t)param_2 - lVar93))] + *pbVar80;
              pbVar80 = pbVar80 + 1;
              lVar82 = lVar82 + -1;
            } while (lVar82 != 0);
          }
          pbVar81[lVar97] = 0xff;
          param_2 = param_2 + (int)stack_special_x_8;
          pbVar81 = pbVar81 + lVar93;
          uVar74 = uVar74 - 1;
        } while (uVar74 != 0);
      }
      break;
    case 2:
      if (param_5 - 1 != 0) {
        uVar74 = (uint64_t)(param_5 - 1);
        do {
          lVar82 = 0;
          if ((0 < (int)stack_special_x_8) && (0x3f < stack_special_x_8)) {
            iVar79 = stack_special_x_8 - 1;
            lVar82 = 0;
            if (((param_2 + iVar79 < pbVar81) || (pbVar81 + iVar79 < param_2)) &&
               ((pbVar80 + iVar79 < pbVar81 || (pbVar81 + iVar79 < pbVar80)))) {
              uVar94 = stack_special_x_8 & 0x8000003f;
              if ((int)uVar94 < 0) {
                uVar94 = (uVar94 - 1 | 0xffffffc0) + 1;
              }
              lVar96 = (int64_t)param_2 - (int64_t)pbVar81;
              lVar73 = (int64_t)pbVar80 - (int64_t)pbVar81;
              pbVar77 = pbVar81 + 0x10;
              do {
                pbVar1 = pbVar77 + lVar73 + -0x10;
                bVar75 = pbVar1[1];
                bVar6 = pbVar1[2];
                bVar7 = pbVar1[3];
                bVar8 = pbVar1[4];
                bVar9 = pbVar1[5];
                bVar10 = pbVar1[6];
                bVar11 = pbVar1[7];
                bVar12 = pbVar1[8];
                bVar13 = pbVar1[9];
                bVar14 = pbVar1[10];
                bVar15 = pbVar1[0xb];
                bVar16 = pbVar1[0xc];
                bVar17 = pbVar1[0xd];
                bVar18 = pbVar1[0xe];
                bVar19 = pbVar1[0xf];
                lVar82 = lVar82 + 0x40;
                pbVar2 = pbVar77 + lVar96 + -0x10;
                bVar20 = pbVar2[1];
                bVar21 = pbVar2[2];
                bVar22 = pbVar2[3];
                bVar23 = pbVar2[4];
                bVar24 = pbVar2[5];
                bVar25 = pbVar2[6];
                bVar26 = pbVar2[7];
                bVar27 = pbVar2[8];
                bVar28 = pbVar2[9];
                bVar29 = pbVar2[10];
                bVar30 = pbVar2[0xb];
                bVar31 = pbVar2[0xc];
                bVar32 = pbVar2[0xd];
                bVar33 = pbVar2[0xe];
                bVar34 = pbVar2[0xf];
                pbVar83 = pbVar77 + lVar73;
                bVar35 = *pbVar83;
                bVar36 = pbVar83[1];
                bVar37 = pbVar83[2];
                bVar38 = pbVar83[3];
                bVar39 = pbVar83[4];
                bVar40 = pbVar83[5];
                bVar41 = pbVar83[6];
                bVar42 = pbVar83[7];
                bVar43 = pbVar83[8];
                bVar44 = pbVar83[9];
                bVar45 = pbVar83[10];
                bVar46 = pbVar83[0xb];
                bVar47 = pbVar83[0xc];
                bVar48 = pbVar83[0xd];
                bVar49 = pbVar83[0xe];
                bVar50 = pbVar83[0xf];
                pbVar83 = pbVar77 + 0x40;
                pbVar3 = pbVar77 + lVar96;
                bVar51 = *pbVar3;
                bVar52 = pbVar3[1];
                bVar53 = pbVar3[2];
                bVar54 = pbVar3[3];
                bVar55 = pbVar3[4];
                bVar56 = pbVar3[5];
                bVar57 = pbVar3[6];
                bVar58 = pbVar3[7];
                bVar59 = pbVar3[8];
                bVar60 = pbVar3[9];
                bVar61 = pbVar3[10];
                bVar62 = pbVar3[0xb];
                bVar63 = pbVar3[0xc];
                bVar64 = pbVar3[0xd];
                bVar65 = pbVar3[0xe];
                bVar66 = pbVar3[0xf];
                pbVar77[-0x10] = *pbVar2 + *pbVar1;
                pbVar77[-0xf] = bVar20 + bVar75;
                pbVar77[-0xe] = bVar21 + bVar6;
                pbVar77[-0xd] = bVar22 + bVar7;
                pbVar77[-0xc] = bVar23 + bVar8;
                pbVar77[-0xb] = bVar24 + bVar9;
                pbVar77[-10] = bVar25 + bVar10;
                pbVar77[-9] = bVar26 + bVar11;
                pbVar77[-8] = bVar27 + bVar12;
                pbVar77[-7] = bVar28 + bVar13;
                pbVar77[-6] = bVar29 + bVar14;
                pbVar77[-5] = bVar30 + bVar15;
                pbVar77[-4] = bVar31 + bVar16;
                pbVar77[-3] = bVar32 + bVar17;
                pbVar77[-2] = bVar33 + bVar18;
                pbVar77[-1] = bVar34 + bVar19;
                pbVar1 = pbVar83 + lVar96 + -0x30;
                bVar75 = *pbVar1;
                bVar6 = pbVar1[1];
                bVar7 = pbVar1[2];
                bVar8 = pbVar1[3];
                bVar9 = pbVar1[4];
                bVar10 = pbVar1[5];
                bVar11 = pbVar1[6];
                bVar12 = pbVar1[7];
                bVar13 = pbVar1[8];
                bVar14 = pbVar1[9];
                bVar15 = pbVar1[10];
                bVar16 = pbVar1[0xb];
                bVar17 = pbVar1[0xc];
                bVar18 = pbVar1[0xd];
                bVar19 = pbVar1[0xe];
                bVar20 = pbVar1[0xf];
                pbVar1 = pbVar83 + lVar73 + -0x30;
                bVar21 = *pbVar1;
                bVar22 = pbVar1[1];
                bVar23 = pbVar1[2];
                bVar24 = pbVar1[3];
                bVar25 = pbVar1[4];
                bVar26 = pbVar1[5];
                bVar27 = pbVar1[6];
                bVar28 = pbVar1[7];
                bVar29 = pbVar1[8];
                bVar30 = pbVar1[9];
                bVar31 = pbVar1[10];
                bVar32 = pbVar1[0xb];
                bVar33 = pbVar1[0xc];
                bVar34 = pbVar1[0xd];
                bVar67 = pbVar1[0xe];
                bVar68 = pbVar1[0xf];
                *pbVar77 = bVar35 + bVar51;
                pbVar77[1] = bVar36 + bVar52;
                pbVar77[2] = bVar37 + bVar53;
                pbVar77[3] = bVar38 + bVar54;
                pbVar77[4] = bVar39 + bVar55;
                pbVar77[5] = bVar40 + bVar56;
                pbVar77[6] = bVar41 + bVar57;
                pbVar77[7] = bVar42 + bVar58;
                pbVar77[8] = bVar43 + bVar59;
                pbVar77[9] = bVar44 + bVar60;
                pbVar77[10] = bVar45 + bVar61;
                pbVar77[0xb] = bVar46 + bVar62;
                pbVar77[0xc] = bVar47 + bVar63;
                pbVar77[0xd] = bVar48 + bVar64;
                pbVar77[0xe] = bVar49 + bVar65;
                pbVar77[0xf] = bVar50 + bVar66;
                pbVar1 = pbVar83 + lVar96 + -0x20;
                bVar35 = *pbVar1;
                bVar36 = pbVar1[1];
                bVar37 = pbVar1[2];
                bVar38 = pbVar1[3];
                bVar39 = pbVar1[4];
                bVar40 = pbVar1[5];
                bVar41 = pbVar1[6];
                bVar42 = pbVar1[7];
                bVar43 = pbVar1[8];
                bVar44 = pbVar1[9];
                bVar45 = pbVar1[10];
                bVar46 = pbVar1[0xb];
                bVar47 = pbVar1[0xc];
                bVar48 = pbVar1[0xd];
                bVar49 = pbVar1[0xe];
                bVar50 = pbVar1[0xf];
                pbVar1 = pbVar83 + lVar73 + -0x20;
                bVar51 = *pbVar1;
                bVar52 = pbVar1[1];
                bVar53 = pbVar1[2];
                bVar54 = pbVar1[3];
                bVar55 = pbVar1[4];
                bVar56 = pbVar1[5];
                bVar57 = pbVar1[6];
                bVar58 = pbVar1[7];
                bVar59 = pbVar1[8];
                bVar60 = pbVar1[9];
                bVar61 = pbVar1[10];
                bVar62 = pbVar1[0xb];
                bVar63 = pbVar1[0xc];
                bVar64 = pbVar1[0xd];
                bVar65 = pbVar1[0xe];
                bVar66 = pbVar1[0xf];
                pbVar77[0x10] = bVar21 + bVar75;
                pbVar77[0x11] = bVar22 + bVar6;
                pbVar77[0x12] = bVar23 + bVar7;
                pbVar77[0x13] = bVar24 + bVar8;
                pbVar77[0x14] = bVar25 + bVar9;
                pbVar77[0x15] = bVar26 + bVar10;
                pbVar77[0x16] = bVar27 + bVar11;
                pbVar77[0x17] = bVar28 + bVar12;
                pbVar77[0x18] = bVar29 + bVar13;
                pbVar77[0x19] = bVar30 + bVar14;
                pbVar77[0x1a] = bVar31 + bVar15;
                pbVar77[0x1b] = bVar32 + bVar16;
                pbVar77[0x1c] = bVar33 + bVar17;
                pbVar77[0x1d] = bVar34 + bVar18;
                pbVar77[0x1e] = bVar67 + bVar19;
                pbVar77[0x1f] = bVar68 + bVar20;
                pbVar77[0x20] = bVar51 + bVar35;
                pbVar77[0x21] = bVar52 + bVar36;
                pbVar77[0x22] = bVar53 + bVar37;
                pbVar77[0x23] = bVar54 + bVar38;
                pbVar77[0x24] = bVar55 + bVar39;
                pbVar77[0x25] = bVar56 + bVar40;
                pbVar77[0x26] = bVar57 + bVar41;
                pbVar77[0x27] = bVar58 + bVar42;
                pbVar77[0x28] = bVar59 + bVar43;
                pbVar77[0x29] = bVar60 + bVar44;
                pbVar77[0x2a] = bVar61 + bVar45;
                pbVar77[0x2b] = bVar62 + bVar46;
                pbVar77[0x2c] = bVar63 + bVar47;
                pbVar77[0x2d] = bVar64 + bVar48;
                pbVar77[0x2e] = bVar65 + bVar49;
                pbVar77[0x2f] = bVar66 + bVar50;
                pbVar77 = pbVar83;
              } while (lVar82 < (int)(stack_special_x_8 - uVar94));
            }
          }
          if (lVar82 < lVar97) {
            pbVar77 = param_2 + lVar82;
            lVar82 = lVar97 - lVar82;
            do {
              pbVar77[(int64_t)pbVar81 - (int64_t)param_2] =
                   pbVar77[(int64_t)pbVar80 - (int64_t)param_2] + *pbVar77;
              pbVar77 = pbVar77 + 1;
              lVar82 = lVar82 + -1;
            } while (lVar82 != 0);
          }
          pbVar81[lVar97] = 0xff;
          param_2 = param_2 + (int)stack_special_x_8;
          pbVar81 = pbVar81 + lVar93;
          pbVar80 = pbVar80 + lVar93;
          uVar74 = uVar74 - 1;
        } while (uVar74 != 0);
      }
      break;
    case 3:
      if (param_5 - 1 != 0) {
        uVar74 = (uint64_t)(param_5 - 1);
        do {
          if (0 < lVar97) {
            pbVar77 = pbVar80;
            lVar82 = lVar97;
            do {
              pbVar83 = pbVar77 + (int64_t)(pbVar81 + (-(int64_t)pbVar80 - lVar93));
              bVar75 = *pbVar77;
              pbVar77 = pbVar77 + 1;
              pbVar77[(int64_t)(pbVar81 + (-1 - (int64_t)pbVar80))] =
                   (char)((uint)*pbVar83 + (uint)bVar75 >> 1) +
                   pbVar77[(int64_t)(param_2 + (-1 - (int64_t)pbVar80))];
              lVar82 = lVar82 + -1;
            } while (lVar82 != 0);
          }
          pbVar81[lVar97] = 0xff;
          param_2 = param_2 + (int)stack_special_x_8;
          pbVar81 = pbVar81 + lVar93;
          pbVar80 = pbVar80 + lVar93;
          uVar74 = uVar74 - 1;
        } while (uVar74 != 0);
      }
      break;
    case 4:
      if (param_5 - 1 != 0) {
        pbVar77 = pbVar81 + lVar97;
        lVar82 = lVar93 + lVar97;
        uVar74 = (uint64_t)(param_5 - 1);
        lVar73 = lVar93 - (int64_t)pbVar81;
        lVar96 = lVar97;
        do {
          lVar97 = lVar96;
          if (0 < lVar96) {
            pbVar83 = pbVar77 + -lVar82;
            do {
              cVar69 = UISystem_25660(*pbVar83,(pbVar80 + lVar73)[(int64_t)pbVar83],
                                     pbVar83[(int64_t)pbVar80 - (int64_t)pbVar81]);
              pbVar83[lVar93] = cVar69 + (param_2 + lVar73)[(int64_t)pbVar83];
              pbVar83 = pbVar83 + 1;
              lVar96 = lVar96 + -1;
              lVar97 = lStack_80;
            } while (lVar96 != 0);
          }
          lVar73 = lVar73 - lVar93;
          *pbVar77 = 0xff;
          pbVar77 = pbVar77 + lVar93;
          pbVar80 = pbVar80 + lVar93;
          param_2 = param_2 + (int)stack_special_x_8;
          pbVar81 = pbVar81 + lVar93;
          uVar74 = uVar74 - 1;
          lVar96 = lVar97;
        } while (uVar74 != 0);
      }
      break;
    case 5:
      if (param_5 - 1 != 0) {
        uVar74 = (uint64_t)(param_5 - 1);
        do {
          if (0 < lVar97) {
            pbVar80 = param_2;
            lVar82 = lVar97;
            do {
              pbVar80[(int64_t)pbVar81 - (int64_t)param_2] =
                   (pbVar80[(int64_t)(pbVar81 + (-(int64_t)param_2 - lVar93))] >> 1) + *pbVar80;
              lVar82 = lVar82 + -1;
              pbVar80 = pbVar80 + 1;
            } while (lVar82 != 0);
          }
          pbVar81[lVar97] = 0xff;
          param_2 = param_2 + (int)stack_special_x_8;
          pbVar81 = pbVar81 + lVar93;
          uVar74 = uVar74 - 1;
        } while (uVar74 != 0);
      }
      break;
    case 6:
      if (param_5 - 1 != 0) {
        uVar74 = (uint64_t)(param_5 - 1);
        do {
          if (0 < lVar97) {
            pbVar80 = param_2;
            lVar82 = lVar97;
            do {
              pbVar80[(int64_t)pbVar81 - (int64_t)param_2] =
                   pbVar80[(int64_t)(pbVar81 + (-(int64_t)param_2 - lVar93))] + *pbVar80;
              pbVar80 = pbVar80 + 1;
              lVar82 = lVar82 + -1;
            } while (lVar82 != 0);
          }
          pbVar81[lVar97] = 0xff;
          param_2 = param_2 + (int)stack_special_x_8;
          pbVar81 = pbVar81 + lVar93;
          uVar74 = uVar74 - 1;
        } while (uVar74 != 0);
      }
    }
    if ((param_7 == 0x10) && (param_5 != 0)) {
      uVar74 = (uint64_t)param_5;
      do {
        puVar84[lVar97 + 1] = 0xff;
        puVar84 = puVar84 + lVar93;
        uVar74 = uVar74 - 1;
      } while (uVar74 != 0);
    }
  }
  local_var_a4 = local_var_a4 + 1;
  if (param_6 <= local_var_a4) goto LAB_1804261db;
  goto LAB_180425840;
code_r0x000180425940:
  do {
    pbVar80[lVar96] = pbVar80[(int64_t)puVar95] + *pbVar80;
    pbVar80 = pbVar80 + 1;
    lVar82 = lVar82 + -1;
  } while (lVar82 != 0);
  goto LAB_1804259c8;
code_r0x000180425920:
  do {
    pbVar80[lVar96] = *pbVar80;
    pbVar80 = pbVar80 + 1;
    lVar82 = lVar82 + -1;
  } while (lVar82 != 0);
  goto LAB_1804259c8;
code_r0x000180425900:
  do {
    pbVar80[lVar96] = *pbVar80;
    pbVar80 = pbVar80 + 1;
    lVar82 = lVar82 + -1;
  } while (lVar82 != 0);
  goto LAB_1804259c8;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address