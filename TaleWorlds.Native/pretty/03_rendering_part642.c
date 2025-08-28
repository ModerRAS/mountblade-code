#include "TaleWorlds.Native.Split.h"

// 03_rendering_part642.c - 3 个函数

// 函数: void FUN_180629c7c(void)
void FUN_180629c7c(void)

{
  int64_t unaff_RBX;
  int in_R9D;
  int in_R11D;
  
  *(int *)(unaff_RBX + 0x10) = in_R9D - in_R11D;
  *(int8_t *)((uint64_t)(uint)(in_R9D - in_R11D) + *(int64_t *)(unaff_RBX + 8)) = 0;
  return;
}



BADSPACEBASE *
FUN_180629cc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4,
             uint param_5)

{
  char cVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int64_t alStack_88 [4];
  uint64_t uStack_68;
  uint64_t uStack_60;
  int64_t lStack_58;
  int32_t uStack_50;
  uint uStack_4c;
  ushort uStack_48;
  int32_t uStack_44;
  int8_t uStack_40;
  int64_t *plStack_38;
  int8_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  uint64_t uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  lStack_58 = *param_4;
  if (lStack_58 != 0) {
    uStack_50 = *(int32_t *)(lStack_58 + 0x20);
    uStack_44 = *(int32_t *)(lStack_58 + 0x28);
    plStack_38 = param_4 + 1;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    alStack_88[0] = 0;
    alStack_88[1] = 0;
    alStack_88[2] = 0;
    uStack_4c = param_5;
    uStack_48 = uStack_48 & 0xff00;
    if (((*(byte *)(lStack_58 + 0xc) & 8) == 0) || ((param_5 & 0x10) != 0)) {
      uStack_40 = 0;
    }
    else {
      uStack_40 = 1;
    }
    uStack_68 = param_2;
    uStack_60 = param_1;
    FUN_18047bea0(alStack_88,*(int32_t *)(lStack_58 + 0x24));
    alStack_88[3] = uStack_60;
    uStack_108 = uStack_60;
    FUN_18047c050(&uStack_100,uStack_44);
    FUN_18047bea0(&uStack_e0,uStack_44);
    uStack_48 = 0;
    uStack_30 = 1;
    uStack_2c = 10000000;
    uStack_28 = 600;
    cVar1 = NetworkSystem_ErrorHandler(&uStack_108,lStack_58);
    if (alStack_88[0] != 0) {
      uVar3 = alStack_88[2] - alStack_88[0] & 0xfffffffffffffff0;
      lVar2 = alStack_88[0];
      if (0xfff < uVar3) {
        uVar3 = uVar3 + 0x27;
        lVar2 = *(int64_t *)(alStack_88[0] + -8);
        if (0x1f < (alStack_88[0] - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar2,uVar3);
      alStack_88[0] = 0;
      alStack_88[1] = 0;
      alStack_88[2] = 0;
    }
    FUN_18047b1c0(&uStack_a0);
    FUN_180257d60(&uStack_c0);
    FUN_18047b1c0(&uStack_e0);
    FUN_180257d60(&uStack_100);
    register0x00000020 = (BADSPACEBASE *)(uint64_t)(cVar1 != '\0');
  }
  return register0x00000020;
}



int8_t NetworkSystem_ErrorHandler(int64_t *param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint *puVar2;
  uint uVar3;
  char *pcVar4;
  int64_t lVar5;
  int64_t lVar6;
  code *pcVar7;
  int8_t uVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  int64_t lVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  uint64_t uVar16;
  int32_t uVar17;
  uint64_t uVar18;
  int64_t lStack_48;
  uint64_t uStack_40;
  int64_t lStack_30;
  
  uVar18 = 0xfffffffffffffffe;
  iVar13 = (int)param_1[0x1c];
  if (0 < iVar13) {
    iVar13 = iVar13 + -1;
    *(int *)(param_1 + 0x1c) = iVar13;
    if (iVar13 < 1) {
      __Xregex_error_std__YAXW4error_type_regex_constants_1__Z(0xc);
      pcVar7 = (code *)swi(3);
      uVar8 = (*pcVar7)();
      return uVar8;
    }
  }
  if ((0 < *(int *)((int64_t)param_1 + 0xdc)) &&
     (iVar11 = *(int *)((int64_t)param_1 + 0xdc) + -1, *(int *)((int64_t)param_1 + 0xdc) = iVar11,
     iVar11 < 1)) {
    __Xregex_error_std__YAXW4error_type_regex_constants_1__Z(0xb);
    pcVar7 = (code *)swi(3);
    uVar8 = (*pcVar7)();
    return uVar8;
  }
  bVar15 = false;
  bVar14 = false;
  if (param_2 == 0) {
LAB_18062a305:
    if (0 < iVar13) {
      *(int *)(param_1 + 0x1c) = iVar13 + 1;
    }
    return bVar14 == false;
  }
code_r0x000180629f40:
  iVar13 = *(int *)(param_2 + 8);
  switch(iVar13) {
  case 1:
  case 8:
  case 9:
  case 0x11:
  case 0x14:
    break;
  case 2:
    if (((*(uint *)((int64_t)param_1 + 0xbc) >> 8 & 1) == 0) && (*param_1 == param_1[0x13])) {
      bVar14 = (bool)((byte)*(uint *)((int64_t)param_1 + 0xbc) & 1);
      bVar15 = bVar14;
    }
    else {
      bVar14 = *(char *)(*param_1 + -1) != '\n';
      bVar15 = bVar14;
    }
    break;
  case 3:
    if ((char *)*param_1 == (char *)param_1[0x14]) {
      bVar14 = (bool)((byte)(*(uint *)((int64_t)param_1 + 0xbc) >> 1) & 1);
      bVar15 = bVar14;
    }
    else {
      bVar14 = *(char *)*param_1 != '\n';
      bVar15 = bVar14;
    }
    break;
  case 4:
    bVar9 = func_0x00018047e820(param_1);
    bVar14 = bVar9 == ((byte)*(int32_t *)(param_2 + 0xc) & 1);
    bVar15 = bVar14;
    break;
  case 5:
    pcVar4 = (char *)*param_1;
    if (((pcVar4 == (char *)param_1[0x14]) || (*pcVar4 == '\n')) || (*pcVar4 == '\r')) {
code_r0x00018062a2fc:
      bVar14 = true;
code_r0x00018062a2ff:
      iVar13 = (int)param_1[0x1c];
      goto LAB_18062a305;
    }
    *param_1 = (int64_t)(pcVar4 + 1);
    break;
  case 6:
    lVar12 = FUN_18062abc0(*param_1,param_1[0x14],*(int64_t *)(param_2 + 0x28),
                           (uint64_t)*(uint *)(param_2 + 0x24) + *(int64_t *)(param_2 + 0x28),
                           param_1[0x1a],(int)param_1[0x17],uVar18);
    if (lVar12 == *param_1) goto code_r0x00018062a2fc;
    *param_1 = lVar12;
    break;
  case 7:
    if ((*param_1 == param_1[0x14]) || (cVar10 = FUN_18062a930(param_1,param_2), cVar10 == '\0'))
    goto code_r0x00018062a2fc;
    bVar14 = false;
    bVar15 = bVar14;
    goto code_r0x00018062a2e9;
  case 10:
  case 0xb:
    lVar12 = *param_1;
    plVar1 = param_1 + 1;
    FUN_18047db80(&lStack_48,plVar1);
    lStack_30 = param_1[4];
    cVar10 = NetworkSystem_ErrorHandler(param_1,*(uint64_t *)(param_2 + 0x20));
    if ((bool)cVar10 == (iVar13 == 0xb)) {
      *param_1 = lVar12;
      if (plVar1 != &lStack_48) {
        FUN_18047ff70(plVar1,lStack_48,uStack_40);
        param_1[4] = lStack_30;
      }
      bVar15 = true;
      bVar14 = true;
    }
    else {
      *param_1 = lVar12;
    }
    FUN_180257d60(&lStack_48);
    break;
  case 0xc:
    goto code_r0x00018062a2e2;
  case 0xd:
    *(int64_t *)(param_1[5] + (uint64_t)*(uint *)(param_2 + 0x20) * 0x10) = *param_1;
    uVar16 = param_1[4];
    if (*(uint *)(param_2 + 0x20) < uVar16) {
      do {
        uVar16 = uVar16 - 1;
        puVar2 = (uint *)(param_1[1] + (uVar16 >> 5) * 4);
        *puVar2 = *puVar2 & ~(1 << ((uint)uVar16 & 0x1f));
      } while (*(uint *)(param_2 + 0x20) < uVar16);
    }
    break;
  case 0xe:
    lVar12 = *(int64_t *)(param_2 + 0x20);
    if ((*(char *)((int64_t)param_1 + 0xc1) != '\0') || (*(int *)(lVar12 + 0x20) != 0)) {
      puVar2 = (uint *)(param_1[1] + (uint64_t)(*(uint *)(lVar12 + 0x20) >> 5) * 4);
      *puVar2 = *puVar2 | 1 << (*(uint *)(lVar12 + 0x20) & 0x1f);
      *(int64_t *)(param_1[5] + 8 + (uint64_t)*(uint *)(lVar12 + 0x20) * 0x10) = *param_1;
    }
    break;
  case 0xf:
    uVar3 = *(uint *)(param_2 + 0x20);
    if ((*(uint *)(param_1[1] + (uint64_t)(uVar3 >> 5) * 4) >> ((byte)uVar3 & 0x1f) & 1) != 0) {
      lVar12 = *param_1;
      lVar5 = *(int64_t *)(param_1[5] + (uint64_t)uVar3 * 0x10);
      lVar6 = *(int64_t *)(param_1[5] + (uint64_t)uVar3 * 0x10 + 8);
      if ((lVar5 != lVar6) &&
         (lVar12 = FUN_18062abc0(lVar12,param_1[0x14],lVar5,lVar6,param_1[0x1a],(int)param_1[0x17],
                                 uVar18), lVar12 == *param_1)) goto code_r0x00018062a2fc;
      *param_1 = lVar12;
    }
    break;
  case 0x10:
    cVar10 = FUN_18062a420(param_1,param_2);
    bVar14 = bVar15;
    if (cVar10 == '\0') {
      bVar14 = true;
      bVar15 = bVar14;
    }
    goto code_r0x00018062a2e2;
  case 0x12:
    uVar3 = CONCAT31((uint3)(*(uint *)(param_2 + 0xc) >> 9),(char)(*(uint *)(param_2 + 0xc) >> 1));
    uVar17 = 0;
code_r0x00018062a249:
    cVar10 = FUN_18062a6a0(param_1,param_2,uVar3 & 0xffffff01,uVar17);
    bVar14 = bVar15;
    if (cVar10 == '\0') {
      bVar14 = true;
      bVar15 = true;
    }
    goto code_r0x00018062a2e2;
  case 0x13:
    param_2 = *(int64_t *)(param_2 + 0x20);
    if (*(int *)(param_2 + 0x34) == 0) {
      uVar3 = CONCAT31((uint3)(*(uint *)(param_2 + 0xc) >> 9),(char)(*(uint *)(param_2 + 0xc) >> 1))
      ;
      uVar17 = *(int32_t *)((uint64_t)*(uint *)(param_2 + 0x30) * 0x10 + param_1[0x10]);
      goto code_r0x00018062a249;
    }
    goto code_r0x00018062a2e2;
  case 0x15:
    if ((((*(uint *)((int64_t)param_1 + 0xbc) & 0x2020) == 0) || (param_1[0x13] != *param_1)) &&
       (((char)param_1[0x1b] == '\0' || (*param_1 == param_1[0x14])))) {
      if (((char)param_1[0x18] == '\0') || (cVar10 = FUN_18062aaf0(param_1), cVar10 != '\0')) {
        FUN_18062a3a0(param_1 + 8,param_1);
        *(int8_t *)(param_1 + 0x18) = 1;
      }
    }
    else {
      bVar14 = true;
      bVar15 = true;
    }
code_r0x00018062a2e2:
    param_2 = 0;
    break;
  default:
    __Xregex_error_std__YAXW4error_type_regex_constants_1__Z(0xd);
    pcVar7 = (code *)swi(3);
    uVar8 = (*pcVar7)();
    return uVar8;
  }
  if (bVar14 != false) goto code_r0x00018062a2ff;
code_r0x00018062a2e9:
  if ((param_2 == 0) || (param_2 = *(int64_t *)(param_2 + 0x10), param_2 == 0))
  goto code_r0x00018062a2ff;
  goto code_r0x000180629f40;
}



uint64_t * FUN_18062a3a0(uint64_t *param_1,uint64_t *param_2)

{
  *param_1 = *param_2;
  if (param_1 + 1 != param_2 + 1) {
    FUN_18047ff70(param_1 + 1,param_2[1],param_2[2]);
    param_1[4] = param_2[4];
  }
  if (param_1 + 5 != param_2 + 5) {
    FUN_18062b040(param_1 + 5,param_2[5],param_2[6]);
  }
  return param_1;
}



uint64_t FUN_18062a420(int64_t *param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lStack_b0;
  uint64_t uStack_a8;
  int64_t lStack_98;
  int64_t lStack_90;
  uint64_t uStack_88;
  int64_t lStack_78;
  int64_t lStack_70;
  uint64_t uStack_68;
  int64_t lStack_58;
  int64_t lStack_50;
  uint64_t uStack_48;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lVar3 = *param_1;
  plVar1 = param_1 + 1;
  FUN_18047db80(&lStack_b0,plVar1);
  lStack_98 = param_1[4];
  plVar2 = param_1 + 5;
  FUN_18062acf0(&lStack_90,plVar2);
  if (param_2 != 0) {
    do {
      *param_1 = lVar3;
      if (plVar1 != &lStack_b0) {
        FUN_18047ff70(plVar1,lStack_b0,uStack_a8);
        param_1[4] = lStack_98;
      }
      if (plVar2 != &lStack_90) {
        FUN_18062b040(plVar2,lStack_90,uStack_88);
      }
      cVar6 = NetworkSystem_ErrorHandler(param_1,*(uint64_t *)(param_2 + 0x10));
      if (cVar6 != '\0') {
        if ((char)param_1[0x19] == '\0') {
          uVar7 = 1;
        }
        else {
          lStack_78 = *param_1;
          FUN_18047db80(&lStack_70,plVar1);
          lStack_58 = param_1[4];
          FUN_18062acf0(&lStack_50,plVar2);
          lVar9 = *param_1 - lVar3;
          for (lVar4 = *(int64_t *)(param_2 + 0x28); lVar4 != 0;
              lVar4 = *(int64_t *)(lVar4 + 0x28)) {
            *param_1 = lVar3;
            if (plVar1 != &lStack_b0) {
              FUN_18047ff70(plVar1,lStack_b0,uStack_a8);
              param_1[4] = lStack_98;
            }
            if (plVar2 != &lStack_90) {
              FUN_18062b040(plVar2,lStack_90,uStack_88);
            }
            cVar6 = NetworkSystem_ErrorHandler(param_1,*(uint64_t *)(lVar4 + 0x10));
            if (cVar6 != '\0') {
              lVar5 = *param_1;
              lVar8 = lVar5 - lVar3;
              if (lVar9 < lVar8) {
                lStack_78 = lVar5;
                if (&lStack_70 != plVar1) {
                  FUN_18047ff70(&lStack_70,*plVar1,param_1[2]);
                  lStack_58 = param_1[4];
                }
                lVar9 = lVar8;
                if (&lStack_50 != plVar2) {
                  FUN_18062b040(&lStack_50,*plVar2,param_1[6]);
                }
              }
            }
          }
          *param_1 = lStack_78;
          if (plVar1 != &lStack_70) {
            FUN_18047ff70(plVar1,lStack_70,uStack_68);
            param_1[4] = lStack_58;
          }
          if (plVar2 != &lStack_50) {
            FUN_18062b040(plVar2,lStack_50,uStack_48);
          }
          uVar7 = 1;
          FUN_18047b1c0(&lStack_50);
          FUN_180257d60(&lStack_70);
        }
        goto LAB_18062a4ec;
      }
      param_2 = *(int64_t *)(param_2 + 0x28);
    } while (param_2 != 0);
  }
  uVar7 = 0;
LAB_18062a4ec:
  FUN_18047b1c0(&lStack_90);
  FUN_180257d60(&lStack_b0);
  return uVar7;
}



uint64_t FUN_18062a6a0(int64_t *param_1,int64_t param_2,char param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  int64_t *plVar3;
  byte bVar4;
  uint64_t uVar5;
  int *piVar6;
  int64_t lStack_98;
  int64_t *plStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  uint64_t uStack_78;
  int64_t lStack_68;
  int64_t lStack_60;
  uint64_t uStack_58;
  int64_t *plStack_48;
  int64_t *plStack_40;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (*(int *)(param_2 + 0x34) == 1) {
    uVar5 = FUN_18062ad70();
    return uVar5;
  }
  bVar4 = 0;
  lStack_88 = *param_1;
  plStack_48 = param_1 + 1;
  FUN_18047db80(&lStack_80,plStack_48);
  lStack_68 = param_1[4];
  plStack_40 = param_1 + 5;
  FUN_18062acf0(&lStack_60,plStack_40);
  piVar6 = (int *)((uint64_t)*(uint *)(param_2 + 0x30) * 0x10 + param_1[0x10]);
  iVar1 = *piVar6;
  plStack_90 = *(int64_t **)(piVar6 + 2);
  lStack_98 = *param_1;
  if ((param_4 == 0) || (*plStack_90 != lStack_98)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((*(int *)(param_2 + 0x24) < 0) || (param_4 < *(int *)(param_2 + 0x24))) {
    if (param_4 < *(int *)(param_2 + 0x20)) {
      if (bVar2) {
        *piVar6 = param_4 + 1;
        *(int64_t **)(piVar6 + 2) = &lStack_98;
        bVar4 = NetworkSystem_ErrorHandler(param_1,*(uint64_t *)(param_2 + 0x10));
      }
      else {
        bVar4 = NetworkSystem_ErrorHandler(param_1,*(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0x10));
      }
      goto LAB_18062a880;
    }
    if (param_3 != '\0') {
      if (bVar2) {
        *piVar6 = param_4 + 1;
        *(int64_t **)(piVar6 + 2) = &lStack_98;
        bVar4 = NetworkSystem_ErrorHandler(param_1,*(uint64_t *)(param_2 + 0x10));
        if (bVar4 != 0) goto LAB_18062a8d9;
      }
      else if (1 < param_4) goto LAB_18062a88d;
      *piVar6 = iVar1;
      *(int64_t **)(piVar6 + 2) = plStack_90;
      FUN_18062a3a0(param_1,&lStack_88);
      bVar4 = NetworkSystem_ErrorHandler(param_1,*(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0x10));
      goto LAB_18062a880;
    }
    bVar4 = NetworkSystem_ErrorHandler(param_1,*(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0x10));
    if (bVar4 != 0) goto LAB_18062a8d9;
    if (bVar2) {
      FUN_18062a3a0(param_1,&lStack_88);
      *piVar6 = param_4 + 1;
      *(int64_t **)(piVar6 + 2) = &lStack_98;
      bVar4 = NetworkSystem_ErrorHandler(param_1,*(uint64_t *)(param_2 + 0x10));
      goto LAB_18062a880;
    }
  }
  else {
    bVar4 = NetworkSystem_ErrorHandler(param_1,*(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0x10));
LAB_18062a880:
    if (bVar4 != 0) goto LAB_18062a8d9;
  }
LAB_18062a88d:
  plVar3 = plStack_48;
  *param_1 = lStack_88;
  if (plStack_48 != &lStack_80) {
    FUN_18047ff70(plStack_48,lStack_80,uStack_78);
    plVar3[3] = lStack_68;
  }
  if (plStack_40 != &lStack_60) {
    FUN_18062b040(plStack_40,lStack_60,uStack_58);
  }
LAB_18062a8d9:
  *piVar6 = iVar1;
  *(int64_t **)(piVar6 + 2) = plStack_90;
  FUN_18047b1c0(&lStack_60);
  FUN_180257d60(&lStack_80);
  return (uint64_t)bVar4;
}



uint64_t FUN_18062a930(int64_t *param_1,int64_t param_2)

{
  int64_t lVar1;
  byte bVar2;
  byte bVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  
  pbVar12 = (byte *)*param_1;
  bVar2 = *pbVar12;
  if ((*(uint *)(param_1 + 0x17) & 0x100) != 0) {
    bVar2 = _tolower___ctype_D_std__QEBADD_Z(*(uint64_t *)(param_1[0x1a] + 8));
    pbVar12 = (byte *)*param_1;
  }
  puVar7 = *(uint **)(param_2 + 0x20);
  pbVar9 = pbVar12 + 1;
  if (puVar7 != (uint *)0x0) {
    do {
      uVar6 = 0;
      if (puVar7[3] != 0) {
        uVar5 = *puVar7;
        do {
          uVar4 = 0;
          pbVar10 = pbVar12;
          if (uVar5 != 0) {
            do {
              bVar3 = *pbVar10;
              pbVar10 = pbVar10 + 1;
              if (bVar3 != *(byte *)(uVar6 + *(int64_t *)(puVar7 + 4) + uVar4)) break;
              uVar4 = uVar4 + 1;
            } while (uVar4 < uVar5);
          }
          pbVar8 = (byte *)param_1[0x14];
          if (pbVar10 == (byte *)param_1[0x14]) goto LAB_18062a9fe;
          uVar11 = (int)uVar6 + uVar5;
          uVar6 = (uint64_t)uVar11;
        } while (uVar11 < puVar7[3]);
      }
      puVar7 = *(uint **)(puVar7 + 6);
      pbVar8 = pbVar12;
    } while (puVar7 != (uint *)0x0);
LAB_18062a9fe:
    if (pbVar8 != pbVar12) {
LAB_18062aa0b:
      uVar5 = 1;
      pbVar9 = pbVar8;
      goto LAB_18062aaa6;
    }
  }
  lVar1 = *(int64_t *)(param_2 + 0x38);
  if (lVar1 != 0) {
    bVar3 = bVar2;
    if ((*(uint *)(param_1 + 0x17) & 0x800) != 0) {
      bVar3 = FUN_18047c260(param_1[0x1a]);
    }
    uVar6 = 0;
    if (*(uint *)(lVar1 + 4) != 0) {
      do {
        if ((*(byte *)(uVar6 + *(int64_t *)(lVar1 + 8)) <= bVar3) &&
           (pbVar8 = pbVar9,
           bVar3 <= *(byte *)((uint64_t)((int)uVar6 + 1) + *(int64_t *)(lVar1 + 8))))
        goto LAB_18062aa0b;
        uVar5 = (int)uVar6 + 2;
        uVar6 = (uint64_t)uVar5;
      } while (uVar5 < *(uint *)(lVar1 + 4));
    }
  }
  if ((*(int64_t *)(param_2 + 0x28) == 0) ||
     (uVar5 = 1,
     (*(byte *)((uint64_t)(bVar2 >> 3) + *(int64_t *)(param_2 + 0x28)) & (byte)(1 << (bVar2 & 7)))
     == 0)) {
    uVar5 = 0;
  }
LAB_18062aaa6:
  if (uVar5 != (*(uint *)(param_2 + 0xc) & 1)) {
    *param_1 = (int64_t)pbVar9;
    return 1;
  }
  return 0;
}



uint64_t FUN_18062a949(uint64_t *param_1,int64_t param_2)

{
  int64_t lVar1;
  byte bVar2;
  byte bVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  int64_t *unaff_R15;
  bool in_ZF;
  int64_t in_stack_00000068;
  
  pbVar12 = (byte *)*param_1;
  bVar2 = *pbVar12;
  if (!in_ZF) {
    bVar2 = _tolower___ctype_D_std__QEBADD_Z(*(uint64_t *)(param_1[0x1a] + 8));
    pbVar12 = (byte *)*unaff_R15;
  }
  puVar7 = *(uint **)(param_2 + 0x20);
  pbVar9 = pbVar12 + 1;
  if (puVar7 != (uint *)0x0) {
    do {
      uVar6 = 0;
      if (puVar7[3] != 0) {
        uVar5 = *puVar7;
        do {
          uVar4 = 0;
          pbVar10 = pbVar12;
          if (uVar5 != 0) {
            do {
              bVar3 = *pbVar10;
              pbVar10 = pbVar10 + 1;
              if (bVar3 != *(byte *)(uVar6 + *(int64_t *)(puVar7 + 4) + uVar4)) break;
              uVar4 = uVar4 + 1;
            } while (uVar4 < uVar5);
          }
          pbVar8 = (byte *)unaff_R15[0x14];
          if (pbVar10 == (byte *)unaff_R15[0x14]) goto LAB_18062a9fe;
          uVar11 = (int)uVar6 + uVar5;
          uVar6 = (uint64_t)uVar11;
        } while (uVar11 < puVar7[3]);
      }
      puVar7 = *(uint **)(puVar7 + 6);
      pbVar8 = pbVar12;
    } while (puVar7 != (uint *)0x0);
LAB_18062a9fe:
    param_2 = in_stack_00000068;
    if (pbVar8 != pbVar12) {
LAB_18062aa0b:
      uVar5 = 1;
      pbVar9 = pbVar8;
      goto LAB_18062aaa6;
    }
  }
  lVar1 = *(int64_t *)(param_2 + 0x38);
  if (lVar1 != 0) {
    bVar3 = bVar2;
    if ((*(uint *)(unaff_R15 + 0x17) & 0x800) != 0) {
      bVar3 = FUN_18047c260(unaff_R15[0x1a]);
    }
    uVar6 = 0;
    if (*(uint *)(lVar1 + 4) != 0) {
      do {
        if ((*(byte *)(uVar6 + *(int64_t *)(lVar1 + 8)) <= bVar3) &&
           (pbVar8 = pbVar9,
           bVar3 <= *(byte *)((uint64_t)((int)uVar6 + 1) + *(int64_t *)(lVar1 + 8))))
        goto LAB_18062aa0b;
        uVar5 = (int)uVar6 + 2;
        uVar6 = (uint64_t)uVar5;
      } while (uVar5 < *(uint *)(lVar1 + 4));
    }
  }
  if ((*(int64_t *)(param_2 + 0x28) == 0) ||
     (uVar5 = 1,
     (*(byte *)((uint64_t)(bVar2 >> 3) + *(int64_t *)(param_2 + 0x28)) & (byte)(1 << (bVar2 & 7)))
     == 0)) {
    uVar5 = 0;
  }
LAB_18062aaa6:
  if (uVar5 != (*(uint *)(param_2 + 0xc) & 1)) {
    *unaff_R15 = (int64_t)pbVar9;
    return 1;
  }
  return 0;
}



int8_t FUN_18062aacf(void)

{
  return 0;
}



uint64_t FUN_18062aaf0(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint uVar5;
  
  uVar4 = 0;
  if (*(uint *)(param_1 + 0xc4) != 0) {
    do {
      lVar1 = (uVar4 >> 5) * 4;
      uVar5 = 1 << ((byte)uVar4 & 0x1f);
      if (((*(uint *)(*(int64_t *)(param_1 + 0x48) + lVar1) & uVar5) != 0) &&
         ((*(uint *)(lVar1 + *(int64_t *)(param_1 + 8)) & uVar5) != 0)) {
        lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x28) + uVar4 * 0x10);
        lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x68) + uVar4 * 0x10);
        if (lVar2 != lVar1) {
          lVar3 = *(int64_t *)(param_1 + 0x98);
          return CONCAT71((int7)((uint64_t)lVar3 >> 8),lVar2 - lVar3 < lVar1 - lVar3);
        }
        lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x68) + 8 + uVar4 * 0x10);
        lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x28) + 8 + uVar4 * 0x10);
        if (lVar1 != lVar2) {
          lVar3 = *(int64_t *)(param_1 + 0x98);
          return CONCAT71((int7)((uint64_t)lVar3 >> 8),lVar1 - lVar3 < lVar2 - lVar3);
        }
      }
      uVar5 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0xc4));
  }
  return uVar4 & 0xffffffffffffff00;
}



