#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part043.c - 10 个函数

// 函数: void FUN_1805a35c3(longlong param_1)
void FUN_1805a35c3(longlong param_1)

{
  *(int32_t *)(param_1 + 0x88) = 0xf149f2ca;
  *(int32_t *)(param_1 + 200) = 0xf149f2ca;
  *(int8_t *)(param_1 + 0xd8) = 0xff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1805a35f0(longlong param_1)

{
  ushort *puVar1;
  ulonglong uVar2;
  int iVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int32_t uVar9;
  longlong lVar10;
  uint64_t uVar11;
  int8_t auStackX_8 [8];
  int iStack_48;
  int32_t uStack_38;
  int iStack_34;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int8_t uStack_c;
  
  iVar3 = *(int *)(param_1 + 0x298);
  if ((iVar3 < 0) ||
     (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x8f8), *(char *)(lVar6 + 0xa24) != -1)
     ) goto LAB_1805a38ae;
  lVar6 = *(longlong *)(lVar6 + 0x9e8);
  if ((((lVar6 != 0) &&
       ((lVar8 = *(longlong *)(lVar6 + 0xd0),
        (*(uint *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + lVar8) >> 8 & 1) == 0 ||
        (0 < *(short *)(lVar6 + 10))))) &&
      ((*(int *)(param_1 + 0x1d4) == 0 || (*(int *)(param_1 + 0x1d4) == 7)))) &&
     (iVar3 < (int)((*(longlong *)(lVar6 + 0xd8) - lVar8) / 0xa0))) {
    if ((*(byte *)((longlong)*(int *)((longlong)iVar3 * 0xa0 + 100 + lVar8) * 0x170 + 0x140 +
                  system_system_config) & 0x10) != 0) {
      cVar4 = FUN_1805a3b20(param_1,auStackX_8);
      if (cVar4 == '\0') goto LAB_1805a38a4;
    }
    if (*(int *)(lVar6 + 0xf0) != *(int *)(param_1 + 0x298)) {
      iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x8f8) + 0x9e0);
      uStack_28 = 0;
      uStack_14 = 0x3ecccccd;
      uStack_10 = 0x1000000;
      uStack_24 = 0;
      uStack_20 = 0x3f800000;
      uStack_1c = 0xbe4ccccd;
      uStack_18 = 0xbe4ccccd;
      uStack_c = 0;
      uStack_38 = 1;
      iStack_34 = -1;
      uStack_30 = 0x200c;
      FUN_18051ec50(*(longlong *)(param_1 + 0x108),&uStack_38);
      if (((*(byte *)((longlong)
                      *(int *)((longlong)*(int *)(param_1 + 0x298) * 0xa0 + 100 +
                              *(longlong *)(lVar6 + 0xd0)) * 0x170 + 0x140 + system_system_config) & 0x10)
           == 0) &&
         (lVar6 = (longlong)
                  *(int *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 100 +
                          *(longlong *)(lVar6 + 0xd0)) * 0x170,
         (*(byte *)(lVar6 + 0x140 + system_system_config) & 0x10) == 0)) {
        lVar8 = *(longlong *)(param_1 + 0x108);
        lVar10 = system_system_config;
        cVar4 = func_0x000180525320();
        if (cVar4 == '\0') {
          iVar7 = *(int *)(lVar6 + 0x138 + lVar10);
        }
        else {
          iVar7 = *(int *)(lVar6 + 0x13c + lVar10);
        }
      }
      else {
        lVar8 = *(longlong *)(param_1 + 0x108);
        iVar7 = -1;
      }
      FUN_180536bf0(*(uint64_t *)(lVar8 + 0x8f8),iVar7,iVar3);
      if (iVar7 != -1) {
        uStack_30 = 0;
        iStack_34 = iVar7;
        FUN_18051ec50(*(uint64_t *)(param_1 + 0x108),&uStack_38);
      }
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x8f8);
      if ((*(byte *)(*(longlong *)((longlong)iVar3 * 0x1f8 + 0xd8 + lVar6) + 0x50 +
                    (longlong)*(int *)(param_1 + 0x298) * 0xa0) >> 4 & 1) == 0) {
        if (*(int *)(lVar6 + 0x9e4) < 0) {
          uVar9 = *(int32_t *)(lVar6 + 0xa20);
          uVar11 = 0;
          goto LAB_1805a3889;
        }
      }
      else if (-1 < *(int *)(lVar6 + 0x9e4)) {
        uVar11 = 3;
        uVar9 = 0xffffffff;
LAB_1805a3889:
        FUN_18050b440(*(longlong *)(param_1 + 0x108),1,uVar9,uVar11,0);
      }
      FUN_18050c1c0(*(uint64_t *)(param_1 + 0x108));
    }
  }