char * FUN_18062abc0(char *param_1,char *param_2,char *param_3,char *param_4,int64_t param_5,
                    uint param_6)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar3 = param_1;
  if ((param_6 >> 8 & 1) == 0) {
    if ((param_6 >> 0xb & 1) == 0) {
      if (param_1 != param_2) {
        do {
          bVar5 = param_3 == param_4;
          if (bVar5) goto LAB_18062acc2;
          cVar1 = *param_3;
          param_3 = param_3 + 1;
          cVar2 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          if (cVar2 != cVar1) {
            return param_1;
          }
        } while (pcVar3 != param_2);
      }
      bVar5 = param_3 == param_4;
LAB_18062acc2:
      if (!bVar5) {
        return param_1;
      }
      return pcVar3;
    }
    if (param_1 != param_2) {
      while (bVar5 = param_3 == param_4, !bVar5) {
        cVar1 = *param_3;
        param_3 = param_3 + 1;
        pcVar4 = pcVar3 + 1;
        cVar2 = FUN_18047c260(param_5,*pcVar3);
        cVar1 = FUN_18047c260(param_5,cVar1);
        if (cVar2 != cVar1) {
          return param_1;
        }
        pcVar3 = pcVar4;
        if (pcVar4 == param_2) {
          if (param_3 != param_4) {
            return param_1;
          }
          return pcVar4;
        }
      }
      goto LAB_18062ac3f;
    }
  }
  else if (param_1 != param_2) {
    do {
      bVar5 = param_3 == param_4;
      if (bVar5) goto LAB_18062ac3f;
      cVar1 = *param_3;
      param_3 = param_3 + 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      cVar1 = _tolower___ctype_D_std__QEBADD_Z(*(uint64_t *)(param_5 + 8),cVar1);
      cVar2 = _tolower___ctype_D_std__QEBADD_Z(*(uint64_t *)(param_5 + 8),cVar2);
      if (cVar2 != cVar1) {
        return param_1;
      }
    } while (pcVar3 != param_2);
  }
  bVar5 = param_3 == param_4;