LAB_1805a38a4:
  *(int32_t *)(param_1 + 0x298) = 0xffffffff;
LAB_1805a38ae:
  uVar5 = *(ulonglong *)(param_1 + 0x108);
  lVar6 = *(longlong *)(uVar5 + 0x8f8);
  uVar2 = *(ulonglong *)(lVar6 + 0xa08);
  if ((*(int *)(lVar6 + 0xa10) == -1) ||
     ((iStack_48 = (int)uVar2, iStack_48 != -1 &&
      (uVar5 = *(ulonglong *)(uVar5 + 0x590), *(int *)(uVar5 + 0x2498) == iStack_48)))) {
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    lVar8 = (longlong)(int)(uVar2 >> 0x20) * 0x1f8;
    iVar3 = *(int *)((longlong)*(int *)(lVar8 + 0xf8 + lVar6) * 0xa0 + 100 +
                    *(longlong *)(lVar8 + 0xd8 + lVar6));
    FUN_180537bd0(lVar6,uVar2 >> 0x20,*(int *)(lVar6 + 0xa10),auStackX_8);
    iVar7 = *(int *)((longlong)*(int *)(lVar8 + 0xf8 + lVar6) * 0xa0 + 100 +
                    *(longlong *)(lVar8 + 0xd8 + lVar6));
    if (iVar7 != iVar3) {
      if ((((*(char *)((longlong)iVar7 * 0x170 + 0x134 + system_system_config) != '\0') &&
           ((*(uint *)(*(longlong *)(param_1 + 0x108) + 0x56c) & 0x800) != 0)) &&
          (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x590), lVar6 != 0)) &&
         (*(char *)(lVar6 + 0x34bc) != '\0')) {
        *(int8_t *)(lVar6 + 0x34bc) = 0;
      }
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x108) + 0x570);
      if (iVar3 == 2) {
        FUN_1804f41b0(*(uint64_t *)(param_1 + 0x100));
      }
      else if (iVar3 == 1) {
        puVar1 = (ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x6e0) + 0x130);
        *puVar1 = *puVar1 | 0x20;
      }
    }
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x8f8);
    uVar5 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x108) >> 8),1);
    *(uint64_t *)(lVar6 + 0xa08) = 0xffffffffffffffff;
    *(int32_t *)(lVar6 + 0xa10) = 0xffffffff;
  }
  return uVar5;
}






// 函数: void FUN_1805a3a20(longlong param_1)
void FUN_1805a3a20(longlong param_1)