LAB_18062ac3f:
  if (bVar5) {
    param_1 = pcVar3;
  }
  return param_1;
}



uint64_t *
FUN_18062acf0(uint64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  char cVar2;
  int8_t auStackX_10 [8];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  cVar2 = FUN_18047eb30(param_1,param_2[1] - *param_2 >> 4,param_3,param_4,0xfffffffffffffffe);
  if (cVar2 != '\0') {
    uVar1 = *param_1;
    func_0x00018018a000(auStackX_10,*param_2);
                    // WARNING: Subroutine does not return
    memmove(uVar1);
  }
  return param_1;
}



char FUN_18062ad70(int64_t *param_1,int64_t param_2,char param_3)

{
  int64_t *plVar1;
  char cVar2;
  char cVar3;
  int64_t *plVar4;
  int iVar5;
  int64_t lVar6;
  bool bVar7;
  int64_t lStackX_8;
  int64_t lStack_c8;
  int64_t alStack_c0 [3];
  int64_t lStack_a8;
  int64_t alStack_a0 [3];
  int64_t lStack_88;
  int64_t lStack_80;
  uint64_t uStack_78;
  int64_t lStack_68;
  int64_t lStack_60;
  uint64_t uStack_58;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  iVar5 = 0;
  lStack_88 = *param_1;
  plVar4 = param_1 + 1;
  FUN_18047db80(&lStack_80,plVar4);
  lStack_68 = param_1[4];
  plVar1 = param_1 + 5;
  FUN_18062acf0(&lStack_60,plVar1);
  if (0 < *(int *)(param_2 + 0x20)) {
    lVar6 = *param_1;
    do {
      cVar2 = NetworkSystem_ErrorHandler(param_1,*(uint64_t *)(param_2 + 0x10));
      if (cVar2 == '\0') {
        *param_1 = lStack_88;
        if (plVar4 != &lStack_80) {
          FUN_18047ff70(plVar4,lStack_80,uStack_78);
          param_1[4] = lStack_68;
        }
        if (plVar1 != &lStack_60) {
          FUN_18062b040(plVar1,lStack_60,uStack_58);
        }
        cVar2 = '\0';
        goto LAB_18062b002;
      }
      if (lVar6 == *param_1) {
        iVar5 = *(int *)(param_2 + 0x20) + -1;
      }
      iVar5 = iVar5 + 1;
      lVar6 = *param_1;
    } while (iVar5 < *(int *)(param_2 + 0x20));
  }
  lStack_c8 = *param_1;
  FUN_18047db80(alStack_c0,plVar4);
  lStack_a8 = param_1[4];
  FUN_18062acf0(alStack_a0,plVar1);
  cVar2 = '\0';
  lStackX_8 = *param_1;
  cVar3 = NetworkSystem_ErrorHandler(param_1,*(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0x10));
  if (cVar3 != '\0') {
    if (param_3 == '\0') {
LAB_18062afc9:
      cVar2 = '\x01';
      goto LAB_18062afe6;
    }
    lStack_c8 = *param_1;
    if (alStack_c0 != plVar4) {
      FUN_18047ff70(alStack_c0,*plVar4,param_1[2]);
      lStack_a8 = param_1[4];
    }
    if (alStack_a0 != plVar1) {
      FUN_18062b040(alStack_a0,*plVar1,param_1[6]);
    }
    cVar2 = '\x01';
  }
  do {
    if ((*(int *)(param_2 + 0x24) != -1) &&
       (bVar7 = *(int *)(param_2 + 0x24) <= iVar5, iVar5 = iVar5 + 1, bVar7)) break;
    *param_1 = lStackX_8;
    if (plVar4 != &lStack_80) {
      FUN_18047ff70(plVar4,lStack_80,uStack_78);
      param_1[4] = lStack_68;
    }
    cVar3 = NetworkSystem_ErrorHandler(param_1,*(uint64_t *)(param_2 + 0x10));
    if (cVar3 == '\0') break;
    lVar6 = *param_1;
    cVar3 = NetworkSystem_ErrorHandler(param_1,*(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0x10));
    if (cVar3 != '\0') {
      if (param_3 == '\0') goto LAB_18062afc9;
      lStack_c8 = *param_1;
      if (alStack_c0 != plVar4) {
        FUN_18047ff70(alStack_c0,*plVar4,param_1[2]);
        lStack_a8 = param_1[4];
      }
      if (alStack_a0 != plVar1) {
        FUN_18062b040(alStack_a0,*plVar1,param_1[6]);
      }
      cVar2 = '\x01';
    }
    bVar7 = lStackX_8 != lVar6;
    lStackX_8 = lVar6;
  } while (bVar7);
  plVar4 = &lStack_c8;
  if (cVar2 == '\0') {
    plVar4 = &lStack_88;
  }
  FUN_18062a3a0(param_1,plVar4);
LAB_18062afe6:
  FUN_18047b1c0(alStack_a0);
  FUN_180257d60(alStack_c0);
LAB_18062b002:
  FUN_18047b1c0(&lStack_60);
  FUN_180257d60(&lStack_80);
  return cVar2;
}