{
  *(int32_t *)(param_1 + 0x88) = 0xf149f2ca;
  *(int32_t *)(param_1 + 200) = 0xf149f2ca;
  *(int8_t *)(param_1 + 0xd8) = 0xff;
  func_0x0001805b0bf0(param_1 + 0x110,*(uint64_t *)(param_1 + 0x108));
  *(uint64_t *)(param_1 + 0xe0) =
       *(uint64_t *)(&system_error_code + (longlong)*(int *)(param_1 + 0xe8) * 8);
  *(uint64_t *)(param_1 + 0xf0) =
       *(uint64_t *)(&system_error_code + (longlong)*(int *)(param_1 + 0xf8) * 8);
  *(uint64_t *)(param_1 + 600) = 0;
  *(uint64_t *)(param_1 + 0x268) = 0;
  *(uint64_t *)(param_1 + 0x260) = 0;
  *(uint64_t *)(param_1 + 0x270) = 0;
  *(int32_t *)(param_1 + 0x27c) = 0xffffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1805a3ab0(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  float extraout_XMM0_Da;
  
  fVar2 = system_system_config;
  if (*(int *)(*(longlong *)(param_1 + 0x108) + 0x568) == 1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 0x590);
    if (((int)plVar1[0x493] != -1) &&
       (*(int *)((longlong)(int)plVar1[0x493] * 0x68 + 0x58 + system_system_config) == 0x20)) {
      (**(code **)(*plVar1 + 0xa0))(plVar1,1);
      if (fVar2 < extraout_XMM0_Da) {
        return 1;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_1805a3af1(void)

{
  float fVar1;
  int8_t in_AL;
  uint8_t in_register_00000001;
  float fVar2;
  
  fVar1 = system_system_config;
  fVar2 = (float)(**(code **)(CONCAT71(in_register_00000001,in_AL) + 0xa0))();
  if (fVar1 < fVar2) {
    return 1;
  }
  return 0;
}



int8_t FUN_1805a3b0e(void)

{
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1805a3b20(longlong param_1,int8_t *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x108);
  uVar5 = (ulonglong)*(int *)(lVar2 + 0x564);
  if (-1 < *(int *)(lVar2 + 0x564)) {
    lVar6 = uVar5 * 0xa60;
    uVar5 = *(ulonglong *)(param_1 + 0x100);
    *param_2 = 0;
    lVar6 = *(longlong *)(lVar6 + 0x3630 + uVar5);
    if (((lVar6 != 0) && ((*(uint *)(lVar2 + 0x4c8) & 0x7fc0) == 0)) &&
       ((iVar1 = *(int *)(lVar6 + 0x2450), iVar1 == -1 ||
        ((*(int *)((longlong)iVar1 * 0x68 + 0x58 + system_system_config) < 0x18 ||
         (uVar5 = (longlong)iVar1 * 0x68, 0x1b < *(int *)(uVar5 + 0x58 + system_system_config))))))) {
      cVar3 = FUN_1805a3ab0(param_1);
      fVar7 = system_system_config;
      if (cVar3 != '\0') {
        fVar7 = system_system_config * 0.85;
      }
      uVar5 = *(ulonglong *)(param_1 + 0x108);
      if (fVar7 < *(float *)(*(longlong *)(uVar5 + 0x20) + 0x20)) goto LAB_1805a3bdf;
    }
    return uVar5 & 0xffffffffffffff00;
  }
  if (((*(uint *)(lVar2 + 0x4c8) & 0x7fc0) == 0) && ((*(uint *)(lVar2 + 0x4c4) & 0xa008) == 0)) {
    iVar1 = *(int *)(*(longlong *)(lVar2 + 0x590) + 0x2450);
    if (((((iVar1 == -1) ||
          ((*(int *)((longlong)iVar1 * 0x68 + 0x58 + system_system_config) < 0x18 ||
           (uVar5 = (longlong)iVar1 * 0x68, 0x1b < *(int *)(uVar5 + 0x58 + system_system_config))))) &&
         (uVar5 = *(ulonglong *)(lVar2 + 0x20), (*(byte *)(uVar5 + 0x40) & 1) != 0)) &&
        ((*(int *)(param_1 + 0x28c) == 0 &&
         ((*(byte *)(*(longlong *)(lVar2 + 0x590) + 0x3424) & 0x10) == 0)))) &&
       ((((*(uint *)(lVar2 + 0x4c8) & 0xf) == 0 &&
         ((*(float *)(lVar2 + 0x4d0) == 0.0 && (*(float *)(lVar2 + 0x4cc) == 0.0)))) ||
        (uVar4 = *(uint *)(uVar5 + 8) >> 2, uVar5 = (ulonglong)uVar4, (uVar4 & 1) != 0)))) {
      *param_2 = 0;
LAB_1805a3bdf:
      return CONCAT71((int7)(uVar5 >> 8),1);
    }
  }
  *param_2 = 0;
  return uVar5 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805a3c90(longlong param_1,longlong param_2)
void FUN_1805a3c90(longlong param_1,longlong param_2)

{
  int8_t uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  uint64_t uStack_a8;
  int32_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int16_t uStack_68;
  int8_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  uint64_t uStack_54;
  uint64_t uStack_4c;
  uint64_t uStack_44;
  uint64_t uStack_3c;
  int iStack_34;
  uint64_t uStack_30;
  int8_t uStack_28;
  uint64_t uStack_24;
  int32_t uStack_1c;
  uint64_t uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  lVar10 = *(longlong *)(param_1 + 0x108);
  piVar9 = (int *)0x0;
  if ((*(uint *)(lVar10 + 0x56c) >> 0xb & 1) == 0) {
    piVar9 = (int *)0x0;
    iStack_34 = *(int *)(*(longlong *)(lVar10 + 0x598) + 0x184);
  }
  else {
    if (((*(int *)(param_1 + 0x1d4) == 7) && ((*(uint *)(lVar10 + 0x4c8) & 0x7c00) != 0)) &&
       ((*(uint *)(lVar10 + 0x56c) >> 0xe & 1) != 0)) {
      lVar8 = *(longlong *)(*(longlong *)(lVar10 + 0x8f8) + 0x9f0);
      if (lVar8 == 0) {
        piVar4 = *(int **)(param_1 + 0x290);
      }
      else {
        lVar8 = (longlong)
                *(int *)((longlong)*(int *)(lVar8 + 0xf0) * 0xa0 + 100 + *(longlong *)(lVar8 + 0xd0)
                        ) * 0x170 + system_system_config;
        uVar1 = func_0x000180525320(lVar10);
        piVar4 = (int *)func_0x00018054fc00(lVar8,uVar1);
        *(int **)(param_1 + 0x290) = piVar4;
      }
      if (piVar4 == (int *)0x0) {
        lVar8 = *(longlong *)(*(longlong *)(lVar10 + 0x8f8) + 0x9e8);
        if (lVar8 != 0) {
          lVar8 = (longlong)
                  *(int *)((longlong)*(int *)(lVar8 + 0xf0) * 0xa0 + 100 +
                          *(longlong *)(lVar8 + 0xd0)) * 0x170 + system_system_config;
          uVar1 = func_0x000180525320(lVar10);
          piVar4 = (int *)func_0x00018054fc00(lVar8,uVar1);
          *(int **)(param_1 + 0x290) = piVar4;
          if (piVar4 != (int *)0x0) goto LAB_1805a3dba;
        }
      }
      else {
LAB_1805a3dba:
        iStack_34 = *piVar4;
        if (iStack_34 != -1) {
          piVar9 = (int *)0x1;
          goto LAB_1805a3e5f;
        }
      }
    }
    if ((((*(uint *)(lVar10 + 0x56c) & 0x800) == 0) || (*(longlong *)(lVar10 + 0x590) == 0)) ||
       (*(char *)(*(longlong *)(lVar10 + 0x590) + 0x34bc) == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    piVar4 = piVar9;
    if (0 < *(int *)(system_system_config + 0x70)) {
      pcVar5 = (char *)(*(longlong *)(system_system_config + 0x68) + 0x10);
      piVar6 = piVar9;
      piVar7 = piVar9;
      do {
        if (*pcVar5 == cVar2) {
          piVar4 = (int *)(*(longlong *)(system_system_config + 0x68) + (longlong)(int)piVar7 * 0x14);
          break;
        }
        piVar7 = (int *)(ulonglong)((int)piVar7 + 1);
        piVar6 = (int *)((longlong)piVar6 + 1);
        pcVar5 = pcVar5 + 0x14;
      } while ((longlong)piVar6 < (longlong)*(int *)(system_system_config + 0x70));
    }
    *(int **)(param_1 + 0x290) = piVar4;
    if (piVar4 == (int *)0x0) goto LAB_1805a3f53;
    iStack_34 = *piVar4;
  }
LAB_1805a3e5f:
  if (iStack_34 != -1) {
    uStack_60 = 0;
    uStack_a8 = 0xffffffffffffffff;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_7c = 0x3f800000;
    uStack_78 = 0xbe4ccccd;
    uStack_74 = 0xbe4ccccd;
    uStack_70 = 0x3ecccccd;
    uStack_6c = 0;
    uStack_68 = 0x100;
    uStack_5c = 0x10;
    uStack_58 = 0xffffffff;
    uStack_54 = 0;
    uStack_4c = 0;
    uStack_44 = 0;
    uStack_3c = 0;
    uStack_30 = 0xffffffffffffffff;
    uStack_28 = 0xff;
    uStack_24 = 0;
    uStack_1c = 0x3f800000;
    cVar2 = FUN_1805a4a20(param_1,piVar9,&uStack_a8,0);
    if (cVar2 != '\0') {
      *(int32_t *)(param_1 + 0x28c) = 1;
      cVar2 = func_0x0001805241e0(*(uint64_t *)(param_1 + 0x108));
      if (cVar2 == '\0') {
        return;
      }
      iVar3 = _Mtx_lock(param_2 + 8);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      FUN_180524260(*(uint64_t *)(param_1 + 0x108));
      iVar3 = _Mtx_unlock(param_2 + 8);
      if (iVar3 == 0) {
        return;
      }
      __Throw_C_error_std__YAXH_Z(iVar3);
      return;
    }
  }
LAB_1805a3f53:
  *(uint64_t *)(param_1 + 0x290) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805a3f80(longlong param_1,int param_2,int8_t param_3,longlong param_4)
void FUN_1805a3f80(longlong param_1,int param_2,int8_t param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int32_t uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x590) + 0x2450 +
                  (longlong)param_2 * 0x48);
  if (iVar5 == -1) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((longlong)iVar5 * 0x68 + 0x58 + system_system_config);
  }
  uVar4 = 0xffffffff;
  if (iVar5 == 0x1f) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x8f8);
    lVar3 = *(longlong *)(lVar2 + 0x9f0);
    if (lVar3 != 0) {
      lVar6 = (longlong)*(int *)(lVar3 + 0xf0) * 0xa0;
      if (((*(uint *)(lVar6 + 0x50 + *(longlong *)(lVar3 + 0xd0)) >> 0x1c & 1) != 0) &&
         (-1 < *(int *)(lVar6 + 100 + *(longlong *)(lVar3 + 0xd0)))) {
        uVar4 = *(int32_t *)(lVar2 + 0x9e4);
        goto LAB_1805a4045;
      }
    }
    lVar3 = *(longlong *)(lVar2 + 0x9e8);
    uVar4 = *(int32_t *)(lVar2 + 0x9e0);
  }
  else {
    lVar3 = FUN_1805346e0();
  }
LAB_1805a4045:
  if (*(float *)(param_1 + 0x44) <= 0.0) {
    param_3 = 2;
  }
  if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x30))) {
    lVar2 = (longlong)*(int *)(lVar3 + 0xf0) * 0xa0;
    if (((*(uint *)(lVar2 + 0x50 + *(longlong *)(lVar3 + 0xd0)) >> 9 & 1) == 0) ||
       (0 < *(short *)(lVar3 + 8))) {
      if ((*(longlong *)(param_1 + 600) == 0) ||
         ((*(uint *)(lVar2 + 0x58 + *(longlong *)(lVar3 + 0xd0)) & 0x80000) != 0)) {
        lVar3 = *(longlong *)(param_1 + 0x108);
        uVar1 = 1;
      }
      else {
        uVar1 = *(uint *)(*(longlong *)(param_1 + 600) + 0x104);
        lVar3 = *(longlong *)(param_1 + 0x108);
      }
      goto LAB_1805a40f5;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x108);
  if (lVar3 == 0) {
    uVar1 = 1;
    lVar3 = 0;
  }
  else {
    uVar1 = (uint)(1 < *(int *)(param_1 + 0x48) - 2U);
  }
LAB_1805a40f5:
  *(longlong *)(param_4 + 0x20) = lVar3;
  *(int32_t *)(param_4 + 0x28) = uVar4;
  *(int32_t *)(param_4 + 0x2c) = 0x3f800000;
  *(int32_t *)(param_4 + 0x30) = 0x3f000000;
  *(uint *)(param_4 + 0x34) = (iVar5 == 0x1f) + 1;
  *(uint *)(param_4 + 0x38) = uVar1;
  *(int *)(param_4 + 0x3c) = param_2;
  *(int8_t *)(param_4 + 0x40) = 0;
  *(int8_t *)(param_4 + 0x41) = param_3;
  *(int32_t *)(param_4 + 0x44) = 2;
  *(int8_t *)(param_4 + 0x48) = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fd200(*(uint64_t *)(param_1 + 0x100),param_1,param_4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805a4160(longlong param_1,int param_2,int param_3,uint param_4)
void FUN_1805a4160(longlong param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int32_t uStack_78;
  int32_t uStack_74;
  uint64_t uStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int8_t uStack_4c;
  int32_t uStack_48;
  int iStack_44;
  uint64_t uStack_40;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int8_t uStack_1c;
  
  iVar3 = -1;
  lVar5 = (longlong)param_2 * 0x1f8 + *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x8f8);
  uStack_68 = 0;
  uStack_50 = 0x1000000;
  uStack_64 = 0;
  uStack_60 = 0x3f800000;
  uStack_5c = 0xbe4ccccd;
  uStack_58 = 0xbe4ccccd;
  uStack_54 = 0x3ecccccd;
  uStack_4c = 0;
  uStack_78 = 1;
  uStack_74 = 0xffffffff;
  uStack_70 = 0x200c;
  FUN_18051ec50(*(longlong *)(param_1 + 0x108),&uStack_78);
  lVar2 = *(longlong *)(lVar5 + 0xd8);
  uVar4 = 0x800;
  if (((*(byte *)((longlong)*(int *)((longlong)param_3 * 0xa0 + 100 + lVar2) * 0x170 + 0x140 +
                 system_system_config) & 0x10) == 0) &&
     (lVar2 = (longlong)*(int *)((longlong)*(int *)(lVar5 + 0xf8) * 0xa0 + 100 + lVar2) * 0x170,
     (*(byte *)(lVar2 + 0x140 + system_system_config) & 0x10) == 0)) {
    lVar5 = *(longlong *)(param_1 + 0x108);
    if ((((*(uint *)(lVar5 + 0x56c) & 0x800) == 0) || (*(longlong *)(lVar5 + 0x590) == 0)) ||
       (*(char *)(*(longlong *)(lVar5 + 0x590) + 0x34bc) == '\0')) {
      iVar3 = *(int *)(lVar2 + 0x138 + system_system_config);
    }
    else {
      iVar3 = *(int *)(lVar2 + 0x13c + system_system_config);
    }
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x108);
  }
  iVar1 = *(int *)(*(longlong *)(lVar5 + 0x590) + 0x2498);
  if ((iVar1 != -1) && (*(int *)((longlong)iVar1 * 0x68 + 0x58 + system_system_config) == 0x20)) {
    if (param_4 < 4) {
      if (param_4 == 0) {
        *(uint *)(lVar5 + 0x4c8) = *(uint *)(lVar5 + 0x4c8) | 0x100;
      }
      else if (param_4 == 1) {
        *(uint *)(lVar5 + 0x4c8) = *(uint *)(lVar5 + 0x4c8) | 0x200;
      }
      else if (param_4 == 2) {
        *(uint *)(lVar5 + 0x4c8) = *(uint *)(lVar5 + 0x4c8) | 0x40;
      }
      else if (param_4 == 3) {
        *(uint *)(lVar5 + 0x4c8) = *(uint *)(lVar5 + 0x4c8) | 0x80;
      }
      else {
        *(int32_t *)(lVar5 + 0x4c8) = *(int32_t *)(lVar5 + 0x4c8);
      }
    }
    else if (param_4 - 4 < 5) {
      if (param_4 == 4) {
        uVar4 = 0x1000;
      }
      else if (param_4 == 5) {
        uVar4 = 0x2000;
      }
      else if (param_4 == 6) {
        uVar4 = 0x400;
      }
      else if (param_4 != 7) {
        uVar4 = 0;
      }
      *(uint *)(lVar5 + 0x4c8) = *(uint *)(lVar5 + 0x4c8) | uVar4;
    }
  }
  FUN_180536bf0(*(uint64_t *)(*(longlong *)(param_1 + 0x108) + 0x8f8),iVar3,param_2,param_3);
  if (iVar3 != -1) {
    uStack_34 = 0;
    uStack_30 = 0x3f800000;
    uStack_2c = 0xbe4ccccd;
    uStack_28 = 0xbe4ccccd;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_20 = 0x1000000;
    uStack_24 = 0x3ecccccd;
    uStack_1c = 0;
    uStack_48 = 1;
    iStack_44 = iVar3;
    FUN_18051ec50(*(uint64_t *)(param_1 + 0x108),&uStack_48);
  }
  return;
}






// 函数: void FUN_1805a43d0(longlong param_1)
void FUN_1805a43d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if ((*(uint *)(*(longlong *)(param_1 + 0x108) + 0x56c) & 0x800) == 0) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x1c8);
  if ((((*(uint *)(lVar3 + 0x56c) & 0x800) != 0) &&
      ((*(byte *)(*(longlong *)(lVar3 + 0x590) + 0x3424) & 0x10) != 0)) ||
     (-1 < *(int *)(lVar3 + 0x564))) {
    *(int32_t *)(param_1 + 0x1e0) = 0xffffffff;
    return;
  }
  piVar4 = (int *)FUN_1805a0610(lVar3 + 0x28,3);
  iVar6 = -1;
  bVar8 = false;
  if (piVar4 != (int *)0x0) {
    iVar6 = *piVar4;
    bVar8 = iVar6 == 3;
  }
  iVar1 = *(int *)(param_1 + 0x1e0);
  iVar7 = 3;
  if ((bVar8) ||
     (piVar5 = (int *)FUN_1805a0610(*(longlong *)(param_1 + 0x1c8) + 0x28,7), piVar5 == (int *)0x0))
  {
LAB_1805a44c4:
    iVar7 = iVar1;
    if ((piVar4 != (int *)0x0) && (iVar7 = iVar6, iVar6 == 9)) {
      iVar7 = 3;
    }
  }
  else {
    iVar2 = *piVar5;
    if (iVar2 != 7) {
      if (piVar4 != (int *)0x0) goto LAB_1805a44c4;
      if (iVar2 == 8) goto LAB_1805a44d2;
    }
    iVar7 = iVar2 + -4;
  }
LAB_1805a44d2:
  *(int *)(param_1 + 0x1e0) = iVar7;
  if (iVar7 != -1) {
    func_0x0001805b2480(param_1 + 0x110);
  }
  return;
}






// 函数: void FUN_1805a43eb(longlong param_1)
void FUN_1805a43eb(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x1c8);
  if ((((*(uint *)(lVar3 + 0x56c) & 0x800) != 0) &&
      ((*(byte *)(*(longlong *)(lVar3 + 0x590) + 0x3424) & 0x10) != 0)) ||
     (-1 < *(int *)(lVar3 + 0x564))) {
    *(int32_t *)(param_1 + 0x1e0) = 0xffffffff;
    return;
  }
  piVar4 = (int *)FUN_1805a0610(lVar3 + 0x28,3);
  iVar6 = -1;
  bVar8 = false;
  if (piVar4 != (int *)0x0) {
    iVar6 = *piVar4;
    bVar8 = iVar6 == 3;
  }
  iVar1 = *(int *)(param_1 + 0x1e0);
  iVar7 = 3;
  if ((bVar8) ||
     (piVar5 = (int *)FUN_1805a0610(*(longlong *)(param_1 + 0x1c8) + 0x28,7), piVar5 == (int *)0x0))
  {
LAB_1805a44c4:
    iVar7 = iVar1;
    if ((piVar4 != (int *)0x0) && (iVar7 = iVar6, iVar6 == 9)) {
      iVar7 = 3;
    }
  }
  else {
    iVar2 = *piVar5;
    if (iVar2 != 7) {
      if (piVar4 != (int *)0x0) goto LAB_1805a44c4;
      if (iVar2 == 8) goto LAB_1805a44d2;
    }
    iVar7 = iVar2 + -4;
  }