// 函数: void FUN_18062b040(int64_t *param_1,int64_t param_2,int64_t param_3,int8_t param_4)
void FUN_18062b040(int64_t *param_1,int64_t param_2,int64_t param_3,int8_t param_4)

{
  int64_t lVar1;
  code *pcVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int8_t auStackX_20 [8];
  
  lVar1 = *param_1;
  param_3 = param_3 - param_2;
  uVar4 = param_3 >> 4;
  uVar3 = param_1[2] - lVar1 >> 4;
  uVar6 = param_1[1] - lVar1 >> 4;
  auStackX_20[0] = param_4;
  if (uVar4 <= uVar3) {
    if (uVar4 <= uVar6) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,param_2,param_3);
    }
                    // WARNING: Subroutine does not return
    memmove(lVar1,param_2,uVar6 << 4);
  }
  if (0xfffffffffffffff < uVar4) {
    FUN_180189990();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar6 = uVar4;
  if ((uVar3 <= 0xfffffffffffffff - (uVar3 >> 1)) && (uVar6 = (uVar3 >> 1) + uVar3, uVar6 < uVar4))
  {
    uVar6 = uVar4;
  }
  if (lVar1 != 0) {
    lVar5 = lVar1;
    if (0xfff < uVar3 * 0x10) {
      lVar5 = *(int64_t *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar5) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar5,uVar3 * 0x10 + 0x27);
      }
    }
    free(lVar5);
  }
  FUN_18047eb30(param_1,uVar6);
  lVar1 = *param_1;
  func_0x00018018a000(auStackX_20);
                    // WARNING: Subroutine does not return
  memmove(lVar1,param_2,param_3);
}





// 函数: void FUN_18062b1a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18062b1a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))(param_1 + 0x10,0,0,param_4,0xfffffffffffffffe);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