LAB_1805a44d2:
  *(int *)(param_1 + 0x1e0) = iVar7;
  if (iVar7 != -1) {
    func_0x0001805b2480(param_1 + 0x110);
  }
  return;
}






// 函数: void FUN_1805a4442(longlong param_1)
void FUN_1805a4442(longlong param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  longlong unaff_RSI;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  piVar3 = (int *)FUN_1805a0610(param_1 + 0x28,3);
  iVar5 = -1;
  bVar7 = false;
  if (piVar3 != (int *)0x0) {
    iVar5 = *piVar3;
    bVar7 = iVar5 == 3;
  }
  iVar1 = *(int *)(unaff_RSI + 0xd0);
  iVar6 = 3;
  if ((bVar7) ||
     (piVar4 = (int *)FUN_1805a0610(*(longlong *)(unaff_RSI + 0xb8) + 0x28,7), piVar4 == (int *)0x0)
     ) {
LAB_1805a44c4:
    iVar6 = iVar1;
    if ((piVar3 != (int *)0x0) && (iVar6 = iVar5, iVar5 == 9)) {
      iVar6 = 3;
    }
  }
  else {
    iVar2 = *piVar4;
    if (iVar2 != 7) {
      if (piVar3 != (int *)0x0) goto LAB_1805a44c4;
      if (iVar2 == 8) goto LAB_1805a44d2;
    }
    iVar6 = iVar2 + -4;
  }
LAB_1805a44d2:
  *(int *)(unaff_RSI + 0xd0) = iVar6;
  if (iVar6 != -1) {
    func_0x0001805b2480();
  }
  return;
}






// 函数: void FUN_1805a44f1(void)
void FUN_1805a44f1(void)

{
  func_0x0001805b2480();
  return;
}






// 函数: void FUN_1805a4503(void)
void FUN_1805a4503(void)

{
  return;
}



float FUN_1805a4510(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  int8_t auStack_28 [32];
  
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x8f8) + 0x9e8);
  if (lVar2 != 0) {
    fVar1 = *(float *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x88 + *(longlong *)(lVar2 + 0xd0))
    ;
    lVar3 = FUN_18058d2b0(*(uint64_t *)(*(longlong *)(param_1 + 0x108) + 0x590),auStack_28);
    return fVar1 * *(float *)(lVar2 + 0x48) + *(float *)(lVar3 + 8);
  }
  return 0.0;
}



float FUN_1805a453e(int32_t param_1)

{
  float fVar1;
  longlong in_RAX;
  longlong lVar2;
  longlong unaff_RBX;
  int8_t auStackX_20 [8];
  
  fVar1 = *(float *)(in_RAX * 0xa0 + 0x88 + *(longlong *)(unaff_RBX + 0xd0));
  lVar2 = FUN_18058d2b0(param_1,auStackX_20);
  return fVar1 * *(float *)(unaff_RBX + 0x48) + *(float *)(lVar2 + 8);
}



uint64_t FUN_1805a457d(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1805a4590(longlong param_1,int *param_2)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint64_t uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulonglong uStackX_10;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  int32_t uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  int iStack_5c;
  
  iVar9 = *param_2;
  if (iVar9 == 0) {
    uVar8 = param_2[1];
    register0x00000020 = (BADSPACEBASE *)(ulonglong)uVar8;
    if (*(uint *)(param_1 + 0x27c) == uVar8) {
LAB_1805a49ef:
      return (ulonglong)register0x00000020 & 0xffffffffffffff00;
    }
    *(uint *)(param_1 + 0x27c) = uVar8;
    if (uVar8 != 0xffffffff) {
      uVar3 = uVar8 - 4;
      if (4 < uVar8 - 4) {
        uVar3 = uVar8;
      }
      uVar7 = FUN_1805a0610(param_1,uVar3);
      *(uint64_t *)(param_1 + 0x268) = uVar7;
    }
  }
  else if (iVar9 == 1) {
    cVar1 = *(char *)((longlong)param_2 + 0x29);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1c8) + 0x590);
    if (((int)plVar2[0x493] != -1) &&
       (*(int *)((longlong)(int)plVar2[0x493] * 0x68 + 0x58 + system_system_config) == 0x14)) {
      lVar10 = (**(code **)(*plVar2 + 0x128))(plVar2,1);
      if (plVar2[0x495] == 0) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = *(float *)((longlong)plVar2 + 0x24cc);
        if (fVar12 < 0.0) {
          fVar12 = *(float *)(plVar2[0x495] + 0x1e8);
        }
      }
      fVar14 = (*(float *)(lVar10 + 0x188) - fVar12) / *(float *)(lVar10 + 0x188);
      fVar12 = (float)(**(code **)(*plVar2 + 0x90))(plVar2,1);
      if (0.0 < fVar14 - fVar12) {
        fVar11 = (float)(**(code **)(*plVar2 + 0x80))(plVar2,1);
        fVar12 = system_system_config;
        lVar6 = 0x6c;
        if (cVar1 != '\0') {
          lVar6 = 0x70;
        }
        fVar13 = (1.0 - *(float *)(&system_data_6380 + lVar6)) * fVar11;
        (**(code **)(*plVar2 + 0x88))(plVar2,1,*(float *)(&system_data_6380 + lVar6) * fVar11);
        if ((plVar2[0x495] != 0) &&
           (((plVar2[0x497] | *(ulonglong *)(plVar2[0x495] + 0x1d0)) & 0x4000000000) == 0)) {
          *(float *)((longlong)plVar2 + 0x24cc) =
               (1.0 - (fVar14 - (fVar13 / fVar12) * fVar13 * 0.5)) * *(float *)(lVar10 + 0x188);
        }
      }
    }
  }
  else if (iVar9 == 2) {
    fStack_68 = (float)param_2[6];
    fStack_64 = (float)param_2[7];
    fStack_60 = (float)param_2[8];
    iStack_5c = param_2[9];
    FUN_180512b80(*(uint64_t *)(param_1 + 0x108),param_2 + 2,&fStack_68);
  }
  else {
    if (((iVar9 != 3) ||
        (((fVar12 = (float)param_2[6], fVar12 == 0.0 && ((float)param_2[7] == 0.0)) &&
         ((float)param_2[8] == 0.0)))) || ((char)param_2[10] < '\0')) goto LAB_1805a49ef;
    iStack_5c = 0x7f7fffff;
    lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x6d8) + 0x8a8);
    fStack_70 = *(float *)(lVar10 + 0x98) * (float)param_2[8];
    fStack_60 = *(float *)(lVar10 + 0x98) * (float)param_2[4] + *(float *)(lVar10 + 0xa8);
    fStack_78 = fVar12 * *(float *)(lVar10 + 0x70) + *(float *)(lVar10 + 0x80) * (float)param_2[7];
    fStack_68 = *(float *)(lVar10 + 0x70) * (float)param_2[2] +
                *(float *)(lVar10 + 0x80) * (float)param_2[3] + *(float *)(lVar10 + 0xa0);
    fStack_74 = fVar12 * *(float *)(lVar10 + 0x74) + *(float *)(lVar10 + 0x84) * (float)param_2[7];
    fStack_64 = *(float *)(lVar10 + 0x74) * (float)param_2[2] +
                *(float *)(lVar10 + 0x84) * (float)param_2[3] + *(float *)(lVar10 + 0xa4);
    uStack_6c = 0x7f7fffff;
    FUN_1805131d0(*(longlong *)(param_1 + 0x108),&fStack_68,&fStack_78,(char)param_2[10],
                  system_system_config);
  }
  if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
    iVar9 = *(int *)(*(longlong *)(param_1 + 0x108) + 0x10) * 0x10;
    FUN_18055d4d0(&system_data_25a0,iVar9 + 0x10);
    lVar10 = ((longlong)iVar9 + 1) * 0xd08 + system_system_config;
    uStackX_10 = (ulonglong)system_system_config;
    *(int *)(lVar10 + 0x130) = *param_2;
    *(int *)(lVar10 + 0x134) = param_2[1];
    uVar7 = *(uint64_t *)(param_2 + 4);
    *(uint64_t *)(lVar10 + 0x138) = *(uint64_t *)(param_2 + 2);
    *(uint64_t *)(lVar10 + 0x140) = uVar7;
    iVar9 = param_2[7];
    iVar4 = param_2[8];
    iVar5 = param_2[9];
    *(int *)(lVar10 + 0x148) = param_2[6];
    *(int *)(lVar10 + 0x14c) = iVar9;
    *(int *)(lVar10 + 0x150) = iVar4;
    *(int *)(lVar10 + 0x154) = iVar5;
    *(char *)(lVar10 + 0x158) = (char)param_2[10];
    *(int8_t *)(lVar10 + 0x159) = *(int8_t *)((longlong)param_2 + 0x29);
    uVar8 = *(int *)(lVar10 + 0x15c) + 1U & 0x8000000f;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
    }
    *(uint *)(lVar10 + 0x15c) = uVar8;
    *(ulonglong *)(lVar10 + 0xd00) = uStackX_10;
    *(uint64_t *)(lVar10 + 0x724) = 0;
                    // WARNING: Subroutine does not return
    memset(*(uint64_t *)(lVar10 + 0x6f8),0,(longlong)(*(int *)(lVar10 + 0x6f0) >> 3));
  }
  return CONCAT71((uint7)(uint3)(system_status_flag - 2U >> 8),1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




